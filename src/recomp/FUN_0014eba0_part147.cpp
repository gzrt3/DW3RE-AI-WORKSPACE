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

// Function: FUN_0014eba0
// Address: 0x14eba0 - 0x2ced24
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0014eba0_part147(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x196040u: goto label_196040;
        case 0x196044u: goto label_196044;
        case 0x196048u: goto label_196048;
        case 0x19604cu: goto label_19604c;
        case 0x196050u: goto label_196050;
        case 0x196054u: goto label_196054;
        case 0x196058u: goto label_196058;
        case 0x19605cu: goto label_19605c;
        case 0x196060u: goto label_196060;
        case 0x196064u: goto label_196064;
        case 0x196068u: goto label_196068;
        case 0x19606cu: goto label_19606c;
        case 0x196070u: goto label_196070;
        case 0x196074u: goto label_196074;
        case 0x196078u: goto label_196078;
        case 0x19607cu: goto label_19607c;
        case 0x196080u: goto label_196080;
        case 0x196084u: goto label_196084;
        case 0x196088u: goto label_196088;
        case 0x19608cu: goto label_19608c;
        case 0x196090u: goto label_196090;
        case 0x196094u: goto label_196094;
        case 0x196098u: goto label_196098;
        case 0x19609cu: goto label_19609c;
        case 0x1960a0u: goto label_1960a0;
        case 0x1960a4u: goto label_1960a4;
        case 0x1960a8u: goto label_1960a8;
        case 0x1960acu: goto label_1960ac;
        case 0x1960b0u: goto label_1960b0;
        case 0x1960b4u: goto label_1960b4;
        case 0x1960b8u: goto label_1960b8;
        case 0x1960bcu: goto label_1960bc;
        case 0x1960c0u: goto label_1960c0;
        case 0x1960c4u: goto label_1960c4;
        case 0x1960c8u: goto label_1960c8;
        case 0x1960ccu: goto label_1960cc;
        case 0x1960d0u: goto label_1960d0;
        case 0x1960d4u: goto label_1960d4;
        case 0x1960d8u: goto label_1960d8;
        case 0x1960dcu: goto label_1960dc;
        case 0x1960e0u: goto label_1960e0;
        case 0x1960e4u: goto label_1960e4;
        case 0x1960e8u: goto label_1960e8;
        case 0x1960ecu: goto label_1960ec;
        case 0x1960f0u: goto label_1960f0;
        case 0x1960f4u: goto label_1960f4;
        case 0x1960f8u: goto label_1960f8;
        case 0x1960fcu: goto label_1960fc;
        case 0x196100u: goto label_196100;
        case 0x196104u: goto label_196104;
        case 0x196108u: goto label_196108;
        case 0x19610cu: goto label_19610c;
        case 0x196110u: goto label_196110;
        case 0x196114u: goto label_196114;
        case 0x196118u: goto label_196118;
        case 0x19611cu: goto label_19611c;
        case 0x196120u: goto label_196120;
        case 0x196124u: goto label_196124;
        case 0x196128u: goto label_196128;
        case 0x19612cu: goto label_19612c;
        case 0x196130u: goto label_196130;
        case 0x196134u: goto label_196134;
        case 0x196138u: goto label_196138;
        case 0x19613cu: goto label_19613c;
        case 0x196140u: goto label_196140;
        case 0x196144u: goto label_196144;
        case 0x196148u: goto label_196148;
        case 0x19614cu: goto label_19614c;
        case 0x196150u: goto label_196150;
        case 0x196154u: goto label_196154;
        case 0x196158u: goto label_196158;
        case 0x19615cu: goto label_19615c;
        case 0x196160u: goto label_196160;
        case 0x196164u: goto label_196164;
        case 0x196168u: goto label_196168;
        case 0x19616cu: goto label_19616c;
        case 0x196170u: goto label_196170;
        case 0x196174u: goto label_196174;
        case 0x196178u: goto label_196178;
        case 0x19617cu: goto label_19617c;
        case 0x196180u: goto label_196180;
        case 0x196184u: goto label_196184;
        case 0x196188u: goto label_196188;
        case 0x19618cu: goto label_19618c;
        case 0x196190u: goto label_196190;
        case 0x196194u: goto label_196194;
        case 0x196198u: goto label_196198;
        case 0x19619cu: goto label_19619c;
        case 0x1961a0u: goto label_1961a0;
        case 0x1961a4u: goto label_1961a4;
        case 0x1961a8u: goto label_1961a8;
        case 0x1961acu: goto label_1961ac;
        case 0x1961b0u: goto label_1961b0;
        case 0x1961b4u: goto label_1961b4;
        case 0x1961b8u: goto label_1961b8;
        case 0x1961bcu: goto label_1961bc;
        case 0x1961c0u: goto label_1961c0;
        case 0x1961c4u: goto label_1961c4;
        case 0x1961c8u: goto label_1961c8;
        case 0x1961ccu: goto label_1961cc;
        case 0x1961d0u: goto label_1961d0;
        case 0x1961d4u: goto label_1961d4;
        case 0x1961d8u: goto label_1961d8;
        case 0x1961dcu: goto label_1961dc;
        case 0x1961e0u: goto label_1961e0;
        case 0x1961e4u: goto label_1961e4;
        case 0x1961e8u: goto label_1961e8;
        case 0x1961ecu: goto label_1961ec;
        case 0x1961f0u: goto label_1961f0;
        case 0x1961f4u: goto label_1961f4;
        case 0x1961f8u: goto label_1961f8;
        case 0x1961fcu: goto label_1961fc;
        case 0x196200u: goto label_196200;
        case 0x196204u: goto label_196204;
        case 0x196208u: goto label_196208;
        case 0x19620cu: goto label_19620c;
        case 0x196210u: goto label_196210;
        case 0x196214u: goto label_196214;
        case 0x196218u: goto label_196218;
        case 0x19621cu: goto label_19621c;
        case 0x196220u: goto label_196220;
        case 0x196224u: goto label_196224;
        case 0x196228u: goto label_196228;
        case 0x19622cu: goto label_19622c;
        case 0x196230u: goto label_196230;
        case 0x196234u: goto label_196234;
        case 0x196238u: goto label_196238;
        case 0x19623cu: goto label_19623c;
        case 0x196240u: goto label_196240;
        case 0x196244u: goto label_196244;
        case 0x196248u: goto label_196248;
        case 0x19624cu: goto label_19624c;
        case 0x196250u: goto label_196250;
        case 0x196254u: goto label_196254;
        case 0x196258u: goto label_196258;
        case 0x19625cu: goto label_19625c;
        case 0x196260u: goto label_196260;
        case 0x196264u: goto label_196264;
        case 0x196268u: goto label_196268;
        case 0x19626cu: goto label_19626c;
        case 0x196270u: goto label_196270;
        case 0x196274u: goto label_196274;
        case 0x196278u: goto label_196278;
        case 0x19627cu: goto label_19627c;
        case 0x196280u: goto label_196280;
        case 0x196284u: goto label_196284;
        case 0x196288u: goto label_196288;
        case 0x19628cu: goto label_19628c;
        case 0x196290u: goto label_196290;
        case 0x196294u: goto label_196294;
        case 0x196298u: goto label_196298;
        case 0x19629cu: goto label_19629c;
        case 0x1962a0u: goto label_1962a0;
        case 0x1962a4u: goto label_1962a4;
        case 0x1962a8u: goto label_1962a8;
        case 0x1962acu: goto label_1962ac;
        case 0x1962b0u: goto label_1962b0;
        case 0x1962b4u: goto label_1962b4;
        case 0x1962b8u: goto label_1962b8;
        case 0x1962bcu: goto label_1962bc;
        case 0x1962c0u: goto label_1962c0;
        case 0x1962c4u: goto label_1962c4;
        case 0x1962c8u: goto label_1962c8;
        case 0x1962ccu: goto label_1962cc;
        case 0x1962d0u: goto label_1962d0;
        case 0x1962d4u: goto label_1962d4;
        case 0x1962d8u: goto label_1962d8;
        case 0x1962dcu: goto label_1962dc;
        case 0x1962e0u: goto label_1962e0;
        case 0x1962e4u: goto label_1962e4;
        case 0x1962e8u: goto label_1962e8;
        case 0x1962ecu: goto label_1962ec;
        case 0x1962f0u: goto label_1962f0;
        case 0x1962f4u: goto label_1962f4;
        case 0x1962f8u: goto label_1962f8;
        case 0x1962fcu: goto label_1962fc;
        case 0x196300u: goto label_196300;
        case 0x196304u: goto label_196304;
        case 0x196308u: goto label_196308;
        case 0x19630cu: goto label_19630c;
        case 0x196310u: goto label_196310;
        case 0x196314u: goto label_196314;
        case 0x196318u: goto label_196318;
        case 0x19631cu: goto label_19631c;
        case 0x196320u: goto label_196320;
        case 0x196324u: goto label_196324;
        case 0x196328u: goto label_196328;
        case 0x19632cu: goto label_19632c;
        case 0x196330u: goto label_196330;
        case 0x196334u: goto label_196334;
        case 0x196338u: goto label_196338;
        case 0x19633cu: goto label_19633c;
        case 0x196340u: goto label_196340;
        case 0x196344u: goto label_196344;
        case 0x196348u: goto label_196348;
        case 0x19634cu: goto label_19634c;
        case 0x196350u: goto label_196350;
        case 0x196354u: goto label_196354;
        case 0x196358u: goto label_196358;
        case 0x19635cu: goto label_19635c;
        case 0x196360u: goto label_196360;
        case 0x196364u: goto label_196364;
        case 0x196368u: goto label_196368;
        case 0x19636cu: goto label_19636c;
        case 0x196370u: goto label_196370;
        case 0x196374u: goto label_196374;
        case 0x196378u: goto label_196378;
        case 0x19637cu: goto label_19637c;
        case 0x196380u: goto label_196380;
        case 0x196384u: goto label_196384;
        case 0x196388u: goto label_196388;
        case 0x19638cu: goto label_19638c;
        case 0x196390u: goto label_196390;
        case 0x196394u: goto label_196394;
        case 0x196398u: goto label_196398;
        case 0x19639cu: goto label_19639c;
        case 0x1963a0u: goto label_1963a0;
        case 0x1963a4u: goto label_1963a4;
        case 0x1963a8u: goto label_1963a8;
        case 0x1963acu: goto label_1963ac;
        case 0x1963b0u: goto label_1963b0;
        case 0x1963b4u: goto label_1963b4;
        case 0x1963b8u: goto label_1963b8;
        case 0x1963bcu: goto label_1963bc;
        case 0x1963c0u: goto label_1963c0;
        case 0x1963c4u: goto label_1963c4;
        case 0x1963c8u: goto label_1963c8;
        case 0x1963ccu: goto label_1963cc;
        case 0x1963d0u: goto label_1963d0;
        case 0x1963d4u: goto label_1963d4;
        case 0x1963d8u: goto label_1963d8;
        case 0x1963dcu: goto label_1963dc;
        case 0x1963e0u: goto label_1963e0;
        case 0x1963e4u: goto label_1963e4;
        case 0x1963e8u: goto label_1963e8;
        case 0x1963ecu: goto label_1963ec;
        case 0x1963f0u: goto label_1963f0;
        case 0x1963f4u: goto label_1963f4;
        case 0x1963f8u: goto label_1963f8;
        case 0x1963fcu: goto label_1963fc;
        case 0x196400u: goto label_196400;
        case 0x196404u: goto label_196404;
        case 0x196408u: goto label_196408;
        case 0x19640cu: goto label_19640c;
        case 0x196410u: goto label_196410;
        case 0x196414u: goto label_196414;
        case 0x196418u: goto label_196418;
        case 0x19641cu: goto label_19641c;
        case 0x196420u: goto label_196420;
        case 0x196424u: goto label_196424;
        case 0x196428u: goto label_196428;
        case 0x19642cu: goto label_19642c;
        case 0x196430u: goto label_196430;
        case 0x196434u: goto label_196434;
        case 0x196438u: goto label_196438;
        case 0x19643cu: goto label_19643c;
        case 0x196440u: goto label_196440;
        case 0x196444u: goto label_196444;
        case 0x196448u: goto label_196448;
        case 0x19644cu: goto label_19644c;
        case 0x196450u: goto label_196450;
        case 0x196454u: goto label_196454;
        case 0x196458u: goto label_196458;
        case 0x19645cu: goto label_19645c;
        case 0x196460u: goto label_196460;
        case 0x196464u: goto label_196464;
        case 0x196468u: goto label_196468;
        case 0x19646cu: goto label_19646c;
        case 0x196470u: goto label_196470;
        case 0x196474u: goto label_196474;
        case 0x196478u: goto label_196478;
        case 0x19647cu: goto label_19647c;
        case 0x196480u: goto label_196480;
        case 0x196484u: goto label_196484;
        case 0x196488u: goto label_196488;
        case 0x19648cu: goto label_19648c;
        case 0x196490u: goto label_196490;
        case 0x196494u: goto label_196494;
        case 0x196498u: goto label_196498;
        case 0x19649cu: goto label_19649c;
        case 0x1964a0u: goto label_1964a0;
        case 0x1964a4u: goto label_1964a4;
        case 0x1964a8u: goto label_1964a8;
        case 0x1964acu: goto label_1964ac;
        case 0x1964b0u: goto label_1964b0;
        case 0x1964b4u: goto label_1964b4;
        case 0x1964b8u: goto label_1964b8;
        case 0x1964bcu: goto label_1964bc;
        case 0x1964c0u: goto label_1964c0;
        case 0x1964c4u: goto label_1964c4;
        case 0x1964c8u: goto label_1964c8;
        case 0x1964ccu: goto label_1964cc;
        case 0x1964d0u: goto label_1964d0;
        case 0x1964d4u: goto label_1964d4;
        case 0x1964d8u: goto label_1964d8;
        case 0x1964dcu: goto label_1964dc;
        case 0x1964e0u: goto label_1964e0;
        case 0x1964e4u: goto label_1964e4;
        case 0x1964e8u: goto label_1964e8;
        case 0x1964ecu: goto label_1964ec;
        case 0x1964f0u: goto label_1964f0;
        case 0x1964f4u: goto label_1964f4;
        case 0x1964f8u: goto label_1964f8;
        case 0x1964fcu: goto label_1964fc;
        case 0x196500u: goto label_196500;
        case 0x196504u: goto label_196504;
        case 0x196508u: goto label_196508;
        case 0x19650cu: goto label_19650c;
        case 0x196510u: goto label_196510;
        case 0x196514u: goto label_196514;
        case 0x196518u: goto label_196518;
        case 0x19651cu: goto label_19651c;
        case 0x196520u: goto label_196520;
        case 0x196524u: goto label_196524;
        case 0x196528u: goto label_196528;
        case 0x19652cu: goto label_19652c;
        case 0x196530u: goto label_196530;
        case 0x196534u: goto label_196534;
        case 0x196538u: goto label_196538;
        case 0x19653cu: goto label_19653c;
        case 0x196540u: goto label_196540;
        case 0x196544u: goto label_196544;
        case 0x196548u: goto label_196548;
        case 0x19654cu: goto label_19654c;
        case 0x196550u: goto label_196550;
        case 0x196554u: goto label_196554;
        case 0x196558u: goto label_196558;
        case 0x19655cu: goto label_19655c;
        case 0x196560u: goto label_196560;
        case 0x196564u: goto label_196564;
        case 0x196568u: goto label_196568;
        case 0x19656cu: goto label_19656c;
        case 0x196570u: goto label_196570;
        case 0x196574u: goto label_196574;
        case 0x196578u: goto label_196578;
        case 0x19657cu: goto label_19657c;
        case 0x196580u: goto label_196580;
        case 0x196584u: goto label_196584;
        case 0x196588u: goto label_196588;
        case 0x19658cu: goto label_19658c;
        case 0x196590u: goto label_196590;
        case 0x196594u: goto label_196594;
        case 0x196598u: goto label_196598;
        case 0x19659cu: goto label_19659c;
        case 0x1965a0u: goto label_1965a0;
        case 0x1965a4u: goto label_1965a4;
        case 0x1965a8u: goto label_1965a8;
        case 0x1965acu: goto label_1965ac;
        case 0x1965b0u: goto label_1965b0;
        case 0x1965b4u: goto label_1965b4;
        case 0x1965b8u: goto label_1965b8;
        case 0x1965bcu: goto label_1965bc;
        case 0x1965c0u: goto label_1965c0;
        case 0x1965c4u: goto label_1965c4;
        case 0x1965c8u: goto label_1965c8;
        case 0x1965ccu: goto label_1965cc;
        case 0x1965d0u: goto label_1965d0;
        case 0x1965d4u: goto label_1965d4;
        case 0x1965d8u: goto label_1965d8;
        case 0x1965dcu: goto label_1965dc;
        case 0x1965e0u: goto label_1965e0;
        case 0x1965e4u: goto label_1965e4;
        case 0x1965e8u: goto label_1965e8;
        case 0x1965ecu: goto label_1965ec;
        case 0x1965f0u: goto label_1965f0;
        case 0x1965f4u: goto label_1965f4;
        case 0x1965f8u: goto label_1965f8;
        case 0x1965fcu: goto label_1965fc;
        case 0x196600u: goto label_196600;
        case 0x196604u: goto label_196604;
        case 0x196608u: goto label_196608;
        case 0x19660cu: goto label_19660c;
        case 0x196610u: goto label_196610;
        case 0x196614u: goto label_196614;
        case 0x196618u: goto label_196618;
        case 0x19661cu: goto label_19661c;
        case 0x196620u: goto label_196620;
        case 0x196624u: goto label_196624;
        case 0x196628u: goto label_196628;
        case 0x19662cu: goto label_19662c;
        case 0x196630u: goto label_196630;
        case 0x196634u: goto label_196634;
        case 0x196638u: goto label_196638;
        case 0x19663cu: goto label_19663c;
        case 0x196640u: goto label_196640;
        case 0x196644u: goto label_196644;
        case 0x196648u: goto label_196648;
        case 0x19664cu: goto label_19664c;
        case 0x196650u: goto label_196650;
        case 0x196654u: goto label_196654;
        case 0x196658u: goto label_196658;
        case 0x19665cu: goto label_19665c;
        case 0x196660u: goto label_196660;
        case 0x196664u: goto label_196664;
        case 0x196668u: goto label_196668;
        case 0x19666cu: goto label_19666c;
        case 0x196670u: goto label_196670;
        case 0x196674u: goto label_196674;
        case 0x196678u: goto label_196678;
        case 0x19667cu: goto label_19667c;
        case 0x196680u: goto label_196680;
        case 0x196684u: goto label_196684;
        case 0x196688u: goto label_196688;
        case 0x19668cu: goto label_19668c;
        case 0x196690u: goto label_196690;
        case 0x196694u: goto label_196694;
        case 0x196698u: goto label_196698;
        case 0x19669cu: goto label_19669c;
        case 0x1966a0u: goto label_1966a0;
        case 0x1966a4u: goto label_1966a4;
        case 0x1966a8u: goto label_1966a8;
        case 0x1966acu: goto label_1966ac;
        case 0x1966b0u: goto label_1966b0;
        case 0x1966b4u: goto label_1966b4;
        case 0x1966b8u: goto label_1966b8;
        case 0x1966bcu: goto label_1966bc;
        case 0x1966c0u: goto label_1966c0;
        case 0x1966c4u: goto label_1966c4;
        case 0x1966c8u: goto label_1966c8;
        case 0x1966ccu: goto label_1966cc;
        case 0x1966d0u: goto label_1966d0;
        case 0x1966d4u: goto label_1966d4;
        case 0x1966d8u: goto label_1966d8;
        case 0x1966dcu: goto label_1966dc;
        case 0x1966e0u: goto label_1966e0;
        case 0x1966e4u: goto label_1966e4;
        case 0x1966e8u: goto label_1966e8;
        case 0x1966ecu: goto label_1966ec;
        case 0x1966f0u: goto label_1966f0;
        case 0x1966f4u: goto label_1966f4;
        case 0x1966f8u: goto label_1966f8;
        case 0x1966fcu: goto label_1966fc;
        case 0x196700u: goto label_196700;
        case 0x196704u: goto label_196704;
        case 0x196708u: goto label_196708;
        case 0x19670cu: goto label_19670c;
        case 0x196710u: goto label_196710;
        case 0x196714u: goto label_196714;
        case 0x196718u: goto label_196718;
        case 0x19671cu: goto label_19671c;
        case 0x196720u: goto label_196720;
        case 0x196724u: goto label_196724;
        case 0x196728u: goto label_196728;
        case 0x19672cu: goto label_19672c;
        case 0x196730u: goto label_196730;
        case 0x196734u: goto label_196734;
        case 0x196738u: goto label_196738;
        case 0x19673cu: goto label_19673c;
        case 0x196740u: goto label_196740;
        case 0x196744u: goto label_196744;
        case 0x196748u: goto label_196748;
        case 0x19674cu: goto label_19674c;
        case 0x196750u: goto label_196750;
        case 0x196754u: goto label_196754;
        case 0x196758u: goto label_196758;
        case 0x19675cu: goto label_19675c;
        case 0x196760u: goto label_196760;
        case 0x196764u: goto label_196764;
        case 0x196768u: goto label_196768;
        case 0x19676cu: goto label_19676c;
        case 0x196770u: goto label_196770;
        case 0x196774u: goto label_196774;
        case 0x196778u: goto label_196778;
        case 0x19677cu: goto label_19677c;
        case 0x196780u: goto label_196780;
        case 0x196784u: goto label_196784;
        case 0x196788u: goto label_196788;
        case 0x19678cu: goto label_19678c;
        case 0x196790u: goto label_196790;
        case 0x196794u: goto label_196794;
        case 0x196798u: goto label_196798;
        case 0x19679cu: goto label_19679c;
        case 0x1967a0u: goto label_1967a0;
        case 0x1967a4u: goto label_1967a4;
        case 0x1967a8u: goto label_1967a8;
        case 0x1967acu: goto label_1967ac;
        case 0x1967b0u: goto label_1967b0;
        case 0x1967b4u: goto label_1967b4;
        case 0x1967b8u: goto label_1967b8;
        case 0x1967bcu: goto label_1967bc;
        case 0x1967c0u: goto label_1967c0;
        case 0x1967c4u: goto label_1967c4;
        case 0x1967c8u: goto label_1967c8;
        case 0x1967ccu: goto label_1967cc;
        case 0x1967d0u: goto label_1967d0;
        case 0x1967d4u: goto label_1967d4;
        case 0x1967d8u: goto label_1967d8;
        case 0x1967dcu: goto label_1967dc;
        case 0x1967e0u: goto label_1967e0;
        case 0x1967e4u: goto label_1967e4;
        case 0x1967e8u: goto label_1967e8;
        case 0x1967ecu: goto label_1967ec;
        case 0x1967f0u: goto label_1967f0;
        case 0x1967f4u: goto label_1967f4;
        case 0x1967f8u: goto label_1967f8;
        case 0x1967fcu: goto label_1967fc;
        case 0x196800u: goto label_196800;
        case 0x196804u: goto label_196804;
        case 0x196808u: goto label_196808;
        case 0x19680cu: goto label_19680c;
        default: return;
    }

label_196040:
    // 0x196040: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x196040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_196044:
    // 0x196044: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x196044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_196048:
    // 0x196048: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x196048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_19604c:
    // 0x19604c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x19604cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_196050:
    // 0x196050: 0x27b70098  addiu       $s7, $sp, 0x98
    ctx->pc = 0x196050u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_196054:
    // 0x196054: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x196054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_196058:
    // 0x196058: 0x27b6009c  addiu       $s6, $sp, 0x9C
    ctx->pc = 0x196058u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_19605c:
    // 0x19605c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19605cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_196060:
    // 0x196060: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x196060u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_196064:
    // 0x196064: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x196064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_196068:
    // 0x196068: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x196068u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_19606c:
    // 0x19606c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19606cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_196070:
    // 0x196070: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x196070u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_196074:
    // 0x196074: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x196074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_196078:
    // 0x196078: 0x27b20094  addiu       $s2, $sp, 0x94
    ctx->pc = 0x196078u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
label_19607c:
    // 0x19607c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19607cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_196080:
    // 0x196080: 0x27b100a0  addiu       $s1, $sp, 0xA0
    ctx->pc = 0x196080u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_196084:
    // 0x196084: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x196084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
label_196088:
    // 0x196088: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x196088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19608c:
    // 0x19608c: 0xae540000  sw          $s4, 0x0($s2)
    ctx->pc = 0x19608cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
label_196090:
    // 0x196090: 0xaef30000  sw          $s3, 0x0($s7)
    ctx->pc = 0x196090u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 19));
label_196094:
    // 0x196094: 0xaec60000  sw          $a2, 0x0($s6)
    ctx->pc = 0x196094u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 6));
label_196098:
    // 0x196098: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x196098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_19609c:
    // 0x19609c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x19609cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1960a0:
    // 0x1960a0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1960a4:
    if (ctx->pc == 0x1960A4u) {
        ctx->pc = 0x1960A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960A0u;
        // 0x1960a4: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1960A8u;
        goto label_1960a8;
    }
    ctx->pc = 0x1960A0u;
    {
        const bool branch_taken_0x1960a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1960A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960A0u;
        // 0x1960a4: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1960a0) {
            ctx->pc = 0x1960C0u;
            goto label_1960c0;
        }
    }
    ctx->pc = 0x1960A8u;
label_1960a8:
    // 0x1960a8: 0x2a0f809  jalr        $s5
label_1960ac:
    if (ctx->pc == 0x1960ACu) {
        ctx->pc = 0x1960ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960A8u;
        // 0x1960ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1960B0u;
        goto label_1960b0;
    }
    ctx->pc = 0x1960A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x1960B0u);
        ctx->pc = 0x1960ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960A8u;
        // 0x1960ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1960A8u, 0x1960B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1960B0u;
label_1960b0:
    // 0x1960b0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1960b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1960b4:
    // 0x1960b4: 0x2148021  addu        $s0, $s0, $s4
    ctx->pc = 0x1960b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_1960b8:
    // 0x1960b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1960b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1960bc:
    // 0x1960bc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1960bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1960c0:
    // 0x1960c0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1960c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1960c4:
    // 0x1960c4: 0xb3182b  sltu        $v1, $a1, $s3
    ctx->pc = 0x1960c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_1960c8:
    // 0x1960c8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_1960cc:
    if (ctx->pc == 0x1960CCu) {
        ctx->pc = 0x1960CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960C8u;
        // 0x1960cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1960D0u;
        goto label_1960d0;
    }
    ctx->pc = 0x1960C8u;
    {
        const bool branch_taken_0x1960c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1960CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960C8u;
        // 0x1960cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1960c8) {
            ctx->pc = 0x1960A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1960a8;
        }
    }
    ctx->pc = 0x1960D0u;
label_1960d0:
    // 0x1960d0: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x1960d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_1960d4:
    // 0x1960d4: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x1960d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1960d8:
    // 0x1960d8: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_1960dc:
    if (ctx->pc == 0x1960DCu) {
        ctx->pc = 0x1960E0u;
        goto label_1960e0;
    }
    ctx->pc = 0x1960D8u;
    {
        const bool branch_taken_0x1960d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1960d8) {
            ctx->pc = 0x196134u;
            goto label_196134;
        }
    }
    ctx->pc = 0x1960E0u;
label_1960e0:
    // 0x1960e0: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x1960e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1960e4:
    // 0x1960e4: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_1960e8:
    if (ctx->pc == 0x1960E8u) {
        ctx->pc = 0x1960ECu;
        goto label_1960ec;
    }
    ctx->pc = 0x1960E4u;
    {
        const bool branch_taken_0x1960e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1960e4) {
            ctx->pc = 0x196134u;
            goto label_196134;
        }
    }
    ctx->pc = 0x1960ECu;
label_1960ec:
    // 0x1960ec: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1960ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1960f0:
    // 0x1960f0: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1960f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_1960f4:
    // 0x1960f4: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x1960f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1960f8:
    // 0x1960f8: 0x1000000a  b           . + 4 + (0xA << 2)
label_1960fc:
    if (ctx->pc == 0x1960FCu) {
        ctx->pc = 0x1960FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960F8u;
        // 0x1960fc: 0x648021  addu        $s0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196100u;
        goto label_196100;
    }
    ctx->pc = 0x1960F8u;
    {
        const bool branch_taken_0x1960f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1960FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960F8u;
        // 0x1960fc: 0x648021  addu        $s0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1960f8) {
            ctx->pc = 0x196124u;
            goto label_196124;
        }
    }
    ctx->pc = 0x196100u;
label_196100:
    // 0x196100: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x196100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_196104:
    // 0x196104: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x196104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_196108:
    // 0x196108: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x196108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_19610c:
    // 0x19610c: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x19610cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_196110:
    // 0x196110: 0x40f809  jalr        $v0
label_196114:
    if (ctx->pc == 0x196114u) {
        ctx->pc = 0x196114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196110u;
        // 0x196114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196118u;
        goto label_196118;
    }
    ctx->pc = 0x196110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196118u);
        ctx->pc = 0x196114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196110u;
        // 0x196114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196110u, 0x196118u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196118u;
label_196118:
    // 0x196118: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x196118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19611c:
    // 0x19611c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x19611cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_196120:
    // 0x196120: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x196120u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_196124:
    // 0x196124: 0x0  nop
    ctx->pc = 0x196124u;
    // NOP
label_196128:
    // 0x196128: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x196128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19612c:
    // 0x19612c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_196130:
    if (ctx->pc == 0x196130u) {
        ctx->pc = 0x196134u;
        goto label_196134;
    }
    ctx->pc = 0x19612Cu;
    {
        const bool branch_taken_0x19612c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19612c) {
            ctx->pc = 0x196100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196100;
        }
    }
    ctx->pc = 0x196134u;
label_196134:
    // 0x196134: 0x0  nop
    ctx->pc = 0x196134u;
    // NOP
label_196138:
    // 0x196138: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x196138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_19613c:
    // 0x19613c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x19613cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_196140:
    // 0x196140: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x196140u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_196144:
    // 0x196144: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x196144u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_196148:
    // 0x196148: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x196148u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19614c:
    // 0x19614c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19614cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_196150:
    // 0x196150: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x196150u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_196154:
    // 0x196154: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x196154u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_196158:
    // 0x196158: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x196158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_19615c:
    // 0x19615c: 0x3e00008  jr          $ra
label_196160:
    if (ctx->pc == 0x196160u) {
        ctx->pc = 0x196160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19615Cu;
        // 0x196160: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196164u;
        goto label_196164;
    }
    ctx->pc = 0x19615Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19615Cu;
        // 0x196160: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19615Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196164u;
label_196164:
    // 0x196164: 0x0  nop
    ctx->pc = 0x196164u;
    // NOP
label_196168:
    // 0x196168: 0x0  nop
    ctx->pc = 0x196168u;
    // NOP
label_19616c:
    // 0x19616c: 0x0  nop
    ctx->pc = 0x19616cu;
    // NOP
label_196170:
    // 0x196170: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x196170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_196174:
    // 0x196174: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x196174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_196178:
    // 0x196178: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x196178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_19617c:
    // 0x19617c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x19617cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_196180:
    // 0x196180: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x196180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_196184:
    // 0x196184: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x196184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_196188:
    // 0x196188: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x196188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_19618c:
    // 0x19618c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x19618cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_196190:
    // 0x196190: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x196190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_196194:
    // 0x196194: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x196194u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_196198:
    // 0x196198: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x196198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_19619c:
    // 0x19619c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x19619cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1961a0:
    // 0x1961a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1961a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1961a4:
    // 0x1961a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1961a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1961a8:
    // 0x1961a8: 0x10800036  beqz        $a0, . + 4 + (0x36 << 2)
label_1961ac:
    if (ctx->pc == 0x1961ACu) {
        ctx->pc = 0x1961ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1961A8u;
        // 0x1961ac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1961B0u;
        goto label_1961b0;
    }
    ctx->pc = 0x1961A8u;
    {
        const bool branch_taken_0x1961a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1961ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1961A8u;
        // 0x1961ac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1961a8) {
            ctx->pc = 0x196284u;
            goto label_196284;
        }
    }
    ctx->pc = 0x1961B0u;
label_1961b0:
    // 0x1961b0: 0xae140000  sw          $s4, 0x0($s0)
    ctx->pc = 0x1961b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
label_1961b4:
    // 0x1961b4: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x1961b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
label_1961b8:
    // 0x1961b8: 0x12a00032  beqz        $s5, . + 4 + (0x32 << 2)
label_1961bc:
    if (ctx->pc == 0x1961BCu) {
        ctx->pc = 0x1961BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1961B8u;
        // 0x1961bc: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1961C0u;
        goto label_1961c0;
    }
    ctx->pc = 0x1961B8u;
    {
        const bool branch_taken_0x1961b8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1961BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1961B8u;
        // 0x1961bc: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1961b8) {
            ctx->pc = 0x196284u;
            goto label_196284;
        }
    }
    ctx->pc = 0x1961C0u;
label_1961c0:
    // 0x1961c0: 0xafb000a0  sw          $s0, 0xA0($sp)
    ctx->pc = 0x1961c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 16));
label_1961c4:
    // 0x1961c4: 0x27b600a4  addiu       $s6, $sp, 0xA4
    ctx->pc = 0x1961c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
label_1961c8:
    // 0x1961c8: 0xaed40000  sw          $s4, 0x0($s6)
    ctx->pc = 0x1961c8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 20));
label_1961cc:
    // 0x1961cc: 0x27be00a8  addiu       $fp, $sp, 0xA8
    ctx->pc = 0x1961ccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_1961d0:
    // 0x1961d0: 0xafd30000  sw          $s3, 0x0($fp)
    ctx->pc = 0x1961d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 19));
label_1961d4:
    // 0x1961d4: 0x27b700ac  addiu       $s7, $sp, 0xAC
    ctx->pc = 0x1961d4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_1961d8:
    // 0x1961d8: 0xaee60000  sw          $a2, 0x0($s7)
    ctx->pc = 0x1961d8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 6));
label_1961dc:
    // 0x1961dc: 0x27b200b0  addiu       $s2, $sp, 0xB0
    ctx->pc = 0x1961dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1961e0:
    // 0x1961e0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x1961e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1961e4:
    // 0x1961e4: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1961e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1961e8:
    // 0x1961e8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1961e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1961ec:
    // 0x1961ec: 0x10000008  b           . + 4 + (0x8 << 2)
label_1961f0:
    if (ctx->pc == 0x1961F0u) {
        ctx->pc = 0x1961F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1961ECu;
        // 0x1961f0: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1961F4u;
        goto label_1961f4;
    }
    ctx->pc = 0x1961ECu;
    {
        const bool branch_taken_0x1961ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1961F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1961ECu;
        // 0x1961f0: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1961ec) {
            ctx->pc = 0x196210u;
            goto label_196210;
        }
    }
    ctx->pc = 0x1961F4u;
label_1961f4:
    // 0x1961f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1961f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1961f8:
    // 0x1961f8: 0x2a0f809  jalr        $s5
label_1961fc:
    if (ctx->pc == 0x1961FCu) {
        ctx->pc = 0x1961FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1961F8u;
        // 0x1961fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196200u;
        goto label_196200;
    }
    ctx->pc = 0x1961F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x196200u);
        ctx->pc = 0x1961FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1961F8u;
        // 0x1961fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1961F8u, 0x196200u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196200u;
label_196200:
    // 0x196200: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x196200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_196204:
    // 0x196204: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x196204u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_196208:
    // 0x196208: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x196208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19620c:
    // 0x19620c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x19620cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_196210:
    // 0x196210: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x196210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_196214:
    // 0x196214: 0x93102b  sltu        $v0, $a0, $s3
    ctx->pc = 0x196214u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_196218:
    // 0x196218: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_19621c:
    if (ctx->pc == 0x19621Cu) {
        ctx->pc = 0x196220u;
        goto label_196220;
    }
    ctx->pc = 0x196218u;
    {
        const bool branch_taken_0x196218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x196218) {
            ctx->pc = 0x1961F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1961f4;
        }
    }
    ctx->pc = 0x196220u;
label_196220:
    // 0x196220: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x196220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_196224:
    // 0x196224: 0x82082b  sltu        $at, $a0, $v0
    ctx->pc = 0x196224u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_196228:
    // 0x196228: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_19622c:
    if (ctx->pc == 0x19622Cu) {
        ctx->pc = 0x196230u;
        goto label_196230;
    }
    ctx->pc = 0x196228u;
    {
        const bool branch_taken_0x196228 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x196228) {
            ctx->pc = 0x196284u;
            goto label_196284;
        }
    }
    ctx->pc = 0x196230u;
label_196230:
    // 0x196230: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x196230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_196234:
    // 0x196234: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_196238:
    if (ctx->pc == 0x196238u) {
        ctx->pc = 0x19623Cu;
        goto label_19623c;
    }
    ctx->pc = 0x196234u;
    {
        const bool branch_taken_0x196234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196234) {
            ctx->pc = 0x196284u;
            goto label_196284;
        }
    }
    ctx->pc = 0x19623Cu;
label_19623c:
    // 0x19623c: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x19623cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_196240:
    // 0x196240: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x196240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_196244:
    // 0x196244: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x196244u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_196248:
    // 0x196248: 0x1000000a  b           . + 4 + (0xA << 2)
label_19624c:
    if (ctx->pc == 0x19624Cu) {
        ctx->pc = 0x19624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196248u;
        // 0x19624c: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196250u;
        goto label_196250;
    }
    ctx->pc = 0x196248u;
    {
        const bool branch_taken_0x196248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196248u;
        // 0x19624c: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196248) {
            ctx->pc = 0x196274u;
            goto label_196274;
        }
    }
    ctx->pc = 0x196250u;
label_196250:
    // 0x196250: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x196250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_196254:
    // 0x196254: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x196254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_196258:
    // 0x196258: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x196258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_19625c:
    // 0x19625c: 0x2238823  subu        $s1, $s1, $v1
    ctx->pc = 0x19625cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_196260:
    // 0x196260: 0x40f809  jalr        $v0
label_196264:
    if (ctx->pc == 0x196264u) {
        ctx->pc = 0x196264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196260u;
        // 0x196264: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196268u;
        goto label_196268;
    }
    ctx->pc = 0x196260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196268u);
        ctx->pc = 0x196264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196260u;
        // 0x196264: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196260u, 0x196268u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196268u;
label_196268:
    // 0x196268: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x196268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19626c:
    // 0x19626c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19626cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_196270:
    // 0x196270: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x196270u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_196274:
    // 0x196274: 0x0  nop
    ctx->pc = 0x196274u;
    // NOP
label_196278:
    // 0x196278: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x196278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19627c:
    // 0x19627c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_196280:
    if (ctx->pc == 0x196280u) {
        ctx->pc = 0x196284u;
        goto label_196284;
    }
    ctx->pc = 0x19627Cu;
    {
        const bool branch_taken_0x19627c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19627c) {
            ctx->pc = 0x196250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196250;
        }
    }
    ctx->pc = 0x196284u;
label_196284:
    // 0x196284: 0x0  nop
    ctx->pc = 0x196284u;
    // NOP
label_196288:
    // 0x196288: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x196288u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19628c:
    // 0x19628c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x19628cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_196290:
    // 0x196290: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x196290u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_196294:
    // 0x196294: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x196294u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_196298:
    // 0x196298: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x196298u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_19629c:
    // 0x19629c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x19629cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1962a0:
    // 0x1962a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1962a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1962a4:
    // 0x1962a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1962a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1962a8:
    // 0x1962a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1962a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1962ac:
    // 0x1962ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1962acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1962b0:
    // 0x1962b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1962b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1962b4:
    // 0x1962b4: 0x3e00008  jr          $ra
label_1962b8:
    if (ctx->pc == 0x1962B8u) {
        ctx->pc = 0x1962B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1962B4u;
        // 0x1962b8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1962BCu;
        goto label_1962bc;
    }
    ctx->pc = 0x1962B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1962B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1962B4u;
        // 0x1962b8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1962B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1962BCu;
label_1962bc:
    // 0x1962bc: 0x0  nop
    ctx->pc = 0x1962bcu;
    // NOP
label_1962c0:
    // 0x1962c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1962c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1962c4:
    // 0x1962c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1962c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1962c8:
    // 0x1962c8: 0x7fbe0000  sq          $fp, 0x0($sp)
    ctx->pc = 0x1962c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 30));
label_1962cc:
    // 0x1962cc: 0xc08e660  jal         func_239980
label_1962d0:
    if (ctx->pc == 0x1962D0u) {
        ctx->pc = 0x1962D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1962CCu;
        // 0x1962d0: 0x3a0f021  addu        $fp, $sp, $zero (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1962D4u;
        goto label_1962d4;
    }
    ctx->pc = 0x1962CCu;
    SET_GPR_U32(ctx, 31, 0x1962D4u);
    ctx->pc = 0x1962D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1962CCu;
    // 0x1962d0: 0x3a0f021  addu        $fp, $sp, $zero (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239980u;
    { ctx->pc = 0x239980; return; }
    ctx->pc = 0x1962D4u;
label_1962d4:
    // 0x1962d4: 0x1000000b  b           . + 4 + (0xB << 2)
label_1962d8:
    if (ctx->pc == 0x1962D8u) {
        ctx->pc = 0x1962DCu;
        goto label_1962dc;
    }
    ctx->pc = 0x1962D4u;
    {
        const bool branch_taken_0x1962d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1962d4) {
            ctx->pc = 0x196304u;
            goto label_196304;
        }
    }
    ctx->pc = 0x1962DCu;
label_1962dc:
    // 0x1962dc: 0xc065b50  jal         func_196D40
label_1962e0:
    if (ctx->pc == 0x1962E0u) {
        ctx->pc = 0x1962E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1962DCu;
        // 0x1962e0: 0x27c40020  addiu       $a0, $fp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1962E4u;
        goto label_1962e4;
    }
    ctx->pc = 0x1962DCu;
    SET_GPR_U32(ctx, 31, 0x1962E4u);
    ctx->pc = 0x1962E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1962DCu;
    // 0x1962e0: 0x27c40020  addiu       $a0, $fp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196D40u;
    { ctx->pc = 0x196d40; return; }
    ctx->pc = 0x1962E4u;
label_1962e4:
    // 0x1962e4: 0x0  nop
    ctx->pc = 0x1962e4u;
    // NOP
label_1962e8:
    // 0x1962e8: 0x0  nop
    ctx->pc = 0x1962e8u;
    // NOP
label_1962ec:
    // 0x1962ec: 0x0  nop
    ctx->pc = 0x1962ecu;
    // NOP
label_1962f0:
    // 0x1962f0: 0x0  nop
    ctx->pc = 0x1962f0u;
    // NOP
label_1962f4:
    // 0x1962f4: 0x0  nop
    ctx->pc = 0x1962f4u;
    // NOP
label_1962f8:
    // 0x1962f8: 0x0  nop
    ctx->pc = 0x1962f8u;
    // NOP
label_1962fc:
    // 0x1962fc: 0x1000fff9  b           . + 4 + (-0x7 << 2)
label_196300:
    if (ctx->pc == 0x196300u) {
        ctx->pc = 0x196304u;
        goto label_196304;
    }
    ctx->pc = 0x1962FCu;
    {
        const bool branch_taken_0x1962fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1962fc) {
            ctx->pc = 0x1962E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1962e4;
        }
    }
    ctx->pc = 0x196304u;
label_196304:
    // 0x196304: 0x0  nop
    ctx->pc = 0x196304u;
    // NOP
label_196308:
    // 0x196308: 0x3c0e821  addu        $sp, $fp, $zero
    ctx->pc = 0x196308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
label_19630c:
    // 0x19630c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19630cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_196310:
    // 0x196310: 0x7bbe0000  lq          $fp, 0x0($sp)
    ctx->pc = 0x196310u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_196314:
    // 0x196314: 0x3e00008  jr          $ra
label_196318:
    if (ctx->pc == 0x196318u) {
        ctx->pc = 0x196318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196314u;
        // 0x196318: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19631Cu;
        goto label_19631c;
    }
    ctx->pc = 0x196314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196314u;
        // 0x196318: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19631Cu;
label_19631c:
    // 0x19631c: 0x0  nop
    ctx->pc = 0x19631cu;
    // NOP
label_196320:
    // 0x196320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x196320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_196324:
    // 0x196324: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x196324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_196328:
    // 0x196328: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x196328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_19632c:
    // 0x19632c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19632cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_196330:
    // 0x196330: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_196334:
    if (ctx->pc == 0x196334u) {
        ctx->pc = 0x196334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196330u;
        // 0x196334: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196338u;
        goto label_196338;
    }
    ctx->pc = 0x196330u;
    {
        const bool branch_taken_0x196330 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x196334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196330u;
        // 0x196334: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196330) {
            ctx->pc = 0x19635Cu;
            goto label_19635c;
        }
    }
    ctx->pc = 0x196338u;
label_196338:
    // 0x196338: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x196338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_19633c:
    // 0x19633c: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x19633cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
label_196340:
    // 0x196340: 0x2463ed80  addiu       $v1, $v1, -0x1280
    ctx->pc = 0x196340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962560));
label_196344:
    // 0x196344: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x196344u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_196348:
    // 0x196348: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_19634c:
    if (ctx->pc == 0x19634Cu) {
        ctx->pc = 0x19634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196348u;
        // 0x19634c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196350u;
        goto label_196350;
    }
    ctx->pc = 0x196348u;
    {
        const bool branch_taken_0x196348 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x19634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196348u;
        // 0x19634c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196348) {
            ctx->pc = 0x196358u;
            goto label_196358;
        }
    }
    ctx->pc = 0x196350u;
label_196350:
    // 0x196350: 0xc0658b0  jal         func_1962C0
label_196354:
    if (ctx->pc == 0x196354u) {
        ctx->pc = 0x196358u;
        goto label_196358;
    }
    ctx->pc = 0x196350u;
    SET_GPR_U32(ctx, 31, 0x196358u);
    ctx->pc = 0x1962C0u;
    goto label_1962c0;
    ctx->pc = 0x196358u;
label_196358:
    // 0x196358: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x196358u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19635c:
    // 0x19635c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19635cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_196360:
    // 0x196360: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x196360u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_196364:
    // 0x196364: 0x3e00008  jr          $ra
label_196368:
    if (ctx->pc == 0x196368u) {
        ctx->pc = 0x196368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196364u;
        // 0x196368: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19636Cu;
        goto label_19636c;
    }
    ctx->pc = 0x196364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196364u;
        // 0x196368: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19636Cu;
label_19636c:
    // 0x19636c: 0x0  nop
    ctx->pc = 0x19636cu;
    // NOP
label_196370:
    // 0x196370: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x196370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_196374:
    // 0x196374: 0x3e00008  jr          $ra
label_196378:
    if (ctx->pc == 0x196378u) {
        ctx->pc = 0x196378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196374u;
        // 0x196378: 0x244298a8  addiu       $v0, $v0, -0x6758 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19637Cu;
        goto label_19637c;
    }
    ctx->pc = 0x196374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196374u;
        // 0x196378: 0x244298a8  addiu       $v0, $v0, -0x6758 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940840));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19637Cu;
label_19637c:
    // 0x19637c: 0x0  nop
    ctx->pc = 0x19637cu;
    // NOP
label_196380:
    // 0x196380: 0xfcc00000  sd          $zero, 0x0($a2)
    ctx->pc = 0x196380u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 0));
label_196384:
    // 0x196384: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
label_196388:
    if (ctx->pc == 0x196388u) {
        ctx->pc = 0x196388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196384u;
        // 0x196388: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19638Cu;
        goto label_19638c;
    }
    ctx->pc = 0x196384u;
    {
        const bool branch_taken_0x196384 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x196388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196384u;
        // 0x196388: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196384) {
            ctx->pc = 0x196394u;
            goto label_196394;
        }
    }
    ctx->pc = 0x19638Cu;
label_19638c:
    // 0x19638c: 0x10000093  b           . + 4 + (0x93 << 2)
label_196390:
    if (ctx->pc == 0x196390u) {
        ctx->pc = 0x196390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19638Cu;
        // 0x196390: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196394u;
        goto label_196394;
    }
    ctx->pc = 0x19638Cu;
    {
        const bool branch_taken_0x19638c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19638Cu;
        // 0x196390: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19638c) {
            ctx->pc = 0x1965DCu;
            goto label_1965dc;
        }
    }
    ctx->pc = 0x196394u;
label_196394:
    // 0x196394: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x196394u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_196398:
    // 0x196398: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x196398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_19639c:
    // 0x19639c: 0x14e3001b  bne         $a3, $v1, . + 4 + (0x1B << 2)
label_1963a0:
    if (ctx->pc == 0x1963A0u) {
        ctx->pc = 0x1963A4u;
        goto label_1963a4;
    }
    ctx->pc = 0x19639Cu;
    {
        const bool branch_taken_0x19639c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x19639c) {
            ctx->pc = 0x19640Cu;
            goto label_19640c;
        }
    }
    ctx->pc = 0x1963A4u;
label_1963a4:
    // 0x1963a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1963a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1963a8:
    // 0x1963a8: 0x24030043  addiu       $v1, $zero, 0x43
    ctx->pc = 0x1963a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_1963ac:
    // 0x1963ac: 0x80470000  lb          $a3, 0x0($v0)
    ctx->pc = 0x1963acu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1963b0:
    // 0x1963b0: 0x14e30002  bne         $a3, $v1, . + 4 + (0x2 << 2)
label_1963b4:
    if (ctx->pc == 0x1963B4u) {
        ctx->pc = 0x1963B8u;
        goto label_1963b8;
    }
    ctx->pc = 0x1963B0u;
    {
        const bool branch_taken_0x1963b0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x1963b0) {
            ctx->pc = 0x1963BCu;
            goto label_1963bc;
        }
    }
    ctx->pc = 0x1963B8u;
label_1963b8:
    // 0x1963b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1963b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1963bc:
    // 0x1963bc: 0x80470000  lb          $a3, 0x0($v0)
    ctx->pc = 0x1963bcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1963c0:
    // 0x1963c0: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x1963c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
label_1963c4:
    // 0x1963c4: 0x14e30002  bne         $a3, $v1, . + 4 + (0x2 << 2)
label_1963c8:
    if (ctx->pc == 0x1963C8u) {
        ctx->pc = 0x1963CCu;
        goto label_1963cc;
    }
    ctx->pc = 0x1963C4u;
    {
        const bool branch_taken_0x1963c4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x1963c4) {
            ctx->pc = 0x1963D0u;
            goto label_1963d0;
        }
    }
    ctx->pc = 0x1963CCu;
label_1963cc:
    // 0x1963cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1963ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1963d0:
    // 0x1963d0: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1963d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1963d4:
    // 0x1963d4: 0x24020076  addiu       $v0, $zero, 0x76
    ctx->pc = 0x1963d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_1963d8:
    // 0x1963d8: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_1963dc:
    if (ctx->pc == 0x1963DCu) {
        ctx->pc = 0x1963E0u;
        goto label_1963e0;
    }
    ctx->pc = 0x1963D8u;
    {
        const bool branch_taken_0x1963d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1963d8) {
            ctx->pc = 0x196408u;
            goto label_196408;
        }
    }
    ctx->pc = 0x1963E0u;
label_1963e0:
    // 0x1963e0: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x1963e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1963e4:
    // 0x1963e4: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1963e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1963e8:
    // 0x1963e8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_1963ec:
    if (ctx->pc == 0x1963ECu) {
        ctx->pc = 0x1963ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1963E8u;
        // 0x1963ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1963F0u;
        goto label_1963f0;
    }
    ctx->pc = 0x1963E8u;
    {
        const bool branch_taken_0x1963e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1963ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1963E8u;
        // 0x1963ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1963e8) {
            ctx->pc = 0x196400u;
            goto label_196400;
        }
    }
    ctx->pc = 0x1963F0u;
label_1963f0:
    // 0x1963f0: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x1963f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_1963f4:
    // 0x1963f4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1963f8:
    if (ctx->pc == 0x1963F8u) {
        ctx->pc = 0x1963F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1963F4u;
        // 0x1963f8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1963FCu;
        goto label_1963fc;
    }
    ctx->pc = 0x1963F4u;
    {
        const bool branch_taken_0x1963f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1963F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1963F4u;
        // 0x1963f8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1963f4) {
            ctx->pc = 0x19640Cu;
            goto label_19640c;
        }
    }
    ctx->pc = 0x1963FCu;
label_1963fc:
    // 0x1963fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1963fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_196400:
    // 0x196400: 0x10000076  b           . + 4 + (0x76 << 2)
label_196404:
    if (ctx->pc == 0x196404u) {
        ctx->pc = 0x196408u;
        goto label_196408;
    }
    ctx->pc = 0x196400u;
    {
        const bool branch_taken_0x196400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196400) {
            ctx->pc = 0x1965DCu;
            goto label_1965dc;
        }
    }
    ctx->pc = 0x196408u;
label_196408:
    // 0x196408: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x196408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19640c:
    // 0x19640c: 0x80870000  lb          $a3, 0x0($a0)
    ctx->pc = 0x19640cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_196410:
    // 0x196410: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x196410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_196414:
    // 0x196414: 0x10e30008  beq         $a3, $v1, . + 4 + (0x8 << 2)
label_196418:
    if (ctx->pc == 0x196418u) {
        ctx->pc = 0x196418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196414u;
        // 0x196418: 0x2403002a  addiu       $v1, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19641Cu;
        goto label_19641c;
    }
    ctx->pc = 0x196414u;
    {
        const bool branch_taken_0x196414 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x196418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196414u;
        // 0x196418: 0x2403002a  addiu       $v1, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196414) {
            ctx->pc = 0x196438u;
            goto label_196438;
        }
    }
    ctx->pc = 0x19641Cu;
label_19641c:
    // 0x19641c: 0x10e30006  beq         $a3, $v1, . + 4 + (0x6 << 2)
label_196420:
    if (ctx->pc == 0x196420u) {
        ctx->pc = 0x196424u;
        goto label_196424;
    }
    ctx->pc = 0x19641Cu;
    {
        const bool branch_taken_0x19641c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x19641c) {
            ctx->pc = 0x196438u;
            goto label_196438;
        }
    }
    ctx->pc = 0x196424u;
label_196424:
    // 0x196424: 0x24050052  addiu       $a1, $zero, 0x52
    ctx->pc = 0x196424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_196428:
    // 0x196428: 0x24090043  addiu       $t1, $zero, 0x43
    ctx->pc = 0x196428u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_19642c:
    // 0x19642c: 0x24070056  addiu       $a3, $zero, 0x56
    ctx->pc = 0x19642cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
label_196430:
    // 0x196430: 0x10000054  b           . + 4 + (0x54 << 2)
label_196434:
    if (ctx->pc == 0x196434u) {
        ctx->pc = 0x196434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196430u;
        // 0x196434: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196438u;
        goto label_196438;
    }
    ctx->pc = 0x196430u;
    {
        const bool branch_taken_0x196430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196430u;
        // 0x196434: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196430) {
            ctx->pc = 0x196584u;
            goto label_196584;
        }
    }
    ctx->pc = 0x196438u;
label_196438:
    // 0x196438: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x196438u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19643c:
    // 0x19643c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x19643cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_196440:
    // 0x196440: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x196440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_196444:
    // 0x196444: 0x80e70000  lb          $a3, 0x0($a3)
    ctx->pc = 0x196444u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_196448:
    // 0x196448: 0x10e30003  beq         $a3, $v1, . + 4 + (0x3 << 2)
label_19644c:
    if (ctx->pc == 0x19644Cu) {
        ctx->pc = 0x19644Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196448u;
        // 0x19644c: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196450u;
        goto label_196450;
    }
    ctx->pc = 0x196448u;
    {
        const bool branch_taken_0x196448 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x19644Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196448u;
        // 0x19644c: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196448) {
            ctx->pc = 0x196458u;
            goto label_196458;
        }
    }
    ctx->pc = 0x196450u;
label_196450:
    // 0x196450: 0x10000062  b           . + 4 + (0x62 << 2)
label_196454:
    if (ctx->pc == 0x196454u) {
        ctx->pc = 0x196454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196450u;
        // 0x196454: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196458u;
        goto label_196458;
    }
    ctx->pc = 0x196450u;
    {
        const bool branch_taken_0x196450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196450u;
        // 0x196454: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196450) {
            ctx->pc = 0x1965DCu;
            goto label_1965dc;
        }
    }
    ctx->pc = 0x196458u;
label_196458:
    // 0x196458: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x196458u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_19645c:
    // 0x19645c: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x19645cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_196460:
    // 0x196460: 0x15030015  bne         $t0, $v1, . + 4 + (0x15 << 2)
label_196464:
    if (ctx->pc == 0x196464u) {
        ctx->pc = 0x196464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196460u;
        // 0x196464: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196468u;
        goto label_196468;
    }
    ctx->pc = 0x196460u;
    {
        const bool branch_taken_0x196460 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        ctx->pc = 0x196464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196460u;
        // 0x196464: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196460) {
            ctx->pc = 0x1964B8u;
            goto label_1964b8;
        }
    }
    ctx->pc = 0x196468u;
label_196468:
    // 0x196468: 0x24070021  addiu       $a3, $zero, 0x21
    ctx->pc = 0x196468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_19646c:
    // 0x19646c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19646cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_196470:
    // 0x196470: 0x1507fff9  bne         $t0, $a3, . + 4 + (-0x7 << 2)
label_196474:
    if (ctx->pc == 0x196474u) {
        ctx->pc = 0x196478u;
        goto label_196478;
    }
    ctx->pc = 0x196470u;
    {
        const bool branch_taken_0x196470 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        if (branch_taken_0x196470) {
            ctx->pc = 0x196458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196458;
        }
    }
    ctx->pc = 0x196478u;
label_196478:
    // 0x196478: 0x10000008  b           . + 4 + (0x8 << 2)
label_19647c:
    if (ctx->pc == 0x19647Cu) {
        ctx->pc = 0x19647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196478u;
        // 0x19647c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196480u;
        goto label_196480;
    }
    ctx->pc = 0x196478u;
    {
        const bool branch_taken_0x196478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196478u;
        // 0x19647c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196478) {
            ctx->pc = 0x19649Cu;
            goto label_19649c;
        }
    }
    ctx->pc = 0x196480u;
label_196480:
    // 0x196480: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x196480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_196484:
    // 0x196484: 0x510b8  dsll        $v0, $a1, 2
    ctx->pc = 0x196484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 2);
label_196488:
    // 0x196488: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x196488u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_19648c:
    // 0x19648c: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x19648cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
label_196490:
    // 0x196490: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x196490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
label_196494:
    // 0x196494: 0x62102d  daddu       $v0, $v1, $v0
    ctx->pc = 0x196494u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_196498:
    // 0x196498: 0x6445ffd0  daddiu      $a1, $v0, -0x30
    ctx->pc = 0x196498u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967248);
label_19649c:
    // 0x19649c: 0x0  nop
    ctx->pc = 0x19649cu;
    // NOP
label_1964a0:
    // 0x1964a0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1964a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1964a4:
    // 0x1964a4: 0x1447fff6  bne         $v0, $a3, . + 4 + (-0xA << 2)
label_1964a8:
    if (ctx->pc == 0x1964A8u) {
        ctx->pc = 0x1964A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1964A4u;
        // 0x1964a8: 0x2183c  dsll32      $v1, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1964ACu;
        goto label_1964ac;
    }
    ctx->pc = 0x1964A4u;
    {
        const bool branch_taken_0x1964a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x1964A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1964A4u;
        // 0x1964a8: 0x2183c  dsll32      $v1, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1964a4) {
            ctx->pc = 0x196480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196480;
        }
    }
    ctx->pc = 0x1964ACu;
label_1964ac:
    // 0x1964ac: 0xfcc50000  sd          $a1, 0x0($a2)
    ctx->pc = 0x1964acu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
label_1964b0:
    // 0x1964b0: 0x1000004a  b           . + 4 + (0x4A << 2)
label_1964b4:
    if (ctx->pc == 0x1964B4u) {
        ctx->pc = 0x1964B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1964B0u;
        // 0x1964b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1964B8u;
        goto label_1964b8;
    }
    ctx->pc = 0x1964B0u;
    {
        const bool branch_taken_0x1964b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1964B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1964B0u;
        // 0x1964b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1964b0) {
            ctx->pc = 0x1965DCu;
            goto label_1965dc;
        }
    }
    ctx->pc = 0x1964B8u;
label_1964b8:
    // 0x1964b8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1964b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1964bc:
    // 0x1964bc: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x1964bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_1964c0:
    // 0x1964c0: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1964c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1964c4:
    // 0x1964c4: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1964c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1964c8:
    // 0x1964c8: 0x0  nop
    ctx->pc = 0x1964c8u;
    // NOP
label_1964cc:
    // 0x1964cc: 0x0  nop
    ctx->pc = 0x1964ccu;
    // NOP
label_1964d0:
    // 0x1964d0: 0x1443fff9  bne         $v0, $v1, . + 4 + (-0x7 << 2)
label_1964d4:
    if (ctx->pc == 0x1964D4u) {
        ctx->pc = 0x1964D8u;
        goto label_1964d8;
    }
    ctx->pc = 0x1964D0u;
    {
        const bool branch_taken_0x1964d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1964d0) {
            ctx->pc = 0x1964B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1964b8;
        }
    }
    ctx->pc = 0x1964D8u;
label_1964d8:
    // 0x1964d8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1964d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1964dc:
    // 0x1964dc: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1964dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1964e0:
    // 0x1964e0: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1964e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1964e4:
    // 0x1964e4: 0x0  nop
    ctx->pc = 0x1964e4u;
    // NOP
label_1964e8:
    // 0x1964e8: 0x0  nop
    ctx->pc = 0x1964e8u;
    // NOP
label_1964ec:
    // 0x1964ec: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
label_1964f0:
    if (ctx->pc == 0x1964F0u) {
        ctx->pc = 0x1964F4u;
        goto label_1964f4;
    }
    ctx->pc = 0x1964ECu;
    {
        const bool branch_taken_0x1964ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1964ec) {
            ctx->pc = 0x1964D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1964d8;
        }
    }
    ctx->pc = 0x1964F4u;
label_1964f4:
    // 0x1964f4: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1964f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1964f8:
    // 0x1964f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1964fc:
    if (ctx->pc == 0x1964FCu) {
        ctx->pc = 0x1964FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1964F8u;
        // 0x1964fc: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196500u;
        goto label_196500;
    }
    ctx->pc = 0x1964F8u;
    {
        const bool branch_taken_0x1964f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1964FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1964F8u;
        // 0x1964fc: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1964f8) {
            ctx->pc = 0x196508u;
            goto label_196508;
        }
    }
    ctx->pc = 0x196500u;
label_196500:
    // 0x196500: 0x10000036  b           . + 4 + (0x36 << 2)
label_196504:
    if (ctx->pc == 0x196504u) {
        ctx->pc = 0x196504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196500u;
        // 0x196504: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196508u;
        goto label_196508;
    }
    ctx->pc = 0x196500u;
    {
        const bool branch_taken_0x196500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196500u;
        // 0x196504: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196500) {
            ctx->pc = 0x1965DCu;
            goto label_1965dc;
        }
    }
    ctx->pc = 0x196508u;
label_196508:
    // 0x196508: 0x1000ffd4  b           . + 4 + (-0x2C << 2)
label_19650c:
    if (ctx->pc == 0x19650Cu) {
        ctx->pc = 0x19650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196508u;
        // 0x19650c: 0x80430000  lb          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196510u;
        goto label_196510;
    }
    ctx->pc = 0x196508u;
    {
        const bool branch_taken_0x196508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196508u;
        // 0x19650c: 0x80430000  lb          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196508) {
            ctx->pc = 0x19645Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19645c;
        }
    }
    ctx->pc = 0x196510u;
label_196510:
    // 0x196510: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x196510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_196514:
    // 0x196514: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x196514u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_196518:
    // 0x196518: 0x14690006  bne         $v1, $t1, . + 4 + (0x6 << 2)
label_19651c:
    if (ctx->pc == 0x19651Cu) {
        ctx->pc = 0x19651Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196518u;
        // 0x19651c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196520u;
        goto label_196520;
    }
    ctx->pc = 0x196518u;
    {
        const bool branch_taken_0x196518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        ctx->pc = 0x19651Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196518u;
        // 0x19651c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196518) {
            ctx->pc = 0x196534u;
            goto label_196534;
        }
    }
    ctx->pc = 0x196520u;
label_196520:
    // 0x196520: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x196520u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_196524:
    // 0x196524: 0x14690002  bne         $v1, $t1, . + 4 + (0x2 << 2)
label_196528:
    if (ctx->pc == 0x196528u) {
        ctx->pc = 0x19652Cu;
        goto label_19652c;
    }
    ctx->pc = 0x196524u;
    {
        const bool branch_taken_0x196524 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        if (branch_taken_0x196524) {
            ctx->pc = 0x196530u;
            goto label_196530;
        }
    }
    ctx->pc = 0x19652Cu;
label_19652c:
    // 0x19652c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19652cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_196530:
    // 0x196530: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x196530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_196534:
    // 0x196534: 0x0  nop
    ctx->pc = 0x196534u;
    // NOP
label_196538:
    // 0x196538: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x196538u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_19653c:
    // 0x19653c: 0x15090003  bne         $t0, $t1, . + 4 + (0x3 << 2)
label_196540:
    if (ctx->pc == 0x196540u) {
        ctx->pc = 0x196544u;
        goto label_196544;
    }
    ctx->pc = 0x19653Cu;
    {
        const bool branch_taken_0x19653c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 9));
        if (branch_taken_0x19653c) {
            ctx->pc = 0x19654Cu;
            goto label_19654c;
        }
    }
    ctx->pc = 0x196544u;
label_196544:
    // 0x196544: 0x10000025  b           . + 4 + (0x25 << 2)
label_196548:
    if (ctx->pc == 0x196548u) {
        ctx->pc = 0x196548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196544u;
        // 0x196548: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19654Cu;
        goto label_19654c;
    }
    ctx->pc = 0x196544u;
    {
        const bool branch_taken_0x196544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196544u;
        // 0x196548: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196544) {
            ctx->pc = 0x1965DCu;
            goto label_1965dc;
        }
    }
    ctx->pc = 0x19654Cu;
label_19654c:
    // 0x19654c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x19654cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_196550:
    // 0x196550: 0x14670006  bne         $v1, $a3, . + 4 + (0x6 << 2)
label_196554:
    if (ctx->pc == 0x196554u) {
        ctx->pc = 0x196558u;
        goto label_196558;
    }
    ctx->pc = 0x196550u;
    {
        const bool branch_taken_0x196550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x196550) {
            ctx->pc = 0x19656Cu;
            goto label_19656c;
        }
    }
    ctx->pc = 0x196558u;
label_196558:
    // 0x196558: 0x15070002  bne         $t0, $a3, . + 4 + (0x2 << 2)
label_19655c:
    if (ctx->pc == 0x19655Cu) {
        ctx->pc = 0x196560u;
        goto label_196560;
    }
    ctx->pc = 0x196558u;
    {
        const bool branch_taken_0x196558 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        if (branch_taken_0x196558) {
            ctx->pc = 0x196564u;
            goto label_196564;
        }
    }
    ctx->pc = 0x196560u;
label_196560:
    // 0x196560: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x196560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_196564:
    // 0x196564: 0x0  nop
    ctx->pc = 0x196564u;
    // NOP
label_196568:
    // 0x196568: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x196568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19656c:
    // 0x19656c: 0x0  nop
    ctx->pc = 0x19656cu;
    // NOP
label_196570:
    // 0x196570: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x196570u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_196574:
    // 0x196574: 0x14670003  bne         $v1, $a3, . + 4 + (0x3 << 2)
label_196578:
    if (ctx->pc == 0x196578u) {
        ctx->pc = 0x19657Cu;
        goto label_19657c;
    }
    ctx->pc = 0x196574u;
    {
        const bool branch_taken_0x196574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x196574) {
            ctx->pc = 0x196584u;
            goto label_196584;
        }
    }
    ctx->pc = 0x19657Cu;
label_19657c:
    // 0x19657c: 0x10000017  b           . + 4 + (0x17 << 2)
label_196580:
    if (ctx->pc == 0x196580u) {
        ctx->pc = 0x196580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19657Cu;
        // 0x196580: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196584u;
        goto label_196584;
    }
    ctx->pc = 0x19657Cu;
    {
        const bool branch_taken_0x19657c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19657Cu;
        // 0x196580: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19657c) {
            ctx->pc = 0x1965DCu;
            goto label_1965dc;
        }
    }
    ctx->pc = 0x196584u;
label_196584:
    // 0x196584: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x196584u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_196588:
    // 0x196588: 0x11060003  beq         $t0, $a2, . + 4 + (0x3 << 2)
label_19658c:
    if (ctx->pc == 0x19658Cu) {
        ctx->pc = 0x196590u;
        goto label_196590;
    }
    ctx->pc = 0x196588u;
    {
        const bool branch_taken_0x196588 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 6));
        if (branch_taken_0x196588) {
            ctx->pc = 0x196598u;
            goto label_196598;
        }
    }
    ctx->pc = 0x196590u;
label_196590:
    // 0x196590: 0x1505000c  bne         $t0, $a1, . + 4 + (0xC << 2)
label_196594:
    if (ctx->pc == 0x196594u) {
        ctx->pc = 0x196598u;
        goto label_196598;
    }
    ctx->pc = 0x196590u;
    {
        const bool branch_taken_0x196590 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 5));
        if (branch_taken_0x196590) {
            ctx->pc = 0x1965C4u;
            goto label_1965c4;
        }
    }
    ctx->pc = 0x196598u;
label_196598:
    // 0x196598: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x196598u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_19659c:
    // 0x19659c: 0x1103ffdc  beq         $t0, $v1, . + 4 + (-0x24 << 2)
label_1965a0:
    if (ctx->pc == 0x1965A0u) {
        ctx->pc = 0x1965A4u;
        goto label_1965a4;
    }
    ctx->pc = 0x19659Cu;
    {
        const bool branch_taken_0x19659c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x19659c) {
            ctx->pc = 0x196510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196510;
        }
    }
    ctx->pc = 0x1965A4u;
label_1965a4:
    // 0x1965a4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1965a8:
    if (ctx->pc == 0x1965A8u) {
        ctx->pc = 0x1965ACu;
        goto label_1965ac;
    }
    ctx->pc = 0x1965A4u;
    {
        const bool branch_taken_0x1965a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1965a4) {
            ctx->pc = 0x1965C4u;
            goto label_1965c4;
        }
    }
    ctx->pc = 0x1965ACu;
label_1965ac:
    // 0x1965ac: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
label_1965b0:
    if (ctx->pc == 0x1965B0u) {
        ctx->pc = 0x1965B4u;
        goto label_1965b4;
    }
    ctx->pc = 0x1965ACu;
    {
        const bool branch_taken_0x1965ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1965ac) {
            ctx->pc = 0x1965BCu;
            goto label_1965bc;
        }
    }
    ctx->pc = 0x1965B4u;
label_1965b4:
    // 0x1965b4: 0x10000009  b           . + 4 + (0x9 << 2)
label_1965b8:
    if (ctx->pc == 0x1965B8u) {
        ctx->pc = 0x1965B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1965B4u;
        // 0x1965b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1965BCu;
        goto label_1965bc;
    }
    ctx->pc = 0x1965B4u;
    {
        const bool branch_taken_0x1965b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1965B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1965B4u;
        // 0x1965b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1965b4) {
            ctx->pc = 0x1965DCu;
            goto label_1965dc;
        }
    }
    ctx->pc = 0x1965BCu;
label_1965bc:
    // 0x1965bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1965bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1965c0:
    // 0x1965c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1965c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1965c4:
    // 0x1965c4: 0x0  nop
    ctx->pc = 0x1965c4u;
    // NOP
label_1965c8:
    // 0x1965c8: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x1965c8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1965cc:
    // 0x1965cc: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1965ccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1965d0:
    // 0x1965d0: 0x10a3fff6  beq         $a1, $v1, . + 4 + (-0xA << 2)
label_1965d4:
    if (ctx->pc == 0x1965D4u) {
        ctx->pc = 0x1965D8u;
        goto label_1965d8;
    }
    ctx->pc = 0x1965D0u;
    {
        const bool branch_taken_0x1965d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1965d0) {
            ctx->pc = 0x1965ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1965ac;
        }
    }
    ctx->pc = 0x1965D8u;
label_1965d8:
    // 0x1965d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1965d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1965dc:
    // 0x1965dc: 0x3e00008  jr          $ra
label_1965e0:
    if (ctx->pc == 0x1965E0u) {
        ctx->pc = 0x1965E4u;
        goto label_1965e4;
    }
    ctx->pc = 0x1965DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1965DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1965E4u;
label_1965e4:
    // 0x1965e4: 0x0  nop
    ctx->pc = 0x1965e4u;
    // NOP
label_1965e8:
    // 0x1965e8: 0x0  nop
    ctx->pc = 0x1965e8u;
    // NOP
label_1965ec:
    // 0x1965ec: 0x0  nop
    ctx->pc = 0x1965ecu;
    // NOP
label_1965f0:
    // 0x1965f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1965f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1965f4:
    // 0x1965f4: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x1965f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_1965f8:
    // 0x1965f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1965f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1965fc:
    // 0x1965fc: 0x8c225790  lw          $v0, 0x5790($at)
    ctx->pc = 0x1965fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 22416)));
label_196600:
    // 0x196600: 0x40f809  jalr        $v0
label_196604:
    if (ctx->pc == 0x196604u) {
        ctx->pc = 0x196608u;
        goto label_196608;
    }
    ctx->pc = 0x196600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196608u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196600u, 0x196608u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196608u;
label_196608:
    // 0x196608: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19660c:
    // 0x19660c: 0x3e00008  jr          $ra
label_196610:
    if (ctx->pc == 0x196610u) {
        ctx->pc = 0x196610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19660Cu;
        // 0x196610: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196614u;
        goto label_196614;
    }
    ctx->pc = 0x19660Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19660Cu;
        // 0x196610: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19660Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196614u;
label_196614:
    // 0x196614: 0x0  nop
    ctx->pc = 0x196614u;
    // NOP
label_196618:
    // 0x196618: 0x0  nop
    ctx->pc = 0x196618u;
    // NOP
label_19661c:
    // 0x19661c: 0x0  nop
    ctx->pc = 0x19661cu;
    // NOP
label_196620:
    // 0x196620: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_196624:
    // 0x196624: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x196624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_196628:
    // 0x196628: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_19662c:
    // 0x19662c: 0x8c225788  lw          $v0, 0x5788($at)
    ctx->pc = 0x19662cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 22408)));
label_196630:
    // 0x196630: 0x40f809  jalr        $v0
label_196634:
    if (ctx->pc == 0x196634u) {
        ctx->pc = 0x196638u;
        goto label_196638;
    }
    ctx->pc = 0x196630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196638u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196630u, 0x196638u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196638u;
label_196638:
    // 0x196638: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19663c:
    // 0x19663c: 0x3e00008  jr          $ra
label_196640:
    if (ctx->pc == 0x196640u) {
        ctx->pc = 0x196640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19663Cu;
        // 0x196640: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196644u;
        goto label_196644;
    }
    ctx->pc = 0x19663Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19663Cu;
        // 0x196640: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19663Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196644u;
label_196644:
    // 0x196644: 0x0  nop
    ctx->pc = 0x196644u;
    // NOP
label_196648:
    // 0x196648: 0x0  nop
    ctx->pc = 0x196648u;
    // NOP
label_19664c:
    // 0x19664c: 0x0  nop
    ctx->pc = 0x19664cu;
    // NOP
label_196650:
    // 0x196650: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_196654:
    // 0x196654: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x196654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_196658:
    // 0x196658: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_19665c:
    // 0x19665c: 0x8c225788  lw          $v0, 0x5788($at)
    ctx->pc = 0x19665cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 22408)));
label_196660:
    // 0x196660: 0x40f809  jalr        $v0
label_196664:
    if (ctx->pc == 0x196664u) {
        ctx->pc = 0x196668u;
        goto label_196668;
    }
    ctx->pc = 0x196660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196668u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196660u, 0x196668u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196668u;
label_196668:
    // 0x196668: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19666c:
    // 0x19666c: 0x3e00008  jr          $ra
label_196670:
    if (ctx->pc == 0x196670u) {
        ctx->pc = 0x196670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19666Cu;
        // 0x196670: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196674u;
        goto label_196674;
    }
    ctx->pc = 0x19666Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19666Cu;
        // 0x196670: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19666Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196674u;
label_196674:
    // 0x196674: 0x0  nop
    ctx->pc = 0x196674u;
    // NOP
label_196678:
    // 0x196678: 0x0  nop
    ctx->pc = 0x196678u;
    // NOP
label_19667c:
    // 0x19667c: 0x0  nop
    ctx->pc = 0x19667cu;
    // NOP
label_196680:
    // 0x196680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_196684:
    // 0x196684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_196688:
    // 0x196688: 0xc08dc46  jal         func_237118
label_19668c:
    if (ctx->pc == 0x19668Cu) {
        ctx->pc = 0x196690u;
        goto label_196690;
    }
    ctx->pc = 0x196688u;
    SET_GPR_U32(ctx, 31, 0x196690u);
    ctx->pc = 0x237118u;
    { ctx->pc = 0x237118; return; }
    ctx->pc = 0x196690u;
label_196690:
    // 0x196690: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_196694:
    // 0x196694: 0x3e00008  jr          $ra
label_196698:
    if (ctx->pc == 0x196698u) {
        ctx->pc = 0x196698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196694u;
        // 0x196698: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19669Cu;
        goto label_19669c;
    }
    ctx->pc = 0x196694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196694u;
        // 0x196698: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19669Cu;
label_19669c:
    // 0x19669c: 0x0  nop
    ctx->pc = 0x19669cu;
    // NOP
label_1966a0:
    // 0x1966a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1966a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1966a4:
    // 0x1966a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1966a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1966a8:
    // 0x1966a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1966a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1966ac:
    // 0x1966ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1966acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1966b0:
    // 0x1966b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1966b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1966b4:
    // 0x1966b4: 0x91082b  sltu        $at, $a0, $s1
    ctx->pc = 0x1966b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_1966b8:
    // 0x1966b8: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_1966bc:
    if (ctx->pc == 0x1966BCu) {
        ctx->pc = 0x1966BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1966B8u;
        // 0x1966bc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1966C0u;
        goto label_1966c0;
    }
    ctx->pc = 0x1966B8u;
    {
        const bool branch_taken_0x1966b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1966BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1966B8u;
        // 0x1966bc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1966b8) {
            ctx->pc = 0x1966E4u;
            goto label_1966e4;
        }
    }
    ctx->pc = 0x1966C0u;
label_1966c0:
    // 0x1966c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1966c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1966c4:
    // 0x1966c4: 0x40f809  jalr        $v0
label_1966c8:
    if (ctx->pc == 0x1966C8u) {
        ctx->pc = 0x1966CCu;
        goto label_1966cc;
    }
    ctx->pc = 0x1966C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1966CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1966C4u, 0x1966CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1966CCu;
label_1966cc:
    // 0x1966cc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1966ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1966d0:
    // 0x1966d0: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x1966d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_1966d4:
    // 0x1966d4: 0x0  nop
    ctx->pc = 0x1966d4u;
    // NOP
label_1966d8:
    // 0x1966d8: 0x0  nop
    ctx->pc = 0x1966d8u;
    // NOP
label_1966dc:
    // 0x1966dc: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_1966e0:
    if (ctx->pc == 0x1966E0u) {
        ctx->pc = 0x1966E4u;
        goto label_1966e4;
    }
    ctx->pc = 0x1966DCu;
    {
        const bool branch_taken_0x1966dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1966dc) {
            ctx->pc = 0x1966C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1966c0;
        }
    }
    ctx->pc = 0x1966E4u;
label_1966e4:
    // 0x1966e4: 0x0  nop
    ctx->pc = 0x1966e4u;
    // NOP
label_1966e8:
    // 0x1966e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1966e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1966ec:
    // 0x1966ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1966ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1966f0:
    // 0x1966f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1966f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1966f4:
    // 0x1966f4: 0x3e00008  jr          $ra
label_1966f8:
    if (ctx->pc == 0x1966F8u) {
        ctx->pc = 0x1966F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1966F4u;
        // 0x1966f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1966FCu;
        goto label_1966fc;
    }
    ctx->pc = 0x1966F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1966F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1966F4u;
        // 0x1966f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1966F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1966FCu;
label_1966fc:
    // 0x1966fc: 0x0  nop
    ctx->pc = 0x1966fcu;
    // NOP
label_196700:
    // 0x196700: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x196700u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_196704:
    // 0x196704: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x196704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_196708:
    // 0x196708: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_19670c:
    if (ctx->pc == 0x19670Cu) {
        ctx->pc = 0x196710u;
        goto label_196710;
    }
    ctx->pc = 0x196708u;
    {
        const bool branch_taken_0x196708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x196708) {
            ctx->pc = 0x196720u;
            goto label_196720;
        }
    }
    ctx->pc = 0x196710u;
label_196710:
    // 0x196710: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x196710u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_196714:
    // 0x196714: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x196714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_196718:
    // 0x196718: 0x1000001f  b           . + 4 + (0x1F << 2)
label_19671c:
    if (ctx->pc == 0x19671Cu) {
        ctx->pc = 0x19671Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196718u;
        // 0x19671c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196720u;
        goto label_196720;
    }
    ctx->pc = 0x196718u;
    {
        const bool branch_taken_0x196718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19671Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196718u;
        // 0x19671c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196718) {
            ctx->pc = 0x196798u;
            goto label_196798;
        }
    }
    ctx->pc = 0x196720u;
label_196720:
    // 0x196720: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x196720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_196724:
    // 0x196724: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_196728:
    if (ctx->pc == 0x196728u) {
        ctx->pc = 0x196728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196724u;
        // 0x196728: 0x90860001  lbu         $a2, 0x1($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19672Cu;
        goto label_19672c;
    }
    ctx->pc = 0x196724u;
    {
        const bool branch_taken_0x196724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x196728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196724u;
        // 0x196728: 0x90860001  lbu         $a2, 0x1($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196724) {
            ctx->pc = 0x196744u;
            goto label_196744;
        }
    }
    ctx->pc = 0x19672Cu;
label_19672c:
    // 0x19672c: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x19672cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
label_196730:
    // 0x196730: 0x24820002  addiu       $v0, $a0, 0x2
    ctx->pc = 0x196730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_196734:
    // 0x196734: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x196734u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_196738:
    // 0x196738: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x196738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_19673c:
    // 0x19673c: 0x10000016  b           . + 4 + (0x16 << 2)
label_196740:
    if (ctx->pc == 0x196740u) {
        ctx->pc = 0x196740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19673Cu;
        // 0x196740: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196744u;
        goto label_196744;
    }
    ctx->pc = 0x19673Cu;
    {
        const bool branch_taken_0x19673c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19673Cu;
        // 0x196740: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19673c) {
            ctx->pc = 0x196798u;
            goto label_196798;
        }
    }
    ctx->pc = 0x196744u;
label_196744:
    // 0x196744: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x196744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_196748:
    // 0x196748: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_19674c:
    if (ctx->pc == 0x19674Cu) {
        ctx->pc = 0x19674Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196748u;
        // 0x19674c: 0x90870002  lbu         $a3, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196750u;
        goto label_196750;
    }
    ctx->pc = 0x196748u;
    {
        const bool branch_taken_0x196748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19674Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196748u;
        // 0x19674c: 0x90870002  lbu         $a3, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196748) {
            ctx->pc = 0x196770u;
            goto label_196770;
        }
    }
    ctx->pc = 0x196750u;
label_196750:
    // 0x196750: 0x310c2  srl         $v0, $v1, 3
    ctx->pc = 0x196750u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
label_196754:
    // 0x196754: 0x61a00  sll         $v1, $a2, 8
    ctx->pc = 0x196754u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_196758:
    // 0x196758: 0x23400  sll         $a2, $v0, 16
    ctx->pc = 0x196758u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_19675c:
    // 0x19675c: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x19675cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_196760:
    // 0x196760: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x196760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
label_196764:
    // 0x196764: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x196764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_196768:
    // 0x196768: 0x1000000b  b           . + 4 + (0xB << 2)
label_19676c:
    if (ctx->pc == 0x19676Cu) {
        ctx->pc = 0x19676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196768u;
        // 0x19676c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196770u;
        goto label_196770;
    }
    ctx->pc = 0x196768u;
    {
        const bool branch_taken_0x196768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196768u;
        // 0x19676c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196768) {
            ctx->pc = 0x196798u;
            goto label_196798;
        }
    }
    ctx->pc = 0x196770u;
label_196770:
    // 0x196770: 0x310c2  srl         $v0, $v1, 3
    ctx->pc = 0x196770u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
label_196774:
    // 0x196774: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x196774u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_196778:
    // 0x196778: 0x23600  sll         $a2, $v0, 24
    ctx->pc = 0x196778u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_19677c:
    // 0x19677c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x19677cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_196780:
    // 0x196780: 0x71200  sll         $v0, $a3, 8
    ctx->pc = 0x196780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_196784:
    // 0x196784: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x196784u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_196788:
    // 0x196788: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x196788u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_19678c:
    // 0x19678c: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x19678cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_196790:
    // 0x196790: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x196790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_196794:
    // 0x196794: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x196794u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_196798:
    // 0x196798: 0x3e00008  jr          $ra
label_19679c:
    if (ctx->pc == 0x19679Cu) {
        ctx->pc = 0x1967A0u;
        goto label_1967a0;
    }
    ctx->pc = 0x196798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1967A0u;
label_1967a0:
    // 0x1967a0: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x1967a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1967a4:
    // 0x1967a4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1967a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1967a8:
    // 0x1967a8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1967ac:
    if (ctx->pc == 0x1967ACu) {
        ctx->pc = 0x1967B0u;
        goto label_1967b0;
    }
    ctx->pc = 0x1967A8u;
    {
        const bool branch_taken_0x1967a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1967a8) {
            ctx->pc = 0x1967C0u;
            goto label_1967c0;
        }
    }
    ctx->pc = 0x1967B0u;
label_1967b0:
    // 0x1967b0: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1967b0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_1967b4:
    // 0x1967b4: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1967b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1967b8:
    // 0x1967b8: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1967bc:
    if (ctx->pc == 0x1967BCu) {
        ctx->pc = 0x1967BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1967B8u;
        // 0x1967bc: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1967C0u;
        goto label_1967c0;
    }
    ctx->pc = 0x1967B8u;
    {
        const bool branch_taken_0x1967b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1967BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1967B8u;
        // 0x1967bc: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1967b8) {
            ctx->pc = 0x196838u;
            { ctx->pc = 0x196838; return; }
        }
    }
    ctx->pc = 0x1967C0u;
label_1967c0:
    // 0x1967c0: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1967c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_1967c4:
    // 0x1967c4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1967c8:
    if (ctx->pc == 0x1967C8u) {
        ctx->pc = 0x1967C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1967C4u;
        // 0x1967c8: 0x90860001  lbu         $a2, 0x1($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1967CCu;
        goto label_1967cc;
    }
    ctx->pc = 0x1967C4u;
    {
        const bool branch_taken_0x1967c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1967C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1967C4u;
        // 0x1967c8: 0x90860001  lbu         $a2, 0x1($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1967c4) {
            ctx->pc = 0x1967E4u;
            goto label_1967e4;
        }
    }
    ctx->pc = 0x1967CCu;
label_1967cc:
    // 0x1967cc: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1967ccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_1967d0:
    // 0x1967d0: 0x24820002  addiu       $v0, $a0, 0x2
    ctx->pc = 0x1967d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_1967d4:
    // 0x1967d4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1967d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_1967d8:
    // 0x1967d8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1967d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_1967dc:
    // 0x1967dc: 0x10000016  b           . + 4 + (0x16 << 2)
label_1967e0:
    if (ctx->pc == 0x1967E0u) {
        ctx->pc = 0x1967E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1967DCu;
        // 0x1967e0: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1967E4u;
        goto label_1967e4;
    }
    ctx->pc = 0x1967DCu;
    {
        const bool branch_taken_0x1967dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1967E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1967DCu;
        // 0x1967e0: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1967dc) {
            ctx->pc = 0x196838u;
            { ctx->pc = 0x196838; return; }
        }
    }
    ctx->pc = 0x1967E4u;
label_1967e4:
    // 0x1967e4: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1967e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1967e8:
    // 0x1967e8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1967ec:
    if (ctx->pc == 0x1967ECu) {
        ctx->pc = 0x1967ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1967E8u;
        // 0x1967ec: 0x90870002  lbu         $a3, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1967F0u;
        goto label_1967f0;
    }
    ctx->pc = 0x1967E8u;
    {
        const bool branch_taken_0x1967e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1967ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1967E8u;
        // 0x1967ec: 0x90870002  lbu         $a3, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1967e8) {
            ctx->pc = 0x196810u;
            { ctx->pc = 0x196810; return; }
        }
    }
    ctx->pc = 0x1967F0u;
label_1967f0:
    // 0x1967f0: 0x310c3  sra         $v0, $v1, 3
    ctx->pc = 0x1967f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
label_1967f4:
    // 0x1967f4: 0x61a00  sll         $v1, $a2, 8
    ctx->pc = 0x1967f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1967f8:
    // 0x1967f8: 0x23400  sll         $a2, $v0, 16
    ctx->pc = 0x1967f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1967fc:
    // 0x1967fc: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1967fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_196800:
    // 0x196800: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x196800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
label_196804:
    // 0x196804: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x196804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_196808:
    // 0x196808: 0x1000000b  b           . + 4 + (0xB << 2)
label_19680c:
    if (ctx->pc == 0x19680Cu) {
        ctx->pc = 0x19680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196808u;
        // 0x19680c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196810u;
        { ctx->pc = 0x196810; return; }
    }
    ctx->pc = 0x196808u;
    {
        const bool branch_taken_0x196808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196808u;
        // 0x19680c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196808) {
            ctx->pc = 0x196838u;
            { ctx->pc = 0x196838; return; }
        }
    }
    ctx->pc = 0x196810u;
    ctx->pc = 0x196810u;
    return;
}
