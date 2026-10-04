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


void FUN_0019b850_part225(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x208e50u: goto label_208e50;
        case 0x208e54u: goto label_208e54;
        case 0x208e58u: goto label_208e58;
        case 0x208e5cu: goto label_208e5c;
        case 0x208e60u: goto label_208e60;
        case 0x208e64u: goto label_208e64;
        case 0x208e68u: goto label_208e68;
        case 0x208e6cu: goto label_208e6c;
        case 0x208e70u: goto label_208e70;
        case 0x208e74u: goto label_208e74;
        case 0x208e78u: goto label_208e78;
        case 0x208e7cu: goto label_208e7c;
        case 0x208e80u: goto label_208e80;
        case 0x208e84u: goto label_208e84;
        case 0x208e88u: goto label_208e88;
        case 0x208e8cu: goto label_208e8c;
        case 0x208e90u: goto label_208e90;
        case 0x208e94u: goto label_208e94;
        case 0x208e98u: goto label_208e98;
        case 0x208e9cu: goto label_208e9c;
        case 0x208ea0u: goto label_208ea0;
        case 0x208ea4u: goto label_208ea4;
        case 0x208ea8u: goto label_208ea8;
        case 0x208eacu: goto label_208eac;
        case 0x208eb0u: goto label_208eb0;
        case 0x208eb4u: goto label_208eb4;
        case 0x208eb8u: goto label_208eb8;
        case 0x208ebcu: goto label_208ebc;
        case 0x208ec0u: goto label_208ec0;
        case 0x208ec4u: goto label_208ec4;
        case 0x208ec8u: goto label_208ec8;
        case 0x208eccu: goto label_208ecc;
        case 0x208ed0u: goto label_208ed0;
        case 0x208ed4u: goto label_208ed4;
        case 0x208ed8u: goto label_208ed8;
        case 0x208edcu: goto label_208edc;
        case 0x208ee0u: goto label_208ee0;
        case 0x208ee4u: goto label_208ee4;
        case 0x208ee8u: goto label_208ee8;
        case 0x208eecu: goto label_208eec;
        case 0x208ef0u: goto label_208ef0;
        case 0x208ef4u: goto label_208ef4;
        case 0x208ef8u: goto label_208ef8;
        case 0x208efcu: goto label_208efc;
        case 0x208f00u: goto label_208f00;
        case 0x208f04u: goto label_208f04;
        case 0x208f08u: goto label_208f08;
        case 0x208f0cu: goto label_208f0c;
        case 0x208f10u: goto label_208f10;
        case 0x208f14u: goto label_208f14;
        case 0x208f18u: goto label_208f18;
        case 0x208f1cu: goto label_208f1c;
        case 0x208f20u: goto label_208f20;
        case 0x208f24u: goto label_208f24;
        case 0x208f28u: goto label_208f28;
        case 0x208f2cu: goto label_208f2c;
        case 0x208f30u: goto label_208f30;
        case 0x208f34u: goto label_208f34;
        case 0x208f38u: goto label_208f38;
        case 0x208f3cu: goto label_208f3c;
        case 0x208f40u: goto label_208f40;
        case 0x208f44u: goto label_208f44;
        case 0x208f48u: goto label_208f48;
        case 0x208f4cu: goto label_208f4c;
        case 0x208f50u: goto label_208f50;
        case 0x208f54u: goto label_208f54;
        case 0x208f58u: goto label_208f58;
        case 0x208f5cu: goto label_208f5c;
        case 0x208f60u: goto label_208f60;
        case 0x208f64u: goto label_208f64;
        case 0x208f68u: goto label_208f68;
        case 0x208f6cu: goto label_208f6c;
        case 0x208f70u: goto label_208f70;
        case 0x208f74u: goto label_208f74;
        case 0x208f78u: goto label_208f78;
        case 0x208f7cu: goto label_208f7c;
        case 0x208f80u: goto label_208f80;
        case 0x208f84u: goto label_208f84;
        case 0x208f88u: goto label_208f88;
        case 0x208f8cu: goto label_208f8c;
        case 0x208f90u: goto label_208f90;
        case 0x208f94u: goto label_208f94;
        case 0x208f98u: goto label_208f98;
        case 0x208f9cu: goto label_208f9c;
        case 0x208fa0u: goto label_208fa0;
        case 0x208fa4u: goto label_208fa4;
        case 0x208fa8u: goto label_208fa8;
        case 0x208facu: goto label_208fac;
        case 0x208fb0u: goto label_208fb0;
        case 0x208fb4u: goto label_208fb4;
        case 0x208fb8u: goto label_208fb8;
        case 0x208fbcu: goto label_208fbc;
        case 0x208fc0u: goto label_208fc0;
        case 0x208fc4u: goto label_208fc4;
        case 0x208fc8u: goto label_208fc8;
        case 0x208fccu: goto label_208fcc;
        case 0x208fd0u: goto label_208fd0;
        case 0x208fd4u: goto label_208fd4;
        case 0x208fd8u: goto label_208fd8;
        case 0x208fdcu: goto label_208fdc;
        case 0x208fe0u: goto label_208fe0;
        case 0x208fe4u: goto label_208fe4;
        case 0x208fe8u: goto label_208fe8;
        case 0x208fecu: goto label_208fec;
        case 0x208ff0u: goto label_208ff0;
        case 0x208ff4u: goto label_208ff4;
        case 0x208ff8u: goto label_208ff8;
        case 0x208ffcu: goto label_208ffc;
        case 0x209000u: goto label_209000;
        case 0x209004u: goto label_209004;
        case 0x209008u: goto label_209008;
        case 0x20900cu: goto label_20900c;
        case 0x209010u: goto label_209010;
        case 0x209014u: goto label_209014;
        case 0x209018u: goto label_209018;
        case 0x20901cu: goto label_20901c;
        case 0x209020u: goto label_209020;
        case 0x209024u: goto label_209024;
        case 0x209028u: goto label_209028;
        case 0x20902cu: goto label_20902c;
        case 0x209030u: goto label_209030;
        case 0x209034u: goto label_209034;
        case 0x209038u: goto label_209038;
        case 0x20903cu: goto label_20903c;
        case 0x209040u: goto label_209040;
        case 0x209044u: goto label_209044;
        case 0x209048u: goto label_209048;
        case 0x20904cu: goto label_20904c;
        case 0x209050u: goto label_209050;
        case 0x209054u: goto label_209054;
        case 0x209058u: goto label_209058;
        case 0x20905cu: goto label_20905c;
        case 0x209060u: goto label_209060;
        case 0x209064u: goto label_209064;
        case 0x209068u: goto label_209068;
        case 0x20906cu: goto label_20906c;
        case 0x209070u: goto label_209070;
        case 0x209074u: goto label_209074;
        case 0x209078u: goto label_209078;
        case 0x20907cu: goto label_20907c;
        case 0x209080u: goto label_209080;
        case 0x209084u: goto label_209084;
        case 0x209088u: goto label_209088;
        case 0x20908cu: goto label_20908c;
        case 0x209090u: goto label_209090;
        case 0x209094u: goto label_209094;
        case 0x209098u: goto label_209098;
        case 0x20909cu: goto label_20909c;
        case 0x2090a0u: goto label_2090a0;
        case 0x2090a4u: goto label_2090a4;
        case 0x2090a8u: goto label_2090a8;
        case 0x2090acu: goto label_2090ac;
        case 0x2090b0u: goto label_2090b0;
        case 0x2090b4u: goto label_2090b4;
        case 0x2090b8u: goto label_2090b8;
        case 0x2090bcu: goto label_2090bc;
        case 0x2090c0u: goto label_2090c0;
        case 0x2090c4u: goto label_2090c4;
        case 0x2090c8u: goto label_2090c8;
        case 0x2090ccu: goto label_2090cc;
        case 0x2090d0u: goto label_2090d0;
        case 0x2090d4u: goto label_2090d4;
        case 0x2090d8u: goto label_2090d8;
        case 0x2090dcu: goto label_2090dc;
        case 0x2090e0u: goto label_2090e0;
        case 0x2090e4u: goto label_2090e4;
        case 0x2090e8u: goto label_2090e8;
        case 0x2090ecu: goto label_2090ec;
        case 0x2090f0u: goto label_2090f0;
        case 0x2090f4u: goto label_2090f4;
        case 0x2090f8u: goto label_2090f8;
        case 0x2090fcu: goto label_2090fc;
        case 0x209100u: goto label_209100;
        case 0x209104u: goto label_209104;
        case 0x209108u: goto label_209108;
        case 0x20910cu: goto label_20910c;
        case 0x209110u: goto label_209110;
        case 0x209114u: goto label_209114;
        case 0x209118u: goto label_209118;
        case 0x20911cu: goto label_20911c;
        case 0x209120u: goto label_209120;
        case 0x209124u: goto label_209124;
        case 0x209128u: goto label_209128;
        case 0x20912cu: goto label_20912c;
        case 0x209130u: goto label_209130;
        case 0x209134u: goto label_209134;
        case 0x209138u: goto label_209138;
        case 0x20913cu: goto label_20913c;
        case 0x209140u: goto label_209140;
        case 0x209144u: goto label_209144;
        case 0x209148u: goto label_209148;
        case 0x20914cu: goto label_20914c;
        case 0x209150u: goto label_209150;
        case 0x209154u: goto label_209154;
        case 0x209158u: goto label_209158;
        case 0x20915cu: goto label_20915c;
        case 0x209160u: goto label_209160;
        case 0x209164u: goto label_209164;
        case 0x209168u: goto label_209168;
        case 0x20916cu: goto label_20916c;
        case 0x209170u: goto label_209170;
        case 0x209174u: goto label_209174;
        case 0x209178u: goto label_209178;
        case 0x20917cu: goto label_20917c;
        case 0x209180u: goto label_209180;
        case 0x209184u: goto label_209184;
        case 0x209188u: goto label_209188;
        case 0x20918cu: goto label_20918c;
        case 0x209190u: goto label_209190;
        case 0x209194u: goto label_209194;
        case 0x209198u: goto label_209198;
        case 0x20919cu: goto label_20919c;
        case 0x2091a0u: goto label_2091a0;
        case 0x2091a4u: goto label_2091a4;
        case 0x2091a8u: goto label_2091a8;
        case 0x2091acu: goto label_2091ac;
        case 0x2091b0u: goto label_2091b0;
        case 0x2091b4u: goto label_2091b4;
        case 0x2091b8u: goto label_2091b8;
        case 0x2091bcu: goto label_2091bc;
        case 0x2091c0u: goto label_2091c0;
        case 0x2091c4u: goto label_2091c4;
        case 0x2091c8u: goto label_2091c8;
        case 0x2091ccu: goto label_2091cc;
        case 0x2091d0u: goto label_2091d0;
        case 0x2091d4u: goto label_2091d4;
        case 0x2091d8u: goto label_2091d8;
        case 0x2091dcu: goto label_2091dc;
        case 0x2091e0u: goto label_2091e0;
        case 0x2091e4u: goto label_2091e4;
        case 0x2091e8u: goto label_2091e8;
        case 0x2091ecu: goto label_2091ec;
        case 0x2091f0u: goto label_2091f0;
        case 0x2091f4u: goto label_2091f4;
        case 0x2091f8u: goto label_2091f8;
        case 0x2091fcu: goto label_2091fc;
        case 0x209200u: goto label_209200;
        case 0x209204u: goto label_209204;
        case 0x209208u: goto label_209208;
        case 0x20920cu: goto label_20920c;
        case 0x209210u: goto label_209210;
        case 0x209214u: goto label_209214;
        case 0x209218u: goto label_209218;
        case 0x20921cu: goto label_20921c;
        case 0x209220u: goto label_209220;
        case 0x209224u: goto label_209224;
        case 0x209228u: goto label_209228;
        case 0x20922cu: goto label_20922c;
        case 0x209230u: goto label_209230;
        case 0x209234u: goto label_209234;
        case 0x209238u: goto label_209238;
        case 0x20923cu: goto label_20923c;
        case 0x209240u: goto label_209240;
        case 0x209244u: goto label_209244;
        case 0x209248u: goto label_209248;
        case 0x20924cu: goto label_20924c;
        case 0x209250u: goto label_209250;
        case 0x209254u: goto label_209254;
        case 0x209258u: goto label_209258;
        case 0x20925cu: goto label_20925c;
        case 0x209260u: goto label_209260;
        case 0x209264u: goto label_209264;
        case 0x209268u: goto label_209268;
        case 0x20926cu: goto label_20926c;
        case 0x209270u: goto label_209270;
        case 0x209274u: goto label_209274;
        case 0x209278u: goto label_209278;
        case 0x20927cu: goto label_20927c;
        case 0x209280u: goto label_209280;
        case 0x209284u: goto label_209284;
        case 0x209288u: goto label_209288;
        case 0x20928cu: goto label_20928c;
        case 0x209290u: goto label_209290;
        case 0x209294u: goto label_209294;
        case 0x209298u: goto label_209298;
        case 0x20929cu: goto label_20929c;
        case 0x2092a0u: goto label_2092a0;
        case 0x2092a4u: goto label_2092a4;
        case 0x2092a8u: goto label_2092a8;
        case 0x2092acu: goto label_2092ac;
        case 0x2092b0u: goto label_2092b0;
        case 0x2092b4u: goto label_2092b4;
        case 0x2092b8u: goto label_2092b8;
        case 0x2092bcu: goto label_2092bc;
        case 0x2092c0u: goto label_2092c0;
        case 0x2092c4u: goto label_2092c4;
        case 0x2092c8u: goto label_2092c8;
        case 0x2092ccu: goto label_2092cc;
        case 0x2092d0u: goto label_2092d0;
        case 0x2092d4u: goto label_2092d4;
        case 0x2092d8u: goto label_2092d8;
        case 0x2092dcu: goto label_2092dc;
        case 0x2092e0u: goto label_2092e0;
        case 0x2092e4u: goto label_2092e4;
        case 0x2092e8u: goto label_2092e8;
        case 0x2092ecu: goto label_2092ec;
        case 0x2092f0u: goto label_2092f0;
        case 0x2092f4u: goto label_2092f4;
        case 0x2092f8u: goto label_2092f8;
        case 0x2092fcu: goto label_2092fc;
        case 0x209300u: goto label_209300;
        case 0x209304u: goto label_209304;
        case 0x209308u: goto label_209308;
        case 0x20930cu: goto label_20930c;
        case 0x209310u: goto label_209310;
        case 0x209314u: goto label_209314;
        case 0x209318u: goto label_209318;
        case 0x20931cu: goto label_20931c;
        case 0x209320u: goto label_209320;
        case 0x209324u: goto label_209324;
        case 0x209328u: goto label_209328;
        case 0x20932cu: goto label_20932c;
        case 0x209330u: goto label_209330;
        case 0x209334u: goto label_209334;
        case 0x209338u: goto label_209338;
        case 0x20933cu: goto label_20933c;
        case 0x209340u: goto label_209340;
        case 0x209344u: goto label_209344;
        case 0x209348u: goto label_209348;
        case 0x20934cu: goto label_20934c;
        case 0x209350u: goto label_209350;
        case 0x209354u: goto label_209354;
        case 0x209358u: goto label_209358;
        case 0x20935cu: goto label_20935c;
        case 0x209360u: goto label_209360;
        case 0x209364u: goto label_209364;
        case 0x209368u: goto label_209368;
        case 0x20936cu: goto label_20936c;
        case 0x209370u: goto label_209370;
        case 0x209374u: goto label_209374;
        case 0x209378u: goto label_209378;
        case 0x20937cu: goto label_20937c;
        case 0x209380u: goto label_209380;
        case 0x209384u: goto label_209384;
        case 0x209388u: goto label_209388;
        case 0x20938cu: goto label_20938c;
        case 0x209390u: goto label_209390;
        case 0x209394u: goto label_209394;
        case 0x209398u: goto label_209398;
        case 0x20939cu: goto label_20939c;
        case 0x2093a0u: goto label_2093a0;
        case 0x2093a4u: goto label_2093a4;
        case 0x2093a8u: goto label_2093a8;
        case 0x2093acu: goto label_2093ac;
        case 0x2093b0u: goto label_2093b0;
        case 0x2093b4u: goto label_2093b4;
        case 0x2093b8u: goto label_2093b8;
        case 0x2093bcu: goto label_2093bc;
        case 0x2093c0u: goto label_2093c0;
        case 0x2093c4u: goto label_2093c4;
        case 0x2093c8u: goto label_2093c8;
        case 0x2093ccu: goto label_2093cc;
        case 0x2093d0u: goto label_2093d0;
        case 0x2093d4u: goto label_2093d4;
        case 0x2093d8u: goto label_2093d8;
        case 0x2093dcu: goto label_2093dc;
        case 0x2093e0u: goto label_2093e0;
        case 0x2093e4u: goto label_2093e4;
        case 0x2093e8u: goto label_2093e8;
        case 0x2093ecu: goto label_2093ec;
        case 0x2093f0u: goto label_2093f0;
        case 0x2093f4u: goto label_2093f4;
        case 0x2093f8u: goto label_2093f8;
        case 0x2093fcu: goto label_2093fc;
        case 0x209400u: goto label_209400;
        case 0x209404u: goto label_209404;
        case 0x209408u: goto label_209408;
        case 0x20940cu: goto label_20940c;
        case 0x209410u: goto label_209410;
        case 0x209414u: goto label_209414;
        case 0x209418u: goto label_209418;
        case 0x20941cu: goto label_20941c;
        case 0x209420u: goto label_209420;
        case 0x209424u: goto label_209424;
        case 0x209428u: goto label_209428;
        case 0x20942cu: goto label_20942c;
        case 0x209430u: goto label_209430;
        case 0x209434u: goto label_209434;
        case 0x209438u: goto label_209438;
        case 0x20943cu: goto label_20943c;
        case 0x209440u: goto label_209440;
        case 0x209444u: goto label_209444;
        case 0x209448u: goto label_209448;
        case 0x20944cu: goto label_20944c;
        case 0x209450u: goto label_209450;
        case 0x209454u: goto label_209454;
        case 0x209458u: goto label_209458;
        case 0x20945cu: goto label_20945c;
        case 0x209460u: goto label_209460;
        case 0x209464u: goto label_209464;
        case 0x209468u: goto label_209468;
        case 0x20946cu: goto label_20946c;
        case 0x209470u: goto label_209470;
        case 0x209474u: goto label_209474;
        case 0x209478u: goto label_209478;
        case 0x20947cu: goto label_20947c;
        case 0x209480u: goto label_209480;
        case 0x209484u: goto label_209484;
        case 0x209488u: goto label_209488;
        case 0x20948cu: goto label_20948c;
        case 0x209490u: goto label_209490;
        case 0x209494u: goto label_209494;
        case 0x209498u: goto label_209498;
        case 0x20949cu: goto label_20949c;
        case 0x2094a0u: goto label_2094a0;
        case 0x2094a4u: goto label_2094a4;
        case 0x2094a8u: goto label_2094a8;
        case 0x2094acu: goto label_2094ac;
        case 0x2094b0u: goto label_2094b0;
        case 0x2094b4u: goto label_2094b4;
        case 0x2094b8u: goto label_2094b8;
        case 0x2094bcu: goto label_2094bc;
        case 0x2094c0u: goto label_2094c0;
        case 0x2094c4u: goto label_2094c4;
        case 0x2094c8u: goto label_2094c8;
        case 0x2094ccu: goto label_2094cc;
        case 0x2094d0u: goto label_2094d0;
        case 0x2094d4u: goto label_2094d4;
        case 0x2094d8u: goto label_2094d8;
        case 0x2094dcu: goto label_2094dc;
        case 0x2094e0u: goto label_2094e0;
        case 0x2094e4u: goto label_2094e4;
        case 0x2094e8u: goto label_2094e8;
        case 0x2094ecu: goto label_2094ec;
        case 0x2094f0u: goto label_2094f0;
        case 0x2094f4u: goto label_2094f4;
        case 0x2094f8u: goto label_2094f8;
        case 0x2094fcu: goto label_2094fc;
        case 0x209500u: goto label_209500;
        case 0x209504u: goto label_209504;
        case 0x209508u: goto label_209508;
        case 0x20950cu: goto label_20950c;
        case 0x209510u: goto label_209510;
        case 0x209514u: goto label_209514;
        case 0x209518u: goto label_209518;
        case 0x20951cu: goto label_20951c;
        case 0x209520u: goto label_209520;
        case 0x209524u: goto label_209524;
        case 0x209528u: goto label_209528;
        case 0x20952cu: goto label_20952c;
        case 0x209530u: goto label_209530;
        case 0x209534u: goto label_209534;
        case 0x209538u: goto label_209538;
        case 0x20953cu: goto label_20953c;
        case 0x209540u: goto label_209540;
        case 0x209544u: goto label_209544;
        case 0x209548u: goto label_209548;
        case 0x20954cu: goto label_20954c;
        case 0x209550u: goto label_209550;
        case 0x209554u: goto label_209554;
        case 0x209558u: goto label_209558;
        case 0x20955cu: goto label_20955c;
        case 0x209560u: goto label_209560;
        case 0x209564u: goto label_209564;
        case 0x209568u: goto label_209568;
        case 0x20956cu: goto label_20956c;
        case 0x209570u: goto label_209570;
        case 0x209574u: goto label_209574;
        case 0x209578u: goto label_209578;
        case 0x20957cu: goto label_20957c;
        case 0x209580u: goto label_209580;
        case 0x209584u: goto label_209584;
        case 0x209588u: goto label_209588;
        case 0x20958cu: goto label_20958c;
        case 0x209590u: goto label_209590;
        case 0x209594u: goto label_209594;
        case 0x209598u: goto label_209598;
        case 0x20959cu: goto label_20959c;
        case 0x2095a0u: goto label_2095a0;
        case 0x2095a4u: goto label_2095a4;
        case 0x2095a8u: goto label_2095a8;
        case 0x2095acu: goto label_2095ac;
        case 0x2095b0u: goto label_2095b0;
        case 0x2095b4u: goto label_2095b4;
        case 0x2095b8u: goto label_2095b8;
        case 0x2095bcu: goto label_2095bc;
        case 0x2095c0u: goto label_2095c0;
        case 0x2095c4u: goto label_2095c4;
        case 0x2095c8u: goto label_2095c8;
        case 0x2095ccu: goto label_2095cc;
        case 0x2095d0u: goto label_2095d0;
        case 0x2095d4u: goto label_2095d4;
        case 0x2095d8u: goto label_2095d8;
        case 0x2095dcu: goto label_2095dc;
        case 0x2095e0u: goto label_2095e0;
        case 0x2095e4u: goto label_2095e4;
        case 0x2095e8u: goto label_2095e8;
        case 0x2095ecu: goto label_2095ec;
        case 0x2095f0u: goto label_2095f0;
        case 0x2095f4u: goto label_2095f4;
        case 0x2095f8u: goto label_2095f8;
        case 0x2095fcu: goto label_2095fc;
        case 0x209600u: goto label_209600;
        case 0x209604u: goto label_209604;
        case 0x209608u: goto label_209608;
        case 0x20960cu: goto label_20960c;
        case 0x209610u: goto label_209610;
        case 0x209614u: goto label_209614;
        case 0x209618u: goto label_209618;
        case 0x20961cu: goto label_20961c;
        default: return;
    }

label_208e50:
    // 0x208e50: 0x10000209  b           . + 4 + (0x209 << 2)
label_208e54:
    if (ctx->pc == 0x208E54u) {
        ctx->pc = 0x208E58u;
        goto label_208e58;
    }
    ctx->pc = 0x208E50u;
    {
        const bool branch_taken_0x208e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x208e50) {
            ctx->pc = 0x209678u;
            { ctx->pc = 0x209678; return; }
        }
    }
    ctx->pc = 0x208E58u;
label_208e58:
    // 0x208e58: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x208e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_208e5c:
    // 0x208e5c: 0x821804  sllv        $v1, $v0, $a0
    ctx->pc = 0x208e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_208e60:
    // 0x208e60: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x208e60u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_208e64:
    // 0x208e64: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x208e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_208e68:
    // 0x208e68: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_208e6c:
    if (ctx->pc == 0x208E6Cu) {
        ctx->pc = 0x208E70u;
        goto label_208e70;
    }
    ctx->pc = 0x208E68u;
    {
        const bool branch_taken_0x208e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208e68) {
            ctx->pc = 0x208E84u;
            goto label_208e84;
        }
    }
    ctx->pc = 0x208E70u;
label_208e70:
    // 0x208e70: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x208e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_208e74:
    // 0x208e74: 0xc05b420  jal         func_16D080
label_208e78:
    if (ctx->pc == 0x208E78u) {
        ctx->pc = 0x208E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E74u;
        // 0x208e78: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208E7Cu;
        goto label_208e7c;
    }
    ctx->pc = 0x208E74u;
    SET_GPR_U32(ctx, 31, 0x208E7Cu);
    ctx->pc = 0x208E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208E74u;
    // 0x208e78: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x208E74u, 0x208E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208E7Cu;
label_208e7c:
    // 0x208e7c: 0x10000202  b           . + 4 + (0x202 << 2)
label_208e80:
    if (ctx->pc == 0x208E80u) {
        ctx->pc = 0x208E84u;
        goto label_208e84;
    }
    ctx->pc = 0x208E7Cu;
    {
        const bool branch_taken_0x208e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x208e7c) {
            ctx->pc = 0x209688u;
            { ctx->pc = 0x209688; return; }
        }
    }
    ctx->pc = 0x208E84u;
label_208e84:
    // 0x208e84: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x208e84u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_208e88:
    // 0x208e88: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x208e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_208e8c:
    // 0x208e8c: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x208e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_208e90:
    // 0x208e90: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x208e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_208e94:
    // 0x208e94: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
label_208e98:
    if (ctx->pc == 0x208E98u) {
        ctx->pc = 0x208E9Cu;
        goto label_208e9c;
    }
    ctx->pc = 0x208E94u;
    {
        const bool branch_taken_0x208e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208e94) {
            ctx->pc = 0x208F90u;
            goto label_208f90;
        }
    }
    ctx->pc = 0x208E9Cu;
label_208e9c:
    // 0x208e9c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x208e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_208ea0:
    // 0x208ea0: 0xc05b420  jal         func_16D080
label_208ea4:
    if (ctx->pc == 0x208EA4u) {
        ctx->pc = 0x208EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208EA0u;
        // 0x208ea4: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208EA8u;
        goto label_208ea8;
    }
    ctx->pc = 0x208EA0u;
    SET_GPR_U32(ctx, 31, 0x208EA8u);
    ctx->pc = 0x208EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208EA0u;
    // 0x208ea4: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x208EA0u, 0x208EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208EA8u;
label_208ea8:
    // 0x208ea8: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x208ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_208eac:
    // 0x208eac: 0x103880  sll         $a3, $s0, 2
    ctx->pc = 0x208eacu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_208eb0:
    // 0x208eb0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x208eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_208eb4:
    // 0x208eb4: 0x24465734  addiu       $a2, $v0, 0x5734
    ctx->pc = 0x208eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 22324));
label_208eb8:
    // 0x208eb8: 0x8c425734  lw          $v0, 0x5734($v0)
    ctx->pc = 0x208eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22324)));
label_208ebc:
    // 0x208ebc: 0x28410028  slti        $at, $v0, 0x28
    ctx->pc = 0x208ebcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)40) ? 1 : 0);
label_208ec0:
    // 0x208ec0: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_208ec4:
    if (ctx->pc == 0x208EC4u) {
        ctx->pc = 0x208EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208EC0u;
        // 0x208ec4: 0x1210c0  sll         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208EC8u;
        goto label_208ec8;
    }
    ctx->pc = 0x208EC0u;
    {
        const bool branch_taken_0x208ec0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x208EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208EC0u;
        // 0x208ec4: 0x1210c0  sll         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208ec0) {
            ctx->pc = 0x208EF4u;
            goto label_208ef4;
        }
    }
    ctx->pc = 0x208EC8u;
label_208ec8:
    // 0x208ec8: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x208ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_208ecc:
    // 0x208ecc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x208eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_208ed0:
    // 0x208ed0: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x208ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_208ed4:
    // 0x208ed4: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x208ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_208ed8:
    // 0x208ed8: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x208ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_208edc:
    // 0x208edc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x208edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_208ee0:
    // 0x208ee0: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x208ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_208ee4:
    // 0x208ee4: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x208ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_208ee8:
    // 0x208ee8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x208ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_208eec:
    // 0x208eec: 0xa065367e  sb          $a1, 0x367E($v1)
    ctx->pc = 0x208eecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 13950), (uint8_t)GPR_U32(ctx, 5));
label_208ef0:
    // 0x208ef0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x208ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_208ef4:
    // 0x208ef4: 0x0  nop
    ctx->pc = 0x208ef4u;
    // NOP
label_208ef8:
    // 0x208ef8: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x208ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_208efc:
    // 0x208efc: 0x2a010005  slti        $at, $s0, 0x5
    ctx->pc = 0x208efcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
label_208f00:
    // 0x208f00: 0x24150028  addiu       $s5, $zero, 0x28
    ctx->pc = 0x208f00u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_208f04:
    // 0x208f04: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_208f08:
    if (ctx->pc == 0x208F08u) {
        ctx->pc = 0x208F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F04u;
        // 0x208f08: 0xac5057ec  sw          $s0, 0x57EC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22508), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208F0Cu;
        goto label_208f0c;
    }
    ctx->pc = 0x208F04u;
    {
        const bool branch_taken_0x208f04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x208F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F04u;
        // 0x208f08: 0xac5057ec  sw          $s0, 0x57EC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22508), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208f04) {
            ctx->pc = 0x208F1Cu;
            goto label_208f1c;
        }
    }
    ctx->pc = 0x208F0Cu;
label_208f0c:
    // 0x208f0c: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x208f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_208f10:
    // 0x208f10: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x208f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_208f14:
    // 0x208f14: 0x8c555734  lw          $s5, 0x5734($v0)
    ctx->pc = 0x208f14u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22324)));
label_208f18:
    // 0x208f18: 0x0  nop
    ctx->pc = 0x208f18u;
    // NOP
label_208f1c:
    // 0x208f1c: 0x0  nop
    ctx->pc = 0x208f1cu;
    // NOP
label_208f20:
    // 0x208f20: 0x2aa10028  slti        $at, $s5, 0x28
    ctx->pc = 0x208f20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)40) ? 1 : 0);
label_208f24:
    // 0x208f24: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_208f28:
    if (ctx->pc == 0x208F28u) {
        ctx->pc = 0x208F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F24u;
        // 0x208f28: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208F2Cu;
        goto label_208f2c;
    }
    ctx->pc = 0x208F24u;
    {
        const bool branch_taken_0x208f24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x208F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F24u;
        // 0x208f28: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208f24) {
            ctx->pc = 0x208F74u;
            goto label_208f74;
        }
    }
    ctx->pc = 0x208F2Cu;
label_208f2c:
    // 0x208f2c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x208f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_208f30:
    // 0x208f30: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x208f30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_208f34:
    // 0x208f34: 0x24070198  addiu       $a3, $zero, 0x198
    ctx->pc = 0x208f34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
label_208f38:
    // 0x208f38: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x208f38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_208f3c:
    // 0x208f3c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x208f3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_208f40:
    // 0x208f40: 0xc07f734  jal         func_1FDCD0
label_208f44:
    if (ctx->pc == 0x208F44u) {
        ctx->pc = 0x208F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F40u;
        // 0x208f44: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208F48u;
        goto label_208f48;
    }
    ctx->pc = 0x208F40u;
    SET_GPR_U32(ctx, 31, 0x208F48u);
    ctx->pc = 0x208F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208F40u;
    // 0x208f44: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDCD0u;
    { ctx->pc = 0x1fdcd0; return; }
    ctx->pc = 0x208F48u;
label_208f48:
    // 0x208f48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x208f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_208f4c:
    // 0x208f4c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x208f4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_208f50:
    // 0x208f50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x208f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_208f54:
    // 0x208f54: 0x240600ab  addiu       $a2, $zero, 0xAB
    ctx->pc = 0x208f54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
label_208f58:
    // 0x208f58: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x208f58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_208f5c:
    // 0x208f5c: 0x24090198  addiu       $t1, $zero, 0x198
    ctx->pc = 0x208f5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
label_208f60:
    // 0x208f60: 0x240a0030  addiu       $t2, $zero, 0x30
    ctx->pc = 0x208f60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_208f64:
    // 0x208f64: 0xc07f47c  jal         func_1FD1F0
label_208f68:
    if (ctx->pc == 0x208F68u) {
        ctx->pc = 0x208F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F64u;
        // 0x208f68: 0xa0582d  daddu       $t3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208F6Cu;
        goto label_208f6c;
    }
    ctx->pc = 0x208F64u;
    SET_GPR_U32(ctx, 31, 0x208F6Cu);
    ctx->pc = 0x208F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208F64u;
    // 0x208f68: 0xa0582d  daddu       $t3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD1F0u;
    { ctx->pc = 0x1fd1f0; return; }
    ctx->pc = 0x208F6Cu;
label_208f6c:
    // 0x208f6c: 0x100001c2  b           . + 4 + (0x1C2 << 2)
label_208f70:
    if (ctx->pc == 0x208F70u) {
        ctx->pc = 0x208F74u;
        goto label_208f74;
    }
    ctx->pc = 0x208F6Cu;
    {
        const bool branch_taken_0x208f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x208f6c) {
            ctx->pc = 0x209678u;
            { ctx->pc = 0x209678; return; }
        }
    }
    ctx->pc = 0x208F74u;
label_208f74:
    // 0x208f74: 0x0  nop
    ctx->pc = 0x208f74u;
    // NOP
label_208f78:
    // 0x208f78: 0xc07f708  jal         func_1FDC20
label_208f7c:
    if (ctx->pc == 0x208F7Cu) {
        ctx->pc = 0x208F80u;
        goto label_208f80;
    }
    ctx->pc = 0x208F78u;
    SET_GPR_U32(ctx, 31, 0x208F80u);
    ctx->pc = 0x1FDC20u;
    { ctx->pc = 0x1fdc20; return; }
    ctx->pc = 0x208F80u;
label_208f80:
    // 0x208f80: 0xc07f468  jal         func_1FD1A0
label_208f84:
    if (ctx->pc == 0x208F84u) {
        ctx->pc = 0x208F88u;
        goto label_208f88;
    }
    ctx->pc = 0x208F80u;
    SET_GPR_U32(ctx, 31, 0x208F88u);
    ctx->pc = 0x1FD1A0u;
    { ctx->pc = 0x1fd1a0; return; }
    ctx->pc = 0x208F88u;
label_208f88:
    // 0x208f88: 0x100001bb  b           . + 4 + (0x1BB << 2)
label_208f8c:
    if (ctx->pc == 0x208F8Cu) {
        ctx->pc = 0x208F90u;
        goto label_208f90;
    }
    ctx->pc = 0x208F88u;
    {
        const bool branch_taken_0x208f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x208f88) {
            ctx->pc = 0x209678u;
            { ctx->pc = 0x209678; return; }
        }
    }
    ctx->pc = 0x208F90u;
label_208f90:
    // 0x208f90: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x208f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_208f94:
    // 0x208f94: 0x821804  sllv        $v1, $v0, $a0
    ctx->pc = 0x208f94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_208f98:
    // 0x208f98: 0xdf8287c0  ld          $v0, -0x7840($gp)
    ctx->pc = 0x208f98u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936512)));
label_208f9c:
    // 0x208f9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x208f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_208fa0:
    // 0x208fa0: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_208fa4:
    if (ctx->pc == 0x208FA4u) {
        ctx->pc = 0x208FA8u;
        goto label_208fa8;
    }
    ctx->pc = 0x208FA0u;
    {
        const bool branch_taken_0x208fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208fa0) {
            ctx->pc = 0x209060u;
            goto label_209060;
        }
    }
    ctx->pc = 0x208FA8u;
label_208fa8:
    // 0x208fa8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x208fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_208fac:
    // 0x208fac: 0xc05b420  jal         func_16D080
label_208fb0:
    if (ctx->pc == 0x208FB0u) {
        ctx->pc = 0x208FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208FACu;
        // 0x208fb0: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208FB4u;
        goto label_208fb4;
    }
    ctx->pc = 0x208FACu;
    SET_GPR_U32(ctx, 31, 0x208FB4u);
    ctx->pc = 0x208FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208FACu;
    // 0x208fb0: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x208FACu, 0x208FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208FB4u;
label_208fb4:
    // 0x208fb4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_208fb8:
    if (ctx->pc == 0x208FB8u) {
        ctx->pc = 0x208FBCu;
        goto label_208fbc;
    }
    ctx->pc = 0x208FB4u;
    {
        const bool branch_taken_0x208fb4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x208fb4) {
            ctx->pc = 0x208FC4u;
            goto label_208fc4;
        }
    }
    ctx->pc = 0x208FBCu;
label_208fbc:
    // 0x208fbc: 0x10000002  b           . + 4 + (0x2 << 2)
label_208fc0:
    if (ctx->pc == 0x208FC0u) {
        ctx->pc = 0x208FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208FBCu;
        // 0x208fc0: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208FC4u;
        goto label_208fc4;
    }
    ctx->pc = 0x208FBCu;
    {
        const bool branch_taken_0x208fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208FBCu;
        // 0x208fc0: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208fbc) {
            ctx->pc = 0x208FC8u;
            goto label_208fc8;
        }
    }
    ctx->pc = 0x208FC4u;
label_208fc4:
    // 0x208fc4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x208fc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_208fc8:
    // 0x208fc8: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x208fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_208fcc:
    // 0x208fcc: 0x2a010005  slti        $at, $s0, 0x5
    ctx->pc = 0x208fccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
label_208fd0:
    // 0x208fd0: 0x24150028  addiu       $s5, $zero, 0x28
    ctx->pc = 0x208fd0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_208fd4:
    // 0x208fd4: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_208fd8:
    if (ctx->pc == 0x208FD8u) {
        ctx->pc = 0x208FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208FD4u;
        // 0x208fd8: 0xac5057ec  sw          $s0, 0x57EC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22508), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208FDCu;
        goto label_208fdc;
    }
    ctx->pc = 0x208FD4u;
    {
        const bool branch_taken_0x208fd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x208FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208FD4u;
        // 0x208fd8: 0xac5057ec  sw          $s0, 0x57EC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22508), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208fd4) {
            ctx->pc = 0x208FF0u;
            goto label_208ff0;
        }
    }
    ctx->pc = 0x208FDCu;
label_208fdc:
    // 0x208fdc: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x208fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_208fe0:
    // 0x208fe0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x208fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_208fe4:
    // 0x208fe4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x208fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_208fe8:
    // 0x208fe8: 0x8c555734  lw          $s5, 0x5734($v0)
    ctx->pc = 0x208fe8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22324)));
label_208fec:
    // 0x208fec: 0x0  nop
    ctx->pc = 0x208fecu;
    // NOP
label_208ff0:
    // 0x208ff0: 0x2aa10028  slti        $at, $s5, 0x28
    ctx->pc = 0x208ff0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)40) ? 1 : 0);
label_208ff4:
    // 0x208ff4: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_208ff8:
    if (ctx->pc == 0x208FF8u) {
        ctx->pc = 0x208FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208FF4u;
        // 0x208ff8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208FFCu;
        goto label_208ffc;
    }
    ctx->pc = 0x208FF4u;
    {
        const bool branch_taken_0x208ff4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x208FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208FF4u;
        // 0x208ff8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208ff4) {
            ctx->pc = 0x209044u;
            goto label_209044;
        }
    }
    ctx->pc = 0x208FFCu;
label_208ffc:
    // 0x208ffc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x208ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_209000:
    // 0x209000: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x209000u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_209004:
    // 0x209004: 0x24070198  addiu       $a3, $zero, 0x198
    ctx->pc = 0x209004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
label_209008:
    // 0x209008: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x209008u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_20900c:
    // 0x20900c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20900cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209010:
    // 0x209010: 0xc07f734  jal         func_1FDCD0
label_209014:
    if (ctx->pc == 0x209014u) {
        ctx->pc = 0x209014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209010u;
        // 0x209014: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209018u;
        goto label_209018;
    }
    ctx->pc = 0x209010u;
    SET_GPR_U32(ctx, 31, 0x209018u);
    ctx->pc = 0x209014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209010u;
    // 0x209014: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDCD0u;
    { ctx->pc = 0x1fdcd0; return; }
    ctx->pc = 0x209018u;
label_209018:
    // 0x209018: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x209018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20901c:
    // 0x20901c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x20901cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_209020:
    // 0x209020: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x209020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_209024:
    // 0x209024: 0x240600ab  addiu       $a2, $zero, 0xAB
    ctx->pc = 0x209024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
label_209028:
    // 0x209028: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x209028u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20902c:
    // 0x20902c: 0x24090198  addiu       $t1, $zero, 0x198
    ctx->pc = 0x20902cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
label_209030:
    // 0x209030: 0x240a0030  addiu       $t2, $zero, 0x30
    ctx->pc = 0x209030u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_209034:
    // 0x209034: 0xc07f47c  jal         func_1FD1F0
label_209038:
    if (ctx->pc == 0x209038u) {
        ctx->pc = 0x209038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209034u;
        // 0x209038: 0xa0582d  daddu       $t3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20903Cu;
        goto label_20903c;
    }
    ctx->pc = 0x209034u;
    SET_GPR_U32(ctx, 31, 0x20903Cu);
    ctx->pc = 0x209038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209034u;
    // 0x209038: 0xa0582d  daddu       $t3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD1F0u;
    { ctx->pc = 0x1fd1f0; return; }
    ctx->pc = 0x20903Cu;
label_20903c:
    // 0x20903c: 0x1000018e  b           . + 4 + (0x18E << 2)
label_209040:
    if (ctx->pc == 0x209040u) {
        ctx->pc = 0x209044u;
        goto label_209044;
    }
    ctx->pc = 0x20903Cu;
    {
        const bool branch_taken_0x20903c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20903c) {
            ctx->pc = 0x209678u;
            { ctx->pc = 0x209678; return; }
        }
    }
    ctx->pc = 0x209044u;
label_209044:
    // 0x209044: 0x0  nop
    ctx->pc = 0x209044u;
    // NOP
label_209048:
    // 0x209048: 0xc07f708  jal         func_1FDC20
label_20904c:
    if (ctx->pc == 0x20904Cu) {
        ctx->pc = 0x209050u;
        goto label_209050;
    }
    ctx->pc = 0x209048u;
    SET_GPR_U32(ctx, 31, 0x209050u);
    ctx->pc = 0x1FDC20u;
    { ctx->pc = 0x1fdc20; return; }
    ctx->pc = 0x209050u;
label_209050:
    // 0x209050: 0xc07f468  jal         func_1FD1A0
label_209054:
    if (ctx->pc == 0x209054u) {
        ctx->pc = 0x209058u;
        goto label_209058;
    }
    ctx->pc = 0x209050u;
    SET_GPR_U32(ctx, 31, 0x209058u);
    ctx->pc = 0x1FD1A0u;
    { ctx->pc = 0x1fd1a0; return; }
    ctx->pc = 0x209058u;
label_209058:
    // 0x209058: 0x10000187  b           . + 4 + (0x187 << 2)
label_20905c:
    if (ctx->pc == 0x20905Cu) {
        ctx->pc = 0x209060u;
        goto label_209060;
    }
    ctx->pc = 0x209058u;
    {
        const bool branch_taken_0x209058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209058) {
            ctx->pc = 0x209678u;
            { ctx->pc = 0x209678; return; }
        }
    }
    ctx->pc = 0x209060u;
label_209060:
    // 0x209060: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x209060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_209064:
    // 0x209064: 0x821804  sllv        $v1, $v0, $a0
    ctx->pc = 0x209064u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_209068:
    // 0x209068: 0xdf8287c0  ld          $v0, -0x7840($gp)
    ctx->pc = 0x209068u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936512)));
label_20906c:
    // 0x20906c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20906cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_209070:
    // 0x209070: 0x10400181  beqz        $v0, . + 4 + (0x181 << 2)
label_209074:
    if (ctx->pc == 0x209074u) {
        ctx->pc = 0x209078u;
        goto label_209078;
    }
    ctx->pc = 0x209070u;
    {
        const bool branch_taken_0x209070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x209070) {
            ctx->pc = 0x209678u;
            { ctx->pc = 0x209678; return; }
        }
    }
    ctx->pc = 0x209078u;
label_209078:
    // 0x209078: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x209078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20907c:
    // 0x20907c: 0xc05b420  jal         func_16D080
label_209080:
    if (ctx->pc == 0x209080u) {
        ctx->pc = 0x209080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20907Cu;
        // 0x209080: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209084u;
        goto label_209084;
    }
    ctx->pc = 0x20907Cu;
    SET_GPR_U32(ctx, 31, 0x209084u);
    ctx->pc = 0x209080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20907Cu;
    // 0x209080: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x20907Cu, 0x209084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209084u;
label_209084:
    // 0x209084: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x209084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_209088:
    // 0x209088: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
label_20908c:
    if (ctx->pc == 0x20908Cu) {
        ctx->pc = 0x209090u;
        goto label_209090;
    }
    ctx->pc = 0x209088u;
    {
        const bool branch_taken_0x209088 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x209088) {
            ctx->pc = 0x209098u;
            goto label_209098;
        }
    }
    ctx->pc = 0x209090u;
label_209090:
    // 0x209090: 0x10000002  b           . + 4 + (0x2 << 2)
label_209094:
    if (ctx->pc == 0x209094u) {
        ctx->pc = 0x209094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209090u;
        // 0x209094: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209098u;
        goto label_209098;
    }
    ctx->pc = 0x209090u;
    {
        const bool branch_taken_0x209090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209090u;
        // 0x209094: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209090) {
            ctx->pc = 0x20909Cu;
            goto label_20909c;
        }
    }
    ctx->pc = 0x209098u;
label_209098:
    // 0x209098: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x209098u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_20909c:
    // 0x20909c: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x20909cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_2090a0:
    // 0x2090a0: 0x2a010005  slti        $at, $s0, 0x5
    ctx->pc = 0x2090a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
label_2090a4:
    // 0x2090a4: 0x24150028  addiu       $s5, $zero, 0x28
    ctx->pc = 0x2090a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2090a8:
    // 0x2090a8: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_2090ac:
    if (ctx->pc == 0x2090ACu) {
        ctx->pc = 0x2090ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2090A8u;
        // 0x2090ac: 0xac5057ec  sw          $s0, 0x57EC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22508), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2090B0u;
        goto label_2090b0;
    }
    ctx->pc = 0x2090A8u;
    {
        const bool branch_taken_0x2090a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2090ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2090A8u;
        // 0x2090ac: 0xac5057ec  sw          $s0, 0x57EC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22508), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2090a8) {
            ctx->pc = 0x2090C4u;
            goto label_2090c4;
        }
    }
    ctx->pc = 0x2090B0u;
label_2090b0:
    // 0x2090b0: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x2090b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_2090b4:
    // 0x2090b4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2090b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2090b8:
    // 0x2090b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2090b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2090bc:
    // 0x2090bc: 0x8c555734  lw          $s5, 0x5734($v0)
    ctx->pc = 0x2090bcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22324)));
label_2090c0:
    // 0x2090c0: 0x0  nop
    ctx->pc = 0x2090c0u;
    // NOP
label_2090c4:
    // 0x2090c4: 0x0  nop
    ctx->pc = 0x2090c4u;
    // NOP
label_2090c8:
    // 0x2090c8: 0x2aa10028  slti        $at, $s5, 0x28
    ctx->pc = 0x2090c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)40) ? 1 : 0);
label_2090cc:
    // 0x2090cc: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_2090d0:
    if (ctx->pc == 0x2090D0u) {
        ctx->pc = 0x2090D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2090CCu;
        // 0x2090d0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2090D4u;
        goto label_2090d4;
    }
    ctx->pc = 0x2090CCu;
    {
        const bool branch_taken_0x2090cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2090D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2090CCu;
        // 0x2090d0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2090cc) {
            ctx->pc = 0x20911Cu;
            goto label_20911c;
        }
    }
    ctx->pc = 0x2090D4u;
label_2090d4:
    // 0x2090d4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2090d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2090d8:
    // 0x2090d8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2090d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2090dc:
    // 0x2090dc: 0x24070198  addiu       $a3, $zero, 0x198
    ctx->pc = 0x2090dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
label_2090e0:
    // 0x2090e0: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x2090e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_2090e4:
    // 0x2090e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2090e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2090e8:
    // 0x2090e8: 0xc07f734  jal         func_1FDCD0
label_2090ec:
    if (ctx->pc == 0x2090ECu) {
        ctx->pc = 0x2090ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2090E8u;
        // 0x2090ec: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2090F0u;
        goto label_2090f0;
    }
    ctx->pc = 0x2090E8u;
    SET_GPR_U32(ctx, 31, 0x2090F0u);
    ctx->pc = 0x2090ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2090E8u;
    // 0x2090ec: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDCD0u;
    { ctx->pc = 0x1fdcd0; return; }
    ctx->pc = 0x2090F0u;
label_2090f0:
    // 0x2090f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2090f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2090f4:
    // 0x2090f4: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2090f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2090f8:
    // 0x2090f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2090f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2090fc:
    // 0x2090fc: 0x240600ab  addiu       $a2, $zero, 0xAB
    ctx->pc = 0x2090fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
label_209100:
    // 0x209100: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x209100u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_209104:
    // 0x209104: 0x24090198  addiu       $t1, $zero, 0x198
    ctx->pc = 0x209104u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
label_209108:
    // 0x209108: 0x240a0030  addiu       $t2, $zero, 0x30
    ctx->pc = 0x209108u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_20910c:
    // 0x20910c: 0xc07f47c  jal         func_1FD1F0
label_209110:
    if (ctx->pc == 0x209110u) {
        ctx->pc = 0x209110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20910Cu;
        // 0x209110: 0xa0582d  daddu       $t3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209114u;
        goto label_209114;
    }
    ctx->pc = 0x20910Cu;
    SET_GPR_U32(ctx, 31, 0x209114u);
    ctx->pc = 0x209110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20910Cu;
    // 0x209110: 0xa0582d  daddu       $t3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD1F0u;
    { ctx->pc = 0x1fd1f0; return; }
    ctx->pc = 0x209114u;
label_209114:
    // 0x209114: 0x10000158  b           . + 4 + (0x158 << 2)
label_209118:
    if (ctx->pc == 0x209118u) {
        ctx->pc = 0x20911Cu;
        goto label_20911c;
    }
    ctx->pc = 0x209114u;
    {
        const bool branch_taken_0x209114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209114) {
            ctx->pc = 0x209678u;
            { ctx->pc = 0x209678; return; }
        }
    }
    ctx->pc = 0x20911Cu;
label_20911c:
    // 0x20911c: 0x0  nop
    ctx->pc = 0x20911cu;
    // NOP
label_209120:
    // 0x209120: 0xc07f708  jal         func_1FDC20
label_209124:
    if (ctx->pc == 0x209124u) {
        ctx->pc = 0x209128u;
        goto label_209128;
    }
    ctx->pc = 0x209120u;
    SET_GPR_U32(ctx, 31, 0x209128u);
    ctx->pc = 0x1FDC20u;
    { ctx->pc = 0x1fdc20; return; }
    ctx->pc = 0x209128u;
label_209128:
    // 0x209128: 0xc07f468  jal         func_1FD1A0
label_20912c:
    if (ctx->pc == 0x20912Cu) {
        ctx->pc = 0x209130u;
        goto label_209130;
    }
    ctx->pc = 0x209128u;
    SET_GPR_U32(ctx, 31, 0x209130u);
    ctx->pc = 0x1FD1A0u;
    { ctx->pc = 0x1fd1a0; return; }
    ctx->pc = 0x209130u;
label_209130:
    // 0x209130: 0x10000151  b           . + 4 + (0x151 << 2)
label_209134:
    if (ctx->pc == 0x209134u) {
        ctx->pc = 0x209138u;
        goto label_209138;
    }
    ctx->pc = 0x209130u;
    {
        const bool branch_taken_0x209130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209130) {
            ctx->pc = 0x209678u;
            { ctx->pc = 0x209678; return; }
        }
    }
    ctx->pc = 0x209138u;
label_209138:
    // 0x209138: 0xdf8387c8  ld          $v1, -0x7838($gp)
    ctx->pc = 0x209138u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_20913c:
    // 0x20913c: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x20913cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_209140:
    // 0x209140: 0x24044000  addiu       $a0, $zero, 0x4000
    ctx->pc = 0x209140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_209144:
    // 0x209144: 0x442004  sllv        $a0, $a0, $v0
    ctx->pc = 0x209144u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
label_209148:
    // 0x209148: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x209148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_20914c:
    // 0x20914c: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
label_209150:
    if (ctx->pc == 0x209150u) {
        ctx->pc = 0x209150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20914Cu;
        // 0x209150: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209154u;
        goto label_209154;
    }
    ctx->pc = 0x20914Cu;
    {
        const bool branch_taken_0x20914c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x209150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20914Cu;
        // 0x209150: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20914c) {
            ctx->pc = 0x209230u;
            goto label_209230;
        }
    }
    ctx->pc = 0x209154u;
label_209154:
    // 0x209154: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x209154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_209158:
    // 0x209158: 0xc0825f4  jal         func_2097D0
label_20915c:
    if (ctx->pc == 0x20915Cu) {
        ctx->pc = 0x20915Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209158u;
        // 0x20915c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209160u;
        goto label_209160;
    }
    ctx->pc = 0x209158u;
    SET_GPR_U32(ctx, 31, 0x209160u);
    ctx->pc = 0x20915Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209158u;
    // 0x20915c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2097D0u;
    { ctx->pc = 0x2097d0; return; }
    ctx->pc = 0x209160u;
label_209160:
    // 0x209160: 0x10400145  beqz        $v0, . + 4 + (0x145 << 2)
label_209164:
    if (ctx->pc == 0x209164u) {
        ctx->pc = 0x209168u;
        goto label_209168;
    }
    ctx->pc = 0x209160u;
    {
        const bool branch_taken_0x209160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x209160) {
            ctx->pc = 0x209678u;
            { ctx->pc = 0x209678; return; }
        }
    }
    ctx->pc = 0x209168u;
label_209168:
    // 0x209168: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x209168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_20916c:
    // 0x20916c: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x20916cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_209170:
    // 0x209170: 0xc07f708  jal         func_1FDC20
label_209174:
    if (ctx->pc == 0x209174u) {
        ctx->pc = 0x209174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209170u;
        // 0x209174: 0xac4357f0  sw          $v1, 0x57F0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22512), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209178u;
        goto label_209178;
    }
    ctx->pc = 0x209170u;
    SET_GPR_U32(ctx, 31, 0x209178u);
    ctx->pc = 0x209174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209170u;
    // 0x209174: 0xac4357f0  sw          $v1, 0x57F0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 22512), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDC20u;
    { ctx->pc = 0x1fdc20; return; }
    ctx->pc = 0x209178u;
label_209178:
    // 0x209178: 0xc07f468  jal         func_1FD1A0
label_20917c:
    if (ctx->pc == 0x20917Cu) {
        ctx->pc = 0x209180u;
        goto label_209180;
    }
    ctx->pc = 0x209178u;
    SET_GPR_U32(ctx, 31, 0x209180u);
    ctx->pc = 0x1FD1A0u;
    { ctx->pc = 0x1fd1a0; return; }
    ctx->pc = 0x209180u;
label_209180:
    // 0x209180: 0xc078050  jal         func_1E0140
label_209184:
    if (ctx->pc == 0x209184u) {
        ctx->pc = 0x209184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209180u;
        // 0x209184: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209188u;
        goto label_209188;
    }
    ctx->pc = 0x209180u;
    SET_GPR_U32(ctx, 31, 0x209188u);
    ctx->pc = 0x209184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209180u;
    // 0x209184: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x209188u;
label_209188:
    // 0x209188: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x209188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_20918c:
    // 0x20918c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x20918cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209190:
    // 0x209190: 0x2a010005  slti        $at, $s0, 0x5
    ctx->pc = 0x209190u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
label_209194:
    // 0x209194: 0x24150028  addiu       $s5, $zero, 0x28
    ctx->pc = 0x209194u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_209198:
    // 0x209198: 0xac5357f4  sw          $s3, 0x57F4($v0)
    ctx->pc = 0x209198u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22516), GPR_U32(ctx, 19));
label_20919c:
    // 0x20919c: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x20919cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_2091a0:
    // 0x2091a0: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_2091a4:
    if (ctx->pc == 0x2091A4u) {
        ctx->pc = 0x2091A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2091A0u;
        // 0x2091a4: 0xac5057ec  sw          $s0, 0x57EC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22508), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2091A8u;
        goto label_2091a8;
    }
    ctx->pc = 0x2091A0u;
    {
        const bool branch_taken_0x2091a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2091A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2091A0u;
        // 0x2091a4: 0xac5057ec  sw          $s0, 0x57EC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22508), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2091a0) {
            ctx->pc = 0x2091BCu;
            goto label_2091bc;
        }
    }
    ctx->pc = 0x2091A8u;
label_2091a8:
    // 0x2091a8: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x2091a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_2091ac:
    // 0x2091ac: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2091acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2091b0:
    // 0x2091b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2091b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2091b4:
    // 0x2091b4: 0x8c555734  lw          $s5, 0x5734($v0)
    ctx->pc = 0x2091b4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22324)));
label_2091b8:
    // 0x2091b8: 0x0  nop
    ctx->pc = 0x2091b8u;
    // NOP
label_2091bc:
    // 0x2091bc: 0x0  nop
    ctx->pc = 0x2091bcu;
    // NOP
label_2091c0:
    // 0x2091c0: 0x2aa10028  slti        $at, $s5, 0x28
    ctx->pc = 0x2091c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)40) ? 1 : 0);
label_2091c4:
    // 0x2091c4: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_2091c8:
    if (ctx->pc == 0x2091C8u) {
        ctx->pc = 0x2091C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2091C4u;
        // 0x2091c8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2091CCu;
        goto label_2091cc;
    }
    ctx->pc = 0x2091C4u;
    {
        const bool branch_taken_0x2091c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2091C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2091C4u;
        // 0x2091c8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2091c4) {
            ctx->pc = 0x209214u;
            goto label_209214;
        }
    }
    ctx->pc = 0x2091CCu;
label_2091cc:
    // 0x2091cc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2091ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2091d0:
    // 0x2091d0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2091d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2091d4:
    // 0x2091d4: 0x24070198  addiu       $a3, $zero, 0x198
    ctx->pc = 0x2091d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
label_2091d8:
    // 0x2091d8: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x2091d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_2091dc:
    // 0x2091dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2091dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2091e0:
    // 0x2091e0: 0xc07f734  jal         func_1FDCD0
label_2091e4:
    if (ctx->pc == 0x2091E4u) {
        ctx->pc = 0x2091E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2091E0u;
        // 0x2091e4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2091E8u;
        goto label_2091e8;
    }
    ctx->pc = 0x2091E0u;
    SET_GPR_U32(ctx, 31, 0x2091E8u);
    ctx->pc = 0x2091E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2091E0u;
    // 0x2091e4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDCD0u;
    { ctx->pc = 0x1fdcd0; return; }
    ctx->pc = 0x2091E8u;
label_2091e8:
    // 0x2091e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2091e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2091ec:
    // 0x2091ec: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2091ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2091f0:
    // 0x2091f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2091f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2091f4:
    // 0x2091f4: 0x240600ab  addiu       $a2, $zero, 0xAB
    ctx->pc = 0x2091f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
label_2091f8:
    // 0x2091f8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2091f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2091fc:
    // 0x2091fc: 0x24090198  addiu       $t1, $zero, 0x198
    ctx->pc = 0x2091fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
label_209200:
    // 0x209200: 0x240a0030  addiu       $t2, $zero, 0x30
    ctx->pc = 0x209200u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_209204:
    // 0x209204: 0xc07f47c  jal         func_1FD1F0
label_209208:
    if (ctx->pc == 0x209208u) {
        ctx->pc = 0x209208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209204u;
        // 0x209208: 0xa0582d  daddu       $t3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20920Cu;
        goto label_20920c;
    }
    ctx->pc = 0x209204u;
    SET_GPR_U32(ctx, 31, 0x20920Cu);
    ctx->pc = 0x209208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209204u;
    // 0x209208: 0xa0582d  daddu       $t3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD1F0u;
    { ctx->pc = 0x1fd1f0; return; }
    ctx->pc = 0x20920Cu;
label_20920c:
    // 0x20920c: 0x1000011a  b           . + 4 + (0x11A << 2)
label_209210:
    if (ctx->pc == 0x209210u) {
        ctx->pc = 0x209214u;
        goto label_209214;
    }
    ctx->pc = 0x20920Cu;
    {
        const bool branch_taken_0x20920c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20920c) {
            ctx->pc = 0x209678u;
            { ctx->pc = 0x209678; return; }
        }
    }
    ctx->pc = 0x209214u;
label_209214:
    // 0x209214: 0x0  nop
    ctx->pc = 0x209214u;
    // NOP
label_209218:
    // 0x209218: 0xc07f708  jal         func_1FDC20
label_20921c:
    if (ctx->pc == 0x20921Cu) {
        ctx->pc = 0x209220u;
        goto label_209220;
    }
    ctx->pc = 0x209218u;
    SET_GPR_U32(ctx, 31, 0x209220u);
    ctx->pc = 0x1FDC20u;
    { ctx->pc = 0x1fdc20; return; }
    ctx->pc = 0x209220u;
label_209220:
    // 0x209220: 0xc07f468  jal         func_1FD1A0
label_209224:
    if (ctx->pc == 0x209224u) {
        ctx->pc = 0x209228u;
        goto label_209228;
    }
    ctx->pc = 0x209220u;
    SET_GPR_U32(ctx, 31, 0x209228u);
    ctx->pc = 0x1FD1A0u;
    { ctx->pc = 0x1fd1a0; return; }
    ctx->pc = 0x209228u;
label_209228:
    // 0x209228: 0x10000113  b           . + 4 + (0x113 << 2)
label_20922c:
    if (ctx->pc == 0x20922Cu) {
        ctx->pc = 0x209230u;
        goto label_209230;
    }
    ctx->pc = 0x209228u;
    {
        const bool branch_taken_0x209228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209228) {
            ctx->pc = 0x209678u;
            { ctx->pc = 0x209678; return; }
        }
    }
    ctx->pc = 0x209230u;
label_209230:
    // 0x209230: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x209230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_209234:
    // 0x209234: 0x432004  sllv        $a0, $v1, $v0
    ctx->pc = 0x209234u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_209238:
    // 0x209238: 0xdf8387c8  ld          $v1, -0x7838($gp)
    ctx->pc = 0x209238u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_20923c:
    // 0x20923c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x20923cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_209240:
    // 0x209240: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
label_209244:
    if (ctx->pc == 0x209244u) {
        ctx->pc = 0x209244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209240u;
        // 0x209244: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209248u;
        goto label_209248;
    }
    ctx->pc = 0x209240u;
    {
        const bool branch_taken_0x209240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x209244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209240u;
        // 0x209244: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209240) {
            ctx->pc = 0x209318u;
            goto label_209318;
        }
    }
    ctx->pc = 0x209248u;
label_209248:
    // 0x209248: 0xc05b420  jal         func_16D080
label_20924c:
    if (ctx->pc == 0x20924Cu) {
        ctx->pc = 0x20924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209248u;
        // 0x20924c: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209250u;
        goto label_209250;
    }
    ctx->pc = 0x209248u;
    SET_GPR_U32(ctx, 31, 0x209250u);
    ctx->pc = 0x20924Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209248u;
    // 0x20924c: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x209248u, 0x209250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209250u;
label_209250:
    // 0x209250: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x209250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209254:
    // 0x209254: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x209254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_209258:
    // 0x209258: 0xc07f708  jal         func_1FDC20
label_20925c:
    if (ctx->pc == 0x20925Cu) {
        ctx->pc = 0x20925Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209258u;
        // 0x20925c: 0xac4357f0  sw          $v1, 0x57F0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22512), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209260u;
        goto label_209260;
    }
    ctx->pc = 0x209258u;
    SET_GPR_U32(ctx, 31, 0x209260u);
    ctx->pc = 0x20925Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209258u;
    // 0x20925c: 0xac4357f0  sw          $v1, 0x57F0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 22512), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDC20u;
    { ctx->pc = 0x1fdc20; return; }
    ctx->pc = 0x209260u;
label_209260:
    // 0x209260: 0xc07f468  jal         func_1FD1A0
label_209264:
    if (ctx->pc == 0x209264u) {
        ctx->pc = 0x209268u;
        goto label_209268;
    }
    ctx->pc = 0x209260u;
    SET_GPR_U32(ctx, 31, 0x209268u);
    ctx->pc = 0x1FD1A0u;
    { ctx->pc = 0x1fd1a0; return; }
    ctx->pc = 0x209268u;
label_209268:
    // 0x209268: 0xc078050  jal         func_1E0140
label_20926c:
    if (ctx->pc == 0x20926Cu) {
        ctx->pc = 0x20926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209268u;
        // 0x20926c: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209270u;
        goto label_209270;
    }
    ctx->pc = 0x209268u;
    SET_GPR_U32(ctx, 31, 0x209270u);
    ctx->pc = 0x20926Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209268u;
    // 0x20926c: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x209270u;
label_209270:
    // 0x209270: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x209270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209274:
    // 0x209274: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x209274u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209278:
    // 0x209278: 0x2a010005  slti        $at, $s0, 0x5
    ctx->pc = 0x209278u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
label_20927c:
    // 0x20927c: 0x24150028  addiu       $s5, $zero, 0x28
    ctx->pc = 0x20927cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_209280:
    // 0x209280: 0xac5357f4  sw          $s3, 0x57F4($v0)
    ctx->pc = 0x209280u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22516), GPR_U32(ctx, 19));
label_209284:
    // 0x209284: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x209284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209288:
    // 0x209288: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_20928c:
    if (ctx->pc == 0x20928Cu) {
        ctx->pc = 0x20928Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209288u;
        // 0x20928c: 0xac5057ec  sw          $s0, 0x57EC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22508), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209290u;
        goto label_209290;
    }
    ctx->pc = 0x209288u;
    {
        const bool branch_taken_0x209288 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20928Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209288u;
        // 0x20928c: 0xac5057ec  sw          $s0, 0x57EC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22508), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209288) {
            ctx->pc = 0x2092A4u;
            goto label_2092a4;
        }
    }
    ctx->pc = 0x209290u;
label_209290:
    // 0x209290: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x209290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209294:
    // 0x209294: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x209294u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_209298:
    // 0x209298: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x209298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20929c:
    // 0x20929c: 0x8c555734  lw          $s5, 0x5734($v0)
    ctx->pc = 0x20929cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22324)));
label_2092a0:
    // 0x2092a0: 0x0  nop
    ctx->pc = 0x2092a0u;
    // NOP
label_2092a4:
    // 0x2092a4: 0x0  nop
    ctx->pc = 0x2092a4u;
    // NOP
label_2092a8:
    // 0x2092a8: 0x2aa10028  slti        $at, $s5, 0x28
    ctx->pc = 0x2092a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)40) ? 1 : 0);
label_2092ac:
    // 0x2092ac: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_2092b0:
    if (ctx->pc == 0x2092B0u) {
        ctx->pc = 0x2092B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2092ACu;
        // 0x2092b0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2092B4u;
        goto label_2092b4;
    }
    ctx->pc = 0x2092ACu;
    {
        const bool branch_taken_0x2092ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2092B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2092ACu;
        // 0x2092b0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2092ac) {
            ctx->pc = 0x2092FCu;
            goto label_2092fc;
        }
    }
    ctx->pc = 0x2092B4u;
label_2092b4:
    // 0x2092b4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2092b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2092b8:
    // 0x2092b8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2092b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2092bc:
    // 0x2092bc: 0x24070198  addiu       $a3, $zero, 0x198
    ctx->pc = 0x2092bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
label_2092c0:
    // 0x2092c0: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x2092c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_2092c4:
    // 0x2092c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2092c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2092c8:
    // 0x2092c8: 0xc07f734  jal         func_1FDCD0
label_2092cc:
    if (ctx->pc == 0x2092CCu) {
        ctx->pc = 0x2092CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2092C8u;
        // 0x2092cc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2092D0u;
        goto label_2092d0;
    }
    ctx->pc = 0x2092C8u;
    SET_GPR_U32(ctx, 31, 0x2092D0u);
    ctx->pc = 0x2092CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2092C8u;
    // 0x2092cc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDCD0u;
    { ctx->pc = 0x1fdcd0; return; }
    ctx->pc = 0x2092D0u;
label_2092d0:
    // 0x2092d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2092d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2092d4:
    // 0x2092d4: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2092d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2092d8:
    // 0x2092d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2092d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2092dc:
    // 0x2092dc: 0x240600ab  addiu       $a2, $zero, 0xAB
    ctx->pc = 0x2092dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
label_2092e0:
    // 0x2092e0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2092e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2092e4:
    // 0x2092e4: 0x24090198  addiu       $t1, $zero, 0x198
    ctx->pc = 0x2092e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
label_2092e8:
    // 0x2092e8: 0x240a0030  addiu       $t2, $zero, 0x30
    ctx->pc = 0x2092e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2092ec:
    // 0x2092ec: 0xc07f47c  jal         func_1FD1F0
label_2092f0:
    if (ctx->pc == 0x2092F0u) {
        ctx->pc = 0x2092F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2092ECu;
        // 0x2092f0: 0xa0582d  daddu       $t3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2092F4u;
        goto label_2092f4;
    }
    ctx->pc = 0x2092ECu;
    SET_GPR_U32(ctx, 31, 0x2092F4u);
    ctx->pc = 0x2092F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2092ECu;
    // 0x2092f0: 0xa0582d  daddu       $t3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD1F0u;
    { ctx->pc = 0x1fd1f0; return; }
    ctx->pc = 0x2092F4u;
label_2092f4:
    // 0x2092f4: 0x100000e0  b           . + 4 + (0xE0 << 2)
label_2092f8:
    if (ctx->pc == 0x2092F8u) {
        ctx->pc = 0x2092FCu;
        goto label_2092fc;
    }
    ctx->pc = 0x2092F4u;
    {
        const bool branch_taken_0x2092f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2092f4) {
            ctx->pc = 0x209678u;
            { ctx->pc = 0x209678; return; }
        }
    }
    ctx->pc = 0x2092FCu;
label_2092fc:
    // 0x2092fc: 0x0  nop
    ctx->pc = 0x2092fcu;
    // NOP
label_209300:
    // 0x209300: 0xc07f708  jal         func_1FDC20
label_209304:
    if (ctx->pc == 0x209304u) {
        ctx->pc = 0x209308u;
        goto label_209308;
    }
    ctx->pc = 0x209300u;
    SET_GPR_U32(ctx, 31, 0x209308u);
    ctx->pc = 0x1FDC20u;
    { ctx->pc = 0x1fdc20; return; }
    ctx->pc = 0x209308u;
label_209308:
    // 0x209308: 0xc07f468  jal         func_1FD1A0
label_20930c:
    if (ctx->pc == 0x20930Cu) {
        ctx->pc = 0x209310u;
        goto label_209310;
    }
    ctx->pc = 0x209308u;
    SET_GPR_U32(ctx, 31, 0x209310u);
    ctx->pc = 0x1FD1A0u;
    { ctx->pc = 0x1fd1a0; return; }
    ctx->pc = 0x209310u;
label_209310:
    // 0x209310: 0x100000d9  b           . + 4 + (0xD9 << 2)
label_209314:
    if (ctx->pc == 0x209314u) {
        ctx->pc = 0x209318u;
        goto label_209318;
    }
    ctx->pc = 0x209310u;
    {
        const bool branch_taken_0x209310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209310) {
            ctx->pc = 0x209678u;
            { ctx->pc = 0x209678; return; }
        }
    }
    ctx->pc = 0x209318u;
label_209318:
    // 0x209318: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x209318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20931c:
    // 0x20931c: 0x432004  sllv        $a0, $v1, $v0
    ctx->pc = 0x20931cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_209320:
    // 0x209320: 0xdf8387c0  ld          $v1, -0x7840($gp)
    ctx->pc = 0x209320u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936512)));
label_209324:
    // 0x209324: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x209324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_209328:
    // 0x209328: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
label_20932c:
    if (ctx->pc == 0x20932Cu) {
        ctx->pc = 0x20932Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209328u;
        // 0x20932c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209330u;
        goto label_209330;
    }
    ctx->pc = 0x209328u;
    {
        const bool branch_taken_0x209328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20932Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209328u;
        // 0x20932c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209328) {
            ctx->pc = 0x2093E8u;
            goto label_2093e8;
        }
    }
    ctx->pc = 0x209330u;
label_209330:
    // 0x209330: 0xc05b420  jal         func_16D080
label_209334:
    if (ctx->pc == 0x209334u) {
        ctx->pc = 0x209334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209330u;
        // 0x209334: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209338u;
        goto label_209338;
    }
    ctx->pc = 0x209330u;
    SET_GPR_U32(ctx, 31, 0x209338u);
    ctx->pc = 0x209334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209330u;
    // 0x209334: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x209330u, 0x209338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209338u;
label_209338:
    // 0x209338: 0x2631fff8  addiu       $s1, $s1, -0x8
    ctx->pc = 0x209338u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
label_20933c:
    // 0x20933c: 0x220082a  slt         $at, $s1, $zero
    ctx->pc = 0x20933cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_209340:
    // 0x209340: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_209344:
    if (ctx->pc == 0x209344u) {
        ctx->pc = 0x209348u;
        goto label_209348;
    }
    ctx->pc = 0x209340u;
    {
        const bool branch_taken_0x209340 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x209340) {
            ctx->pc = 0x20934Cu;
            goto label_20934c;
        }
    }
    ctx->pc = 0x209348u;
label_209348:
    // 0x209348: 0x26310028  addiu       $s1, $s1, 0x28
    ctx->pc = 0x209348u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
label_20934c:
    // 0x20934c: 0x0  nop
    ctx->pc = 0x20934cu;
    // NOP
label_209350:
    // 0x209350: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x209350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209354:
    // 0x209354: 0x2a210028  slti        $at, $s1, 0x28
    ctx->pc = 0x209354u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)40) ? 1 : 0);
label_209358:
    // 0x209358: 0x24150028  addiu       $s5, $zero, 0x28
    ctx->pc = 0x209358u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_20935c:
    // 0x20935c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_209360:
    if (ctx->pc == 0x209360u) {
        ctx->pc = 0x209360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20935Cu;
        // 0x209360: 0xac5157f0  sw          $s1, 0x57F0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22512), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209364u;
        goto label_209364;
    }
    ctx->pc = 0x20935Cu;
    {
        const bool branch_taken_0x20935c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x209360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20935Cu;
        // 0x209360: 0xac5157f0  sw          $s1, 0x57F0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22512), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20935c) {
            ctx->pc = 0x209378u;
            goto label_209378;
        }
    }
    ctx->pc = 0x209364u;
label_209364:
    // 0x209364: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x209364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209368:
    // 0x209368: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x209368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_20936c:
    // 0x20936c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20936cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_209370:
    // 0x209370: 0x8c555748  lw          $s5, 0x5748($v0)
    ctx->pc = 0x209370u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22344)));
label_209374:
    // 0x209374: 0x0  nop
    ctx->pc = 0x209374u;
    // NOP
label_209378:
    // 0x209378: 0x2aa10028  slti        $at, $s5, 0x28
    ctx->pc = 0x209378u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)40) ? 1 : 0);
label_20937c:
    // 0x20937c: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_209380:
    if (ctx->pc == 0x209380u) {
        ctx->pc = 0x209380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20937Cu;
        // 0x209380: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209384u;
        goto label_209384;
    }
    ctx->pc = 0x20937Cu;
    {
        const bool branch_taken_0x20937c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x209380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20937Cu;
        // 0x209380: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20937c) {
            ctx->pc = 0x2093CCu;
            goto label_2093cc;
        }
    }
    ctx->pc = 0x209384u;
label_209384:
    // 0x209384: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x209384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_209388:
    // 0x209388: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x209388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_20938c:
    // 0x20938c: 0x24070198  addiu       $a3, $zero, 0x198
    ctx->pc = 0x20938cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
label_209390:
    // 0x209390: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x209390u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_209394:
    // 0x209394: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x209394u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209398:
    // 0x209398: 0xc07f734  jal         func_1FDCD0
label_20939c:
    if (ctx->pc == 0x20939Cu) {
        ctx->pc = 0x20939Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209398u;
        // 0x20939c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2093A0u;
        goto label_2093a0;
    }
    ctx->pc = 0x209398u;
    SET_GPR_U32(ctx, 31, 0x2093A0u);
    ctx->pc = 0x20939Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209398u;
    // 0x20939c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDCD0u;
    { ctx->pc = 0x1fdcd0; return; }
    ctx->pc = 0x2093A0u;
label_2093a0:
    // 0x2093a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2093a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2093a4:
    // 0x2093a4: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2093a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2093a8:
    // 0x2093a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2093a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2093ac:
    // 0x2093ac: 0x240600ab  addiu       $a2, $zero, 0xAB
    ctx->pc = 0x2093acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
label_2093b0:
    // 0x2093b0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2093b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2093b4:
    // 0x2093b4: 0x24090198  addiu       $t1, $zero, 0x198
    ctx->pc = 0x2093b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
label_2093b8:
    // 0x2093b8: 0x240a0030  addiu       $t2, $zero, 0x30
    ctx->pc = 0x2093b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2093bc:
    // 0x2093bc: 0xc07f47c  jal         func_1FD1F0
label_2093c0:
    if (ctx->pc == 0x2093C0u) {
        ctx->pc = 0x2093C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093BCu;
        // 0x2093c0: 0xa0582d  daddu       $t3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2093C4u;
        goto label_2093c4;
    }
    ctx->pc = 0x2093BCu;
    SET_GPR_U32(ctx, 31, 0x2093C4u);
    ctx->pc = 0x2093C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2093BCu;
    // 0x2093c0: 0xa0582d  daddu       $t3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD1F0u;
    { ctx->pc = 0x1fd1f0; return; }
    ctx->pc = 0x2093C4u;
label_2093c4:
    // 0x2093c4: 0x100000ac  b           . + 4 + (0xAC << 2)
label_2093c8:
    if (ctx->pc == 0x2093C8u) {
        ctx->pc = 0x2093CCu;
        goto label_2093cc;
    }
    ctx->pc = 0x2093C4u;
    {
        const bool branch_taken_0x2093c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2093c4) {
            ctx->pc = 0x209678u;
            { ctx->pc = 0x209678; return; }
        }
    }
    ctx->pc = 0x2093CCu;
label_2093cc:
    // 0x2093cc: 0x0  nop
    ctx->pc = 0x2093ccu;
    // NOP
label_2093d0:
    // 0x2093d0: 0xc07f708  jal         func_1FDC20
label_2093d4:
    if (ctx->pc == 0x2093D4u) {
        ctx->pc = 0x2093D8u;
        goto label_2093d8;
    }
    ctx->pc = 0x2093D0u;
    SET_GPR_U32(ctx, 31, 0x2093D8u);
    ctx->pc = 0x1FDC20u;
    { ctx->pc = 0x1fdc20; return; }
    ctx->pc = 0x2093D8u;
label_2093d8:
    // 0x2093d8: 0xc07f468  jal         func_1FD1A0
label_2093dc:
    if (ctx->pc == 0x2093DCu) {
        ctx->pc = 0x2093E0u;
        goto label_2093e0;
    }
    ctx->pc = 0x2093D8u;
    SET_GPR_U32(ctx, 31, 0x2093E0u);
    ctx->pc = 0x1FD1A0u;
    { ctx->pc = 0x1fd1a0; return; }
    ctx->pc = 0x2093E0u;
label_2093e0:
    // 0x2093e0: 0x100000a5  b           . + 4 + (0xA5 << 2)
label_2093e4:
    if (ctx->pc == 0x2093E4u) {
        ctx->pc = 0x2093E8u;
        goto label_2093e8;
    }
    ctx->pc = 0x2093E0u;
    {
        const bool branch_taken_0x2093e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2093e0) {
            ctx->pc = 0x209678u;
            { ctx->pc = 0x209678; return; }
        }
    }
    ctx->pc = 0x2093E8u;
label_2093e8:
    // 0x2093e8: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x2093e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2093ec:
    // 0x2093ec: 0x432004  sllv        $a0, $v1, $v0
    ctx->pc = 0x2093ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_2093f0:
    // 0x2093f0: 0xdf8387c0  ld          $v1, -0x7840($gp)
    ctx->pc = 0x2093f0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936512)));
label_2093f4:
    // 0x2093f4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2093f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_2093f8:
    // 0x2093f8: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
label_2093fc:
    if (ctx->pc == 0x2093FCu) {
        ctx->pc = 0x2093FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093F8u;
        // 0x2093fc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209400u;
        goto label_209400;
    }
    ctx->pc = 0x2093F8u;
    {
        const bool branch_taken_0x2093f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2093FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093F8u;
        // 0x2093fc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2093f8) {
            ctx->pc = 0x2094B8u;
            goto label_2094b8;
        }
    }
    ctx->pc = 0x209400u;
label_209400:
    // 0x209400: 0xc05b420  jal         func_16D080
label_209404:
    if (ctx->pc == 0x209404u) {
        ctx->pc = 0x209404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209400u;
        // 0x209404: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209408u;
        goto label_209408;
    }
    ctx->pc = 0x209400u;
    SET_GPR_U32(ctx, 31, 0x209408u);
    ctx->pc = 0x209404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209400u;
    // 0x209404: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x209400u, 0x209408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209408u;
label_209408:
    // 0x209408: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x209408u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_20940c:
    // 0x20940c: 0x2a220028  slti        $v0, $s1, 0x28
    ctx->pc = 0x20940cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)40) ? 1 : 0);
label_209410:
    // 0x209410: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_209414:
    if (ctx->pc == 0x209414u) {
        ctx->pc = 0x209418u;
        goto label_209418;
    }
    ctx->pc = 0x209410u;
    {
        const bool branch_taken_0x209410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x209410) {
            ctx->pc = 0x20941Cu;
            goto label_20941c;
        }
    }
    ctx->pc = 0x209418u;
label_209418:
    // 0x209418: 0x2631ffd8  addiu       $s1, $s1, -0x28
    ctx->pc = 0x209418u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967256));
label_20941c:
    // 0x20941c: 0x0  nop
    ctx->pc = 0x20941cu;
    // NOP
label_209420:
    // 0x209420: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x209420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209424:
    // 0x209424: 0x2a210028  slti        $at, $s1, 0x28
    ctx->pc = 0x209424u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)40) ? 1 : 0);
label_209428:
    // 0x209428: 0x24150028  addiu       $s5, $zero, 0x28
    ctx->pc = 0x209428u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_20942c:
    // 0x20942c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_209430:
    if (ctx->pc == 0x209430u) {
        ctx->pc = 0x209430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20942Cu;
        // 0x209430: 0xac5157f0  sw          $s1, 0x57F0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22512), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209434u;
        goto label_209434;
    }
    ctx->pc = 0x20942Cu;
    {
        const bool branch_taken_0x20942c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x209430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20942Cu;
        // 0x209430: 0xac5157f0  sw          $s1, 0x57F0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22512), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20942c) {
            ctx->pc = 0x209448u;
            goto label_209448;
        }
    }
    ctx->pc = 0x209434u;
label_209434:
    // 0x209434: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x209434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209438:
    // 0x209438: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x209438u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_20943c:
    // 0x20943c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20943cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_209440:
    // 0x209440: 0x8c555748  lw          $s5, 0x5748($v0)
    ctx->pc = 0x209440u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22344)));
label_209444:
    // 0x209444: 0x0  nop
    ctx->pc = 0x209444u;
    // NOP
label_209448:
    // 0x209448: 0x2aa10028  slti        $at, $s5, 0x28
    ctx->pc = 0x209448u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)40) ? 1 : 0);
label_20944c:
    // 0x20944c: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_209450:
    if (ctx->pc == 0x209450u) {
        ctx->pc = 0x209450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20944Cu;
        // 0x209450: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209454u;
        goto label_209454;
    }
    ctx->pc = 0x20944Cu;
    {
        const bool branch_taken_0x20944c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x209450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20944Cu;
        // 0x209450: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20944c) {
            ctx->pc = 0x20949Cu;
            goto label_20949c;
        }
    }
    ctx->pc = 0x209454u;
label_209454:
    // 0x209454: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x209454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_209458:
    // 0x209458: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x209458u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_20945c:
    // 0x20945c: 0x24070198  addiu       $a3, $zero, 0x198
    ctx->pc = 0x20945cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
label_209460:
    // 0x209460: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x209460u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_209464:
    // 0x209464: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x209464u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209468:
    // 0x209468: 0xc07f734  jal         func_1FDCD0
label_20946c:
    if (ctx->pc == 0x20946Cu) {
        ctx->pc = 0x20946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209468u;
        // 0x20946c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209470u;
        goto label_209470;
    }
    ctx->pc = 0x209468u;
    SET_GPR_U32(ctx, 31, 0x209470u);
    ctx->pc = 0x20946Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209468u;
    // 0x20946c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDCD0u;
    { ctx->pc = 0x1fdcd0; return; }
    ctx->pc = 0x209470u;
label_209470:
    // 0x209470: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x209470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209474:
    // 0x209474: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x209474u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_209478:
    // 0x209478: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x209478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20947c:
    // 0x20947c: 0x240600ab  addiu       $a2, $zero, 0xAB
    ctx->pc = 0x20947cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
label_209480:
    // 0x209480: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x209480u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_209484:
    // 0x209484: 0x24090198  addiu       $t1, $zero, 0x198
    ctx->pc = 0x209484u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
label_209488:
    // 0x209488: 0x240a0030  addiu       $t2, $zero, 0x30
    ctx->pc = 0x209488u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_20948c:
    // 0x20948c: 0xc07f47c  jal         func_1FD1F0
label_209490:
    if (ctx->pc == 0x209490u) {
        ctx->pc = 0x209490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20948Cu;
        // 0x209490: 0xa0582d  daddu       $t3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209494u;
        goto label_209494;
    }
    ctx->pc = 0x20948Cu;
    SET_GPR_U32(ctx, 31, 0x209494u);
    ctx->pc = 0x209490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20948Cu;
    // 0x209490: 0xa0582d  daddu       $t3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD1F0u;
    { ctx->pc = 0x1fd1f0; return; }
    ctx->pc = 0x209494u;
label_209494:
    // 0x209494: 0x10000078  b           . + 4 + (0x78 << 2)
label_209498:
    if (ctx->pc == 0x209498u) {
        ctx->pc = 0x20949Cu;
        goto label_20949c;
    }
    ctx->pc = 0x209494u;
    {
        const bool branch_taken_0x209494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209494) {
            ctx->pc = 0x209678u;
            { ctx->pc = 0x209678; return; }
        }
    }
    ctx->pc = 0x20949Cu;
label_20949c:
    // 0x20949c: 0x0  nop
    ctx->pc = 0x20949cu;
    // NOP
label_2094a0:
    // 0x2094a0: 0xc07f708  jal         func_1FDC20
label_2094a4:
    if (ctx->pc == 0x2094A4u) {
        ctx->pc = 0x2094A8u;
        goto label_2094a8;
    }
    ctx->pc = 0x2094A0u;
    SET_GPR_U32(ctx, 31, 0x2094A8u);
    ctx->pc = 0x1FDC20u;
    { ctx->pc = 0x1fdc20; return; }
    ctx->pc = 0x2094A8u;
label_2094a8:
    // 0x2094a8: 0xc07f468  jal         func_1FD1A0
label_2094ac:
    if (ctx->pc == 0x2094ACu) {
        ctx->pc = 0x2094B0u;
        goto label_2094b0;
    }
    ctx->pc = 0x2094A8u;
    SET_GPR_U32(ctx, 31, 0x2094B0u);
    ctx->pc = 0x1FD1A0u;
    { ctx->pc = 0x1fd1a0; return; }
    ctx->pc = 0x2094B0u;
label_2094b0:
    // 0x2094b0: 0x10000071  b           . + 4 + (0x71 << 2)
label_2094b4:
    if (ctx->pc == 0x2094B4u) {
        ctx->pc = 0x2094B8u;
        goto label_2094b8;
    }
    ctx->pc = 0x2094B0u;
    {
        const bool branch_taken_0x2094b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2094b0) {
            ctx->pc = 0x209678u;
            { ctx->pc = 0x209678; return; }
        }
    }
    ctx->pc = 0x2094B8u;
label_2094b8:
    // 0x2094b8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2094b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2094bc:
    // 0x2094bc: 0x432004  sllv        $a0, $v1, $v0
    ctx->pc = 0x2094bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_2094c0:
    // 0x2094c0: 0xdf8387c0  ld          $v1, -0x7840($gp)
    ctx->pc = 0x2094c0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936512)));
label_2094c4:
    // 0x2094c4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2094c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_2094c8:
    // 0x2094c8: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
label_2094cc:
    if (ctx->pc == 0x2094CCu) {
        ctx->pc = 0x2094CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2094C8u;
        // 0x2094cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2094D0u;
        goto label_2094d0;
    }
    ctx->pc = 0x2094C8u;
    {
        const bool branch_taken_0x2094c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2094CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2094C8u;
        // 0x2094cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2094c8) {
            ctx->pc = 0x209598u;
            goto label_209598;
        }
    }
    ctx->pc = 0x2094D0u;
label_2094d0:
    // 0x2094d0: 0xc05b420  jal         func_16D080
label_2094d4:
    if (ctx->pc == 0x2094D4u) {
        ctx->pc = 0x2094D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2094D0u;
        // 0x2094d4: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2094D8u;
        goto label_2094d8;
    }
    ctx->pc = 0x2094D0u;
    SET_GPR_U32(ctx, 31, 0x2094D8u);
    ctx->pc = 0x2094D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2094D0u;
    // 0x2094d4: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x2094D0u, 0x2094D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2094D8u;
label_2094d8:
    // 0x2094d8: 0x6210004  bgez        $s1, . + 4 + (0x4 << 2)
label_2094dc:
    if (ctx->pc == 0x2094DCu) {
        ctx->pc = 0x2094DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2094D8u;
        // 0x2094dc: 0x32220007  andi        $v0, $s1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2094E0u;
        goto label_2094e0;
    }
    ctx->pc = 0x2094D8u;
    {
        const bool branch_taken_0x2094d8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2094DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2094D8u;
        // 0x2094dc: 0x32220007  andi        $v0, $s1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2094d8) {
            ctx->pc = 0x2094ECu;
            goto label_2094ec;
        }
    }
    ctx->pc = 0x2094E0u;
label_2094e0:
    // 0x2094e0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2094e4:
    if (ctx->pc == 0x2094E4u) {
        ctx->pc = 0x2094E8u;
        goto label_2094e8;
    }
    ctx->pc = 0x2094E0u;
    {
        const bool branch_taken_0x2094e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2094e0) {
            ctx->pc = 0x2094ECu;
            goto label_2094ec;
        }
    }
    ctx->pc = 0x2094E8u;
label_2094e8:
    // 0x2094e8: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x2094e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_2094ec:
    // 0x2094ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2094f0:
    if (ctx->pc == 0x2094F0u) {
        ctx->pc = 0x2094F4u;
        goto label_2094f4;
    }
    ctx->pc = 0x2094ECu;
    {
        const bool branch_taken_0x2094ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2094ec) {
            ctx->pc = 0x2094FCu;
            goto label_2094fc;
        }
    }
    ctx->pc = 0x2094F4u;
label_2094f4:
    // 0x2094f4: 0x10000002  b           . + 4 + (0x2 << 2)
label_2094f8:
    if (ctx->pc == 0x2094F8u) {
        ctx->pc = 0x2094F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2094F4u;
        // 0x2094f8: 0x26310007  addiu       $s1, $s1, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2094FCu;
        goto label_2094fc;
    }
    ctx->pc = 0x2094F4u;
    {
        const bool branch_taken_0x2094f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2094F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2094F4u;
        // 0x2094f8: 0x26310007  addiu       $s1, $s1, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2094f4) {
            ctx->pc = 0x209500u;
            goto label_209500;
        }
    }
    ctx->pc = 0x2094FCu;
label_2094fc:
    // 0x2094fc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2094fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_209500:
    // 0x209500: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x209500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209504:
    // 0x209504: 0x2a210028  slti        $at, $s1, 0x28
    ctx->pc = 0x209504u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)40) ? 1 : 0);
label_209508:
    // 0x209508: 0x24150028  addiu       $s5, $zero, 0x28
    ctx->pc = 0x209508u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_20950c:
    // 0x20950c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_209510:
    if (ctx->pc == 0x209510u) {
        ctx->pc = 0x209510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20950Cu;
        // 0x209510: 0xac5157f0  sw          $s1, 0x57F0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22512), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209514u;
        goto label_209514;
    }
    ctx->pc = 0x20950Cu;
    {
        const bool branch_taken_0x20950c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x209510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20950Cu;
        // 0x209510: 0xac5157f0  sw          $s1, 0x57F0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22512), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20950c) {
            ctx->pc = 0x209528u;
            goto label_209528;
        }
    }
    ctx->pc = 0x209514u;
label_209514:
    // 0x209514: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x209514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209518:
    // 0x209518: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x209518u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_20951c:
    // 0x20951c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20951cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_209520:
    // 0x209520: 0x8c555748  lw          $s5, 0x5748($v0)
    ctx->pc = 0x209520u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22344)));
label_209524:
    // 0x209524: 0x0  nop
    ctx->pc = 0x209524u;
    // NOP
label_209528:
    // 0x209528: 0x2aa10028  slti        $at, $s5, 0x28
    ctx->pc = 0x209528u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)40) ? 1 : 0);
label_20952c:
    // 0x20952c: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_209530:
    if (ctx->pc == 0x209530u) {
        ctx->pc = 0x209530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20952Cu;
        // 0x209530: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209534u;
        goto label_209534;
    }
    ctx->pc = 0x20952Cu;
    {
        const bool branch_taken_0x20952c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x209530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20952Cu;
        // 0x209530: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20952c) {
            ctx->pc = 0x20957Cu;
            goto label_20957c;
        }
    }
    ctx->pc = 0x209534u;
label_209534:
    // 0x209534: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x209534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_209538:
    // 0x209538: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x209538u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_20953c:
    // 0x20953c: 0x24070198  addiu       $a3, $zero, 0x198
    ctx->pc = 0x20953cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
label_209540:
    // 0x209540: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x209540u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_209544:
    // 0x209544: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x209544u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209548:
    // 0x209548: 0xc07f734  jal         func_1FDCD0
label_20954c:
    if (ctx->pc == 0x20954Cu) {
        ctx->pc = 0x20954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209548u;
        // 0x20954c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209550u;
        goto label_209550;
    }
    ctx->pc = 0x209548u;
    SET_GPR_U32(ctx, 31, 0x209550u);
    ctx->pc = 0x20954Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209548u;
    // 0x20954c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDCD0u;
    { ctx->pc = 0x1fdcd0; return; }
    ctx->pc = 0x209550u;
label_209550:
    // 0x209550: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x209550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209554:
    // 0x209554: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x209554u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_209558:
    // 0x209558: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x209558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20955c:
    // 0x20955c: 0x240600ab  addiu       $a2, $zero, 0xAB
    ctx->pc = 0x20955cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
label_209560:
    // 0x209560: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x209560u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_209564:
    // 0x209564: 0x24090198  addiu       $t1, $zero, 0x198
    ctx->pc = 0x209564u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
label_209568:
    // 0x209568: 0x240a0030  addiu       $t2, $zero, 0x30
    ctx->pc = 0x209568u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_20956c:
    // 0x20956c: 0xc07f47c  jal         func_1FD1F0
label_209570:
    if (ctx->pc == 0x209570u) {
        ctx->pc = 0x209570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20956Cu;
        // 0x209570: 0xa0582d  daddu       $t3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209574u;
        goto label_209574;
    }
    ctx->pc = 0x20956Cu;
    SET_GPR_U32(ctx, 31, 0x209574u);
    ctx->pc = 0x209570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20956Cu;
    // 0x209570: 0xa0582d  daddu       $t3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD1F0u;
    { ctx->pc = 0x1fd1f0; return; }
    ctx->pc = 0x209574u;
label_209574:
    // 0x209574: 0x10000040  b           . + 4 + (0x40 << 2)
label_209578:
    if (ctx->pc == 0x209578u) {
        ctx->pc = 0x20957Cu;
        goto label_20957c;
    }
    ctx->pc = 0x209574u;
    {
        const bool branch_taken_0x209574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209574) {
            ctx->pc = 0x209678u;
            { ctx->pc = 0x209678; return; }
        }
    }
    ctx->pc = 0x20957Cu;
label_20957c:
    // 0x20957c: 0x0  nop
    ctx->pc = 0x20957cu;
    // NOP
label_209580:
    // 0x209580: 0xc07f708  jal         func_1FDC20
label_209584:
    if (ctx->pc == 0x209584u) {
        ctx->pc = 0x209588u;
        goto label_209588;
    }
    ctx->pc = 0x209580u;
    SET_GPR_U32(ctx, 31, 0x209588u);
    ctx->pc = 0x1FDC20u;
    { ctx->pc = 0x1fdc20; return; }
    ctx->pc = 0x209588u;
label_209588:
    // 0x209588: 0xc07f468  jal         func_1FD1A0
label_20958c:
    if (ctx->pc == 0x20958Cu) {
        ctx->pc = 0x209590u;
        goto label_209590;
    }
    ctx->pc = 0x209588u;
    SET_GPR_U32(ctx, 31, 0x209590u);
    ctx->pc = 0x1FD1A0u;
    { ctx->pc = 0x1fd1a0; return; }
    ctx->pc = 0x209590u;
label_209590:
    // 0x209590: 0x10000039  b           . + 4 + (0x39 << 2)
label_209594:
    if (ctx->pc == 0x209594u) {
        ctx->pc = 0x209598u;
        goto label_209598;
    }
    ctx->pc = 0x209590u;
    {
        const bool branch_taken_0x209590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209590) {
            ctx->pc = 0x209678u;
            { ctx->pc = 0x209678; return; }
        }
    }
    ctx->pc = 0x209598u;
label_209598:
    // 0x209598: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x209598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_20959c:
    // 0x20959c: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x20959cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_2095a0:
    // 0x2095a0: 0xdf8287c0  ld          $v0, -0x7840($gp)
    ctx->pc = 0x2095a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936512)));
label_2095a4:
    // 0x2095a4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2095a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2095a8:
    // 0x2095a8: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_2095ac:
    if (ctx->pc == 0x2095ACu) {
        ctx->pc = 0x2095ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2095A8u;
        // 0x2095ac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2095B0u;
        goto label_2095b0;
    }
    ctx->pc = 0x2095A8u;
    {
        const bool branch_taken_0x2095a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2095ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2095A8u;
        // 0x2095ac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2095a8) {
            ctx->pc = 0x209678u;
            { ctx->pc = 0x209678; return; }
        }
    }
    ctx->pc = 0x2095B0u;
label_2095b0:
    // 0x2095b0: 0xc05b420  jal         func_16D080
label_2095b4:
    if (ctx->pc == 0x2095B4u) {
        ctx->pc = 0x2095B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2095B0u;
        // 0x2095b4: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2095B8u;
        goto label_2095b8;
    }
    ctx->pc = 0x2095B0u;
    SET_GPR_U32(ctx, 31, 0x2095B8u);
    ctx->pc = 0x2095B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2095B0u;
    // 0x2095b4: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x2095B0u, 0x2095B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2095B8u;
label_2095b8:
    // 0x2095b8: 0x6210004  bgez        $s1, . + 4 + (0x4 << 2)
label_2095bc:
    if (ctx->pc == 0x2095BCu) {
        ctx->pc = 0x2095BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2095B8u;
        // 0x2095bc: 0x32230007  andi        $v1, $s1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2095C0u;
        goto label_2095c0;
    }
    ctx->pc = 0x2095B8u;
    {
        const bool branch_taken_0x2095b8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2095BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2095B8u;
        // 0x2095bc: 0x32230007  andi        $v1, $s1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2095b8) {
            ctx->pc = 0x2095CCu;
            goto label_2095cc;
        }
    }
    ctx->pc = 0x2095C0u;
label_2095c0:
    // 0x2095c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2095c4:
    if (ctx->pc == 0x2095C4u) {
        ctx->pc = 0x2095C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2095C0u;
        // 0x2095c4: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2095C8u;
        goto label_2095c8;
    }
    ctx->pc = 0x2095C0u;
    {
        const bool branch_taken_0x2095c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2095C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2095C0u;
        // 0x2095c4: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2095c0) {
            ctx->pc = 0x2095D0u;
            goto label_2095d0;
        }
    }
    ctx->pc = 0x2095C8u;
label_2095c8:
    // 0x2095c8: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x2095c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_2095cc:
    // 0x2095cc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2095ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2095d0:
    // 0x2095d0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_2095d4:
    if (ctx->pc == 0x2095D4u) {
        ctx->pc = 0x2095D8u;
        goto label_2095d8;
    }
    ctx->pc = 0x2095D0u;
    {
        const bool branch_taken_0x2095d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2095d0) {
            ctx->pc = 0x2095E0u;
            goto label_2095e0;
        }
    }
    ctx->pc = 0x2095D8u;
label_2095d8:
    // 0x2095d8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2095dc:
    if (ctx->pc == 0x2095DCu) {
        ctx->pc = 0x2095DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2095D8u;
        // 0x2095dc: 0x2631fff9  addiu       $s1, $s1, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967289));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2095E0u;
        goto label_2095e0;
    }
    ctx->pc = 0x2095D8u;
    {
        const bool branch_taken_0x2095d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2095DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2095D8u;
        // 0x2095dc: 0x2631fff9  addiu       $s1, $s1, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2095d8) {
            ctx->pc = 0x2095E4u;
            goto label_2095e4;
        }
    }
    ctx->pc = 0x2095E0u;
label_2095e0:
    // 0x2095e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2095e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2095e4:
    // 0x2095e4: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x2095e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_2095e8:
    // 0x2095e8: 0x2a210028  slti        $at, $s1, 0x28
    ctx->pc = 0x2095e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)40) ? 1 : 0);
label_2095ec:
    // 0x2095ec: 0x24150028  addiu       $s5, $zero, 0x28
    ctx->pc = 0x2095ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2095f0:
    // 0x2095f0: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_2095f4:
    if (ctx->pc == 0x2095F4u) {
        ctx->pc = 0x2095F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2095F0u;
        // 0x2095f4: 0xac5157f0  sw          $s1, 0x57F0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22512), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2095F8u;
        goto label_2095f8;
    }
    ctx->pc = 0x2095F0u;
    {
        const bool branch_taken_0x2095f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2095F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2095F0u;
        // 0x2095f4: 0xac5157f0  sw          $s1, 0x57F0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22512), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2095f0) {
            ctx->pc = 0x20960Cu;
            goto label_20960c;
        }
    }
    ctx->pc = 0x2095F8u;
label_2095f8:
    // 0x2095f8: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x2095f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_2095fc:
    // 0x2095fc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2095fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_209600:
    // 0x209600: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x209600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_209604:
    // 0x209604: 0x8c555748  lw          $s5, 0x5748($v0)
    ctx->pc = 0x209604u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22344)));
label_209608:
    // 0x209608: 0x0  nop
    ctx->pc = 0x209608u;
    // NOP
label_20960c:
    // 0x20960c: 0x0  nop
    ctx->pc = 0x20960cu;
    // NOP
label_209610:
    // 0x209610: 0x2aa10028  slti        $at, $s5, 0x28
    ctx->pc = 0x209610u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)40) ? 1 : 0);
label_209614:
    // 0x209614: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_209618:
    if (ctx->pc == 0x209618u) {
        ctx->pc = 0x209618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209614u;
        // 0x209618: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20961Cu;
        goto label_20961c;
    }
    ctx->pc = 0x209614u;
    {
        const bool branch_taken_0x209614 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x209618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209614u;
        // 0x209618: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209614) {
            ctx->pc = 0x209664u;
            { ctx->pc = 0x209664; return; }
        }
    }
    ctx->pc = 0x20961Cu;
label_20961c:
    // 0x20961c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x20961cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x209620u;
    return;
}
