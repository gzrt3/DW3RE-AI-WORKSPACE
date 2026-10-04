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


void FUN_0019b618_part381(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x254ed8u: goto label_254ed8;
        case 0x254edcu: goto label_254edc;
        case 0x254ee0u: goto label_254ee0;
        case 0x254ee4u: goto label_254ee4;
        case 0x254ee8u: goto label_254ee8;
        case 0x254eecu: goto label_254eec;
        case 0x254ef0u: goto label_254ef0;
        case 0x254ef4u: goto label_254ef4;
        case 0x254ef8u: goto label_254ef8;
        case 0x254efcu: goto label_254efc;
        case 0x254f00u: goto label_254f00;
        case 0x254f04u: goto label_254f04;
        case 0x254f08u: goto label_254f08;
        case 0x254f0cu: goto label_254f0c;
        case 0x254f10u: goto label_254f10;
        case 0x254f14u: goto label_254f14;
        case 0x254f18u: goto label_254f18;
        case 0x254f1cu: goto label_254f1c;
        case 0x254f20u: goto label_254f20;
        case 0x254f24u: goto label_254f24;
        case 0x254f28u: goto label_254f28;
        case 0x254f2cu: goto label_254f2c;
        case 0x254f30u: goto label_254f30;
        case 0x254f34u: goto label_254f34;
        case 0x254f38u: goto label_254f38;
        case 0x254f3cu: goto label_254f3c;
        case 0x254f40u: goto label_254f40;
        case 0x254f44u: goto label_254f44;
        case 0x254f48u: goto label_254f48;
        case 0x254f4cu: goto label_254f4c;
        case 0x254f50u: goto label_254f50;
        case 0x254f54u: goto label_254f54;
        case 0x254f58u: goto label_254f58;
        case 0x254f5cu: goto label_254f5c;
        case 0x254f60u: goto label_254f60;
        case 0x254f64u: goto label_254f64;
        case 0x254f68u: goto label_254f68;
        case 0x254f6cu: goto label_254f6c;
        case 0x254f70u: goto label_254f70;
        case 0x254f74u: goto label_254f74;
        case 0x254f78u: goto label_254f78;
        case 0x254f7cu: goto label_254f7c;
        case 0x254f80u: goto label_254f80;
        case 0x254f84u: goto label_254f84;
        case 0x254f88u: goto label_254f88;
        case 0x254f8cu: goto label_254f8c;
        case 0x254f90u: goto label_254f90;
        case 0x254f94u: goto label_254f94;
        case 0x254f98u: goto label_254f98;
        case 0x254f9cu: goto label_254f9c;
        case 0x254fa0u: goto label_254fa0;
        case 0x254fa4u: goto label_254fa4;
        case 0x254fa8u: goto label_254fa8;
        case 0x254facu: goto label_254fac;
        case 0x254fb0u: goto label_254fb0;
        case 0x254fb4u: goto label_254fb4;
        case 0x254fb8u: goto label_254fb8;
        case 0x254fbcu: goto label_254fbc;
        case 0x254fc0u: goto label_254fc0;
        case 0x254fc4u: goto label_254fc4;
        case 0x254fc8u: goto label_254fc8;
        case 0x254fccu: goto label_254fcc;
        case 0x254fd0u: goto label_254fd0;
        case 0x254fd4u: goto label_254fd4;
        case 0x254fd8u: goto label_254fd8;
        case 0x254fdcu: goto label_254fdc;
        case 0x254fe0u: goto label_254fe0;
        case 0x254fe4u: goto label_254fe4;
        case 0x254fe8u: goto label_254fe8;
        case 0x254fecu: goto label_254fec;
        case 0x254ff0u: goto label_254ff0;
        case 0x254ff4u: goto label_254ff4;
        case 0x254ff8u: goto label_254ff8;
        case 0x254ffcu: goto label_254ffc;
        case 0x255000u: goto label_255000;
        case 0x255004u: goto label_255004;
        case 0x255008u: goto label_255008;
        case 0x25500cu: goto label_25500c;
        case 0x255010u: goto label_255010;
        case 0x255014u: goto label_255014;
        case 0x255018u: goto label_255018;
        case 0x25501cu: goto label_25501c;
        case 0x255020u: goto label_255020;
        case 0x255024u: goto label_255024;
        case 0x255028u: goto label_255028;
        case 0x25502cu: goto label_25502c;
        case 0x255030u: goto label_255030;
        case 0x255034u: goto label_255034;
        case 0x255038u: goto label_255038;
        case 0x25503cu: goto label_25503c;
        case 0x255040u: goto label_255040;
        case 0x255044u: goto label_255044;
        case 0x255048u: goto label_255048;
        case 0x25504cu: goto label_25504c;
        case 0x255050u: goto label_255050;
        case 0x255054u: goto label_255054;
        case 0x255058u: goto label_255058;
        case 0x25505cu: goto label_25505c;
        case 0x255060u: goto label_255060;
        case 0x255064u: goto label_255064;
        case 0x255068u: goto label_255068;
        case 0x25506cu: goto label_25506c;
        case 0x255070u: goto label_255070;
        case 0x255074u: goto label_255074;
        case 0x255078u: goto label_255078;
        case 0x25507cu: goto label_25507c;
        case 0x255080u: goto label_255080;
        case 0x255084u: goto label_255084;
        case 0x255088u: goto label_255088;
        case 0x25508cu: goto label_25508c;
        case 0x255090u: goto label_255090;
        case 0x255094u: goto label_255094;
        case 0x255098u: goto label_255098;
        case 0x25509cu: goto label_25509c;
        case 0x2550a0u: goto label_2550a0;
        case 0x2550a4u: goto label_2550a4;
        case 0x2550a8u: goto label_2550a8;
        case 0x2550acu: goto label_2550ac;
        case 0x2550b0u: goto label_2550b0;
        case 0x2550b4u: goto label_2550b4;
        case 0x2550b8u: goto label_2550b8;
        case 0x2550bcu: goto label_2550bc;
        case 0x2550c0u: goto label_2550c0;
        case 0x2550c4u: goto label_2550c4;
        case 0x2550c8u: goto label_2550c8;
        case 0x2550ccu: goto label_2550cc;
        case 0x2550d0u: goto label_2550d0;
        case 0x2550d4u: goto label_2550d4;
        case 0x2550d8u: goto label_2550d8;
        case 0x2550dcu: goto label_2550dc;
        case 0x2550e0u: goto label_2550e0;
        case 0x2550e4u: goto label_2550e4;
        case 0x2550e8u: goto label_2550e8;
        case 0x2550ecu: goto label_2550ec;
        case 0x2550f0u: goto label_2550f0;
        case 0x2550f4u: goto label_2550f4;
        case 0x2550f8u: goto label_2550f8;
        case 0x2550fcu: goto label_2550fc;
        case 0x255100u: goto label_255100;
        case 0x255104u: goto label_255104;
        case 0x255108u: goto label_255108;
        case 0x25510cu: goto label_25510c;
        case 0x255110u: goto label_255110;
        case 0x255114u: goto label_255114;
        case 0x255118u: goto label_255118;
        case 0x25511cu: goto label_25511c;
        case 0x255120u: goto label_255120;
        case 0x255124u: goto label_255124;
        case 0x255128u: goto label_255128;
        case 0x25512cu: goto label_25512c;
        case 0x255130u: goto label_255130;
        case 0x255134u: goto label_255134;
        case 0x255138u: goto label_255138;
        case 0x25513cu: goto label_25513c;
        case 0x255140u: goto label_255140;
        case 0x255144u: goto label_255144;
        case 0x255148u: goto label_255148;
        case 0x25514cu: goto label_25514c;
        case 0x255150u: goto label_255150;
        case 0x255154u: goto label_255154;
        case 0x255158u: goto label_255158;
        case 0x25515cu: goto label_25515c;
        case 0x255160u: goto label_255160;
        case 0x255164u: goto label_255164;
        case 0x255168u: goto label_255168;
        case 0x25516cu: goto label_25516c;
        case 0x255170u: goto label_255170;
        case 0x255174u: goto label_255174;
        case 0x255178u: goto label_255178;
        case 0x25517cu: goto label_25517c;
        case 0x255180u: goto label_255180;
        case 0x255184u: goto label_255184;
        case 0x255188u: goto label_255188;
        case 0x25518cu: goto label_25518c;
        case 0x255190u: goto label_255190;
        case 0x255194u: goto label_255194;
        case 0x255198u: goto label_255198;
        case 0x25519cu: goto label_25519c;
        case 0x2551a0u: goto label_2551a0;
        case 0x2551a4u: goto label_2551a4;
        case 0x2551a8u: goto label_2551a8;
        case 0x2551acu: goto label_2551ac;
        case 0x2551b0u: goto label_2551b0;
        case 0x2551b4u: goto label_2551b4;
        case 0x2551b8u: goto label_2551b8;
        case 0x2551bcu: goto label_2551bc;
        case 0x2551c0u: goto label_2551c0;
        case 0x2551c4u: goto label_2551c4;
        case 0x2551c8u: goto label_2551c8;
        case 0x2551ccu: goto label_2551cc;
        case 0x2551d0u: goto label_2551d0;
        case 0x2551d4u: goto label_2551d4;
        case 0x2551d8u: goto label_2551d8;
        case 0x2551dcu: goto label_2551dc;
        case 0x2551e0u: goto label_2551e0;
        case 0x2551e4u: goto label_2551e4;
        case 0x2551e8u: goto label_2551e8;
        case 0x2551ecu: goto label_2551ec;
        case 0x2551f0u: goto label_2551f0;
        case 0x2551f4u: goto label_2551f4;
        case 0x2551f8u: goto label_2551f8;
        case 0x2551fcu: goto label_2551fc;
        case 0x255200u: goto label_255200;
        case 0x255204u: goto label_255204;
        case 0x255208u: goto label_255208;
        case 0x25520cu: goto label_25520c;
        case 0x255210u: goto label_255210;
        case 0x255214u: goto label_255214;
        case 0x255218u: goto label_255218;
        case 0x25521cu: goto label_25521c;
        case 0x255220u: goto label_255220;
        case 0x255224u: goto label_255224;
        case 0x255228u: goto label_255228;
        case 0x25522cu: goto label_25522c;
        case 0x255230u: goto label_255230;
        case 0x255234u: goto label_255234;
        case 0x255238u: goto label_255238;
        case 0x25523cu: goto label_25523c;
        case 0x255240u: goto label_255240;
        case 0x255244u: goto label_255244;
        case 0x255248u: goto label_255248;
        case 0x25524cu: goto label_25524c;
        case 0x255250u: goto label_255250;
        case 0x255254u: goto label_255254;
        case 0x255258u: goto label_255258;
        case 0x25525cu: goto label_25525c;
        case 0x255260u: goto label_255260;
        case 0x255264u: goto label_255264;
        case 0x255268u: goto label_255268;
        case 0x25526cu: goto label_25526c;
        case 0x255270u: goto label_255270;
        case 0x255274u: goto label_255274;
        case 0x255278u: goto label_255278;
        case 0x25527cu: goto label_25527c;
        case 0x255280u: goto label_255280;
        case 0x255284u: goto label_255284;
        case 0x255288u: goto label_255288;
        case 0x25528cu: goto label_25528c;
        case 0x255290u: goto label_255290;
        case 0x255294u: goto label_255294;
        case 0x255298u: goto label_255298;
        case 0x25529cu: goto label_25529c;
        case 0x2552a0u: goto label_2552a0;
        case 0x2552a4u: goto label_2552a4;
        case 0x2552a8u: goto label_2552a8;
        case 0x2552acu: goto label_2552ac;
        case 0x2552b0u: goto label_2552b0;
        case 0x2552b4u: goto label_2552b4;
        case 0x2552b8u: goto label_2552b8;
        case 0x2552bcu: goto label_2552bc;
        case 0x2552c0u: goto label_2552c0;
        case 0x2552c4u: goto label_2552c4;
        case 0x2552c8u: goto label_2552c8;
        case 0x2552ccu: goto label_2552cc;
        case 0x2552d0u: goto label_2552d0;
        case 0x2552d4u: goto label_2552d4;
        case 0x2552d8u: goto label_2552d8;
        case 0x2552dcu: goto label_2552dc;
        case 0x2552e0u: goto label_2552e0;
        case 0x2552e4u: goto label_2552e4;
        case 0x2552e8u: goto label_2552e8;
        case 0x2552ecu: goto label_2552ec;
        case 0x2552f0u: goto label_2552f0;
        case 0x2552f4u: goto label_2552f4;
        case 0x2552f8u: goto label_2552f8;
        case 0x2552fcu: goto label_2552fc;
        case 0x255300u: goto label_255300;
        case 0x255304u: goto label_255304;
        case 0x255308u: goto label_255308;
        case 0x25530cu: goto label_25530c;
        case 0x255310u: goto label_255310;
        case 0x255314u: goto label_255314;
        case 0x255318u: goto label_255318;
        case 0x25531cu: goto label_25531c;
        case 0x255320u: goto label_255320;
        case 0x255324u: goto label_255324;
        case 0x255328u: goto label_255328;
        case 0x25532cu: goto label_25532c;
        case 0x255330u: goto label_255330;
        case 0x255334u: goto label_255334;
        case 0x255338u: goto label_255338;
        case 0x25533cu: goto label_25533c;
        case 0x255340u: goto label_255340;
        case 0x255344u: goto label_255344;
        case 0x255348u: goto label_255348;
        case 0x25534cu: goto label_25534c;
        case 0x255350u: goto label_255350;
        case 0x255354u: goto label_255354;
        case 0x255358u: goto label_255358;
        case 0x25535cu: goto label_25535c;
        case 0x255360u: goto label_255360;
        case 0x255364u: goto label_255364;
        case 0x255368u: goto label_255368;
        case 0x25536cu: goto label_25536c;
        case 0x255370u: goto label_255370;
        case 0x255374u: goto label_255374;
        case 0x255378u: goto label_255378;
        case 0x25537cu: goto label_25537c;
        case 0x255380u: goto label_255380;
        case 0x255384u: goto label_255384;
        case 0x255388u: goto label_255388;
        case 0x25538cu: goto label_25538c;
        case 0x255390u: goto label_255390;
        case 0x255394u: goto label_255394;
        case 0x255398u: goto label_255398;
        case 0x25539cu: goto label_25539c;
        case 0x2553a0u: goto label_2553a0;
        case 0x2553a4u: goto label_2553a4;
        case 0x2553a8u: goto label_2553a8;
        case 0x2553acu: goto label_2553ac;
        case 0x2553b0u: goto label_2553b0;
        case 0x2553b4u: goto label_2553b4;
        case 0x2553b8u: goto label_2553b8;
        case 0x2553bcu: goto label_2553bc;
        case 0x2553c0u: goto label_2553c0;
        case 0x2553c4u: goto label_2553c4;
        case 0x2553c8u: goto label_2553c8;
        case 0x2553ccu: goto label_2553cc;
        case 0x2553d0u: goto label_2553d0;
        case 0x2553d4u: goto label_2553d4;
        case 0x2553d8u: goto label_2553d8;
        case 0x2553dcu: goto label_2553dc;
        case 0x2553e0u: goto label_2553e0;
        case 0x2553e4u: goto label_2553e4;
        case 0x2553e8u: goto label_2553e8;
        case 0x2553ecu: goto label_2553ec;
        case 0x2553f0u: goto label_2553f0;
        case 0x2553f4u: goto label_2553f4;
        case 0x2553f8u: goto label_2553f8;
        case 0x2553fcu: goto label_2553fc;
        case 0x255400u: goto label_255400;
        case 0x255404u: goto label_255404;
        case 0x255408u: goto label_255408;
        case 0x25540cu: goto label_25540c;
        case 0x255410u: goto label_255410;
        case 0x255414u: goto label_255414;
        case 0x255418u: goto label_255418;
        case 0x25541cu: goto label_25541c;
        case 0x255420u: goto label_255420;
        case 0x255424u: goto label_255424;
        case 0x255428u: goto label_255428;
        case 0x25542cu: goto label_25542c;
        case 0x255430u: goto label_255430;
        case 0x255434u: goto label_255434;
        case 0x255438u: goto label_255438;
        case 0x25543cu: goto label_25543c;
        case 0x255440u: goto label_255440;
        case 0x255444u: goto label_255444;
        case 0x255448u: goto label_255448;
        case 0x25544cu: goto label_25544c;
        case 0x255450u: goto label_255450;
        case 0x255454u: goto label_255454;
        case 0x255458u: goto label_255458;
        case 0x25545cu: goto label_25545c;
        case 0x255460u: goto label_255460;
        case 0x255464u: goto label_255464;
        case 0x255468u: goto label_255468;
        case 0x25546cu: goto label_25546c;
        case 0x255470u: goto label_255470;
        case 0x255474u: goto label_255474;
        case 0x255478u: goto label_255478;
        case 0x25547cu: goto label_25547c;
        case 0x255480u: goto label_255480;
        case 0x255484u: goto label_255484;
        case 0x255488u: goto label_255488;
        case 0x25548cu: goto label_25548c;
        case 0x255490u: goto label_255490;
        case 0x255494u: goto label_255494;
        case 0x255498u: goto label_255498;
        case 0x25549cu: goto label_25549c;
        case 0x2554a0u: goto label_2554a0;
        case 0x2554a4u: goto label_2554a4;
        case 0x2554a8u: goto label_2554a8;
        case 0x2554acu: goto label_2554ac;
        case 0x2554b0u: goto label_2554b0;
        case 0x2554b4u: goto label_2554b4;
        case 0x2554b8u: goto label_2554b8;
        case 0x2554bcu: goto label_2554bc;
        case 0x2554c0u: goto label_2554c0;
        case 0x2554c4u: goto label_2554c4;
        case 0x2554c8u: goto label_2554c8;
        case 0x2554ccu: goto label_2554cc;
        case 0x2554d0u: goto label_2554d0;
        case 0x2554d4u: goto label_2554d4;
        case 0x2554d8u: goto label_2554d8;
        case 0x2554dcu: goto label_2554dc;
        case 0x2554e0u: goto label_2554e0;
        case 0x2554e4u: goto label_2554e4;
        case 0x2554e8u: goto label_2554e8;
        case 0x2554ecu: goto label_2554ec;
        case 0x2554f0u: goto label_2554f0;
        case 0x2554f4u: goto label_2554f4;
        case 0x2554f8u: goto label_2554f8;
        case 0x2554fcu: goto label_2554fc;
        case 0x255500u: goto label_255500;
        case 0x255504u: goto label_255504;
        case 0x255508u: goto label_255508;
        case 0x25550cu: goto label_25550c;
        case 0x255510u: goto label_255510;
        case 0x255514u: goto label_255514;
        case 0x255518u: goto label_255518;
        case 0x25551cu: goto label_25551c;
        case 0x255520u: goto label_255520;
        case 0x255524u: goto label_255524;
        case 0x255528u: goto label_255528;
        case 0x25552cu: goto label_25552c;
        case 0x255530u: goto label_255530;
        case 0x255534u: goto label_255534;
        case 0x255538u: goto label_255538;
        case 0x25553cu: goto label_25553c;
        case 0x255540u: goto label_255540;
        case 0x255544u: goto label_255544;
        case 0x255548u: goto label_255548;
        case 0x25554cu: goto label_25554c;
        case 0x255550u: goto label_255550;
        case 0x255554u: goto label_255554;
        case 0x255558u: goto label_255558;
        case 0x25555cu: goto label_25555c;
        case 0x255560u: goto label_255560;
        case 0x255564u: goto label_255564;
        case 0x255568u: goto label_255568;
        case 0x25556cu: goto label_25556c;
        case 0x255570u: goto label_255570;
        case 0x255574u: goto label_255574;
        case 0x255578u: goto label_255578;
        case 0x25557cu: goto label_25557c;
        case 0x255580u: goto label_255580;
        case 0x255584u: goto label_255584;
        case 0x255588u: goto label_255588;
        case 0x25558cu: goto label_25558c;
        case 0x255590u: goto label_255590;
        case 0x255594u: goto label_255594;
        case 0x255598u: goto label_255598;
        case 0x25559cu: goto label_25559c;
        case 0x2555a0u: goto label_2555a0;
        case 0x2555a4u: goto label_2555a4;
        case 0x2555a8u: goto label_2555a8;
        case 0x2555acu: goto label_2555ac;
        case 0x2555b0u: goto label_2555b0;
        case 0x2555b4u: goto label_2555b4;
        case 0x2555b8u: goto label_2555b8;
        case 0x2555bcu: goto label_2555bc;
        case 0x2555c0u: goto label_2555c0;
        case 0x2555c4u: goto label_2555c4;
        case 0x2555c8u: goto label_2555c8;
        case 0x2555ccu: goto label_2555cc;
        case 0x2555d0u: goto label_2555d0;
        case 0x2555d4u: goto label_2555d4;
        case 0x2555d8u: goto label_2555d8;
        case 0x2555dcu: goto label_2555dc;
        case 0x2555e0u: goto label_2555e0;
        case 0x2555e4u: goto label_2555e4;
        case 0x2555e8u: goto label_2555e8;
        case 0x2555ecu: goto label_2555ec;
        case 0x2555f0u: goto label_2555f0;
        case 0x2555f4u: goto label_2555f4;
        case 0x2555f8u: goto label_2555f8;
        case 0x2555fcu: goto label_2555fc;
        case 0x255600u: goto label_255600;
        case 0x255604u: goto label_255604;
        case 0x255608u: goto label_255608;
        case 0x25560cu: goto label_25560c;
        case 0x255610u: goto label_255610;
        case 0x255614u: goto label_255614;
        case 0x255618u: goto label_255618;
        case 0x25561cu: goto label_25561c;
        case 0x255620u: goto label_255620;
        case 0x255624u: goto label_255624;
        case 0x255628u: goto label_255628;
        case 0x25562cu: goto label_25562c;
        case 0x255630u: goto label_255630;
        case 0x255634u: goto label_255634;
        case 0x255638u: goto label_255638;
        case 0x25563cu: goto label_25563c;
        case 0x255640u: goto label_255640;
        case 0x255644u: goto label_255644;
        case 0x255648u: goto label_255648;
        case 0x25564cu: goto label_25564c;
        case 0x255650u: goto label_255650;
        case 0x255654u: goto label_255654;
        case 0x255658u: goto label_255658;
        case 0x25565cu: goto label_25565c;
        case 0x255660u: goto label_255660;
        case 0x255664u: goto label_255664;
        case 0x255668u: goto label_255668;
        case 0x25566cu: goto label_25566c;
        case 0x255670u: goto label_255670;
        case 0x255674u: goto label_255674;
        case 0x255678u: goto label_255678;
        case 0x25567cu: goto label_25567c;
        case 0x255680u: goto label_255680;
        case 0x255684u: goto label_255684;
        case 0x255688u: goto label_255688;
        case 0x25568cu: goto label_25568c;
        case 0x255690u: goto label_255690;
        case 0x255694u: goto label_255694;
        case 0x255698u: goto label_255698;
        case 0x25569cu: goto label_25569c;
        case 0x2556a0u: goto label_2556a0;
        case 0x2556a4u: goto label_2556a4;
        default: return;
    }

label_254ed8:
    // 0x254ed8: 0xf082e  dsub        $at, $zero, $t7
    ctx->pc = 0x254ed8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 15); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_254edc:
    // 0x254edc: 0x64643c5a  daddiu      $a0, $v1, 0x3C5A
    ctx->pc = 0x254edcu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)15450);
label_254ee0:
    // 0x254ee0: 0xff783c5a  sd          $t8, 0x3C5A($k1)
    ctx->pc = 0x254ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 27), 15450), GPR_U64(ctx, 24));
label_254ee4:
    // 0x254ee4: 0x3200d800  andi        $zero, $s0, 0xD800
    ctx->pc = 0x254ee4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)55296);
label_254ee8:
    // 0x254ee8: 0x55001209  bnel        $t0, $zero, . + 4 + (0x1209 << 2)
label_254eec:
    if (ctx->pc == 0x254EECu) {
        ctx->pc = 0x254EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254EE8u;
        // 0x254eec: 0x73555555  .word       0x73555555                   # INVALID     $k0, $s5, 0x5555 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
// //         throw std::runtime_error("Unhandled MMI instruction: function 0x15 at 0x254EEC raw=0x73555555"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x254EF0u;
        goto label_254ef0;
    }
    ctx->pc = 0x254EE8u;
    {
        const bool branch_taken_0x254ee8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x254ee8) {
            ctx->pc = 0x254EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254EE8u;
            // 0x254eec: 0x73555555  .word       0x73555555                   # INVALID     $k0, $s5, 0x5555 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
// //             throw std::runtime_error("Unhandled MMI instruction: function 0x15 at 0x254EEC raw=0x73555555"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x259710u;
            { ctx->pc = 0x259710; return; }
        }
    }
    ctx->pc = 0x254EF0u;
label_254ef0:
    // 0x254ef0: 0xff8c4b  .word       0x00FF8C4B                   # movn        $s1, $a3, $ra # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254ef0u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 7));
label_254ef4:
    // 0x254ef4: 0x82a00f1  j           func_A803C4
label_254ef8:
    if (ctx->pc == 0x254EF8u) {
        ctx->pc = 0x254EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254EF4u;
        // 0x254ef8: 0x4b4b0015  vminiy.xz   $vf0, $vf0, $vf11y (Delay Slot)
        { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x254EFCu;
        goto label_254efc;
    }
    ctx->pc = 0x254EF4u;
    ctx->pc = 0x254EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254EF4u;
    // 0x254ef8: 0x4b4b0015  vminiy.xz   $vf0, $vf0, $vf11y (Delay Slot)
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
    ctx->in_delay_slot = false;
    ctx->pc = 0xA803C4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA803C4u, 0x254EF4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x254EFCu;
label_254efc:
    // 0x254efc: 0x4b694b4b  vmaddw.xzw  $vf13, $vf9, $vf9w
    ctx->pc = 0x254efcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_254f00:
    // 0x254f00: 0xda00ff82  lqc2        $vf0, -0x7E($s0)
    ctx->pc = 0x254f00u;
    ctx->vu0_vf[0] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 4294967170)));
label_254f04:
    // 0x254f04: 0x17092a00  bne         $t8, $t1, . + 4 + (0x2A00 << 2)
label_254f08:
    if (ctx->pc == 0x254F08u) {
        ctx->pc = 0x254F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254F04u;
        // 0x254f08: 0x4b4b4b00  vaddx.xz    $vf12, $vf9, $vf11x (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x254F0Cu;
        goto label_254f0c;
    }
    ctx->pc = 0x254F04u;
    {
        const bool branch_taken_0x254f04 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 9));
        ctx->pc = 0x254F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254F04u;
        // 0x254f08: 0x4b4b4b00  vaddx.xz    $vf12, $vf9, $vf11x (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x254f04) {
            ctx->pc = 0x25F708u;
            { ctx->pc = 0x25f708; return; }
        }
    }
    ctx->pc = 0x254F0Cu;
label_254f0c:
    // 0x254f0c: 0x824b694b  lb          $t3, 0x694B($s2)
    ctx->pc = 0x254f0cu;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 26955)));
label_254f10:
    // 0x254f10: 0xe522ff  .word       0x00E522FF                   # dsra32      $a0, $a1, 11 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254f10u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 5) >> (32 + 11));
label_254f14:
    // 0x254f14: 0x100629  .word       0x00100629                   # mtsa        $zero # 00100600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x254f14u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_254f18:
    // 0x254f18: 0x46464646  .word       0x46464646                   # INVALID     $s2, $a2, 0x4646 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x254f18u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x6 at 0x254F18 raw=0x46464646"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_254f1c:
    // 0x254f1c: 0xff824664  sd          $v0, 0x4664($gp)
    ctx->pc = 0x254f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 18020), GPR_U64(ctx, 2));
label_254f20:
    // 0x254f20: 0x2c00e700  sltiu       $zero, $zero, -0x1900
    ctx->pc = 0x254f20u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)(int64_t)(int32_t)4294960896) ? 1 : 0);
label_254f24:
    // 0x254f24: 0x50001006  beql        $zero, $zero, . + 4 + (0x1006 << 2)
label_254f28:
    if (ctx->pc == 0x254F28u) {
        ctx->pc = 0x254F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254F24u;
        // 0x254f28: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x254F2Cu;
        goto label_254f2c;
    }
    ctx->pc = 0x254F24u;
    {
        const bool branch_taken_0x254f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x254f24) {
            ctx->pc = 0x254F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254F24u;
            // 0x254f28: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x258F40u;
            { ctx->pc = 0x258f40; return; }
        }
    }
    ctx->pc = 0x254F2Cu;
label_254f2c:
    // 0x254f2c: 0xff874b  .word       0x00FF874B                   # movn        $s0, $a3, $ra # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254f2cu;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
label_254f30:
    // 0x254f30: 0x62a00e8  tlti        $s1, 0xE8
    ctx->pc = 0x254f30u;
    if (GPR_S64(ctx, 17) < (int64_t)(int32_t)232) { runtime->handleTrap(rdram, ctx); }
label_254f34:
    // 0x254f34: 0x4b4b0111  vmaxy.xz    $vf4, $vf0, $vf11y
    ctx->pc = 0x254f34u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_254f38:
    // 0x254f38: 0x4b694b4b  vmaddw.xzw  $vf13, $vf9, $vf9w
    ctx->pc = 0x254f38u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_254f3c:
    // 0x254f3c: 0xe500ff82  swc1        $f0, -0x7E($t0)
    ctx->pc = 0x254f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294967170), bits); }
label_254f40:
    // 0x254f40: 0x14072900  bne         $zero, $a3, . + 4 + (0x2900 << 2)
label_254f44:
    if (ctx->pc == 0x254F44u) {
        ctx->pc = 0x254F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254F40u;
        // 0x254f44: 0x46464600  .word       0x46464600                   # INVALID     $s2, $a2, 0x4600 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
// //         throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x0 at 0x254F44 raw=0x46464600"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x254F48u;
        goto label_254f48;
    }
    ctx->pc = 0x254F40u;
    {
        const bool branch_taken_0x254f40 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 7));
        ctx->pc = 0x254F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254F40u;
        // 0x254f44: 0x46464600  .word       0x46464600                   # INVALID     $s2, $a2, 0x4600 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
// //         throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x0 at 0x254F44 raw=0x46464600"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x254f40) {
            ctx->pc = 0x25F344u;
            { ctx->pc = 0x25f344; return; }
        }
    }
    ctx->pc = 0x254F48u;
label_254f48:
    // 0x254f48: 0x82466446  lb          $a2, 0x6446($s2)
    ctx->pc = 0x254f48u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 25670)));
label_254f4c:
    // 0x254f4c: 0xe700ff  .word       0x00E700FF                   # dsra32      $zero, $a3, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254f4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 7) >> (32 + 3));
label_254f50:
    // 0x254f50: 0x14072c  .word       0x0014072C                   # dadd        $zero, $zero, $s4 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254f50u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 20); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_254f54:
    // 0x254f54: 0x50505050  beql        $v0, $s0, . + 4 + (0x5050 << 2)
label_254f58:
    if (ctx->pc == 0x254F58u) {
        ctx->pc = 0x254F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254F54u;
        // 0x254f58: 0xff874b6e  sd          $a3, 0x4B6E($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254F5Cu;
        goto label_254f5c;
    }
    ctx->pc = 0x254F54u;
    {
        const bool branch_taken_0x254f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x254f54) {
            ctx->pc = 0x254F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254F54u;
            // 0x254f58: 0xff874b6e  sd          $a3, 0x4B6E($gp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269098u;
            { ctx->pc = 0x269098; return; }
        }
    }
    ctx->pc = 0x254F5Cu;
label_254f5c:
    // 0x254f5c: 0x2a00e800  slti        $zero, $s0, -0x1800
    ctx->pc = 0x254f5cu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4294961152) ? 1 : 0);
label_254f60:
    // 0x254f60: 0x4b011507  vsubw.x     $vf20, $vf2, $vf1w
    ctx->pc = 0x254f60u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
label_254f64:
    // 0x254f64: 0x694b4b4b  ldl         $t3, 0x4B4B($t2)
    ctx->pc = 0x254f64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 19275); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_254f68:
    // 0x254f68: 0xff824b  .word       0x00FF824B                   # movn        $s0, $a3, $ra # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254f68u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
label_254f6c:
    // 0x254f6c: 0x62900e5  tgeiu       $s1, 0xE5
    ctx->pc = 0x254f6cu;
    if (GPR_U64(ctx, 17) >= (uint64_t)(int64_t)(int32_t)229) { runtime->handleTrap(rdram, ctx); }
label_254f70:
    // 0x254f70: 0x46460016  .word       0x46460016                   # INVALID     $s2, $a2, 0x16 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x254f70u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x16 at 0x254F70 raw=0x46460016"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_254f74:
    // 0x254f74: 0x46644646  .word       0x46644646                   # INVALID     $s3, $a0, 0x4646 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x254f74u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x13, function 0x6 at 0x254F74 raw=0x46644646"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_254f78:
    // 0x254f78: 0xe700ff82  swc1        $f0, -0x7E($t8)
    ctx->pc = 0x254f78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 4294967170), bits); }
label_254f7c:
    // 0x254f7c: 0x16072c00  bne         $s0, $a3, . + 4 + (0x2C00 << 2)
label_254f80:
    if (ctx->pc == 0x254F80u) {
        ctx->pc = 0x254F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254F7Cu;
        // 0x254f80: 0x50505000  beql        $v0, $s0, . + 4 + (0x5000 << 2) (Delay Slot)
        // Likely branch instruction at 0x254F80 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x254F84u;
        goto label_254f84;
    }
    ctx->pc = 0x254F7Cu;
    {
        const bool branch_taken_0x254f7c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 7));
        ctx->pc = 0x254F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254F7Cu;
        // 0x254f80: 0x50505000  beql        $v0, $s0, . + 4 + (0x5000 << 2) (Delay Slot)
        // Likely branch instruction at 0x254F80 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x254f7c) {
            ctx->pc = 0x25FF80u;
            { ctx->pc = 0x25ff80; return; }
        }
    }
    ctx->pc = 0x254F84u;
label_254f84:
    // 0x254f84: 0x874b6e50  lh          $t3, 0x6E50($k0)
    ctx->pc = 0x254f84u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 26), 28240)));
label_254f88:
    // 0x254f88: 0xe800ff  .word       0x00E800FF                   # dsra32      $zero, $t0, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254f88u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 8) >> (32 + 3));
label_254f8c:
    // 0x254f8c: 0x117072a  .word       0x0117072A                   # slt         $zero, $t0, $s7 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254f8cu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_254f90:
    // 0x254f90: 0x4b4b4b4b  vmaddw.xz   $vf13, $vf9, $vf11w
    ctx->pc = 0x254f90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_254f94:
    // 0x254f94: 0xff824b69  sd          $v0, 0x4B69($gp)
    ctx->pc = 0x254f94u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 19305), GPR_U64(ctx, 2));
label_254f98:
    // 0x254f98: 0x2a00e900  slti        $zero, $s0, -0x1700
    ctx->pc = 0x254f98u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4294961408) ? 1 : 0);
label_254f9c:
    // 0x254f9c: 0x4b011106  vsubz.x     $vf4, $vf2, $vf1z
    ctx->pc = 0x254f9cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_254fa0:
    // 0x254fa0: 0x694b4b4b  ldl         $t3, 0x4B4B($t2)
    ctx->pc = 0x254fa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 19275); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_254fa4:
    // 0x254fa4: 0xff824b  .word       0x00FF824B                   # movn        $s0, $a3, $ra # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254fa4u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
label_254fa8:
    // 0x254fa8: 0x72a00ea  tlti        $t9, 0xEA
    ctx->pc = 0x254fa8u;
    if (GPR_S64(ctx, 25) < (int64_t)(int32_t)234) { runtime->handleTrap(rdram, ctx); }
label_254fac:
    // 0x254fac: 0x4b4b0111  vmaxy.xz    $vf4, $vf0, $vf11y
    ctx->pc = 0x254facu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_254fb0:
    // 0x254fb0: 0x4b694b4b  vmaddw.xzw  $vf13, $vf9, $vf9w
    ctx->pc = 0x254fb0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_254fb4:
    // 0x254fb4: 0xe900ff82  swc2        $0, -0x7E($t0)
    ctx->pc = 0x254fb4u;
//     throw std::runtime_error("Unhandled opcode: 0x3A at 0x254FB4 raw=0xE900FF82");
 /* MITIGATED */
label_254fb8:
    // 0x254fb8: 0x15062a00  bne         $t0, $a2, . + 4 + (0x2A00 << 2)
label_254fbc:
    if (ctx->pc == 0x254FBCu) {
        ctx->pc = 0x254FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254FB8u;
        // 0x254fbc: 0x4b4b4b01  vaddy.xz    $vf12, $vf9, $vf11y (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x254FC0u;
        goto label_254fc0;
    }
    ctx->pc = 0x254FB8u;
    {
        const bool branch_taken_0x254fb8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 6));
        ctx->pc = 0x254FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254FB8u;
        // 0x254fbc: 0x4b4b4b01  vaddy.xz    $vf12, $vf9, $vf11y (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x254fb8) {
            ctx->pc = 0x25F7BCu;
            { ctx->pc = 0x25f7bc; return; }
        }
    }
    ctx->pc = 0x254FC0u;
label_254fc0:
    // 0x254fc0: 0x824b694b  lb          $t3, 0x694B($s2)
    ctx->pc = 0x254fc0u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 26955)));
label_254fc4:
    // 0x254fc4: 0xea00ff  .word       0x00EA00FF                   # dsra32      $zero, $t2, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254fc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 10) >> (32 + 3));
label_254fc8:
    // 0x254fc8: 0x115072a  .word       0x0115072A                   # slt         $zero, $t0, $s5 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254fc8u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_254fcc:
    // 0x254fcc: 0x4b4b4b4b  vmaddw.xz   $vf13, $vf9, $vf11w
    ctx->pc = 0x254fccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_254fd0:
    // 0x254fd0: 0xff824b69  sd          $v0, 0x4B69($gp)
    ctx->pc = 0x254fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 19305), GPR_U64(ctx, 2));
label_254fd4:
    // 0x254fd4: 0x2a00e900  slti        $zero, $s0, -0x1700
    ctx->pc = 0x254fd4u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4294961408) ? 1 : 0);
label_254fd8:
    // 0x254fd8: 0x4b011707  vsubw.x     $vf28, $vf2, $vf1w
    ctx->pc = 0x254fd8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_254fdc:
    // 0x254fdc: 0x694b4b4b  ldl         $t3, 0x4B4B($t2)
    ctx->pc = 0x254fdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 19275); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_254fe0:
    // 0x254fe0: 0xff824b  .word       0x00FF824B                   # movn        $s0, $a3, $ra # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254fe0u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
label_254fe4:
    // 0x254fe4: 0x62a00ea  tlti        $s1, 0xEA
    ctx->pc = 0x254fe4u;
    if (GPR_S64(ctx, 17) < (int64_t)(int32_t)234) { runtime->handleTrap(rdram, ctx); }
label_254fe8:
    // 0x254fe8: 0x4b4b0117  vminiw.xz   $vf4, $vf0, $vf11w
    ctx->pc = 0x254fe8u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_254fec:
    // 0x254fec: 0x4b694b4b  vmaddw.xzw  $vf13, $vf9, $vf9w
    ctx->pc = 0x254fecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_254ff0:
    // 0x254ff0: 0xed00ff82  .word       0xED00FF82                   # INVALID     $t0, $zero, -0x7E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x254ff0u;
//     throw std::runtime_error("Unhandled opcode: 0x3B at 0x254FF0 raw=0xED00FF82");
 /* MITIGATED */
label_254ff4:
    // 0x254ff4: 0xe062d00  jal         func_818B400
label_254ff8:
    if (ctx->pc == 0x254FF8u) {
        ctx->pc = 0x254FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254FF4u;
        // 0x254ff8: 0x643c5a00  daddiu      $gp, $at, 0x5A00 (Delay Slot)
        SET_GPR_S64(ctx, 28, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)23040);
        ctx->in_delay_slot = false;
        ctx->pc = 0x254FFCu;
        goto label_254ffc;
    }
    ctx->pc = 0x254FF4u;
    SET_GPR_U32(ctx, 31, 0x254FFCu);
    ctx->pc = 0x254FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254FF4u;
    // 0x254ff8: 0x643c5a00  daddiu      $gp, $at, 0x5A00 (Delay Slot)
    SET_GPR_S64(ctx, 28, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)23040);
    ctx->in_delay_slot = false;
    ctx->pc = 0x818B400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x818B400u, 0x254FF4u, 0x254FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254FFCu;
label_254ffc:
    // 0x254ffc: 0x783c5a64  lq          $gp, 0x5A64($at)
    ctx->pc = 0x254ffcu;
    SET_GPR_VEC(ctx, 28, READ128(ADD32(GPR_U32(ctx, 1), 23140)));
label_255000:
    // 0x255000: 0xee00ff  .word       0x00EE00FF                   # dsra32      $zero, $t6, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255000u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 14) >> (32 + 3));
label_255004:
    // 0x255004: 0xe072e  .word       0x000E072E                   # dsub        $zero, $zero, $t6 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255004u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 14); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_255008:
    // 0x255008: 0x6464415f  daddiu      $a0, $v1, 0x415F
    ctx->pc = 0x255008u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)16735);
label_25500c:
    // 0x25500c: 0xff78415f  sd          $t8, 0x415F($k1)
    ctx->pc = 0x25500cu;
    WRITE64(ADD32(GPR_U32(ctx, 27), 16735), GPR_U64(ctx, 24));
label_255010:
    // 0x255010: 0x2e00ef00  sltiu       $zero, $s0, -0x1100
    ctx->pc = 0x255010u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4294962944) ? 1 : 0);
label_255014:
    // 0x255014: 0x5a000f06  blezl       $s0, . + 4 + (0xF06 << 2)
label_255018:
    if (ctx->pc == 0x255018u) {
        ctx->pc = 0x255018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255014u;
        // 0x255018: 0x5a64643c  .word       0x5A64643C                   # blezl       $s3, . + 4 + (0x643C << 2) # 00040000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x255018 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x25501Cu;
        goto label_25501c;
    }
    ctx->pc = 0x255014u;
    {
        const bool branch_taken_0x255014 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x255014) {
            ctx->pc = 0x255018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255014u;
            // 0x255018: 0x5a64643c  .word       0x5A64643C                   # blezl       $s3, . + 4 + (0x643C << 2) # 00040000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x255018 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x258C30u;
            { ctx->pc = 0x258c30; return; }
        }
    }
    ctx->pc = 0x25501Cu;
label_25501c:
    // 0x25501c: 0xff783c  .word       0x00FF783C                   # dsll32      $t7, $ra, 0 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25501cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 31) << (32 + 0));
label_255020:
    // 0x255020: 0x72e00f0  tnei        $t9, 0xF0
    ctx->pc = 0x255020u;
    if (GPR_S64(ctx, 25) != (int64_t)(int32_t)240) { runtime->handleTrap(rdram, ctx); }
label_255024:
    // 0x255024: 0x4664000f  .word       0x4664000F                   # INVALID     $s3, $a0, 0xF # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x255024u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x13, function 0xF at 0x255024 raw=0x4664000F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255028:
    // 0x255028: 0x415f6464  .word       0x415F6464                   # INVALID     $t2, $ra, 0x6464 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255028u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x255028 raw=0x415F6464"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25502c:
    // 0x25502c: 0xf100ff78  scd         $zero, -0x88($t0)
    ctx->pc = 0x25502cu;
//     throw std::runtime_error("Unhandled opcode: 0x3C at 0x25502C raw=0xF100FF78");
 /* MITIGATED */
label_255030:
    // 0x255030: 0x15062a00  bne         $t0, $a2, . + 4 + (0x2A00 << 2)
label_255034:
    if (ctx->pc == 0x255034u) {
        ctx->pc = 0x255034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255030u;
        // 0x255034: 0x4b4b4b00  vaddx.xz    $vf12, $vf9, $vf11x (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x255038u;
        goto label_255038;
    }
    ctx->pc = 0x255030u;
    {
        const bool branch_taken_0x255030 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 6));
        ctx->pc = 0x255034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255030u;
        // 0x255034: 0x4b4b4b00  vaddx.xz    $vf12, $vf9, $vf11x (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x255030) {
            ctx->pc = 0x25F834u;
            { ctx->pc = 0x25f834; return; }
        }
    }
    ctx->pc = 0x255038u;
label_255038:
    // 0x255038: 0x824b694b  lb          $t3, 0x694B($s2)
    ctx->pc = 0x255038u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 26955)));
label_25503c:
    // 0x25503c: 0xda00ff  .word       0x00DA00FF                   # dsra32      $zero, $k0, 3 # 00C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25503cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 26) >> (32 + 3));
label_255040:
    // 0x255040: 0x17072a  .word       0x0017072A                   # slt         $zero, $zero, $s7 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255040u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_255044:
    // 0x255044: 0x4b4b4b4b  vmaddw.xz   $vf13, $vf9, $vf11w
    ctx->pc = 0x255044u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_255048:
    // 0x255048: 0xff824b69  sd          $v0, 0x4B69($gp)
    ctx->pc = 0x255048u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 19305), GPR_U64(ctx, 2));
label_25504c:
    // 0x25504c: 0x2f00f212  sltiu       $zero, $t8, -0xDEE
    ctx->pc = 0x25504cu;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)(int64_t)(int32_t)4294963730) ? 1 : 0);
label_255050:
    // 0x255050: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x255050u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_255054:
    // 0x255054: 0x64464646  daddiu      $a2, $v0, 0x4646
    ctx->pc = 0x255054u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)17990);
label_255058:
    // 0x255058: 0xff8246  .word       0x00FF8246                   # srlv        $s0, $ra, $a3 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255058u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 31), GPR_U32(ctx, 7) & 0x1F));
label_25505c:
    // 0x25505c: 0x12f00f2  tlt         $t1, $t7, 3
    ctx->pc = 0x25505cu;
    if (GPR_S64(ctx, 9) < GPR_S64(ctx, 15)) { runtime->handleTrap(rdram, ctx); }
label_255060:
    // 0x255060: 0x46460014  .word       0x46460014                   # INVALID     $s2, $a2, 0x14 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x255060u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x14 at 0x255060 raw=0x46460014"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255064:
    // 0x255064: 0x46644646  .word       0x46644646                   # INVALID     $s3, $a0, 0x4646 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x255064u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x13, function 0x6 at 0x255064 raw=0x46644646"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255068:
    // 0x255068: 0xf200ff82  scd         $zero, -0x7E($s0)
    ctx->pc = 0x255068u;
//     throw std::runtime_error("Unhandled opcode: 0x3C at 0x255068 raw=0xF200FF82");
 /* MITIGATED */
label_25506c:
    // 0x25506c: 0x16002f00  bnez        $s0, . + 4 + (0x2F00 << 2)
label_255070:
    if (ctx->pc == 0x255070u) {
        ctx->pc = 0x255070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25506Cu;
        // 0x255070: 0x46464600  .word       0x46464600                   # INVALID     $s2, $a2, 0x4600 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
// //         throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x0 at 0x255070 raw=0x46464600"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x255074u;
        goto label_255074;
    }
    ctx->pc = 0x25506Cu;
    {
        const bool branch_taken_0x25506c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x255070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25506Cu;
        // 0x255070: 0x46464600  .word       0x46464600                   # INVALID     $s2, $a2, 0x4600 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
// //         throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x0 at 0x255070 raw=0x46464600"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x25506c) {
            ctx->pc = 0x260C70u;
            { ctx->pc = 0x260c70; return; }
        }
    }
    ctx->pc = 0x255074u;
label_255074:
    // 0x255074: 0x82466446  lb          $a2, 0x6446($s2)
    ctx->pc = 0x255074u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 25670)));
label_255078:
    // 0x255078: 0xf300ff  .word       0x00F300FF                   # dsra32      $zero, $s3, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255078u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 19) >> (32 + 3));
label_25507c:
    // 0x25507c: 0x110130  tge         $zero, $s1, 4
    ctx->pc = 0x25507cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 17)) { runtime->handleTrap(rdram, ctx); }
label_255080:
    // 0x255080: 0x4b4b4b4b  vmaddw.xz   $vf13, $vf9, $vf11w
    ctx->pc = 0x255080u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_255084:
    // 0x255084: 0xff874b69  sd          $a3, 0x4B69($gp)
    ctx->pc = 0x255084u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 19305), GPR_U64(ctx, 7));
label_255088:
    // 0x255088: 0x3000f300  andi        $zero, $zero, 0xF300
    ctx->pc = 0x255088u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)62208);
label_25508c:
    // 0x25508c: 0x4b001500  vaddx.x     $vf20, $vf2, $vf0x
    ctx->pc = 0x25508cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
label_255090:
    // 0x255090: 0x694b4b4b  ldl         $t3, 0x4B4B($t2)
    ctx->pc = 0x255090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 19275); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_255094:
    // 0x255094: 0xff874b  .word       0x00FF874B                   # movn        $s0, $a3, $ra # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255094u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
label_255098:
    // 0x255098: 0x13000f3  tltu        $t1, $s0, 3
    ctx->pc = 0x255098u;
    if (GPR_U64(ctx, 9) < GPR_U64(ctx, 16)) { runtime->handleTrap(rdram, ctx); }
label_25509c:
    // 0x25509c: 0x4b4b0017  vminiw.xz   $vf0, $vf0, $vf11w
    ctx->pc = 0x25509cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
label_2550a0:
    // 0x2550a0: 0x4b694b4b  vmaddw.xzw  $vf13, $vf9, $vf9w
    ctx->pc = 0x2550a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_2550a4:
    // 0x2550a4: 0xf400ff87  sdc1        $f0, -0x79($zero)
    ctx->pc = 0x2550a4u;
//     throw std::runtime_error("Unhandled opcode: 0x3D at 0x2550A4 raw=0xF400FF87");
 /* MITIGATED */
label_2550a8:
    // 0x2550a8: 0x11013000  beq         $t0, $at, . + 4 + (0x3000 << 2)
label_2550ac:
    if (ctx->pc == 0x2550ACu) {
        ctx->pc = 0x2550ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2550A8u;
        // 0x2550ac: 0x4b4b4b01  vaddy.xz    $vf12, $vf9, $vf11y (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2550B0u;
        goto label_2550b0;
    }
    ctx->pc = 0x2550A8u;
    {
        const bool branch_taken_0x2550a8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 1));
        ctx->pc = 0x2550ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2550A8u;
        // 0x2550ac: 0x4b4b4b01  vaddy.xz    $vf12, $vf9, $vf11y (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2550a8) {
            ctx->pc = 0x2610ACu;
            { ctx->pc = 0x2610ac; return; }
        }
    }
    ctx->pc = 0x2550B0u;
label_2550b0:
    // 0x2550b0: 0x874b694b  lh          $t3, 0x694B($k0)
    ctx->pc = 0x2550b0u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 26), 26955)));
label_2550b4:
    // 0x2550b4: 0xf400ff  .word       0x00F400FF                   # dsra32      $zero, $s4, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2550b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 20) >> (32 + 3));
label_2550b8:
    // 0x2550b8: 0x1150030  tge         $t0, $s5, 0
    ctx->pc = 0x2550b8u;
    if (GPR_S64(ctx, 8) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_2550bc:
    // 0x2550bc: 0x4b4b4b4b  vmaddw.xz   $vf13, $vf9, $vf11w
    ctx->pc = 0x2550bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_2550c0:
    // 0x2550c0: 0xff874b69  sd          $a3, 0x4B69($gp)
    ctx->pc = 0x2550c0u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 19305), GPR_U64(ctx, 7));
label_2550c4:
    // 0x2550c4: 0x3000f400  andi        $zero, $zero, 0xF400
    ctx->pc = 0x2550c4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)62464);
label_2550c8:
    // 0x2550c8: 0x4b011701  vaddy.x     $vf28, $vf2, $vf1y
    ctx->pc = 0x2550c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2550cc:
    // 0x2550cc: 0x694b4b4b  ldl         $t3, 0x4B4B($t2)
    ctx->pc = 0x2550ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 19275); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_2550d0:
    // 0x2550d0: 0xff874b  .word       0x00FF874B                   # movn        $s0, $a3, $ra # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2550d0u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
label_2550d4:
    // 0x2550d4: 0x2f00f5  .word       0x002F00F5                   # INVALID     $at, $t7, 0xF5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2550d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2550D4 raw=0x002F00F5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2550d8:
    // 0x2550d8: 0x3c5a000e  .word       0x3C5A000E                   # lui         $k0, 0xE # 00400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2550d8u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)14 << 16));
label_2550dc:
    // 0x2550dc: 0x3c5a6464  .word       0x3C5A6464                   # lui         $k0, 0x6464 # 00400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2550dcu;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)25700 << 16));
label_2550e0:
    // 0x2550e0: 0xf600ff78  sdc1        $f0, -0x88($s0)
    ctx->pc = 0x2550e0u;
//     throw std::runtime_error("Unhandled opcode: 0x3D at 0x2550E0 raw=0xF600FF78");
 /* MITIGATED */
label_2550e4:
    // 0x2550e4: 0xe012f00  jal         func_804BC00
label_2550e8:
    if (ctx->pc == 0x2550E8u) {
        ctx->pc = 0x2550E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2550E4u;
        // 0x2550e8: 0x64415f00  daddiu      $at, $v0, 0x5F00 (Delay Slot)
        SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)24320);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2550ECu;
        goto label_2550ec;
    }
    ctx->pc = 0x2550E4u;
    SET_GPR_U32(ctx, 31, 0x2550ECu);
    ctx->pc = 0x2550E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2550E4u;
    // 0x2550e8: 0x64415f00  daddiu      $at, $v0, 0x5F00 (Delay Slot)
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)24320);
    ctx->in_delay_slot = false;
    ctx->pc = 0x804BC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x804BC00u, 0x2550E4u, 0x2550ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2550ECu;
label_2550ec:
    // 0x2550ec: 0x78415f64  lq          $at, 0x5F64($v0)
    ctx->pc = 0x2550ecu;
    SET_GPR_VEC(ctx, 1, READ128(ADD32(GPR_U32(ctx, 2), 24420)));
label_2550f0:
    // 0x2550f0: 0xf500ff  .word       0x00F500FF                   # dsra32      $zero, $s5, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2550f0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 21) >> (32 + 3));
label_2550f4:
    // 0x2550f4: 0xf012f  .word       0x000F012F                   # dsubu       $zero, $zero, $t7 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2550f4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 15));
label_2550f8:
    // 0x2550f8: 0x64643c5a  daddiu      $a0, $v1, 0x3C5A
    ctx->pc = 0x2550f8u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)15450);
label_2550fc:
    // 0x2550fc: 0xff783c5a  sd          $t8, 0x3C5A($k1)
    ctx->pc = 0x2550fcu;
    WRITE64(ADD32(GPR_U32(ctx, 27), 15450), GPR_U64(ctx, 24));
label_255100:
    // 0x255100: 0x2f00f600  sltiu       $zero, $t8, -0xA00
    ctx->pc = 0x255100u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)(int64_t)(int32_t)4294964736) ? 1 : 0);
label_255104:
    // 0x255104: 0x64000f00  daddiu      $zero, $zero, 0xF00
    ctx->pc = 0x255104u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)3840);
label_255108:
    // 0x255108: 0x5f646446  .word       0x5F646446                   # bgtzl       $k1, . + 4 + (0x6446 << 2) # 00040000 <InstrIdType: CPU_NORMAL>
label_25510c:
    if (ctx->pc == 0x25510Cu) {
        ctx->pc = 0x25510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255108u;
        // 0x25510c: 0xff7841  .word       0x00FF7841                   # INVALID     $a3, $ra, 0x7841 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x25510C raw=0x00FF7841"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x255110u;
        goto label_255110;
    }
    ctx->pc = 0x255108u;
    {
        const bool branch_taken_0x255108 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x255108) {
            ctx->pc = 0x25510Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255108u;
            // 0x25510c: 0xff7841  .word       0x00FF7841                   # INVALID     $a3, $ra, 0x7841 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //             throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x25510C raw=0x00FF7841"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E224u;
            { ctx->pc = 0x26e224; return; }
        }
    }
    ctx->pc = 0x255110u;
label_255110:
    // 0x255110: 0x2f00f1  tgeu        $at, $t7, 3
    ctx->pc = 0x255110u;
    if (GPR_U64(ctx, 1) >= GPR_U64(ctx, 15)) { runtime->handleTrap(rdram, ctx); }
label_255114:
    // 0x255114: 0x46460015  .word       0x46460015                   # INVALID     $s2, $a2, 0x15 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x255114u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x15 at 0x255114 raw=0x46460015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255118:
    // 0x255118: 0x46644646  .word       0x46644646                   # INVALID     $s3, $a0, 0x4646 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x255118u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x13, function 0x6 at 0x255118 raw=0x46644646"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25511c:
    // 0x25511c: 0xda00ff82  lqc2        $vf0, -0x7E($s0)
    ctx->pc = 0x25511cu;
    ctx->vu0_vf[0] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 4294967170)));
label_255120:
    // 0x255120: 0x17013000  bne         $t8, $at, . + 4 + (0x3000 << 2)
label_255124:
    if (ctx->pc == 0x255124u) {
        ctx->pc = 0x255124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255120u;
        // 0x255124: 0x4b4b4b00  vaddx.xz    $vf12, $vf9, $vf11x (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x255128u;
        goto label_255128;
    }
    ctx->pc = 0x255120u;
    {
        const bool branch_taken_0x255120 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 1));
        ctx->pc = 0x255124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255120u;
        // 0x255124: 0x4b4b4b00  vaddx.xz    $vf12, $vf9, $vf11x (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x255120) {
            ctx->pc = 0x261124u;
            { ctx->pc = 0x261124; return; }
        }
    }
    ctx->pc = 0x255128u;
label_255128:
    // 0x255128: 0x874b694b  lh          $t3, 0x694B($k0)
    ctx->pc = 0x255128u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 26), 26955)));
label_25512c:
    // 0x25512c: 0xeb02ff  .word       0x00EB02FF                   # dsra32      $zero, $t3, 11 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25512cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 11) >> (32 + 11));
label_255130:
    // 0x255130: 0x113002b  sltu        $zero, $t0, $s3
    ctx->pc = 0x255130u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_255134:
    // 0x255134: 0x4b4b4b4b  vmaddw.xz   $vf13, $vf9, $vf11w
    ctx->pc = 0x255134u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_255138:
    // 0x255138: 0xff875073  sd          $a3, 0x5073($gp)
    ctx->pc = 0x255138u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 20595), GPR_U64(ctx, 7));
label_25513c:
    // 0x25513c: 0x2b00eb00  slti        $zero, $t8, -0x1500
    ctx->pc = 0x25513cu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)4294961920) ? 1 : 0);
label_255140:
    // 0x255140: 0x4b011301  vaddy.x     $vf12, $vf2, $vf1y
    ctx->pc = 0x255140u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_255144:
    // 0x255144: 0x734b4b4b  .word       0x734B4B4B                   # INVALID     $k0, $t3, 0x4B4B # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x255144u;
// //     throw std::runtime_error("Unhandled MMI instruction: function 0xB at 0x255144 raw=0x734B4B4B"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255148:
    // 0x255148: 0xff8750  .word       0x00FF8750                   # mfhi        $s0 # 00FF0740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255148u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_25514c:
    // 0x25514c: 0x32b00eb  .word       0x032B00EB                   # sltu        $zero, $t9, $t3 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25514cu;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
label_255150:
    // 0x255150: 0x4b4b0113  vmaxw.xz    $vf4, $vf0, $vf11w
    ctx->pc = 0x255150u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_255154:
    // 0x255154: 0x50734b4b  beql        $v1, $s3, . + 4 + (0x4B4B << 2)
label_255158:
    if (ctx->pc == 0x255158u) {
        ctx->pc = 0x255158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255154u;
        // 0x255158: 0xec00ff87  .word       0xEC00FF87                   # INVALID     $zero, $zero, -0x79 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//         throw std::runtime_error("Unhandled opcode: 0x3B at 0x255158 raw=0xEC00FF87");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x25515Cu;
        goto label_25515c;
    }
    ctx->pc = 0x255154u;
    {
        const bool branch_taken_0x255154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        if (branch_taken_0x255154) {
            ctx->pc = 0x255158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255154u;
            // 0x255158: 0xec00ff87  .word       0xEC00FF87                   # INVALID     $zero, $zero, -0x79 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//             throw std::runtime_error("Unhandled opcode: 0x3B at 0x255158 raw=0xEC00FF87");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x267E84u;
            { ctx->pc = 0x267e84; return; }
        }
    }
    ctx->pc = 0x25515Cu;
label_25515c:
    // 0x25515c: 0x13082b00  beq         $t8, $t0, . + 4 + (0x2B00 << 2)
label_255160:
    if (ctx->pc == 0x255160u) {
        ctx->pc = 0x255160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25515Cu;
        // 0x255160: 0x4b4b4b00  vaddx.xz    $vf12, $vf9, $vf11x (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x255164u;
        goto label_255164;
    }
    ctx->pc = 0x25515Cu;
    {
        const bool branch_taken_0x25515c = (GPR_U64(ctx, 24) == GPR_U64(ctx, 8));
        ctx->pc = 0x255160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25515Cu;
        // 0x255160: 0x4b4b4b00  vaddx.xz    $vf12, $vf9, $vf11x (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25515c) {
            ctx->pc = 0x25FD60u;
            { ctx->pc = 0x25fd60; return; }
        }
    }
    ctx->pc = 0x255164u;
label_255164:
    // 0x255164: 0x8750734b  lh          $s0, 0x734B($k0)
    ctx->pc = 0x255164u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 26), 29515)));
label_255168:
    // 0x255168: 0xf700ff  .word       0x00F700FF                   # dsra32      $zero, $s7, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255168u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (32 + 3));
label_25516c:
    // 0x25516c: 0xe012b  .word       0x000E012B                   # sltu        $zero, $zero, $t6 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25516cu;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
label_255170:
    // 0x255170: 0x64645064  daddiu      $a0, $v1, 0x5064
    ctx->pc = 0x255170u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)20580);
label_255174:
    // 0x255174: 0xff783c5a  sd          $t8, 0x3C5A($k1)
    ctx->pc = 0x255174u;
    WRITE64(ADD32(GPR_U32(ctx, 27), 15450), GPR_U64(ctx, 24));
label_255178:
    // 0x255178: 0x2b00f800  slti        $zero, $t8, -0x800
    ctx->pc = 0x255178u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)4294965248) ? 1 : 0);
label_25517c:
    // 0x25517c: 0x6e000e08  ldr         $zero, 0xE08($s0)
    ctx->pc = 0x25517cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3592); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_255180:
    // 0x255180: 0x5f64645a  .word       0x5F64645A                   # bgtzl       $k1, . + 4 + (0x645A << 2) # 00040000 <InstrIdType: CPU_NORMAL>
label_255184:
    if (ctx->pc == 0x255184u) {
        ctx->pc = 0x255184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255180u;
        // 0x255184: 0xff7841  .word       0x00FF7841                   # INVALID     $a3, $ra, 0x7841 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x255184 raw=0x00FF7841"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x255188u;
        goto label_255188;
    }
    ctx->pc = 0x255180u;
    {
        const bool branch_taken_0x255180 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x255180) {
            ctx->pc = 0x255184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255180u;
            // 0x255184: 0xff7841  .word       0x00FF7841                   # INVALID     $a3, $ra, 0x7841 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //             throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x255184 raw=0x00FF7841"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E2ECu;
            { ctx->pc = 0x26e2ec; return; }
        }
    }
    ctx->pc = 0x255188u;
label_255188:
    // 0x255188: 0x3400f9  .word       0x003400F9                   # INVALID     $at, $s4, 0xF9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255188u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x255188 raw=0x003400F9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25518c:
    // 0x25518c: 0x4b4b0010  vmaxx.xz    $vf0, $vf0, $vf11x
    ctx->pc = 0x25518cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
label_255190:
    // 0x255190: 0x46694b4b  .word       0x46694B4B                   # INVALID     $s3, $t1, 0x4B4B # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x255190u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x13, function 0xB at 0x255190 raw=0x46694B4B"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255194:
    // 0x255194: 0xf900ff8c  sqc2        $vf0, -0x74($t0)
    ctx->pc = 0x255194u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 4294967180), _mm_castps_si128(ctx->vu0_vf[0]));
label_255198:
    // 0x255198: 0x14003400  bnez        $zero, . + 4 + (0x3400 << 2)
label_25519c:
    if (ctx->pc == 0x25519Cu) {
        ctx->pc = 0x25519Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255198u;
        // 0x25519c: 0x4b4b4b00  vaddx.xz    $vf12, $vf9, $vf11x (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2551A0u;
        goto label_2551a0;
    }
    ctx->pc = 0x255198u;
    {
        const bool branch_taken_0x255198 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 0));
        ctx->pc = 0x25519Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255198u;
        // 0x25519c: 0x4b4b4b00  vaddx.xz    $vf12, $vf9, $vf11x (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x255198) {
            ctx->pc = 0x26219Cu;
            { ctx->pc = 0x26219c; return; }
        }
    }
    ctx->pc = 0x2551A0u;
label_2551a0:
    // 0x2551a0: 0x8c46694b  lw          $a2, 0x694B($v0)
    ctx->pc = 0x2551a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26955)));
label_2551a4:
    // 0x2551a4: 0xf900ff  .word       0x00F900FF                   # dsra32      $zero, $t9, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2551a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 25) >> (32 + 3));
label_2551a8:
    // 0x2551a8: 0x160034  teq         $zero, $s6, 0
    ctx->pc = 0x2551a8u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_2551ac:
    // 0x2551ac: 0x4b4b4b4b  vmaddw.xz   $vf13, $vf9, $vf11w
    ctx->pc = 0x2551acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_2551b0:
    // 0x2551b0: 0xff8c4669  sd          $t4, 0x4669($gp)
    ctx->pc = 0x2551b0u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 18025), GPR_U64(ctx, 12));
label_2551b4:
    // 0x2551b4: 0x3700fa00  ori         $zero, $t8, 0xFA00
    ctx->pc = 0x2551b4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)64000);
label_2551b8:
    // 0x2551b8: 0x50001001  beql        $zero, $zero, . + 4 + (0x1001 << 2)
label_2551bc:
    if (ctx->pc == 0x2551BCu) {
        ctx->pc = 0x2551BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2551B8u;
        // 0x2551bc: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2551C0u;
        goto label_2551c0;
    }
    ctx->pc = 0x2551B8u;
    {
        const bool branch_taken_0x2551b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2551b8) {
            ctx->pc = 0x2551BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2551B8u;
            // 0x2551bc: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2591C0u;
            { ctx->pc = 0x2591c0; return; }
        }
    }
    ctx->pc = 0x2551C0u;
label_2551c0:
    // 0x2551c0: 0xff874b  .word       0x00FF874B                   # movn        $s0, $a3, $ra # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2551c0u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
label_2551c4:
    // 0x2551c4: 0x13700fa  .word       0x013700FA                   # dsrl        $zero, $s7, 3 # 01200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2551c4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 23) >> 3);
label_2551c8:
    // 0x2551c8: 0x50500014  beql        $v0, $s0, . + 4 + (0x14 << 2)
label_2551cc:
    if (ctx->pc == 0x2551CCu) {
        ctx->pc = 0x2551CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2551C8u;
        // 0x2551cc: 0x4b6e5050  vmaxx.xzw   $vf1, $vf10, $vf14x (Delay Slot)
        { __m128 res = _mm_max_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2551D0u;
        goto label_2551d0;
    }
    ctx->pc = 0x2551C8u;
    {
        const bool branch_taken_0x2551c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x2551c8) {
            ctx->pc = 0x2551CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2551C8u;
            // 0x2551cc: 0x4b6e5050  vmaxx.xzw   $vf1, $vf10, $vf14x (Delay Slot)
            { __m128 res = _mm_max_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25521Cu;
            goto label_25521c;
        }
    }
    ctx->pc = 0x2551D0u;
label_2551d0:
    // 0x2551d0: 0xfa00ff87  sqc2        $vf0, -0x79($s0)
    ctx->pc = 0x2551d0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4294967175), _mm_castps_si128(ctx->vu0_vf[0]));
label_2551d4:
    // 0x2551d4: 0x16013700  bne         $s0, $at, . + 4 + (0x3700 << 2)
label_2551d8:
    if (ctx->pc == 0x2551D8u) {
        ctx->pc = 0x2551D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2551D4u;
        // 0x2551d8: 0x50505000  beql        $v0, $s0, . + 4 + (0x5000 << 2) (Delay Slot)
        // Likely branch instruction at 0x2551D8 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2551DCu;
        goto label_2551dc;
    }
    ctx->pc = 0x2551D4u;
    {
        const bool branch_taken_0x2551d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 1));
        ctx->pc = 0x2551D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2551D4u;
        // 0x2551d8: 0x50505000  beql        $v0, $s0, . + 4 + (0x5000 << 2) (Delay Slot)
        // Likely branch instruction at 0x2551D8 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2551d4) {
            ctx->pc = 0x262DD8u;
            { ctx->pc = 0x262dd8; return; }
        }
    }
    ctx->pc = 0x2551DCu;
label_2551dc:
    // 0x2551dc: 0x874b6e50  lh          $t3, 0x6E50($k0)
    ctx->pc = 0x2551dcu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 26), 28240)));
label_2551e0:
    // 0x2551e0: 0xfb00ff  .word       0x00FB00FF                   # dsra32      $zero, $k1, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2551e0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 27) >> (32 + 3));
label_2551e4:
    // 0x2551e4: 0x1110035  .word       0x01110035                   # INVALID     $t0, $s1, 0x35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2551e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2551E4 raw=0x01110035"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2551e8:
    // 0x2551e8: 0x5555fa55  bnel        $t2, $s5, . + 4 + (-0x5AB << 2)
label_2551ec:
    if (ctx->pc == 0x2551ECu) {
        ctx->pc = 0x2551ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2551E8u;
        // 0x2551ec: 0xff8c4b6e  sd          $t4, 0x4B6E($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2551F0u;
        goto label_2551f0;
    }
    ctx->pc = 0x2551E8u;
    {
        const bool branch_taken_0x2551e8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 21));
        if (branch_taken_0x2551e8) {
            ctx->pc = 0x2551ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2551E8u;
            // 0x2551ec: 0xff8c4b6e  sd          $t4, 0x4B6E($gp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x253b40; return; }
        }
    }
    ctx->pc = 0x2551F0u;
label_2551f0:
    // 0x2551f0: 0x3500fb00  ori         $zero, $t0, 0xFB00
    ctx->pc = 0x2551f0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)64256);
label_2551f4:
    // 0x2551f4: 0x55011501  bnel        $t0, $at, . + 4 + (0x1501 << 2)
label_2551f8:
    if (ctx->pc == 0x2551F8u) {
        ctx->pc = 0x2551F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2551F4u;
        // 0x2551f8: 0x6e5555fa  ldr         $s5, 0x55FA($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 22010); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2551FCu;
        goto label_2551fc;
    }
    ctx->pc = 0x2551F4u;
    {
        const bool branch_taken_0x2551f4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 1));
        if (branch_taken_0x2551f4) {
            ctx->pc = 0x2551F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2551F4u;
            // 0x2551f8: 0x6e5555fa  ldr         $s5, 0x55FA($s2) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 18), 22010); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A5FCu;
            { ctx->pc = 0x25a5fc; return; }
        }
    }
    ctx->pc = 0x2551FCu;
label_2551fc:
    // 0x2551fc: 0xff8c4b  .word       0x00FF8C4B                   # movn        $s1, $a3, $ra # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2551fcu;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 7));
label_255200:
    // 0x255200: 0x13500fb  .word       0x013500FB                   # dsra        $zero, $s5, 3 # 01200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255200u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 21) >> 3);
label_255204:
    // 0x255204: 0xfa550117  sqc2        $vf21, 0x117($s2)
    ctx->pc = 0x255204u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 279), _mm_castps_si128(ctx->vu0_vf[21]));
label_255208:
    // 0x255208: 0x4b6e5555  vminiy.xzw  $vf21, $vf10, $vf14y
    ctx->pc = 0x255208u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
label_25520c:
    // 0x25520c: 0xe900ff8c  swc2        $0, -0x74($t0)
    ctx->pc = 0x25520cu;
//     throw std::runtime_error("Unhandled opcode: 0x3A at 0x25520C raw=0xE900FF8C");
 /* MITIGATED */
label_255210:
    // 0x255210: 0x11003700  beqz        $t0, . + 4 + (0x3700 << 2)
label_255214:
    if (ctx->pc == 0x255214u) {
        ctx->pc = 0x255214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255210u;
        // 0x255214: 0x55555501  bnel        $t2, $s5, . + 4 + (0x5501 << 2) (Delay Slot)
        // Likely branch instruction at 0x255214 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x255218u;
        goto label_255218;
    }
    ctx->pc = 0x255210u;
    {
        const bool branch_taken_0x255210 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x255214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255210u;
        // 0x255214: 0x55555501  bnel        $t2, $s5, . + 4 + (0x5501 << 2) (Delay Slot)
        // Likely branch instruction at 0x255214 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x255210) {
            ctx->pc = 0x262E14u;
            { ctx->pc = 0x262e14; return; }
        }
    }
    ctx->pc = 0x255218u;
label_255218:
    // 0x255218: 0x8c4b6e55  lw          $t3, 0x6E55($v0)
    ctx->pc = 0x255218u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28245)));
label_25521c:
    // 0x25521c: 0xea00ff  .word       0x00EA00FF                   # dsra32      $zero, $t2, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25521cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 10) >> (32 + 3));
label_255220:
    // 0x255220: 0x1110135  .word       0x01110135                   # INVALID     $t0, $s1, 0x135 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255220u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x255220 raw=0x01110135"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255224:
    // 0x255224: 0x55555555  bnel        $t2, $s5, . + 4 + (0x5555 << 2)
label_255228:
    if (ctx->pc == 0x255228u) {
        ctx->pc = 0x255228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255224u;
        // 0x255228: 0xff8c4b6e  sd          $t4, 0x4B6E($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25522Cu;
        goto label_25522c;
    }
    ctx->pc = 0x255224u;
    {
        const bool branch_taken_0x255224 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 21));
        if (branch_taken_0x255224) {
            ctx->pc = 0x255228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255224u;
            // 0x255228: 0xff8c4b6e  sd          $t4, 0x4B6E($gp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A77Cu;
            { ctx->pc = 0x26a77c; return; }
        }
    }
    ctx->pc = 0x25522Cu;
label_25522c:
    // 0x25522c: 0x3700e900  ori         $zero, $t8, 0xE900
    ctx->pc = 0x25522cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)59648);
label_255230:
    // 0x255230: 0x55011500  bnel        $t0, $at, . + 4 + (0x1500 << 2)
label_255234:
    if (ctx->pc == 0x255234u) {
        ctx->pc = 0x255234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255230u;
        // 0x255234: 0x6e555555  ldr         $s5, 0x5555($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 21845); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x255238u;
        goto label_255238;
    }
    ctx->pc = 0x255230u;
    {
        const bool branch_taken_0x255230 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 1));
        if (branch_taken_0x255230) {
            ctx->pc = 0x255234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255230u;
            // 0x255234: 0x6e555555  ldr         $s5, 0x5555($s2) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 18), 21845); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A634u;
            { ctx->pc = 0x25a634; return; }
        }
    }
    ctx->pc = 0x255238u;
label_255238:
    // 0x255238: 0xff8c4b  .word       0x00FF8C4B                   # movn        $s1, $a3, $ra # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255238u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 7));
label_25523c:
    // 0x25523c: 0x13500ea  .word       0x013500EA                   # slt         $zero, $t1, $s5 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25523cu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_255240:
    // 0x255240: 0x55550115  bnel        $t2, $s5, . + 4 + (0x115 << 2)
label_255244:
    if (ctx->pc == 0x255244u) {
        ctx->pc = 0x255244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255240u;
        // 0x255244: 0x4b6e5555  vminiy.xzw  $vf21, $vf10, $vf14y (Delay Slot)
        { __m128 res = _mm_min_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x255248u;
        goto label_255248;
    }
    ctx->pc = 0x255240u;
    {
        const bool branch_taken_0x255240 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 21));
        if (branch_taken_0x255240) {
            ctx->pc = 0x255244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255240u;
            // 0x255244: 0x4b6e5555  vminiy.xzw  $vf21, $vf10, $vf14y (Delay Slot)
            { __m128 res = _mm_min_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x255698u;
            goto label_255698;
        }
    }
    ctx->pc = 0x255248u;
label_255248:
    // 0x255248: 0xe900ff8c  swc2        $0, -0x74($t0)
    ctx->pc = 0x255248u;
//     throw std::runtime_error("Unhandled opcode: 0x3A at 0x255248 raw=0xE900FF8C");
 /* MITIGATED */
label_25524c:
    // 0x25524c: 0x17013700  bne         $t8, $at, . + 4 + (0x3700 << 2)
label_255250:
    if (ctx->pc == 0x255250u) {
        ctx->pc = 0x255250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25524Cu;
        // 0x255250: 0x55555501  bnel        $t2, $s5, . + 4 + (0x5501 << 2) (Delay Slot)
        // Likely branch instruction at 0x255250 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x255254u;
        goto label_255254;
    }
    ctx->pc = 0x25524Cu;
    {
        const bool branch_taken_0x25524c = (GPR_U64(ctx, 24) != GPR_U64(ctx, 1));
        ctx->pc = 0x255250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25524Cu;
        // 0x255250: 0x55555501  bnel        $t2, $s5, . + 4 + (0x5501 << 2) (Delay Slot)
        // Likely branch instruction at 0x255250 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x25524c) {
            ctx->pc = 0x262E50u;
            { ctx->pc = 0x262e50; return; }
        }
    }
    ctx->pc = 0x255254u;
label_255254:
    // 0x255254: 0x8c4b6e55  lw          $t3, 0x6E55($v0)
    ctx->pc = 0x255254u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28245)));
label_255258:
    // 0x255258: 0xea00ff  .word       0x00EA00FF                   # dsra32      $zero, $t2, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255258u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 10) >> (32 + 3));
label_25525c:
    // 0x25525c: 0x1170035  .word       0x01170035                   # INVALID     $t0, $s7, 0x35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25525cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x25525C raw=0x01170035"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255260:
    // 0x255260: 0x55555555  bnel        $t2, $s5, . + 4 + (0x5555 << 2)
label_255264:
    if (ctx->pc == 0x255264u) {
        ctx->pc = 0x255264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255260u;
        // 0x255264: 0xff8c4b6e  sd          $t4, 0x4B6E($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255268u;
        goto label_255268;
    }
    ctx->pc = 0x255260u;
    {
        const bool branch_taken_0x255260 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 21));
        if (branch_taken_0x255260) {
            ctx->pc = 0x255264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255260u;
            // 0x255264: 0xff8c4b6e  sd          $t4, 0x4B6E($gp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A7B8u;
            { ctx->pc = 0x26a7b8; return; }
        }
    }
    ctx->pc = 0x255268u;
label_255268:
    // 0x255268: 0x31010000  andi        $at, $t0, 0x0
    ctx->pc = 0x255268u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)0);
label_25526c:
    // 0x25526c: 0x21508  .word       0x00021508                   # jr          $zero # 00021500 <InstrIdType: CPU_SPECIAL>
label_255270:
    if (ctx->pc == 0x255270u) {
        ctx->pc = 0x255274u;
        goto label_255274;
    }
    ctx->pc = 0x25526Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25526Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x255274u;
label_255274:
    // 0x255274: 0xff0000  .word       0x00FF0000                   # sll         $zero, $ra, 0 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255274u;
    
label_255278:
    // 0x255278: 0x8310100  j           func_C40400
label_25527c:
    if (ctx->pc == 0x25527Cu) {
        ctx->pc = 0x25527Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255278u;
        // 0x25527c: 0x215  .word       0x00000215                   # INVALID     $zero, $zero, 0x215 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x25527C raw=0x00000215"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x255280u;
        goto label_255280;
    }
    ctx->pc = 0x255278u;
    ctx->pc = 0x25527Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255278u;
    // 0x25527c: 0x215  .word       0x00000215                   # INVALID     $zero, $zero, 0x215 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x25527C raw=0x00000215"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
    ctx->in_delay_slot = false;
    ctx->pc = 0xC40400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC40400u, 0x255278u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x255280u;
label_255280:
    // 0x255280: 0x0  nop
    ctx->pc = 0x255280u;
    // NOP
label_255284:
    // 0x255284: 0xfc00ff00  sd          $zero, -0x100($zero)
    ctx->pc = 0x255284u;
    runtime->Store64(rdram, ctx, 0xFFFFFF00u, GPR_U64(ctx, 0));
label_255288:
    // 0x255288: 0xf003400  jal         func_C00D000
label_25528c:
    if (ctx->pc == 0x25528Cu) {
        ctx->pc = 0x25528Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255288u;
        // 0x25528c: 0x64415a00  daddiu      $at, $v0, 0x5A00 (Delay Slot)
        SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)23040);
        ctx->in_delay_slot = false;
        ctx->pc = 0x255290u;
        goto label_255290;
    }
    ctx->pc = 0x255288u;
    SET_GPR_U32(ctx, 31, 0x255290u);
    ctx->pc = 0x25528Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255288u;
    // 0x25528c: 0x64415a00  daddiu      $at, $v0, 0x5A00 (Delay Slot)
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)23040);
    ctx->in_delay_slot = false;
    ctx->pc = 0xC00D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC00D000u, 0x255288u, 0x255290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255290u;
label_255290:
    // 0x255290: 0x783c5a64  lq          $gp, 0x5A64($at)
    ctx->pc = 0x255290u;
    SET_GPR_VEC(ctx, 28, READ128(ADD32(GPR_U32(ctx, 1), 23140)));
label_255294:
    // 0x255294: 0xfd00ff  .word       0x00FD00FF                   # dsra32      $zero, $sp, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255294u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 29) >> (32 + 3));
label_255298:
    // 0x255298: 0xf0134  teq         $zero, $t7, 4
    ctx->pc = 0x255298u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 15)) { runtime->handleTrap(rdram, ctx); }
label_25529c:
    // 0x25529c: 0x64644664  daddiu      $a0, $v1, 0x4664
    ctx->pc = 0x25529cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)18020);
label_2552a0:
    // 0x2552a0: 0xff78415f  sd          $t8, 0x415F($k1)
    ctx->pc = 0x2552a0u;
    WRITE64(ADD32(GPR_U32(ctx, 27), 16735), GPR_U64(ctx, 24));
label_2552a4:
    // 0x2552a4: 0x3700f100  ori         $zero, $t8, 0xF100
    ctx->pc = 0x2552a4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)61696);
label_2552a8:
    // 0x2552a8: 0x55001500  bnel        $t0, $zero, . + 4 + (0x1500 << 2)
label_2552ac:
    if (ctx->pc == 0x2552ACu) {
        ctx->pc = 0x2552ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2552A8u;
        // 0x2552ac: 0x6e555555  ldr         $s5, 0x5555($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 21845); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2552B0u;
        goto label_2552b0;
    }
    ctx->pc = 0x2552A8u;
    {
        const bool branch_taken_0x2552a8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x2552a8) {
            ctx->pc = 0x2552ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2552A8u;
            // 0x2552ac: 0x6e555555  ldr         $s5, 0x5555($s2) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 18), 21845); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A6ACu;
            { ctx->pc = 0x25a6ac; return; }
        }
    }
    ctx->pc = 0x2552B0u;
label_2552b0:
    // 0x2552b0: 0xff8c4b  .word       0x00FF8C4B                   # movn        $s1, $a3, $ra # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2552b0u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 7));
label_2552b4:
    // 0x2552b4: 0x13700da  .word       0x013700DA                   # div         $zero, $t1, $s7 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2552b4u;
    { int32_t divisor = GPR_S32(ctx, 23);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2552b8:
    // 0x2552b8: 0x55550017  bnel        $t2, $s5, . + 4 + (0x17 << 2)
label_2552bc:
    if (ctx->pc == 0x2552BCu) {
        ctx->pc = 0x2552BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2552B8u;
        // 0x2552bc: 0x4b6e5555  vminiy.xzw  $vf21, $vf10, $vf14y (Delay Slot)
        { __m128 res = _mm_min_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2552C0u;
        goto label_2552c0;
    }
    ctx->pc = 0x2552B8u;
    {
        const bool branch_taken_0x2552b8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 21));
        if (branch_taken_0x2552b8) {
            ctx->pc = 0x2552BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2552B8u;
            // 0x2552bc: 0x4b6e5555  vminiy.xzw  $vf21, $vf10, $vf14y (Delay Slot)
            { __m128 res = _mm_min_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x255318u;
            goto label_255318;
        }
    }
    ctx->pc = 0x2552C0u;
label_2552c0:
    // 0x2552c0: 0xfe22ff8c  sd          $v0, -0x74($s1)
    ctx->pc = 0x2552c0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 4294967180), GPR_U64(ctx, 2));
label_2552c4:
    // 0x2552c4: 0x13003600  beqz        $t8, . + 4 + (0x3600 << 2)
label_2552c8:
    if (ctx->pc == 0x2552C8u) {
        ctx->pc = 0x2552C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2552C4u;
        // 0x2552c8: 0x4b4b4b01  vaddy.xz    $vf12, $vf9, $vf11y (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2552CCu;
        goto label_2552cc;
    }
    ctx->pc = 0x2552C4u;
    {
        const bool branch_taken_0x2552c4 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x2552C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2552C4u;
        // 0x2552c8: 0x4b4b4b01  vaddy.xz    $vf12, $vf9, $vf11y (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2552c4) {
            ctx->pc = 0x262AC8u;
            { ctx->pc = 0x262ac8; return; }
        }
    }
    ctx->pc = 0x2552CCu;
label_2552cc:
    // 0x2552cc: 0x874b734b  lh          $t3, 0x734B($k0)
    ctx->pc = 0x2552ccu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 26), 29515)));
label_2552d0:
    // 0x2552d0: 0xfe00ff  .word       0x00FE00FF                   # dsra32      $zero, $fp, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2552d0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 30) >> (32 + 3));
label_2552d4:
    // 0x2552d4: 0x1130136  tne         $t0, $s3, 4
    ctx->pc = 0x2552d4u;
    if (GPR_U64(ctx, 8) != GPR_U64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_2552d8:
    // 0x2552d8: 0x4b4b4b4b  vmaddw.xz   $vf13, $vf9, $vf11w
    ctx->pc = 0x2552d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_2552dc:
    // 0x2552dc: 0xff874b73  sd          $a3, 0x4B73($gp)
    ctx->pc = 0x2552dcu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 19315), GPR_U64(ctx, 7));
label_2552e0:
    // 0x2552e0: 0x3600fe00  ori         $zero, $s0, 0xFE00
    ctx->pc = 0x2552e0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65024);
label_2552e4:
    // 0x2552e4: 0x4b011300  vaddx.x     $vf12, $vf2, $vf1x
    ctx->pc = 0x2552e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_2552e8:
    // 0x2552e8: 0x734b4b4b  .word       0x734B4B4B                   # INVALID     $k0, $t3, 0x4B4B # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2552e8u;
// //     throw std::runtime_error("Unhandled MMI instruction: function 0xB at 0x2552E8 raw=0x734B4B4B"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2552ec:
    // 0x2552ec: 0xff874b  .word       0x00FF874B                   # movn        $s0, $a3, $ra # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2552ecu;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
label_2552f0:
    // 0x2552f0: 0x3600ff  .word       0x003600FF                   # dsra32      $zero, $s6, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2552f0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 22) >> (32 + 3));
label_2552f4:
    // 0x2552f4: 0x4b4b0013  vmaxw.xz    $vf0, $vf0, $vf11w
    ctx->pc = 0x2552f4u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
label_2552f8:
    // 0x2552f8: 0x4b734b4b  vmaddw.xzw  $vf13, $vf9, $vf19w
    ctx->pc = 0x2552f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_2552fc:
    // 0x2552fc: 0xff87  .word       0x0000FF87                   # srav        $ra, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2552fcu;
    SET_GPR_S32(ctx, 31, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_255300:
    // 0x255300: 0x15083101  bne         $t0, $t0, . + 4 + (0x3101 << 2)
label_255304:
    if (ctx->pc == 0x255304u) {
        ctx->pc = 0x255304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255300u;
        // 0x255304: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255308u;
        goto label_255308;
    }
    ctx->pc = 0x255300u;
    {
        const bool branch_taken_0x255300 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 8));
        ctx->pc = 0x255304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255300u;
        // 0x255304: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255300) {
            ctx->pc = 0x261708u;
            { ctx->pc = 0x261708; return; }
        }
    }
    ctx->pc = 0x255308u;
label_255308:
    // 0x255308: 0x0  nop
    ctx->pc = 0x255308u;
    // NOP
label_25530c:
    // 0x25530c: 0x10000ff  .word       0x010000FF                   # dsra32      $zero, $zero, 3 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25530cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 3));
label_255310:
    // 0x255310: 0x2150831  tgeu        $s0, $s5, 32
    ctx->pc = 0x255310u;
    if (GPR_U64(ctx, 16) >= GPR_U64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_255314:
    // 0x255314: 0x0  nop
    ctx->pc = 0x255314u;
    // NOP
label_255318:
    // 0x255318: 0xff000000  sd          $zero, 0x0($t8)
    ctx->pc = 0x255318u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 0));
label_25531c:
    // 0x25531c: 0xdc00  sll         $k1, $zero, 16
    ctx->pc = 0x25531cu;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_255320:
    // 0x255320: 0x64000000  daddiu      $zero, $zero, 0x0
    ctx->pc = 0x255320u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)0);
label_255324:
    // 0x255324: 0x78646464  lq          $a0, 0x6464($v1)
    ctx->pc = 0x255324u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 25700)));
label_255328:
    // 0x255328: 0xff8c50  .word       0x00FF8C50                   # mfhi        $s1 # 00FF0440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255328u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_25532c:
    // 0x25532c: 0x0  nop
    ctx->pc = 0x25532cu;
    // NOP
label_255330:
    // 0x255330: 0x64640000  daddiu      $a0, $v1, 0x0
    ctx->pc = 0x255330u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)0);
label_255334:
    // 0x255334: 0x50786464  beql        $v1, $t8, . + 4 + (0x6464 << 2)
label_255338:
    if (ctx->pc == 0x255338u) {
        ctx->pc = 0x255338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255334u;
        // 0x255338: 0xff8c  syscall     1022 (Delay Slot)
        ctx->pc = 0x25533Cu;
        runtime->handleSyscall(rdram, ctx, 0x3FEu);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25533Cu;
        goto label_25533c;
    }
    ctx->pc = 0x255334u;
    {
        const bool branch_taken_0x255334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 24));
        if (branch_taken_0x255334) {
            ctx->pc = 0x255338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255334u;
            // 0x255338: 0xff8c  syscall     1022 (Delay Slot)
            ctx->pc = 0x25533Cu;
            runtime->handleSyscall(rdram, ctx, 0x3FEu);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E4C8u;
            { ctx->pc = 0x26e4c8; return; }
        }
    }
    ctx->pc = 0x25533Cu;
label_25533c:
    // 0x25533c: 0x0  nop
    ctx->pc = 0x25533cu;
    // NOP
label_255340:
    // 0x255340: 0x10002  srl         $zero, $at, 0
    ctx->pc = 0x255340u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 1), 0));
label_255344:
    // 0x255344: 0x2010201  .word       0x02010201                   # INVALID     $s0, $at, 0x201 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255344u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x255344 raw=0x02010201"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255348:
    // 0x255348: 0x20101  .word       0x00020101                   # INVALID     $zero, $v0, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255348u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x255348 raw=0x00020101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25534c:
    // 0x25534c: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x25534cu;
    
label_255350:
    // 0x255350: 0x2010202  .word       0x02010202                   # srl         $zero, $at, 8 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255350u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 1), 8));
label_255354:
    // 0x255354: 0x2010000  .word       0x02010000                   # sll         $zero, $at, 0 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255354u;
    
label_255358:
    // 0x255358: 0x20200  sll         $zero, $v0, 8
    ctx->pc = 0x255358u;
    
label_25535c:
    // 0x25535c: 0x10200  sll         $zero, $at, 8
    ctx->pc = 0x25535cu;
    
label_255360:
    // 0x255360: 0x2010001  .word       0x02010001                   # INVALID     $s0, $at, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255360u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x255360 raw=0x02010001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255364:
    // 0x255364: 0x10001  .word       0x00010001                   # INVALID     $zero, $at, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255364u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x255364 raw=0x00010001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255368:
    // 0x255368: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255368u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x255368 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25536c:
    // 0x25536c: 0x0  nop
    ctx->pc = 0x25536cu;
    // NOP
label_255370:
    // 0x255370: 0x9070503  j           func_41C140C
label_255374:
    if (ctx->pc == 0x255374u) {
        ctx->pc = 0x255374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255370u;
        // 0x255374: 0x1e140a00  .word       0x1E140A00                   # bgtz        $s0, . + 4 + (0xA00 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x255374 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x255378u;
        goto label_255378;
    }
    ctx->pc = 0x255370u;
    ctx->pc = 0x255374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255370u;
    // 0x255374: 0x1e140a00  .word       0x1E140A00                   # bgtz        $s0, . + 4 + (0xA00 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
    // Likely branch instruction at 0x255374 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C140Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C140Cu, 0x255370u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x255378u;
label_255378:
    // 0x255378: 0x50463c32  beql        $v0, $a2, . + 4 + (0x3C32 << 2)
label_25537c:
    if (ctx->pc == 0x25537Cu) {
        ctx->pc = 0x25537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255378u;
        // 0x25537c: 0x2010000  .word       0x02010000                   # sll         $zero, $at, 0 # 02000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->in_delay_slot = false;
        ctx->pc = 0x255380u;
        goto label_255380;
    }
    ctx->pc = 0x255378u;
    {
        const bool branch_taken_0x255378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x255378) {
            ctx->pc = 0x25537Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255378u;
            // 0x25537c: 0x2010000  .word       0x02010000                   # sll         $zero, $at, 0 # 02000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            ctx->in_delay_slot = false;
            ctx->pc = 0x264444u;
            { ctx->pc = 0x264444; return; }
        }
    }
    ctx->pc = 0x255380u;
label_255380:
    // 0x255380: 0xc0b0908  jal         func_2C2420
label_255384:
    if (ctx->pc == 0x255384u) {
        ctx->pc = 0x255384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255380u;
        // 0x255384: 0xe0a0602  jal         func_8281808 (Delay Slot)
        // JAL 0x8281808 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x255388u;
        goto label_255388;
    }
    ctx->pc = 0x255380u;
    SET_GPR_U32(ctx, 31, 0x255388u);
    ctx->pc = 0x255384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255380u;
    // 0x255384: 0xe0a0602  jal         func_8281808 (Delay Slot)
    // JAL 0x8281808 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2420u, 0x255380u, 0x255388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255388u;
label_255388:
    // 0x255388: 0x0  nop
    ctx->pc = 0x255388u;
    // NOP
label_25538c:
    // 0x25538c: 0x0  nop
    ctx->pc = 0x25538cu;
    // NOP
label_255390:
    // 0x255390: 0x322a2c29  andi        $t2, $s1, 0x2C29
    ctx->pc = 0x255390u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)11305);
label_255394:
    // 0x255394: 0x2b2b2b2b  slti        $t3, $t9, 0x2B2B
    ctx->pc = 0x255394u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 25) < (int64_t)(int32_t)11051) ? 1 : 0);
label_255398:
    // 0x255398: 0x35373434  ori         $s7, $t1, 0x3434
    ctx->pc = 0x255398u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)13364);
label_25539c:
    // 0x25539c: 0x36363636  ori         $s6, $s1, 0x3636
    ctx->pc = 0x25539cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)13878);
label_2553a0:
    // 0x2553a0: 0xa00096  .word       0x00A00096                   # dsrlv       $zero, $zero, $a1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2553a0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 5) & 0x3F));
label_2553a4:
    // 0x2553a4: 0xb400aa  .word       0x00B400AA                   # slt         $zero, $a1, $s4 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2553a4u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_2553a8:
    // 0x2553a8: 0xc800be  .word       0x00C800BE                   # dsrl32      $zero, $t0, 2 # 00C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2553a8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 8) >> (32 + 2));
label_2553ac:
    // 0x2553ac: 0xdc00d2  .word       0x00DC00D2                   # mflo        $zero # 00DC00C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2553acu;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_2553b0:
    // 0x2553b0: 0xf000e6  .word       0x00F000E6                   # xor         $zero, $a3, $s0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2553b0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 16));
label_2553b4:
    // 0x2553b4: 0x10400fa  .word       0x010400FA                   # dsrl        $zero, $a0, 3 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2553b4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 4) >> 3);
label_2553b8:
    // 0x2553b8: 0x320028  .word       0x00320028                   # mfsa        $zero # 00320000 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2553b8u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_2553bc:
    // 0x2553bc: 0x46003c  .word       0x0046003C                   # dsll32      $zero, $a2, 0 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2553bcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 6) << (32 + 0));
label_2553c0:
    // 0x2553c0: 0x5a0050  .word       0x005A0050                   # mfhi        $zero # 005A0040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2553c0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2553c4:
    // 0x2553c4: 0x6e0064  .word       0x006E0064                   # and         $zero, $v1, $t6 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2553c4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 3) & GPR_U64(ctx, 14));
label_2553c8:
    // 0x2553c8: 0x780073  tltu        $v1, $t8, 1
    ctx->pc = 0x2553c8u;
    if (GPR_U64(ctx, 3) < GPR_U64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_2553cc:
    // 0x2553cc: 0x82007d  .word       0x0082007D                   # INVALID     $a0, $v0, 0x7D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2553ccu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2553CC raw=0x0082007D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2553d0:
    // 0x2553d0: 0x7d0078  .word       0x007D0078                   # dsll        $zero, $sp, 1 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2553d0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 29) << 1);
label_2553d4:
    // 0x2553d4: 0x870082  .word       0x00870082                   # srl         $zero, $a3, 2 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2553d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 7), 2));
label_2553d8:
    // 0x2553d8: 0x91008c  .word       0x0091008C                   # syscall     2 # 00910000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2553d8u;
    ctx->pc = 0x2553DCu;
runtime->handleSyscall(rdram, ctx, 0x24402u);
label_2553dc:
    // 0x2553dc: 0x960096  .word       0x00960096                   # dsrlv       $zero, $s6, $a0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2553dcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 22) >> (GPR_U32(ctx, 4) & 0x3F));
label_2553e0:
    // 0x2553e0: 0x960096  .word       0x00960096                   # dsrlv       $zero, $s6, $a0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2553e0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 22) >> (GPR_U32(ctx, 4) & 0x3F));
label_2553e4:
    // 0x2553e4: 0x960096  .word       0x00960096                   # dsrlv       $zero, $s6, $a0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2553e4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 22) >> (GPR_U32(ctx, 4) & 0x3F));
label_2553e8:
    // 0x2553e8: 0x320028  .word       0x00320028                   # mfsa        $zero # 00320000 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2553e8u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_2553ec:
    // 0x2553ec: 0x46003c  .word       0x0046003C                   # dsll32      $zero, $a2, 0 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2553ecu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 6) << (32 + 0));
label_2553f0:
    // 0x2553f0: 0x5a0050  .word       0x005A0050                   # mfhi        $zero # 005A0040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2553f0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2553f4:
    // 0x2553f4: 0x6e0064  .word       0x006E0064                   # and         $zero, $v1, $t6 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2553f4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 3) & GPR_U64(ctx, 14));
label_2553f8:
    // 0x2553f8: 0x780073  tltu        $v1, $t8, 1
    ctx->pc = 0x2553f8u;
    if (GPR_U64(ctx, 3) < GPR_U64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_2553fc:
    // 0x2553fc: 0x82007d  .word       0x0082007D                   # INVALID     $a0, $v0, 0x7D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2553fcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2553FC raw=0x0082007D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255400:
    // 0x255400: 0x73006e  .word       0x0073006E                   # dsub        $zero, $v1, $s3 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255400u;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 19); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_255404:
    // 0x255404: 0x7d0078  .word       0x007D0078                   # dsll        $zero, $sp, 1 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255404u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 29) << 1);
label_255408:
    // 0x255408: 0x870082  .word       0x00870082                   # srl         $zero, $a3, 2 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255408u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 7), 2));
label_25540c:
    // 0x25540c: 0x8c008c  .word       0x008C008C                   # syscall     2 # 008C0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25540cu;
    ctx->pc = 0x255410u;
runtime->handleSyscall(rdram, ctx, 0x23002u);
label_255410:
    // 0x255410: 0x8c008c  .word       0x008C008C                   # syscall     2 # 008C0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255410u;
    ctx->pc = 0x255414u;
runtime->handleSyscall(rdram, ctx, 0x23002u);
label_255414:
    // 0x255414: 0x8c008c  .word       0x008C008C                   # syscall     2 # 008C0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255414u;
    ctx->pc = 0x255418u;
runtime->handleSyscall(rdram, ctx, 0x23002u);
label_255418:
    // 0x255418: 0x520051  .word       0x00520051                   # mthi        $v0 # 00120040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255418u;
    ctx->hi = GPR_U64(ctx, 2);
label_25541c:
    // 0x25541c: 0x540053  .word       0x00540053                   # mtlo        $v0 # 00140040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25541cu;
    ctx->lo = GPR_U64(ctx, 2);
label_255420:
    // 0x255420: 0x560055  .word       0x00560055                   # INVALID     $v0, $s6, 0x55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255420u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x255420 raw=0x00560055"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255424:
    // 0x255424: 0x580057  .word       0x00580057                   # dsrav       $zero, $t8, $v0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255424u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 24) >> (GPR_U32(ctx, 2) & 0x3F));
label_255428:
    // 0x255428: 0x5a0059  .word       0x005A0059                   # multu       $v0, $k0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255428u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 26); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_25542c:
    // 0x25542c: 0x5a005a  .word       0x005A005A                   # div         $zero, $v0, $k0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25542cu;
    { int32_t divisor = GPR_S32(ctx, 26);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_255430:
    // 0x255430: 0x0  nop
    ctx->pc = 0x255430u;
    // NOP
label_255434:
    // 0x255434: 0x3e8  .word       0x000003E8                   # mfsa        $zero # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x255434u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_255438:
    // 0x255438: 0x7d0  .word       0x000007D0                   # mfhi        $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255438u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_25543c:
    // 0x25543c: 0xfa0  .word       0x00000FA0                   # add         $at, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25543cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_255440:
    // 0x255440: 0x1770  tge         $zero, $zero, 93
    ctx->pc = 0x255440u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_255444:
    // 0x255444: 0x1f40  sll         $v1, $zero, 29
    ctx->pc = 0x255444u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_255448:
    // 0x255448: 0x2710  .word       0x00002710                   # mfhi        $a0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255448u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_25544c:
    // 0x25544c: 0x32c8  .word       0x000032C8                   # jr          $zero # 000032C0 <InstrIdType: CPU_SPECIAL>
label_255450:
    if (ctx->pc == 0x255450u) {
        ctx->pc = 0x255450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25544Cu;
        // 0x255450: 0x3e80  sll         $a3, $zero, 26 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255454u;
        goto label_255454;
    }
    ctx->pc = 0x25544Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x255450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25544Cu;
        // 0x255450: 0x3e80  sll         $a3, $zero, 26 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25544Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x255454u;
label_255454:
    // 0x255454: 0x4a38  dsll        $t1, $zero, 8
    ctx->pc = 0x255454u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) << 8);
label_255458:
    // 0x255458: 0x59d8  .word       0x000059D8                   # mult        $t3, $zero, $zero # 000001C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x255458u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_25545c:
    // 0x25545c: 0x6978  dsll        $t5, $zero, 5
    ctx->pc = 0x25545cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) << 5);
label_255460:
    // 0x255460: 0x7918  .word       0x00007918                   # mult        $t7, $zero, $zero # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x255460u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_255464:
    // 0x255464: 0x88b8  dsll        $s1, $zero, 2
    ctx->pc = 0x255464u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) << 2);
label_255468:
    // 0x255468: 0x9858  .word       0x00009858                   # mult        $s3, $zero, $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x255468u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_25546c:
    // 0x25546c: 0xabe0  .word       0x0000ABE0                   # add         $s5, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25546cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_255470:
    // 0x255470: 0xbf68  .word       0x0000BF68                   # mfsa        $s7 # 00000740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x255470u;
    SET_GPR_U32(ctx, 23, ctx->sa);
label_255474:
    // 0x255474: 0xd2f0  tge         $zero, $zero, 843
    ctx->pc = 0x255474u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_255478:
    // 0x255478: 0xe678  dsll        $gp, $zero, 25
    ctx->pc = 0x255478u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) << 25);
label_25547c:
    // 0x25547c: 0xfa00  sll         $ra, $zero, 8
    ctx->pc = 0x25547cu;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_255480:
    // 0x255480: 0x10d88  .word       0x00010D88                   # jr          $zero # 00010D80 <InstrIdType: CPU_SPECIAL>
label_255484:
    if (ctx->pc == 0x255484u) {
        ctx->pc = 0x255484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255480u;
        // 0x255484: 0x124f8  dsll        $a0, $at, 19 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 1) << 19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x255488u;
        goto label_255488;
    }
    ctx->pc = 0x255480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x255484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255480u;
        // 0x255484: 0x124f8  dsll        $a0, $at, 19 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 1) << 19);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255480u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x255488u;
label_255488:
    // 0x255488: 0x13c68  .word       0x00013C68                   # mfsa        $a3 # 00010440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x255488u;
    SET_GPR_U32(ctx, 7, ctx->sa);
label_25548c:
    // 0x25548c: 0x153d8  .word       0x000153D8                   # mult        $t2, $zero, $at # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25548cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_255490:
    // 0x255490: 0x16b48  .word       0x00016B48                   # jr          $zero # 00016B40 <InstrIdType: CPU_SPECIAL>
label_255494:
    if (ctx->pc == 0x255494u) {
        ctx->pc = 0x255494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255490u;
        // 0x255494: 0x1869f  .word       0x0001869F                   # ddivu       $s0, $zero, $at # 00000680 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x255494 raw=0x0001869F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x255498u;
        goto label_255498;
    }
    ctx->pc = 0x255490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x255494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255490u;
        // 0x255494: 0x1869f  .word       0x0001869F                   # ddivu       $s0, $zero, $at # 00000680 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x255494 raw=0x0001869F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255490u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x255498u;
label_255498:
    // 0x255498: 0x0  nop
    ctx->pc = 0x255498u;
    // NOP
label_25549c:
    // 0x25549c: 0x0  nop
    ctx->pc = 0x25549cu;
    // NOP
label_2554a0:
    // 0x2554a0: 0x0  nop
    ctx->pc = 0x2554a0u;
    // NOP
label_2554a4:
    // 0x2554a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2554a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2554A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2554a8:
    // 0x2554a8: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2554a8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2554ac:
    // 0x2554ac: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2554acu;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2554b0:
    // 0x2554b0: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x2554b0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2554b4:
    // 0x2554b4: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x2554b4u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2554b8:
    // 0x2554b8: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x2554b8u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2554bc:
    // 0x2554bc: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x2554bcu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_2554c0:
    // 0x2554c0: 0x1000000  .word       0x01000000                   # sll         $zero, $zero, 0 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2554c0u;
    // NOP
label_2554c4:
    // 0x2554c4: 0x1020102  .word       0x01020102                   # srl         $zero, $v0, 4 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2554c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_2554c8:
    // 0x2554c8: 0x2010202  .word       0x02010202                   # srl         $zero, $at, 8 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2554c8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 1), 8));
label_2554cc:
    // 0x2554cc: 0x1010202  .word       0x01010202                   # srl         $zero, $at, 8 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2554ccu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 1), 8));
label_2554d0:
    // 0x2554d0: 0x3020301  .word       0x03020301                   # INVALID     $t8, $v0, 0x301 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2554d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2554D0 raw=0x03020301"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2554d4:
    // 0x2554d4: 0x4040303  .word       0x04040303                   # INVALID     $zero, $a0, 0x303 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2554d4u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x2554D4 raw=0x04040303");
 /* MITIGATED */
label_2554d8:
    // 0x2554d8: 0x3030403  .word       0x03030403                   # sra         $zero, $v1, 16 # 03000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2554d8u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 3), 16));
label_2554dc:
    // 0x2554dc: 0x4040404  .word       0x04040404                   # INVALID     $zero, $a0, 0x404 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2554dcu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x2554DC raw=0x04040404");
 /* MITIGATED */
label_2554e0:
    // 0x2554e0: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2554e0u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x2554E0 raw=0x05050505");
 /* MITIGATED */
label_2554e4:
    // 0x2554e4: 0x5050504  .word       0x05050504                   # INVALID     $t0, $a1, 0x504 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2554e4u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x2554E4 raw=0x05050504");
 /* MITIGATED */
label_2554e8:
    // 0x2554e8: 0x60606  .word       0x00060606                   # srlv        $zero, $a2, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2554e8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 0) & 0x1F));
label_2554ec:
    // 0x2554ec: 0x306  .word       0x00000306                   # srlv        $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2554ecu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2554f0:
    // 0x2554f0: 0x0  nop
    ctx->pc = 0x2554f0u;
    // NOP
label_2554f4:
    // 0x2554f4: 0x0  nop
    ctx->pc = 0x2554f4u;
    // NOP
label_2554f8:
    // 0x2554f8: 0x600  sll         $zero, $zero, 24
    ctx->pc = 0x2554f8u;
    
label_2554fc:
    // 0x2554fc: 0x4020303  bltzl       $zero, . + 4 + (0x303 << 2)
label_255500:
    if (ctx->pc == 0x255500u) {
        ctx->pc = 0x255500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2554FCu;
        // 0x255500: 0x6050101  .word       0x06050101                   # INVALID     $s0, $a1, 0x101 # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
//         throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x255500 raw=0x06050101");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x255504u;
        goto label_255504;
    }
    ctx->pc = 0x2554FCu;
    {
        const bool branch_taken_0x2554fc = (GPR_S32(ctx, 0) < 0);
        if (branch_taken_0x2554fc) {
            ctx->pc = 0x255500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2554FCu;
            // 0x255500: 0x6050101  .word       0x06050101                   # INVALID     $s0, $a1, 0x101 # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
//             throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x255500 raw=0x06050101");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x25610Cu;
            { ctx->pc = 0x25610c; return; }
        }
    }
    ctx->pc = 0x255504u;
label_255504:
    // 0x255504: 0x2020203  .word       0x02020203                   # sra         $zero, $v0, 8 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255504u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 2), 8));
label_255508:
    // 0x255508: 0x2040605  .word       0x02040605                   # INVALID     $s0, $a0, 0x605 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255508u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x255508 raw=0x02040605"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25550c:
    // 0x25550c: 0x4020401  bltzl       $zero, . + 4 + (0x401 << 2)
label_255510:
    if (ctx->pc == 0x255510u) {
        ctx->pc = 0x255510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25550Cu;
        // 0x255510: 0x4030305  bgezl       $zero, . + 4 + (0x305 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x256128 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x255514u;
        goto label_255514;
    }
    ctx->pc = 0x25550Cu;
    {
        const bool branch_taken_0x25550c = (GPR_S32(ctx, 0) < 0);
        if (branch_taken_0x25550c) {
            ctx->pc = 0x255510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25550Cu;
            // 0x255510: 0x4030305  bgezl       $zero, . + 4 + (0x305 << 2) (Delay Slot)
            // REGIMM branch instruction to 0x256128 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x256514u;
            { ctx->pc = 0x256514; return; }
        }
    }
    ctx->pc = 0x255514u;
label_255514:
    // 0x255514: 0x60305  .word       0x00060305                   # INVALID     $zero, $a2, 0x305 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255514u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x255514 raw=0x00060305"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255518:
    // 0x255518: 0x5040405  .word       0x05040405                   # INVALID     $t0, $a0, 0x405 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x255518u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x255518 raw=0x05040405");
 /* MITIGATED */
label_25551c:
    // 0x25551c: 0x1060506  .word       0x01060506                   # srlv        $zero, $a2, $t0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25551cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 8) & 0x1F));
label_255520:
    // 0x255520: 0x102  srl         $zero, $zero, 4
    ctx->pc = 0x255520u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 4));
label_255524:
    // 0x255524: 0x0  nop
    ctx->pc = 0x255524u;
    // NOP
label_255528:
    // 0x255528: 0x0  nop
    ctx->pc = 0x255528u;
    // NOP
label_25552c:
    // 0x25552c: 0x0  nop
    ctx->pc = 0x25552cu;
    // NOP
label_255530:
    // 0x255530: 0x11000000  beqz        $t0, . + 4 + (0x0 << 2)
label_255534:
    if (ctx->pc == 0x255534u) {
        ctx->pc = 0x255538u;
        goto label_255538;
    }
    ctx->pc = 0x255530u;
    {
        const bool branch_taken_0x255530 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x255530) {
            ctx->pc = 0x255534u;
            goto label_255534;
        }
    }
    ctx->pc = 0x255538u;
label_255538:
    // 0x255538: 0x0  nop
    ctx->pc = 0x255538u;
    // NOP
label_25553c:
    // 0x25553c: 0x50000003  beql        $zero, $zero, . + 4 + (0x3 << 2)
label_255540:
    if (ctx->pc == 0x255540u) {
        ctx->pc = 0x255540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25553Cu;
        // 0x255540: 0x8002  srl         $s0, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255544u;
        goto label_255544;
    }
    ctx->pc = 0x25553Cu;
    {
        const bool branch_taken_0x25553c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25553c) {
            ctx->pc = 0x255540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25553Cu;
            // 0x255540: 0x8002  srl         $s0, $zero, 0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25554Cu;
            goto label_25554c;
        }
    }
    ctx->pc = 0x255544u;
label_255544:
    // 0x255544: 0x10000000  b           . + 4 + (0x0 << 2)
label_255548:
    if (ctx->pc == 0x255548u) {
        ctx->pc = 0x255548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255544u;
        // 0x255548: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x255548 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x25554Cu;
        goto label_25554c;
    }
    ctx->pc = 0x255544u;
    {
        const bool branch_taken_0x255544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255544u;
        // 0x255548: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x255548 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x255544) {
            ctx->pc = 0x255548u;
            goto label_255548;
        }
    }
    ctx->pc = 0x25554Cu;
label_25554c:
    // 0x25554c: 0x0  nop
    ctx->pc = 0x25554cu;
    // NOP
label_255550:
    // 0x255550: 0x8080  sll         $s0, $zero, 2
    ctx->pc = 0x255550u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_255554:
    // 0x255554: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x255554u;
    
label_255558:
    // 0x255558: 0x3b  dsra        $zero, $zero, 0
    ctx->pc = 0x255558u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 0);
label_25555c:
    // 0x25555c: 0x0  nop
    ctx->pc = 0x25555cu;
    // NOP
label_255560:
    // 0x255560: 0x61  .word       0x00000061                   # addu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255560u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_255564:
    // 0x255564: 0x0  nop
    ctx->pc = 0x255564u;
    // NOP
label_255568:
    // 0x255568: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255568u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x255568 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25556c:
    // 0x25556c: 0x0  nop
    ctx->pc = 0x25556cu;
    // NOP
label_255570:
    // 0x255570: 0x0  nop
    ctx->pc = 0x255570u;
    // NOP
label_255574:
    // 0x255574: 0x0  nop
    ctx->pc = 0x255574u;
    // NOP
label_255578:
    // 0x255578: 0x0  nop
    ctx->pc = 0x255578u;
    // NOP
label_25557c:
    // 0x25557c: 0x6c010001  ldr         $at, 0x1($zero)
    ctx->pc = 0x25557cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_255580:
    // 0x255580: 0x0  nop
    ctx->pc = 0x255580u;
    // NOP
label_255584:
    // 0x255584: 0x0  nop
    ctx->pc = 0x255584u;
    // NOP
label_255588:
    // 0x255588: 0x0  nop
    ctx->pc = 0x255588u;
    // NOP
label_25558c:
    // 0x25558c: 0x0  nop
    ctx->pc = 0x25558cu;
    // NOP
label_255590:
    // 0x255590: 0x0  nop
    ctx->pc = 0x255590u;
    // NOP
label_255594:
    // 0x255594: 0x0  nop
    ctx->pc = 0x255594u;
    // NOP
label_255598:
    // 0x255598: 0x0  nop
    ctx->pc = 0x255598u;
    // NOP
label_25559c:
    // 0x25559c: 0x6c010001  ldr         $at, 0x1($zero)
    ctx->pc = 0x25559cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2555a0:
    // 0x2555a0: 0x0  nop
    ctx->pc = 0x2555a0u;
    // NOP
label_2555a4:
    // 0x2555a4: 0x0  nop
    ctx->pc = 0x2555a4u;
    // NOP
label_2555a8:
    // 0x2555a8: 0x0  nop
    ctx->pc = 0x2555a8u;
    // NOP
label_2555ac:
    // 0x2555ac: 0x0  nop
    ctx->pc = 0x2555acu;
    // NOP
label_2555b0:
    // 0x2555b0: 0x43400000  .word       0x43400000                   # INVALID     $k0, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2555b0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x2555B0 raw=0x43400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2555b4:
    // 0x2555b4: 0x42c00000  .word       0x42C00000                   # INVALID     $s6, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2555b4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x2555B4 raw=0x42C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2555b8:
    // 0x2555b8: 0x42c00000  .word       0x42C00000                   # INVALID     $s6, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2555b8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x2555B8 raw=0x42C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2555bc:
    // 0x2555bc: 0x0  nop
    ctx->pc = 0x2555bcu;
    // NOP
label_2555c0:
    // 0x2555c0: 0x42c00000  .word       0x42C00000                   # INVALID     $s6, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2555c0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x2555C0 raw=0x42C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2555c4:
    // 0x2555c4: 0x43400000  .word       0x43400000                   # INVALID     $k0, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2555c4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x2555C4 raw=0x43400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2555c8:
    // 0x2555c8: 0x42c00000  .word       0x42C00000                   # INVALID     $s6, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2555c8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x2555C8 raw=0x42C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2555cc:
    // 0x2555cc: 0x0  nop
    ctx->pc = 0x2555ccu;
    // NOP
label_2555d0:
    // 0x2555d0: 0x43400000  .word       0x43400000                   # INVALID     $k0, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2555d0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x2555D0 raw=0x43400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2555d4:
    // 0x2555d4: 0x43400000  .word       0x43400000                   # INVALID     $k0, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2555d4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x2555D4 raw=0x43400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2555d8:
    // 0x2555d8: 0x42c00000  .word       0x42C00000                   # INVALID     $s6, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2555d8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x2555D8 raw=0x42C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2555dc:
    // 0x2555dc: 0x0  nop
    ctx->pc = 0x2555dcu;
    // NOP
label_2555e0:
    // 0x2555e0: 0x42cccccd  .word       0x42CCCCCD                   # INVALID     $s6, $t4, -0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2555e0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x2555E0 raw=0x42CCCCCD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2555e4:
    // 0x2555e4: 0x42cccccd  .word       0x42CCCCCD                   # INVALID     $s6, $t4, -0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2555e4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x2555E4 raw=0x42CCCCCD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2555e8:
    // 0x2555e8: 0x42cccccd  .word       0x42CCCCCD                   # INVALID     $s6, $t4, -0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2555e8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x2555E8 raw=0x42CCCCCD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2555ec:
    // 0x2555ec: 0x0  nop
    ctx->pc = 0x2555ecu;
    // NOP
label_2555f0:
    // 0x2555f0: 0xc  syscall     0
    ctx->pc = 0x2555f0u;
    ctx->pc = 0x2555F4u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2555f4:
    // 0x2555f4: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2555f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2555F4 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2555f8:
    // 0x2555f8: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x2555f8u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2555fc:
    // 0x2555fc: 0x0  nop
    ctx->pc = 0x2555fcu;
    // NOP
label_255600:
    // 0x255600: 0x11000000  beqz        $t0, . + 4 + (0x0 << 2)
label_255604:
    if (ctx->pc == 0x255604u) {
        ctx->pc = 0x255608u;
        goto label_255608;
    }
    ctx->pc = 0x255600u;
    {
        const bool branch_taken_0x255600 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x255600) {
            ctx->pc = 0x255604u;
            goto label_255604;
        }
    }
    ctx->pc = 0x255608u;
label_255608:
    // 0x255608: 0x0  nop
    ctx->pc = 0x255608u;
    // NOP
label_25560c:
    // 0x25560c: 0x50000003  beql        $zero, $zero, . + 4 + (0x3 << 2)
label_255610:
    if (ctx->pc == 0x255610u) {
        ctx->pc = 0x255610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25560Cu;
        // 0x255610: 0x8002  srl         $s0, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255614u;
        goto label_255614;
    }
    ctx->pc = 0x25560Cu;
    {
        const bool branch_taken_0x25560c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25560c) {
            ctx->pc = 0x255610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25560Cu;
            // 0x255610: 0x8002  srl         $s0, $zero, 0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25561Cu;
            goto label_25561c;
        }
    }
    ctx->pc = 0x255614u;
label_255614:
    // 0x255614: 0x10000000  b           . + 4 + (0x0 << 2)
label_255618:
    if (ctx->pc == 0x255618u) {
        ctx->pc = 0x255618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255614u;
        // 0x255618: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x255618 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x25561Cu;
        goto label_25561c;
    }
    ctx->pc = 0x255614u;
    {
        const bool branch_taken_0x255614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255614u;
        // 0x255618: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x255618 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x255614) {
            ctx->pc = 0x255618u;
            goto label_255618;
        }
    }
    ctx->pc = 0x25561Cu;
label_25561c:
    // 0x25561c: 0x0  nop
    ctx->pc = 0x25561cu;
    // NOP
label_255620:
    // 0x255620: 0x44  .word       0x00000044                   # sllv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255620u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_255624:
    // 0x255624: 0x0  nop
    ctx->pc = 0x255624u;
    // NOP
label_255628:
    // 0x255628: 0x43  sra         $zero, $zero, 1
    ctx->pc = 0x255628u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 1));
label_25562c:
    // 0x25562c: 0x0  nop
    ctx->pc = 0x25562cu;
    // NOP
label_255630:
    // 0x255630: 0x51ff9  .word       0x00051FF9                   # INVALID     $zero, $a1, 0x1FF9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255630u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x255630 raw=0x00051FF9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255634:
    // 0x255634: 0x0  nop
    ctx->pc = 0x255634u;
    // NOP
label_255638:
    // 0x255638: 0x48  .word       0x00000048                   # jr          $zero # 00000040 <InstrIdType: CPU_SPECIAL>
label_25563c:
    if (ctx->pc == 0x25563Cu) {
        ctx->pc = 0x255640u;
        goto label_255640;
    }
    ctx->pc = 0x255638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255638u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x255640u;
label_255640:
    // 0x255640: 0xa0a0a0a0  sb          $zero, -0x5F60($a1)
    ctx->pc = 0x255640u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294942880), (uint8_t)GPR_U32(ctx, 0));
label_255644:
    // 0x255644: 0x6464825a  daddiu      $a0, $v1, -0x7DA6
    ctx->pc = 0x255644u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)4294935130);
label_255648:
    // 0x255648: 0xa0a05064  sb          $zero, 0x5064($a1)
    ctx->pc = 0x255648u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 20580), (uint8_t)GPR_U32(ctx, 0));
label_25564c:
    // 0x25564c: 0xa0a0a03c  sb          $zero, -0x5FC4($a1)
    ctx->pc = 0x25564cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294942780), (uint8_t)GPR_U32(ctx, 0));
label_255650:
    // 0x255650: 0x5082a0a0  beql        $a0, $v0, . + 4 + (-0x5F60 << 2)
label_255654:
    if (ctx->pc == 0x255654u) {
        ctx->pc = 0x255654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255650u;
        // 0x255654: 0xa0a05a5a  sb          $zero, 0x5A5A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 23130), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255658u;
        goto label_255658;
    }
    ctx->pc = 0x255650u;
    {
        const bool branch_taken_0x255650 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x255650) {
            ctx->pc = 0x255654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255650u;
            // 0x255654: 0xa0a05a5a  sb          $zero, 0x5A5A($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 23130), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D8D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x23d8d4; return; }
        }
    }
    ctx->pc = 0x255658u;
label_255658:
    // 0x255658: 0xa03c6464  sb          $gp, 0x6464($at)
    ctx->pc = 0x255658u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 25700), (uint8_t)GPR_U32(ctx, 28));
label_25565c:
    // 0x25565c: 0xa0a0a0a0  sb          $zero, -0x5F60($a1)
    ctx->pc = 0x25565cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294942880), (uint8_t)GPR_U32(ctx, 0));
label_255660:
    // 0x255660: 0x825a785a  lb          $k0, 0x785A($s2)
    ctx->pc = 0x255660u;
    SET_GPR_S32(ctx, 26, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 30810)));
label_255664:
    // 0x255664: 0xa0a0a0a0  sb          $zero, -0x5F60($a1)
    ctx->pc = 0x255664u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294942880), (uint8_t)GPR_U32(ctx, 0));
label_255668:
    // 0x255668: 0x50505050  beql        $v0, $s0, . + 4 + (0x5050 << 2)
label_25566c:
    if (ctx->pc == 0x25566Cu) {
        ctx->pc = 0x25566Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255668u;
        // 0x25566c: 0x5064  .word       0x00005064                   # and         $t2, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255670u;
        goto label_255670;
    }
    ctx->pc = 0x255668u;
    {
        const bool branch_taken_0x255668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x255668) {
            ctx->pc = 0x25566Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255668u;
            // 0x25566c: 0x5064  .word       0x00005064                   # and         $t2, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2697ACu;
            { ctx->pc = 0x2697ac; return; }
        }
    }
    ctx->pc = 0x255670u;
label_255670:
    // 0x255670: 0x40333333  .word       0x40333333                   # dmfc0       $s3, Wired # 00000333 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255670u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x255670 raw=0x40333333"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255674:
    // 0x255674: 0x3fb33333  .word       0x3FB33333                   # lui         $s3, 0x3333 # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255674u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13107 << 16));
label_255678:
    // 0x255678: 0x40333333  .word       0x40333333                   # dmfc0       $s3, Wired # 00000333 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255678u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x255678 raw=0x40333333"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25567c:
    // 0x25567c: 0x3fb33333  .word       0x3FB33333                   # lui         $s3, 0x3333 # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x25567cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13107 << 16));
label_255680:
    // 0x255680: 0x3ad1b718  xori        $s1, $s6, 0xB718
    ctx->pc = 0x255680u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 22) ^ (uint64_t)(uint16_t)46872);
label_255684:
    // 0x255684: 0x3a51b718  xori        $s1, $s2, 0xB718
    ctx->pc = 0x255684u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)46872);
label_255688:
    // 0x255688: 0x3c51b718  .word       0x3C51B718                   # lui         $s1, 0xB718 # 00400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255688u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)46872 << 16));
label_25568c:
    // 0x25568c: 0x3bd1b718  xori        $s1, $fp, 0xB718
    ctx->pc = 0x25568cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 30) ^ (uint64_t)(uint16_t)46872);
label_255690:
    // 0x255690: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255690u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x255690 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255694:
    // 0x255694: 0x43000000  .word       0x43000000                   # INVALID     $t8, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255694u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x255694 raw=0x43000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255698:
    // 0x255698: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255698u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x255698 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25569c:
    // 0x25569c: 0x450b4000  .word       0x450B4000                   # INVALID     $t0, $t3, 0x4000 # 00000000 <InstrIdType: CPU_COP1_BC1>
    ctx->pc = 0x25569cu;
    // FPU branch instruction - handled elsewhere
label_2556a0:
    // 0x2556a0: 0x44f4b000  .word       0x44F4B000                   # INVALID     $a3, $s4, -0x5000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2556a0u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x7, function 0x0 at 0x2556A0 raw=0x44F4B000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2556a4:
    // 0x2556a4: 0x450f4000  .word       0x450F4000                   # INVALID     $t0, $t7, 0x4000 # 00000000 <InstrIdType: CPU_COP1_BC1>
    ctx->pc = 0x2556a4u;
    // FPU branch instruction - handled elsewhere
    ctx->pc = 0x2556a8u;
    return;
}
