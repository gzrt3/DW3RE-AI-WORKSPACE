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

// Function: FUN_001e9120
// Address: 0x1e9120 - 0x2291f4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_001e9120_part93(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x215fe0u: goto label_215fe0;
        case 0x215fe4u: goto label_215fe4;
        case 0x215fe8u: goto label_215fe8;
        case 0x215fecu: goto label_215fec;
        case 0x215ff0u: goto label_215ff0;
        case 0x215ff4u: goto label_215ff4;
        case 0x215ff8u: goto label_215ff8;
        case 0x215ffcu: goto label_215ffc;
        case 0x216000u: goto label_216000;
        case 0x216004u: goto label_216004;
        case 0x216008u: goto label_216008;
        case 0x21600cu: goto label_21600c;
        case 0x216010u: goto label_216010;
        case 0x216014u: goto label_216014;
        case 0x216018u: goto label_216018;
        case 0x21601cu: goto label_21601c;
        case 0x216020u: goto label_216020;
        case 0x216024u: goto label_216024;
        case 0x216028u: goto label_216028;
        case 0x21602cu: goto label_21602c;
        case 0x216030u: goto label_216030;
        case 0x216034u: goto label_216034;
        case 0x216038u: goto label_216038;
        case 0x21603cu: goto label_21603c;
        case 0x216040u: goto label_216040;
        case 0x216044u: goto label_216044;
        case 0x216048u: goto label_216048;
        case 0x21604cu: goto label_21604c;
        case 0x216050u: goto label_216050;
        case 0x216054u: goto label_216054;
        case 0x216058u: goto label_216058;
        case 0x21605cu: goto label_21605c;
        case 0x216060u: goto label_216060;
        case 0x216064u: goto label_216064;
        case 0x216068u: goto label_216068;
        case 0x21606cu: goto label_21606c;
        case 0x216070u: goto label_216070;
        case 0x216074u: goto label_216074;
        case 0x216078u: goto label_216078;
        case 0x21607cu: goto label_21607c;
        case 0x216080u: goto label_216080;
        case 0x216084u: goto label_216084;
        case 0x216088u: goto label_216088;
        case 0x21608cu: goto label_21608c;
        case 0x216090u: goto label_216090;
        case 0x216094u: goto label_216094;
        case 0x216098u: goto label_216098;
        case 0x21609cu: goto label_21609c;
        case 0x2160a0u: goto label_2160a0;
        case 0x2160a4u: goto label_2160a4;
        case 0x2160a8u: goto label_2160a8;
        case 0x2160acu: goto label_2160ac;
        case 0x2160b0u: goto label_2160b0;
        case 0x2160b4u: goto label_2160b4;
        case 0x2160b8u: goto label_2160b8;
        case 0x2160bcu: goto label_2160bc;
        case 0x2160c0u: goto label_2160c0;
        case 0x2160c4u: goto label_2160c4;
        case 0x2160c8u: goto label_2160c8;
        case 0x2160ccu: goto label_2160cc;
        case 0x2160d0u: goto label_2160d0;
        case 0x2160d4u: goto label_2160d4;
        case 0x2160d8u: goto label_2160d8;
        case 0x2160dcu: goto label_2160dc;
        case 0x2160e0u: goto label_2160e0;
        case 0x2160e4u: goto label_2160e4;
        case 0x2160e8u: goto label_2160e8;
        case 0x2160ecu: goto label_2160ec;
        case 0x2160f0u: goto label_2160f0;
        case 0x2160f4u: goto label_2160f4;
        case 0x2160f8u: goto label_2160f8;
        case 0x2160fcu: goto label_2160fc;
        case 0x216100u: goto label_216100;
        case 0x216104u: goto label_216104;
        case 0x216108u: goto label_216108;
        case 0x21610cu: goto label_21610c;
        case 0x216110u: goto label_216110;
        case 0x216114u: goto label_216114;
        case 0x216118u: goto label_216118;
        case 0x21611cu: goto label_21611c;
        case 0x216120u: goto label_216120;
        case 0x216124u: goto label_216124;
        case 0x216128u: goto label_216128;
        case 0x21612cu: goto label_21612c;
        case 0x216130u: goto label_216130;
        case 0x216134u: goto label_216134;
        case 0x216138u: goto label_216138;
        case 0x21613cu: goto label_21613c;
        case 0x216140u: goto label_216140;
        case 0x216144u: goto label_216144;
        case 0x216148u: goto label_216148;
        case 0x21614cu: goto label_21614c;
        case 0x216150u: goto label_216150;
        case 0x216154u: goto label_216154;
        case 0x216158u: goto label_216158;
        case 0x21615cu: goto label_21615c;
        case 0x216160u: goto label_216160;
        case 0x216164u: goto label_216164;
        case 0x216168u: goto label_216168;
        case 0x21616cu: goto label_21616c;
        case 0x216170u: goto label_216170;
        case 0x216174u: goto label_216174;
        case 0x216178u: goto label_216178;
        case 0x21617cu: goto label_21617c;
        case 0x216180u: goto label_216180;
        case 0x216184u: goto label_216184;
        case 0x216188u: goto label_216188;
        case 0x21618cu: goto label_21618c;
        case 0x216190u: goto label_216190;
        case 0x216194u: goto label_216194;
        case 0x216198u: goto label_216198;
        case 0x21619cu: goto label_21619c;
        case 0x2161a0u: goto label_2161a0;
        case 0x2161a4u: goto label_2161a4;
        case 0x2161a8u: goto label_2161a8;
        case 0x2161acu: goto label_2161ac;
        case 0x2161b0u: goto label_2161b0;
        case 0x2161b4u: goto label_2161b4;
        case 0x2161b8u: goto label_2161b8;
        case 0x2161bcu: goto label_2161bc;
        case 0x2161c0u: goto label_2161c0;
        case 0x2161c4u: goto label_2161c4;
        case 0x2161c8u: goto label_2161c8;
        case 0x2161ccu: goto label_2161cc;
        case 0x2161d0u: goto label_2161d0;
        case 0x2161d4u: goto label_2161d4;
        case 0x2161d8u: goto label_2161d8;
        case 0x2161dcu: goto label_2161dc;
        case 0x2161e0u: goto label_2161e0;
        case 0x2161e4u: goto label_2161e4;
        case 0x2161e8u: goto label_2161e8;
        case 0x2161ecu: goto label_2161ec;
        case 0x2161f0u: goto label_2161f0;
        case 0x2161f4u: goto label_2161f4;
        case 0x2161f8u: goto label_2161f8;
        case 0x2161fcu: goto label_2161fc;
        case 0x216200u: goto label_216200;
        case 0x216204u: goto label_216204;
        case 0x216208u: goto label_216208;
        case 0x21620cu: goto label_21620c;
        case 0x216210u: goto label_216210;
        case 0x216214u: goto label_216214;
        case 0x216218u: goto label_216218;
        case 0x21621cu: goto label_21621c;
        case 0x216220u: goto label_216220;
        case 0x216224u: goto label_216224;
        case 0x216228u: goto label_216228;
        case 0x21622cu: goto label_21622c;
        case 0x216230u: goto label_216230;
        case 0x216234u: goto label_216234;
        case 0x216238u: goto label_216238;
        case 0x21623cu: goto label_21623c;
        case 0x216240u: goto label_216240;
        case 0x216244u: goto label_216244;
        case 0x216248u: goto label_216248;
        case 0x21624cu: goto label_21624c;
        case 0x216250u: goto label_216250;
        case 0x216254u: goto label_216254;
        case 0x216258u: goto label_216258;
        case 0x21625cu: goto label_21625c;
        case 0x216260u: goto label_216260;
        case 0x216264u: goto label_216264;
        case 0x216268u: goto label_216268;
        case 0x21626cu: goto label_21626c;
        case 0x216270u: goto label_216270;
        case 0x216274u: goto label_216274;
        case 0x216278u: goto label_216278;
        case 0x21627cu: goto label_21627c;
        case 0x216280u: goto label_216280;
        case 0x216284u: goto label_216284;
        case 0x216288u: goto label_216288;
        case 0x21628cu: goto label_21628c;
        case 0x216290u: goto label_216290;
        case 0x216294u: goto label_216294;
        case 0x216298u: goto label_216298;
        case 0x21629cu: goto label_21629c;
        case 0x2162a0u: goto label_2162a0;
        case 0x2162a4u: goto label_2162a4;
        case 0x2162a8u: goto label_2162a8;
        case 0x2162acu: goto label_2162ac;
        case 0x2162b0u: goto label_2162b0;
        case 0x2162b4u: goto label_2162b4;
        case 0x2162b8u: goto label_2162b8;
        case 0x2162bcu: goto label_2162bc;
        case 0x2162c0u: goto label_2162c0;
        case 0x2162c4u: goto label_2162c4;
        case 0x2162c8u: goto label_2162c8;
        case 0x2162ccu: goto label_2162cc;
        case 0x2162d0u: goto label_2162d0;
        case 0x2162d4u: goto label_2162d4;
        case 0x2162d8u: goto label_2162d8;
        case 0x2162dcu: goto label_2162dc;
        case 0x2162e0u: goto label_2162e0;
        case 0x2162e4u: goto label_2162e4;
        case 0x2162e8u: goto label_2162e8;
        case 0x2162ecu: goto label_2162ec;
        case 0x2162f0u: goto label_2162f0;
        case 0x2162f4u: goto label_2162f4;
        case 0x2162f8u: goto label_2162f8;
        case 0x2162fcu: goto label_2162fc;
        case 0x216300u: goto label_216300;
        case 0x216304u: goto label_216304;
        case 0x216308u: goto label_216308;
        case 0x21630cu: goto label_21630c;
        case 0x216310u: goto label_216310;
        case 0x216314u: goto label_216314;
        case 0x216318u: goto label_216318;
        case 0x21631cu: goto label_21631c;
        case 0x216320u: goto label_216320;
        case 0x216324u: goto label_216324;
        case 0x216328u: goto label_216328;
        case 0x21632cu: goto label_21632c;
        case 0x216330u: goto label_216330;
        case 0x216334u: goto label_216334;
        case 0x216338u: goto label_216338;
        case 0x21633cu: goto label_21633c;
        case 0x216340u: goto label_216340;
        case 0x216344u: goto label_216344;
        case 0x216348u: goto label_216348;
        case 0x21634cu: goto label_21634c;
        case 0x216350u: goto label_216350;
        case 0x216354u: goto label_216354;
        case 0x216358u: goto label_216358;
        case 0x21635cu: goto label_21635c;
        case 0x216360u: goto label_216360;
        case 0x216364u: goto label_216364;
        case 0x216368u: goto label_216368;
        case 0x21636cu: goto label_21636c;
        case 0x216370u: goto label_216370;
        case 0x216374u: goto label_216374;
        case 0x216378u: goto label_216378;
        case 0x21637cu: goto label_21637c;
        case 0x216380u: goto label_216380;
        case 0x216384u: goto label_216384;
        case 0x216388u: goto label_216388;
        case 0x21638cu: goto label_21638c;
        case 0x216390u: goto label_216390;
        case 0x216394u: goto label_216394;
        case 0x216398u: goto label_216398;
        case 0x21639cu: goto label_21639c;
        case 0x2163a0u: goto label_2163a0;
        case 0x2163a4u: goto label_2163a4;
        case 0x2163a8u: goto label_2163a8;
        case 0x2163acu: goto label_2163ac;
        case 0x2163b0u: goto label_2163b0;
        case 0x2163b4u: goto label_2163b4;
        case 0x2163b8u: goto label_2163b8;
        case 0x2163bcu: goto label_2163bc;
        case 0x2163c0u: goto label_2163c0;
        case 0x2163c4u: goto label_2163c4;
        case 0x2163c8u: goto label_2163c8;
        case 0x2163ccu: goto label_2163cc;
        case 0x2163d0u: goto label_2163d0;
        case 0x2163d4u: goto label_2163d4;
        case 0x2163d8u: goto label_2163d8;
        case 0x2163dcu: goto label_2163dc;
        case 0x2163e0u: goto label_2163e0;
        case 0x2163e4u: goto label_2163e4;
        case 0x2163e8u: goto label_2163e8;
        case 0x2163ecu: goto label_2163ec;
        case 0x2163f0u: goto label_2163f0;
        case 0x2163f4u: goto label_2163f4;
        case 0x2163f8u: goto label_2163f8;
        case 0x2163fcu: goto label_2163fc;
        case 0x216400u: goto label_216400;
        case 0x216404u: goto label_216404;
        case 0x216408u: goto label_216408;
        case 0x21640cu: goto label_21640c;
        case 0x216410u: goto label_216410;
        case 0x216414u: goto label_216414;
        case 0x216418u: goto label_216418;
        case 0x21641cu: goto label_21641c;
        case 0x216420u: goto label_216420;
        case 0x216424u: goto label_216424;
        case 0x216428u: goto label_216428;
        case 0x21642cu: goto label_21642c;
        case 0x216430u: goto label_216430;
        case 0x216434u: goto label_216434;
        case 0x216438u: goto label_216438;
        case 0x21643cu: goto label_21643c;
        case 0x216440u: goto label_216440;
        case 0x216444u: goto label_216444;
        case 0x216448u: goto label_216448;
        case 0x21644cu: goto label_21644c;
        case 0x216450u: goto label_216450;
        case 0x216454u: goto label_216454;
        case 0x216458u: goto label_216458;
        case 0x21645cu: goto label_21645c;
        case 0x216460u: goto label_216460;
        case 0x216464u: goto label_216464;
        case 0x216468u: goto label_216468;
        case 0x21646cu: goto label_21646c;
        case 0x216470u: goto label_216470;
        case 0x216474u: goto label_216474;
        case 0x216478u: goto label_216478;
        case 0x21647cu: goto label_21647c;
        case 0x216480u: goto label_216480;
        case 0x216484u: goto label_216484;
        case 0x216488u: goto label_216488;
        case 0x21648cu: goto label_21648c;
        case 0x216490u: goto label_216490;
        case 0x216494u: goto label_216494;
        case 0x216498u: goto label_216498;
        case 0x21649cu: goto label_21649c;
        case 0x2164a0u: goto label_2164a0;
        case 0x2164a4u: goto label_2164a4;
        case 0x2164a8u: goto label_2164a8;
        case 0x2164acu: goto label_2164ac;
        case 0x2164b0u: goto label_2164b0;
        case 0x2164b4u: goto label_2164b4;
        case 0x2164b8u: goto label_2164b8;
        case 0x2164bcu: goto label_2164bc;
        case 0x2164c0u: goto label_2164c0;
        case 0x2164c4u: goto label_2164c4;
        case 0x2164c8u: goto label_2164c8;
        case 0x2164ccu: goto label_2164cc;
        case 0x2164d0u: goto label_2164d0;
        case 0x2164d4u: goto label_2164d4;
        case 0x2164d8u: goto label_2164d8;
        case 0x2164dcu: goto label_2164dc;
        case 0x2164e0u: goto label_2164e0;
        case 0x2164e4u: goto label_2164e4;
        case 0x2164e8u: goto label_2164e8;
        case 0x2164ecu: goto label_2164ec;
        case 0x2164f0u: goto label_2164f0;
        case 0x2164f4u: goto label_2164f4;
        case 0x2164f8u: goto label_2164f8;
        case 0x2164fcu: goto label_2164fc;
        case 0x216500u: goto label_216500;
        case 0x216504u: goto label_216504;
        case 0x216508u: goto label_216508;
        case 0x21650cu: goto label_21650c;
        case 0x216510u: goto label_216510;
        case 0x216514u: goto label_216514;
        case 0x216518u: goto label_216518;
        case 0x21651cu: goto label_21651c;
        case 0x216520u: goto label_216520;
        case 0x216524u: goto label_216524;
        case 0x216528u: goto label_216528;
        case 0x21652cu: goto label_21652c;
        case 0x216530u: goto label_216530;
        case 0x216534u: goto label_216534;
        case 0x216538u: goto label_216538;
        case 0x21653cu: goto label_21653c;
        case 0x216540u: goto label_216540;
        case 0x216544u: goto label_216544;
        case 0x216548u: goto label_216548;
        case 0x21654cu: goto label_21654c;
        case 0x216550u: goto label_216550;
        case 0x216554u: goto label_216554;
        case 0x216558u: goto label_216558;
        case 0x21655cu: goto label_21655c;
        case 0x216560u: goto label_216560;
        case 0x216564u: goto label_216564;
        case 0x216568u: goto label_216568;
        case 0x21656cu: goto label_21656c;
        case 0x216570u: goto label_216570;
        case 0x216574u: goto label_216574;
        case 0x216578u: goto label_216578;
        case 0x21657cu: goto label_21657c;
        case 0x216580u: goto label_216580;
        case 0x216584u: goto label_216584;
        case 0x216588u: goto label_216588;
        case 0x21658cu: goto label_21658c;
        case 0x216590u: goto label_216590;
        case 0x216594u: goto label_216594;
        case 0x216598u: goto label_216598;
        case 0x21659cu: goto label_21659c;
        case 0x2165a0u: goto label_2165a0;
        case 0x2165a4u: goto label_2165a4;
        case 0x2165a8u: goto label_2165a8;
        case 0x2165acu: goto label_2165ac;
        case 0x2165b0u: goto label_2165b0;
        case 0x2165b4u: goto label_2165b4;
        case 0x2165b8u: goto label_2165b8;
        case 0x2165bcu: goto label_2165bc;
        case 0x2165c0u: goto label_2165c0;
        case 0x2165c4u: goto label_2165c4;
        case 0x2165c8u: goto label_2165c8;
        case 0x2165ccu: goto label_2165cc;
        case 0x2165d0u: goto label_2165d0;
        case 0x2165d4u: goto label_2165d4;
        case 0x2165d8u: goto label_2165d8;
        case 0x2165dcu: goto label_2165dc;
        case 0x2165e0u: goto label_2165e0;
        case 0x2165e4u: goto label_2165e4;
        case 0x2165e8u: goto label_2165e8;
        case 0x2165ecu: goto label_2165ec;
        case 0x2165f0u: goto label_2165f0;
        case 0x2165f4u: goto label_2165f4;
        case 0x2165f8u: goto label_2165f8;
        case 0x2165fcu: goto label_2165fc;
        case 0x216600u: goto label_216600;
        case 0x216604u: goto label_216604;
        case 0x216608u: goto label_216608;
        case 0x21660cu: goto label_21660c;
        case 0x216610u: goto label_216610;
        case 0x216614u: goto label_216614;
        case 0x216618u: goto label_216618;
        case 0x21661cu: goto label_21661c;
        case 0x216620u: goto label_216620;
        case 0x216624u: goto label_216624;
        case 0x216628u: goto label_216628;
        case 0x21662cu: goto label_21662c;
        case 0x216630u: goto label_216630;
        case 0x216634u: goto label_216634;
        case 0x216638u: goto label_216638;
        case 0x21663cu: goto label_21663c;
        case 0x216640u: goto label_216640;
        case 0x216644u: goto label_216644;
        case 0x216648u: goto label_216648;
        case 0x21664cu: goto label_21664c;
        case 0x216650u: goto label_216650;
        case 0x216654u: goto label_216654;
        case 0x216658u: goto label_216658;
        case 0x21665cu: goto label_21665c;
        case 0x216660u: goto label_216660;
        case 0x216664u: goto label_216664;
        case 0x216668u: goto label_216668;
        case 0x21666cu: goto label_21666c;
        case 0x216670u: goto label_216670;
        case 0x216674u: goto label_216674;
        case 0x216678u: goto label_216678;
        case 0x21667cu: goto label_21667c;
        case 0x216680u: goto label_216680;
        case 0x216684u: goto label_216684;
        case 0x216688u: goto label_216688;
        case 0x21668cu: goto label_21668c;
        case 0x216690u: goto label_216690;
        case 0x216694u: goto label_216694;
        case 0x216698u: goto label_216698;
        case 0x21669cu: goto label_21669c;
        case 0x2166a0u: goto label_2166a0;
        case 0x2166a4u: goto label_2166a4;
        case 0x2166a8u: goto label_2166a8;
        case 0x2166acu: goto label_2166ac;
        case 0x2166b0u: goto label_2166b0;
        case 0x2166b4u: goto label_2166b4;
        case 0x2166b8u: goto label_2166b8;
        case 0x2166bcu: goto label_2166bc;
        case 0x2166c0u: goto label_2166c0;
        case 0x2166c4u: goto label_2166c4;
        case 0x2166c8u: goto label_2166c8;
        case 0x2166ccu: goto label_2166cc;
        case 0x2166d0u: goto label_2166d0;
        case 0x2166d4u: goto label_2166d4;
        case 0x2166d8u: goto label_2166d8;
        case 0x2166dcu: goto label_2166dc;
        case 0x2166e0u: goto label_2166e0;
        case 0x2166e4u: goto label_2166e4;
        case 0x2166e8u: goto label_2166e8;
        case 0x2166ecu: goto label_2166ec;
        case 0x2166f0u: goto label_2166f0;
        case 0x2166f4u: goto label_2166f4;
        case 0x2166f8u: goto label_2166f8;
        case 0x2166fcu: goto label_2166fc;
        case 0x216700u: goto label_216700;
        case 0x216704u: goto label_216704;
        case 0x216708u: goto label_216708;
        case 0x21670cu: goto label_21670c;
        case 0x216710u: goto label_216710;
        case 0x216714u: goto label_216714;
        case 0x216718u: goto label_216718;
        case 0x21671cu: goto label_21671c;
        case 0x216720u: goto label_216720;
        case 0x216724u: goto label_216724;
        case 0x216728u: goto label_216728;
        case 0x21672cu: goto label_21672c;
        case 0x216730u: goto label_216730;
        case 0x216734u: goto label_216734;
        case 0x216738u: goto label_216738;
        case 0x21673cu: goto label_21673c;
        case 0x216740u: goto label_216740;
        case 0x216744u: goto label_216744;
        case 0x216748u: goto label_216748;
        case 0x21674cu: goto label_21674c;
        case 0x216750u: goto label_216750;
        case 0x216754u: goto label_216754;
        case 0x216758u: goto label_216758;
        case 0x21675cu: goto label_21675c;
        case 0x216760u: goto label_216760;
        case 0x216764u: goto label_216764;
        case 0x216768u: goto label_216768;
        case 0x21676cu: goto label_21676c;
        case 0x216770u: goto label_216770;
        case 0x216774u: goto label_216774;
        case 0x216778u: goto label_216778;
        case 0x21677cu: goto label_21677c;
        case 0x216780u: goto label_216780;
        case 0x216784u: goto label_216784;
        case 0x216788u: goto label_216788;
        case 0x21678cu: goto label_21678c;
        case 0x216790u: goto label_216790;
        case 0x216794u: goto label_216794;
        case 0x216798u: goto label_216798;
        case 0x21679cu: goto label_21679c;
        case 0x2167a0u: goto label_2167a0;
        case 0x2167a4u: goto label_2167a4;
        case 0x2167a8u: goto label_2167a8;
        case 0x2167acu: goto label_2167ac;
        default: return;
    }

label_215fe0:
    // 0x215fe0: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x215fe0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_215fe4:
    // 0x215fe4: 0x29690010  slti        $t1, $t3, 0x10
    ctx->pc = 0x215fe4u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)16) ? 1 : 0);
label_215fe8:
    // 0x215fe8: 0x24e70030  addiu       $a3, $a3, 0x30
    ctx->pc = 0x215fe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
label_215fec:
    // 0x215fec: 0x1520ff8d  bnez        $t1, . + 4 + (-0x73 << 2)
label_215ff0:
    if (ctx->pc == 0x215FF0u) {
        ctx->pc = 0x215FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215FECu;
        // 0x215ff0: 0x2508000c  addiu       $t0, $t0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215FF4u;
        goto label_215ff4;
    }
    ctx->pc = 0x215FECu;
    {
        const bool branch_taken_0x215fec = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x215FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215FECu;
        // 0x215ff0: 0x2508000c  addiu       $t0, $t0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215fec) {
            ctx->pc = 0x215E24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x215e24; return; }
        }
    }
    ctx->pc = 0x215FF4u;
label_215ff4:
    // 0x215ff4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x215ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_215ff8:
    // 0x215ff8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x215ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_215ffc:
    // 0x215ffc: 0xac2082f0  sw          $zero, -0x7D10($at)
    ctx->pc = 0x215ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935280), GPR_U32(ctx, 0));
label_216000:
    // 0x216000: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x216000u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_216004:
    // 0x216004: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216008:
    // 0x216008: 0xac238310  sw          $v1, -0x7CF0($at)
    ctx->pc = 0x216008u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935312), GPR_U32(ctx, 3));
label_21600c:
    // 0x21600c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x21600cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_216010:
    // 0x216010: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216014:
    // 0x216014: 0xac238314  sw          $v1, -0x7CEC($at)
    ctx->pc = 0x216014u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935316), GPR_U32(ctx, 3));
label_216018:
    // 0x216018: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21601c:
    // 0x21601c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x21601cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_216020:
    // 0x216020: 0xac2082f4  sw          $zero, -0x7D0C($at)
    ctx->pc = 0x216020u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935284), GPR_U32(ctx, 0));
label_216024:
    // 0x216024: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216028:
    // 0x216028: 0xac23831c  sw          $v1, -0x7CE4($at)
    ctx->pc = 0x216028u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935324), GPR_U32(ctx, 3));
label_21602c:
    // 0x21602c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21602cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216030:
    // 0x216030: 0xac2082f8  sw          $zero, -0x7D08($at)
    ctx->pc = 0x216030u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935288), GPR_U32(ctx, 0));
label_216034:
    // 0x216034: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216038:
    // 0x216038: 0xac2482fc  sw          $a0, -0x7D04($at)
    ctx->pc = 0x216038u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935292), GPR_U32(ctx, 4));
label_21603c:
    // 0x21603c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21603cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216040:
    // 0x216040: 0xac208300  sw          $zero, -0x7D00($at)
    ctx->pc = 0x216040u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935296), GPR_U32(ctx, 0));
label_216044:
    // 0x216044: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216048:
    // 0x216048: 0xac208304  sw          $zero, -0x7CFC($at)
    ctx->pc = 0x216048u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935300), GPR_U32(ctx, 0));
label_21604c:
    // 0x21604c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21604cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216050:
    // 0x216050: 0xac208308  sw          $zero, -0x7CF8($at)
    ctx->pc = 0x216050u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935304), GPR_U32(ctx, 0));
label_216054:
    // 0x216054: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216058:
    // 0x216058: 0xac24830c  sw          $a0, -0x7CF4($at)
    ctx->pc = 0x216058u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935308), GPR_U32(ctx, 4));
label_21605c:
    // 0x21605c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21605cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216060:
    // 0x216060: 0xac248318  sw          $a0, -0x7CE8($at)
    ctx->pc = 0x216060u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935320), GPR_U32(ctx, 4));
label_216064:
    // 0x216064: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x216064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_216068:
    // 0x216068: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x216068u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_21606c:
    // 0x21606c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x21606cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_216070:
    // 0x216070: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x216070u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_216074:
    // 0x216074: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x216074u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_216078:
    // 0x216078: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x216078u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_21607c:
    // 0x21607c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21607cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_216080:
    // 0x216080: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x216080u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_216084:
    // 0x216084: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x216084u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_216088:
    // 0x216088: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x216088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_21608c:
    // 0x21608c: 0x3e00008  jr          $ra
label_216090:
    if (ctx->pc == 0x216090u) {
        ctx->pc = 0x216090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21608Cu;
        // 0x216090: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216094u;
        goto label_216094;
    }
    ctx->pc = 0x21608Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21608Cu;
        // 0x216090: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21608Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216094u;
label_216094:
    // 0x216094: 0x0  nop
    ctx->pc = 0x216094u;
    // NOP
label_216098:
    // 0x216098: 0x0  nop
    ctx->pc = 0x216098u;
    // NOP
label_21609c:
    // 0x21609c: 0x0  nop
    ctx->pc = 0x21609cu;
    // NOP
label_2160a0:
    // 0x2160a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2160a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2160a4:
    // 0x2160a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2160a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2160a8:
    // 0x2160a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2160a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2160ac:
    // 0x2160ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2160acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2160b0:
    // 0x2160b0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2160b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2160b4:
    // 0x2160b4: 0x8f849244  lw          $a0, -0x6DBC($gp)
    ctx->pc = 0x2160b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939204)));
label_2160b8:
    // 0x2160b8: 0x8f839240  lw          $v1, -0x6DC0($gp)
    ctx->pc = 0x2160b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939200)));
label_2160bc:
    // 0x2160bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2160bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2160c0:
    // 0x2160c0: 0x10600079  beqz        $v1, . + 4 + (0x79 << 2)
label_2160c4:
    if (ctx->pc == 0x2160C4u) {
        ctx->pc = 0x2160C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2160C0u;
        // 0x2160c4: 0xaf849244  sw          $a0, -0x6DBC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939204), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2160C8u;
        goto label_2160c8;
    }
    ctx->pc = 0x2160C0u;
    {
        const bool branch_taken_0x2160c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2160C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2160C0u;
        // 0x2160c4: 0xaf849244  sw          $a0, -0x6DBC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939204), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2160c0) {
            ctx->pc = 0x2162A8u;
            goto label_2162a8;
        }
    }
    ctx->pc = 0x2160C8u;
label_2160c8:
    // 0x2160c8: 0x8f829238  lw          $v0, -0x6DC8($gp)
    ctx->pc = 0x2160c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939192)));
label_2160cc:
    // 0x2160cc: 0xc780923c  lwc1        $f0, -0x6DC4($gp)
    ctx->pc = 0x2160ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2160d0:
    // 0x2160d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2160d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2160d4:
    // 0x2160d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2160d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2160d8:
    // 0x2160d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2160d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2160dc:
    // 0x2160dc: 0xaf829238  sw          $v0, -0x6DC8($gp)
    ctx->pc = 0x2160dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939192), GPR_U32(ctx, 2));
label_2160e0:
    // 0x2160e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2160e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2160e4:
    // 0x2160e4: 0xc7819238  lwc1        $f1, -0x6DC8($gp)
    ctx->pc = 0x2160e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2160e8:
    // 0x2160e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2160e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2160ec:
    // 0x2160ec: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x2160ecu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_2160f0:
    // 0x2160f0: 0x8f839234  lw          $v1, -0x6DCC($gp)
    ctx->pc = 0x2160f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939188)));
label_2160f4:
    // 0x2160f4: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
label_2160f8:
    if (ctx->pc == 0x2160F8u) {
        ctx->pc = 0x2160FCu;
        goto label_2160fc;
    }
    ctx->pc = 0x2160F4u;
    {
        const bool branch_taken_0x2160f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2160f4) {
            ctx->pc = 0x216138u;
            goto label_216138;
        }
    }
    ctx->pc = 0x2160FCu;
label_2160fc:
    // 0x2160fc: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x2160fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_216100:
    // 0x216100: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x216100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_216104:
    // 0x216104: 0x24638a70  addiu       $v1, $v1, -0x7590
    ctx->pc = 0x216104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937200));
label_216108:
    // 0x216108: 0x24428a50  addiu       $v0, $v0, -0x75B0
    ctx->pc = 0x216108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937168));
label_21610c:
    // 0x21610c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x21610cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_216110:
    // 0x216110: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x216110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_216114:
    // 0x216114: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x216114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_216118:
    // 0x216118: 0xc44d0000  lwc1        $f13, 0x0($v0)
    ctx->pc = 0x216118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_21611c:
    // 0x21611c: 0xc07b16c  jal         func_1EC5B0
label_216120:
    if (ctx->pc == 0x216120u) {
        ctx->pc = 0x216120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21611Cu;
        // 0x216120: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x216124u;
        goto label_216124;
    }
    ctx->pc = 0x21611Cu;
    SET_GPR_U32(ctx, 31, 0x216124u);
    ctx->pc = 0x216120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21611Cu;
    // 0x216120: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC5B0u;
    { ctx->pc = 0x1ec5b0; return; }
    ctx->pc = 0x216124u;
label_216124:
    // 0x216124: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x216124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_216128:
    // 0x216128: 0x24428a90  addiu       $v0, $v0, -0x7570
    ctx->pc = 0x216128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937232));
label_21612c:
    // 0x21612c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x21612cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_216130:
    // 0x216130: 0x10000021  b           . + 4 + (0x21 << 2)
label_216134:
    if (ctx->pc == 0x216134u) {
        ctx->pc = 0x216134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216130u;
        // 0x216134: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x216138u;
        goto label_216138;
    }
    ctx->pc = 0x216130u;
    {
        const bool branch_taken_0x216130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216130u;
        // 0x216134: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x216130) {
            ctx->pc = 0x2161B8u;
            goto label_2161b8;
        }
    }
    ctx->pc = 0x216138u;
label_216138:
    // 0x216138: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x216138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21613c:
    // 0x21613c: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_216140:
    if (ctx->pc == 0x216140u) {
        ctx->pc = 0x216144u;
        goto label_216144;
    }
    ctx->pc = 0x21613Cu;
    {
        const bool branch_taken_0x21613c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21613c) {
            ctx->pc = 0x216180u;
            goto label_216180;
        }
    }
    ctx->pc = 0x216144u;
label_216144:
    // 0x216144: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x216144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_216148:
    // 0x216148: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x216148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_21614c:
    // 0x21614c: 0x24638a70  addiu       $v1, $v1, -0x7590
    ctx->pc = 0x21614cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937200));
label_216150:
    // 0x216150: 0x24428a50  addiu       $v0, $v0, -0x75B0
    ctx->pc = 0x216150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937168));
label_216154:
    // 0x216154: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x216154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_216158:
    // 0x216158: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x216158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_21615c:
    // 0x21615c: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x21615cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_216160:
    // 0x216160: 0xc44d0000  lwc1        $f13, 0x0($v0)
    ctx->pc = 0x216160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_216164:
    // 0x216164: 0xc07b148  jal         func_1EC520
label_216168:
    if (ctx->pc == 0x216168u) {
        ctx->pc = 0x216168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216164u;
        // 0x216168: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21616Cu;
        goto label_21616c;
    }
    ctx->pc = 0x216164u;
    SET_GPR_U32(ctx, 31, 0x21616Cu);
    ctx->pc = 0x216168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216164u;
    // 0x216168: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC520u;
    { ctx->pc = 0x1ec520; return; }
    ctx->pc = 0x21616Cu;
label_21616c:
    // 0x21616c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x21616cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_216170:
    // 0x216170: 0x24428a90  addiu       $v0, $v0, -0x7570
    ctx->pc = 0x216170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937232));
label_216174:
    // 0x216174: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x216174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_216178:
    // 0x216178: 0x1000000f  b           . + 4 + (0xF << 2)
label_21617c:
    if (ctx->pc == 0x21617Cu) {
        ctx->pc = 0x21617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216178u;
        // 0x21617c: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x216180u;
        goto label_216180;
    }
    ctx->pc = 0x216178u;
    {
        const bool branch_taken_0x216178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216178u;
        // 0x21617c: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x216178) {
            ctx->pc = 0x2161B8u;
            goto label_2161b8;
        }
    }
    ctx->pc = 0x216180u;
label_216180:
    // 0x216180: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x216180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_216184:
    // 0x216184: 0x24428a70  addiu       $v0, $v0, -0x7590
    ctx->pc = 0x216184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937200));
label_216188:
    // 0x216188: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x216188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_21618c:
    // 0x21618c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x21618cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_216190:
    // 0x216190: 0x24428a50  addiu       $v0, $v0, -0x75B0
    ctx->pc = 0x216190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937168));
label_216194:
    // 0x216194: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x216194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_216198:
    // 0x216198: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x216198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_21619c:
    // 0x21619c: 0xc44d0000  lwc1        $f13, 0x0($v0)
    ctx->pc = 0x21619cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2161a0:
    // 0x2161a0: 0xc07b134  jal         func_1EC4D0
label_2161a4:
    if (ctx->pc == 0x2161A4u) {
        ctx->pc = 0x2161A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2161A0u;
        // 0x2161a4: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2161A8u;
        goto label_2161a8;
    }
    ctx->pc = 0x2161A0u;
    SET_GPR_U32(ctx, 31, 0x2161A8u);
    ctx->pc = 0x2161A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2161A0u;
    // 0x2161a4: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC4D0u;
    { ctx->pc = 0x1ec4d0; return; }
    ctx->pc = 0x2161A8u;
label_2161a8:
    // 0x2161a8: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2161a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_2161ac:
    // 0x2161ac: 0x24428a90  addiu       $v0, $v0, -0x7570
    ctx->pc = 0x2161acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937232));
label_2161b0:
    // 0x2161b0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2161b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2161b4:
    // 0x2161b4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2161b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2161b8:
    // 0x2161b8: 0x8f839230  lw          $v1, -0x6DD0($gp)
    ctx->pc = 0x2161b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939184)));
label_2161bc:
    // 0x2161bc: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
label_2161c0:
    if (ctx->pc == 0x2161C0u) {
        ctx->pc = 0x2161C4u;
        goto label_2161c4;
    }
    ctx->pc = 0x2161BCu;
    {
        const bool branch_taken_0x2161bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2161bc) {
            ctx->pc = 0x216200u;
            goto label_216200;
        }
    }
    ctx->pc = 0x2161C4u;
label_2161c4:
    // 0x2161c4: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x2161c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_2161c8:
    // 0x2161c8: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2161c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_2161cc:
    // 0x2161cc: 0x24638a60  addiu       $v1, $v1, -0x75A0
    ctx->pc = 0x2161ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937184));
label_2161d0:
    // 0x2161d0: 0x24428a40  addiu       $v0, $v0, -0x75C0
    ctx->pc = 0x2161d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937152));
label_2161d4:
    // 0x2161d4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2161d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_2161d8:
    // 0x2161d8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2161d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2161dc:
    // 0x2161dc: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x2161dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2161e0:
    // 0x2161e0: 0xc44d0000  lwc1        $f13, 0x0($v0)
    ctx->pc = 0x2161e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2161e4:
    // 0x2161e4: 0xc07b16c  jal         func_1EC5B0
label_2161e8:
    if (ctx->pc == 0x2161E8u) {
        ctx->pc = 0x2161E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2161E4u;
        // 0x2161e8: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2161ECu;
        goto label_2161ec;
    }
    ctx->pc = 0x2161E4u;
    SET_GPR_U32(ctx, 31, 0x2161ECu);
    ctx->pc = 0x2161E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2161E4u;
    // 0x2161e8: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC5B0u;
    { ctx->pc = 0x1ec5b0; return; }
    ctx->pc = 0x2161ECu;
label_2161ec:
    // 0x2161ec: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x2161ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_2161f0:
    // 0x2161f0: 0x24638a80  addiu       $v1, $v1, -0x7580
    ctx->pc = 0x2161f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937216));
label_2161f4:
    // 0x2161f4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2161f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_2161f8:
    // 0x2161f8: 0x10000021  b           . + 4 + (0x21 << 2)
label_2161fc:
    if (ctx->pc == 0x2161FCu) {
        ctx->pc = 0x2161FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2161F8u;
        // 0x2161fc: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x216200u;
        goto label_216200;
    }
    ctx->pc = 0x2161F8u;
    {
        const bool branch_taken_0x2161f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2161FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2161F8u;
        // 0x2161fc: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2161f8) {
            ctx->pc = 0x216280u;
            goto label_216280;
        }
    }
    ctx->pc = 0x216200u;
label_216200:
    // 0x216200: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x216200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_216204:
    // 0x216204: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_216208:
    if (ctx->pc == 0x216208u) {
        ctx->pc = 0x21620Cu;
        goto label_21620c;
    }
    ctx->pc = 0x216204u;
    {
        const bool branch_taken_0x216204 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x216204) {
            ctx->pc = 0x216248u;
            goto label_216248;
        }
    }
    ctx->pc = 0x21620Cu;
label_21620c:
    // 0x21620c: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x21620cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_216210:
    // 0x216210: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x216210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_216214:
    // 0x216214: 0x24638a60  addiu       $v1, $v1, -0x75A0
    ctx->pc = 0x216214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937184));
label_216218:
    // 0x216218: 0x24428a40  addiu       $v0, $v0, -0x75C0
    ctx->pc = 0x216218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937152));
label_21621c:
    // 0x21621c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x21621cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_216220:
    // 0x216220: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x216220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_216224:
    // 0x216224: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x216224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_216228:
    // 0x216228: 0xc44d0000  lwc1        $f13, 0x0($v0)
    ctx->pc = 0x216228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_21622c:
    // 0x21622c: 0xc07b148  jal         func_1EC520
label_216230:
    if (ctx->pc == 0x216230u) {
        ctx->pc = 0x216230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21622Cu;
        // 0x216230: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x216234u;
        goto label_216234;
    }
    ctx->pc = 0x21622Cu;
    SET_GPR_U32(ctx, 31, 0x216234u);
    ctx->pc = 0x216230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21622Cu;
    // 0x216230: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC520u;
    { ctx->pc = 0x1ec520; return; }
    ctx->pc = 0x216234u;
label_216234:
    // 0x216234: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x216234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_216238:
    // 0x216238: 0x24638a80  addiu       $v1, $v1, -0x7580
    ctx->pc = 0x216238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937216));
label_21623c:
    // 0x21623c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x21623cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_216240:
    // 0x216240: 0x1000000f  b           . + 4 + (0xF << 2)
label_216244:
    if (ctx->pc == 0x216244u) {
        ctx->pc = 0x216244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216240u;
        // 0x216244: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x216248u;
        goto label_216248;
    }
    ctx->pc = 0x216240u;
    {
        const bool branch_taken_0x216240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216240u;
        // 0x216244: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x216240) {
            ctx->pc = 0x216280u;
            goto label_216280;
        }
    }
    ctx->pc = 0x216248u;
label_216248:
    // 0x216248: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x216248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_21624c:
    // 0x21624c: 0x24428a60  addiu       $v0, $v0, -0x75A0
    ctx->pc = 0x21624cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937184));
label_216250:
    // 0x216250: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x216250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_216254:
    // 0x216254: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x216254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_216258:
    // 0x216258: 0x24428a40  addiu       $v0, $v0, -0x75C0
    ctx->pc = 0x216258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937152));
label_21625c:
    // 0x21625c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x21625cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_216260:
    // 0x216260: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x216260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_216264:
    // 0x216264: 0xc44d0000  lwc1        $f13, 0x0($v0)
    ctx->pc = 0x216264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_216268:
    // 0x216268: 0xc07b134  jal         func_1EC4D0
label_21626c:
    if (ctx->pc == 0x21626Cu) {
        ctx->pc = 0x21626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216268u;
        // 0x21626c: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x216270u;
        goto label_216270;
    }
    ctx->pc = 0x216268u;
    SET_GPR_U32(ctx, 31, 0x216270u);
    ctx->pc = 0x21626Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216268u;
    // 0x21626c: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC4D0u;
    { ctx->pc = 0x1ec4d0; return; }
    ctx->pc = 0x216270u;
label_216270:
    // 0x216270: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x216270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_216274:
    // 0x216274: 0x24638a80  addiu       $v1, $v1, -0x7580
    ctx->pc = 0x216274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937216));
label_216278:
    // 0x216278: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x216278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_21627c:
    // 0x21627c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x21627cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_216280:
    // 0x216280: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x216280u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_216284:
    // 0x216284: 0x2a030003  slti        $v1, $s0, 0x3
    ctx->pc = 0x216284u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_216288:
    // 0x216288: 0x1460ff99  bnez        $v1, . + 4 + (-0x67 << 2)
label_21628c:
    if (ctx->pc == 0x21628Cu) {
        ctx->pc = 0x21628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216288u;
        // 0x21628c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216290u;
        goto label_216290;
    }
    ctx->pc = 0x216288u;
    {
        const bool branch_taken_0x216288 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216288u;
        // 0x21628c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216288) {
            ctx->pc = 0x2160F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2160f0;
        }
    }
    ctx->pc = 0x216290u;
label_216290:
    // 0x216290: 0x8f849238  lw          $a0, -0x6DC8($gp)
    ctx->pc = 0x216290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939192)));
label_216294:
    // 0x216294: 0x8f83923c  lw          $v1, -0x6DC4($gp)
    ctx->pc = 0x216294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939196)));
label_216298:
    // 0x216298: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x216298u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_21629c:
    // 0x21629c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_2162a0:
    if (ctx->pc == 0x2162A0u) {
        ctx->pc = 0x2162A4u;
        goto label_2162a4;
    }
    ctx->pc = 0x21629Cu;
    {
        const bool branch_taken_0x21629c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21629c) {
            ctx->pc = 0x2162A8u;
            goto label_2162a8;
        }
    }
    ctx->pc = 0x2162A4u;
label_2162a4:
    // 0x2162a4: 0xaf809240  sw          $zero, -0x6DC0($gp)
    ctx->pc = 0x2162a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939200), GPR_U32(ctx, 0));
label_2162a8:
    // 0x2162a8: 0xc7819228  lwc1        $f1, -0x6DD8($gp)
    ctx->pc = 0x2162a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2162ac:
    // 0x2162ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2162acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2162b0:
    // 0x2162b0: 0x0  nop
    ctx->pc = 0x2162b0u;
    // NOP
label_2162b4:
    // 0x2162b4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2162b4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2162b8:
    // 0x2162b8: 0x0  nop
    ctx->pc = 0x2162b8u;
    // NOP
label_2162bc:
    // 0x2162bc: 0x45010024  bc1t        . + 4 + (0x24 << 2)
label_2162c0:
    if (ctx->pc == 0x2162C0u) {
        ctx->pc = 0x2162C4u;
        goto label_2162c4;
    }
    ctx->pc = 0x2162BCu;
    {
        const bool branch_taken_0x2162bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2162bc) {
            ctx->pc = 0x216350u;
            goto label_216350;
        }
    }
    ctx->pc = 0x2162C4u;
label_2162c4:
    // 0x2162c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2162c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2162c8:
    // 0x2162c8: 0x0  nop
    ctx->pc = 0x2162c8u;
    // NOP
label_2162cc:
    // 0x2162cc: 0x45010011  bc1t        . + 4 + (0x11 << 2)
label_2162d0:
    if (ctx->pc == 0x2162D0u) {
        ctx->pc = 0x2162D4u;
        goto label_2162d4;
    }
    ctx->pc = 0x2162CCu;
    {
        const bool branch_taken_0x2162cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2162cc) {
            ctx->pc = 0x216314u;
            goto label_216314;
        }
    }
    ctx->pc = 0x2162D4u;
label_2162d4:
    // 0x2162d4: 0xc780922c  lwc1        $f0, -0x6DD4($gp)
    ctx->pc = 0x2162d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2162d8:
    // 0x2162d8: 0xc7829224  lwc1        $f2, -0x6DDC($gp)
    ctx->pc = 0x2162d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2162dc:
    // 0x2162dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2162dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2162e0:
    // 0x2162e0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2162e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2162e4:
    // 0x2162e4: 0x0  nop
    ctx->pc = 0x2162e4u;
    // NOP
label_2162e8:
    // 0x2162e8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_2162ec:
    if (ctx->pc == 0x2162ECu) {
        ctx->pc = 0x2162F0u;
        goto label_2162f0;
    }
    ctx->pc = 0x2162E8u;
    {
        const bool branch_taken_0x2162e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2162e8) {
            ctx->pc = 0x2162F8u;
            goto label_2162f8;
        }
    }
    ctx->pc = 0x2162F0u;
label_2162f0:
    // 0x2162f0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2162f4:
    if (ctx->pc == 0x2162F4u) {
        ctx->pc = 0x2162F8u;
        goto label_2162f8;
    }
    ctx->pc = 0x2162F0u;
    {
        const bool branch_taken_0x2162f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2162f0) {
            ctx->pc = 0x2162FCu;
            goto label_2162fc;
        }
    }
    ctx->pc = 0x2162F8u;
label_2162f8:
    // 0x2162f8: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x2162f8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
label_2162fc:
    // 0x2162fc: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2162fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_216300:
    // 0x216300: 0x0  nop
    ctx->pc = 0x216300u;
    // NOP
label_216304:
    // 0x216304: 0x45010012  bc1t        . + 4 + (0x12 << 2)
label_216308:
    if (ctx->pc == 0x216308u) {
        ctx->pc = 0x216308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216304u;
        // 0x216308: 0xe780922c  swc1        $f0, -0x6DD4($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939180), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x21630Cu;
        goto label_21630c;
    }
    ctx->pc = 0x216304u;
    {
        const bool branch_taken_0x216304 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x216308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216304u;
        // 0x216308: 0xe780922c  swc1        $f0, -0x6DD4($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939180), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x216304) {
            ctx->pc = 0x216350u;
            goto label_216350;
        }
    }
    ctx->pc = 0x21630Cu;
label_21630c:
    // 0x21630c: 0x10000010  b           . + 4 + (0x10 << 2)
label_216310:
    if (ctx->pc == 0x216310u) {
        ctx->pc = 0x216310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21630Cu;
        // 0x216310: 0xaf809228  sw          $zero, -0x6DD8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216314u;
        goto label_216314;
    }
    ctx->pc = 0x21630Cu;
    {
        const bool branch_taken_0x21630c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21630Cu;
        // 0x216310: 0xaf809228  sw          $zero, -0x6DD8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21630c) {
            ctx->pc = 0x216350u;
            goto label_216350;
        }
    }
    ctx->pc = 0x216314u;
label_216314:
    // 0x216314: 0xc780922c  lwc1        $f0, -0x6DD4($gp)
    ctx->pc = 0x216314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_216318:
    // 0x216318: 0xc7829224  lwc1        $f2, -0x6DDC($gp)
    ctx->pc = 0x216318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_21631c:
    // 0x21631c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21631cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_216320:
    // 0x216320: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x216320u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_216324:
    // 0x216324: 0x0  nop
    ctx->pc = 0x216324u;
    // NOP
label_216328:
    // 0x216328: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_21632c:
    if (ctx->pc == 0x21632Cu) {
        ctx->pc = 0x216330u;
        goto label_216330;
    }
    ctx->pc = 0x216328u;
    {
        const bool branch_taken_0x216328 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x216328) {
            ctx->pc = 0x216338u;
            goto label_216338;
        }
    }
    ctx->pc = 0x216330u;
label_216330:
    // 0x216330: 0x10000002  b           . + 4 + (0x2 << 2)
label_216334:
    if (ctx->pc == 0x216334u) {
        ctx->pc = 0x216338u;
        goto label_216338;
    }
    ctx->pc = 0x216330u;
    {
        const bool branch_taken_0x216330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x216330) {
            ctx->pc = 0x21633Cu;
            goto label_21633c;
        }
    }
    ctx->pc = 0x216338u;
label_216338:
    // 0x216338: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x216338u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
label_21633c:
    // 0x21633c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x21633cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_216340:
    // 0x216340: 0x0  nop
    ctx->pc = 0x216340u;
    // NOP
label_216344:
    // 0x216344: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_216348:
    if (ctx->pc == 0x216348u) {
        ctx->pc = 0x216348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216344u;
        // 0x216348: 0xe780922c  swc1        $f0, -0x6DD4($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939180), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x21634Cu;
        goto label_21634c;
    }
    ctx->pc = 0x216344u;
    {
        const bool branch_taken_0x216344 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x216348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216344u;
        // 0x216348: 0xe780922c  swc1        $f0, -0x6DD4($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939180), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x216344) {
            ctx->pc = 0x216350u;
            goto label_216350;
        }
    }
    ctx->pc = 0x21634Cu;
label_21634c:
    // 0x21634c: 0xaf809228  sw          $zero, -0x6DD8($gp)
    ctx->pc = 0x21634cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939176), GPR_U32(ctx, 0));
label_216350:
    // 0x216350: 0xc781921c  lwc1        $f1, -0x6DE4($gp)
    ctx->pc = 0x216350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_216354:
    // 0x216354: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x216354u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_216358:
    // 0x216358: 0x0  nop
    ctx->pc = 0x216358u;
    // NOP
label_21635c:
    // 0x21635c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x21635cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_216360:
    // 0x216360: 0x0  nop
    ctx->pc = 0x216360u;
    // NOP
label_216364:
    // 0x216364: 0x45010024  bc1t        . + 4 + (0x24 << 2)
label_216368:
    if (ctx->pc == 0x216368u) {
        ctx->pc = 0x21636Cu;
        goto label_21636c;
    }
    ctx->pc = 0x216364u;
    {
        const bool branch_taken_0x216364 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x216364) {
            ctx->pc = 0x2163F8u;
            goto label_2163f8;
        }
    }
    ctx->pc = 0x21636Cu;
label_21636c:
    // 0x21636c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x21636cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_216370:
    // 0x216370: 0x0  nop
    ctx->pc = 0x216370u;
    // NOP
label_216374:
    // 0x216374: 0x45010011  bc1t        . + 4 + (0x11 << 2)
label_216378:
    if (ctx->pc == 0x216378u) {
        ctx->pc = 0x21637Cu;
        goto label_21637c;
    }
    ctx->pc = 0x216374u;
    {
        const bool branch_taken_0x216374 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x216374) {
            ctx->pc = 0x2163BCu;
            goto label_2163bc;
        }
    }
    ctx->pc = 0x21637Cu;
label_21637c:
    // 0x21637c: 0xc7809220  lwc1        $f0, -0x6DE0($gp)
    ctx->pc = 0x21637cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_216380:
    // 0x216380: 0xc7829218  lwc1        $f2, -0x6DE8($gp)
    ctx->pc = 0x216380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_216384:
    // 0x216384: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x216384u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_216388:
    // 0x216388: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x216388u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21638c:
    // 0x21638c: 0x0  nop
    ctx->pc = 0x21638cu;
    // NOP
label_216390:
    // 0x216390: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_216394:
    if (ctx->pc == 0x216394u) {
        ctx->pc = 0x216398u;
        goto label_216398;
    }
    ctx->pc = 0x216390u;
    {
        const bool branch_taken_0x216390 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x216390) {
            ctx->pc = 0x2163A0u;
            goto label_2163a0;
        }
    }
    ctx->pc = 0x216398u;
label_216398:
    // 0x216398: 0x10000002  b           . + 4 + (0x2 << 2)
label_21639c:
    if (ctx->pc == 0x21639Cu) {
        ctx->pc = 0x2163A0u;
        goto label_2163a0;
    }
    ctx->pc = 0x216398u;
    {
        const bool branch_taken_0x216398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x216398) {
            ctx->pc = 0x2163A4u;
            goto label_2163a4;
        }
    }
    ctx->pc = 0x2163A0u;
label_2163a0:
    // 0x2163a0: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x2163a0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
label_2163a4:
    // 0x2163a4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2163a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2163a8:
    // 0x2163a8: 0x0  nop
    ctx->pc = 0x2163a8u;
    // NOP
label_2163ac:
    // 0x2163ac: 0x45010012  bc1t        . + 4 + (0x12 << 2)
label_2163b0:
    if (ctx->pc == 0x2163B0u) {
        ctx->pc = 0x2163B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2163ACu;
        // 0x2163b0: 0xe7809220  swc1        $f0, -0x6DE0($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939168), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2163B4u;
        goto label_2163b4;
    }
    ctx->pc = 0x2163ACu;
    {
        const bool branch_taken_0x2163ac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2163B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2163ACu;
        // 0x2163b0: 0xe7809220  swc1        $f0, -0x6DE0($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2163ac) {
            ctx->pc = 0x2163F8u;
            goto label_2163f8;
        }
    }
    ctx->pc = 0x2163B4u;
label_2163b4:
    // 0x2163b4: 0x10000010  b           . + 4 + (0x10 << 2)
label_2163b8:
    if (ctx->pc == 0x2163B8u) {
        ctx->pc = 0x2163B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2163B4u;
        // 0x2163b8: 0xaf80921c  sw          $zero, -0x6DE4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939164), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2163BCu;
        goto label_2163bc;
    }
    ctx->pc = 0x2163B4u;
    {
        const bool branch_taken_0x2163b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2163B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2163B4u;
        // 0x2163b8: 0xaf80921c  sw          $zero, -0x6DE4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939164), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2163b4) {
            ctx->pc = 0x2163F8u;
            goto label_2163f8;
        }
    }
    ctx->pc = 0x2163BCu;
label_2163bc:
    // 0x2163bc: 0xc7809220  lwc1        $f0, -0x6DE0($gp)
    ctx->pc = 0x2163bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2163c0:
    // 0x2163c0: 0xc7829218  lwc1        $f2, -0x6DE8($gp)
    ctx->pc = 0x2163c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2163c4:
    // 0x2163c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2163c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2163c8:
    // 0x2163c8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2163c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2163cc:
    // 0x2163cc: 0x0  nop
    ctx->pc = 0x2163ccu;
    // NOP
label_2163d0:
    // 0x2163d0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2163d4:
    if (ctx->pc == 0x2163D4u) {
        ctx->pc = 0x2163D8u;
        goto label_2163d8;
    }
    ctx->pc = 0x2163D0u;
    {
        const bool branch_taken_0x2163d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2163d0) {
            ctx->pc = 0x2163E0u;
            goto label_2163e0;
        }
    }
    ctx->pc = 0x2163D8u;
label_2163d8:
    // 0x2163d8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2163dc:
    if (ctx->pc == 0x2163DCu) {
        ctx->pc = 0x2163E0u;
        goto label_2163e0;
    }
    ctx->pc = 0x2163D8u;
    {
        const bool branch_taken_0x2163d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2163d8) {
            ctx->pc = 0x2163E4u;
            goto label_2163e4;
        }
    }
    ctx->pc = 0x2163E0u;
label_2163e0:
    // 0x2163e0: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x2163e0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
label_2163e4:
    // 0x2163e4: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x2163e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2163e8:
    // 0x2163e8: 0x0  nop
    ctx->pc = 0x2163e8u;
    // NOP
label_2163ec:
    // 0x2163ec: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2163f0:
    if (ctx->pc == 0x2163F0u) {
        ctx->pc = 0x2163F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2163ECu;
        // 0x2163f0: 0xe7809220  swc1        $f0, -0x6DE0($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939168), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2163F4u;
        goto label_2163f4;
    }
    ctx->pc = 0x2163ECu;
    {
        const bool branch_taken_0x2163ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2163F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2163ECu;
        // 0x2163f0: 0xe7809220  swc1        $f0, -0x6DE0($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2163ec) {
            ctx->pc = 0x2163F8u;
            goto label_2163f8;
        }
    }
    ctx->pc = 0x2163F4u;
label_2163f4:
    // 0x2163f4: 0xaf80921c  sw          $zero, -0x6DE4($gp)
    ctx->pc = 0x2163f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939164), GPR_U32(ctx, 0));
label_2163f8:
    // 0x2163f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2163f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2163fc:
    // 0x2163fc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2163fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_216400:
    // 0x216400: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x216400u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_216404:
    // 0x216404: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x216404u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_216408:
    // 0x216408: 0x3e00008  jr          $ra
label_21640c:
    if (ctx->pc == 0x21640Cu) {
        ctx->pc = 0x21640Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216408u;
        // 0x21640c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216410u;
        goto label_216410;
    }
    ctx->pc = 0x216408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21640Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216408u;
        // 0x21640c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216410u;
label_216410:
    // 0x216410: 0x3e00008  jr          $ra
label_216414:
    if (ctx->pc == 0x216414u) {
        ctx->pc = 0x216414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216410u;
        // 0x216414: 0x8f829240  lw          $v0, -0x6DC0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216418u;
        goto label_216418;
    }
    ctx->pc = 0x216410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216410u;
        // 0x216414: 0x8f829240  lw          $v0, -0x6DC0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939200)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216418u;
label_216418:
    // 0x216418: 0x0  nop
    ctx->pc = 0x216418u;
    // NOP
label_21641c:
    // 0x21641c: 0x0  nop
    ctx->pc = 0x21641cu;
    // NOP
label_216420:
    // 0x216420: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x216420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_216424:
    // 0x216424: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x216424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_216428:
    // 0x216428: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x216428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_21642c:
    // 0x21642c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x21642cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_216430:
    // 0x216430: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x216430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_216434:
    // 0x216434: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x216434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_216438:
    // 0x216438: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x216438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_21643c:
    // 0x21643c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x21643cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_216440:
    // 0x216440: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x216440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_216444:
    // 0x216444: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x216444u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_216448:
    // 0x216448: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x216448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21644c:
    // 0x21644c: 0x10000005  b           . + 4 + (0x5 << 2)
label_216450:
    if (ctx->pc == 0x216450u) {
        ctx->pc = 0x216450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21644Cu;
        // 0x216450: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216454u;
        goto label_216454;
    }
    ctx->pc = 0x21644Cu;
    {
        const bool branch_taken_0x21644c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21644Cu;
        // 0x216450: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21644c) {
            ctx->pc = 0x216464u;
            goto label_216464;
        }
    }
    ctx->pc = 0x216454u;
label_216454:
    // 0x216454: 0xc4218a98  lwc1        $f1, -0x7568($at)
    ctx->pc = 0x216454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_216458:
    // 0x216458: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x216458u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_21645c:
    // 0x21645c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21645cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216460:
    // 0x216460: 0xe4218a98  swc1        $f1, -0x7568($at)
    ctx->pc = 0x216460u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937240), bits); }
label_216464:
    // 0x216464: 0x0  nop
    ctx->pc = 0x216464u;
    // NOP
label_216468:
    // 0x216468: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21646c:
    // 0x21646c: 0xc4218a98  lwc1        $f1, -0x7568($at)
    ctx->pc = 0x21646cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_216470:
    // 0x216470: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x216470u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_216474:
    // 0x216474: 0x0  nop
    ctx->pc = 0x216474u;
    // NOP
label_216478:
    // 0x216478: 0x4500fff6  bc1f        . + 4 + (-0xA << 2)
label_21647c:
    if (ctx->pc == 0x21647Cu) {
        ctx->pc = 0x21647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216478u;
        // 0x21647c: 0x3c010059  lui         $at, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216480u;
        goto label_216480;
    }
    ctx->pc = 0x216478u;
    {
        const bool branch_taken_0x216478 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216478u;
        // 0x21647c: 0x3c010059  lui         $at, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216478) {
            ctx->pc = 0x216454u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216454;
        }
    }
    ctx->pc = 0x216480u;
label_216480:
    // 0x216480: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x216480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_216484:
    // 0x216484: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x216484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_216488:
    // 0x216488: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x216488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_21648c:
    // 0x21648c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x21648cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_216490:
    // 0x216490: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x216490u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_216494:
    // 0x216494: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x216494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_216498:
    // 0x216498: 0x10000005  b           . + 4 + (0x5 << 2)
label_21649c:
    if (ctx->pc == 0x21649Cu) {
        ctx->pc = 0x2164A0u;
        goto label_2164a0;
    }
    ctx->pc = 0x216498u;
    {
        const bool branch_taken_0x216498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x216498) {
            ctx->pc = 0x2164B0u;
            goto label_2164b0;
        }
    }
    ctx->pc = 0x2164A0u;
label_2164a0:
    // 0x2164a0: 0xc4218a98  lwc1        $f1, -0x7568($at)
    ctx->pc = 0x2164a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2164a4:
    // 0x2164a4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2164a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2164a8:
    // 0x2164a8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2164a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2164ac:
    // 0x2164ac: 0xe4218a98  swc1        $f1, -0x7568($at)
    ctx->pc = 0x2164acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937240), bits); }
label_2164b0:
    // 0x2164b0: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2164b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2164b4:
    // 0x2164b4: 0xc42c8a98  lwc1        $f12, -0x7568($at)
    ctx->pc = 0x2164b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2164b8:
    // 0x2164b8: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x2164b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2164bc:
    // 0x2164bc: 0x0  nop
    ctx->pc = 0x2164bcu;
    // NOP
label_2164c0:
    // 0x2164c0: 0x4501fff7  bc1t        . + 4 + (-0x9 << 2)
label_2164c4:
    if (ctx->pc == 0x2164C4u) {
        ctx->pc = 0x2164C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2164C0u;
        // 0x2164c4: 0x3c010059  lui         $at, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2164C8u;
        goto label_2164c8;
    }
    ctx->pc = 0x2164C0u;
    {
        const bool branch_taken_0x2164c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2164C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2164C0u;
        // 0x2164c4: 0x3c010059  lui         $at, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2164c0) {
            ctx->pc = 0x2164A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2164a0;
        }
    }
    ctx->pc = 0x2164C8u;
label_2164c8:
    // 0x2164c8: 0xc06d4c0  jal         func_1B5300
label_2164cc:
    if (ctx->pc == 0x2164CCu) {
        ctx->pc = 0x2164D0u;
        goto label_2164d0;
    }
    ctx->pc = 0x2164C8u;
    SET_GPR_U32(ctx, 31, 0x2164D0u);
    ctx->pc = 0x1B5300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5300u, 0x2164C8u, 0x2164D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2164D0u;
label_2164d0:
    // 0x2164d0: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2164d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2164d4:
    // 0x2164d4: 0xc4248a90  lwc1        $f4, -0x7570($at)
    ctx->pc = 0x2164d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2164d8:
    // 0x2164d8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2164d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2164dc:
    // 0x2164dc: 0xc4238a80  lwc1        $f3, -0x7580($at)
    ctx->pc = 0x2164dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2164e0:
    // 0x2164e0: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2164e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_2164e4:
    // 0x2164e4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2164e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2164e8:
    // 0x2164e8: 0xc4228a94  lwc1        $f2, -0x756C($at)
    ctx->pc = 0x2164e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2164ec:
    // 0x2164ec: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x2164ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_2164f0:
    // 0x2164f0: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2164f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_2164f4:
    // 0x2164f4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2164f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2164f8:
    // 0x2164f8: 0xc4218a84  lwc1        $f1, -0x757C($at)
    ctx->pc = 0x2164f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2164fc:
    // 0x2164fc: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x2164fcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
label_216500:
    // 0x216500: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216504:
    // 0x216504: 0xc42c8a98  lwc1        $f12, -0x7568($at)
    ctx->pc = 0x216504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_216508:
    // 0x216508: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x216508u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_21650c:
    // 0x21650c: 0xc06d412  jal         func_1B5048
label_216510:
    if (ctx->pc == 0x216510u) {
        ctx->pc = 0x216510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21650Cu;
        // 0x216510: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x216514u;
        goto label_216514;
    }
    ctx->pc = 0x21650Cu;
    SET_GPR_U32(ctx, 31, 0x216514u);
    ctx->pc = 0x216510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21650Cu;
    // 0x216510: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5048u, 0x21650Cu, 0x216514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216514u;
label_216514:
    // 0x216514: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216518:
    // 0x216518: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x216518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_21651c:
    // 0x21651c: 0xc4228a90  lwc1        $f2, -0x7570($at)
    ctx->pc = 0x21651cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_216520:
    // 0x216520: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x216520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_216524:
    // 0x216524: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x216524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_216528:
    // 0x216528: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21652c:
    // 0x21652c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x21652cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_216530:
    // 0x216530: 0xc4218a88  lwc1        $f1, -0x7578($at)
    ctx->pc = 0x216530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_216534:
    // 0x216534: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x216534u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_216538:
    // 0x216538: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x216538u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_21653c:
    // 0x21653c: 0xc064580  jal         func_191600
label_216540:
    if (ctx->pc == 0x216540u) {
        ctx->pc = 0x216540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21653Cu;
        // 0x216540: 0xe7a000a8  swc1        $f0, 0xA8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x216544u;
        goto label_216544;
    }
    ctx->pc = 0x21653Cu;
    SET_GPR_U32(ctx, 31, 0x216544u);
    ctx->pc = 0x216540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21653Cu;
    // 0x216540: 0xe7a000a8  swc1        $f0, 0xA8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x191600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191600u, 0x21653Cu, 0x216544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216544u;
label_216544:
    // 0x216544: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x216544u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_216548:
    // 0x216548: 0xc064534  jal         func_1914D0
label_21654c:
    if (ctx->pc == 0x21654Cu) {
        ctx->pc = 0x21654Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216548u;
        // 0x21654c: 0x24848a80  addiu       $a0, $a0, -0x7580 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216550u;
        goto label_216550;
    }
    ctx->pc = 0x216548u;
    SET_GPR_U32(ctx, 31, 0x216550u);
    ctx->pc = 0x21654Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216548u;
    // 0x21654c: 0x24848a80  addiu       $a0, $a0, -0x7580 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1914D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1914D0u, 0x216548u, 0x216550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216550u;
label_216550:
    // 0x216550: 0xc064710  jal         func_191C40
label_216554:
    if (ctx->pc == 0x216554u) {
        ctx->pc = 0x216558u;
        goto label_216558;
    }
    ctx->pc = 0x216550u;
    SET_GPR_U32(ctx, 31, 0x216558u);
    ctx->pc = 0x191C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191C40u, 0x216550u, 0x216558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216558u;
label_216558:
    // 0x216558: 0xc05feb4  jal         func_17FAD0
label_21655c:
    if (ctx->pc == 0x21655Cu) {
        ctx->pc = 0x21655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216558u;
        // 0x21655c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216560u;
        goto label_216560;
    }
    ctx->pc = 0x216558u;
    SET_GPR_U32(ctx, 31, 0x216560u);
    ctx->pc = 0x21655Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216558u;
    // 0x21655c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FAD0u, 0x216558u, 0x216560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216560u;
label_216560:
    // 0x216560: 0xc066e44  jal         func_19B910
label_216564:
    if (ctx->pc == 0x216564u) {
        ctx->pc = 0x216564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216560u;
        // 0x216564: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216568u;
        goto label_216568;
    }
    ctx->pc = 0x216560u;
    SET_GPR_U32(ctx, 31, 0x216568u);
    ctx->pc = 0x216564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216560u;
    // 0x216564: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B910u, 0x216560u, 0x216568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216568u;
label_216568:
    // 0x216568: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x216568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_21656c:
    // 0x21656c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x21656cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_216570:
    // 0x216570: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x216570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_216574:
    // 0x216574: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x216574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_216578:
    // 0x216578: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x216578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_21657c:
    // 0x21657c: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x21657cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
label_216580:
    // 0x216580: 0xc064f38  jal         func_193CE0
label_216584:
    if (ctx->pc == 0x216584u) {
        ctx->pc = 0x216584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216580u;
        // 0x216584: 0xafa200bc  sw          $v0, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216588u;
        goto label_216588;
    }
    ctx->pc = 0x216580u;
    SET_GPR_U32(ctx, 31, 0x216588u);
    ctx->pc = 0x216584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216580u;
    // 0x216584: 0xafa200bc  sw          $v0, 0xBC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193CE0u, 0x216580u, 0x216588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216588u;
label_216588:
    // 0x216588: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x216588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_21658c:
    // 0x21658c: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x21658cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
label_216590:
    // 0x216590: 0x24c68ab0  addiu       $a2, $a2, -0x7550
    ctx->pc = 0x216590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937264));
label_216594:
    // 0x216594: 0xc066eea  jal         func_19BBA8
label_216598:
    if (ctx->pc == 0x216598u) {
        ctx->pc = 0x216598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216594u;
        // 0x216598: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21659Cu;
        goto label_21659c;
    }
    ctx->pc = 0x216594u;
    SET_GPR_U32(ctx, 31, 0x21659Cu);
    ctx->pc = 0x216598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216594u;
    // 0x216598: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BBA8u, 0x216594u, 0x21659Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21659Cu;
label_21659c:
    // 0x21659c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x21659cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2165a0:
    // 0x2165a0: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x2165a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
label_2165a4:
    // 0x2165a4: 0x24c68aa0  addiu       $a2, $a2, -0x7560
    ctx->pc = 0x2165a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937248));
label_2165a8:
    // 0x2165a8: 0xc066e1a  jal         func_19B868
label_2165ac:
    if (ctx->pc == 0x2165ACu) {
        ctx->pc = 0x2165ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2165A8u;
        // 0x2165ac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2165B0u;
        goto label_2165b0;
    }
    ctx->pc = 0x2165A8u;
    SET_GPR_U32(ctx, 31, 0x2165B0u);
    ctx->pc = 0x2165ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2165A8u;
    // 0x2165ac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B868u, 0x2165A8u, 0x2165B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2165B0u;
label_2165b0:
    // 0x2165b0: 0xc780922c  lwc1        $f0, -0x6DD4($gp)
    ctx->pc = 0x2165b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2165b4:
    // 0x2165b4: 0x8f869248  lw          $a2, -0x6DB8($gp)
    ctx->pc = 0x2165b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939208)));
label_2165b8:
    // 0x2165b8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2165b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2165bc:
    // 0x2165bc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2165bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2165c0:
    // 0x2165c0: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x2165c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_2165c4:
    // 0x2165c4: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2165c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_2165c8:
    // 0x2165c8: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2165c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_2165cc:
    // 0x2165cc: 0xc083b28  jal         func_20ECA0
label_2165d0:
    if (ctx->pc == 0x2165D0u) {
        ctx->pc = 0x2165D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2165CCu;
        // 0x2165d0: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2165D4u;
        goto label_2165d4;
    }
    ctx->pc = 0x2165CCu;
    SET_GPR_U32(ctx, 31, 0x2165D4u);
    ctx->pc = 0x2165D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2165CCu;
    // 0x2165d0: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x20ECA0u;
    { ctx->pc = 0x20eca0; return; }
    ctx->pc = 0x2165D4u;
label_2165d4:
    // 0x2165d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2165d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2165d8:
    // 0x2165d8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2165d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2165dc:
    // 0x2165dc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2165dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2165e0:
    // 0x2165e0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2165e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2165e4:
    // 0x2165e4: 0x0  nop
    ctx->pc = 0x2165e4u;
    // NOP
label_2165e8:
    // 0x2165e8: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2165e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_2165ec:
    // 0x2165ec: 0x24428680  addiu       $v0, $v0, -0x7980
    ctx->pc = 0x2165ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936192));
label_2165f0:
    // 0x2165f0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2165f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2165f4:
    // 0x2165f4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2165f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2165f8:
    // 0x2165f8: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x2165f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_2165fc:
    // 0x2165fc: 0xc0859ac  jal         func_2166B0
label_216600:
    if (ctx->pc == 0x216600u) {
        ctx->pc = 0x216600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2165FCu;
        // 0x216600: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216604u;
        goto label_216604;
    }
    ctx->pc = 0x2165FCu;
    SET_GPR_U32(ctx, 31, 0x216604u);
    ctx->pc = 0x216600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2165FCu;
    // 0x216600: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2166B0u;
    goto label_2166b0;
    ctx->pc = 0x216604u;
label_216604:
    // 0x216604: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x216604u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_216608:
    // 0x216608: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x216608u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
label_21660c:
    // 0x21660c: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_216610:
    if (ctx->pc == 0x216610u) {
        ctx->pc = 0x216610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21660Cu;
        // 0x216610: 0x26520030  addiu       $s2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216614u;
        goto label_216614;
    }
    ctx->pc = 0x21660Cu;
    {
        const bool branch_taken_0x21660c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21660Cu;
        // 0x216610: 0x26520030  addiu       $s2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21660c) {
            ctx->pc = 0x2165E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2165e4;
        }
    }
    ctx->pc = 0x216614u;
label_216614:
    // 0x216614: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x216614u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_216618:
    // 0x216618: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x216618u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_21661c:
    // 0x21661c: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_216620:
    if (ctx->pc == 0x216620u) {
        ctx->pc = 0x216620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21661Cu;
        // 0x216620: 0x267301e0  addiu       $s3, $s3, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216624u;
        goto label_216624;
    }
    ctx->pc = 0x21661Cu;
    {
        const bool branch_taken_0x21661c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21661Cu;
        // 0x216620: 0x267301e0  addiu       $s3, $s3, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21661c) {
            ctx->pc = 0x2165DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2165dc;
        }
    }
    ctx->pc = 0x216624u;
label_216624:
    // 0x216624: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x216624u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_216628:
    // 0x216628: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x216628u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21662c:
    // 0x21662c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x21662cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_216630:
    // 0x216630: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x216630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_216634:
    // 0x216634: 0x24428620  addiu       $v0, $v0, -0x79E0
    ctx->pc = 0x216634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936096));
label_216638:
    // 0x216638: 0xc0859ac  jal         func_2166B0
label_21663c:
    if (ctx->pc == 0x21663Cu) {
        ctx->pc = 0x21663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216638u;
        // 0x21663c: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216640u;
        goto label_216640;
    }
    ctx->pc = 0x216638u;
    SET_GPR_U32(ctx, 31, 0x216640u);
    ctx->pc = 0x21663Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216638u;
    // 0x21663c: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2166B0u;
    goto label_2166b0;
    ctx->pc = 0x216640u;
label_216640:
    // 0x216640: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x216640u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_216644:
    // 0x216644: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x216644u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_216648:
    // 0x216648: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_21664c:
    if (ctx->pc == 0x21664Cu) {
        ctx->pc = 0x21664Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216648u;
        // 0x21664c: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216650u;
        goto label_216650;
    }
    ctx->pc = 0x216648u;
    {
        const bool branch_taken_0x216648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21664Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216648u;
        // 0x21664c: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216648) {
            ctx->pc = 0x21662Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21662c;
        }
    }
    ctx->pc = 0x216650u;
label_216650:
    // 0x216650: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x216650u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_216654:
    // 0x216654: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x216654u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_216658:
    // 0x216658: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x216658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_21665c:
    // 0x21665c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x21665cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_216660:
    // 0x216660: 0x24428320  addiu       $v0, $v0, -0x7CE0
    ctx->pc = 0x216660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935328));
label_216664:
    // 0x216664: 0xc0859ac  jal         func_2166B0
label_216668:
    if (ctx->pc == 0x216668u) {
        ctx->pc = 0x216668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216664u;
        // 0x216668: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21666Cu;
        goto label_21666c;
    }
    ctx->pc = 0x216664u;
    SET_GPR_U32(ctx, 31, 0x21666Cu);
    ctx->pc = 0x216668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216664u;
    // 0x216668: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2166B0u;
    goto label_2166b0;
    ctx->pc = 0x21666Cu;
label_21666c:
    // 0x21666c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21666cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_216670:
    // 0x216670: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x216670u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
label_216674:
    // 0x216674: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_216678:
    if (ctx->pc == 0x216678u) {
        ctx->pc = 0x216678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216674u;
        // 0x216678: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21667Cu;
        goto label_21667c;
    }
    ctx->pc = 0x216674u;
    {
        const bool branch_taken_0x216674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216674u;
        // 0x216678: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216674) {
            ctx->pc = 0x216658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216658;
        }
    }
    ctx->pc = 0x21667Cu;
label_21667c:
    // 0x21667c: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x21667cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_216680:
    // 0x216680: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x216680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_216684:
    // 0x216684: 0xc0859ac  jal         func_2166B0
label_216688:
    if (ctx->pc == 0x216688u) {
        ctx->pc = 0x216688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216684u;
        // 0x216688: 0x248482f0  addiu       $a0, $a0, -0x7D10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21668Cu;
        goto label_21668c;
    }
    ctx->pc = 0x216684u;
    SET_GPR_U32(ctx, 31, 0x21668Cu);
    ctx->pc = 0x216688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216684u;
    // 0x216688: 0x248482f0  addiu       $a0, $a0, -0x7D10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2166B0u;
    goto label_2166b0;
    ctx->pc = 0x21668Cu;
label_21668c:
    // 0x21668c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x21668cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_216690:
    // 0x216690: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x216690u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_216694:
    // 0x216694: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x216694u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_216698:
    // 0x216698: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x216698u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21669c:
    // 0x21669c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21669cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2166a0:
    // 0x2166a0: 0x3e00008  jr          $ra
label_2166a4:
    if (ctx->pc == 0x2166A4u) {
        ctx->pc = 0x2166A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2166A0u;
        // 0x2166a4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2166A8u;
        goto label_2166a8;
    }
    ctx->pc = 0x2166A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2166A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2166A0u;
        // 0x2166a4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2166A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2166A8u;
label_2166a8:
    // 0x2166a8: 0x0  nop
    ctx->pc = 0x2166a8u;
    // NOP
label_2166ac:
    // 0x2166ac: 0x0  nop
    ctx->pc = 0x2166acu;
    // NOP
label_2166b0:
    // 0x2166b0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2166b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_2166b4:
    // 0x2166b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2166b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2166b8:
    // 0x2166b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2166b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2166bc:
    // 0x2166bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2166bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2166c0:
    // 0x2166c0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2166c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2166c4:
    // 0x2166c4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2166c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2166c8:
    // 0x2166c8: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x2166c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_2166cc:
    // 0x2166cc: 0x1060005c  beqz        $v1, . + 4 + (0x5C << 2)
label_2166d0:
    if (ctx->pc == 0x2166D0u) {
        ctx->pc = 0x2166D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2166CCu;
        // 0x2166d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2166D4u;
        goto label_2166d4;
    }
    ctx->pc = 0x2166CCu;
    {
        const bool branch_taken_0x2166cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2166D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2166CCu;
        // 0x2166d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2166cc) {
            ctx->pc = 0x216840u;
            { ctx->pc = 0x216840; return; }
        }
    }
    ctx->pc = 0x2166D4u;
label_2166d4:
    // 0x2166d4: 0x8f859248  lw          $a1, -0x6DB8($gp)
    ctx->pc = 0x2166d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939208)));
label_2166d8:
    // 0x2166d8: 0xc05eff8  jal         func_17BFE0
label_2166dc:
    if (ctx->pc == 0x2166DCu) {
        ctx->pc = 0x2166DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2166D8u;
        // 0x2166dc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2166E0u;
        goto label_2166e0;
    }
    ctx->pc = 0x2166D8u;
    SET_GPR_U32(ctx, 31, 0x2166E0u);
    ctx->pc = 0x2166DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2166D8u;
    // 0x2166dc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BFE0u, 0x2166D8u, 0x2166E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2166E0u;
label_2166e0:
    // 0x2166e0: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x2166e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_2166e4:
    // 0x2166e4: 0xc6140028  lwc1        $f20, 0x28($s0)
    ctx->pc = 0x2166e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2166e8:
    // 0x2166e8: 0xc066e44  jal         func_19B910
label_2166ec:
    if (ctx->pc == 0x2166ECu) {
        ctx->pc = 0x2166ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2166E8u;
        // 0x2166ec: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2166F0u;
        goto label_2166f0;
    }
    ctx->pc = 0x2166E8u;
    SET_GPR_U32(ctx, 31, 0x2166F0u);
    ctx->pc = 0x2166ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2166E8u;
    // 0x2166ec: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B910u, 0x2166E8u, 0x2166F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2166F0u;
label_2166f0:
    // 0x2166f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2166f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2166f4:
    // 0x2166f4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2166f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2166f8:
    // 0x2166f8: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x2166f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
label_2166fc:
    // 0x2166fc: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x2166fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_216700:
    // 0x216700: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x216700u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_216704:
    // 0x216704: 0xe7b400d4  swc1        $f20, 0xD4($sp)
    ctx->pc = 0x216704u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_216708:
    // 0x216708: 0xc064f38  jal         func_193CE0
label_21670c:
    if (ctx->pc == 0x21670Cu) {
        ctx->pc = 0x21670Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216708u;
        // 0x21670c: 0xe7b400d8  swc1        $f20, 0xD8($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x216710u;
        goto label_216710;
    }
    ctx->pc = 0x216708u;
    SET_GPR_U32(ctx, 31, 0x216710u);
    ctx->pc = 0x21670Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216708u;
    // 0x21670c: 0xe7b400d8  swc1        $f20, 0xD8($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x193CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193CE0u, 0x216708u, 0x216710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216710u;
label_216710:
    // 0x216710: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x216710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_216714:
    // 0x216714: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x216714u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_216718:
    // 0x216718: 0xc066eea  jal         func_19BBA8
label_21671c:
    if (ctx->pc == 0x21671Cu) {
        ctx->pc = 0x21671Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216718u;
        // 0x21671c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216720u;
        goto label_216720;
    }
    ctx->pc = 0x216718u;
    SET_GPR_U32(ctx, 31, 0x216720u);
    ctx->pc = 0x21671Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216718u;
    // 0x21671c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BBA8u, 0x216718u, 0x216720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216720u;
label_216720:
    // 0x216720: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x216720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_216724:
    // 0x216724: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x216724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_216728:
    // 0x216728: 0xc066e1a  jal         func_19B868
label_21672c:
    if (ctx->pc == 0x21672Cu) {
        ctx->pc = 0x21672Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216728u;
        // 0x21672c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216730u;
        goto label_216730;
    }
    ctx->pc = 0x216728u;
    SET_GPR_U32(ctx, 31, 0x216730u);
    ctx->pc = 0x21672Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216728u;
    // 0x21672c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B868u, 0x216728u, 0x216730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216730u;
label_216730:
    // 0x216730: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x216730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_216734:
    // 0x216734: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x216734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_216738:
    // 0x216738: 0xc066d86  jal         func_19B618
label_21673c:
    if (ctx->pc == 0x21673Cu) {
        ctx->pc = 0x21673Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216738u;
        // 0x21673c: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216740u;
        goto label_216740;
    }
    ctx->pc = 0x216738u;
    SET_GPR_U32(ctx, 31, 0x216740u);
    ctx->pc = 0x21673Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216738u;
    // 0x21673c: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B618u, 0x216738u, 0x216740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216740u;
label_216740:
    // 0x216740: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x216740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_216744:
    // 0x216744: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x216744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_216748:
    // 0x216748: 0x14620026  bne         $v1, $v0, . + 4 + (0x26 << 2)
label_21674c:
    if (ctx->pc == 0x21674Cu) {
        ctx->pc = 0x21674Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216748u;
        // 0x21674c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216750u;
        goto label_216750;
    }
    ctx->pc = 0x216748u;
    {
        const bool branch_taken_0x216748 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21674Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216748u;
        // 0x21674c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216748) {
            ctx->pc = 0x2167E4u;
            { ctx->pc = 0x2167e4; return; }
        }
    }
    ctx->pc = 0x216750u;
label_216750:
    // 0x216750: 0x8f839244  lw          $v1, -0x6DBC($gp)
    ctx->pc = 0x216750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939204)));
label_216754:
    // 0x216754: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x216754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_216758:
    // 0x216758: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x216758u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_21675c:
    // 0x21675c: 0x0  nop
    ctx->pc = 0x21675cu;
    // NOP
label_216760:
    // 0x216760: 0x0  nop
    ctx->pc = 0x216760u;
    // NOP
label_216764:
    // 0x216764: 0x1810  mfhi        $v1
    ctx->pc = 0x216764u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_216768:
    // 0x216768: 0x2861000c  slti        $at, $v1, 0xC
    ctx->pc = 0x216768u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
label_21676c:
    // 0x21676c: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_216770:
    if (ctx->pc == 0x216770u) {
        ctx->pc = 0x216774u;
        goto label_216774;
    }
    ctx->pc = 0x21676Cu;
    {
        const bool branch_taken_0x21676c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21676c) {
            ctx->pc = 0x21679Cu;
            goto label_21679c;
        }
    }
    ctx->pc = 0x216774u;
label_216774:
    // 0x216774: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x216774u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_216778:
    // 0x216778: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x216778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
label_21677c:
    // 0x21677c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21677cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_216780:
    // 0x216780: 0x0  nop
    ctx->pc = 0x216780u;
    // NOP
label_216784:
    // 0x216784: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x216784u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_216788:
    // 0x216788: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x216788u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_21678c:
    // 0x21678c: 0x0  nop
    ctx->pc = 0x21678cu;
    // NOP
label_216790:
    // 0x216790: 0x0  nop
    ctx->pc = 0x216790u;
    // NOP
label_216794:
    // 0x216794: 0x10000008  b           . + 4 + (0x8 << 2)
label_216798:
    if (ctx->pc == 0x216798u) {
        ctx->pc = 0x21679Cu;
        goto label_21679c;
    }
    ctx->pc = 0x216794u;
    {
        const bool branch_taken_0x216794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x216794) {
            ctx->pc = 0x2167B8u;
            { ctx->pc = 0x2167b8; return; }
        }
    }
    ctx->pc = 0x21679Cu;
label_21679c:
    // 0x21679c: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x21679cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2167a0:
    // 0x2167a0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2167a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2167a4:
    // 0x2167a4: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2167a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
label_2167a8:
    // 0x2167a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2167a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2167ac:
    // 0x2167ac: 0x0  nop
    ctx->pc = 0x2167acu;
    // NOP
    ctx->pc = 0x2167b0u;
    return;
}
