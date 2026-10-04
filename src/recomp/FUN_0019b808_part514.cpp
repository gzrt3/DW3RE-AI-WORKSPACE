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

// Function: FUN_0019b808
// Address: 0x19b808 - 0x29b810
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b808_part514(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x295fd8u: goto label_295fd8;
        case 0x295fdcu: goto label_295fdc;
        case 0x295fe0u: goto label_295fe0;
        case 0x295fe4u: goto label_295fe4;
        case 0x295fe8u: goto label_295fe8;
        case 0x295fecu: goto label_295fec;
        case 0x295ff0u: goto label_295ff0;
        case 0x295ff4u: goto label_295ff4;
        case 0x295ff8u: goto label_295ff8;
        case 0x295ffcu: goto label_295ffc;
        case 0x296000u: goto label_296000;
        case 0x296004u: goto label_296004;
        case 0x296008u: goto label_296008;
        case 0x29600cu: goto label_29600c;
        case 0x296010u: goto label_296010;
        case 0x296014u: goto label_296014;
        case 0x296018u: goto label_296018;
        case 0x29601cu: goto label_29601c;
        case 0x296020u: goto label_296020;
        case 0x296024u: goto label_296024;
        case 0x296028u: goto label_296028;
        case 0x29602cu: goto label_29602c;
        case 0x296030u: goto label_296030;
        case 0x296034u: goto label_296034;
        case 0x296038u: goto label_296038;
        case 0x29603cu: goto label_29603c;
        case 0x296040u: goto label_296040;
        case 0x296044u: goto label_296044;
        case 0x296048u: goto label_296048;
        case 0x29604cu: goto label_29604c;
        case 0x296050u: goto label_296050;
        case 0x296054u: goto label_296054;
        case 0x296058u: goto label_296058;
        case 0x29605cu: goto label_29605c;
        case 0x296060u: goto label_296060;
        case 0x296064u: goto label_296064;
        case 0x296068u: goto label_296068;
        case 0x29606cu: goto label_29606c;
        case 0x296070u: goto label_296070;
        case 0x296074u: goto label_296074;
        case 0x296078u: goto label_296078;
        case 0x29607cu: goto label_29607c;
        case 0x296080u: goto label_296080;
        case 0x296084u: goto label_296084;
        case 0x296088u: goto label_296088;
        case 0x29608cu: goto label_29608c;
        case 0x296090u: goto label_296090;
        case 0x296094u: goto label_296094;
        case 0x296098u: goto label_296098;
        case 0x29609cu: goto label_29609c;
        case 0x2960a0u: goto label_2960a0;
        case 0x2960a4u: goto label_2960a4;
        case 0x2960a8u: goto label_2960a8;
        case 0x2960acu: goto label_2960ac;
        case 0x2960b0u: goto label_2960b0;
        case 0x2960b4u: goto label_2960b4;
        case 0x2960b8u: goto label_2960b8;
        case 0x2960bcu: goto label_2960bc;
        case 0x2960c0u: goto label_2960c0;
        case 0x2960c4u: goto label_2960c4;
        case 0x2960c8u: goto label_2960c8;
        case 0x2960ccu: goto label_2960cc;
        case 0x2960d0u: goto label_2960d0;
        case 0x2960d4u: goto label_2960d4;
        case 0x2960d8u: goto label_2960d8;
        case 0x2960dcu: goto label_2960dc;
        case 0x2960e0u: goto label_2960e0;
        case 0x2960e4u: goto label_2960e4;
        case 0x2960e8u: goto label_2960e8;
        case 0x2960ecu: goto label_2960ec;
        case 0x2960f0u: goto label_2960f0;
        case 0x2960f4u: goto label_2960f4;
        case 0x2960f8u: goto label_2960f8;
        case 0x2960fcu: goto label_2960fc;
        case 0x296100u: goto label_296100;
        case 0x296104u: goto label_296104;
        case 0x296108u: goto label_296108;
        case 0x29610cu: goto label_29610c;
        case 0x296110u: goto label_296110;
        case 0x296114u: goto label_296114;
        case 0x296118u: goto label_296118;
        case 0x29611cu: goto label_29611c;
        case 0x296120u: goto label_296120;
        case 0x296124u: goto label_296124;
        case 0x296128u: goto label_296128;
        case 0x29612cu: goto label_29612c;
        case 0x296130u: goto label_296130;
        case 0x296134u: goto label_296134;
        case 0x296138u: goto label_296138;
        case 0x29613cu: goto label_29613c;
        case 0x296140u: goto label_296140;
        case 0x296144u: goto label_296144;
        case 0x296148u: goto label_296148;
        case 0x29614cu: goto label_29614c;
        case 0x296150u: goto label_296150;
        case 0x296154u: goto label_296154;
        case 0x296158u: goto label_296158;
        case 0x29615cu: goto label_29615c;
        case 0x296160u: goto label_296160;
        case 0x296164u: goto label_296164;
        case 0x296168u: goto label_296168;
        case 0x29616cu: goto label_29616c;
        case 0x296170u: goto label_296170;
        case 0x296174u: goto label_296174;
        case 0x296178u: goto label_296178;
        case 0x29617cu: goto label_29617c;
        case 0x296180u: goto label_296180;
        case 0x296184u: goto label_296184;
        case 0x296188u: goto label_296188;
        case 0x29618cu: goto label_29618c;
        case 0x296190u: goto label_296190;
        case 0x296194u: goto label_296194;
        case 0x296198u: goto label_296198;
        case 0x29619cu: goto label_29619c;
        case 0x2961a0u: goto label_2961a0;
        case 0x2961a4u: goto label_2961a4;
        case 0x2961a8u: goto label_2961a8;
        case 0x2961acu: goto label_2961ac;
        case 0x2961b0u: goto label_2961b0;
        case 0x2961b4u: goto label_2961b4;
        case 0x2961b8u: goto label_2961b8;
        case 0x2961bcu: goto label_2961bc;
        case 0x2961c0u: goto label_2961c0;
        case 0x2961c4u: goto label_2961c4;
        case 0x2961c8u: goto label_2961c8;
        case 0x2961ccu: goto label_2961cc;
        case 0x2961d0u: goto label_2961d0;
        case 0x2961d4u: goto label_2961d4;
        case 0x2961d8u: goto label_2961d8;
        case 0x2961dcu: goto label_2961dc;
        case 0x2961e0u: goto label_2961e0;
        case 0x2961e4u: goto label_2961e4;
        case 0x2961e8u: goto label_2961e8;
        case 0x2961ecu: goto label_2961ec;
        case 0x2961f0u: goto label_2961f0;
        case 0x2961f4u: goto label_2961f4;
        case 0x2961f8u: goto label_2961f8;
        case 0x2961fcu: goto label_2961fc;
        case 0x296200u: goto label_296200;
        case 0x296204u: goto label_296204;
        case 0x296208u: goto label_296208;
        case 0x29620cu: goto label_29620c;
        case 0x296210u: goto label_296210;
        case 0x296214u: goto label_296214;
        case 0x296218u: goto label_296218;
        case 0x29621cu: goto label_29621c;
        case 0x296220u: goto label_296220;
        case 0x296224u: goto label_296224;
        case 0x296228u: goto label_296228;
        case 0x29622cu: goto label_29622c;
        case 0x296230u: goto label_296230;
        case 0x296234u: goto label_296234;
        case 0x296238u: goto label_296238;
        case 0x29623cu: goto label_29623c;
        case 0x296240u: goto label_296240;
        case 0x296244u: goto label_296244;
        case 0x296248u: goto label_296248;
        case 0x29624cu: goto label_29624c;
        case 0x296250u: goto label_296250;
        case 0x296254u: goto label_296254;
        case 0x296258u: goto label_296258;
        case 0x29625cu: goto label_29625c;
        case 0x296260u: goto label_296260;
        case 0x296264u: goto label_296264;
        case 0x296268u: goto label_296268;
        case 0x29626cu: goto label_29626c;
        case 0x296270u: goto label_296270;
        case 0x296274u: goto label_296274;
        case 0x296278u: goto label_296278;
        case 0x29627cu: goto label_29627c;
        case 0x296280u: goto label_296280;
        case 0x296284u: goto label_296284;
        case 0x296288u: goto label_296288;
        case 0x29628cu: goto label_29628c;
        case 0x296290u: goto label_296290;
        case 0x296294u: goto label_296294;
        case 0x296298u: goto label_296298;
        case 0x29629cu: goto label_29629c;
        case 0x2962a0u: goto label_2962a0;
        case 0x2962a4u: goto label_2962a4;
        case 0x2962a8u: goto label_2962a8;
        case 0x2962acu: goto label_2962ac;
        case 0x2962b0u: goto label_2962b0;
        case 0x2962b4u: goto label_2962b4;
        case 0x2962b8u: goto label_2962b8;
        case 0x2962bcu: goto label_2962bc;
        case 0x2962c0u: goto label_2962c0;
        case 0x2962c4u: goto label_2962c4;
        case 0x2962c8u: goto label_2962c8;
        case 0x2962ccu: goto label_2962cc;
        case 0x2962d0u: goto label_2962d0;
        case 0x2962d4u: goto label_2962d4;
        case 0x2962d8u: goto label_2962d8;
        case 0x2962dcu: goto label_2962dc;
        case 0x2962e0u: goto label_2962e0;
        case 0x2962e4u: goto label_2962e4;
        case 0x2962e8u: goto label_2962e8;
        case 0x2962ecu: goto label_2962ec;
        case 0x2962f0u: goto label_2962f0;
        case 0x2962f4u: goto label_2962f4;
        case 0x2962f8u: goto label_2962f8;
        case 0x2962fcu: goto label_2962fc;
        case 0x296300u: goto label_296300;
        case 0x296304u: goto label_296304;
        case 0x296308u: goto label_296308;
        case 0x29630cu: goto label_29630c;
        case 0x296310u: goto label_296310;
        case 0x296314u: goto label_296314;
        case 0x296318u: goto label_296318;
        case 0x29631cu: goto label_29631c;
        case 0x296320u: goto label_296320;
        case 0x296324u: goto label_296324;
        case 0x296328u: goto label_296328;
        case 0x29632cu: goto label_29632c;
        case 0x296330u: goto label_296330;
        case 0x296334u: goto label_296334;
        case 0x296338u: goto label_296338;
        case 0x29633cu: goto label_29633c;
        case 0x296340u: goto label_296340;
        case 0x296344u: goto label_296344;
        case 0x296348u: goto label_296348;
        case 0x29634cu: goto label_29634c;
        case 0x296350u: goto label_296350;
        case 0x296354u: goto label_296354;
        case 0x296358u: goto label_296358;
        case 0x29635cu: goto label_29635c;
        case 0x296360u: goto label_296360;
        case 0x296364u: goto label_296364;
        case 0x296368u: goto label_296368;
        case 0x29636cu: goto label_29636c;
        case 0x296370u: goto label_296370;
        case 0x296374u: goto label_296374;
        case 0x296378u: goto label_296378;
        case 0x29637cu: goto label_29637c;
        case 0x296380u: goto label_296380;
        case 0x296384u: goto label_296384;
        case 0x296388u: goto label_296388;
        case 0x29638cu: goto label_29638c;
        case 0x296390u: goto label_296390;
        case 0x296394u: goto label_296394;
        case 0x296398u: goto label_296398;
        case 0x29639cu: goto label_29639c;
        case 0x2963a0u: goto label_2963a0;
        case 0x2963a4u: goto label_2963a4;
        case 0x2963a8u: goto label_2963a8;
        case 0x2963acu: goto label_2963ac;
        case 0x2963b0u: goto label_2963b0;
        case 0x2963b4u: goto label_2963b4;
        case 0x2963b8u: goto label_2963b8;
        case 0x2963bcu: goto label_2963bc;
        case 0x2963c0u: goto label_2963c0;
        case 0x2963c4u: goto label_2963c4;
        case 0x2963c8u: goto label_2963c8;
        case 0x2963ccu: goto label_2963cc;
        case 0x2963d0u: goto label_2963d0;
        case 0x2963d4u: goto label_2963d4;
        case 0x2963d8u: goto label_2963d8;
        case 0x2963dcu: goto label_2963dc;
        case 0x2963e0u: goto label_2963e0;
        case 0x2963e4u: goto label_2963e4;
        case 0x2963e8u: goto label_2963e8;
        case 0x2963ecu: goto label_2963ec;
        case 0x2963f0u: goto label_2963f0;
        case 0x2963f4u: goto label_2963f4;
        case 0x2963f8u: goto label_2963f8;
        case 0x2963fcu: goto label_2963fc;
        case 0x296400u: goto label_296400;
        case 0x296404u: goto label_296404;
        case 0x296408u: goto label_296408;
        case 0x29640cu: goto label_29640c;
        case 0x296410u: goto label_296410;
        case 0x296414u: goto label_296414;
        case 0x296418u: goto label_296418;
        case 0x29641cu: goto label_29641c;
        case 0x296420u: goto label_296420;
        case 0x296424u: goto label_296424;
        case 0x296428u: goto label_296428;
        case 0x29642cu: goto label_29642c;
        case 0x296430u: goto label_296430;
        case 0x296434u: goto label_296434;
        case 0x296438u: goto label_296438;
        case 0x29643cu: goto label_29643c;
        case 0x296440u: goto label_296440;
        case 0x296444u: goto label_296444;
        case 0x296448u: goto label_296448;
        case 0x29644cu: goto label_29644c;
        case 0x296450u: goto label_296450;
        case 0x296454u: goto label_296454;
        case 0x296458u: goto label_296458;
        case 0x29645cu: goto label_29645c;
        case 0x296460u: goto label_296460;
        case 0x296464u: goto label_296464;
        case 0x296468u: goto label_296468;
        case 0x29646cu: goto label_29646c;
        case 0x296470u: goto label_296470;
        case 0x296474u: goto label_296474;
        case 0x296478u: goto label_296478;
        case 0x29647cu: goto label_29647c;
        case 0x296480u: goto label_296480;
        case 0x296484u: goto label_296484;
        case 0x296488u: goto label_296488;
        case 0x29648cu: goto label_29648c;
        case 0x296490u: goto label_296490;
        case 0x296494u: goto label_296494;
        case 0x296498u: goto label_296498;
        case 0x29649cu: goto label_29649c;
        case 0x2964a0u: goto label_2964a0;
        case 0x2964a4u: goto label_2964a4;
        case 0x2964a8u: goto label_2964a8;
        case 0x2964acu: goto label_2964ac;
        case 0x2964b0u: goto label_2964b0;
        case 0x2964b4u: goto label_2964b4;
        case 0x2964b8u: goto label_2964b8;
        case 0x2964bcu: goto label_2964bc;
        case 0x2964c0u: goto label_2964c0;
        case 0x2964c4u: goto label_2964c4;
        case 0x2964c8u: goto label_2964c8;
        case 0x2964ccu: goto label_2964cc;
        case 0x2964d0u: goto label_2964d0;
        case 0x2964d4u: goto label_2964d4;
        case 0x2964d8u: goto label_2964d8;
        case 0x2964dcu: goto label_2964dc;
        case 0x2964e0u: goto label_2964e0;
        case 0x2964e4u: goto label_2964e4;
        case 0x2964e8u: goto label_2964e8;
        case 0x2964ecu: goto label_2964ec;
        case 0x2964f0u: goto label_2964f0;
        case 0x2964f4u: goto label_2964f4;
        case 0x2964f8u: goto label_2964f8;
        case 0x2964fcu: goto label_2964fc;
        case 0x296500u: goto label_296500;
        case 0x296504u: goto label_296504;
        case 0x296508u: goto label_296508;
        case 0x29650cu: goto label_29650c;
        case 0x296510u: goto label_296510;
        case 0x296514u: goto label_296514;
        case 0x296518u: goto label_296518;
        case 0x29651cu: goto label_29651c;
        case 0x296520u: goto label_296520;
        case 0x296524u: goto label_296524;
        case 0x296528u: goto label_296528;
        case 0x29652cu: goto label_29652c;
        case 0x296530u: goto label_296530;
        case 0x296534u: goto label_296534;
        case 0x296538u: goto label_296538;
        case 0x29653cu: goto label_29653c;
        case 0x296540u: goto label_296540;
        case 0x296544u: goto label_296544;
        case 0x296548u: goto label_296548;
        case 0x29654cu: goto label_29654c;
        case 0x296550u: goto label_296550;
        case 0x296554u: goto label_296554;
        case 0x296558u: goto label_296558;
        case 0x29655cu: goto label_29655c;
        case 0x296560u: goto label_296560;
        case 0x296564u: goto label_296564;
        case 0x296568u: goto label_296568;
        case 0x29656cu: goto label_29656c;
        case 0x296570u: goto label_296570;
        case 0x296574u: goto label_296574;
        case 0x296578u: goto label_296578;
        case 0x29657cu: goto label_29657c;
        case 0x296580u: goto label_296580;
        case 0x296584u: goto label_296584;
        case 0x296588u: goto label_296588;
        case 0x29658cu: goto label_29658c;
        case 0x296590u: goto label_296590;
        case 0x296594u: goto label_296594;
        case 0x296598u: goto label_296598;
        case 0x29659cu: goto label_29659c;
        case 0x2965a0u: goto label_2965a0;
        case 0x2965a4u: goto label_2965a4;
        case 0x2965a8u: goto label_2965a8;
        case 0x2965acu: goto label_2965ac;
        case 0x2965b0u: goto label_2965b0;
        case 0x2965b4u: goto label_2965b4;
        case 0x2965b8u: goto label_2965b8;
        case 0x2965bcu: goto label_2965bc;
        case 0x2965c0u: goto label_2965c0;
        case 0x2965c4u: goto label_2965c4;
        case 0x2965c8u: goto label_2965c8;
        case 0x2965ccu: goto label_2965cc;
        case 0x2965d0u: goto label_2965d0;
        case 0x2965d4u: goto label_2965d4;
        case 0x2965d8u: goto label_2965d8;
        case 0x2965dcu: goto label_2965dc;
        case 0x2965e0u: goto label_2965e0;
        case 0x2965e4u: goto label_2965e4;
        case 0x2965e8u: goto label_2965e8;
        case 0x2965ecu: goto label_2965ec;
        case 0x2965f0u: goto label_2965f0;
        case 0x2965f4u: goto label_2965f4;
        case 0x2965f8u: goto label_2965f8;
        case 0x2965fcu: goto label_2965fc;
        case 0x296600u: goto label_296600;
        case 0x296604u: goto label_296604;
        case 0x296608u: goto label_296608;
        case 0x29660cu: goto label_29660c;
        case 0x296610u: goto label_296610;
        case 0x296614u: goto label_296614;
        case 0x296618u: goto label_296618;
        case 0x29661cu: goto label_29661c;
        case 0x296620u: goto label_296620;
        case 0x296624u: goto label_296624;
        case 0x296628u: goto label_296628;
        case 0x29662cu: goto label_29662c;
        case 0x296630u: goto label_296630;
        case 0x296634u: goto label_296634;
        case 0x296638u: goto label_296638;
        case 0x29663cu: goto label_29663c;
        case 0x296640u: goto label_296640;
        case 0x296644u: goto label_296644;
        case 0x296648u: goto label_296648;
        case 0x29664cu: goto label_29664c;
        case 0x296650u: goto label_296650;
        case 0x296654u: goto label_296654;
        case 0x296658u: goto label_296658;
        case 0x29665cu: goto label_29665c;
        case 0x296660u: goto label_296660;
        case 0x296664u: goto label_296664;
        case 0x296668u: goto label_296668;
        case 0x29666cu: goto label_29666c;
        case 0x296670u: goto label_296670;
        case 0x296674u: goto label_296674;
        case 0x296678u: goto label_296678;
        case 0x29667cu: goto label_29667c;
        case 0x296680u: goto label_296680;
        case 0x296684u: goto label_296684;
        case 0x296688u: goto label_296688;
        case 0x29668cu: goto label_29668c;
        case 0x296690u: goto label_296690;
        case 0x296694u: goto label_296694;
        case 0x296698u: goto label_296698;
        case 0x29669cu: goto label_29669c;
        case 0x2966a0u: goto label_2966a0;
        case 0x2966a4u: goto label_2966a4;
        case 0x2966a8u: goto label_2966a8;
        case 0x2966acu: goto label_2966ac;
        case 0x2966b0u: goto label_2966b0;
        case 0x2966b4u: goto label_2966b4;
        case 0x2966b8u: goto label_2966b8;
        case 0x2966bcu: goto label_2966bc;
        case 0x2966c0u: goto label_2966c0;
        case 0x2966c4u: goto label_2966c4;
        case 0x2966c8u: goto label_2966c8;
        case 0x2966ccu: goto label_2966cc;
        case 0x2966d0u: goto label_2966d0;
        case 0x2966d4u: goto label_2966d4;
        case 0x2966d8u: goto label_2966d8;
        case 0x2966dcu: goto label_2966dc;
        case 0x2966e0u: goto label_2966e0;
        case 0x2966e4u: goto label_2966e4;
        case 0x2966e8u: goto label_2966e8;
        case 0x2966ecu: goto label_2966ec;
        case 0x2966f0u: goto label_2966f0;
        case 0x2966f4u: goto label_2966f4;
        case 0x2966f8u: goto label_2966f8;
        case 0x2966fcu: goto label_2966fc;
        case 0x296700u: goto label_296700;
        case 0x296704u: goto label_296704;
        case 0x296708u: goto label_296708;
        case 0x29670cu: goto label_29670c;
        case 0x296710u: goto label_296710;
        case 0x296714u: goto label_296714;
        case 0x296718u: goto label_296718;
        case 0x29671cu: goto label_29671c;
        case 0x296720u: goto label_296720;
        case 0x296724u: goto label_296724;
        case 0x296728u: goto label_296728;
        case 0x29672cu: goto label_29672c;
        case 0x296730u: goto label_296730;
        case 0x296734u: goto label_296734;
        case 0x296738u: goto label_296738;
        case 0x29673cu: goto label_29673c;
        case 0x296740u: goto label_296740;
        case 0x296744u: goto label_296744;
        case 0x296748u: goto label_296748;
        case 0x29674cu: goto label_29674c;
        case 0x296750u: goto label_296750;
        case 0x296754u: goto label_296754;
        case 0x296758u: goto label_296758;
        case 0x29675cu: goto label_29675c;
        case 0x296760u: goto label_296760;
        case 0x296764u: goto label_296764;
        case 0x296768u: goto label_296768;
        case 0x29676cu: goto label_29676c;
        case 0x296770u: goto label_296770;
        case 0x296774u: goto label_296774;
        case 0x296778u: goto label_296778;
        case 0x29677cu: goto label_29677c;
        case 0x296780u: goto label_296780;
        case 0x296784u: goto label_296784;
        case 0x296788u: goto label_296788;
        case 0x29678cu: goto label_29678c;
        case 0x296790u: goto label_296790;
        case 0x296794u: goto label_296794;
        case 0x296798u: goto label_296798;
        case 0x29679cu: goto label_29679c;
        case 0x2967a0u: goto label_2967a0;
        case 0x2967a4u: goto label_2967a4;
        default: return;
    }

label_295fd8:
    // 0x295fd8: 0x31370  tge         $zero, $v1, 77
    ctx->pc = 0x295fd8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_295fdc:
    // 0x295fdc: 0x0  nop
    ctx->pc = 0x295fdcu;
    // NOP
label_295fe0:
    // 0x295fe0: 0x1a296  .word       0x0001A296                   # dsrlv       $s4, $at, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295fe0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_295fe4:
    // 0x295fe4: 0x79  .word       0x00000079                   # INVALID     $zero, $zero, 0x79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295fe4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x295FE4 raw=0x00000079"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295fe8:
    // 0x295fe8: 0x3c6e0  .word       0x0003C6E0                   # add         $t8, $zero, $v1 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295fe8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_295fec:
    // 0x295fec: 0x0  nop
    ctx->pc = 0x295fecu;
    // NOP
label_295ff0:
    // 0x295ff0: 0x1a30f  .word       0x0001A30F                   # sync # 0001A000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295ff0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_295ff4:
    // 0x295ff4: 0xd0  .word       0x000000D0                   # mfhi        $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295ff4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_295ff8:
    // 0x295ff8: 0x67ff0  tge         $zero, $a2, 511
    ctx->pc = 0x295ff8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 6)) { runtime->handleTrap(rdram, ctx); }
label_295ffc:
    // 0x295ffc: 0x0  nop
    ctx->pc = 0x295ffcu;
    // NOP
label_296000:
    // 0x296000: 0x1a3df  .word       0x0001A3DF                   # ddivu       $s4, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296000u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x296000 raw=0x0001A3DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_296004:
    // 0x296004: 0xd1  .word       0x000000D1                   # mthi        $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296004u;
    ctx->hi = GPR_U64(ctx, 0);
label_296008:
    // 0x296008: 0x68250  .word       0x00068250                   # mfhi        $s0 # 00060240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296008u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_29600c:
    // 0x29600c: 0x0  nop
    ctx->pc = 0x29600cu;
    // NOP
label_296010:
    // 0x296010: 0x1a4b0  tge         $zero, $at, 658
    ctx->pc = 0x296010u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_296014:
    // 0x296014: 0x54  .word       0x00000054                   # dsllv       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296014u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_296018:
    // 0x296018: 0x29ae0  .word       0x00029AE0                   # add         $s3, $zero, $v0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296018u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_29601c:
    // 0x29601c: 0x0  nop
    ctx->pc = 0x29601cu;
    // NOP
label_296020:
    // 0x296020: 0x1a504  .word       0x0001A504                   # sllv        $s4, $at, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296020u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_296024:
    // 0x296024: 0x68  .word       0x00000068                   # mfsa        $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x296024u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_296028:
    // 0x296028: 0x33f80  sll         $a3, $v1, 30
    ctx->pc = 0x296028u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 30));
label_29602c:
    // 0x29602c: 0x0  nop
    ctx->pc = 0x29602cu;
    // NOP
label_296030:
    // 0x296030: 0x1a56c  .word       0x0001A56C                   # dadd        $s4, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296030u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, r); }
label_296034:
    // 0x296034: 0x8c  syscall     2
    ctx->pc = 0x296034u;
    ctx->pc = 0x296038u;
runtime->handleSyscall(rdram, ctx, 0x2u);
label_296038:
    // 0x296038: 0x45b40  sll         $t3, $a0, 13
    ctx->pc = 0x296038u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 4), 13));
label_29603c:
    // 0x29603c: 0x0  nop
    ctx->pc = 0x29603cu;
    // NOP
label_296040:
    // 0x296040: 0x1a5f8  dsll        $s4, $at, 23
    ctx->pc = 0x296040u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 1) << 23);
label_296044:
    // 0x296044: 0xd3  .word       0x000000D3                   # mtlo        $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296044u;
    ctx->lo = GPR_U64(ctx, 0);
label_296048:
    // 0x296048: 0x69630  tge         $zero, $a2, 600
    ctx->pc = 0x296048u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 6)) { runtime->handleTrap(rdram, ctx); }
label_29604c:
    // 0x29604c: 0x0  nop
    ctx->pc = 0x29604cu;
    // NOP
label_296050:
    // 0x296050: 0x1a6cb  .word       0x0001A6CB                   # movn        $s4, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296050u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
label_296054:
    // 0x296054: 0xce  .word       0x000000CE                   # INVALID     $zero, $zero, 0xCE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296054u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x296054 raw=0x000000CE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_296058:
    // 0x296058: 0x66a80  sll         $t5, $a2, 10
    ctx->pc = 0x296058u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 6), 10));
label_29605c:
    // 0x29605c: 0x0  nop
    ctx->pc = 0x29605cu;
    // NOP
label_296060:
    // 0x296060: 0x1a799  .word       0x0001A799                   # multu       $zero, $at # 0000A780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296060u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
label_296064:
    // 0x296064: 0xc3  sra         $zero, $zero, 3
    ctx->pc = 0x296064u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 3));
label_296068:
    // 0x296068: 0x61210  .word       0x00061210                   # mfhi        $v0 # 00060200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296068u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_29606c:
    // 0x29606c: 0x0  nop
    ctx->pc = 0x29606cu;
    // NOP
label_296070:
    // 0x296070: 0x1a85c  .word       0x0001A85C                   # dmult       $zero, $at # 0000A840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296070u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x296070 raw=0x0001A85C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_296074:
    // 0x296074: 0xd1  .word       0x000000D1                   # mthi        $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296074u;
    ctx->hi = GPR_U64(ctx, 0);
label_296078:
    // 0x296078: 0x68750  .word       0x00068750                   # mfhi        $s0 # 00060740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296078u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_29607c:
    // 0x29607c: 0x0  nop
    ctx->pc = 0x29607cu;
    // NOP
label_296080:
    // 0x296080: 0x1a92d  .word       0x0001A92D                   # daddu       $s5, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296080u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_296084:
    // 0x296084: 0xc4  .word       0x000000C4                   # sllv        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296084u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296088:
    // 0x296088: 0x61c90  .word       0x00061C90                   # mfhi        $v1 # 00060480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296088u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_29608c:
    // 0x29608c: 0x0  nop
    ctx->pc = 0x29608cu;
    // NOP
label_296090:
    // 0x296090: 0x1a9f1  tgeu        $zero, $at, 679
    ctx->pc = 0x296090u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_296094:
    // 0x296094: 0xcd  break       0, 3
    ctx->pc = 0x296094u;
    runtime->handleBreak(rdram, ctx);
label_296098:
    // 0x296098: 0x66280  sll         $t4, $a2, 10
    ctx->pc = 0x296098u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 6), 10));
label_29609c:
    // 0x29609c: 0x0  nop
    ctx->pc = 0x29609cu;
    // NOP
label_2960a0:
    // 0x2960a0: 0x1aabe  dsrl32      $s5, $at, 10
    ctx->pc = 0x2960a0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 1) >> (32 + 10));
label_2960a4:
    // 0x2960a4: 0xc2  srl         $zero, $zero, 3
    ctx->pc = 0x2960a4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 3));
label_2960a8:
    // 0x2960a8: 0x60a10  .word       0x00060A10                   # mfhi        $at # 00060200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2960a8u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_2960ac:
    // 0x2960ac: 0x0  nop
    ctx->pc = 0x2960acu;
    // NOP
label_2960b0:
    // 0x2960b0: 0x1ab80  sll         $s5, $at, 14
    ctx->pc = 0x2960b0u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 1), 14));
label_2960b4:
    // 0x2960b4: 0xd0  .word       0x000000D0                   # mfhi        $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2960b4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2960b8:
    // 0x2960b8: 0x67f50  .word       0x00067F50                   # mfhi        $t7 # 00060740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2960b8u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_2960bc:
    // 0x2960bc: 0x0  nop
    ctx->pc = 0x2960bcu;
    // NOP
label_2960c0:
    // 0x2960c0: 0x1ac50  .word       0x0001AC50                   # mfhi        $s5 # 00010440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2960c0u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_2960c4:
    // 0x2960c4: 0xc5  .word       0x000000C5                   # INVALID     $zero, $zero, 0xC5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2960c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2960C4 raw=0x000000C5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2960c8:
    // 0x2960c8: 0x626e0  .word       0x000626E0                   # add         $a0, $zero, $a2 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2960c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_2960cc:
    // 0x2960cc: 0x0  nop
    ctx->pc = 0x2960ccu;
    // NOP
label_2960d0:
    // 0x2960d0: 0x1ad15  .word       0x0001AD15                   # INVALID     $zero, $at, -0x52EB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2960d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2960D0 raw=0x0001AD15"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2960d4:
    // 0x2960d4: 0xd1  .word       0x000000D1                   # mthi        $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2960d4u;
    ctx->hi = GPR_U64(ctx, 0);
label_2960d8:
    // 0x2960d8: 0x685c0  sll         $s0, $a2, 23
    ctx->pc = 0x2960d8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 6), 23));
label_2960dc:
    // 0x2960dc: 0x0  nop
    ctx->pc = 0x2960dcu;
    // NOP
label_2960e0:
    // 0x2960e0: 0x1ade6  .word       0x0001ADE6                   # xor         $s5, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2960e0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_2960e4:
    // 0x2960e4: 0xcc  syscall     3
    ctx->pc = 0x2960e4u;
    ctx->pc = 0x2960E8u;
runtime->handleSyscall(rdram, ctx, 0x3u);
label_2960e8:
    // 0x2960e8: 0x65cf0  tge         $zero, $a2, 371
    ctx->pc = 0x2960e8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 6)) { runtime->handleTrap(rdram, ctx); }
label_2960ec:
    // 0x2960ec: 0x0  nop
    ctx->pc = 0x2960ecu;
    // NOP
label_2960f0:
    // 0x2960f0: 0x1aeb2  tlt         $zero, $at, 698
    ctx->pc = 0x2960f0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2960f4:
    // 0x2960f4: 0xd5  .word       0x000000D5                   # INVALID     $zero, $zero, 0xD5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2960f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2960F4 raw=0x000000D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2960f8:
    // 0x2960f8: 0x6a5c0  sll         $s4, $a2, 23
    ctx->pc = 0x2960f8u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 6), 23));
label_2960fc:
    // 0x2960fc: 0x0  nop
    ctx->pc = 0x2960fcu;
    // NOP
label_296100:
    // 0x296100: 0x1af87  .word       0x0001AF87                   # srav        $s5, $at, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296100u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_296104:
    // 0x296104: 0xd0  .word       0x000000D0                   # mfhi        $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296104u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_296108:
    // 0x296108: 0x67cf0  tge         $zero, $a2, 499
    ctx->pc = 0x296108u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 6)) { runtime->handleTrap(rdram, ctx); }
label_29610c:
    // 0x29610c: 0x0  nop
    ctx->pc = 0x29610cu;
    // NOP
label_296110:
    // 0x296110: 0x1b057  .word       0x0001B057                   # dsrav       $s6, $at, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296110u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_296114:
    // 0x296114: 0xd0  .word       0x000000D0                   # mfhi        $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296114u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_296118:
    // 0x296118: 0x67ff0  tge         $zero, $a2, 511
    ctx->pc = 0x296118u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 6)) { runtime->handleTrap(rdram, ctx); }
label_29611c:
    // 0x29611c: 0x0  nop
    ctx->pc = 0x29611cu;
    // NOP
label_296120:
    // 0x296120: 0x1b127  .word       0x0001B127                   # nor         $s6, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296120u;
    SET_GPR_U64(ctx, 22, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_296124:
    // 0x296124: 0xcb  .word       0x000000CB                   # movn        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296124u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_296128:
    // 0x296128: 0x65720  .word       0x00065720                   # add         $t2, $zero, $a2 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296128u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_29612c:
    // 0x29612c: 0x0  nop
    ctx->pc = 0x29612cu;
    // NOP
label_296130:
    // 0x296130: 0x1b1f2  tlt         $zero, $at, 711
    ctx->pc = 0x296130u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_296134:
    // 0x296134: 0xd4  .word       0x000000D4                   # dsllv       $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296134u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_296138:
    // 0x296138: 0x69ff0  tge         $zero, $a2, 639
    ctx->pc = 0x296138u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 6)) { runtime->handleTrap(rdram, ctx); }
label_29613c:
    // 0x29613c: 0x0  nop
    ctx->pc = 0x29613cu;
    // NOP
label_296140:
    // 0x296140: 0x1b2c6  .word       0x0001B2C6                   # srlv        $s6, $at, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296140u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_296144:
    // 0x296144: 0xcf  sync
    ctx->pc = 0x296144u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_296148:
    // 0x296148: 0x67720  .word       0x00067720                   # add         $t6, $zero, $a2 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296148u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_29614c:
    // 0x29614c: 0x0  nop
    ctx->pc = 0x29614cu;
    // NOP
label_296150:
    // 0x296150: 0x1b395  .word       0x0001B395                   # INVALID     $zero, $at, -0x4C6B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296150u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x296150 raw=0x0001B395"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_296154:
    // 0x296154: 0x10  mfhi        $zero
    ctx->pc = 0x296154u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_296158:
    // 0x296158: 0x78c0  sll         $t7, $zero, 3
    ctx->pc = 0x296158u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_29615c:
    // 0x29615c: 0x0  nop
    ctx->pc = 0x29615cu;
    // NOP
label_296160:
    // 0x296160: 0x1b3a5  .word       0x0001B3A5                   # or          $s6, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296160u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_296164:
    // 0x296164: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x296164u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_296168:
    // 0x296168: 0x1d8c0  sll         $k1, $at, 3
    ctx->pc = 0x296168u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 1), 3));
label_29616c:
    // 0x29616c: 0x0  nop
    ctx->pc = 0x29616cu;
    // NOP
label_296170:
    // 0x296170: 0x1b3e1  .word       0x0001B3E1                   # addu        $s6, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296170u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_296174:
    // 0x296174: 0x121  .word       0x00000121                   # addu        $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296174u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_296178:
    // 0x296178: 0x907e0  .word       0x000907E0                   # add         $zero, $zero, $t1 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296178u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29617c:
    // 0x29617c: 0x0  nop
    ctx->pc = 0x29617cu;
    // NOP
label_296180:
    // 0x296180: 0x1b502  srl         $s6, $at, 20
    ctx->pc = 0x296180u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 1), 20));
label_296184:
    // 0x296184: 0x12c  .word       0x0000012C                   # dadd        $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296184u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_296188:
    // 0x296188: 0x95f80  sll         $t3, $t1, 30
    ctx->pc = 0x296188u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 9), 30));
label_29618c:
    // 0x29618c: 0x0  nop
    ctx->pc = 0x29618cu;
    // NOP
label_296190:
    // 0x296190: 0x1b62e  .word       0x0001B62E                   # dsub        $s6, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296190u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, r); }
label_296194:
    // 0x296194: 0x12d  .word       0x0000012D                   # daddu       $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296194u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_296198:
    // 0x296198: 0x96580  sll         $t4, $t1, 22
    ctx->pc = 0x296198u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 9), 22));
label_29619c:
    // 0x29619c: 0x0  nop
    ctx->pc = 0x29619cu;
    // NOP
label_2961a0:
    // 0x2961a0: 0x1b75b  .word       0x0001B75B                   # divu        $s6, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2961a0u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2961a4:
    // 0x2961a4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2961a4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2961a8:
    // 0x2961a8: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x2961a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_2961ac:
    // 0x2961ac: 0x0  nop
    ctx->pc = 0x2961acu;
    // NOP
label_2961b0:
    // 0x2961b0: 0x1b75f  .word       0x0001B75F                   # ddivu       $s6, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2961b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2961B0 raw=0x0001B75F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2961b4:
    // 0x2961b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2961b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2961B4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2961b8:
    // 0x2961b8: 0x441  .word       0x00000441                   # INVALID     $zero, $zero, 0x441 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2961b8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2961B8 raw=0x00000441"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2961bc:
    // 0x2961bc: 0x0  nop
    ctx->pc = 0x2961bcu;
    // NOP
label_2961c0:
    // 0x2961c0: 0x1b760  .word       0x0001B760                   # add         $s6, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2961c0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_2961c4:
    // 0x2961c4: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x2961c4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_2961c8:
    // 0x2961c8: 0x10cc  syscall     67
    ctx->pc = 0x2961c8u;
    ctx->pc = 0x2961CCu;
runtime->handleSyscall(rdram, ctx, 0x43u);
label_2961cc:
    // 0x2961cc: 0x0  nop
    ctx->pc = 0x2961ccu;
    // NOP
label_2961d0:
    // 0x2961d0: 0x1b763  .word       0x0001B763                   # negu        $s6, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2961d0u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_2961d4:
    // 0x2961d4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2961d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2961d8:
    // 0x2961d8: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x2961d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_2961dc:
    // 0x2961dc: 0x0  nop
    ctx->pc = 0x2961dcu;
    // NOP
label_2961e0:
    // 0x2961e0: 0x1b767  .word       0x0001B767                   # nor         $s6, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2961e0u;
    SET_GPR_U64(ctx, 22, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_2961e4:
    // 0x2961e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2961e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2961E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2961e8:
    // 0x2961e8: 0x441  .word       0x00000441                   # INVALID     $zero, $zero, 0x441 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2961e8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2961E8 raw=0x00000441"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2961ec:
    // 0x2961ec: 0x0  nop
    ctx->pc = 0x2961ecu;
    // NOP
label_2961f0:
    // 0x2961f0: 0x1b768  .word       0x0001B768                   # mfsa        $s6 # 00010740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2961f0u;
    SET_GPR_U32(ctx, 22, ctx->sa);
label_2961f4:
    // 0x2961f4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2961f4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2961f8:
    // 0x2961f8: 0xee0  .word       0x00000EE0                   # add         $at, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2961f8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_2961fc:
    // 0x2961fc: 0x0  nop
    ctx->pc = 0x2961fcu;
    // NOP
label_296200:
    // 0x296200: 0x1b76a  .word       0x0001B76A                   # slt         $s6, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296200u;
    SET_GPR_U64(ctx, 22, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_296204:
    // 0x296204: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x296204u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296208:
    // 0x296208: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x296208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_29620c:
    // 0x29620c: 0x0  nop
    ctx->pc = 0x29620cu;
    // NOP
label_296210:
    // 0x296210: 0x1b76e  .word       0x0001B76E                   # dsub        $s6, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296210u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, r); }
label_296214:
    // 0x296214: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296214u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x296214 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_296218:
    // 0x296218: 0x441  .word       0x00000441                   # INVALID     $zero, $zero, 0x441 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296218u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x296218 raw=0x00000441"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29621c:
    // 0x29621c: 0x0  nop
    ctx->pc = 0x29621cu;
    // NOP
label_296220:
    // 0x296220: 0x1b76f  .word       0x0001B76F                   # dsubu       $s6, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296220u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_296224:
    // 0x296224: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x296224u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_296228:
    // 0x296228: 0xaf0  tge         $zero, $zero, 43
    ctx->pc = 0x296228u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29622c:
    // 0x29622c: 0x0  nop
    ctx->pc = 0x29622cu;
    // NOP
label_296230:
    // 0x296230: 0x1b771  tgeu        $zero, $at, 733
    ctx->pc = 0x296230u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_296234:
    // 0x296234: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x296234u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296238:
    // 0x296238: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x296238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_29623c:
    // 0x29623c: 0x0  nop
    ctx->pc = 0x29623cu;
    // NOP
label_296240:
    // 0x296240: 0x1b775  .word       0x0001B775                   # INVALID     $zero, $at, -0x488B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296240u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x296240 raw=0x0001B775"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_296244:
    // 0x296244: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296244u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x296244 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_296248:
    // 0x296248: 0x441  .word       0x00000441                   # INVALID     $zero, $zero, 0x441 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296248u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x296248 raw=0x00000441"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29624c:
    // 0x29624c: 0x0  nop
    ctx->pc = 0x29624cu;
    // NOP
label_296250:
    // 0x296250: 0x1b776  tne         $zero, $at, 733
    ctx->pc = 0x296250u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_296254:
    // 0x296254: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x296254u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_296258:
    // 0x296258: 0xc20  .word       0x00000C20                   # add         $at, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296258u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_29625c:
    // 0x29625c: 0x0  nop
    ctx->pc = 0x29625cu;
    // NOP
label_296260:
    // 0x296260: 0x1b778  dsll        $s6, $at, 29
    ctx->pc = 0x296260u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 1) << 29);
label_296264:
    // 0x296264: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x296264u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296268:
    // 0x296268: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x296268u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_29626c:
    // 0x29626c: 0x0  nop
    ctx->pc = 0x29626cu;
    // NOP
label_296270:
    // 0x296270: 0x1b77c  dsll32      $s6, $at, 29
    ctx->pc = 0x296270u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 1) << (32 + 29));
label_296274:
    // 0x296274: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296274u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x296274 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_296278:
    // 0x296278: 0x441  .word       0x00000441                   # INVALID     $zero, $zero, 0x441 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296278u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x296278 raw=0x00000441"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29627c:
    // 0x29627c: 0x0  nop
    ctx->pc = 0x29627cu;
    // NOP
label_296280:
    // 0x296280: 0x1b77d  .word       0x0001B77D                   # INVALID     $zero, $at, -0x4883 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296280u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x296280 raw=0x0001B77D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_296284:
    // 0x296284: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x296284u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_296288:
    // 0x296288: 0xb7c  dsll32      $at, $zero, 13
    ctx->pc = 0x296288u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (32 + 13));
label_29628c:
    // 0x29628c: 0x0  nop
    ctx->pc = 0x29628cu;
    // NOP
label_296290:
    // 0x296290: 0x1b77f  dsra32      $s6, $at, 29
    ctx->pc = 0x296290u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 1) >> (32 + 29));
label_296294:
    // 0x296294: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x296294u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296298:
    // 0x296298: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x296298u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_29629c:
    // 0x29629c: 0x0  nop
    ctx->pc = 0x29629cu;
    // NOP
label_2962a0:
    // 0x2962a0: 0x1b783  sra         $s6, $at, 30
    ctx->pc = 0x2962a0u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 1), 30));
label_2962a4:
    // 0x2962a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2962a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2962A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2962a8:
    // 0x2962a8: 0x441  .word       0x00000441                   # INVALID     $zero, $zero, 0x441 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2962a8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2962A8 raw=0x00000441"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2962ac:
    // 0x2962ac: 0x0  nop
    ctx->pc = 0x2962acu;
    // NOP
label_2962b0:
    // 0x2962b0: 0x1b784  .word       0x0001B784                   # sllv        $s6, $at, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2962b0u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_2962b4:
    // 0x2962b4: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x2962b4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_2962b8:
    // 0x2962b8: 0x1088  .word       0x00001088                   # jr          $zero # 00001080 <InstrIdType: CPU_SPECIAL>
label_2962bc:
    if (ctx->pc == 0x2962BCu) {
        ctx->pc = 0x2962C0u;
        goto label_2962c0;
    }
    ctx->pc = 0x2962B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2962B8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2962C0u;
label_2962c0:
    // 0x2962c0: 0x1b787  .word       0x0001B787                   # srav        $s6, $at, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2962c0u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_2962c4:
    // 0x2962c4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2962c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2962c8:
    // 0x2962c8: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x2962c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_2962cc:
    // 0x2962cc: 0x0  nop
    ctx->pc = 0x2962ccu;
    // NOP
label_2962d0:
    // 0x2962d0: 0x1b78b  .word       0x0001B78B                   # movn        $s6, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2962d0u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
label_2962d4:
    // 0x2962d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2962d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2962D4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2962d8:
    // 0x2962d8: 0x441  .word       0x00000441                   # INVALID     $zero, $zero, 0x441 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2962d8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2962D8 raw=0x00000441"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2962dc:
    // 0x2962dc: 0x0  nop
    ctx->pc = 0x2962dcu;
    // NOP
label_2962e0:
    // 0x2962e0: 0x1b78c  .word       0x0001B78C                   # syscall     734 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2962e0u;
    ctx->pc = 0x2962E4u;
runtime->handleSyscall(rdram, ctx, 0x6DEu);
label_2962e4:
    // 0x2962e4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2962e4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2962e8:
    // 0x2962e8: 0xcb0  tge         $zero, $zero, 50
    ctx->pc = 0x2962e8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2962ec:
    // 0x2962ec: 0x0  nop
    ctx->pc = 0x2962ecu;
    // NOP
label_2962f0:
    // 0x2962f0: 0x1b78e  .word       0x0001B78E                   # INVALID     $zero, $at, -0x4872 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2962f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2962F0 raw=0x0001B78E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2962f4:
    // 0x2962f4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2962f4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2962f8:
    // 0x2962f8: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x2962f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_2962fc:
    // 0x2962fc: 0x0  nop
    ctx->pc = 0x2962fcu;
    // NOP
label_296300:
    // 0x296300: 0x1b792  .word       0x0001B792                   # mflo        $s6 # 00010780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296300u;
    SET_GPR_U64(ctx, 22, ctx->lo);
label_296304:
    // 0x296304: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296304u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x296304 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_296308:
    // 0x296308: 0x441  .word       0x00000441                   # INVALID     $zero, $zero, 0x441 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296308u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x296308 raw=0x00000441"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29630c:
    // 0x29630c: 0x0  nop
    ctx->pc = 0x29630cu;
    // NOP
label_296310:
    // 0x296310: 0x1b793  .word       0x0001B793                   # mtlo        $zero # 0001B780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296310u;
    ctx->lo = GPR_U64(ctx, 0);
label_296314:
    // 0x296314: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x296314u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_296318:
    // 0x296318: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x296318u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_29631c:
    // 0x29631c: 0x0  nop
    ctx->pc = 0x29631cu;
    // NOP
label_296320:
    // 0x296320: 0x1b795  .word       0x0001B795                   # INVALID     $zero, $at, -0x486B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296320u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x296320 raw=0x0001B795"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_296324:
    // 0x296324: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x296324u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296328:
    // 0x296328: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x296328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_29632c:
    // 0x29632c: 0x0  nop
    ctx->pc = 0x29632cu;
    // NOP
label_296330:
    // 0x296330: 0x1b799  .word       0x0001B799                   # multu       $zero, $at # 0000B780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296330u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
label_296334:
    // 0x296334: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296334u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x296334 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_296338:
    // 0x296338: 0x441  .word       0x00000441                   # INVALID     $zero, $zero, 0x441 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296338u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x296338 raw=0x00000441"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29633c:
    // 0x29633c: 0x0  nop
    ctx->pc = 0x29633cu;
    // NOP
label_296340:
    // 0x296340: 0x1b79a  .word       0x0001B79A                   # div         $s6, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296340u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_296344:
    // 0x296344: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x296344u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_296348:
    // 0x296348: 0x102c  dadd        $v0, $zero, $zero
    ctx->pc = 0x296348u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, r); }
label_29634c:
    // 0x29634c: 0x0  nop
    ctx->pc = 0x29634cu;
    // NOP
label_296350:
    // 0x296350: 0x1b79d  .word       0x0001B79D                   # dmultu      $zero, $at # 0000B780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296350u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x296350 raw=0x0001B79D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_296354:
    // 0x296354: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x296354u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296358:
    // 0x296358: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x296358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_29635c:
    // 0x29635c: 0x0  nop
    ctx->pc = 0x29635cu;
    // NOP
label_296360:
    // 0x296360: 0x1b7a1  .word       0x0001B7A1                   # addu        $s6, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296360u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_296364:
    // 0x296364: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296364u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x296364 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_296368:
    // 0x296368: 0x441  .word       0x00000441                   # INVALID     $zero, $zero, 0x441 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296368u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x296368 raw=0x00000441"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29636c:
    // 0x29636c: 0x0  nop
    ctx->pc = 0x29636cu;
    // NOP
label_296370:
    // 0x296370: 0x1b7a2  .word       0x0001B7A2                   # neg         $s6, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296370u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 22, (int32_t)tmp); }
label_296374:
    // 0x296374: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x296374u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_296378:
    // 0x296378: 0xb10  .word       0x00000B10                   # mfhi        $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296378u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_29637c:
    // 0x29637c: 0x0  nop
    ctx->pc = 0x29637cu;
    // NOP
label_296380:
    // 0x296380: 0x1b7a4  .word       0x0001B7A4                   # and         $s6, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296380u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_296384:
    // 0x296384: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x296384u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296388:
    // 0x296388: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x296388u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_29638c:
    // 0x29638c: 0x0  nop
    ctx->pc = 0x29638cu;
    // NOP
label_296390:
    // 0x296390: 0x1b7a8  .word       0x0001B7A8                   # mfsa        $s6 # 00010780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x296390u;
    SET_GPR_U32(ctx, 22, ctx->sa);
label_296394:
    // 0x296394: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296394u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x296394 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_296398:
    // 0x296398: 0x441  .word       0x00000441                   # INVALID     $zero, $zero, 0x441 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296398u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x296398 raw=0x00000441"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29639c:
    // 0x29639c: 0x0  nop
    ctx->pc = 0x29639cu;
    // NOP
label_2963a0:
    // 0x2963a0: 0x1b7a9  .word       0x0001B7A9                   # mtsa        $zero # 0001B780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2963a0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2963a4:
    // 0x2963a4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2963a4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2963a8:
    // 0x2963a8: 0xa88  .word       0x00000A88                   # jr          $zero # 00000A80 <InstrIdType: CPU_SPECIAL>
label_2963ac:
    if (ctx->pc == 0x2963ACu) {
        ctx->pc = 0x2963B0u;
        goto label_2963b0;
    }
    ctx->pc = 0x2963A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2963A8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2963B0u;
label_2963b0:
    // 0x2963b0: 0x1b7ab  .word       0x0001B7AB                   # sltu        $s6, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2963b0u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_2963b4:
    // 0x2963b4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2963b4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2963b8:
    // 0x2963b8: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x2963b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_2963bc:
    // 0x2963bc: 0x0  nop
    ctx->pc = 0x2963bcu;
    // NOP
label_2963c0:
    // 0x2963c0: 0x1b7af  .word       0x0001B7AF                   # dsubu       $s6, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2963c0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_2963c4:
    // 0x2963c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2963c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2963C4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2963c8:
    // 0x2963c8: 0x441  .word       0x00000441                   # INVALID     $zero, $zero, 0x441 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2963c8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2963C8 raw=0x00000441"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2963cc:
    // 0x2963cc: 0x0  nop
    ctx->pc = 0x2963ccu;
    // NOP
label_2963d0:
    // 0x2963d0: 0x1b7b0  tge         $zero, $at, 734
    ctx->pc = 0x2963d0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2963d4:
    // 0x2963d4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2963d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2963d8:
    // 0x2963d8: 0xce8  .word       0x00000CE8                   # mfsa        $at # 000004C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2963d8u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_2963dc:
    // 0x2963dc: 0x0  nop
    ctx->pc = 0x2963dcu;
    // NOP
label_2963e0:
    // 0x2963e0: 0x1b7b2  tlt         $zero, $at, 734
    ctx->pc = 0x2963e0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2963e4:
    // 0x2963e4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2963e4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2963e8:
    // 0x2963e8: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x2963e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_2963ec:
    // 0x2963ec: 0x0  nop
    ctx->pc = 0x2963ecu;
    // NOP
label_2963f0:
    // 0x2963f0: 0x1b7b6  tne         $zero, $at, 734
    ctx->pc = 0x2963f0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2963f4:
    // 0x2963f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2963f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2963F4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2963f8:
    // 0x2963f8: 0x441  .word       0x00000441                   # INVALID     $zero, $zero, 0x441 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2963f8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2963F8 raw=0x00000441"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2963fc:
    // 0x2963fc: 0x0  nop
    ctx->pc = 0x2963fcu;
    // NOP
label_296400:
    // 0x296400: 0x1b7b7  .word       0x0001B7B7                   # INVALID     $zero, $at, -0x4849 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296400u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x296400 raw=0x0001B7B7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_296404:
    // 0x296404: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x296404u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_296408:
    // 0x296408: 0xb58  .word       0x00000B58                   # mult        $at, $zero, $zero # 00000340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x296408u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_29640c:
    // 0x29640c: 0x0  nop
    ctx->pc = 0x29640cu;
    // NOP
label_296410:
    // 0x296410: 0x1b7b9  .word       0x0001B7B9                   # INVALID     $zero, $at, -0x4847 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296410u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x296410 raw=0x0001B7B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_296414:
    // 0x296414: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x296414u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296418:
    // 0x296418: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x296418u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_29641c:
    // 0x29641c: 0x0  nop
    ctx->pc = 0x29641cu;
    // NOP
label_296420:
    // 0x296420: 0x1b7bd  .word       0x0001B7BD                   # INVALID     $zero, $at, -0x4843 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296420u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x296420 raw=0x0001B7BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_296424:
    // 0x296424: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296424u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x296424 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_296428:
    // 0x296428: 0x441  .word       0x00000441                   # INVALID     $zero, $zero, 0x441 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296428u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x296428 raw=0x00000441"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29642c:
    // 0x29642c: 0x0  nop
    ctx->pc = 0x29642cu;
    // NOP
label_296430:
    // 0x296430: 0x1b7be  dsrl32      $s6, $at, 30
    ctx->pc = 0x296430u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 1) >> (32 + 30));
label_296434:
    // 0x296434: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x296434u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_296438:
    // 0x296438: 0xaa4  .word       0x00000AA4                   # and         $at, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296438u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29643c:
    // 0x29643c: 0x0  nop
    ctx->pc = 0x29643cu;
    // NOP
label_296440:
    // 0x296440: 0x1b7c0  sll         $s6, $at, 31
    ctx->pc = 0x296440u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 1), 31));
label_296444:
    // 0x296444: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x296444u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296448:
    // 0x296448: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x296448u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_29644c:
    // 0x29644c: 0x0  nop
    ctx->pc = 0x29644cu;
    // NOP
label_296450:
    // 0x296450: 0x1b7c4  .word       0x0001B7C4                   # sllv        $s6, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296450u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_296454:
    // 0x296454: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296454u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x296454 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_296458:
    // 0x296458: 0x441  .word       0x00000441                   # INVALID     $zero, $zero, 0x441 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296458u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x296458 raw=0x00000441"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29645c:
    // 0x29645c: 0x0  nop
    ctx->pc = 0x29645cu;
    // NOP
label_296460:
    // 0x296460: 0x1b7c5  .word       0x0001B7C5                   # INVALID     $zero, $at, -0x483B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296460u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x296460 raw=0x0001B7C5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_296464:
    // 0x296464: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x296464u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_296468:
    // 0x296468: 0xe78  dsll        $at, $zero, 25
    ctx->pc = 0x296468u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << 25);
label_29646c:
    // 0x29646c: 0x0  nop
    ctx->pc = 0x29646cu;
    // NOP
label_296470:
    // 0x296470: 0x1b7c7  .word       0x0001B7C7                   # srav        $s6, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296470u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_296474:
    // 0x296474: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x296474u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296478:
    // 0x296478: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x296478u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_29647c:
    // 0x29647c: 0x0  nop
    ctx->pc = 0x29647cu;
    // NOP
label_296480:
    // 0x296480: 0x1b7cb  .word       0x0001B7CB                   # movn        $s6, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296480u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
label_296484:
    // 0x296484: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296484u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x296484 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_296488:
    // 0x296488: 0x441  .word       0x00000441                   # INVALID     $zero, $zero, 0x441 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296488u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x296488 raw=0x00000441"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29648c:
    // 0x29648c: 0x0  nop
    ctx->pc = 0x29648cu;
    // NOP
label_296490:
    // 0x296490: 0x1b7cc  .word       0x0001B7CC                   # syscall     735 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296490u;
    ctx->pc = 0x296494u;
runtime->handleSyscall(rdram, ctx, 0x6DFu);
label_296494:
    // 0x296494: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x296494u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_296498:
    // 0x296498: 0xfa8  .word       0x00000FA8                   # mfsa        $at # 00000780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x296498u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_29649c:
    // 0x29649c: 0x0  nop
    ctx->pc = 0x29649cu;
    // NOP
label_2964a0:
    // 0x2964a0: 0x1b7ce  .word       0x0001B7CE                   # INVALID     $zero, $at, -0x4832 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2964a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2964A0 raw=0x0001B7CE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2964a4:
    // 0x2964a4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2964a4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2964a8:
    // 0x2964a8: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x2964a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_2964ac:
    // 0x2964ac: 0x0  nop
    ctx->pc = 0x2964acu;
    // NOP
label_2964b0:
    // 0x2964b0: 0x1b7d2  .word       0x0001B7D2                   # mflo        $s6 # 000107C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2964b0u;
    SET_GPR_U64(ctx, 22, ctx->lo);
label_2964b4:
    // 0x2964b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2964b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2964B4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2964b8:
    // 0x2964b8: 0x441  .word       0x00000441                   # INVALID     $zero, $zero, 0x441 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2964b8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2964B8 raw=0x00000441"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2964bc:
    // 0x2964bc: 0x0  nop
    ctx->pc = 0x2964bcu;
    // NOP
label_2964c0:
    // 0x2964c0: 0x1b7d3  .word       0x0001B7D3                   # mtlo        $zero # 0001B7C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2964c0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2964c4:
    // 0x2964c4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2964c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2964c8:
    // 0x2964c8: 0xa14  .word       0x00000A14                   # dsllv       $at, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2964c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2964cc:
    // 0x2964cc: 0x0  nop
    ctx->pc = 0x2964ccu;
    // NOP
label_2964d0:
    // 0x2964d0: 0x1b7d5  .word       0x0001B7D5                   # INVALID     $zero, $at, -0x482B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2964d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2964D0 raw=0x0001B7D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2964d4:
    // 0x2964d4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2964d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2964d8:
    // 0x2964d8: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x2964d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_2964dc:
    // 0x2964dc: 0x0  nop
    ctx->pc = 0x2964dcu;
    // NOP
label_2964e0:
    // 0x2964e0: 0x1b7d9  .word       0x0001B7D9                   # multu       $zero, $at # 0000B7C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2964e0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
label_2964e4:
    // 0x2964e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2964e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2964E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2964e8:
    // 0x2964e8: 0x441  .word       0x00000441                   # INVALID     $zero, $zero, 0x441 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2964e8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2964E8 raw=0x00000441"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2964ec:
    // 0x2964ec: 0x0  nop
    ctx->pc = 0x2964ecu;
    // NOP
label_2964f0:
    // 0x2964f0: 0x1b7da  .word       0x0001B7DA                   # div         $s6, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2964f0u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2964f4:
    // 0x2964f4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2964f4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2964f8:
    // 0x2964f8: 0xb2c  .word       0x00000B2C                   # dadd        $at, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2964f8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_2964fc:
    // 0x2964fc: 0x0  nop
    ctx->pc = 0x2964fcu;
    // NOP
label_296500:
    // 0x296500: 0x1b7dc  .word       0x0001B7DC                   # dmult       $zero, $at # 0000B7C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296500u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x296500 raw=0x0001B7DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_296504:
    // 0x296504: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x296504u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296508:
    // 0x296508: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x296508u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_29650c:
    // 0x29650c: 0x0  nop
    ctx->pc = 0x29650cu;
    // NOP
label_296510:
    // 0x296510: 0x1b7e0  .word       0x0001B7E0                   # add         $s6, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296510u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_296514:
    // 0x296514: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296514u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x296514 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_296518:
    // 0x296518: 0x441  .word       0x00000441                   # INVALID     $zero, $zero, 0x441 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296518u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x296518 raw=0x00000441"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29651c:
    // 0x29651c: 0x0  nop
    ctx->pc = 0x29651cu;
    // NOP
label_296520:
    // 0x296520: 0x1b7e1  .word       0x0001B7E1                   # addu        $s6, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296520u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_296524:
    // 0x296524: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x296524u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_296528:
    // 0x296528: 0x1170  tge         $zero, $zero, 69
    ctx->pc = 0x296528u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29652c:
    // 0x29652c: 0x0  nop
    ctx->pc = 0x29652cu;
    // NOP
label_296530:
    // 0x296530: 0x1b7e4  .word       0x0001B7E4                   # and         $s6, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296530u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_296534:
    // 0x296534: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x296534u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296538:
    // 0x296538: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x296538u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_29653c:
    // 0x29653c: 0x0  nop
    ctx->pc = 0x29653cu;
    // NOP
label_296540:
    // 0x296540: 0x1b7e8  .word       0x0001B7E8                   # mfsa        $s6 # 000107C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x296540u;
    SET_GPR_U32(ctx, 22, ctx->sa);
label_296544:
    // 0x296544: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296544u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x296544 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_296548:
    // 0x296548: 0x441  .word       0x00000441                   # INVALID     $zero, $zero, 0x441 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296548u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x296548 raw=0x00000441"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29654c:
    // 0x29654c: 0x0  nop
    ctx->pc = 0x29654cu;
    // NOP
label_296550:
    // 0x296550: 0x1b7e9  .word       0x0001B7E9                   # mtsa        $zero # 0001B7C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x296550u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_296554:
    // 0x296554: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x296554u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_296558:
    // 0x296558: 0x1028  mfsa        $v0
    ctx->pc = 0x296558u;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_29655c:
    // 0x29655c: 0x0  nop
    ctx->pc = 0x29655cu;
    // NOP
label_296560:
    // 0x296560: 0x1b7ec  .word       0x0001B7EC                   # dadd        $s6, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296560u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, r); }
label_296564:
    // 0x296564: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x296564u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296568:
    // 0x296568: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x296568u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_29656c:
    // 0x29656c: 0x0  nop
    ctx->pc = 0x29656cu;
    // NOP
label_296570:
    // 0x296570: 0x1b7f0  tge         $zero, $at, 735
    ctx->pc = 0x296570u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_296574:
    // 0x296574: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296574u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x296574 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_296578:
    // 0x296578: 0x441  .word       0x00000441                   # INVALID     $zero, $zero, 0x441 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296578u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x296578 raw=0x00000441"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29657c:
    // 0x29657c: 0x0  nop
    ctx->pc = 0x29657cu;
    // NOP
label_296580:
    // 0x296580: 0x1b7f1  tgeu        $zero, $at, 735
    ctx->pc = 0x296580u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_296584:
    // 0x296584: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x296584u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_296588:
    // 0x296588: 0x934  teq         $zero, $zero, 36
    ctx->pc = 0x296588u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29658c:
    // 0x29658c: 0x0  nop
    ctx->pc = 0x29658cu;
    // NOP
label_296590:
    // 0x296590: 0x1b7f3  tltu        $zero, $at, 735
    ctx->pc = 0x296590u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_296594:
    // 0x296594: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x296594u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296598:
    // 0x296598: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x296598u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_29659c:
    // 0x29659c: 0x0  nop
    ctx->pc = 0x29659cu;
    // NOP
label_2965a0:
    // 0x2965a0: 0x1b7f7  .word       0x0001B7F7                   # INVALID     $zero, $at, -0x4809 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2965a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2965A0 raw=0x0001B7F7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2965a4:
    // 0x2965a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2965a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2965A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2965a8:
    // 0x2965a8: 0x441  .word       0x00000441                   # INVALID     $zero, $zero, 0x441 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2965a8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2965A8 raw=0x00000441"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2965ac:
    // 0x2965ac: 0x0  nop
    ctx->pc = 0x2965acu;
    // NOP
label_2965b0:
    // 0x2965b0: 0x1b7f8  dsll        $s6, $at, 31
    ctx->pc = 0x2965b0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 1) << 31);
label_2965b4:
    // 0x2965b4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2965b4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2965b8:
    // 0x2965b8: 0xa58  .word       0x00000A58                   # mult        $at, $zero, $zero # 00000240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2965b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_2965bc:
    // 0x2965bc: 0x0  nop
    ctx->pc = 0x2965bcu;
    // NOP
label_2965c0:
    // 0x2965c0: 0x1b7fa  dsrl        $s6, $at, 31
    ctx->pc = 0x2965c0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 1) >> 31);
label_2965c4:
    // 0x2965c4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2965c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2965c8:
    // 0x2965c8: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x2965c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_2965cc:
    // 0x2965cc: 0x0  nop
    ctx->pc = 0x2965ccu;
    // NOP
label_2965d0:
    // 0x2965d0: 0x1b7fe  dsrl32      $s6, $at, 31
    ctx->pc = 0x2965d0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 1) >> (32 + 31));
label_2965d4:
    // 0x2965d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2965d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2965D4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2965d8:
    // 0x2965d8: 0x441  .word       0x00000441                   # INVALID     $zero, $zero, 0x441 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2965d8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2965D8 raw=0x00000441"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2965dc:
    // 0x2965dc: 0x0  nop
    ctx->pc = 0x2965dcu;
    // NOP
label_2965e0:
    // 0x2965e0: 0x1b7ff  dsra32      $s6, $at, 31
    ctx->pc = 0x2965e0u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 1) >> (32 + 31));
label_2965e4:
    // 0x2965e4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2965e4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2965e8:
    // 0x2965e8: 0xc5c  .word       0x00000C5C                   # dmult       $zero, $zero # 00000C40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2965e8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2965E8 raw=0x00000C5C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2965ec:
    // 0x2965ec: 0x0  nop
    ctx->pc = 0x2965ecu;
    // NOP
label_2965f0:
    // 0x2965f0: 0x1b801  .word       0x0001B801                   # INVALID     $zero, $at, -0x47FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2965f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2965F0 raw=0x0001B801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2965f4:
    // 0x2965f4: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x2965f4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2965f8:
    // 0x2965f8: 0x32c0  sll         $a2, $zero, 11
    ctx->pc = 0x2965f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_2965fc:
    // 0x2965fc: 0x0  nop
    ctx->pc = 0x2965fcu;
    // NOP
label_296600:
    // 0x296600: 0x1b808  .word       0x0001B808                   # jr          $zero # 0001B800 <InstrIdType: CPU_SPECIAL>
label_296604:
    if (ctx->pc == 0x296604u) {
        ctx->pc = 0x296604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296600u;
        // 0x296604: 0x7  srav        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296608u;
        goto label_296608;
    }
    ctx->pc = 0x296600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x296604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296600u;
        // 0x296604: 0x7  srav        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296600u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x296608u;
label_296608:
    // 0x296608: 0x3280  sll         $a2, $zero, 10
    ctx->pc = 0x296608u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_29660c:
    // 0x29660c: 0x0  nop
    ctx->pc = 0x29660cu;
    // NOP
label_296610:
    // 0x296610: 0x1b80f  .word       0x0001B80F                   # sync # 0001B800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296610u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_296614:
    // 0x296614: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x296614u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296618:
    // 0x296618: 0x3280  sll         $a2, $zero, 10
    ctx->pc = 0x296618u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_29661c:
    // 0x29661c: 0x0  nop
    ctx->pc = 0x29661cu;
    // NOP
label_296620:
    // 0x296620: 0x1b816  dsrlv       $s7, $at, $zero
    ctx->pc = 0x296620u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_296624:
    // 0x296624: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x296624u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296628:
    // 0x296628: 0x3280  sll         $a2, $zero, 10
    ctx->pc = 0x296628u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_29662c:
    // 0x29662c: 0x0  nop
    ctx->pc = 0x29662cu;
    // NOP
label_296630:
    // 0x296630: 0x1b81d  .word       0x0001B81D                   # dmultu      $zero, $at # 0000B800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296630u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x296630 raw=0x0001B81D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_296634:
    // 0x296634: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x296634u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296638:
    // 0x296638: 0x3280  sll         $a2, $zero, 10
    ctx->pc = 0x296638u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_29663c:
    // 0x29663c: 0x0  nop
    ctx->pc = 0x29663cu;
    // NOP
label_296640:
    // 0x296640: 0x1b824  and         $s7, $zero, $at
    ctx->pc = 0x296640u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_296644:
    // 0x296644: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x296644u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296648:
    // 0x296648: 0x32c0  sll         $a2, $zero, 11
    ctx->pc = 0x296648u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_29664c:
    // 0x29664c: 0x0  nop
    ctx->pc = 0x29664cu;
    // NOP
label_296650:
    // 0x296650: 0x1b82b  sltu        $s7, $zero, $at
    ctx->pc = 0x296650u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_296654:
    // 0x296654: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x296654u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_296658:
    // 0x296658: 0x5080  sll         $t2, $zero, 2
    ctx->pc = 0x296658u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_29665c:
    // 0x29665c: 0x0  nop
    ctx->pc = 0x29665cu;
    // NOP
label_296660:
    // 0x296660: 0x1b836  tne         $zero, $at, 736
    ctx->pc = 0x296660u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_296664:
    // 0x296664: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x296664u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296668:
    // 0x296668: 0x3280  sll         $a2, $zero, 10
    ctx->pc = 0x296668u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_29666c:
    // 0x29666c: 0x0  nop
    ctx->pc = 0x29666cu;
    // NOP
label_296670:
    // 0x296670: 0x1b83d  .word       0x0001B83D                   # INVALID     $zero, $at, -0x47C3 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296670u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x296670 raw=0x0001B83D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_296674:
    // 0x296674: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x296674u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296678:
    // 0x296678: 0x32c0  sll         $a2, $zero, 11
    ctx->pc = 0x296678u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_29667c:
    // 0x29667c: 0x0  nop
    ctx->pc = 0x29667cu;
    // NOP
label_296680:
    // 0x296680: 0x1b844  .word       0x0001B844                   # sllv        $s7, $at, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296680u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_296684:
    // 0x296684: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x296684u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296688:
    // 0x296688: 0x3280  sll         $a2, $zero, 10
    ctx->pc = 0x296688u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_29668c:
    // 0x29668c: 0x0  nop
    ctx->pc = 0x29668cu;
    // NOP
label_296690:
    // 0x296690: 0x1b84b  .word       0x0001B84B                   # movn        $s7, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296690u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
label_296694:
    // 0x296694: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x296694u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296698:
    // 0x296698: 0x3280  sll         $a2, $zero, 10
    ctx->pc = 0x296698u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_29669c:
    // 0x29669c: 0x0  nop
    ctx->pc = 0x29669cu;
    // NOP
label_2966a0:
    // 0x2966a0: 0x1b852  .word       0x0001B852                   # mflo        $s7 # 00010040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2966a0u;
    SET_GPR_U64(ctx, 23, ctx->lo);
label_2966a4:
    // 0x2966a4: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x2966a4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2966a8:
    // 0x2966a8: 0x3280  sll         $a2, $zero, 10
    ctx->pc = 0x2966a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_2966ac:
    // 0x2966ac: 0x0  nop
    ctx->pc = 0x2966acu;
    // NOP
label_2966b0:
    // 0x2966b0: 0x1b859  .word       0x0001B859                   # multu       $zero, $at # 0000B840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2966b0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
label_2966b4:
    // 0x2966b4: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x2966b4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2966b8:
    // 0x2966b8: 0x32c0  sll         $a2, $zero, 11
    ctx->pc = 0x2966b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_2966bc:
    // 0x2966bc: 0x0  nop
    ctx->pc = 0x2966bcu;
    // NOP
label_2966c0:
    // 0x2966c0: 0x1b860  .word       0x0001B860                   # add         $s7, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2966c0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_2966c4:
    // 0x2966c4: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x2966c4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2966c8:
    // 0x2966c8: 0x3280  sll         $a2, $zero, 10
    ctx->pc = 0x2966c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_2966cc:
    // 0x2966cc: 0x0  nop
    ctx->pc = 0x2966ccu;
    // NOP
label_2966d0:
    // 0x2966d0: 0x1b867  .word       0x0001B867                   # nor         $s7, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2966d0u;
    SET_GPR_U64(ctx, 23, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_2966d4:
    // 0x2966d4: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x2966d4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2966d8:
    // 0x2966d8: 0x32c0  sll         $a2, $zero, 11
    ctx->pc = 0x2966d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_2966dc:
    // 0x2966dc: 0x0  nop
    ctx->pc = 0x2966dcu;
    // NOP
label_2966e0:
    // 0x2966e0: 0x1b86e  .word       0x0001B86E                   # dsub        $s7, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2966e0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, r); }
label_2966e4:
    // 0x2966e4: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x2966e4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2966e8:
    // 0x2966e8: 0x3280  sll         $a2, $zero, 10
    ctx->pc = 0x2966e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_2966ec:
    // 0x2966ec: 0x0  nop
    ctx->pc = 0x2966ecu;
    // NOP
label_2966f0:
    // 0x2966f0: 0x1b875  .word       0x0001B875                   # INVALID     $zero, $at, -0x478B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2966f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2966F0 raw=0x0001B875"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2966f4:
    // 0x2966f4: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x2966f4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2966f8:
    // 0x2966f8: 0x3280  sll         $a2, $zero, 10
    ctx->pc = 0x2966f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_2966fc:
    // 0x2966fc: 0x0  nop
    ctx->pc = 0x2966fcu;
    // NOP
label_296700:
    // 0x296700: 0x1b87c  dsll32      $s7, $at, 1
    ctx->pc = 0x296700u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 1) << (32 + 1));
label_296704:
    // 0x296704: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x296704u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296708:
    // 0x296708: 0x3280  sll         $a2, $zero, 10
    ctx->pc = 0x296708u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_29670c:
    // 0x29670c: 0x0  nop
    ctx->pc = 0x29670cu;
    // NOP
label_296710:
    // 0x296710: 0x1b883  sra         $s7, $at, 2
    ctx->pc = 0x296710u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 1), 2));
label_296714:
    // 0x296714: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x296714u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296718:
    // 0x296718: 0x3280  sll         $a2, $zero, 10
    ctx->pc = 0x296718u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_29671c:
    // 0x29671c: 0x0  nop
    ctx->pc = 0x29671cu;
    // NOP
label_296720:
    // 0x296720: 0x1b88a  .word       0x0001B88A                   # movz        $s7, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296720u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
label_296724:
    // 0x296724: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x296724u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296728:
    // 0x296728: 0x3280  sll         $a2, $zero, 10
    ctx->pc = 0x296728u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_29672c:
    // 0x29672c: 0x0  nop
    ctx->pc = 0x29672cu;
    // NOP
label_296730:
    // 0x296730: 0x1b891  .word       0x0001B891                   # mthi        $zero # 0001B880 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296730u;
    ctx->hi = GPR_U64(ctx, 0);
label_296734:
    // 0x296734: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x296734u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296738:
    // 0x296738: 0x3280  sll         $a2, $zero, 10
    ctx->pc = 0x296738u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_29673c:
    // 0x29673c: 0x0  nop
    ctx->pc = 0x29673cu;
    // NOP
label_296740:
    // 0x296740: 0x1b898  .word       0x0001B898                   # mult        $s7, $zero, $at # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x296740u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
label_296744:
    // 0x296744: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x296744u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296748:
    // 0x296748: 0x3280  sll         $a2, $zero, 10
    ctx->pc = 0x296748u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_29674c:
    // 0x29674c: 0x0  nop
    ctx->pc = 0x29674cu;
    // NOP
label_296750:
    // 0x296750: 0x1b89f  .word       0x0001B89F                   # ddivu       $s7, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296750u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x296750 raw=0x0001B89F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_296754:
    // 0x296754: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x296754u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296758:
    // 0x296758: 0x3280  sll         $a2, $zero, 10
    ctx->pc = 0x296758u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_29675c:
    // 0x29675c: 0x0  nop
    ctx->pc = 0x29675cu;
    // NOP
label_296760:
    // 0x296760: 0x1b8a6  .word       0x0001B8A6                   # xor         $s7, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296760u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_296764:
    // 0x296764: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x296764u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296768:
    // 0x296768: 0x3280  sll         $a2, $zero, 10
    ctx->pc = 0x296768u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_29676c:
    // 0x29676c: 0x0  nop
    ctx->pc = 0x29676cu;
    // NOP
label_296770:
    // 0x296770: 0x1b8ad  .word       0x0001B8AD                   # daddu       $s7, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296770u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_296774:
    // 0x296774: 0x12  mflo        $zero
    ctx->pc = 0x296774u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_296778:
    // 0x296778: 0x8c80  sll         $s1, $zero, 18
    ctx->pc = 0x296778u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_29677c:
    // 0x29677c: 0x0  nop
    ctx->pc = 0x29677cu;
    // NOP
label_296780:
    // 0x296780: 0x1b8bf  dsra32      $s7, $at, 2
    ctx->pc = 0x296780u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 1) >> (32 + 2));
label_296784:
    // 0x296784: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x296784u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_296788:
    // 0x296788: 0x1080  sll         $v0, $zero, 2
    ctx->pc = 0x296788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_29678c:
    // 0x29678c: 0x0  nop
    ctx->pc = 0x29678cu;
    // NOP
label_296790:
    // 0x296790: 0x1b8c2  srl         $s7, $at, 3
    ctx->pc = 0x296790u;
    SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 1), 3));
label_296794:
    // 0x296794: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296794u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x296794 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_296798:
    // 0x296798: 0x2040  sll         $a0, $zero, 1
    ctx->pc = 0x296798u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_29679c:
    // 0x29679c: 0x0  nop
    ctx->pc = 0x29679cu;
    // NOP
label_2967a0:
    // 0x2967a0: 0x1b8c7  .word       0x0001B8C7                   # srav        $s7, $at, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2967a0u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_2967a4:
    // 0x2967a4: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x2967a4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
    ctx->pc = 0x2967a8u;
    return;
}
