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


void FUN_0019b6a8_part410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2631f8u: goto label_2631f8;
        case 0x2631fcu: goto label_2631fc;
        case 0x263200u: goto label_263200;
        case 0x263204u: goto label_263204;
        case 0x263208u: goto label_263208;
        case 0x26320cu: goto label_26320c;
        case 0x263210u: goto label_263210;
        case 0x263214u: goto label_263214;
        case 0x263218u: goto label_263218;
        case 0x26321cu: goto label_26321c;
        case 0x263220u: goto label_263220;
        case 0x263224u: goto label_263224;
        case 0x263228u: goto label_263228;
        case 0x26322cu: goto label_26322c;
        case 0x263230u: goto label_263230;
        case 0x263234u: goto label_263234;
        case 0x263238u: goto label_263238;
        case 0x26323cu: goto label_26323c;
        case 0x263240u: goto label_263240;
        case 0x263244u: goto label_263244;
        case 0x263248u: goto label_263248;
        case 0x26324cu: goto label_26324c;
        case 0x263250u: goto label_263250;
        case 0x263254u: goto label_263254;
        case 0x263258u: goto label_263258;
        case 0x26325cu: goto label_26325c;
        case 0x263260u: goto label_263260;
        case 0x263264u: goto label_263264;
        case 0x263268u: goto label_263268;
        case 0x26326cu: goto label_26326c;
        case 0x263270u: goto label_263270;
        case 0x263274u: goto label_263274;
        case 0x263278u: goto label_263278;
        case 0x26327cu: goto label_26327c;
        case 0x263280u: goto label_263280;
        case 0x263284u: goto label_263284;
        case 0x263288u: goto label_263288;
        case 0x26328cu: goto label_26328c;
        case 0x263290u: goto label_263290;
        case 0x263294u: goto label_263294;
        case 0x263298u: goto label_263298;
        case 0x26329cu: goto label_26329c;
        case 0x2632a0u: goto label_2632a0;
        case 0x2632a4u: goto label_2632a4;
        case 0x2632a8u: goto label_2632a8;
        case 0x2632acu: goto label_2632ac;
        case 0x2632b0u: goto label_2632b0;
        case 0x2632b4u: goto label_2632b4;
        case 0x2632b8u: goto label_2632b8;
        case 0x2632bcu: goto label_2632bc;
        case 0x2632c0u: goto label_2632c0;
        case 0x2632c4u: goto label_2632c4;
        case 0x2632c8u: goto label_2632c8;
        case 0x2632ccu: goto label_2632cc;
        case 0x2632d0u: goto label_2632d0;
        case 0x2632d4u: goto label_2632d4;
        case 0x2632d8u: goto label_2632d8;
        case 0x2632dcu: goto label_2632dc;
        case 0x2632e0u: goto label_2632e0;
        case 0x2632e4u: goto label_2632e4;
        case 0x2632e8u: goto label_2632e8;
        case 0x2632ecu: goto label_2632ec;
        case 0x2632f0u: goto label_2632f0;
        case 0x2632f4u: goto label_2632f4;
        case 0x2632f8u: goto label_2632f8;
        case 0x2632fcu: goto label_2632fc;
        case 0x263300u: goto label_263300;
        case 0x263304u: goto label_263304;
        case 0x263308u: goto label_263308;
        case 0x26330cu: goto label_26330c;
        case 0x263310u: goto label_263310;
        case 0x263314u: goto label_263314;
        case 0x263318u: goto label_263318;
        case 0x26331cu: goto label_26331c;
        case 0x263320u: goto label_263320;
        case 0x263324u: goto label_263324;
        case 0x263328u: goto label_263328;
        case 0x26332cu: goto label_26332c;
        case 0x263330u: goto label_263330;
        case 0x263334u: goto label_263334;
        case 0x263338u: goto label_263338;
        case 0x26333cu: goto label_26333c;
        case 0x263340u: goto label_263340;
        case 0x263344u: goto label_263344;
        case 0x263348u: goto label_263348;
        case 0x26334cu: goto label_26334c;
        case 0x263350u: goto label_263350;
        case 0x263354u: goto label_263354;
        case 0x263358u: goto label_263358;
        case 0x26335cu: goto label_26335c;
        case 0x263360u: goto label_263360;
        case 0x263364u: goto label_263364;
        case 0x263368u: goto label_263368;
        case 0x26336cu: goto label_26336c;
        case 0x263370u: goto label_263370;
        case 0x263374u: goto label_263374;
        case 0x263378u: goto label_263378;
        case 0x26337cu: goto label_26337c;
        case 0x263380u: goto label_263380;
        case 0x263384u: goto label_263384;
        case 0x263388u: goto label_263388;
        case 0x26338cu: goto label_26338c;
        case 0x263390u: goto label_263390;
        case 0x263394u: goto label_263394;
        case 0x263398u: goto label_263398;
        case 0x26339cu: goto label_26339c;
        case 0x2633a0u: goto label_2633a0;
        case 0x2633a4u: goto label_2633a4;
        case 0x2633a8u: goto label_2633a8;
        case 0x2633acu: goto label_2633ac;
        case 0x2633b0u: goto label_2633b0;
        case 0x2633b4u: goto label_2633b4;
        case 0x2633b8u: goto label_2633b8;
        case 0x2633bcu: goto label_2633bc;
        case 0x2633c0u: goto label_2633c0;
        case 0x2633c4u: goto label_2633c4;
        case 0x2633c8u: goto label_2633c8;
        case 0x2633ccu: goto label_2633cc;
        case 0x2633d0u: goto label_2633d0;
        case 0x2633d4u: goto label_2633d4;
        case 0x2633d8u: goto label_2633d8;
        case 0x2633dcu: goto label_2633dc;
        case 0x2633e0u: goto label_2633e0;
        case 0x2633e4u: goto label_2633e4;
        case 0x2633e8u: goto label_2633e8;
        case 0x2633ecu: goto label_2633ec;
        case 0x2633f0u: goto label_2633f0;
        case 0x2633f4u: goto label_2633f4;
        case 0x2633f8u: goto label_2633f8;
        case 0x2633fcu: goto label_2633fc;
        case 0x263400u: goto label_263400;
        case 0x263404u: goto label_263404;
        case 0x263408u: goto label_263408;
        case 0x26340cu: goto label_26340c;
        case 0x263410u: goto label_263410;
        case 0x263414u: goto label_263414;
        case 0x263418u: goto label_263418;
        case 0x26341cu: goto label_26341c;
        case 0x263420u: goto label_263420;
        case 0x263424u: goto label_263424;
        case 0x263428u: goto label_263428;
        case 0x26342cu: goto label_26342c;
        case 0x263430u: goto label_263430;
        case 0x263434u: goto label_263434;
        case 0x263438u: goto label_263438;
        case 0x26343cu: goto label_26343c;
        case 0x263440u: goto label_263440;
        case 0x263444u: goto label_263444;
        case 0x263448u: goto label_263448;
        case 0x26344cu: goto label_26344c;
        case 0x263450u: goto label_263450;
        case 0x263454u: goto label_263454;
        case 0x263458u: goto label_263458;
        case 0x26345cu: goto label_26345c;
        case 0x263460u: goto label_263460;
        case 0x263464u: goto label_263464;
        case 0x263468u: goto label_263468;
        case 0x26346cu: goto label_26346c;
        case 0x263470u: goto label_263470;
        case 0x263474u: goto label_263474;
        case 0x263478u: goto label_263478;
        case 0x26347cu: goto label_26347c;
        case 0x263480u: goto label_263480;
        case 0x263484u: goto label_263484;
        case 0x263488u: goto label_263488;
        case 0x26348cu: goto label_26348c;
        case 0x263490u: goto label_263490;
        case 0x263494u: goto label_263494;
        case 0x263498u: goto label_263498;
        case 0x26349cu: goto label_26349c;
        case 0x2634a0u: goto label_2634a0;
        case 0x2634a4u: goto label_2634a4;
        case 0x2634a8u: goto label_2634a8;
        case 0x2634acu: goto label_2634ac;
        case 0x2634b0u: goto label_2634b0;
        case 0x2634b4u: goto label_2634b4;
        case 0x2634b8u: goto label_2634b8;
        case 0x2634bcu: goto label_2634bc;
        case 0x2634c0u: goto label_2634c0;
        case 0x2634c4u: goto label_2634c4;
        case 0x2634c8u: goto label_2634c8;
        case 0x2634ccu: goto label_2634cc;
        case 0x2634d0u: goto label_2634d0;
        case 0x2634d4u: goto label_2634d4;
        case 0x2634d8u: goto label_2634d8;
        case 0x2634dcu: goto label_2634dc;
        case 0x2634e0u: goto label_2634e0;
        case 0x2634e4u: goto label_2634e4;
        case 0x2634e8u: goto label_2634e8;
        case 0x2634ecu: goto label_2634ec;
        case 0x2634f0u: goto label_2634f0;
        case 0x2634f4u: goto label_2634f4;
        case 0x2634f8u: goto label_2634f8;
        case 0x2634fcu: goto label_2634fc;
        case 0x263500u: goto label_263500;
        case 0x263504u: goto label_263504;
        case 0x263508u: goto label_263508;
        case 0x26350cu: goto label_26350c;
        case 0x263510u: goto label_263510;
        case 0x263514u: goto label_263514;
        case 0x263518u: goto label_263518;
        case 0x26351cu: goto label_26351c;
        case 0x263520u: goto label_263520;
        case 0x263524u: goto label_263524;
        case 0x263528u: goto label_263528;
        case 0x26352cu: goto label_26352c;
        case 0x263530u: goto label_263530;
        case 0x263534u: goto label_263534;
        case 0x263538u: goto label_263538;
        case 0x26353cu: goto label_26353c;
        case 0x263540u: goto label_263540;
        case 0x263544u: goto label_263544;
        case 0x263548u: goto label_263548;
        case 0x26354cu: goto label_26354c;
        case 0x263550u: goto label_263550;
        case 0x263554u: goto label_263554;
        case 0x263558u: goto label_263558;
        case 0x26355cu: goto label_26355c;
        case 0x263560u: goto label_263560;
        case 0x263564u: goto label_263564;
        case 0x263568u: goto label_263568;
        case 0x26356cu: goto label_26356c;
        case 0x263570u: goto label_263570;
        case 0x263574u: goto label_263574;
        case 0x263578u: goto label_263578;
        case 0x26357cu: goto label_26357c;
        case 0x263580u: goto label_263580;
        case 0x263584u: goto label_263584;
        case 0x263588u: goto label_263588;
        case 0x26358cu: goto label_26358c;
        case 0x263590u: goto label_263590;
        case 0x263594u: goto label_263594;
        case 0x263598u: goto label_263598;
        case 0x26359cu: goto label_26359c;
        case 0x2635a0u: goto label_2635a0;
        case 0x2635a4u: goto label_2635a4;
        case 0x2635a8u: goto label_2635a8;
        case 0x2635acu: goto label_2635ac;
        case 0x2635b0u: goto label_2635b0;
        case 0x2635b4u: goto label_2635b4;
        case 0x2635b8u: goto label_2635b8;
        case 0x2635bcu: goto label_2635bc;
        case 0x2635c0u: goto label_2635c0;
        case 0x2635c4u: goto label_2635c4;
        case 0x2635c8u: goto label_2635c8;
        case 0x2635ccu: goto label_2635cc;
        case 0x2635d0u: goto label_2635d0;
        case 0x2635d4u: goto label_2635d4;
        case 0x2635d8u: goto label_2635d8;
        case 0x2635dcu: goto label_2635dc;
        case 0x2635e0u: goto label_2635e0;
        case 0x2635e4u: goto label_2635e4;
        case 0x2635e8u: goto label_2635e8;
        case 0x2635ecu: goto label_2635ec;
        case 0x2635f0u: goto label_2635f0;
        case 0x2635f4u: goto label_2635f4;
        case 0x2635f8u: goto label_2635f8;
        case 0x2635fcu: goto label_2635fc;
        case 0x263600u: goto label_263600;
        case 0x263604u: goto label_263604;
        case 0x263608u: goto label_263608;
        case 0x26360cu: goto label_26360c;
        case 0x263610u: goto label_263610;
        case 0x263614u: goto label_263614;
        case 0x263618u: goto label_263618;
        case 0x26361cu: goto label_26361c;
        case 0x263620u: goto label_263620;
        case 0x263624u: goto label_263624;
        case 0x263628u: goto label_263628;
        case 0x26362cu: goto label_26362c;
        case 0x263630u: goto label_263630;
        case 0x263634u: goto label_263634;
        case 0x263638u: goto label_263638;
        case 0x26363cu: goto label_26363c;
        case 0x263640u: goto label_263640;
        case 0x263644u: goto label_263644;
        case 0x263648u: goto label_263648;
        case 0x26364cu: goto label_26364c;
        case 0x263650u: goto label_263650;
        case 0x263654u: goto label_263654;
        case 0x263658u: goto label_263658;
        case 0x26365cu: goto label_26365c;
        case 0x263660u: goto label_263660;
        case 0x263664u: goto label_263664;
        case 0x263668u: goto label_263668;
        case 0x26366cu: goto label_26366c;
        case 0x263670u: goto label_263670;
        case 0x263674u: goto label_263674;
        case 0x263678u: goto label_263678;
        case 0x26367cu: goto label_26367c;
        case 0x263680u: goto label_263680;
        case 0x263684u: goto label_263684;
        case 0x263688u: goto label_263688;
        case 0x26368cu: goto label_26368c;
        case 0x263690u: goto label_263690;
        case 0x263694u: goto label_263694;
        case 0x263698u: goto label_263698;
        case 0x26369cu: goto label_26369c;
        case 0x2636a0u: goto label_2636a0;
        case 0x2636a4u: goto label_2636a4;
        case 0x2636a8u: goto label_2636a8;
        case 0x2636acu: goto label_2636ac;
        case 0x2636b0u: goto label_2636b0;
        case 0x2636b4u: goto label_2636b4;
        case 0x2636b8u: goto label_2636b8;
        case 0x2636bcu: goto label_2636bc;
        case 0x2636c0u: goto label_2636c0;
        case 0x2636c4u: goto label_2636c4;
        case 0x2636c8u: goto label_2636c8;
        case 0x2636ccu: goto label_2636cc;
        case 0x2636d0u: goto label_2636d0;
        case 0x2636d4u: goto label_2636d4;
        case 0x2636d8u: goto label_2636d8;
        case 0x2636dcu: goto label_2636dc;
        case 0x2636e0u: goto label_2636e0;
        case 0x2636e4u: goto label_2636e4;
        case 0x2636e8u: goto label_2636e8;
        case 0x2636ecu: goto label_2636ec;
        case 0x2636f0u: goto label_2636f0;
        case 0x2636f4u: goto label_2636f4;
        case 0x2636f8u: goto label_2636f8;
        case 0x2636fcu: goto label_2636fc;
        case 0x263700u: goto label_263700;
        case 0x263704u: goto label_263704;
        case 0x263708u: goto label_263708;
        case 0x26370cu: goto label_26370c;
        case 0x263710u: goto label_263710;
        case 0x263714u: goto label_263714;
        case 0x263718u: goto label_263718;
        case 0x26371cu: goto label_26371c;
        case 0x263720u: goto label_263720;
        case 0x263724u: goto label_263724;
        case 0x263728u: goto label_263728;
        case 0x26372cu: goto label_26372c;
        case 0x263730u: goto label_263730;
        case 0x263734u: goto label_263734;
        case 0x263738u: goto label_263738;
        case 0x26373cu: goto label_26373c;
        case 0x263740u: goto label_263740;
        case 0x263744u: goto label_263744;
        case 0x263748u: goto label_263748;
        case 0x26374cu: goto label_26374c;
        case 0x263750u: goto label_263750;
        case 0x263754u: goto label_263754;
        case 0x263758u: goto label_263758;
        case 0x26375cu: goto label_26375c;
        case 0x263760u: goto label_263760;
        case 0x263764u: goto label_263764;
        case 0x263768u: goto label_263768;
        case 0x26376cu: goto label_26376c;
        case 0x263770u: goto label_263770;
        case 0x263774u: goto label_263774;
        case 0x263778u: goto label_263778;
        case 0x26377cu: goto label_26377c;
        case 0x263780u: goto label_263780;
        case 0x263784u: goto label_263784;
        case 0x263788u: goto label_263788;
        case 0x26378cu: goto label_26378c;
        case 0x263790u: goto label_263790;
        case 0x263794u: goto label_263794;
        case 0x263798u: goto label_263798;
        case 0x26379cu: goto label_26379c;
        case 0x2637a0u: goto label_2637a0;
        case 0x2637a4u: goto label_2637a4;
        case 0x2637a8u: goto label_2637a8;
        case 0x2637acu: goto label_2637ac;
        case 0x2637b0u: goto label_2637b0;
        case 0x2637b4u: goto label_2637b4;
        case 0x2637b8u: goto label_2637b8;
        case 0x2637bcu: goto label_2637bc;
        case 0x2637c0u: goto label_2637c0;
        case 0x2637c4u: goto label_2637c4;
        case 0x2637c8u: goto label_2637c8;
        case 0x2637ccu: goto label_2637cc;
        case 0x2637d0u: goto label_2637d0;
        case 0x2637d4u: goto label_2637d4;
        case 0x2637d8u: goto label_2637d8;
        case 0x2637dcu: goto label_2637dc;
        case 0x2637e0u: goto label_2637e0;
        case 0x2637e4u: goto label_2637e4;
        case 0x2637e8u: goto label_2637e8;
        case 0x2637ecu: goto label_2637ec;
        case 0x2637f0u: goto label_2637f0;
        case 0x2637f4u: goto label_2637f4;
        case 0x2637f8u: goto label_2637f8;
        case 0x2637fcu: goto label_2637fc;
        case 0x263800u: goto label_263800;
        case 0x263804u: goto label_263804;
        case 0x263808u: goto label_263808;
        case 0x26380cu: goto label_26380c;
        case 0x263810u: goto label_263810;
        case 0x263814u: goto label_263814;
        case 0x263818u: goto label_263818;
        case 0x26381cu: goto label_26381c;
        case 0x263820u: goto label_263820;
        case 0x263824u: goto label_263824;
        case 0x263828u: goto label_263828;
        case 0x26382cu: goto label_26382c;
        case 0x263830u: goto label_263830;
        case 0x263834u: goto label_263834;
        case 0x263838u: goto label_263838;
        case 0x26383cu: goto label_26383c;
        case 0x263840u: goto label_263840;
        case 0x263844u: goto label_263844;
        case 0x263848u: goto label_263848;
        case 0x26384cu: goto label_26384c;
        case 0x263850u: goto label_263850;
        case 0x263854u: goto label_263854;
        case 0x263858u: goto label_263858;
        case 0x26385cu: goto label_26385c;
        case 0x263860u: goto label_263860;
        case 0x263864u: goto label_263864;
        case 0x263868u: goto label_263868;
        case 0x26386cu: goto label_26386c;
        case 0x263870u: goto label_263870;
        case 0x263874u: goto label_263874;
        case 0x263878u: goto label_263878;
        case 0x26387cu: goto label_26387c;
        case 0x263880u: goto label_263880;
        case 0x263884u: goto label_263884;
        case 0x263888u: goto label_263888;
        case 0x26388cu: goto label_26388c;
        case 0x263890u: goto label_263890;
        case 0x263894u: goto label_263894;
        case 0x263898u: goto label_263898;
        case 0x26389cu: goto label_26389c;
        case 0x2638a0u: goto label_2638a0;
        case 0x2638a4u: goto label_2638a4;
        case 0x2638a8u: goto label_2638a8;
        case 0x2638acu: goto label_2638ac;
        case 0x2638b0u: goto label_2638b0;
        case 0x2638b4u: goto label_2638b4;
        case 0x2638b8u: goto label_2638b8;
        case 0x2638bcu: goto label_2638bc;
        case 0x2638c0u: goto label_2638c0;
        case 0x2638c4u: goto label_2638c4;
        case 0x2638c8u: goto label_2638c8;
        case 0x2638ccu: goto label_2638cc;
        case 0x2638d0u: goto label_2638d0;
        case 0x2638d4u: goto label_2638d4;
        case 0x2638d8u: goto label_2638d8;
        case 0x2638dcu: goto label_2638dc;
        case 0x2638e0u: goto label_2638e0;
        case 0x2638e4u: goto label_2638e4;
        case 0x2638e8u: goto label_2638e8;
        case 0x2638ecu: goto label_2638ec;
        case 0x2638f0u: goto label_2638f0;
        case 0x2638f4u: goto label_2638f4;
        case 0x2638f8u: goto label_2638f8;
        case 0x2638fcu: goto label_2638fc;
        case 0x263900u: goto label_263900;
        case 0x263904u: goto label_263904;
        case 0x263908u: goto label_263908;
        case 0x26390cu: goto label_26390c;
        case 0x263910u: goto label_263910;
        case 0x263914u: goto label_263914;
        case 0x263918u: goto label_263918;
        case 0x26391cu: goto label_26391c;
        case 0x263920u: goto label_263920;
        case 0x263924u: goto label_263924;
        case 0x263928u: goto label_263928;
        case 0x26392cu: goto label_26392c;
        case 0x263930u: goto label_263930;
        case 0x263934u: goto label_263934;
        case 0x263938u: goto label_263938;
        case 0x26393cu: goto label_26393c;
        case 0x263940u: goto label_263940;
        case 0x263944u: goto label_263944;
        case 0x263948u: goto label_263948;
        case 0x26394cu: goto label_26394c;
        case 0x263950u: goto label_263950;
        case 0x263954u: goto label_263954;
        case 0x263958u: goto label_263958;
        case 0x26395cu: goto label_26395c;
        case 0x263960u: goto label_263960;
        case 0x263964u: goto label_263964;
        case 0x263968u: goto label_263968;
        case 0x26396cu: goto label_26396c;
        case 0x263970u: goto label_263970;
        case 0x263974u: goto label_263974;
        case 0x263978u: goto label_263978;
        case 0x26397cu: goto label_26397c;
        case 0x263980u: goto label_263980;
        case 0x263984u: goto label_263984;
        case 0x263988u: goto label_263988;
        case 0x26398cu: goto label_26398c;
        case 0x263990u: goto label_263990;
        case 0x263994u: goto label_263994;
        case 0x263998u: goto label_263998;
        case 0x26399cu: goto label_26399c;
        case 0x2639a0u: goto label_2639a0;
        case 0x2639a4u: goto label_2639a4;
        case 0x2639a8u: goto label_2639a8;
        case 0x2639acu: goto label_2639ac;
        case 0x2639b0u: goto label_2639b0;
        case 0x2639b4u: goto label_2639b4;
        case 0x2639b8u: goto label_2639b8;
        case 0x2639bcu: goto label_2639bc;
        case 0x2639c0u: goto label_2639c0;
        case 0x2639c4u: goto label_2639c4;
        default: return;
    }

label_2631f8:
    // 0x2631f8: 0x0  nop
    ctx->pc = 0x2631f8u;
    // NOP
label_2631fc:
    // 0x2631fc: 0x0  nop
    ctx->pc = 0x2631fcu;
    // NOP
label_263200:
    // 0x263200: 0xdea9  .word       0x0000DEA9                   # mtsa        $zero # 0000DE80 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x263200u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_263204:
    // 0x263204: 0x8b70  tge         $zero, $zero, 557
    ctx->pc = 0x263204u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263208:
    // 0x263208: 0x0  nop
    ctx->pc = 0x263208u;
    // NOP
label_26320c:
    // 0x26320c: 0x0  nop
    ctx->pc = 0x26320cu;
    // NOP
label_263210:
    // 0x263210: 0xdebb  dsra        $k1, $zero, 26
    ctx->pc = 0x263210u;
    SET_GPR_S64(ctx, 27, GPR_S64(ctx, 0) >> 26);
label_263214:
    // 0x263214: 0xa910  .word       0x0000A910                   # mfhi        $s5 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263214u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_263218:
    // 0x263218: 0x0  nop
    ctx->pc = 0x263218u;
    // NOP
label_26321c:
    // 0x26321c: 0x0  nop
    ctx->pc = 0x26321cu;
    // NOP
label_263220:
    // 0x263220: 0xded1  .word       0x0000DED1                   # mthi        $zero # 0000DEC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263220u;
    ctx->hi = GPR_U64(ctx, 0);
label_263224:
    // 0x263224: 0x6bd0  .word       0x00006BD0                   # mfhi        $t5 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263224u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_263228:
    // 0x263228: 0x0  nop
    ctx->pc = 0x263228u;
    // NOP
label_26322c:
    // 0x26322c: 0x0  nop
    ctx->pc = 0x26322cu;
    // NOP
label_263230:
    // 0x263230: 0xdedf  .word       0x0000DEDF                   # ddivu       $k1, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263230u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x263230 raw=0x0000DEDF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_263234:
    // 0x263234: 0x6630  tge         $zero, $zero, 408
    ctx->pc = 0x263234u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263238:
    // 0x263238: 0x0  nop
    ctx->pc = 0x263238u;
    // NOP
label_26323c:
    // 0x26323c: 0x0  nop
    ctx->pc = 0x26323cu;
    // NOP
label_263240:
    // 0x263240: 0xdeec  .word       0x0000DEEC                   # dadd        $k1, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263240u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 27, r); }
label_263244:
    // 0x263244: 0x6f80  sll         $t5, $zero, 30
    ctx->pc = 0x263244u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_263248:
    // 0x263248: 0x0  nop
    ctx->pc = 0x263248u;
    // NOP
label_26324c:
    // 0x26324c: 0x0  nop
    ctx->pc = 0x26324cu;
    // NOP
label_263250:
    // 0x263250: 0xdefa  dsrl        $k1, $zero, 27
    ctx->pc = 0x263250u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) >> 27);
label_263254:
    // 0x263254: 0x3750  .word       0x00003750                   # mfhi        $a2 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263254u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_263258:
    // 0x263258: 0x0  nop
    ctx->pc = 0x263258u;
    // NOP
label_26325c:
    // 0x26325c: 0x0  nop
    ctx->pc = 0x26325cu;
    // NOP
label_263260:
    // 0x263260: 0xdf01  .word       0x0000DF01                   # INVALID     $zero, $zero, -0x20FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263260u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x263260 raw=0x0000DF01"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_263264:
    // 0x263264: 0x7350  .word       0x00007350                   # mfhi        $t6 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263264u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_263268:
    // 0x263268: 0x0  nop
    ctx->pc = 0x263268u;
    // NOP
label_26326c:
    // 0x26326c: 0x0  nop
    ctx->pc = 0x26326cu;
    // NOP
label_263270:
    // 0x263270: 0xdf10  .word       0x0000DF10                   # mfhi        $k1 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263270u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_263274:
    // 0x263274: 0x6e70  tge         $zero, $zero, 441
    ctx->pc = 0x263274u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263278:
    // 0x263278: 0x0  nop
    ctx->pc = 0x263278u;
    // NOP
label_26327c:
    // 0x26327c: 0x0  nop
    ctx->pc = 0x26327cu;
    // NOP
label_263280:
    // 0x263280: 0xdf1e  .word       0x0000DF1E                   # ddiv        $k1, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263280u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x263280 raw=0x0000DF1E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_263284:
    // 0x263284: 0x7990  .word       0x00007990                   # mfhi        $t7 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263284u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_263288:
    // 0x263288: 0x0  nop
    ctx->pc = 0x263288u;
    // NOP
label_26328c:
    // 0x26328c: 0x0  nop
    ctx->pc = 0x26328cu;
    // NOP
label_263290:
    // 0x263290: 0xdf2e  .word       0x0000DF2E                   # dsub        $k1, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263290u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 27, r); }
label_263294:
    // 0x263294: 0x5550  .word       0x00005550                   # mfhi        $t2 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263294u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_263298:
    // 0x263298: 0x0  nop
    ctx->pc = 0x263298u;
    // NOP
label_26329c:
    // 0x26329c: 0x0  nop
    ctx->pc = 0x26329cu;
    // NOP
label_2632a0:
    // 0x2632a0: 0xdf39  .word       0x0000DF39                   # INVALID     $zero, $zero, -0x20C7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2632a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2632A0 raw=0x0000DF39"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2632a4:
    // 0x2632a4: 0x5b90  .word       0x00005B90                   # mfhi        $t3 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2632a4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_2632a8:
    // 0x2632a8: 0x0  nop
    ctx->pc = 0x2632a8u;
    // NOP
label_2632ac:
    // 0x2632ac: 0x0  nop
    ctx->pc = 0x2632acu;
    // NOP
label_2632b0:
    // 0x2632b0: 0xdf45  .word       0x0000DF45                   # INVALID     $zero, $zero, -0x20BB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2632b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2632B0 raw=0x0000DF45"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2632b4:
    // 0x2632b4: 0x7ac0  sll         $t7, $zero, 11
    ctx->pc = 0x2632b4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_2632b8:
    // 0x2632b8: 0x0  nop
    ctx->pc = 0x2632b8u;
    // NOP
label_2632bc:
    // 0x2632bc: 0x0  nop
    ctx->pc = 0x2632bcu;
    // NOP
label_2632c0:
    // 0x2632c0: 0xdf55  .word       0x0000DF55                   # INVALID     $zero, $zero, -0x20AB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2632c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2632C0 raw=0x0000DF55"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2632c4:
    // 0x2632c4: 0x4070  tge         $zero, $zero, 257
    ctx->pc = 0x2632c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2632c8:
    // 0x2632c8: 0x0  nop
    ctx->pc = 0x2632c8u;
    // NOP
label_2632cc:
    // 0x2632cc: 0x0  nop
    ctx->pc = 0x2632ccu;
    // NOP
label_2632d0:
    // 0x2632d0: 0xdf5e  .word       0x0000DF5E                   # ddiv        $k1, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2632d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2632D0 raw=0x0000DF5E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2632d4:
    // 0x2632d4: 0x3d50  .word       0x00003D50                   # mfhi        $a3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2632d4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_2632d8:
    // 0x2632d8: 0x0  nop
    ctx->pc = 0x2632d8u;
    // NOP
label_2632dc:
    // 0x2632dc: 0x0  nop
    ctx->pc = 0x2632dcu;
    // NOP
label_2632e0:
    // 0x2632e0: 0xdf66  .word       0x0000DF66                   # xor         $k1, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2632e0u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2632e4:
    // 0x2632e4: 0x48c0  sll         $t1, $zero, 3
    ctx->pc = 0x2632e4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_2632e8:
    // 0x2632e8: 0x0  nop
    ctx->pc = 0x2632e8u;
    // NOP
label_2632ec:
    // 0x2632ec: 0x0  nop
    ctx->pc = 0x2632ecu;
    // NOP
label_2632f0:
    // 0x2632f0: 0xdf70  tge         $zero, $zero, 893
    ctx->pc = 0x2632f0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2632f4:
    // 0x2632f4: 0x4c20  .word       0x00004C20                   # add         $t1, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2632f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_2632f8:
    // 0x2632f8: 0x0  nop
    ctx->pc = 0x2632f8u;
    // NOP
label_2632fc:
    // 0x2632fc: 0x0  nop
    ctx->pc = 0x2632fcu;
    // NOP
label_263300:
    // 0x263300: 0xdf7a  dsrl        $k1, $zero, 29
    ctx->pc = 0x263300u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) >> 29);
label_263304:
    // 0x263304: 0x4f00  sll         $t1, $zero, 28
    ctx->pc = 0x263304u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_263308:
    // 0x263308: 0x0  nop
    ctx->pc = 0x263308u;
    // NOP
label_26330c:
    // 0x26330c: 0x0  nop
    ctx->pc = 0x26330cu;
    // NOP
label_263310:
    // 0x263310: 0xdf84  .word       0x0000DF84                   # sllv        $k1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263310u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_263314:
    // 0x263314: 0x7a70  tge         $zero, $zero, 489
    ctx->pc = 0x263314u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263318:
    // 0x263318: 0x0  nop
    ctx->pc = 0x263318u;
    // NOP
label_26331c:
    // 0x26331c: 0x0  nop
    ctx->pc = 0x26331cu;
    // NOP
label_263320:
    // 0x263320: 0xdf94  .word       0x0000DF94                   # dsllv       $k1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263320u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_263324:
    // 0x263324: 0x5e70  tge         $zero, $zero, 377
    ctx->pc = 0x263324u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263328:
    // 0x263328: 0x0  nop
    ctx->pc = 0x263328u;
    // NOP
label_26332c:
    // 0x26332c: 0x0  nop
    ctx->pc = 0x26332cu;
    // NOP
label_263330:
    // 0x263330: 0xdfa0  .word       0x0000DFA0                   # add         $k1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263330u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_263334:
    // 0x263334: 0x4950  .word       0x00004950                   # mfhi        $t1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263334u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_263338:
    // 0x263338: 0x0  nop
    ctx->pc = 0x263338u;
    // NOP
label_26333c:
    // 0x26333c: 0x0  nop
    ctx->pc = 0x26333cu;
    // NOP
label_263340:
    // 0x263340: 0xdfaa  .word       0x0000DFAA                   # slt         $k1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263340u;
    SET_GPR_U64(ctx, 27, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_263344:
    // 0x263344: 0x5d90  .word       0x00005D90                   # mfhi        $t3 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263344u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_263348:
    // 0x263348: 0x0  nop
    ctx->pc = 0x263348u;
    // NOP
label_26334c:
    // 0x26334c: 0x0  nop
    ctx->pc = 0x26334cu;
    // NOP
label_263350:
    // 0x263350: 0xdfb6  tne         $zero, $zero, 894
    ctx->pc = 0x263350u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263354:
    // 0x263354: 0x43e0  .word       0x000043E0                   # add         $t0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263354u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_263358:
    // 0x263358: 0x0  nop
    ctx->pc = 0x263358u;
    // NOP
label_26335c:
    // 0x26335c: 0x0  nop
    ctx->pc = 0x26335cu;
    // NOP
label_263360:
    // 0x263360: 0xdfbf  dsra32      $k1, $zero, 30
    ctx->pc = 0x263360u;
    SET_GPR_S64(ctx, 27, GPR_S64(ctx, 0) >> (32 + 30));
label_263364:
    // 0x263364: 0x6070  tge         $zero, $zero, 385
    ctx->pc = 0x263364u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263368:
    // 0x263368: 0x0  nop
    ctx->pc = 0x263368u;
    // NOP
label_26336c:
    // 0x26336c: 0x0  nop
    ctx->pc = 0x26336cu;
    // NOP
label_263370:
    // 0x263370: 0xdfcc  syscall     895
    ctx->pc = 0x263370u;
    ctx->pc = 0x263374u;
runtime->handleSyscall(rdram, ctx, 0x37Fu);
label_263374:
    // 0x263374: 0x4300  sll         $t0, $zero, 12
    ctx->pc = 0x263374u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_263378:
    // 0x263378: 0x0  nop
    ctx->pc = 0x263378u;
    // NOP
label_26337c:
    // 0x26337c: 0x0  nop
    ctx->pc = 0x26337cu;
    // NOP
label_263380:
    // 0x263380: 0xdfd5  .word       0x0000DFD5                   # INVALID     $zero, $zero, -0x202B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263380u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x263380 raw=0x0000DFD5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_263384:
    // 0x263384: 0x8b50  .word       0x00008B50                   # mfhi        $s1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263384u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_263388:
    // 0x263388: 0x0  nop
    ctx->pc = 0x263388u;
    // NOP
label_26338c:
    // 0x26338c: 0x0  nop
    ctx->pc = 0x26338cu;
    // NOP
label_263390:
    // 0x263390: 0xdfe7  .word       0x0000DFE7                   # not         $k1, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263390u;
    SET_GPR_U64(ctx, 27, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_263394:
    // 0x263394: 0x7750  .word       0x00007750                   # mfhi        $t6 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263394u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_263398:
    // 0x263398: 0x0  nop
    ctx->pc = 0x263398u;
    // NOP
label_26339c:
    // 0x26339c: 0x0  nop
    ctx->pc = 0x26339cu;
    // NOP
label_2633a0:
    // 0x2633a0: 0xdff6  tne         $zero, $zero, 895
    ctx->pc = 0x2633a0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2633a4:
    // 0x2633a4: 0x60c0  sll         $t4, $zero, 3
    ctx->pc = 0x2633a4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_2633a8:
    // 0x2633a8: 0x0  nop
    ctx->pc = 0x2633a8u;
    // NOP
label_2633ac:
    // 0x2633ac: 0x0  nop
    ctx->pc = 0x2633acu;
    // NOP
label_2633b0:
    // 0x2633b0: 0xe003  sra         $gp, $zero, 0
    ctx->pc = 0x2633b0u;
    SET_GPR_S32(ctx, 28, SRA32(GPR_S32(ctx, 0), 0));
label_2633b4:
    // 0x2633b4: 0x2d90  .word       0x00002D90                   # mfhi        $a1 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2633b4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_2633b8:
    // 0x2633b8: 0x0  nop
    ctx->pc = 0x2633b8u;
    // NOP
label_2633bc:
    // 0x2633bc: 0x0  nop
    ctx->pc = 0x2633bcu;
    // NOP
label_2633c0:
    // 0x2633c0: 0xe009  jalr        $gp, $zero
label_2633c4:
    if (ctx->pc == 0x2633C4u) {
        ctx->pc = 0x2633C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2633C0u;
        // 0x2633c4: 0x53e0  .word       0x000053E0                   # add         $t2, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2633C8u;
        goto label_2633c8;
    }
    ctx->pc = 0x2633C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 28, 0x2633C8u);
        ctx->pc = 0x2633C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2633C0u;
        // 0x2633c4: 0x53e0  .word       0x000053E0                   # add         $t2, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2633C0u, 0x2633C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2633C8u;
label_2633c8:
    // 0x2633c8: 0x0  nop
    ctx->pc = 0x2633c8u;
    // NOP
label_2633cc:
    // 0x2633cc: 0x0  nop
    ctx->pc = 0x2633ccu;
    // NOP
label_2633d0:
    // 0x2633d0: 0xe014  dsllv       $gp, $zero, $zero
    ctx->pc = 0x2633d0u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2633d4:
    // 0x2633d4: 0x8220  .word       0x00008220                   # add         $s0, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2633d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2633d8:
    // 0x2633d8: 0x0  nop
    ctx->pc = 0x2633d8u;
    // NOP
label_2633dc:
    // 0x2633dc: 0x0  nop
    ctx->pc = 0x2633dcu;
    // NOP
label_2633e0:
    // 0x2633e0: 0xe025  move        $gp, $zero
    ctx->pc = 0x2633e0u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2633e4:
    // 0x2633e4: 0x8df0  tge         $zero, $zero, 567
    ctx->pc = 0x2633e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2633e8:
    // 0x2633e8: 0x0  nop
    ctx->pc = 0x2633e8u;
    // NOP
label_2633ec:
    // 0x2633ec: 0x0  nop
    ctx->pc = 0x2633ecu;
    // NOP
label_2633f0:
    // 0x2633f0: 0xe037  .word       0x0000E037                   # INVALID     $zero, $zero, -0x1FC9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2633f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2633F0 raw=0x0000E037"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2633f4:
    // 0x2633f4: 0x5fb0  tge         $zero, $zero, 382
    ctx->pc = 0x2633f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2633f8:
    // 0x2633f8: 0x0  nop
    ctx->pc = 0x2633f8u;
    // NOP
label_2633fc:
    // 0x2633fc: 0x0  nop
    ctx->pc = 0x2633fcu;
    // NOP
label_263400:
    // 0x263400: 0xe043  sra         $gp, $zero, 1
    ctx->pc = 0x263400u;
    SET_GPR_S32(ctx, 28, SRA32(GPR_S32(ctx, 0), 1));
label_263404:
    // 0x263404: 0x7790  .word       0x00007790                   # mfhi        $t6 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263404u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_263408:
    // 0x263408: 0x0  nop
    ctx->pc = 0x263408u;
    // NOP
label_26340c:
    // 0x26340c: 0x0  nop
    ctx->pc = 0x26340cu;
    // NOP
label_263410:
    // 0x263410: 0xe052  .word       0x0000E052                   # mflo        $gp # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263410u;
    SET_GPR_U64(ctx, 28, ctx->lo);
label_263414:
    // 0x263414: 0xcb30  tge         $zero, $zero, 812
    ctx->pc = 0x263414u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263418:
    // 0x263418: 0x0  nop
    ctx->pc = 0x263418u;
    // NOP
label_26341c:
    // 0x26341c: 0x0  nop
    ctx->pc = 0x26341cu;
    // NOP
label_263420:
    // 0x263420: 0xe06c  .word       0x0000E06C                   # dadd        $gp, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263420u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 28, r); }
label_263424:
    // 0x263424: 0x8910  .word       0x00008910                   # mfhi        $s1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263424u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_263428:
    // 0x263428: 0x0  nop
    ctx->pc = 0x263428u;
    // NOP
label_26342c:
    // 0x26342c: 0x0  nop
    ctx->pc = 0x26342cu;
    // NOP
label_263430:
    // 0x263430: 0xe07e  dsrl32      $gp, $zero, 1
    ctx->pc = 0x263430u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) >> (32 + 1));
label_263434:
    // 0x263434: 0x6680  sll         $t4, $zero, 26
    ctx->pc = 0x263434u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_263438:
    // 0x263438: 0x0  nop
    ctx->pc = 0x263438u;
    // NOP
label_26343c:
    // 0x26343c: 0x0  nop
    ctx->pc = 0x26343cu;
    // NOP
label_263440:
    // 0x263440: 0xe08b  .word       0x0000E08B                   # movn        $gp, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263440u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 28, GPR_VEC(ctx, 0));
label_263444:
    // 0x263444: 0x6240  sll         $t4, $zero, 9
    ctx->pc = 0x263444u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_263448:
    // 0x263448: 0x0  nop
    ctx->pc = 0x263448u;
    // NOP
label_26344c:
    // 0x26344c: 0x0  nop
    ctx->pc = 0x26344cu;
    // NOP
label_263450:
    // 0x263450: 0xe098  .word       0x0000E098                   # mult        $gp, $zero, $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x263450u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 28, (int32_t)result); }
label_263454:
    // 0x263454: 0x47c0  sll         $t0, $zero, 31
    ctx->pc = 0x263454u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_263458:
    // 0x263458: 0x0  nop
    ctx->pc = 0x263458u;
    // NOP
label_26345c:
    // 0x26345c: 0x0  nop
    ctx->pc = 0x26345cu;
    // NOP
label_263460:
    // 0x263460: 0xe0a1  .word       0x0000E0A1                   # addu        $gp, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263460u;
    SET_GPR_S32(ctx, 28, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_263464:
    // 0x263464: 0x5af0  tge         $zero, $zero, 363
    ctx->pc = 0x263464u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263468:
    // 0x263468: 0x0  nop
    ctx->pc = 0x263468u;
    // NOP
label_26346c:
    // 0x26346c: 0x0  nop
    ctx->pc = 0x26346cu;
    // NOP
label_263470:
    // 0x263470: 0xe0ad  .word       0x0000E0AD                   # daddu       $gp, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263470u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_263474:
    // 0x263474: 0x3bd0  .word       0x00003BD0                   # mfhi        $a3 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263474u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_263478:
    // 0x263478: 0x0  nop
    ctx->pc = 0x263478u;
    // NOP
label_26347c:
    // 0x26347c: 0x0  nop
    ctx->pc = 0x26347cu;
    // NOP
label_263480:
    // 0x263480: 0xe0b5  .word       0x0000E0B5                   # INVALID     $zero, $zero, -0x1F4B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263480u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x263480 raw=0x0000E0B5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_263484:
    // 0x263484: 0x7860  .word       0x00007860                   # add         $t7, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263484u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_263488:
    // 0x263488: 0x0  nop
    ctx->pc = 0x263488u;
    // NOP
label_26348c:
    // 0x26348c: 0x0  nop
    ctx->pc = 0x26348cu;
    // NOP
label_263490:
    // 0x263490: 0xe0c5  .word       0x0000E0C5                   # INVALID     $zero, $zero, -0x1F3B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263490u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x263490 raw=0x0000E0C5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_263494:
    // 0x263494: 0x9190  .word       0x00009190                   # mfhi        $s2 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263494u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_263498:
    // 0x263498: 0x0  nop
    ctx->pc = 0x263498u;
    // NOP
label_26349c:
    // 0x26349c: 0x0  nop
    ctx->pc = 0x26349cu;
    // NOP
label_2634a0:
    // 0x2634a0: 0xe0d8  .word       0x0000E0D8                   # mult        $gp, $zero, $zero # 000000C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2634a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 28, (int32_t)result); }
label_2634a4:
    // 0x2634a4: 0x5d80  sll         $t3, $zero, 22
    ctx->pc = 0x2634a4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_2634a8:
    // 0x2634a8: 0x0  nop
    ctx->pc = 0x2634a8u;
    // NOP
label_2634ac:
    // 0x2634ac: 0x0  nop
    ctx->pc = 0x2634acu;
    // NOP
label_2634b0:
    // 0x2634b0: 0xe0e4  .word       0x0000E0E4                   # and         $gp, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2634b0u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2634b4:
    // 0x2634b4: 0x5190  .word       0x00005190                   # mfhi        $t2 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2634b4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_2634b8:
    // 0x2634b8: 0x0  nop
    ctx->pc = 0x2634b8u;
    // NOP
label_2634bc:
    // 0x2634bc: 0x0  nop
    ctx->pc = 0x2634bcu;
    // NOP
label_2634c0:
    // 0x2634c0: 0xe0ef  .word       0x0000E0EF                   # dsubu       $gp, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2634c0u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2634c4:
    // 0x2634c4: 0x5490  .word       0x00005490                   # mfhi        $t2 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2634c4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_2634c8:
    // 0x2634c8: 0x0  nop
    ctx->pc = 0x2634c8u;
    // NOP
label_2634cc:
    // 0x2634cc: 0x0  nop
    ctx->pc = 0x2634ccu;
    // NOP
label_2634d0:
    // 0x2634d0: 0xe0fa  dsrl        $gp, $zero, 3
    ctx->pc = 0x2634d0u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) >> 3);
label_2634d4:
    // 0x2634d4: 0x7500  sll         $t6, $zero, 20
    ctx->pc = 0x2634d4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_2634d8:
    // 0x2634d8: 0x0  nop
    ctx->pc = 0x2634d8u;
    // NOP
label_2634dc:
    // 0x2634dc: 0x0  nop
    ctx->pc = 0x2634dcu;
    // NOP
label_2634e0:
    // 0x2634e0: 0xe109  .word       0x0000E109                   # jalr        $gp, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
label_2634e4:
    if (ctx->pc == 0x2634E4u) {
        ctx->pc = 0x2634E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2634E0u;
        // 0x2634e4: 0x7790  .word       0x00007790                   # mfhi        $t6 # 00000780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 14, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2634E8u;
        goto label_2634e8;
    }
    ctx->pc = 0x2634E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 28, 0x2634E8u);
        ctx->pc = 0x2634E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2634E0u;
        // 0x2634e4: 0x7790  .word       0x00007790                   # mfhi        $t6 # 00000780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 14, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2634E0u, 0x2634E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2634E8u;
label_2634e8:
    // 0x2634e8: 0x0  nop
    ctx->pc = 0x2634e8u;
    // NOP
label_2634ec:
    // 0x2634ec: 0x0  nop
    ctx->pc = 0x2634ecu;
    // NOP
label_2634f0:
    // 0x2634f0: 0xe118  .word       0x0000E118                   # mult        $gp, $zero, $zero # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2634f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 28, (int32_t)result); }
label_2634f4:
    // 0x2634f4: 0x7420  .word       0x00007420                   # add         $t6, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2634f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_2634f8:
    // 0x2634f8: 0x0  nop
    ctx->pc = 0x2634f8u;
    // NOP
label_2634fc:
    // 0x2634fc: 0x0  nop
    ctx->pc = 0x2634fcu;
    // NOP
label_263500:
    // 0x263500: 0xe127  .word       0x0000E127                   # not         $gp, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263500u;
    SET_GPR_U64(ctx, 28, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_263504:
    // 0x263504: 0xa610  .word       0x0000A610                   # mfhi        $s4 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263504u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_263508:
    // 0x263508: 0x0  nop
    ctx->pc = 0x263508u;
    // NOP
label_26350c:
    // 0x26350c: 0x0  nop
    ctx->pc = 0x26350cu;
    // NOP
label_263510:
    // 0x263510: 0xe13c  dsll32      $gp, $zero, 4
    ctx->pc = 0x263510u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) << (32 + 4));
label_263514:
    // 0x263514: 0x3a20  .word       0x00003A20                   # add         $a3, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263514u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_263518:
    // 0x263518: 0x0  nop
    ctx->pc = 0x263518u;
    // NOP
label_26351c:
    // 0x26351c: 0x0  nop
    ctx->pc = 0x26351cu;
    // NOP
label_263520:
    // 0x263520: 0xe144  .word       0x0000E144                   # sllv        $gp, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263520u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_263524:
    // 0x263524: 0x4ac0  sll         $t1, $zero, 11
    ctx->pc = 0x263524u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_263528:
    // 0x263528: 0x0  nop
    ctx->pc = 0x263528u;
    // NOP
label_26352c:
    // 0x26352c: 0x0  nop
    ctx->pc = 0x26352cu;
    // NOP
label_263530:
    // 0x263530: 0xe14e  .word       0x0000E14E                   # INVALID     $zero, $zero, -0x1EB2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263530u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x263530 raw=0x0000E14E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_263534:
    // 0x263534: 0x5b50  .word       0x00005B50                   # mfhi        $t3 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263534u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_263538:
    // 0x263538: 0x0  nop
    ctx->pc = 0x263538u;
    // NOP
label_26353c:
    // 0x26353c: 0x0  nop
    ctx->pc = 0x26353cu;
    // NOP
label_263540:
    // 0x263540: 0xe15a  .word       0x0000E15A                   # div         $gp, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263540u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_263544:
    // 0x263544: 0x8350  .word       0x00008350                   # mfhi        $s0 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263544u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_263548:
    // 0x263548: 0x0  nop
    ctx->pc = 0x263548u;
    // NOP
label_26354c:
    // 0x26354c: 0x0  nop
    ctx->pc = 0x26354cu;
    // NOP
label_263550:
    // 0x263550: 0xe16b  .word       0x0000E16B                   # sltu        $gp, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263550u;
    SET_GPR_U64(ctx, 28, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_263554:
    // 0x263554: 0x44c0  sll         $t0, $zero, 19
    ctx->pc = 0x263554u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_263558:
    // 0x263558: 0x0  nop
    ctx->pc = 0x263558u;
    // NOP
label_26355c:
    // 0x26355c: 0x0  nop
    ctx->pc = 0x26355cu;
    // NOP
label_263560:
    // 0x263560: 0xe174  teq         $zero, $zero, 901
    ctx->pc = 0x263560u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263564:
    // 0x263564: 0x6550  .word       0x00006550                   # mfhi        $t4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263564u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_263568:
    // 0x263568: 0x0  nop
    ctx->pc = 0x263568u;
    // NOP
label_26356c:
    // 0x26356c: 0x0  nop
    ctx->pc = 0x26356cu;
    // NOP
label_263570:
    // 0x263570: 0xe181  .word       0x0000E181                   # INVALID     $zero, $zero, -0x1E7F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263570u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x263570 raw=0x0000E181"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_263574:
    // 0x263574: 0x5950  .word       0x00005950                   # mfhi        $t3 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263574u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_263578:
    // 0x263578: 0x0  nop
    ctx->pc = 0x263578u;
    // NOP
label_26357c:
    // 0x26357c: 0x0  nop
    ctx->pc = 0x26357cu;
    // NOP
label_263580:
    // 0x263580: 0xe18d  break       0, 902
    ctx->pc = 0x263580u;
    runtime->handleBreak(rdram, ctx);
label_263584:
    // 0x263584: 0x8550  .word       0x00008550                   # mfhi        $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263584u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_263588:
    // 0x263588: 0x0  nop
    ctx->pc = 0x263588u;
    // NOP
label_26358c:
    // 0x26358c: 0x0  nop
    ctx->pc = 0x26358cu;
    // NOP
label_263590:
    // 0x263590: 0xe19e  .word       0x0000E19E                   # ddiv        $gp, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263590u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x263590 raw=0x0000E19E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_263594:
    // 0x263594: 0x4fe0  .word       0x00004FE0                   # add         $t1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263594u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_263598:
    // 0x263598: 0x0  nop
    ctx->pc = 0x263598u;
    // NOP
label_26359c:
    // 0x26359c: 0x0  nop
    ctx->pc = 0x26359cu;
    // NOP
label_2635a0:
    // 0x2635a0: 0xe1a8  .word       0x0000E1A8                   # mfsa        $gp # 00000180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2635a0u;
    SET_GPR_U32(ctx, 28, ctx->sa);
label_2635a4:
    // 0x2635a4: 0x30c0  sll         $a2, $zero, 3
    ctx->pc = 0x2635a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_2635a8:
    // 0x2635a8: 0x0  nop
    ctx->pc = 0x2635a8u;
    // NOP
label_2635ac:
    // 0x2635ac: 0x0  nop
    ctx->pc = 0x2635acu;
    // NOP
label_2635b0:
    // 0x2635b0: 0xe1af  .word       0x0000E1AF                   # dsubu       $gp, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2635b0u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2635b4:
    // 0x2635b4: 0x71e0  .word       0x000071E0                   # add         $t6, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2635b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_2635b8:
    // 0x2635b8: 0x0  nop
    ctx->pc = 0x2635b8u;
    // NOP
label_2635bc:
    // 0x2635bc: 0x0  nop
    ctx->pc = 0x2635bcu;
    // NOP
label_2635c0:
    // 0x2635c0: 0xe1be  dsrl32      $gp, $zero, 6
    ctx->pc = 0x2635c0u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) >> (32 + 6));
label_2635c4:
    // 0x2635c4: 0x7070  tge         $zero, $zero, 449
    ctx->pc = 0x2635c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2635c8:
    // 0x2635c8: 0x0  nop
    ctx->pc = 0x2635c8u;
    // NOP
label_2635cc:
    // 0x2635cc: 0x0  nop
    ctx->pc = 0x2635ccu;
    // NOP
label_2635d0:
    // 0x2635d0: 0xe1cd  break       0, 903
    ctx->pc = 0x2635d0u;
    runtime->handleBreak(rdram, ctx);
label_2635d4:
    // 0x2635d4: 0x34c0  sll         $a2, $zero, 19
    ctx->pc = 0x2635d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_2635d8:
    // 0x2635d8: 0x0  nop
    ctx->pc = 0x2635d8u;
    // NOP
label_2635dc:
    // 0x2635dc: 0x0  nop
    ctx->pc = 0x2635dcu;
    // NOP
label_2635e0:
    // 0x2635e0: 0xe1d4  .word       0x0000E1D4                   # dsllv       $gp, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2635e0u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2635e4:
    // 0x2635e4: 0x6900  sll         $t5, $zero, 4
    ctx->pc = 0x2635e4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_2635e8:
    // 0x2635e8: 0x0  nop
    ctx->pc = 0x2635e8u;
    // NOP
label_2635ec:
    // 0x2635ec: 0x0  nop
    ctx->pc = 0x2635ecu;
    // NOP
label_2635f0:
    // 0x2635f0: 0xe1e2  .word       0x0000E1E2                   # neg         $gp, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2635f0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 28, (int32_t)tmp); }
label_2635f4:
    // 0x2635f4: 0x3f50  .word       0x00003F50                   # mfhi        $a3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2635f4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_2635f8:
    // 0x2635f8: 0x0  nop
    ctx->pc = 0x2635f8u;
    // NOP
label_2635fc:
    // 0x2635fc: 0x0  nop
    ctx->pc = 0x2635fcu;
    // NOP
label_263600:
    // 0x263600: 0xe1ea  .word       0x0000E1EA                   # slt         $gp, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263600u;
    SET_GPR_U64(ctx, 28, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_263604:
    // 0x263604: 0x6f00  sll         $t5, $zero, 28
    ctx->pc = 0x263604u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_263608:
    // 0x263608: 0x0  nop
    ctx->pc = 0x263608u;
    // NOP
label_26360c:
    // 0x26360c: 0x0  nop
    ctx->pc = 0x26360cu;
    // NOP
label_263610:
    // 0x263610: 0xe1f8  dsll        $gp, $zero, 7
    ctx->pc = 0x263610u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) << 7);
label_263614:
    // 0x263614: 0x4590  .word       0x00004590                   # mfhi        $t0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263614u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_263618:
    // 0x263618: 0x0  nop
    ctx->pc = 0x263618u;
    // NOP
label_26361c:
    // 0x26361c: 0x0  nop
    ctx->pc = 0x26361cu;
    // NOP
label_263620:
    // 0x263620: 0xe201  .word       0x0000E201                   # INVALID     $zero, $zero, -0x1DFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263620u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x263620 raw=0x0000E201"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_263624:
    // 0x263624: 0x4f90  .word       0x00004F90                   # mfhi        $t1 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263624u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_263628:
    // 0x263628: 0x0  nop
    ctx->pc = 0x263628u;
    // NOP
label_26362c:
    // 0x26362c: 0x0  nop
    ctx->pc = 0x26362cu;
    // NOP
label_263630:
    // 0x263630: 0xe20b  .word       0x0000E20B                   # movn        $gp, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263630u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 28, GPR_VEC(ctx, 0));
label_263634:
    // 0x263634: 0x6950  .word       0x00006950                   # mfhi        $t5 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263634u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_263638:
    // 0x263638: 0x0  nop
    ctx->pc = 0x263638u;
    // NOP
label_26363c:
    // 0x26363c: 0x0  nop
    ctx->pc = 0x26363cu;
    // NOP
label_263640:
    // 0x263640: 0xe219  .word       0x0000E219                   # multu       $zero, $zero # 0000E200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263640u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 28, (int32_t)result); }
label_263644:
    // 0x263644: 0x4f30  tge         $zero, $zero, 316
    ctx->pc = 0x263644u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263648:
    // 0x263648: 0x0  nop
    ctx->pc = 0x263648u;
    // NOP
label_26364c:
    // 0x26364c: 0x0  nop
    ctx->pc = 0x26364cu;
    // NOP
label_263650:
    // 0x263650: 0xe223  .word       0x0000E223                   # negu        $gp, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263650u;
    SET_GPR_S32(ctx, 28, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_263654:
    // 0x263654: 0x4790  .word       0x00004790                   # mfhi        $t0 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263654u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_263658:
    // 0x263658: 0x0  nop
    ctx->pc = 0x263658u;
    // NOP
label_26365c:
    // 0x26365c: 0x0  nop
    ctx->pc = 0x26365cu;
    // NOP
label_263660:
    // 0x263660: 0xe22c  .word       0x0000E22C                   # dadd        $gp, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263660u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 28, r); }
label_263664:
    // 0x263664: 0x57a0  .word       0x000057A0                   # add         $t2, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263664u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_263668:
    // 0x263668: 0x0  nop
    ctx->pc = 0x263668u;
    // NOP
label_26366c:
    // 0x26366c: 0x0  nop
    ctx->pc = 0x26366cu;
    // NOP
label_263670:
    // 0x263670: 0xe237  .word       0x0000E237                   # INVALID     $zero, $zero, -0x1DC9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263670u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x263670 raw=0x0000E237"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_263674:
    // 0x263674: 0x9b60  .word       0x00009B60                   # add         $s3, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263674u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_263678:
    // 0x263678: 0x0  nop
    ctx->pc = 0x263678u;
    // NOP
label_26367c:
    // 0x26367c: 0x0  nop
    ctx->pc = 0x26367cu;
    // NOP
label_263680:
    // 0x263680: 0xe24b  .word       0x0000E24B                   # movn        $gp, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263680u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 28, GPR_VEC(ctx, 0));
label_263684:
    // 0x263684: 0x36a0  .word       0x000036A0                   # add         $a2, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263684u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_263688:
    // 0x263688: 0x0  nop
    ctx->pc = 0x263688u;
    // NOP
label_26368c:
    // 0x26368c: 0x0  nop
    ctx->pc = 0x26368cu;
    // NOP
label_263690:
    // 0x263690: 0xe252  .word       0x0000E252                   # mflo        $gp # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263690u;
    SET_GPR_U64(ctx, 28, ctx->lo);
label_263694:
    // 0x263694: 0x57a0  .word       0x000057A0                   # add         $t2, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263694u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_263698:
    // 0x263698: 0x0  nop
    ctx->pc = 0x263698u;
    // NOP
label_26369c:
    // 0x26369c: 0x0  nop
    ctx->pc = 0x26369cu;
    // NOP
label_2636a0:
    // 0x2636a0: 0xe25d  .word       0x0000E25D                   # dmultu      $zero, $zero # 0000E240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2636a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2636A0 raw=0x0000E25D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2636a4:
    // 0x2636a4: 0x6bd0  .word       0x00006BD0                   # mfhi        $t5 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2636a4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_2636a8:
    // 0x2636a8: 0x0  nop
    ctx->pc = 0x2636a8u;
    // NOP
label_2636ac:
    // 0x2636ac: 0x0  nop
    ctx->pc = 0x2636acu;
    // NOP
label_2636b0:
    // 0x2636b0: 0xe26b  .word       0x0000E26B                   # sltu        $gp, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2636b0u;
    SET_GPR_U64(ctx, 28, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_2636b4:
    // 0x2636b4: 0x6fc0  sll         $t5, $zero, 31
    ctx->pc = 0x2636b4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_2636b8:
    // 0x2636b8: 0x0  nop
    ctx->pc = 0x2636b8u;
    // NOP
label_2636bc:
    // 0x2636bc: 0x0  nop
    ctx->pc = 0x2636bcu;
    // NOP
label_2636c0:
    // 0x2636c0: 0xe279  .word       0x0000E279                   # INVALID     $zero, $zero, -0x1D87 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2636c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2636C0 raw=0x0000E279"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2636c4:
    // 0x2636c4: 0x4290  .word       0x00004290                   # mfhi        $t0 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2636c4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_2636c8:
    // 0x2636c8: 0x0  nop
    ctx->pc = 0x2636c8u;
    // NOP
label_2636cc:
    // 0x2636cc: 0x0  nop
    ctx->pc = 0x2636ccu;
    // NOP
label_2636d0:
    // 0x2636d0: 0xe282  srl         $gp, $zero, 10
    ctx->pc = 0x2636d0u;
    SET_GPR_S32(ctx, 28, (int32_t)SRL32(GPR_U32(ctx, 0), 10));
label_2636d4:
    // 0x2636d4: 0x3dd0  .word       0x00003DD0                   # mfhi        $a3 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2636d4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_2636d8:
    // 0x2636d8: 0x0  nop
    ctx->pc = 0x2636d8u;
    // NOP
label_2636dc:
    // 0x2636dc: 0x0  nop
    ctx->pc = 0x2636dcu;
    // NOP
label_2636e0:
    // 0x2636e0: 0xe28a  .word       0x0000E28A                   # movz        $gp, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2636e0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 28, GPR_VEC(ctx, 0));
label_2636e4:
    // 0x2636e4: 0x6e40  sll         $t5, $zero, 25
    ctx->pc = 0x2636e4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_2636e8:
    // 0x2636e8: 0x0  nop
    ctx->pc = 0x2636e8u;
    // NOP
label_2636ec:
    // 0x2636ec: 0x0  nop
    ctx->pc = 0x2636ecu;
    // NOP
label_2636f0:
    // 0x2636f0: 0xe298  .word       0x0000E298                   # mult        $gp, $zero, $zero # 00000280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2636f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 28, (int32_t)result); }
label_2636f4:
    // 0x2636f4: 0x8650  .word       0x00008650                   # mfhi        $s0 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2636f4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_2636f8:
    // 0x2636f8: 0x0  nop
    ctx->pc = 0x2636f8u;
    // NOP
label_2636fc:
    // 0x2636fc: 0x0  nop
    ctx->pc = 0x2636fcu;
    // NOP
label_263700:
    // 0x263700: 0xe2a9  .word       0x0000E2A9                   # mtsa        $zero # 0000E280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x263700u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_263704:
    // 0x263704: 0x47d0  .word       0x000047D0                   # mfhi        $t0 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263704u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_263708:
    // 0x263708: 0x0  nop
    ctx->pc = 0x263708u;
    // NOP
label_26370c:
    // 0x26370c: 0x0  nop
    ctx->pc = 0x26370cu;
    // NOP
label_263710:
    // 0x263710: 0xe2b2  tlt         $zero, $zero, 906
    ctx->pc = 0x263710u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263714:
    // 0x263714: 0x4300  sll         $t0, $zero, 12
    ctx->pc = 0x263714u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_263718:
    // 0x263718: 0x0  nop
    ctx->pc = 0x263718u;
    // NOP
label_26371c:
    // 0x26371c: 0x0  nop
    ctx->pc = 0x26371cu;
    // NOP
label_263720:
    // 0x263720: 0xe2bb  dsra        $gp, $zero, 10
    ctx->pc = 0x263720u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> 10);
label_263724:
    // 0x263724: 0x5ce0  .word       0x00005CE0                   # add         $t3, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263724u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_263728:
    // 0x263728: 0x0  nop
    ctx->pc = 0x263728u;
    // NOP
label_26372c:
    // 0x26372c: 0x0  nop
    ctx->pc = 0x26372cu;
    // NOP
label_263730:
    // 0x263730: 0xe2c7  .word       0x0000E2C7                   # srav        $gp, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263730u;
    SET_GPR_S32(ctx, 28, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_263734:
    // 0x263734: 0x6820  add         $t5, $zero, $zero
    ctx->pc = 0x263734u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_263738:
    // 0x263738: 0x0  nop
    ctx->pc = 0x263738u;
    // NOP
label_26373c:
    // 0x26373c: 0x0  nop
    ctx->pc = 0x26373cu;
    // NOP
label_263740:
    // 0x263740: 0xe2d5  .word       0x0000E2D5                   # INVALID     $zero, $zero, -0x1D2B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263740u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x263740 raw=0x0000E2D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_263744:
    // 0x263744: 0x4f30  tge         $zero, $zero, 316
    ctx->pc = 0x263744u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263748:
    // 0x263748: 0x0  nop
    ctx->pc = 0x263748u;
    // NOP
label_26374c:
    // 0x26374c: 0x0  nop
    ctx->pc = 0x26374cu;
    // NOP
label_263750:
    // 0x263750: 0xe2df  .word       0x0000E2DF                   # ddivu       $gp, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263750u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x263750 raw=0x0000E2DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_263754:
    // 0x263754: 0x56c0  sll         $t2, $zero, 27
    ctx->pc = 0x263754u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_263758:
    // 0x263758: 0x0  nop
    ctx->pc = 0x263758u;
    // NOP
label_26375c:
    // 0x26375c: 0x0  nop
    ctx->pc = 0x26375cu;
    // NOP
label_263760:
    // 0x263760: 0xe2ea  .word       0x0000E2EA                   # slt         $gp, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263760u;
    SET_GPR_U64(ctx, 28, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_263764:
    // 0x263764: 0x5700  sll         $t2, $zero, 28
    ctx->pc = 0x263764u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_263768:
    // 0x263768: 0x0  nop
    ctx->pc = 0x263768u;
    // NOP
label_26376c:
    // 0x26376c: 0x0  nop
    ctx->pc = 0x26376cu;
    // NOP
label_263770:
    // 0x263770: 0xe2f5  .word       0x0000E2F5                   # INVALID     $zero, $zero, -0x1D0B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263770u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x263770 raw=0x0000E2F5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_263774:
    // 0x263774: 0x5620  .word       0x00005620                   # add         $t2, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263774u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_263778:
    // 0x263778: 0x0  nop
    ctx->pc = 0x263778u;
    // NOP
label_26377c:
    // 0x26377c: 0x0  nop
    ctx->pc = 0x26377cu;
    // NOP
label_263780:
    // 0x263780: 0xe300  sll         $gp, $zero, 12
    ctx->pc = 0x263780u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_263784:
    // 0x263784: 0x56c0  sll         $t2, $zero, 27
    ctx->pc = 0x263784u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_263788:
    // 0x263788: 0x0  nop
    ctx->pc = 0x263788u;
    // NOP
label_26378c:
    // 0x26378c: 0x0  nop
    ctx->pc = 0x26378cu;
    // NOP
label_263790:
    // 0x263790: 0xe30b  .word       0x0000E30B                   # movn        $gp, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263790u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 28, GPR_VEC(ctx, 0));
label_263794:
    // 0x263794: 0x8f90  .word       0x00008F90                   # mfhi        $s1 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263794u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_263798:
    // 0x263798: 0x0  nop
    ctx->pc = 0x263798u;
    // NOP
label_26379c:
    // 0x26379c: 0x0  nop
    ctx->pc = 0x26379cu;
    // NOP
label_2637a0:
    // 0x2637a0: 0xe31d  .word       0x0000E31D                   # dmultu      $zero, $zero # 0000E300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2637a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2637A0 raw=0x0000E31D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2637a4:
    // 0x2637a4: 0x9d00  sll         $s3, $zero, 20
    ctx->pc = 0x2637a4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_2637a8:
    // 0x2637a8: 0x0  nop
    ctx->pc = 0x2637a8u;
    // NOP
label_2637ac:
    // 0x2637ac: 0x0  nop
    ctx->pc = 0x2637acu;
    // NOP
label_2637b0:
    // 0x2637b0: 0xe331  tgeu        $zero, $zero, 908
    ctx->pc = 0x2637b0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2637b4:
    // 0x2637b4: 0x8220  .word       0x00008220                   # add         $s0, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2637b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2637b8:
    // 0x2637b8: 0x0  nop
    ctx->pc = 0x2637b8u;
    // NOP
label_2637bc:
    // 0x2637bc: 0x0  nop
    ctx->pc = 0x2637bcu;
    // NOP
label_2637c0:
    // 0x2637c0: 0xe342  srl         $gp, $zero, 13
    ctx->pc = 0x2637c0u;
    SET_GPR_S32(ctx, 28, (int32_t)SRL32(GPR_U32(ctx, 0), 13));
label_2637c4:
    // 0x2637c4: 0x6ac0  sll         $t5, $zero, 11
    ctx->pc = 0x2637c4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_2637c8:
    // 0x2637c8: 0x0  nop
    ctx->pc = 0x2637c8u;
    // NOP
label_2637cc:
    // 0x2637cc: 0x0  nop
    ctx->pc = 0x2637ccu;
    // NOP
label_2637d0:
    // 0x2637d0: 0xe350  .word       0x0000E350                   # mfhi        $gp # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2637d0u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_2637d4:
    // 0x2637d4: 0x5fe0  .word       0x00005FE0                   # add         $t3, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2637d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2637d8:
    // 0x2637d8: 0x0  nop
    ctx->pc = 0x2637d8u;
    // NOP
label_2637dc:
    // 0x2637dc: 0x0  nop
    ctx->pc = 0x2637dcu;
    // NOP
label_2637e0:
    // 0x2637e0: 0xe35c  .word       0x0000E35C                   # dmult       $zero, $zero # 0000E340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2637e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2637E0 raw=0x0000E35C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2637e4:
    // 0x2637e4: 0x5790  .word       0x00005790                   # mfhi        $t2 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2637e4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_2637e8:
    // 0x2637e8: 0x0  nop
    ctx->pc = 0x2637e8u;
    // NOP
label_2637ec:
    // 0x2637ec: 0x0  nop
    ctx->pc = 0x2637ecu;
    // NOP
label_2637f0:
    // 0x2637f0: 0xe367  .word       0x0000E367                   # not         $gp, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2637f0u;
    SET_GPR_U64(ctx, 28, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2637f4:
    // 0x2637f4: 0x3700  sll         $a2, $zero, 28
    ctx->pc = 0x2637f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_2637f8:
    // 0x2637f8: 0x0  nop
    ctx->pc = 0x2637f8u;
    // NOP
label_2637fc:
    // 0x2637fc: 0x0  nop
    ctx->pc = 0x2637fcu;
    // NOP
label_263800:
    // 0x263800: 0xe36e  .word       0x0000E36E                   # dsub        $gp, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263800u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 28, r); }
label_263804:
    // 0x263804: 0x4870  tge         $zero, $zero, 289
    ctx->pc = 0x263804u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263808:
    // 0x263808: 0x0  nop
    ctx->pc = 0x263808u;
    // NOP
label_26380c:
    // 0x26380c: 0x0  nop
    ctx->pc = 0x26380cu;
    // NOP
label_263810:
    // 0x263810: 0xe378  dsll        $gp, $zero, 13
    ctx->pc = 0x263810u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) << 13);
label_263814:
    // 0x263814: 0x7b00  sll         $t7, $zero, 12
    ctx->pc = 0x263814u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_263818:
    // 0x263818: 0x0  nop
    ctx->pc = 0x263818u;
    // NOP
label_26381c:
    // 0x26381c: 0x0  nop
    ctx->pc = 0x26381cu;
    // NOP
label_263820:
    // 0x263820: 0xe388  .word       0x0000E388                   # jr          $zero # 0000E380 <InstrIdType: CPU_SPECIAL>
label_263824:
    if (ctx->pc == 0x263824u) {
        ctx->pc = 0x263824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263820u;
        // 0x263824: 0x6270  tge         $zero, $zero, 393 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x263828u;
        goto label_263828;
    }
    ctx->pc = 0x263820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x263824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263820u;
        // 0x263824: 0x6270  tge         $zero, $zero, 393 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263820u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x263828u;
label_263828:
    // 0x263828: 0x0  nop
    ctx->pc = 0x263828u;
    // NOP
label_26382c:
    // 0x26382c: 0x0  nop
    ctx->pc = 0x26382cu;
    // NOP
label_263830:
    // 0x263830: 0xe395  .word       0x0000E395                   # INVALID     $zero, $zero, -0x1C6B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263830u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x263830 raw=0x0000E395"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_263834:
    // 0x263834: 0x5620  .word       0x00005620                   # add         $t2, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263834u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_263838:
    // 0x263838: 0x0  nop
    ctx->pc = 0x263838u;
    // NOP
label_26383c:
    // 0x26383c: 0x0  nop
    ctx->pc = 0x26383cu;
    // NOP
label_263840:
    // 0x263840: 0xe3a0  .word       0x0000E3A0                   # add         $gp, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263840u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_263844:
    // 0x263844: 0x5c20  .word       0x00005C20                   # add         $t3, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263844u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_263848:
    // 0x263848: 0x0  nop
    ctx->pc = 0x263848u;
    // NOP
label_26384c:
    // 0x26384c: 0x0  nop
    ctx->pc = 0x26384cu;
    // NOP
label_263850:
    // 0x263850: 0xe3ac  .word       0x0000E3AC                   # dadd        $gp, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263850u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 28, r); }
label_263854:
    // 0x263854: 0x8070  tge         $zero, $zero, 513
    ctx->pc = 0x263854u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263858:
    // 0x263858: 0x0  nop
    ctx->pc = 0x263858u;
    // NOP
label_26385c:
    // 0x26385c: 0x0  nop
    ctx->pc = 0x26385cu;
    // NOP
label_263860:
    // 0x263860: 0xe3bd  .word       0x0000E3BD                   # INVALID     $zero, $zero, -0x1C43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263860u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x263860 raw=0x0000E3BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_263864:
    // 0x263864: 0x5e70  tge         $zero, $zero, 377
    ctx->pc = 0x263864u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263868:
    // 0x263868: 0x0  nop
    ctx->pc = 0x263868u;
    // NOP
label_26386c:
    // 0x26386c: 0x0  nop
    ctx->pc = 0x26386cu;
    // NOP
label_263870:
    // 0x263870: 0xe3c9  .word       0x0000E3C9                   # jalr        $gp, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
label_263874:
    if (ctx->pc == 0x263874u) {
        ctx->pc = 0x263874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263870u;
        // 0x263874: 0x4270  tge         $zero, $zero, 265 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x263878u;
        goto label_263878;
    }
    ctx->pc = 0x263870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 28, 0x263878u);
        ctx->pc = 0x263874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263870u;
        // 0x263874: 0x4270  tge         $zero, $zero, 265 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263870u, 0x263878u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x263878u;
label_263878:
    // 0x263878: 0x0  nop
    ctx->pc = 0x263878u;
    // NOP
label_26387c:
    // 0x26387c: 0x0  nop
    ctx->pc = 0x26387cu;
    // NOP
label_263880:
    // 0x263880: 0xe3d2  .word       0x0000E3D2                   # mflo        $gp # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263880u;
    SET_GPR_U64(ctx, 28, ctx->lo);
label_263884:
    // 0x263884: 0x4ac0  sll         $t1, $zero, 11
    ctx->pc = 0x263884u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_263888:
    // 0x263888: 0x0  nop
    ctx->pc = 0x263888u;
    // NOP
label_26388c:
    // 0x26388c: 0x0  nop
    ctx->pc = 0x26388cu;
    // NOP
label_263890:
    // 0x263890: 0xe3dc  .word       0x0000E3DC                   # dmult       $zero, $zero # 0000E3C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263890u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x263890 raw=0x0000E3DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_263894:
    // 0x263894: 0x59e0  .word       0x000059E0                   # add         $t3, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263894u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_263898:
    // 0x263898: 0x0  nop
    ctx->pc = 0x263898u;
    // NOP
label_26389c:
    // 0x26389c: 0x0  nop
    ctx->pc = 0x26389cu;
    // NOP
label_2638a0:
    // 0x2638a0: 0xe3e8  .word       0x0000E3E8                   # mfsa        $gp # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2638a0u;
    SET_GPR_U32(ctx, 28, ctx->sa);
label_2638a4:
    // 0x2638a4: 0xa180  sll         $s4, $zero, 6
    ctx->pc = 0x2638a4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_2638a8:
    // 0x2638a8: 0x0  nop
    ctx->pc = 0x2638a8u;
    // NOP
label_2638ac:
    // 0x2638ac: 0x0  nop
    ctx->pc = 0x2638acu;
    // NOP
label_2638b0:
    // 0x2638b0: 0xe3fd  .word       0x0000E3FD                   # INVALID     $zero, $zero, -0x1C03 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2638b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2638B0 raw=0x0000E3FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2638b4:
    // 0x2638b4: 0x92e0  .word       0x000092E0                   # add         $s2, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2638b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_2638b8:
    // 0x2638b8: 0x0  nop
    ctx->pc = 0x2638b8u;
    // NOP
label_2638bc:
    // 0x2638bc: 0x0  nop
    ctx->pc = 0x2638bcu;
    // NOP
label_2638c0:
    // 0x2638c0: 0xe410  .word       0x0000E410                   # mfhi        $gp # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2638c0u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_2638c4:
    // 0x2638c4: 0x7350  .word       0x00007350                   # mfhi        $t6 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2638c4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_2638c8:
    // 0x2638c8: 0x0  nop
    ctx->pc = 0x2638c8u;
    // NOP
label_2638cc:
    // 0x2638cc: 0x0  nop
    ctx->pc = 0x2638ccu;
    // NOP
label_2638d0:
    // 0x2638d0: 0xe41f  .word       0x0000E41F                   # ddivu       $gp, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2638d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2638D0 raw=0x0000E41F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2638d4:
    // 0x2638d4: 0x7260  .word       0x00007260                   # add         $t6, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2638d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_2638d8:
    // 0x2638d8: 0x0  nop
    ctx->pc = 0x2638d8u;
    // NOP
label_2638dc:
    // 0x2638dc: 0x0  nop
    ctx->pc = 0x2638dcu;
    // NOP
label_2638e0:
    // 0x2638e0: 0xe42e  .word       0x0000E42E                   # dsub        $gp, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2638e0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 28, r); }
label_2638e4:
    // 0x2638e4: 0x78d0  .word       0x000078D0                   # mfhi        $t7 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2638e4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_2638e8:
    // 0x2638e8: 0x0  nop
    ctx->pc = 0x2638e8u;
    // NOP
label_2638ec:
    // 0x2638ec: 0x0  nop
    ctx->pc = 0x2638ecu;
    // NOP
label_2638f0:
    // 0x2638f0: 0xe43e  dsrl32      $gp, $zero, 16
    ctx->pc = 0x2638f0u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) >> (32 + 16));
label_2638f4:
    // 0x2638f4: 0x7740  sll         $t6, $zero, 29
    ctx->pc = 0x2638f4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_2638f8:
    // 0x2638f8: 0x0  nop
    ctx->pc = 0x2638f8u;
    // NOP
label_2638fc:
    // 0x2638fc: 0x0  nop
    ctx->pc = 0x2638fcu;
    // NOP
label_263900:
    // 0x263900: 0xe44d  break       0, 913
    ctx->pc = 0x263900u;
    runtime->handleBreak(rdram, ctx);
label_263904:
    // 0x263904: 0x5a10  .word       0x00005A10                   # mfhi        $t3 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263904u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_263908:
    // 0x263908: 0x0  nop
    ctx->pc = 0x263908u;
    // NOP
label_26390c:
    // 0x26390c: 0x0  nop
    ctx->pc = 0x26390cu;
    // NOP
label_263910:
    // 0x263910: 0xe459  .word       0x0000E459                   # multu       $zero, $zero # 0000E440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263910u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 28, (int32_t)result); }
label_263914:
    // 0x263914: 0x6ec0  sll         $t5, $zero, 27
    ctx->pc = 0x263914u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_263918:
    // 0x263918: 0x0  nop
    ctx->pc = 0x263918u;
    // NOP
label_26391c:
    // 0x26391c: 0x0  nop
    ctx->pc = 0x26391cu;
    // NOP
label_263920:
    // 0x263920: 0xe467  .word       0x0000E467                   # not         $gp, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263920u;
    SET_GPR_U64(ctx, 28, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_263924:
    // 0x263924: 0x8090  .word       0x00008090                   # mfhi        $s0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263924u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_263928:
    // 0x263928: 0x0  nop
    ctx->pc = 0x263928u;
    // NOP
label_26392c:
    // 0x26392c: 0x0  nop
    ctx->pc = 0x26392cu;
    // NOP
label_263930:
    // 0x263930: 0xe478  dsll        $gp, $zero, 17
    ctx->pc = 0x263930u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) << 17);
label_263934:
    // 0x263934: 0xa880  sll         $s5, $zero, 2
    ctx->pc = 0x263934u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_263938:
    // 0x263938: 0x0  nop
    ctx->pc = 0x263938u;
    // NOP
label_26393c:
    // 0x26393c: 0x0  nop
    ctx->pc = 0x26393cu;
    // NOP
label_263940:
    // 0x263940: 0xe48e  .word       0x0000E48E                   # INVALID     $zero, $zero, -0x1B72 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263940u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x263940 raw=0x0000E48E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_263944:
    // 0x263944: 0x8230  tge         $zero, $zero, 520
    ctx->pc = 0x263944u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263948:
    // 0x263948: 0x0  nop
    ctx->pc = 0x263948u;
    // NOP
label_26394c:
    // 0x26394c: 0x0  nop
    ctx->pc = 0x26394cu;
    // NOP
label_263950:
    // 0x263950: 0xe49f  .word       0x0000E49F                   # ddivu       $gp, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263950u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x263950 raw=0x0000E49F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_263954:
    // 0x263954: 0x9050  .word       0x00009050                   # mfhi        $s2 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263954u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_263958:
    // 0x263958: 0x0  nop
    ctx->pc = 0x263958u;
    // NOP
label_26395c:
    // 0x26395c: 0x0  nop
    ctx->pc = 0x26395cu;
    // NOP
label_263960:
    // 0x263960: 0xe4b2  tlt         $zero, $zero, 914
    ctx->pc = 0x263960u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263964:
    // 0x263964: 0x98c0  sll         $s3, $zero, 3
    ctx->pc = 0x263964u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_263968:
    // 0x263968: 0x0  nop
    ctx->pc = 0x263968u;
    // NOP
label_26396c:
    // 0x26396c: 0x0  nop
    ctx->pc = 0x26396cu;
    // NOP
label_263970:
    // 0x263970: 0xe4c6  .word       0x0000E4C6                   # srlv        $gp, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263970u;
    SET_GPR_S32(ctx, 28, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_263974:
    // 0x263974: 0x80d0  .word       0x000080D0                   # mfhi        $s0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263974u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_263978:
    // 0x263978: 0x0  nop
    ctx->pc = 0x263978u;
    // NOP
label_26397c:
    // 0x26397c: 0x0  nop
    ctx->pc = 0x26397cu;
    // NOP
label_263980:
    // 0x263980: 0xe4d7  .word       0x0000E4D7                   # dsrav       $gp, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263980u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_263984:
    // 0x263984: 0x9f90  .word       0x00009F90                   # mfhi        $s3 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263984u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_263988:
    // 0x263988: 0x0  nop
    ctx->pc = 0x263988u;
    // NOP
label_26398c:
    // 0x26398c: 0x0  nop
    ctx->pc = 0x26398cu;
    // NOP
label_263990:
    // 0x263990: 0xe4eb  .word       0x0000E4EB                   # sltu        $gp, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263990u;
    SET_GPR_U64(ctx, 28, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_263994:
    // 0x263994: 0x3930  tge         $zero, $zero, 228
    ctx->pc = 0x263994u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263998:
    // 0x263998: 0x0  nop
    ctx->pc = 0x263998u;
    // NOP
label_26399c:
    // 0x26399c: 0x0  nop
    ctx->pc = 0x26399cu;
    // NOP
label_2639a0:
    // 0x2639a0: 0xe4f3  tltu        $zero, $zero, 915
    ctx->pc = 0x2639a0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2639a4:
    // 0x2639a4: 0x9230  tge         $zero, $zero, 584
    ctx->pc = 0x2639a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2639a8:
    // 0x2639a8: 0x0  nop
    ctx->pc = 0x2639a8u;
    // NOP
label_2639ac:
    // 0x2639ac: 0x0  nop
    ctx->pc = 0x2639acu;
    // NOP
label_2639b0:
    // 0x2639b0: 0xe506  .word       0x0000E506                   # srlv        $gp, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2639b0u;
    SET_GPR_S32(ctx, 28, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2639b4:
    // 0x2639b4: 0x8720  .word       0x00008720                   # add         $s0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2639b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2639b8:
    // 0x2639b8: 0x0  nop
    ctx->pc = 0x2639b8u;
    // NOP
label_2639bc:
    // 0x2639bc: 0x0  nop
    ctx->pc = 0x2639bcu;
    // NOP
label_2639c0:
    // 0x2639c0: 0xe517  .word       0x0000E517                   # dsrav       $gp, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2639c0u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2639c4:
    // 0x2639c4: 0x60a0  .word       0x000060A0                   # add         $t4, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2639c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
    ctx->pc = 0x2639c8u;
    return;
}
