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

// Function: FUN_0017faa0
// Address: 0x17faa0 - 0x2bfb1c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017faa0_part305(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2141a0u: goto label_2141a0;
        case 0x2141a4u: goto label_2141a4;
        case 0x2141a8u: goto label_2141a8;
        case 0x2141acu: goto label_2141ac;
        case 0x2141b0u: goto label_2141b0;
        case 0x2141b4u: goto label_2141b4;
        case 0x2141b8u: goto label_2141b8;
        case 0x2141bcu: goto label_2141bc;
        case 0x2141c0u: goto label_2141c0;
        case 0x2141c4u: goto label_2141c4;
        case 0x2141c8u: goto label_2141c8;
        case 0x2141ccu: goto label_2141cc;
        case 0x2141d0u: goto label_2141d0;
        case 0x2141d4u: goto label_2141d4;
        case 0x2141d8u: goto label_2141d8;
        case 0x2141dcu: goto label_2141dc;
        case 0x2141e0u: goto label_2141e0;
        case 0x2141e4u: goto label_2141e4;
        case 0x2141e8u: goto label_2141e8;
        case 0x2141ecu: goto label_2141ec;
        case 0x2141f0u: goto label_2141f0;
        case 0x2141f4u: goto label_2141f4;
        case 0x2141f8u: goto label_2141f8;
        case 0x2141fcu: goto label_2141fc;
        case 0x214200u: goto label_214200;
        case 0x214204u: goto label_214204;
        case 0x214208u: goto label_214208;
        case 0x21420cu: goto label_21420c;
        case 0x214210u: goto label_214210;
        case 0x214214u: goto label_214214;
        case 0x214218u: goto label_214218;
        case 0x21421cu: goto label_21421c;
        case 0x214220u: goto label_214220;
        case 0x214224u: goto label_214224;
        case 0x214228u: goto label_214228;
        case 0x21422cu: goto label_21422c;
        case 0x214230u: goto label_214230;
        case 0x214234u: goto label_214234;
        case 0x214238u: goto label_214238;
        case 0x21423cu: goto label_21423c;
        case 0x214240u: goto label_214240;
        case 0x214244u: goto label_214244;
        case 0x214248u: goto label_214248;
        case 0x21424cu: goto label_21424c;
        case 0x214250u: goto label_214250;
        case 0x214254u: goto label_214254;
        case 0x214258u: goto label_214258;
        case 0x21425cu: goto label_21425c;
        case 0x214260u: goto label_214260;
        case 0x214264u: goto label_214264;
        case 0x214268u: goto label_214268;
        case 0x21426cu: goto label_21426c;
        case 0x214270u: goto label_214270;
        case 0x214274u: goto label_214274;
        case 0x214278u: goto label_214278;
        case 0x21427cu: goto label_21427c;
        case 0x214280u: goto label_214280;
        case 0x214284u: goto label_214284;
        case 0x214288u: goto label_214288;
        case 0x21428cu: goto label_21428c;
        case 0x214290u: goto label_214290;
        case 0x214294u: goto label_214294;
        case 0x214298u: goto label_214298;
        case 0x21429cu: goto label_21429c;
        case 0x2142a0u: goto label_2142a0;
        case 0x2142a4u: goto label_2142a4;
        case 0x2142a8u: goto label_2142a8;
        case 0x2142acu: goto label_2142ac;
        case 0x2142b0u: goto label_2142b0;
        case 0x2142b4u: goto label_2142b4;
        case 0x2142b8u: goto label_2142b8;
        case 0x2142bcu: goto label_2142bc;
        case 0x2142c0u: goto label_2142c0;
        case 0x2142c4u: goto label_2142c4;
        case 0x2142c8u: goto label_2142c8;
        case 0x2142ccu: goto label_2142cc;
        case 0x2142d0u: goto label_2142d0;
        case 0x2142d4u: goto label_2142d4;
        case 0x2142d8u: goto label_2142d8;
        case 0x2142dcu: goto label_2142dc;
        case 0x2142e0u: goto label_2142e0;
        case 0x2142e4u: goto label_2142e4;
        case 0x2142e8u: goto label_2142e8;
        case 0x2142ecu: goto label_2142ec;
        case 0x2142f0u: goto label_2142f0;
        case 0x2142f4u: goto label_2142f4;
        case 0x2142f8u: goto label_2142f8;
        case 0x2142fcu: goto label_2142fc;
        case 0x214300u: goto label_214300;
        case 0x214304u: goto label_214304;
        case 0x214308u: goto label_214308;
        case 0x21430cu: goto label_21430c;
        case 0x214310u: goto label_214310;
        case 0x214314u: goto label_214314;
        case 0x214318u: goto label_214318;
        case 0x21431cu: goto label_21431c;
        case 0x214320u: goto label_214320;
        case 0x214324u: goto label_214324;
        case 0x214328u: goto label_214328;
        case 0x21432cu: goto label_21432c;
        case 0x214330u: goto label_214330;
        case 0x214334u: goto label_214334;
        case 0x214338u: goto label_214338;
        case 0x21433cu: goto label_21433c;
        case 0x214340u: goto label_214340;
        case 0x214344u: goto label_214344;
        case 0x214348u: goto label_214348;
        case 0x21434cu: goto label_21434c;
        case 0x214350u: goto label_214350;
        case 0x214354u: goto label_214354;
        case 0x214358u: goto label_214358;
        case 0x21435cu: goto label_21435c;
        case 0x214360u: goto label_214360;
        case 0x214364u: goto label_214364;
        case 0x214368u: goto label_214368;
        case 0x21436cu: goto label_21436c;
        case 0x214370u: goto label_214370;
        case 0x214374u: goto label_214374;
        case 0x214378u: goto label_214378;
        case 0x21437cu: goto label_21437c;
        case 0x214380u: goto label_214380;
        case 0x214384u: goto label_214384;
        case 0x214388u: goto label_214388;
        case 0x21438cu: goto label_21438c;
        case 0x214390u: goto label_214390;
        case 0x214394u: goto label_214394;
        case 0x214398u: goto label_214398;
        case 0x21439cu: goto label_21439c;
        case 0x2143a0u: goto label_2143a0;
        case 0x2143a4u: goto label_2143a4;
        case 0x2143a8u: goto label_2143a8;
        case 0x2143acu: goto label_2143ac;
        case 0x2143b0u: goto label_2143b0;
        case 0x2143b4u: goto label_2143b4;
        case 0x2143b8u: goto label_2143b8;
        case 0x2143bcu: goto label_2143bc;
        case 0x2143c0u: goto label_2143c0;
        case 0x2143c4u: goto label_2143c4;
        case 0x2143c8u: goto label_2143c8;
        case 0x2143ccu: goto label_2143cc;
        case 0x2143d0u: goto label_2143d0;
        case 0x2143d4u: goto label_2143d4;
        case 0x2143d8u: goto label_2143d8;
        case 0x2143dcu: goto label_2143dc;
        case 0x2143e0u: goto label_2143e0;
        case 0x2143e4u: goto label_2143e4;
        case 0x2143e8u: goto label_2143e8;
        case 0x2143ecu: goto label_2143ec;
        case 0x2143f0u: goto label_2143f0;
        case 0x2143f4u: goto label_2143f4;
        case 0x2143f8u: goto label_2143f8;
        case 0x2143fcu: goto label_2143fc;
        case 0x214400u: goto label_214400;
        case 0x214404u: goto label_214404;
        case 0x214408u: goto label_214408;
        case 0x21440cu: goto label_21440c;
        case 0x214410u: goto label_214410;
        case 0x214414u: goto label_214414;
        case 0x214418u: goto label_214418;
        case 0x21441cu: goto label_21441c;
        case 0x214420u: goto label_214420;
        case 0x214424u: goto label_214424;
        case 0x214428u: goto label_214428;
        case 0x21442cu: goto label_21442c;
        case 0x214430u: goto label_214430;
        case 0x214434u: goto label_214434;
        case 0x214438u: goto label_214438;
        case 0x21443cu: goto label_21443c;
        case 0x214440u: goto label_214440;
        case 0x214444u: goto label_214444;
        case 0x214448u: goto label_214448;
        case 0x21444cu: goto label_21444c;
        case 0x214450u: goto label_214450;
        case 0x214454u: goto label_214454;
        case 0x214458u: goto label_214458;
        case 0x21445cu: goto label_21445c;
        case 0x214460u: goto label_214460;
        case 0x214464u: goto label_214464;
        case 0x214468u: goto label_214468;
        case 0x21446cu: goto label_21446c;
        case 0x214470u: goto label_214470;
        case 0x214474u: goto label_214474;
        case 0x214478u: goto label_214478;
        case 0x21447cu: goto label_21447c;
        case 0x214480u: goto label_214480;
        case 0x214484u: goto label_214484;
        case 0x214488u: goto label_214488;
        case 0x21448cu: goto label_21448c;
        case 0x214490u: goto label_214490;
        case 0x214494u: goto label_214494;
        case 0x214498u: goto label_214498;
        case 0x21449cu: goto label_21449c;
        case 0x2144a0u: goto label_2144a0;
        case 0x2144a4u: goto label_2144a4;
        case 0x2144a8u: goto label_2144a8;
        case 0x2144acu: goto label_2144ac;
        case 0x2144b0u: goto label_2144b0;
        case 0x2144b4u: goto label_2144b4;
        case 0x2144b8u: goto label_2144b8;
        case 0x2144bcu: goto label_2144bc;
        case 0x2144c0u: goto label_2144c0;
        case 0x2144c4u: goto label_2144c4;
        case 0x2144c8u: goto label_2144c8;
        case 0x2144ccu: goto label_2144cc;
        case 0x2144d0u: goto label_2144d0;
        case 0x2144d4u: goto label_2144d4;
        case 0x2144d8u: goto label_2144d8;
        case 0x2144dcu: goto label_2144dc;
        case 0x2144e0u: goto label_2144e0;
        case 0x2144e4u: goto label_2144e4;
        case 0x2144e8u: goto label_2144e8;
        case 0x2144ecu: goto label_2144ec;
        case 0x2144f0u: goto label_2144f0;
        case 0x2144f4u: goto label_2144f4;
        case 0x2144f8u: goto label_2144f8;
        case 0x2144fcu: goto label_2144fc;
        case 0x214500u: goto label_214500;
        case 0x214504u: goto label_214504;
        case 0x214508u: goto label_214508;
        case 0x21450cu: goto label_21450c;
        case 0x214510u: goto label_214510;
        case 0x214514u: goto label_214514;
        case 0x214518u: goto label_214518;
        case 0x21451cu: goto label_21451c;
        case 0x214520u: goto label_214520;
        case 0x214524u: goto label_214524;
        case 0x214528u: goto label_214528;
        case 0x21452cu: goto label_21452c;
        case 0x214530u: goto label_214530;
        case 0x214534u: goto label_214534;
        case 0x214538u: goto label_214538;
        case 0x21453cu: goto label_21453c;
        case 0x214540u: goto label_214540;
        case 0x214544u: goto label_214544;
        case 0x214548u: goto label_214548;
        case 0x21454cu: goto label_21454c;
        case 0x214550u: goto label_214550;
        case 0x214554u: goto label_214554;
        case 0x214558u: goto label_214558;
        case 0x21455cu: goto label_21455c;
        case 0x214560u: goto label_214560;
        case 0x214564u: goto label_214564;
        case 0x214568u: goto label_214568;
        case 0x21456cu: goto label_21456c;
        case 0x214570u: goto label_214570;
        case 0x214574u: goto label_214574;
        case 0x214578u: goto label_214578;
        case 0x21457cu: goto label_21457c;
        case 0x214580u: goto label_214580;
        case 0x214584u: goto label_214584;
        case 0x214588u: goto label_214588;
        case 0x21458cu: goto label_21458c;
        case 0x214590u: goto label_214590;
        case 0x214594u: goto label_214594;
        case 0x214598u: goto label_214598;
        case 0x21459cu: goto label_21459c;
        case 0x2145a0u: goto label_2145a0;
        case 0x2145a4u: goto label_2145a4;
        case 0x2145a8u: goto label_2145a8;
        case 0x2145acu: goto label_2145ac;
        case 0x2145b0u: goto label_2145b0;
        case 0x2145b4u: goto label_2145b4;
        case 0x2145b8u: goto label_2145b8;
        case 0x2145bcu: goto label_2145bc;
        case 0x2145c0u: goto label_2145c0;
        case 0x2145c4u: goto label_2145c4;
        case 0x2145c8u: goto label_2145c8;
        case 0x2145ccu: goto label_2145cc;
        case 0x2145d0u: goto label_2145d0;
        case 0x2145d4u: goto label_2145d4;
        case 0x2145d8u: goto label_2145d8;
        case 0x2145dcu: goto label_2145dc;
        case 0x2145e0u: goto label_2145e0;
        case 0x2145e4u: goto label_2145e4;
        case 0x2145e8u: goto label_2145e8;
        case 0x2145ecu: goto label_2145ec;
        case 0x2145f0u: goto label_2145f0;
        case 0x2145f4u: goto label_2145f4;
        case 0x2145f8u: goto label_2145f8;
        case 0x2145fcu: goto label_2145fc;
        case 0x214600u: goto label_214600;
        case 0x214604u: goto label_214604;
        case 0x214608u: goto label_214608;
        case 0x21460cu: goto label_21460c;
        case 0x214610u: goto label_214610;
        case 0x214614u: goto label_214614;
        case 0x214618u: goto label_214618;
        case 0x21461cu: goto label_21461c;
        case 0x214620u: goto label_214620;
        case 0x214624u: goto label_214624;
        case 0x214628u: goto label_214628;
        case 0x21462cu: goto label_21462c;
        case 0x214630u: goto label_214630;
        case 0x214634u: goto label_214634;
        case 0x214638u: goto label_214638;
        case 0x21463cu: goto label_21463c;
        case 0x214640u: goto label_214640;
        case 0x214644u: goto label_214644;
        case 0x214648u: goto label_214648;
        case 0x21464cu: goto label_21464c;
        case 0x214650u: goto label_214650;
        case 0x214654u: goto label_214654;
        case 0x214658u: goto label_214658;
        case 0x21465cu: goto label_21465c;
        case 0x214660u: goto label_214660;
        case 0x214664u: goto label_214664;
        case 0x214668u: goto label_214668;
        case 0x21466cu: goto label_21466c;
        case 0x214670u: goto label_214670;
        case 0x214674u: goto label_214674;
        case 0x214678u: goto label_214678;
        case 0x21467cu: goto label_21467c;
        case 0x214680u: goto label_214680;
        case 0x214684u: goto label_214684;
        case 0x214688u: goto label_214688;
        case 0x21468cu: goto label_21468c;
        case 0x214690u: goto label_214690;
        case 0x214694u: goto label_214694;
        case 0x214698u: goto label_214698;
        case 0x21469cu: goto label_21469c;
        case 0x2146a0u: goto label_2146a0;
        case 0x2146a4u: goto label_2146a4;
        case 0x2146a8u: goto label_2146a8;
        case 0x2146acu: goto label_2146ac;
        case 0x2146b0u: goto label_2146b0;
        case 0x2146b4u: goto label_2146b4;
        case 0x2146b8u: goto label_2146b8;
        case 0x2146bcu: goto label_2146bc;
        case 0x2146c0u: goto label_2146c0;
        case 0x2146c4u: goto label_2146c4;
        case 0x2146c8u: goto label_2146c8;
        case 0x2146ccu: goto label_2146cc;
        case 0x2146d0u: goto label_2146d0;
        case 0x2146d4u: goto label_2146d4;
        case 0x2146d8u: goto label_2146d8;
        case 0x2146dcu: goto label_2146dc;
        case 0x2146e0u: goto label_2146e0;
        case 0x2146e4u: goto label_2146e4;
        case 0x2146e8u: goto label_2146e8;
        case 0x2146ecu: goto label_2146ec;
        case 0x2146f0u: goto label_2146f0;
        case 0x2146f4u: goto label_2146f4;
        case 0x2146f8u: goto label_2146f8;
        case 0x2146fcu: goto label_2146fc;
        case 0x214700u: goto label_214700;
        case 0x214704u: goto label_214704;
        case 0x214708u: goto label_214708;
        case 0x21470cu: goto label_21470c;
        case 0x214710u: goto label_214710;
        case 0x214714u: goto label_214714;
        case 0x214718u: goto label_214718;
        case 0x21471cu: goto label_21471c;
        case 0x214720u: goto label_214720;
        case 0x214724u: goto label_214724;
        case 0x214728u: goto label_214728;
        case 0x21472cu: goto label_21472c;
        case 0x214730u: goto label_214730;
        case 0x214734u: goto label_214734;
        case 0x214738u: goto label_214738;
        case 0x21473cu: goto label_21473c;
        case 0x214740u: goto label_214740;
        case 0x214744u: goto label_214744;
        case 0x214748u: goto label_214748;
        case 0x21474cu: goto label_21474c;
        case 0x214750u: goto label_214750;
        case 0x214754u: goto label_214754;
        case 0x214758u: goto label_214758;
        case 0x21475cu: goto label_21475c;
        case 0x214760u: goto label_214760;
        case 0x214764u: goto label_214764;
        case 0x214768u: goto label_214768;
        case 0x21476cu: goto label_21476c;
        case 0x214770u: goto label_214770;
        case 0x214774u: goto label_214774;
        case 0x214778u: goto label_214778;
        case 0x21477cu: goto label_21477c;
        case 0x214780u: goto label_214780;
        case 0x214784u: goto label_214784;
        case 0x214788u: goto label_214788;
        case 0x21478cu: goto label_21478c;
        case 0x214790u: goto label_214790;
        case 0x214794u: goto label_214794;
        case 0x214798u: goto label_214798;
        case 0x21479cu: goto label_21479c;
        case 0x2147a0u: goto label_2147a0;
        case 0x2147a4u: goto label_2147a4;
        case 0x2147a8u: goto label_2147a8;
        case 0x2147acu: goto label_2147ac;
        case 0x2147b0u: goto label_2147b0;
        case 0x2147b4u: goto label_2147b4;
        case 0x2147b8u: goto label_2147b8;
        case 0x2147bcu: goto label_2147bc;
        case 0x2147c0u: goto label_2147c0;
        case 0x2147c4u: goto label_2147c4;
        case 0x2147c8u: goto label_2147c8;
        case 0x2147ccu: goto label_2147cc;
        case 0x2147d0u: goto label_2147d0;
        case 0x2147d4u: goto label_2147d4;
        case 0x2147d8u: goto label_2147d8;
        case 0x2147dcu: goto label_2147dc;
        case 0x2147e0u: goto label_2147e0;
        case 0x2147e4u: goto label_2147e4;
        case 0x2147e8u: goto label_2147e8;
        case 0x2147ecu: goto label_2147ec;
        case 0x2147f0u: goto label_2147f0;
        case 0x2147f4u: goto label_2147f4;
        case 0x2147f8u: goto label_2147f8;
        case 0x2147fcu: goto label_2147fc;
        case 0x214800u: goto label_214800;
        case 0x214804u: goto label_214804;
        case 0x214808u: goto label_214808;
        case 0x21480cu: goto label_21480c;
        case 0x214810u: goto label_214810;
        case 0x214814u: goto label_214814;
        case 0x214818u: goto label_214818;
        case 0x21481cu: goto label_21481c;
        case 0x214820u: goto label_214820;
        case 0x214824u: goto label_214824;
        case 0x214828u: goto label_214828;
        case 0x21482cu: goto label_21482c;
        case 0x214830u: goto label_214830;
        case 0x214834u: goto label_214834;
        case 0x214838u: goto label_214838;
        case 0x21483cu: goto label_21483c;
        case 0x214840u: goto label_214840;
        case 0x214844u: goto label_214844;
        case 0x214848u: goto label_214848;
        case 0x21484cu: goto label_21484c;
        case 0x214850u: goto label_214850;
        case 0x214854u: goto label_214854;
        case 0x214858u: goto label_214858;
        case 0x21485cu: goto label_21485c;
        case 0x214860u: goto label_214860;
        case 0x214864u: goto label_214864;
        case 0x214868u: goto label_214868;
        case 0x21486cu: goto label_21486c;
        case 0x214870u: goto label_214870;
        case 0x214874u: goto label_214874;
        case 0x214878u: goto label_214878;
        case 0x21487cu: goto label_21487c;
        case 0x214880u: goto label_214880;
        case 0x214884u: goto label_214884;
        case 0x214888u: goto label_214888;
        case 0x21488cu: goto label_21488c;
        case 0x214890u: goto label_214890;
        case 0x214894u: goto label_214894;
        case 0x214898u: goto label_214898;
        case 0x21489cu: goto label_21489c;
        case 0x2148a0u: goto label_2148a0;
        case 0x2148a4u: goto label_2148a4;
        case 0x2148a8u: goto label_2148a8;
        case 0x2148acu: goto label_2148ac;
        case 0x2148b0u: goto label_2148b0;
        case 0x2148b4u: goto label_2148b4;
        case 0x2148b8u: goto label_2148b8;
        case 0x2148bcu: goto label_2148bc;
        case 0x2148c0u: goto label_2148c0;
        case 0x2148c4u: goto label_2148c4;
        case 0x2148c8u: goto label_2148c8;
        case 0x2148ccu: goto label_2148cc;
        case 0x2148d0u: goto label_2148d0;
        case 0x2148d4u: goto label_2148d4;
        case 0x2148d8u: goto label_2148d8;
        case 0x2148dcu: goto label_2148dc;
        case 0x2148e0u: goto label_2148e0;
        case 0x2148e4u: goto label_2148e4;
        case 0x2148e8u: goto label_2148e8;
        case 0x2148ecu: goto label_2148ec;
        case 0x2148f0u: goto label_2148f0;
        case 0x2148f4u: goto label_2148f4;
        case 0x2148f8u: goto label_2148f8;
        case 0x2148fcu: goto label_2148fc;
        case 0x214900u: goto label_214900;
        case 0x214904u: goto label_214904;
        case 0x214908u: goto label_214908;
        case 0x21490cu: goto label_21490c;
        case 0x214910u: goto label_214910;
        case 0x214914u: goto label_214914;
        case 0x214918u: goto label_214918;
        case 0x21491cu: goto label_21491c;
        case 0x214920u: goto label_214920;
        case 0x214924u: goto label_214924;
        case 0x214928u: goto label_214928;
        case 0x21492cu: goto label_21492c;
        case 0x214930u: goto label_214930;
        case 0x214934u: goto label_214934;
        case 0x214938u: goto label_214938;
        case 0x21493cu: goto label_21493c;
        case 0x214940u: goto label_214940;
        case 0x214944u: goto label_214944;
        case 0x214948u: goto label_214948;
        case 0x21494cu: goto label_21494c;
        case 0x214950u: goto label_214950;
        case 0x214954u: goto label_214954;
        case 0x214958u: goto label_214958;
        case 0x21495cu: goto label_21495c;
        case 0x214960u: goto label_214960;
        case 0x214964u: goto label_214964;
        case 0x214968u: goto label_214968;
        case 0x21496cu: goto label_21496c;
        default: return;
    }

label_2141a0:
    // 0x2141a0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2141a0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2141a4:
    // 0x2141a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2141a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2141a8:
    // 0x2141a8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2141a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2141ac:
    // 0x2141ac: 0x3407def0  ori         $a3, $zero, 0xDEF0
    ctx->pc = 0x2141acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57072);
label_2141b0:
    // 0x2141b0: 0x3409def4  ori         $t1, $zero, 0xDEF4
    ctx->pc = 0x2141b0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57076);
label_2141b4:
    // 0x2141b4: 0x3406def8  ori         $a2, $zero, 0xDEF8
    ctx->pc = 0x2141b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57080);
label_2141b8:
    // 0x2141b8: 0x3408defc  ori         $t0, $zero, 0xDEFC
    ctx->pc = 0x2141b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57084);
label_2141bc:
    // 0x2141bc: 0x3405df00  ori         $a1, $zero, 0xDF00
    ctx->pc = 0x2141bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57088);
label_2141c0:
    // 0x2141c0: 0x340adf04  ori         $t2, $zero, 0xDF04
    ctx->pc = 0x2141c0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57092);
label_2141c4:
    // 0x2141c4: 0x8f8d91b0  lw          $t5, -0x6E50($gp)
    ctx->pc = 0x2141c4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_2141c8:
    // 0x2141c8: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x2141c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_2141cc:
    // 0x2141cc: 0x296c04a5  slti        $t4, $t3, 0x4A5
    ctx->pc = 0x2141ccu;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)1189) ? 1 : 0);
label_2141d0:
    // 0x2141d0: 0x1a46821  addu        $t5, $t5, $a0
    ctx->pc = 0x2141d0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
label_2141d4:
    // 0x2141d4: 0x1a76821  addu        $t5, $t5, $a3
    ctx->pc = 0x2141d4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
label_2141d8:
    // 0x2141d8: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x2141d8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
label_2141dc:
    // 0x2141dc: 0x8f8d91b0  lw          $t5, -0x6E50($gp)
    ctx->pc = 0x2141dcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_2141e0:
    // 0x2141e0: 0x1a46821  addu        $t5, $t5, $a0
    ctx->pc = 0x2141e0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
label_2141e4:
    // 0x2141e4: 0x1a96821  addu        $t5, $t5, $t1
    ctx->pc = 0x2141e4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 9)));
label_2141e8:
    // 0x2141e8: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x2141e8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
label_2141ec:
    // 0x2141ec: 0x8f8d91b0  lw          $t5, -0x6E50($gp)
    ctx->pc = 0x2141ecu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_2141f0:
    // 0x2141f0: 0x1a46821  addu        $t5, $t5, $a0
    ctx->pc = 0x2141f0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
label_2141f4:
    // 0x2141f4: 0x1a66821  addu        $t5, $t5, $a2
    ctx->pc = 0x2141f4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 6)));
label_2141f8:
    // 0x2141f8: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x2141f8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
label_2141fc:
    // 0x2141fc: 0x8f8d91b0  lw          $t5, -0x6E50($gp)
    ctx->pc = 0x2141fcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_214200:
    // 0x214200: 0x1a46821  addu        $t5, $t5, $a0
    ctx->pc = 0x214200u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
label_214204:
    // 0x214204: 0x1a86821  addu        $t5, $t5, $t0
    ctx->pc = 0x214204u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
label_214208:
    // 0x214208: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x214208u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
label_21420c:
    // 0x21420c: 0x8f8d91b0  lw          $t5, -0x6E50($gp)
    ctx->pc = 0x21420cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_214210:
    // 0x214210: 0x1a46821  addu        $t5, $t5, $a0
    ctx->pc = 0x214210u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
label_214214:
    // 0x214214: 0x1a56821  addu        $t5, $t5, $a1
    ctx->pc = 0x214214u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 5)));
label_214218:
    // 0x214218: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x214218u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
label_21421c:
    // 0x21421c: 0x8f8d91b0  lw          $t5, -0x6E50($gp)
    ctx->pc = 0x21421cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_214220:
    // 0x214220: 0x1a46821  addu        $t5, $t5, $a0
    ctx->pc = 0x214220u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
label_214224:
    // 0x214224: 0x1aa6821  addu        $t5, $t5, $t2
    ctx->pc = 0x214224u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 10)));
label_214228:
    // 0x214228: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x214228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
label_21422c:
    // 0x21422c: 0x1580ffe5  bnez        $t4, . + 4 + (-0x1B << 2)
label_214230:
    if (ctx->pc == 0x214230u) {
        ctx->pc = 0x214230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21422Cu;
        // 0x214230: 0xada30000  sw          $v1, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214234u;
        goto label_214234;
    }
    ctx->pc = 0x21422Cu;
    {
        const bool branch_taken_0x21422c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x214230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21422Cu;
        // 0x214230: 0xada30000  sw          $v1, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21422c) {
            ctx->pc = 0x2141C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2141c4;
        }
    }
    ctx->pc = 0x214234u;
label_214234:
    // 0x214234: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x214234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_214238:
    // 0x214238: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x214238u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21423c:
    // 0x21423c: 0x30850001  andi        $a1, $a0, 0x1
    ctx->pc = 0x21423cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_214240:
    // 0x214240: 0x10a00026  beqz        $a1, . + 4 + (0x26 << 2)
label_214244:
    if (ctx->pc == 0x214244u) {
        ctx->pc = 0x214248u;
        goto label_214248;
    }
    ctx->pc = 0x214240u;
    {
        const bool branch_taken_0x214240 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x214240) {
            ctx->pc = 0x2142DCu;
            goto label_2142dc;
        }
    }
    ctx->pc = 0x214248u;
label_214248:
    // 0x214248: 0x8f8791b0  lw          $a3, -0x6E50($gp)
    ctx->pc = 0x214248u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_21424c:
    // 0x21424c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x21424cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_214250:
    // 0x214250: 0xe32821  addu        $a1, $a3, $v1
    ctx->pc = 0x214250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_214254:
    // 0x214254: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x214254u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
label_214258:
    // 0x214258: 0x8c264e68  lw          $a2, 0x4E68($at)
    ctx->pc = 0x214258u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20072)));
label_21425c:
    // 0x21425c: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x21425cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_214260:
    // 0x214260: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x214260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_214264:
    // 0x214264: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x214264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_214268:
    // 0x214268: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x214268u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_21426c:
    // 0x21426c: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x21426cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_214270:
    // 0x214270: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x214270u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
label_214274:
    // 0x214274: 0xac24df00  sw          $a0, -0x2100($at)
    ctx->pc = 0x214274u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958848), GPR_U32(ctx, 4));
label_214278:
    // 0x214278: 0x8f8791b0  lw          $a3, -0x6E50($gp)
    ctx->pc = 0x214278u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_21427c:
    // 0x21427c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x21427cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_214280:
    // 0x214280: 0xe32821  addu        $a1, $a3, $v1
    ctx->pc = 0x214280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_214284:
    // 0x214284: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x214284u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
label_214288:
    // 0x214288: 0x8c264e6c  lw          $a2, 0x4E6C($at)
    ctx->pc = 0x214288u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20076)));
label_21428c:
    // 0x21428c: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x21428cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_214290:
    // 0x214290: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x214290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_214294:
    // 0x214294: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x214294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_214298:
    // 0x214298: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x214298u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_21429c:
    // 0x21429c: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x21429cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_2142a0:
    // 0x2142a0: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x2142a0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
label_2142a4:
    // 0x2142a4: 0xac24def8  sw          $a0, -0x2108($at)
    ctx->pc = 0x2142a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958840), GPR_U32(ctx, 4));
label_2142a8:
    // 0x2142a8: 0x8f8791b0  lw          $a3, -0x6E50($gp)
    ctx->pc = 0x2142a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_2142ac:
    // 0x2142ac: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2142acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2142b0:
    // 0x2142b0: 0xe32821  addu        $a1, $a3, $v1
    ctx->pc = 0x2142b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_2142b4:
    // 0x2142b4: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x2142b4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
label_2142b8:
    // 0x2142b8: 0x8c264e70  lw          $a2, 0x4E70($at)
    ctx->pc = 0x2142b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20080)));
label_2142bc:
    // 0x2142bc: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x2142bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_2142c0:
    // 0x2142c0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2142c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2142c4:
    // 0x2142c4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2142c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_2142c8:
    // 0x2142c8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2142c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2142cc:
    // 0x2142cc: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x2142ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_2142d0:
    // 0x2142d0: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x2142d0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
label_2142d4:
    // 0x2142d4: 0x10000026  b           . + 4 + (0x26 << 2)
label_2142d8:
    if (ctx->pc == 0x2142D8u) {
        ctx->pc = 0x2142D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2142D4u;
        // 0x2142d8: 0xac24def0  sw          $a0, -0x2110($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294958832), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2142DCu;
        goto label_2142dc;
    }
    ctx->pc = 0x2142D4u;
    {
        const bool branch_taken_0x2142d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2142D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2142D4u;
        // 0x2142d8: 0xac24def0  sw          $a0, -0x2110($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294958832), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2142d4) {
            ctx->pc = 0x214370u;
            goto label_214370;
        }
    }
    ctx->pc = 0x2142DCu;
label_2142dc:
    // 0x2142dc: 0x0  nop
    ctx->pc = 0x2142dcu;
    // NOP
label_2142e0:
    // 0x2142e0: 0x8f8791b0  lw          $a3, -0x6E50($gp)
    ctx->pc = 0x2142e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_2142e4:
    // 0x2142e4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2142e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2142e8:
    // 0x2142e8: 0xe32821  addu        $a1, $a3, $v1
    ctx->pc = 0x2142e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_2142ec:
    // 0x2142ec: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x2142ecu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
label_2142f0:
    // 0x2142f0: 0x8c264e68  lw          $a2, 0x4E68($at)
    ctx->pc = 0x2142f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20072)));
label_2142f4:
    // 0x2142f4: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x2142f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_2142f8:
    // 0x2142f8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2142f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2142fc:
    // 0x2142fc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2142fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_214300:
    // 0x214300: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x214300u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_214304:
    // 0x214304: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x214304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_214308:
    // 0x214308: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x214308u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
label_21430c:
    // 0x21430c: 0xac24defc  sw          $a0, -0x2104($at)
    ctx->pc = 0x21430cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958844), GPR_U32(ctx, 4));
label_214310:
    // 0x214310: 0x8f8791b0  lw          $a3, -0x6E50($gp)
    ctx->pc = 0x214310u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_214314:
    // 0x214314: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x214314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_214318:
    // 0x214318: 0xe32821  addu        $a1, $a3, $v1
    ctx->pc = 0x214318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_21431c:
    // 0x21431c: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x21431cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
label_214320:
    // 0x214320: 0x8c264e6c  lw          $a2, 0x4E6C($at)
    ctx->pc = 0x214320u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20076)));
label_214324:
    // 0x214324: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x214324u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_214328:
    // 0x214328: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x214328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_21432c:
    // 0x21432c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x21432cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_214330:
    // 0x214330: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x214330u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_214334:
    // 0x214334: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x214334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_214338:
    // 0x214338: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x214338u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
label_21433c:
    // 0x21433c: 0xac24def4  sw          $a0, -0x210C($at)
    ctx->pc = 0x21433cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958836), GPR_U32(ctx, 4));
label_214340:
    // 0x214340: 0x8f8791b0  lw          $a3, -0x6E50($gp)
    ctx->pc = 0x214340u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_214344:
    // 0x214344: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x214344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_214348:
    // 0x214348: 0xe32821  addu        $a1, $a3, $v1
    ctx->pc = 0x214348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_21434c:
    // 0x21434c: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x21434cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
label_214350:
    // 0x214350: 0x8c264e70  lw          $a2, 0x4E70($at)
    ctx->pc = 0x214350u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20080)));
label_214354:
    // 0x214354: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x214354u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_214358:
    // 0x214358: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x214358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_21435c:
    // 0x21435c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x21435cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_214360:
    // 0x214360: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x214360u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_214364:
    // 0x214364: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x214364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_214368:
    // 0x214368: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x214368u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
label_21436c:
    // 0x21436c: 0xac24df04  sw          $a0, -0x20FC($at)
    ctx->pc = 0x21436cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958852), GPR_U32(ctx, 4));
label_214370:
    // 0x214370: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x214370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_214374:
    // 0x214374: 0x288508c0  slti        $a1, $a0, 0x8C0
    ctx->pc = 0x214374u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2240) ? 1 : 0);
label_214378:
    // 0x214378: 0x14a0ffb0  bnez        $a1, . + 4 + (-0x50 << 2)
label_21437c:
    if (ctx->pc == 0x21437Cu) {
        ctx->pc = 0x21437Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214378u;
        // 0x21437c: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214380u;
        goto label_214380;
    }
    ctx->pc = 0x214378u;
    {
        const bool branch_taken_0x214378 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x21437Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214378u;
        // 0x21437c: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214378) {
            ctx->pc = 0x21423Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21423c;
        }
    }
    ctx->pc = 0x214380u;
label_214380:
    // 0x214380: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x214380u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_214384:
    // 0x214384: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x214384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_214388:
    // 0x214388: 0x3e00008  jr          $ra
label_21438c:
    if (ctx->pc == 0x21438Cu) {
        ctx->pc = 0x21438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214388u;
        // 0x21438c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214390u;
        goto label_214390;
    }
    ctx->pc = 0x214388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214388u;
        // 0x21438c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214390u;
label_214390:
    // 0x214390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x214390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_214394:
    // 0x214394: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x214394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_214398:
    // 0x214398: 0x8f8391cc  lw          $v1, -0x6E34($gp)
    ctx->pc = 0x214398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939084)));
label_21439c:
    // 0x21439c: 0x10600149  beqz        $v1, . + 4 + (0x149 << 2)
label_2143a0:
    if (ctx->pc == 0x2143A0u) {
        ctx->pc = 0x2143A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21439Cu;
        // 0x2143a0: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2143A4u;
        goto label_2143a4;
    }
    ctx->pc = 0x21439Cu;
    {
        const bool branch_taken_0x21439c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2143A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21439Cu;
        // 0x2143a0: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21439c) {
            ctx->pc = 0x2148C4u;
            goto label_2148c4;
        }
    }
    ctx->pc = 0x2143A4u;
label_2143a4:
    // 0x2143a4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x2143a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_2143a8:
    // 0x2143a8: 0x8c2b3ffc  lw          $t3, 0x3FFC($at)
    ctx->pc = 0x2143a8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_2143ac:
    // 0x2143ac: 0x3c090058  lui         $t1, 0x58
    ctx->pc = 0x2143acu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)88 << 16));
label_2143b0:
    // 0x2143b0: 0x8f8f9208  lw          $t7, -0x6DF8($gp)
    ctx->pc = 0x2143b0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939144)));
label_2143b4:
    // 0x2143b4: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x2143b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_2143b8:
    // 0x2143b8: 0x8f8c9200  lw          $t4, -0x6E00($gp)
    ctx->pc = 0x2143b8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939136)));
label_2143bc:
    // 0x2143bc: 0x25297930  addiu       $t1, $t1, 0x7930
    ctx->pc = 0x2143bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 31024));
label_2143c0:
    // 0x2143c0: 0x8f8d920c  lw          $t5, -0x6DF4($gp)
    ctx->pc = 0x2143c0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939148)));
label_2143c4:
    // 0x2143c4: 0x340affff  ori         $t2, $zero, 0xFFFF
    ctx->pc = 0x2143c4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2143c8:
    // 0x2143c8: 0x8f8e9204  lw          $t6, -0x6DFC($gp)
    ctx->pc = 0x2143c8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939140)));
label_2143cc:
    // 0x2143cc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2143ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2143d0:
    // 0x2143d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2143d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2143d4:
    // 0x2143d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2143d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2143d8:
    // 0x2143d8: 0xb10c0  sll         $v0, $t3, 3
    ctx->pc = 0x2143d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
label_2143dc:
    // 0x2143dc: 0xb2940  sll         $a1, $t3, 5
    ctx->pc = 0x2143dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 11), 5));
label_2143e0:
    // 0x2143e0: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x2143e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_2143e4:
    // 0x2143e4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2143e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2143e8:
    // 0x2143e8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2143e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2143ec:
    // 0x2143ec: 0xf2900  sll         $a1, $t7, 4
    ctx->pc = 0x2143ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
label_2143f0:
    // 0x2143f0: 0x4b5821  addu        $t3, $v0, $t3
    ctx->pc = 0x2143f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_2143f4:
    // 0x2143f4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2143f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2143f8:
    // 0x2143f8: 0x1ec1021  addu        $v0, $t7, $t4
    ctx->pc = 0x2143f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 12)));
label_2143fc:
    // 0x2143fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2143fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_214400:
    // 0x214400: 0xb6180  sll         $t4, $t3, 6
    ctx->pc = 0x214400u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 11), 6));
label_214404:
    // 0x214404: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x214404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_214408:
    // 0x214408: 0x24ab6c00  addiu       $t3, $a1, 0x6C00
    ctx->pc = 0x214408u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 27648));
label_21440c:
    // 0x21440c: 0x12c2821  addu        $a1, $t1, $t4
    ctx->pc = 0x21440cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_214410:
    // 0x214410: 0xd48c0  sll         $t1, $t5, 3
    ctx->pc = 0x214410u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
label_214414:
    // 0x214414: 0x244c6c00  addiu       $t4, $v0, 0x6C00
    ctx->pc = 0x214414u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_214418:
    // 0x214418: 0x25297900  addiu       $t1, $t1, 0x7900
    ctx->pc = 0x214418u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30976));
label_21441c:
    // 0x21441c: 0xa4ab0080  sh          $t3, 0x80($a1)
    ctx->pc = 0x21441cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 128), (uint16_t)GPR_U32(ctx, 11));
label_214420:
    // 0x214420: 0xa4a90082  sh          $t1, 0x82($a1)
    ctx->pc = 0x214420u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 130), (uint16_t)GPR_U32(ctx, 9));
label_214424:
    // 0x214424: 0x1ae1021  addu        $v0, $t5, $t6
    ctx->pc = 0x214424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
label_214428:
    // 0x214428: 0xacaa0084  sw          $t2, 0x84($a1)
    ctx->pc = 0x214428u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 10));
label_21442c:
    // 0x21442c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x21442cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_214430:
    // 0x214430: 0xa4ac0090  sh          $t4, 0x90($a1)
    ctx->pc = 0x214430u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 144), (uint16_t)GPR_U32(ctx, 12));
label_214434:
    // 0x214434: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x214434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_214438:
    // 0x214438: 0xa4a90092  sh          $t1, 0x92($a1)
    ctx->pc = 0x214438u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 146), (uint16_t)GPR_U32(ctx, 9));
label_21443c:
    // 0x21443c: 0xacaa0094  sw          $t2, 0x94($a1)
    ctx->pc = 0x21443cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 148), GPR_U32(ctx, 10));
label_214440:
    // 0x214440: 0xa4ab00a0  sh          $t3, 0xA0($a1)
    ctx->pc = 0x214440u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 160), (uint16_t)GPR_U32(ctx, 11));
label_214444:
    // 0x214444: 0xa4a200a2  sh          $v0, 0xA2($a1)
    ctx->pc = 0x214444u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 162), (uint16_t)GPR_U32(ctx, 2));
label_214448:
    // 0x214448: 0xacaa00a4  sw          $t2, 0xA4($a1)
    ctx->pc = 0x214448u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 164), GPR_U32(ctx, 10));
label_21444c:
    // 0x21444c: 0xa4ac00b0  sh          $t4, 0xB0($a1)
    ctx->pc = 0x21444cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 176), (uint16_t)GPR_U32(ctx, 12));
label_214450:
    // 0x214450: 0xa4a200b2  sh          $v0, 0xB2($a1)
    ctx->pc = 0x214450u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 178), (uint16_t)GPR_U32(ctx, 2));
label_214454:
    // 0x214454: 0xacaa00b4  sw          $t2, 0xB4($a1)
    ctx->pc = 0x214454u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 180), GPR_U32(ctx, 10));
label_214458:
    // 0x214458: 0x80227900  lb          $v0, 0x7900($at)
    ctx->pc = 0x214458u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30976)));
label_21445c:
    // 0x21445c: 0xa0a20078  sb          $v0, 0x78($a1)
    ctx->pc = 0x21445cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 120), (uint8_t)GPR_U32(ctx, 2));
label_214460:
    // 0x214460: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_214464:
    // 0x214464: 0x80227904  lb          $v0, 0x7904($at)
    ctx->pc = 0x214464u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30980)));
label_214468:
    // 0x214468: 0xa0a20079  sb          $v0, 0x79($a1)
    ctx->pc = 0x214468u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 121), (uint8_t)GPR_U32(ctx, 2));
label_21446c:
    // 0x21446c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21446cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_214470:
    // 0x214470: 0x80227908  lb          $v0, 0x7908($at)
    ctx->pc = 0x214470u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30984)));
label_214474:
    // 0x214474: 0xa0a2007a  sb          $v0, 0x7A($a1)
    ctx->pc = 0x214474u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 122), (uint8_t)GPR_U32(ctx, 2));
label_214478:
    // 0x214478: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_21447c:
    // 0x21447c: 0x8022790c  lb          $v0, 0x790C($at)
    ctx->pc = 0x21447cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30988)));
label_214480:
    // 0x214480: 0xa0a2007b  sb          $v0, 0x7B($a1)
    ctx->pc = 0x214480u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 123), (uint8_t)GPR_U32(ctx, 2));
label_214484:
    // 0x214484: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_214488:
    // 0x214488: 0xaca3007c  sw          $v1, 0x7C($a1)
    ctx->pc = 0x214488u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 124), GPR_U32(ctx, 3));
label_21448c:
    // 0x21448c: 0x80227900  lb          $v0, 0x7900($at)
    ctx->pc = 0x21448cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30976)));
label_214490:
    // 0x214490: 0xa0a20088  sb          $v0, 0x88($a1)
    ctx->pc = 0x214490u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 136), (uint8_t)GPR_U32(ctx, 2));
label_214494:
    // 0x214494: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_214498:
    // 0x214498: 0x80227904  lb          $v0, 0x7904($at)
    ctx->pc = 0x214498u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30980)));
label_21449c:
    // 0x21449c: 0xa0a20089  sb          $v0, 0x89($a1)
    ctx->pc = 0x21449cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 137), (uint8_t)GPR_U32(ctx, 2));
label_2144a0:
    // 0x2144a0: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2144a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2144a4:
    // 0x2144a4: 0x80227908  lb          $v0, 0x7908($at)
    ctx->pc = 0x2144a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30984)));
label_2144a8:
    // 0x2144a8: 0xa0a2008a  sb          $v0, 0x8A($a1)
    ctx->pc = 0x2144a8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 138), (uint8_t)GPR_U32(ctx, 2));
label_2144ac:
    // 0x2144ac: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2144acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2144b0:
    // 0x2144b0: 0x8022790c  lb          $v0, 0x790C($at)
    ctx->pc = 0x2144b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30988)));
label_2144b4:
    // 0x2144b4: 0xa0a2008b  sb          $v0, 0x8B($a1)
    ctx->pc = 0x2144b4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 139), (uint8_t)GPR_U32(ctx, 2));
label_2144b8:
    // 0x2144b8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2144b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2144bc:
    // 0x2144bc: 0xaca3008c  sw          $v1, 0x8C($a1)
    ctx->pc = 0x2144bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 140), GPR_U32(ctx, 3));
label_2144c0:
    // 0x2144c0: 0x80227900  lb          $v0, 0x7900($at)
    ctx->pc = 0x2144c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30976)));
label_2144c4:
    // 0x2144c4: 0xa0a20098  sb          $v0, 0x98($a1)
    ctx->pc = 0x2144c4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 152), (uint8_t)GPR_U32(ctx, 2));
label_2144c8:
    // 0x2144c8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2144c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2144cc:
    // 0x2144cc: 0x80227904  lb          $v0, 0x7904($at)
    ctx->pc = 0x2144ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30980)));
label_2144d0:
    // 0x2144d0: 0xa0a20099  sb          $v0, 0x99($a1)
    ctx->pc = 0x2144d0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 153), (uint8_t)GPR_U32(ctx, 2));
label_2144d4:
    // 0x2144d4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2144d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2144d8:
    // 0x2144d8: 0x80227908  lb          $v0, 0x7908($at)
    ctx->pc = 0x2144d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30984)));
label_2144dc:
    // 0x2144dc: 0xa0a2009a  sb          $v0, 0x9A($a1)
    ctx->pc = 0x2144dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 154), (uint8_t)GPR_U32(ctx, 2));
label_2144e0:
    // 0x2144e0: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2144e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2144e4:
    // 0x2144e4: 0x8022790c  lb          $v0, 0x790C($at)
    ctx->pc = 0x2144e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30988)));
label_2144e8:
    // 0x2144e8: 0xa0a2009b  sb          $v0, 0x9B($a1)
    ctx->pc = 0x2144e8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 155), (uint8_t)GPR_U32(ctx, 2));
label_2144ec:
    // 0x2144ec: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2144ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2144f0:
    // 0x2144f0: 0xaca3009c  sw          $v1, 0x9C($a1)
    ctx->pc = 0x2144f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 156), GPR_U32(ctx, 3));
label_2144f4:
    // 0x2144f4: 0x80227900  lb          $v0, 0x7900($at)
    ctx->pc = 0x2144f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30976)));
label_2144f8:
    // 0x2144f8: 0xa0a200a8  sb          $v0, 0xA8($a1)
    ctx->pc = 0x2144f8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 168), (uint8_t)GPR_U32(ctx, 2));
label_2144fc:
    // 0x2144fc: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2144fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_214500:
    // 0x214500: 0x80227904  lb          $v0, 0x7904($at)
    ctx->pc = 0x214500u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30980)));
label_214504:
    // 0x214504: 0xa0a200a9  sb          $v0, 0xA9($a1)
    ctx->pc = 0x214504u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 169), (uint8_t)GPR_U32(ctx, 2));
label_214508:
    // 0x214508: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_21450c:
    // 0x21450c: 0x80227908  lb          $v0, 0x7908($at)
    ctx->pc = 0x21450cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30984)));
label_214510:
    // 0x214510: 0xa0a200aa  sb          $v0, 0xAA($a1)
    ctx->pc = 0x214510u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 170), (uint8_t)GPR_U32(ctx, 2));
label_214514:
    // 0x214514: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_214518:
    // 0x214518: 0x8022790c  lb          $v0, 0x790C($at)
    ctx->pc = 0x214518u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30988)));
label_21451c:
    // 0x21451c: 0xa0a200ab  sb          $v0, 0xAB($a1)
    ctx->pc = 0x21451cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 171), (uint8_t)GPR_U32(ctx, 2));
label_214520:
    // 0x214520: 0xaca300ac  sw          $v1, 0xAC($a1)
    ctx->pc = 0x214520u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 172), GPR_U32(ctx, 3));
label_214524:
    // 0x214524: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x214524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_214528:
    // 0x214528: 0x244278f0  addiu       $v0, $v0, 0x78F0
    ctx->pc = 0x214528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30960));
label_21452c:
    // 0x21452c: 0x475821  addu        $t3, $v0, $a3
    ctx->pc = 0x21452cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_214530:
    // 0x214530: 0xa84821  addu        $t1, $a1, $t0
    ctx->pc = 0x214530u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_214534:
    // 0x214534: 0x8f8c91f8  lw          $t4, -0x6E08($gp)
    ctx->pc = 0x214534u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939128)));
label_214538:
    // 0x214538: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_21453c:
    // 0x21453c: 0x8d6d0000  lw          $t5, 0x0($t3)
    ctx->pc = 0x21453cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_214540:
    // 0x214540: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x214540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_214544:
    // 0x214544: 0x8d780004  lw          $t8, 0x4($t3)
    ctx->pc = 0x214544u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
label_214548:
    // 0x214548: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x214548u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_21454c:
    // 0x21454c: 0x8f9991fc  lw          $t9, -0x6E04($gp)
    ctx->pc = 0x21454cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939132)));
label_214550:
    // 0x214550: 0x250800b0  addiu       $t0, $t0, 0xB0
    ctx->pc = 0x214550u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 176));
label_214554:
    // 0x214554: 0x1ac6021  addu        $t4, $t5, $t4
    ctx->pc = 0x214554u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
label_214558:
    // 0x214558: 0xd6900  sll         $t5, $t5, 4
    ctx->pc = 0x214558u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
label_21455c:
    // 0x21455c: 0xc6100  sll         $t4, $t4, 4
    ctx->pc = 0x21455cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
label_214560:
    // 0x214560: 0x25ae6c00  addiu       $t6, $t5, 0x6C00
    ctx->pc = 0x214560u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), 27648));
label_214564:
    // 0x214564: 0x258f6c00  addiu       $t7, $t4, 0x6C00
    ctx->pc = 0x214564u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), 27648));
label_214568:
    // 0x214568: 0x1868c0  sll         $t5, $t8, 3
    ctx->pc = 0x214568u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 24), 3));
label_21456c:
    // 0x21456c: 0xa52e0130  sh          $t6, 0x130($t1)
    ctx->pc = 0x21456cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 304), (uint16_t)GPR_U32(ctx, 14));
label_214570:
    // 0x214570: 0x25ad7900  addiu       $t5, $t5, 0x7900
    ctx->pc = 0x214570u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 30976));
label_214574:
    // 0x214574: 0x3196021  addu        $t4, $t8, $t9
    ctx->pc = 0x214574u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 25)));
label_214578:
    // 0x214578: 0xa52d0132  sh          $t5, 0x132($t1)
    ctx->pc = 0x214578u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 306), (uint16_t)GPR_U32(ctx, 13));
label_21457c:
    // 0x21457c: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x21457cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
label_214580:
    // 0x214580: 0xad2a0134  sw          $t2, 0x134($t1)
    ctx->pc = 0x214580u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 308), GPR_U32(ctx, 10));
label_214584:
    // 0x214584: 0x258c7900  addiu       $t4, $t4, 0x7900
    ctx->pc = 0x214584u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 30976));
label_214588:
    // 0x214588: 0xa52f0140  sh          $t7, 0x140($t1)
    ctx->pc = 0x214588u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 320), (uint16_t)GPR_U32(ctx, 15));
label_21458c:
    // 0x21458c: 0x28cb0002  slti        $t3, $a2, 0x2
    ctx->pc = 0x21458cu;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_214590:
    // 0x214590: 0xa52d0142  sh          $t5, 0x142($t1)
    ctx->pc = 0x214590u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 322), (uint16_t)GPR_U32(ctx, 13));
label_214594:
    // 0x214594: 0xad2a0144  sw          $t2, 0x144($t1)
    ctx->pc = 0x214594u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 324), GPR_U32(ctx, 10));
label_214598:
    // 0x214598: 0xa52e0150  sh          $t6, 0x150($t1)
    ctx->pc = 0x214598u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 336), (uint16_t)GPR_U32(ctx, 14));
label_21459c:
    // 0x21459c: 0xa52c0152  sh          $t4, 0x152($t1)
    ctx->pc = 0x21459cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 338), (uint16_t)GPR_U32(ctx, 12));
label_2145a0:
    // 0x2145a0: 0xad2a0154  sw          $t2, 0x154($t1)
    ctx->pc = 0x2145a0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 340), GPR_U32(ctx, 10));
label_2145a4:
    // 0x2145a4: 0xa52f0160  sh          $t7, 0x160($t1)
    ctx->pc = 0x2145a4u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 352), (uint16_t)GPR_U32(ctx, 15));
label_2145a8:
    // 0x2145a8: 0xa52c0162  sh          $t4, 0x162($t1)
    ctx->pc = 0x2145a8u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 354), (uint16_t)GPR_U32(ctx, 12));
label_2145ac:
    // 0x2145ac: 0xad2a0164  sw          $t2, 0x164($t1)
    ctx->pc = 0x2145acu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 356), GPR_U32(ctx, 10));
label_2145b0:
    // 0x2145b0: 0x802c78e0  lb          $t4, 0x78E0($at)
    ctx->pc = 0x2145b0u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30944)));
label_2145b4:
    // 0x2145b4: 0xa12c0128  sb          $t4, 0x128($t1)
    ctx->pc = 0x2145b4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 296), (uint8_t)GPR_U32(ctx, 12));
label_2145b8:
    // 0x2145b8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2145b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2145bc:
    // 0x2145bc: 0x802c78e4  lb          $t4, 0x78E4($at)
    ctx->pc = 0x2145bcu;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30948)));
label_2145c0:
    // 0x2145c0: 0xa12c0129  sb          $t4, 0x129($t1)
    ctx->pc = 0x2145c0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 297), (uint8_t)GPR_U32(ctx, 12));
label_2145c4:
    // 0x2145c4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2145c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2145c8:
    // 0x2145c8: 0x802c78e8  lb          $t4, 0x78E8($at)
    ctx->pc = 0x2145c8u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30952)));
label_2145cc:
    // 0x2145cc: 0xa12c012a  sb          $t4, 0x12A($t1)
    ctx->pc = 0x2145ccu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 298), (uint8_t)GPR_U32(ctx, 12));
label_2145d0:
    // 0x2145d0: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2145d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2145d4:
    // 0x2145d4: 0x802c78ec  lb          $t4, 0x78EC($at)
    ctx->pc = 0x2145d4u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30956)));
label_2145d8:
    // 0x2145d8: 0xa12c012b  sb          $t4, 0x12B($t1)
    ctx->pc = 0x2145d8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 299), (uint8_t)GPR_U32(ctx, 12));
label_2145dc:
    // 0x2145dc: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2145dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2145e0:
    // 0x2145e0: 0xad23012c  sw          $v1, 0x12C($t1)
    ctx->pc = 0x2145e0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 300), GPR_U32(ctx, 3));
label_2145e4:
    // 0x2145e4: 0x802c78e0  lb          $t4, 0x78E0($at)
    ctx->pc = 0x2145e4u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30944)));
label_2145e8:
    // 0x2145e8: 0xa12c0138  sb          $t4, 0x138($t1)
    ctx->pc = 0x2145e8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 312), (uint8_t)GPR_U32(ctx, 12));
label_2145ec:
    // 0x2145ec: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2145ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2145f0:
    // 0x2145f0: 0x802c78e4  lb          $t4, 0x78E4($at)
    ctx->pc = 0x2145f0u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30948)));
label_2145f4:
    // 0x2145f4: 0xa12c0139  sb          $t4, 0x139($t1)
    ctx->pc = 0x2145f4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 313), (uint8_t)GPR_U32(ctx, 12));
label_2145f8:
    // 0x2145f8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2145f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2145fc:
    // 0x2145fc: 0x802c78e8  lb          $t4, 0x78E8($at)
    ctx->pc = 0x2145fcu;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30952)));
label_214600:
    // 0x214600: 0xa12c013a  sb          $t4, 0x13A($t1)
    ctx->pc = 0x214600u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 314), (uint8_t)GPR_U32(ctx, 12));
label_214604:
    // 0x214604: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_214608:
    // 0x214608: 0x802c78ec  lb          $t4, 0x78EC($at)
    ctx->pc = 0x214608u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30956)));
label_21460c:
    // 0x21460c: 0xa12c013b  sb          $t4, 0x13B($t1)
    ctx->pc = 0x21460cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 315), (uint8_t)GPR_U32(ctx, 12));
label_214610:
    // 0x214610: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_214614:
    // 0x214614: 0xad23013c  sw          $v1, 0x13C($t1)
    ctx->pc = 0x214614u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 316), GPR_U32(ctx, 3));
label_214618:
    // 0x214618: 0x802c78e0  lb          $t4, 0x78E0($at)
    ctx->pc = 0x214618u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30944)));
label_21461c:
    // 0x21461c: 0xa12c0148  sb          $t4, 0x148($t1)
    ctx->pc = 0x21461cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 328), (uint8_t)GPR_U32(ctx, 12));
label_214620:
    // 0x214620: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_214624:
    // 0x214624: 0x802c78e4  lb          $t4, 0x78E4($at)
    ctx->pc = 0x214624u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30948)));
label_214628:
    // 0x214628: 0xa12c0149  sb          $t4, 0x149($t1)
    ctx->pc = 0x214628u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 329), (uint8_t)GPR_U32(ctx, 12));
label_21462c:
    // 0x21462c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21462cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_214630:
    // 0x214630: 0x802c78e8  lb          $t4, 0x78E8($at)
    ctx->pc = 0x214630u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30952)));
label_214634:
    // 0x214634: 0xa12c014a  sb          $t4, 0x14A($t1)
    ctx->pc = 0x214634u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 330), (uint8_t)GPR_U32(ctx, 12));
label_214638:
    // 0x214638: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_21463c:
    // 0x21463c: 0x802c78ec  lb          $t4, 0x78EC($at)
    ctx->pc = 0x21463cu;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30956)));
label_214640:
    // 0x214640: 0xa12c014b  sb          $t4, 0x14B($t1)
    ctx->pc = 0x214640u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 331), (uint8_t)GPR_U32(ctx, 12));
label_214644:
    // 0x214644: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_214648:
    // 0x214648: 0xad23014c  sw          $v1, 0x14C($t1)
    ctx->pc = 0x214648u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 332), GPR_U32(ctx, 3));
label_21464c:
    // 0x21464c: 0x802c78e0  lb          $t4, 0x78E0($at)
    ctx->pc = 0x21464cu;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30944)));
label_214650:
    // 0x214650: 0xa12c0158  sb          $t4, 0x158($t1)
    ctx->pc = 0x214650u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 344), (uint8_t)GPR_U32(ctx, 12));
label_214654:
    // 0x214654: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_214658:
    // 0x214658: 0x802c78e4  lb          $t4, 0x78E4($at)
    ctx->pc = 0x214658u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30948)));
label_21465c:
    // 0x21465c: 0xa12c0159  sb          $t4, 0x159($t1)
    ctx->pc = 0x21465cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 345), (uint8_t)GPR_U32(ctx, 12));
label_214660:
    // 0x214660: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_214664:
    // 0x214664: 0x802c78e8  lb          $t4, 0x78E8($at)
    ctx->pc = 0x214664u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30952)));
label_214668:
    // 0x214668: 0xa12c015a  sb          $t4, 0x15A($t1)
    ctx->pc = 0x214668u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 346), (uint8_t)GPR_U32(ctx, 12));
label_21466c:
    // 0x21466c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21466cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_214670:
    // 0x214670: 0x802c78ec  lb          $t4, 0x78EC($at)
    ctx->pc = 0x214670u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30956)));
label_214674:
    // 0x214674: 0xa12c015b  sb          $t4, 0x15B($t1)
    ctx->pc = 0x214674u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 347), (uint8_t)GPR_U32(ctx, 12));
label_214678:
    // 0x214678: 0x1560ffac  bnez        $t3, . + 4 + (-0x54 << 2)
label_21467c:
    if (ctx->pc == 0x21467Cu) {
        ctx->pc = 0x21467Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214678u;
        // 0x21467c: 0xad23015c  sw          $v1, 0x15C($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 348), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214680u;
        goto label_214680;
    }
    ctx->pc = 0x214678u;
    {
        const bool branch_taken_0x214678 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x21467Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214678u;
        // 0x21467c: 0xad23015c  sw          $v1, 0x15C($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 348), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214678) {
            ctx->pc = 0x21452Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21452c;
        }
    }
    ctx->pc = 0x214680u;
label_214680:
    // 0x214680: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x214680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_214684:
    // 0x214684: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x214684u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_214688:
    // 0x214688: 0x340dffff  ori         $t5, $zero, 0xFFFF
    ctx->pc = 0x214688u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_21468c:
    // 0x21468c: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x21468cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_214690:
    // 0x214690: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x214690u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
label_214694:
    // 0x214694: 0x8f8c91f0  lw          $t4, -0x6E10($gp)
    ctx->pc = 0x214694u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939120)));
label_214698:
    // 0x214698: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x214698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_21469c:
    // 0x21469c: 0x1464823  subu        $t1, $t2, $a2
    ctx->pc = 0x21469cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
label_2146a0:
    // 0x2146a0: 0x8f9891f4  lw          $t8, -0x6E0C($gp)
    ctx->pc = 0x2146a0u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939124)));
label_2146a4:
    // 0x2146a4: 0x8f8e91e8  lw          $t6, -0x6E18($gp)
    ctx->pc = 0x2146a4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939112)));
label_2146a8:
    // 0x2146a8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2146a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2146ac:
    // 0x2146ac: 0x8f9991ec  lw          $t9, -0x6E14($gp)
    ctx->pc = 0x2146acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939116)));
label_2146b0:
    // 0x2146b0: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2146b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2146b4:
    // 0x2146b4: 0x28c70002  slti        $a3, $a2, 0x2
    ctx->pc = 0x2146b4u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_2146b8:
    // 0x2146b8: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x2146b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
label_2146bc:
    // 0x2146bc: 0xc5900  sll         $t3, $t4, 4
    ctx->pc = 0x2146bcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
label_2146c0:
    // 0x2146c0: 0x256f6c00  addiu       $t7, $t3, 0x6C00
    ctx->pc = 0x2146c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 11), 27648));
label_2146c4:
    // 0x2146c4: 0x18e6021  addu        $t4, $t4, $t6
    ctx->pc = 0x2146c4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
label_2146c8:
    // 0x2146c8: 0x1858c0  sll         $t3, $t8, 3
    ctx->pc = 0x2146c8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 24), 3));
label_2146cc:
    // 0x2146cc: 0x256e7900  addiu       $t6, $t3, 0x7900
    ctx->pc = 0x2146ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 11), 30976));
label_2146d0:
    // 0x2146d0: 0xa46f02a0  sh          $t7, 0x2A0($v1)
    ctx->pc = 0x2146d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 672), (uint16_t)GPR_U32(ctx, 15));
label_2146d4:
    // 0x2146d4: 0x3195821  addu        $t3, $t8, $t9
    ctx->pc = 0x2146d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 25)));
label_2146d8:
    // 0x2146d8: 0xa46e02a2  sh          $t6, 0x2A2($v1)
    ctx->pc = 0x2146d8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 674), (uint16_t)GPR_U32(ctx, 14));
label_2146dc:
    // 0x2146dc: 0xc6100  sll         $t4, $t4, 4
    ctx->pc = 0x2146dcu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
label_2146e0:
    // 0x2146e0: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x2146e0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
label_2146e4:
    // 0x2146e4: 0x258c6c00  addiu       $t4, $t4, 0x6C00
    ctx->pc = 0x2146e4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 27648));
label_2146e8:
    // 0x2146e8: 0xac6d02a4  sw          $t5, 0x2A4($v1)
    ctx->pc = 0x2146e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 676), GPR_U32(ctx, 13));
label_2146ec:
    // 0x2146ec: 0x256b7900  addiu       $t3, $t3, 0x7900
    ctx->pc = 0x2146ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 30976));
label_2146f0:
    // 0x2146f0: 0xa46c02b0  sh          $t4, 0x2B0($v1)
    ctx->pc = 0x2146f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 688), (uint16_t)GPR_U32(ctx, 12));
label_2146f4:
    // 0x2146f4: 0xa46b02b2  sh          $t3, 0x2B2($v1)
    ctx->pc = 0x2146f4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 690), (uint16_t)GPR_U32(ctx, 11));
label_2146f8:
    // 0x2146f8: 0xac6d02b4  sw          $t5, 0x2B4($v1)
    ctx->pc = 0x2146f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 692), GPR_U32(ctx, 13));
label_2146fc:
    // 0x2146fc: 0x802b78d0  lb          $t3, 0x78D0($at)
    ctx->pc = 0x2146fcu;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30928)));
label_214700:
    // 0x214700: 0xa06b0290  sb          $t3, 0x290($v1)
    ctx->pc = 0x214700u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 656), (uint8_t)GPR_U32(ctx, 11));
label_214704:
    // 0x214704: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_214708:
    // 0x214708: 0x802b78d4  lb          $t3, 0x78D4($at)
    ctx->pc = 0x214708u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30932)));
label_21470c:
    // 0x21470c: 0xa06b0291  sb          $t3, 0x291($v1)
    ctx->pc = 0x21470cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 657), (uint8_t)GPR_U32(ctx, 11));
label_214710:
    // 0x214710: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_214714:
    // 0x214714: 0x802b78d8  lb          $t3, 0x78D8($at)
    ctx->pc = 0x214714u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30936)));
label_214718:
    // 0x214718: 0xa06b0292  sb          $t3, 0x292($v1)
    ctx->pc = 0x214718u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 658), (uint8_t)GPR_U32(ctx, 11));
label_21471c:
    // 0x21471c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21471cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_214720:
    // 0x214720: 0x8c2b78dc  lw          $t3, 0x78DC($at)
    ctx->pc = 0x214720u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30940)));
label_214724:
    // 0x214724: 0x169001a  div         $zero, $t3, $t1
    ctx->pc = 0x214724u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 11);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_214728:
    // 0x214728: 0x0  nop
    ctx->pc = 0x214728u;
    // NOP
label_21472c:
    // 0x21472c: 0x0  nop
    ctx->pc = 0x21472cu;
    // NOP
label_214730:
    // 0x214730: 0x4812  mflo        $t1
    ctx->pc = 0x214730u;
    SET_GPR_U64(ctx, 9, ctx->lo);
label_214734:
    // 0x214734: 0xa0690293  sb          $t1, 0x293($v1)
    ctx->pc = 0x214734u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 659), (uint8_t)GPR_U32(ctx, 9));
label_214738:
    // 0x214738: 0x14e0ffd6  bnez        $a3, . + 4 + (-0x2A << 2)
label_21473c:
    if (ctx->pc == 0x21473Cu) {
        ctx->pc = 0x21473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214738u;
        // 0x21473c: 0xac680294  sw          $t0, 0x294($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 660), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214740u;
        goto label_214740;
    }
    ctx->pc = 0x214738u;
    {
        const bool branch_taken_0x214738 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x21473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214738u;
        // 0x21473c: 0xac680294  sw          $t0, 0x294($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 660), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214738) {
            ctx->pc = 0x214694u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214694;
        }
    }
    ctx->pc = 0x214740u;
label_214740:
    // 0x214740: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x214740u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_214744:
    // 0x214744: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x214744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_214748:
    // 0x214748: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x214748u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21474c:
    // 0x21474c: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x21474cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
label_214750:
    // 0x214750: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x214750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_214754:
    // 0x214754: 0x24637920  addiu       $v1, $v1, 0x7920
    ctx->pc = 0x214754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31008));
label_214758:
    // 0x214758: 0x3c0c3f80  lui         $t4, 0x3F80
    ctx->pc = 0x214758u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)16256 << 16));
label_21475c:
    // 0x21475c: 0x665021  addu        $t2, $v1, $a2
    ctx->pc = 0x21475cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_214760:
    // 0x214760: 0xa74021  addu        $t0, $a1, $a3
    ctx->pc = 0x214760u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_214764:
    // 0x214764: 0x8f8b9210  lw          $t3, -0x6DF0($gp)
    ctx->pc = 0x214764u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939152)));
label_214768:
    // 0x214768: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_21476c:
    // 0x21476c: 0x8d4d0000  lw          $t5, 0x0($t2)
    ctx->pc = 0x21476cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_214770:
    // 0x214770: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x214770u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_214774:
    // 0x214774: 0x8d580004  lw          $t8, 0x4($t2)
    ctx->pc = 0x214774u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_214778:
    // 0x214778: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x214778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_21477c:
    // 0x21477c: 0x8f999214  lw          $t9, -0x6DEC($gp)
    ctx->pc = 0x21477cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939156)));
label_214780:
    // 0x214780: 0x24e700b0  addiu       $a3, $a3, 0xB0
    ctx->pc = 0x214780u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 176));
label_214784:
    // 0x214784: 0x1ab5821  addu        $t3, $t5, $t3
    ctx->pc = 0x214784u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
label_214788:
    // 0x214788: 0xd6900  sll         $t5, $t5, 4
    ctx->pc = 0x214788u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
label_21478c:
    // 0x21478c: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x21478cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
label_214790:
    // 0x214790: 0x25ae6c00  addiu       $t6, $t5, 0x6C00
    ctx->pc = 0x214790u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), 27648));
label_214794:
    // 0x214794: 0x256f6c00  addiu       $t7, $t3, 0x6C00
    ctx->pc = 0x214794u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 11), 27648));
label_214798:
    // 0x214798: 0x1868c0  sll         $t5, $t8, 3
    ctx->pc = 0x214798u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 24), 3));
label_21479c:
    // 0x21479c: 0xa50e03d0  sh          $t6, 0x3D0($t0)
    ctx->pc = 0x21479cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 976), (uint16_t)GPR_U32(ctx, 14));
label_2147a0:
    // 0x2147a0: 0x25ad7900  addiu       $t5, $t5, 0x7900
    ctx->pc = 0x2147a0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 30976));
label_2147a4:
    // 0x2147a4: 0x3195821  addu        $t3, $t8, $t9
    ctx->pc = 0x2147a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 25)));
label_2147a8:
    // 0x2147a8: 0xa50d03d2  sh          $t5, 0x3D2($t0)
    ctx->pc = 0x2147a8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 978), (uint16_t)GPR_U32(ctx, 13));
label_2147ac:
    // 0x2147ac: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x2147acu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
label_2147b0:
    // 0x2147b0: 0xad0203d4  sw          $v0, 0x3D4($t0)
    ctx->pc = 0x2147b0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 980), GPR_U32(ctx, 2));
label_2147b4:
    // 0x2147b4: 0x256b7900  addiu       $t3, $t3, 0x7900
    ctx->pc = 0x2147b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 30976));
label_2147b8:
    // 0x2147b8: 0xa50f03e0  sh          $t7, 0x3E0($t0)
    ctx->pc = 0x2147b8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 992), (uint16_t)GPR_U32(ctx, 15));
label_2147bc:
    // 0x2147bc: 0x292a0002  slti        $t2, $t1, 0x2
    ctx->pc = 0x2147bcu;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2) ? 1 : 0);
label_2147c0:
    // 0x2147c0: 0xa50d03e2  sh          $t5, 0x3E2($t0)
    ctx->pc = 0x2147c0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 994), (uint16_t)GPR_U32(ctx, 13));
label_2147c4:
    // 0x2147c4: 0xad0203e4  sw          $v0, 0x3E4($t0)
    ctx->pc = 0x2147c4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 996), GPR_U32(ctx, 2));
label_2147c8:
    // 0x2147c8: 0xa50e03f0  sh          $t6, 0x3F0($t0)
    ctx->pc = 0x2147c8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 1008), (uint16_t)GPR_U32(ctx, 14));
label_2147cc:
    // 0x2147cc: 0xa50b03f2  sh          $t3, 0x3F2($t0)
    ctx->pc = 0x2147ccu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 1010), (uint16_t)GPR_U32(ctx, 11));
label_2147d0:
    // 0x2147d0: 0xad0203f4  sw          $v0, 0x3F4($t0)
    ctx->pc = 0x2147d0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1012), GPR_U32(ctx, 2));
label_2147d4:
    // 0x2147d4: 0xa50f0400  sh          $t7, 0x400($t0)
    ctx->pc = 0x2147d4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 1024), (uint16_t)GPR_U32(ctx, 15));
label_2147d8:
    // 0x2147d8: 0xa50b0402  sh          $t3, 0x402($t0)
    ctx->pc = 0x2147d8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 1026), (uint16_t)GPR_U32(ctx, 11));
label_2147dc:
    // 0x2147dc: 0xad020404  sw          $v0, 0x404($t0)
    ctx->pc = 0x2147dcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1028), GPR_U32(ctx, 2));
label_2147e0:
    // 0x2147e0: 0x802b7910  lb          $t3, 0x7910($at)
    ctx->pc = 0x2147e0u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30992)));
label_2147e4:
    // 0x2147e4: 0xa10b03c8  sb          $t3, 0x3C8($t0)
    ctx->pc = 0x2147e4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 968), (uint8_t)GPR_U32(ctx, 11));
label_2147e8:
    // 0x2147e8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2147e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2147ec:
    // 0x2147ec: 0x802b7914  lb          $t3, 0x7914($at)
    ctx->pc = 0x2147ecu;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30996)));
label_2147f0:
    // 0x2147f0: 0xa10b03c9  sb          $t3, 0x3C9($t0)
    ctx->pc = 0x2147f0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 969), (uint8_t)GPR_U32(ctx, 11));
label_2147f4:
    // 0x2147f4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2147f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2147f8:
    // 0x2147f8: 0x802b7918  lb          $t3, 0x7918($at)
    ctx->pc = 0x2147f8u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 31000)));
label_2147fc:
    // 0x2147fc: 0xa10b03ca  sb          $t3, 0x3CA($t0)
    ctx->pc = 0x2147fcu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 970), (uint8_t)GPR_U32(ctx, 11));
label_214800:
    // 0x214800: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_214804:
    // 0x214804: 0x802b791c  lb          $t3, 0x791C($at)
    ctx->pc = 0x214804u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 31004)));
label_214808:
    // 0x214808: 0xa10b03cb  sb          $t3, 0x3CB($t0)
    ctx->pc = 0x214808u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 971), (uint8_t)GPR_U32(ctx, 11));
label_21480c:
    // 0x21480c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21480cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_214810:
    // 0x214810: 0xad0c03cc  sw          $t4, 0x3CC($t0)
    ctx->pc = 0x214810u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 972), GPR_U32(ctx, 12));
label_214814:
    // 0x214814: 0x802b7910  lb          $t3, 0x7910($at)
    ctx->pc = 0x214814u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30992)));
label_214818:
    // 0x214818: 0xa10b03d8  sb          $t3, 0x3D8($t0)
    ctx->pc = 0x214818u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 984), (uint8_t)GPR_U32(ctx, 11));
label_21481c:
    // 0x21481c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21481cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_214820:
    // 0x214820: 0x802b7914  lb          $t3, 0x7914($at)
    ctx->pc = 0x214820u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30996)));
label_214824:
    // 0x214824: 0xa10b03d9  sb          $t3, 0x3D9($t0)
    ctx->pc = 0x214824u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 985), (uint8_t)GPR_U32(ctx, 11));
label_214828:
    // 0x214828: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_21482c:
    // 0x21482c: 0x802b7918  lb          $t3, 0x7918($at)
    ctx->pc = 0x21482cu;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 31000)));
label_214830:
    // 0x214830: 0xa10b03da  sb          $t3, 0x3DA($t0)
    ctx->pc = 0x214830u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 986), (uint8_t)GPR_U32(ctx, 11));
label_214834:
    // 0x214834: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_214838:
    // 0x214838: 0x802b791c  lb          $t3, 0x791C($at)
    ctx->pc = 0x214838u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 31004)));
label_21483c:
    // 0x21483c: 0xa10b03db  sb          $t3, 0x3DB($t0)
    ctx->pc = 0x21483cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 987), (uint8_t)GPR_U32(ctx, 11));
label_214840:
    // 0x214840: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_214844:
    // 0x214844: 0xad0c03dc  sw          $t4, 0x3DC($t0)
    ctx->pc = 0x214844u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 988), GPR_U32(ctx, 12));
label_214848:
    // 0x214848: 0x802b7910  lb          $t3, 0x7910($at)
    ctx->pc = 0x214848u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30992)));
label_21484c:
    // 0x21484c: 0xa10b03e8  sb          $t3, 0x3E8($t0)
    ctx->pc = 0x21484cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1000), (uint8_t)GPR_U32(ctx, 11));
label_214850:
    // 0x214850: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_214854:
    // 0x214854: 0x802b7914  lb          $t3, 0x7914($at)
    ctx->pc = 0x214854u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30996)));
label_214858:
    // 0x214858: 0xa10b03e9  sb          $t3, 0x3E9($t0)
    ctx->pc = 0x214858u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1001), (uint8_t)GPR_U32(ctx, 11));
label_21485c:
    // 0x21485c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21485cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_214860:
    // 0x214860: 0x802b7918  lb          $t3, 0x7918($at)
    ctx->pc = 0x214860u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 31000)));
label_214864:
    // 0x214864: 0xa10b03ea  sb          $t3, 0x3EA($t0)
    ctx->pc = 0x214864u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1002), (uint8_t)GPR_U32(ctx, 11));
label_214868:
    // 0x214868: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_21486c:
    // 0x21486c: 0x802b791c  lb          $t3, 0x791C($at)
    ctx->pc = 0x21486cu;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 31004)));
label_214870:
    // 0x214870: 0xa10b03eb  sb          $t3, 0x3EB($t0)
    ctx->pc = 0x214870u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1003), (uint8_t)GPR_U32(ctx, 11));
label_214874:
    // 0x214874: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_214878:
    // 0x214878: 0xad0c03ec  sw          $t4, 0x3EC($t0)
    ctx->pc = 0x214878u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1004), GPR_U32(ctx, 12));
label_21487c:
    // 0x21487c: 0x802b7910  lb          $t3, 0x7910($at)
    ctx->pc = 0x21487cu;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30992)));
label_214880:
    // 0x214880: 0xa10b03f8  sb          $t3, 0x3F8($t0)
    ctx->pc = 0x214880u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1016), (uint8_t)GPR_U32(ctx, 11));
label_214884:
    // 0x214884: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_214888:
    // 0x214888: 0x802b7914  lb          $t3, 0x7914($at)
    ctx->pc = 0x214888u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30996)));
label_21488c:
    // 0x21488c: 0xa10b03f9  sb          $t3, 0x3F9($t0)
    ctx->pc = 0x21488cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1017), (uint8_t)GPR_U32(ctx, 11));
label_214890:
    // 0x214890: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_214894:
    // 0x214894: 0x802b7918  lb          $t3, 0x7918($at)
    ctx->pc = 0x214894u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 31000)));
label_214898:
    // 0x214898: 0xa10b03fa  sb          $t3, 0x3FA($t0)
    ctx->pc = 0x214898u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1018), (uint8_t)GPR_U32(ctx, 11));
label_21489c:
    // 0x21489c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21489cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2148a0:
    // 0x2148a0: 0x802b791c  lb          $t3, 0x791C($at)
    ctx->pc = 0x2148a0u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 31004)));
label_2148a4:
    // 0x2148a4: 0xa10b03fb  sb          $t3, 0x3FB($t0)
    ctx->pc = 0x2148a4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1019), (uint8_t)GPR_U32(ctx, 11));
label_2148a8:
    // 0x2148a8: 0x1540ffac  bnez        $t2, . + 4 + (-0x54 << 2)
label_2148ac:
    if (ctx->pc == 0x2148ACu) {
        ctx->pc = 0x2148ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2148A8u;
        // 0x2148ac: 0xad0c03fc  sw          $t4, 0x3FC($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 1020), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2148B0u;
        goto label_2148b0;
    }
    ctx->pc = 0x2148A8u;
    {
        const bool branch_taken_0x2148a8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x2148ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2148A8u;
        // 0x2148ac: 0xad0c03fc  sw          $t4, 0x3FC($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 1020), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2148a8) {
            ctx->pc = 0x21475Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21475c;
        }
    }
    ctx->pc = 0x2148B0u;
label_2148b0:
    // 0x2148b0: 0x2406004c  addiu       $a2, $zero, 0x4C
    ctx->pc = 0x2148b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_2148b4:
    // 0x2148b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2148b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2148b8:
    // 0x2148b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2148b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2148bc:
    // 0x2148bc: 0xc066c72  jal         func_19B1C8
label_2148c0:
    if (ctx->pc == 0x2148C0u) {
        ctx->pc = 0x2148C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2148BCu;
        // 0x2148c0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2148C4u;
        goto label_2148c4;
    }
    ctx->pc = 0x2148BCu;
    SET_GPR_U32(ctx, 31, 0x2148C4u);
    ctx->pc = 0x2148C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2148BCu;
    // 0x2148c0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x2148C4u;
label_2148c4:
    // 0x2148c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2148c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2148c8:
    // 0x2148c8: 0x3e00008  jr          $ra
label_2148cc:
    if (ctx->pc == 0x2148CCu) {
        ctx->pc = 0x2148CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2148C8u;
        // 0x2148cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2148D0u;
        goto label_2148d0;
    }
    ctx->pc = 0x2148C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2148CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2148C8u;
        // 0x2148cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2148C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2148D0u;
label_2148d0:
    // 0x2148d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2148d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2148d4:
    // 0x2148d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2148d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2148d8:
    // 0x2148d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2148d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2148dc:
    // 0x2148dc: 0x8f8291d0  lw          $v0, -0x6E30($gp)
    ctx->pc = 0x2148dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939088)));
label_2148e0:
    // 0x2148e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2148e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2148e4:
    // 0x2148e4: 0x8f8591cc  lw          $a1, -0x6E34($gp)
    ctx->pc = 0x2148e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939084)));
label_2148e8:
    // 0x2148e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2148e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2148ec:
    // 0x2148ec: 0x14a0000c  bnez        $a1, . + 4 + (0xC << 2)
label_2148f0:
    if (ctx->pc == 0x2148F0u) {
        ctx->pc = 0x2148F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2148ECu;
        // 0x2148f0: 0xaf8291d0  sw          $v0, -0x6E30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939088), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2148F4u;
        goto label_2148f4;
    }
    ctx->pc = 0x2148ECu;
    {
        const bool branch_taken_0x2148ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2148F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2148ECu;
        // 0x2148f0: 0xaf8291d0  sw          $v0, -0x6E30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939088), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2148ec) {
            ctx->pc = 0x214920u;
            goto label_214920;
        }
    }
    ctx->pc = 0x2148F4u;
label_2148f4:
    // 0x2148f4: 0xc0853c0  jal         func_214F00
label_2148f8:
    if (ctx->pc == 0x2148F8u) {
        ctx->pc = 0x2148FCu;
        goto label_2148fc;
    }
    ctx->pc = 0x2148F4u;
    SET_GPR_U32(ctx, 31, 0x2148FCu);
    ctx->pc = 0x214F00u;
    { ctx->pc = 0x214f00; return; }
    ctx->pc = 0x2148FCu;
label_2148fc:
    // 0x2148fc: 0x8f8291e0  lw          $v0, -0x6E20($gp)
    ctx->pc = 0x2148fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939104)));
label_214900:
    // 0x214900: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_214904:
    if (ctx->pc == 0x214904u) {
        ctx->pc = 0x214904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214900u;
        // 0x214904: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214908u;
        goto label_214908;
    }
    ctx->pc = 0x214900u;
    {
        const bool branch_taken_0x214900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214900u;
        // 0x214904: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214900) {
            ctx->pc = 0x214914u;
            goto label_214914;
        }
    }
    ctx->pc = 0x214908u;
label_214908:
    // 0x214908: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x214908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21490c:
    // 0x21490c: 0x10000002  b           . + 4 + (0x2 << 2)
label_214910:
    if (ctx->pc == 0x214910u) {
        ctx->pc = 0x214910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21490Cu;
        // 0x214910: 0xaf8291cc  sw          $v0, -0x6E34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939084), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214914u;
        goto label_214914;
    }
    ctx->pc = 0x21490Cu;
    {
        const bool branch_taken_0x21490c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21490Cu;
        // 0x214910: 0xaf8291cc  sw          $v0, -0x6E34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939084), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21490c) {
            ctx->pc = 0x214918u;
            goto label_214918;
        }
    }
    ctx->pc = 0x214914u;
label_214914:
    // 0x214914: 0xaf8291cc  sw          $v0, -0x6E34($gp)
    ctx->pc = 0x214914u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939084), GPR_U32(ctx, 2));
label_214918:
    // 0x214918: 0x1000002b  b           . + 4 + (0x2B << 2)
label_21491c:
    if (ctx->pc == 0x21491Cu) {
        ctx->pc = 0x21491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214918u;
        // 0x21491c: 0xaf8091d0  sw          $zero, -0x6E30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214920u;
        goto label_214920;
    }
    ctx->pc = 0x214918u;
    {
        const bool branch_taken_0x214918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214918u;
        // 0x21491c: 0xaf8091d0  sw          $zero, -0x6E30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214918) {
            ctx->pc = 0x2149C8u;
            { ctx->pc = 0x2149c8; return; }
        }
    }
    ctx->pc = 0x214920u;
label_214920:
    // 0x214920: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x214920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_214924:
    // 0x214924: 0x14a30009  bne         $a1, $v1, . + 4 + (0x9 << 2)
label_214928:
    if (ctx->pc == 0x214928u) {
        ctx->pc = 0x214928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214924u;
        // 0x214928: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21492Cu;
        goto label_21492c;
    }
    ctx->pc = 0x214924u;
    {
        const bool branch_taken_0x214924 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x214928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214924u;
        // 0x214928: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214924) {
            ctx->pc = 0x21494Cu;
            goto label_21494c;
        }
    }
    ctx->pc = 0x21492Cu;
label_21492c:
    // 0x21492c: 0x8f8291d0  lw          $v0, -0x6E30($gp)
    ctx->pc = 0x21492cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939088)));
label_214930:
    // 0x214930: 0x28420078  slti        $v0, $v0, 0x78
    ctx->pc = 0x214930u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)120) ? 1 : 0);
label_214934:
    // 0x214934: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_214938:
    if (ctx->pc == 0x214938u) {
        ctx->pc = 0x214938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214934u;
        // 0x214938: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21493Cu;
        goto label_21493c;
    }
    ctx->pc = 0x214934u;
    {
        const bool branch_taken_0x214934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x214938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214934u;
        // 0x214938: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214934) {
            ctx->pc = 0x2149CCu;
            { ctx->pc = 0x2149cc; return; }
        }
    }
    ctx->pc = 0x21493Cu;
label_21493c:
    // 0x21493c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21493cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_214940:
    // 0x214940: 0xaf8091d0  sw          $zero, -0x6E30($gp)
    ctx->pc = 0x214940u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939088), GPR_U32(ctx, 0));
label_214944:
    // 0x214944: 0x10000020  b           . + 4 + (0x20 << 2)
label_214948:
    if (ctx->pc == 0x214948u) {
        ctx->pc = 0x214948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214944u;
        // 0x214948: 0xaf8291cc  sw          $v0, -0x6E34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939084), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21494Cu;
        goto label_21494c;
    }
    ctx->pc = 0x214944u;
    {
        const bool branch_taken_0x214944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214944u;
        // 0x214948: 0xaf8291cc  sw          $v0, -0x6E34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939084), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214944) {
            ctx->pc = 0x2149C8u;
            { ctx->pc = 0x2149c8; return; }
        }
    }
    ctx->pc = 0x21494Cu;
label_21494c:
    // 0x21494c: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
label_214950:
    if (ctx->pc == 0x214950u) {
        ctx->pc = 0x214954u;
        goto label_214954;
    }
    ctx->pc = 0x21494Cu;
    {
        const bool branch_taken_0x21494c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x21494c) {
            ctx->pc = 0x214978u;
            { ctx->pc = 0x214978; return; }
        }
    }
    ctx->pc = 0x214954u;
label_214954:
    // 0x214954: 0xc0855ac  jal         func_2156B0
label_214958:
    if (ctx->pc == 0x214958u) {
        ctx->pc = 0x21495Cu;
        goto label_21495c;
    }
    ctx->pc = 0x214954u;
    SET_GPR_U32(ctx, 31, 0x21495Cu);
    ctx->pc = 0x2156B0u;
    { ctx->pc = 0x2156b0; return; }
    ctx->pc = 0x21495Cu;
label_21495c:
    // 0x21495c: 0x8f8291d0  lw          $v0, -0x6E30($gp)
    ctx->pc = 0x21495cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939088)));
label_214960:
    // 0x214960: 0x28420020  slti        $v0, $v0, 0x20
    ctx->pc = 0x214960u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
label_214964:
    // 0x214964: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_214968:
    if (ctx->pc == 0x214968u) {
        ctx->pc = 0x214968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214964u;
        // 0x214968: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21496Cu;
        goto label_21496c;
    }
    ctx->pc = 0x214964u;
    {
        const bool branch_taken_0x214964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x214968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214964u;
        // 0x214968: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214964) {
            ctx->pc = 0x2149C8u;
            { ctx->pc = 0x2149c8; return; }
        }
    }
    ctx->pc = 0x21496Cu;
label_21496c:
    // 0x21496c: 0xaf8091d0  sw          $zero, -0x6E30($gp)
    ctx->pc = 0x21496cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939088), GPR_U32(ctx, 0));
    ctx->pc = 0x214970u;
    return;
}
