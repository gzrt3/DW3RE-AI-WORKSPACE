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


void FUN_0019b850_part42(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1af8a0u: goto label_1af8a0;
        case 0x1af8a4u: goto label_1af8a4;
        case 0x1af8a8u: goto label_1af8a8;
        case 0x1af8acu: goto label_1af8ac;
        case 0x1af8b0u: goto label_1af8b0;
        case 0x1af8b4u: goto label_1af8b4;
        case 0x1af8b8u: goto label_1af8b8;
        case 0x1af8bcu: goto label_1af8bc;
        case 0x1af8c0u: goto label_1af8c0;
        case 0x1af8c4u: goto label_1af8c4;
        case 0x1af8c8u: goto label_1af8c8;
        case 0x1af8ccu: goto label_1af8cc;
        case 0x1af8d0u: goto label_1af8d0;
        case 0x1af8d4u: goto label_1af8d4;
        case 0x1af8d8u: goto label_1af8d8;
        case 0x1af8dcu: goto label_1af8dc;
        case 0x1af8e0u: goto label_1af8e0;
        case 0x1af8e4u: goto label_1af8e4;
        case 0x1af8e8u: goto label_1af8e8;
        case 0x1af8ecu: goto label_1af8ec;
        case 0x1af8f0u: goto label_1af8f0;
        case 0x1af8f4u: goto label_1af8f4;
        case 0x1af8f8u: goto label_1af8f8;
        case 0x1af8fcu: goto label_1af8fc;
        case 0x1af900u: goto label_1af900;
        case 0x1af904u: goto label_1af904;
        case 0x1af908u: goto label_1af908;
        case 0x1af90cu: goto label_1af90c;
        case 0x1af910u: goto label_1af910;
        case 0x1af914u: goto label_1af914;
        case 0x1af918u: goto label_1af918;
        case 0x1af91cu: goto label_1af91c;
        case 0x1af920u: goto label_1af920;
        case 0x1af924u: goto label_1af924;
        case 0x1af928u: goto label_1af928;
        case 0x1af92cu: goto label_1af92c;
        case 0x1af930u: goto label_1af930;
        case 0x1af934u: goto label_1af934;
        case 0x1af938u: goto label_1af938;
        case 0x1af93cu: goto label_1af93c;
        case 0x1af940u: goto label_1af940;
        case 0x1af944u: goto label_1af944;
        case 0x1af948u: goto label_1af948;
        case 0x1af94cu: goto label_1af94c;
        case 0x1af950u: goto label_1af950;
        case 0x1af954u: goto label_1af954;
        case 0x1af958u: goto label_1af958;
        case 0x1af95cu: goto label_1af95c;
        case 0x1af960u: goto label_1af960;
        case 0x1af964u: goto label_1af964;
        case 0x1af968u: goto label_1af968;
        case 0x1af96cu: goto label_1af96c;
        case 0x1af970u: goto label_1af970;
        case 0x1af974u: goto label_1af974;
        case 0x1af978u: goto label_1af978;
        case 0x1af97cu: goto label_1af97c;
        case 0x1af980u: goto label_1af980;
        case 0x1af984u: goto label_1af984;
        case 0x1af988u: goto label_1af988;
        case 0x1af98cu: goto label_1af98c;
        case 0x1af990u: goto label_1af990;
        case 0x1af994u: goto label_1af994;
        case 0x1af998u: goto label_1af998;
        case 0x1af99cu: goto label_1af99c;
        case 0x1af9a0u: goto label_1af9a0;
        case 0x1af9a4u: goto label_1af9a4;
        case 0x1af9a8u: goto label_1af9a8;
        case 0x1af9acu: goto label_1af9ac;
        case 0x1af9b0u: goto label_1af9b0;
        case 0x1af9b4u: goto label_1af9b4;
        case 0x1af9b8u: goto label_1af9b8;
        case 0x1af9bcu: goto label_1af9bc;
        case 0x1af9c0u: goto label_1af9c0;
        case 0x1af9c4u: goto label_1af9c4;
        case 0x1af9c8u: goto label_1af9c8;
        case 0x1af9ccu: goto label_1af9cc;
        case 0x1af9d0u: goto label_1af9d0;
        case 0x1af9d4u: goto label_1af9d4;
        case 0x1af9d8u: goto label_1af9d8;
        case 0x1af9dcu: goto label_1af9dc;
        case 0x1af9e0u: goto label_1af9e0;
        case 0x1af9e4u: goto label_1af9e4;
        case 0x1af9e8u: goto label_1af9e8;
        case 0x1af9ecu: goto label_1af9ec;
        case 0x1af9f0u: goto label_1af9f0;
        case 0x1af9f4u: goto label_1af9f4;
        case 0x1af9f8u: goto label_1af9f8;
        case 0x1af9fcu: goto label_1af9fc;
        case 0x1afa00u: goto label_1afa00;
        case 0x1afa04u: goto label_1afa04;
        case 0x1afa08u: goto label_1afa08;
        case 0x1afa0cu: goto label_1afa0c;
        case 0x1afa10u: goto label_1afa10;
        case 0x1afa14u: goto label_1afa14;
        case 0x1afa18u: goto label_1afa18;
        case 0x1afa1cu: goto label_1afa1c;
        case 0x1afa20u: goto label_1afa20;
        case 0x1afa24u: goto label_1afa24;
        case 0x1afa28u: goto label_1afa28;
        case 0x1afa2cu: goto label_1afa2c;
        case 0x1afa30u: goto label_1afa30;
        case 0x1afa34u: goto label_1afa34;
        case 0x1afa38u: goto label_1afa38;
        case 0x1afa3cu: goto label_1afa3c;
        case 0x1afa40u: goto label_1afa40;
        case 0x1afa44u: goto label_1afa44;
        case 0x1afa48u: goto label_1afa48;
        case 0x1afa4cu: goto label_1afa4c;
        case 0x1afa50u: goto label_1afa50;
        case 0x1afa54u: goto label_1afa54;
        case 0x1afa58u: goto label_1afa58;
        case 0x1afa5cu: goto label_1afa5c;
        case 0x1afa60u: goto label_1afa60;
        case 0x1afa64u: goto label_1afa64;
        case 0x1afa68u: goto label_1afa68;
        case 0x1afa6cu: goto label_1afa6c;
        case 0x1afa70u: goto label_1afa70;
        case 0x1afa74u: goto label_1afa74;
        case 0x1afa78u: goto label_1afa78;
        case 0x1afa7cu: goto label_1afa7c;
        case 0x1afa80u: goto label_1afa80;
        case 0x1afa84u: goto label_1afa84;
        case 0x1afa88u: goto label_1afa88;
        case 0x1afa8cu: goto label_1afa8c;
        case 0x1afa90u: goto label_1afa90;
        case 0x1afa94u: goto label_1afa94;
        case 0x1afa98u: goto label_1afa98;
        case 0x1afa9cu: goto label_1afa9c;
        case 0x1afaa0u: goto label_1afaa0;
        case 0x1afaa4u: goto label_1afaa4;
        case 0x1afaa8u: goto label_1afaa8;
        case 0x1afaacu: goto label_1afaac;
        case 0x1afab0u: goto label_1afab0;
        case 0x1afab4u: goto label_1afab4;
        case 0x1afab8u: goto label_1afab8;
        case 0x1afabcu: goto label_1afabc;
        case 0x1afac0u: goto label_1afac0;
        case 0x1afac4u: goto label_1afac4;
        case 0x1afac8u: goto label_1afac8;
        case 0x1afaccu: goto label_1afacc;
        case 0x1afad0u: goto label_1afad0;
        case 0x1afad4u: goto label_1afad4;
        case 0x1afad8u: goto label_1afad8;
        case 0x1afadcu: goto label_1afadc;
        case 0x1afae0u: goto label_1afae0;
        case 0x1afae4u: goto label_1afae4;
        case 0x1afae8u: goto label_1afae8;
        case 0x1afaecu: goto label_1afaec;
        case 0x1afaf0u: goto label_1afaf0;
        case 0x1afaf4u: goto label_1afaf4;
        case 0x1afaf8u: goto label_1afaf8;
        case 0x1afafcu: goto label_1afafc;
        case 0x1afb00u: goto label_1afb00;
        case 0x1afb04u: goto label_1afb04;
        case 0x1afb08u: goto label_1afb08;
        case 0x1afb0cu: goto label_1afb0c;
        case 0x1afb10u: goto label_1afb10;
        case 0x1afb14u: goto label_1afb14;
        case 0x1afb18u: goto label_1afb18;
        case 0x1afb1cu: goto label_1afb1c;
        case 0x1afb20u: goto label_1afb20;
        case 0x1afb24u: goto label_1afb24;
        case 0x1afb28u: goto label_1afb28;
        case 0x1afb2cu: goto label_1afb2c;
        case 0x1afb30u: goto label_1afb30;
        case 0x1afb34u: goto label_1afb34;
        case 0x1afb38u: goto label_1afb38;
        case 0x1afb3cu: goto label_1afb3c;
        case 0x1afb40u: goto label_1afb40;
        case 0x1afb44u: goto label_1afb44;
        case 0x1afb48u: goto label_1afb48;
        case 0x1afb4cu: goto label_1afb4c;
        case 0x1afb50u: goto label_1afb50;
        case 0x1afb54u: goto label_1afb54;
        case 0x1afb58u: goto label_1afb58;
        case 0x1afb5cu: goto label_1afb5c;
        case 0x1afb60u: goto label_1afb60;
        case 0x1afb64u: goto label_1afb64;
        case 0x1afb68u: goto label_1afb68;
        case 0x1afb6cu: goto label_1afb6c;
        case 0x1afb70u: goto label_1afb70;
        case 0x1afb74u: goto label_1afb74;
        case 0x1afb78u: goto label_1afb78;
        case 0x1afb7cu: goto label_1afb7c;
        case 0x1afb80u: goto label_1afb80;
        case 0x1afb84u: goto label_1afb84;
        case 0x1afb88u: goto label_1afb88;
        case 0x1afb8cu: goto label_1afb8c;
        case 0x1afb90u: goto label_1afb90;
        case 0x1afb94u: goto label_1afb94;
        case 0x1afb98u: goto label_1afb98;
        case 0x1afb9cu: goto label_1afb9c;
        case 0x1afba0u: goto label_1afba0;
        case 0x1afba4u: goto label_1afba4;
        case 0x1afba8u: goto label_1afba8;
        case 0x1afbacu: goto label_1afbac;
        case 0x1afbb0u: goto label_1afbb0;
        case 0x1afbb4u: goto label_1afbb4;
        case 0x1afbb8u: goto label_1afbb8;
        case 0x1afbbcu: goto label_1afbbc;
        case 0x1afbc0u: goto label_1afbc0;
        case 0x1afbc4u: goto label_1afbc4;
        case 0x1afbc8u: goto label_1afbc8;
        case 0x1afbccu: goto label_1afbcc;
        case 0x1afbd0u: goto label_1afbd0;
        case 0x1afbd4u: goto label_1afbd4;
        case 0x1afbd8u: goto label_1afbd8;
        case 0x1afbdcu: goto label_1afbdc;
        case 0x1afbe0u: goto label_1afbe0;
        case 0x1afbe4u: goto label_1afbe4;
        case 0x1afbe8u: goto label_1afbe8;
        case 0x1afbecu: goto label_1afbec;
        case 0x1afbf0u: goto label_1afbf0;
        case 0x1afbf4u: goto label_1afbf4;
        case 0x1afbf8u: goto label_1afbf8;
        case 0x1afbfcu: goto label_1afbfc;
        case 0x1afc00u: goto label_1afc00;
        case 0x1afc04u: goto label_1afc04;
        case 0x1afc08u: goto label_1afc08;
        case 0x1afc0cu: goto label_1afc0c;
        case 0x1afc10u: goto label_1afc10;
        case 0x1afc14u: goto label_1afc14;
        case 0x1afc18u: goto label_1afc18;
        case 0x1afc1cu: goto label_1afc1c;
        case 0x1afc20u: goto label_1afc20;
        case 0x1afc24u: goto label_1afc24;
        case 0x1afc28u: goto label_1afc28;
        case 0x1afc2cu: goto label_1afc2c;
        case 0x1afc30u: goto label_1afc30;
        case 0x1afc34u: goto label_1afc34;
        case 0x1afc38u: goto label_1afc38;
        case 0x1afc3cu: goto label_1afc3c;
        case 0x1afc40u: goto label_1afc40;
        case 0x1afc44u: goto label_1afc44;
        case 0x1afc48u: goto label_1afc48;
        case 0x1afc4cu: goto label_1afc4c;
        case 0x1afc50u: goto label_1afc50;
        case 0x1afc54u: goto label_1afc54;
        case 0x1afc58u: goto label_1afc58;
        case 0x1afc5cu: goto label_1afc5c;
        case 0x1afc60u: goto label_1afc60;
        case 0x1afc64u: goto label_1afc64;
        case 0x1afc68u: goto label_1afc68;
        case 0x1afc6cu: goto label_1afc6c;
        case 0x1afc70u: goto label_1afc70;
        case 0x1afc74u: goto label_1afc74;
        case 0x1afc78u: goto label_1afc78;
        case 0x1afc7cu: goto label_1afc7c;
        case 0x1afc80u: goto label_1afc80;
        case 0x1afc84u: goto label_1afc84;
        case 0x1afc88u: goto label_1afc88;
        case 0x1afc8cu: goto label_1afc8c;
        case 0x1afc90u: goto label_1afc90;
        case 0x1afc94u: goto label_1afc94;
        case 0x1afc98u: goto label_1afc98;
        case 0x1afc9cu: goto label_1afc9c;
        case 0x1afca0u: goto label_1afca0;
        case 0x1afca4u: goto label_1afca4;
        case 0x1afca8u: goto label_1afca8;
        case 0x1afcacu: goto label_1afcac;
        case 0x1afcb0u: goto label_1afcb0;
        case 0x1afcb4u: goto label_1afcb4;
        case 0x1afcb8u: goto label_1afcb8;
        case 0x1afcbcu: goto label_1afcbc;
        case 0x1afcc0u: goto label_1afcc0;
        case 0x1afcc4u: goto label_1afcc4;
        case 0x1afcc8u: goto label_1afcc8;
        case 0x1afcccu: goto label_1afccc;
        case 0x1afcd0u: goto label_1afcd0;
        case 0x1afcd4u: goto label_1afcd4;
        case 0x1afcd8u: goto label_1afcd8;
        case 0x1afcdcu: goto label_1afcdc;
        case 0x1afce0u: goto label_1afce0;
        case 0x1afce4u: goto label_1afce4;
        case 0x1afce8u: goto label_1afce8;
        case 0x1afcecu: goto label_1afcec;
        case 0x1afcf0u: goto label_1afcf0;
        case 0x1afcf4u: goto label_1afcf4;
        case 0x1afcf8u: goto label_1afcf8;
        case 0x1afcfcu: goto label_1afcfc;
        case 0x1afd00u: goto label_1afd00;
        case 0x1afd04u: goto label_1afd04;
        case 0x1afd08u: goto label_1afd08;
        case 0x1afd0cu: goto label_1afd0c;
        case 0x1afd10u: goto label_1afd10;
        case 0x1afd14u: goto label_1afd14;
        case 0x1afd18u: goto label_1afd18;
        case 0x1afd1cu: goto label_1afd1c;
        case 0x1afd20u: goto label_1afd20;
        case 0x1afd24u: goto label_1afd24;
        case 0x1afd28u: goto label_1afd28;
        case 0x1afd2cu: goto label_1afd2c;
        case 0x1afd30u: goto label_1afd30;
        case 0x1afd34u: goto label_1afd34;
        case 0x1afd38u: goto label_1afd38;
        case 0x1afd3cu: goto label_1afd3c;
        case 0x1afd40u: goto label_1afd40;
        case 0x1afd44u: goto label_1afd44;
        case 0x1afd48u: goto label_1afd48;
        case 0x1afd4cu: goto label_1afd4c;
        case 0x1afd50u: goto label_1afd50;
        case 0x1afd54u: goto label_1afd54;
        case 0x1afd58u: goto label_1afd58;
        case 0x1afd5cu: goto label_1afd5c;
        case 0x1afd60u: goto label_1afd60;
        case 0x1afd64u: goto label_1afd64;
        case 0x1afd68u: goto label_1afd68;
        case 0x1afd6cu: goto label_1afd6c;
        case 0x1afd70u: goto label_1afd70;
        case 0x1afd74u: goto label_1afd74;
        case 0x1afd78u: goto label_1afd78;
        case 0x1afd7cu: goto label_1afd7c;
        case 0x1afd80u: goto label_1afd80;
        case 0x1afd84u: goto label_1afd84;
        case 0x1afd88u: goto label_1afd88;
        case 0x1afd8cu: goto label_1afd8c;
        case 0x1afd90u: goto label_1afd90;
        case 0x1afd94u: goto label_1afd94;
        case 0x1afd98u: goto label_1afd98;
        case 0x1afd9cu: goto label_1afd9c;
        case 0x1afda0u: goto label_1afda0;
        case 0x1afda4u: goto label_1afda4;
        case 0x1afda8u: goto label_1afda8;
        case 0x1afdacu: goto label_1afdac;
        case 0x1afdb0u: goto label_1afdb0;
        case 0x1afdb4u: goto label_1afdb4;
        case 0x1afdb8u: goto label_1afdb8;
        case 0x1afdbcu: goto label_1afdbc;
        case 0x1afdc0u: goto label_1afdc0;
        case 0x1afdc4u: goto label_1afdc4;
        case 0x1afdc8u: goto label_1afdc8;
        case 0x1afdccu: goto label_1afdcc;
        case 0x1afdd0u: goto label_1afdd0;
        case 0x1afdd4u: goto label_1afdd4;
        case 0x1afdd8u: goto label_1afdd8;
        case 0x1afddcu: goto label_1afddc;
        case 0x1afde0u: goto label_1afde0;
        case 0x1afde4u: goto label_1afde4;
        case 0x1afde8u: goto label_1afde8;
        case 0x1afdecu: goto label_1afdec;
        case 0x1afdf0u: goto label_1afdf0;
        case 0x1afdf4u: goto label_1afdf4;
        case 0x1afdf8u: goto label_1afdf8;
        case 0x1afdfcu: goto label_1afdfc;
        case 0x1afe00u: goto label_1afe00;
        case 0x1afe04u: goto label_1afe04;
        case 0x1afe08u: goto label_1afe08;
        case 0x1afe0cu: goto label_1afe0c;
        case 0x1afe10u: goto label_1afe10;
        case 0x1afe14u: goto label_1afe14;
        case 0x1afe18u: goto label_1afe18;
        case 0x1afe1cu: goto label_1afe1c;
        case 0x1afe20u: goto label_1afe20;
        case 0x1afe24u: goto label_1afe24;
        case 0x1afe28u: goto label_1afe28;
        case 0x1afe2cu: goto label_1afe2c;
        case 0x1afe30u: goto label_1afe30;
        case 0x1afe34u: goto label_1afe34;
        case 0x1afe38u: goto label_1afe38;
        case 0x1afe3cu: goto label_1afe3c;
        case 0x1afe40u: goto label_1afe40;
        case 0x1afe44u: goto label_1afe44;
        case 0x1afe48u: goto label_1afe48;
        case 0x1afe4cu: goto label_1afe4c;
        case 0x1afe50u: goto label_1afe50;
        case 0x1afe54u: goto label_1afe54;
        case 0x1afe58u: goto label_1afe58;
        case 0x1afe5cu: goto label_1afe5c;
        case 0x1afe60u: goto label_1afe60;
        case 0x1afe64u: goto label_1afe64;
        case 0x1afe68u: goto label_1afe68;
        case 0x1afe6cu: goto label_1afe6c;
        case 0x1afe70u: goto label_1afe70;
        case 0x1afe74u: goto label_1afe74;
        case 0x1afe78u: goto label_1afe78;
        case 0x1afe7cu: goto label_1afe7c;
        case 0x1afe80u: goto label_1afe80;
        case 0x1afe84u: goto label_1afe84;
        case 0x1afe88u: goto label_1afe88;
        case 0x1afe8cu: goto label_1afe8c;
        case 0x1afe90u: goto label_1afe90;
        case 0x1afe94u: goto label_1afe94;
        case 0x1afe98u: goto label_1afe98;
        case 0x1afe9cu: goto label_1afe9c;
        case 0x1afea0u: goto label_1afea0;
        case 0x1afea4u: goto label_1afea4;
        case 0x1afea8u: goto label_1afea8;
        case 0x1afeacu: goto label_1afeac;
        case 0x1afeb0u: goto label_1afeb0;
        case 0x1afeb4u: goto label_1afeb4;
        case 0x1afeb8u: goto label_1afeb8;
        case 0x1afebcu: goto label_1afebc;
        case 0x1afec0u: goto label_1afec0;
        case 0x1afec4u: goto label_1afec4;
        case 0x1afec8u: goto label_1afec8;
        case 0x1afeccu: goto label_1afecc;
        case 0x1afed0u: goto label_1afed0;
        case 0x1afed4u: goto label_1afed4;
        case 0x1afed8u: goto label_1afed8;
        case 0x1afedcu: goto label_1afedc;
        case 0x1afee0u: goto label_1afee0;
        case 0x1afee4u: goto label_1afee4;
        case 0x1afee8u: goto label_1afee8;
        case 0x1afeecu: goto label_1afeec;
        case 0x1afef0u: goto label_1afef0;
        case 0x1afef4u: goto label_1afef4;
        case 0x1afef8u: goto label_1afef8;
        case 0x1afefcu: goto label_1afefc;
        case 0x1aff00u: goto label_1aff00;
        case 0x1aff04u: goto label_1aff04;
        case 0x1aff08u: goto label_1aff08;
        case 0x1aff0cu: goto label_1aff0c;
        case 0x1aff10u: goto label_1aff10;
        case 0x1aff14u: goto label_1aff14;
        case 0x1aff18u: goto label_1aff18;
        case 0x1aff1cu: goto label_1aff1c;
        case 0x1aff20u: goto label_1aff20;
        case 0x1aff24u: goto label_1aff24;
        case 0x1aff28u: goto label_1aff28;
        case 0x1aff2cu: goto label_1aff2c;
        case 0x1aff30u: goto label_1aff30;
        case 0x1aff34u: goto label_1aff34;
        case 0x1aff38u: goto label_1aff38;
        case 0x1aff3cu: goto label_1aff3c;
        case 0x1aff40u: goto label_1aff40;
        case 0x1aff44u: goto label_1aff44;
        case 0x1aff48u: goto label_1aff48;
        case 0x1aff4cu: goto label_1aff4c;
        case 0x1aff50u: goto label_1aff50;
        case 0x1aff54u: goto label_1aff54;
        case 0x1aff58u: goto label_1aff58;
        case 0x1aff5cu: goto label_1aff5c;
        case 0x1aff60u: goto label_1aff60;
        case 0x1aff64u: goto label_1aff64;
        case 0x1aff68u: goto label_1aff68;
        case 0x1aff6cu: goto label_1aff6c;
        case 0x1aff70u: goto label_1aff70;
        case 0x1aff74u: goto label_1aff74;
        case 0x1aff78u: goto label_1aff78;
        case 0x1aff7cu: goto label_1aff7c;
        case 0x1aff80u: goto label_1aff80;
        case 0x1aff84u: goto label_1aff84;
        case 0x1aff88u: goto label_1aff88;
        case 0x1aff8cu: goto label_1aff8c;
        case 0x1aff90u: goto label_1aff90;
        case 0x1aff94u: goto label_1aff94;
        case 0x1aff98u: goto label_1aff98;
        case 0x1aff9cu: goto label_1aff9c;
        case 0x1affa0u: goto label_1affa0;
        case 0x1affa4u: goto label_1affa4;
        case 0x1affa8u: goto label_1affa8;
        case 0x1affacu: goto label_1affac;
        case 0x1affb0u: goto label_1affb0;
        case 0x1affb4u: goto label_1affb4;
        case 0x1affb8u: goto label_1affb8;
        case 0x1affbcu: goto label_1affbc;
        case 0x1affc0u: goto label_1affc0;
        case 0x1affc4u: goto label_1affc4;
        case 0x1affc8u: goto label_1affc8;
        case 0x1affccu: goto label_1affcc;
        case 0x1affd0u: goto label_1affd0;
        case 0x1affd4u: goto label_1affd4;
        case 0x1affd8u: goto label_1affd8;
        case 0x1affdcu: goto label_1affdc;
        case 0x1affe0u: goto label_1affe0;
        case 0x1affe4u: goto label_1affe4;
        case 0x1affe8u: goto label_1affe8;
        case 0x1affecu: goto label_1affec;
        case 0x1afff0u: goto label_1afff0;
        case 0x1afff4u: goto label_1afff4;
        case 0x1afff8u: goto label_1afff8;
        case 0x1afffcu: goto label_1afffc;
        case 0x1b0000u: goto label_1b0000;
        case 0x1b0004u: goto label_1b0004;
        case 0x1b0008u: goto label_1b0008;
        case 0x1b000cu: goto label_1b000c;
        case 0x1b0010u: goto label_1b0010;
        case 0x1b0014u: goto label_1b0014;
        case 0x1b0018u: goto label_1b0018;
        case 0x1b001cu: goto label_1b001c;
        case 0x1b0020u: goto label_1b0020;
        case 0x1b0024u: goto label_1b0024;
        case 0x1b0028u: goto label_1b0028;
        case 0x1b002cu: goto label_1b002c;
        case 0x1b0030u: goto label_1b0030;
        case 0x1b0034u: goto label_1b0034;
        case 0x1b0038u: goto label_1b0038;
        case 0x1b003cu: goto label_1b003c;
        case 0x1b0040u: goto label_1b0040;
        case 0x1b0044u: goto label_1b0044;
        case 0x1b0048u: goto label_1b0048;
        case 0x1b004cu: goto label_1b004c;
        case 0x1b0050u: goto label_1b0050;
        case 0x1b0054u: goto label_1b0054;
        case 0x1b0058u: goto label_1b0058;
        case 0x1b005cu: goto label_1b005c;
        case 0x1b0060u: goto label_1b0060;
        case 0x1b0064u: goto label_1b0064;
        case 0x1b0068u: goto label_1b0068;
        case 0x1b006cu: goto label_1b006c;
        default: return;
    }

label_1af8a0:
    // 0x1af8a0: 0xb264000f  sdl         $a0, 0xF($s3)
    ctx->pc = 0x1af8a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1af8a4:
    // 0x1af8a4: 0xb6640008  sdr         $a0, 0x8($s3)
    ctx->pc = 0x1af8a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1af8a8:
    // 0x1af8a8: 0xb2650017  sdl         $a1, 0x17($s3)
    ctx->pc = 0x1af8a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1af8ac:
    // 0x1af8ac: 0xb6650010  sdr         $a1, 0x10($s3)
    ctx->pc = 0x1af8acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1af8b0:
    // 0x1af8b0: 0xb266001f  sdl         $a2, 0x1F($s3)
    ctx->pc = 0x1af8b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1af8b4:
    // 0x1af8b4: 0xb6660018  sdr         $a2, 0x18($s3)
    ctx->pc = 0x1af8b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1af8b8:
    // 0x1af8b8: 0x88430023  lwl         $v1, 0x23($v0)
    ctx->pc = 0x1af8b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_1af8bc:
    // 0x1af8bc: 0x98430020  lwr         $v1, 0x20($v0)
    ctx->pc = 0x1af8bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_1af8c0:
    // 0x1af8c0: 0xaa630023  swl         $v1, 0x23($s3)
    ctx->pc = 0x1af8c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_1af8c4:
    // 0x1af8c4: 0xba630020  swr         $v1, 0x20($s3)
    ctx->pc = 0x1af8c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_1af8c8:
    // 0x1af8c8: 0x8e837290  lw          $v1, 0x7290($s4)
    ctx->pc = 0x1af8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 29328)));
label_1af8cc:
    // 0x1af8cc: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
label_1af8d0:
    if (ctx->pc == 0x1AF8D0u) {
        ctx->pc = 0x1AF8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF8CCu;
        // 0x1af8d0: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF8D4u;
        goto label_1af8d4;
    }
    ctx->pc = 0x1AF8CCu;
    {
        const bool branch_taken_0x1af8cc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1AF8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF8CCu;
        // 0x1af8d0: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af8cc) {
            ctx->pc = 0x1AF910u;
            goto label_1af910;
        }
    }
    ctx->pc = 0x1AF8D4u;
label_1af8d4:
    // 0x1af8d4: 0x26650008  addiu       $a1, $s3, 0x8
    ctx->pc = 0x1af8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1af8d8:
    // 0x1af8d8: 0xc069a30  jal         func_1A68C0
label_1af8dc:
    if (ctx->pc == 0x1AF8DCu) {
        ctx->pc = 0x1AF8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF8D8u;
        // 0x1af8dc: 0x2484a9b0  addiu       $a0, $a0, -0x5650 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF8E0u;
        goto label_1af8e0;
    }
    ctx->pc = 0x1AF8D8u;
    SET_GPR_U32(ctx, 31, 0x1AF8E0u);
    ctx->pc = 0x1AF8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF8D8u;
    // 0x1af8dc: 0x2484a9b0  addiu       $a0, $a0, -0x5650 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    { ctx->pc = 0x1a68c0; return; }
    ctx->pc = 0x1AF8E0u;
label_1af8e0:
    // 0x1af8e0: 0x8e827290  lw          $v0, 0x7290($s4)
    ctx->pc = 0x1af8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 29328)));
label_1af8e4:
    // 0x1af8e4: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
label_1af8e8:
    if (ctx->pc == 0x1AF8E8u) {
        ctx->pc = 0x1AF8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF8E4u;
        // 0x1af8e8: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF8ECu;
        goto label_1af8ec;
    }
    ctx->pc = 0x1AF8E4u;
    {
        const bool branch_taken_0x1af8e4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1AF8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF8E4u;
        // 0x1af8e8: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af8e4) {
            ctx->pc = 0x1AF910u;
            goto label_1af910;
        }
    }
    ctx->pc = 0x1AF8ECu;
label_1af8ec:
    // 0x1af8ec: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1af8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1af8f0:
    // 0x1af8f0: 0xc069a30  jal         func_1A68C0
label_1af8f4:
    if (ctx->pc == 0x1AF8F4u) {
        ctx->pc = 0x1AF8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF8F0u;
        // 0x1af8f4: 0x2484a9c0  addiu       $a0, $a0, -0x5640 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF8F8u;
        goto label_1af8f8;
    }
    ctx->pc = 0x1AF8F0u;
    SET_GPR_U32(ctx, 31, 0x1AF8F8u);
    ctx->pc = 0x1AF8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF8F0u;
    // 0x1af8f4: 0x2484a9c0  addiu       $a0, $a0, -0x5640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    { ctx->pc = 0x1a68c0; return; }
    ctx->pc = 0x1AF8F8u;
label_1af8f8:
    // 0x1af8f8: 0x8e827290  lw          $v0, 0x7290($s4)
    ctx->pc = 0x1af8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 29328)));
label_1af8fc:
    // 0x1af8fc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_1af900:
    if (ctx->pc == 0x1AF900u) {
        ctx->pc = 0x1AF900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF8FCu;
        // 0x1af900: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF904u;
        goto label_1af904;
    }
    ctx->pc = 0x1AF8FCu;
    {
        const bool branch_taken_0x1af8fc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1AF900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF8FCu;
        // 0x1af900: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af8fc) {
            ctx->pc = 0x1AF910u;
            goto label_1af910;
        }
    }
    ctx->pc = 0x1AF904u;
label_1af904:
    // 0x1af904: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1af904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1af908:
    // 0x1af908: 0xc069a30  jal         func_1A68C0
label_1af90c:
    if (ctx->pc == 0x1AF90Cu) {
        ctx->pc = 0x1AF90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF908u;
        // 0x1af90c: 0x2484a9d0  addiu       $a0, $a0, -0x5630 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF910u;
        goto label_1af910;
    }
    ctx->pc = 0x1AF908u;
    SET_GPR_U32(ctx, 31, 0x1AF910u);
    ctx->pc = 0x1AF90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF908u;
    // 0x1af90c: 0x2484a9d0  addiu       $a0, $a0, -0x5630 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    { ctx->pc = 0x1a68c0; return; }
    ctx->pc = 0x1AF910u;
label_1af910:
    // 0x1af910: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1af910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_1af914:
    // 0x1af914: 0x27c26100  addiu       $v0, $fp, 0x6100
    ctx->pc = 0x1af914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 24832));
label_1af918:
    // 0x1af918: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1af918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1af91c:
    // 0x1af91c: 0x8ec472a8  lw          $a0, 0x72A8($s6)
    ctx->pc = 0x1af91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29352)));
label_1af920:
    // 0x1af920: 0xc069210  jal         func_1A4840
label_1af924:
    if (ctx->pc == 0x1AF924u) {
        ctx->pc = 0x1AF924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF920u;
        // 0x1af924: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF928u;
        goto label_1af928;
    }
    ctx->pc = 0x1AF920u;
    SET_GPR_U32(ctx, 31, 0x1AF928u);
    ctx->pc = 0x1AF924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF920u;
    // 0x1af924: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1AF928u;
label_1af928:
    // 0x1af928: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1af928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1af92c:
    // 0x1af92c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1af92cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1af930:
    // 0x1af930: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x1af930u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1af934:
    // 0x1af934: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x1af934u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1af938:
    // 0x1af938: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x1af938u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1af93c:
    // 0x1af93c: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x1af93cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1af940:
    // 0x1af940: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1af940u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1af944:
    // 0x1af944: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1af944u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1af948:
    // 0x1af948: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1af948u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1af94c:
    // 0x1af94c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1af94cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1af950:
    // 0x1af950: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1af950u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1af954:
    // 0x1af954: 0x3e00008  jr          $ra
label_1af958:
    if (ctx->pc == 0x1AF958u) {
        ctx->pc = 0x1AF958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF954u;
        // 0x1af958: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF95Cu;
        goto label_1af95c;
    }
    ctx->pc = 0x1AF954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF954u;
        // 0x1af958: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF95Cu;
label_1af95c:
    // 0x1af95c: 0x0  nop
    ctx->pc = 0x1af95cu;
    // NOP
label_1af960:
    // 0x1af960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1af960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1af964:
    // 0x1af964: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1af964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1af968:
    // 0x1af968: 0xc06bd92  jal         func_1AF648
label_1af96c:
    if (ctx->pc == 0x1AF96Cu) {
        ctx->pc = 0x1AF96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF968u;
        // 0x1af96c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF970u;
        goto label_1af970;
    }
    ctx->pc = 0x1AF968u;
    SET_GPR_U32(ctx, 31, 0x1AF970u);
    ctx->pc = 0x1AF96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF968u;
    // 0x1af96c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF648u;
    { ctx->pc = 0x1af648; return; }
    ctx->pc = 0x1AF970u;
label_1af970:
    // 0x1af970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1af970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1af974:
    // 0x1af974: 0x3e00008  jr          $ra
label_1af978:
    if (ctx->pc == 0x1AF978u) {
        ctx->pc = 0x1AF978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF974u;
        // 0x1af978: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF97Cu;
        goto label_1af97c;
    }
    ctx->pc = 0x1AF974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF974u;
        // 0x1af978: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF97Cu;
label_1af97c:
    // 0x1af97c: 0x0  nop
    ctx->pc = 0x1af97cu;
    // NOP
label_1af980:
    // 0x1af980: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1af980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1af984:
    // 0x1af984: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1af984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1af988:
    // 0x1af988: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1af988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1af98c:
    // 0x1af98c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1af98cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1af990:
    // 0x1af990: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1af990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1af994:
    // 0x1af994: 0x3c100028  lui         $s0, 0x28
    ctx->pc = 0x1af994u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
label_1af998:
    // 0x1af998: 0xc06bcfa  jal         func_1AF3E8
label_1af99c:
    if (ctx->pc == 0x1AF99Cu) {
        ctx->pc = 0x1AF99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF998u;
        // 0x1af99c: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF9A0u;
        goto label_1af9a0;
    }
    ctx->pc = 0x1AF998u;
    SET_GPR_U32(ctx, 31, 0x1AF9A0u);
    ctx->pc = 0x1AF99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF998u;
    // 0x1af99c: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF3E8u;
    { ctx->pc = 0x1af3e8; return; }
    ctx->pc = 0x1AF9A0u;
label_1af9a0:
    // 0x1af9a0: 0x8e0472a8  lw          $a0, 0x72A8($s0)
    ctx->pc = 0x1af9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29352)));
label_1af9a4:
    // 0x1af9a4: 0xc06921c  jal         func_1A4870
label_1af9a8:
    if (ctx->pc == 0x1AF9A8u) {
        ctx->pc = 0x1AF9ACu;
        goto label_1af9ac;
    }
    ctx->pc = 0x1AF9A4u;
    SET_GPR_U32(ctx, 31, 0x1AF9ACu);
    ctx->pc = 0x1A4870u;
    { ctx->pc = 0x1a4870; return; }
    ctx->pc = 0x1AF9ACu;
label_1af9ac:
    // 0x1af9ac: 0x8e0372a8  lw          $v1, 0x72A8($s0)
    ctx->pc = 0x1af9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29352)));
label_1af9b0:
    // 0x1af9b0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_1af9b4:
    if (ctx->pc == 0x1AF9B4u) {
        ctx->pc = 0x1AF9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF9B0u;
        // 0x1af9b4: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF9B8u;
        goto label_1af9b8;
    }
    ctx->pc = 0x1AF9B0u;
    {
        const bool branch_taken_0x1af9b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AF9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF9B0u;
        // 0x1af9b4: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af9b0) {
            ctx->pc = 0x1AF9E0u;
            goto label_1af9e0;
        }
    }
    ctx->pc = 0x1AF9B8u;
label_1af9b8:
    // 0x1af9b8: 0x8c437290  lw          $v1, 0x7290($v0)
    ctx->pc = 0x1af9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29328)));
label_1af9bc:
    // 0x1af9bc: 0x18600016  blez        $v1, . + 4 + (0x16 << 2)
label_1af9c0:
    if (ctx->pc == 0x1AF9C0u) {
        ctx->pc = 0x1AF9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF9BCu;
        // 0x1af9c0: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF9C4u;
        goto label_1af9c4;
    }
    ctx->pc = 0x1AF9BCu;
    {
        const bool branch_taken_0x1af9bc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1AF9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF9BCu;
        // 0x1af9c0: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af9bc) {
            ctx->pc = 0x1AFA18u;
            goto label_1afa18;
        }
    }
    ctx->pc = 0x1AF9C4u;
label_1af9c4:
    // 0x1af9c4: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1af9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1af9c8:
    // 0x1af9c8: 0x8c46729c  lw          $a2, 0x729C($v0)
    ctx->pc = 0x1af9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29340)));
label_1af9cc:
    // 0x1af9cc: 0x2484a9e8  addiu       $a0, $a0, -0x5618
    ctx->pc = 0x1af9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945256));
label_1af9d0:
    // 0x1af9d0: 0xc069a30  jal         func_1A68C0
label_1af9d4:
    if (ctx->pc == 0x1AF9D4u) {
        ctx->pc = 0x1AF9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF9D0u;
        // 0x1af9d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF9D8u;
        goto label_1af9d8;
    }
    ctx->pc = 0x1AF9D0u;
    SET_GPR_U32(ctx, 31, 0x1AF9D8u);
    ctx->pc = 0x1AF9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF9D0u;
    // 0x1af9d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    { ctx->pc = 0x1a68c0; return; }
    ctx->pc = 0x1AF9D8u;
label_1af9d8:
    // 0x1af9d8: 0x1000003f  b           . + 4 + (0x3F << 2)
label_1af9dc:
    if (ctx->pc == 0x1AF9DCu) {
        ctx->pc = 0x1AF9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF9D8u;
        // 0x1af9dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF9E0u;
        goto label_1af9e0;
    }
    ctx->pc = 0x1AF9D8u;
    {
        const bool branch_taken_0x1af9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF9D8u;
        // 0x1af9dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af9d8) {
            ctx->pc = 0x1AFAD8u;
            goto label_1afad8;
        }
    }
    ctx->pc = 0x1AF9E0u;
label_1af9e0:
    // 0x1af9e0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1af9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1af9e4:
    // 0x1af9e4: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1af9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1af9e8:
    // 0x1af9e8: 0x8c445f50  lw          $a0, 0x5F50($v0)
    ctx->pc = 0x1af9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24400)));
label_1af9ec:
    // 0x1af9ec: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1af9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1af9f0:
    // 0x1af9f0: 0xac71729c  sw          $s1, 0x729C($v1)
    ctx->pc = 0x1af9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 29340), GPR_U32(ctx, 17));
label_1af9f4:
    // 0x1af9f4: 0xc0691c8  jal         func_1A4720
label_1af9f8:
    if (ctx->pc == 0x1AF9F8u) {
        ctx->pc = 0x1AF9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF9F4u;
        // 0x1af9f8: 0x24a55f58  addiu       $a1, $a1, 0x5F58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF9FCu;
        goto label_1af9fc;
    }
    ctx->pc = 0x1AF9F4u;
    SET_GPR_U32(ctx, 31, 0x1AF9FCu);
    ctx->pc = 0x1AF9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF9F4u;
    // 0x1af9f8: 0x24a55f58  addiu       $a1, $a1, 0x5F58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4720u;
    { ctx->pc = 0x1a4720; return; }
    ctx->pc = 0x1AF9FCu;
label_1af9fc:
    // 0x1af9fc: 0xc06bee2  jal         func_1AFB88
label_1afa00:
    if (ctx->pc == 0x1AFA00u) {
        ctx->pc = 0x1AFA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF9FCu;
        // 0x1afa00: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFA04u;
        goto label_1afa04;
    }
    ctx->pc = 0x1AF9FCu;
    SET_GPR_U32(ctx, 31, 0x1AFA04u);
    ctx->pc = 0x1AFA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF9FCu;
    // 0x1afa00: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB88u;
    goto label_1afb88;
    ctx->pc = 0x1AFA04u;
label_1afa04:
    // 0x1afa04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1afa08:
    if (ctx->pc == 0x1AFA08u) {
        ctx->pc = 0x1AFA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA04u;
        // 0x1afa08: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFA0Cu;
        goto label_1afa0c;
    }
    ctx->pc = 0x1AFA04u;
    {
        const bool branch_taken_0x1afa04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA04u;
        // 0x1afa08: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afa04) {
            ctx->pc = 0x1AFA20u;
            goto label_1afa20;
        }
    }
    ctx->pc = 0x1AFA0Cu;
label_1afa0c:
    // 0x1afa0c: 0x8e0472a8  lw          $a0, 0x72A8($s0)
    ctx->pc = 0x1afa0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29352)));
label_1afa10:
    // 0x1afa10: 0xc069210  jal         func_1A4840
label_1afa14:
    if (ctx->pc == 0x1AFA14u) {
        ctx->pc = 0x1AFA18u;
        goto label_1afa18;
    }
    ctx->pc = 0x1AFA10u;
    SET_GPR_U32(ctx, 31, 0x1AFA18u);
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1AFA18u;
label_1afa18:
    // 0x1afa18: 0x1000002f  b           . + 4 + (0x2F << 2)
label_1afa1c:
    if (ctx->pc == 0x1AFA1Cu) {
        ctx->pc = 0x1AFA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA18u;
        // 0x1afa1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFA20u;
        goto label_1afa20;
    }
    ctx->pc = 0x1AFA18u;
    {
        const bool branch_taken_0x1afa18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA18u;
        // 0x1afa1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afa18) {
            ctx->pc = 0x1AFAD8u;
            goto label_1afad8;
        }
    }
    ctx->pc = 0x1AFA20u;
label_1afa20:
    // 0x1afa20: 0xc069c1a  jal         func_1A7068
label_1afa24:
    if (ctx->pc == 0x1AFA24u) {
        ctx->pc = 0x1AFA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA20u;
        // 0x1afa24: 0x3c120028  lui         $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFA28u;
        goto label_1afa28;
    }
    ctx->pc = 0x1AFA20u;
    SET_GPR_U32(ctx, 31, 0x1AFA28u);
    ctx->pc = 0x1AFA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFA20u;
    // 0x1afa24: 0x3c120028  lui         $s2, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)40 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7068u;
    { ctx->pc = 0x1a7068; return; }
    ctx->pc = 0x1AFA28u;
label_1afa28:
    // 0x1afa28: 0x8e4272b8  lw          $v0, 0x72B8($s2)
    ctx->pc = 0x1afa28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 29368)));
label_1afa2c:
    // 0x1afa2c: 0x441002a  bgez        $v0, . + 4 + (0x2A << 2)
label_1afa30:
    if (ctx->pc == 0x1AFA30u) {
        ctx->pc = 0x1AFA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA2Cu;
        // 0x1afa30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFA34u;
        goto label_1afa34;
    }
    ctx->pc = 0x1AFA2Cu;
    {
        const bool branch_taken_0x1afa2c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AFA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA2Cu;
        // 0x1afa30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afa2c) {
            ctx->pc = 0x1AFAD8u;
            goto label_1afad8;
        }
    }
    ctx->pc = 0x1AFA34u;
label_1afa34:
    // 0x1afa34: 0x1000000b  b           . + 4 + (0xB << 2)
label_1afa38:
    if (ctx->pc == 0x1AFA38u) {
        ctx->pc = 0x1AFA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA34u;
        // 0x1afa38: 0x3c110029  lui         $s1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFA3Cu;
        goto label_1afa3c;
    }
    ctx->pc = 0x1AFA34u;
    {
        const bool branch_taken_0x1afa34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA34u;
        // 0x1afa38: 0x3c110029  lui         $s1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afa34) {
            ctx->pc = 0x1AFA64u;
            goto label_1afa64;
        }
    }
    ctx->pc = 0x1AFA3Cu;
label_1afa3c:
    // 0x1afa3c: 0x0  nop
    ctx->pc = 0x1afa3cu;
    // NOP
label_1afa40:
    // 0x1afa40: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1afa40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_1afa44:
    // 0x1afa44: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1afa44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1afa48:
    // 0x1afa48: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1afa48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1afa4c:
    // 0x1afa4c: 0x0  nop
    ctx->pc = 0x1afa4cu;
    // NOP
label_1afa50:
    // 0x1afa50: 0x0  nop
    ctx->pc = 0x1afa50u;
    // NOP
label_1afa54:
    // 0x1afa54: 0x0  nop
    ctx->pc = 0x1afa54u;
    // NOP
label_1afa58:
    // 0x1afa58: 0x0  nop
    ctx->pc = 0x1afa58u;
    // NOP
label_1afa5c:
    // 0x1afa5c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
label_1afa60:
    if (ctx->pc == 0x1AFA60u) {
        ctx->pc = 0x1AFA64u;
        goto label_1afa64;
    }
    ctx->pc = 0x1AFA5Cu;
    {
        const bool branch_taken_0x1afa5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1afa5c) {
            ctx->pc = 0x1AFA48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afa48;
        }
    }
    ctx->pc = 0x1AFA64u;
label_1afa64:
    // 0x1afa64: 0x26308450  addiu       $s0, $s1, -0x7BB0
    ctx->pc = 0x1afa64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294935632));
label_1afa68:
    // 0x1afa68: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1afa68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_1afa6c:
    // 0x1afa6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1afa6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1afa70:
    // 0x1afa70: 0x34a50595  ori         $a1, $a1, 0x595
    ctx->pc = 0x1afa70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1429);
label_1afa74:
    // 0x1afa74: 0xc069db6  jal         func_1A76D8
label_1afa78:
    if (ctx->pc == 0x1AFA78u) {
        ctx->pc = 0x1AFA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA74u;
        // 0x1afa78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFA7Cu;
        goto label_1afa7c;
    }
    ctx->pc = 0x1AFA74u;
    SET_GPR_U32(ctx, 31, 0x1AFA7Cu);
    ctx->pc = 0x1AFA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFA74u;
    // 0x1afa78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A76D8u;
    { ctx->pc = 0x1a76d8; return; }
    ctx->pc = 0x1AFA7Cu;
label_1afa7c:
    // 0x1afa7c: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
label_1afa80:
    if (ctx->pc == 0x1AFA80u) {
        ctx->pc = 0x1AFA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA7Cu;
        // 0x1afa80: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFA84u;
        goto label_1afa84;
    }
    ctx->pc = 0x1AFA7Cu;
    {
        const bool branch_taken_0x1afa7c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1afa7c) {
            ctx->pc = 0x1AFA80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AFA7Cu;
            // 0x1afa80: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AFACCu;
            goto label_1afacc;
        }
    }
    ctx->pc = 0x1AFA84u;
label_1afa84:
    // 0x1afa84: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1afa84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1afa88:
    // 0x1afa88: 0x8c437290  lw          $v1, 0x7290($v0)
    ctx->pc = 0x1afa88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29328)));
label_1afa8c:
    // 0x1afa8c: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
label_1afa90:
    if (ctx->pc == 0x1AFA90u) {
        ctx->pc = 0x1AFA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA8Cu;
        // 0x1afa90: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFA94u;
        goto label_1afa94;
    }
    ctx->pc = 0x1AFA8Cu;
    {
        const bool branch_taken_0x1afa8c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1AFA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA8Cu;
        // 0x1afa90: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afa8c) {
            ctx->pc = 0x1AFAA4u;
            goto label_1afaa4;
        }
    }
    ctx->pc = 0x1AFA94u;
label_1afa94:
    // 0x1afa94: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1afa94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1afa98:
    // 0x1afa98: 0xc069a30  jal         func_1A68C0
label_1afa9c:
    if (ctx->pc == 0x1AFA9Cu) {
        ctx->pc = 0x1AFA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA98u;
        // 0x1afa9c: 0x2484aa10  addiu       $a0, $a0, -0x55F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFAA0u;
        goto label_1afaa0;
    }
    ctx->pc = 0x1AFA98u;
    SET_GPR_U32(ctx, 31, 0x1AFAA0u);
    ctx->pc = 0x1AFA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFA98u;
    // 0x1afa9c: 0x2484aa10  addiu       $a0, $a0, -0x55F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    { ctx->pc = 0x1a68c0; return; }
    ctx->pc = 0x1AFAA0u;
label_1afaa0:
    // 0x1afaa0: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1afaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_1afaa4:
    // 0x1afaa4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1afaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1afaa8:
    // 0x1afaa8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1afaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1afaac:
    // 0x1afaac: 0x0  nop
    ctx->pc = 0x1afaacu;
    // NOP
label_1afab0:
    // 0x1afab0: 0x0  nop
    ctx->pc = 0x1afab0u;
    // NOP
label_1afab4:
    // 0x1afab4: 0x0  nop
    ctx->pc = 0x1afab4u;
    // NOP
label_1afab8:
    // 0x1afab8: 0x0  nop
    ctx->pc = 0x1afab8u;
    // NOP
label_1afabc:
    // 0x1afabc: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
label_1afac0:
    if (ctx->pc == 0x1AFAC0u) {
        ctx->pc = 0x1AFAC4u;
        goto label_1afac4;
    }
    ctx->pc = 0x1AFABCu;
    {
        const bool branch_taken_0x1afabc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1afabc) {
            ctx->pc = 0x1AFAA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afaa8;
        }
    }
    ctx->pc = 0x1AFAC4u;
label_1afac4:
    // 0x1afac4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_1afac8:
    if (ctx->pc == 0x1AFAC8u) {
        ctx->pc = 0x1AFAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFAC4u;
        // 0x1afac8: 0x26308450  addiu       $s0, $s1, -0x7BB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294935632));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFACCu;
        goto label_1afacc;
    }
    ctx->pc = 0x1AFAC4u;
    {
        const bool branch_taken_0x1afac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFAC4u;
        // 0x1afac8: 0x26308450  addiu       $s0, $s1, -0x7BB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294935632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afac4) {
            ctx->pc = 0x1AFA68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afa68;
        }
    }
    ctx->pc = 0x1AFACCu;
label_1afacc:
    // 0x1afacc: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
label_1afad0:
    if (ctx->pc == 0x1AFAD0u) {
        ctx->pc = 0x1AFAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFACCu;
        // 0x1afad0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFAD4u;
        goto label_1afad4;
    }
    ctx->pc = 0x1AFACCu;
    {
        const bool branch_taken_0x1afacc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFACCu;
        // 0x1afad0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afacc) {
            ctx->pc = 0x1AFA40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afa40;
        }
    }
    ctx->pc = 0x1AFAD4u;
label_1afad4:
    // 0x1afad4: 0xae4072b8  sw          $zero, 0x72B8($s2)
    ctx->pc = 0x1afad4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 29368), GPR_U32(ctx, 0));
label_1afad8:
    // 0x1afad8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1afad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1afadc:
    // 0x1afadc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1afadcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1afae0:
    // 0x1afae0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1afae0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1afae4:
    // 0x1afae4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1afae4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1afae8:
    // 0x1afae8: 0x3e00008  jr          $ra
label_1afaec:
    if (ctx->pc == 0x1AFAECu) {
        ctx->pc = 0x1AFAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFAE8u;
        // 0x1afaec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFAF0u;
        goto label_1afaf0;
    }
    ctx->pc = 0x1AFAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFAE8u;
        // 0x1afaec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFAE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AFAF0u;
label_1afaf0:
    // 0x1afaf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1afaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1afaf4:
    // 0x1afaf4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1afaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1afaf8:
    // 0x1afaf8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1afaf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1afafc:
    // 0x1afafc: 0xc06be60  jal         func_1AF980
label_1afb00:
    if (ctx->pc == 0x1AFB00u) {
        ctx->pc = 0x1AFB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFAFCu;
        // 0x1afb00: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFB04u;
        goto label_1afb04;
    }
    ctx->pc = 0x1AFAFCu;
    SET_GPR_U32(ctx, 31, 0x1AFB04u);
    ctx->pc = 0x1AFB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFAFCu;
    // 0x1afb00: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF980u;
    goto label_1af980;
    ctx->pc = 0x1AFB04u;
label_1afb04:
    // 0x1afb04: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1afb08:
    if (ctx->pc == 0x1AFB08u) {
        ctx->pc = 0x1AFB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFB04u;
        // 0x1afb08: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFB0Cu;
        goto label_1afb0c;
    }
    ctx->pc = 0x1AFB04u;
    {
        const bool branch_taken_0x1afb04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AFB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFB04u;
        // 0x1afb08: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afb04) {
            ctx->pc = 0x1AFB14u;
            goto label_1afb14;
        }
    }
    ctx->pc = 0x1AFB0Cu;
label_1afb0c:
    // 0x1afb0c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1afb10:
    if (ctx->pc == 0x1AFB10u) {
        ctx->pc = 0x1AFB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFB0Cu;
        // 0x1afb10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFB14u;
        goto label_1afb14;
    }
    ctx->pc = 0x1AFB0Cu;
    {
        const bool branch_taken_0x1afb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFB0Cu;
        // 0x1afb10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afb0c) {
            ctx->pc = 0x1AFB78u;
            goto label_1afb78;
        }
    }
    ctx->pc = 0x1AFB14u;
label_1afb14:
    // 0x1afb14: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1afb14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
label_1afb18:
    // 0x1afb18: 0x24507300  addiu       $s0, $v0, 0x7300
    ctx->pc = 0x1afb18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29440));
label_1afb1c:
    // 0x1afb1c: 0x24848450  addiu       $a0, $a0, -0x7BB0
    ctx->pc = 0x1afb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935632));
label_1afb20:
    // 0x1afb20: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1afb20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1afb24:
    // 0x1afb24: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1afb24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1afb28:
    // 0x1afb28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1afb28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1afb2c:
    // 0x1afb2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1afb2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1afb30:
    // 0x1afb30: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1afb30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1afb34:
    // 0x1afb34: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1afb34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1afb38:
    // 0x1afb38: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1afb38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1afb3c:
    // 0x1afb3c: 0xc069e2a  jal         func_1A78A8
label_1afb40:
    if (ctx->pc == 0x1AFB40u) {
        ctx->pc = 0x1AFB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFB3Cu;
        // 0x1afb40: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFB44u;
        goto label_1afb44;
    }
    ctx->pc = 0x1AFB3Cu;
    SET_GPR_U32(ctx, 31, 0x1AFB44u);
    ctx->pc = 0x1AFB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFB3Cu;
    // 0x1afb40: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1AFB44u;
label_1afb44:
    // 0x1afb44: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
label_1afb48:
    if (ctx->pc == 0x1AFB48u) {
        ctx->pc = 0x1AFB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFB44u;
        // 0x1afb48: 0x3c030028  lui         $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFB4Cu;
        goto label_1afb4c;
    }
    ctx->pc = 0x1AFB44u;
    {
        const bool branch_taken_0x1afb44 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AFB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFB44u;
        // 0x1afb48: 0x3c030028  lui         $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afb44) {
            ctx->pc = 0x1AFB60u;
            goto label_1afb60;
        }
    }
    ctx->pc = 0x1AFB4Cu;
label_1afb4c:
    // 0x1afb4c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1afb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1afb50:
    // 0x1afb50: 0xc069210  jal         func_1A4840
label_1afb54:
    if (ctx->pc == 0x1AFB54u) {
        ctx->pc = 0x1AFB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFB50u;
        // 0x1afb54: 0x8c4472a8  lw          $a0, 0x72A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFB58u;
        goto label_1afb58;
    }
    ctx->pc = 0x1AFB50u;
    SET_GPR_U32(ctx, 31, 0x1AFB58u);
    ctx->pc = 0x1AFB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFB50u;
    // 0x1afb54: 0x8c4472a8  lw          $a0, 0x72A8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1AFB58u;
label_1afb58:
    // 0x1afb58: 0x10000007  b           . + 4 + (0x7 << 2)
label_1afb5c:
    if (ctx->pc == 0x1AFB5Cu) {
        ctx->pc = 0x1AFB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFB58u;
        // 0x1afb5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFB60u;
        goto label_1afb60;
    }
    ctx->pc = 0x1AFB58u;
    {
        const bool branch_taken_0x1afb58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFB58u;
        // 0x1afb5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afb58) {
            ctx->pc = 0x1AFB78u;
            goto label_1afb78;
        }
    }
    ctx->pc = 0x1AFB60u;
label_1afb60:
    // 0x1afb60: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1afb60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_1afb64:
    // 0x1afb64: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1afb64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_1afb68:
    // 0x1afb68: 0x8c6472a8  lw          $a0, 0x72A8($v1)
    ctx->pc = 0x1afb68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29352)));
label_1afb6c:
    // 0x1afb6c: 0xc069210  jal         func_1A4840
label_1afb70:
    if (ctx->pc == 0x1AFB70u) {
        ctx->pc = 0x1AFB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFB6Cu;
        // 0x1afb70: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFB74u;
        goto label_1afb74;
    }
    ctx->pc = 0x1AFB6Cu;
    SET_GPR_U32(ctx, 31, 0x1AFB74u);
    ctx->pc = 0x1AFB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFB6Cu;
    // 0x1afb70: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1AFB74u;
label_1afb74:
    // 0x1afb74: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1afb74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1afb78:
    // 0x1afb78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1afb78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1afb7c:
    // 0x1afb7c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1afb7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1afb80:
    // 0x1afb80: 0x3e00008  jr          $ra
label_1afb84:
    if (ctx->pc == 0x1AFB84u) {
        ctx->pc = 0x1AFB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFB80u;
        // 0x1afb84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFB88u;
        goto label_1afb88;
    }
    ctx->pc = 0x1AFB80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFB80u;
        // 0x1afb84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFB80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AFB88u;
label_1afb88:
    // 0x1afb88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1afb88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1afb8c:
    // 0x1afb8c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1afb8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1afb90:
    // 0x1afb90: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1afb90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1afb94:
    // 0x1afb94: 0x14800015  bnez        $a0, . + 4 + (0x15 << 2)
label_1afb98:
    if (ctx->pc == 0x1AFB98u) {
        ctx->pc = 0x1AFB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFB94u;
        // 0x1afb98: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFB9Cu;
        goto label_1afb9c;
    }
    ctx->pc = 0x1AFB94u;
    {
        const bool branch_taken_0x1afb94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AFB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFB94u;
        // 0x1afb98: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afb94) {
            ctx->pc = 0x1AFBECu;
            goto label_1afbec;
        }
    }
    ctx->pc = 0x1AFB9Cu;
label_1afb9c:
    // 0x1afb9c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1afb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1afba0:
    // 0x1afba0: 0x8c437290  lw          $v1, 0x7290($v0)
    ctx->pc = 0x1afba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29328)));
label_1afba4:
    // 0x1afba4: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
label_1afba8:
    if (ctx->pc == 0x1AFBA8u) {
        ctx->pc = 0x1AFBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFBA4u;
        // 0x1afba8: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFBACu;
        goto label_1afbac;
    }
    ctx->pc = 0x1AFBA4u;
    {
        const bool branch_taken_0x1afba4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1AFBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFBA4u;
        // 0x1afba8: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afba4) {
            ctx->pc = 0x1AFBB4u;
            goto label_1afbb4;
        }
    }
    ctx->pc = 0x1AFBACu;
label_1afbac:
    // 0x1afbac: 0xc069a30  jal         func_1A68C0
label_1afbb0:
    if (ctx->pc == 0x1AFBB0u) {
        ctx->pc = 0x1AFBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFBACu;
        // 0x1afbb0: 0x2484aa28  addiu       $a0, $a0, -0x55D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFBB4u;
        goto label_1afbb4;
    }
    ctx->pc = 0x1AFBACu;
    SET_GPR_U32(ctx, 31, 0x1AFBB4u);
    ctx->pc = 0x1AFBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFBACu;
    // 0x1afbb0: 0x2484aa28  addiu       $a0, $a0, -0x55D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    { ctx->pc = 0x1a68c0; return; }
    ctx->pc = 0x1AFBB4u;
label_1afbb4:
    // 0x1afbb4: 0x3c110028  lui         $s1, 0x28
    ctx->pc = 0x1afbb4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)40 << 16));
label_1afbb8:
    // 0x1afbb8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1afbbc:
    if (ctx->pc == 0x1AFBBCu) {
        ctx->pc = 0x1AFBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFBB8u;
        // 0x1afbbc: 0x3c100029  lui         $s0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFBC0u;
        goto label_1afbc0;
    }
    ctx->pc = 0x1AFBB8u;
    {
        const bool branch_taken_0x1afbb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFBB8u;
        // 0x1afbbc: 0x3c100029  lui         $s0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afbb8) {
            ctx->pc = 0x1AFBC8u;
            goto label_1afbc8;
        }
    }
    ctx->pc = 0x1AFBC0u;
label_1afbc0:
    // 0x1afbc0: 0xc06bc12  jal         func_1AF048
label_1afbc4:
    if (ctx->pc == 0x1AFBC4u) {
        ctx->pc = 0x1AFBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFBC0u;
        // 0x1afbc4: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFBC8u;
        goto label_1afbc8;
    }
    ctx->pc = 0x1AFBC0u;
    SET_GPR_U32(ctx, 31, 0x1AFBC8u);
    ctx->pc = 0x1AFBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFBC0u;
    // 0x1afbc4: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF048u;
    { ctx->pc = 0x1af048; return; }
    ctx->pc = 0x1AFBC8u;
label_1afbc8:
    // 0x1afbc8: 0x8e2272b0  lw          $v0, 0x72B0($s1)
    ctx->pc = 0x1afbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 29360)));
label_1afbcc:
    // 0x1afbcc: 0x1440fffc  bnez        $v0, . + 4 + (-0x4 << 2)
label_1afbd0:
    if (ctx->pc == 0x1AFBD0u) {
        ctx->pc = 0x1AFBD4u;
        goto label_1afbd4;
    }
    ctx->pc = 0x1AFBCCu;
    {
        const bool branch_taken_0x1afbcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afbcc) {
            ctx->pc = 0x1AFBC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afbc0;
        }
    }
    ctx->pc = 0x1AFBD4u;
label_1afbd4:
    // 0x1afbd4: 0xc069ea6  jal         func_1A7A98
label_1afbd8:
    if (ctx->pc == 0x1AFBD8u) {
        ctx->pc = 0x1AFBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFBD4u;
        // 0x1afbd8: 0x26048450  addiu       $a0, $s0, -0x7BB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935632));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFBDCu;
        goto label_1afbdc;
    }
    ctx->pc = 0x1AFBD4u;
    SET_GPR_U32(ctx, 31, 0x1AFBDCu);
    ctx->pc = 0x1AFBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFBD4u;
    // 0x1afbd8: 0x26048450  addiu       $a0, $s0, -0x7BB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7A98u;
    { ctx->pc = 0x1a7a98; return; }
    ctx->pc = 0x1AFBDCu;
label_1afbdc:
    // 0x1afbdc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_1afbe0:
    if (ctx->pc == 0x1AFBE0u) {
        ctx->pc = 0x1AFBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFBDCu;
        // 0x1afbe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFBE4u;
        goto label_1afbe4;
    }
    ctx->pc = 0x1AFBDCu;
    {
        const bool branch_taken_0x1afbdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AFBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFBDCu;
        // 0x1afbe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afbdc) {
            ctx->pc = 0x1AFBC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afbc0;
        }
    }
    ctx->pc = 0x1AFBE4u;
label_1afbe4:
    // 0x1afbe4: 0x1000000c  b           . + 4 + (0xC << 2)
label_1afbe8:
    if (ctx->pc == 0x1AFBE8u) {
        ctx->pc = 0x1AFBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFBE4u;
        // 0x1afbe8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFBECu;
        goto label_1afbec;
    }
    ctx->pc = 0x1AFBE4u;
    {
        const bool branch_taken_0x1afbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFBE4u;
        // 0x1afbe8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afbe4) {
            ctx->pc = 0x1AFC18u;
            goto label_1afc18;
        }
    }
    ctx->pc = 0x1AFBECu;
label_1afbec:
    // 0x1afbec: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1afbecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1afbf0:
    // 0x1afbf0: 0x8c4372b0  lw          $v1, 0x72B0($v0)
    ctx->pc = 0x1afbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29360)));
label_1afbf4:
    // 0x1afbf4: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_1afbf8:
    if (ctx->pc == 0x1AFBF8u) {
        ctx->pc = 0x1AFBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFBF4u;
        // 0x1afbf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFBFCu;
        goto label_1afbfc;
    }
    ctx->pc = 0x1AFBF4u;
    {
        const bool branch_taken_0x1afbf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AFBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFBF4u;
        // 0x1afbf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afbf4) {
            ctx->pc = 0x1AFC14u;
            goto label_1afc14;
        }
    }
    ctx->pc = 0x1AFBFCu;
label_1afbfc:
    // 0x1afbfc: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1afbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
label_1afc00:
    // 0x1afc00: 0xc069ea6  jal         func_1A7A98
label_1afc04:
    if (ctx->pc == 0x1AFC04u) {
        ctx->pc = 0x1AFC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC00u;
        // 0x1afc04: 0x24848450  addiu       $a0, $a0, -0x7BB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935632));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFC08u;
        goto label_1afc08;
    }
    ctx->pc = 0x1AFC00u;
    SET_GPR_U32(ctx, 31, 0x1AFC08u);
    ctx->pc = 0x1AFC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFC00u;
    // 0x1afc04: 0x24848450  addiu       $a0, $a0, -0x7BB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7A98u;
    { ctx->pc = 0x1a7a98; return; }
    ctx->pc = 0x1AFC08u;
label_1afc08:
    // 0x1afc08: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1afc0c:
    if (ctx->pc == 0x1AFC0Cu) {
        ctx->pc = 0x1AFC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC08u;
        // 0x1afc0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFC10u;
        goto label_1afc10;
    }
    ctx->pc = 0x1AFC08u;
    {
        const bool branch_taken_0x1afc08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AFC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC08u;
        // 0x1afc0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afc08) {
            ctx->pc = 0x1AFC14u;
            goto label_1afc14;
        }
    }
    ctx->pc = 0x1AFC10u;
label_1afc10:
    // 0x1afc10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1afc10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1afc14:
    // 0x1afc14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1afc14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1afc18:
    // 0x1afc18: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1afc18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1afc1c:
    // 0x1afc1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1afc1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1afc20:
    // 0x1afc20: 0x3e00008  jr          $ra
label_1afc24:
    if (ctx->pc == 0x1AFC24u) {
        ctx->pc = 0x1AFC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC20u;
        // 0x1afc24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFC28u;
        goto label_1afc28;
    }
    ctx->pc = 0x1AFC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC20u;
        // 0x1afc24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFC20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AFC28u;
label_1afc28:
    // 0x1afc28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1afc28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1afc2c:
    // 0x1afc2c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1afc2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1afc30:
    // 0x1afc30: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
label_1afc34:
    if (ctx->pc == 0x1AFC34u) {
        ctx->pc = 0x1AFC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC30u;
        // 0x1afc34: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFC38u;
        goto label_1afc38;
    }
    ctx->pc = 0x1AFC30u;
    {
        const bool branch_taken_0x1afc30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AFC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC30u;
        // 0x1afc34: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afc30) {
            ctx->pc = 0x1AFC78u;
            goto label_1afc78;
        }
    }
    ctx->pc = 0x1AFC38u;
label_1afc38:
    // 0x1afc38: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1afc38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1afc3c:
    // 0x1afc3c: 0x8c437290  lw          $v1, 0x7290($v0)
    ctx->pc = 0x1afc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29328)));
label_1afc40:
    // 0x1afc40: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
label_1afc44:
    if (ctx->pc == 0x1AFC44u) {
        ctx->pc = 0x1AFC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC40u;
        // 0x1afc44: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFC48u;
        goto label_1afc48;
    }
    ctx->pc = 0x1AFC40u;
    {
        const bool branch_taken_0x1afc40 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1AFC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC40u;
        // 0x1afc44: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afc40) {
            ctx->pc = 0x1AFC50u;
            goto label_1afc50;
        }
    }
    ctx->pc = 0x1AFC48u;
label_1afc48:
    // 0x1afc48: 0xc069a30  jal         func_1A68C0
label_1afc4c:
    if (ctx->pc == 0x1AFC4Cu) {
        ctx->pc = 0x1AFC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC48u;
        // 0x1afc4c: 0x2484aa38  addiu       $a0, $a0, -0x55C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFC50u;
        goto label_1afc50;
    }
    ctx->pc = 0x1AFC48u;
    SET_GPR_U32(ctx, 31, 0x1AFC50u);
    ctx->pc = 0x1AFC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFC48u;
    // 0x1afc4c: 0x2484aa38  addiu       $a0, $a0, -0x55C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    { ctx->pc = 0x1a68c0; return; }
    ctx->pc = 0x1AFC50u;
label_1afc50:
    // 0x1afc50: 0x10000003  b           . + 4 + (0x3 << 2)
label_1afc54:
    if (ctx->pc == 0x1AFC54u) {
        ctx->pc = 0x1AFC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC50u;
        // 0x1afc54: 0x3c100029  lui         $s0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFC58u;
        goto label_1afc58;
    }
    ctx->pc = 0x1AFC50u;
    {
        const bool branch_taken_0x1afc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC50u;
        // 0x1afc54: 0x3c100029  lui         $s0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afc50) {
            ctx->pc = 0x1AFC60u;
            goto label_1afc60;
        }
    }
    ctx->pc = 0x1AFC58u;
label_1afc58:
    // 0x1afc58: 0xc06bc12  jal         func_1AF048
label_1afc5c:
    if (ctx->pc == 0x1AFC5Cu) {
        ctx->pc = 0x1AFC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC58u;
        // 0x1afc5c: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFC60u;
        goto label_1afc60;
    }
    ctx->pc = 0x1AFC58u;
    SET_GPR_U32(ctx, 31, 0x1AFC60u);
    ctx->pc = 0x1AFC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFC58u;
    // 0x1afc5c: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF048u;
    { ctx->pc = 0x1af048; return; }
    ctx->pc = 0x1AFC60u;
label_1afc60:
    // 0x1afc60: 0xc069ea6  jal         func_1A7A98
label_1afc64:
    if (ctx->pc == 0x1AFC64u) {
        ctx->pc = 0x1AFC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC60u;
        // 0x1afc64: 0x26048cc8  addiu       $a0, $s0, -0x7338 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294937800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFC68u;
        goto label_1afc68;
    }
    ctx->pc = 0x1AFC60u;
    SET_GPR_U32(ctx, 31, 0x1AFC68u);
    ctx->pc = 0x1AFC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFC60u;
    // 0x1afc64: 0x26048cc8  addiu       $a0, $s0, -0x7338 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294937800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7A98u;
    { ctx->pc = 0x1a7a98; return; }
    ctx->pc = 0x1AFC68u;
label_1afc68:
    // 0x1afc68: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_1afc6c:
    if (ctx->pc == 0x1AFC6Cu) {
        ctx->pc = 0x1AFC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC68u;
        // 0x1afc6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFC70u;
        goto label_1afc70;
    }
    ctx->pc = 0x1AFC68u;
    {
        const bool branch_taken_0x1afc68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AFC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC68u;
        // 0x1afc6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afc68) {
            ctx->pc = 0x1AFC58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afc58;
        }
    }
    ctx->pc = 0x1AFC70u;
label_1afc70:
    // 0x1afc70: 0x10000005  b           . + 4 + (0x5 << 2)
label_1afc74:
    if (ctx->pc == 0x1AFC74u) {
        ctx->pc = 0x1AFC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC70u;
        // 0x1afc74: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFC78u;
        goto label_1afc78;
    }
    ctx->pc = 0x1AFC70u;
    {
        const bool branch_taken_0x1afc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC70u;
        // 0x1afc74: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afc70) {
            ctx->pc = 0x1AFC88u;
            goto label_1afc88;
        }
    }
    ctx->pc = 0x1AFC78u;
label_1afc78:
    // 0x1afc78: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1afc78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
label_1afc7c:
    // 0x1afc7c: 0xc069ea6  jal         func_1A7A98
label_1afc80:
    if (ctx->pc == 0x1AFC80u) {
        ctx->pc = 0x1AFC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC7Cu;
        // 0x1afc80: 0x24848cc8  addiu       $a0, $a0, -0x7338 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFC84u;
        goto label_1afc84;
    }
    ctx->pc = 0x1AFC7Cu;
    SET_GPR_U32(ctx, 31, 0x1AFC84u);
    ctx->pc = 0x1AFC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFC7Cu;
    // 0x1afc80: 0x24848cc8  addiu       $a0, $a0, -0x7338 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7A98u;
    { ctx->pc = 0x1a7a98; return; }
    ctx->pc = 0x1AFC84u;
label_1afc84:
    // 0x1afc84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1afc84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1afc88:
    // 0x1afc88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1afc88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1afc8c:
    // 0x1afc8c: 0x3e00008  jr          $ra
label_1afc90:
    if (ctx->pc == 0x1AFC90u) {
        ctx->pc = 0x1AFC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC8Cu;
        // 0x1afc90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFC94u;
        goto label_1afc94;
    }
    ctx->pc = 0x1AFC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC8Cu;
        // 0x1afc90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFC8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AFC94u;
label_1afc94:
    // 0x1afc94: 0x0  nop
    ctx->pc = 0x1afc94u;
    // NOP
label_1afc98:
    // 0x1afc98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1afc98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1afc9c:
    // 0x1afc9c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1afc9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1afca0:
    // 0x1afca0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1afca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1afca4:
    // 0x1afca4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1afca4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1afca8:
    // 0x1afca8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1afca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1afcac:
    // 0x1afcac: 0x3c100028  lui         $s0, 0x28
    ctx->pc = 0x1afcacu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
label_1afcb0:
    // 0x1afcb0: 0xc06bcfa  jal         func_1AF3E8
label_1afcb4:
    if (ctx->pc == 0x1AFCB4u) {
        ctx->pc = 0x1AFCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFCB0u;
        // 0x1afcb4: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFCB8u;
        goto label_1afcb8;
    }
    ctx->pc = 0x1AFCB0u;
    SET_GPR_U32(ctx, 31, 0x1AFCB8u);
    ctx->pc = 0x1AFCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFCB0u;
    // 0x1afcb4: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF3E8u;
    { ctx->pc = 0x1af3e8; return; }
    ctx->pc = 0x1AFCB8u;
label_1afcb8:
    // 0x1afcb8: 0x8e0472ac  lw          $a0, 0x72AC($s0)
    ctx->pc = 0x1afcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29356)));
label_1afcbc:
    // 0x1afcbc: 0xc06921c  jal         func_1A4870
label_1afcc0:
    if (ctx->pc == 0x1AFCC0u) {
        ctx->pc = 0x1AFCC4u;
        goto label_1afcc4;
    }
    ctx->pc = 0x1AFCBCu;
    SET_GPR_U32(ctx, 31, 0x1AFCC4u);
    ctx->pc = 0x1A4870u;
    { ctx->pc = 0x1a4870; return; }
    ctx->pc = 0x1AFCC4u;
label_1afcc4:
    // 0x1afcc4: 0x8e0372ac  lw          $v1, 0x72AC($s0)
    ctx->pc = 0x1afcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29356)));
label_1afcc8:
    // 0x1afcc8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_1afccc:
    if (ctx->pc == 0x1AFCCCu) {
        ctx->pc = 0x1AFCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFCC8u;
        // 0x1afccc: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFCD0u;
        goto label_1afcd0;
    }
    ctx->pc = 0x1AFCC8u;
    {
        const bool branch_taken_0x1afcc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AFCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFCC8u;
        // 0x1afccc: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afcc8) {
            ctx->pc = 0x1AFCF8u;
            goto label_1afcf8;
        }
    }
    ctx->pc = 0x1AFCD0u;
label_1afcd0:
    // 0x1afcd0: 0x8c437290  lw          $v1, 0x7290($v0)
    ctx->pc = 0x1afcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29328)));
label_1afcd4:
    // 0x1afcd4: 0x18600016  blez        $v1, . + 4 + (0x16 << 2)
label_1afcd8:
    if (ctx->pc == 0x1AFCD8u) {
        ctx->pc = 0x1AFCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFCD4u;
        // 0x1afcd8: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFCDCu;
        goto label_1afcdc;
    }
    ctx->pc = 0x1AFCD4u;
    {
        const bool branch_taken_0x1afcd4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1AFCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFCD4u;
        // 0x1afcd8: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afcd4) {
            ctx->pc = 0x1AFD30u;
            goto label_1afd30;
        }
    }
    ctx->pc = 0x1AFCDCu;
label_1afcdc:
    // 0x1afcdc: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1afcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1afce0:
    // 0x1afce0: 0x8c467298  lw          $a2, 0x7298($v0)
    ctx->pc = 0x1afce0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29336)));
label_1afce4:
    // 0x1afce4: 0x2484aa48  addiu       $a0, $a0, -0x55B8
    ctx->pc = 0x1afce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945352));
label_1afce8:
    // 0x1afce8: 0xc069a30  jal         func_1A68C0
label_1afcec:
    if (ctx->pc == 0x1AFCECu) {
        ctx->pc = 0x1AFCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFCE8u;
        // 0x1afcec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFCF0u;
        goto label_1afcf0;
    }
    ctx->pc = 0x1AFCE8u;
    SET_GPR_U32(ctx, 31, 0x1AFCF0u);
    ctx->pc = 0x1AFCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFCE8u;
    // 0x1afcec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    { ctx->pc = 0x1a68c0; return; }
    ctx->pc = 0x1AFCF0u;
label_1afcf0:
    // 0x1afcf0: 0x1000003f  b           . + 4 + (0x3F << 2)
label_1afcf4:
    if (ctx->pc == 0x1AFCF4u) {
        ctx->pc = 0x1AFCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFCF0u;
        // 0x1afcf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFCF8u;
        goto label_1afcf8;
    }
    ctx->pc = 0x1AFCF0u;
    {
        const bool branch_taken_0x1afcf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFCF0u;
        // 0x1afcf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afcf0) {
            ctx->pc = 0x1AFDF0u;
            goto label_1afdf0;
        }
    }
    ctx->pc = 0x1AFCF8u;
label_1afcf8:
    // 0x1afcf8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1afcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1afcfc:
    // 0x1afcfc: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1afcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1afd00:
    // 0x1afd00: 0x8c445f50  lw          $a0, 0x5F50($v0)
    ctx->pc = 0x1afd00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24400)));
label_1afd04:
    // 0x1afd04: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1afd04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1afd08:
    // 0x1afd08: 0xac717298  sw          $s1, 0x7298($v1)
    ctx->pc = 0x1afd08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 29336), GPR_U32(ctx, 17));
label_1afd0c:
    // 0x1afd0c: 0xc0691c8  jal         func_1A4720
label_1afd10:
    if (ctx->pc == 0x1AFD10u) {
        ctx->pc = 0x1AFD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFD0Cu;
        // 0x1afd10: 0x24a55f58  addiu       $a1, $a1, 0x5F58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFD14u;
        goto label_1afd14;
    }
    ctx->pc = 0x1AFD0Cu;
    SET_GPR_U32(ctx, 31, 0x1AFD14u);
    ctx->pc = 0x1AFD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFD0Cu;
    // 0x1afd10: 0x24a55f58  addiu       $a1, $a1, 0x5F58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4720u;
    { ctx->pc = 0x1a4720; return; }
    ctx->pc = 0x1AFD14u;
label_1afd14:
    // 0x1afd14: 0xc06bf0a  jal         func_1AFC28
label_1afd18:
    if (ctx->pc == 0x1AFD18u) {
        ctx->pc = 0x1AFD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFD14u;
        // 0x1afd18: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFD1Cu;
        goto label_1afd1c;
    }
    ctx->pc = 0x1AFD14u;
    SET_GPR_U32(ctx, 31, 0x1AFD1Cu);
    ctx->pc = 0x1AFD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFD14u;
    // 0x1afd18: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFC28u;
    goto label_1afc28;
    ctx->pc = 0x1AFD1Cu;
label_1afd1c:
    // 0x1afd1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1afd20:
    if (ctx->pc == 0x1AFD20u) {
        ctx->pc = 0x1AFD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFD1Cu;
        // 0x1afd20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFD24u;
        goto label_1afd24;
    }
    ctx->pc = 0x1AFD1Cu;
    {
        const bool branch_taken_0x1afd1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFD1Cu;
        // 0x1afd20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afd1c) {
            ctx->pc = 0x1AFD38u;
            goto label_1afd38;
        }
    }
    ctx->pc = 0x1AFD24u;
label_1afd24:
    // 0x1afd24: 0x8e0472ac  lw          $a0, 0x72AC($s0)
    ctx->pc = 0x1afd24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29356)));
label_1afd28:
    // 0x1afd28: 0xc069210  jal         func_1A4840
label_1afd2c:
    if (ctx->pc == 0x1AFD2Cu) {
        ctx->pc = 0x1AFD30u;
        goto label_1afd30;
    }
    ctx->pc = 0x1AFD28u;
    SET_GPR_U32(ctx, 31, 0x1AFD30u);
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1AFD30u;
label_1afd30:
    // 0x1afd30: 0x1000002f  b           . + 4 + (0x2F << 2)
label_1afd34:
    if (ctx->pc == 0x1AFD34u) {
        ctx->pc = 0x1AFD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFD30u;
        // 0x1afd34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFD38u;
        goto label_1afd38;
    }
    ctx->pc = 0x1AFD30u;
    {
        const bool branch_taken_0x1afd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFD30u;
        // 0x1afd34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afd30) {
            ctx->pc = 0x1AFDF0u;
            goto label_1afdf0;
        }
    }
    ctx->pc = 0x1AFD38u;
label_1afd38:
    // 0x1afd38: 0xc069c1a  jal         func_1A7068
label_1afd3c:
    if (ctx->pc == 0x1AFD3Cu) {
        ctx->pc = 0x1AFD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFD38u;
        // 0x1afd3c: 0x3c120028  lui         $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFD40u;
        goto label_1afd40;
    }
    ctx->pc = 0x1AFD38u;
    SET_GPR_U32(ctx, 31, 0x1AFD40u);
    ctx->pc = 0x1AFD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFD38u;
    // 0x1afd3c: 0x3c120028  lui         $s2, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)40 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7068u;
    { ctx->pc = 0x1a7068; return; }
    ctx->pc = 0x1AFD40u;
label_1afd40:
    // 0x1afd40: 0x8e4272c8  lw          $v0, 0x72C8($s2)
    ctx->pc = 0x1afd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 29384)));
label_1afd44:
    // 0x1afd44: 0x441002a  bgez        $v0, . + 4 + (0x2A << 2)
label_1afd48:
    if (ctx->pc == 0x1AFD48u) {
        ctx->pc = 0x1AFD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFD44u;
        // 0x1afd48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFD4Cu;
        goto label_1afd4c;
    }
    ctx->pc = 0x1AFD44u;
    {
        const bool branch_taken_0x1afd44 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AFD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFD44u;
        // 0x1afd48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afd44) {
            ctx->pc = 0x1AFDF0u;
            goto label_1afdf0;
        }
    }
    ctx->pc = 0x1AFD4Cu;
label_1afd4c:
    // 0x1afd4c: 0x1000000b  b           . + 4 + (0xB << 2)
label_1afd50:
    if (ctx->pc == 0x1AFD50u) {
        ctx->pc = 0x1AFD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFD4Cu;
        // 0x1afd50: 0x3c110029  lui         $s1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFD54u;
        goto label_1afd54;
    }
    ctx->pc = 0x1AFD4Cu;
    {
        const bool branch_taken_0x1afd4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFD4Cu;
        // 0x1afd50: 0x3c110029  lui         $s1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afd4c) {
            ctx->pc = 0x1AFD7Cu;
            goto label_1afd7c;
        }
    }
    ctx->pc = 0x1AFD54u;
label_1afd54:
    // 0x1afd54: 0x0  nop
    ctx->pc = 0x1afd54u;
    // NOP
label_1afd58:
    // 0x1afd58: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1afd58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_1afd5c:
    // 0x1afd5c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1afd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1afd60:
    // 0x1afd60: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1afd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1afd64:
    // 0x1afd64: 0x0  nop
    ctx->pc = 0x1afd64u;
    // NOP
label_1afd68:
    // 0x1afd68: 0x0  nop
    ctx->pc = 0x1afd68u;
    // NOP
label_1afd6c:
    // 0x1afd6c: 0x0  nop
    ctx->pc = 0x1afd6cu;
    // NOP
label_1afd70:
    // 0x1afd70: 0x0  nop
    ctx->pc = 0x1afd70u;
    // NOP
label_1afd74:
    // 0x1afd74: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
label_1afd78:
    if (ctx->pc == 0x1AFD78u) {
        ctx->pc = 0x1AFD7Cu;
        goto label_1afd7c;
    }
    ctx->pc = 0x1AFD74u;
    {
        const bool branch_taken_0x1afd74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1afd74) {
            ctx->pc = 0x1AFD60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afd60;
        }
    }
    ctx->pc = 0x1AFD7Cu;
label_1afd7c:
    // 0x1afd7c: 0x26308cc8  addiu       $s0, $s1, -0x7338
    ctx->pc = 0x1afd7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294937800));
label_1afd80:
    // 0x1afd80: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1afd80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_1afd84:
    // 0x1afd84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1afd84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1afd88:
    // 0x1afd88: 0x34a50593  ori         $a1, $a1, 0x593
    ctx->pc = 0x1afd88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1427);
label_1afd8c:
    // 0x1afd8c: 0xc069db6  jal         func_1A76D8
label_1afd90:
    if (ctx->pc == 0x1AFD90u) {
        ctx->pc = 0x1AFD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFD8Cu;
        // 0x1afd90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFD94u;
        goto label_1afd94;
    }
    ctx->pc = 0x1AFD8Cu;
    SET_GPR_U32(ctx, 31, 0x1AFD94u);
    ctx->pc = 0x1AFD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFD8Cu;
    // 0x1afd90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A76D8u;
    { ctx->pc = 0x1a76d8; return; }
    ctx->pc = 0x1AFD94u;
label_1afd94:
    // 0x1afd94: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
label_1afd98:
    if (ctx->pc == 0x1AFD98u) {
        ctx->pc = 0x1AFD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFD94u;
        // 0x1afd98: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFD9Cu;
        goto label_1afd9c;
    }
    ctx->pc = 0x1AFD94u;
    {
        const bool branch_taken_0x1afd94 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1afd94) {
            ctx->pc = 0x1AFD98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AFD94u;
            // 0x1afd98: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AFDE4u;
            goto label_1afde4;
        }
    }
    ctx->pc = 0x1AFD9Cu;
label_1afd9c:
    // 0x1afd9c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1afd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1afda0:
    // 0x1afda0: 0x8c437290  lw          $v1, 0x7290($v0)
    ctx->pc = 0x1afda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29328)));
label_1afda4:
    // 0x1afda4: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
label_1afda8:
    if (ctx->pc == 0x1AFDA8u) {
        ctx->pc = 0x1AFDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFDA4u;
        // 0x1afda8: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFDACu;
        goto label_1afdac;
    }
    ctx->pc = 0x1AFDA4u;
    {
        const bool branch_taken_0x1afda4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1AFDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFDA4u;
        // 0x1afda8: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afda4) {
            ctx->pc = 0x1AFDBCu;
            goto label_1afdbc;
        }
    }
    ctx->pc = 0x1AFDACu;
label_1afdac:
    // 0x1afdac: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1afdacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1afdb0:
    // 0x1afdb0: 0xc069a30  jal         func_1A68C0
label_1afdb4:
    if (ctx->pc == 0x1AFDB4u) {
        ctx->pc = 0x1AFDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFDB0u;
        // 0x1afdb4: 0x2484aa70  addiu       $a0, $a0, -0x5590 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945392));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFDB8u;
        goto label_1afdb8;
    }
    ctx->pc = 0x1AFDB0u;
    SET_GPR_U32(ctx, 31, 0x1AFDB8u);
    ctx->pc = 0x1AFDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFDB0u;
    // 0x1afdb4: 0x2484aa70  addiu       $a0, $a0, -0x5590 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    { ctx->pc = 0x1a68c0; return; }
    ctx->pc = 0x1AFDB8u;
label_1afdb8:
    // 0x1afdb8: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1afdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_1afdbc:
    // 0x1afdbc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1afdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1afdc0:
    // 0x1afdc0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1afdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1afdc4:
    // 0x1afdc4: 0x0  nop
    ctx->pc = 0x1afdc4u;
    // NOP
label_1afdc8:
    // 0x1afdc8: 0x0  nop
    ctx->pc = 0x1afdc8u;
    // NOP
label_1afdcc:
    // 0x1afdcc: 0x0  nop
    ctx->pc = 0x1afdccu;
    // NOP
label_1afdd0:
    // 0x1afdd0: 0x0  nop
    ctx->pc = 0x1afdd0u;
    // NOP
label_1afdd4:
    // 0x1afdd4: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
label_1afdd8:
    if (ctx->pc == 0x1AFDD8u) {
        ctx->pc = 0x1AFDDCu;
        goto label_1afddc;
    }
    ctx->pc = 0x1AFDD4u;
    {
        const bool branch_taken_0x1afdd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1afdd4) {
            ctx->pc = 0x1AFDC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afdc0;
        }
    }
    ctx->pc = 0x1AFDDCu;
label_1afddc:
    // 0x1afddc: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_1afde0:
    if (ctx->pc == 0x1AFDE0u) {
        ctx->pc = 0x1AFDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFDDCu;
        // 0x1afde0: 0x26308cc8  addiu       $s0, $s1, -0x7338 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294937800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFDE4u;
        goto label_1afde4;
    }
    ctx->pc = 0x1AFDDCu;
    {
        const bool branch_taken_0x1afddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFDDCu;
        // 0x1afde0: 0x26308cc8  addiu       $s0, $s1, -0x7338 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294937800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afddc) {
            ctx->pc = 0x1AFD80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afd80;
        }
    }
    ctx->pc = 0x1AFDE4u;
label_1afde4:
    // 0x1afde4: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
label_1afde8:
    if (ctx->pc == 0x1AFDE8u) {
        ctx->pc = 0x1AFDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFDE4u;
        // 0x1afde8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFDECu;
        goto label_1afdec;
    }
    ctx->pc = 0x1AFDE4u;
    {
        const bool branch_taken_0x1afde4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFDE4u;
        // 0x1afde8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afde4) {
            ctx->pc = 0x1AFD58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afd58;
        }
    }
    ctx->pc = 0x1AFDECu;
label_1afdec:
    // 0x1afdec: 0xae4072c8  sw          $zero, 0x72C8($s2)
    ctx->pc = 0x1afdecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 29384), GPR_U32(ctx, 0));
label_1afdf0:
    // 0x1afdf0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1afdf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1afdf4:
    // 0x1afdf4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1afdf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1afdf8:
    // 0x1afdf8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1afdf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1afdfc:
    // 0x1afdfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1afdfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1afe00:
    // 0x1afe00: 0x3e00008  jr          $ra
label_1afe04:
    if (ctx->pc == 0x1AFE04u) {
        ctx->pc = 0x1AFE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFE00u;
        // 0x1afe04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFE08u;
        goto label_1afe08;
    }
    ctx->pc = 0x1AFE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFE00u;
        // 0x1afe04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFE00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AFE08u;
label_1afe08:
    // 0x1afe08: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1afe08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1afe0c:
    // 0x1afe0c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1afe0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_1afe10:
    // 0x1afe10: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1afe10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1afe14:
    // 0x1afe14: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1afe14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_1afe18:
    // 0x1afe18: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x1afe18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_1afe1c:
    // 0x1afe1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1afe1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1afe20:
    // 0x1afe20: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x1afe20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_1afe24:
    // 0x1afe24: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1afe24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_1afe28:
    // 0x1afe28: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1afe28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_1afe2c:
    // 0x1afe2c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1afe2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_1afe30:
    // 0x1afe30: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1afe30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1afe34:
    // 0x1afe34: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1afe34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1afe38:
    // 0x1afe38: 0xc06bf0a  jal         func_1AFC28
label_1afe3c:
    if (ctx->pc == 0x1AFE3Cu) {
        ctx->pc = 0x1AFE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFE38u;
        // 0x1afe3c: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFE40u;
        goto label_1afe40;
    }
    ctx->pc = 0x1AFE38u;
    SET_GPR_U32(ctx, 31, 0x1AFE40u);
    ctx->pc = 0x1AFE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFE38u;
    // 0x1afe3c: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFC28u;
    goto label_1afc28;
    ctx->pc = 0x1AFE40u;
label_1afe40:
    // 0x1afe40: 0x1440009d  bnez        $v0, . + 4 + (0x9D << 2)
label_1afe44:
    if (ctx->pc == 0x1AFE44u) {
        ctx->pc = 0x1AFE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFE40u;
        // 0x1afe44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFE48u;
        goto label_1afe48;
    }
    ctx->pc = 0x1AFE40u;
    {
        const bool branch_taken_0x1afe40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AFE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFE40u;
        // 0x1afe44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afe40) {
            ctx->pc = 0x1B00B8u;
            { ctx->pc = 0x1b00b8; return; }
        }
    }
    ctx->pc = 0x1AFE48u;
label_1afe48:
    // 0x1afe48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1afe48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1afe4c:
    // 0x1afe4c: 0xc069c1a  jal         func_1A7068
label_1afe50:
    if (ctx->pc == 0x1AFE50u) {
        ctx->pc = 0x1AFE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFE4Cu;
        // 0x1afe50: 0x3c150028  lui         $s5, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFE54u;
        goto label_1afe54;
    }
    ctx->pc = 0x1AFE4Cu;
    SET_GPR_U32(ctx, 31, 0x1AFE54u);
    ctx->pc = 0x1AFE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFE4Cu;
    // 0x1afe50: 0x3c150028  lui         $s5, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)40 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7068u;
    { ctx->pc = 0x1a7068; return; }
    ctx->pc = 0x1AFE54u;
label_1afe54:
    // 0x1afe54: 0xc0691c4  jal         func_1A4710
label_1afe58:
    if (ctx->pc == 0x1AFE58u) {
        ctx->pc = 0x1AFE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFE54u;
        // 0x1afe58: 0x3c140028  lui         $s4, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFE5Cu;
        goto label_1afe5c;
    }
    ctx->pc = 0x1AFE54u;
    SET_GPR_U32(ctx, 31, 0x1AFE5Cu);
    ctx->pc = 0x1AFE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFE54u;
    // 0x1afe58: 0x3c140028  lui         $s4, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)40 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4710u;
    { ctx->pc = 0x1a4710; return; }
    ctx->pc = 0x1AFE5Cu;
label_1afe5c:
    // 0x1afe5c: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1afe5cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
label_1afe60:
    // 0x1afe60: 0x8ea572d0  lw          $a1, 0x72D0($s5)
    ctx->pc = 0x1afe60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 29392)));
label_1afe64:
    // 0x1afe64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1afe64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1afe68:
    // 0x1afe68: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x1afe68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
label_1afe6c:
    // 0x1afe6c: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1afe6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_1afe70:
    // 0x1afe70: 0xac8372a4  sw          $v1, 0x72A4($a0)
    ctx->pc = 0x1afe70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 29348), GPR_U32(ctx, 3));
label_1afe74:
    // 0x1afe74: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1afe74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1afe78:
    // 0x1afe78: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1afe78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1afe7c:
    // 0x1afe7c: 0x3c070028  lui         $a3, 0x28
    ctx->pc = 0x1afe7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40 << 16));
label_1afe80:
    // 0x1afe80: 0x3c080028  lui         $t0, 0x28
    ctx->pc = 0x1afe80u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)40 << 16));
label_1afe84:
    // 0x1afe84: 0x3c090028  lui         $t1, 0x28
    ctx->pc = 0x1afe84u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)40 << 16));
label_1afe88:
    // 0x1afe88: 0x3c0b0028  lui         $t3, 0x28
    ctx->pc = 0x1afe88u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)40 << 16));
label_1afe8c:
    // 0x1afe8c: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1afe8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1afe90:
    // 0x1afe90: 0x3c0a0028  lui         $t2, 0x28
    ctx->pc = 0x1afe90u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)40 << 16));
label_1afe94:
    // 0x1afe94: 0xacc25f50  sw          $v0, 0x5F50($a2)
    ctx->pc = 0x1afe94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24400), GPR_U32(ctx, 2));
label_1afe98:
    // 0x1afe98: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1afe98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1afe9c:
    // 0x1afe9c: 0xac6472bc  sw          $a0, 0x72BC($v1)
    ctx->pc = 0x1afe9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 29372), GPR_U32(ctx, 4));
label_1afea0:
    // 0x1afea0: 0xace472c0  sw          $a0, 0x72C0($a3)
    ctx->pc = 0x1afea0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 29376), GPR_U32(ctx, 4));
label_1afea4:
    // 0x1afea4: 0x24516168  addiu       $s1, $v0, 0x6168
    ctx->pc = 0x1afea4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 24936));
label_1afea8:
    // 0x1afea8: 0xad0472b8  sw          $a0, 0x72B8($t0)
    ctx->pc = 0x1afea8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 29368), GPR_U32(ctx, 4));
label_1afeac:
    // 0x1afeac: 0x261261c0  addiu       $s2, $s0, 0x61C0
    ctx->pc = 0x1afeacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 25024));
label_1afeb0:
    // 0x1afeb0: 0xad2472c8  sw          $a0, 0x72C8($t1)
    ctx->pc = 0x1afeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 29384), GPR_U32(ctx, 4));
label_1afeb4:
    // 0x1afeb4: 0x3c1e0029  lui         $fp, 0x29
    ctx->pc = 0x1afeb4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)41 << 16));
label_1afeb8:
    // 0x1afeb8: 0xad6472c4  sw          $a0, 0x72C4($t3)
    ctx->pc = 0x1afeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 29380), GPR_U32(ctx, 4));
label_1afebc:
    // 0x1afebc: 0x3c170028  lui         $s7, 0x28
    ctx->pc = 0x1afebcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)40 << 16));
label_1afec0:
    // 0x1afec0: 0xad4072b4  sw          $zero, 0x72B4($t2)
    ctx->pc = 0x1afec0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 29364), GPR_U32(ctx, 0));
label_1afec4:
    // 0x1afec4: 0x3c16002d  lui         $s6, 0x2D
    ctx->pc = 0x1afec4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)45 << 16));
label_1afec8:
    // 0x1afec8: 0xaea572d0  sw          $a1, 0x72D0($s5)
    ctx->pc = 0x1afec8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 29392), GPR_U32(ctx, 5));
label_1afecc:
    // 0x1afecc: 0xae8472cc  sw          $a0, 0x72CC($s4)
    ctx->pc = 0x1afeccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 29388), GPR_U32(ctx, 4));
label_1afed0:
    // 0x1afed0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1afed0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_1afed4:
    // 0x1afed4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1afed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1afed8:
    // 0x1afed8: 0x34a50592  ori         $a1, $a1, 0x592
    ctx->pc = 0x1afed8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1426);
label_1afedc:
    // 0x1afedc: 0xc069db6  jal         func_1A76D8
label_1afee0:
    if (ctx->pc == 0x1AFEE0u) {
        ctx->pc = 0x1AFEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFEDCu;
        // 0x1afee0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFEE4u;
        goto label_1afee4;
    }
    ctx->pc = 0x1AFEDCu;
    SET_GPR_U32(ctx, 31, 0x1AFEE4u);
    ctx->pc = 0x1AFEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFEDCu;
    // 0x1afee0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A76D8u;
    { ctx->pc = 0x1a76d8; return; }
    ctx->pc = 0x1AFEE4u;
label_1afee4:
    // 0x1afee4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1afee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1afee8:
    // 0x1afee8: 0x4a30012  bgezl       $a1, . + 4 + (0x12 << 2)
label_1afeec:
    if (ctx->pc == 0x1AFEECu) {
        ctx->pc = 0x1AFEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFEE8u;
        // 0x1afeec: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFEF0u;
        goto label_1afef0;
    }
    ctx->pc = 0x1AFEE8u;
    {
        const bool branch_taken_0x1afee8 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1afee8) {
            ctx->pc = 0x1AFEECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AFEE8u;
            // 0x1afeec: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AFF34u;
            goto label_1aff34;
        }
    }
    ctx->pc = 0x1AFEF0u;
label_1afef0:
    // 0x1afef0: 0x8ee27290  lw          $v0, 0x7290($s7)
    ctx->pc = 0x1afef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 29328)));
label_1afef4:
    // 0x1afef4: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_1afef8:
    if (ctx->pc == 0x1AFEF8u) {
        ctx->pc = 0x1AFEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFEF4u;
        // 0x1afef8: 0x8ea672d0  lw          $a2, 0x72D0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 29392)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFEFCu;
        goto label_1afefc;
    }
    ctx->pc = 0x1AFEF4u;
    {
        const bool branch_taken_0x1afef4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1AFEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFEF4u;
        // 0x1afef8: 0x8ea672d0  lw          $a2, 0x72D0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 29392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afef4) {
            ctx->pc = 0x1AFF04u;
            goto label_1aff04;
        }
    }
    ctx->pc = 0x1AFEFCu;
label_1afefc:
    // 0x1afefc: 0xc069a30  jal         func_1A68C0
label_1aff00:
    if (ctx->pc == 0x1AFF00u) {
        ctx->pc = 0x1AFF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFEFCu;
        // 0x1aff00: 0x26c4aa88  addiu       $a0, $s6, -0x5578 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294945416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFF04u;
        goto label_1aff04;
    }
    ctx->pc = 0x1AFEFCu;
    SET_GPR_U32(ctx, 31, 0x1AFF04u);
    ctx->pc = 0x1AFF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFEFCu;
    // 0x1aff00: 0x26c4aa88  addiu       $a0, $s6, -0x5578 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294945416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    { ctx->pc = 0x1a68c0; return; }
    ctx->pc = 0x1AFF04u;
label_1aff04:
    // 0x1aff04: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1aff04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_1aff08:
    // 0x1aff08: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1aff08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1aff0c:
    // 0x1aff0c: 0x0  nop
    ctx->pc = 0x1aff0cu;
    // NOP
label_1aff10:
    // 0x1aff10: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1aff10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1aff14:
    // 0x1aff14: 0x0  nop
    ctx->pc = 0x1aff14u;
    // NOP
label_1aff18:
    // 0x1aff18: 0x0  nop
    ctx->pc = 0x1aff18u;
    // NOP
label_1aff1c:
    // 0x1aff1c: 0x0  nop
    ctx->pc = 0x1aff1cu;
    // NOP
label_1aff20:
    // 0x1aff20: 0x0  nop
    ctx->pc = 0x1aff20u;
    // NOP
label_1aff24:
    // 0x1aff24: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
label_1aff28:
    if (ctx->pc == 0x1AFF28u) {
        ctx->pc = 0x1AFF2Cu;
        goto label_1aff2c;
    }
    ctx->pc = 0x1AFF24u;
    {
        const bool branch_taken_0x1aff24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1aff24) {
            ctx->pc = 0x1AFF10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aff10;
        }
    }
    ctx->pc = 0x1AFF2Cu;
label_1aff2c:
    // 0x1aff2c: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_1aff30:
    if (ctx->pc == 0x1AFF30u) {
        ctx->pc = 0x1AFF34u;
        goto label_1aff34;
    }
    ctx->pc = 0x1AFF2Cu;
    {
        const bool branch_taken_0x1aff2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aff2c) {
            ctx->pc = 0x1AFED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afed0;
        }
    }
    ctx->pc = 0x1AFF34u;
label_1aff34:
    // 0x1aff34: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1aff38:
    if (ctx->pc == 0x1AFF38u) {
        ctx->pc = 0x1AFF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFF34u;
        // 0x1aff38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFF3Cu;
        goto label_1aff3c;
    }
    ctx->pc = 0x1AFF34u;
    {
        const bool branch_taken_0x1aff34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFF34u;
        // 0x1aff38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aff34) {
            ctx->pc = 0x1AFF8Cu;
            goto label_1aff8c;
        }
    }
    ctx->pc = 0x1AFF3Cu;
label_1aff3c:
    // 0x1aff3c: 0xae1361c0  sw          $s3, 0x61C0($s0)
    ctx->pc = 0x1aff3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 25024), GPR_U32(ctx, 19));
label_1aff40:
    // 0x1aff40: 0xae8072cc  sw          $zero, 0x72CC($s4)
    ctx->pc = 0x1aff40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 29388), GPR_U32(ctx, 0));
label_1aff44:
    // 0x1aff44: 0xc069bee  jal         func_1A6FB8
label_1aff48:
    if (ctx->pc == 0x1AFF48u) {
        ctx->pc = 0x1AFF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFF44u;
        // 0x1aff48: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFF4Cu;
        goto label_1aff4c;
    }
    ctx->pc = 0x1AFF44u;
    SET_GPR_U32(ctx, 31, 0x1AFF4Cu);
    ctx->pc = 0x1AFF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFF44u;
    // 0x1aff48: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    { ctx->pc = 0x1a6fb8; return; }
    ctx->pc = 0x1AFF4Cu;
label_1aff4c:
    // 0x1aff4c: 0x27d08480  addiu       $s0, $fp, -0x7B80
    ctx->pc = 0x1aff4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294935680));
label_1aff50:
    // 0x1aff50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aff50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aff54:
    // 0x1aff54: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1aff54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1aff58:
    // 0x1aff58: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1aff58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1aff5c:
    // 0x1aff5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aff5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aff60:
    // 0x1aff60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aff60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aff64:
    // 0x1aff64: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1aff64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1aff68:
    // 0x1aff68: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1aff68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aff6c:
    // 0x1aff6c: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x1aff6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1aff70:
    // 0x1aff70: 0xc069e2a  jal         func_1A78A8
label_1aff74:
    if (ctx->pc == 0x1AFF74u) {
        ctx->pc = 0x1AFF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFF70u;
        // 0x1aff74: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFF78u;
        goto label_1aff78;
    }
    ctx->pc = 0x1AFF70u;
    SET_GPR_U32(ctx, 31, 0x1AFF78u);
    ctx->pc = 0x1AFF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFF70u;
    // 0x1aff74: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1AFF78u;
label_1aff78:
    // 0x1aff78: 0x4410010  bgez        $v0, . + 4 + (0x10 << 2)
label_1aff7c:
    if (ctx->pc == 0x1AFF7Cu) {
        ctx->pc = 0x1AFF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFF78u;
        // 0x1aff7c: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFF80u;
        goto label_1aff80;
    }
    ctx->pc = 0x1AFF78u;
    {
        const bool branch_taken_0x1aff78 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AFF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFF78u;
        // 0x1aff7c: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aff78) {
            ctx->pc = 0x1AFFBCu;
            goto label_1affbc;
        }
    }
    ctx->pc = 0x1AFF80u;
label_1aff80:
    // 0x1aff80: 0xac4072a4  sw          $zero, 0x72A4($v0)
    ctx->pc = 0x1aff80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29348), GPR_U32(ctx, 0));
label_1aff84:
    // 0x1aff84: 0x1000004c  b           . + 4 + (0x4C << 2)
label_1aff88:
    if (ctx->pc == 0x1AFF88u) {
        ctx->pc = 0x1AFF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFF84u;
        // 0x1aff88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFF8Cu;
        goto label_1aff8c;
    }
    ctx->pc = 0x1AFF84u;
    {
        const bool branch_taken_0x1aff84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFF84u;
        // 0x1aff88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aff84) {
            ctx->pc = 0x1B00B8u;
            { ctx->pc = 0x1b00b8; return; }
        }
    }
    ctx->pc = 0x1AFF8Cu;
label_1aff8c:
    // 0x1aff8c: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1aff8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_1aff90:
    // 0x1aff90: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1aff90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1aff94:
    // 0x1aff94: 0x0  nop
    ctx->pc = 0x1aff94u;
    // NOP
label_1aff98:
    // 0x1aff98: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1aff98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1aff9c:
    // 0x1aff9c: 0x0  nop
    ctx->pc = 0x1aff9cu;
    // NOP
label_1affa0:
    // 0x1affa0: 0x0  nop
    ctx->pc = 0x1affa0u;
    // NOP
label_1affa4:
    // 0x1affa4: 0x0  nop
    ctx->pc = 0x1affa4u;
    // NOP
label_1affa8:
    // 0x1affa8: 0x0  nop
    ctx->pc = 0x1affa8u;
    // NOP
label_1affac:
    // 0x1affac: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
label_1affb0:
    if (ctx->pc == 0x1AFFB0u) {
        ctx->pc = 0x1AFFB4u;
        goto label_1affb4;
    }
    ctx->pc = 0x1AFFACu;
    {
        const bool branch_taken_0x1affac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1affac) {
            ctx->pc = 0x1AFF98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aff98;
        }
    }
    ctx->pc = 0x1AFFB4u;
label_1affb4:
    // 0x1affb4: 0x1000ffc6  b           . + 4 + (-0x3A << 2)
label_1affb8:
    if (ctx->pc == 0x1AFFB8u) {
        ctx->pc = 0x1AFFBCu;
        goto label_1affbc;
    }
    ctx->pc = 0x1AFFB4u;
    {
        const bool branch_taken_0x1affb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1affb4) {
            ctx->pc = 0x1AFED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afed0;
        }
    }
    ctx->pc = 0x1AFFBCu;
label_1affbc:
    // 0x1affbc: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x1affbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
label_1affc0:
    // 0x1affc0: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x1affc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_1affc4:
    // 0x1affc4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1affc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_1affc8:
    // 0x1affc8: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x1affc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1affcc:
    // 0x1affcc: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x1affccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_1affd0:
    // 0x1affd0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1affd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1affd4:
    // 0x1affd4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1affd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_1affd8:
    // 0x1affd8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1affd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_1affdc:
    // 0x1affdc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1affdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1affe0:
    // 0x1affe0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1affe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1affe4:
    // 0x1affe4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1affe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1affe8:
    // 0x1affe8: 0x10c20016  beq         $a2, $v0, . + 4 + (0x16 << 2)
label_1affec:
    if (ctx->pc == 0x1AFFECu) {
        ctx->pc = 0x1AFFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFFE8u;
        // 0x1affec: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFFF0u;
        goto label_1afff0;
    }
    ctx->pc = 0x1AFFE8u;
    {
        const bool branch_taken_0x1affe8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AFFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFFE8u;
        // 0x1affec: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1affe8) {
            ctx->pc = 0x1B0044u;
            goto label_1b0044;
        }
    }
    ctx->pc = 0x1AFFF0u;
label_1afff0:
    // 0x1afff0: 0x240200fe  addiu       $v0, $zero, 0xFE
    ctx->pc = 0x1afff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
label_1afff4:
    // 0x1afff4: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
label_1afff8:
    if (ctx->pc == 0x1AFFF8u) {
        ctx->pc = 0x1AFFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFFF4u;
        // 0x1afff8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFFFCu;
        goto label_1afffc;
    }
    ctx->pc = 0x1AFFF4u;
    {
        const bool branch_taken_0x1afff4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AFFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFFF4u;
        // 0x1afff8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afff4) {
            ctx->pc = 0x1B0008u;
            goto label_1b0008;
        }
    }
    ctx->pc = 0x1AFFFCu;
label_1afffc:
    // 0x1afffc: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1afffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1b0000:
    // 0x1b0000: 0x10000010  b           . + 4 + (0x10 << 2)
label_1b0004:
    if (ctx->pc == 0x1B0004u) {
        ctx->pc = 0x1B0004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0000u;
        // 0x1b0004: 0xac507290  sw          $s0, 0x7290($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 29328), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0008u;
        goto label_1b0008;
    }
    ctx->pc = 0x1B0000u;
    {
        const bool branch_taken_0x1b0000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0000u;
        // 0x1b0004: 0xac507290  sw          $s0, 0x7290($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 29328), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0000) {
            ctx->pc = 0x1B0044u;
            goto label_1b0044;
        }
    }
    ctx->pc = 0x1B0008u;
label_1b0008:
    // 0x1b0008: 0x24a200ff  addiu       $v0, $a1, 0xFF
    ctx->pc = 0x1b0008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 255));
label_1b000c:
    // 0x1b000c: 0xc5182a  slt         $v1, $a2, $a1
    ctx->pc = 0x1b000cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1b0010:
    // 0x1b0010: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x1b0010u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_1b0014:
    // 0x1b0014: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1b0014u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_1b0018:
    // 0x1b0018: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1b0018u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1b001c:
    // 0x1b001c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_1b0020:
    if (ctx->pc == 0x1B0020u) {
        ctx->pc = 0x1B0020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B001Cu;
        // 0x1b0020: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0024u;
        goto label_1b0024;
    }
    ctx->pc = 0x1B001Cu;
    {
        const bool branch_taken_0x1b001c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b001c) {
            ctx->pc = 0x1B0020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B001Cu;
            // 0x1b0020: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0044u;
            goto label_1b0044;
        }
    }
    ctx->pc = 0x1B0024u;
label_1b0024:
    // 0x1b0024: 0xc4182a  slt         $v1, $a2, $a0
    ctx->pc = 0x1b0024u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1b0028:
    // 0x1b0028: 0x248200ff  addiu       $v0, $a0, 0xFF
    ctx->pc = 0x1b0028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 255));
label_1b002c:
    // 0x1b002c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1b002cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_1b0030:
    // 0x1b0030: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1b0030u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_1b0034:
    // 0x1b0034: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1b0034u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1b0038:
    // 0x1b0038: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b003c:
    if (ctx->pc == 0x1B003Cu) {
        ctx->pc = 0x1B003Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0038u;
        // 0x1b003c: 0x3c040028  lui         $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0040u;
        goto label_1b0040;
    }
    ctx->pc = 0x1B0038u;
    {
        const bool branch_taken_0x1b0038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B003Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0038u;
        // 0x1b003c: 0x3c040028  lui         $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0038) {
            ctx->pc = 0x1B0048u;
            goto label_1b0048;
        }
    }
    ctx->pc = 0x1B0040u;
label_1b0040:
    // 0x1b0040: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1b0040u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b0044:
    // 0x1b0044: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x1b0044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
label_1b0048:
    // 0x1b0048: 0xac8072a4  sw          $zero, 0x72A4($a0)
    ctx->pc = 0x1b0048u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 29348), GPR_U32(ctx, 0));
label_1b004c:
    // 0x1b004c: 0x6600015  bltz        $s3, . + 4 + (0x15 << 2)
label_1b0050:
    if (ctx->pc == 0x1B0050u) {
        ctx->pc = 0x1B0050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B004Cu;
        // 0x1b0050: 0x2a620002  slti        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0054u;
        goto label_1b0054;
    }
    ctx->pc = 0x1B004Cu;
    {
        const bool branch_taken_0x1b004c = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x1B0050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B004Cu;
        // 0x1b0050: 0x2a620002  slti        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b004c) {
            ctx->pc = 0x1B00A4u;
            { ctx->pc = 0x1b00a4; return; }
        }
    }
    ctx->pc = 0x1B0054u;
label_1b0054:
    // 0x1b0054: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_1b0058:
    if (ctx->pc == 0x1B0058u) {
        ctx->pc = 0x1B0058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0054u;
        // 0x1b0058: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B005Cu;
        goto label_1b005c;
    }
    ctx->pc = 0x1B0054u;
    {
        const bool branch_taken_0x1b0054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0054u;
        // 0x1b0058: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0054) {
            ctx->pc = 0x1B00A4u;
            { ctx->pc = 0x1b00a4; return; }
        }
    }
    ctx->pc = 0x1B005Cu;
label_1b005c:
    // 0x1b005c: 0x16620011  bne         $s3, $v0, . + 4 + (0x11 << 2)
label_1b0060:
    if (ctx->pc == 0x1B0060u) {
        ctx->pc = 0x1B0060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B005Cu;
        // 0x1b0060: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0064u;
        goto label_1b0064;
    }
    ctx->pc = 0x1B005Cu;
    {
        const bool branch_taken_0x1b005c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B0060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B005Cu;
        // 0x1b0060: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b005c) {
            ctx->pc = 0x1B00A4u;
            { ctx->pc = 0x1b00a4; return; }
        }
    }
    ctx->pc = 0x1B0064u;
label_1b0064:
    // 0x1b0064: 0x8c437290  lw          $v1, 0x7290($v0)
    ctx->pc = 0x1b0064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29328)));
label_1b0068:
    // 0x1b0068: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
label_1b006c:
    if (ctx->pc == 0x1B006Cu) {
        ctx->pc = 0x1B006Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0068u;
        // 0x1b006c: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0070u;
        { ctx->pc = 0x1b0070; return; }
    }
    ctx->pc = 0x1B0068u;
    {
        const bool branch_taken_0x1b0068 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1B006Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0068u;
        // 0x1b006c: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0068) {
            ctx->pc = 0x1B0078u;
            { ctx->pc = 0x1b0078; return; }
        }
    }
    ctx->pc = 0x1B0070u;
    ctx->pc = 0x1b0070u;
    return;
}
