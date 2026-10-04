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

// Function: entry_00254d38
// Address: 0x254d38 - 0x27d478
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void entry_00254d38_part8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2583e8u: goto label_2583e8;
        case 0x2583ecu: goto label_2583ec;
        case 0x2583f0u: goto label_2583f0;
        case 0x2583f4u: goto label_2583f4;
        case 0x2583f8u: goto label_2583f8;
        case 0x2583fcu: goto label_2583fc;
        case 0x258400u: goto label_258400;
        case 0x258404u: goto label_258404;
        case 0x258408u: goto label_258408;
        case 0x25840cu: goto label_25840c;
        case 0x258410u: goto label_258410;
        case 0x258414u: goto label_258414;
        case 0x258418u: goto label_258418;
        case 0x25841cu: goto label_25841c;
        case 0x258420u: goto label_258420;
        case 0x258424u: goto label_258424;
        case 0x258428u: goto label_258428;
        case 0x25842cu: goto label_25842c;
        case 0x258430u: goto label_258430;
        case 0x258434u: goto label_258434;
        case 0x258438u: goto label_258438;
        case 0x25843cu: goto label_25843c;
        case 0x258440u: goto label_258440;
        case 0x258444u: goto label_258444;
        case 0x258448u: goto label_258448;
        case 0x25844cu: goto label_25844c;
        case 0x258450u: goto label_258450;
        case 0x258454u: goto label_258454;
        case 0x258458u: goto label_258458;
        case 0x25845cu: goto label_25845c;
        case 0x258460u: goto label_258460;
        case 0x258464u: goto label_258464;
        case 0x258468u: goto label_258468;
        case 0x25846cu: goto label_25846c;
        case 0x258470u: goto label_258470;
        case 0x258474u: goto label_258474;
        case 0x258478u: goto label_258478;
        case 0x25847cu: goto label_25847c;
        case 0x258480u: goto label_258480;
        case 0x258484u: goto label_258484;
        case 0x258488u: goto label_258488;
        case 0x25848cu: goto label_25848c;
        case 0x258490u: goto label_258490;
        case 0x258494u: goto label_258494;
        case 0x258498u: goto label_258498;
        case 0x25849cu: goto label_25849c;
        case 0x2584a0u: goto label_2584a0;
        case 0x2584a4u: goto label_2584a4;
        case 0x2584a8u: goto label_2584a8;
        case 0x2584acu: goto label_2584ac;
        case 0x2584b0u: goto label_2584b0;
        case 0x2584b4u: goto label_2584b4;
        case 0x2584b8u: goto label_2584b8;
        case 0x2584bcu: goto label_2584bc;
        case 0x2584c0u: goto label_2584c0;
        case 0x2584c4u: goto label_2584c4;
        case 0x2584c8u: goto label_2584c8;
        case 0x2584ccu: goto label_2584cc;
        case 0x2584d0u: goto label_2584d0;
        case 0x2584d4u: goto label_2584d4;
        case 0x2584d8u: goto label_2584d8;
        case 0x2584dcu: goto label_2584dc;
        case 0x2584e0u: goto label_2584e0;
        case 0x2584e4u: goto label_2584e4;
        case 0x2584e8u: goto label_2584e8;
        case 0x2584ecu: goto label_2584ec;
        case 0x2584f0u: goto label_2584f0;
        case 0x2584f4u: goto label_2584f4;
        case 0x2584f8u: goto label_2584f8;
        case 0x2584fcu: goto label_2584fc;
        case 0x258500u: goto label_258500;
        case 0x258504u: goto label_258504;
        case 0x258508u: goto label_258508;
        case 0x25850cu: goto label_25850c;
        case 0x258510u: goto label_258510;
        case 0x258514u: goto label_258514;
        case 0x258518u: goto label_258518;
        case 0x25851cu: goto label_25851c;
        case 0x258520u: goto label_258520;
        case 0x258524u: goto label_258524;
        case 0x258528u: goto label_258528;
        case 0x25852cu: goto label_25852c;
        case 0x258530u: goto label_258530;
        case 0x258534u: goto label_258534;
        case 0x258538u: goto label_258538;
        case 0x25853cu: goto label_25853c;
        case 0x258540u: goto label_258540;
        case 0x258544u: goto label_258544;
        case 0x258548u: goto label_258548;
        case 0x25854cu: goto label_25854c;
        case 0x258550u: goto label_258550;
        case 0x258554u: goto label_258554;
        case 0x258558u: goto label_258558;
        case 0x25855cu: goto label_25855c;
        case 0x258560u: goto label_258560;
        case 0x258564u: goto label_258564;
        case 0x258568u: goto label_258568;
        case 0x25856cu: goto label_25856c;
        case 0x258570u: goto label_258570;
        case 0x258574u: goto label_258574;
        case 0x258578u: goto label_258578;
        case 0x25857cu: goto label_25857c;
        case 0x258580u: goto label_258580;
        case 0x258584u: goto label_258584;
        case 0x258588u: goto label_258588;
        case 0x25858cu: goto label_25858c;
        case 0x258590u: goto label_258590;
        case 0x258594u: goto label_258594;
        case 0x258598u: goto label_258598;
        case 0x25859cu: goto label_25859c;
        case 0x2585a0u: goto label_2585a0;
        case 0x2585a4u: goto label_2585a4;
        case 0x2585a8u: goto label_2585a8;
        case 0x2585acu: goto label_2585ac;
        case 0x2585b0u: goto label_2585b0;
        case 0x2585b4u: goto label_2585b4;
        case 0x2585b8u: goto label_2585b8;
        case 0x2585bcu: goto label_2585bc;
        case 0x2585c0u: goto label_2585c0;
        case 0x2585c4u: goto label_2585c4;
        case 0x2585c8u: goto label_2585c8;
        case 0x2585ccu: goto label_2585cc;
        case 0x2585d0u: goto label_2585d0;
        case 0x2585d4u: goto label_2585d4;
        case 0x2585d8u: goto label_2585d8;
        case 0x2585dcu: goto label_2585dc;
        case 0x2585e0u: goto label_2585e0;
        case 0x2585e4u: goto label_2585e4;
        case 0x2585e8u: goto label_2585e8;
        case 0x2585ecu: goto label_2585ec;
        case 0x2585f0u: goto label_2585f0;
        case 0x2585f4u: goto label_2585f4;
        case 0x2585f8u: goto label_2585f8;
        case 0x2585fcu: goto label_2585fc;
        case 0x258600u: goto label_258600;
        case 0x258604u: goto label_258604;
        case 0x258608u: goto label_258608;
        case 0x25860cu: goto label_25860c;
        case 0x258610u: goto label_258610;
        case 0x258614u: goto label_258614;
        case 0x258618u: goto label_258618;
        case 0x25861cu: goto label_25861c;
        case 0x258620u: goto label_258620;
        case 0x258624u: goto label_258624;
        case 0x258628u: goto label_258628;
        case 0x25862cu: goto label_25862c;
        case 0x258630u: goto label_258630;
        case 0x258634u: goto label_258634;
        case 0x258638u: goto label_258638;
        case 0x25863cu: goto label_25863c;
        case 0x258640u: goto label_258640;
        case 0x258644u: goto label_258644;
        case 0x258648u: goto label_258648;
        case 0x25864cu: goto label_25864c;
        case 0x258650u: goto label_258650;
        case 0x258654u: goto label_258654;
        case 0x258658u: goto label_258658;
        case 0x25865cu: goto label_25865c;
        case 0x258660u: goto label_258660;
        case 0x258664u: goto label_258664;
        case 0x258668u: goto label_258668;
        case 0x25866cu: goto label_25866c;
        case 0x258670u: goto label_258670;
        case 0x258674u: goto label_258674;
        case 0x258678u: goto label_258678;
        case 0x25867cu: goto label_25867c;
        case 0x258680u: goto label_258680;
        case 0x258684u: goto label_258684;
        case 0x258688u: goto label_258688;
        case 0x25868cu: goto label_25868c;
        case 0x258690u: goto label_258690;
        case 0x258694u: goto label_258694;
        case 0x258698u: goto label_258698;
        case 0x25869cu: goto label_25869c;
        case 0x2586a0u: goto label_2586a0;
        case 0x2586a4u: goto label_2586a4;
        case 0x2586a8u: goto label_2586a8;
        case 0x2586acu: goto label_2586ac;
        case 0x2586b0u: goto label_2586b0;
        case 0x2586b4u: goto label_2586b4;
        case 0x2586b8u: goto label_2586b8;
        case 0x2586bcu: goto label_2586bc;
        case 0x2586c0u: goto label_2586c0;
        case 0x2586c4u: goto label_2586c4;
        case 0x2586c8u: goto label_2586c8;
        case 0x2586ccu: goto label_2586cc;
        case 0x2586d0u: goto label_2586d0;
        case 0x2586d4u: goto label_2586d4;
        case 0x2586d8u: goto label_2586d8;
        case 0x2586dcu: goto label_2586dc;
        case 0x2586e0u: goto label_2586e0;
        case 0x2586e4u: goto label_2586e4;
        case 0x2586e8u: goto label_2586e8;
        case 0x2586ecu: goto label_2586ec;
        case 0x2586f0u: goto label_2586f0;
        case 0x2586f4u: goto label_2586f4;
        case 0x2586f8u: goto label_2586f8;
        case 0x2586fcu: goto label_2586fc;
        case 0x258700u: goto label_258700;
        case 0x258704u: goto label_258704;
        case 0x258708u: goto label_258708;
        case 0x25870cu: goto label_25870c;
        case 0x258710u: goto label_258710;
        case 0x258714u: goto label_258714;
        case 0x258718u: goto label_258718;
        case 0x25871cu: goto label_25871c;
        case 0x258720u: goto label_258720;
        case 0x258724u: goto label_258724;
        case 0x258728u: goto label_258728;
        case 0x25872cu: goto label_25872c;
        case 0x258730u: goto label_258730;
        case 0x258734u: goto label_258734;
        case 0x258738u: goto label_258738;
        case 0x25873cu: goto label_25873c;
        case 0x258740u: goto label_258740;
        case 0x258744u: goto label_258744;
        case 0x258748u: goto label_258748;
        case 0x25874cu: goto label_25874c;
        case 0x258750u: goto label_258750;
        case 0x258754u: goto label_258754;
        case 0x258758u: goto label_258758;
        case 0x25875cu: goto label_25875c;
        case 0x258760u: goto label_258760;
        case 0x258764u: goto label_258764;
        case 0x258768u: goto label_258768;
        case 0x25876cu: goto label_25876c;
        case 0x258770u: goto label_258770;
        case 0x258774u: goto label_258774;
        case 0x258778u: goto label_258778;
        case 0x25877cu: goto label_25877c;
        case 0x258780u: goto label_258780;
        case 0x258784u: goto label_258784;
        case 0x258788u: goto label_258788;
        case 0x25878cu: goto label_25878c;
        case 0x258790u: goto label_258790;
        case 0x258794u: goto label_258794;
        case 0x258798u: goto label_258798;
        case 0x25879cu: goto label_25879c;
        case 0x2587a0u: goto label_2587a0;
        case 0x2587a4u: goto label_2587a4;
        case 0x2587a8u: goto label_2587a8;
        case 0x2587acu: goto label_2587ac;
        case 0x2587b0u: goto label_2587b0;
        case 0x2587b4u: goto label_2587b4;
        case 0x2587b8u: goto label_2587b8;
        case 0x2587bcu: goto label_2587bc;
        case 0x2587c0u: goto label_2587c0;
        case 0x2587c4u: goto label_2587c4;
        case 0x2587c8u: goto label_2587c8;
        case 0x2587ccu: goto label_2587cc;
        case 0x2587d0u: goto label_2587d0;
        case 0x2587d4u: goto label_2587d4;
        case 0x2587d8u: goto label_2587d8;
        case 0x2587dcu: goto label_2587dc;
        case 0x2587e0u: goto label_2587e0;
        case 0x2587e4u: goto label_2587e4;
        case 0x2587e8u: goto label_2587e8;
        case 0x2587ecu: goto label_2587ec;
        case 0x2587f0u: goto label_2587f0;
        case 0x2587f4u: goto label_2587f4;
        case 0x2587f8u: goto label_2587f8;
        case 0x2587fcu: goto label_2587fc;
        case 0x258800u: goto label_258800;
        case 0x258804u: goto label_258804;
        case 0x258808u: goto label_258808;
        case 0x25880cu: goto label_25880c;
        case 0x258810u: goto label_258810;
        case 0x258814u: goto label_258814;
        case 0x258818u: goto label_258818;
        case 0x25881cu: goto label_25881c;
        case 0x258820u: goto label_258820;
        case 0x258824u: goto label_258824;
        case 0x258828u: goto label_258828;
        case 0x25882cu: goto label_25882c;
        case 0x258830u: goto label_258830;
        case 0x258834u: goto label_258834;
        case 0x258838u: goto label_258838;
        case 0x25883cu: goto label_25883c;
        case 0x258840u: goto label_258840;
        case 0x258844u: goto label_258844;
        case 0x258848u: goto label_258848;
        case 0x25884cu: goto label_25884c;
        case 0x258850u: goto label_258850;
        case 0x258854u: goto label_258854;
        case 0x258858u: goto label_258858;
        case 0x25885cu: goto label_25885c;
        case 0x258860u: goto label_258860;
        case 0x258864u: goto label_258864;
        case 0x258868u: goto label_258868;
        case 0x25886cu: goto label_25886c;
        case 0x258870u: goto label_258870;
        case 0x258874u: goto label_258874;
        case 0x258878u: goto label_258878;
        case 0x25887cu: goto label_25887c;
        case 0x258880u: goto label_258880;
        case 0x258884u: goto label_258884;
        case 0x258888u: goto label_258888;
        case 0x25888cu: goto label_25888c;
        case 0x258890u: goto label_258890;
        case 0x258894u: goto label_258894;
        case 0x258898u: goto label_258898;
        case 0x25889cu: goto label_25889c;
        case 0x2588a0u: goto label_2588a0;
        case 0x2588a4u: goto label_2588a4;
        case 0x2588a8u: goto label_2588a8;
        case 0x2588acu: goto label_2588ac;
        case 0x2588b0u: goto label_2588b0;
        case 0x2588b4u: goto label_2588b4;
        case 0x2588b8u: goto label_2588b8;
        case 0x2588bcu: goto label_2588bc;
        case 0x2588c0u: goto label_2588c0;
        case 0x2588c4u: goto label_2588c4;
        case 0x2588c8u: goto label_2588c8;
        case 0x2588ccu: goto label_2588cc;
        case 0x2588d0u: goto label_2588d0;
        case 0x2588d4u: goto label_2588d4;
        case 0x2588d8u: goto label_2588d8;
        case 0x2588dcu: goto label_2588dc;
        case 0x2588e0u: goto label_2588e0;
        case 0x2588e4u: goto label_2588e4;
        case 0x2588e8u: goto label_2588e8;
        case 0x2588ecu: goto label_2588ec;
        case 0x2588f0u: goto label_2588f0;
        case 0x2588f4u: goto label_2588f4;
        case 0x2588f8u: goto label_2588f8;
        case 0x2588fcu: goto label_2588fc;
        case 0x258900u: goto label_258900;
        case 0x258904u: goto label_258904;
        case 0x258908u: goto label_258908;
        case 0x25890cu: goto label_25890c;
        case 0x258910u: goto label_258910;
        case 0x258914u: goto label_258914;
        case 0x258918u: goto label_258918;
        case 0x25891cu: goto label_25891c;
        case 0x258920u: goto label_258920;
        case 0x258924u: goto label_258924;
        case 0x258928u: goto label_258928;
        case 0x25892cu: goto label_25892c;
        case 0x258930u: goto label_258930;
        case 0x258934u: goto label_258934;
        case 0x258938u: goto label_258938;
        case 0x25893cu: goto label_25893c;
        case 0x258940u: goto label_258940;
        case 0x258944u: goto label_258944;
        case 0x258948u: goto label_258948;
        case 0x25894cu: goto label_25894c;
        case 0x258950u: goto label_258950;
        case 0x258954u: goto label_258954;
        case 0x258958u: goto label_258958;
        case 0x25895cu: goto label_25895c;
        case 0x258960u: goto label_258960;
        case 0x258964u: goto label_258964;
        case 0x258968u: goto label_258968;
        case 0x25896cu: goto label_25896c;
        case 0x258970u: goto label_258970;
        case 0x258974u: goto label_258974;
        case 0x258978u: goto label_258978;
        case 0x25897cu: goto label_25897c;
        case 0x258980u: goto label_258980;
        case 0x258984u: goto label_258984;
        case 0x258988u: goto label_258988;
        case 0x25898cu: goto label_25898c;
        case 0x258990u: goto label_258990;
        case 0x258994u: goto label_258994;
        case 0x258998u: goto label_258998;
        case 0x25899cu: goto label_25899c;
        case 0x2589a0u: goto label_2589a0;
        case 0x2589a4u: goto label_2589a4;
        case 0x2589a8u: goto label_2589a8;
        case 0x2589acu: goto label_2589ac;
        case 0x2589b0u: goto label_2589b0;
        case 0x2589b4u: goto label_2589b4;
        case 0x2589b8u: goto label_2589b8;
        case 0x2589bcu: goto label_2589bc;
        case 0x2589c0u: goto label_2589c0;
        case 0x2589c4u: goto label_2589c4;
        case 0x2589c8u: goto label_2589c8;
        case 0x2589ccu: goto label_2589cc;
        case 0x2589d0u: goto label_2589d0;
        case 0x2589d4u: goto label_2589d4;
        case 0x2589d8u: goto label_2589d8;
        case 0x2589dcu: goto label_2589dc;
        case 0x2589e0u: goto label_2589e0;
        case 0x2589e4u: goto label_2589e4;
        case 0x2589e8u: goto label_2589e8;
        case 0x2589ecu: goto label_2589ec;
        case 0x2589f0u: goto label_2589f0;
        case 0x2589f4u: goto label_2589f4;
        case 0x2589f8u: goto label_2589f8;
        case 0x2589fcu: goto label_2589fc;
        case 0x258a00u: goto label_258a00;
        case 0x258a04u: goto label_258a04;
        case 0x258a08u: goto label_258a08;
        case 0x258a0cu: goto label_258a0c;
        case 0x258a10u: goto label_258a10;
        case 0x258a14u: goto label_258a14;
        case 0x258a18u: goto label_258a18;
        case 0x258a1cu: goto label_258a1c;
        case 0x258a20u: goto label_258a20;
        case 0x258a24u: goto label_258a24;
        case 0x258a28u: goto label_258a28;
        case 0x258a2cu: goto label_258a2c;
        case 0x258a30u: goto label_258a30;
        case 0x258a34u: goto label_258a34;
        case 0x258a38u: goto label_258a38;
        case 0x258a3cu: goto label_258a3c;
        case 0x258a40u: goto label_258a40;
        case 0x258a44u: goto label_258a44;
        case 0x258a48u: goto label_258a48;
        case 0x258a4cu: goto label_258a4c;
        case 0x258a50u: goto label_258a50;
        case 0x258a54u: goto label_258a54;
        case 0x258a58u: goto label_258a58;
        case 0x258a5cu: goto label_258a5c;
        case 0x258a60u: goto label_258a60;
        case 0x258a64u: goto label_258a64;
        case 0x258a68u: goto label_258a68;
        case 0x258a6cu: goto label_258a6c;
        case 0x258a70u: goto label_258a70;
        case 0x258a74u: goto label_258a74;
        case 0x258a78u: goto label_258a78;
        case 0x258a7cu: goto label_258a7c;
        case 0x258a80u: goto label_258a80;
        case 0x258a84u: goto label_258a84;
        case 0x258a88u: goto label_258a88;
        case 0x258a8cu: goto label_258a8c;
        case 0x258a90u: goto label_258a90;
        case 0x258a94u: goto label_258a94;
        case 0x258a98u: goto label_258a98;
        case 0x258a9cu: goto label_258a9c;
        case 0x258aa0u: goto label_258aa0;
        case 0x258aa4u: goto label_258aa4;
        case 0x258aa8u: goto label_258aa8;
        case 0x258aacu: goto label_258aac;
        case 0x258ab0u: goto label_258ab0;
        case 0x258ab4u: goto label_258ab4;
        case 0x258ab8u: goto label_258ab8;
        case 0x258abcu: goto label_258abc;
        case 0x258ac0u: goto label_258ac0;
        case 0x258ac4u: goto label_258ac4;
        case 0x258ac8u: goto label_258ac8;
        case 0x258accu: goto label_258acc;
        case 0x258ad0u: goto label_258ad0;
        case 0x258ad4u: goto label_258ad4;
        case 0x258ad8u: goto label_258ad8;
        case 0x258adcu: goto label_258adc;
        case 0x258ae0u: goto label_258ae0;
        case 0x258ae4u: goto label_258ae4;
        case 0x258ae8u: goto label_258ae8;
        case 0x258aecu: goto label_258aec;
        case 0x258af0u: goto label_258af0;
        case 0x258af4u: goto label_258af4;
        case 0x258af8u: goto label_258af8;
        case 0x258afcu: goto label_258afc;
        case 0x258b00u: goto label_258b00;
        case 0x258b04u: goto label_258b04;
        case 0x258b08u: goto label_258b08;
        case 0x258b0cu: goto label_258b0c;
        case 0x258b10u: goto label_258b10;
        case 0x258b14u: goto label_258b14;
        case 0x258b18u: goto label_258b18;
        case 0x258b1cu: goto label_258b1c;
        case 0x258b20u: goto label_258b20;
        case 0x258b24u: goto label_258b24;
        case 0x258b28u: goto label_258b28;
        case 0x258b2cu: goto label_258b2c;
        case 0x258b30u: goto label_258b30;
        case 0x258b34u: goto label_258b34;
        case 0x258b38u: goto label_258b38;
        case 0x258b3cu: goto label_258b3c;
        case 0x258b40u: goto label_258b40;
        case 0x258b44u: goto label_258b44;
        case 0x258b48u: goto label_258b48;
        case 0x258b4cu: goto label_258b4c;
        case 0x258b50u: goto label_258b50;
        case 0x258b54u: goto label_258b54;
        case 0x258b58u: goto label_258b58;
        case 0x258b5cu: goto label_258b5c;
        case 0x258b60u: goto label_258b60;
        case 0x258b64u: goto label_258b64;
        case 0x258b68u: goto label_258b68;
        case 0x258b6cu: goto label_258b6c;
        case 0x258b70u: goto label_258b70;
        case 0x258b74u: goto label_258b74;
        case 0x258b78u: goto label_258b78;
        case 0x258b7cu: goto label_258b7c;
        case 0x258b80u: goto label_258b80;
        case 0x258b84u: goto label_258b84;
        case 0x258b88u: goto label_258b88;
        case 0x258b8cu: goto label_258b8c;
        case 0x258b90u: goto label_258b90;
        case 0x258b94u: goto label_258b94;
        case 0x258b98u: goto label_258b98;
        case 0x258b9cu: goto label_258b9c;
        case 0x258ba0u: goto label_258ba0;
        case 0x258ba4u: goto label_258ba4;
        case 0x258ba8u: goto label_258ba8;
        case 0x258bacu: goto label_258bac;
        case 0x258bb0u: goto label_258bb0;
        case 0x258bb4u: goto label_258bb4;
        default: return;
    }

label_2583e8:
    // 0x2583e8: 0x0  nop
    ctx->pc = 0x2583e8u;
    // NOP
label_2583ec:
    // 0x2583ec: 0x0  nop
    ctx->pc = 0x2583ecu;
    // NOP
label_2583f0:
    // 0x2583f0: 0x1e59  .word       0x00001E59                   # multu       $zero, $zero # 00001E40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2583f0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2583f4:
    // 0x2583f4: 0x94e0  .word       0x000094E0                   # add         $s2, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2583f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_2583f8:
    // 0x2583f8: 0x0  nop
    ctx->pc = 0x2583f8u;
    // NOP
label_2583fc:
    // 0x2583fc: 0x0  nop
    ctx->pc = 0x2583fcu;
    // NOP
label_258400:
    // 0x258400: 0x1e6c  .word       0x00001E6C                   # dadd        $v1, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258400u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, r); }
label_258404:
    // 0x258404: 0x96e0  .word       0x000096E0                   # add         $s2, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258404u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_258408:
    // 0x258408: 0x0  nop
    ctx->pc = 0x258408u;
    // NOP
label_25840c:
    // 0x25840c: 0x0  nop
    ctx->pc = 0x25840cu;
    // NOP
label_258410:
    // 0x258410: 0x1e7f  dsra32      $v1, $zero, 25
    ctx->pc = 0x258410u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 0) >> (32 + 25));
label_258414:
    // 0x258414: 0x97d0  .word       0x000097D0                   # mfhi        $s2 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258414u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_258418:
    // 0x258418: 0x0  nop
    ctx->pc = 0x258418u;
    // NOP
label_25841c:
    // 0x25841c: 0x0  nop
    ctx->pc = 0x25841cu;
    // NOP
label_258420:
    // 0x258420: 0x1e92  .word       0x00001E92                   # mflo        $v1 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258420u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_258424:
    // 0x258424: 0x89e0  .word       0x000089E0                   # add         $s1, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258424u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_258428:
    // 0x258428: 0x0  nop
    ctx->pc = 0x258428u;
    // NOP
label_25842c:
    // 0x25842c: 0x0  nop
    ctx->pc = 0x25842cu;
    // NOP
label_258430:
    // 0x258430: 0x1ea4  .word       0x00001EA4                   # and         $v1, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_258434:
    // 0x258434: 0xa570  tge         $zero, $zero, 661
    ctx->pc = 0x258434u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_258438:
    // 0x258438: 0x0  nop
    ctx->pc = 0x258438u;
    // NOP
label_25843c:
    // 0x25843c: 0x0  nop
    ctx->pc = 0x25843cu;
    // NOP
label_258440:
    // 0x258440: 0x1eb9  .word       0x00001EB9                   # INVALID     $zero, $zero, 0x1EB9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258440u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x258440 raw=0x00001EB9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_258444:
    // 0x258444: 0xa670  tge         $zero, $zero, 665
    ctx->pc = 0x258444u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_258448:
    // 0x258448: 0x0  nop
    ctx->pc = 0x258448u;
    // NOP
label_25844c:
    // 0x25844c: 0x0  nop
    ctx->pc = 0x25844cu;
    // NOP
label_258450:
    // 0x258450: 0x1ece  .word       0x00001ECE                   # INVALID     $zero, $zero, 0x1ECE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258450u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x258450 raw=0x00001ECE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_258454:
    // 0x258454: 0xa150  .word       0x0000A150                   # mfhi        $s4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258454u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_258458:
    // 0x258458: 0x0  nop
    ctx->pc = 0x258458u;
    // NOP
label_25845c:
    // 0x25845c: 0x0  nop
    ctx->pc = 0x25845cu;
    // NOP
label_258460:
    // 0x258460: 0x1ee3  .word       0x00001EE3                   # negu        $v1, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258460u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_258464:
    // 0x258464: 0xb4c0  sll         $s6, $zero, 19
    ctx->pc = 0x258464u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_258468:
    // 0x258468: 0x0  nop
    ctx->pc = 0x258468u;
    // NOP
label_25846c:
    // 0x25846c: 0x0  nop
    ctx->pc = 0x25846cu;
    // NOP
label_258470:
    // 0x258470: 0x1efa  dsrl        $v1, $zero, 27
    ctx->pc = 0x258470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) >> 27);
label_258474:
    // 0x258474: 0x93e0  .word       0x000093E0                   # add         $s2, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258474u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_258478:
    // 0x258478: 0x0  nop
    ctx->pc = 0x258478u;
    // NOP
label_25847c:
    // 0x25847c: 0x0  nop
    ctx->pc = 0x25847cu;
    // NOP
label_258480:
    // 0x258480: 0x1f0d  break       0, 124
    ctx->pc = 0x258480u;
    runtime->handleBreak(rdram, ctx);
label_258484:
    // 0x258484: 0x9970  tge         $zero, $zero, 613
    ctx->pc = 0x258484u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_258488:
    // 0x258488: 0x0  nop
    ctx->pc = 0x258488u;
    // NOP
label_25848c:
    // 0x25848c: 0x0  nop
    ctx->pc = 0x25848cu;
    // NOP
label_258490:
    // 0x258490: 0x1f21  .word       0x00001F21                   # addu        $v1, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_258494:
    // 0x258494: 0x9d10  .word       0x00009D10                   # mfhi        $s3 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258494u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_258498:
    // 0x258498: 0x0  nop
    ctx->pc = 0x258498u;
    // NOP
label_25849c:
    // 0x25849c: 0x0  nop
    ctx->pc = 0x25849cu;
    // NOP
label_2584a0:
    // 0x2584a0: 0x1f35  .word       0x00001F35                   # INVALID     $zero, $zero, 0x1F35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2584a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2584A0 raw=0x00001F35"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2584a4:
    // 0x2584a4: 0x99f0  tge         $zero, $zero, 615
    ctx->pc = 0x2584a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2584a8:
    // 0x2584a8: 0x0  nop
    ctx->pc = 0x2584a8u;
    // NOP
label_2584ac:
    // 0x2584ac: 0x0  nop
    ctx->pc = 0x2584acu;
    // NOP
label_2584b0:
    // 0x2584b0: 0x1f49  .word       0x00001F49                   # jalr        $v1, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
label_2584b4:
    if (ctx->pc == 0x2584B4u) {
        ctx->pc = 0x2584B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2584B0u;
        // 0x2584b4: 0x9cf0  tge         $zero, $zero, 627 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2584B8u;
        goto label_2584b8;
    }
    ctx->pc = 0x2584B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 3, 0x2584B8u);
        ctx->pc = 0x2584B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2584B0u;
        // 0x2584b4: 0x9cf0  tge         $zero, $zero, 627 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2584B0u, 0x2584B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2584B8u;
label_2584b8:
    // 0x2584b8: 0x0  nop
    ctx->pc = 0x2584b8u;
    // NOP
label_2584bc:
    // 0x2584bc: 0x0  nop
    ctx->pc = 0x2584bcu;
    // NOP
label_2584c0:
    // 0x2584c0: 0x1f5d  .word       0x00001F5D                   # dmultu      $zero, $zero # 00001F40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2584c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2584C0 raw=0x00001F5D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2584c4:
    // 0x2584c4: 0xa4f0  tge         $zero, $zero, 659
    ctx->pc = 0x2584c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2584c8:
    // 0x2584c8: 0x0  nop
    ctx->pc = 0x2584c8u;
    // NOP
label_2584cc:
    // 0x2584cc: 0x0  nop
    ctx->pc = 0x2584ccu;
    // NOP
label_2584d0:
    // 0x2584d0: 0x1f72  tlt         $zero, $zero, 125
    ctx->pc = 0x2584d0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2584d4:
    // 0x2584d4: 0x8d70  tge         $zero, $zero, 565
    ctx->pc = 0x2584d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2584d8:
    // 0x2584d8: 0x0  nop
    ctx->pc = 0x2584d8u;
    // NOP
label_2584dc:
    // 0x2584dc: 0x0  nop
    ctx->pc = 0x2584dcu;
    // NOP
label_2584e0:
    // 0x2584e0: 0x1f84  .word       0x00001F84                   # sllv        $v1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2584e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2584e4:
    // 0x2584e4: 0xb120  .word       0x0000B120                   # add         $s6, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2584e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_2584e8:
    // 0x2584e8: 0x0  nop
    ctx->pc = 0x2584e8u;
    // NOP
label_2584ec:
    // 0x2584ec: 0x0  nop
    ctx->pc = 0x2584ecu;
    // NOP
label_2584f0:
    // 0x2584f0: 0x1f9b  .word       0x00001F9B                   # divu        $v1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2584f0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2584f4:
    // 0x2584f4: 0x9f80  sll         $s3, $zero, 30
    ctx->pc = 0x2584f4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_2584f8:
    // 0x2584f8: 0x0  nop
    ctx->pc = 0x2584f8u;
    // NOP
label_2584fc:
    // 0x2584fc: 0x0  nop
    ctx->pc = 0x2584fcu;
    // NOP
label_258500:
    // 0x258500: 0x1faf  .word       0x00001FAF                   # dsubu       $v1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_258504:
    // 0x258504: 0x8990  .word       0x00008990                   # mfhi        $s1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258504u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_258508:
    // 0x258508: 0x0  nop
    ctx->pc = 0x258508u;
    // NOP
label_25850c:
    // 0x25850c: 0x0  nop
    ctx->pc = 0x25850cu;
    // NOP
label_258510:
    // 0x258510: 0x1fc1  .word       0x00001FC1                   # INVALID     $zero, $zero, 0x1FC1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258510u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x258510 raw=0x00001FC1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_258514:
    // 0x258514: 0x9b80  sll         $s3, $zero, 14
    ctx->pc = 0x258514u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_258518:
    // 0x258518: 0x0  nop
    ctx->pc = 0x258518u;
    // NOP
label_25851c:
    // 0x25851c: 0x0  nop
    ctx->pc = 0x25851cu;
    // NOP
label_258520:
    // 0x258520: 0x1fd5  .word       0x00001FD5                   # INVALID     $zero, $zero, 0x1FD5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258520u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x258520 raw=0x00001FD5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_258524:
    // 0x258524: 0xa560  .word       0x0000A560                   # add         $s4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258524u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_258528:
    // 0x258528: 0x0  nop
    ctx->pc = 0x258528u;
    // NOP
label_25852c:
    // 0x25852c: 0x0  nop
    ctx->pc = 0x25852cu;
    // NOP
label_258530:
    // 0x258530: 0x1fea  .word       0x00001FEA                   # slt         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258530u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_258534:
    // 0x258534: 0xb140  sll         $s6, $zero, 5
    ctx->pc = 0x258534u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_258538:
    // 0x258538: 0x0  nop
    ctx->pc = 0x258538u;
    // NOP
label_25853c:
    // 0x25853c: 0x0  nop
    ctx->pc = 0x25853cu;
    // NOP
label_258540:
    // 0x258540: 0x2001  .word       0x00002001                   # INVALID     $zero, $zero, 0x2001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258540u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x258540 raw=0x00002001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_258544:
    // 0x258544: 0xe670  tge         $zero, $zero, 921
    ctx->pc = 0x258544u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_258548:
    // 0x258548: 0x0  nop
    ctx->pc = 0x258548u;
    // NOP
label_25854c:
    // 0x25854c: 0x0  nop
    ctx->pc = 0x25854cu;
    // NOP
label_258550:
    // 0x258550: 0x201e  ddiv        $a0, $zero, $zero
    ctx->pc = 0x258550u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x258550 raw=0x0000201E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_258554:
    // 0x258554: 0xde70  tge         $zero, $zero, 889
    ctx->pc = 0x258554u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_258558:
    // 0x258558: 0x0  nop
    ctx->pc = 0x258558u;
    // NOP
label_25855c:
    // 0x25855c: 0x0  nop
    ctx->pc = 0x25855cu;
    // NOP
label_258560:
    // 0x258560: 0x203a  dsrl        $a0, $zero, 0
    ctx->pc = 0x258560u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) >> 0);
label_258564:
    // 0x258564: 0xb600  sll         $s6, $zero, 24
    ctx->pc = 0x258564u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_258568:
    // 0x258568: 0x0  nop
    ctx->pc = 0x258568u;
    // NOP
label_25856c:
    // 0x25856c: 0x0  nop
    ctx->pc = 0x25856cu;
    // NOP
label_258570:
    // 0x258570: 0x2051  .word       0x00002051                   # mthi        $zero # 00002040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258570u;
    ctx->hi = GPR_U64(ctx, 0);
label_258574:
    // 0x258574: 0xba20  .word       0x0000BA20                   # add         $s7, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258574u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_258578:
    // 0x258578: 0x0  nop
    ctx->pc = 0x258578u;
    // NOP
label_25857c:
    // 0x25857c: 0x0  nop
    ctx->pc = 0x25857cu;
    // NOP
label_258580:
    // 0x258580: 0x2069  .word       0x00002069                   # mtsa        $zero # 00002040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x258580u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_258584:
    // 0x258584: 0xc4c0  sll         $t8, $zero, 19
    ctx->pc = 0x258584u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_258588:
    // 0x258588: 0x0  nop
    ctx->pc = 0x258588u;
    // NOP
label_25858c:
    // 0x25858c: 0x0  nop
    ctx->pc = 0x25858cu;
    // NOP
label_258590:
    // 0x258590: 0x2082  srl         $a0, $zero, 2
    ctx->pc = 0x258590u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 0), 2));
label_258594:
    // 0x258594: 0x10ff0  tge         $zero, $at, 63
    ctx->pc = 0x258594u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_258598:
    // 0x258598: 0x0  nop
    ctx->pc = 0x258598u;
    // NOP
label_25859c:
    // 0x25859c: 0x0  nop
    ctx->pc = 0x25859cu;
    // NOP
label_2585a0:
    // 0x2585a0: 0x20a4  .word       0x000020A4                   # and         $a0, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2585a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2585a4:
    // 0x2585a4: 0xd3a0  .word       0x0000D3A0                   # add         $k0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2585a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_2585a8:
    // 0x2585a8: 0x0  nop
    ctx->pc = 0x2585a8u;
    // NOP
label_2585ac:
    // 0x2585ac: 0x0  nop
    ctx->pc = 0x2585acu;
    // NOP
label_2585b0:
    // 0x2585b0: 0x20bf  dsra32      $a0, $zero, 2
    ctx->pc = 0x2585b0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 0) >> (32 + 2));
label_2585b4:
    // 0x2585b4: 0xb1b0  tge         $zero, $zero, 710
    ctx->pc = 0x2585b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2585b8:
    // 0x2585b8: 0x0  nop
    ctx->pc = 0x2585b8u;
    // NOP
label_2585bc:
    // 0x2585bc: 0x0  nop
    ctx->pc = 0x2585bcu;
    // NOP
label_2585c0:
    // 0x2585c0: 0x20d6  .word       0x000020D6                   # dsrlv       $a0, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2585c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2585c4:
    // 0x2585c4: 0xd650  .word       0x0000D650                   # mfhi        $k0 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2585c4u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_2585c8:
    // 0x2585c8: 0x0  nop
    ctx->pc = 0x2585c8u;
    // NOP
label_2585cc:
    // 0x2585cc: 0x0  nop
    ctx->pc = 0x2585ccu;
    // NOP
label_2585d0:
    // 0x2585d0: 0x20f1  tgeu        $zero, $zero, 131
    ctx->pc = 0x2585d0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2585d4:
    // 0x2585d4: 0xd960  .word       0x0000D960                   # add         $k1, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2585d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_2585d8:
    // 0x2585d8: 0x0  nop
    ctx->pc = 0x2585d8u;
    // NOP
label_2585dc:
    // 0x2585dc: 0x0  nop
    ctx->pc = 0x2585dcu;
    // NOP
label_2585e0:
    // 0x2585e0: 0x210d  break       0, 132
    ctx->pc = 0x2585e0u;
    runtime->handleBreak(rdram, ctx);
label_2585e4:
    // 0x2585e4: 0xe720  .word       0x0000E720                   # add         $gp, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2585e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_2585e8:
    // 0x2585e8: 0x0  nop
    ctx->pc = 0x2585e8u;
    // NOP
label_2585ec:
    // 0x2585ec: 0x0  nop
    ctx->pc = 0x2585ecu;
    // NOP
label_2585f0:
    // 0x2585f0: 0x212a  .word       0x0000212A                   # slt         $a0, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2585f0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2585f4:
    // 0x2585f4: 0xef00  sll         $sp, $zero, 28
    ctx->pc = 0x2585f4u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_2585f8:
    // 0x2585f8: 0x0  nop
    ctx->pc = 0x2585f8u;
    // NOP
label_2585fc:
    // 0x2585fc: 0x0  nop
    ctx->pc = 0x2585fcu;
    // NOP
label_258600:
    // 0x258600: 0x2148  .word       0x00002148                   # jr          $zero # 00002140 <InstrIdType: CPU_SPECIAL>
label_258604:
    if (ctx->pc == 0x258604u) {
        ctx->pc = 0x258604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258600u;
        // 0x258604: 0x4900  sll         $t1, $zero, 4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258608u;
        goto label_258608;
    }
    ctx->pc = 0x258600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x258604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258600u;
        // 0x258604: 0x4900  sll         $t1, $zero, 4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258600u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x258608u;
label_258608:
    // 0x258608: 0x0  nop
    ctx->pc = 0x258608u;
    // NOP
label_25860c:
    // 0x25860c: 0x0  nop
    ctx->pc = 0x25860cu;
    // NOP
label_258610:
    // 0x258610: 0x2152  .word       0x00002152                   # mflo        $a0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258610u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_258614:
    // 0x258614: 0xa960  .word       0x0000A960                   # add         $s5, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258614u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_258618:
    // 0x258618: 0x0  nop
    ctx->pc = 0x258618u;
    // NOP
label_25861c:
    // 0x25861c: 0x0  nop
    ctx->pc = 0x25861cu;
    // NOP
label_258620:
    // 0x258620: 0x2168  .word       0x00002168                   # mfsa        $a0 # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x258620u;
    SET_GPR_U32(ctx, 4, ctx->sa);
label_258624:
    // 0x258624: 0xa590  .word       0x0000A590                   # mfhi        $s4 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258624u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_258628:
    // 0x258628: 0x0  nop
    ctx->pc = 0x258628u;
    // NOP
label_25862c:
    // 0x25862c: 0x0  nop
    ctx->pc = 0x25862cu;
    // NOP
label_258630:
    // 0x258630: 0x217d  .word       0x0000217D                   # INVALID     $zero, $zero, 0x217D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258630u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x258630 raw=0x0000217D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_258634:
    // 0x258634: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x258634u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_258638:
    // 0x258638: 0x0  nop
    ctx->pc = 0x258638u;
    // NOP
label_25863c:
    // 0x25863c: 0x0  nop
    ctx->pc = 0x25863cu;
    // NOP
label_258640:
    // 0x258640: 0x218e  .word       0x0000218E                   # INVALID     $zero, $zero, 0x218E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258640u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x258640 raw=0x0000218E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_258644:
    // 0x258644: 0xc4c0  sll         $t8, $zero, 19
    ctx->pc = 0x258644u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_258648:
    // 0x258648: 0x0  nop
    ctx->pc = 0x258648u;
    // NOP
label_25864c:
    // 0x25864c: 0x0  nop
    ctx->pc = 0x25864cu;
    // NOP
label_258650:
    // 0x258650: 0x21a7  .word       0x000021A7                   # not         $a0, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258650u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_258654:
    // 0x258654: 0xecd0  .word       0x0000ECD0                   # mfhi        $sp # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258654u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_258658:
    // 0x258658: 0x0  nop
    ctx->pc = 0x258658u;
    // NOP
label_25865c:
    // 0x25865c: 0x0  nop
    ctx->pc = 0x25865cu;
    // NOP
label_258660:
    // 0x258660: 0x21c5  .word       0x000021C5                   # INVALID     $zero, $zero, 0x21C5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258660u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x258660 raw=0x000021C5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_258664:
    // 0x258664: 0xcd50  .word       0x0000CD50                   # mfhi        $t9 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258664u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_258668:
    // 0x258668: 0x0  nop
    ctx->pc = 0x258668u;
    // NOP
label_25866c:
    // 0x25866c: 0x0  nop
    ctx->pc = 0x25866cu;
    // NOP
label_258670:
    // 0x258670: 0x21df  .word       0x000021DF                   # ddivu       $a0, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258670u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x258670 raw=0x000021DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_258674:
    // 0x258674: 0xb270  tge         $zero, $zero, 713
    ctx->pc = 0x258674u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_258678:
    // 0x258678: 0x0  nop
    ctx->pc = 0x258678u;
    // NOP
label_25867c:
    // 0x25867c: 0x0  nop
    ctx->pc = 0x25867cu;
    // NOP
label_258680:
    // 0x258680: 0x21f6  tne         $zero, $zero, 135
    ctx->pc = 0x258680u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_258684:
    // 0x258684: 0x137f0  tge         $zero, $at, 223
    ctx->pc = 0x258684u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_258688:
    // 0x258688: 0x0  nop
    ctx->pc = 0x258688u;
    // NOP
label_25868c:
    // 0x25868c: 0x0  nop
    ctx->pc = 0x25868cu;
    // NOP
label_258690:
    // 0x258690: 0x221d  .word       0x0000221D                   # dmultu      $zero, $zero # 00002200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258690u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x258690 raw=0x0000221D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_258694:
    // 0x258694: 0xe350  .word       0x0000E350                   # mfhi        $gp # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258694u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_258698:
    // 0x258698: 0x0  nop
    ctx->pc = 0x258698u;
    // NOP
label_25869c:
    // 0x25869c: 0x0  nop
    ctx->pc = 0x25869cu;
    // NOP
label_2586a0:
    // 0x2586a0: 0x223a  dsrl        $a0, $zero, 8
    ctx->pc = 0x2586a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) >> 8);
label_2586a4:
    // 0x2586a4: 0xd330  tge         $zero, $zero, 844
    ctx->pc = 0x2586a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2586a8:
    // 0x2586a8: 0x0  nop
    ctx->pc = 0x2586a8u;
    // NOP
label_2586ac:
    // 0x2586ac: 0x0  nop
    ctx->pc = 0x2586acu;
    // NOP
label_2586b0:
    // 0x2586b0: 0x2255  .word       0x00002255                   # INVALID     $zero, $zero, 0x2255 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2586b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2586B0 raw=0x00002255"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2586b4:
    // 0x2586b4: 0x9190  .word       0x00009190                   # mfhi        $s2 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2586b4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_2586b8:
    // 0x2586b8: 0x0  nop
    ctx->pc = 0x2586b8u;
    // NOP
label_2586bc:
    // 0x2586bc: 0x0  nop
    ctx->pc = 0x2586bcu;
    // NOP
label_2586c0:
    // 0x2586c0: 0x2268  .word       0x00002268                   # mfsa        $a0 # 00000240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2586c0u;
    SET_GPR_U32(ctx, 4, ctx->sa);
label_2586c4:
    // 0x2586c4: 0x10800  sll         $at, $at, 0
    ctx->pc = 0x2586c4u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), 0));
label_2586c8:
    // 0x2586c8: 0x0  nop
    ctx->pc = 0x2586c8u;
    // NOP
label_2586cc:
    // 0x2586cc: 0x0  nop
    ctx->pc = 0x2586ccu;
    // NOP
label_2586d0:
    // 0x2586d0: 0x2289  .word       0x00002289                   # jalr        $a0, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
label_2586d4:
    if (ctx->pc == 0x2586D4u) {
        ctx->pc = 0x2586D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2586D0u;
        // 0x2586d4: 0x9c50  .word       0x00009C50                   # mfhi        $s3 # 00000440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 19, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2586D8u;
        goto label_2586d8;
    }
    ctx->pc = 0x2586D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 4, 0x2586D8u);
        ctx->pc = 0x2586D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2586D0u;
        // 0x2586d4: 0x9c50  .word       0x00009C50                   # mfhi        $s3 # 00000440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 19, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2586D0u, 0x2586D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2586D8u;
label_2586d8:
    // 0x2586d8: 0x0  nop
    ctx->pc = 0x2586d8u;
    // NOP
label_2586dc:
    // 0x2586dc: 0x0  nop
    ctx->pc = 0x2586dcu;
    // NOP
label_2586e0:
    // 0x2586e0: 0x229d  .word       0x0000229D                   # dmultu      $zero, $zero # 00002280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2586e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2586E0 raw=0x0000229D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2586e4:
    // 0x2586e4: 0xfaa0  .word       0x0000FAA0                   # add         $ra, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2586e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_2586e8:
    // 0x2586e8: 0x0  nop
    ctx->pc = 0x2586e8u;
    // NOP
label_2586ec:
    // 0x2586ec: 0x0  nop
    ctx->pc = 0x2586ecu;
    // NOP
label_2586f0:
    // 0x2586f0: 0x22bd  .word       0x000022BD                   # INVALID     $zero, $zero, 0x22BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2586f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2586F0 raw=0x000022BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2586f4:
    // 0x2586f4: 0x151f0  tge         $zero, $at, 327
    ctx->pc = 0x2586f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2586f8:
    // 0x2586f8: 0x0  nop
    ctx->pc = 0x2586f8u;
    // NOP
label_2586fc:
    // 0x2586fc: 0x0  nop
    ctx->pc = 0x2586fcu;
    // NOP
label_258700:
    // 0x258700: 0x22e8  .word       0x000022E8                   # mfsa        $a0 # 000002C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x258700u;
    SET_GPR_U32(ctx, 4, ctx->sa);
label_258704:
    // 0x258704: 0xde90  .word       0x0000DE90                   # mfhi        $k1 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258704u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_258708:
    // 0x258708: 0x0  nop
    ctx->pc = 0x258708u;
    // NOP
label_25870c:
    // 0x25870c: 0x0  nop
    ctx->pc = 0x25870cu;
    // NOP
label_258710:
    // 0x258710: 0x2304  .word       0x00002304                   # sllv        $a0, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258710u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_258714:
    // 0x258714: 0xc950  .word       0x0000C950                   # mfhi        $t9 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258714u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_258718:
    // 0x258718: 0x0  nop
    ctx->pc = 0x258718u;
    // NOP
label_25871c:
    // 0x25871c: 0x0  nop
    ctx->pc = 0x25871cu;
    // NOP
label_258720:
    // 0x258720: 0x231e  .word       0x0000231E                   # ddiv        $a0, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258720u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x258720 raw=0x0000231E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_258724:
    // 0x258724: 0xb310  .word       0x0000B310                   # mfhi        $s6 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258724u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_258728:
    // 0x258728: 0x0  nop
    ctx->pc = 0x258728u;
    // NOP
label_25872c:
    // 0x25872c: 0x0  nop
    ctx->pc = 0x25872cu;
    // NOP
label_258730:
    // 0x258730: 0x2335  .word       0x00002335                   # INVALID     $zero, $zero, 0x2335 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258730u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x258730 raw=0x00002335"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_258734:
    // 0x258734: 0xdac0  sll         $k1, $zero, 11
    ctx->pc = 0x258734u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_258738:
    // 0x258738: 0x0  nop
    ctx->pc = 0x258738u;
    // NOP
label_25873c:
    // 0x25873c: 0x0  nop
    ctx->pc = 0x25873cu;
    // NOP
label_258740:
    // 0x258740: 0x2351  .word       0x00002351                   # mthi        $zero # 00002340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258740u;
    ctx->hi = GPR_U64(ctx, 0);
label_258744:
    // 0x258744: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x258744u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_258748:
    // 0x258748: 0x0  nop
    ctx->pc = 0x258748u;
    // NOP
label_25874c:
    // 0x25874c: 0x0  nop
    ctx->pc = 0x25874cu;
    // NOP
label_258750:
    // 0x258750: 0x2362  .word       0x00002362                   # neg         $a0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258750u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_258754:
    // 0x258754: 0x5a80  sll         $t3, $zero, 10
    ctx->pc = 0x258754u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_258758:
    // 0x258758: 0x0  nop
    ctx->pc = 0x258758u;
    // NOP
label_25875c:
    // 0x25875c: 0x0  nop
    ctx->pc = 0x25875cu;
    // NOP
label_258760:
    // 0x258760: 0x236e  .word       0x0000236E                   # dsub        $a0, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258760u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, r); }
label_258764:
    // 0x258764: 0x10f00  sll         $at, $at, 28
    ctx->pc = 0x258764u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), 28));
label_258768:
    // 0x258768: 0x0  nop
    ctx->pc = 0x258768u;
    // NOP
label_25876c:
    // 0x25876c: 0x0  nop
    ctx->pc = 0x25876cu;
    // NOP
label_258770:
    // 0x258770: 0x2390  .word       0x00002390                   # mfhi        $a0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258770u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_258774:
    // 0x258774: 0xb5e0  .word       0x0000B5E0                   # add         $s6, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258774u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_258778:
    // 0x258778: 0x0  nop
    ctx->pc = 0x258778u;
    // NOP
label_25877c:
    // 0x25877c: 0x0  nop
    ctx->pc = 0x25877cu;
    // NOP
label_258780:
    // 0x258780: 0x23a7  .word       0x000023A7                   # not         $a0, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258780u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_258784:
    // 0x258784: 0x9d50  .word       0x00009D50                   # mfhi        $s3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258784u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_258788:
    // 0x258788: 0x0  nop
    ctx->pc = 0x258788u;
    // NOP
label_25878c:
    // 0x25878c: 0x0  nop
    ctx->pc = 0x25878cu;
    // NOP
label_258790:
    // 0x258790: 0x23bb  dsra        $a0, $zero, 14
    ctx->pc = 0x258790u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 0) >> 14);
label_258794:
    // 0x258794: 0xa500  sll         $s4, $zero, 20
    ctx->pc = 0x258794u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_258798:
    // 0x258798: 0x0  nop
    ctx->pc = 0x258798u;
    // NOP
label_25879c:
    // 0x25879c: 0x0  nop
    ctx->pc = 0x25879cu;
    // NOP
label_2587a0:
    // 0x2587a0: 0x23d0  .word       0x000023D0                   # mfhi        $a0 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2587a0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2587a4:
    // 0x2587a4: 0xcc70  tge         $zero, $zero, 817
    ctx->pc = 0x2587a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2587a8:
    // 0x2587a8: 0x0  nop
    ctx->pc = 0x2587a8u;
    // NOP
label_2587ac:
    // 0x2587ac: 0x0  nop
    ctx->pc = 0x2587acu;
    // NOP
label_2587b0:
    // 0x2587b0: 0x23ea  .word       0x000023EA                   # slt         $a0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2587b0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2587b4:
    // 0x2587b4: 0xce80  sll         $t9, $zero, 26
    ctx->pc = 0x2587b4u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_2587b8:
    // 0x2587b8: 0x0  nop
    ctx->pc = 0x2587b8u;
    // NOP
label_2587bc:
    // 0x2587bc: 0x0  nop
    ctx->pc = 0x2587bcu;
    // NOP
label_2587c0:
    // 0x2587c0: 0x2404  .word       0x00002404                   # sllv        $a0, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2587c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2587c4:
    // 0x2587c4: 0xb140  sll         $s6, $zero, 5
    ctx->pc = 0x2587c4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_2587c8:
    // 0x2587c8: 0x0  nop
    ctx->pc = 0x2587c8u;
    // NOP
label_2587cc:
    // 0x2587cc: 0x0  nop
    ctx->pc = 0x2587ccu;
    // NOP
label_2587d0:
    // 0x2587d0: 0x241b  .word       0x0000241B                   # divu        $a0, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2587d0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2587d4:
    // 0x2587d4: 0x9020  add         $s2, $zero, $zero
    ctx->pc = 0x2587d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_2587d8:
    // 0x2587d8: 0x0  nop
    ctx->pc = 0x2587d8u;
    // NOP
label_2587dc:
    // 0x2587dc: 0x0  nop
    ctx->pc = 0x2587dcu;
    // NOP
label_2587e0:
    // 0x2587e0: 0x242e  .word       0x0000242E                   # dsub        $a0, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2587e0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, r); }
label_2587e4:
    // 0x2587e4: 0xa560  .word       0x0000A560                   # add         $s4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2587e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_2587e8:
    // 0x2587e8: 0x0  nop
    ctx->pc = 0x2587e8u;
    // NOP
label_2587ec:
    // 0x2587ec: 0x0  nop
    ctx->pc = 0x2587ecu;
    // NOP
label_2587f0:
    // 0x2587f0: 0x2443  sra         $a0, $zero, 17
    ctx->pc = 0x2587f0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 0), 17));
label_2587f4:
    // 0x2587f4: 0x75d0  .word       0x000075D0                   # mfhi        $t6 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2587f4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_2587f8:
    // 0x2587f8: 0x0  nop
    ctx->pc = 0x2587f8u;
    // NOP
label_2587fc:
    // 0x2587fc: 0x0  nop
    ctx->pc = 0x2587fcu;
    // NOP
label_258800:
    // 0x258800: 0x2452  .word       0x00002452                   # mflo        $a0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258800u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_258804:
    // 0x258804: 0x6380  sll         $t4, $zero, 14
    ctx->pc = 0x258804u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_258808:
    // 0x258808: 0x0  nop
    ctx->pc = 0x258808u;
    // NOP
label_25880c:
    // 0x25880c: 0x0  nop
    ctx->pc = 0x25880cu;
    // NOP
label_258810:
    // 0x258810: 0x245f  .word       0x0000245F                   # ddivu       $a0, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258810u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x258810 raw=0x0000245F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_258814:
    // 0x258814: 0x7d80  sll         $t7, $zero, 22
    ctx->pc = 0x258814u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_258818:
    // 0x258818: 0x0  nop
    ctx->pc = 0x258818u;
    // NOP
label_25881c:
    // 0x25881c: 0x0  nop
    ctx->pc = 0x25881cu;
    // NOP
label_258820:
    // 0x258820: 0x246f  .word       0x0000246F                   # dsubu       $a0, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258820u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_258824:
    // 0x258824: 0x6a50  .word       0x00006A50                   # mfhi        $t5 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258824u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_258828:
    // 0x258828: 0x0  nop
    ctx->pc = 0x258828u;
    // NOP
label_25882c:
    // 0x25882c: 0x0  nop
    ctx->pc = 0x25882cu;
    // NOP
label_258830:
    // 0x258830: 0x247d  .word       0x0000247D                   # INVALID     $zero, $zero, 0x247D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258830u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x258830 raw=0x0000247D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_258834:
    // 0x258834: 0x7ef0  tge         $zero, $zero, 507
    ctx->pc = 0x258834u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_258838:
    // 0x258838: 0x0  nop
    ctx->pc = 0x258838u;
    // NOP
label_25883c:
    // 0x25883c: 0x0  nop
    ctx->pc = 0x25883cu;
    // NOP
label_258840:
    // 0x258840: 0x248d  break       0, 146
    ctx->pc = 0x258840u;
    runtime->handleBreak(rdram, ctx);
label_258844:
    // 0x258844: 0x8b50  .word       0x00008B50                   # mfhi        $s1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258844u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_258848:
    // 0x258848: 0x0  nop
    ctx->pc = 0x258848u;
    // NOP
label_25884c:
    // 0x25884c: 0x0  nop
    ctx->pc = 0x25884cu;
    // NOP
label_258850:
    // 0x258850: 0x249f  .word       0x0000249F                   # ddivu       $a0, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258850u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x258850 raw=0x0000249F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_258854:
    // 0x258854: 0x9c10  .word       0x00009C10                   # mfhi        $s3 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258854u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_258858:
    // 0x258858: 0x0  nop
    ctx->pc = 0x258858u;
    // NOP
label_25885c:
    // 0x25885c: 0x0  nop
    ctx->pc = 0x25885cu;
    // NOP
label_258860:
    // 0x258860: 0x24b3  tltu        $zero, $zero, 146
    ctx->pc = 0x258860u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_258864:
    // 0x258864: 0x9aa0  .word       0x00009AA0                   # add         $s3, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258864u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_258868:
    // 0x258868: 0x0  nop
    ctx->pc = 0x258868u;
    // NOP
label_25886c:
    // 0x25886c: 0x0  nop
    ctx->pc = 0x25886cu;
    // NOP
label_258870:
    // 0x258870: 0x24c7  .word       0x000024C7                   # srav        $a0, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258870u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_258874:
    // 0x258874: 0x9db0  tge         $zero, $zero, 630
    ctx->pc = 0x258874u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_258878:
    // 0x258878: 0x0  nop
    ctx->pc = 0x258878u;
    // NOP
label_25887c:
    // 0x25887c: 0x0  nop
    ctx->pc = 0x25887cu;
    // NOP
label_258880:
    // 0x258880: 0x24db  .word       0x000024DB                   # divu        $a0, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258880u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_258884:
    // 0x258884: 0x99c0  sll         $s3, $zero, 7
    ctx->pc = 0x258884u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_258888:
    // 0x258888: 0x0  nop
    ctx->pc = 0x258888u;
    // NOP
label_25888c:
    // 0x25888c: 0x0  nop
    ctx->pc = 0x25888cu;
    // NOP
label_258890:
    // 0x258890: 0x24ef  .word       0x000024EF                   # dsubu       $a0, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258890u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_258894:
    // 0x258894: 0x7d00  sll         $t7, $zero, 20
    ctx->pc = 0x258894u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_258898:
    // 0x258898: 0x0  nop
    ctx->pc = 0x258898u;
    // NOP
label_25889c:
    // 0x25889c: 0x0  nop
    ctx->pc = 0x25889cu;
    // NOP
label_2588a0:
    // 0x2588a0: 0x24ff  dsra32      $a0, $zero, 19
    ctx->pc = 0x2588a0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 0) >> (32 + 19));
label_2588a4:
    // 0x2588a4: 0x9000  sll         $s2, $zero, 0
    ctx->pc = 0x2588a4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2588a8:
    // 0x2588a8: 0x0  nop
    ctx->pc = 0x2588a8u;
    // NOP
label_2588ac:
    // 0x2588ac: 0x0  nop
    ctx->pc = 0x2588acu;
    // NOP
label_2588b0:
    // 0x2588b0: 0x2511  .word       0x00002511                   # mthi        $zero # 00002500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2588b0u;
    ctx->hi = GPR_U64(ctx, 0);
label_2588b4:
    // 0x2588b4: 0x6620  .word       0x00006620                   # add         $t4, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2588b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_2588b8:
    // 0x2588b8: 0x0  nop
    ctx->pc = 0x2588b8u;
    // NOP
label_2588bc:
    // 0x2588bc: 0x0  nop
    ctx->pc = 0x2588bcu;
    // NOP
label_2588c0:
    // 0x2588c0: 0x251e  .word       0x0000251E                   # ddiv        $a0, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2588c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2588C0 raw=0x0000251E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2588c4:
    // 0x2588c4: 0x7690  .word       0x00007690                   # mfhi        $t6 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2588c4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_2588c8:
    // 0x2588c8: 0x0  nop
    ctx->pc = 0x2588c8u;
    // NOP
label_2588cc:
    // 0x2588cc: 0x0  nop
    ctx->pc = 0x2588ccu;
    // NOP
label_2588d0:
    // 0x2588d0: 0x252d  .word       0x0000252D                   # daddu       $a0, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2588d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2588d4:
    // 0x2588d4: 0x7dc0  sll         $t7, $zero, 23
    ctx->pc = 0x2588d4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_2588d8:
    // 0x2588d8: 0x0  nop
    ctx->pc = 0x2588d8u;
    // NOP
label_2588dc:
    // 0x2588dc: 0x0  nop
    ctx->pc = 0x2588dcu;
    // NOP
label_2588e0:
    // 0x2588e0: 0x253d  .word       0x0000253D                   # INVALID     $zero, $zero, 0x253D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2588e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2588E0 raw=0x0000253D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2588e4:
    // 0x2588e4: 0x8ce0  .word       0x00008CE0                   # add         $s1, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2588e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2588e8:
    // 0x2588e8: 0x0  nop
    ctx->pc = 0x2588e8u;
    // NOP
label_2588ec:
    // 0x2588ec: 0x0  nop
    ctx->pc = 0x2588ecu;
    // NOP
label_2588f0:
    // 0x2588f0: 0x254f  .word       0x0000254F                   # sync.p # 00002000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2588f0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2588f4:
    // 0x2588f4: 0x8810  mfhi        $s1
    ctx->pc = 0x2588f4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_2588f8:
    // 0x2588f8: 0x0  nop
    ctx->pc = 0x2588f8u;
    // NOP
label_2588fc:
    // 0x2588fc: 0x0  nop
    ctx->pc = 0x2588fcu;
    // NOP
label_258900:
    // 0x258900: 0x2561  .word       0x00002561                   # addu        $a0, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_258904:
    // 0x258904: 0x85f0  tge         $zero, $zero, 535
    ctx->pc = 0x258904u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_258908:
    // 0x258908: 0x0  nop
    ctx->pc = 0x258908u;
    // NOP
label_25890c:
    // 0x25890c: 0x0  nop
    ctx->pc = 0x25890cu;
    // NOP
label_258910:
    // 0x258910: 0x2572  tlt         $zero, $zero, 149
    ctx->pc = 0x258910u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_258914:
    // 0x258914: 0x9550  .word       0x00009550                   # mfhi        $s2 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258914u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_258918:
    // 0x258918: 0x0  nop
    ctx->pc = 0x258918u;
    // NOP
label_25891c:
    // 0x25891c: 0x0  nop
    ctx->pc = 0x25891cu;
    // NOP
label_258920:
    // 0x258920: 0x2585  .word       0x00002585                   # INVALID     $zero, $zero, 0x2585 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258920u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x258920 raw=0x00002585"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_258924:
    // 0x258924: 0x6f00  sll         $t5, $zero, 28
    ctx->pc = 0x258924u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_258928:
    // 0x258928: 0x0  nop
    ctx->pc = 0x258928u;
    // NOP
label_25892c:
    // 0x25892c: 0x0  nop
    ctx->pc = 0x25892cu;
    // NOP
label_258930:
    // 0x258930: 0x2593  .word       0x00002593                   # mtlo        $zero # 00002580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258930u;
    ctx->lo = GPR_U64(ctx, 0);
label_258934:
    // 0x258934: 0x7de0  .word       0x00007DE0                   # add         $t7, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258934u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_258938:
    // 0x258938: 0x0  nop
    ctx->pc = 0x258938u;
    // NOP
label_25893c:
    // 0x25893c: 0x0  nop
    ctx->pc = 0x25893cu;
    // NOP
label_258940:
    // 0x258940: 0x25a3  .word       0x000025A3                   # negu        $a0, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258940u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_258944:
    // 0x258944: 0x91e0  .word       0x000091E0                   # add         $s2, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258944u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_258948:
    // 0x258948: 0x0  nop
    ctx->pc = 0x258948u;
    // NOP
label_25894c:
    // 0x25894c: 0x0  nop
    ctx->pc = 0x25894cu;
    // NOP
label_258950:
    // 0x258950: 0x25b6  tne         $zero, $zero, 150
    ctx->pc = 0x258950u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_258954:
    // 0x258954: 0x7100  sll         $t6, $zero, 4
    ctx->pc = 0x258954u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_258958:
    // 0x258958: 0x0  nop
    ctx->pc = 0x258958u;
    // NOP
label_25895c:
    // 0x25895c: 0x0  nop
    ctx->pc = 0x25895cu;
    // NOP
label_258960:
    // 0x258960: 0x25c5  .word       0x000025C5                   # INVALID     $zero, $zero, 0x25C5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258960u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x258960 raw=0x000025C5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_258964:
    // 0x258964: 0x8200  sll         $s0, $zero, 8
    ctx->pc = 0x258964u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_258968:
    // 0x258968: 0x0  nop
    ctx->pc = 0x258968u;
    // NOP
label_25896c:
    // 0x25896c: 0x0  nop
    ctx->pc = 0x25896cu;
    // NOP
label_258970:
    // 0x258970: 0x25d6  .word       0x000025D6                   # dsrlv       $a0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258970u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_258974:
    // 0x258974: 0x8d50  .word       0x00008D50                   # mfhi        $s1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258974u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_258978:
    // 0x258978: 0x0  nop
    ctx->pc = 0x258978u;
    // NOP
label_25897c:
    // 0x25897c: 0x0  nop
    ctx->pc = 0x25897cu;
    // NOP
label_258980:
    // 0x258980: 0x25e8  .word       0x000025E8                   # mfsa        $a0 # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x258980u;
    SET_GPR_U32(ctx, 4, ctx->sa);
label_258984:
    // 0x258984: 0x9800  sll         $s3, $zero, 0
    ctx->pc = 0x258984u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_258988:
    // 0x258988: 0x0  nop
    ctx->pc = 0x258988u;
    // NOP
label_25898c:
    // 0x25898c: 0x0  nop
    ctx->pc = 0x25898cu;
    // NOP
label_258990:
    // 0x258990: 0x25fb  dsra        $a0, $zero, 23
    ctx->pc = 0x258990u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 0) >> 23);
label_258994:
    // 0x258994: 0x7450  .word       0x00007450                   # mfhi        $t6 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258994u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_258998:
    // 0x258998: 0x0  nop
    ctx->pc = 0x258998u;
    // NOP
label_25899c:
    // 0x25899c: 0x0  nop
    ctx->pc = 0x25899cu;
    // NOP
label_2589a0:
    // 0x2589a0: 0x260a  .word       0x0000260A                   # movz        $a0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2589a0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_2589a4:
    // 0x2589a4: 0x9ac0  sll         $s3, $zero, 11
    ctx->pc = 0x2589a4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_2589a8:
    // 0x2589a8: 0x0  nop
    ctx->pc = 0x2589a8u;
    // NOP
label_2589ac:
    // 0x2589ac: 0x0  nop
    ctx->pc = 0x2589acu;
    // NOP
label_2589b0:
    // 0x2589b0: 0x261e  .word       0x0000261E                   # ddiv        $a0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2589b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2589B0 raw=0x0000261E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2589b4:
    // 0x2589b4: 0xb680  sll         $s6, $zero, 26
    ctx->pc = 0x2589b4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_2589b8:
    // 0x2589b8: 0x0  nop
    ctx->pc = 0x2589b8u;
    // NOP
label_2589bc:
    // 0x2589bc: 0x0  nop
    ctx->pc = 0x2589bcu;
    // NOP
label_2589c0:
    // 0x2589c0: 0x2635  .word       0x00002635                   # INVALID     $zero, $zero, 0x2635 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2589c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2589C0 raw=0x00002635"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2589c4:
    // 0x2589c4: 0x78d0  .word       0x000078D0                   # mfhi        $t7 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2589c4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_2589c8:
    // 0x2589c8: 0x0  nop
    ctx->pc = 0x2589c8u;
    // NOP
label_2589cc:
    // 0x2589cc: 0x0  nop
    ctx->pc = 0x2589ccu;
    // NOP
label_2589d0:
    // 0x2589d0: 0x2645  .word       0x00002645                   # INVALID     $zero, $zero, 0x2645 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2589d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2589D0 raw=0x00002645"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2589d4:
    // 0x2589d4: 0x6bc0  sll         $t5, $zero, 15
    ctx->pc = 0x2589d4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_2589d8:
    // 0x2589d8: 0x0  nop
    ctx->pc = 0x2589d8u;
    // NOP
label_2589dc:
    // 0x2589dc: 0x0  nop
    ctx->pc = 0x2589dcu;
    // NOP
label_2589e0:
    // 0x2589e0: 0x2653  .word       0x00002653                   # mtlo        $zero # 00002640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2589e0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2589e4:
    // 0x2589e4: 0xa8f0  tge         $zero, $zero, 675
    ctx->pc = 0x2589e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2589e8:
    // 0x2589e8: 0x0  nop
    ctx->pc = 0x2589e8u;
    // NOP
label_2589ec:
    // 0x2589ec: 0x0  nop
    ctx->pc = 0x2589ecu;
    // NOP
label_2589f0:
    // 0x2589f0: 0x2669  .word       0x00002669                   # mtsa        $zero # 00002640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2589f0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2589f4:
    // 0x2589f4: 0x90e0  .word       0x000090E0                   # add         $s2, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2589f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_2589f8:
    // 0x2589f8: 0x0  nop
    ctx->pc = 0x2589f8u;
    // NOP
label_2589fc:
    // 0x2589fc: 0x0  nop
    ctx->pc = 0x2589fcu;
    // NOP
label_258a00:
    // 0x258a00: 0x267c  dsll32      $a0, $zero, 25
    ctx->pc = 0x258a00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) << (32 + 25));
label_258a04:
    // 0x258a04: 0x9b20  .word       0x00009B20                   # add         $s3, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258a04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_258a08:
    // 0x258a08: 0x0  nop
    ctx->pc = 0x258a08u;
    // NOP
label_258a0c:
    // 0x258a0c: 0x0  nop
    ctx->pc = 0x258a0cu;
    // NOP
label_258a10:
    // 0x258a10: 0x2690  .word       0x00002690                   # mfhi        $a0 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258a10u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_258a14:
    // 0x258a14: 0x6f60  .word       0x00006F60                   # add         $t5, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258a14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_258a18:
    // 0x258a18: 0x0  nop
    ctx->pc = 0x258a18u;
    // NOP
label_258a1c:
    // 0x258a1c: 0x0  nop
    ctx->pc = 0x258a1cu;
    // NOP
label_258a20:
    // 0x258a20: 0x269e  .word       0x0000269E                   # ddiv        $a0, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258a20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x258A20 raw=0x0000269E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_258a24:
    // 0x258a24: 0x8990  .word       0x00008990                   # mfhi        $s1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258a24u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_258a28:
    // 0x258a28: 0x0  nop
    ctx->pc = 0x258a28u;
    // NOP
label_258a2c:
    // 0x258a2c: 0x0  nop
    ctx->pc = 0x258a2cu;
    // NOP
label_258a30:
    // 0x258a30: 0x26b0  tge         $zero, $zero, 154
    ctx->pc = 0x258a30u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_258a34:
    // 0x258a34: 0x77f0  tge         $zero, $zero, 479
    ctx->pc = 0x258a34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_258a38:
    // 0x258a38: 0x0  nop
    ctx->pc = 0x258a38u;
    // NOP
label_258a3c:
    // 0x258a3c: 0x0  nop
    ctx->pc = 0x258a3cu;
    // NOP
label_258a40:
    // 0x258a40: 0x26bf  dsra32      $a0, $zero, 26
    ctx->pc = 0x258a40u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 0) >> (32 + 26));
label_258a44:
    // 0x258a44: 0x7d10  .word       0x00007D10                   # mfhi        $t7 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258a44u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_258a48:
    // 0x258a48: 0x0  nop
    ctx->pc = 0x258a48u;
    // NOP
label_258a4c:
    // 0x258a4c: 0x0  nop
    ctx->pc = 0x258a4cu;
    // NOP
label_258a50:
    // 0x258a50: 0x26cf  .word       0x000026CF                   # sync.p # 00002000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258a50u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_258a54:
    // 0x258a54: 0x9960  .word       0x00009960                   # add         $s3, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258a54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_258a58:
    // 0x258a58: 0x0  nop
    ctx->pc = 0x258a58u;
    // NOP
label_258a5c:
    // 0x258a5c: 0x0  nop
    ctx->pc = 0x258a5cu;
    // NOP
label_258a60:
    // 0x258a60: 0x26e3  .word       0x000026E3                   # negu        $a0, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258a60u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_258a64:
    // 0x258a64: 0x23c0  sll         $a0, $zero, 15
    ctx->pc = 0x258a64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_258a68:
    // 0x258a68: 0x0  nop
    ctx->pc = 0x258a68u;
    // NOP
label_258a6c:
    // 0x258a6c: 0x0  nop
    ctx->pc = 0x258a6cu;
    // NOP
label_258a70:
    // 0x258a70: 0x26e8  .word       0x000026E8                   # mfsa        $a0 # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x258a70u;
    SET_GPR_U32(ctx, 4, ctx->sa);
label_258a74:
    // 0x258a74: 0x2390  .word       0x00002390                   # mfhi        $a0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258a74u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_258a78:
    // 0x258a78: 0x0  nop
    ctx->pc = 0x258a78u;
    // NOP
label_258a7c:
    // 0x258a7c: 0x0  nop
    ctx->pc = 0x258a7cu;
    // NOP
label_258a80:
    // 0x258a80: 0x26ed  .word       0x000026ED                   # daddu       $a0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_258a84:
    // 0x258a84: 0x1ec0  sll         $v1, $zero, 27
    ctx->pc = 0x258a84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_258a88:
    // 0x258a88: 0x0  nop
    ctx->pc = 0x258a88u;
    // NOP
label_258a8c:
    // 0x258a8c: 0x0  nop
    ctx->pc = 0x258a8cu;
    // NOP
label_258a90:
    // 0x258a90: 0x26f1  tgeu        $zero, $zero, 155
    ctx->pc = 0x258a90u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_258a94:
    // 0x258a94: 0x2160  .word       0x00002160                   # add         $a0, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258a94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_258a98:
    // 0x258a98: 0x0  nop
    ctx->pc = 0x258a98u;
    // NOP
label_258a9c:
    // 0x258a9c: 0x0  nop
    ctx->pc = 0x258a9cu;
    // NOP
label_258aa0:
    // 0x258aa0: 0x26f6  tne         $zero, $zero, 155
    ctx->pc = 0x258aa0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_258aa4:
    // 0x258aa4: 0x2870  tge         $zero, $zero, 161
    ctx->pc = 0x258aa4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_258aa8:
    // 0x258aa8: 0x0  nop
    ctx->pc = 0x258aa8u;
    // NOP
label_258aac:
    // 0x258aac: 0x0  nop
    ctx->pc = 0x258aacu;
    // NOP
label_258ab0:
    // 0x258ab0: 0x26fc  dsll32      $a0, $zero, 27
    ctx->pc = 0x258ab0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) << (32 + 27));
label_258ab4:
    // 0x258ab4: 0x1e50  .word       0x00001E50                   # mfhi        $v1 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258ab4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_258ab8:
    // 0x258ab8: 0x0  nop
    ctx->pc = 0x258ab8u;
    // NOP
label_258abc:
    // 0x258abc: 0x0  nop
    ctx->pc = 0x258abcu;
    // NOP
label_258ac0:
    // 0x258ac0: 0x2700  sll         $a0, $zero, 28
    ctx->pc = 0x258ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_258ac4:
    // 0x258ac4: 0x2b20  .word       0x00002B20                   # add         $a1, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258ac4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_258ac8:
    // 0x258ac8: 0x0  nop
    ctx->pc = 0x258ac8u;
    // NOP
label_258acc:
    // 0x258acc: 0x0  nop
    ctx->pc = 0x258accu;
    // NOP
label_258ad0:
    // 0x258ad0: 0x2706  .word       0x00002706                   # srlv        $a0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_258ad4:
    // 0x258ad4: 0x1f60  .word       0x00001F60                   # add         $v1, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258ad4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_258ad8:
    // 0x258ad8: 0x0  nop
    ctx->pc = 0x258ad8u;
    // NOP
label_258adc:
    // 0x258adc: 0x0  nop
    ctx->pc = 0x258adcu;
    // NOP
label_258ae0:
    // 0x258ae0: 0x270a  .word       0x0000270A                   # movz        $a0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258ae0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_258ae4:
    // 0x258ae4: 0x1e20  .word       0x00001E20                   # add         $v1, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258ae4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_258ae8:
    // 0x258ae8: 0x0  nop
    ctx->pc = 0x258ae8u;
    // NOP
label_258aec:
    // 0x258aec: 0x0  nop
    ctx->pc = 0x258aecu;
    // NOP
label_258af0:
    // 0x258af0: 0x270e  .word       0x0000270E                   # INVALID     $zero, $zero, 0x270E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258af0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x258AF0 raw=0x0000270E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_258af4:
    // 0x258af4: 0x1f80  sll         $v1, $zero, 30
    ctx->pc = 0x258af4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_258af8:
    // 0x258af8: 0x0  nop
    ctx->pc = 0x258af8u;
    // NOP
label_258afc:
    // 0x258afc: 0x0  nop
    ctx->pc = 0x258afcu;
    // NOP
label_258b00:
    // 0x258b00: 0x2712  .word       0x00002712                   # mflo        $a0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258b00u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_258b04:
    // 0x258b04: 0x1d10  .word       0x00001D10                   # mfhi        $v1 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258b04u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_258b08:
    // 0x258b08: 0x0  nop
    ctx->pc = 0x258b08u;
    // NOP
label_258b0c:
    // 0x258b0c: 0x0  nop
    ctx->pc = 0x258b0cu;
    // NOP
label_258b10:
    // 0x258b10: 0x2716  .word       0x00002716                   # dsrlv       $a0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258b10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_258b14:
    // 0x258b14: 0x3290  .word       0x00003290                   # mfhi        $a2 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258b14u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_258b18:
    // 0x258b18: 0x0  nop
    ctx->pc = 0x258b18u;
    // NOP
label_258b1c:
    // 0x258b1c: 0x0  nop
    ctx->pc = 0x258b1cu;
    // NOP
label_258b20:
    // 0x258b20: 0x271d  .word       0x0000271D                   # dmultu      $zero, $zero # 00002700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258b20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x258B20 raw=0x0000271D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_258b24:
    // 0x258b24: 0x22c0  sll         $a0, $zero, 11
    ctx->pc = 0x258b24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_258b28:
    // 0x258b28: 0x0  nop
    ctx->pc = 0x258b28u;
    // NOP
label_258b2c:
    // 0x258b2c: 0x0  nop
    ctx->pc = 0x258b2cu;
    // NOP
label_258b30:
    // 0x258b30: 0x2722  .word       0x00002722                   # neg         $a0, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258b30u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_258b34:
    // 0x258b34: 0x18c0  sll         $v1, $zero, 3
    ctx->pc = 0x258b34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_258b38:
    // 0x258b38: 0x0  nop
    ctx->pc = 0x258b38u;
    // NOP
label_258b3c:
    // 0x258b3c: 0x0  nop
    ctx->pc = 0x258b3cu;
    // NOP
label_258b40:
    // 0x258b40: 0x2726  .word       0x00002726                   # xor         $a0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258b40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_258b44:
    // 0x258b44: 0x1c00  sll         $v1, $zero, 16
    ctx->pc = 0x258b44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_258b48:
    // 0x258b48: 0x0  nop
    ctx->pc = 0x258b48u;
    // NOP
label_258b4c:
    // 0x258b4c: 0x0  nop
    ctx->pc = 0x258b4cu;
    // NOP
label_258b50:
    // 0x258b50: 0x272a  .word       0x0000272A                   # slt         $a0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258b50u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_258b54:
    // 0x258b54: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x258b54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_258b58:
    // 0x258b58: 0x0  nop
    ctx->pc = 0x258b58u;
    // NOP
label_258b5c:
    // 0x258b5c: 0x0  nop
    ctx->pc = 0x258b5cu;
    // NOP
label_258b60:
    // 0x258b60: 0x273b  dsra        $a0, $zero, 28
    ctx->pc = 0x258b60u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 0) >> 28);
label_258b64:
    // 0x258b64: 0x13c0  sll         $v0, $zero, 15
    ctx->pc = 0x258b64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_258b68:
    // 0x258b68: 0x0  nop
    ctx->pc = 0x258b68u;
    // NOP
label_258b6c:
    // 0x258b6c: 0x0  nop
    ctx->pc = 0x258b6cu;
    // NOP
label_258b70:
    // 0x258b70: 0x273e  dsrl32      $a0, $zero, 28
    ctx->pc = 0x258b70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) >> (32 + 28));
label_258b74:
    // 0x258b74: 0x20e0  .word       0x000020E0                   # add         $a0, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258b74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_258b78:
    // 0x258b78: 0x0  nop
    ctx->pc = 0x258b78u;
    // NOP
label_258b7c:
    // 0x258b7c: 0x0  nop
    ctx->pc = 0x258b7cu;
    // NOP
label_258b80:
    // 0x258b80: 0x2743  sra         $a0, $zero, 29
    ctx->pc = 0x258b80u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 0), 29));
label_258b84:
    // 0x258b84: 0x41b0  tge         $zero, $zero, 262
    ctx->pc = 0x258b84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_258b88:
    // 0x258b88: 0x0  nop
    ctx->pc = 0x258b88u;
    // NOP
label_258b8c:
    // 0x258b8c: 0x0  nop
    ctx->pc = 0x258b8cu;
    // NOP
label_258b90:
    // 0x258b90: 0x274c  syscall     157
    ctx->pc = 0x258b90u;
    ctx->pc = 0x258B94u;
runtime->handleSyscall(rdram, ctx, 0x9Du);
label_258b94:
    // 0x258b94: 0x1f30  tge         $zero, $zero, 124
    ctx->pc = 0x258b94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_258b98:
    // 0x258b98: 0x0  nop
    ctx->pc = 0x258b98u;
    // NOP
label_258b9c:
    // 0x258b9c: 0x0  nop
    ctx->pc = 0x258b9cu;
    // NOP
label_258ba0:
    // 0x258ba0: 0x2750  .word       0x00002750                   # mfhi        $a0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258ba0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_258ba4:
    // 0x258ba4: 0x1f30  tge         $zero, $zero, 124
    ctx->pc = 0x258ba4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_258ba8:
    // 0x258ba8: 0x0  nop
    ctx->pc = 0x258ba8u;
    // NOP
label_258bac:
    // 0x258bac: 0x0  nop
    ctx->pc = 0x258bacu;
    // NOP
label_258bb0:
    // 0x258bb0: 0x2754  .word       0x00002754                   # dsllv       $a0, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258bb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_258bb4:
    // 0x258bb4: 0x1b70  tge         $zero, $zero, 109
    ctx->pc = 0x258bb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    ctx->pc = 0x258bb8u;
    return;
}
