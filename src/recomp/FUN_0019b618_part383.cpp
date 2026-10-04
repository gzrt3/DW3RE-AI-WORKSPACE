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


void FUN_0019b618_part383(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x255e78u: goto label_255e78;
        case 0x255e7cu: goto label_255e7c;
        case 0x255e80u: goto label_255e80;
        case 0x255e84u: goto label_255e84;
        case 0x255e88u: goto label_255e88;
        case 0x255e8cu: goto label_255e8c;
        case 0x255e90u: goto label_255e90;
        case 0x255e94u: goto label_255e94;
        case 0x255e98u: goto label_255e98;
        case 0x255e9cu: goto label_255e9c;
        case 0x255ea0u: goto label_255ea0;
        case 0x255ea4u: goto label_255ea4;
        case 0x255ea8u: goto label_255ea8;
        case 0x255eacu: goto label_255eac;
        case 0x255eb0u: goto label_255eb0;
        case 0x255eb4u: goto label_255eb4;
        case 0x255eb8u: goto label_255eb8;
        case 0x255ebcu: goto label_255ebc;
        case 0x255ec0u: goto label_255ec0;
        case 0x255ec4u: goto label_255ec4;
        case 0x255ec8u: goto label_255ec8;
        case 0x255eccu: goto label_255ecc;
        case 0x255ed0u: goto label_255ed0;
        case 0x255ed4u: goto label_255ed4;
        case 0x255ed8u: goto label_255ed8;
        case 0x255edcu: goto label_255edc;
        case 0x255ee0u: goto label_255ee0;
        case 0x255ee4u: goto label_255ee4;
        case 0x255ee8u: goto label_255ee8;
        case 0x255eecu: goto label_255eec;
        case 0x255ef0u: goto label_255ef0;
        case 0x255ef4u: goto label_255ef4;
        case 0x255ef8u: goto label_255ef8;
        case 0x255efcu: goto label_255efc;
        case 0x255f00u: goto label_255f00;
        case 0x255f04u: goto label_255f04;
        case 0x255f08u: goto label_255f08;
        case 0x255f0cu: goto label_255f0c;
        case 0x255f10u: goto label_255f10;
        case 0x255f14u: goto label_255f14;
        case 0x255f18u: goto label_255f18;
        case 0x255f1cu: goto label_255f1c;
        case 0x255f20u: goto label_255f20;
        case 0x255f24u: goto label_255f24;
        case 0x255f28u: goto label_255f28;
        case 0x255f2cu: goto label_255f2c;
        case 0x255f30u: goto label_255f30;
        case 0x255f34u: goto label_255f34;
        case 0x255f38u: goto label_255f38;
        case 0x255f3cu: goto label_255f3c;
        case 0x255f40u: goto label_255f40;
        case 0x255f44u: goto label_255f44;
        case 0x255f48u: goto label_255f48;
        case 0x255f4cu: goto label_255f4c;
        case 0x255f50u: goto label_255f50;
        case 0x255f54u: goto label_255f54;
        case 0x255f58u: goto label_255f58;
        case 0x255f5cu: goto label_255f5c;
        case 0x255f60u: goto label_255f60;
        case 0x255f64u: goto label_255f64;
        case 0x255f68u: goto label_255f68;
        case 0x255f6cu: goto label_255f6c;
        case 0x255f70u: goto label_255f70;
        case 0x255f74u: goto label_255f74;
        case 0x255f78u: goto label_255f78;
        case 0x255f7cu: goto label_255f7c;
        case 0x255f80u: goto label_255f80;
        case 0x255f84u: goto label_255f84;
        case 0x255f88u: goto label_255f88;
        case 0x255f8cu: goto label_255f8c;
        case 0x255f90u: goto label_255f90;
        case 0x255f94u: goto label_255f94;
        case 0x255f98u: goto label_255f98;
        case 0x255f9cu: goto label_255f9c;
        case 0x255fa0u: goto label_255fa0;
        case 0x255fa4u: goto label_255fa4;
        case 0x255fa8u: goto label_255fa8;
        case 0x255facu: goto label_255fac;
        case 0x255fb0u: goto label_255fb0;
        case 0x255fb4u: goto label_255fb4;
        case 0x255fb8u: goto label_255fb8;
        case 0x255fbcu: goto label_255fbc;
        case 0x255fc0u: goto label_255fc0;
        case 0x255fc4u: goto label_255fc4;
        case 0x255fc8u: goto label_255fc8;
        case 0x255fccu: goto label_255fcc;
        case 0x255fd0u: goto label_255fd0;
        case 0x255fd4u: goto label_255fd4;
        case 0x255fd8u: goto label_255fd8;
        case 0x255fdcu: goto label_255fdc;
        case 0x255fe0u: goto label_255fe0;
        case 0x255fe4u: goto label_255fe4;
        case 0x255fe8u: goto label_255fe8;
        case 0x255fecu: goto label_255fec;
        case 0x255ff0u: goto label_255ff0;
        case 0x255ff4u: goto label_255ff4;
        case 0x255ff8u: goto label_255ff8;
        case 0x255ffcu: goto label_255ffc;
        case 0x256000u: goto label_256000;
        case 0x256004u: goto label_256004;
        case 0x256008u: goto label_256008;
        case 0x25600cu: goto label_25600c;
        case 0x256010u: goto label_256010;
        case 0x256014u: goto label_256014;
        case 0x256018u: goto label_256018;
        case 0x25601cu: goto label_25601c;
        case 0x256020u: goto label_256020;
        case 0x256024u: goto label_256024;
        case 0x256028u: goto label_256028;
        case 0x25602cu: goto label_25602c;
        case 0x256030u: goto label_256030;
        case 0x256034u: goto label_256034;
        case 0x256038u: goto label_256038;
        case 0x25603cu: goto label_25603c;
        case 0x256040u: goto label_256040;
        case 0x256044u: goto label_256044;
        case 0x256048u: goto label_256048;
        case 0x25604cu: goto label_25604c;
        case 0x256050u: goto label_256050;
        case 0x256054u: goto label_256054;
        case 0x256058u: goto label_256058;
        case 0x25605cu: goto label_25605c;
        case 0x256060u: goto label_256060;
        case 0x256064u: goto label_256064;
        case 0x256068u: goto label_256068;
        case 0x25606cu: goto label_25606c;
        case 0x256070u: goto label_256070;
        case 0x256074u: goto label_256074;
        case 0x256078u: goto label_256078;
        case 0x25607cu: goto label_25607c;
        case 0x256080u: goto label_256080;
        case 0x256084u: goto label_256084;
        case 0x256088u: goto label_256088;
        case 0x25608cu: goto label_25608c;
        case 0x256090u: goto label_256090;
        case 0x256094u: goto label_256094;
        case 0x256098u: goto label_256098;
        case 0x25609cu: goto label_25609c;
        case 0x2560a0u: goto label_2560a0;
        case 0x2560a4u: goto label_2560a4;
        case 0x2560a8u: goto label_2560a8;
        case 0x2560acu: goto label_2560ac;
        case 0x2560b0u: goto label_2560b0;
        case 0x2560b4u: goto label_2560b4;
        case 0x2560b8u: goto label_2560b8;
        case 0x2560bcu: goto label_2560bc;
        case 0x2560c0u: goto label_2560c0;
        case 0x2560c4u: goto label_2560c4;
        case 0x2560c8u: goto label_2560c8;
        case 0x2560ccu: goto label_2560cc;
        case 0x2560d0u: goto label_2560d0;
        case 0x2560d4u: goto label_2560d4;
        case 0x2560d8u: goto label_2560d8;
        case 0x2560dcu: goto label_2560dc;
        case 0x2560e0u: goto label_2560e0;
        case 0x2560e4u: goto label_2560e4;
        case 0x2560e8u: goto label_2560e8;
        case 0x2560ecu: goto label_2560ec;
        case 0x2560f0u: goto label_2560f0;
        case 0x2560f4u: goto label_2560f4;
        case 0x2560f8u: goto label_2560f8;
        case 0x2560fcu: goto label_2560fc;
        case 0x256100u: goto label_256100;
        case 0x256104u: goto label_256104;
        case 0x256108u: goto label_256108;
        case 0x25610cu: goto label_25610c;
        case 0x256110u: goto label_256110;
        case 0x256114u: goto label_256114;
        case 0x256118u: goto label_256118;
        case 0x25611cu: goto label_25611c;
        case 0x256120u: goto label_256120;
        case 0x256124u: goto label_256124;
        case 0x256128u: goto label_256128;
        case 0x25612cu: goto label_25612c;
        case 0x256130u: goto label_256130;
        case 0x256134u: goto label_256134;
        case 0x256138u: goto label_256138;
        case 0x25613cu: goto label_25613c;
        case 0x256140u: goto label_256140;
        case 0x256144u: goto label_256144;
        case 0x256148u: goto label_256148;
        case 0x25614cu: goto label_25614c;
        case 0x256150u: goto label_256150;
        case 0x256154u: goto label_256154;
        case 0x256158u: goto label_256158;
        case 0x25615cu: goto label_25615c;
        case 0x256160u: goto label_256160;
        case 0x256164u: goto label_256164;
        case 0x256168u: goto label_256168;
        case 0x25616cu: goto label_25616c;
        case 0x256170u: goto label_256170;
        case 0x256174u: goto label_256174;
        case 0x256178u: goto label_256178;
        case 0x25617cu: goto label_25617c;
        case 0x256180u: goto label_256180;
        case 0x256184u: goto label_256184;
        case 0x256188u: goto label_256188;
        case 0x25618cu: goto label_25618c;
        case 0x256190u: goto label_256190;
        case 0x256194u: goto label_256194;
        case 0x256198u: goto label_256198;
        case 0x25619cu: goto label_25619c;
        case 0x2561a0u: goto label_2561a0;
        case 0x2561a4u: goto label_2561a4;
        case 0x2561a8u: goto label_2561a8;
        case 0x2561acu: goto label_2561ac;
        case 0x2561b0u: goto label_2561b0;
        case 0x2561b4u: goto label_2561b4;
        case 0x2561b8u: goto label_2561b8;
        case 0x2561bcu: goto label_2561bc;
        case 0x2561c0u: goto label_2561c0;
        case 0x2561c4u: goto label_2561c4;
        case 0x2561c8u: goto label_2561c8;
        case 0x2561ccu: goto label_2561cc;
        case 0x2561d0u: goto label_2561d0;
        case 0x2561d4u: goto label_2561d4;
        case 0x2561d8u: goto label_2561d8;
        case 0x2561dcu: goto label_2561dc;
        case 0x2561e0u: goto label_2561e0;
        case 0x2561e4u: goto label_2561e4;
        case 0x2561e8u: goto label_2561e8;
        case 0x2561ecu: goto label_2561ec;
        case 0x2561f0u: goto label_2561f0;
        case 0x2561f4u: goto label_2561f4;
        case 0x2561f8u: goto label_2561f8;
        case 0x2561fcu: goto label_2561fc;
        case 0x256200u: goto label_256200;
        case 0x256204u: goto label_256204;
        case 0x256208u: goto label_256208;
        case 0x25620cu: goto label_25620c;
        case 0x256210u: goto label_256210;
        case 0x256214u: goto label_256214;
        case 0x256218u: goto label_256218;
        case 0x25621cu: goto label_25621c;
        case 0x256220u: goto label_256220;
        case 0x256224u: goto label_256224;
        case 0x256228u: goto label_256228;
        case 0x25622cu: goto label_25622c;
        case 0x256230u: goto label_256230;
        case 0x256234u: goto label_256234;
        case 0x256238u: goto label_256238;
        case 0x25623cu: goto label_25623c;
        case 0x256240u: goto label_256240;
        case 0x256244u: goto label_256244;
        case 0x256248u: goto label_256248;
        case 0x25624cu: goto label_25624c;
        case 0x256250u: goto label_256250;
        case 0x256254u: goto label_256254;
        case 0x256258u: goto label_256258;
        case 0x25625cu: goto label_25625c;
        case 0x256260u: goto label_256260;
        case 0x256264u: goto label_256264;
        case 0x256268u: goto label_256268;
        case 0x25626cu: goto label_25626c;
        case 0x256270u: goto label_256270;
        case 0x256274u: goto label_256274;
        case 0x256278u: goto label_256278;
        case 0x25627cu: goto label_25627c;
        case 0x256280u: goto label_256280;
        case 0x256284u: goto label_256284;
        case 0x256288u: goto label_256288;
        case 0x25628cu: goto label_25628c;
        case 0x256290u: goto label_256290;
        case 0x256294u: goto label_256294;
        case 0x256298u: goto label_256298;
        case 0x25629cu: goto label_25629c;
        case 0x2562a0u: goto label_2562a0;
        case 0x2562a4u: goto label_2562a4;
        case 0x2562a8u: goto label_2562a8;
        case 0x2562acu: goto label_2562ac;
        case 0x2562b0u: goto label_2562b0;
        case 0x2562b4u: goto label_2562b4;
        case 0x2562b8u: goto label_2562b8;
        case 0x2562bcu: goto label_2562bc;
        case 0x2562c0u: goto label_2562c0;
        case 0x2562c4u: goto label_2562c4;
        case 0x2562c8u: goto label_2562c8;
        case 0x2562ccu: goto label_2562cc;
        case 0x2562d0u: goto label_2562d0;
        case 0x2562d4u: goto label_2562d4;
        case 0x2562d8u: goto label_2562d8;
        case 0x2562dcu: goto label_2562dc;
        case 0x2562e0u: goto label_2562e0;
        case 0x2562e4u: goto label_2562e4;
        case 0x2562e8u: goto label_2562e8;
        case 0x2562ecu: goto label_2562ec;
        case 0x2562f0u: goto label_2562f0;
        case 0x2562f4u: goto label_2562f4;
        case 0x2562f8u: goto label_2562f8;
        case 0x2562fcu: goto label_2562fc;
        case 0x256300u: goto label_256300;
        case 0x256304u: goto label_256304;
        case 0x256308u: goto label_256308;
        case 0x25630cu: goto label_25630c;
        case 0x256310u: goto label_256310;
        case 0x256314u: goto label_256314;
        case 0x256318u: goto label_256318;
        case 0x25631cu: goto label_25631c;
        case 0x256320u: goto label_256320;
        case 0x256324u: goto label_256324;
        case 0x256328u: goto label_256328;
        case 0x25632cu: goto label_25632c;
        case 0x256330u: goto label_256330;
        case 0x256334u: goto label_256334;
        case 0x256338u: goto label_256338;
        case 0x25633cu: goto label_25633c;
        case 0x256340u: goto label_256340;
        case 0x256344u: goto label_256344;
        case 0x256348u: goto label_256348;
        case 0x25634cu: goto label_25634c;
        case 0x256350u: goto label_256350;
        case 0x256354u: goto label_256354;
        case 0x256358u: goto label_256358;
        case 0x25635cu: goto label_25635c;
        case 0x256360u: goto label_256360;
        case 0x256364u: goto label_256364;
        case 0x256368u: goto label_256368;
        case 0x25636cu: goto label_25636c;
        case 0x256370u: goto label_256370;
        case 0x256374u: goto label_256374;
        case 0x256378u: goto label_256378;
        case 0x25637cu: goto label_25637c;
        case 0x256380u: goto label_256380;
        case 0x256384u: goto label_256384;
        case 0x256388u: goto label_256388;
        case 0x25638cu: goto label_25638c;
        case 0x256390u: goto label_256390;
        case 0x256394u: goto label_256394;
        case 0x256398u: goto label_256398;
        case 0x25639cu: goto label_25639c;
        case 0x2563a0u: goto label_2563a0;
        case 0x2563a4u: goto label_2563a4;
        case 0x2563a8u: goto label_2563a8;
        case 0x2563acu: goto label_2563ac;
        case 0x2563b0u: goto label_2563b0;
        case 0x2563b4u: goto label_2563b4;
        case 0x2563b8u: goto label_2563b8;
        case 0x2563bcu: goto label_2563bc;
        case 0x2563c0u: goto label_2563c0;
        case 0x2563c4u: goto label_2563c4;
        case 0x2563c8u: goto label_2563c8;
        case 0x2563ccu: goto label_2563cc;
        case 0x2563d0u: goto label_2563d0;
        case 0x2563d4u: goto label_2563d4;
        case 0x2563d8u: goto label_2563d8;
        case 0x2563dcu: goto label_2563dc;
        case 0x2563e0u: goto label_2563e0;
        case 0x2563e4u: goto label_2563e4;
        case 0x2563e8u: goto label_2563e8;
        case 0x2563ecu: goto label_2563ec;
        case 0x2563f0u: goto label_2563f0;
        case 0x2563f4u: goto label_2563f4;
        case 0x2563f8u: goto label_2563f8;
        case 0x2563fcu: goto label_2563fc;
        case 0x256400u: goto label_256400;
        case 0x256404u: goto label_256404;
        case 0x256408u: goto label_256408;
        case 0x25640cu: goto label_25640c;
        case 0x256410u: goto label_256410;
        case 0x256414u: goto label_256414;
        case 0x256418u: goto label_256418;
        case 0x25641cu: goto label_25641c;
        case 0x256420u: goto label_256420;
        case 0x256424u: goto label_256424;
        case 0x256428u: goto label_256428;
        case 0x25642cu: goto label_25642c;
        case 0x256430u: goto label_256430;
        case 0x256434u: goto label_256434;
        case 0x256438u: goto label_256438;
        case 0x25643cu: goto label_25643c;
        case 0x256440u: goto label_256440;
        case 0x256444u: goto label_256444;
        case 0x256448u: goto label_256448;
        case 0x25644cu: goto label_25644c;
        case 0x256450u: goto label_256450;
        case 0x256454u: goto label_256454;
        case 0x256458u: goto label_256458;
        case 0x25645cu: goto label_25645c;
        case 0x256460u: goto label_256460;
        case 0x256464u: goto label_256464;
        case 0x256468u: goto label_256468;
        case 0x25646cu: goto label_25646c;
        case 0x256470u: goto label_256470;
        case 0x256474u: goto label_256474;
        case 0x256478u: goto label_256478;
        case 0x25647cu: goto label_25647c;
        case 0x256480u: goto label_256480;
        case 0x256484u: goto label_256484;
        case 0x256488u: goto label_256488;
        case 0x25648cu: goto label_25648c;
        case 0x256490u: goto label_256490;
        case 0x256494u: goto label_256494;
        case 0x256498u: goto label_256498;
        case 0x25649cu: goto label_25649c;
        case 0x2564a0u: goto label_2564a0;
        case 0x2564a4u: goto label_2564a4;
        case 0x2564a8u: goto label_2564a8;
        case 0x2564acu: goto label_2564ac;
        case 0x2564b0u: goto label_2564b0;
        case 0x2564b4u: goto label_2564b4;
        case 0x2564b8u: goto label_2564b8;
        case 0x2564bcu: goto label_2564bc;
        case 0x2564c0u: goto label_2564c0;
        case 0x2564c4u: goto label_2564c4;
        case 0x2564c8u: goto label_2564c8;
        case 0x2564ccu: goto label_2564cc;
        case 0x2564d0u: goto label_2564d0;
        case 0x2564d4u: goto label_2564d4;
        case 0x2564d8u: goto label_2564d8;
        case 0x2564dcu: goto label_2564dc;
        case 0x2564e0u: goto label_2564e0;
        case 0x2564e4u: goto label_2564e4;
        case 0x2564e8u: goto label_2564e8;
        case 0x2564ecu: goto label_2564ec;
        case 0x2564f0u: goto label_2564f0;
        case 0x2564f4u: goto label_2564f4;
        case 0x2564f8u: goto label_2564f8;
        case 0x2564fcu: goto label_2564fc;
        case 0x256500u: goto label_256500;
        case 0x256504u: goto label_256504;
        case 0x256508u: goto label_256508;
        case 0x25650cu: goto label_25650c;
        case 0x256510u: goto label_256510;
        case 0x256514u: goto label_256514;
        case 0x256518u: goto label_256518;
        case 0x25651cu: goto label_25651c;
        case 0x256520u: goto label_256520;
        case 0x256524u: goto label_256524;
        case 0x256528u: goto label_256528;
        case 0x25652cu: goto label_25652c;
        case 0x256530u: goto label_256530;
        case 0x256534u: goto label_256534;
        case 0x256538u: goto label_256538;
        case 0x25653cu: goto label_25653c;
        case 0x256540u: goto label_256540;
        case 0x256544u: goto label_256544;
        case 0x256548u: goto label_256548;
        case 0x25654cu: goto label_25654c;
        case 0x256550u: goto label_256550;
        case 0x256554u: goto label_256554;
        case 0x256558u: goto label_256558;
        case 0x25655cu: goto label_25655c;
        case 0x256560u: goto label_256560;
        case 0x256564u: goto label_256564;
        case 0x256568u: goto label_256568;
        case 0x25656cu: goto label_25656c;
        case 0x256570u: goto label_256570;
        case 0x256574u: goto label_256574;
        case 0x256578u: goto label_256578;
        case 0x25657cu: goto label_25657c;
        case 0x256580u: goto label_256580;
        case 0x256584u: goto label_256584;
        case 0x256588u: goto label_256588;
        case 0x25658cu: goto label_25658c;
        case 0x256590u: goto label_256590;
        case 0x256594u: goto label_256594;
        case 0x256598u: goto label_256598;
        case 0x25659cu: goto label_25659c;
        case 0x2565a0u: goto label_2565a0;
        case 0x2565a4u: goto label_2565a4;
        case 0x2565a8u: goto label_2565a8;
        case 0x2565acu: goto label_2565ac;
        case 0x2565b0u: goto label_2565b0;
        case 0x2565b4u: goto label_2565b4;
        case 0x2565b8u: goto label_2565b8;
        case 0x2565bcu: goto label_2565bc;
        case 0x2565c0u: goto label_2565c0;
        case 0x2565c4u: goto label_2565c4;
        case 0x2565c8u: goto label_2565c8;
        case 0x2565ccu: goto label_2565cc;
        case 0x2565d0u: goto label_2565d0;
        case 0x2565d4u: goto label_2565d4;
        case 0x2565d8u: goto label_2565d8;
        case 0x2565dcu: goto label_2565dc;
        case 0x2565e0u: goto label_2565e0;
        case 0x2565e4u: goto label_2565e4;
        case 0x2565e8u: goto label_2565e8;
        case 0x2565ecu: goto label_2565ec;
        case 0x2565f0u: goto label_2565f0;
        case 0x2565f4u: goto label_2565f4;
        case 0x2565f8u: goto label_2565f8;
        case 0x2565fcu: goto label_2565fc;
        case 0x256600u: goto label_256600;
        case 0x256604u: goto label_256604;
        case 0x256608u: goto label_256608;
        case 0x25660cu: goto label_25660c;
        case 0x256610u: goto label_256610;
        case 0x256614u: goto label_256614;
        case 0x256618u: goto label_256618;
        case 0x25661cu: goto label_25661c;
        case 0x256620u: goto label_256620;
        case 0x256624u: goto label_256624;
        case 0x256628u: goto label_256628;
        case 0x25662cu: goto label_25662c;
        case 0x256630u: goto label_256630;
        case 0x256634u: goto label_256634;
        case 0x256638u: goto label_256638;
        case 0x25663cu: goto label_25663c;
        case 0x256640u: goto label_256640;
        case 0x256644u: goto label_256644;
        default: return;
    }

label_255e78:
    // 0x255e78: 0xbf19999a  cache       0x19, -0x6666($t8)
    ctx->pc = 0x255e78u;
    // CACHE instruction (ignored)
label_255e7c:
    // 0x255e7c: 0x0  nop
    ctx->pc = 0x255e7cu;
    // NOP
label_255e80:
    // 0x255e80: 0x3f000000  .word       0x3F000000                   # lui         $zero, 0x0 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255e80u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255e84:
    // 0x255e84: 0xc154cccd  ll          $s4, -0x3333($t2)
    ctx->pc = 0x255e84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 4294954189); SET_GPR_S32(ctx, 20, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255e88:
    // 0x255e88: 0x3e99999a  .word       0x3E99999A                   # lui         $t9, 0x999A # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255e88u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_255e8c:
    // 0x255e8c: 0x0  nop
    ctx->pc = 0x255e8cu;
    // NOP
label_255e90:
    // 0x255e90: 0xbf666666  cache       0x06, 0x6666($k1)
    ctx->pc = 0x255e90u;
    // CACHE instruction (ignored)
label_255e94:
    // 0x255e94: 0xc1000000  ll          $zero, 0x0($t0)
    ctx->pc = 0x255e94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255e98:
    // 0x255e98: 0xbf000000  cache       0x00, 0x0($t8)
    ctx->pc = 0x255e98u;
    // CACHE instruction (ignored)
label_255e9c:
    // 0x255e9c: 0x0  nop
    ctx->pc = 0x255e9cu;
    // NOP
label_255ea0:
    // 0x255ea0: 0x3f19999a  .word       0x3F19999A                   # lui         $t9, 0x999A # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255ea0u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_255ea4:
    // 0x255ea4: 0xc1926666  ll          $s2, 0x6666($t4)
    ctx->pc = 0x255ea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 26214); SET_GPR_S32(ctx, 18, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255ea8:
    // 0x255ea8: 0x40333333  .word       0x40333333                   # dmfc0       $s3, Wired # 00000333 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255ea8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x255EA8 raw=0x40333333"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255eac:
    // 0x255eac: 0x0  nop
    ctx->pc = 0x255eacu;
    // NOP
label_255eb0:
    // 0x255eb0: 0xbf19999a  cache       0x19, -0x6666($t8)
    ctx->pc = 0x255eb0u;
    // CACHE instruction (ignored)
label_255eb4:
    // 0x255eb4: 0xc1000000  ll          $zero, 0x0($t0)
    ctx->pc = 0x255eb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255eb8:
    // 0x255eb8: 0xbff33333  cache       0x13, 0x3333($ra)
    ctx->pc = 0x255eb8u;
    // CACHE instruction (ignored)
label_255ebc:
    // 0x255ebc: 0x0  nop
    ctx->pc = 0x255ebcu;
    // NOP
label_255ec0:
    // 0x255ec0: 0xbf000000  cache       0x00, 0x0($t8)
    ctx->pc = 0x255ec0u;
    // CACHE instruction (ignored)
label_255ec4:
    // 0x255ec4: 0xbdcccccd  cache       0x0C, -0x3333($t6)
    ctx->pc = 0x255ec4u;
    // CACHE instruction (ignored)
label_255ec8:
    // 0x255ec8: 0xc0f66666  ll          $s6, 0x6666($a3)
    ctx->pc = 0x255ec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 26214); SET_GPR_S32(ctx, 22, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255ecc:
    // 0x255ecc: 0x0  nop
    ctx->pc = 0x255eccu;
    // NOP
label_255ed0:
    // 0x255ed0: 0x3f19999a  .word       0x3F19999A                   # lui         $t9, 0x999A # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255ed0u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_255ed4:
    // 0x255ed4: 0xc1880000  ll          $t0, 0x0($t4)
    ctx->pc = 0x255ed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255ed8:
    // 0x255ed8: 0xbf19999a  cache       0x19, -0x6666($t8)
    ctx->pc = 0x255ed8u;
    // CACHE instruction (ignored)
label_255edc:
    // 0x255edc: 0x0  nop
    ctx->pc = 0x255edcu;
    // NOP
label_255ee0:
    // 0x255ee0: 0xbcbcbaea  cache       0x1C, -0x4516($a1)
    ctx->pc = 0x255ee0u;
    // CACHE instruction (ignored)
label_255ee4:
    // 0x255ee4: 0xbd00adfc  cache       0x00, -0x5204($t0)
    ctx->pc = 0x255ee4u;
    // CACHE instruction (ignored)
label_255ee8:
    // 0x255ee8: 0x0  nop
    ctx->pc = 0x255ee8u;
    // NOP
label_255eec:
    // 0x255eec: 0x0  nop
    ctx->pc = 0x255eecu;
    // NOP
label_255ef0:
    // 0x255ef0: 0xbc4de32e  cache       0x0D, -0x1CD2($v0)
    ctx->pc = 0x255ef0u;
    // CACHE instruction (ignored)
label_255ef4:
    // 0x255ef4: 0x3bab92a6  xori        $t3, $sp, 0x92A6
    ctx->pc = 0x255ef4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 29) ^ (uint64_t)(uint16_t)37542);
label_255ef8:
    // 0x255ef8: 0x3cab92a6  .word       0x3CAB92A6                   # lui         $t3, 0x92A6 # 00A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255ef8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)37542 << 16));
label_255efc:
    // 0x255efc: 0x0  nop
    ctx->pc = 0x255efcu;
    // NOP
label_255f00:
    // 0x255f00: 0x3b09421f  xori        $t1, $t8, 0x421F
    ctx->pc = 0x255f00u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 24) ^ (uint64_t)(uint16_t)16927);
label_255f04:
    // 0x255f04: 0x3acde32e  xori        $t5, $s6, 0xE32E
    ctx->pc = 0x255f04u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 22) ^ (uint64_t)(uint16_t)58158);
label_255f08:
    // 0x255f08: 0x3c1a6a62  lui         $k0, 0x6A62
    ctx->pc = 0x255f08u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)27234 << 16));
label_255f0c:
    // 0x255f0c: 0x0  nop
    ctx->pc = 0x255f0cu;
    // NOP
label_255f10:
    // 0x255f10: 0x3cc54f0b  .word       0x3CC54F0B                   # lui         $a1, 0x4F0B # 00C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255f10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20235 << 16));
label_255f14:
    // 0x255f14: 0xbcab92a6  cache       0x0B, -0x6D5A($a1)
    ctx->pc = 0x255f14u;
    // CACHE instruction (ignored)
label_255f18:
    // 0x255f18: 0x3c2b92a6  .word       0x3C2B92A6                   # lui         $t3, 0x92A6 # 00200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255f18u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)37542 << 16));
label_255f1c:
    // 0x255f1c: 0x0  nop
    ctx->pc = 0x255f1cu;
    // NOP
label_255f20:
    // 0x255f20: 0xbc09421f  cache       0x09, 0x421F($zero)
    ctx->pc = 0x255f20u;
    // CACHE instruction (ignored)
label_255f24:
    // 0x255f24: 0xbbf033b5  swr         $s0, 0x33B5($ra)
    ctx->pc = 0x255f24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 31), 13237); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_255f28:
    // 0x255f28: 0x3bab92a6  xori        $t3, $sp, 0x92A6
    ctx->pc = 0x255f28u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 29) ^ (uint64_t)(uint16_t)37542);
label_255f2c:
    // 0x255f2c: 0x0  nop
    ctx->pc = 0x255f2cu;
    // NOP
label_255f30:
    // 0x255f30: 0xbc2b92a6  cache       0x0B, -0x6D5A($at)
    ctx->pc = 0x255f30u;
    // CACHE instruction (ignored)
label_255f34:
    // 0x255f34: 0x3ce79f94  .word       0x3CE79F94                   # lui         $a3, 0x9F94 # 00E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255f34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40852 << 16));
label_255f38:
    // 0x255f38: 0xbb4de32e  swr         $t5, -0x1CD2($k0)
    ctx->pc = 0x255f38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 4294959918); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 13); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_255f3c:
    // 0x255f3c: 0x0  nop
    ctx->pc = 0x255f3cu;
    // NOP
label_255f40:
    // 0x255f40: 0xbcbcbaea  cache       0x1C, -0x4516($a1)
    ctx->pc = 0x255f40u;
    // CACHE instruction (ignored)
label_255f44:
    // 0x255f44: 0xbd00adfc  cache       0x00, -0x5204($t0)
    ctx->pc = 0x255f44u;
    // CACHE instruction (ignored)
label_255f48:
    // 0x255f48: 0x0  nop
    ctx->pc = 0x255f48u;
    // NOP
label_255f4c:
    // 0x255f4c: 0x0  nop
    ctx->pc = 0x255f4cu;
    // NOP
label_255f50:
    // 0x255f50: 0xbc4de32e  cache       0x0D, -0x1CD2($v0)
    ctx->pc = 0x255f50u;
    // CACHE instruction (ignored)
label_255f54:
    // 0x255f54: 0x3bab92a6  xori        $t3, $sp, 0x92A6
    ctx->pc = 0x255f54u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 29) ^ (uint64_t)(uint16_t)37542);
label_255f58:
    // 0x255f58: 0x3cab92a6  .word       0x3CAB92A6                   # lui         $t3, 0x92A6 # 00A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255f58u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)37542 << 16));
label_255f5c:
    // 0x255f5c: 0x0  nop
    ctx->pc = 0x255f5cu;
    // NOP
label_255f60:
    // 0x255f60: 0x3b09421f  xori        $t1, $t8, 0x421F
    ctx->pc = 0x255f60u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 24) ^ (uint64_t)(uint16_t)16927);
label_255f64:
    // 0x255f64: 0x3acde32e  xori        $t5, $s6, 0xE32E
    ctx->pc = 0x255f64u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 22) ^ (uint64_t)(uint16_t)58158);
label_255f68:
    // 0x255f68: 0x3c1a6a62  lui         $k0, 0x6A62
    ctx->pc = 0x255f68u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)27234 << 16));
label_255f6c:
    // 0x255f6c: 0x0  nop
    ctx->pc = 0x255f6cu;
    // NOP
label_255f70:
    // 0x255f70: 0x3cc54f0b  .word       0x3CC54F0B                   # lui         $a1, 0x4F0B # 00C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255f70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20235 << 16));
label_255f74:
    // 0x255f74: 0xbcab92a6  cache       0x0B, -0x6D5A($a1)
    ctx->pc = 0x255f74u;
    // CACHE instruction (ignored)
label_255f78:
    // 0x255f78: 0x3c2b92a6  .word       0x3C2B92A6                   # lui         $t3, 0x92A6 # 00200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255f78u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)37542 << 16));
label_255f7c:
    // 0x255f7c: 0x0  nop
    ctx->pc = 0x255f7cu;
    // NOP
label_255f80:
    // 0x255f80: 0xbc09421f  cache       0x09, 0x421F($zero)
    ctx->pc = 0x255f80u;
    // CACHE instruction (ignored)
label_255f84:
    // 0x255f84: 0xbbf033b5  swr         $s0, 0x33B5($ra)
    ctx->pc = 0x255f84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 31), 13237); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_255f88:
    // 0x255f88: 0x3bab92a6  xori        $t3, $sp, 0x92A6
    ctx->pc = 0x255f88u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 29) ^ (uint64_t)(uint16_t)37542);
label_255f8c:
    // 0x255f8c: 0x0  nop
    ctx->pc = 0x255f8cu;
    // NOP
label_255f90:
    // 0x255f90: 0xbc2b92a6  cache       0x0B, -0x6D5A($at)
    ctx->pc = 0x255f90u;
    // CACHE instruction (ignored)
label_255f94:
    // 0x255f94: 0x3ce79f94  .word       0x3CE79F94                   # lui         $a3, 0x9F94 # 00E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255f94u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40852 << 16));
label_255f98:
    // 0x255f98: 0xbb4de32e  swr         $t5, -0x1CD2($k0)
    ctx->pc = 0x255f98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 4294959918); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 13); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_255f9c:
    // 0x255f9c: 0x0  nop
    ctx->pc = 0x255f9cu;
    // NOP
label_255fa0:
    // 0x255fa0: 0x0  nop
    ctx->pc = 0x255fa0u;
    // NOP
label_255fa4:
    // 0x255fa4: 0x0  nop
    ctx->pc = 0x255fa4u;
    // NOP
label_255fa8:
    // 0x255fa8: 0x0  nop
    ctx->pc = 0x255fa8u;
    // NOP
label_255fac:
    // 0x255fac: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255facu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255fb0:
    // 0x255fb0: 0x0  nop
    ctx->pc = 0x255fb0u;
    // NOP
label_255fb4:
    // 0x255fb4: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x255fb4u;
    // CACHE instruction (ignored)
label_255fb8:
    // 0x255fb8: 0x0  nop
    ctx->pc = 0x255fb8u;
    // NOP
label_255fbc:
    // 0x255fbc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255fbcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255fc0:
    // 0x255fc0: 0x40933333  .word       0x40933333                   # mtc0        $s3, Wired # 00000333 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255fc0u;
    ctx->cop0_wired = GPR_U32(ctx, 19) & 0x3F; ctx->cop0_random = 47;
label_255fc4:
    // 0x255fc4: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x255fc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255fc8:
    // 0x255fc8: 0x400ccccd  .word       0x400CCCCD                   # mfc0        $t4, Reserved25 # 000004CD <InstrIdType: R5900_COP0>
    ctx->pc = 0x255fc8u;
    SET_GPR_S32(ctx, 12, (int32_t)ctx->cop0_perf);
label_255fcc:
    // 0x255fcc: 0x0  nop
    ctx->pc = 0x255fccu;
    // NOP
label_255fd0:
    // 0x255fd0: 0x40f33333  .word       0x40F33333                   # INVALID     $a3, $s3, 0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255fd0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x7 at 0x255FD0 raw=0x40F33333"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255fd4:
    // 0x255fd4: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x255fd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255fd8:
    // 0x255fd8: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x255fd8u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_255fdc:
    // 0x255fdc: 0x0  nop
    ctx->pc = 0x255fdcu;
    // NOP
label_255fe0:
    // 0x255fe0: 0xc0866666  ll          $a2, 0x6666($a0)
    ctx->pc = 0x255fe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 26214); SET_GPR_S32(ctx, 6, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255fe4:
    // 0x255fe4: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x255fe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255fe8:
    // 0x255fe8: 0xc0333333  ll          $s3, 0x3333($at)
    ctx->pc = 0x255fe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 13107); SET_GPR_S32(ctx, 19, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255fec:
    // 0x255fec: 0x0  nop
    ctx->pc = 0x255fecu;
    // NOP
label_255ff0:
    // 0x255ff0: 0xc0f9999a  ll          $t9, -0x6666($a3)
    ctx->pc = 0x255ff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 4294941082); SET_GPR_S32(ctx, 25, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255ff4:
    // 0x255ff4: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x255ff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255ff8:
    // 0x255ff8: 0x40333333  .word       0x40333333                   # dmfc0       $s3, Wired # 00000333 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255ff8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x255FF8 raw=0x40333333"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255ffc:
    // 0x255ffc: 0x0  nop
    ctx->pc = 0x255ffcu;
    // NOP
label_256000:
    // 0x256000: 0x400ccccd  .word       0x400CCCCD                   # mfc0        $t4, Reserved25 # 000004CD <InstrIdType: R5900_COP0>
    ctx->pc = 0x256000u;
    SET_GPR_S32(ctx, 12, (int32_t)ctx->cop0_perf);
label_256004:
    // 0x256004: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x256004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_256008:
    // 0x256008: 0x40e00000  .word       0x40E00000                   # INVALID     $a3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x256008u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x7 at 0x256008 raw=0x40E00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25600c:
    // 0x25600c: 0x0  nop
    ctx->pc = 0x25600cu;
    // NOP
label_256010:
    // 0x256010: 0x41bc0000  .word       0x41BC0000                   # INVALID     $t5, $gp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x256010u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x256010 raw=0x41BC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_256014:
    // 0x256014: 0x41a4cccd  .word       0x41A4CCCD                   # INVALID     $t5, $a0, -0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x256014u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x256014 raw=0x41A4CCCD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_256018:
    // 0x256018: 0x41333333  .word       0x41333333                   # INVALID     $t1, $s3, 0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x256018u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x256018 raw=0x41333333"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25601c:
    // 0x25601c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x25601cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_256020:
    // 0x256020: 0x421a0000  .word       0x421A0000                   # INVALID     $s0, $k0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x256020u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x256020 raw=0x421A0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_256024:
    // 0x256024: 0x4114cccd  .word       0x4114CCCD                   # INVALID     $t0, $s4, -0x3333 # 00000000 <InstrIdType: CPU_COP0_BC0>
    ctx->pc = 0x256024u;
    // BC0 (Condition: 0x14) - Handled by branch logic
label_256028:
    // 0x256028: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x256028u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x256028 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25602c:
    // 0x25602c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x25602cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_256030:
    // 0x256030: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x256030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_256034:
    // 0x256034: 0x4039999a  .word       0x4039999A                   # dmfc0       $t9, WatchHi # 0000019A <InstrIdType: R5900_COP0>
    ctx->pc = 0x256034u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x256034 raw=0x4039999A"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_256038:
    // 0x256038: 0xc1666666  ll          $a2, 0x6666($t3)
    ctx->pc = 0x256038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26214); SET_GPR_S32(ctx, 6, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_25603c:
    // 0x25603c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x25603cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_256040:
    // 0x256040: 0xc21e0000  ll          $fp, 0x0($s0)
    ctx->pc = 0x256040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); SET_GPR_S32(ctx, 30, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_256044:
    // 0x256044: 0x3fa66666  .word       0x3FA66666                   # lui         $a2, 0x6666 # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x256044u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26214 << 16));
label_256048:
    // 0x256048: 0x4169999a  .word       0x4169999A                   # INVALID     $t3, $t1, -0x6666 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x256048u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x256048 raw=0x4169999A"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25604c:
    // 0x25604c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x25604cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_256050:
    // 0x256050: 0x413ccccd  .word       0x413CCCCD                   # INVALID     $t1, $gp, -0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x256050u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x256050 raw=0x413CCCCD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_256054:
    // 0x256054: 0xc0d00000  ll          $s0, 0x0($a2)
    ctx->pc = 0x256054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_256058:
    // 0x256058: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x256058u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x256058 raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25605c:
    // 0x25605c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x25605cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_256060:
    // 0x256060: 0xbd56774f  cache       0x16, 0x774F($t2)
    ctx->pc = 0x256060u;
    // CACHE instruction (ignored)
label_256064:
    // 0x256064: 0x0  nop
    ctx->pc = 0x256064u;
    // NOP
label_256068:
    // 0x256068: 0x3debe9a4  .word       0x3DEBE9A4                   # lui         $t3, 0xE9A4 # 01E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x256068u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)59812 << 16));
label_25606c:
    // 0x25606c: 0x0  nop
    ctx->pc = 0x25606cu;
    // NOP
label_256070:
    // 0x256070: 0xbdd6774f  cache       0x16, 0x774F($t6)
    ctx->pc = 0x256070u;
    // CACHE instruction (ignored)
label_256074:
    // 0x256074: 0x0  nop
    ctx->pc = 0x256074u;
    // NOP
label_256078:
    // 0x256078: 0x3e4bbe24  .word       0x3E4BBE24                   # lui         $t3, 0xBE24 # 02400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x256078u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)48676 << 16));
label_25607c:
    // 0x25607c: 0x0  nop
    ctx->pc = 0x25607cu;
    // NOP
label_256080:
    // 0x256080: 0x3d962051  .word       0x3D962051                   # lui         $s6, 0x2051 # 01800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x256080u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)8273 << 16));
label_256084:
    // 0x256084: 0x0  nop
    ctx->pc = 0x256084u;
    // NOP
label_256088:
    // 0x256088: 0xbdd6774f  cache       0x16, 0x774F($t6)
    ctx->pc = 0x256088u;
    // CACHE instruction (ignored)
label_25608c:
    // 0x25608c: 0x0  nop
    ctx->pc = 0x25608cu;
    // NOP
label_256090:
    // 0x256090: 0xbd962051  cache       0x16, 0x2051($t4)
    ctx->pc = 0x256090u;
    // CACHE instruction (ignored)
label_256094:
    // 0x256094: 0x0  nop
    ctx->pc = 0x256094u;
    // NOP
label_256098:
    // 0x256098: 0xbe4bbe24  cache       0x0B, -0x41DC($s2)
    ctx->pc = 0x256098u;
    // CACHE instruction (ignored)
label_25609c:
    // 0x25609c: 0x0  nop
    ctx->pc = 0x25609cu;
    // NOP
label_2560a0:
    // 0x2560a0: 0xbe364bd0  cache       0x16, 0x4BD0($s1)
    ctx->pc = 0x2560a0u;
    // CACHE instruction (ignored)
label_2560a4:
    // 0x2560a4: 0x0  nop
    ctx->pc = 0x2560a4u;
    // NOP
label_2560a8:
    // 0x2560a8: 0x3d56774f  .word       0x3D56774F                   # lui         $s6, 0x774F # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2560a8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)30543 << 16));
label_2560ac:
    // 0x2560ac: 0x0  nop
    ctx->pc = 0x2560acu;
    // NOP
label_2560b0:
    // 0x2560b0: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x2560b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2560b4:
    // 0x2560b4: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x2560b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2560b8:
    // 0x2560b8: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x2560b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2560bc:
    // 0x2560bc: 0x0  nop
    ctx->pc = 0x2560bcu;
    // NOP
label_2560c0:
    // 0x2560c0: 0x40a00000  dmtc0       $zero, Index
    ctx->pc = 0x2560c0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x5 at 0x2560C0 raw=0x40A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2560c4:
    // 0x2560c4: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x2560c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2560c8:
    // 0x2560c8: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x2560c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2560cc:
    // 0x2560cc: 0x0  nop
    ctx->pc = 0x2560ccu;
    // NOP
label_2560d0:
    // 0x2560d0: 0x40400000  cfc0        $zero, Index
    ctx->pc = 0x2560d0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x2560D0 raw=0x40400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2560d4:
    // 0x2560d4: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x2560d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2560d8:
    // 0x2560d8: 0x40400000  cfc0        $zero, Index
    ctx->pc = 0x2560d8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x2560D8 raw=0x40400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2560dc:
    // 0x2560dc: 0x0  nop
    ctx->pc = 0x2560dcu;
    // NOP
label_2560e0:
    // 0x2560e0: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x2560e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2560e4:
    // 0x2560e4: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x2560e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2560e8:
    // 0x2560e8: 0x40400000  cfc0        $zero, Index
    ctx->pc = 0x2560e8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x2560E8 raw=0x40400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2560ec:
    // 0x2560ec: 0x0  nop
    ctx->pc = 0x2560ecu;
    // NOP
label_2560f0:
    // 0x2560f0: 0x0  nop
    ctx->pc = 0x2560f0u;
    // NOP
label_2560f4:
    // 0x2560f4: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x2560f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2560f8:
    // 0x2560f8: 0x0  nop
    ctx->pc = 0x2560f8u;
    // NOP
label_2560fc:
    // 0x2560fc: 0x0  nop
    ctx->pc = 0x2560fcu;
    // NOP
label_256100:
    // 0x256100: 0x0  nop
    ctx->pc = 0x256100u;
    // NOP
label_256104:
    // 0x256104: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x256104u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_256108:
    // 0x256108: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x256108u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_25610c:
    // 0x25610c: 0x0  nop
    ctx->pc = 0x25610cu;
    // NOP
label_256110:
    // 0x256110: 0xc2480000  ll          $t0, 0x0($s2)
    ctx->pc = 0x256110u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_256114:
    // 0x256114: 0xc2960000  ll          $s6, 0x0($s4)
    ctx->pc = 0x256114u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); SET_GPR_S32(ctx, 22, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_256118:
    // 0x256118: 0xc1c80000  ll          $t0, 0x0($t6)
    ctx->pc = 0x256118u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_25611c:
    // 0x25611c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x25611cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_256120:
    // 0x256120: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x256120u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x256120 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_256124:
    // 0x256124: 0xc2960000  ll          $s6, 0x0($s4)
    ctx->pc = 0x256124u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); SET_GPR_S32(ctx, 22, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_256128:
    // 0x256128: 0xc1c80000  ll          $t0, 0x0($t6)
    ctx->pc = 0x256128u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_25612c:
    // 0x25612c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x25612cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_256130:
    // 0x256130: 0x41c80000  .word       0x41C80000                   # INVALID     $t6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x256130u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x256130 raw=0x41C80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_256134:
    // 0x256134: 0xc2960000  ll          $s6, 0x0($s4)
    ctx->pc = 0x256134u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); SET_GPR_S32(ctx, 22, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_256138:
    // 0x256138: 0x42960000  .word       0x42960000                   # INVALID     $s4, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x256138u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x256138 raw=0x42960000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25613c:
    // 0x25613c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x25613cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_256140:
    // 0x256140: 0xc1c80000  ll          $t0, 0x0($t6)
    ctx->pc = 0x256140u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_256144:
    // 0x256144: 0xc2960000  ll          $s6, 0x0($s4)
    ctx->pc = 0x256144u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); SET_GPR_S32(ctx, 22, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_256148:
    // 0x256148: 0x42960000  .word       0x42960000                   # INVALID     $s4, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x256148u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x256148 raw=0x42960000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25614c:
    // 0x25614c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x25614cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_256150:
    // 0x256150: 0x0  nop
    ctx->pc = 0x256150u;
    // NOP
label_256154:
    // 0x256154: 0xc2c80000  ll          $t0, 0x0($s6)
    ctx->pc = 0x256154u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_256158:
    // 0x256158: 0x0  nop
    ctx->pc = 0x256158u;
    // NOP
label_25615c:
    // 0x25615c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x25615cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_256160:
    // 0x256160: 0x0  nop
    ctx->pc = 0x256160u;
    // NOP
label_256164:
    // 0x256164: 0xc2fa0000  ll          $k0, 0x0($s7)
    ctx->pc = 0x256164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 26, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_256168:
    // 0x256168: 0xc2c80000  ll          $t0, 0x0($s6)
    ctx->pc = 0x256168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_25616c:
    // 0x25616c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x25616cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_256170:
    // 0x256170: 0x0  nop
    ctx->pc = 0x256170u;
    // NOP
label_256174:
    // 0x256174: 0x0  nop
    ctx->pc = 0x256174u;
    // NOP
label_256178:
    // 0x256178: 0xbd00adfd  cache       0x00, -0x5203($t0)
    ctx->pc = 0x256178u;
    // CACHE instruction (ignored)
label_25617c:
    // 0x25617c: 0x0  nop
    ctx->pc = 0x25617cu;
    // NOP
label_256180:
    // 0x256180: 0x0  nop
    ctx->pc = 0x256180u;
    // NOP
label_256184:
    // 0x256184: 0x0  nop
    ctx->pc = 0x256184u;
    // NOP
label_256188:
    // 0x256188: 0x3d00adfd  .word       0x3D00ADFD                   # lui         $zero, 0xADFD # 01000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x256188u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)44541 << 16));
label_25618c:
    // 0x25618c: 0x0  nop
    ctx->pc = 0x25618cu;
    // NOP
label_256190:
    // 0x256190: 0x0  nop
    ctx->pc = 0x256190u;
    // NOP
label_256194:
    // 0x256194: 0x0  nop
    ctx->pc = 0x256194u;
    // NOP
label_256198:
    // 0x256198: 0x3d00adfd  .word       0x3D00ADFD                   # lui         $zero, 0xADFD # 01000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x256198u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)44541 << 16));
label_25619c:
    // 0x25619c: 0x0  nop
    ctx->pc = 0x25619cu;
    // NOP
label_2561a0:
    // 0x2561a0: 0x0  nop
    ctx->pc = 0x2561a0u;
    // NOP
label_2561a4:
    // 0x2561a4: 0x0  nop
    ctx->pc = 0x2561a4u;
    // NOP
label_2561a8:
    // 0x2561a8: 0xbd00adfd  cache       0x00, -0x5203($t0)
    ctx->pc = 0x2561a8u;
    // CACHE instruction (ignored)
label_2561ac:
    // 0x2561ac: 0x0  nop
    ctx->pc = 0x2561acu;
    // NOP
label_2561b0:
    // 0x2561b0: 0x0  nop
    ctx->pc = 0x2561b0u;
    // NOP
label_2561b4:
    // 0x2561b4: 0x0  nop
    ctx->pc = 0x2561b4u;
    // NOP
label_2561b8:
    // 0x2561b8: 0x0  nop
    ctx->pc = 0x2561b8u;
    // NOP
label_2561bc:
    // 0x2561bc: 0x0  nop
    ctx->pc = 0x2561bcu;
    // NOP
label_2561c0:
    // 0x2561c0: 0x3dd6774f  .word       0x3DD6774F                   # lui         $s6, 0x774F # 01C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2561c0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)30543 << 16));
label_2561c4:
    // 0x2561c4: 0x0  nop
    ctx->pc = 0x2561c4u;
    // NOP
label_2561c8:
    // 0x2561c8: 0x0  nop
    ctx->pc = 0x2561c8u;
    // NOP
label_2561cc:
    // 0x2561cc: 0x0  nop
    ctx->pc = 0x2561ccu;
    // NOP
label_2561d0:
    // 0x2561d0: 0x2558e0  .word       0x002558E0                   # add         $t3, $at, $a1 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2561d0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2561d4:
    // 0x2561d4: 0x255be0  .word       0x00255BE0                   # add         $t3, $at, $a1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2561d4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2561d8:
    // 0x2561d8: 0x2557f0  tge         $at, $a1, 351
    ctx->pc = 0x2561d8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 5)) { runtime->handleTrap(rdram, ctx); }
label_2561dc:
    // 0x2561dc: 0x255e20  .word       0x00255E20                   # add         $t3, $at, $a1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2561dcu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2561e0:
    // 0x2561e0: 0x2560b0  tge         $at, $a1, 386
    ctx->pc = 0x2561e0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 5)) { runtime->handleTrap(rdram, ctx); }
label_2561e4:
    // 0x2561e4: 0x255fc0  .word       0x00255FC0                   # sll         $t3, $a1, 31 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2561e4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 5), 31));
label_2561e8:
    // 0x2561e8: 0x2558e0  .word       0x002558E0                   # add         $t3, $at, $a1 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2561e8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2561ec:
    // 0x2561ec: 0x0  nop
    ctx->pc = 0x2561ecu;
    // NOP
label_2561f0:
    // 0x2561f0: 0x255ae0  .word       0x00255AE0                   # add         $t3, $at, $a1 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2561f0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2561f4:
    // 0x2561f4: 0x255c60  .word       0x00255C60                   # add         $t3, $at, $a1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2561f4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2561f8:
    // 0x2561f8: 0x255840  .word       0x00255840                   # sll         $t3, $a1, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2561f8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_2561fc:
    // 0x2561fc: 0x255d60  .word       0x00255D60                   # add         $t3, $at, $a1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2561fcu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_256200:
    // 0x256200: 0x256110  .word       0x00256110                   # mfhi        $t4 # 00250100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256200u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_256204:
    // 0x256204: 0x256010  .word       0x00256010                   # mfhi        $t4 # 00250000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256204u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_256208:
    // 0x256208: 0x255ae0  .word       0x00255AE0                   # add         $t3, $at, $a1 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256208u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_25620c:
    // 0x25620c: 0x0  nop
    ctx->pc = 0x25620cu;
    // NOP
label_256210:
    // 0x256210: 0x2559e0  .word       0x002559E0                   # add         $t3, $at, $a1 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256210u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_256214:
    // 0x256214: 0x255ce0  .word       0x00255CE0                   # add         $t3, $at, $a1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256214u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_256218:
    // 0x256218: 0x255890  .word       0x00255890                   # mfhi        $t3 # 00250080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256218u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_25621c:
    // 0x25621c: 0x255ee0  .word       0x00255EE0                   # add         $t3, $at, $a1 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25621cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_256220:
    // 0x256220: 0x256170  tge         $at, $a1, 389
    ctx->pc = 0x256220u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 5)) { runtime->handleTrap(rdram, ctx); }
label_256224:
    // 0x256224: 0x256060  .word       0x00256060                   # add         $t4, $at, $a1 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256224u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_256228:
    // 0x256228: 0x2559e0  .word       0x002559E0                   # add         $t3, $at, $a1 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256228u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_25622c:
    // 0x25622c: 0x0  nop
    ctx->pc = 0x25622cu;
    // NOP
label_256230:
    // 0x256230: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x256230u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_256234:
    // 0x256234: 0x19  multu       $zero, $zero
    ctx->pc = 0x256234u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_256238:
    // 0x256238: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x256238u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25623c:
    // 0x25623c: 0x37  .word       0x00000037                   # INVALID     $zero, $zero, 0x37 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25623cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x25623C raw=0x00000037"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_256240:
    // 0x256240: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x256240u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_256244:
    // 0x256244: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x256244u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_256248:
    // 0x256248: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x256248u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_25624c:
    // 0x25624c: 0x0  nop
    ctx->pc = 0x25624cu;
    // NOP
label_256250:
    // 0x256250: 0x1677e0  .word       0x001677E0                   # add         $t6, $zero, $s6 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256250u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_256254:
    // 0x256254: 0x1677b0  tge         $zero, $s6, 478
    ctx->pc = 0x256254u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_256258:
    // 0x256258: 0x167110  .word       0x00167110                   # mfhi        $t6 # 00160100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256258u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_25625c:
    // 0x25625c: 0x166080  sll         $t4, $s6, 2
    ctx->pc = 0x25625cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_256260:
    // 0x256260: 0x167100  sll         $t6, $s6, 4
    ctx->pc = 0x256260u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
label_256264:
    // 0x256264: 0x167100  sll         $t6, $s6, 4
    ctx->pc = 0x256264u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
label_256268:
    // 0x256268: 0x1675b0  tge         $zero, $s6, 470
    ctx->pc = 0x256268u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_25626c:
    // 0x25626c: 0x166b10  .word       0x00166B10                   # mfhi        $t5 # 00160300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25626cu;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_256270:
    // 0x256270: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x256270u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x256270 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_256274:
    // 0x256274: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x256274u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x256274 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_256278:
    // 0x256278: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x256278u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x256278 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25627c:
    // 0x25627c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x25627cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_256280:
    // 0x256280: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x256280u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x256280 raw=0x42C80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_256284:
    // 0x256284: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x256284u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x256284 raw=0x42C80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_256288:
    // 0x256288: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x256288u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x256288 raw=0x42C80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25628c:
    // 0x25628c: 0x0  nop
    ctx->pc = 0x25628cu;
    // NOP
label_256290:
    // 0x256290: 0x2c8980  .word       0x002C8980                   # sll         $s1, $t4, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256290u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 6));
label_256294:
    // 0x256294: 0x0  nop
    ctx->pc = 0x256294u;
    // NOP
label_256298:
    // 0x256298: 0x2c89a0  .word       0x002C89A0                   # add         $s1, $at, $t4 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256298u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_25629c:
    // 0x25629c: 0x0  nop
    ctx->pc = 0x25629cu;
    // NOP
label_2562a0:
    // 0x2562a0: 0x2c89c0  .word       0x002C89C0                   # sll         $s1, $t4, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2562a0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 7));
label_2562a4:
    // 0x2562a4: 0x0  nop
    ctx->pc = 0x2562a4u;
    // NOP
label_2562a8:
    // 0x2562a8: 0x2c89e0  .word       0x002C89E0                   # add         $s1, $at, $t4 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2562a8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2562ac:
    // 0x2562ac: 0x0  nop
    ctx->pc = 0x2562acu;
    // NOP
label_2562b0:
    // 0x2562b0: 0x2c8a00  .word       0x002C8A00                   # sll         $s1, $t4, 8 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2562b0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 8));
label_2562b4:
    // 0x2562b4: 0x0  nop
    ctx->pc = 0x2562b4u;
    // NOP
label_2562b8:
    // 0x2562b8: 0x2c8a20  .word       0x002C8A20                   # add         $s1, $at, $t4 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2562b8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2562bc:
    // 0x2562bc: 0x0  nop
    ctx->pc = 0x2562bcu;
    // NOP
label_2562c0:
    // 0x2562c0: 0x2c8a40  .word       0x002C8A40                   # sll         $s1, $t4, 9 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2562c0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 9));
label_2562c4:
    // 0x2562c4: 0x0  nop
    ctx->pc = 0x2562c4u;
    // NOP
label_2562c8:
    // 0x2562c8: 0x2c8a60  .word       0x002C8A60                   # add         $s1, $at, $t4 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2562c8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2562cc:
    // 0x2562cc: 0x0  nop
    ctx->pc = 0x2562ccu;
    // NOP
label_2562d0:
    // 0x2562d0: 0x2c8a80  .word       0x002C8A80                   # sll         $s1, $t4, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2562d0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 10));
label_2562d4:
    // 0x2562d4: 0x0  nop
    ctx->pc = 0x2562d4u;
    // NOP
label_2562d8:
    // 0x2562d8: 0x2c8aa0  .word       0x002C8AA0                   # add         $s1, $at, $t4 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2562d8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2562dc:
    // 0x2562dc: 0x0  nop
    ctx->pc = 0x2562dcu;
    // NOP
label_2562e0:
    // 0x2562e0: 0x2c8ac0  .word       0x002C8AC0                   # sll         $s1, $t4, 11 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2562e0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 11));
label_2562e4:
    // 0x2562e4: 0x0  nop
    ctx->pc = 0x2562e4u;
    // NOP
label_2562e8:
    // 0x2562e8: 0x2c8ae0  .word       0x002C8AE0                   # add         $s1, $at, $t4 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2562e8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2562ec:
    // 0x2562ec: 0x0  nop
    ctx->pc = 0x2562ecu;
    // NOP
label_2562f0:
    // 0x2562f0: 0x2c8b00  .word       0x002C8B00                   # sll         $s1, $t4, 12 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2562f0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 12));
label_2562f4:
    // 0x2562f4: 0x0  nop
    ctx->pc = 0x2562f4u;
    // NOP
label_2562f8:
    // 0x2562f8: 0x2c8b20  .word       0x002C8B20                   # add         $s1, $at, $t4 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2562f8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2562fc:
    // 0x2562fc: 0x0  nop
    ctx->pc = 0x2562fcu;
    // NOP
label_256300:
    // 0x256300: 0x2c8b40  .word       0x002C8B40                   # sll         $s1, $t4, 13 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256300u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 13));
label_256304:
    // 0x256304: 0x0  nop
    ctx->pc = 0x256304u;
    // NOP
label_256308:
    // 0x256308: 0x2c8b60  .word       0x002C8B60                   # add         $s1, $at, $t4 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256308u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_25630c:
    // 0x25630c: 0x0  nop
    ctx->pc = 0x25630cu;
    // NOP
label_256310:
    // 0x256310: 0x2c8b80  .word       0x002C8B80                   # sll         $s1, $t4, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256310u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 14));
label_256314:
    // 0x256314: 0x0  nop
    ctx->pc = 0x256314u;
    // NOP
label_256318:
    // 0x256318: 0x2c8ba0  .word       0x002C8BA0                   # add         $s1, $at, $t4 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256318u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_25631c:
    // 0x25631c: 0x0  nop
    ctx->pc = 0x25631cu;
    // NOP
label_256320:
    // 0x256320: 0x2c8bc0  .word       0x002C8BC0                   # sll         $s1, $t4, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256320u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 15));
label_256324:
    // 0x256324: 0x0  nop
    ctx->pc = 0x256324u;
    // NOP
label_256328:
    // 0x256328: 0x2c8be0  .word       0x002C8BE0                   # add         $s1, $at, $t4 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256328u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_25632c:
    // 0x25632c: 0x0  nop
    ctx->pc = 0x25632cu;
    // NOP
label_256330:
    // 0x256330: 0x2c8c00  .word       0x002C8C00                   # sll         $s1, $t4, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256330u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
label_256334:
    // 0x256334: 0x0  nop
    ctx->pc = 0x256334u;
    // NOP
label_256338:
    // 0x256338: 0x2c8c20  .word       0x002C8C20                   # add         $s1, $at, $t4 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256338u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_25633c:
    // 0x25633c: 0x0  nop
    ctx->pc = 0x25633cu;
    // NOP
label_256340:
    // 0x256340: 0x2c8c40  .word       0x002C8C40                   # sll         $s1, $t4, 17 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256340u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 17));
label_256344:
    // 0x256344: 0x0  nop
    ctx->pc = 0x256344u;
    // NOP
label_256348:
    // 0x256348: 0x2c8c60  .word       0x002C8C60                   # add         $s1, $at, $t4 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256348u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_25634c:
    // 0x25634c: 0x0  nop
    ctx->pc = 0x25634cu;
    // NOP
label_256350:
    // 0x256350: 0x2c8c80  .word       0x002C8C80                   # sll         $s1, $t4, 18 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256350u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 18));
label_256354:
    // 0x256354: 0x0  nop
    ctx->pc = 0x256354u;
    // NOP
label_256358:
    // 0x256358: 0x2c8ca0  .word       0x002C8CA0                   # add         $s1, $at, $t4 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256358u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_25635c:
    // 0x25635c: 0x0  nop
    ctx->pc = 0x25635cu;
    // NOP
label_256360:
    // 0x256360: 0x2c8cc0  .word       0x002C8CC0                   # sll         $s1, $t4, 19 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256360u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 19));
label_256364:
    // 0x256364: 0x0  nop
    ctx->pc = 0x256364u;
    // NOP
label_256368:
    // 0x256368: 0x2c8ce0  .word       0x002C8CE0                   # add         $s1, $at, $t4 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256368u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_25636c:
    // 0x25636c: 0x0  nop
    ctx->pc = 0x25636cu;
    // NOP
label_256370:
    // 0x256370: 0x2c8d00  .word       0x002C8D00                   # sll         $s1, $t4, 20 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256370u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 20));
label_256374:
    // 0x256374: 0x0  nop
    ctx->pc = 0x256374u;
    // NOP
label_256378:
    // 0x256378: 0x2c8d20  .word       0x002C8D20                   # add         $s1, $at, $t4 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256378u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_25637c:
    // 0x25637c: 0x0  nop
    ctx->pc = 0x25637cu;
    // NOP
label_256380:
    // 0x256380: 0x2c8d40  .word       0x002C8D40                   # sll         $s1, $t4, 21 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256380u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 21));
label_256384:
    // 0x256384: 0x0  nop
    ctx->pc = 0x256384u;
    // NOP
label_256388:
    // 0x256388: 0x2c8d60  .word       0x002C8D60                   # add         $s1, $at, $t4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256388u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_25638c:
    // 0x25638c: 0x0  nop
    ctx->pc = 0x25638cu;
    // NOP
label_256390:
    // 0x256390: 0x2c8d80  .word       0x002C8D80                   # sll         $s1, $t4, 22 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256390u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 22));
label_256394:
    // 0x256394: 0x0  nop
    ctx->pc = 0x256394u;
    // NOP
label_256398:
    // 0x256398: 0x2c8da0  .word       0x002C8DA0                   # add         $s1, $at, $t4 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256398u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_25639c:
    // 0x25639c: 0x0  nop
    ctx->pc = 0x25639cu;
    // NOP
label_2563a0:
    // 0x2563a0: 0x2c8dc0  .word       0x002C8DC0                   # sll         $s1, $t4, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2563a0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 23));
label_2563a4:
    // 0x2563a4: 0x0  nop
    ctx->pc = 0x2563a4u;
    // NOP
label_2563a8:
    // 0x2563a8: 0x2c8de0  .word       0x002C8DE0                   # add         $s1, $at, $t4 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2563a8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2563ac:
    // 0x2563ac: 0x0  nop
    ctx->pc = 0x2563acu;
    // NOP
label_2563b0:
    // 0x2563b0: 0x2c8e00  .word       0x002C8E00                   # sll         $s1, $t4, 24 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2563b0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
label_2563b4:
    // 0x2563b4: 0x0  nop
    ctx->pc = 0x2563b4u;
    // NOP
label_2563b8:
    // 0x2563b8: 0x2c8e20  .word       0x002C8E20                   # add         $s1, $at, $t4 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2563b8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2563bc:
    // 0x2563bc: 0x0  nop
    ctx->pc = 0x2563bcu;
    // NOP
label_2563c0:
    // 0x2563c0: 0x2c8e40  .word       0x002C8E40                   # sll         $s1, $t4, 25 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2563c0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 25));
label_2563c4:
    // 0x2563c4: 0x0  nop
    ctx->pc = 0x2563c4u;
    // NOP
label_2563c8:
    // 0x2563c8: 0x2c8e60  .word       0x002C8E60                   # add         $s1, $at, $t4 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2563c8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2563cc:
    // 0x2563cc: 0x0  nop
    ctx->pc = 0x2563ccu;
    // NOP
label_2563d0:
    // 0x2563d0: 0x2c8e80  .word       0x002C8E80                   # sll         $s1, $t4, 26 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2563d0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 26));
label_2563d4:
    // 0x2563d4: 0x0  nop
    ctx->pc = 0x2563d4u;
    // NOP
label_2563d8:
    // 0x2563d8: 0x2c8ea0  .word       0x002C8EA0                   # add         $s1, $at, $t4 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2563d8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2563dc:
    // 0x2563dc: 0x0  nop
    ctx->pc = 0x2563dcu;
    // NOP
label_2563e0:
    // 0x2563e0: 0x2c8ec0  .word       0x002C8EC0                   # sll         $s1, $t4, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2563e0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 27));
label_2563e4:
    // 0x2563e4: 0x0  nop
    ctx->pc = 0x2563e4u;
    // NOP
label_2563e8:
    // 0x2563e8: 0x2c8ee0  .word       0x002C8EE0                   # add         $s1, $at, $t4 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2563e8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2563ec:
    // 0x2563ec: 0x0  nop
    ctx->pc = 0x2563ecu;
    // NOP
label_2563f0:
    // 0x2563f0: 0x2c8f00  .word       0x002C8F00                   # sll         $s1, $t4, 28 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2563f0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 28));
label_2563f4:
    // 0x2563f4: 0x0  nop
    ctx->pc = 0x2563f4u;
    // NOP
label_2563f8:
    // 0x2563f8: 0x2c8f20  .word       0x002C8F20                   # add         $s1, $at, $t4 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2563f8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2563fc:
    // 0x2563fc: 0x0  nop
    ctx->pc = 0x2563fcu;
    // NOP
label_256400:
    // 0x256400: 0x2c8f40  .word       0x002C8F40                   # sll         $s1, $t4, 29 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256400u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 29));
label_256404:
    // 0x256404: 0x0  nop
    ctx->pc = 0x256404u;
    // NOP
label_256408:
    // 0x256408: 0x2c8f60  .word       0x002C8F60                   # add         $s1, $at, $t4 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256408u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_25640c:
    // 0x25640c: 0x0  nop
    ctx->pc = 0x25640cu;
    // NOP
label_256410:
    // 0x256410: 0x2c8f80  .word       0x002C8F80                   # sll         $s1, $t4, 30 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256410u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 30));
label_256414:
    // 0x256414: 0x0  nop
    ctx->pc = 0x256414u;
    // NOP
label_256418:
    // 0x256418: 0x2c8fa0  .word       0x002C8FA0                   # add         $s1, $at, $t4 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256418u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_25641c:
    // 0x25641c: 0x0  nop
    ctx->pc = 0x25641cu;
    // NOP
label_256420:
    // 0x256420: 0x2c8fc0  .word       0x002C8FC0                   # sll         $s1, $t4, 31 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256420u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 31));
label_256424:
    // 0x256424: 0x0  nop
    ctx->pc = 0x256424u;
    // NOP
label_256428:
    // 0x256428: 0x2c8fe0  .word       0x002C8FE0                   # add         $s1, $at, $t4 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256428u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_25642c:
    // 0x25642c: 0x0  nop
    ctx->pc = 0x25642cu;
    // NOP
label_256430:
    // 0x256430: 0x2c8980  .word       0x002C8980                   # sll         $s1, $t4, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256430u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 6));
label_256434:
    // 0x256434: 0x0  nop
    ctx->pc = 0x256434u;
    // NOP
label_256438:
    // 0x256438: 0x2c89a0  .word       0x002C89A0                   # add         $s1, $at, $t4 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256438u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_25643c:
    // 0x25643c: 0x0  nop
    ctx->pc = 0x25643cu;
    // NOP
label_256440:
    // 0x256440: 0x2c89c0  .word       0x002C89C0                   # sll         $s1, $t4, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256440u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 7));
label_256444:
    // 0x256444: 0x0  nop
    ctx->pc = 0x256444u;
    // NOP
label_256448:
    // 0x256448: 0x2c9000  .word       0x002C9000                   # sll         $s2, $t4, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256448u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 12), 0));
label_25644c:
    // 0x25644c: 0x0  nop
    ctx->pc = 0x25644cu;
    // NOP
label_256450:
    // 0x256450: 0x2c9020  add         $s2, $at, $t4
    ctx->pc = 0x256450u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_256454:
    // 0x256454: 0x0  nop
    ctx->pc = 0x256454u;
    // NOP
label_256458:
    // 0x256458: 0x2c9040  .word       0x002C9040                   # sll         $s2, $t4, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256458u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
label_25645c:
    // 0x25645c: 0x0  nop
    ctx->pc = 0x25645cu;
    // NOP
label_256460:
    // 0x256460: 0x2c9060  .word       0x002C9060                   # add         $s2, $at, $t4 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256460u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_256464:
    // 0x256464: 0x0  nop
    ctx->pc = 0x256464u;
    // NOP
label_256468:
    // 0x256468: 0x2c9080  .word       0x002C9080                   # sll         $s2, $t4, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256468u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
label_25646c:
    // 0x25646c: 0x0  nop
    ctx->pc = 0x25646cu;
    // NOP
label_256470:
    // 0x256470: 0x2c90a0  .word       0x002C90A0                   # add         $s2, $at, $t4 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256470u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_256474:
    // 0x256474: 0x0  nop
    ctx->pc = 0x256474u;
    // NOP
label_256478:
    // 0x256478: 0x2c90c0  .word       0x002C90C0                   # sll         $s2, $t4, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256478u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
label_25647c:
    // 0x25647c: 0x0  nop
    ctx->pc = 0x25647cu;
    // NOP
label_256480:
    // 0x256480: 0x2c90e0  .word       0x002C90E0                   # add         $s2, $at, $t4 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256480u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_256484:
    // 0x256484: 0x0  nop
    ctx->pc = 0x256484u;
    // NOP
label_256488:
    // 0x256488: 0x2c9100  .word       0x002C9100                   # sll         $s2, $t4, 4 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256488u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
label_25648c:
    // 0x25648c: 0x0  nop
    ctx->pc = 0x25648cu;
    // NOP
label_256490:
    // 0x256490: 0x2c9120  .word       0x002C9120                   # add         $s2, $at, $t4 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256490u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_256494:
    // 0x256494: 0x0  nop
    ctx->pc = 0x256494u;
    // NOP
label_256498:
    // 0x256498: 0x2c9140  .word       0x002C9140                   # sll         $s2, $t4, 5 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256498u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
label_25649c:
    // 0x25649c: 0x0  nop
    ctx->pc = 0x25649cu;
    // NOP
label_2564a0:
    // 0x2564a0: 0x2c9160  .word       0x002C9160                   # add         $s2, $at, $t4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2564a0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_2564a4:
    // 0x2564a4: 0x0  nop
    ctx->pc = 0x2564a4u;
    // NOP
label_2564a8:
    // 0x2564a8: 0x2c9180  .word       0x002C9180                   # sll         $s2, $t4, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2564a8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 12), 6));
label_2564ac:
    // 0x2564ac: 0x0  nop
    ctx->pc = 0x2564acu;
    // NOP
label_2564b0:
    // 0x2564b0: 0x2c91a0  .word       0x002C91A0                   # add         $s2, $at, $t4 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2564b0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_2564b4:
    // 0x2564b4: 0x0  nop
    ctx->pc = 0x2564b4u;
    // NOP
label_2564b8:
    // 0x2564b8: 0x2c91c0  .word       0x002C91C0                   # sll         $s2, $t4, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2564b8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 12), 7));
label_2564bc:
    // 0x2564bc: 0x0  nop
    ctx->pc = 0x2564bcu;
    // NOP
label_2564c0:
    // 0x2564c0: 0x2c91e0  .word       0x002C91E0                   # add         $s2, $at, $t4 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2564c0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_2564c4:
    // 0x2564c4: 0x0  nop
    ctx->pc = 0x2564c4u;
    // NOP
label_2564c8:
    // 0x2564c8: 0x2c9200  .word       0x002C9200                   # sll         $s2, $t4, 8 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2564c8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 12), 8));
label_2564cc:
    // 0x2564cc: 0x0  nop
    ctx->pc = 0x2564ccu;
    // NOP
label_2564d0:
    // 0x2564d0: 0x2c9220  .word       0x002C9220                   # add         $s2, $at, $t4 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2564d0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_2564d4:
    // 0x2564d4: 0x0  nop
    ctx->pc = 0x2564d4u;
    // NOP
label_2564d8:
    // 0x2564d8: 0x2c8c20  .word       0x002C8C20                   # add         $s1, $at, $t4 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2564d8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2564dc:
    // 0x2564dc: 0x0  nop
    ctx->pc = 0x2564dcu;
    // NOP
label_2564e0:
    // 0x2564e0: 0x2c8c40  .word       0x002C8C40                   # sll         $s1, $t4, 17 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2564e0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 17));
label_2564e4:
    // 0x2564e4: 0x0  nop
    ctx->pc = 0x2564e4u;
    // NOP
label_2564e8:
    // 0x2564e8: 0x2c8c60  .word       0x002C8C60                   # add         $s1, $at, $t4 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2564e8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2564ec:
    // 0x2564ec: 0x0  nop
    ctx->pc = 0x2564ecu;
    // NOP
label_2564f0:
    // 0x2564f0: 0x2c8c80  .word       0x002C8C80                   # sll         $s1, $t4, 18 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2564f0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 18));
label_2564f4:
    // 0x2564f4: 0x0  nop
    ctx->pc = 0x2564f4u;
    // NOP
label_2564f8:
    // 0x2564f8: 0x2c9240  .word       0x002C9240                   # sll         $s2, $t4, 9 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2564f8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 12), 9));
label_2564fc:
    // 0x2564fc: 0x0  nop
    ctx->pc = 0x2564fcu;
    // NOP
label_256500:
    // 0x256500: 0x2c9260  .word       0x002C9260                   # add         $s2, $at, $t4 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256500u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_256504:
    // 0x256504: 0x0  nop
    ctx->pc = 0x256504u;
    // NOP
label_256508:
    // 0x256508: 0x2c9280  .word       0x002C9280                   # sll         $s2, $t4, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256508u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 12), 10));
label_25650c:
    // 0x25650c: 0x0  nop
    ctx->pc = 0x25650cu;
    // NOP
label_256510:
    // 0x256510: 0x2c92a0  .word       0x002C92A0                   # add         $s2, $at, $t4 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256510u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_256514:
    // 0x256514: 0x0  nop
    ctx->pc = 0x256514u;
    // NOP
label_256518:
    // 0x256518: 0x2c92c0  .word       0x002C92C0                   # sll         $s2, $t4, 11 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256518u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 12), 11));
label_25651c:
    // 0x25651c: 0x0  nop
    ctx->pc = 0x25651cu;
    // NOP
label_256520:
    // 0x256520: 0x2c92e0  .word       0x002C92E0                   # add         $s2, $at, $t4 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256520u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_256524:
    // 0x256524: 0x0  nop
    ctx->pc = 0x256524u;
    // NOP
label_256528:
    // 0x256528: 0x2c9300  .word       0x002C9300                   # sll         $s2, $t4, 12 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256528u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 12), 12));
label_25652c:
    // 0x25652c: 0x0  nop
    ctx->pc = 0x25652cu;
    // NOP
label_256530:
    // 0x256530: 0x2c9320  .word       0x002C9320                   # add         $s2, $at, $t4 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256530u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_256534:
    // 0x256534: 0x0  nop
    ctx->pc = 0x256534u;
    // NOP
label_256538:
    // 0x256538: 0x2c9340  .word       0x002C9340                   # sll         $s2, $t4, 13 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256538u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 12), 13));
label_25653c:
    // 0x25653c: 0x0  nop
    ctx->pc = 0x25653cu;
    // NOP
label_256540:
    // 0x256540: 0x2c9360  .word       0x002C9360                   # add         $s2, $at, $t4 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256540u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_256544:
    // 0x256544: 0x0  nop
    ctx->pc = 0x256544u;
    // NOP
label_256548:
    // 0x256548: 0x2c9380  .word       0x002C9380                   # sll         $s2, $t4, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256548u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 12), 14));
label_25654c:
    // 0x25654c: 0x0  nop
    ctx->pc = 0x25654cu;
    // NOP
label_256550:
    // 0x256550: 0x2c93a0  .word       0x002C93A0                   # add         $s2, $at, $t4 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256550u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_256554:
    // 0x256554: 0x0  nop
    ctx->pc = 0x256554u;
    // NOP
label_256558:
    // 0x256558: 0x2c93c0  .word       0x002C93C0                   # sll         $s2, $t4, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256558u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 12), 15));
label_25655c:
    // 0x25655c: 0x0  nop
    ctx->pc = 0x25655cu;
    // NOP
label_256560:
    // 0x256560: 0x2c93e0  .word       0x002C93E0                   # add         $s2, $at, $t4 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256560u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_256564:
    // 0x256564: 0x0  nop
    ctx->pc = 0x256564u;
    // NOP
label_256568:
    // 0x256568: 0x2c9400  .word       0x002C9400                   # sll         $s2, $t4, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256568u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
label_25656c:
    // 0x25656c: 0x0  nop
    ctx->pc = 0x25656cu;
    // NOP
label_256570:
    // 0x256570: 0x2c9420  .word       0x002C9420                   # add         $s2, $at, $t4 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256570u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_256574:
    // 0x256574: 0x0  nop
    ctx->pc = 0x256574u;
    // NOP
label_256578:
    // 0x256578: 0x2c9440  .word       0x002C9440                   # sll         $s2, $t4, 17 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256578u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 12), 17));
label_25657c:
    // 0x25657c: 0x0  nop
    ctx->pc = 0x25657cu;
    // NOP
label_256580:
    // 0x256580: 0x2c9460  .word       0x002C9460                   # add         $s2, $at, $t4 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256580u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_256584:
    // 0x256584: 0x0  nop
    ctx->pc = 0x256584u;
    // NOP
label_256588:
    // 0x256588: 0x2c9480  .word       0x002C9480                   # sll         $s2, $t4, 18 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256588u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 12), 18));
label_25658c:
    // 0x25658c: 0x0  nop
    ctx->pc = 0x25658cu;
    // NOP
label_256590:
    // 0x256590: 0x2c94a0  .word       0x002C94A0                   # add         $s2, $at, $t4 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256590u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_256594:
    // 0x256594: 0x0  nop
    ctx->pc = 0x256594u;
    // NOP
label_256598:
    // 0x256598: 0x2c94c0  .word       0x002C94C0                   # sll         $s2, $t4, 19 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256598u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 12), 19));
label_25659c:
    // 0x25659c: 0x0  nop
    ctx->pc = 0x25659cu;
    // NOP
label_2565a0:
    // 0x2565a0: 0x2c94e0  .word       0x002C94E0                   # add         $s2, $at, $t4 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2565a0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_2565a4:
    // 0x2565a4: 0x0  nop
    ctx->pc = 0x2565a4u;
    // NOP
label_2565a8:
    // 0x2565a8: 0x2c9500  .word       0x002C9500                   # sll         $s2, $t4, 20 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2565a8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 12), 20));
label_2565ac:
    // 0x2565ac: 0x0  nop
    ctx->pc = 0x2565acu;
    // NOP
label_2565b0:
    // 0x2565b0: 0x2c9520  .word       0x002C9520                   # add         $s2, $at, $t4 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2565b0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_2565b4:
    // 0x2565b4: 0x0  nop
    ctx->pc = 0x2565b4u;
    // NOP
label_2565b8:
    // 0x2565b8: 0x2c9540  .word       0x002C9540                   # sll         $s2, $t4, 21 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2565b8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 12), 21));
label_2565bc:
    // 0x2565bc: 0x0  nop
    ctx->pc = 0x2565bcu;
    // NOP
label_2565c0:
    // 0x2565c0: 0x2c9560  .word       0x002C9560                   # add         $s2, $at, $t4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2565c0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_2565c4:
    // 0x2565c4: 0x0  nop
    ctx->pc = 0x2565c4u;
    // NOP
label_2565c8:
    // 0x2565c8: 0x2c8fe0  .word       0x002C8FE0                   # add         $s1, $at, $t4 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2565c8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2565cc:
    // 0x2565cc: 0x0  nop
    ctx->pc = 0x2565ccu;
    // NOP
label_2565d0:
    // 0x2565d0: 0x800e  .word       0x0000800E                   # INVALID     $zero, $zero, -0x7FF2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2565d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2565D0 raw=0x0000800E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2565d4:
    // 0x2565d4: 0x10000000  b           . + 4 + (0x0 << 2)
label_2565d8:
    if (ctx->pc == 0x2565D8u) {
        ctx->pc = 0x2565D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2565D4u;
        // 0x2565d8: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2565D8 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2565DCu;
        goto label_2565dc;
    }
    ctx->pc = 0x2565D4u;
    {
        const bool branch_taken_0x2565d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2565D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2565D4u;
        // 0x2565d8: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2565D8 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x2565d4) {
            ctx->pc = 0x2565D8u;
            goto label_2565d8;
        }
    }
    ctx->pc = 0x2565DCu;
label_2565dc:
    // 0x2565dc: 0x0  nop
    ctx->pc = 0x2565dcu;
    // NOP
label_2565e0:
    // 0x2565e0: 0x0  nop
    ctx->pc = 0x2565e0u;
    // NOP
label_2565e4:
    // 0x2565e4: 0x0  nop
    ctx->pc = 0x2565e4u;
    // NOP
label_2565e8:
    // 0x2565e8: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x2565e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2565ec:
    // 0x2565ec: 0x0  nop
    ctx->pc = 0x2565ecu;
    // NOP
label_2565f0:
    // 0x2565f0: 0x7ff0000  .word       0x07FF0000                   # INVALID     $ra, $ra, 0x0 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2565f0u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x1F at 0x2565F0 raw=0x07FF0000");
 /* MITIGATED */
label_2565f4:
    // 0x2565f4: 0x7ff0000  .word       0x07FF0000                   # INVALID     $ra, $ra, 0x0 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2565f4u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x1F at 0x2565F4 raw=0x07FF0000");
 /* MITIGATED */
label_2565f8:
    // 0x2565f8: 0x40  sll         $zero, $zero, 1
    ctx->pc = 0x2565f8u;
    
label_2565fc:
    // 0x2565fc: 0x0  nop
    ctx->pc = 0x2565fcu;
    // NOP
label_256600:
    // 0x256600: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256600u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x256600 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_256604:
    // 0x256604: 0x0  nop
    ctx->pc = 0x256604u;
    // NOP
label_256608:
    // 0x256608: 0x1a  div         $zero, $zero, $zero
    ctx->pc = 0x256608u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_25660c:
    // 0x25660c: 0x0  nop
    ctx->pc = 0x25660cu;
    // NOP
label_256610:
    // 0x256610: 0x30000  sll         $zero, $v1, 0
    ctx->pc = 0x256610u;
    
label_256614:
    // 0x256614: 0x0  nop
    ctx->pc = 0x256614u;
    // NOP
label_256618:
    // 0x256618: 0x47  .word       0x00000047                   # srav        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256618u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25661c:
    // 0x25661c: 0x0  nop
    ctx->pc = 0x25661cu;
    // NOP
label_256620:
    // 0x256620: 0x0  nop
    ctx->pc = 0x256620u;
    // NOP
label_256624:
    // 0x256624: 0x0  nop
    ctx->pc = 0x256624u;
    // NOP
label_256628:
    // 0x256628: 0x4c  syscall     1
    ctx->pc = 0x256628u;
    ctx->pc = 0x25662Cu;
runtime->handleSyscall(rdram, ctx, 0x1u);
label_25662c:
    // 0x25662c: 0x0  nop
    ctx->pc = 0x25662cu;
    // NOP
label_256630:
    // 0x256630: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x256630u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_256634:
    // 0x256634: 0x0  nop
    ctx->pc = 0x256634u;
    // NOP
label_256638:
    // 0x256638: 0x0  nop
    ctx->pc = 0x256638u;
    // NOP
label_25663c:
    // 0x25663c: 0x0  nop
    ctx->pc = 0x25663cu;
    // NOP
label_256640:
    // 0x256640: 0x0  nop
    ctx->pc = 0x256640u;
    // NOP
label_256644:
    // 0x256644: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x256644u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    ctx->pc = 0x256648u;
    return;
}
