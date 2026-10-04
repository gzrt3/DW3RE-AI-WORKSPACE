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

// Function: FUN_0019b6a8
// Address: 0x19b6a8 - 0x29b6b0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b6a8_part510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x293f38u: goto label_293f38;
        case 0x293f3cu: goto label_293f3c;
        case 0x293f40u: goto label_293f40;
        case 0x293f44u: goto label_293f44;
        case 0x293f48u: goto label_293f48;
        case 0x293f4cu: goto label_293f4c;
        case 0x293f50u: goto label_293f50;
        case 0x293f54u: goto label_293f54;
        case 0x293f58u: goto label_293f58;
        case 0x293f5cu: goto label_293f5c;
        case 0x293f60u: goto label_293f60;
        case 0x293f64u: goto label_293f64;
        case 0x293f68u: goto label_293f68;
        case 0x293f6cu: goto label_293f6c;
        case 0x293f70u: goto label_293f70;
        case 0x293f74u: goto label_293f74;
        case 0x293f78u: goto label_293f78;
        case 0x293f7cu: goto label_293f7c;
        case 0x293f80u: goto label_293f80;
        case 0x293f84u: goto label_293f84;
        case 0x293f88u: goto label_293f88;
        case 0x293f8cu: goto label_293f8c;
        case 0x293f90u: goto label_293f90;
        case 0x293f94u: goto label_293f94;
        case 0x293f98u: goto label_293f98;
        case 0x293f9cu: goto label_293f9c;
        case 0x293fa0u: goto label_293fa0;
        case 0x293fa4u: goto label_293fa4;
        case 0x293fa8u: goto label_293fa8;
        case 0x293facu: goto label_293fac;
        case 0x293fb0u: goto label_293fb0;
        case 0x293fb4u: goto label_293fb4;
        case 0x293fb8u: goto label_293fb8;
        case 0x293fbcu: goto label_293fbc;
        case 0x293fc0u: goto label_293fc0;
        case 0x293fc4u: goto label_293fc4;
        case 0x293fc8u: goto label_293fc8;
        case 0x293fccu: goto label_293fcc;
        case 0x293fd0u: goto label_293fd0;
        case 0x293fd4u: goto label_293fd4;
        case 0x293fd8u: goto label_293fd8;
        case 0x293fdcu: goto label_293fdc;
        case 0x293fe0u: goto label_293fe0;
        case 0x293fe4u: goto label_293fe4;
        case 0x293fe8u: goto label_293fe8;
        case 0x293fecu: goto label_293fec;
        case 0x293ff0u: goto label_293ff0;
        case 0x293ff4u: goto label_293ff4;
        case 0x293ff8u: goto label_293ff8;
        case 0x293ffcu: goto label_293ffc;
        case 0x294000u: goto label_294000;
        case 0x294004u: goto label_294004;
        case 0x294008u: goto label_294008;
        case 0x29400cu: goto label_29400c;
        case 0x294010u: goto label_294010;
        case 0x294014u: goto label_294014;
        case 0x294018u: goto label_294018;
        case 0x29401cu: goto label_29401c;
        case 0x294020u: goto label_294020;
        case 0x294024u: goto label_294024;
        case 0x294028u: goto label_294028;
        case 0x29402cu: goto label_29402c;
        case 0x294030u: goto label_294030;
        case 0x294034u: goto label_294034;
        case 0x294038u: goto label_294038;
        case 0x29403cu: goto label_29403c;
        case 0x294040u: goto label_294040;
        case 0x294044u: goto label_294044;
        case 0x294048u: goto label_294048;
        case 0x29404cu: goto label_29404c;
        case 0x294050u: goto label_294050;
        case 0x294054u: goto label_294054;
        case 0x294058u: goto label_294058;
        case 0x29405cu: goto label_29405c;
        case 0x294060u: goto label_294060;
        case 0x294064u: goto label_294064;
        case 0x294068u: goto label_294068;
        case 0x29406cu: goto label_29406c;
        case 0x294070u: goto label_294070;
        case 0x294074u: goto label_294074;
        case 0x294078u: goto label_294078;
        case 0x29407cu: goto label_29407c;
        case 0x294080u: goto label_294080;
        case 0x294084u: goto label_294084;
        case 0x294088u: goto label_294088;
        case 0x29408cu: goto label_29408c;
        case 0x294090u: goto label_294090;
        case 0x294094u: goto label_294094;
        case 0x294098u: goto label_294098;
        case 0x29409cu: goto label_29409c;
        case 0x2940a0u: goto label_2940a0;
        case 0x2940a4u: goto label_2940a4;
        case 0x2940a8u: goto label_2940a8;
        case 0x2940acu: goto label_2940ac;
        case 0x2940b0u: goto label_2940b0;
        case 0x2940b4u: goto label_2940b4;
        case 0x2940b8u: goto label_2940b8;
        case 0x2940bcu: goto label_2940bc;
        case 0x2940c0u: goto label_2940c0;
        case 0x2940c4u: goto label_2940c4;
        case 0x2940c8u: goto label_2940c8;
        case 0x2940ccu: goto label_2940cc;
        case 0x2940d0u: goto label_2940d0;
        case 0x2940d4u: goto label_2940d4;
        case 0x2940d8u: goto label_2940d8;
        case 0x2940dcu: goto label_2940dc;
        case 0x2940e0u: goto label_2940e0;
        case 0x2940e4u: goto label_2940e4;
        case 0x2940e8u: goto label_2940e8;
        case 0x2940ecu: goto label_2940ec;
        case 0x2940f0u: goto label_2940f0;
        case 0x2940f4u: goto label_2940f4;
        case 0x2940f8u: goto label_2940f8;
        case 0x2940fcu: goto label_2940fc;
        case 0x294100u: goto label_294100;
        case 0x294104u: goto label_294104;
        case 0x294108u: goto label_294108;
        case 0x29410cu: goto label_29410c;
        case 0x294110u: goto label_294110;
        case 0x294114u: goto label_294114;
        case 0x294118u: goto label_294118;
        case 0x29411cu: goto label_29411c;
        case 0x294120u: goto label_294120;
        case 0x294124u: goto label_294124;
        case 0x294128u: goto label_294128;
        case 0x29412cu: goto label_29412c;
        case 0x294130u: goto label_294130;
        case 0x294134u: goto label_294134;
        case 0x294138u: goto label_294138;
        case 0x29413cu: goto label_29413c;
        case 0x294140u: goto label_294140;
        case 0x294144u: goto label_294144;
        case 0x294148u: goto label_294148;
        case 0x29414cu: goto label_29414c;
        case 0x294150u: goto label_294150;
        case 0x294154u: goto label_294154;
        case 0x294158u: goto label_294158;
        case 0x29415cu: goto label_29415c;
        case 0x294160u: goto label_294160;
        case 0x294164u: goto label_294164;
        case 0x294168u: goto label_294168;
        case 0x29416cu: goto label_29416c;
        case 0x294170u: goto label_294170;
        case 0x294174u: goto label_294174;
        case 0x294178u: goto label_294178;
        case 0x29417cu: goto label_29417c;
        case 0x294180u: goto label_294180;
        case 0x294184u: goto label_294184;
        case 0x294188u: goto label_294188;
        case 0x29418cu: goto label_29418c;
        case 0x294190u: goto label_294190;
        case 0x294194u: goto label_294194;
        case 0x294198u: goto label_294198;
        case 0x29419cu: goto label_29419c;
        case 0x2941a0u: goto label_2941a0;
        case 0x2941a4u: goto label_2941a4;
        case 0x2941a8u: goto label_2941a8;
        case 0x2941acu: goto label_2941ac;
        case 0x2941b0u: goto label_2941b0;
        case 0x2941b4u: goto label_2941b4;
        case 0x2941b8u: goto label_2941b8;
        case 0x2941bcu: goto label_2941bc;
        case 0x2941c0u: goto label_2941c0;
        case 0x2941c4u: goto label_2941c4;
        case 0x2941c8u: goto label_2941c8;
        case 0x2941ccu: goto label_2941cc;
        case 0x2941d0u: goto label_2941d0;
        case 0x2941d4u: goto label_2941d4;
        case 0x2941d8u: goto label_2941d8;
        case 0x2941dcu: goto label_2941dc;
        case 0x2941e0u: goto label_2941e0;
        case 0x2941e4u: goto label_2941e4;
        case 0x2941e8u: goto label_2941e8;
        case 0x2941ecu: goto label_2941ec;
        case 0x2941f0u: goto label_2941f0;
        case 0x2941f4u: goto label_2941f4;
        case 0x2941f8u: goto label_2941f8;
        case 0x2941fcu: goto label_2941fc;
        case 0x294200u: goto label_294200;
        case 0x294204u: goto label_294204;
        case 0x294208u: goto label_294208;
        case 0x29420cu: goto label_29420c;
        case 0x294210u: goto label_294210;
        case 0x294214u: goto label_294214;
        case 0x294218u: goto label_294218;
        case 0x29421cu: goto label_29421c;
        case 0x294220u: goto label_294220;
        case 0x294224u: goto label_294224;
        case 0x294228u: goto label_294228;
        case 0x29422cu: goto label_29422c;
        case 0x294230u: goto label_294230;
        case 0x294234u: goto label_294234;
        case 0x294238u: goto label_294238;
        case 0x29423cu: goto label_29423c;
        case 0x294240u: goto label_294240;
        case 0x294244u: goto label_294244;
        case 0x294248u: goto label_294248;
        case 0x29424cu: goto label_29424c;
        case 0x294250u: goto label_294250;
        case 0x294254u: goto label_294254;
        case 0x294258u: goto label_294258;
        case 0x29425cu: goto label_29425c;
        case 0x294260u: goto label_294260;
        case 0x294264u: goto label_294264;
        case 0x294268u: goto label_294268;
        case 0x29426cu: goto label_29426c;
        case 0x294270u: goto label_294270;
        case 0x294274u: goto label_294274;
        case 0x294278u: goto label_294278;
        case 0x29427cu: goto label_29427c;
        case 0x294280u: goto label_294280;
        case 0x294284u: goto label_294284;
        case 0x294288u: goto label_294288;
        case 0x29428cu: goto label_29428c;
        case 0x294290u: goto label_294290;
        case 0x294294u: goto label_294294;
        case 0x294298u: goto label_294298;
        case 0x29429cu: goto label_29429c;
        case 0x2942a0u: goto label_2942a0;
        case 0x2942a4u: goto label_2942a4;
        case 0x2942a8u: goto label_2942a8;
        case 0x2942acu: goto label_2942ac;
        case 0x2942b0u: goto label_2942b0;
        case 0x2942b4u: goto label_2942b4;
        case 0x2942b8u: goto label_2942b8;
        case 0x2942bcu: goto label_2942bc;
        case 0x2942c0u: goto label_2942c0;
        case 0x2942c4u: goto label_2942c4;
        case 0x2942c8u: goto label_2942c8;
        case 0x2942ccu: goto label_2942cc;
        case 0x2942d0u: goto label_2942d0;
        case 0x2942d4u: goto label_2942d4;
        case 0x2942d8u: goto label_2942d8;
        case 0x2942dcu: goto label_2942dc;
        case 0x2942e0u: goto label_2942e0;
        case 0x2942e4u: goto label_2942e4;
        case 0x2942e8u: goto label_2942e8;
        case 0x2942ecu: goto label_2942ec;
        case 0x2942f0u: goto label_2942f0;
        case 0x2942f4u: goto label_2942f4;
        case 0x2942f8u: goto label_2942f8;
        case 0x2942fcu: goto label_2942fc;
        case 0x294300u: goto label_294300;
        case 0x294304u: goto label_294304;
        case 0x294308u: goto label_294308;
        case 0x29430cu: goto label_29430c;
        case 0x294310u: goto label_294310;
        case 0x294314u: goto label_294314;
        case 0x294318u: goto label_294318;
        case 0x29431cu: goto label_29431c;
        case 0x294320u: goto label_294320;
        case 0x294324u: goto label_294324;
        case 0x294328u: goto label_294328;
        case 0x29432cu: goto label_29432c;
        case 0x294330u: goto label_294330;
        case 0x294334u: goto label_294334;
        case 0x294338u: goto label_294338;
        case 0x29433cu: goto label_29433c;
        case 0x294340u: goto label_294340;
        case 0x294344u: goto label_294344;
        case 0x294348u: goto label_294348;
        case 0x29434cu: goto label_29434c;
        case 0x294350u: goto label_294350;
        case 0x294354u: goto label_294354;
        case 0x294358u: goto label_294358;
        case 0x29435cu: goto label_29435c;
        case 0x294360u: goto label_294360;
        case 0x294364u: goto label_294364;
        case 0x294368u: goto label_294368;
        case 0x29436cu: goto label_29436c;
        case 0x294370u: goto label_294370;
        case 0x294374u: goto label_294374;
        case 0x294378u: goto label_294378;
        case 0x29437cu: goto label_29437c;
        case 0x294380u: goto label_294380;
        case 0x294384u: goto label_294384;
        case 0x294388u: goto label_294388;
        case 0x29438cu: goto label_29438c;
        case 0x294390u: goto label_294390;
        case 0x294394u: goto label_294394;
        case 0x294398u: goto label_294398;
        case 0x29439cu: goto label_29439c;
        case 0x2943a0u: goto label_2943a0;
        case 0x2943a4u: goto label_2943a4;
        case 0x2943a8u: goto label_2943a8;
        case 0x2943acu: goto label_2943ac;
        case 0x2943b0u: goto label_2943b0;
        case 0x2943b4u: goto label_2943b4;
        case 0x2943b8u: goto label_2943b8;
        case 0x2943bcu: goto label_2943bc;
        case 0x2943c0u: goto label_2943c0;
        case 0x2943c4u: goto label_2943c4;
        case 0x2943c8u: goto label_2943c8;
        case 0x2943ccu: goto label_2943cc;
        case 0x2943d0u: goto label_2943d0;
        case 0x2943d4u: goto label_2943d4;
        case 0x2943d8u: goto label_2943d8;
        case 0x2943dcu: goto label_2943dc;
        case 0x2943e0u: goto label_2943e0;
        case 0x2943e4u: goto label_2943e4;
        case 0x2943e8u: goto label_2943e8;
        case 0x2943ecu: goto label_2943ec;
        case 0x2943f0u: goto label_2943f0;
        case 0x2943f4u: goto label_2943f4;
        case 0x2943f8u: goto label_2943f8;
        case 0x2943fcu: goto label_2943fc;
        case 0x294400u: goto label_294400;
        case 0x294404u: goto label_294404;
        case 0x294408u: goto label_294408;
        case 0x29440cu: goto label_29440c;
        case 0x294410u: goto label_294410;
        case 0x294414u: goto label_294414;
        case 0x294418u: goto label_294418;
        case 0x29441cu: goto label_29441c;
        case 0x294420u: goto label_294420;
        case 0x294424u: goto label_294424;
        case 0x294428u: goto label_294428;
        case 0x29442cu: goto label_29442c;
        case 0x294430u: goto label_294430;
        case 0x294434u: goto label_294434;
        case 0x294438u: goto label_294438;
        case 0x29443cu: goto label_29443c;
        case 0x294440u: goto label_294440;
        case 0x294444u: goto label_294444;
        case 0x294448u: goto label_294448;
        case 0x29444cu: goto label_29444c;
        case 0x294450u: goto label_294450;
        case 0x294454u: goto label_294454;
        case 0x294458u: goto label_294458;
        case 0x29445cu: goto label_29445c;
        case 0x294460u: goto label_294460;
        case 0x294464u: goto label_294464;
        case 0x294468u: goto label_294468;
        case 0x29446cu: goto label_29446c;
        case 0x294470u: goto label_294470;
        case 0x294474u: goto label_294474;
        case 0x294478u: goto label_294478;
        case 0x29447cu: goto label_29447c;
        case 0x294480u: goto label_294480;
        case 0x294484u: goto label_294484;
        case 0x294488u: goto label_294488;
        case 0x29448cu: goto label_29448c;
        case 0x294490u: goto label_294490;
        case 0x294494u: goto label_294494;
        case 0x294498u: goto label_294498;
        case 0x29449cu: goto label_29449c;
        case 0x2944a0u: goto label_2944a0;
        case 0x2944a4u: goto label_2944a4;
        case 0x2944a8u: goto label_2944a8;
        case 0x2944acu: goto label_2944ac;
        case 0x2944b0u: goto label_2944b0;
        case 0x2944b4u: goto label_2944b4;
        case 0x2944b8u: goto label_2944b8;
        case 0x2944bcu: goto label_2944bc;
        case 0x2944c0u: goto label_2944c0;
        case 0x2944c4u: goto label_2944c4;
        case 0x2944c8u: goto label_2944c8;
        case 0x2944ccu: goto label_2944cc;
        case 0x2944d0u: goto label_2944d0;
        case 0x2944d4u: goto label_2944d4;
        case 0x2944d8u: goto label_2944d8;
        case 0x2944dcu: goto label_2944dc;
        case 0x2944e0u: goto label_2944e0;
        case 0x2944e4u: goto label_2944e4;
        case 0x2944e8u: goto label_2944e8;
        case 0x2944ecu: goto label_2944ec;
        case 0x2944f0u: goto label_2944f0;
        case 0x2944f4u: goto label_2944f4;
        case 0x2944f8u: goto label_2944f8;
        case 0x2944fcu: goto label_2944fc;
        case 0x294500u: goto label_294500;
        case 0x294504u: goto label_294504;
        case 0x294508u: goto label_294508;
        case 0x29450cu: goto label_29450c;
        case 0x294510u: goto label_294510;
        case 0x294514u: goto label_294514;
        case 0x294518u: goto label_294518;
        case 0x29451cu: goto label_29451c;
        case 0x294520u: goto label_294520;
        case 0x294524u: goto label_294524;
        case 0x294528u: goto label_294528;
        case 0x29452cu: goto label_29452c;
        case 0x294530u: goto label_294530;
        case 0x294534u: goto label_294534;
        case 0x294538u: goto label_294538;
        case 0x29453cu: goto label_29453c;
        case 0x294540u: goto label_294540;
        case 0x294544u: goto label_294544;
        case 0x294548u: goto label_294548;
        case 0x29454cu: goto label_29454c;
        case 0x294550u: goto label_294550;
        case 0x294554u: goto label_294554;
        case 0x294558u: goto label_294558;
        case 0x29455cu: goto label_29455c;
        case 0x294560u: goto label_294560;
        case 0x294564u: goto label_294564;
        case 0x294568u: goto label_294568;
        case 0x29456cu: goto label_29456c;
        case 0x294570u: goto label_294570;
        case 0x294574u: goto label_294574;
        case 0x294578u: goto label_294578;
        case 0x29457cu: goto label_29457c;
        case 0x294580u: goto label_294580;
        case 0x294584u: goto label_294584;
        case 0x294588u: goto label_294588;
        case 0x29458cu: goto label_29458c;
        case 0x294590u: goto label_294590;
        case 0x294594u: goto label_294594;
        case 0x294598u: goto label_294598;
        case 0x29459cu: goto label_29459c;
        case 0x2945a0u: goto label_2945a0;
        case 0x2945a4u: goto label_2945a4;
        case 0x2945a8u: goto label_2945a8;
        case 0x2945acu: goto label_2945ac;
        case 0x2945b0u: goto label_2945b0;
        case 0x2945b4u: goto label_2945b4;
        case 0x2945b8u: goto label_2945b8;
        case 0x2945bcu: goto label_2945bc;
        case 0x2945c0u: goto label_2945c0;
        case 0x2945c4u: goto label_2945c4;
        case 0x2945c8u: goto label_2945c8;
        case 0x2945ccu: goto label_2945cc;
        case 0x2945d0u: goto label_2945d0;
        case 0x2945d4u: goto label_2945d4;
        case 0x2945d8u: goto label_2945d8;
        case 0x2945dcu: goto label_2945dc;
        case 0x2945e0u: goto label_2945e0;
        case 0x2945e4u: goto label_2945e4;
        case 0x2945e8u: goto label_2945e8;
        case 0x2945ecu: goto label_2945ec;
        case 0x2945f0u: goto label_2945f0;
        case 0x2945f4u: goto label_2945f4;
        case 0x2945f8u: goto label_2945f8;
        case 0x2945fcu: goto label_2945fc;
        case 0x294600u: goto label_294600;
        case 0x294604u: goto label_294604;
        case 0x294608u: goto label_294608;
        case 0x29460cu: goto label_29460c;
        case 0x294610u: goto label_294610;
        case 0x294614u: goto label_294614;
        case 0x294618u: goto label_294618;
        case 0x29461cu: goto label_29461c;
        case 0x294620u: goto label_294620;
        case 0x294624u: goto label_294624;
        case 0x294628u: goto label_294628;
        case 0x29462cu: goto label_29462c;
        case 0x294630u: goto label_294630;
        case 0x294634u: goto label_294634;
        case 0x294638u: goto label_294638;
        case 0x29463cu: goto label_29463c;
        case 0x294640u: goto label_294640;
        case 0x294644u: goto label_294644;
        case 0x294648u: goto label_294648;
        case 0x29464cu: goto label_29464c;
        case 0x294650u: goto label_294650;
        case 0x294654u: goto label_294654;
        case 0x294658u: goto label_294658;
        case 0x29465cu: goto label_29465c;
        case 0x294660u: goto label_294660;
        case 0x294664u: goto label_294664;
        case 0x294668u: goto label_294668;
        case 0x29466cu: goto label_29466c;
        case 0x294670u: goto label_294670;
        case 0x294674u: goto label_294674;
        case 0x294678u: goto label_294678;
        case 0x29467cu: goto label_29467c;
        case 0x294680u: goto label_294680;
        case 0x294684u: goto label_294684;
        case 0x294688u: goto label_294688;
        case 0x29468cu: goto label_29468c;
        case 0x294690u: goto label_294690;
        case 0x294694u: goto label_294694;
        case 0x294698u: goto label_294698;
        case 0x29469cu: goto label_29469c;
        case 0x2946a0u: goto label_2946a0;
        case 0x2946a4u: goto label_2946a4;
        case 0x2946a8u: goto label_2946a8;
        case 0x2946acu: goto label_2946ac;
        case 0x2946b0u: goto label_2946b0;
        case 0x2946b4u: goto label_2946b4;
        case 0x2946b8u: goto label_2946b8;
        case 0x2946bcu: goto label_2946bc;
        case 0x2946c0u: goto label_2946c0;
        case 0x2946c4u: goto label_2946c4;
        case 0x2946c8u: goto label_2946c8;
        case 0x2946ccu: goto label_2946cc;
        case 0x2946d0u: goto label_2946d0;
        case 0x2946d4u: goto label_2946d4;
        case 0x2946d8u: goto label_2946d8;
        case 0x2946dcu: goto label_2946dc;
        case 0x2946e0u: goto label_2946e0;
        case 0x2946e4u: goto label_2946e4;
        case 0x2946e8u: goto label_2946e8;
        case 0x2946ecu: goto label_2946ec;
        case 0x2946f0u: goto label_2946f0;
        case 0x2946f4u: goto label_2946f4;
        case 0x2946f8u: goto label_2946f8;
        case 0x2946fcu: goto label_2946fc;
        case 0x294700u: goto label_294700;
        case 0x294704u: goto label_294704;
        default: return;
    }

label_293f38:
    // 0x293f38: 0x10460  .word       0x00010460                   # add         $zero, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293f38u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_293f3c:
    // 0x293f3c: 0x0  nop
    ctx->pc = 0x293f3cu;
    // NOP
label_293f40:
    // 0x293f40: 0xfb3b  dsra        $ra, $zero, 12
    ctx->pc = 0x293f40u;
    SET_GPR_S64(ctx, 31, GPR_S64(ctx, 0) >> 12);
label_293f44:
    // 0x293f44: 0x5c  .word       0x0000005C                   # dmult       $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293f44u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x293F44 raw=0x0000005C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293f48:
    // 0x293f48: 0x2dcc0  sll         $k1, $v0, 19
    ctx->pc = 0x293f48u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
label_293f4c:
    // 0x293f4c: 0x0  nop
    ctx->pc = 0x293f4cu;
    // NOP
label_293f50:
    // 0x293f50: 0xfb97  .word       0x0000FB97                   # dsrav       $ra, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293f50u;
    SET_GPR_S64(ctx, 31, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_293f54:
    // 0x293f54: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293f54u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x293F54 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293f58:
    // 0x293f58: 0x23e8  .word       0x000023E8                   # mfsa        $a0 # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x293f58u;
    SET_GPR_U32(ctx, 4, ctx->sa);
label_293f5c:
    // 0x293f5c: 0x0  nop
    ctx->pc = 0x293f5cu;
    // NOP
label_293f60:
    // 0x293f60: 0xfb9c  .word       0x0000FB9C                   # dmult       $zero, $zero # 0000FB80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293f60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x293F60 raw=0x0000FB9C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293f64:
    // 0x293f64: 0x7c  dsll32      $zero, $zero, 1
    ctx->pc = 0x293f64u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 1));
label_293f68:
    // 0x293f68: 0x3da80  sll         $k1, $v1, 10
    ctx->pc = 0x293f68u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
label_293f6c:
    // 0x293f6c: 0x0  nop
    ctx->pc = 0x293f6cu;
    // NOP
label_293f70:
    // 0x293f70: 0xfc18  .word       0x0000FC18                   # mult        $ra, $zero, $zero # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x293f70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_293f74:
    // 0x293f74: 0xa8  .word       0x000000A8                   # mfsa        $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x293f74u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_293f78:
    // 0x293f78: 0x53f08  .word       0x00053F08                   # jr          $zero # 00053F00 <InstrIdType: CPU_SPECIAL>
label_293f7c:
    if (ctx->pc == 0x293F7Cu) {
        ctx->pc = 0x293F80u;
        goto label_293f80;
    }
    ctx->pc = 0x293F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293F78u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x293F80u;
label_293f80:
    // 0x293f80: 0xfcc0  sll         $ra, $zero, 19
    ctx->pc = 0x293f80u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_293f84:
    // 0x293f84: 0x61  .word       0x00000061                   # addu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293f84u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_293f88:
    // 0x293f88: 0x30210  .word       0x00030210                   # mfhi        $zero # 00030200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293f88u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_293f8c:
    // 0x293f8c: 0x0  nop
    ctx->pc = 0x293f8cu;
    // NOP
label_293f90:
    // 0x293f90: 0xfd21  .word       0x0000FD21                   # addu        $ra, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293f90u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_293f94:
    // 0x293f94: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293f94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_293f98:
    // 0x293f98: 0x2fbb0  tge         $zero, $v0, 1006
    ctx->pc = 0x293f98u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_293f9c:
    // 0x293f9c: 0x0  nop
    ctx->pc = 0x293f9cu;
    // NOP
label_293fa0:
    // 0x293fa0: 0xfd81  .word       0x0000FD81                   # INVALID     $zero, $zero, -0x27F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293fa0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x293FA0 raw=0x0000FD81"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293fa4:
    // 0x293fa4: 0x7d  .word       0x0000007D                   # INVALID     $zero, $zero, 0x7D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293fa4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x293FA4 raw=0x0000007D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293fa8:
    // 0x293fa8: 0x3e700  sll         $gp, $v1, 28
    ctx->pc = 0x293fa8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 3), 28));
label_293fac:
    // 0x293fac: 0x0  nop
    ctx->pc = 0x293facu;
    // NOP
label_293fb0:
    // 0x293fb0: 0xfdfe  dsrl32      $ra, $zero, 23
    ctx->pc = 0x293fb0u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) >> (32 + 23));
label_293fb4:
    // 0x293fb4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x293fb4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_293fb8:
    // 0x293fb8: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x293fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_293fbc:
    // 0x293fbc: 0x0  nop
    ctx->pc = 0x293fbcu;
    // NOP
label_293fc0:
    // 0x293fc0: 0xfe02  srl         $ra, $zero, 24
    ctx->pc = 0x293fc0u;
    SET_GPR_S32(ctx, 31, (int32_t)SRL32(GPR_U32(ctx, 0), 24));
label_293fc4:
    // 0x293fc4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293fc4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x293FC4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293fc8:
    // 0x293fc8: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x293fc8u;
    
label_293fcc:
    // 0x293fcc: 0x0  nop
    ctx->pc = 0x293fccu;
    // NOP
label_293fd0:
    // 0x293fd0: 0xfe03  sra         $ra, $zero, 24
    ctx->pc = 0x293fd0u;
    SET_GPR_S32(ctx, 31, SRA32(GPR_S32(ctx, 0), 24));
label_293fd4:
    // 0x293fd4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293fd4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x293FD4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293fd8:
    // 0x293fd8: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x293fd8u;
    
label_293fdc:
    // 0x293fdc: 0x0  nop
    ctx->pc = 0x293fdcu;
    // NOP
label_293fe0:
    // 0x293fe0: 0xfe04  .word       0x0000FE04                   # sllv        $ra, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293fe0u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_293fe4:
    // 0x293fe4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x293fe4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_293fe8:
    // 0x293fe8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293fe8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_293fec:
    // 0x293fec: 0x0  nop
    ctx->pc = 0x293fecu;
    // NOP
label_293ff0:
    // 0x293ff0: 0xfe08  .word       0x0000FE08                   # jr          $zero # 0000FE00 <InstrIdType: CPU_SPECIAL>
label_293ff4:
    if (ctx->pc == 0x293FF4u) {
        ctx->pc = 0x293FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293FF0u;
        // 0x293ff4: 0x9a  .word       0x0000009A                   # div         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x293FF8u;
        goto label_293ff8;
    }
    ctx->pc = 0x293FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x293FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293FF0u;
        // 0x293ff4: 0x9a  .word       0x0000009A                   # div         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293FF0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x293FF8u;
label_293ff8:
    // 0x293ff8: 0x4c898  .word       0x0004C898                   # mult        $t9, $zero, $a0 # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x293ff8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
label_293ffc:
    // 0x293ffc: 0x0  nop
    ctx->pc = 0x293ffcu;
    // NOP
label_294000:
    // 0x294000: 0xfea2  .word       0x0000FEA2                   # neg         $ra, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294000u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 31, (int32_t)tmp); }
label_294004:
    // 0x294004: 0x5d  .word       0x0000005D                   # dmultu      $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294004u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x294004 raw=0x0000005D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294008:
    // 0x294008: 0x2e410  .word       0x0002E410                   # mfhi        $gp # 00020400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294008u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_29400c:
    // 0x29400c: 0x0  nop
    ctx->pc = 0x29400cu;
    // NOP
label_294010:
    // 0x294010: 0xfeff  dsra32      $ra, $zero, 27
    ctx->pc = 0x294010u;
    SET_GPR_S64(ctx, 31, GPR_S64(ctx, 0) >> (32 + 27));
label_294014:
    // 0x294014: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x294014u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_294018:
    // 0x294018: 0xcd0  .word       0x00000CD0                   # mfhi        $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294018u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_29401c:
    // 0x29401c: 0x0  nop
    ctx->pc = 0x29401cu;
    // NOP
label_294020:
    // 0x294020: 0xff01  .word       0x0000FF01                   # INVALID     $zero, $zero, -0xFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294020u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294020 raw=0x0000FF01"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294024:
    // 0x294024: 0x147  .word       0x00000147                   # srav        $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294024u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_294028:
    // 0x294028: 0xa32c0  sll         $a2, $t2, 11
    ctx->pc = 0x294028u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 11));
label_29402c:
    // 0x29402c: 0x0  nop
    ctx->pc = 0x29402cu;
    // NOP
label_294030:
    // 0x294030: 0x10048  .word       0x00010048                   # jr          $zero # 00010040 <InstrIdType: CPU_SPECIAL>
label_294034:
    if (ctx->pc == 0x294034u) {
        ctx->pc = 0x294034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294030u;
        // 0x294034: 0x55  .word       0x00000055                   # INVALID     $zero, $zero, 0x55 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x294034 raw=0x00000055"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x294038u;
        goto label_294038;
    }
    ctx->pc = 0x294030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x294034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294030u;
        // 0x294034: 0x55  .word       0x00000055                   # INVALID     $zero, $zero, 0x55 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x294034 raw=0x00000055"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294030u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x294038u;
label_294038:
    // 0x294038: 0x2a1e0  .word       0x0002A1E0                   # add         $s4, $zero, $v0 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294038u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_29403c:
    // 0x29403c: 0x0  nop
    ctx->pc = 0x29403cu;
    // NOP
label_294040:
    // 0x294040: 0x1009d  .word       0x0001009D                   # dmultu      $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294040u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x294040 raw=0x0001009D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294044:
    // 0x294044: 0x141  .word       0x00000141                   # INVALID     $zero, $zero, 0x141 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294044u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294044 raw=0x00000141"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294048:
    // 0x294048: 0xa02e4  .word       0x000A02E4                   # and         $zero, $zero, $t2 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294048u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 10));
label_29404c:
    // 0x29404c: 0x0  nop
    ctx->pc = 0x29404cu;
    // NOP
label_294050:
    // 0x294050: 0x101de  .word       0x000101DE                   # ddiv        $zero, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294050u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x294050 raw=0x000101DE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294054:
    // 0x294054: 0x15d  .word       0x0000015D                   # dmultu      $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294054u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x294054 raw=0x0000015D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294058:
    // 0x294058: 0xae06c  .word       0x000AE06C                   # dadd        $gp, $zero, $t2 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294058u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 10); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 28, r); }
label_29405c:
    // 0x29405c: 0x0  nop
    ctx->pc = 0x29405cu;
    // NOP
label_294060:
    // 0x294060: 0x1033b  dsra        $zero, $at, 12
    ctx->pc = 0x294060u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 1) >> 12);
label_294064:
    // 0x294064: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294064u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294064 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294068:
    // 0x294068: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294068u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29406c:
    // 0x29406c: 0x0  nop
    ctx->pc = 0x29406cu;
    // NOP
label_294070:
    // 0x294070: 0x1033c  dsll32      $zero, $at, 12
    ctx->pc = 0x294070u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) << (32 + 12));
label_294074:
    // 0x294074: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294074u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294074 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294078:
    // 0x294078: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x294078u;
    
label_29407c:
    // 0x29407c: 0x0  nop
    ctx->pc = 0x29407cu;
    // NOP
label_294080:
    // 0x294080: 0x1033d  .word       0x0001033D                   # INVALID     $zero, $at, 0x33D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294080u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x294080 raw=0x0001033D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294084:
    // 0x294084: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x294084u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_294088:
    // 0x294088: 0x10460  .word       0x00010460                   # add         $zero, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294088u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29408c:
    // 0x29408c: 0x0  nop
    ctx->pc = 0x29408cu;
    // NOP
label_294090:
    // 0x294090: 0x1035e  .word       0x0001035E                   # ddiv        $zero, $zero, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294090u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x294090 raw=0x0001035E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294094:
    // 0x294094: 0x12  mflo        $zero
    ctx->pc = 0x294094u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_294098:
    // 0x294098: 0x8fe0  .word       0x00008FE0                   # add         $s1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294098u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_29409c:
    // 0x29409c: 0x0  nop
    ctx->pc = 0x29409cu;
    // NOP
label_2940a0:
    // 0x2940a0: 0x10370  tge         $zero, $at, 13
    ctx->pc = 0x2940a0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2940a4:
    // 0x2940a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2940a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2940A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2940a8:
    // 0x2940a8: 0x748  .word       0x00000748                   # jr          $zero # 00000740 <InstrIdType: CPU_SPECIAL>
label_2940ac:
    if (ctx->pc == 0x2940ACu) {
        ctx->pc = 0x2940B0u;
        goto label_2940b0;
    }
    ctx->pc = 0x2940A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2940A8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2940B0u;
label_2940b0:
    // 0x2940b0: 0x10371  tgeu        $zero, $at, 13
    ctx->pc = 0x2940b0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2940b4:
    // 0x2940b4: 0xa3  .word       0x000000A3                   # negu        $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2940b4u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2940b8:
    // 0x2940b8: 0x516c0  sll         $v0, $a1, 27
    ctx->pc = 0x2940b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 27));
label_2940bc:
    // 0x2940bc: 0x0  nop
    ctx->pc = 0x2940bcu;
    // NOP
label_2940c0:
    // 0x2940c0: 0x10414  .word       0x00010414                   # dsllv       $zero, $at, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2940c0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_2940c4:
    // 0x2940c4: 0x59  .word       0x00000059                   # multu       $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2940c4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2940c8:
    // 0x2940c8: 0x2c060  .word       0x0002C060                   # add         $t8, $zero, $v0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2940c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_2940cc:
    // 0x2940cc: 0x0  nop
    ctx->pc = 0x2940ccu;
    // NOP
label_2940d0:
    // 0x2940d0: 0x1046d  .word       0x0001046D                   # daddu       $zero, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2940d0u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_2940d4:
    // 0x2940d4: 0x7f  dsra32      $zero, $zero, 1
    ctx->pc = 0x2940d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 1));
label_2940d8:
    // 0x2940d8: 0x3f5d0  .word       0x0003F5D0                   # mfhi        $fp # 000305C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2940d8u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_2940dc:
    // 0x2940dc: 0x0  nop
    ctx->pc = 0x2940dcu;
    // NOP
label_2940e0:
    // 0x2940e0: 0x104ec  .word       0x000104EC                   # dadd        $zero, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2940e0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2940e4:
    // 0x2940e4: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x2940e4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2940e8:
    // 0x2940e8: 0x11c20  .word       0x00011C20                   # add         $v1, $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2940e8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2940ec:
    // 0x2940ec: 0x0  nop
    ctx->pc = 0x2940ecu;
    // NOP
label_2940f0:
    // 0x2940f0: 0x10510  .word       0x00010510                   # mfhi        $zero # 00010500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2940f0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2940f4:
    // 0x2940f4: 0x28  mfsa        $zero
    ctx->pc = 0x2940f4u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_2940f8:
    // 0x2940f8: 0x138d0  .word       0x000138D0                   # mfhi        $a3 # 000100C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2940f8u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_2940fc:
    // 0x2940fc: 0x0  nop
    ctx->pc = 0x2940fcu;
    // NOP
label_294100:
    // 0x294100: 0x10538  dsll        $zero, $at, 20
    ctx->pc = 0x294100u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) << 20);
label_294104:
    // 0x294104: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x294104u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_294108:
    // 0x294108: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x294108u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_29410c:
    // 0x29410c: 0x0  nop
    ctx->pc = 0x29410cu;
    // NOP
label_294110:
    // 0x294110: 0x1053c  dsll32      $zero, $at, 20
    ctx->pc = 0x294110u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) << (32 + 20));
label_294114:
    // 0x294114: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294114u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294114 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294118:
    // 0x294118: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x294118u;
    
label_29411c:
    // 0x29411c: 0x0  nop
    ctx->pc = 0x29411cu;
    // NOP
label_294120:
    // 0x294120: 0x1053d  .word       0x0001053D                   # INVALID     $zero, $at, 0x53D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294120u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x294120 raw=0x0001053D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294124:
    // 0x294124: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x294124u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_294128:
    // 0x294128: 0x1450  .word       0x00001450                   # mfhi        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294128u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_29412c:
    // 0x29412c: 0x0  nop
    ctx->pc = 0x29412cu;
    // NOP
label_294130:
    // 0x294130: 0x10540  sll         $zero, $at, 21
    ctx->pc = 0x294130u;
    
label_294134:
    // 0x294134: 0x184  .word       0x00000184                   # sllv        $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294134u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_294138:
    // 0x294138: 0xc1820  add         $v1, $zero, $t4
    ctx->pc = 0x294138u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29413c:
    // 0x29413c: 0x0  nop
    ctx->pc = 0x29413cu;
    // NOP
label_294140:
    // 0x294140: 0x106c4  .word       0x000106C4                   # sllv        $zero, $at, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294140u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_294144:
    // 0x294144: 0xc8  .word       0x000000C8                   # jr          $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
label_294148:
    if (ctx->pc == 0x294148u) {
        ctx->pc = 0x294148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294144u;
        // 0x294148: 0x63e20  .word       0x00063E20                   # add         $a3, $zero, $a2 # 00000600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29414Cu;
        goto label_29414c;
    }
    ctx->pc = 0x294144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x294148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294144u;
        // 0x294148: 0x63e20  .word       0x00063E20                   # add         $a3, $zero, $a2 # 00000600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294144u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29414Cu;
label_29414c:
    // 0x29414c: 0x0  nop
    ctx->pc = 0x29414cu;
    // NOP
label_294150:
    // 0x294150: 0x1078c  .word       0x0001078C                   # syscall     30 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294150u;
    ctx->pc = 0x294154u;
runtime->handleSyscall(rdram, ctx, 0x41Eu);
label_294154:
    // 0x294154: 0xdd  .word       0x000000DD                   # dmultu      $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294154u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x294154 raw=0x000000DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294158:
    // 0x294158: 0x6e694  .word       0x0006E694                   # dsllv       $gp, $a2, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294158u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 6) << (GPR_U32(ctx, 0) & 0x3F));
label_29415c:
    // 0x29415c: 0x0  nop
    ctx->pc = 0x29415cu;
    // NOP
label_294160:
    // 0x294160: 0x10869  .word       0x00010869                   # mtsa        $zero # 00010840 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x294160u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_294164:
    // 0x294164: 0x1f3  tltu        $zero, $zero, 7
    ctx->pc = 0x294164u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_294168:
    // 0x294168: 0xf92e8  .word       0x000F92E8                   # mfsa        $s2 # 000F02C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x294168u;
    SET_GPR_U32(ctx, 18, ctx->sa);
label_29416c:
    // 0x29416c: 0x0  nop
    ctx->pc = 0x29416cu;
    // NOP
label_294170:
    // 0x294170: 0x10a5c  .word       0x00010A5C                   # dmult       $zero, $at # 00000A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294170u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x294170 raw=0x00010A5C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294174:
    // 0x294174: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294174u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294174 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294178:
    // 0x294178: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294178u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29417c:
    // 0x29417c: 0x0  nop
    ctx->pc = 0x29417cu;
    // NOP
label_294180:
    // 0x294180: 0x10a5d  .word       0x00010A5D                   # dmultu      $zero, $at # 00000A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294180u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x294180 raw=0x00010A5D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294184:
    // 0x294184: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294184u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294184 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294188:
    // 0x294188: 0x90  .word       0x00000090                   # mfhi        $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294188u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29418c:
    // 0x29418c: 0x0  nop
    ctx->pc = 0x29418cu;
    // NOP
label_294190:
    // 0x294190: 0x10a5e  .word       0x00010A5E                   # ddiv        $at, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294190u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x294190 raw=0x00010A5E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294194:
    // 0x294194: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294194u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294194 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294198:
    // 0x294198: 0x190  .word       0x00000190                   # mfhi        $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294198u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29419c:
    // 0x29419c: 0x0  nop
    ctx->pc = 0x29419cu;
    // NOP
label_2941a0:
    // 0x2941a0: 0x10a5f  .word       0x00010A5F                   # ddivu       $at, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2941a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2941A0 raw=0x00010A5F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2941a4:
    // 0x2941a4: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x2941a4u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2941a8:
    // 0x2941a8: 0x10460  .word       0x00010460                   # add         $zero, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2941a8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2941ac:
    // 0x2941ac: 0x0  nop
    ctx->pc = 0x2941acu;
    // NOP
label_2941b0:
    // 0x2941b0: 0x10a80  sll         $at, $at, 10
    ctx->pc = 0x2941b0u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), 10));
label_2941b4:
    // 0x2941b4: 0x11  mthi        $zero
    ctx->pc = 0x2941b4u;
    ctx->hi = GPR_U64(ctx, 0);
label_2941b8:
    // 0x2941b8: 0x8740  sll         $s0, $zero, 29
    ctx->pc = 0x2941b8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_2941bc:
    // 0x2941bc: 0x0  nop
    ctx->pc = 0x2941bcu;
    // NOP
label_2941c0:
    // 0x2941c0: 0x10a91  .word       0x00010A91                   # mthi        $zero # 00010A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2941c0u;
    ctx->hi = GPR_U64(ctx, 0);
label_2941c4:
    // 0x2941c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2941c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2941C4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2941c8:
    // 0x2941c8: 0x6c8  .word       0x000006C8                   # jr          $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
label_2941cc:
    if (ctx->pc == 0x2941CCu) {
        ctx->pc = 0x2941D0u;
        goto label_2941d0;
    }
    ctx->pc = 0x2941C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2941C8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2941D0u;
label_2941d0:
    // 0x2941d0: 0x10a92  .word       0x00010A92                   # mflo        $at # 00010280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2941d0u;
    SET_GPR_U64(ctx, 1, ctx->lo);
label_2941d4:
    // 0x2941d4: 0x1f3  tltu        $zero, $zero, 7
    ctx->pc = 0x2941d4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2941d8:
    // 0x2941d8: 0xf9208  .word       0x000F9208                   # jr          $zero # 000F9200 <InstrIdType: CPU_SPECIAL>
label_2941dc:
    if (ctx->pc == 0x2941DCu) {
        ctx->pc = 0x2941E0u;
        goto label_2941e0;
    }
    ctx->pc = 0x2941D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2941D8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2941E0u;
label_2941e0:
    // 0x2941e0: 0x10c85  .word       0x00010C85                   # INVALID     $zero, $at, 0xC85 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2941e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2941E0 raw=0x00010C85"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2941e4:
    // 0x2941e4: 0x57  .word       0x00000057                   # dsrav       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2941e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2941e8:
    // 0x2941e8: 0x2b300  sll         $s6, $v0, 12
    ctx->pc = 0x2941e8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
label_2941ec:
    // 0x2941ec: 0x0  nop
    ctx->pc = 0x2941ecu;
    // NOP
label_2941f0:
    // 0x2941f0: 0x10cdc  .word       0x00010CDC                   # dmult       $zero, $at # 00000CC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2941f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2941F0 raw=0x00010CDC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2941f4:
    // 0x2941f4: 0x47  .word       0x00000047                   # srav        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2941f4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2941f8:
    // 0x2941f8: 0x23418  .word       0x00023418                   # mult        $a2, $zero, $v0 # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2941f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_2941fc:
    // 0x2941fc: 0x0  nop
    ctx->pc = 0x2941fcu;
    // NOP
label_294200:
    // 0x294200: 0x10d23  .word       0x00010D23                   # negu        $at, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294200u;
    SET_GPR_S32(ctx, 1, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_294204:
    // 0x294204: 0x3b  dsra        $zero, $zero, 0
    ctx->pc = 0x294204u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 0);
label_294208:
    // 0x294208: 0x1d2f0  tge         $zero, $at, 843
    ctx->pc = 0x294208u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_29420c:
    // 0x29420c: 0x0  nop
    ctx->pc = 0x29420cu;
    // NOP
label_294210:
    // 0x294210: 0x10d5e  .word       0x00010D5E                   # ddiv        $at, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294210u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x294210 raw=0x00010D5E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294214:
    // 0x294214: 0x23  negu        $zero, $zero
    ctx->pc = 0x294214u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_294218:
    // 0x294218: 0x114e0  .word       0x000114E0                   # add         $v0, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294218u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_29421c:
    // 0x29421c: 0x0  nop
    ctx->pc = 0x29421cu;
    // NOP
label_294220:
    // 0x294220: 0x10d81  .word       0x00010D81                   # INVALID     $zero, $at, 0xD81 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294220u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294220 raw=0x00010D81"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294224:
    // 0x294224: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x294224u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_294228:
    // 0x294228: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x294228u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_29422c:
    // 0x29422c: 0x0  nop
    ctx->pc = 0x29422cu;
    // NOP
label_294230:
    // 0x294230: 0x10d85  .word       0x00010D85                   # INVALID     $zero, $at, 0xD85 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294230u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x294230 raw=0x00010D85"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294234:
    // 0x294234: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294234u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294234 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294238:
    // 0x294238: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x294238u;
    
label_29423c:
    // 0x29423c: 0x0  nop
    ctx->pc = 0x29423cu;
    // NOP
label_294240:
    // 0x294240: 0x10d86  .word       0x00010D86                   # srlv        $at, $at, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294240u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_294244:
    // 0x294244: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x294244u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_294248:
    // 0x294248: 0xd790  .word       0x0000D790                   # mfhi        $k0 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294248u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_29424c:
    // 0x29424c: 0x0  nop
    ctx->pc = 0x29424cu;
    // NOP
label_294250:
    // 0x294250: 0x10da1  .word       0x00010DA1                   # addu        $at, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294250u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_294254:
    // 0x294254: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x294254u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_294258:
    // 0x294258: 0xd790  .word       0x0000D790                   # mfhi        $k0 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294258u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_29425c:
    // 0x29425c: 0x0  nop
    ctx->pc = 0x29425cu;
    // NOP
label_294260:
    // 0x294260: 0x10dbc  dsll32      $at, $at, 22
    ctx->pc = 0x294260u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << (32 + 22));
label_294264:
    // 0x294264: 0x44  .word       0x00000044                   # sllv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294264u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_294268:
    // 0x294268: 0x21ae0  .word       0x00021AE0                   # add         $v1, $zero, $v0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294268u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29426c:
    // 0x29426c: 0x0  nop
    ctx->pc = 0x29426cu;
    // NOP
label_294270:
    // 0x294270: 0x10e00  sll         $at, $at, 24
    ctx->pc = 0x294270u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), 24));
label_294274:
    // 0x294274: 0x37  .word       0x00000037                   # INVALID     $zero, $zero, 0x37 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294274u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x294274 raw=0x00000037"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294278:
    // 0x294278: 0x1b6d0  .word       0x0001B6D0                   # mfhi        $s6 # 000106C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294278u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_29427c:
    // 0x29427c: 0x0  nop
    ctx->pc = 0x29427cu;
    // NOP
label_294280:
    // 0x294280: 0x10e37  .word       0x00010E37                   # INVALID     $zero, $at, 0xE37 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294280u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x294280 raw=0x00010E37"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294284:
    // 0x294284: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x294284u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_294288:
    // 0x294288: 0x18b0  tge         $zero, $zero, 98
    ctx->pc = 0x294288u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29428c:
    // 0x29428c: 0x0  nop
    ctx->pc = 0x29428cu;
    // NOP
label_294290:
    // 0x294290: 0x10e3b  dsra        $at, $at, 24
    ctx->pc = 0x294290u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 1) >> 24);
label_294294:
    // 0x294294: 0x194  .word       0x00000194                   # dsllv       $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294294u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_294298:
    // 0x294298: 0xc9df0  tge         $zero, $t4, 631
    ctx->pc = 0x294298u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_29429c:
    // 0x29429c: 0x0  nop
    ctx->pc = 0x29429cu;
    // NOP
label_2942a0:
    // 0x2942a0: 0x10fcf  .word       0x00010FCF                   # sync.p # 00010800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2942a0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2942a4:
    // 0x2942a4: 0xce  .word       0x000000CE                   # INVALID     $zero, $zero, 0xCE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2942a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2942A4 raw=0x000000CE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2942a8:
    // 0x2942a8: 0x668a0  .word       0x000668A0                   # add         $t5, $zero, $a2 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2942a8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_2942ac:
    // 0x2942ac: 0x0  nop
    ctx->pc = 0x2942acu;
    // NOP
label_2942b0:
    // 0x2942b0: 0x1109d  .word       0x0001109D                   # dmultu      $zero, $at # 00001080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2942b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2942B0 raw=0x0001109D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2942b4:
    // 0x2942b4: 0x1eb  .word       0x000001EB                   # sltu        $zero, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2942b4u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_2942b8:
    // 0x2942b8: 0xf523c  dsll32      $t2, $t7, 8
    ctx->pc = 0x2942b8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 15) << (32 + 8));
label_2942bc:
    // 0x2942bc: 0x0  nop
    ctx->pc = 0x2942bcu;
    // NOP
label_2942c0:
    // 0x2942c0: 0x11288  .word       0x00011288                   # jr          $zero # 00011280 <InstrIdType: CPU_SPECIAL>
label_2942c4:
    if (ctx->pc == 0x2942C4u) {
        ctx->pc = 0x2942C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2942C0u;
        // 0x2942c4: 0x3e4  .word       0x000003E4                   # and         $zero, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2942C8u;
        goto label_2942c8;
    }
    ctx->pc = 0x2942C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2942C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2942C0u;
        // 0x2942c4: 0x3e4  .word       0x000003E4                   # and         $zero, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2942C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2942C8u;
label_2942c8:
    // 0x2942c8: 0x1f1d34  teq         $zero, $ra, 116
    ctx->pc = 0x2942c8u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 31)) { runtime->handleTrap(rdram, ctx); }
label_2942cc:
    // 0x2942cc: 0x0  nop
    ctx->pc = 0x2942ccu;
    // NOP
label_2942d0:
    // 0x2942d0: 0x1166c  .word       0x0001166C                   # dadd        $v0, $zero, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2942d0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, r); }
label_2942d4:
    // 0x2942d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2942d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2942D4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2942d8:
    // 0x2942d8: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2942d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2942dc:
    // 0x2942dc: 0x0  nop
    ctx->pc = 0x2942dcu;
    // NOP
label_2942e0:
    // 0x2942e0: 0x1166d  .word       0x0001166D                   # daddu       $v0, $zero, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2942e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_2942e4:
    // 0x2942e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2942e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2942E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2942e8:
    // 0x2942e8: 0x90  .word       0x00000090                   # mfhi        $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2942e8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2942ec:
    // 0x2942ec: 0x0  nop
    ctx->pc = 0x2942ecu;
    // NOP
label_2942f0:
    // 0x2942f0: 0x1166e  .word       0x0001166E                   # dsub        $v0, $zero, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2942f0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, r); }
label_2942f4:
    // 0x2942f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2942f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2942F4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2942f8:
    // 0x2942f8: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x2942f8u;
    
label_2942fc:
    // 0x2942fc: 0x0  nop
    ctx->pc = 0x2942fcu;
    // NOP
label_294300:
    // 0x294300: 0x1166f  .word       0x0001166F                   # dsubu       $v0, $zero, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_294304:
    // 0x294304: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x294304u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_294308:
    // 0x294308: 0x10460  .word       0x00010460                   # add         $zero, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294308u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29430c:
    // 0x29430c: 0x0  nop
    ctx->pc = 0x29430cu;
    // NOP
label_294310:
    // 0x294310: 0x11690  .word       0x00011690                   # mfhi        $v0 # 00010680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294310u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_294314:
    // 0x294314: 0x28  mfsa        $zero
    ctx->pc = 0x294314u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_294318:
    // 0x294318: 0x13be0  .word       0x00013BE0                   # add         $a3, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294318u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_29431c:
    // 0x29431c: 0x0  nop
    ctx->pc = 0x29431cu;
    // NOP
label_294320:
    // 0x294320: 0x116b8  dsll        $v0, $at, 26
    ctx->pc = 0x294320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) << 26);
label_294324:
    // 0x294324: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x294324u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_294328:
    // 0x294328: 0x1238  dsll        $v0, $zero, 8
    ctx->pc = 0x294328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << 8);
label_29432c:
    // 0x29432c: 0x0  nop
    ctx->pc = 0x29432cu;
    // NOP
label_294330:
    // 0x294330: 0x116bb  dsra        $v0, $at, 26
    ctx->pc = 0x294330u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 1) >> 26);
label_294334:
    // 0x294334: 0xcc  syscall     3
    ctx->pc = 0x294334u;
    ctx->pc = 0x294338u;
runtime->handleSyscall(rdram, ctx, 0x3u);
label_294338:
    // 0x294338: 0x65b00  sll         $t3, $a2, 12
    ctx->pc = 0x294338u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 6), 12));
label_29433c:
    // 0x29433c: 0x0  nop
    ctx->pc = 0x29433cu;
    // NOP
label_294340:
    // 0x294340: 0x11787  .word       0x00011787                   # srav        $v0, $at, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294340u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_294344:
    // 0x294344: 0x6c  .word       0x0000006C                   # dadd        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294344u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_294348:
    // 0x294348: 0x35d08  .word       0x00035D08                   # jr          $zero # 00035D00 <InstrIdType: CPU_SPECIAL>
label_29434c:
    if (ctx->pc == 0x29434Cu) {
        ctx->pc = 0x294350u;
        goto label_294350;
    }
    ctx->pc = 0x294348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294348u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x294350u;
label_294350:
    // 0x294350: 0x117f3  tltu        $zero, $at, 95
    ctx->pc = 0x294350u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_294354:
    // 0x294354: 0x6a  .word       0x0000006A                   # slt         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294354u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_294358:
    // 0x294358: 0x34ef0  tge         $zero, $v1, 315
    ctx->pc = 0x294358u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29435c:
    // 0x29435c: 0x0  nop
    ctx->pc = 0x29435cu;
    // NOP
label_294360:
    // 0x294360: 0x1185d  .word       0x0001185D                   # dmultu      $zero, $at # 00001840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294360u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x294360 raw=0x0001185D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294364:
    // 0x294364: 0x37  .word       0x00000037                   # INVALID     $zero, $zero, 0x37 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294364u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x294364 raw=0x00000037"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294368:
    // 0x294368: 0x1b610  .word       0x0001B610                   # mfhi        $s6 # 00010600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294368u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_29436c:
    // 0x29436c: 0x0  nop
    ctx->pc = 0x29436cu;
    // NOP
label_294370:
    // 0x294370: 0x11894  .word       0x00011894                   # dsllv       $v1, $at, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_294374:
    // 0x294374: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x294374u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_294378:
    // 0x294378: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x294378u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_29437c:
    // 0x29437c: 0x0  nop
    ctx->pc = 0x29437cu;
    // NOP
label_294380:
    // 0x294380: 0x11898  .word       0x00011898                   # mult        $v1, $zero, $at # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x294380u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_294384:
    // 0x294384: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294384u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294384 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294388:
    // 0x294388: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x294388u;
    
label_29438c:
    // 0x29438c: 0x0  nop
    ctx->pc = 0x29438cu;
    // NOP
label_294390:
    // 0x294390: 0x11899  .word       0x00011899                   # multu       $zero, $at # 00001880 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294390u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_294394:
    // 0x294394: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x294394u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_294398:
    // 0x294398: 0x18750  .word       0x00018750                   # mfhi        $s0 # 00010740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294398u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_29439c:
    // 0x29439c: 0x0  nop
    ctx->pc = 0x29439cu;
    // NOP
label_2943a0:
    // 0x2943a0: 0x118ca  .word       0x000118CA                   # movz        $v1, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2943a0u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_2943a4:
    // 0x2943a4: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2943a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2943A4 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2943a8:
    // 0x2943a8: 0x2530  tge         $zero, $zero, 148
    ctx->pc = 0x2943a8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2943ac:
    // 0x2943ac: 0x0  nop
    ctx->pc = 0x2943acu;
    // NOP
label_2943b0:
    // 0x2943b0: 0x118cf  .word       0x000118CF                   # sync # 00011800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2943b0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2943b4:
    // 0x2943b4: 0x166  .word       0x00000166                   # xor         $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2943b4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2943b8:
    // 0x2943b8: 0xb2a70  tge         $zero, $t3, 169
    ctx->pc = 0x2943b8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
label_2943bc:
    // 0x2943bc: 0x0  nop
    ctx->pc = 0x2943bcu;
    // NOP
label_2943c0:
    // 0x2943c0: 0x11a35  .word       0x00011A35                   # INVALID     $zero, $at, 0x1A35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2943c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2943C0 raw=0x00011A35"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2943c4:
    // 0x2943c4: 0x136  tne         $zero, $zero, 4
    ctx->pc = 0x2943c4u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2943c8:
    // 0x2943c8: 0x9aa30  tge         $zero, $t1, 680
    ctx->pc = 0x2943c8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_2943cc:
    // 0x2943cc: 0x0  nop
    ctx->pc = 0x2943ccu;
    // NOP
label_2943d0:
    // 0x2943d0: 0x11b6b  .word       0x00011B6B                   # sltu        $v1, $zero, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2943d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_2943d4:
    // 0x2943d4: 0x10c  syscall     4
    ctx->pc = 0x2943d4u;
    ctx->pc = 0x2943D8u;
runtime->handleSyscall(rdram, ctx, 0x4u);
label_2943d8:
    // 0x2943d8: 0x85e94  .word       0x00085E94                   # dsllv       $t3, $t0, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2943d8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) << (GPR_U32(ctx, 0) & 0x3F));
label_2943dc:
    // 0x2943dc: 0x0  nop
    ctx->pc = 0x2943dcu;
    // NOP
label_2943e0:
    // 0x2943e0: 0x11c77  .word       0x00011C77                   # INVALID     $zero, $at, 0x1C77 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2943e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2943E0 raw=0x00011C77"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2943e4:
    // 0x2943e4: 0x30d  break       0, 12
    ctx->pc = 0x2943e4u;
    runtime->handleBreak(rdram, ctx);
label_2943e8:
    // 0x2943e8: 0x1866d0  .word       0x001866D0                   # mfhi        $t4 # 001806C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2943e8u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_2943ec:
    // 0x2943ec: 0x0  nop
    ctx->pc = 0x2943ecu;
    // NOP
label_2943f0:
    // 0x2943f0: 0x11f84  .word       0x00011F84                   # sllv        $v1, $at, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2943f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_2943f4:
    // 0x2943f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2943f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2943F4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2943f8:
    // 0x2943f8: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2943f8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2943fc:
    // 0x2943fc: 0x0  nop
    ctx->pc = 0x2943fcu;
    // NOP
label_294400:
    // 0x294400: 0x11f85  .word       0x00011F85                   # INVALID     $zero, $at, 0x1F85 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294400u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x294400 raw=0x00011F85"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294404:
    // 0x294404: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294404u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294404 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294408:
    // 0x294408: 0x90  .word       0x00000090                   # mfhi        $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294408u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29440c:
    // 0x29440c: 0x0  nop
    ctx->pc = 0x29440cu;
    // NOP
label_294410:
    // 0x294410: 0x11f86  .word       0x00011F86                   # srlv        $v1, $at, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294410u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_294414:
    // 0x294414: 0x30d  break       0, 12
    ctx->pc = 0x294414u;
    runtime->handleBreak(rdram, ctx);
label_294418:
    // 0x294418: 0x1865a0  .word       0x001865A0                   # add         $t4, $zero, $t8 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294418u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_29441c:
    // 0x29441c: 0x0  nop
    ctx->pc = 0x29441cu;
    // NOP
label_294420:
    // 0x294420: 0x12293  .word       0x00012293                   # mtlo        $zero # 00012280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294420u;
    ctx->lo = GPR_U64(ctx, 0);
label_294424:
    // 0x294424: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294424u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294424 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294428:
    // 0x294428: 0x640  sll         $zero, $zero, 25
    ctx->pc = 0x294428u;
    
label_29442c:
    // 0x29442c: 0x0  nop
    ctx->pc = 0x29442cu;
    // NOP
label_294430:
    // 0x294430: 0x12294  .word       0x00012294                   # dsllv       $a0, $at, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294430u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_294434:
    // 0x294434: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x294434u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_294438:
    // 0x294438: 0x10460  .word       0x00010460                   # add         $zero, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294438u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29443c:
    // 0x29443c: 0x0  nop
    ctx->pc = 0x29443cu;
    // NOP
label_294440:
    // 0x294440: 0x122b5  .word       0x000122B5                   # INVALID     $zero, $at, 0x22B5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294440u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x294440 raw=0x000122B5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294444:
    // 0x294444: 0x55  .word       0x00000055                   # INVALID     $zero, $zero, 0x55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294444u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x294444 raw=0x00000055"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294448:
    // 0x294448: 0x2a0c0  sll         $s4, $v0, 3
    ctx->pc = 0x294448u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_29444c:
    // 0x29444c: 0x0  nop
    ctx->pc = 0x29444cu;
    // NOP
label_294450:
    // 0x294450: 0x1230a  .word       0x0001230A                   # movz        $a0, $zero, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294450u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_294454:
    // 0x294454: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x294454u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_294458:
    // 0x294458: 0x17e8  .word       0x000017E8                   # mfsa        $v0 # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x294458u;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_29445c:
    // 0x29445c: 0x0  nop
    ctx->pc = 0x29445cu;
    // NOP
label_294460:
    // 0x294460: 0x1230d  break       1, 140
    ctx->pc = 0x294460u;
    runtime->handleBreak(rdram, ctx);
label_294464:
    // 0x294464: 0x58  .word       0x00000058                   # mult        $zero, $zero, $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x294464u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_294468:
    // 0x294468: 0x2bfe0  .word       0x0002BFE0                   # add         $s7, $zero, $v0 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294468u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_29446c:
    // 0x29446c: 0x0  nop
    ctx->pc = 0x29446cu;
    // NOP
label_294470:
    // 0x294470: 0x12365  .word       0x00012365                   # or          $a0, $zero, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294470u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_294474:
    // 0x294474: 0xb8  dsll        $zero, $zero, 2
    ctx->pc = 0x294474u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 2);
label_294478:
    // 0x294478: 0x5bb58  .word       0x0005BB58                   # mult        $s7, $zero, $a1 # 00000340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x294478u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
label_29447c:
    // 0x29447c: 0x0  nop
    ctx->pc = 0x29447cu;
    // NOP
label_294480:
    // 0x294480: 0x1241d  .word       0x0001241D                   # dmultu      $zero, $at # 00002400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294480u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x294480 raw=0x0001241D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294484:
    // 0x294484: 0x7b  dsra        $zero, $zero, 1
    ctx->pc = 0x294484u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 1);
label_294488:
    // 0x294488: 0x3d550  .word       0x0003D550                   # mfhi        $k0 # 00030540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294488u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_29448c:
    // 0x29448c: 0x0  nop
    ctx->pc = 0x29448cu;
    // NOP
label_294490:
    // 0x294490: 0x12498  .word       0x00012498                   # mult        $a0, $zero, $at # 00000480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x294490u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_294494:
    // 0x294494: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x294494u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_294498:
    // 0x294498: 0x18d70  tge         $zero, $at, 565
    ctx->pc = 0x294498u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_29449c:
    // 0x29449c: 0x0  nop
    ctx->pc = 0x29449cu;
    // NOP
label_2944a0:
    // 0x2944a0: 0x124ca  .word       0x000124CA                   # movz        $a0, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2944a0u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_2944a4:
    // 0x2944a4: 0x37  .word       0x00000037                   # INVALID     $zero, $zero, 0x37 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2944a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2944A4 raw=0x00000037"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2944a8:
    // 0x2944a8: 0x1b460  .word       0x0001B460                   # add         $s6, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2944a8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_2944ac:
    // 0x2944ac: 0x0  nop
    ctx->pc = 0x2944acu;
    // NOP
label_2944b0:
    // 0x2944b0: 0x12501  .word       0x00012501                   # INVALID     $zero, $at, 0x2501 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2944b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2944B0 raw=0x00012501"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2944b4:
    // 0x2944b4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2944b4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2944b8:
    // 0x2944b8: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x2944b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_2944bc:
    // 0x2944bc: 0x0  nop
    ctx->pc = 0x2944bcu;
    // NOP
label_2944c0:
    // 0x2944c0: 0x12505  .word       0x00012505                   # INVALID     $zero, $at, 0x2505 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2944c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2944C0 raw=0x00012505"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2944c4:
    // 0x2944c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2944c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2944C4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2944c8:
    // 0x2944c8: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x2944c8u;
    
label_2944cc:
    // 0x2944cc: 0x0  nop
    ctx->pc = 0x2944ccu;
    // NOP
label_2944d0:
    // 0x2944d0: 0x12506  .word       0x00012506                   # srlv        $a0, $at, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2944d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_2944d4:
    // 0x2944d4: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x2944d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2944d8:
    // 0x2944d8: 0x2ab0  tge         $zero, $zero, 170
    ctx->pc = 0x2944d8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2944dc:
    // 0x2944dc: 0x0  nop
    ctx->pc = 0x2944dcu;
    // NOP
label_2944e0:
    // 0x2944e0: 0x1250c  .word       0x0001250C                   # syscall     148 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2944e0u;
    ctx->pc = 0x2944E4u;
runtime->handleSyscall(rdram, ctx, 0x494u);
label_2944e4:
    // 0x2944e4: 0xb2  tlt         $zero, $zero, 2
    ctx->pc = 0x2944e4u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2944e8:
    // 0x2944e8: 0x58d00  sll         $s1, $a1, 20
    ctx->pc = 0x2944e8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 5), 20));
label_2944ec:
    // 0x2944ec: 0x0  nop
    ctx->pc = 0x2944ecu;
    // NOP
label_2944f0:
    // 0x2944f0: 0x125be  dsrl32      $a0, $at, 22
    ctx->pc = 0x2944f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 1) >> (32 + 22));
label_2944f4:
    // 0x2944f4: 0x78  dsll        $zero, $zero, 1
    ctx->pc = 0x2944f4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
label_2944f8:
    // 0x2944f8: 0x3b9d0  .word       0x0003B9D0                   # mfhi        $s7 # 000301C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2944f8u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_2944fc:
    // 0x2944fc: 0x0  nop
    ctx->pc = 0x2944fcu;
    // NOP
label_294500:
    // 0x294500: 0x12636  tne         $zero, $at, 152
    ctx->pc = 0x294500u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_294504:
    // 0x294504: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x294504u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_294508:
    // 0x294508: 0xa50  .word       0x00000A50                   # mfhi        $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294508u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_29450c:
    // 0x29450c: 0x0  nop
    ctx->pc = 0x29450cu;
    // NOP
label_294510:
    // 0x294510: 0x12638  dsll        $a0, $at, 24
    ctx->pc = 0x294510u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 1) << 24);
label_294514:
    // 0x294514: 0x158  .word       0x00000158                   # mult        $zero, $zero, $zero # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x294514u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_294518:
    // 0x294518: 0xabf10  .word       0x000ABF10                   # mfhi        $s7 # 000A0700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294518u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_29451c:
    // 0x29451c: 0x0  nop
    ctx->pc = 0x29451cu;
    // NOP
label_294520:
    // 0x294520: 0x12790  .word       0x00012790                   # mfhi        $a0 # 00010780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294520u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_294524:
    // 0x294524: 0x6a  .word       0x0000006A                   # slt         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294524u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_294528:
    // 0x294528: 0x34ec0  sll         $t1, $v1, 27
    ctx->pc = 0x294528u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 27));
label_29452c:
    // 0x29452c: 0x0  nop
    ctx->pc = 0x29452cu;
    // NOP
label_294530:
    // 0x294530: 0x127fa  dsrl        $a0, $at, 31
    ctx->pc = 0x294530u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 1) >> 31);
label_294534:
    // 0x294534: 0xb4  teq         $zero, $zero, 2
    ctx->pc = 0x294534u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_294538:
    // 0x294538: 0x59c64  .word       0x00059C64                   # and         $s3, $zero, $a1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294538u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) & GPR_U64(ctx, 5));
label_29453c:
    // 0x29453c: 0x0  nop
    ctx->pc = 0x29453cu;
    // NOP
label_294540:
    // 0x294540: 0x128ae  .word       0x000128AE                   # dsub        $a1, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294540u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, r); }
label_294544:
    // 0x294544: 0xdb  .word       0x000000DB                   # divu        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294544u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_294548:
    // 0x294548: 0x6d2e4  .word       0x0006D2E4                   # and         $k0, $zero, $a2 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294548u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) & GPR_U64(ctx, 6));
label_29454c:
    // 0x29454c: 0x0  nop
    ctx->pc = 0x29454cu;
    // NOP
label_294550:
    // 0x294550: 0x12989  .word       0x00012989                   # jalr        $a1, $zero # 00010180 <InstrIdType: CPU_SPECIAL>
label_294554:
    if (ctx->pc == 0x294554u) {
        ctx->pc = 0x294554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294550u;
        // 0x294554: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294554 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x294558u;
        goto label_294558;
    }
    ctx->pc = 0x294550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 5, 0x294558u);
        ctx->pc = 0x294554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294550u;
        // 0x294554: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294554 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294550u, 0x294558u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x294558u;
label_294558:
    // 0x294558: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294558u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29455c:
    // 0x29455c: 0x0  nop
    ctx->pc = 0x29455cu;
    // NOP
label_294560:
    // 0x294560: 0x1298a  .word       0x0001298A                   # movz        $a1, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294560u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_294564:
    // 0x294564: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294564u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294564 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294568:
    // 0x294568: 0x4c  syscall     1
    ctx->pc = 0x294568u;
    ctx->pc = 0x29456Cu;
runtime->handleSyscall(rdram, ctx, 0x1u);
label_29456c:
    // 0x29456c: 0x0  nop
    ctx->pc = 0x29456cu;
    // NOP
label_294570:
    // 0x294570: 0x1298b  .word       0x0001298B                   # movn        $a1, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294570u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_294574:
    // 0x294574: 0xdb  .word       0x000000DB                   # divu        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294574u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_294578:
    // 0x294578: 0x6d184  .word       0x0006D184                   # sllv        $k0, $a2, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294578u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 0) & 0x1F));
label_29457c:
    // 0x29457c: 0x0  nop
    ctx->pc = 0x29457cu;
    // NOP
label_294580:
    // 0x294580: 0x12a66  .word       0x00012A66                   # xor         $a1, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294580u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_294584:
    // 0x294584: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294584u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294584 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294588:
    // 0x294588: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x294588u;
    
label_29458c:
    // 0x29458c: 0x0  nop
    ctx->pc = 0x29458cu;
    // NOP
label_294590:
    // 0x294590: 0x12a67  .word       0x00012A67                   # nor         $a1, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294590u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_294594:
    // 0x294594: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x294594u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_294598:
    // 0x294598: 0x10460  .word       0x00010460                   # add         $zero, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294598u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29459c:
    // 0x29459c: 0x0  nop
    ctx->pc = 0x29459cu;
    // NOP
label_2945a0:
    // 0x2945a0: 0x12a88  .word       0x00012A88                   # jr          $zero # 00012A80 <InstrIdType: CPU_SPECIAL>
label_2945a4:
    if (ctx->pc == 0x2945A4u) {
        ctx->pc = 0x2945A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2945A0u;
        // 0x2945a4: 0x13  mtlo        $zero (Delay Slot)
        ctx->lo = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2945A8u;
        goto label_2945a8;
    }
    ctx->pc = 0x2945A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2945A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2945A0u;
        // 0x2945a4: 0x13  mtlo        $zero (Delay Slot)
        ctx->lo = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2945A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2945A8u;
label_2945a8:
    // 0x2945a8: 0x9340  sll         $s2, $zero, 13
    ctx->pc = 0x2945a8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_2945ac:
    // 0x2945ac: 0x0  nop
    ctx->pc = 0x2945acu;
    // NOP
label_2945b0:
    // 0x2945b0: 0x12a9b  .word       0x00012A9B                   # divu        $a1, $zero, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2945b0u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2945b4:
    // 0x2945b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2945b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2945B4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2945b8:
    // 0x2945b8: 0x6f8  dsll        $zero, $zero, 27
    ctx->pc = 0x2945b8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 27);
label_2945bc:
    // 0x2945bc: 0x0  nop
    ctx->pc = 0x2945bcu;
    // NOP
label_2945c0:
    // 0x2945c0: 0x12a9c  .word       0x00012A9C                   # dmult       $zero, $at # 00002A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2945c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2945C0 raw=0x00012A9C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2945c4:
    // 0x2945c4: 0x48  .word       0x00000048                   # jr          $zero # 00000040 <InstrIdType: CPU_SPECIAL>
label_2945c8:
    if (ctx->pc == 0x2945C8u) {
        ctx->pc = 0x2945C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2945C4u;
        // 0x2945c8: 0x23ed0  .word       0x00023ED0                   # mfhi        $a3 # 000206C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 7, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2945CCu;
        goto label_2945cc;
    }
    ctx->pc = 0x2945C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2945C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2945C4u;
        // 0x2945c8: 0x23ed0  .word       0x00023ED0                   # mfhi        $a3 # 000206C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 7, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2945C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2945CCu;
label_2945cc:
    // 0x2945cc: 0x0  nop
    ctx->pc = 0x2945ccu;
    // NOP
label_2945d0:
    // 0x2945d0: 0x12ae4  .word       0x00012AE4                   # and         $a1, $zero, $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2945d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_2945d4:
    // 0x2945d4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x2945d4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2945d8:
    // 0x2945d8: 0xd1f0  tge         $zero, $zero, 839
    ctx->pc = 0x2945d8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2945dc:
    // 0x2945dc: 0x0  nop
    ctx->pc = 0x2945dcu;
    // NOP
label_2945e0:
    // 0x2945e0: 0x12aff  dsra32      $a1, $at, 11
    ctx->pc = 0x2945e0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 1) >> (32 + 11));
label_2945e4:
    // 0x2945e4: 0x29  mtsa        $zero
    ctx->pc = 0x2945e4u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2945e8:
    // 0x2945e8: 0x14520  .word       0x00014520                   # add         $t0, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2945e8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_2945ec:
    // 0x2945ec: 0x0  nop
    ctx->pc = 0x2945ecu;
    // NOP
label_2945f0:
    // 0x2945f0: 0x12b28  .word       0x00012B28                   # mfsa        $a1 # 00010300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2945f0u;
    SET_GPR_U32(ctx, 5, ctx->sa);
label_2945f4:
    // 0x2945f4: 0x45  .word       0x00000045                   # INVALID     $zero, $zero, 0x45 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2945f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2945F4 raw=0x00000045"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2945f8:
    // 0x2945f8: 0x2233c  dsll32      $a0, $v0, 12
    ctx->pc = 0x2945f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 12));
label_2945fc:
    // 0x2945fc: 0x0  nop
    ctx->pc = 0x2945fcu;
    // NOP
label_294600:
    // 0x294600: 0x12b6d  .word       0x00012B6D                   # daddu       $a1, $zero, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_294604:
    // 0x294604: 0x40  sll         $zero, $zero, 1
    ctx->pc = 0x294604u;
    
label_294608:
    // 0x294608: 0x1faf0  tge         $zero, $at, 1003
    ctx->pc = 0x294608u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_29460c:
    // 0x29460c: 0x0  nop
    ctx->pc = 0x29460cu;
    // NOP
label_294610:
    // 0x294610: 0x12bad  .word       0x00012BAD                   # daddu       $a1, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_294614:
    // 0x294614: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x294614u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_294618:
    // 0x294618: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x294618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_29461c:
    // 0x29461c: 0x0  nop
    ctx->pc = 0x29461cu;
    // NOP
label_294620:
    // 0x294620: 0x12bb1  tgeu        $zero, $at, 174
    ctx->pc = 0x294620u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_294624:
    // 0x294624: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294624u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294624 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294628:
    // 0x294628: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x294628u;
    
label_29462c:
    // 0x29462c: 0x0  nop
    ctx->pc = 0x29462cu;
    // NOP
label_294630:
    // 0x294630: 0x12bb2  tlt         $zero, $at, 174
    ctx->pc = 0x294630u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_294634:
    // 0x294634: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x294634u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_294638:
    // 0x294638: 0x1f40  sll         $v1, $zero, 29
    ctx->pc = 0x294638u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_29463c:
    // 0x29463c: 0x0  nop
    ctx->pc = 0x29463cu;
    // NOP
label_294640:
    // 0x294640: 0x12bb6  tne         $zero, $at, 174
    ctx->pc = 0x294640u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_294644:
    // 0x294644: 0x29  mtsa        $zero
    ctx->pc = 0x294644u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_294648:
    // 0x294648: 0x145b0  tge         $zero, $at, 278
    ctx->pc = 0x294648u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_29464c:
    // 0x29464c: 0x0  nop
    ctx->pc = 0x29464cu;
    // NOP
label_294650:
    // 0x294650: 0x12bdf  .word       0x00012BDF                   # ddivu       $a1, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294650u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x294650 raw=0x00012BDF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294654:
    // 0x294654: 0x39  .word       0x00000039                   # INVALID     $zero, $zero, 0x39 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294654u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x294654 raw=0x00000039"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294658:
    // 0x294658: 0x1c790  .word       0x0001C790                   # mfhi        $t8 # 00010780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294658u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_29465c:
    // 0x29465c: 0x0  nop
    ctx->pc = 0x29465cu;
    // NOP
label_294660:
    // 0x294660: 0x12c18  .word       0x00012C18                   # mult        $a1, $zero, $at # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x294660u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_294664:
    // 0x294664: 0x3a  dsrl        $zero, $zero, 0
    ctx->pc = 0x294664u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 0);
label_294668:
    // 0x294668: 0x1cdf0  tge         $zero, $at, 823
    ctx->pc = 0x294668u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_29466c:
    // 0x29466c: 0x0  nop
    ctx->pc = 0x29466cu;
    // NOP
label_294670:
    // 0x294670: 0x12c52  .word       0x00012C52                   # mflo        $a1 # 00010440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294670u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_294674:
    // 0x294674: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x294674u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_294678:
    // 0x294678: 0x16d0  .word       0x000016D0                   # mfhi        $v0 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294678u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_29467c:
    // 0x29467c: 0x0  nop
    ctx->pc = 0x29467cu;
    // NOP
label_294680:
    // 0x294680: 0x12c55  .word       0x00012C55                   # INVALID     $zero, $at, 0x2C55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294680u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x294680 raw=0x00012C55"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294684:
    // 0x294684: 0x187  .word       0x00000187                   # srav        $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294684u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_294688:
    // 0x294688: 0xc3120  .word       0x000C3120                   # add         $a2, $zero, $t4 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294688u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_29468c:
    // 0x29468c: 0x0  nop
    ctx->pc = 0x29468cu;
    // NOP
label_294690:
    // 0x294690: 0x12ddc  .word       0x00012DDC                   # dmult       $zero, $at # 00002DC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294690u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x294690 raw=0x00012DDC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294694:
    // 0x294694: 0xfe  dsrl32      $zero, $zero, 3
    ctx->pc = 0x294694u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 3));
label_294698:
    // 0x294698: 0x7e950  .word       0x0007E950                   # mfhi        $sp # 00070140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294698u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_29469c:
    // 0x29469c: 0x0  nop
    ctx->pc = 0x29469cu;
    // NOP
label_2946a0:
    // 0x2946a0: 0x12eda  .word       0x00012EDA                   # div         $a1, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2946a0u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2946a4:
    // 0x2946a4: 0x1c7  .word       0x000001C7                   # srav        $zero, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2946a4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2946a8:
    // 0x2946a8: 0xe34cc  .word       0x000E34CC                   # syscall     211 # 000E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2946a8u;
    ctx->pc = 0x2946ACu;
runtime->handleSyscall(rdram, ctx, 0x38D3u);
label_2946ac:
    // 0x2946ac: 0x0  nop
    ctx->pc = 0x2946acu;
    // NOP
label_2946b0:
    // 0x2946b0: 0x130a1  .word       0x000130A1                   # addu        $a2, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2946b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_2946b4:
    // 0x2946b4: 0x1b9  .word       0x000001B9                   # INVALID     $zero, $zero, 0x1B9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2946b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2946B4 raw=0x000001B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2946b8:
    // 0x2946b8: 0xdc21c  .word       0x000DC21C                   # dmult       $zero, $t5 # 0000C200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2946b8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2946B8 raw=0x000DC21C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2946bc:
    // 0x2946bc: 0x0  nop
    ctx->pc = 0x2946bcu;
    // NOP
label_2946c0:
    // 0x2946c0: 0x1325a  .word       0x0001325A                   # div         $a2, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2946c0u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2946c4:
    // 0x2946c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2946c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2946C4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2946c8:
    // 0x2946c8: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2946c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2946cc:
    // 0x2946cc: 0x0  nop
    ctx->pc = 0x2946ccu;
    // NOP
label_2946d0:
    // 0x2946d0: 0x1325b  .word       0x0001325B                   # divu        $a2, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2946d0u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2946d4:
    // 0x2946d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2946d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2946D4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2946d8:
    // 0x2946d8: 0x4c  syscall     1
    ctx->pc = 0x2946d8u;
    ctx->pc = 0x2946DCu;
runtime->handleSyscall(rdram, ctx, 0x1u);
label_2946dc:
    // 0x2946dc: 0x0  nop
    ctx->pc = 0x2946dcu;
    // NOP
label_2946e0:
    // 0x2946e0: 0x1325c  .word       0x0001325C                   # dmult       $zero, $at # 00003240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2946e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2946E0 raw=0x0001325C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2946e4:
    // 0x2946e4: 0x1ba  dsrl        $zero, $zero, 6
    ctx->pc = 0x2946e4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 6);
label_2946e8:
    // 0x2946e8: 0xdcddc  .word       0x000DCDDC                   # dmult       $zero, $t5 # 0000CDC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2946e8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2946E8 raw=0x000DCDDC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2946ec:
    // 0x2946ec: 0x0  nop
    ctx->pc = 0x2946ecu;
    // NOP
label_2946f0:
    // 0x2946f0: 0x13416  .word       0x00013416                   # dsrlv       $a2, $at, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2946f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_2946f4:
    // 0x2946f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2946f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2946F4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2946f8:
    // 0x2946f8: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x2946f8u;
    
label_2946fc:
    // 0x2946fc: 0x0  nop
    ctx->pc = 0x2946fcu;
    // NOP
label_294700:
    // 0x294700: 0x13417  .word       0x00013417                   # dsrav       $a2, $at, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294700u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_294704:
    // 0x294704: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x294704u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
    ctx->pc = 0x294708u;
    return;
}
