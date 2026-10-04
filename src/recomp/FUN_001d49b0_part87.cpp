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

// Function: FUN_001d49b0
// Address: 0x1d49b0 - 0x254d4c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_001d49b0_part87(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1fe990u: goto label_1fe990;
        case 0x1fe994u: goto label_1fe994;
        case 0x1fe998u: goto label_1fe998;
        case 0x1fe99cu: goto label_1fe99c;
        case 0x1fe9a0u: goto label_1fe9a0;
        case 0x1fe9a4u: goto label_1fe9a4;
        case 0x1fe9a8u: goto label_1fe9a8;
        case 0x1fe9acu: goto label_1fe9ac;
        case 0x1fe9b0u: goto label_1fe9b0;
        case 0x1fe9b4u: goto label_1fe9b4;
        case 0x1fe9b8u: goto label_1fe9b8;
        case 0x1fe9bcu: goto label_1fe9bc;
        case 0x1fe9c0u: goto label_1fe9c0;
        case 0x1fe9c4u: goto label_1fe9c4;
        case 0x1fe9c8u: goto label_1fe9c8;
        case 0x1fe9ccu: goto label_1fe9cc;
        case 0x1fe9d0u: goto label_1fe9d0;
        case 0x1fe9d4u: goto label_1fe9d4;
        case 0x1fe9d8u: goto label_1fe9d8;
        case 0x1fe9dcu: goto label_1fe9dc;
        case 0x1fe9e0u: goto label_1fe9e0;
        case 0x1fe9e4u: goto label_1fe9e4;
        case 0x1fe9e8u: goto label_1fe9e8;
        case 0x1fe9ecu: goto label_1fe9ec;
        case 0x1fe9f0u: goto label_1fe9f0;
        case 0x1fe9f4u: goto label_1fe9f4;
        case 0x1fe9f8u: goto label_1fe9f8;
        case 0x1fe9fcu: goto label_1fe9fc;
        case 0x1fea00u: goto label_1fea00;
        case 0x1fea04u: goto label_1fea04;
        case 0x1fea08u: goto label_1fea08;
        case 0x1fea0cu: goto label_1fea0c;
        case 0x1fea10u: goto label_1fea10;
        case 0x1fea14u: goto label_1fea14;
        case 0x1fea18u: goto label_1fea18;
        case 0x1fea1cu: goto label_1fea1c;
        case 0x1fea20u: goto label_1fea20;
        case 0x1fea24u: goto label_1fea24;
        case 0x1fea28u: goto label_1fea28;
        case 0x1fea2cu: goto label_1fea2c;
        case 0x1fea30u: goto label_1fea30;
        case 0x1fea34u: goto label_1fea34;
        case 0x1fea38u: goto label_1fea38;
        case 0x1fea3cu: goto label_1fea3c;
        case 0x1fea40u: goto label_1fea40;
        case 0x1fea44u: goto label_1fea44;
        case 0x1fea48u: goto label_1fea48;
        case 0x1fea4cu: goto label_1fea4c;
        case 0x1fea50u: goto label_1fea50;
        case 0x1fea54u: goto label_1fea54;
        case 0x1fea58u: goto label_1fea58;
        case 0x1fea5cu: goto label_1fea5c;
        case 0x1fea60u: goto label_1fea60;
        case 0x1fea64u: goto label_1fea64;
        case 0x1fea68u: goto label_1fea68;
        case 0x1fea6cu: goto label_1fea6c;
        case 0x1fea70u: goto label_1fea70;
        case 0x1fea74u: goto label_1fea74;
        case 0x1fea78u: goto label_1fea78;
        case 0x1fea7cu: goto label_1fea7c;
        case 0x1fea80u: goto label_1fea80;
        case 0x1fea84u: goto label_1fea84;
        case 0x1fea88u: goto label_1fea88;
        case 0x1fea8cu: goto label_1fea8c;
        case 0x1fea90u: goto label_1fea90;
        case 0x1fea94u: goto label_1fea94;
        case 0x1fea98u: goto label_1fea98;
        case 0x1fea9cu: goto label_1fea9c;
        case 0x1feaa0u: goto label_1feaa0;
        case 0x1feaa4u: goto label_1feaa4;
        case 0x1feaa8u: goto label_1feaa8;
        case 0x1feaacu: goto label_1feaac;
        case 0x1feab0u: goto label_1feab0;
        case 0x1feab4u: goto label_1feab4;
        case 0x1feab8u: goto label_1feab8;
        case 0x1feabcu: goto label_1feabc;
        case 0x1feac0u: goto label_1feac0;
        case 0x1feac4u: goto label_1feac4;
        case 0x1feac8u: goto label_1feac8;
        case 0x1feaccu: goto label_1feacc;
        case 0x1fead0u: goto label_1fead0;
        case 0x1fead4u: goto label_1fead4;
        case 0x1fead8u: goto label_1fead8;
        case 0x1feadcu: goto label_1feadc;
        case 0x1feae0u: goto label_1feae0;
        case 0x1feae4u: goto label_1feae4;
        case 0x1feae8u: goto label_1feae8;
        case 0x1feaecu: goto label_1feaec;
        case 0x1feaf0u: goto label_1feaf0;
        case 0x1feaf4u: goto label_1feaf4;
        case 0x1feaf8u: goto label_1feaf8;
        case 0x1feafcu: goto label_1feafc;
        case 0x1feb00u: goto label_1feb00;
        case 0x1feb04u: goto label_1feb04;
        case 0x1feb08u: goto label_1feb08;
        case 0x1feb0cu: goto label_1feb0c;
        case 0x1feb10u: goto label_1feb10;
        case 0x1feb14u: goto label_1feb14;
        case 0x1feb18u: goto label_1feb18;
        case 0x1feb1cu: goto label_1feb1c;
        case 0x1feb20u: goto label_1feb20;
        case 0x1feb24u: goto label_1feb24;
        case 0x1feb28u: goto label_1feb28;
        case 0x1feb2cu: goto label_1feb2c;
        case 0x1feb30u: goto label_1feb30;
        case 0x1feb34u: goto label_1feb34;
        case 0x1feb38u: goto label_1feb38;
        case 0x1feb3cu: goto label_1feb3c;
        case 0x1feb40u: goto label_1feb40;
        case 0x1feb44u: goto label_1feb44;
        case 0x1feb48u: goto label_1feb48;
        case 0x1feb4cu: goto label_1feb4c;
        case 0x1feb50u: goto label_1feb50;
        case 0x1feb54u: goto label_1feb54;
        case 0x1feb58u: goto label_1feb58;
        case 0x1feb5cu: goto label_1feb5c;
        case 0x1feb60u: goto label_1feb60;
        case 0x1feb64u: goto label_1feb64;
        case 0x1feb68u: goto label_1feb68;
        case 0x1feb6cu: goto label_1feb6c;
        case 0x1feb70u: goto label_1feb70;
        case 0x1feb74u: goto label_1feb74;
        case 0x1feb78u: goto label_1feb78;
        case 0x1feb7cu: goto label_1feb7c;
        case 0x1feb80u: goto label_1feb80;
        case 0x1feb84u: goto label_1feb84;
        case 0x1feb88u: goto label_1feb88;
        case 0x1feb8cu: goto label_1feb8c;
        case 0x1feb90u: goto label_1feb90;
        case 0x1feb94u: goto label_1feb94;
        case 0x1feb98u: goto label_1feb98;
        case 0x1feb9cu: goto label_1feb9c;
        case 0x1feba0u: goto label_1feba0;
        case 0x1feba4u: goto label_1feba4;
        case 0x1feba8u: goto label_1feba8;
        case 0x1febacu: goto label_1febac;
        case 0x1febb0u: goto label_1febb0;
        case 0x1febb4u: goto label_1febb4;
        case 0x1febb8u: goto label_1febb8;
        case 0x1febbcu: goto label_1febbc;
        case 0x1febc0u: goto label_1febc0;
        case 0x1febc4u: goto label_1febc4;
        case 0x1febc8u: goto label_1febc8;
        case 0x1febccu: goto label_1febcc;
        case 0x1febd0u: goto label_1febd0;
        case 0x1febd4u: goto label_1febd4;
        case 0x1febd8u: goto label_1febd8;
        case 0x1febdcu: goto label_1febdc;
        case 0x1febe0u: goto label_1febe0;
        case 0x1febe4u: goto label_1febe4;
        case 0x1febe8u: goto label_1febe8;
        case 0x1febecu: goto label_1febec;
        case 0x1febf0u: goto label_1febf0;
        case 0x1febf4u: goto label_1febf4;
        case 0x1febf8u: goto label_1febf8;
        case 0x1febfcu: goto label_1febfc;
        case 0x1fec00u: goto label_1fec00;
        case 0x1fec04u: goto label_1fec04;
        case 0x1fec08u: goto label_1fec08;
        case 0x1fec0cu: goto label_1fec0c;
        case 0x1fec10u: goto label_1fec10;
        case 0x1fec14u: goto label_1fec14;
        case 0x1fec18u: goto label_1fec18;
        case 0x1fec1cu: goto label_1fec1c;
        case 0x1fec20u: goto label_1fec20;
        case 0x1fec24u: goto label_1fec24;
        case 0x1fec28u: goto label_1fec28;
        case 0x1fec2cu: goto label_1fec2c;
        case 0x1fec30u: goto label_1fec30;
        case 0x1fec34u: goto label_1fec34;
        case 0x1fec38u: goto label_1fec38;
        case 0x1fec3cu: goto label_1fec3c;
        case 0x1fec40u: goto label_1fec40;
        case 0x1fec44u: goto label_1fec44;
        case 0x1fec48u: goto label_1fec48;
        case 0x1fec4cu: goto label_1fec4c;
        case 0x1fec50u: goto label_1fec50;
        case 0x1fec54u: goto label_1fec54;
        case 0x1fec58u: goto label_1fec58;
        case 0x1fec5cu: goto label_1fec5c;
        case 0x1fec60u: goto label_1fec60;
        case 0x1fec64u: goto label_1fec64;
        case 0x1fec68u: goto label_1fec68;
        case 0x1fec6cu: goto label_1fec6c;
        case 0x1fec70u: goto label_1fec70;
        case 0x1fec74u: goto label_1fec74;
        case 0x1fec78u: goto label_1fec78;
        case 0x1fec7cu: goto label_1fec7c;
        case 0x1fec80u: goto label_1fec80;
        case 0x1fec84u: goto label_1fec84;
        case 0x1fec88u: goto label_1fec88;
        case 0x1fec8cu: goto label_1fec8c;
        case 0x1fec90u: goto label_1fec90;
        case 0x1fec94u: goto label_1fec94;
        case 0x1fec98u: goto label_1fec98;
        case 0x1fec9cu: goto label_1fec9c;
        case 0x1feca0u: goto label_1feca0;
        case 0x1feca4u: goto label_1feca4;
        case 0x1feca8u: goto label_1feca8;
        case 0x1fecacu: goto label_1fecac;
        case 0x1fecb0u: goto label_1fecb0;
        case 0x1fecb4u: goto label_1fecb4;
        case 0x1fecb8u: goto label_1fecb8;
        case 0x1fecbcu: goto label_1fecbc;
        case 0x1fecc0u: goto label_1fecc0;
        case 0x1fecc4u: goto label_1fecc4;
        case 0x1fecc8u: goto label_1fecc8;
        case 0x1fecccu: goto label_1feccc;
        case 0x1fecd0u: goto label_1fecd0;
        case 0x1fecd4u: goto label_1fecd4;
        case 0x1fecd8u: goto label_1fecd8;
        case 0x1fecdcu: goto label_1fecdc;
        case 0x1fece0u: goto label_1fece0;
        case 0x1fece4u: goto label_1fece4;
        case 0x1fece8u: goto label_1fece8;
        case 0x1fececu: goto label_1fecec;
        case 0x1fecf0u: goto label_1fecf0;
        case 0x1fecf4u: goto label_1fecf4;
        case 0x1fecf8u: goto label_1fecf8;
        case 0x1fecfcu: goto label_1fecfc;
        case 0x1fed00u: goto label_1fed00;
        case 0x1fed04u: goto label_1fed04;
        case 0x1fed08u: goto label_1fed08;
        case 0x1fed0cu: goto label_1fed0c;
        case 0x1fed10u: goto label_1fed10;
        case 0x1fed14u: goto label_1fed14;
        case 0x1fed18u: goto label_1fed18;
        case 0x1fed1cu: goto label_1fed1c;
        case 0x1fed20u: goto label_1fed20;
        case 0x1fed24u: goto label_1fed24;
        case 0x1fed28u: goto label_1fed28;
        case 0x1fed2cu: goto label_1fed2c;
        case 0x1fed30u: goto label_1fed30;
        case 0x1fed34u: goto label_1fed34;
        case 0x1fed38u: goto label_1fed38;
        case 0x1fed3cu: goto label_1fed3c;
        case 0x1fed40u: goto label_1fed40;
        case 0x1fed44u: goto label_1fed44;
        case 0x1fed48u: goto label_1fed48;
        case 0x1fed4cu: goto label_1fed4c;
        case 0x1fed50u: goto label_1fed50;
        case 0x1fed54u: goto label_1fed54;
        case 0x1fed58u: goto label_1fed58;
        case 0x1fed5cu: goto label_1fed5c;
        case 0x1fed60u: goto label_1fed60;
        case 0x1fed64u: goto label_1fed64;
        case 0x1fed68u: goto label_1fed68;
        case 0x1fed6cu: goto label_1fed6c;
        case 0x1fed70u: goto label_1fed70;
        case 0x1fed74u: goto label_1fed74;
        case 0x1fed78u: goto label_1fed78;
        case 0x1fed7cu: goto label_1fed7c;
        case 0x1fed80u: goto label_1fed80;
        case 0x1fed84u: goto label_1fed84;
        case 0x1fed88u: goto label_1fed88;
        case 0x1fed8cu: goto label_1fed8c;
        case 0x1fed90u: goto label_1fed90;
        case 0x1fed94u: goto label_1fed94;
        case 0x1fed98u: goto label_1fed98;
        case 0x1fed9cu: goto label_1fed9c;
        case 0x1feda0u: goto label_1feda0;
        case 0x1feda4u: goto label_1feda4;
        case 0x1feda8u: goto label_1feda8;
        case 0x1fedacu: goto label_1fedac;
        case 0x1fedb0u: goto label_1fedb0;
        case 0x1fedb4u: goto label_1fedb4;
        case 0x1fedb8u: goto label_1fedb8;
        case 0x1fedbcu: goto label_1fedbc;
        case 0x1fedc0u: goto label_1fedc0;
        case 0x1fedc4u: goto label_1fedc4;
        case 0x1fedc8u: goto label_1fedc8;
        case 0x1fedccu: goto label_1fedcc;
        case 0x1fedd0u: goto label_1fedd0;
        case 0x1fedd4u: goto label_1fedd4;
        case 0x1fedd8u: goto label_1fedd8;
        case 0x1feddcu: goto label_1feddc;
        case 0x1fede0u: goto label_1fede0;
        case 0x1fede4u: goto label_1fede4;
        case 0x1fede8u: goto label_1fede8;
        case 0x1fedecu: goto label_1fedec;
        case 0x1fedf0u: goto label_1fedf0;
        case 0x1fedf4u: goto label_1fedf4;
        case 0x1fedf8u: goto label_1fedf8;
        case 0x1fedfcu: goto label_1fedfc;
        case 0x1fee00u: goto label_1fee00;
        case 0x1fee04u: goto label_1fee04;
        case 0x1fee08u: goto label_1fee08;
        case 0x1fee0cu: goto label_1fee0c;
        case 0x1fee10u: goto label_1fee10;
        case 0x1fee14u: goto label_1fee14;
        case 0x1fee18u: goto label_1fee18;
        case 0x1fee1cu: goto label_1fee1c;
        case 0x1fee20u: goto label_1fee20;
        case 0x1fee24u: goto label_1fee24;
        case 0x1fee28u: goto label_1fee28;
        case 0x1fee2cu: goto label_1fee2c;
        case 0x1fee30u: goto label_1fee30;
        case 0x1fee34u: goto label_1fee34;
        case 0x1fee38u: goto label_1fee38;
        case 0x1fee3cu: goto label_1fee3c;
        case 0x1fee40u: goto label_1fee40;
        case 0x1fee44u: goto label_1fee44;
        case 0x1fee48u: goto label_1fee48;
        case 0x1fee4cu: goto label_1fee4c;
        case 0x1fee50u: goto label_1fee50;
        case 0x1fee54u: goto label_1fee54;
        case 0x1fee58u: goto label_1fee58;
        case 0x1fee5cu: goto label_1fee5c;
        case 0x1fee60u: goto label_1fee60;
        case 0x1fee64u: goto label_1fee64;
        case 0x1fee68u: goto label_1fee68;
        case 0x1fee6cu: goto label_1fee6c;
        case 0x1fee70u: goto label_1fee70;
        case 0x1fee74u: goto label_1fee74;
        case 0x1fee78u: goto label_1fee78;
        case 0x1fee7cu: goto label_1fee7c;
        case 0x1fee80u: goto label_1fee80;
        case 0x1fee84u: goto label_1fee84;
        case 0x1fee88u: goto label_1fee88;
        case 0x1fee8cu: goto label_1fee8c;
        case 0x1fee90u: goto label_1fee90;
        case 0x1fee94u: goto label_1fee94;
        case 0x1fee98u: goto label_1fee98;
        case 0x1fee9cu: goto label_1fee9c;
        case 0x1feea0u: goto label_1feea0;
        case 0x1feea4u: goto label_1feea4;
        case 0x1feea8u: goto label_1feea8;
        case 0x1feeacu: goto label_1feeac;
        case 0x1feeb0u: goto label_1feeb0;
        case 0x1feeb4u: goto label_1feeb4;
        case 0x1feeb8u: goto label_1feeb8;
        case 0x1feebcu: goto label_1feebc;
        case 0x1feec0u: goto label_1feec0;
        case 0x1feec4u: goto label_1feec4;
        case 0x1feec8u: goto label_1feec8;
        case 0x1feeccu: goto label_1feecc;
        case 0x1feed0u: goto label_1feed0;
        case 0x1feed4u: goto label_1feed4;
        case 0x1feed8u: goto label_1feed8;
        case 0x1feedcu: goto label_1feedc;
        case 0x1feee0u: goto label_1feee0;
        case 0x1feee4u: goto label_1feee4;
        case 0x1feee8u: goto label_1feee8;
        case 0x1feeecu: goto label_1feeec;
        case 0x1feef0u: goto label_1feef0;
        case 0x1feef4u: goto label_1feef4;
        case 0x1feef8u: goto label_1feef8;
        case 0x1feefcu: goto label_1feefc;
        case 0x1fef00u: goto label_1fef00;
        case 0x1fef04u: goto label_1fef04;
        case 0x1fef08u: goto label_1fef08;
        case 0x1fef0cu: goto label_1fef0c;
        case 0x1fef10u: goto label_1fef10;
        case 0x1fef14u: goto label_1fef14;
        case 0x1fef18u: goto label_1fef18;
        case 0x1fef1cu: goto label_1fef1c;
        case 0x1fef20u: goto label_1fef20;
        case 0x1fef24u: goto label_1fef24;
        case 0x1fef28u: goto label_1fef28;
        case 0x1fef2cu: goto label_1fef2c;
        case 0x1fef30u: goto label_1fef30;
        case 0x1fef34u: goto label_1fef34;
        case 0x1fef38u: goto label_1fef38;
        case 0x1fef3cu: goto label_1fef3c;
        case 0x1fef40u: goto label_1fef40;
        case 0x1fef44u: goto label_1fef44;
        case 0x1fef48u: goto label_1fef48;
        case 0x1fef4cu: goto label_1fef4c;
        case 0x1fef50u: goto label_1fef50;
        case 0x1fef54u: goto label_1fef54;
        case 0x1fef58u: goto label_1fef58;
        case 0x1fef5cu: goto label_1fef5c;
        case 0x1fef60u: goto label_1fef60;
        case 0x1fef64u: goto label_1fef64;
        case 0x1fef68u: goto label_1fef68;
        case 0x1fef6cu: goto label_1fef6c;
        case 0x1fef70u: goto label_1fef70;
        case 0x1fef74u: goto label_1fef74;
        case 0x1fef78u: goto label_1fef78;
        case 0x1fef7cu: goto label_1fef7c;
        case 0x1fef80u: goto label_1fef80;
        case 0x1fef84u: goto label_1fef84;
        case 0x1fef88u: goto label_1fef88;
        case 0x1fef8cu: goto label_1fef8c;
        case 0x1fef90u: goto label_1fef90;
        case 0x1fef94u: goto label_1fef94;
        case 0x1fef98u: goto label_1fef98;
        case 0x1fef9cu: goto label_1fef9c;
        case 0x1fefa0u: goto label_1fefa0;
        case 0x1fefa4u: goto label_1fefa4;
        case 0x1fefa8u: goto label_1fefa8;
        case 0x1fefacu: goto label_1fefac;
        case 0x1fefb0u: goto label_1fefb0;
        case 0x1fefb4u: goto label_1fefb4;
        case 0x1fefb8u: goto label_1fefb8;
        case 0x1fefbcu: goto label_1fefbc;
        case 0x1fefc0u: goto label_1fefc0;
        case 0x1fefc4u: goto label_1fefc4;
        case 0x1fefc8u: goto label_1fefc8;
        case 0x1fefccu: goto label_1fefcc;
        case 0x1fefd0u: goto label_1fefd0;
        case 0x1fefd4u: goto label_1fefd4;
        case 0x1fefd8u: goto label_1fefd8;
        case 0x1fefdcu: goto label_1fefdc;
        case 0x1fefe0u: goto label_1fefe0;
        case 0x1fefe4u: goto label_1fefe4;
        case 0x1fefe8u: goto label_1fefe8;
        case 0x1fefecu: goto label_1fefec;
        case 0x1feff0u: goto label_1feff0;
        case 0x1feff4u: goto label_1feff4;
        case 0x1feff8u: goto label_1feff8;
        case 0x1feffcu: goto label_1feffc;
        case 0x1ff000u: goto label_1ff000;
        case 0x1ff004u: goto label_1ff004;
        case 0x1ff008u: goto label_1ff008;
        case 0x1ff00cu: goto label_1ff00c;
        case 0x1ff010u: goto label_1ff010;
        case 0x1ff014u: goto label_1ff014;
        case 0x1ff018u: goto label_1ff018;
        case 0x1ff01cu: goto label_1ff01c;
        case 0x1ff020u: goto label_1ff020;
        case 0x1ff024u: goto label_1ff024;
        case 0x1ff028u: goto label_1ff028;
        case 0x1ff02cu: goto label_1ff02c;
        case 0x1ff030u: goto label_1ff030;
        case 0x1ff034u: goto label_1ff034;
        case 0x1ff038u: goto label_1ff038;
        case 0x1ff03cu: goto label_1ff03c;
        case 0x1ff040u: goto label_1ff040;
        case 0x1ff044u: goto label_1ff044;
        case 0x1ff048u: goto label_1ff048;
        case 0x1ff04cu: goto label_1ff04c;
        case 0x1ff050u: goto label_1ff050;
        case 0x1ff054u: goto label_1ff054;
        case 0x1ff058u: goto label_1ff058;
        case 0x1ff05cu: goto label_1ff05c;
        case 0x1ff060u: goto label_1ff060;
        case 0x1ff064u: goto label_1ff064;
        case 0x1ff068u: goto label_1ff068;
        case 0x1ff06cu: goto label_1ff06c;
        case 0x1ff070u: goto label_1ff070;
        case 0x1ff074u: goto label_1ff074;
        case 0x1ff078u: goto label_1ff078;
        case 0x1ff07cu: goto label_1ff07c;
        case 0x1ff080u: goto label_1ff080;
        case 0x1ff084u: goto label_1ff084;
        case 0x1ff088u: goto label_1ff088;
        case 0x1ff08cu: goto label_1ff08c;
        case 0x1ff090u: goto label_1ff090;
        case 0x1ff094u: goto label_1ff094;
        case 0x1ff098u: goto label_1ff098;
        case 0x1ff09cu: goto label_1ff09c;
        case 0x1ff0a0u: goto label_1ff0a0;
        case 0x1ff0a4u: goto label_1ff0a4;
        case 0x1ff0a8u: goto label_1ff0a8;
        case 0x1ff0acu: goto label_1ff0ac;
        case 0x1ff0b0u: goto label_1ff0b0;
        case 0x1ff0b4u: goto label_1ff0b4;
        case 0x1ff0b8u: goto label_1ff0b8;
        case 0x1ff0bcu: goto label_1ff0bc;
        case 0x1ff0c0u: goto label_1ff0c0;
        case 0x1ff0c4u: goto label_1ff0c4;
        case 0x1ff0c8u: goto label_1ff0c8;
        case 0x1ff0ccu: goto label_1ff0cc;
        case 0x1ff0d0u: goto label_1ff0d0;
        case 0x1ff0d4u: goto label_1ff0d4;
        case 0x1ff0d8u: goto label_1ff0d8;
        case 0x1ff0dcu: goto label_1ff0dc;
        case 0x1ff0e0u: goto label_1ff0e0;
        case 0x1ff0e4u: goto label_1ff0e4;
        case 0x1ff0e8u: goto label_1ff0e8;
        case 0x1ff0ecu: goto label_1ff0ec;
        case 0x1ff0f0u: goto label_1ff0f0;
        case 0x1ff0f4u: goto label_1ff0f4;
        case 0x1ff0f8u: goto label_1ff0f8;
        case 0x1ff0fcu: goto label_1ff0fc;
        case 0x1ff100u: goto label_1ff100;
        case 0x1ff104u: goto label_1ff104;
        case 0x1ff108u: goto label_1ff108;
        case 0x1ff10cu: goto label_1ff10c;
        case 0x1ff110u: goto label_1ff110;
        case 0x1ff114u: goto label_1ff114;
        case 0x1ff118u: goto label_1ff118;
        case 0x1ff11cu: goto label_1ff11c;
        case 0x1ff120u: goto label_1ff120;
        case 0x1ff124u: goto label_1ff124;
        case 0x1ff128u: goto label_1ff128;
        case 0x1ff12cu: goto label_1ff12c;
        case 0x1ff130u: goto label_1ff130;
        case 0x1ff134u: goto label_1ff134;
        case 0x1ff138u: goto label_1ff138;
        case 0x1ff13cu: goto label_1ff13c;
        case 0x1ff140u: goto label_1ff140;
        case 0x1ff144u: goto label_1ff144;
        case 0x1ff148u: goto label_1ff148;
        case 0x1ff14cu: goto label_1ff14c;
        case 0x1ff150u: goto label_1ff150;
        case 0x1ff154u: goto label_1ff154;
        case 0x1ff158u: goto label_1ff158;
        case 0x1ff15cu: goto label_1ff15c;
        default: return;
    }

label_1fe990:
    // 0x1fe990: 0x24a513d0  addiu       $a1, $a1, 0x13D0
    ctx->pc = 0x1fe990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5072));
label_1fe994:
    // 0x1fe994: 0xaf8690b4  sw          $a2, -0x6F4C($gp)
    ctx->pc = 0x1fe994u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938804), GPR_U32(ctx, 6));
label_1fe998:
    // 0x1fe998: 0xaf8690b0  sw          $a2, -0x6F50($gp)
    ctx->pc = 0x1fe998u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938800), GPR_U32(ctx, 6));
label_1fe99c:
    // 0x1fe99c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1fe99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1fe9a0:
    // 0x1fe9a0: 0xdca50000  ld          $a1, 0x0($a1)
    ctx->pc = 0x1fe9a0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_1fe9a4:
    // 0x1fe9a4: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x1fe9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1fe9a8:
    // 0x1fe9a8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1fe9a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1fe9ac:
    // 0x1fe9ac: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x1fe9acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_1fe9b0:
    // 0x1fe9b0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1fe9b4:
    if (ctx->pc == 0x1FE9B4u) {
        ctx->pc = 0x1FE9B8u;
        goto label_1fe9b8;
    }
    ctx->pc = 0x1FE9B0u;
    {
        const bool branch_taken_0x1fe9b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe9b0) {
            ctx->pc = 0x1FE9C0u;
            goto label_1fe9c0;
        }
    }
    ctx->pc = 0x1FE9B8u;
label_1fe9b8:
    // 0x1fe9b8: 0x10000020  b           . + 4 + (0x20 << 2)
label_1fe9bc:
    if (ctx->pc == 0x1FE9BCu) {
        ctx->pc = 0x1FE9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE9B8u;
        // 0x1fe9bc: 0xaf809090  sw          $zero, -0x6F70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938768), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE9C0u;
        goto label_1fe9c0;
    }
    ctx->pc = 0x1FE9B8u;
    {
        const bool branch_taken_0x1fe9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE9B8u;
        // 0x1fe9bc: 0xaf809090  sw          $zero, -0x6F70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938768), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe9b8) {
            ctx->pc = 0x1FEA3Cu;
            goto label_1fea3c;
        }
    }
    ctx->pc = 0x1FE9C0u;
label_1fe9c0:
    // 0x1fe9c0: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x1fe9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_1fe9c4:
    // 0x1fe9c4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1fe9c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1fe9c8:
    // 0x1fe9c8: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x1fe9c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_1fe9cc:
    // 0x1fe9cc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1fe9d0:
    if (ctx->pc == 0x1FE9D0u) {
        ctx->pc = 0x1FE9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE9CCu;
        // 0x1fe9d0: 0x24041000  addiu       $a0, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE9D4u;
        goto label_1fe9d4;
    }
    ctx->pc = 0x1FE9CCu;
    {
        const bool branch_taken_0x1fe9cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE9CCu;
        // 0x1fe9d0: 0x24041000  addiu       $a0, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe9cc) {
            ctx->pc = 0x1FE9DCu;
            goto label_1fe9dc;
        }
    }
    ctx->pc = 0x1FE9D4u;
label_1fe9d4:
    // 0x1fe9d4: 0x10000019  b           . + 4 + (0x19 << 2)
label_1fe9d8:
    if (ctx->pc == 0x1FE9D8u) {
        ctx->pc = 0x1FE9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE9D4u;
        // 0x1fe9d8: 0xaf869090  sw          $a2, -0x6F70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938768), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE9DCu;
        goto label_1fe9dc;
    }
    ctx->pc = 0x1FE9D4u;
    {
        const bool branch_taken_0x1fe9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE9D4u;
        // 0x1fe9d8: 0xaf869090  sw          $a2, -0x6F70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938768), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe9d4) {
            ctx->pc = 0x1FEA3Cu;
            goto label_1fea3c;
        }
    }
    ctx->pc = 0x1FE9DCu;
label_1fe9dc:
    // 0x1fe9dc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1fe9dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1fe9e0:
    // 0x1fe9e0: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x1fe9e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_1fe9e4:
    // 0x1fe9e4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1fe9e8:
    if (ctx->pc == 0x1FE9E8u) {
        ctx->pc = 0x1FE9ECu;
        goto label_1fe9ec;
    }
    ctx->pc = 0x1FE9E4u;
    {
        const bool branch_taken_0x1fe9e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe9e4) {
            ctx->pc = 0x1FE9F8u;
            goto label_1fe9f8;
        }
    }
    ctx->pc = 0x1FE9ECu;
label_1fe9ec:
    // 0x1fe9ec: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1fe9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fe9f0:
    // 0x1fe9f0: 0x10000012  b           . + 4 + (0x12 << 2)
label_1fe9f4:
    if (ctx->pc == 0x1FE9F4u) {
        ctx->pc = 0x1FE9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE9F0u;
        // 0x1fe9f4: 0xaf849090  sw          $a0, -0x6F70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938768), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE9F8u;
        goto label_1fe9f8;
    }
    ctx->pc = 0x1FE9F0u;
    {
        const bool branch_taken_0x1fe9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE9F0u;
        // 0x1fe9f4: 0xaf849090  sw          $a0, -0x6F70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938768), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe9f0) {
            ctx->pc = 0x1FEA3Cu;
            goto label_1fea3c;
        }
    }
    ctx->pc = 0x1FE9F8u;
label_1fe9f8:
    // 0x1fe9f8: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x1fe9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_1fe9fc:
    // 0x1fe9fc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1fe9fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1fea00:
    // 0x1fea00: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x1fea00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_1fea04:
    // 0x1fea04: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1fea08:
    if (ctx->pc == 0x1FEA08u) {
        ctx->pc = 0x1FEA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA04u;
        // 0x1fea08: 0x24044000  addiu       $a0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEA0Cu;
        goto label_1fea0c;
    }
    ctx->pc = 0x1FEA04u;
    {
        const bool branch_taken_0x1fea04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA04u;
        // 0x1fea08: 0x24044000  addiu       $a0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fea04) {
            ctx->pc = 0x1FEA18u;
            goto label_1fea18;
        }
    }
    ctx->pc = 0x1FEA0Cu;
label_1fea0c:
    // 0x1fea0c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1fea0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1fea10:
    // 0x1fea10: 0x1000000a  b           . + 4 + (0xA << 2)
label_1fea14:
    if (ctx->pc == 0x1FEA14u) {
        ctx->pc = 0x1FEA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA10u;
        // 0x1fea14: 0xaf849090  sw          $a0, -0x6F70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938768), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEA18u;
        goto label_1fea18;
    }
    ctx->pc = 0x1FEA10u;
    {
        const bool branch_taken_0x1fea10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA10u;
        // 0x1fea14: 0xaf849090  sw          $a0, -0x6F70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938768), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fea10) {
            ctx->pc = 0x1FEA3Cu;
            goto label_1fea3c;
        }
    }
    ctx->pc = 0x1FEA18u;
label_1fea18:
    // 0x1fea18: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1fea18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1fea1c:
    // 0x1fea1c: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x1fea1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_1fea20:
    // 0x1fea20: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1fea24:
    if (ctx->pc == 0x1FEA24u) {
        ctx->pc = 0x1FEA28u;
        goto label_1fea28;
    }
    ctx->pc = 0x1FEA20u;
    {
        const bool branch_taken_0x1fea20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fea20) {
            ctx->pc = 0x1FEA34u;
            goto label_1fea34;
        }
    }
    ctx->pc = 0x1FEA28u;
label_1fea28:
    // 0x1fea28: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1fea28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1fea2c:
    // 0x1fea2c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1fea30:
    if (ctx->pc == 0x1FEA30u) {
        ctx->pc = 0x1FEA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA2Cu;
        // 0x1fea30: 0xaf849090  sw          $a0, -0x6F70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938768), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEA34u;
        goto label_1fea34;
    }
    ctx->pc = 0x1FEA2Cu;
    {
        const bool branch_taken_0x1fea2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA2Cu;
        // 0x1fea30: 0xaf849090  sw          $a0, -0x6F70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938768), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fea2c) {
            ctx->pc = 0x1FEA3Cu;
            goto label_1fea3c;
        }
    }
    ctx->pc = 0x1FEA34u;
label_1fea34:
    // 0x1fea34: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1fea34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1fea38:
    // 0x1fea38: 0xaf849090  sw          $a0, -0x6F70($gp)
    ctx->pc = 0x1fea38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938768), GPR_U32(ctx, 4));
label_1fea3c:
    // 0x1fea3c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1fea3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
label_1fea40:
    // 0x1fea40: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x1fea40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
label_1fea44:
    // 0x1fea44: 0x24a513cb  addiu       $a1, $a1, 0x13CB
    ctx->pc = 0x1fea44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5067));
label_1fea48:
    // 0x1fea48: 0x24845370  addiu       $a0, $a0, 0x5370
    ctx->pc = 0x1fea48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21360));
label_1fea4c:
    // 0x1fea4c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1fea4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1fea50:
    // 0x1fea50: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x1fea50u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1fea54:
    // 0x1fea54: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x1fea54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_1fea58:
    // 0x1fea58: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1fea58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1fea5c:
    // 0x1fea5c: 0x90a4003b  lbu         $a0, 0x3B($a1)
    ctx->pc = 0x1fea5cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 59)));
label_1fea60:
    // 0x1fea60: 0x28810063  slti        $at, $a0, 0x63
    ctx->pc = 0x1fea60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)99) ? 1 : 0);
label_1fea64:
    // 0x1fea64: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1fea68:
    if (ctx->pc == 0x1FEA68u) {
        ctx->pc = 0x1FEA6Cu;
        goto label_1fea6c;
    }
    ctx->pc = 0x1FEA64u;
    {
        const bool branch_taken_0x1fea64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fea64) {
            ctx->pc = 0x1FEA74u;
            goto label_1fea74;
        }
    }
    ctx->pc = 0x1FEA6Cu;
label_1fea6c:
    // 0x1fea6c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1fea70:
    if (ctx->pc == 0x1FEA70u) {
        ctx->pc = 0x1FEA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA6Cu;
        // 0x1fea70: 0xaf849098  sw          $a0, -0x6F68($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938776), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEA74u;
        goto label_1fea74;
    }
    ctx->pc = 0x1FEA6Cu;
    {
        const bool branch_taken_0x1fea6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA6Cu;
        // 0x1fea70: 0xaf849098  sw          $a0, -0x6F68($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938776), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fea6c) {
            ctx->pc = 0x1FEA7Cu;
            goto label_1fea7c;
        }
    }
    ctx->pc = 0x1FEA74u;
label_1fea74:
    // 0x1fea74: 0x24040063  addiu       $a0, $zero, 0x63
    ctx->pc = 0x1fea74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_1fea78:
    // 0x1fea78: 0xaf849098  sw          $a0, -0x6F68($gp)
    ctx->pc = 0x1fea78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938776), GPR_U32(ctx, 4));
label_1fea7c:
    // 0x1fea7c: 0xdca50030  ld          $a1, 0x30($a1)
    ctx->pc = 0x1fea7cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 5), 48)));
label_1fea80:
    // 0x1fea80: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x1fea80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_1fea84:
    // 0x1fea84: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1fea84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1fea88:
    // 0x1fea88: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x1fea88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_1fea8c:
    // 0x1fea8c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1fea90:
    if (ctx->pc == 0x1FEA90u) {
        ctx->pc = 0x1FEA94u;
        goto label_1fea94;
    }
    ctx->pc = 0x1FEA8Cu;
    {
        const bool branch_taken_0x1fea8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fea8c) {
            ctx->pc = 0x1FEAA0u;
            goto label_1feaa0;
        }
    }
    ctx->pc = 0x1FEA94u;
label_1fea94:
    // 0x1fea94: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1fea94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1fea98:
    // 0x1fea98: 0x1000000a  b           . + 4 + (0xA << 2)
label_1fea9c:
    if (ctx->pc == 0x1FEA9Cu) {
        ctx->pc = 0x1FEA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA98u;
        // 0x1fea9c: 0xaf849094  sw          $a0, -0x6F6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938772), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEAA0u;
        goto label_1feaa0;
    }
    ctx->pc = 0x1FEA98u;
    {
        const bool branch_taken_0x1fea98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA98u;
        // 0x1fea9c: 0xaf849094  sw          $a0, -0x6F6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938772), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fea98) {
            ctx->pc = 0x1FEAC4u;
            goto label_1feac4;
        }
    }
    ctx->pc = 0x1FEAA0u;
label_1feaa0:
    // 0x1feaa0: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x1feaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1feaa4:
    // 0x1feaa4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1feaa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1feaa8:
    // 0x1feaa8: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x1feaa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_1feaac:
    // 0x1feaac: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1feab0:
    if (ctx->pc == 0x1FEAB0u) {
        ctx->pc = 0x1FEAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEAACu;
        // 0x1feab0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEAB4u;
        goto label_1feab4;
    }
    ctx->pc = 0x1FEAACu;
    {
        const bool branch_taken_0x1feaac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEAACu;
        // 0x1feab0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feaac) {
            ctx->pc = 0x1FEAC0u;
            goto label_1feac0;
        }
    }
    ctx->pc = 0x1FEAB4u;
label_1feab4:
    // 0x1feab4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1feab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1feab8:
    // 0x1feab8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1feabc:
    if (ctx->pc == 0x1FEABCu) {
        ctx->pc = 0x1FEABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEAB8u;
        // 0x1feabc: 0xaf849094  sw          $a0, -0x6F6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938772), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEAC0u;
        goto label_1feac0;
    }
    ctx->pc = 0x1FEAB8u;
    {
        const bool branch_taken_0x1feab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEAB8u;
        // 0x1feabc: 0xaf849094  sw          $a0, -0x6F6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938772), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feab8) {
            ctx->pc = 0x1FEAC4u;
            goto label_1feac4;
        }
    }
    ctx->pc = 0x1FEAC0u;
label_1feac0:
    // 0x1feac0: 0xaf849094  sw          $a0, -0x6F6C($gp)
    ctx->pc = 0x1feac0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938772), GPR_U32(ctx, 4));
label_1feac4:
    // 0x1feac4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1feac4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1feac8:
    // 0x1feac8: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1feac8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1feacc:
    // 0x1feacc: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1feaccu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fead0:
    // 0x1fead0: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x1fead0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
label_1fead4:
    // 0x1fead4: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x1fead4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_1fead8:
    // 0x1fead8: 0x2508c990  addiu       $t0, $t0, -0x3670
    ctx->pc = 0x1fead8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294953360));
label_1feadc:
    // 0x1feadc: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x1feadcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
label_1feae0:
    // 0x1feae0: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1feae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_1feae4:
    // 0x1feae4: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x1feae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_1feae8:
    // 0x1feae8: 0x24844ae0  addiu       $a0, $a0, 0x4AE0
    ctx->pc = 0x1feae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19168));
label_1feaec:
    // 0x1feaec: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x1feaecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1feaf0:
    // 0x1feaf0: 0x24690000  addiu       $t1, $v1, 0x0
    ctx->pc = 0x1feaf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1feaf4:
    // 0x1feaf4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1feaf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1feaf8:
    // 0x1feaf8: 0x12c1821  addu        $v1, $t1, $t4
    ctx->pc = 0x1feaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_1feafc:
    // 0x1feafc: 0x34214a30  ori         $at, $at, 0x4A30
    ctx->pc = 0x1feafcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18992);
label_1feb00:
    // 0x1feb00: 0x615821  addu        $t3, $v1, $at
    ctx->pc = 0x1feb00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_1feb04:
    // 0x1feb04: 0x91680000  lbu         $t0, 0x0($t3)
    ctx->pc = 0x1feb04u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
label_1feb08:
    // 0x1feb08: 0x1106000c  beq         $t0, $a2, . + 4 + (0xC << 2)
label_1feb0c:
    if (ctx->pc == 0x1FEB0Cu) {
        ctx->pc = 0x1FEB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEB08u;
        // 0x1feb0c: 0xad1821  addu        $v1, $a1, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEB10u;
        goto label_1feb10;
    }
    ctx->pc = 0x1FEB08u;
    {
        const bool branch_taken_0x1feb08 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 6));
        ctx->pc = 0x1FEB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEB08u;
        // 0x1feb0c: 0xad1821  addu        $v1, $a1, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feb08) {
            ctx->pc = 0x1FEB3Cu;
            goto label_1feb3c;
        }
    }
    ctx->pc = 0x1FEB10u;
label_1feb10:
    // 0x1feb10: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x1feb10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
label_1feb14:
    // 0x1feb14: 0x91680001  lbu         $t0, 0x1($t3)
    ctx->pc = 0x1feb14u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
label_1feb18:
    // 0x1feb18: 0x29010063  slti        $at, $t0, 0x63
    ctx->pc = 0x1feb18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)99) ? 1 : 0);
label_1feb1c:
    // 0x1feb1c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1feb20:
    if (ctx->pc == 0x1FEB20u) {
        ctx->pc = 0x1FEB24u;
        goto label_1feb24;
    }
    ctx->pc = 0x1FEB1Cu;
    {
        const bool branch_taken_0x1feb1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1feb1c) {
            ctx->pc = 0x1FEB2Cu;
            goto label_1feb2c;
        }
    }
    ctx->pc = 0x1FEB24u;
label_1feb24:
    // 0x1feb24: 0x10000003  b           . + 4 + (0x3 << 2)
label_1feb28:
    if (ctx->pc == 0x1FEB28u) {
        ctx->pc = 0x1FEB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEB24u;
        // 0x1feb28: 0x8d1821  addu        $v1, $a0, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEB2Cu;
        goto label_1feb2c;
    }
    ctx->pc = 0x1FEB24u;
    {
        const bool branch_taken_0x1feb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEB24u;
        // 0x1feb28: 0x8d1821  addu        $v1, $a0, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feb24) {
            ctx->pc = 0x1FEB34u;
            goto label_1feb34;
        }
    }
    ctx->pc = 0x1FEB2Cu;
label_1feb2c:
    // 0x1feb2c: 0x24080063  addiu       $t0, $zero, 0x63
    ctx->pc = 0x1feb2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_1feb30:
    // 0x1feb30: 0x8d1821  addu        $v1, $a0, $t5
    ctx->pc = 0x1feb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
label_1feb34:
    // 0x1feb34: 0x10000006  b           . + 4 + (0x6 << 2)
label_1feb38:
    if (ctx->pc == 0x1FEB38u) {
        ctx->pc = 0x1FEB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEB34u;
        // 0x1feb38: 0xac680000  sw          $t0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEB3Cu;
        goto label_1feb3c;
    }
    ctx->pc = 0x1FEB34u;
    {
        const bool branch_taken_0x1feb34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEB34u;
        // 0x1feb38: 0xac680000  sw          $t0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feb34) {
            ctx->pc = 0x1FEB50u;
            goto label_1feb50;
        }
    }
    ctx->pc = 0x1FEB3Cu;
label_1feb3c:
    // 0x1feb3c: 0x0  nop
    ctx->pc = 0x1feb3cu;
    // NOP
label_1feb40:
    // 0x1feb40: 0xad1821  addu        $v1, $a1, $t5
    ctx->pc = 0x1feb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
label_1feb44:
    // 0x1feb44: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1feb44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_1feb48:
    // 0x1feb48: 0x8d1821  addu        $v1, $a0, $t5
    ctx->pc = 0x1feb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
label_1feb4c:
    // 0x1feb4c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1feb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_1feb50:
    // 0x1feb50: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1feb50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1feb54:
    // 0x1feb54: 0x29430003  slti        $v1, $t2, 0x3
    ctx->pc = 0x1feb54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)3) ? 1 : 0);
label_1feb58:
    // 0x1feb58: 0x258c0002  addiu       $t4, $t4, 0x2
    ctx->pc = 0x1feb58u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
label_1feb5c:
    // 0x1feb5c: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
label_1feb60:
    if (ctx->pc == 0x1FEB60u) {
        ctx->pc = 0x1FEB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEB5Cu;
        // 0x1feb60: 0x25ad0004  addiu       $t5, $t5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEB64u;
        goto label_1feb64;
    }
    ctx->pc = 0x1FEB5Cu;
    {
        const bool branch_taken_0x1feb5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEB5Cu;
        // 0x1feb60: 0x25ad0004  addiu       $t5, $t5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feb5c) {
            ctx->pc = 0x1FEAF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1feaf4;
        }
    }
    ctx->pc = 0x1FEB64u;
label_1feb64:
    // 0x1feb64: 0x3e00008  jr          $ra
label_1feb68:
    if (ctx->pc == 0x1FEB68u) {
        ctx->pc = 0x1FEB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEB64u;
        // 0x1feb68: 0xaf879088  sw          $a3, -0x6F78($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938760), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEB6Cu;
        goto label_1feb6c;
    }
    ctx->pc = 0x1FEB64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEB64u;
        // 0x1feb68: 0xaf879088  sw          $a3, -0x6F78($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938760), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEB64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEB6Cu;
label_1feb6c:
    // 0x1feb6c: 0x0  nop
    ctx->pc = 0x1feb6cu;
    // NOP
label_1feb70:
    // 0x1feb70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1feb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1feb74:
    // 0x1feb74: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x1feb74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1feb78:
    // 0x1feb78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1feb78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1feb7c:
    // 0x1feb7c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1feb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1feb80:
    // 0x1feb80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1feb80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1feb84:
    // 0x1feb84: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x1feb84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
label_1feb88:
    // 0x1feb88: 0xaf8690a8  sw          $a2, -0x6F58($gp)
    ctx->pc = 0x1feb88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938792), GPR_U32(ctx, 6));
label_1feb8c:
    // 0x1feb8c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1feb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1feb90:
    // 0x1feb90: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1feb90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1feb94:
    // 0x1feb94: 0xaf8490a0  sw          $a0, -0x6F60($gp)
    ctx->pc = 0x1feb94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938784), GPR_U32(ctx, 4));
label_1feb98:
    // 0x1feb98: 0x246303b0  addiu       $v1, $v1, 0x3B0
    ctx->pc = 0x1feb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 944));
label_1feb9c:
    // 0x1feb9c: 0xaf8890ac  sw          $t0, -0x6F54($gp)
    ctx->pc = 0x1feb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938796), GPR_U32(ctx, 8));
label_1feba0:
    // 0x1feba0: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1feba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1feba4:
    // 0x1feba4: 0xaf8790a4  sw          $a3, -0x6F5C($gp)
    ctx->pc = 0x1feba4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938788), GPR_U32(ctx, 7));
label_1feba8:
    // 0x1feba8: 0xaf85909c  sw          $a1, -0x6F64($gp)
    ctx->pc = 0x1feba8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938780), GPR_U32(ctx, 5));
label_1febac:
    // 0x1febac: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x1febacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1febb0:
    // 0x1febb0: 0xaf8690b4  sw          $a2, -0x6F4C($gp)
    ctx->pc = 0x1febb0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938804), GPR_U32(ctx, 6));
label_1febb4:
    // 0x1febb4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1febb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1febb8:
    // 0x1febb8: 0xaf8090b0  sw          $zero, -0x6F50($gp)
    ctx->pc = 0x1febb8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938800), GPR_U32(ctx, 0));
label_1febbc:
    // 0x1febbc: 0xdc840000  ld          $a0, 0x0($a0)
    ctx->pc = 0x1febbcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_1febc0:
    // 0x1febc0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1febc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1febc4:
    // 0x1febc4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1febc8:
    if (ctx->pc == 0x1FEBC8u) {
        ctx->pc = 0x1FEBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEBC4u;
        // 0x1febc8: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEBCCu;
        goto label_1febcc;
    }
    ctx->pc = 0x1FEBC4u;
    {
        const bool branch_taken_0x1febc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEBC4u;
        // 0x1febc8: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1febc4) {
            ctx->pc = 0x1FEBD4u;
            goto label_1febd4;
        }
    }
    ctx->pc = 0x1FEBCCu;
label_1febcc:
    // 0x1febcc: 0x10000020  b           . + 4 + (0x20 << 2)
label_1febd0:
    if (ctx->pc == 0x1FEBD0u) {
        ctx->pc = 0x1FEBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEBCCu;
        // 0x1febd0: 0xaf809090  sw          $zero, -0x6F70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938768), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEBD4u;
        goto label_1febd4;
    }
    ctx->pc = 0x1FEBCCu;
    {
        const bool branch_taken_0x1febcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEBCCu;
        // 0x1febd0: 0xaf809090  sw          $zero, -0x6F70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938768), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1febcc) {
            ctx->pc = 0x1FEC50u;
            goto label_1fec50;
        }
    }
    ctx->pc = 0x1FEBD4u;
label_1febd4:
    // 0x1febd4: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x1febd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_1febd8:
    // 0x1febd8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1febd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1febdc:
    // 0x1febdc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1febdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1febe0:
    // 0x1febe0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1febe4:
    if (ctx->pc == 0x1FEBE4u) {
        ctx->pc = 0x1FEBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEBE0u;
        // 0x1febe4: 0x24031000  addiu       $v1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEBE8u;
        goto label_1febe8;
    }
    ctx->pc = 0x1FEBE0u;
    {
        const bool branch_taken_0x1febe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEBE0u;
        // 0x1febe4: 0x24031000  addiu       $v1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1febe0) {
            ctx->pc = 0x1FEBF0u;
            goto label_1febf0;
        }
    }
    ctx->pc = 0x1FEBE8u;
label_1febe8:
    // 0x1febe8: 0x10000019  b           . + 4 + (0x19 << 2)
label_1febec:
    if (ctx->pc == 0x1FEBECu) {
        ctx->pc = 0x1FEBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEBE8u;
        // 0x1febec: 0xaf869090  sw          $a2, -0x6F70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938768), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEBF0u;
        goto label_1febf0;
    }
    ctx->pc = 0x1FEBE8u;
    {
        const bool branch_taken_0x1febe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEBE8u;
        // 0x1febec: 0xaf869090  sw          $a2, -0x6F70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938768), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1febe8) {
            ctx->pc = 0x1FEC50u;
            goto label_1fec50;
        }
    }
    ctx->pc = 0x1FEBF0u;
label_1febf0:
    // 0x1febf0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1febf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1febf4:
    // 0x1febf4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1febf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1febf8:
    // 0x1febf8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1febfc:
    if (ctx->pc == 0x1FEBFCu) {
        ctx->pc = 0x1FEC00u;
        goto label_1fec00;
    }
    ctx->pc = 0x1FEBF8u;
    {
        const bool branch_taken_0x1febf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1febf8) {
            ctx->pc = 0x1FEC0Cu;
            goto label_1fec0c;
        }
    }
    ctx->pc = 0x1FEC00u;
label_1fec00:
    // 0x1fec00: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1fec00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fec04:
    // 0x1fec04: 0x10000012  b           . + 4 + (0x12 << 2)
label_1fec08:
    if (ctx->pc == 0x1FEC08u) {
        ctx->pc = 0x1FEC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC04u;
        // 0x1fec08: 0xaf839090  sw          $v1, -0x6F70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938768), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEC0Cu;
        goto label_1fec0c;
    }
    ctx->pc = 0x1FEC04u;
    {
        const bool branch_taken_0x1fec04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC04u;
        // 0x1fec08: 0xaf839090  sw          $v1, -0x6F70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938768), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fec04) {
            ctx->pc = 0x1FEC50u;
            goto label_1fec50;
        }
    }
    ctx->pc = 0x1FEC0Cu;
label_1fec0c:
    // 0x1fec0c: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x1fec0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_1fec10:
    // 0x1fec10: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1fec10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1fec14:
    // 0x1fec14: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1fec14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1fec18:
    // 0x1fec18: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1fec1c:
    if (ctx->pc == 0x1FEC1Cu) {
        ctx->pc = 0x1FEC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC18u;
        // 0x1fec1c: 0x24034000  addiu       $v1, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEC20u;
        goto label_1fec20;
    }
    ctx->pc = 0x1FEC18u;
    {
        const bool branch_taken_0x1fec18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC18u;
        // 0x1fec1c: 0x24034000  addiu       $v1, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fec18) {
            ctx->pc = 0x1FEC2Cu;
            goto label_1fec2c;
        }
    }
    ctx->pc = 0x1FEC20u;
label_1fec20:
    // 0x1fec20: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1fec20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1fec24:
    // 0x1fec24: 0x1000000a  b           . + 4 + (0xA << 2)
label_1fec28:
    if (ctx->pc == 0x1FEC28u) {
        ctx->pc = 0x1FEC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC24u;
        // 0x1fec28: 0xaf839090  sw          $v1, -0x6F70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938768), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEC2Cu;
        goto label_1fec2c;
    }
    ctx->pc = 0x1FEC24u;
    {
        const bool branch_taken_0x1fec24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC24u;
        // 0x1fec28: 0xaf839090  sw          $v1, -0x6F70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938768), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fec24) {
            ctx->pc = 0x1FEC50u;
            goto label_1fec50;
        }
    }
    ctx->pc = 0x1FEC2Cu;
label_1fec2c:
    // 0x1fec2c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1fec2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1fec30:
    // 0x1fec30: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1fec30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1fec34:
    // 0x1fec34: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1fec38:
    if (ctx->pc == 0x1FEC38u) {
        ctx->pc = 0x1FEC3Cu;
        goto label_1fec3c;
    }
    ctx->pc = 0x1FEC34u;
    {
        const bool branch_taken_0x1fec34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fec34) {
            ctx->pc = 0x1FEC48u;
            goto label_1fec48;
        }
    }
    ctx->pc = 0x1FEC3Cu;
label_1fec3c:
    // 0x1fec3c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1fec3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1fec40:
    // 0x1fec40: 0x10000003  b           . + 4 + (0x3 << 2)
label_1fec44:
    if (ctx->pc == 0x1FEC44u) {
        ctx->pc = 0x1FEC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC40u;
        // 0x1fec44: 0xaf839090  sw          $v1, -0x6F70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938768), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEC48u;
        goto label_1fec48;
    }
    ctx->pc = 0x1FEC40u;
    {
        const bool branch_taken_0x1fec40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC40u;
        // 0x1fec44: 0xaf839090  sw          $v1, -0x6F70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938768), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fec40) {
            ctx->pc = 0x1FEC50u;
            goto label_1fec50;
        }
    }
    ctx->pc = 0x1FEC48u;
label_1fec48:
    // 0x1fec48: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1fec48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1fec4c:
    // 0x1fec4c: 0xaf839090  sw          $v1, -0x6F70($gp)
    ctx->pc = 0x1fec4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938768), GPR_U32(ctx, 3));
label_1fec50:
    // 0x1fec50: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x1fec50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
label_1fec54:
    // 0x1fec54: 0x246303aa  addiu       $v1, $v1, 0x3AA
    ctx->pc = 0x1fec54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 938));
label_1fec58:
    // 0x1fec58: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1fec58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1fec5c:
    // 0x1fec5c: 0xc0657f0  jal         func_195FC0
label_1fec60:
    if (ctx->pc == 0x1FEC60u) {
        ctx->pc = 0x1FEC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC5Cu;
        // 0x1fec60: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEC64u;
        goto label_1fec64;
    }
    ctx->pc = 0x1FEC5Cu;
    SET_GPR_U32(ctx, 31, 0x1FEC64u);
    ctx->pc = 0x1FEC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEC5Cu;
    // 0x1fec60: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195FC0u, 0x1FEC5Cu, 0x1FEC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEC64u;
label_1fec64:
    // 0x1fec64: 0x9043003b  lbu         $v1, 0x3B($v0)
    ctx->pc = 0x1fec64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 59)));
label_1fec68:
    // 0x1fec68: 0x28610063  slti        $at, $v1, 0x63
    ctx->pc = 0x1fec68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)99) ? 1 : 0);
label_1fec6c:
    // 0x1fec6c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1fec70:
    if (ctx->pc == 0x1FEC70u) {
        ctx->pc = 0x1FEC74u;
        goto label_1fec74;
    }
    ctx->pc = 0x1FEC6Cu;
    {
        const bool branch_taken_0x1fec6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fec6c) {
            ctx->pc = 0x1FEC7Cu;
            goto label_1fec7c;
        }
    }
    ctx->pc = 0x1FEC74u;
label_1fec74:
    // 0x1fec74: 0x10000003  b           . + 4 + (0x3 << 2)
label_1fec78:
    if (ctx->pc == 0x1FEC78u) {
        ctx->pc = 0x1FEC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC74u;
        // 0x1fec78: 0xaf839098  sw          $v1, -0x6F68($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938776), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEC7Cu;
        goto label_1fec7c;
    }
    ctx->pc = 0x1FEC74u;
    {
        const bool branch_taken_0x1fec74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC74u;
        // 0x1fec78: 0xaf839098  sw          $v1, -0x6F68($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938776), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fec74) {
            ctx->pc = 0x1FEC84u;
            goto label_1fec84;
        }
    }
    ctx->pc = 0x1FEC7Cu;
label_1fec7c:
    // 0x1fec7c: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x1fec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_1fec80:
    // 0x1fec80: 0xaf839098  sw          $v1, -0x6F68($gp)
    ctx->pc = 0x1fec80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938776), GPR_U32(ctx, 3));
label_1fec84:
    // 0x1fec84: 0xdc440030  ld          $a0, 0x30($v0)
    ctx->pc = 0x1fec84u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 48)));
label_1fec88:
    // 0x1fec88: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x1fec88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_1fec8c:
    // 0x1fec8c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1fec8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1fec90:
    // 0x1fec90: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1fec90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1fec94:
    // 0x1fec94: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1fec98:
    if (ctx->pc == 0x1FEC98u) {
        ctx->pc = 0x1FEC9Cu;
        goto label_1fec9c;
    }
    ctx->pc = 0x1FEC94u;
    {
        const bool branch_taken_0x1fec94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fec94) {
            ctx->pc = 0x1FECA8u;
            goto label_1feca8;
        }
    }
    ctx->pc = 0x1FEC9Cu;
label_1fec9c:
    // 0x1fec9c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1fec9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1feca0:
    // 0x1feca0: 0x1000000a  b           . + 4 + (0xA << 2)
label_1feca4:
    if (ctx->pc == 0x1FECA4u) {
        ctx->pc = 0x1FECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FECA0u;
        // 0x1feca4: 0xaf839094  sw          $v1, -0x6F6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938772), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FECA8u;
        goto label_1feca8;
    }
    ctx->pc = 0x1FECA0u;
    {
        const bool branch_taken_0x1feca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FECA0u;
        // 0x1feca4: 0xaf839094  sw          $v1, -0x6F6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938772), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feca0) {
            ctx->pc = 0x1FECCCu;
            goto label_1feccc;
        }
    }
    ctx->pc = 0x1FECA8u;
label_1feca8:
    // 0x1feca8: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x1feca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1fecac:
    // 0x1fecac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1fecacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1fecb0:
    // 0x1fecb0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1fecb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1fecb4:
    // 0x1fecb4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1fecb8:
    if (ctx->pc == 0x1FECB8u) {
        ctx->pc = 0x1FECB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FECB4u;
        // 0x1fecb8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FECBCu;
        goto label_1fecbc;
    }
    ctx->pc = 0x1FECB4u;
    {
        const bool branch_taken_0x1fecb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FECB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FECB4u;
        // 0x1fecb8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fecb4) {
            ctx->pc = 0x1FECC8u;
            goto label_1fecc8;
        }
    }
    ctx->pc = 0x1FECBCu;
label_1fecbc:
    // 0x1fecbc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1fecbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1fecc0:
    // 0x1fecc0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1fecc4:
    if (ctx->pc == 0x1FECC4u) {
        ctx->pc = 0x1FECC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FECC0u;
        // 0x1fecc4: 0xaf839094  sw          $v1, -0x6F6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938772), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FECC8u;
        goto label_1fecc8;
    }
    ctx->pc = 0x1FECC0u;
    {
        const bool branch_taken_0x1fecc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FECC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FECC0u;
        // 0x1fecc4: 0xaf839094  sw          $v1, -0x6F6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938772), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fecc0) {
            ctx->pc = 0x1FECCCu;
            goto label_1feccc;
        }
    }
    ctx->pc = 0x1FECC8u;
label_1fecc8:
    // 0x1fecc8: 0xaf839094  sw          $v1, -0x6F6C($gp)
    ctx->pc = 0x1fecc8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938772), GPR_U32(ctx, 3));
label_1feccc:
    // 0x1feccc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fecccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fecd0:
    // 0x1fecd0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1fecd0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fecd4:
    // 0x1fecd4: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1fecd4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fecd8:
    // 0x1fecd8: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x1fecd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_1fecdc:
    // 0x1fecdc: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x1fecdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
label_1fece0:
    // 0x1fece0: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x1fece0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
label_1fece4:
    // 0x1fece4: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x1fece4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_1fece8:
    // 0x1fece8: 0x24844ae0  addiu       $a0, $a0, 0x4AE0
    ctx->pc = 0x1fece8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19168));
label_1fecec:
    // 0x1fecec: 0x2508c990  addiu       $t0, $t0, -0x3670
    ctx->pc = 0x1fececu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294953360));
label_1fecf0:
    // 0x1fecf0: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x1fecf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1fecf4:
    // 0x1fecf4: 0x8f87909c  lw          $a3, -0x6F64($gp)
    ctx->pc = 0x1fecf4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938780)));
label_1fecf8:
    // 0x1fecf8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1fecf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1fecfc:
    // 0x1fecfc: 0x34213a10  ori         $at, $at, 0x3A10
    ctx->pc = 0x1fecfcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14864);
label_1fed00:
    // 0x1fed00: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x1fed00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_1fed04:
    // 0x1fed04: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1fed04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1fed08:
    // 0x1fed08: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1fed08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1fed0c:
    // 0x1fed0c: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1fed0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_1fed10:
    // 0x1fed10: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1fed10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1fed14:
    // 0x1fed14: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x1fed14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_1fed18:
    // 0x1fed18: 0x615021  addu        $t2, $v1, $at
    ctx->pc = 0x1fed18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_1fed1c:
    // 0x1fed1c: 0x91470000  lbu         $a3, 0x0($t2)
    ctx->pc = 0x1fed1cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_1fed20:
    // 0x1fed20: 0x10e6000c  beq         $a3, $a2, . + 4 + (0xC << 2)
label_1fed24:
    if (ctx->pc == 0x1FED24u) {
        ctx->pc = 0x1FED24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED20u;
        // 0x1fed24: 0xac1821  addu        $v1, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FED28u;
        goto label_1fed28;
    }
    ctx->pc = 0x1FED20u;
    {
        const bool branch_taken_0x1fed20 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x1FED24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED20u;
        // 0x1fed24: 0xac1821  addu        $v1, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed20) {
            ctx->pc = 0x1FED54u;
            goto label_1fed54;
        }
    }
    ctx->pc = 0x1FED28u;
label_1fed28:
    // 0x1fed28: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x1fed28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_1fed2c:
    // 0x1fed2c: 0x91470001  lbu         $a3, 0x1($t2)
    ctx->pc = 0x1fed2cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
label_1fed30:
    // 0x1fed30: 0x28e10063  slti        $at, $a3, 0x63
    ctx->pc = 0x1fed30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)99) ? 1 : 0);
label_1fed34:
    // 0x1fed34: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1fed38:
    if (ctx->pc == 0x1FED38u) {
        ctx->pc = 0x1FED3Cu;
        goto label_1fed3c;
    }
    ctx->pc = 0x1FED34u;
    {
        const bool branch_taken_0x1fed34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fed34) {
            ctx->pc = 0x1FED44u;
            goto label_1fed44;
        }
    }
    ctx->pc = 0x1FED3Cu;
label_1fed3c:
    // 0x1fed3c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1fed40:
    if (ctx->pc == 0x1FED40u) {
        ctx->pc = 0x1FED40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED3Cu;
        // 0x1fed40: 0x8c1821  addu        $v1, $a0, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FED44u;
        goto label_1fed44;
    }
    ctx->pc = 0x1FED3Cu;
    {
        const bool branch_taken_0x1fed3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FED40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED3Cu;
        // 0x1fed40: 0x8c1821  addu        $v1, $a0, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed3c) {
            ctx->pc = 0x1FED4Cu;
            goto label_1fed4c;
        }
    }
    ctx->pc = 0x1FED44u;
label_1fed44:
    // 0x1fed44: 0x24070063  addiu       $a3, $zero, 0x63
    ctx->pc = 0x1fed44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_1fed48:
    // 0x1fed48: 0x8c1821  addu        $v1, $a0, $t4
    ctx->pc = 0x1fed48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
label_1fed4c:
    // 0x1fed4c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1fed50:
    if (ctx->pc == 0x1FED50u) {
        ctx->pc = 0x1FED50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED4Cu;
        // 0x1fed50: 0xac670000  sw          $a3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FED54u;
        goto label_1fed54;
    }
    ctx->pc = 0x1FED4Cu;
    {
        const bool branch_taken_0x1fed4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FED50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED4Cu;
        // 0x1fed50: 0xac670000  sw          $a3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed4c) {
            ctx->pc = 0x1FED68u;
            goto label_1fed68;
        }
    }
    ctx->pc = 0x1FED54u;
label_1fed54:
    // 0x1fed54: 0x0  nop
    ctx->pc = 0x1fed54u;
    // NOP
label_1fed58:
    // 0x1fed58: 0xac1821  addu        $v1, $a1, $t4
    ctx->pc = 0x1fed58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
label_1fed5c:
    // 0x1fed5c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1fed5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_1fed60:
    // 0x1fed60: 0x8c1821  addu        $v1, $a0, $t4
    ctx->pc = 0x1fed60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
label_1fed64:
    // 0x1fed64: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1fed64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_1fed68:
    // 0x1fed68: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fed68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1fed6c:
    // 0x1fed6c: 0x29230005  slti        $v1, $t1, 0x5
    ctx->pc = 0x1fed6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)5) ? 1 : 0);
label_1fed70:
    // 0x1fed70: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x1fed70u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
label_1fed74:
    // 0x1fed74: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
label_1fed78:
    if (ctx->pc == 0x1FED78u) {
        ctx->pc = 0x1FED78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED74u;
        // 0x1fed78: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FED7Cu;
        goto label_1fed7c;
    }
    ctx->pc = 0x1FED74u;
    {
        const bool branch_taken_0x1fed74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FED78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED74u;
        // 0x1fed78: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed74) {
            ctx->pc = 0x1FECF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fecf4;
        }
    }
    ctx->pc = 0x1FED7Cu;
label_1fed7c:
    // 0x1fed7c: 0xaf909088  sw          $s0, -0x6F78($gp)
    ctx->pc = 0x1fed7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938760), GPR_U32(ctx, 16));
label_1fed80:
    // 0x1fed80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fed80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fed84:
    // 0x1fed84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fed84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fed88:
    // 0x1fed88: 0x3e00008  jr          $ra
label_1fed8c:
    if (ctx->pc == 0x1FED8Cu) {
        ctx->pc = 0x1FED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED88u;
        // 0x1fed8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FED90u;
        goto label_1fed90;
    }
    ctx->pc = 0x1FED88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED88u;
        // 0x1fed8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FED88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FED90u;
label_1fed90:
    // 0x1fed90: 0x8f83908c  lw          $v1, -0x6F74($gp)
    ctx->pc = 0x1fed90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938764)));
label_1fed94:
    // 0x1fed94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fed94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1fed98:
    // 0x1fed98: 0x3e00008  jr          $ra
label_1fed9c:
    if (ctx->pc == 0x1FED9Cu) {
        ctx->pc = 0x1FED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED98u;
        // 0x1fed9c: 0xaf83908c  sw          $v1, -0x6F74($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938764), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEDA0u;
        goto label_1feda0;
    }
    ctx->pc = 0x1FED98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED98u;
        // 0x1fed9c: 0xaf83908c  sw          $v1, -0x6F74($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938764), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FED98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEDA0u;
label_1feda0:
    // 0x1feda0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1feda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_1feda4:
    // 0x1feda4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1feda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1feda8:
    // 0x1feda8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1feda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1fedac:
    // 0x1fedac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1fedacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1fedb0:
    // 0x1fedb0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1fedb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1fedb4:
    // 0x1fedb4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1fedb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1fedb8:
    // 0x1fedb8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1fedb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1fedbc:
    // 0x1fedbc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fedbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1fedc0:
    // 0x1fedc0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fedc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1fedc4:
    // 0x1fedc4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fedc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fedc8:
    // 0x1fedc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fedc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fedcc:
    // 0x1fedcc: 0x8f8390b4  lw          $v1, -0x6F4C($gp)
    ctx->pc = 0x1fedccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938804)));
label_1fedd0:
    // 0x1fedd0: 0x106003a9  beqz        $v1, . + 4 + (0x3A9 << 2)
label_1fedd4:
    if (ctx->pc == 0x1FEDD4u) {
        ctx->pc = 0x1FEDD8u;
        goto label_1fedd8;
    }
    ctx->pc = 0x1FEDD0u;
    {
        const bool branch_taken_0x1fedd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fedd0) {
            ctx->pc = 0x1FFC78u;
            { ctx->pc = 0x1ffc78; return; }
        }
    }
    ctx->pc = 0x1FEDD8u;
label_1fedd8:
    // 0x1fedd8: 0x8f8390b0  lw          $v1, -0x6F50($gp)
    ctx->pc = 0x1fedd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938800)));
label_1feddc:
    // 0x1feddc: 0x14600242  bnez        $v1, . + 4 + (0x242 << 2)
label_1fede0:
    if (ctx->pc == 0x1FEDE0u) {
        ctx->pc = 0x1FEDE4u;
        goto label_1fede4;
    }
    ctx->pc = 0x1FEDDCu;
    {
        const bool branch_taken_0x1feddc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1feddc) {
            ctx->pc = 0x1FF6E8u;
            { ctx->pc = 0x1ff6e8; return; }
        }
    }
    ctx->pc = 0x1FEDE4u;
label_1fede4:
    // 0x1fede4: 0x8f83909c  lw          $v1, -0x6F64($gp)
    ctx->pc = 0x1fede4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938780)));
label_1fede8:
    // 0x1fede8: 0x286100ab  slti        $at, $v1, 0xAB
    ctx->pc = 0x1fede8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)171) ? 1 : 0);
label_1fedec:
    // 0x1fedec: 0x102003a2  beqz        $at, . + 4 + (0x3A2 << 2)
label_1fedf0:
    if (ctx->pc == 0x1FEDF0u) {
        ctx->pc = 0x1FEDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEDECu;
        // 0x1fedf0: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEDF4u;
        goto label_1fedf4;
    }
    ctx->pc = 0x1FEDECu;
    {
        const bool branch_taken_0x1fedec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEDECu;
        // 0x1fedf0: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fedec) {
            ctx->pc = 0x1FFC78u;
            { ctx->pc = 0x1ffc78; return; }
        }
    }
    ctx->pc = 0x1FEDF4u;
label_1fedf4:
    // 0x1fedf4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1fedf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_1fedf8:
    // 0x1fedf8: 0x8c273ffc  lw          $a3, 0x3FFC($at)
    ctx->pc = 0x1fedf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1fedfc:
    // 0x1fedfc: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x1fedfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
label_1fee00:
    // 0x1fee00: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x1fee00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_1fee04:
    // 0x1fee04: 0x8f8390ac  lw          $v1, -0x6F54($gp)
    ctx->pc = 0x1fee04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938796)));
label_1fee08:
    // 0x1fee08: 0x8f9090a8  lw          $s0, -0x6F58($gp)
    ctx->pc = 0x1fee08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938792)));
label_1fee0c:
    // 0x1fee0c: 0x24844b20  addiu       $a0, $a0, 0x4B20
    ctx->pc = 0x1fee0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19232));
label_1fee10:
    // 0x1fee10: 0x8f9190a4  lw          $s1, -0x6F5C($gp)
    ctx->pc = 0x1fee10u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938788)));
label_1fee14:
    // 0x1fee14: 0x73140  sll         $a2, $a3, 5
    ctx->pc = 0x1fee14u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_1fee18:
    // 0x1fee18: 0x728c0  sll         $a1, $a3, 3
    ctx->pc = 0x1fee18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1fee1c:
    // 0x1fee1c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1fee1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1fee20:
    // 0x1fee20: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1fee20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_1fee24:
    // 0x1fee24: 0xa71023  subu        $v0, $a1, $a3
    ctx->pc = 0x1fee24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1fee28:
    // 0x1fee28: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1fee28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1fee2c:
    // 0x1fee2c: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x1fee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1fee30:
    // 0x1fee30: 0x21240  sll         $v0, $v0, 9
    ctx->pc = 0x1fee30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
label_1fee34:
    // 0x1fee34: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_1fee38:
    if (ctx->pc == 0x1FEE38u) {
        ctx->pc = 0x1FEE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEE34u;
        // 0x1fee38: 0x829021  addu        $s2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEE3Cu;
        goto label_1fee3c;
    }
    ctx->pc = 0x1FEE34u;
    {
        const bool branch_taken_0x1fee34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEE34u;
        // 0x1fee38: 0x829021  addu        $s2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fee34) {
            ctx->pc = 0x1FEE64u;
            goto label_1fee64;
        }
    }
    ctx->pc = 0x1FEE3Cu;
label_1fee3c:
    // 0x1fee3c: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x1fee3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1fee40:
    // 0x1fee40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fee40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fee44:
    // 0x1fee44: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1fee44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fee48:
    // 0x1fee48: 0x240700d0  addiu       $a3, $zero, 0xD0
    ctx->pc = 0x1fee48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1fee4c:
    // 0x1fee4c: 0x24080160  addiu       $t0, $zero, 0x160
    ctx->pc = 0x1fee4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
label_1fee50:
    // 0x1fee50: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1fee50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1fee54:
    // 0x1fee54: 0xc07c17c  jal         func_1F05F0
label_1fee58:
    if (ctx->pc == 0x1FEE58u) {
        ctx->pc = 0x1FEE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEE54u;
        // 0x1fee58: 0x240a0050  addiu       $t2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEE5Cu;
        goto label_1fee5c;
    }
    ctx->pc = 0x1FEE54u;
    SET_GPR_U32(ctx, 31, 0x1FEE5Cu);
    ctx->pc = 0x1FEE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEE54u;
    // 0x1fee58: 0x240a0050  addiu       $t2, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F05F0u;
    { ctx->pc = 0x1f05f0; return; }
    ctx->pc = 0x1FEE5Cu;
label_1fee5c:
    // 0x1fee5c: 0x1000000a  b           . + 4 + (0xA << 2)
label_1fee60:
    if (ctx->pc == 0x1FEE60u) {
        ctx->pc = 0x1FEE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEE5Cu;
        // 0x1fee60: 0x26020008  addiu       $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEE64u;
        goto label_1fee64;
    }
    ctx->pc = 0x1FEE5Cu;
    {
        const bool branch_taken_0x1fee5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEE5Cu;
        // 0x1fee60: 0x26020008  addiu       $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fee5c) {
            ctx->pc = 0x1FEE88u;
            goto label_1fee88;
        }
    }
    ctx->pc = 0x1FEE64u;
label_1fee64:
    // 0x1fee64: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x1fee64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1fee68:
    // 0x1fee68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fee68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fee6c:
    // 0x1fee6c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1fee6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fee70:
    // 0x1fee70: 0x24070198  addiu       $a3, $zero, 0x198
    ctx->pc = 0x1fee70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
label_1fee74:
    // 0x1fee74: 0x240800b8  addiu       $t0, $zero, 0xB8
    ctx->pc = 0x1fee74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
label_1fee78:
    // 0x1fee78: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1fee78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1fee7c:
    // 0x1fee7c: 0xc07c17c  jal         func_1F05F0
label_1fee80:
    if (ctx->pc == 0x1FEE80u) {
        ctx->pc = 0x1FEE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEE7Cu;
        // 0x1fee80: 0x240a0050  addiu       $t2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEE84u;
        goto label_1fee84;
    }
    ctx->pc = 0x1FEE7Cu;
    SET_GPR_U32(ctx, 31, 0x1FEE84u);
    ctx->pc = 0x1FEE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEE7Cu;
    // 0x1fee80: 0x240a0050  addiu       $t2, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F05F0u;
    { ctx->pc = 0x1f05f0; return; }
    ctx->pc = 0x1FEE84u;
label_1fee84:
    // 0x1fee84: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x1fee84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_1fee88:
    // 0x1fee88: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x1fee88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_1fee8c:
    // 0x1fee8c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fee8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1fee90:
    // 0x1fee90: 0x26060078  addiu       $a2, $s0, 0x78
    ctx->pc = 0x1fee90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_1fee94:
    // 0x1fee94: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x1fee94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_1fee98:
    // 0x1fee98: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x1fee98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_1fee9c:
    // 0x1fee9c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1fee9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1feea0:
    // 0x1feea0: 0xa6430400  sh          $v1, 0x400($s2)
    ctx->pc = 0x1feea0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1024), (uint16_t)GPR_U32(ctx, 3));
label_1feea4:
    // 0x1feea4: 0x24446c00  addiu       $a0, $v0, 0x6C00
    ctx->pc = 0x1feea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1feea8:
    // 0x1feea8: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1feea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1feeac:
    // 0x1feeac: 0x24a20080  addiu       $v0, $a1, 0x80
    ctx->pc = 0x1feeacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_1feeb0:
    // 0x1feeb0: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x1feeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
label_1feeb4:
    // 0x1feeb4: 0xa6430402  sh          $v1, 0x402($s2)
    ctx->pc = 0x1feeb4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1026), (uint16_t)GPR_U32(ctx, 3));
label_1feeb8:
    // 0x1feeb8: 0x3405fe00  ori         $a1, $zero, 0xFE00
    ctx->pc = 0x1feeb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1feebc:
    // 0x1feebc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1feebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1feec0:
    // 0x1feec0: 0xae450404  sw          $a1, 0x404($s2)
    ctx->pc = 0x1feec0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1028), GPR_U32(ctx, 5));
label_1feec4:
    // 0x1feec4: 0x24437900  addiu       $v1, $v0, 0x7900
    ctx->pc = 0x1feec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_1feec8:
    // 0x1feec8: 0xa6440410  sh          $a0, 0x410($s2)
    ctx->pc = 0x1feec8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1040), (uint16_t)GPR_U32(ctx, 4));
label_1feecc:
    // 0x1feecc: 0xa6430412  sh          $v1, 0x412($s2)
    ctx->pc = 0x1feeccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1042), (uint16_t)GPR_U32(ctx, 3));
label_1feed0:
    // 0x1feed0: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x1feed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1feed4:
    // 0x1feed4: 0x24436c00  addiu       $v1, $v0, 0x6C00
    ctx->pc = 0x1feed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1feed8:
    // 0x1feed8: 0xae450414  sw          $a1, 0x414($s2)
    ctx->pc = 0x1feed8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1044), GPR_U32(ctx, 5));
label_1feedc:
    // 0x1feedc: 0x24c20050  addiu       $v0, $a2, 0x50
    ctx->pc = 0x1feedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
label_1feee0:
    // 0x1feee0: 0xa64304a0  sh          $v1, 0x4A0($s2)
    ctx->pc = 0x1feee0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1184), (uint16_t)GPR_U32(ctx, 3));
label_1feee4:
    // 0x1feee4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1feee4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1feee8:
    // 0x1feee8: 0x26270078  addiu       $a3, $s1, 0x78
    ctx->pc = 0x1feee8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_1feeec:
    // 0x1feeec: 0x24436c00  addiu       $v1, $v0, 0x6C00
    ctx->pc = 0x1feeecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1feef0:
    // 0x1feef0: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1feef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1feef4:
    // 0x1feef4: 0x24447900  addiu       $a0, $v0, 0x7900
    ctx->pc = 0x1feef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_1feef8:
    // 0x1feef8: 0x24e20010  addiu       $v0, $a3, 0x10
    ctx->pc = 0x1feef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_1feefc:
    // 0x1feefc: 0xa64404a2  sh          $a0, 0x4A2($s2)
    ctx->pc = 0x1feefcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1186), (uint16_t)GPR_U32(ctx, 4));
label_1fef00:
    // 0x1fef00: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1fef00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1fef04:
    // 0x1fef04: 0xae4504a4  sw          $a1, 0x4A4($s2)
    ctx->pc = 0x1fef04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1188), GPR_U32(ctx, 5));
label_1fef08:
    // 0x1fef08: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1fef08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_1fef0c:
    // 0x1fef0c: 0xa64304b0  sh          $v1, 0x4B0($s2)
    ctx->pc = 0x1fef0cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1200), (uint16_t)GPR_U32(ctx, 3));
label_1fef10:
    // 0x1fef10: 0xa64204b2  sh          $v0, 0x4B2($s2)
    ctx->pc = 0x1fef10u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1202), (uint16_t)GPR_U32(ctx, 2));
label_1fef14:
    // 0x1fef14: 0xae4504b4  sw          $a1, 0x4B4($s2)
    ctx->pc = 0x1fef14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1204), GPR_U32(ctx, 5));
label_1fef18:
    // 0x1fef18: 0x8f82909c  lw          $v0, -0x6F64($gp)
    ctx->pc = 0x1fef18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938780)));
label_1fef1c:
    // 0x1fef1c: 0x28420059  slti        $v0, $v0, 0x59
    ctx->pc = 0x1fef1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)89) ? 1 : 0);
label_1fef20:
    // 0x1fef20: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1fef24:
    if (ctx->pc == 0x1FEF24u) {
        ctx->pc = 0x1FEF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF20u;
        // 0x1fef24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEF28u;
        goto label_1fef28;
    }
    ctx->pc = 0x1FEF20u;
    {
        const bool branch_taken_0x1fef20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF20u;
        // 0x1fef24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fef20) {
            ctx->pc = 0x1FEF2Cu;
            goto label_1fef2c;
        }
    }
    ctx->pc = 0x1FEF28u;
label_1fef28:
    // 0x1fef28: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1fef28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1fef2c:
    // 0x1fef2c: 0xa2420493  sb          $v0, 0x493($s2)
    ctx->pc = 0x1fef2cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1171), (uint8_t)GPR_U32(ctx, 2));
label_1fef30:
    // 0x1fef30: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x1fef30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_1fef34:
    // 0x1fef34: 0x8f83909c  lw          $v1, -0x6F64($gp)
    ctx->pc = 0x1fef34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938780)));
label_1fef38:
    // 0x1fef38: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1fef38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1fef3c:
    // 0x1fef3c: 0x24423080  addiu       $v0, $v0, 0x3080
    ctx->pc = 0x1fef3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12416));
label_1fef40:
    // 0x1fef40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fef40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1fef44:
    // 0x1fef44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fef44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fef48:
    // 0x1fef48: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1fef48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fef4c:
    // 0x1fef4c: 0xc055148  jal         func_154520
label_1fef50:
    if (ctx->pc == 0x1FEF50u) {
        ctx->pc = 0x1FEF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF4Cu;
        // 0x1fef50: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEF54u;
        goto label_1fef54;
    }
    ctx->pc = 0x1FEF4Cu;
    SET_GPR_U32(ctx, 31, 0x1FEF54u);
    ctx->pc = 0x1FEF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEF4Cu;
    // 0x1fef50: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154520u, 0x1FEF4Cu, 0x1FEF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEF54u;
label_1fef54:
    // 0x1fef54: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1fef54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1fef58:
    // 0x1fef58: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x1fef58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1fef5c:
    // 0x1fef5c: 0x26080010  addiu       $t0, $s0, 0x10
    ctx->pc = 0x1fef5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1fef60:
    // 0x1fef60: 0x26290098  addiu       $t1, $s1, 0x98
    ctx->pc = 0x1fef60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
label_1fef64:
    // 0x1fef64: 0xe2280a  movz        $a1, $a3, $v0
    ctx->pc = 0x1fef64u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
label_1fef68:
    // 0x1fef68: 0x340afe00  ori         $t2, $zero, 0xFE00
    ctx->pc = 0x1fef68u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1fef6c:
    // 0x1fef6c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1fef6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fef70:
    // 0x1fef70: 0xc054e5c  jal         func_153970
label_1fef74:
    if (ctx->pc == 0x1FEF74u) {
        ctx->pc = 0x1FEF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF70u;
        // 0x1fef74: 0x240600c0  addiu       $a2, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEF78u;
        goto label_1fef78;
    }
    ctx->pc = 0x1FEF70u;
    SET_GPR_U32(ctx, 31, 0x1FEF78u);
    ctx->pc = 0x1FEF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEF70u;
    // 0x1fef74: 0x240600c0  addiu       $a2, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x1FEF70u, 0x1FEF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEF78u;
label_1fef78:
    // 0x1fef78: 0xc054e70  jal         func_1539C0
label_1fef7c:
    if (ctx->pc == 0x1FEF7Cu) {
        ctx->pc = 0x1FEF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF78u;
        // 0x1fef7c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEF80u;
        goto label_1fef80;
    }
    ctx->pc = 0x1FEF78u;
    SET_GPR_U32(ctx, 31, 0x1FEF80u);
    ctx->pc = 0x1FEF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEF78u;
    // 0x1fef7c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539C0u, 0x1FEF78u, 0x1FEF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEF80u;
label_1fef80:
    // 0x1fef80: 0x8f83909c  lw          $v1, -0x6F64($gp)
    ctx->pc = 0x1fef80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938780)));
label_1fef84:
    // 0x1fef84: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1fef84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1fef88:
    // 0x1fef88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fef88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fef8c:
    // 0x1fef8c: 0x24423080  addiu       $v0, $v0, 0x3080
    ctx->pc = 0x1fef8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12416));
label_1fef90:
    // 0x1fef90: 0x264404c0  addiu       $a0, $s2, 0x4C0
    ctx->pc = 0x1fef90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1216));
label_1fef94:
    // 0x1fef94: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x1fef94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1fef98:
    // 0x1fef98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fef98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1fef9c:
    // 0x1fef9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fef9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fefa0:
    // 0x1fefa0: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x1fefa0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fefa4:
    // 0x1fefa4: 0xc054e74  jal         func_1539D0
label_1fefa8:
    if (ctx->pc == 0x1FEFA8u) {
        ctx->pc = 0x1FEFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFA4u;
        // 0x1fefa8: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEFACu;
        goto label_1fefac;
    }
    ctx->pc = 0x1FEFA4u;
    SET_GPR_U32(ctx, 31, 0x1FEFACu);
    ctx->pc = 0x1FEFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEFA4u;
    // 0x1fefa8: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1FEFA4u, 0x1FEFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEFACu;
label_1fefac:
    // 0x1fefac: 0x8f8290ac  lw          $v0, -0x6F54($gp)
    ctx->pc = 0x1fefacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938796)));
label_1fefb0:
    // 0x1fefb0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1fefb4:
    if (ctx->pc == 0x1FEFB4u) {
        ctx->pc = 0x1FEFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFB0u;
        // 0x1fefb4: 0x26020100  addiu       $v0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEFB8u;
        goto label_1fefb8;
    }
    ctx->pc = 0x1FEFB0u;
    {
        const bool branch_taken_0x1fefb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFB0u;
        // 0x1fefb4: 0x26020100  addiu       $v0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fefb0) {
            ctx->pc = 0x1FEFC4u;
            goto label_1fefc4;
        }
    }
    ctx->pc = 0x1FEFB8u;
label_1fefb8:
    // 0x1fefb8: 0x26020038  addiu       $v0, $s0, 0x38
    ctx->pc = 0x1fefb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
label_1fefbc:
    // 0x1fefbc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1fefc0:
    if (ctx->pc == 0x1FEFC0u) {
        ctx->pc = 0x1FEFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFBCu;
        // 0x1fefc0: 0x262500b4  addiu       $a1, $s1, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 180));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEFC4u;
        goto label_1fefc4;
    }
    ctx->pc = 0x1FEFBCu;
    {
        const bool branch_taken_0x1fefbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFBCu;
        // 0x1fefc0: 0x262500b4  addiu       $a1, $s1, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 180));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fefbc) {
            ctx->pc = 0x1FEFC8u;
            goto label_1fefc8;
        }
    }
    ctx->pc = 0x1FEFC4u;
label_1fefc4:
    // 0x1fefc4: 0x2625000c  addiu       $a1, $s1, 0xC
    ctx->pc = 0x1fefc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_1fefc8:
    // 0x1fefc8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fefc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1fefcc:
    // 0x1fefcc: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1fefccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1fefd0:
    // 0x1fefd0: 0x24420058  addiu       $v0, $v0, 0x58
    ctx->pc = 0x1fefd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_1fefd4:
    // 0x1fefd4: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x1fefd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_1fefd8:
    // 0x1fefd8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1fefd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1fefdc:
    // 0x1fefdc: 0xa64313e0  sh          $v1, 0x13E0($s2)
    ctx->pc = 0x1fefdcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 5088), (uint16_t)GPR_U32(ctx, 3));
label_1fefe0:
    // 0x1fefe0: 0x24436c00  addiu       $v1, $v0, 0x6C00
    ctx->pc = 0x1fefe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1fefe4:
    // 0x1fefe4: 0x24847900  addiu       $a0, $a0, 0x7900
    ctx->pc = 0x1fefe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
label_1fefe8:
    // 0x1fefe8: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x1fefe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_1fefec:
    // 0x1fefec: 0xa64413e2  sh          $a0, 0x13E2($s2)
    ctx->pc = 0x1fefecu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 5090), (uint16_t)GPR_U32(ctx, 4));
label_1feff0:
    // 0x1feff0: 0x3406fe00  ori         $a2, $zero, 0xFE00
    ctx->pc = 0x1feff0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1feff4:
    // 0x1feff4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1feff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1feff8:
    // 0x1feff8: 0xae4613e4  sw          $a2, 0x13E4($s2)
    ctx->pc = 0x1feff8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5092), GPR_U32(ctx, 6));
label_1feffc:
    // 0x1feffc: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1feffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_1ff000:
    // 0x1ff000: 0xa64313f0  sh          $v1, 0x13F0($s2)
    ctx->pc = 0x1ff000u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 5104), (uint16_t)GPR_U32(ctx, 3));
label_1ff004:
    // 0x1ff004: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1ff004u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1ff008:
    // 0x1ff008: 0xa64213f2  sh          $v0, 0x13F2($s2)
    ctx->pc = 0x1ff008u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 5106), (uint16_t)GPR_U32(ctx, 2));
label_1ff00c:
    // 0x1ff00c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1ff00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1ff010:
    // 0x1ff010: 0xae4613f4  sw          $a2, 0x13F4($s2)
    ctx->pc = 0x1ff010u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5108), GPR_U32(ctx, 6));
label_1ff014:
    // 0x1ff014: 0x8f869098  lw          $a2, -0x6F68($gp)
    ctx->pc = 0x1ff014u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938776)));
label_1ff018:
    // 0x1ff018: 0xc08f20e  jal         func_23C838
label_1ff01c:
    if (ctx->pc == 0x1FF01Cu) {
        ctx->pc = 0x1FF01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF018u;
        // 0x1ff01c: 0x24a5d550  addiu       $a1, $a1, -0x2AB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF020u;
        goto label_1ff020;
    }
    ctx->pc = 0x1FF018u;
    SET_GPR_U32(ctx, 31, 0x1FF020u);
    ctx->pc = 0x1FF01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF018u;
    // 0x1ff01c: 0x24a5d550  addiu       $a1, $a1, -0x2AB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1FF020u;
label_1ff020:
    // 0x1ff020: 0x8f8290ac  lw          $v0, -0x6F54($gp)
    ctx->pc = 0x1ff020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938796)));
label_1ff024:
    // 0x1ff024: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1ff028:
    if (ctx->pc == 0x1FF028u) {
        ctx->pc = 0x1FF028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF024u;
        // 0x1ff028: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF02Cu;
        goto label_1ff02c;
    }
    ctx->pc = 0x1FF024u;
    {
        const bool branch_taken_0x1ff024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF024u;
        // 0x1ff028: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff024) {
            ctx->pc = 0x1FF038u;
            goto label_1ff038;
        }
    }
    ctx->pc = 0x1FF02Cu;
label_1ff02c:
    // 0x1ff02c: 0x26060098  addiu       $a2, $s0, 0x98
    ctx->pc = 0x1ff02cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 152));
label_1ff030:
    // 0x1ff030: 0x10000002  b           . + 4 + (0x2 << 2)
label_1ff034:
    if (ctx->pc == 0x1FF034u) {
        ctx->pc = 0x1FF034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF030u;
        // 0x1ff034: 0x262700b0  addiu       $a3, $s1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF038u;
        goto label_1ff038;
    }
    ctx->pc = 0x1FF030u;
    {
        const bool branch_taken_0x1ff030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF030u;
        // 0x1ff034: 0x262700b0  addiu       $a3, $s1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff030) {
            ctx->pc = 0x1FF03Cu;
            goto label_1ff03c;
        }
    }
    ctx->pc = 0x1FF038u;
label_1ff038:
    // 0x1ff038: 0x26270008  addiu       $a3, $s1, 0x8
    ctx->pc = 0x1ff038u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_1ff03c:
    // 0x1ff03c: 0x26441400  addiu       $a0, $s2, 0x1400
    ctx->pc = 0x1ff03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 5120));
label_1ff040:
    // 0x1ff040: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ff040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ff044:
    // 0x1ff044: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1ff044u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1ff048:
    // 0x1ff048: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1ff048u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ff04c:
    // 0x1ff04c: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x1ff04cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ff050:
    // 0x1ff050: 0xc0708ac  jal         func_1C22B0
label_1ff054:
    if (ctx->pc == 0x1FF054u) {
        ctx->pc = 0x1FF054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF050u;
        // 0x1ff054: 0x27ab0120  addiu       $t3, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF058u;
        goto label_1ff058;
    }
    ctx->pc = 0x1FF050u;
    SET_GPR_U32(ctx, 31, 0x1FF058u);
    ctx->pc = 0x1FF054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF050u;
    // 0x1ff054: 0x27ab0120  addiu       $t3, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C22B0u, 0x1FF050u, 0x1FF058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF058u;
label_1ff058:
    // 0x1ff058: 0x8f8290ac  lw          $v0, -0x6F54($gp)
    ctx->pc = 0x1ff058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938796)));
label_1ff05c:
    // 0x1ff05c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1ff060:
    if (ctx->pc == 0x1FF060u) {
        ctx->pc = 0x1FF060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF05Cu;
        // 0x1ff060: 0x26020100  addiu       $v0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF064u;
        goto label_1ff064;
    }
    ctx->pc = 0x1FF05Cu;
    {
        const bool branch_taken_0x1ff05c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF05Cu;
        // 0x1ff060: 0x26020100  addiu       $v0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff05c) {
            ctx->pc = 0x1FF070u;
            goto label_1ff070;
        }
    }
    ctx->pc = 0x1FF064u;
label_1ff064:
    // 0x1ff064: 0x26020038  addiu       $v0, $s0, 0x38
    ctx->pc = 0x1ff064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
label_1ff068:
    // 0x1ff068: 0x10000002  b           . + 4 + (0x2 << 2)
label_1ff06c:
    if (ctx->pc == 0x1FF06Cu) {
        ctx->pc = 0x1FF06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF068u;
        // 0x1ff06c: 0x262500cc  addiu       $a1, $s1, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 204));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF070u;
        goto label_1ff070;
    }
    ctx->pc = 0x1FF068u;
    {
        const bool branch_taken_0x1ff068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF068u;
        // 0x1ff06c: 0x262500cc  addiu       $a1, $s1, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 204));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff068) {
            ctx->pc = 0x1FF074u;
            goto label_1ff074;
        }
    }
    ctx->pc = 0x1FF070u;
label_1ff070:
    // 0x1ff070: 0x26250024  addiu       $a1, $s1, 0x24
    ctx->pc = 0x1ff070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
label_1ff074:
    // 0x1ff074: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1ff074u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ff078:
    // 0x1ff078: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1ff078u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1ff07c:
    // 0x1ff07c: 0x24420058  addiu       $v0, $v0, 0x58
    ctx->pc = 0x1ff07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_1ff080:
    // 0x1ff080: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x1ff080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_1ff084:
    // 0x1ff084: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ff084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ff088:
    // 0x1ff088: 0xa6431660  sh          $v1, 0x1660($s2)
    ctx->pc = 0x1ff088u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 5728), (uint16_t)GPR_U32(ctx, 3));
label_1ff08c:
    // 0x1ff08c: 0x24847900  addiu       $a0, $a0, 0x7900
    ctx->pc = 0x1ff08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
label_1ff090:
    // 0x1ff090: 0x24436c00  addiu       $v1, $v0, 0x6C00
    ctx->pc = 0x1ff090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1ff094:
    // 0x1ff094: 0xa6441662  sh          $a0, 0x1662($s2)
    ctx->pc = 0x1ff094u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 5730), (uint16_t)GPR_U32(ctx, 4));
label_1ff098:
    // 0x1ff098: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x1ff098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_1ff09c:
    // 0x1ff09c: 0x3404fe00  ori         $a0, $zero, 0xFE00
    ctx->pc = 0x1ff09cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1ff0a0:
    // 0x1ff0a0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ff0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1ff0a4:
    // 0x1ff0a4: 0xae441664  sw          $a0, 0x1664($s2)
    ctx->pc = 0x1ff0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5732), GPR_U32(ctx, 4));
label_1ff0a8:
    // 0x1ff0a8: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1ff0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_1ff0ac:
    // 0x1ff0ac: 0xa6431670  sh          $v1, 0x1670($s2)
    ctx->pc = 0x1ff0acu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 5744), (uint16_t)GPR_U32(ctx, 3));
label_1ff0b0:
    // 0x1ff0b0: 0xa6421672  sh          $v0, 0x1672($s2)
    ctx->pc = 0x1ff0b0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 5746), (uint16_t)GPR_U32(ctx, 2));
label_1ff0b4:
    // 0x1ff0b4: 0xae441674  sw          $a0, 0x1674($s2)
    ctx->pc = 0x1ff0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5748), GPR_U32(ctx, 4));
label_1ff0b8:
    // 0x1ff0b8: 0x8f839090  lw          $v1, -0x6F70($gp)
    ctx->pc = 0x1ff0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938768)));
label_1ff0bc:
    // 0x1ff0bc: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x1ff0bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_1ff0c0:
    // 0x1ff0c0: 0x10200038  beqz        $at, . + 4 + (0x38 << 2)
label_1ff0c4:
    if (ctx->pc == 0x1FF0C4u) {
        ctx->pc = 0x1FF0C8u;
        goto label_1ff0c8;
    }
    ctx->pc = 0x1FF0C0u;
    {
        const bool branch_taken_0x1ff0c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff0c0) {
            ctx->pc = 0x1FF1A4u;
            { ctx->pc = 0x1ff1a4; return; }
        }
    }
    ctx->pc = 0x1FF0C8u;
label_1ff0c8:
    // 0x1ff0c8: 0x8f8290ac  lw          $v0, -0x6F54($gp)
    ctx->pc = 0x1ff0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938796)));
label_1ff0cc:
    // 0x1ff0cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1ff0d0:
    if (ctx->pc == 0x1FF0D0u) {
        ctx->pc = 0x1FF0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF0CCu;
        // 0x1ff0d0: 0x26130160  addiu       $s3, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF0D4u;
        goto label_1ff0d4;
    }
    ctx->pc = 0x1FF0CCu;
    {
        const bool branch_taken_0x1ff0cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF0CCu;
        // 0x1ff0d0: 0x26130160  addiu       $s3, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff0cc) {
            ctx->pc = 0x1FF0E0u;
            goto label_1ff0e0;
        }
    }
    ctx->pc = 0x1FF0D4u;
label_1ff0d4:
    // 0x1ff0d4: 0x26130098  addiu       $s3, $s0, 0x98
    ctx->pc = 0x1ff0d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 152));
label_1ff0d8:
    // 0x1ff0d8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1ff0dc:
    if (ctx->pc == 0x1FF0DCu) {
        ctx->pc = 0x1FF0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF0D8u;
        // 0x1ff0dc: 0x263400c8  addiu       $s4, $s1, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF0E0u;
        goto label_1ff0e0;
    }
    ctx->pc = 0x1FF0D8u;
    {
        const bool branch_taken_0x1ff0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF0D8u;
        // 0x1ff0dc: 0x263400c8  addiu       $s4, $s1, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff0d8) {
            ctx->pc = 0x1FF0E4u;
            goto label_1ff0e4;
        }
    }
    ctx->pc = 0x1FF0E0u;
label_1ff0e0:
    // 0x1ff0e0: 0x26340020  addiu       $s4, $s1, 0x20
    ctx->pc = 0x1ff0e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_1ff0e4:
    // 0x1ff0e4: 0xc070834  jal         func_1C20D0
label_1ff0e8:
    if (ctx->pc == 0x1FF0E8u) {
        ctx->pc = 0x1FF0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF0E4u;
        // 0x1ff0e8: 0x24640035  addiu       $a0, $v1, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 53));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF0ECu;
        goto label_1ff0ec;
    }
    ctx->pc = 0x1FF0E4u;
    SET_GPR_U32(ctx, 31, 0x1FF0ECu);
    ctx->pc = 0x1FF0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF0E4u;
    // 0x1ff0e8: 0x24640035  addiu       $a0, $v1, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C20D0u, 0x1FF0E4u, 0x1FF0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF0ECu;
label_1ff0ec:
    // 0x1ff0ec: 0xfe4216e0  sd          $v0, 0x16E0($s2)
    ctx->pc = 0x1ff0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 5856), GPR_U64(ctx, 2));
label_1ff0f0:
    // 0x1ff0f0: 0x3c0300fd  lui         $v1, 0xFD
    ctx->pc = 0x1ff0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)253 << 16));
label_1ff0f4:
    // 0x1ff0f4: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x1ff0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_1ff0f8:
    // 0x1ff0f8: 0x3468fe0a  ori         $t0, $v1, 0xFE0A
    ctx->pc = 0x1ff0f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65034);
label_1ff0fc:
    // 0x1ff0fc: 0x24476c00  addiu       $a3, $v0, 0x6C00
    ctx->pc = 0x1ff0fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1ff100:
    // 0x1ff100: 0x1418c0  sll         $v1, $s4, 3
    ctx->pc = 0x1ff100u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
label_1ff104:
    // 0x1ff104: 0x26620018  addiu       $v0, $s3, 0x18
    ctx->pc = 0x1ff104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_1ff108:
    // 0x1ff108: 0x8f8a9090  lw          $t2, -0x6F70($gp)
    ctx->pc = 0x1ff108u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938768)));
label_1ff10c:
    // 0x1ff10c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ff10cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ff110:
    // 0x1ff110: 0x24053e08  addiu       $a1, $zero, 0x3E08
    ctx->pc = 0x1ff110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15880));
label_1ff114:
    // 0x1ff114: 0x24446c00  addiu       $a0, $v0, 0x6C00
    ctx->pc = 0x1ff114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1ff118:
    // 0x1ff118: 0x24667900  addiu       $a2, $v1, 0x7900
    ctx->pc = 0x1ff118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
label_1ff11c:
    // 0x1ff11c: 0x26820018  addiu       $v0, $s4, 0x18
    ctx->pc = 0x1ff11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
label_1ff120:
    // 0x1ff120: 0x24093f88  addiu       $t1, $zero, 0x3F88
    ctx->pc = 0x1ff120u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16264));
label_1ff124:
    // 0x1ff124: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ff124u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1ff128:
    // 0x1ff128: 0x24437900  addiu       $v1, $v0, 0x7900
    ctx->pc = 0x1ff128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_1ff12c:
    // 0x1ff12c: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x1ff12cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_1ff130:
    // 0x1ff130: 0xa64516f8  sh          $a1, 0x16F8($s2)
    ctx->pc = 0x1ff130u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 5880), (uint16_t)GPR_U32(ctx, 5));
label_1ff134:
    // 0x1ff134: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1ff134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_1ff138:
    // 0x1ff138: 0x3405fe00  ori         $a1, $zero, 0xFE00
    ctx->pc = 0x1ff138u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1ff13c:
    // 0x1ff13c: 0x258c0  sll         $t3, $v0, 3
    ctx->pc = 0x1ff13cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1ff140:
    // 0x1ff140: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1ff140u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1ff144:
    // 0x1ff144: 0x244a0008  addiu       $t2, $v0, 0x8
    ctx->pc = 0x1ff144u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_1ff148:
    // 0x1ff148: 0x25620018  addiu       $v0, $t3, 0x18
    ctx->pc = 0x1ff148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 24));
label_1ff14c:
    // 0x1ff14c: 0xa64a16fa  sh          $t2, 0x16FA($s2)
    ctx->pc = 0x1ff14cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 5882), (uint16_t)GPR_U32(ctx, 10));
label_1ff150:
    // 0x1ff150: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ff150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ff154:
    // 0x1ff154: 0xa6491708  sh          $t1, 0x1708($s2)
    ctx->pc = 0x1ff154u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 5896), (uint16_t)GPR_U32(ctx, 9));
label_1ff158:
    // 0x1ff158: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1ff158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_1ff15c:
    // 0x1ff15c: 0xa642170a  sh          $v0, 0x170A($s2)
    ctx->pc = 0x1ff15cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 5898), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1ff160u;
    return;
}
