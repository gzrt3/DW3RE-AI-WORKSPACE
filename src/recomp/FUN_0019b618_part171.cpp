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

// Function: FUN_0019b618
// Address: 0x19b618 - 0x29b620
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b618_part171(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1ee638u: goto label_1ee638;
        case 0x1ee63cu: goto label_1ee63c;
        case 0x1ee640u: goto label_1ee640;
        case 0x1ee644u: goto label_1ee644;
        case 0x1ee648u: goto label_1ee648;
        case 0x1ee64cu: goto label_1ee64c;
        case 0x1ee650u: goto label_1ee650;
        case 0x1ee654u: goto label_1ee654;
        case 0x1ee658u: goto label_1ee658;
        case 0x1ee65cu: goto label_1ee65c;
        case 0x1ee660u: goto label_1ee660;
        case 0x1ee664u: goto label_1ee664;
        case 0x1ee668u: goto label_1ee668;
        case 0x1ee66cu: goto label_1ee66c;
        case 0x1ee670u: goto label_1ee670;
        case 0x1ee674u: goto label_1ee674;
        case 0x1ee678u: goto label_1ee678;
        case 0x1ee67cu: goto label_1ee67c;
        case 0x1ee680u: goto label_1ee680;
        case 0x1ee684u: goto label_1ee684;
        case 0x1ee688u: goto label_1ee688;
        case 0x1ee68cu: goto label_1ee68c;
        case 0x1ee690u: goto label_1ee690;
        case 0x1ee694u: goto label_1ee694;
        case 0x1ee698u: goto label_1ee698;
        case 0x1ee69cu: goto label_1ee69c;
        case 0x1ee6a0u: goto label_1ee6a0;
        case 0x1ee6a4u: goto label_1ee6a4;
        case 0x1ee6a8u: goto label_1ee6a8;
        case 0x1ee6acu: goto label_1ee6ac;
        case 0x1ee6b0u: goto label_1ee6b0;
        case 0x1ee6b4u: goto label_1ee6b4;
        case 0x1ee6b8u: goto label_1ee6b8;
        case 0x1ee6bcu: goto label_1ee6bc;
        case 0x1ee6c0u: goto label_1ee6c0;
        case 0x1ee6c4u: goto label_1ee6c4;
        case 0x1ee6c8u: goto label_1ee6c8;
        case 0x1ee6ccu: goto label_1ee6cc;
        case 0x1ee6d0u: goto label_1ee6d0;
        case 0x1ee6d4u: goto label_1ee6d4;
        case 0x1ee6d8u: goto label_1ee6d8;
        case 0x1ee6dcu: goto label_1ee6dc;
        case 0x1ee6e0u: goto label_1ee6e0;
        case 0x1ee6e4u: goto label_1ee6e4;
        case 0x1ee6e8u: goto label_1ee6e8;
        case 0x1ee6ecu: goto label_1ee6ec;
        case 0x1ee6f0u: goto label_1ee6f0;
        case 0x1ee6f4u: goto label_1ee6f4;
        case 0x1ee6f8u: goto label_1ee6f8;
        case 0x1ee6fcu: goto label_1ee6fc;
        case 0x1ee700u: goto label_1ee700;
        case 0x1ee704u: goto label_1ee704;
        case 0x1ee708u: goto label_1ee708;
        case 0x1ee70cu: goto label_1ee70c;
        case 0x1ee710u: goto label_1ee710;
        case 0x1ee714u: goto label_1ee714;
        case 0x1ee718u: goto label_1ee718;
        case 0x1ee71cu: goto label_1ee71c;
        case 0x1ee720u: goto label_1ee720;
        case 0x1ee724u: goto label_1ee724;
        case 0x1ee728u: goto label_1ee728;
        case 0x1ee72cu: goto label_1ee72c;
        case 0x1ee730u: goto label_1ee730;
        case 0x1ee734u: goto label_1ee734;
        case 0x1ee738u: goto label_1ee738;
        case 0x1ee73cu: goto label_1ee73c;
        case 0x1ee740u: goto label_1ee740;
        case 0x1ee744u: goto label_1ee744;
        case 0x1ee748u: goto label_1ee748;
        case 0x1ee74cu: goto label_1ee74c;
        case 0x1ee750u: goto label_1ee750;
        case 0x1ee754u: goto label_1ee754;
        case 0x1ee758u: goto label_1ee758;
        case 0x1ee75cu: goto label_1ee75c;
        case 0x1ee760u: goto label_1ee760;
        case 0x1ee764u: goto label_1ee764;
        case 0x1ee768u: goto label_1ee768;
        case 0x1ee76cu: goto label_1ee76c;
        case 0x1ee770u: goto label_1ee770;
        case 0x1ee774u: goto label_1ee774;
        case 0x1ee778u: goto label_1ee778;
        case 0x1ee77cu: goto label_1ee77c;
        case 0x1ee780u: goto label_1ee780;
        case 0x1ee784u: goto label_1ee784;
        case 0x1ee788u: goto label_1ee788;
        case 0x1ee78cu: goto label_1ee78c;
        case 0x1ee790u: goto label_1ee790;
        case 0x1ee794u: goto label_1ee794;
        case 0x1ee798u: goto label_1ee798;
        case 0x1ee79cu: goto label_1ee79c;
        case 0x1ee7a0u: goto label_1ee7a0;
        case 0x1ee7a4u: goto label_1ee7a4;
        case 0x1ee7a8u: goto label_1ee7a8;
        case 0x1ee7acu: goto label_1ee7ac;
        case 0x1ee7b0u: goto label_1ee7b0;
        case 0x1ee7b4u: goto label_1ee7b4;
        case 0x1ee7b8u: goto label_1ee7b8;
        case 0x1ee7bcu: goto label_1ee7bc;
        case 0x1ee7c0u: goto label_1ee7c0;
        case 0x1ee7c4u: goto label_1ee7c4;
        case 0x1ee7c8u: goto label_1ee7c8;
        case 0x1ee7ccu: goto label_1ee7cc;
        case 0x1ee7d0u: goto label_1ee7d0;
        case 0x1ee7d4u: goto label_1ee7d4;
        case 0x1ee7d8u: goto label_1ee7d8;
        case 0x1ee7dcu: goto label_1ee7dc;
        case 0x1ee7e0u: goto label_1ee7e0;
        case 0x1ee7e4u: goto label_1ee7e4;
        case 0x1ee7e8u: goto label_1ee7e8;
        case 0x1ee7ecu: goto label_1ee7ec;
        case 0x1ee7f0u: goto label_1ee7f0;
        case 0x1ee7f4u: goto label_1ee7f4;
        case 0x1ee7f8u: goto label_1ee7f8;
        case 0x1ee7fcu: goto label_1ee7fc;
        case 0x1ee800u: goto label_1ee800;
        case 0x1ee804u: goto label_1ee804;
        case 0x1ee808u: goto label_1ee808;
        case 0x1ee80cu: goto label_1ee80c;
        case 0x1ee810u: goto label_1ee810;
        case 0x1ee814u: goto label_1ee814;
        case 0x1ee818u: goto label_1ee818;
        case 0x1ee81cu: goto label_1ee81c;
        case 0x1ee820u: goto label_1ee820;
        case 0x1ee824u: goto label_1ee824;
        case 0x1ee828u: goto label_1ee828;
        case 0x1ee82cu: goto label_1ee82c;
        case 0x1ee830u: goto label_1ee830;
        case 0x1ee834u: goto label_1ee834;
        case 0x1ee838u: goto label_1ee838;
        case 0x1ee83cu: goto label_1ee83c;
        case 0x1ee840u: goto label_1ee840;
        case 0x1ee844u: goto label_1ee844;
        case 0x1ee848u: goto label_1ee848;
        case 0x1ee84cu: goto label_1ee84c;
        case 0x1ee850u: goto label_1ee850;
        case 0x1ee854u: goto label_1ee854;
        case 0x1ee858u: goto label_1ee858;
        case 0x1ee85cu: goto label_1ee85c;
        case 0x1ee860u: goto label_1ee860;
        case 0x1ee864u: goto label_1ee864;
        case 0x1ee868u: goto label_1ee868;
        case 0x1ee86cu: goto label_1ee86c;
        case 0x1ee870u: goto label_1ee870;
        case 0x1ee874u: goto label_1ee874;
        case 0x1ee878u: goto label_1ee878;
        case 0x1ee87cu: goto label_1ee87c;
        case 0x1ee880u: goto label_1ee880;
        case 0x1ee884u: goto label_1ee884;
        case 0x1ee888u: goto label_1ee888;
        case 0x1ee88cu: goto label_1ee88c;
        case 0x1ee890u: goto label_1ee890;
        case 0x1ee894u: goto label_1ee894;
        case 0x1ee898u: goto label_1ee898;
        case 0x1ee89cu: goto label_1ee89c;
        case 0x1ee8a0u: goto label_1ee8a0;
        case 0x1ee8a4u: goto label_1ee8a4;
        case 0x1ee8a8u: goto label_1ee8a8;
        case 0x1ee8acu: goto label_1ee8ac;
        case 0x1ee8b0u: goto label_1ee8b0;
        case 0x1ee8b4u: goto label_1ee8b4;
        case 0x1ee8b8u: goto label_1ee8b8;
        case 0x1ee8bcu: goto label_1ee8bc;
        case 0x1ee8c0u: goto label_1ee8c0;
        case 0x1ee8c4u: goto label_1ee8c4;
        case 0x1ee8c8u: goto label_1ee8c8;
        case 0x1ee8ccu: goto label_1ee8cc;
        case 0x1ee8d0u: goto label_1ee8d0;
        case 0x1ee8d4u: goto label_1ee8d4;
        case 0x1ee8d8u: goto label_1ee8d8;
        case 0x1ee8dcu: goto label_1ee8dc;
        case 0x1ee8e0u: goto label_1ee8e0;
        case 0x1ee8e4u: goto label_1ee8e4;
        case 0x1ee8e8u: goto label_1ee8e8;
        case 0x1ee8ecu: goto label_1ee8ec;
        case 0x1ee8f0u: goto label_1ee8f0;
        case 0x1ee8f4u: goto label_1ee8f4;
        case 0x1ee8f8u: goto label_1ee8f8;
        case 0x1ee8fcu: goto label_1ee8fc;
        case 0x1ee900u: goto label_1ee900;
        case 0x1ee904u: goto label_1ee904;
        case 0x1ee908u: goto label_1ee908;
        case 0x1ee90cu: goto label_1ee90c;
        case 0x1ee910u: goto label_1ee910;
        case 0x1ee914u: goto label_1ee914;
        case 0x1ee918u: goto label_1ee918;
        case 0x1ee91cu: goto label_1ee91c;
        case 0x1ee920u: goto label_1ee920;
        case 0x1ee924u: goto label_1ee924;
        case 0x1ee928u: goto label_1ee928;
        case 0x1ee92cu: goto label_1ee92c;
        case 0x1ee930u: goto label_1ee930;
        case 0x1ee934u: goto label_1ee934;
        case 0x1ee938u: goto label_1ee938;
        case 0x1ee93cu: goto label_1ee93c;
        case 0x1ee940u: goto label_1ee940;
        case 0x1ee944u: goto label_1ee944;
        case 0x1ee948u: goto label_1ee948;
        case 0x1ee94cu: goto label_1ee94c;
        case 0x1ee950u: goto label_1ee950;
        case 0x1ee954u: goto label_1ee954;
        case 0x1ee958u: goto label_1ee958;
        case 0x1ee95cu: goto label_1ee95c;
        case 0x1ee960u: goto label_1ee960;
        case 0x1ee964u: goto label_1ee964;
        case 0x1ee968u: goto label_1ee968;
        case 0x1ee96cu: goto label_1ee96c;
        case 0x1ee970u: goto label_1ee970;
        case 0x1ee974u: goto label_1ee974;
        case 0x1ee978u: goto label_1ee978;
        case 0x1ee97cu: goto label_1ee97c;
        case 0x1ee980u: goto label_1ee980;
        case 0x1ee984u: goto label_1ee984;
        case 0x1ee988u: goto label_1ee988;
        case 0x1ee98cu: goto label_1ee98c;
        case 0x1ee990u: goto label_1ee990;
        case 0x1ee994u: goto label_1ee994;
        case 0x1ee998u: goto label_1ee998;
        case 0x1ee99cu: goto label_1ee99c;
        case 0x1ee9a0u: goto label_1ee9a0;
        case 0x1ee9a4u: goto label_1ee9a4;
        case 0x1ee9a8u: goto label_1ee9a8;
        case 0x1ee9acu: goto label_1ee9ac;
        case 0x1ee9b0u: goto label_1ee9b0;
        case 0x1ee9b4u: goto label_1ee9b4;
        case 0x1ee9b8u: goto label_1ee9b8;
        case 0x1ee9bcu: goto label_1ee9bc;
        case 0x1ee9c0u: goto label_1ee9c0;
        case 0x1ee9c4u: goto label_1ee9c4;
        case 0x1ee9c8u: goto label_1ee9c8;
        case 0x1ee9ccu: goto label_1ee9cc;
        case 0x1ee9d0u: goto label_1ee9d0;
        case 0x1ee9d4u: goto label_1ee9d4;
        case 0x1ee9d8u: goto label_1ee9d8;
        case 0x1ee9dcu: goto label_1ee9dc;
        case 0x1ee9e0u: goto label_1ee9e0;
        case 0x1ee9e4u: goto label_1ee9e4;
        case 0x1ee9e8u: goto label_1ee9e8;
        case 0x1ee9ecu: goto label_1ee9ec;
        case 0x1ee9f0u: goto label_1ee9f0;
        case 0x1ee9f4u: goto label_1ee9f4;
        case 0x1ee9f8u: goto label_1ee9f8;
        case 0x1ee9fcu: goto label_1ee9fc;
        case 0x1eea00u: goto label_1eea00;
        case 0x1eea04u: goto label_1eea04;
        case 0x1eea08u: goto label_1eea08;
        case 0x1eea0cu: goto label_1eea0c;
        case 0x1eea10u: goto label_1eea10;
        case 0x1eea14u: goto label_1eea14;
        case 0x1eea18u: goto label_1eea18;
        case 0x1eea1cu: goto label_1eea1c;
        case 0x1eea20u: goto label_1eea20;
        case 0x1eea24u: goto label_1eea24;
        case 0x1eea28u: goto label_1eea28;
        case 0x1eea2cu: goto label_1eea2c;
        case 0x1eea30u: goto label_1eea30;
        case 0x1eea34u: goto label_1eea34;
        case 0x1eea38u: goto label_1eea38;
        case 0x1eea3cu: goto label_1eea3c;
        case 0x1eea40u: goto label_1eea40;
        case 0x1eea44u: goto label_1eea44;
        case 0x1eea48u: goto label_1eea48;
        case 0x1eea4cu: goto label_1eea4c;
        case 0x1eea50u: goto label_1eea50;
        case 0x1eea54u: goto label_1eea54;
        case 0x1eea58u: goto label_1eea58;
        case 0x1eea5cu: goto label_1eea5c;
        case 0x1eea60u: goto label_1eea60;
        case 0x1eea64u: goto label_1eea64;
        case 0x1eea68u: goto label_1eea68;
        case 0x1eea6cu: goto label_1eea6c;
        case 0x1eea70u: goto label_1eea70;
        case 0x1eea74u: goto label_1eea74;
        case 0x1eea78u: goto label_1eea78;
        case 0x1eea7cu: goto label_1eea7c;
        case 0x1eea80u: goto label_1eea80;
        case 0x1eea84u: goto label_1eea84;
        case 0x1eea88u: goto label_1eea88;
        case 0x1eea8cu: goto label_1eea8c;
        case 0x1eea90u: goto label_1eea90;
        case 0x1eea94u: goto label_1eea94;
        case 0x1eea98u: goto label_1eea98;
        case 0x1eea9cu: goto label_1eea9c;
        case 0x1eeaa0u: goto label_1eeaa0;
        case 0x1eeaa4u: goto label_1eeaa4;
        case 0x1eeaa8u: goto label_1eeaa8;
        case 0x1eeaacu: goto label_1eeaac;
        case 0x1eeab0u: goto label_1eeab0;
        case 0x1eeab4u: goto label_1eeab4;
        case 0x1eeab8u: goto label_1eeab8;
        case 0x1eeabcu: goto label_1eeabc;
        case 0x1eeac0u: goto label_1eeac0;
        case 0x1eeac4u: goto label_1eeac4;
        case 0x1eeac8u: goto label_1eeac8;
        case 0x1eeaccu: goto label_1eeacc;
        case 0x1eead0u: goto label_1eead0;
        case 0x1eead4u: goto label_1eead4;
        case 0x1eead8u: goto label_1eead8;
        case 0x1eeadcu: goto label_1eeadc;
        case 0x1eeae0u: goto label_1eeae0;
        case 0x1eeae4u: goto label_1eeae4;
        case 0x1eeae8u: goto label_1eeae8;
        case 0x1eeaecu: goto label_1eeaec;
        case 0x1eeaf0u: goto label_1eeaf0;
        case 0x1eeaf4u: goto label_1eeaf4;
        case 0x1eeaf8u: goto label_1eeaf8;
        case 0x1eeafcu: goto label_1eeafc;
        case 0x1eeb00u: goto label_1eeb00;
        case 0x1eeb04u: goto label_1eeb04;
        case 0x1eeb08u: goto label_1eeb08;
        case 0x1eeb0cu: goto label_1eeb0c;
        case 0x1eeb10u: goto label_1eeb10;
        case 0x1eeb14u: goto label_1eeb14;
        case 0x1eeb18u: goto label_1eeb18;
        case 0x1eeb1cu: goto label_1eeb1c;
        case 0x1eeb20u: goto label_1eeb20;
        case 0x1eeb24u: goto label_1eeb24;
        case 0x1eeb28u: goto label_1eeb28;
        case 0x1eeb2cu: goto label_1eeb2c;
        case 0x1eeb30u: goto label_1eeb30;
        case 0x1eeb34u: goto label_1eeb34;
        case 0x1eeb38u: goto label_1eeb38;
        case 0x1eeb3cu: goto label_1eeb3c;
        case 0x1eeb40u: goto label_1eeb40;
        case 0x1eeb44u: goto label_1eeb44;
        case 0x1eeb48u: goto label_1eeb48;
        case 0x1eeb4cu: goto label_1eeb4c;
        case 0x1eeb50u: goto label_1eeb50;
        case 0x1eeb54u: goto label_1eeb54;
        case 0x1eeb58u: goto label_1eeb58;
        case 0x1eeb5cu: goto label_1eeb5c;
        case 0x1eeb60u: goto label_1eeb60;
        case 0x1eeb64u: goto label_1eeb64;
        case 0x1eeb68u: goto label_1eeb68;
        case 0x1eeb6cu: goto label_1eeb6c;
        case 0x1eeb70u: goto label_1eeb70;
        case 0x1eeb74u: goto label_1eeb74;
        case 0x1eeb78u: goto label_1eeb78;
        case 0x1eeb7cu: goto label_1eeb7c;
        case 0x1eeb80u: goto label_1eeb80;
        case 0x1eeb84u: goto label_1eeb84;
        case 0x1eeb88u: goto label_1eeb88;
        case 0x1eeb8cu: goto label_1eeb8c;
        case 0x1eeb90u: goto label_1eeb90;
        case 0x1eeb94u: goto label_1eeb94;
        case 0x1eeb98u: goto label_1eeb98;
        case 0x1eeb9cu: goto label_1eeb9c;
        case 0x1eeba0u: goto label_1eeba0;
        case 0x1eeba4u: goto label_1eeba4;
        case 0x1eeba8u: goto label_1eeba8;
        case 0x1eebacu: goto label_1eebac;
        case 0x1eebb0u: goto label_1eebb0;
        case 0x1eebb4u: goto label_1eebb4;
        case 0x1eebb8u: goto label_1eebb8;
        case 0x1eebbcu: goto label_1eebbc;
        case 0x1eebc0u: goto label_1eebc0;
        case 0x1eebc4u: goto label_1eebc4;
        case 0x1eebc8u: goto label_1eebc8;
        case 0x1eebccu: goto label_1eebcc;
        case 0x1eebd0u: goto label_1eebd0;
        case 0x1eebd4u: goto label_1eebd4;
        case 0x1eebd8u: goto label_1eebd8;
        case 0x1eebdcu: goto label_1eebdc;
        case 0x1eebe0u: goto label_1eebe0;
        case 0x1eebe4u: goto label_1eebe4;
        case 0x1eebe8u: goto label_1eebe8;
        case 0x1eebecu: goto label_1eebec;
        case 0x1eebf0u: goto label_1eebf0;
        case 0x1eebf4u: goto label_1eebf4;
        case 0x1eebf8u: goto label_1eebf8;
        case 0x1eebfcu: goto label_1eebfc;
        case 0x1eec00u: goto label_1eec00;
        case 0x1eec04u: goto label_1eec04;
        case 0x1eec08u: goto label_1eec08;
        case 0x1eec0cu: goto label_1eec0c;
        case 0x1eec10u: goto label_1eec10;
        case 0x1eec14u: goto label_1eec14;
        case 0x1eec18u: goto label_1eec18;
        case 0x1eec1cu: goto label_1eec1c;
        case 0x1eec20u: goto label_1eec20;
        case 0x1eec24u: goto label_1eec24;
        case 0x1eec28u: goto label_1eec28;
        case 0x1eec2cu: goto label_1eec2c;
        case 0x1eec30u: goto label_1eec30;
        case 0x1eec34u: goto label_1eec34;
        case 0x1eec38u: goto label_1eec38;
        case 0x1eec3cu: goto label_1eec3c;
        case 0x1eec40u: goto label_1eec40;
        case 0x1eec44u: goto label_1eec44;
        case 0x1eec48u: goto label_1eec48;
        case 0x1eec4cu: goto label_1eec4c;
        case 0x1eec50u: goto label_1eec50;
        case 0x1eec54u: goto label_1eec54;
        case 0x1eec58u: goto label_1eec58;
        case 0x1eec5cu: goto label_1eec5c;
        case 0x1eec60u: goto label_1eec60;
        case 0x1eec64u: goto label_1eec64;
        case 0x1eec68u: goto label_1eec68;
        case 0x1eec6cu: goto label_1eec6c;
        case 0x1eec70u: goto label_1eec70;
        case 0x1eec74u: goto label_1eec74;
        case 0x1eec78u: goto label_1eec78;
        case 0x1eec7cu: goto label_1eec7c;
        case 0x1eec80u: goto label_1eec80;
        case 0x1eec84u: goto label_1eec84;
        case 0x1eec88u: goto label_1eec88;
        case 0x1eec8cu: goto label_1eec8c;
        case 0x1eec90u: goto label_1eec90;
        case 0x1eec94u: goto label_1eec94;
        case 0x1eec98u: goto label_1eec98;
        case 0x1eec9cu: goto label_1eec9c;
        case 0x1eeca0u: goto label_1eeca0;
        case 0x1eeca4u: goto label_1eeca4;
        case 0x1eeca8u: goto label_1eeca8;
        case 0x1eecacu: goto label_1eecac;
        case 0x1eecb0u: goto label_1eecb0;
        case 0x1eecb4u: goto label_1eecb4;
        case 0x1eecb8u: goto label_1eecb8;
        case 0x1eecbcu: goto label_1eecbc;
        case 0x1eecc0u: goto label_1eecc0;
        case 0x1eecc4u: goto label_1eecc4;
        case 0x1eecc8u: goto label_1eecc8;
        case 0x1eecccu: goto label_1eeccc;
        case 0x1eecd0u: goto label_1eecd0;
        case 0x1eecd4u: goto label_1eecd4;
        case 0x1eecd8u: goto label_1eecd8;
        case 0x1eecdcu: goto label_1eecdc;
        case 0x1eece0u: goto label_1eece0;
        case 0x1eece4u: goto label_1eece4;
        case 0x1eece8u: goto label_1eece8;
        case 0x1eececu: goto label_1eecec;
        case 0x1eecf0u: goto label_1eecf0;
        case 0x1eecf4u: goto label_1eecf4;
        case 0x1eecf8u: goto label_1eecf8;
        case 0x1eecfcu: goto label_1eecfc;
        case 0x1eed00u: goto label_1eed00;
        case 0x1eed04u: goto label_1eed04;
        case 0x1eed08u: goto label_1eed08;
        case 0x1eed0cu: goto label_1eed0c;
        case 0x1eed10u: goto label_1eed10;
        case 0x1eed14u: goto label_1eed14;
        case 0x1eed18u: goto label_1eed18;
        case 0x1eed1cu: goto label_1eed1c;
        case 0x1eed20u: goto label_1eed20;
        case 0x1eed24u: goto label_1eed24;
        case 0x1eed28u: goto label_1eed28;
        case 0x1eed2cu: goto label_1eed2c;
        case 0x1eed30u: goto label_1eed30;
        case 0x1eed34u: goto label_1eed34;
        case 0x1eed38u: goto label_1eed38;
        case 0x1eed3cu: goto label_1eed3c;
        case 0x1eed40u: goto label_1eed40;
        case 0x1eed44u: goto label_1eed44;
        case 0x1eed48u: goto label_1eed48;
        case 0x1eed4cu: goto label_1eed4c;
        case 0x1eed50u: goto label_1eed50;
        case 0x1eed54u: goto label_1eed54;
        case 0x1eed58u: goto label_1eed58;
        case 0x1eed5cu: goto label_1eed5c;
        case 0x1eed60u: goto label_1eed60;
        case 0x1eed64u: goto label_1eed64;
        case 0x1eed68u: goto label_1eed68;
        case 0x1eed6cu: goto label_1eed6c;
        case 0x1eed70u: goto label_1eed70;
        case 0x1eed74u: goto label_1eed74;
        case 0x1eed78u: goto label_1eed78;
        case 0x1eed7cu: goto label_1eed7c;
        case 0x1eed80u: goto label_1eed80;
        case 0x1eed84u: goto label_1eed84;
        case 0x1eed88u: goto label_1eed88;
        case 0x1eed8cu: goto label_1eed8c;
        case 0x1eed90u: goto label_1eed90;
        case 0x1eed94u: goto label_1eed94;
        case 0x1eed98u: goto label_1eed98;
        case 0x1eed9cu: goto label_1eed9c;
        case 0x1eeda0u: goto label_1eeda0;
        case 0x1eeda4u: goto label_1eeda4;
        case 0x1eeda8u: goto label_1eeda8;
        case 0x1eedacu: goto label_1eedac;
        case 0x1eedb0u: goto label_1eedb0;
        case 0x1eedb4u: goto label_1eedb4;
        case 0x1eedb8u: goto label_1eedb8;
        case 0x1eedbcu: goto label_1eedbc;
        case 0x1eedc0u: goto label_1eedc0;
        case 0x1eedc4u: goto label_1eedc4;
        case 0x1eedc8u: goto label_1eedc8;
        case 0x1eedccu: goto label_1eedcc;
        case 0x1eedd0u: goto label_1eedd0;
        case 0x1eedd4u: goto label_1eedd4;
        case 0x1eedd8u: goto label_1eedd8;
        case 0x1eeddcu: goto label_1eeddc;
        case 0x1eede0u: goto label_1eede0;
        case 0x1eede4u: goto label_1eede4;
        case 0x1eede8u: goto label_1eede8;
        case 0x1eedecu: goto label_1eedec;
        case 0x1eedf0u: goto label_1eedf0;
        case 0x1eedf4u: goto label_1eedf4;
        case 0x1eedf8u: goto label_1eedf8;
        case 0x1eedfcu: goto label_1eedfc;
        case 0x1eee00u: goto label_1eee00;
        case 0x1eee04u: goto label_1eee04;
        default: return;
    }

label_1ee638:
    // 0x1ee638: 0xac202a00  sw          $zero, 0x2A00($at)
    ctx->pc = 0x1ee638u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10752), GPR_U32(ctx, 0));
label_1ee63c:
    // 0x1ee63c: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee63cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee640:
    // 0x1ee640: 0xaf808f50  sw          $zero, -0x70B0($gp)
    ctx->pc = 0x1ee640u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938448), GPR_U32(ctx, 0));
label_1ee644:
    // 0x1ee644: 0xac202a04  sw          $zero, 0x2A04($at)
    ctx->pc = 0x1ee644u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10756), GPR_U32(ctx, 0));
label_1ee648:
    // 0x1ee648: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee64c:
    // 0x1ee64c: 0xac202a08  sw          $zero, 0x2A08($at)
    ctx->pc = 0x1ee64cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10760), GPR_U32(ctx, 0));
label_1ee650:
    // 0x1ee650: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee654:
    // 0x1ee654: 0xa4202a0c  sh          $zero, 0x2A0C($at)
    ctx->pc = 0x1ee654u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10764), (uint16_t)GPR_U32(ctx, 0));
label_1ee658:
    // 0x1ee658: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee65c:
    // 0x1ee65c: 0xa4202a0e  sh          $zero, 0x2A0E($at)
    ctx->pc = 0x1ee65cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10766), (uint16_t)GPR_U32(ctx, 0));
label_1ee660:
    // 0x1ee660: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee664:
    // 0x1ee664: 0xac202a10  sw          $zero, 0x2A10($at)
    ctx->pc = 0x1ee664u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10768), GPR_U32(ctx, 0));
label_1ee668:
    // 0x1ee668: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee66c:
    // 0x1ee66c: 0xac202a14  sw          $zero, 0x2A14($at)
    ctx->pc = 0x1ee66cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10772), GPR_U32(ctx, 0));
label_1ee670:
    // 0x1ee670: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee674:
    // 0x1ee674: 0xac202a18  sw          $zero, 0x2A18($at)
    ctx->pc = 0x1ee674u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10776), GPR_U32(ctx, 0));
label_1ee678:
    // 0x1ee678: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee67c:
    // 0x1ee67c: 0xa4202a1c  sh          $zero, 0x2A1C($at)
    ctx->pc = 0x1ee67cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10780), (uint16_t)GPR_U32(ctx, 0));
label_1ee680:
    // 0x1ee680: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee684:
    // 0x1ee684: 0xa4202a1e  sh          $zero, 0x2A1E($at)
    ctx->pc = 0x1ee684u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10782), (uint16_t)GPR_U32(ctx, 0));
label_1ee688:
    // 0x1ee688: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee68c:
    // 0x1ee68c: 0xac202a20  sw          $zero, 0x2A20($at)
    ctx->pc = 0x1ee68cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10784), GPR_U32(ctx, 0));
label_1ee690:
    // 0x1ee690: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee694:
    // 0x1ee694: 0xac202a24  sw          $zero, 0x2A24($at)
    ctx->pc = 0x1ee694u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10788), GPR_U32(ctx, 0));
label_1ee698:
    // 0x1ee698: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee69c:
    // 0x1ee69c: 0xac202a28  sw          $zero, 0x2A28($at)
    ctx->pc = 0x1ee69cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10792), GPR_U32(ctx, 0));
label_1ee6a0:
    // 0x1ee6a0: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee6a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee6a4:
    // 0x1ee6a4: 0xa4202a2c  sh          $zero, 0x2A2C($at)
    ctx->pc = 0x1ee6a4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10796), (uint16_t)GPR_U32(ctx, 0));
label_1ee6a8:
    // 0x1ee6a8: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee6a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee6ac:
    // 0x1ee6ac: 0xa4202a2e  sh          $zero, 0x2A2E($at)
    ctx->pc = 0x1ee6acu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10798), (uint16_t)GPR_U32(ctx, 0));
label_1ee6b0:
    // 0x1ee6b0: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee6b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee6b4:
    // 0x1ee6b4: 0xac202a30  sw          $zero, 0x2A30($at)
    ctx->pc = 0x1ee6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10800), GPR_U32(ctx, 0));
label_1ee6b8:
    // 0x1ee6b8: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee6b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee6bc:
    // 0x1ee6bc: 0xac202a34  sw          $zero, 0x2A34($at)
    ctx->pc = 0x1ee6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10804), GPR_U32(ctx, 0));
label_1ee6c0:
    // 0x1ee6c0: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee6c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee6c4:
    // 0x1ee6c4: 0xac202a38  sw          $zero, 0x2A38($at)
    ctx->pc = 0x1ee6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10808), GPR_U32(ctx, 0));
label_1ee6c8:
    // 0x1ee6c8: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee6c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee6cc:
    // 0x1ee6cc: 0xa4202a3c  sh          $zero, 0x2A3C($at)
    ctx->pc = 0x1ee6ccu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10812), (uint16_t)GPR_U32(ctx, 0));
label_1ee6d0:
    // 0x1ee6d0: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee6d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee6d4:
    // 0x1ee6d4: 0xa4202a3e  sh          $zero, 0x2A3E($at)
    ctx->pc = 0x1ee6d4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10814), (uint16_t)GPR_U32(ctx, 0));
label_1ee6d8:
    // 0x1ee6d8: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee6d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee6dc:
    // 0x1ee6dc: 0xac202a40  sw          $zero, 0x2A40($at)
    ctx->pc = 0x1ee6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10816), GPR_U32(ctx, 0));
label_1ee6e0:
    // 0x1ee6e0: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee6e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee6e4:
    // 0x1ee6e4: 0xac202a44  sw          $zero, 0x2A44($at)
    ctx->pc = 0x1ee6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10820), GPR_U32(ctx, 0));
label_1ee6e8:
    // 0x1ee6e8: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee6e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee6ec:
    // 0x1ee6ec: 0xac202a48  sw          $zero, 0x2A48($at)
    ctx->pc = 0x1ee6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10824), GPR_U32(ctx, 0));
label_1ee6f0:
    // 0x1ee6f0: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee6f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee6f4:
    // 0x1ee6f4: 0xa4202a4c  sh          $zero, 0x2A4C($at)
    ctx->pc = 0x1ee6f4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10828), (uint16_t)GPR_U32(ctx, 0));
label_1ee6f8:
    // 0x1ee6f8: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee6fc:
    // 0x1ee6fc: 0xa4202a4e  sh          $zero, 0x2A4E($at)
    ctx->pc = 0x1ee6fcu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10830), (uint16_t)GPR_U32(ctx, 0));
label_1ee700:
    // 0x1ee700: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee704:
    // 0x1ee704: 0xac202a50  sw          $zero, 0x2A50($at)
    ctx->pc = 0x1ee704u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10832), GPR_U32(ctx, 0));
label_1ee708:
    // 0x1ee708: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee70c:
    // 0x1ee70c: 0xac202a54  sw          $zero, 0x2A54($at)
    ctx->pc = 0x1ee70cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10836), GPR_U32(ctx, 0));
label_1ee710:
    // 0x1ee710: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee714:
    // 0x1ee714: 0xac202a58  sw          $zero, 0x2A58($at)
    ctx->pc = 0x1ee714u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10840), GPR_U32(ctx, 0));
label_1ee718:
    // 0x1ee718: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee71c:
    // 0x1ee71c: 0xa4202a5c  sh          $zero, 0x2A5C($at)
    ctx->pc = 0x1ee71cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10844), (uint16_t)GPR_U32(ctx, 0));
label_1ee720:
    // 0x1ee720: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee724:
    // 0x1ee724: 0xa4202a5e  sh          $zero, 0x2A5E($at)
    ctx->pc = 0x1ee724u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10846), (uint16_t)GPR_U32(ctx, 0));
label_1ee728:
    // 0x1ee728: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ee728u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee72c:
    // 0x1ee72c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1ee72cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee730:
    // 0x1ee730: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1ee730u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee734:
    // 0x1ee734: 0x0  nop
    ctx->pc = 0x1ee734u;
    // NOP
label_1ee738:
    // 0x1ee738: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x1ee738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_1ee73c:
    // 0x1ee73c: 0x24422a60  addiu       $v0, $v0, 0x2A60
    ctx->pc = 0x1ee73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10848));
label_1ee740:
    // 0x1ee740: 0x240500ba  addiu       $a1, $zero, 0xBA
    ctx->pc = 0x1ee740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
label_1ee744:
    // 0x1ee744: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1ee744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_1ee748:
    // 0x1ee748: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1ee748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1ee74c:
    // 0x1ee74c: 0x578821  addu        $s1, $v0, $s7
    ctx->pc = 0x1ee74cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_1ee750:
    // 0x1ee750: 0xc05e234  jal         func_1788D0
label_1ee754:
    if (ctx->pc == 0x1EE754u) {
        ctx->pc = 0x1EE754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE750u;
        // 0x1ee754: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE758u;
        goto label_1ee758;
    }
    ctx->pc = 0x1EE750u;
    SET_GPR_U32(ctx, 31, 0x1EE758u);
    ctx->pc = 0x1EE754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE750u;
    // 0x1ee754: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1EE750u, 0x1EE758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE758u;
label_1ee758:
    // 0x1ee758: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1ee758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1ee75c:
    // 0x1ee75c: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_1ee760:
    if (ctx->pc == 0x1EE760u) {
        ctx->pc = 0x1EE760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE75Cu;
        // 0x1ee760: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE764u;
        goto label_1ee764;
    }
    ctx->pc = 0x1EE75Cu;
    {
        const bool branch_taken_0x1ee75c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EE760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE75Cu;
        // 0x1ee760: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee75c) {
            ctx->pc = 0x1EE76Cu;
            goto label_1ee76c;
        }
    }
    ctx->pc = 0x1EE764u;
label_1ee764:
    // 0x1ee764: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
label_1ee768:
    if (ctx->pc == 0x1EE768u) {
        ctx->pc = 0x1EE76Cu;
        goto label_1ee76c;
    }
    ctx->pc = 0x1EE764u;
    {
        const bool branch_taken_0x1ee764 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ee764) {
            ctx->pc = 0x1EE778u;
            goto label_1ee778;
        }
    }
    ctx->pc = 0x1EE76Cu;
label_1ee76c:
    // 0x1ee76c: 0x0  nop
    ctx->pc = 0x1ee76cu;
    // NOP
label_1ee770:
    // 0x1ee770: 0x10000002  b           . + 4 + (0x2 << 2)
label_1ee774:
    if (ctx->pc == 0x1EE774u) {
        ctx->pc = 0x1EE774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE770u;
        // 0x1ee774: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE778u;
        goto label_1ee778;
    }
    ctx->pc = 0x1EE770u;
    {
        const bool branch_taken_0x1ee770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE770u;
        // 0x1ee774: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee770) {
            ctx->pc = 0x1EE77Cu;
            goto label_1ee77c;
        }
    }
    ctx->pc = 0x1EE778u;
label_1ee778:
    // 0x1ee778: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ee778u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee77c:
    // 0x1ee77c: 0x0  nop
    ctx->pc = 0x1ee77cu;
    // NOP
label_1ee780:
    // 0x1ee780: 0x3407fe00  ori         $a3, $zero, 0xFE00
    ctx->pc = 0x1ee780u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1ee784:
    // 0x1ee784: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1ee784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1ee788:
    // 0x1ee788: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x1ee788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1ee78c:
    // 0x1ee78c: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x1ee78cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1ee790:
    // 0x1ee790: 0x240800a8  addiu       $t0, $zero, 0xA8
    ctx->pc = 0x1ee790u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_1ee794:
    // 0x1ee794: 0xc07c1f4  jal         func_1F07D0
label_1ee798:
    if (ctx->pc == 0x1EE798u) {
        ctx->pc = 0x1EE798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE794u;
        // 0x1ee798: 0x24090018  addiu       $t1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE79Cu;
        goto label_1ee79c;
    }
    ctx->pc = 0x1EE794u;
    SET_GPR_U32(ctx, 31, 0x1EE79Cu);
    ctx->pc = 0x1EE798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE794u;
    // 0x1ee798: 0x24090018  addiu       $t1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F07D0u;
    { ctx->pc = 0x1f07d0; return; }
    ctx->pc = 0x1EE79Cu;
label_1ee79c:
    // 0x1ee79c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ee79cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee7a0:
    // 0x1ee7a0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ee7a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee7a4:
    // 0x1ee7a4: 0x0  nop
    ctx->pc = 0x1ee7a4u;
    // NOP
label_1ee7a8:
    // 0x1ee7a8: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x1ee7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_1ee7ac:
    // 0x1ee7ac: 0x244405b0  addiu       $a0, $v0, 0x5B0
    ctx->pc = 0x1ee7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1456));
label_1ee7b0:
    // 0x1ee7b0: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x1ee7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1ee7b4:
    // 0x1ee7b4: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x1ee7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1ee7b8:
    // 0x1ee7b8: 0x3407fe00  ori         $a3, $zero, 0xFE00
    ctx->pc = 0x1ee7b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1ee7bc:
    // 0x1ee7bc: 0x240800a8  addiu       $t0, $zero, 0xA8
    ctx->pc = 0x1ee7bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_1ee7c0:
    // 0x1ee7c0: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x1ee7c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ee7c4:
    // 0x1ee7c4: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1ee7c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ee7c8:
    // 0x1ee7c8: 0xc05e060  jal         func_178180
label_1ee7cc:
    if (ctx->pc == 0x1EE7CCu) {
        ctx->pc = 0x1EE7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE7C8u;
        // 0x1ee7cc: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE7D0u;
        goto label_1ee7d0;
    }
    ctx->pc = 0x1EE7C8u;
    SET_GPR_U32(ctx, 31, 0x1EE7D0u);
    ctx->pc = 0x1EE7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE7C8u;
    // 0x1ee7cc: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178180u, 0x1EE7C8u, 0x1EE7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE7D0u;
label_1ee7d0:
    // 0x1ee7d0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ee7d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1ee7d4:
    // 0x1ee7d4: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x1ee7d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_1ee7d8:
    // 0x1ee7d8: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_1ee7dc:
    if (ctx->pc == 0x1EE7DCu) {
        ctx->pc = 0x1EE7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE7D8u;
        // 0x1ee7dc: 0x267300b0  addiu       $s3, $s3, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE7E0u;
        goto label_1ee7e0;
    }
    ctx->pc = 0x1EE7D8u;
    {
        const bool branch_taken_0x1ee7d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE7D8u;
        // 0x1ee7dc: 0x267300b0  addiu       $s3, $s3, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee7d8) {
            ctx->pc = 0x1EE7A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ee7a4;
        }
    }
    ctx->pc = 0x1EE7E0u;
label_1ee7e0:
    // 0x1ee7e0: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x1ee7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_1ee7e4:
    // 0x1ee7e4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1ee7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1ee7e8:
    // 0x1ee7e8: 0xa2240618  sb          $a0, 0x618($s1)
    ctx->pc = 0x1ee7e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1560), (uint8_t)GPR_U32(ctx, 4));
label_1ee7ec:
    // 0x1ee7ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ee7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ee7f0:
    // 0x1ee7f0: 0xa2200619  sb          $zero, 0x619($s1)
    ctx->pc = 0x1ee7f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1561), (uint8_t)GPR_U32(ctx, 0));
label_1ee7f4:
    // 0x1ee7f4: 0x26320710  addiu       $s2, $s1, 0x710
    ctx->pc = 0x1ee7f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1808));
label_1ee7f8:
    // 0x1ee7f8: 0xa220061a  sb          $zero, 0x61A($s1)
    ctx->pc = 0x1ee7f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1562), (uint8_t)GPR_U32(ctx, 0));
label_1ee7fc:
    // 0x1ee7fc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ee7fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee800:
    // 0x1ee800: 0xa223061b  sb          $v1, 0x61B($s1)
    ctx->pc = 0x1ee800u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1563), (uint8_t)GPR_U32(ctx, 3));
label_1ee804:
    // 0x1ee804: 0xae22061c  sw          $v0, 0x61C($s1)
    ctx->pc = 0x1ee804u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1564), GPR_U32(ctx, 2));
label_1ee808:
    // 0x1ee808: 0xa2240628  sb          $a0, 0x628($s1)
    ctx->pc = 0x1ee808u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1576), (uint8_t)GPR_U32(ctx, 4));
label_1ee80c:
    // 0x1ee80c: 0xa2200629  sb          $zero, 0x629($s1)
    ctx->pc = 0x1ee80cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1577), (uint8_t)GPR_U32(ctx, 0));
label_1ee810:
    // 0x1ee810: 0xa220062a  sb          $zero, 0x62A($s1)
    ctx->pc = 0x1ee810u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1578), (uint8_t)GPR_U32(ctx, 0));
label_1ee814:
    // 0x1ee814: 0xa223062b  sb          $v1, 0x62B($s1)
    ctx->pc = 0x1ee814u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1579), (uint8_t)GPR_U32(ctx, 3));
label_1ee818:
    // 0x1ee818: 0xae22062c  sw          $v0, 0x62C($s1)
    ctx->pc = 0x1ee818u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1580), GPR_U32(ctx, 2));
label_1ee81c:
    // 0x1ee81c: 0xa2240638  sb          $a0, 0x638($s1)
    ctx->pc = 0x1ee81cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1592), (uint8_t)GPR_U32(ctx, 4));
label_1ee820:
    // 0x1ee820: 0xa2200639  sb          $zero, 0x639($s1)
    ctx->pc = 0x1ee820u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1593), (uint8_t)GPR_U32(ctx, 0));
label_1ee824:
    // 0x1ee824: 0xa220063a  sb          $zero, 0x63A($s1)
    ctx->pc = 0x1ee824u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1594), (uint8_t)GPR_U32(ctx, 0));
label_1ee828:
    // 0x1ee828: 0xa223063b  sb          $v1, 0x63B($s1)
    ctx->pc = 0x1ee828u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1595), (uint8_t)GPR_U32(ctx, 3));
label_1ee82c:
    // 0x1ee82c: 0xae22063c  sw          $v0, 0x63C($s1)
    ctx->pc = 0x1ee82cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1596), GPR_U32(ctx, 2));
label_1ee830:
    // 0x1ee830: 0xa2240648  sb          $a0, 0x648($s1)
    ctx->pc = 0x1ee830u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1608), (uint8_t)GPR_U32(ctx, 4));
label_1ee834:
    // 0x1ee834: 0xa2200649  sb          $zero, 0x649($s1)
    ctx->pc = 0x1ee834u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1609), (uint8_t)GPR_U32(ctx, 0));
label_1ee838:
    // 0x1ee838: 0xa220064a  sb          $zero, 0x64A($s1)
    ctx->pc = 0x1ee838u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1610), (uint8_t)GPR_U32(ctx, 0));
label_1ee83c:
    // 0x1ee83c: 0xa223064b  sb          $v1, 0x64B($s1)
    ctx->pc = 0x1ee83cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1611), (uint8_t)GPR_U32(ctx, 3));
label_1ee840:
    // 0x1ee840: 0xae22064c  sw          $v0, 0x64C($s1)
    ctx->pc = 0x1ee840u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1612), GPR_U32(ctx, 2));
label_1ee844:
    // 0x1ee844: 0xa22006c8  sb          $zero, 0x6C8($s1)
    ctx->pc = 0x1ee844u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1736), (uint8_t)GPR_U32(ctx, 0));
label_1ee848:
    // 0x1ee848: 0xa22406c9  sb          $a0, 0x6C9($s1)
    ctx->pc = 0x1ee848u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1737), (uint8_t)GPR_U32(ctx, 4));
label_1ee84c:
    // 0x1ee84c: 0xa22006ca  sb          $zero, 0x6CA($s1)
    ctx->pc = 0x1ee84cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1738), (uint8_t)GPR_U32(ctx, 0));
label_1ee850:
    // 0x1ee850: 0xa22306cb  sb          $v1, 0x6CB($s1)
    ctx->pc = 0x1ee850u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1739), (uint8_t)GPR_U32(ctx, 3));
label_1ee854:
    // 0x1ee854: 0xae2206cc  sw          $v0, 0x6CC($s1)
    ctx->pc = 0x1ee854u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1740), GPR_U32(ctx, 2));
label_1ee858:
    // 0x1ee858: 0xa22006d8  sb          $zero, 0x6D8($s1)
    ctx->pc = 0x1ee858u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1752), (uint8_t)GPR_U32(ctx, 0));
label_1ee85c:
    // 0x1ee85c: 0xa22406d9  sb          $a0, 0x6D9($s1)
    ctx->pc = 0x1ee85cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1753), (uint8_t)GPR_U32(ctx, 4));
label_1ee860:
    // 0x1ee860: 0xa22006da  sb          $zero, 0x6DA($s1)
    ctx->pc = 0x1ee860u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1754), (uint8_t)GPR_U32(ctx, 0));
label_1ee864:
    // 0x1ee864: 0xa22306db  sb          $v1, 0x6DB($s1)
    ctx->pc = 0x1ee864u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1755), (uint8_t)GPR_U32(ctx, 3));
label_1ee868:
    // 0x1ee868: 0xae2206dc  sw          $v0, 0x6DC($s1)
    ctx->pc = 0x1ee868u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1756), GPR_U32(ctx, 2));
label_1ee86c:
    // 0x1ee86c: 0xa22006e8  sb          $zero, 0x6E8($s1)
    ctx->pc = 0x1ee86cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1768), (uint8_t)GPR_U32(ctx, 0));
label_1ee870:
    // 0x1ee870: 0xa22406e9  sb          $a0, 0x6E9($s1)
    ctx->pc = 0x1ee870u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1769), (uint8_t)GPR_U32(ctx, 4));
label_1ee874:
    // 0x1ee874: 0xa22006ea  sb          $zero, 0x6EA($s1)
    ctx->pc = 0x1ee874u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1770), (uint8_t)GPR_U32(ctx, 0));
label_1ee878:
    // 0x1ee878: 0xa22306eb  sb          $v1, 0x6EB($s1)
    ctx->pc = 0x1ee878u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1771), (uint8_t)GPR_U32(ctx, 3));
label_1ee87c:
    // 0x1ee87c: 0xae2206ec  sw          $v0, 0x6EC($s1)
    ctx->pc = 0x1ee87cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1772), GPR_U32(ctx, 2));
label_1ee880:
    // 0x1ee880: 0xa22006f8  sb          $zero, 0x6F8($s1)
    ctx->pc = 0x1ee880u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1784), (uint8_t)GPR_U32(ctx, 0));
label_1ee884:
    // 0x1ee884: 0xa22406f9  sb          $a0, 0x6F9($s1)
    ctx->pc = 0x1ee884u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1785), (uint8_t)GPR_U32(ctx, 4));
label_1ee888:
    // 0x1ee888: 0xa22006fa  sb          $zero, 0x6FA($s1)
    ctx->pc = 0x1ee888u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1786), (uint8_t)GPR_U32(ctx, 0));
label_1ee88c:
    // 0x1ee88c: 0xa22306fb  sb          $v1, 0x6FB($s1)
    ctx->pc = 0x1ee88cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1787), (uint8_t)GPR_U32(ctx, 3));
label_1ee890:
    // 0x1ee890: 0xae2206fc  sw          $v0, 0x6FC($s1)
    ctx->pc = 0x1ee890u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1788), GPR_U32(ctx, 2));
label_1ee894:
    // 0x1ee894: 0x0  nop
    ctx->pc = 0x1ee894u;
    // NOP
label_1ee898:
    // 0x1ee898: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ee898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ee89c:
    // 0x1ee89c: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x1ee89cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1ee8a0:
    // 0x1ee8a0: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x1ee8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1ee8a4:
    // 0x1ee8a4: 0x3407fe00  ori         $a3, $zero, 0xFE00
    ctx->pc = 0x1ee8a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1ee8a8:
    // 0x1ee8a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ee8a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee8ac:
    // 0x1ee8ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ee8acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee8b0:
    // 0x1ee8b0: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1ee8b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ee8b4:
    // 0x1ee8b4: 0xc05e060  jal         func_178180
label_1ee8b8:
    if (ctx->pc == 0x1EE8B8u) {
        ctx->pc = 0x1EE8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE8B4u;
        // 0x1ee8b8: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE8BCu;
        goto label_1ee8bc;
    }
    ctx->pc = 0x1EE8B4u;
    SET_GPR_U32(ctx, 31, 0x1EE8BCu);
    ctx->pc = 0x1EE8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE8B4u;
    // 0x1ee8b8: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178180u, 0x1EE8B4u, 0x1EE8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE8BCu;
label_1ee8bc:
    // 0x1ee8bc: 0x240500f0  addiu       $a1, $zero, 0xF0
    ctx->pc = 0x1ee8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_1ee8c0:
    // 0x1ee8c0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1ee8c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1ee8c4:
    // 0x1ee8c4: 0xa2450068  sb          $a1, 0x68($s2)
    ctx->pc = 0x1ee8c4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 104), (uint8_t)GPR_U32(ctx, 5));
label_1ee8c8:
    // 0x1ee8c8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1ee8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ee8cc:
    // 0x1ee8cc: 0xa2450069  sb          $a1, 0x69($s2)
    ctx->pc = 0x1ee8ccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 105), (uint8_t)GPR_U32(ctx, 5));
label_1ee8d0:
    // 0x1ee8d0: 0x240a0060  addiu       $t2, $zero, 0x60
    ctx->pc = 0x1ee8d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1ee8d4:
    // 0x1ee8d4: 0xa244006a  sb          $a0, 0x6A($s2)
    ctx->pc = 0x1ee8d4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 106), (uint8_t)GPR_U32(ctx, 4));
label_1ee8d8:
    // 0x1ee8d8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1ee8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1ee8dc:
    // 0x1ee8dc: 0xa24a006b  sb          $t2, 0x6B($s2)
    ctx->pc = 0x1ee8dcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 107), (uint8_t)GPR_U32(ctx, 10));
label_1ee8e0:
    // 0x1ee8e0: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x1ee8e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
label_1ee8e4:
    // 0x1ee8e4: 0xae43006c  sw          $v1, 0x6C($s2)
    ctx->pc = 0x1ee8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 3));
label_1ee8e8:
    // 0x1ee8e8: 0xa2450078  sb          $a1, 0x78($s2)
    ctx->pc = 0x1ee8e8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 120), (uint8_t)GPR_U32(ctx, 5));
label_1ee8ec:
    // 0x1ee8ec: 0xa2450079  sb          $a1, 0x79($s2)
    ctx->pc = 0x1ee8ecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 121), (uint8_t)GPR_U32(ctx, 5));
label_1ee8f0:
    // 0x1ee8f0: 0xa244007a  sb          $a0, 0x7A($s2)
    ctx->pc = 0x1ee8f0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 122), (uint8_t)GPR_U32(ctx, 4));
label_1ee8f4:
    // 0x1ee8f4: 0xa24a007b  sb          $t2, 0x7B($s2)
    ctx->pc = 0x1ee8f4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 123), (uint8_t)GPR_U32(ctx, 10));
label_1ee8f8:
    // 0x1ee8f8: 0xae43007c  sw          $v1, 0x7C($s2)
    ctx->pc = 0x1ee8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 3));
label_1ee8fc:
    // 0x1ee8fc: 0xa2400088  sb          $zero, 0x88($s2)
    ctx->pc = 0x1ee8fcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 136), (uint8_t)GPR_U32(ctx, 0));
label_1ee900:
    // 0x1ee900: 0xa2400089  sb          $zero, 0x89($s2)
    ctx->pc = 0x1ee900u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 137), (uint8_t)GPR_U32(ctx, 0));
label_1ee904:
    // 0x1ee904: 0xa240008a  sb          $zero, 0x8A($s2)
    ctx->pc = 0x1ee904u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 138), (uint8_t)GPR_U32(ctx, 0));
label_1ee908:
    // 0x1ee908: 0xa240008b  sb          $zero, 0x8B($s2)
    ctx->pc = 0x1ee908u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 139), (uint8_t)GPR_U32(ctx, 0));
label_1ee90c:
    // 0x1ee90c: 0xae43008c  sw          $v1, 0x8C($s2)
    ctx->pc = 0x1ee90cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 3));
label_1ee910:
    // 0x1ee910: 0xa2400098  sb          $zero, 0x98($s2)
    ctx->pc = 0x1ee910u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 152), (uint8_t)GPR_U32(ctx, 0));
label_1ee914:
    // 0x1ee914: 0xa2400099  sb          $zero, 0x99($s2)
    ctx->pc = 0x1ee914u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 153), (uint8_t)GPR_U32(ctx, 0));
label_1ee918:
    // 0x1ee918: 0xa240009a  sb          $zero, 0x9A($s2)
    ctx->pc = 0x1ee918u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 154), (uint8_t)GPR_U32(ctx, 0));
label_1ee91c:
    // 0x1ee91c: 0xa240009b  sb          $zero, 0x9B($s2)
    ctx->pc = 0x1ee91cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 155), (uint8_t)GPR_U32(ctx, 0));
label_1ee920:
    // 0x1ee920: 0xae43009c  sw          $v1, 0x9C($s2)
    ctx->pc = 0x1ee920u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 3));
label_1ee924:
    // 0x1ee924: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
label_1ee928:
    if (ctx->pc == 0x1EE928u) {
        ctx->pc = 0x1EE928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE924u;
        // 0x1ee928: 0x265200b0  addiu       $s2, $s2, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE92Cu;
        goto label_1ee92c;
    }
    ctx->pc = 0x1EE924u;
    {
        const bool branch_taken_0x1ee924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE924u;
        // 0x1ee928: 0x265200b0  addiu       $s2, $s2, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee924) {
            ctx->pc = 0x1EE894u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ee894;
        }
    }
    ctx->pc = 0x1EE92Cu;
label_1ee92c:
    // 0x1ee92c: 0x26240710  addiu       $a0, $s1, 0x710
    ctx->pc = 0x1ee92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1808));
label_1ee930:
    // 0x1ee930: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x1ee930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1ee934:
    // 0x1ee934: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x1ee934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1ee938:
    // 0x1ee938: 0x240700a8  addiu       $a3, $zero, 0xA8
    ctx->pc = 0x1ee938u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_1ee93c:
    // 0x1ee93c: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x1ee93cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ee940:
    // 0x1ee940: 0xc07c0d0  jal         func_1F0340
label_1ee944:
    if (ctx->pc == 0x1EE944u) {
        ctx->pc = 0x1EE944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE940u;
        // 0x1ee944: 0x2409000c  addiu       $t1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE948u;
        goto label_1ee948;
    }
    ctx->pc = 0x1EE940u;
    SET_GPR_U32(ctx, 31, 0x1EE948u);
    ctx->pc = 0x1EE944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE940u;
    // 0x1ee944: 0x2409000c  addiu       $t1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0340u;
    { ctx->pc = 0x1f0340; return; }
    ctx->pc = 0x1EE948u;
label_1ee948:
    // 0x1ee948: 0xc07082c  jal         func_1C20B0
label_1ee94c:
    if (ctx->pc == 0x1EE94Cu) {
        ctx->pc = 0x1EE94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE948u;
        // 0x1ee94c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE950u;
        goto label_1ee950;
    }
    ctx->pc = 0x1EE948u;
    SET_GPR_U32(ctx, 31, 0x1EE950u);
    ctx->pc = 0x1EE94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE948u;
    // 0x1ee94c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20B0u;
    { ctx->pc = 0x1c20b0; return; }
    ctx->pc = 0x1EE950u;
label_1ee950:
    // 0x1ee950: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ee950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ee954:
    // 0x1ee954: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x1ee954u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1ee958:
    // 0x1ee958: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1ee958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ee95c:
    // 0x1ee95c: 0x328affff  andi        $t2, $s4, 0xFFFF
    ctx->pc = 0x1ee95cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
label_1ee960:
    // 0x1ee960: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1ee960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1ee964:
    // 0x1ee964: 0x262409d0  addiu       $a0, $s1, 0x9D0
    ctx->pc = 0x1ee964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2512));
label_1ee968:
    // 0x1ee968: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ee968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ee96c:
    // 0x1ee96c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1ee96cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1ee970:
    // 0x1ee970: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1ee970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1ee974:
    // 0x1ee974: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1ee974u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1ee978:
    // 0x1ee978: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ee978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ee97c:
    // 0x1ee97c: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1ee97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1ee980:
    // 0x1ee980: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1ee980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1ee984:
    // 0x1ee984: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1ee984u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1ee988:
    // 0x1ee988: 0xc05de30  jal         func_1778C0
label_1ee98c:
    if (ctx->pc == 0x1EE98Cu) {
        ctx->pc = 0x1EE98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE988u;
        // 0x1ee98c: 0x120582d  daddu       $t3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE990u;
        goto label_1ee990;
    }
    ctx->pc = 0x1EE988u;
    SET_GPR_U32(ctx, 31, 0x1EE990u);
    ctx->pc = 0x1EE98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE988u;
    // 0x1ee98c: 0x120582d  daddu       $t3, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1EE988u, 0x1EE990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE990u;
label_1ee990:
    // 0x1ee990: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1ee990u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee994:
    // 0x1ee994: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ee994u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee998:
    // 0x1ee998: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ee998u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee99c:
    // 0x1ee99c: 0x0  nop
    ctx->pc = 0x1ee99cu;
    // NOP
label_1ee9a0:
    // 0x1ee9a0: 0xc07082c  jal         func_1C20B0
label_1ee9a4:
    if (ctx->pc == 0x1EE9A4u) {
        ctx->pc = 0x1EE9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE9A0u;
        // 0x1ee9a4: 0x26a40004  addiu       $a0, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE9A8u;
        goto label_1ee9a8;
    }
    ctx->pc = 0x1EE9A0u;
    SET_GPR_U32(ctx, 31, 0x1EE9A8u);
    ctx->pc = 0x1EE9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE9A0u;
    // 0x1ee9a4: 0x26a40004  addiu       $a0, $s5, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20B0u;
    { ctx->pc = 0x1c20b0; return; }
    ctx->pc = 0x1EE9A8u;
label_1ee9a8:
    // 0x1ee9a8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1ee9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ee9ac:
    // 0x1ee9ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ee9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ee9b0:
    // 0x1ee9b0: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x1ee9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
label_1ee9b4:
    // 0x1ee9b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ee9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ee9b8:
    // 0x1ee9b8: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1ee9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1ee9bc:
    // 0x1ee9bc: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1ee9bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1ee9c0:
    // 0x1ee9c0: 0x2331821  addu        $v1, $s1, $s3
    ctx->pc = 0x1ee9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_1ee9c4:
    // 0x1ee9c4: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1ee9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1ee9c8:
    // 0x1ee9c8: 0x24640a70  addiu       $a0, $v1, 0xA70
    ctx->pc = 0x1ee9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2672));
label_1ee9cc:
    // 0x1ee9cc: 0xffa50018  sd          $a1, 0x18($sp)
    ctx->pc = 0x1ee9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 5));
label_1ee9d0:
    // 0x1ee9d0: 0x264301d8  addiu       $v1, $s2, 0x1D8
    ctx->pc = 0x1ee9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 472));
label_1ee9d4:
    // 0x1ee9d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ee9d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ee9d8:
    // 0x1ee9d8: 0x306affff  andi        $t2, $v1, 0xFFFF
    ctx->pc = 0x1ee9d8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1ee9dc:
    // 0x1ee9dc: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1ee9dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1ee9e0:
    // 0x1ee9e0: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1ee9e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1ee9e4:
    // 0x1ee9e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ee9e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee9e8:
    // 0x1ee9e8: 0xc05de30  jal         func_1778C0
label_1ee9ec:
    if (ctx->pc == 0x1EE9ECu) {
        ctx->pc = 0x1EE9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE9E8u;
        // 0x1ee9ec: 0x240b0030  addiu       $t3, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE9F0u;
        goto label_1ee9f0;
    }
    ctx->pc = 0x1EE9E8u;
    SET_GPR_U32(ctx, 31, 0x1EE9F0u);
    ctx->pc = 0x1EE9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE9E8u;
    // 0x1ee9ec: 0x240b0030  addiu       $t3, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1EE9E8u, 0x1EE9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE9F0u;
label_1ee9f0:
    // 0x1ee9f0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1ee9f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1ee9f4:
    // 0x1ee9f4: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x1ee9f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1ee9f8:
    // 0x1ee9f8: 0x2aa30002  slti        $v1, $s5, 0x2
    ctx->pc = 0x1ee9f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
label_1ee9fc:
    // 0x1ee9fc: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
label_1eea00:
    if (ctx->pc == 0x1EEA00u) {
        ctx->pc = 0x1EEA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE9FCu;
        // 0x1eea00: 0x267300a0  addiu       $s3, $s3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEA04u;
        goto label_1eea04;
    }
    ctx->pc = 0x1EE9FCu;
    {
        const bool branch_taken_0x1ee9fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE9FCu;
        // 0x1eea00: 0x267300a0  addiu       $s3, $s3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee9fc) {
            ctx->pc = 0x1EE99Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ee99c;
        }
    }
    ctx->pc = 0x1EEA04u;
label_1eea04:
    // 0x1eea04: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1eea04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1eea08:
    // 0x1eea08: 0x26d61760  addiu       $s6, $s6, 0x1760
    ctx->pc = 0x1eea08u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 5984));
label_1eea0c:
    // 0x1eea0c: 0x2a03000a  slti        $v1, $s0, 0xA
    ctx->pc = 0x1eea0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
label_1eea10:
    // 0x1eea10: 0x1460ff48  bnez        $v1, . + 4 + (-0xB8 << 2)
label_1eea14:
    if (ctx->pc == 0x1EEA14u) {
        ctx->pc = 0x1EEA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEA10u;
        // 0x1eea14: 0x26940018  addiu       $s4, $s4, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEA18u;
        goto label_1eea18;
    }
    ctx->pc = 0x1EEA10u;
    {
        const bool branch_taken_0x1eea10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEA10u;
        // 0x1eea14: 0x26940018  addiu       $s4, $s4, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eea10) {
            ctx->pc = 0x1EE734u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ee734;
        }
    }
    ctx->pc = 0x1EEA18u;
label_1eea18:
    // 0x1eea18: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1eea18u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_1eea1c:
    // 0x1eea1c: 0x2bc30002  slti        $v1, $fp, 0x2
    ctx->pc = 0x1eea1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)2) ? 1 : 0);
label_1eea20:
    // 0x1eea20: 0x1460ff41  bnez        $v1, . + 4 + (-0xBF << 2)
label_1eea24:
    if (ctx->pc == 0x1EEA24u) {
        ctx->pc = 0x1EEA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEA20u;
        // 0x1eea24: 0x26f70bb0  addiu       $s7, $s7, 0xBB0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 2992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEA28u;
        goto label_1eea28;
    }
    ctx->pc = 0x1EEA20u;
    {
        const bool branch_taken_0x1eea20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEA20u;
        // 0x1eea24: 0x26f70bb0  addiu       $s7, $s7, 0xBB0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 2992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eea20) {
            ctx->pc = 0x1EE728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ee728;
        }
    }
    ctx->pc = 0x1EEA28u;
label_1eea28:
    // 0x1eea28: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1eea28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1eea2c:
    // 0x1eea2c: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x1eea2cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1eea30:
    // 0x1eea30: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1eea30u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1eea34:
    // 0x1eea34: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1eea34u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1eea38:
    // 0x1eea38: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1eea38u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1eea3c:
    // 0x1eea3c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1eea3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1eea40:
    // 0x1eea40: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1eea40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1eea44:
    // 0x1eea44: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1eea44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1eea48:
    // 0x1eea48: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1eea48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1eea4c:
    // 0x1eea4c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1eea4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1eea50:
    // 0x1eea50: 0x3e00008  jr          $ra
label_1eea54:
    if (ctx->pc == 0x1EEA54u) {
        ctx->pc = 0x1EEA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEA50u;
        // 0x1eea54: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEA58u;
        goto label_1eea58;
    }
    ctx->pc = 0x1EEA50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EEA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEA50u;
        // 0x1eea54: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEA50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EEA58u;
label_1eea58:
    // 0x1eea58: 0x0  nop
    ctx->pc = 0x1eea58u;
    // NOP
label_1eea5c:
    // 0x1eea5c: 0x0  nop
    ctx->pc = 0x1eea5cu;
    // NOP
label_1eea60:
    // 0x1eea60: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1eea60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1eea64:
    // 0x1eea64: 0xaf848f50  sw          $a0, -0x70B0($gp)
    ctx->pc = 0x1eea64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938448), GPR_U32(ctx, 4));
label_1eea68:
    // 0x1eea68: 0xac202a00  sw          $zero, 0x2A00($at)
    ctx->pc = 0x1eea68u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10752), GPR_U32(ctx, 0));
label_1eea6c:
    // 0x1eea6c: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1eea6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1eea70:
    // 0x1eea70: 0xac202a04  sw          $zero, 0x2A04($at)
    ctx->pc = 0x1eea70u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10756), GPR_U32(ctx, 0));
label_1eea74:
    // 0x1eea74: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1eea74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1eea78:
    // 0x1eea78: 0xac202a08  sw          $zero, 0x2A08($at)
    ctx->pc = 0x1eea78u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10760), GPR_U32(ctx, 0));
label_1eea7c:
    // 0x1eea7c: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1eea7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1eea80:
    // 0x1eea80: 0xa4202a0c  sh          $zero, 0x2A0C($at)
    ctx->pc = 0x1eea80u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10764), (uint16_t)GPR_U32(ctx, 0));
label_1eea84:
    // 0x1eea84: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1eea84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1eea88:
    // 0x1eea88: 0xa4202a0e  sh          $zero, 0x2A0E($at)
    ctx->pc = 0x1eea88u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10766), (uint16_t)GPR_U32(ctx, 0));
label_1eea8c:
    // 0x1eea8c: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1eea8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1eea90:
    // 0x1eea90: 0xac202a10  sw          $zero, 0x2A10($at)
    ctx->pc = 0x1eea90u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10768), GPR_U32(ctx, 0));
label_1eea94:
    // 0x1eea94: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1eea94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1eea98:
    // 0x1eea98: 0xac202a14  sw          $zero, 0x2A14($at)
    ctx->pc = 0x1eea98u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10772), GPR_U32(ctx, 0));
label_1eea9c:
    // 0x1eea9c: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1eea9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1eeaa0:
    // 0x1eeaa0: 0xac202a18  sw          $zero, 0x2A18($at)
    ctx->pc = 0x1eeaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10776), GPR_U32(ctx, 0));
label_1eeaa4:
    // 0x1eeaa4: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1eeaa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1eeaa8:
    // 0x1eeaa8: 0xa4202a1c  sh          $zero, 0x2A1C($at)
    ctx->pc = 0x1eeaa8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10780), (uint16_t)GPR_U32(ctx, 0));
label_1eeaac:
    // 0x1eeaac: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1eeaacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1eeab0:
    // 0x1eeab0: 0xa4202a1e  sh          $zero, 0x2A1E($at)
    ctx->pc = 0x1eeab0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10782), (uint16_t)GPR_U32(ctx, 0));
label_1eeab4:
    // 0x1eeab4: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1eeab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1eeab8:
    // 0x1eeab8: 0xac202a20  sw          $zero, 0x2A20($at)
    ctx->pc = 0x1eeab8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10784), GPR_U32(ctx, 0));
label_1eeabc:
    // 0x1eeabc: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1eeabcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1eeac0:
    // 0x1eeac0: 0xac202a24  sw          $zero, 0x2A24($at)
    ctx->pc = 0x1eeac0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10788), GPR_U32(ctx, 0));
label_1eeac4:
    // 0x1eeac4: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1eeac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1eeac8:
    // 0x1eeac8: 0xac202a28  sw          $zero, 0x2A28($at)
    ctx->pc = 0x1eeac8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10792), GPR_U32(ctx, 0));
label_1eeacc:
    // 0x1eeacc: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1eeaccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1eead0:
    // 0x1eead0: 0xa4202a2c  sh          $zero, 0x2A2C($at)
    ctx->pc = 0x1eead0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10796), (uint16_t)GPR_U32(ctx, 0));
label_1eead4:
    // 0x1eead4: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1eead4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1eead8:
    // 0x1eead8: 0xa4202a2e  sh          $zero, 0x2A2E($at)
    ctx->pc = 0x1eead8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10798), (uint16_t)GPR_U32(ctx, 0));
label_1eeadc:
    // 0x1eeadc: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1eeadcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1eeae0:
    // 0x1eeae0: 0xac202a30  sw          $zero, 0x2A30($at)
    ctx->pc = 0x1eeae0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10800), GPR_U32(ctx, 0));
label_1eeae4:
    // 0x1eeae4: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1eeae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1eeae8:
    // 0x1eeae8: 0xac202a34  sw          $zero, 0x2A34($at)
    ctx->pc = 0x1eeae8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10804), GPR_U32(ctx, 0));
label_1eeaec:
    // 0x1eeaec: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1eeaecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1eeaf0:
    // 0x1eeaf0: 0xac202a38  sw          $zero, 0x2A38($at)
    ctx->pc = 0x1eeaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10808), GPR_U32(ctx, 0));
label_1eeaf4:
    // 0x1eeaf4: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1eeaf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1eeaf8:
    // 0x1eeaf8: 0xa4202a3c  sh          $zero, 0x2A3C($at)
    ctx->pc = 0x1eeaf8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10812), (uint16_t)GPR_U32(ctx, 0));
label_1eeafc:
    // 0x1eeafc: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1eeafcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1eeb00:
    // 0x1eeb00: 0xa4202a3e  sh          $zero, 0x2A3E($at)
    ctx->pc = 0x1eeb00u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10814), (uint16_t)GPR_U32(ctx, 0));
label_1eeb04:
    // 0x1eeb04: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1eeb04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1eeb08:
    // 0x1eeb08: 0xac202a40  sw          $zero, 0x2A40($at)
    ctx->pc = 0x1eeb08u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10816), GPR_U32(ctx, 0));
label_1eeb0c:
    // 0x1eeb0c: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1eeb0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1eeb10:
    // 0x1eeb10: 0xac202a44  sw          $zero, 0x2A44($at)
    ctx->pc = 0x1eeb10u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10820), GPR_U32(ctx, 0));
label_1eeb14:
    // 0x1eeb14: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1eeb14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1eeb18:
    // 0x1eeb18: 0xac202a48  sw          $zero, 0x2A48($at)
    ctx->pc = 0x1eeb18u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10824), GPR_U32(ctx, 0));
label_1eeb1c:
    // 0x1eeb1c: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1eeb1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1eeb20:
    // 0x1eeb20: 0xa4202a4c  sh          $zero, 0x2A4C($at)
    ctx->pc = 0x1eeb20u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10828), (uint16_t)GPR_U32(ctx, 0));
label_1eeb24:
    // 0x1eeb24: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1eeb24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1eeb28:
    // 0x1eeb28: 0xa4202a4e  sh          $zero, 0x2A4E($at)
    ctx->pc = 0x1eeb28u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10830), (uint16_t)GPR_U32(ctx, 0));
label_1eeb2c:
    // 0x1eeb2c: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1eeb2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1eeb30:
    // 0x1eeb30: 0xac202a50  sw          $zero, 0x2A50($at)
    ctx->pc = 0x1eeb30u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10832), GPR_U32(ctx, 0));
label_1eeb34:
    // 0x1eeb34: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1eeb34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1eeb38:
    // 0x1eeb38: 0xac202a54  sw          $zero, 0x2A54($at)
    ctx->pc = 0x1eeb38u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10836), GPR_U32(ctx, 0));
label_1eeb3c:
    // 0x1eeb3c: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1eeb3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1eeb40:
    // 0x1eeb40: 0xac202a58  sw          $zero, 0x2A58($at)
    ctx->pc = 0x1eeb40u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10840), GPR_U32(ctx, 0));
label_1eeb44:
    // 0x1eeb44: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1eeb44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1eeb48:
    // 0x1eeb48: 0xa4202a5c  sh          $zero, 0x2A5C($at)
    ctx->pc = 0x1eeb48u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10844), (uint16_t)GPR_U32(ctx, 0));
label_1eeb4c:
    // 0x1eeb4c: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1eeb4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1eeb50:
    // 0x1eeb50: 0x3e00008  jr          $ra
label_1eeb54:
    if (ctx->pc == 0x1EEB54u) {
        ctx->pc = 0x1EEB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEB50u;
        // 0x1eeb54: 0xa4202a5e  sh          $zero, 0x2A5E($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 10846), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEB58u;
        goto label_1eeb58;
    }
    ctx->pc = 0x1EEB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EEB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEB50u;
        // 0x1eeb54: 0xa4202a5e  sh          $zero, 0x2A5E($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 10846), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEB50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EEB58u;
label_1eeb58:
    // 0x1eeb58: 0x0  nop
    ctx->pc = 0x1eeb58u;
    // NOP
label_1eeb5c:
    // 0x1eeb5c: 0x0  nop
    ctx->pc = 0x1eeb5cu;
    // NOP
label_1eeb60:
    // 0x1eeb60: 0x53900  sll         $a3, $a1, 4
    ctx->pc = 0x1eeb60u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1eeb64:
    // 0x1eeb64: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x1eeb64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
label_1eeb68:
    // 0x1eeb68: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x1eeb68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1eeb6c:
    // 0x1eeb6c: 0x24632a0c  addiu       $v1, $v1, 0x2A0C
    ctx->pc = 0x1eeb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10764));
label_1eeb70:
    // 0x1eeb70: 0x672021  addu        $a0, $v1, $a3
    ctx->pc = 0x1eeb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1eeb74:
    // 0x1eeb74: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x1eeb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_1eeb78:
    // 0x1eeb78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1eeb78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eeb7c:
    // 0x1eeb7c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1eeb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1eeb80:
    // 0x1eeb80: 0x14c30006  bne         $a2, $v1, . + 4 + (0x6 << 2)
label_1eeb84:
    if (ctx->pc == 0x1EEB84u) {
        ctx->pc = 0x1EEB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEB80u;
        // 0x1eeb84: 0xa4860000  sh          $a2, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEB88u;
        goto label_1eeb88;
    }
    ctx->pc = 0x1EEB80u;
    {
        const bool branch_taken_0x1eeb80 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EEB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEB80u;
        // 0x1eeb84: 0xa4860000  sh          $a2, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeb80) {
            ctx->pc = 0x1EEB9Cu;
            goto label_1eeb9c;
        }
    }
    ctx->pc = 0x1EEB88u;
label_1eeb88:
    // 0x1eeb88: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x1eeb88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
label_1eeb8c:
    // 0x1eeb8c: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x1eeb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1eeb90:
    // 0x1eeb90: 0x24632a08  addiu       $v1, $v1, 0x2A08
    ctx->pc = 0x1eeb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10760));
label_1eeb94:
    // 0x1eeb94: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1eeb94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1eeb98:
    // 0x1eeb98: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1eeb98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1eeb9c:
    // 0x1eeb9c: 0x3e00008  jr          $ra
label_1eeba0:
    if (ctx->pc == 0x1EEBA0u) {
        ctx->pc = 0x1EEBA4u;
        goto label_1eeba4;
    }
    ctx->pc = 0x1EEB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEB9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EEBA4u;
label_1eeba4:
    // 0x1eeba4: 0x0  nop
    ctx->pc = 0x1eeba4u;
    // NOP
label_1eeba8:
    // 0x1eeba8: 0x0  nop
    ctx->pc = 0x1eeba8u;
    // NOP
label_1eebac:
    // 0x1eebac: 0x0  nop
    ctx->pc = 0x1eebacu;
    // NOP
label_1eebb0:
    // 0x1eebb0: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x1eebb0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1eebb4:
    // 0x1eebb4: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x1eebb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
label_1eebb8:
    // 0x1eebb8: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x1eebb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
label_1eebbc:
    // 0x1eebbc: 0x24632a04  addiu       $v1, $v1, 0x2A04
    ctx->pc = 0x1eebbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10756));
label_1eebc0:
    // 0x1eebc0: 0x24842a00  addiu       $a0, $a0, 0x2A00
    ctx->pc = 0x1eebc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10752));
label_1eebc4:
    // 0x1eebc4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1eebc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1eebc8:
    // 0x1eebc8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1eebc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1eebcc:
    // 0x1eebcc: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1eebccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_1eebd0:
    // 0x1eebd0: 0x3e00008  jr          $ra
label_1eebd4:
    if (ctx->pc == 0x1EEBD4u) {
        ctx->pc = 0x1EEBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEBD0u;
        // 0x1eebd4: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEBD8u;
        goto label_1eebd8;
    }
    ctx->pc = 0x1EEBD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EEBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEBD0u;
        // 0x1eebd4: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEBD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EEBD8u;
label_1eebd8:
    // 0x1eebd8: 0x0  nop
    ctx->pc = 0x1eebd8u;
    // NOP
label_1eebdc:
    // 0x1eebdc: 0x0  nop
    ctx->pc = 0x1eebdcu;
    // NOP
label_1eebe0:
    // 0x1eebe0: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x1eebe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_1eebe4:
    // 0x1eebe4: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1eebe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1eebe8:
    // 0x1eebe8: 0x24422a00  addiu       $v0, $v0, 0x2A00
    ctx->pc = 0x1eebe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10752));
label_1eebec:
    // 0x1eebec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eebecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1eebf0:
    // 0x1eebf0: 0x3e00008  jr          $ra
label_1eebf4:
    if (ctx->pc == 0x1EEBF4u) {
        ctx->pc = 0x1EEBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEBF0u;
        // 0x1eebf4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEBF8u;
        goto label_1eebf8;
    }
    ctx->pc = 0x1EEBF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EEBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEBF0u;
        // 0x1eebf4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEBF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EEBF8u;
label_1eebf8:
    // 0x1eebf8: 0x0  nop
    ctx->pc = 0x1eebf8u;
    // NOP
label_1eebfc:
    // 0x1eebfc: 0x0  nop
    ctx->pc = 0x1eebfcu;
    // NOP
label_1eec00:
    // 0x1eec00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1eec00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eec04:
    // 0x1eec04: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1eec04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eec08:
    // 0x1eec08: 0x3c06004c  lui         $a2, 0x4C
    ctx->pc = 0x1eec08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)76 << 16));
label_1eec0c:
    // 0x1eec0c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1eec0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1eec10:
    // 0x1eec10: 0x240d0004  addiu       $t5, $zero, 0x4
    ctx->pc = 0x1eec10u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1eec14:
    // 0x1eec14: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1eec14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1eec18:
    // 0x1eec18: 0x240b0005  addiu       $t3, $zero, 0x5
    ctx->pc = 0x1eec18u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1eec1c:
    // 0x1eec1c: 0x240c0006  addiu       $t4, $zero, 0x6
    ctx->pc = 0x1eec1cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1eec20:
    // 0x1eec20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1eec20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eec24:
    // 0x1eec24: 0x24c62a00  addiu       $a2, $a2, 0x2A00
    ctx->pc = 0x1eec24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10752));
label_1eec28:
    // 0x1eec28: 0xc84821  addu        $t1, $a2, $t0
    ctx->pc = 0x1eec28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_1eec2c:
    // 0x1eec2c: 0x8d2a0000  lw          $t2, 0x0($t1)
    ctx->pc = 0x1eec2cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_1eec30:
    // 0x1eec30: 0x1545000a  bne         $t2, $a1, . + 4 + (0xA << 2)
label_1eec34:
    if (ctx->pc == 0x1EEC34u) {
        ctx->pc = 0x1EEC38u;
        goto label_1eec38;
    }
    ctx->pc = 0x1EEC30u;
    {
        const bool branch_taken_0x1eec30 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 5));
        if (branch_taken_0x1eec30) {
            ctx->pc = 0x1EEC5Cu;
            goto label_1eec5c;
        }
    }
    ctx->pc = 0x1EEC38u;
label_1eec38:
    // 0x1eec38: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1eec38u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_1eec3c:
    // 0x1eec3c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1eec3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1eec40:
    // 0x1eec40: 0xad2a0004  sw          $t2, 0x4($t1)
    ctx->pc = 0x1eec40u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 10));
label_1eec44:
    // 0x1eec44: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1eec44u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_1eec48:
    // 0x1eec48: 0x294a000c  slti        $t2, $t2, 0xC
    ctx->pc = 0x1eec48u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)12) ? 1 : 0);
label_1eec4c:
    // 0x1eec4c: 0x15400026  bnez        $t2, . + 4 + (0x26 << 2)
label_1eec50:
    if (ctx->pc == 0x1EEC50u) {
        ctx->pc = 0x1EEC54u;
        goto label_1eec54;
    }
    ctx->pc = 0x1EEC4Cu;
    {
        const bool branch_taken_0x1eec4c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eec4c) {
            ctx->pc = 0x1EECE8u;
            goto label_1eece8;
        }
    }
    ctx->pc = 0x1EEC54u;
label_1eec54:
    // 0x1eec54: 0x10000024  b           . + 4 + (0x24 << 2)
label_1eec58:
    if (ctx->pc == 0x1EEC58u) {
        ctx->pc = 0x1EEC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEC54u;
        // 0x1eec58: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEC5Cu;
        goto label_1eec5c;
    }
    ctx->pc = 0x1EEC54u;
    {
        const bool branch_taken_0x1eec54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEC54u;
        // 0x1eec58: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eec54) {
            ctx->pc = 0x1EECE8u;
            goto label_1eece8;
        }
    }
    ctx->pc = 0x1EEC5Cu;
label_1eec5c:
    // 0x1eec5c: 0x0  nop
    ctx->pc = 0x1eec5cu;
    // NOP
label_1eec60:
    // 0x1eec60: 0x1543000a  bne         $t2, $v1, . + 4 + (0xA << 2)
label_1eec64:
    if (ctx->pc == 0x1EEC64u) {
        ctx->pc = 0x1EEC68u;
        goto label_1eec68;
    }
    ctx->pc = 0x1EEC60u;
    {
        const bool branch_taken_0x1eec60 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        if (branch_taken_0x1eec60) {
            ctx->pc = 0x1EEC8Cu;
            goto label_1eec8c;
        }
    }
    ctx->pc = 0x1EEC68u;
label_1eec68:
    // 0x1eec68: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1eec68u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_1eec6c:
    // 0x1eec6c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1eec6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1eec70:
    // 0x1eec70: 0xad2a0004  sw          $t2, 0x4($t1)
    ctx->pc = 0x1eec70u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 10));
label_1eec74:
    // 0x1eec74: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1eec74u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_1eec78:
    // 0x1eec78: 0x294a000c  slti        $t2, $t2, 0xC
    ctx->pc = 0x1eec78u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)12) ? 1 : 0);
label_1eec7c:
    // 0x1eec7c: 0x1540001a  bnez        $t2, . + 4 + (0x1A << 2)
label_1eec80:
    if (ctx->pc == 0x1EEC80u) {
        ctx->pc = 0x1EEC84u;
        goto label_1eec84;
    }
    ctx->pc = 0x1EEC7Cu;
    {
        const bool branch_taken_0x1eec7c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eec7c) {
            ctx->pc = 0x1EECE8u;
            goto label_1eece8;
        }
    }
    ctx->pc = 0x1EEC84u;
label_1eec84:
    // 0x1eec84: 0x10000018  b           . + 4 + (0x18 << 2)
label_1eec88:
    if (ctx->pc == 0x1EEC88u) {
        ctx->pc = 0x1EEC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEC84u;
        // 0x1eec88: 0xad200000  sw          $zero, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEC8Cu;
        goto label_1eec8c;
    }
    ctx->pc = 0x1EEC84u;
    {
        const bool branch_taken_0x1eec84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEC84u;
        // 0x1eec88: 0xad200000  sw          $zero, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eec84) {
            ctx->pc = 0x1EECE8u;
            goto label_1eece8;
        }
    }
    ctx->pc = 0x1EEC8Cu;
label_1eec8c:
    // 0x1eec8c: 0x0  nop
    ctx->pc = 0x1eec8cu;
    // NOP
label_1eec90:
    // 0x1eec90: 0x154d000a  bne         $t2, $t5, . + 4 + (0xA << 2)
label_1eec94:
    if (ctx->pc == 0x1EEC94u) {
        ctx->pc = 0x1EEC98u;
        goto label_1eec98;
    }
    ctx->pc = 0x1EEC90u;
    {
        const bool branch_taken_0x1eec90 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 13));
        if (branch_taken_0x1eec90) {
            ctx->pc = 0x1EECBCu;
            goto label_1eecbc;
        }
    }
    ctx->pc = 0x1EEC98u;
label_1eec98:
    // 0x1eec98: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1eec98u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_1eec9c:
    // 0x1eec9c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1eec9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1eeca0:
    // 0x1eeca0: 0xad2a0004  sw          $t2, 0x4($t1)
    ctx->pc = 0x1eeca0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 10));
label_1eeca4:
    // 0x1eeca4: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1eeca4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_1eeca8:
    // 0x1eeca8: 0x294a000c  slti        $t2, $t2, 0xC
    ctx->pc = 0x1eeca8u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)12) ? 1 : 0);
label_1eecac:
    // 0x1eecac: 0x1540000e  bnez        $t2, . + 4 + (0xE << 2)
label_1eecb0:
    if (ctx->pc == 0x1EECB0u) {
        ctx->pc = 0x1EECB4u;
        goto label_1eecb4;
    }
    ctx->pc = 0x1EECACu;
    {
        const bool branch_taken_0x1eecac = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eecac) {
            ctx->pc = 0x1EECE8u;
            goto label_1eece8;
        }
    }
    ctx->pc = 0x1EECB4u;
label_1eecb4:
    // 0x1eecb4: 0x1000000c  b           . + 4 + (0xC << 2)
label_1eecb8:
    if (ctx->pc == 0x1EECB8u) {
        ctx->pc = 0x1EECB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EECB4u;
        // 0x1eecb8: 0xad2c0000  sw          $t4, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EECBCu;
        goto label_1eecbc;
    }
    ctx->pc = 0x1EECB4u;
    {
        const bool branch_taken_0x1eecb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EECB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EECB4u;
        // 0x1eecb8: 0xad2c0000  sw          $t4, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eecb4) {
            ctx->pc = 0x1EECE8u;
            goto label_1eece8;
        }
    }
    ctx->pc = 0x1EECBCu;
label_1eecbc:
    // 0x1eecbc: 0x0  nop
    ctx->pc = 0x1eecbcu;
    // NOP
label_1eecc0:
    // 0x1eecc0: 0x154b0009  bne         $t2, $t3, . + 4 + (0x9 << 2)
label_1eecc4:
    if (ctx->pc == 0x1EECC4u) {
        ctx->pc = 0x1EECC8u;
        goto label_1eecc8;
    }
    ctx->pc = 0x1EECC0u;
    {
        const bool branch_taken_0x1eecc0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 11));
        if (branch_taken_0x1eecc0) {
            ctx->pc = 0x1EECE8u;
            goto label_1eece8;
        }
    }
    ctx->pc = 0x1EECC8u;
label_1eecc8:
    // 0x1eecc8: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1eecc8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_1eeccc:
    // 0x1eeccc: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1eecccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1eecd0:
    // 0x1eecd0: 0xad2a0004  sw          $t2, 0x4($t1)
    ctx->pc = 0x1eecd0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 10));
label_1eecd4:
    // 0x1eecd4: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1eecd4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_1eecd8:
    // 0x1eecd8: 0x294a000c  slti        $t2, $t2, 0xC
    ctx->pc = 0x1eecd8u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)12) ? 1 : 0);
label_1eecdc:
    // 0x1eecdc: 0x15400002  bnez        $t2, . + 4 + (0x2 << 2)
label_1eece0:
    if (ctx->pc == 0x1EECE0u) {
        ctx->pc = 0x1EECE4u;
        goto label_1eece4;
    }
    ctx->pc = 0x1EECDCu;
    {
        const bool branch_taken_0x1eecdc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eecdc) {
            ctx->pc = 0x1EECE8u;
            goto label_1eece8;
        }
    }
    ctx->pc = 0x1EECE4u;
label_1eece4:
    // 0x1eece4: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x1eece4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
label_1eece8:
    // 0x1eece8: 0x8d2e0008  lw          $t6, 0x8($t1)
    ctx->pc = 0x1eece8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_1eecec:
    // 0x1eecec: 0x19c0000b  blez        $t6, . + 4 + (0xB << 2)
label_1eecf0:
    if (ctx->pc == 0x1EECF0u) {
        ctx->pc = 0x1EECF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EECECu;
        // 0x1eecf0: 0x252f0008  addiu       $t7, $t1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EECF4u;
        goto label_1eecf4;
    }
    ctx->pc = 0x1EECECu;
    {
        const bool branch_taken_0x1eecec = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x1EECF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EECECu;
        // 0x1eecf0: 0x252f0008  addiu       $t7, $t1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eecec) {
            ctx->pc = 0x1EED1Cu;
            goto label_1eed1c;
        }
    }
    ctx->pc = 0x1EECF4u;
label_1eecf4:
    // 0x1eecf4: 0x852a000c  lh          $t2, 0xC($t1)
    ctx->pc = 0x1eecf4u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 12)));
label_1eecf8:
    // 0x1eecf8: 0x11450008  beq         $t2, $a1, . + 4 + (0x8 << 2)
label_1eecfc:
    if (ctx->pc == 0x1EECFCu) {
        ctx->pc = 0x1EED00u;
        goto label_1eed00;
    }
    ctx->pc = 0x1EECF8u;
    {
        const bool branch_taken_0x1eecf8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 5));
        if (branch_taken_0x1eecf8) {
            ctx->pc = 0x1EED1Cu;
            goto label_1eed1c;
        }
    }
    ctx->pc = 0x1EED00u;
label_1eed00:
    // 0x1eed00: 0x8529000e  lh          $t1, 0xE($t1)
    ctx->pc = 0x1eed00u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 14)));
label_1eed04:
    // 0x1eed04: 0x11250005  beq         $t1, $a1, . + 4 + (0x5 << 2)
label_1eed08:
    if (ctx->pc == 0x1EED08u) {
        ctx->pc = 0x1EED0Cu;
        goto label_1eed0c;
    }
    ctx->pc = 0x1EED04u;
    {
        const bool branch_taken_0x1eed04 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 5));
        if (branch_taken_0x1eed04) {
            ctx->pc = 0x1EED1Cu;
            goto label_1eed1c;
        }
    }
    ctx->pc = 0x1EED0Cu;
label_1eed0c:
    // 0x1eed0c: 0x25c9fff8  addiu       $t1, $t6, -0x8
    ctx->pc = 0x1eed0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967288));
label_1eed10:
    // 0x1eed10: 0x9082a  slt         $at, $zero, $t1
    ctx->pc = 0x1eed10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_1eed14:
    // 0x1eed14: 0x1480a  movz        $t1, $zero, $at
    ctx->pc = 0x1eed14u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_1eed18:
    // 0x1eed18: 0xade90000  sw          $t1, 0x0($t7)
    ctx->pc = 0x1eed18u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 9));
label_1eed1c:
    // 0x1eed1c: 0x0  nop
    ctx->pc = 0x1eed1cu;
    // NOP
label_1eed20:
    // 0x1eed20: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1eed20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1eed24:
    // 0x1eed24: 0x28e90006  slti        $t1, $a3, 0x6
    ctx->pc = 0x1eed24u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)6) ? 1 : 0);
label_1eed28:
    // 0x1eed28: 0x1520ffbf  bnez        $t1, . + 4 + (-0x41 << 2)
label_1eed2c:
    if (ctx->pc == 0x1EED2Cu) {
        ctx->pc = 0x1EED2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED28u;
        // 0x1eed2c: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EED30u;
        goto label_1eed30;
    }
    ctx->pc = 0x1EED28u;
    {
        const bool branch_taken_0x1eed28 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EED2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED28u;
        // 0x1eed2c: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eed28) {
            ctx->pc = 0x1EEC28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eec28;
        }
    }
    ctx->pc = 0x1EED30u;
label_1eed30:
    // 0x1eed30: 0x3e00008  jr          $ra
label_1eed34:
    if (ctx->pc == 0x1EED34u) {
        ctx->pc = 0x1EED38u;
        goto label_1eed38;
    }
    ctx->pc = 0x1EED30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EED30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EED38u;
label_1eed38:
    // 0x1eed38: 0x0  nop
    ctx->pc = 0x1eed38u;
    // NOP
label_1eed3c:
    // 0x1eed3c: 0x0  nop
    ctx->pc = 0x1eed3cu;
    // NOP
label_1eed40:
    // 0x1eed40: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1eed40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1eed44:
    // 0x1eed44: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x1eed44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_1eed48:
    // 0x1eed48: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1eed48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1eed4c:
    // 0x1eed4c: 0x34643ffc  ori         $a0, $v1, 0x3FFC
    ctx->pc = 0x1eed4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16380);
label_1eed50:
    // 0x1eed50: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1eed50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1eed54:
    // 0x1eed54: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1eed54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_1eed58:
    // 0x1eed58: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1eed58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1eed5c:
    // 0x1eed5c: 0x24631e00  addiu       $v1, $v1, 0x1E00
    ctx->pc = 0x1eed5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7680));
label_1eed60:
    // 0x1eed60: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1eed60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1eed64:
    // 0x1eed64: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1eed64u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eed68:
    // 0x1eed68: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1eed68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1eed6c:
    // 0x1eed6c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1eed6cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eed70:
    // 0x1eed70: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1eed70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1eed74:
    // 0x1eed74: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1eed74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1eed78:
    // 0x1eed78: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1eed78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eed7c:
    // 0x1eed7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1eed7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1eed80:
    // 0x1eed80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1eed80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1eed84:
    // 0x1eed84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1eed84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1eed88:
    // 0x1eed88: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1eed88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1eed8c:
    // 0x1eed8c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1eed8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eed90:
    // 0x1eed90: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1eed90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_1eed94:
    // 0x1eed94: 0x100001ae  b           . + 4 + (0x1AE << 2)
label_1eed98:
    if (ctx->pc == 0x1EED98u) {
        ctx->pc = 0x1EED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED94u;
        // 0x1eed98: 0x64f021  addu        $fp, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EED9Cu;
        goto label_1eed9c;
    }
    ctx->pc = 0x1EED94u;
    {
        const bool branch_taken_0x1eed94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED94u;
        // 0x1eed98: 0x64f021  addu        $fp, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eed94) {
            ctx->pc = 0x1EF450u;
            { ctx->pc = 0x1ef450; return; }
        }
    }
    ctx->pc = 0x1EED9Cu;
label_1eed9c:
    // 0x1eed9c: 0x24632a00  addiu       $v1, $v1, 0x2A00
    ctx->pc = 0x1eed9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10752));
label_1eeda0:
    // 0x1eeda0: 0x77a821  addu        $s5, $v1, $s7
    ctx->pc = 0x1eeda0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
label_1eeda4:
    // 0x1eeda4: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x1eeda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1eeda8:
    // 0x1eeda8: 0x106001a4  beqz        $v1, . + 4 + (0x1A4 << 2)
label_1eedac:
    if (ctx->pc == 0x1EEDACu) {
        ctx->pc = 0x1EEDB0u;
        goto label_1eedb0;
    }
    ctx->pc = 0x1EEDA8u;
    {
        const bool branch_taken_0x1eeda8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eeda8) {
            ctx->pc = 0x1EF43Cu;
            { ctx->pc = 0x1ef43c; return; }
        }
    }
    ctx->pc = 0x1EEDB0u;
label_1eedb0:
    // 0x1eedb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eedb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eedb4:
    // 0x1eedb4: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
label_1eedb8:
    if (ctx->pc == 0x1EEDB8u) {
        ctx->pc = 0x1EEDBCu;
        goto label_1eedbc;
    }
    ctx->pc = 0x1EEDB4u;
    {
        const bool branch_taken_0x1eedb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eedb4) {
            ctx->pc = 0x1EEE00u;
            goto label_1eee00;
        }
    }
    ctx->pc = 0x1EEDBCu;
label_1eedbc:
    // 0x1eedbc: 0x8ea60004  lw          $a2, 0x4($s5)
    ctx->pc = 0x1eedbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_1eedc0:
    // 0x1eedc0: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x1eedc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
label_1eedc4:
    // 0x1eedc4: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x1eedc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_1eedc8:
    // 0x1eedc8: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x1eedc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1eedcc:
    // 0x1eedcc: 0xa63023  subu        $a2, $a1, $a2
    ctx->pc = 0x1eedccu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1eedd0:
    // 0x1eedd0: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x1eedd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1eedd4:
    // 0x1eedd4: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1eedd4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1eedd8:
    // 0x1eedd8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1eedd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1eeddc:
    // 0x1eeddc: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x1eeddcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1eede0:
    // 0x1eede0: 0x0  nop
    ctx->pc = 0x1eede0u;
    // NOP
label_1eede4:
    // 0x1eede4: 0x0  nop
    ctx->pc = 0x1eede4u;
    // NOP
label_1eede8:
    // 0x1eede8: 0x1010  mfhi        $v0
    ctx->pc = 0x1eede8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1eedec:
    // 0x1eedec: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x1eedecu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_1eedf0:
    // 0x1eedf0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1eedf0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1eedf4:
    // 0x1eedf4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1eedf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1eedf8:
    // 0x1eedf8: 0x10000042  b           . + 4 + (0x42 << 2)
label_1eedfc:
    if (ctx->pc == 0x1EEDFCu) {
        ctx->pc = 0x1EEDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEDF8u;
        // 0x1eedfc: 0x2451ff58  addiu       $s1, $v0, -0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEE00u;
        goto label_1eee00;
    }
    ctx->pc = 0x1EEDF8u;
    {
        const bool branch_taken_0x1eedf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEDF8u;
        // 0x1eedfc: 0x2451ff58  addiu       $s1, $v0, -0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eedf8) {
            ctx->pc = 0x1EEF04u;
            { ctx->pc = 0x1eef04; return; }
        }
    }
    ctx->pc = 0x1EEE00u;
label_1eee00:
    // 0x1eee00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1eee00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1eee04:
    // 0x1eee04: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1eee08u;
    return;
}
