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

// Function: FUN_0019b910
// Address: 0x19b910 - 0x29b9f0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b910_part416(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x266340u: goto label_266340;
        case 0x266344u: goto label_266344;
        case 0x266348u: goto label_266348;
        case 0x26634cu: goto label_26634c;
        case 0x266350u: goto label_266350;
        case 0x266354u: goto label_266354;
        case 0x266358u: goto label_266358;
        case 0x26635cu: goto label_26635c;
        case 0x266360u: goto label_266360;
        case 0x266364u: goto label_266364;
        case 0x266368u: goto label_266368;
        case 0x26636cu: goto label_26636c;
        case 0x266370u: goto label_266370;
        case 0x266374u: goto label_266374;
        case 0x266378u: goto label_266378;
        case 0x26637cu: goto label_26637c;
        case 0x266380u: goto label_266380;
        case 0x266384u: goto label_266384;
        case 0x266388u: goto label_266388;
        case 0x26638cu: goto label_26638c;
        case 0x266390u: goto label_266390;
        case 0x266394u: goto label_266394;
        case 0x266398u: goto label_266398;
        case 0x26639cu: goto label_26639c;
        case 0x2663a0u: goto label_2663a0;
        case 0x2663a4u: goto label_2663a4;
        case 0x2663a8u: goto label_2663a8;
        case 0x2663acu: goto label_2663ac;
        case 0x2663b0u: goto label_2663b0;
        case 0x2663b4u: goto label_2663b4;
        case 0x2663b8u: goto label_2663b8;
        case 0x2663bcu: goto label_2663bc;
        case 0x2663c0u: goto label_2663c0;
        case 0x2663c4u: goto label_2663c4;
        case 0x2663c8u: goto label_2663c8;
        case 0x2663ccu: goto label_2663cc;
        case 0x2663d0u: goto label_2663d0;
        case 0x2663d4u: goto label_2663d4;
        case 0x2663d8u: goto label_2663d8;
        case 0x2663dcu: goto label_2663dc;
        case 0x2663e0u: goto label_2663e0;
        case 0x2663e4u: goto label_2663e4;
        case 0x2663e8u: goto label_2663e8;
        case 0x2663ecu: goto label_2663ec;
        case 0x2663f0u: goto label_2663f0;
        case 0x2663f4u: goto label_2663f4;
        case 0x2663f8u: goto label_2663f8;
        case 0x2663fcu: goto label_2663fc;
        case 0x266400u: goto label_266400;
        case 0x266404u: goto label_266404;
        case 0x266408u: goto label_266408;
        case 0x26640cu: goto label_26640c;
        case 0x266410u: goto label_266410;
        case 0x266414u: goto label_266414;
        case 0x266418u: goto label_266418;
        case 0x26641cu: goto label_26641c;
        case 0x266420u: goto label_266420;
        case 0x266424u: goto label_266424;
        case 0x266428u: goto label_266428;
        case 0x26642cu: goto label_26642c;
        case 0x266430u: goto label_266430;
        case 0x266434u: goto label_266434;
        case 0x266438u: goto label_266438;
        case 0x26643cu: goto label_26643c;
        case 0x266440u: goto label_266440;
        case 0x266444u: goto label_266444;
        case 0x266448u: goto label_266448;
        case 0x26644cu: goto label_26644c;
        case 0x266450u: goto label_266450;
        case 0x266454u: goto label_266454;
        case 0x266458u: goto label_266458;
        case 0x26645cu: goto label_26645c;
        case 0x266460u: goto label_266460;
        case 0x266464u: goto label_266464;
        case 0x266468u: goto label_266468;
        case 0x26646cu: goto label_26646c;
        case 0x266470u: goto label_266470;
        case 0x266474u: goto label_266474;
        case 0x266478u: goto label_266478;
        case 0x26647cu: goto label_26647c;
        case 0x266480u: goto label_266480;
        case 0x266484u: goto label_266484;
        case 0x266488u: goto label_266488;
        case 0x26648cu: goto label_26648c;
        case 0x266490u: goto label_266490;
        case 0x266494u: goto label_266494;
        case 0x266498u: goto label_266498;
        case 0x26649cu: goto label_26649c;
        case 0x2664a0u: goto label_2664a0;
        case 0x2664a4u: goto label_2664a4;
        case 0x2664a8u: goto label_2664a8;
        case 0x2664acu: goto label_2664ac;
        case 0x2664b0u: goto label_2664b0;
        case 0x2664b4u: goto label_2664b4;
        case 0x2664b8u: goto label_2664b8;
        case 0x2664bcu: goto label_2664bc;
        case 0x2664c0u: goto label_2664c0;
        case 0x2664c4u: goto label_2664c4;
        case 0x2664c8u: goto label_2664c8;
        case 0x2664ccu: goto label_2664cc;
        case 0x2664d0u: goto label_2664d0;
        case 0x2664d4u: goto label_2664d4;
        case 0x2664d8u: goto label_2664d8;
        case 0x2664dcu: goto label_2664dc;
        case 0x2664e0u: goto label_2664e0;
        case 0x2664e4u: goto label_2664e4;
        case 0x2664e8u: goto label_2664e8;
        case 0x2664ecu: goto label_2664ec;
        case 0x2664f0u: goto label_2664f0;
        case 0x2664f4u: goto label_2664f4;
        case 0x2664f8u: goto label_2664f8;
        case 0x2664fcu: goto label_2664fc;
        case 0x266500u: goto label_266500;
        case 0x266504u: goto label_266504;
        case 0x266508u: goto label_266508;
        case 0x26650cu: goto label_26650c;
        case 0x266510u: goto label_266510;
        case 0x266514u: goto label_266514;
        case 0x266518u: goto label_266518;
        case 0x26651cu: goto label_26651c;
        case 0x266520u: goto label_266520;
        case 0x266524u: goto label_266524;
        case 0x266528u: goto label_266528;
        case 0x26652cu: goto label_26652c;
        case 0x266530u: goto label_266530;
        case 0x266534u: goto label_266534;
        case 0x266538u: goto label_266538;
        case 0x26653cu: goto label_26653c;
        case 0x266540u: goto label_266540;
        case 0x266544u: goto label_266544;
        case 0x266548u: goto label_266548;
        case 0x26654cu: goto label_26654c;
        case 0x266550u: goto label_266550;
        case 0x266554u: goto label_266554;
        case 0x266558u: goto label_266558;
        case 0x26655cu: goto label_26655c;
        case 0x266560u: goto label_266560;
        case 0x266564u: goto label_266564;
        case 0x266568u: goto label_266568;
        case 0x26656cu: goto label_26656c;
        case 0x266570u: goto label_266570;
        case 0x266574u: goto label_266574;
        case 0x266578u: goto label_266578;
        case 0x26657cu: goto label_26657c;
        case 0x266580u: goto label_266580;
        case 0x266584u: goto label_266584;
        case 0x266588u: goto label_266588;
        case 0x26658cu: goto label_26658c;
        case 0x266590u: goto label_266590;
        case 0x266594u: goto label_266594;
        case 0x266598u: goto label_266598;
        case 0x26659cu: goto label_26659c;
        case 0x2665a0u: goto label_2665a0;
        case 0x2665a4u: goto label_2665a4;
        case 0x2665a8u: goto label_2665a8;
        case 0x2665acu: goto label_2665ac;
        case 0x2665b0u: goto label_2665b0;
        case 0x2665b4u: goto label_2665b4;
        case 0x2665b8u: goto label_2665b8;
        case 0x2665bcu: goto label_2665bc;
        case 0x2665c0u: goto label_2665c0;
        case 0x2665c4u: goto label_2665c4;
        case 0x2665c8u: goto label_2665c8;
        case 0x2665ccu: goto label_2665cc;
        case 0x2665d0u: goto label_2665d0;
        case 0x2665d4u: goto label_2665d4;
        case 0x2665d8u: goto label_2665d8;
        case 0x2665dcu: goto label_2665dc;
        case 0x2665e0u: goto label_2665e0;
        case 0x2665e4u: goto label_2665e4;
        case 0x2665e8u: goto label_2665e8;
        case 0x2665ecu: goto label_2665ec;
        case 0x2665f0u: goto label_2665f0;
        case 0x2665f4u: goto label_2665f4;
        case 0x2665f8u: goto label_2665f8;
        case 0x2665fcu: goto label_2665fc;
        case 0x266600u: goto label_266600;
        case 0x266604u: goto label_266604;
        case 0x266608u: goto label_266608;
        case 0x26660cu: goto label_26660c;
        case 0x266610u: goto label_266610;
        case 0x266614u: goto label_266614;
        case 0x266618u: goto label_266618;
        case 0x26661cu: goto label_26661c;
        case 0x266620u: goto label_266620;
        case 0x266624u: goto label_266624;
        case 0x266628u: goto label_266628;
        case 0x26662cu: goto label_26662c;
        case 0x266630u: goto label_266630;
        case 0x266634u: goto label_266634;
        case 0x266638u: goto label_266638;
        case 0x26663cu: goto label_26663c;
        case 0x266640u: goto label_266640;
        case 0x266644u: goto label_266644;
        case 0x266648u: goto label_266648;
        case 0x26664cu: goto label_26664c;
        case 0x266650u: goto label_266650;
        case 0x266654u: goto label_266654;
        case 0x266658u: goto label_266658;
        case 0x26665cu: goto label_26665c;
        case 0x266660u: goto label_266660;
        case 0x266664u: goto label_266664;
        case 0x266668u: goto label_266668;
        case 0x26666cu: goto label_26666c;
        case 0x266670u: goto label_266670;
        case 0x266674u: goto label_266674;
        case 0x266678u: goto label_266678;
        case 0x26667cu: goto label_26667c;
        case 0x266680u: goto label_266680;
        case 0x266684u: goto label_266684;
        case 0x266688u: goto label_266688;
        case 0x26668cu: goto label_26668c;
        case 0x266690u: goto label_266690;
        case 0x266694u: goto label_266694;
        case 0x266698u: goto label_266698;
        case 0x26669cu: goto label_26669c;
        case 0x2666a0u: goto label_2666a0;
        case 0x2666a4u: goto label_2666a4;
        case 0x2666a8u: goto label_2666a8;
        case 0x2666acu: goto label_2666ac;
        case 0x2666b0u: goto label_2666b0;
        case 0x2666b4u: goto label_2666b4;
        case 0x2666b8u: goto label_2666b8;
        case 0x2666bcu: goto label_2666bc;
        case 0x2666c0u: goto label_2666c0;
        case 0x2666c4u: goto label_2666c4;
        case 0x2666c8u: goto label_2666c8;
        case 0x2666ccu: goto label_2666cc;
        case 0x2666d0u: goto label_2666d0;
        case 0x2666d4u: goto label_2666d4;
        case 0x2666d8u: goto label_2666d8;
        case 0x2666dcu: goto label_2666dc;
        case 0x2666e0u: goto label_2666e0;
        case 0x2666e4u: goto label_2666e4;
        case 0x2666e8u: goto label_2666e8;
        case 0x2666ecu: goto label_2666ec;
        case 0x2666f0u: goto label_2666f0;
        case 0x2666f4u: goto label_2666f4;
        case 0x2666f8u: goto label_2666f8;
        case 0x2666fcu: goto label_2666fc;
        case 0x266700u: goto label_266700;
        case 0x266704u: goto label_266704;
        case 0x266708u: goto label_266708;
        case 0x26670cu: goto label_26670c;
        case 0x266710u: goto label_266710;
        case 0x266714u: goto label_266714;
        case 0x266718u: goto label_266718;
        case 0x26671cu: goto label_26671c;
        case 0x266720u: goto label_266720;
        case 0x266724u: goto label_266724;
        case 0x266728u: goto label_266728;
        case 0x26672cu: goto label_26672c;
        case 0x266730u: goto label_266730;
        case 0x266734u: goto label_266734;
        case 0x266738u: goto label_266738;
        case 0x26673cu: goto label_26673c;
        case 0x266740u: goto label_266740;
        case 0x266744u: goto label_266744;
        case 0x266748u: goto label_266748;
        case 0x26674cu: goto label_26674c;
        case 0x266750u: goto label_266750;
        case 0x266754u: goto label_266754;
        case 0x266758u: goto label_266758;
        case 0x26675cu: goto label_26675c;
        case 0x266760u: goto label_266760;
        case 0x266764u: goto label_266764;
        case 0x266768u: goto label_266768;
        case 0x26676cu: goto label_26676c;
        case 0x266770u: goto label_266770;
        case 0x266774u: goto label_266774;
        case 0x266778u: goto label_266778;
        case 0x26677cu: goto label_26677c;
        case 0x266780u: goto label_266780;
        case 0x266784u: goto label_266784;
        case 0x266788u: goto label_266788;
        case 0x26678cu: goto label_26678c;
        case 0x266790u: goto label_266790;
        case 0x266794u: goto label_266794;
        case 0x266798u: goto label_266798;
        case 0x26679cu: goto label_26679c;
        case 0x2667a0u: goto label_2667a0;
        case 0x2667a4u: goto label_2667a4;
        case 0x2667a8u: goto label_2667a8;
        case 0x2667acu: goto label_2667ac;
        case 0x2667b0u: goto label_2667b0;
        case 0x2667b4u: goto label_2667b4;
        case 0x2667b8u: goto label_2667b8;
        case 0x2667bcu: goto label_2667bc;
        case 0x2667c0u: goto label_2667c0;
        case 0x2667c4u: goto label_2667c4;
        case 0x2667c8u: goto label_2667c8;
        case 0x2667ccu: goto label_2667cc;
        case 0x2667d0u: goto label_2667d0;
        case 0x2667d4u: goto label_2667d4;
        case 0x2667d8u: goto label_2667d8;
        case 0x2667dcu: goto label_2667dc;
        case 0x2667e0u: goto label_2667e0;
        case 0x2667e4u: goto label_2667e4;
        case 0x2667e8u: goto label_2667e8;
        case 0x2667ecu: goto label_2667ec;
        case 0x2667f0u: goto label_2667f0;
        case 0x2667f4u: goto label_2667f4;
        case 0x2667f8u: goto label_2667f8;
        case 0x2667fcu: goto label_2667fc;
        case 0x266800u: goto label_266800;
        case 0x266804u: goto label_266804;
        case 0x266808u: goto label_266808;
        case 0x26680cu: goto label_26680c;
        case 0x266810u: goto label_266810;
        case 0x266814u: goto label_266814;
        case 0x266818u: goto label_266818;
        case 0x26681cu: goto label_26681c;
        case 0x266820u: goto label_266820;
        case 0x266824u: goto label_266824;
        case 0x266828u: goto label_266828;
        case 0x26682cu: goto label_26682c;
        case 0x266830u: goto label_266830;
        case 0x266834u: goto label_266834;
        case 0x266838u: goto label_266838;
        case 0x26683cu: goto label_26683c;
        case 0x266840u: goto label_266840;
        case 0x266844u: goto label_266844;
        case 0x266848u: goto label_266848;
        case 0x26684cu: goto label_26684c;
        case 0x266850u: goto label_266850;
        case 0x266854u: goto label_266854;
        case 0x266858u: goto label_266858;
        case 0x26685cu: goto label_26685c;
        case 0x266860u: goto label_266860;
        case 0x266864u: goto label_266864;
        case 0x266868u: goto label_266868;
        case 0x26686cu: goto label_26686c;
        case 0x266870u: goto label_266870;
        case 0x266874u: goto label_266874;
        case 0x266878u: goto label_266878;
        case 0x26687cu: goto label_26687c;
        case 0x266880u: goto label_266880;
        case 0x266884u: goto label_266884;
        case 0x266888u: goto label_266888;
        case 0x26688cu: goto label_26688c;
        case 0x266890u: goto label_266890;
        case 0x266894u: goto label_266894;
        case 0x266898u: goto label_266898;
        case 0x26689cu: goto label_26689c;
        case 0x2668a0u: goto label_2668a0;
        case 0x2668a4u: goto label_2668a4;
        case 0x2668a8u: goto label_2668a8;
        case 0x2668acu: goto label_2668ac;
        case 0x2668b0u: goto label_2668b0;
        case 0x2668b4u: goto label_2668b4;
        case 0x2668b8u: goto label_2668b8;
        case 0x2668bcu: goto label_2668bc;
        case 0x2668c0u: goto label_2668c0;
        case 0x2668c4u: goto label_2668c4;
        case 0x2668c8u: goto label_2668c8;
        case 0x2668ccu: goto label_2668cc;
        case 0x2668d0u: goto label_2668d0;
        case 0x2668d4u: goto label_2668d4;
        case 0x2668d8u: goto label_2668d8;
        case 0x2668dcu: goto label_2668dc;
        case 0x2668e0u: goto label_2668e0;
        case 0x2668e4u: goto label_2668e4;
        case 0x2668e8u: goto label_2668e8;
        case 0x2668ecu: goto label_2668ec;
        case 0x2668f0u: goto label_2668f0;
        case 0x2668f4u: goto label_2668f4;
        case 0x2668f8u: goto label_2668f8;
        case 0x2668fcu: goto label_2668fc;
        case 0x266900u: goto label_266900;
        case 0x266904u: goto label_266904;
        case 0x266908u: goto label_266908;
        case 0x26690cu: goto label_26690c;
        case 0x266910u: goto label_266910;
        case 0x266914u: goto label_266914;
        case 0x266918u: goto label_266918;
        case 0x26691cu: goto label_26691c;
        case 0x266920u: goto label_266920;
        case 0x266924u: goto label_266924;
        case 0x266928u: goto label_266928;
        case 0x26692cu: goto label_26692c;
        case 0x266930u: goto label_266930;
        case 0x266934u: goto label_266934;
        case 0x266938u: goto label_266938;
        case 0x26693cu: goto label_26693c;
        case 0x266940u: goto label_266940;
        case 0x266944u: goto label_266944;
        case 0x266948u: goto label_266948;
        case 0x26694cu: goto label_26694c;
        case 0x266950u: goto label_266950;
        case 0x266954u: goto label_266954;
        case 0x266958u: goto label_266958;
        case 0x26695cu: goto label_26695c;
        case 0x266960u: goto label_266960;
        case 0x266964u: goto label_266964;
        case 0x266968u: goto label_266968;
        case 0x26696cu: goto label_26696c;
        case 0x266970u: goto label_266970;
        case 0x266974u: goto label_266974;
        case 0x266978u: goto label_266978;
        case 0x26697cu: goto label_26697c;
        case 0x266980u: goto label_266980;
        case 0x266984u: goto label_266984;
        case 0x266988u: goto label_266988;
        case 0x26698cu: goto label_26698c;
        case 0x266990u: goto label_266990;
        case 0x266994u: goto label_266994;
        case 0x266998u: goto label_266998;
        case 0x26699cu: goto label_26699c;
        case 0x2669a0u: goto label_2669a0;
        case 0x2669a4u: goto label_2669a4;
        case 0x2669a8u: goto label_2669a8;
        case 0x2669acu: goto label_2669ac;
        case 0x2669b0u: goto label_2669b0;
        case 0x2669b4u: goto label_2669b4;
        case 0x2669b8u: goto label_2669b8;
        case 0x2669bcu: goto label_2669bc;
        case 0x2669c0u: goto label_2669c0;
        case 0x2669c4u: goto label_2669c4;
        case 0x2669c8u: goto label_2669c8;
        case 0x2669ccu: goto label_2669cc;
        case 0x2669d0u: goto label_2669d0;
        case 0x2669d4u: goto label_2669d4;
        case 0x2669d8u: goto label_2669d8;
        case 0x2669dcu: goto label_2669dc;
        case 0x2669e0u: goto label_2669e0;
        case 0x2669e4u: goto label_2669e4;
        case 0x2669e8u: goto label_2669e8;
        case 0x2669ecu: goto label_2669ec;
        case 0x2669f0u: goto label_2669f0;
        case 0x2669f4u: goto label_2669f4;
        case 0x2669f8u: goto label_2669f8;
        case 0x2669fcu: goto label_2669fc;
        case 0x266a00u: goto label_266a00;
        case 0x266a04u: goto label_266a04;
        case 0x266a08u: goto label_266a08;
        case 0x266a0cu: goto label_266a0c;
        case 0x266a10u: goto label_266a10;
        case 0x266a14u: goto label_266a14;
        case 0x266a18u: goto label_266a18;
        case 0x266a1cu: goto label_266a1c;
        case 0x266a20u: goto label_266a20;
        case 0x266a24u: goto label_266a24;
        case 0x266a28u: goto label_266a28;
        case 0x266a2cu: goto label_266a2c;
        case 0x266a30u: goto label_266a30;
        case 0x266a34u: goto label_266a34;
        case 0x266a38u: goto label_266a38;
        case 0x266a3cu: goto label_266a3c;
        case 0x266a40u: goto label_266a40;
        case 0x266a44u: goto label_266a44;
        case 0x266a48u: goto label_266a48;
        case 0x266a4cu: goto label_266a4c;
        case 0x266a50u: goto label_266a50;
        case 0x266a54u: goto label_266a54;
        case 0x266a58u: goto label_266a58;
        case 0x266a5cu: goto label_266a5c;
        case 0x266a60u: goto label_266a60;
        case 0x266a64u: goto label_266a64;
        case 0x266a68u: goto label_266a68;
        case 0x266a6cu: goto label_266a6c;
        case 0x266a70u: goto label_266a70;
        case 0x266a74u: goto label_266a74;
        case 0x266a78u: goto label_266a78;
        case 0x266a7cu: goto label_266a7c;
        case 0x266a80u: goto label_266a80;
        case 0x266a84u: goto label_266a84;
        case 0x266a88u: goto label_266a88;
        case 0x266a8cu: goto label_266a8c;
        case 0x266a90u: goto label_266a90;
        case 0x266a94u: goto label_266a94;
        case 0x266a98u: goto label_266a98;
        case 0x266a9cu: goto label_266a9c;
        case 0x266aa0u: goto label_266aa0;
        case 0x266aa4u: goto label_266aa4;
        case 0x266aa8u: goto label_266aa8;
        case 0x266aacu: goto label_266aac;
        case 0x266ab0u: goto label_266ab0;
        case 0x266ab4u: goto label_266ab4;
        case 0x266ab8u: goto label_266ab8;
        case 0x266abcu: goto label_266abc;
        case 0x266ac0u: goto label_266ac0;
        case 0x266ac4u: goto label_266ac4;
        case 0x266ac8u: goto label_266ac8;
        case 0x266accu: goto label_266acc;
        case 0x266ad0u: goto label_266ad0;
        case 0x266ad4u: goto label_266ad4;
        case 0x266ad8u: goto label_266ad8;
        case 0x266adcu: goto label_266adc;
        case 0x266ae0u: goto label_266ae0;
        case 0x266ae4u: goto label_266ae4;
        case 0x266ae8u: goto label_266ae8;
        case 0x266aecu: goto label_266aec;
        case 0x266af0u: goto label_266af0;
        case 0x266af4u: goto label_266af4;
        case 0x266af8u: goto label_266af8;
        case 0x266afcu: goto label_266afc;
        case 0x266b00u: goto label_266b00;
        case 0x266b04u: goto label_266b04;
        case 0x266b08u: goto label_266b08;
        case 0x266b0cu: goto label_266b0c;
        default: return;
    }

label_266340:
    // 0x266340: 0x106ed  .word       0x000106ED                   # daddu       $zero, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266340u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_266344:
    // 0x266344: 0x4bc0  sll         $t1, $zero, 15
    ctx->pc = 0x266344u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_266348:
    // 0x266348: 0x0  nop
    ctx->pc = 0x266348u;
    // NOP
label_26634c:
    // 0x26634c: 0x0  nop
    ctx->pc = 0x26634cu;
    // NOP
label_266350:
    // 0x266350: 0x106f7  .word       0x000106F7                   # INVALID     $zero, $at, 0x6F7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266350u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x266350 raw=0x000106F7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_266354:
    // 0x266354: 0x67b0  tge         $zero, $zero, 414
    ctx->pc = 0x266354u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266358:
    // 0x266358: 0x0  nop
    ctx->pc = 0x266358u;
    // NOP
label_26635c:
    // 0x26635c: 0x0  nop
    ctx->pc = 0x26635cu;
    // NOP
label_266360:
    // 0x266360: 0x10704  .word       0x00010704                   # sllv        $zero, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266360u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_266364:
    // 0x266364: 0x73a0  .word       0x000073A0                   # add         $t6, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266364u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_266368:
    // 0x266368: 0x0  nop
    ctx->pc = 0x266368u;
    // NOP
label_26636c:
    // 0x26636c: 0x0  nop
    ctx->pc = 0x26636cu;
    // NOP
label_266370:
    // 0x266370: 0x10713  .word       0x00010713                   # mtlo        $zero # 00010700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266370u;
    ctx->lo = GPR_U64(ctx, 0);
label_266374:
    // 0x266374: 0x2f90  .word       0x00002F90                   # mfhi        $a1 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266374u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_266378:
    // 0x266378: 0x0  nop
    ctx->pc = 0x266378u;
    // NOP
label_26637c:
    // 0x26637c: 0x0  nop
    ctx->pc = 0x26637cu;
    // NOP
label_266380:
    // 0x266380: 0x10719  .word       0x00010719                   # multu       $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266380u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_266384:
    // 0x266384: 0x3a20  .word       0x00003A20                   # add         $a3, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266384u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_266388:
    // 0x266388: 0x0  nop
    ctx->pc = 0x266388u;
    // NOP
label_26638c:
    // 0x26638c: 0x0  nop
    ctx->pc = 0x26638cu;
    // NOP
label_266390:
    // 0x266390: 0x10721  .word       0x00010721                   # addu        $zero, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266390u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_266394:
    // 0x266394: 0x60e0  .word       0x000060E0                   # add         $t4, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266394u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_266398:
    // 0x266398: 0x0  nop
    ctx->pc = 0x266398u;
    // NOP
label_26639c:
    // 0x26639c: 0x0  nop
    ctx->pc = 0x26639cu;
    // NOP
label_2663a0:
    // 0x2663a0: 0x1072e  .word       0x0001072E                   # dsub        $zero, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2663a0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2663a4:
    // 0x2663a4: 0x8270  tge         $zero, $zero, 521
    ctx->pc = 0x2663a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2663a8:
    // 0x2663a8: 0x0  nop
    ctx->pc = 0x2663a8u;
    // NOP
label_2663ac:
    // 0x2663ac: 0x0  nop
    ctx->pc = 0x2663acu;
    // NOP
label_2663b0:
    // 0x2663b0: 0x1073f  dsra32      $zero, $at, 28
    ctx->pc = 0x2663b0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 1) >> (32 + 28));
label_2663b4:
    // 0x2663b4: 0x6150  .word       0x00006150                   # mfhi        $t4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2663b4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_2663b8:
    // 0x2663b8: 0x0  nop
    ctx->pc = 0x2663b8u;
    // NOP
label_2663bc:
    // 0x2663bc: 0x0  nop
    ctx->pc = 0x2663bcu;
    // NOP
label_2663c0:
    // 0x2663c0: 0x1074c  .word       0x0001074C                   # syscall     29 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2663c0u;
    ctx->pc = 0x2663C4u;
runtime->handleSyscall(rdram, ctx, 0x41Du);
label_2663c4:
    // 0x2663c4: 0x38f0  tge         $zero, $zero, 227
    ctx->pc = 0x2663c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2663c8:
    // 0x2663c8: 0x0  nop
    ctx->pc = 0x2663c8u;
    // NOP
label_2663cc:
    // 0x2663cc: 0x0  nop
    ctx->pc = 0x2663ccu;
    // NOP
label_2663d0:
    // 0x2663d0: 0x10754  .word       0x00010754                   # dsllv       $zero, $at, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2663d0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_2663d4:
    // 0x2663d4: 0x46d0  .word       0x000046D0                   # mfhi        $t0 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2663d4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_2663d8:
    // 0x2663d8: 0x0  nop
    ctx->pc = 0x2663d8u;
    // NOP
label_2663dc:
    // 0x2663dc: 0x0  nop
    ctx->pc = 0x2663dcu;
    // NOP
label_2663e0:
    // 0x2663e0: 0x1075d  .word       0x0001075D                   # dmultu      $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2663e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2663E0 raw=0x0001075D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2663e4:
    // 0x2663e4: 0x5030  tge         $zero, $zero, 320
    ctx->pc = 0x2663e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2663e8:
    // 0x2663e8: 0x0  nop
    ctx->pc = 0x2663e8u;
    // NOP
label_2663ec:
    // 0x2663ec: 0x0  nop
    ctx->pc = 0x2663ecu;
    // NOP
label_2663f0:
    // 0x2663f0: 0x10768  .word       0x00010768                   # mfsa        $zero # 00010740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2663f0u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_2663f4:
    // 0x2663f4: 0x5030  tge         $zero, $zero, 320
    ctx->pc = 0x2663f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2663f8:
    // 0x2663f8: 0x0  nop
    ctx->pc = 0x2663f8u;
    // NOP
label_2663fc:
    // 0x2663fc: 0x0  nop
    ctx->pc = 0x2663fcu;
    // NOP
label_266400:
    // 0x266400: 0x10773  tltu        $zero, $at, 29
    ctx->pc = 0x266400u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_266404:
    // 0x266404: 0x29f0  tge         $zero, $zero, 167
    ctx->pc = 0x266404u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266408:
    // 0x266408: 0x0  nop
    ctx->pc = 0x266408u;
    // NOP
label_26640c:
    // 0x26640c: 0x0  nop
    ctx->pc = 0x26640cu;
    // NOP
label_266410:
    // 0x266410: 0x10779  .word       0x00010779                   # INVALID     $zero, $at, 0x779 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266410u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x266410 raw=0x00010779"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_266414:
    // 0x266414: 0x5d20  .word       0x00005D20                   # add         $t3, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266414u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_266418:
    // 0x266418: 0x0  nop
    ctx->pc = 0x266418u;
    // NOP
label_26641c:
    // 0x26641c: 0x0  nop
    ctx->pc = 0x26641cu;
    // NOP
label_266420:
    // 0x266420: 0x10785  .word       0x00010785                   # INVALID     $zero, $at, 0x785 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266420u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x266420 raw=0x00010785"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_266424:
    // 0x266424: 0x8410  .word       0x00008410                   # mfhi        $s0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266424u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_266428:
    // 0x266428: 0x0  nop
    ctx->pc = 0x266428u;
    // NOP
label_26642c:
    // 0x26642c: 0x0  nop
    ctx->pc = 0x26642cu;
    // NOP
label_266430:
    // 0x266430: 0x10796  .word       0x00010796                   # dsrlv       $zero, $at, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266430u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_266434:
    // 0x266434: 0x7600  sll         $t6, $zero, 24
    ctx->pc = 0x266434u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_266438:
    // 0x266438: 0x0  nop
    ctx->pc = 0x266438u;
    // NOP
label_26643c:
    // 0x26643c: 0x0  nop
    ctx->pc = 0x26643cu;
    // NOP
label_266440:
    // 0x266440: 0x107a5  .word       0x000107A5                   # or          $zero, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266440u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_266444:
    // 0x266444: 0x4d60  .word       0x00004D60                   # add         $t1, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266444u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_266448:
    // 0x266448: 0x0  nop
    ctx->pc = 0x266448u;
    // NOP
label_26644c:
    // 0x26644c: 0x0  nop
    ctx->pc = 0x26644cu;
    // NOP
label_266450:
    // 0x266450: 0x107af  .word       0x000107AF                   # dsubu       $zero, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266450u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_266454:
    // 0x266454: 0x5a50  .word       0x00005A50                   # mfhi        $t3 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266454u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_266458:
    // 0x266458: 0x0  nop
    ctx->pc = 0x266458u;
    // NOP
label_26645c:
    // 0x26645c: 0x0  nop
    ctx->pc = 0x26645cu;
    // NOP
label_266460:
    // 0x266460: 0x107bb  dsra        $zero, $at, 30
    ctx->pc = 0x266460u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 1) >> 30);
label_266464:
    // 0x266464: 0x54e0  .word       0x000054E0                   # add         $t2, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266464u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_266468:
    // 0x266468: 0x0  nop
    ctx->pc = 0x266468u;
    // NOP
label_26646c:
    // 0x26646c: 0x0  nop
    ctx->pc = 0x26646cu;
    // NOP
label_266470:
    // 0x266470: 0x107c6  .word       0x000107C6                   # srlv        $zero, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266470u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_266474:
    // 0x266474: 0x5b40  sll         $t3, $zero, 13
    ctx->pc = 0x266474u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_266478:
    // 0x266478: 0x0  nop
    ctx->pc = 0x266478u;
    // NOP
label_26647c:
    // 0x26647c: 0x0  nop
    ctx->pc = 0x26647cu;
    // NOP
label_266480:
    // 0x266480: 0x107d2  .word       0x000107D2                   # mflo        $zero # 000107C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266480u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_266484:
    // 0x266484: 0x4560  .word       0x00004560                   # add         $t0, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266484u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_266488:
    // 0x266488: 0x0  nop
    ctx->pc = 0x266488u;
    // NOP
label_26648c:
    // 0x26648c: 0x0  nop
    ctx->pc = 0x26648cu;
    // NOP
label_266490:
    // 0x266490: 0x107db  .word       0x000107DB                   # divu        $zero, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266490u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_266494:
    // 0x266494: 0x9050  .word       0x00009050                   # mfhi        $s2 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266494u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_266498:
    // 0x266498: 0x0  nop
    ctx->pc = 0x266498u;
    // NOP
label_26649c:
    // 0x26649c: 0x0  nop
    ctx->pc = 0x26649cu;
    // NOP
label_2664a0:
    // 0x2664a0: 0x107ee  .word       0x000107EE                   # dsub        $zero, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2664a0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2664a4:
    // 0x2664a4: 0xa080  sll         $s4, $zero, 2
    ctx->pc = 0x2664a4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_2664a8:
    // 0x2664a8: 0x0  nop
    ctx->pc = 0x2664a8u;
    // NOP
label_2664ac:
    // 0x2664ac: 0x0  nop
    ctx->pc = 0x2664acu;
    // NOP
label_2664b0:
    // 0x2664b0: 0x10803  sra         $at, $at, 0
    ctx->pc = 0x2664b0u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 1), 0));
label_2664b4:
    // 0x2664b4: 0xbc70  tge         $zero, $zero, 753
    ctx->pc = 0x2664b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2664b8:
    // 0x2664b8: 0x0  nop
    ctx->pc = 0x2664b8u;
    // NOP
label_2664bc:
    // 0x2664bc: 0x0  nop
    ctx->pc = 0x2664bcu;
    // NOP
label_2664c0:
    // 0x2664c0: 0x1081b  divu        $at, $zero, $at
    ctx->pc = 0x2664c0u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2664c4:
    // 0x2664c4: 0x57f0  tge         $zero, $zero, 351
    ctx->pc = 0x2664c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2664c8:
    // 0x2664c8: 0x0  nop
    ctx->pc = 0x2664c8u;
    // NOP
label_2664cc:
    // 0x2664cc: 0x0  nop
    ctx->pc = 0x2664ccu;
    // NOP
label_2664d0:
    // 0x2664d0: 0x10826  xor         $at, $zero, $at
    ctx->pc = 0x2664d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_2664d4:
    // 0x2664d4: 0x7510  .word       0x00007510                   # mfhi        $t6 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2664d4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_2664d8:
    // 0x2664d8: 0x0  nop
    ctx->pc = 0x2664d8u;
    // NOP
label_2664dc:
    // 0x2664dc: 0x0  nop
    ctx->pc = 0x2664dcu;
    // NOP
label_2664e0:
    // 0x2664e0: 0x10835  .word       0x00010835                   # INVALID     $zero, $at, 0x835 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2664e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2664E0 raw=0x00010835"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2664e4:
    // 0x2664e4: 0x4350  .word       0x00004350                   # mfhi        $t0 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2664e4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_2664e8:
    // 0x2664e8: 0x0  nop
    ctx->pc = 0x2664e8u;
    // NOP
label_2664ec:
    // 0x2664ec: 0x0  nop
    ctx->pc = 0x2664ecu;
    // NOP
label_2664f0:
    // 0x2664f0: 0x1083e  dsrl32      $at, $at, 0
    ctx->pc = 0x2664f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) >> (32 + 0));
label_2664f4:
    // 0x2664f4: 0x7670  tge         $zero, $zero, 473
    ctx->pc = 0x2664f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2664f8:
    // 0x2664f8: 0x0  nop
    ctx->pc = 0x2664f8u;
    // NOP
label_2664fc:
    // 0x2664fc: 0x0  nop
    ctx->pc = 0x2664fcu;
    // NOP
label_266500:
    // 0x266500: 0x1084d  break       1, 33
    ctx->pc = 0x266500u;
    runtime->handleBreak(rdram, ctx);
label_266504:
    // 0x266504: 0x55d0  .word       0x000055D0                   # mfhi        $t2 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266504u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_266508:
    // 0x266508: 0x0  nop
    ctx->pc = 0x266508u;
    // NOP
label_26650c:
    // 0x26650c: 0x0  nop
    ctx->pc = 0x26650cu;
    // NOP
label_266510:
    // 0x266510: 0x10858  .word       0x00010858                   # mult        $at, $zero, $at # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x266510u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_266514:
    // 0x266514: 0x60e0  .word       0x000060E0                   # add         $t4, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266514u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_266518:
    // 0x266518: 0x0  nop
    ctx->pc = 0x266518u;
    // NOP
label_26651c:
    // 0x26651c: 0x0  nop
    ctx->pc = 0x26651cu;
    // NOP
label_266520:
    // 0x266520: 0x10865  .word       0x00010865                   # or          $at, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266520u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_266524:
    // 0x266524: 0x6910  .word       0x00006910                   # mfhi        $t5 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266524u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_266528:
    // 0x266528: 0x0  nop
    ctx->pc = 0x266528u;
    // NOP
label_26652c:
    // 0x26652c: 0x0  nop
    ctx->pc = 0x26652cu;
    // NOP
label_266530:
    // 0x266530: 0x10873  tltu        $zero, $at, 33
    ctx->pc = 0x266530u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_266534:
    // 0x266534: 0xabc0  sll         $s5, $zero, 15
    ctx->pc = 0x266534u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_266538:
    // 0x266538: 0x0  nop
    ctx->pc = 0x266538u;
    // NOP
label_26653c:
    // 0x26653c: 0x0  nop
    ctx->pc = 0x26653cu;
    // NOP
label_266540:
    // 0x266540: 0x10889  .word       0x00010889                   # jalr        $at, $zero # 00010080 <InstrIdType: CPU_SPECIAL>
label_266544:
    if (ctx->pc == 0x266544u) {
        ctx->pc = 0x266544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266540u;
        // 0x266544: 0x5c30  tge         $zero, $zero, 368 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x266548u;
        goto label_266548;
    }
    ctx->pc = 0x266540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 1, 0x266548u);
        ctx->pc = 0x266544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266540u;
        // 0x266544: 0x5c30  tge         $zero, $zero, 368 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266540u, 0x266548u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x266548u;
label_266548:
    // 0x266548: 0x0  nop
    ctx->pc = 0x266548u;
    // NOP
label_26654c:
    // 0x26654c: 0x0  nop
    ctx->pc = 0x26654cu;
    // NOP
label_266550:
    // 0x266550: 0x10895  .word       0x00010895                   # INVALID     $zero, $at, 0x895 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266550u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x266550 raw=0x00010895"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_266554:
    // 0x266554: 0x5d90  .word       0x00005D90                   # mfhi        $t3 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266554u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_266558:
    // 0x266558: 0x0  nop
    ctx->pc = 0x266558u;
    // NOP
label_26655c:
    // 0x26655c: 0x0  nop
    ctx->pc = 0x26655cu;
    // NOP
label_266560:
    // 0x266560: 0x108a1  .word       0x000108A1                   # addu        $at, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266560u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_266564:
    // 0x266564: 0x4b80  sll         $t1, $zero, 14
    ctx->pc = 0x266564u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_266568:
    // 0x266568: 0x0  nop
    ctx->pc = 0x266568u;
    // NOP
label_26656c:
    // 0x26656c: 0x0  nop
    ctx->pc = 0x26656cu;
    // NOP
label_266570:
    // 0x266570: 0x108ab  .word       0x000108AB                   # sltu        $at, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266570u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_266574:
    // 0x266574: 0x4350  .word       0x00004350                   # mfhi        $t0 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266574u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_266578:
    // 0x266578: 0x0  nop
    ctx->pc = 0x266578u;
    // NOP
label_26657c:
    // 0x26657c: 0x0  nop
    ctx->pc = 0x26657cu;
    // NOP
label_266580:
    // 0x266580: 0x108b4  teq         $zero, $at, 34
    ctx->pc = 0x266580u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_266584:
    // 0x266584: 0x6330  tge         $zero, $zero, 396
    ctx->pc = 0x266584u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266588:
    // 0x266588: 0x0  nop
    ctx->pc = 0x266588u;
    // NOP
label_26658c:
    // 0x26658c: 0x0  nop
    ctx->pc = 0x26658cu;
    // NOP
label_266590:
    // 0x266590: 0x108c1  .word       0x000108C1                   # INVALID     $zero, $at, 0x8C1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266590u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x266590 raw=0x000108C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_266594:
    // 0x266594: 0x35e0  .word       0x000035E0                   # add         $a2, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266594u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_266598:
    // 0x266598: 0x0  nop
    ctx->pc = 0x266598u;
    // NOP
label_26659c:
    // 0x26659c: 0x0  nop
    ctx->pc = 0x26659cu;
    // NOP
label_2665a0:
    // 0x2665a0: 0x108c8  .word       0x000108C8                   # jr          $zero # 000108C0 <InstrIdType: CPU_SPECIAL>
label_2665a4:
    if (ctx->pc == 0x2665A4u) {
        ctx->pc = 0x2665A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2665A0u;
        // 0x2665a4: 0x6420  .word       0x00006420                   # add         $t4, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2665A8u;
        goto label_2665a8;
    }
    ctx->pc = 0x2665A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2665A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2665A0u;
        // 0x2665a4: 0x6420  .word       0x00006420                   # add         $t4, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2665A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2665A8u;
label_2665a8:
    // 0x2665a8: 0x0  nop
    ctx->pc = 0x2665a8u;
    // NOP
label_2665ac:
    // 0x2665ac: 0x0  nop
    ctx->pc = 0x2665acu;
    // NOP
label_2665b0:
    // 0x2665b0: 0x108d5  .word       0x000108D5                   # INVALID     $zero, $at, 0x8D5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2665b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2665B0 raw=0x000108D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2665b4:
    // 0x2665b4: 0x7ba0  .word       0x00007BA0                   # add         $t7, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2665b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_2665b8:
    // 0x2665b8: 0x0  nop
    ctx->pc = 0x2665b8u;
    // NOP
label_2665bc:
    // 0x2665bc: 0x0  nop
    ctx->pc = 0x2665bcu;
    // NOP
label_2665c0:
    // 0x2665c0: 0x108e5  .word       0x000108E5                   # or          $at, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2665c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_2665c4:
    // 0x2665c4: 0x7460  .word       0x00007460                   # add         $t6, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2665c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_2665c8:
    // 0x2665c8: 0x0  nop
    ctx->pc = 0x2665c8u;
    // NOP
label_2665cc:
    // 0x2665cc: 0x0  nop
    ctx->pc = 0x2665ccu;
    // NOP
label_2665d0:
    // 0x2665d0: 0x108f4  teq         $zero, $at, 35
    ctx->pc = 0x2665d0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2665d4:
    // 0x2665d4: 0x32e0  .word       0x000032E0                   # add         $a2, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2665d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_2665d8:
    // 0x2665d8: 0x0  nop
    ctx->pc = 0x2665d8u;
    // NOP
label_2665dc:
    // 0x2665dc: 0x0  nop
    ctx->pc = 0x2665dcu;
    // NOP
label_2665e0:
    // 0x2665e0: 0x108fb  dsra        $at, $at, 3
    ctx->pc = 0x2665e0u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 1) >> 3);
label_2665e4:
    // 0x2665e4: 0x41a0  .word       0x000041A0                   # add         $t0, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2665e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_2665e8:
    // 0x2665e8: 0x0  nop
    ctx->pc = 0x2665e8u;
    // NOP
label_2665ec:
    // 0x2665ec: 0x0  nop
    ctx->pc = 0x2665ecu;
    // NOP
label_2665f0:
    // 0x2665f0: 0x10904  .word       0x00010904                   # sllv        $at, $at, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2665f0u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_2665f4:
    // 0x2665f4: 0x5120  .word       0x00005120                   # add         $t2, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2665f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_2665f8:
    // 0x2665f8: 0x0  nop
    ctx->pc = 0x2665f8u;
    // NOP
label_2665fc:
    // 0x2665fc: 0x0  nop
    ctx->pc = 0x2665fcu;
    // NOP
label_266600:
    // 0x266600: 0x1090f  .word       0x0001090F                   # sync # 00010800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266600u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_266604:
    // 0x266604: 0x5560  .word       0x00005560                   # add         $t2, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266604u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_266608:
    // 0x266608: 0x0  nop
    ctx->pc = 0x266608u;
    // NOP
label_26660c:
    // 0x26660c: 0x0  nop
    ctx->pc = 0x26660cu;
    // NOP
label_266610:
    // 0x266610: 0x1091a  .word       0x0001091A                   # div         $at, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266610u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_266614:
    // 0x266614: 0x5030  tge         $zero, $zero, 320
    ctx->pc = 0x266614u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266618:
    // 0x266618: 0x0  nop
    ctx->pc = 0x266618u;
    // NOP
label_26661c:
    // 0x26661c: 0x0  nop
    ctx->pc = 0x26661cu;
    // NOP
label_266620:
    // 0x266620: 0x10925  .word       0x00010925                   # or          $at, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266620u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_266624:
    // 0x266624: 0x6cd0  .word       0x00006CD0                   # mfhi        $t5 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266624u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_266628:
    // 0x266628: 0x0  nop
    ctx->pc = 0x266628u;
    // NOP
label_26662c:
    // 0x26662c: 0x0  nop
    ctx->pc = 0x26662cu;
    // NOP
label_266630:
    // 0x266630: 0x10933  tltu        $zero, $at, 36
    ctx->pc = 0x266630u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_266634:
    // 0x266634: 0x8f90  .word       0x00008F90                   # mfhi        $s1 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266634u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_266638:
    // 0x266638: 0x0  nop
    ctx->pc = 0x266638u;
    // NOP
label_26663c:
    // 0x26663c: 0x0  nop
    ctx->pc = 0x26663cu;
    // NOP
label_266640:
    // 0x266640: 0x10945  .word       0x00010945                   # INVALID     $zero, $at, 0x945 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266640u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x266640 raw=0x00010945"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_266644:
    // 0x266644: 0x9f10  .word       0x00009F10                   # mfhi        $s3 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266644u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_266648:
    // 0x266648: 0x0  nop
    ctx->pc = 0x266648u;
    // NOP
label_26664c:
    // 0x26664c: 0x0  nop
    ctx->pc = 0x26664cu;
    // NOP
label_266650:
    // 0x266650: 0x10959  .word       0x00010959                   # multu       $zero, $at # 00000940 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266650u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_266654:
    // 0x266654: 0x4ed0  .word       0x00004ED0                   # mfhi        $t1 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266654u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_266658:
    // 0x266658: 0x0  nop
    ctx->pc = 0x266658u;
    // NOP
label_26665c:
    // 0x26665c: 0x0  nop
    ctx->pc = 0x26665cu;
    // NOP
label_266660:
    // 0x266660: 0x10963  .word       0x00010963                   # negu        $at, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266660u;
    SET_GPR_S32(ctx, 1, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_266664:
    // 0x266664: 0x3350  .word       0x00003350                   # mfhi        $a2 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266664u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_266668:
    // 0x266668: 0x0  nop
    ctx->pc = 0x266668u;
    // NOP
label_26666c:
    // 0x26666c: 0x0  nop
    ctx->pc = 0x26666cu;
    // NOP
label_266670:
    // 0x266670: 0x1096a  .word       0x0001096A                   # slt         $at, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266670u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_266674:
    // 0x266674: 0x61d0  .word       0x000061D0                   # mfhi        $t4 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266674u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_266678:
    // 0x266678: 0x0  nop
    ctx->pc = 0x266678u;
    // NOP
label_26667c:
    // 0x26667c: 0x0  nop
    ctx->pc = 0x26667cu;
    // NOP
label_266680:
    // 0x266680: 0x10977  .word       0x00010977                   # INVALID     $zero, $at, 0x977 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266680u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x266680 raw=0x00010977"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_266684:
    // 0x266684: 0x6990  .word       0x00006990                   # mfhi        $t5 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266684u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_266688:
    // 0x266688: 0x0  nop
    ctx->pc = 0x266688u;
    // NOP
label_26668c:
    // 0x26668c: 0x0  nop
    ctx->pc = 0x26668cu;
    // NOP
label_266690:
    // 0x266690: 0x10985  .word       0x00010985                   # INVALID     $zero, $at, 0x985 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266690u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x266690 raw=0x00010985"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_266694:
    // 0x266694: 0x6a00  sll         $t5, $zero, 8
    ctx->pc = 0x266694u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_266698:
    // 0x266698: 0x0  nop
    ctx->pc = 0x266698u;
    // NOP
label_26669c:
    // 0x26669c: 0x0  nop
    ctx->pc = 0x26669cu;
    // NOP
label_2666a0:
    // 0x2666a0: 0x10993  .word       0x00010993                   # mtlo        $zero # 00010980 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2666a0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2666a4:
    // 0x2666a4: 0x5610  .word       0x00005610                   # mfhi        $t2 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2666a4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_2666a8:
    // 0x2666a8: 0x0  nop
    ctx->pc = 0x2666a8u;
    // NOP
label_2666ac:
    // 0x2666ac: 0x0  nop
    ctx->pc = 0x2666acu;
    // NOP
label_2666b0:
    // 0x2666b0: 0x1099e  .word       0x0001099E                   # ddiv        $at, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2666b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2666B0 raw=0x0001099E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2666b4:
    // 0x2666b4: 0x7730  tge         $zero, $zero, 476
    ctx->pc = 0x2666b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2666b8:
    // 0x2666b8: 0x0  nop
    ctx->pc = 0x2666b8u;
    // NOP
label_2666bc:
    // 0x2666bc: 0x0  nop
    ctx->pc = 0x2666bcu;
    // NOP
label_2666c0:
    // 0x2666c0: 0x109ad  .word       0x000109AD                   # daddu       $at, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2666c0u;
    SET_GPR_U64(ctx, 1, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_2666c4:
    // 0x2666c4: 0xa5b0  tge         $zero, $zero, 662
    ctx->pc = 0x2666c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2666c8:
    // 0x2666c8: 0x0  nop
    ctx->pc = 0x2666c8u;
    // NOP
label_2666cc:
    // 0x2666cc: 0x0  nop
    ctx->pc = 0x2666ccu;
    // NOP
label_2666d0:
    // 0x2666d0: 0x109c2  srl         $at, $at, 7
    ctx->pc = 0x2666d0u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 1), 7));
label_2666d4:
    // 0x2666d4: 0x6bb0  tge         $zero, $zero, 430
    ctx->pc = 0x2666d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2666d8:
    // 0x2666d8: 0x0  nop
    ctx->pc = 0x2666d8u;
    // NOP
label_2666dc:
    // 0x2666dc: 0x0  nop
    ctx->pc = 0x2666dcu;
    // NOP
label_2666e0:
    // 0x2666e0: 0x109d0  .word       0x000109D0                   # mfhi        $at # 000101C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2666e0u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_2666e4:
    // 0x2666e4: 0x69d0  .word       0x000069D0                   # mfhi        $t5 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2666e4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_2666e8:
    // 0x2666e8: 0x0  nop
    ctx->pc = 0x2666e8u;
    // NOP
label_2666ec:
    // 0x2666ec: 0x0  nop
    ctx->pc = 0x2666ecu;
    // NOP
label_2666f0:
    // 0x2666f0: 0x109de  .word       0x000109DE                   # ddiv        $at, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2666f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2666F0 raw=0x000109DE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2666f4:
    // 0x2666f4: 0x55a0  .word       0x000055A0                   # add         $t2, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2666f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_2666f8:
    // 0x2666f8: 0x0  nop
    ctx->pc = 0x2666f8u;
    // NOP
label_2666fc:
    // 0x2666fc: 0x0  nop
    ctx->pc = 0x2666fcu;
    // NOP
label_266700:
    // 0x266700: 0x109e9  .word       0x000109E9                   # mtsa        $zero # 000109C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x266700u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_266704:
    // 0x266704: 0x4c00  sll         $t1, $zero, 16
    ctx->pc = 0x266704u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_266708:
    // 0x266708: 0x0  nop
    ctx->pc = 0x266708u;
    // NOP
label_26670c:
    // 0x26670c: 0x0  nop
    ctx->pc = 0x26670cu;
    // NOP
label_266710:
    // 0x266710: 0x109f3  tltu        $zero, $at, 39
    ctx->pc = 0x266710u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_266714:
    // 0x266714: 0x4260  .word       0x00004260                   # add         $t0, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266714u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_266718:
    // 0x266718: 0x0  nop
    ctx->pc = 0x266718u;
    // NOP
label_26671c:
    // 0x26671c: 0x0  nop
    ctx->pc = 0x26671cu;
    // NOP
label_266720:
    // 0x266720: 0x109fc  dsll32      $at, $at, 7
    ctx->pc = 0x266720u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << (32 + 7));
label_266724:
    // 0x266724: 0x34f0  tge         $zero, $zero, 211
    ctx->pc = 0x266724u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266728:
    // 0x266728: 0x0  nop
    ctx->pc = 0x266728u;
    // NOP
label_26672c:
    // 0x26672c: 0x0  nop
    ctx->pc = 0x26672cu;
    // NOP
label_266730:
    // 0x266730: 0x10a03  sra         $at, $at, 8
    ctx->pc = 0x266730u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 1), 8));
label_266734:
    // 0x266734: 0x6e80  sll         $t5, $zero, 26
    ctx->pc = 0x266734u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_266738:
    // 0x266738: 0x0  nop
    ctx->pc = 0x266738u;
    // NOP
label_26673c:
    // 0x26673c: 0x0  nop
    ctx->pc = 0x26673cu;
    // NOP
label_266740:
    // 0x266740: 0x10a11  .word       0x00010A11                   # mthi        $zero # 00010A00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266740u;
    ctx->hi = GPR_U64(ctx, 0);
label_266744:
    // 0x266744: 0x8410  .word       0x00008410                   # mfhi        $s0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266744u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_266748:
    // 0x266748: 0x0  nop
    ctx->pc = 0x266748u;
    // NOP
label_26674c:
    // 0x26674c: 0x0  nop
    ctx->pc = 0x26674cu;
    // NOP
label_266750:
    // 0x266750: 0x10a22  .word       0x00010A22                   # neg         $at, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266750u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_266754:
    // 0x266754: 0x3ed0  .word       0x00003ED0                   # mfhi        $a3 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266754u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_266758:
    // 0x266758: 0x0  nop
    ctx->pc = 0x266758u;
    // NOP
label_26675c:
    // 0x26675c: 0x0  nop
    ctx->pc = 0x26675cu;
    // NOP
label_266760:
    // 0x266760: 0x10a2a  .word       0x00010A2A                   # slt         $at, $zero, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266760u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_266764:
    // 0x266764: 0x33d0  .word       0x000033D0                   # mfhi        $a2 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266764u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_266768:
    // 0x266768: 0x0  nop
    ctx->pc = 0x266768u;
    // NOP
label_26676c:
    // 0x26676c: 0x0  nop
    ctx->pc = 0x26676cu;
    // NOP
label_266770:
    // 0x266770: 0x10a31  tgeu        $zero, $at, 40
    ctx->pc = 0x266770u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_266774:
    // 0x266774: 0x29f0  tge         $zero, $zero, 167
    ctx->pc = 0x266774u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266778:
    // 0x266778: 0x0  nop
    ctx->pc = 0x266778u;
    // NOP
label_26677c:
    // 0x26677c: 0x0  nop
    ctx->pc = 0x26677cu;
    // NOP
label_266780:
    // 0x266780: 0x10a37  .word       0x00010A37                   # INVALID     $zero, $at, 0xA37 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266780u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x266780 raw=0x00010A37"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_266784:
    // 0x266784: 0x4f00  sll         $t1, $zero, 28
    ctx->pc = 0x266784u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_266788:
    // 0x266788: 0x0  nop
    ctx->pc = 0x266788u;
    // NOP
label_26678c:
    // 0x26678c: 0x0  nop
    ctx->pc = 0x26678cu;
    // NOP
label_266790:
    // 0x266790: 0x10a41  .word       0x00010A41                   # INVALID     $zero, $at, 0xA41 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266790u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x266790 raw=0x00010A41"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_266794:
    // 0x266794: 0x55a0  .word       0x000055A0                   # add         $t2, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266794u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_266798:
    // 0x266798: 0x0  nop
    ctx->pc = 0x266798u;
    // NOP
label_26679c:
    // 0x26679c: 0x0  nop
    ctx->pc = 0x26679cu;
    // NOP
label_2667a0:
    // 0x2667a0: 0x10a4c  .word       0x00010A4C                   # syscall     41 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2667a0u;
    ctx->pc = 0x2667A4u;
runtime->handleSyscall(rdram, ctx, 0x429u);
label_2667a4:
    // 0x2667a4: 0x5160  .word       0x00005160                   # add         $t2, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2667a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_2667a8:
    // 0x2667a8: 0x0  nop
    ctx->pc = 0x2667a8u;
    // NOP
label_2667ac:
    // 0x2667ac: 0x0  nop
    ctx->pc = 0x2667acu;
    // NOP
label_2667b0:
    // 0x2667b0: 0x10a57  .word       0x00010A57                   # dsrav       $at, $at, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2667b0u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_2667b4:
    // 0x2667b4: 0x4e50  .word       0x00004E50                   # mfhi        $t1 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2667b4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_2667b8:
    // 0x2667b8: 0x0  nop
    ctx->pc = 0x2667b8u;
    // NOP
label_2667bc:
    // 0x2667bc: 0x0  nop
    ctx->pc = 0x2667bcu;
    // NOP
label_2667c0:
    // 0x2667c0: 0x10a61  .word       0x00010A61                   # addu        $at, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2667c0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_2667c4:
    // 0x2667c4: 0x9270  tge         $zero, $zero, 585
    ctx->pc = 0x2667c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2667c8:
    // 0x2667c8: 0x0  nop
    ctx->pc = 0x2667c8u;
    // NOP
label_2667cc:
    // 0x2667cc: 0x0  nop
    ctx->pc = 0x2667ccu;
    // NOP
label_2667d0:
    // 0x2667d0: 0x10a74  teq         $zero, $at, 41
    ctx->pc = 0x2667d0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2667d4:
    // 0x2667d4: 0x7ef0  tge         $zero, $zero, 507
    ctx->pc = 0x2667d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2667d8:
    // 0x2667d8: 0x0  nop
    ctx->pc = 0x2667d8u;
    // NOP
label_2667dc:
    // 0x2667dc: 0x0  nop
    ctx->pc = 0x2667dcu;
    // NOP
label_2667e0:
    // 0x2667e0: 0x10a84  .word       0x00010A84                   # sllv        $at, $at, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2667e0u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_2667e4:
    // 0x2667e4: 0x7510  .word       0x00007510                   # mfhi        $t6 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2667e4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_2667e8:
    // 0x2667e8: 0x0  nop
    ctx->pc = 0x2667e8u;
    // NOP
label_2667ec:
    // 0x2667ec: 0x0  nop
    ctx->pc = 0x2667ecu;
    // NOP
label_2667f0:
    // 0x2667f0: 0x10a93  .word       0x00010A93                   # mtlo        $zero # 00010A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2667f0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2667f4:
    // 0x2667f4: 0x38f0  tge         $zero, $zero, 227
    ctx->pc = 0x2667f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2667f8:
    // 0x2667f8: 0x0  nop
    ctx->pc = 0x2667f8u;
    // NOP
label_2667fc:
    // 0x2667fc: 0x0  nop
    ctx->pc = 0x2667fcu;
    // NOP
label_266800:
    // 0x266800: 0x10a9b  .word       0x00010A9B                   # divu        $at, $zero, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266800u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_266804:
    // 0x266804: 0x45a0  .word       0x000045A0                   # add         $t0, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266804u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_266808:
    // 0x266808: 0x0  nop
    ctx->pc = 0x266808u;
    // NOP
label_26680c:
    // 0x26680c: 0x0  nop
    ctx->pc = 0x26680cu;
    // NOP
label_266810:
    // 0x266810: 0x10aa4  .word       0x00010AA4                   # and         $at, $zero, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266810u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_266814:
    // 0x266814: 0x57b0  tge         $zero, $zero, 350
    ctx->pc = 0x266814u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266818:
    // 0x266818: 0x0  nop
    ctx->pc = 0x266818u;
    // NOP
label_26681c:
    // 0x26681c: 0x0  nop
    ctx->pc = 0x26681cu;
    // NOP
label_266820:
    // 0x266820: 0x10aaf  .word       0x00010AAF                   # dsubu       $at, $zero, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266820u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_266824:
    // 0x266824: 0x67e0  .word       0x000067E0                   # add         $t4, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266824u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_266828:
    // 0x266828: 0x0  nop
    ctx->pc = 0x266828u;
    // NOP
label_26682c:
    // 0x26682c: 0x0  nop
    ctx->pc = 0x26682cu;
    // NOP
label_266830:
    // 0x266830: 0x10abc  dsll32      $at, $at, 10
    ctx->pc = 0x266830u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << (32 + 10));
label_266834:
    // 0x266834: 0x5990  .word       0x00005990                   # mfhi        $t3 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266834u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_266838:
    // 0x266838: 0x0  nop
    ctx->pc = 0x266838u;
    // NOP
label_26683c:
    // 0x26683c: 0x0  nop
    ctx->pc = 0x26683cu;
    // NOP
label_266840:
    // 0x266840: 0x10ac8  .word       0x00010AC8                   # jr          $zero # 00010AC0 <InstrIdType: CPU_SPECIAL>
label_266844:
    if (ctx->pc == 0x266844u) {
        ctx->pc = 0x266844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266840u;
        // 0x266844: 0x5a80  sll         $t3, $zero, 10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266848u;
        goto label_266848;
    }
    ctx->pc = 0x266840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x266844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266840u;
        // 0x266844: 0x5a80  sll         $t3, $zero, 10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266840u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x266848u;
label_266848:
    // 0x266848: 0x0  nop
    ctx->pc = 0x266848u;
    // NOP
label_26684c:
    // 0x26684c: 0x0  nop
    ctx->pc = 0x26684cu;
    // NOP
label_266850:
    // 0x266850: 0x10ad4  .word       0x00010AD4                   # dsllv       $at, $at, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266850u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_266854:
    // 0x266854: 0x99b0  tge         $zero, $zero, 614
    ctx->pc = 0x266854u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266858:
    // 0x266858: 0x0  nop
    ctx->pc = 0x266858u;
    // NOP
label_26685c:
    // 0x26685c: 0x0  nop
    ctx->pc = 0x26685cu;
    // NOP
label_266860:
    // 0x266860: 0x10ae8  .word       0x00010AE8                   # mfsa        $at # 000102C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x266860u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_266864:
    // 0x266864: 0x75c0  sll         $t6, $zero, 23
    ctx->pc = 0x266864u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_266868:
    // 0x266868: 0x0  nop
    ctx->pc = 0x266868u;
    // NOP
label_26686c:
    // 0x26686c: 0x0  nop
    ctx->pc = 0x26686cu;
    // NOP
label_266870:
    // 0x266870: 0x10af7  .word       0x00010AF7                   # INVALID     $zero, $at, 0xAF7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266870u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x266870 raw=0x00010AF7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_266874:
    // 0x266874: 0x7e00  sll         $t7, $zero, 24
    ctx->pc = 0x266874u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_266878:
    // 0x266878: 0x0  nop
    ctx->pc = 0x266878u;
    // NOP
label_26687c:
    // 0x26687c: 0x0  nop
    ctx->pc = 0x26687cu;
    // NOP
label_266880:
    // 0x266880: 0x10b07  .word       0x00010B07                   # srav        $at, $at, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266880u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_266884:
    // 0x266884: 0x5f40  sll         $t3, $zero, 29
    ctx->pc = 0x266884u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_266888:
    // 0x266888: 0x0  nop
    ctx->pc = 0x266888u;
    // NOP
label_26688c:
    // 0x26688c: 0x0  nop
    ctx->pc = 0x26688cu;
    // NOP
label_266890:
    // 0x266890: 0x10b13  .word       0x00010B13                   # mtlo        $zero # 00010B00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266890u;
    ctx->lo = GPR_U64(ctx, 0);
label_266894:
    // 0x266894: 0x4530  tge         $zero, $zero, 276
    ctx->pc = 0x266894u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266898:
    // 0x266898: 0x0  nop
    ctx->pc = 0x266898u;
    // NOP
label_26689c:
    // 0x26689c: 0x0  nop
    ctx->pc = 0x26689cu;
    // NOP
label_2668a0:
    // 0x2668a0: 0x10b1c  .word       0x00010B1C                   # dmult       $zero, $at # 00000B00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2668a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2668A0 raw=0x00010B1C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2668a4:
    // 0x2668a4: 0x8f60  .word       0x00008F60                   # add         $s1, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2668a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2668a8:
    // 0x2668a8: 0x0  nop
    ctx->pc = 0x2668a8u;
    // NOP
label_2668ac:
    // 0x2668ac: 0x0  nop
    ctx->pc = 0x2668acu;
    // NOP
label_2668b0:
    // 0x2668b0: 0x10b2e  .word       0x00010B2E                   # dsub        $at, $zero, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2668b0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_2668b4:
    // 0x2668b4: 0x2270  tge         $zero, $zero, 137
    ctx->pc = 0x2668b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2668b8:
    // 0x2668b8: 0x0  nop
    ctx->pc = 0x2668b8u;
    // NOP
label_2668bc:
    // 0x2668bc: 0x0  nop
    ctx->pc = 0x2668bcu;
    // NOP
label_2668c0:
    // 0x2668c0: 0x10b33  tltu        $zero, $at, 44
    ctx->pc = 0x2668c0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2668c4:
    // 0x2668c4: 0x73e0  .word       0x000073E0                   # add         $t6, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2668c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_2668c8:
    // 0x2668c8: 0x0  nop
    ctx->pc = 0x2668c8u;
    // NOP
label_2668cc:
    // 0x2668cc: 0x0  nop
    ctx->pc = 0x2668ccu;
    // NOP
label_2668d0:
    // 0x2668d0: 0x10b42  srl         $at, $at, 13
    ctx->pc = 0x2668d0u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 1), 13));
label_2668d4:
    // 0x2668d4: 0x9d00  sll         $s3, $zero, 20
    ctx->pc = 0x2668d4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_2668d8:
    // 0x2668d8: 0x0  nop
    ctx->pc = 0x2668d8u;
    // NOP
label_2668dc:
    // 0x2668dc: 0x0  nop
    ctx->pc = 0x2668dcu;
    // NOP
label_2668e0:
    // 0x2668e0: 0x10b56  .word       0x00010B56                   # dsrlv       $at, $at, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2668e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_2668e4:
    // 0x2668e4: 0x4c70  tge         $zero, $zero, 305
    ctx->pc = 0x2668e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2668e8:
    // 0x2668e8: 0x0  nop
    ctx->pc = 0x2668e8u;
    // NOP
label_2668ec:
    // 0x2668ec: 0x0  nop
    ctx->pc = 0x2668ecu;
    // NOP
label_2668f0:
    // 0x2668f0: 0x10b60  .word       0x00010B60                   # add         $at, $zero, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2668f0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_2668f4:
    // 0x2668f4: 0x3840  sll         $a3, $zero, 1
    ctx->pc = 0x2668f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_2668f8:
    // 0x2668f8: 0x0  nop
    ctx->pc = 0x2668f8u;
    // NOP
label_2668fc:
    // 0x2668fc: 0x0  nop
    ctx->pc = 0x2668fcu;
    // NOP
label_266900:
    // 0x266900: 0x10b68  .word       0x00010B68                   # mfsa        $at # 00010340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x266900u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_266904:
    // 0x266904: 0x4e50  .word       0x00004E50                   # mfhi        $t1 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266904u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_266908:
    // 0x266908: 0x0  nop
    ctx->pc = 0x266908u;
    // NOP
label_26690c:
    // 0x26690c: 0x0  nop
    ctx->pc = 0x26690cu;
    // NOP
label_266910:
    // 0x266910: 0x10b72  tlt         $zero, $at, 45
    ctx->pc = 0x266910u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_266914:
    // 0x266914: 0x55a0  .word       0x000055A0                   # add         $t2, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266914u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_266918:
    // 0x266918: 0x0  nop
    ctx->pc = 0x266918u;
    // NOP
label_26691c:
    // 0x26691c: 0x0  nop
    ctx->pc = 0x26691cu;
    // NOP
label_266920:
    // 0x266920: 0x10b7d  .word       0x00010B7D                   # INVALID     $zero, $at, 0xB7D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266920u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x266920 raw=0x00010B7D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_266924:
    // 0x266924: 0x7640  sll         $t6, $zero, 25
    ctx->pc = 0x266924u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_266928:
    // 0x266928: 0x0  nop
    ctx->pc = 0x266928u;
    // NOP
label_26692c:
    // 0x26692c: 0x0  nop
    ctx->pc = 0x26692cu;
    // NOP
label_266930:
    // 0x266930: 0x10b8c  .word       0x00010B8C                   # syscall     46 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266930u;
    ctx->pc = 0x266934u;
runtime->handleSyscall(rdram, ctx, 0x42Eu);
label_266934:
    // 0x266934: 0x5b70  tge         $zero, $zero, 365
    ctx->pc = 0x266934u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266938:
    // 0x266938: 0x0  nop
    ctx->pc = 0x266938u;
    // NOP
label_26693c:
    // 0x26693c: 0x0  nop
    ctx->pc = 0x26693cu;
    // NOP
label_266940:
    // 0x266940: 0x10b98  .word       0x00010B98                   # mult        $at, $zero, $at # 00000380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x266940u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_266944:
    // 0x266944: 0x8980  sll         $s1, $zero, 6
    ctx->pc = 0x266944u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_266948:
    // 0x266948: 0x0  nop
    ctx->pc = 0x266948u;
    // NOP
label_26694c:
    // 0x26694c: 0x0  nop
    ctx->pc = 0x26694cu;
    // NOP
label_266950:
    // 0x266950: 0x10baa  .word       0x00010BAA                   # slt         $at, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266950u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_266954:
    // 0x266954: 0xd1d0  .word       0x0000D1D0                   # mfhi        $k0 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266954u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_266958:
    // 0x266958: 0x0  nop
    ctx->pc = 0x266958u;
    // NOP
label_26695c:
    // 0x26695c: 0x0  nop
    ctx->pc = 0x26695cu;
    // NOP
label_266960:
    // 0x266960: 0x10bc5  .word       0x00010BC5                   # INVALID     $zero, $at, 0xBC5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266960u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x266960 raw=0x00010BC5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_266964:
    // 0x266964: 0x9360  .word       0x00009360                   # add         $s2, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266964u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_266968:
    // 0x266968: 0x0  nop
    ctx->pc = 0x266968u;
    // NOP
label_26696c:
    // 0x26696c: 0x0  nop
    ctx->pc = 0x26696cu;
    // NOP
label_266970:
    // 0x266970: 0x10bd8  .word       0x00010BD8                   # mult        $at, $zero, $at # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x266970u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_266974:
    // 0x266974: 0x9140  sll         $s2, $zero, 5
    ctx->pc = 0x266974u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_266978:
    // 0x266978: 0x0  nop
    ctx->pc = 0x266978u;
    // NOP
label_26697c:
    // 0x26697c: 0x0  nop
    ctx->pc = 0x26697cu;
    // NOP
label_266980:
    // 0x266980: 0x10beb  .word       0x00010BEB                   # sltu        $at, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266980u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_266984:
    // 0x266984: 0x4fc0  sll         $t1, $zero, 31
    ctx->pc = 0x266984u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_266988:
    // 0x266988: 0x0  nop
    ctx->pc = 0x266988u;
    // NOP
label_26698c:
    // 0x26698c: 0x0  nop
    ctx->pc = 0x26698cu;
    // NOP
label_266990:
    // 0x266990: 0x10bf5  .word       0x00010BF5                   # INVALID     $zero, $at, 0xBF5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266990u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x266990 raw=0x00010BF5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_266994:
    // 0x266994: 0x3f80  sll         $a3, $zero, 30
    ctx->pc = 0x266994u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_266998:
    // 0x266998: 0x0  nop
    ctx->pc = 0x266998u;
    // NOP
label_26699c:
    // 0x26699c: 0x0  nop
    ctx->pc = 0x26699cu;
    // NOP
label_2669a0:
    // 0x2669a0: 0x10bfd  .word       0x00010BFD                   # INVALID     $zero, $at, 0xBFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2669a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2669A0 raw=0x00010BFD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2669a4:
    // 0x2669a4: 0x92a0  .word       0x000092A0                   # add         $s2, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2669a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_2669a8:
    // 0x2669a8: 0x0  nop
    ctx->pc = 0x2669a8u;
    // NOP
label_2669ac:
    // 0x2669ac: 0x0  nop
    ctx->pc = 0x2669acu;
    // NOP
label_2669b0:
    // 0x2669b0: 0x10c10  .word       0x00010C10                   # mfhi        $at # 00010400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2669b0u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_2669b4:
    // 0x2669b4: 0x4dd0  .word       0x00004DD0                   # mfhi        $t1 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2669b4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_2669b8:
    // 0x2669b8: 0x0  nop
    ctx->pc = 0x2669b8u;
    // NOP
label_2669bc:
    // 0x2669bc: 0x0  nop
    ctx->pc = 0x2669bcu;
    // NOP
label_2669c0:
    // 0x2669c0: 0x10c1a  .word       0x00010C1A                   # div         $at, $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2669c0u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2669c4:
    // 0x2669c4: 0x92b0  tge         $zero, $zero, 586
    ctx->pc = 0x2669c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2669c8:
    // 0x2669c8: 0x0  nop
    ctx->pc = 0x2669c8u;
    // NOP
label_2669cc:
    // 0x2669cc: 0x0  nop
    ctx->pc = 0x2669ccu;
    // NOP
label_2669d0:
    // 0x2669d0: 0x10c2d  .word       0x00010C2D                   # daddu       $at, $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2669d0u;
    SET_GPR_U64(ctx, 1, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_2669d4:
    // 0x2669d4: 0x54d0  .word       0x000054D0                   # mfhi        $t2 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2669d4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_2669d8:
    // 0x2669d8: 0x0  nop
    ctx->pc = 0x2669d8u;
    // NOP
label_2669dc:
    // 0x2669dc: 0x0  nop
    ctx->pc = 0x2669dcu;
    // NOP
label_2669e0:
    // 0x2669e0: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x2669e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
label_2669e4:
    // 0x2669e4: 0x43c0  sll         $t0, $zero, 15
    ctx->pc = 0x2669e4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_2669e8:
    // 0x2669e8: 0x0  nop
    ctx->pc = 0x2669e8u;
    // NOP
label_2669ec:
    // 0x2669ec: 0x0  nop
    ctx->pc = 0x2669ecu;
    // NOP
label_2669f0:
    // 0x2669f0: 0x10c41  .word       0x00010C41                   # INVALID     $zero, $at, 0xC41 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2669f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2669F0 raw=0x00010C41"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2669f4:
    // 0x2669f4: 0x5fd0  .word       0x00005FD0                   # mfhi        $t3 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2669f4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_2669f8:
    // 0x2669f8: 0x0  nop
    ctx->pc = 0x2669f8u;
    // NOP
label_2669fc:
    // 0x2669fc: 0x0  nop
    ctx->pc = 0x2669fcu;
    // NOP
label_266a00:
    // 0x266a00: 0x10c4d  break       1, 49
    ctx->pc = 0x266a00u;
    runtime->handleBreak(rdram, ctx);
label_266a04:
    // 0x266a04: 0x1e60  .word       0x00001E60                   # add         $v1, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266a04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_266a08:
    // 0x266a08: 0x0  nop
    ctx->pc = 0x266a08u;
    // NOP
label_266a0c:
    // 0x266a0c: 0x0  nop
    ctx->pc = 0x266a0cu;
    // NOP
label_266a10:
    // 0x266a10: 0x10c51  .word       0x00010C51                   # mthi        $zero # 00010C40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266a10u;
    ctx->hi = GPR_U64(ctx, 0);
label_266a14:
    // 0x266a14: 0x2820  add         $a1, $zero, $zero
    ctx->pc = 0x266a14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_266a18:
    // 0x266a18: 0x0  nop
    ctx->pc = 0x266a18u;
    // NOP
label_266a1c:
    // 0x266a1c: 0x0  nop
    ctx->pc = 0x266a1cu;
    // NOP
label_266a20:
    // 0x266a20: 0x10c57  .word       0x00010C57                   # dsrav       $at, $at, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266a20u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_266a24:
    // 0x266a24: 0x3990  .word       0x00003990                   # mfhi        $a3 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266a24u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_266a28:
    // 0x266a28: 0x0  nop
    ctx->pc = 0x266a28u;
    // NOP
label_266a2c:
    // 0x266a2c: 0x0  nop
    ctx->pc = 0x266a2cu;
    // NOP
label_266a30:
    // 0x266a30: 0x10c5f  .word       0x00010C5F                   # ddivu       $at, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266a30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x266A30 raw=0x00010C5F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_266a34:
    // 0x266a34: 0x4280  sll         $t0, $zero, 10
    ctx->pc = 0x266a34u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_266a38:
    // 0x266a38: 0x0  nop
    ctx->pc = 0x266a38u;
    // NOP
label_266a3c:
    // 0x266a3c: 0x0  nop
    ctx->pc = 0x266a3cu;
    // NOP
label_266a40:
    // 0x266a40: 0x10c68  .word       0x00010C68                   # mfsa        $at # 00010440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x266a40u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_266a44:
    // 0x266a44: 0x47f0  tge         $zero, $zero, 287
    ctx->pc = 0x266a44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266a48:
    // 0x266a48: 0x0  nop
    ctx->pc = 0x266a48u;
    // NOP
label_266a4c:
    // 0x266a4c: 0x0  nop
    ctx->pc = 0x266a4cu;
    // NOP
label_266a50:
    // 0x266a50: 0x10c71  tgeu        $zero, $at, 49
    ctx->pc = 0x266a50u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_266a54:
    // 0x266a54: 0x40c0  sll         $t0, $zero, 3
    ctx->pc = 0x266a54u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_266a58:
    // 0x266a58: 0x0  nop
    ctx->pc = 0x266a58u;
    // NOP
label_266a5c:
    // 0x266a5c: 0x0  nop
    ctx->pc = 0x266a5cu;
    // NOP
label_266a60:
    // 0x266a60: 0x10c7a  dsrl        $at, $at, 17
    ctx->pc = 0x266a60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) >> 17);
label_266a64:
    // 0x266a64: 0x5400  sll         $t2, $zero, 16
    ctx->pc = 0x266a64u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_266a68:
    // 0x266a68: 0x0  nop
    ctx->pc = 0x266a68u;
    // NOP
label_266a6c:
    // 0x266a6c: 0x0  nop
    ctx->pc = 0x266a6cu;
    // NOP
label_266a70:
    // 0x266a70: 0x10c85  .word       0x00010C85                   # INVALID     $zero, $at, 0xC85 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266a70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x266A70 raw=0x00010C85"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_266a74:
    // 0x266a74: 0x4fa0  .word       0x00004FA0                   # add         $t1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266a74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_266a78:
    // 0x266a78: 0x0  nop
    ctx->pc = 0x266a78u;
    // NOP
label_266a7c:
    // 0x266a7c: 0x0  nop
    ctx->pc = 0x266a7cu;
    // NOP
label_266a80:
    // 0x266a80: 0x10c8f  .word       0x00010C8F                   # sync.p # 00010800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266a80u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_266a84:
    // 0x266a84: 0x4640  sll         $t0, $zero, 25
    ctx->pc = 0x266a84u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_266a88:
    // 0x266a88: 0x0  nop
    ctx->pc = 0x266a88u;
    // NOP
label_266a8c:
    // 0x266a8c: 0x0  nop
    ctx->pc = 0x266a8cu;
    // NOP
label_266a90:
    // 0x266a90: 0x10c98  .word       0x00010C98                   # mult        $at, $zero, $at # 00000480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x266a90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_266a94:
    // 0x266a94: 0x4aa0  .word       0x00004AA0                   # add         $t1, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266a94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_266a98:
    // 0x266a98: 0x0  nop
    ctx->pc = 0x266a98u;
    // NOP
label_266a9c:
    // 0x266a9c: 0x0  nop
    ctx->pc = 0x266a9cu;
    // NOP
label_266aa0:
    // 0x266aa0: 0x10ca2  .word       0x00010CA2                   # neg         $at, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266aa0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_266aa4:
    // 0x266aa4: 0x5e70  tge         $zero, $zero, 377
    ctx->pc = 0x266aa4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266aa8:
    // 0x266aa8: 0x0  nop
    ctx->pc = 0x266aa8u;
    // NOP
label_266aac:
    // 0x266aac: 0x0  nop
    ctx->pc = 0x266aacu;
    // NOP
label_266ab0:
    // 0x266ab0: 0x10cae  .word       0x00010CAE                   # dsub        $at, $zero, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266ab0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_266ab4:
    // 0x266ab4: 0x6ac0  sll         $t5, $zero, 11
    ctx->pc = 0x266ab4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_266ab8:
    // 0x266ab8: 0x0  nop
    ctx->pc = 0x266ab8u;
    // NOP
label_266abc:
    // 0x266abc: 0x0  nop
    ctx->pc = 0x266abcu;
    // NOP
label_266ac0:
    // 0x266ac0: 0x10cbc  dsll32      $at, $at, 18
    ctx->pc = 0x266ac0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << (32 + 18));
label_266ac4:
    // 0x266ac4: 0x32c0  sll         $a2, $zero, 11
    ctx->pc = 0x266ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_266ac8:
    // 0x266ac8: 0x0  nop
    ctx->pc = 0x266ac8u;
    // NOP
label_266acc:
    // 0x266acc: 0x0  nop
    ctx->pc = 0x266accu;
    // NOP
label_266ad0:
    // 0x266ad0: 0x10cc3  sra         $at, $at, 19
    ctx->pc = 0x266ad0u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 1), 19));
label_266ad4:
    // 0x266ad4: 0x4bb0  tge         $zero, $zero, 302
    ctx->pc = 0x266ad4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266ad8:
    // 0x266ad8: 0x0  nop
    ctx->pc = 0x266ad8u;
    // NOP
label_266adc:
    // 0x266adc: 0x0  nop
    ctx->pc = 0x266adcu;
    // NOP
label_266ae0:
    // 0x266ae0: 0x10ccd  break       1, 51
    ctx->pc = 0x266ae0u;
    runtime->handleBreak(rdram, ctx);
label_266ae4:
    // 0x266ae4: 0x4550  .word       0x00004550                   # mfhi        $t0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266ae4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_266ae8:
    // 0x266ae8: 0x0  nop
    ctx->pc = 0x266ae8u;
    // NOP
label_266aec:
    // 0x266aec: 0x0  nop
    ctx->pc = 0x266aecu;
    // NOP
label_266af0:
    // 0x266af0: 0x10cd6  .word       0x00010CD6                   # dsrlv       $at, $at, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266af0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_266af4:
    // 0x266af4: 0x42d0  .word       0x000042D0                   # mfhi        $t0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266af4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_266af8:
    // 0x266af8: 0x0  nop
    ctx->pc = 0x266af8u;
    // NOP
label_266afc:
    // 0x266afc: 0x0  nop
    ctx->pc = 0x266afcu;
    // NOP
label_266b00:
    // 0x266b00: 0x10cdf  .word       0x00010CDF                   # ddivu       $at, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266b00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x266B00 raw=0x00010CDF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_266b04:
    // 0x266b04: 0x3ec0  sll         $a3, $zero, 27
    ctx->pc = 0x266b04u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_266b08:
    // 0x266b08: 0x0  nop
    ctx->pc = 0x266b08u;
    // NOP
label_266b0c:
    // 0x266b0c: 0x0  nop
    ctx->pc = 0x266b0cu;
    // NOP
    ctx->pc = 0x266b10u;
    return;
}
