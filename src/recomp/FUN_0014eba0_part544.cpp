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


void FUN_0014eba0_part544(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x257dd0u: goto label_257dd0;
        case 0x257dd4u: goto label_257dd4;
        case 0x257dd8u: goto label_257dd8;
        case 0x257ddcu: goto label_257ddc;
        case 0x257de0u: goto label_257de0;
        case 0x257de4u: goto label_257de4;
        case 0x257de8u: goto label_257de8;
        case 0x257decu: goto label_257dec;
        case 0x257df0u: goto label_257df0;
        case 0x257df4u: goto label_257df4;
        case 0x257df8u: goto label_257df8;
        case 0x257dfcu: goto label_257dfc;
        case 0x257e00u: goto label_257e00;
        case 0x257e04u: goto label_257e04;
        case 0x257e08u: goto label_257e08;
        case 0x257e0cu: goto label_257e0c;
        case 0x257e10u: goto label_257e10;
        case 0x257e14u: goto label_257e14;
        case 0x257e18u: goto label_257e18;
        case 0x257e1cu: goto label_257e1c;
        case 0x257e20u: goto label_257e20;
        case 0x257e24u: goto label_257e24;
        case 0x257e28u: goto label_257e28;
        case 0x257e2cu: goto label_257e2c;
        case 0x257e30u: goto label_257e30;
        case 0x257e34u: goto label_257e34;
        case 0x257e38u: goto label_257e38;
        case 0x257e3cu: goto label_257e3c;
        case 0x257e40u: goto label_257e40;
        case 0x257e44u: goto label_257e44;
        case 0x257e48u: goto label_257e48;
        case 0x257e4cu: goto label_257e4c;
        case 0x257e50u: goto label_257e50;
        case 0x257e54u: goto label_257e54;
        case 0x257e58u: goto label_257e58;
        case 0x257e5cu: goto label_257e5c;
        case 0x257e60u: goto label_257e60;
        case 0x257e64u: goto label_257e64;
        case 0x257e68u: goto label_257e68;
        case 0x257e6cu: goto label_257e6c;
        case 0x257e70u: goto label_257e70;
        case 0x257e74u: goto label_257e74;
        case 0x257e78u: goto label_257e78;
        case 0x257e7cu: goto label_257e7c;
        case 0x257e80u: goto label_257e80;
        case 0x257e84u: goto label_257e84;
        case 0x257e88u: goto label_257e88;
        case 0x257e8cu: goto label_257e8c;
        case 0x257e90u: goto label_257e90;
        case 0x257e94u: goto label_257e94;
        case 0x257e98u: goto label_257e98;
        case 0x257e9cu: goto label_257e9c;
        case 0x257ea0u: goto label_257ea0;
        case 0x257ea4u: goto label_257ea4;
        case 0x257ea8u: goto label_257ea8;
        case 0x257eacu: goto label_257eac;
        case 0x257eb0u: goto label_257eb0;
        case 0x257eb4u: goto label_257eb4;
        case 0x257eb8u: goto label_257eb8;
        case 0x257ebcu: goto label_257ebc;
        case 0x257ec0u: goto label_257ec0;
        case 0x257ec4u: goto label_257ec4;
        case 0x257ec8u: goto label_257ec8;
        case 0x257eccu: goto label_257ecc;
        case 0x257ed0u: goto label_257ed0;
        case 0x257ed4u: goto label_257ed4;
        case 0x257ed8u: goto label_257ed8;
        case 0x257edcu: goto label_257edc;
        case 0x257ee0u: goto label_257ee0;
        case 0x257ee4u: goto label_257ee4;
        case 0x257ee8u: goto label_257ee8;
        case 0x257eecu: goto label_257eec;
        case 0x257ef0u: goto label_257ef0;
        case 0x257ef4u: goto label_257ef4;
        case 0x257ef8u: goto label_257ef8;
        case 0x257efcu: goto label_257efc;
        case 0x257f00u: goto label_257f00;
        case 0x257f04u: goto label_257f04;
        case 0x257f08u: goto label_257f08;
        case 0x257f0cu: goto label_257f0c;
        case 0x257f10u: goto label_257f10;
        case 0x257f14u: goto label_257f14;
        case 0x257f18u: goto label_257f18;
        case 0x257f1cu: goto label_257f1c;
        case 0x257f20u: goto label_257f20;
        case 0x257f24u: goto label_257f24;
        case 0x257f28u: goto label_257f28;
        case 0x257f2cu: goto label_257f2c;
        case 0x257f30u: goto label_257f30;
        case 0x257f34u: goto label_257f34;
        case 0x257f38u: goto label_257f38;
        case 0x257f3cu: goto label_257f3c;
        case 0x257f40u: goto label_257f40;
        case 0x257f44u: goto label_257f44;
        case 0x257f48u: goto label_257f48;
        case 0x257f4cu: goto label_257f4c;
        case 0x257f50u: goto label_257f50;
        case 0x257f54u: goto label_257f54;
        case 0x257f58u: goto label_257f58;
        case 0x257f5cu: goto label_257f5c;
        case 0x257f60u: goto label_257f60;
        case 0x257f64u: goto label_257f64;
        case 0x257f68u: goto label_257f68;
        case 0x257f6cu: goto label_257f6c;
        case 0x257f70u: goto label_257f70;
        case 0x257f74u: goto label_257f74;
        case 0x257f78u: goto label_257f78;
        case 0x257f7cu: goto label_257f7c;
        case 0x257f80u: goto label_257f80;
        case 0x257f84u: goto label_257f84;
        case 0x257f88u: goto label_257f88;
        case 0x257f8cu: goto label_257f8c;
        case 0x257f90u: goto label_257f90;
        case 0x257f94u: goto label_257f94;
        case 0x257f98u: goto label_257f98;
        case 0x257f9cu: goto label_257f9c;
        case 0x257fa0u: goto label_257fa0;
        case 0x257fa4u: goto label_257fa4;
        case 0x257fa8u: goto label_257fa8;
        case 0x257facu: goto label_257fac;
        case 0x257fb0u: goto label_257fb0;
        case 0x257fb4u: goto label_257fb4;
        case 0x257fb8u: goto label_257fb8;
        case 0x257fbcu: goto label_257fbc;
        case 0x257fc0u: goto label_257fc0;
        case 0x257fc4u: goto label_257fc4;
        case 0x257fc8u: goto label_257fc8;
        case 0x257fccu: goto label_257fcc;
        case 0x257fd0u: goto label_257fd0;
        case 0x257fd4u: goto label_257fd4;
        case 0x257fd8u: goto label_257fd8;
        case 0x257fdcu: goto label_257fdc;
        case 0x257fe0u: goto label_257fe0;
        case 0x257fe4u: goto label_257fe4;
        case 0x257fe8u: goto label_257fe8;
        case 0x257fecu: goto label_257fec;
        case 0x257ff0u: goto label_257ff0;
        case 0x257ff4u: goto label_257ff4;
        case 0x257ff8u: goto label_257ff8;
        case 0x257ffcu: goto label_257ffc;
        case 0x258000u: goto label_258000;
        case 0x258004u: goto label_258004;
        case 0x258008u: goto label_258008;
        case 0x25800cu: goto label_25800c;
        case 0x258010u: goto label_258010;
        case 0x258014u: goto label_258014;
        case 0x258018u: goto label_258018;
        case 0x25801cu: goto label_25801c;
        case 0x258020u: goto label_258020;
        case 0x258024u: goto label_258024;
        case 0x258028u: goto label_258028;
        case 0x25802cu: goto label_25802c;
        case 0x258030u: goto label_258030;
        case 0x258034u: goto label_258034;
        case 0x258038u: goto label_258038;
        case 0x25803cu: goto label_25803c;
        case 0x258040u: goto label_258040;
        case 0x258044u: goto label_258044;
        case 0x258048u: goto label_258048;
        case 0x25804cu: goto label_25804c;
        case 0x258050u: goto label_258050;
        case 0x258054u: goto label_258054;
        case 0x258058u: goto label_258058;
        case 0x25805cu: goto label_25805c;
        case 0x258060u: goto label_258060;
        case 0x258064u: goto label_258064;
        case 0x258068u: goto label_258068;
        case 0x25806cu: goto label_25806c;
        case 0x258070u: goto label_258070;
        case 0x258074u: goto label_258074;
        case 0x258078u: goto label_258078;
        case 0x25807cu: goto label_25807c;
        case 0x258080u: goto label_258080;
        case 0x258084u: goto label_258084;
        case 0x258088u: goto label_258088;
        case 0x25808cu: goto label_25808c;
        case 0x258090u: goto label_258090;
        case 0x258094u: goto label_258094;
        case 0x258098u: goto label_258098;
        case 0x25809cu: goto label_25809c;
        case 0x2580a0u: goto label_2580a0;
        case 0x2580a4u: goto label_2580a4;
        case 0x2580a8u: goto label_2580a8;
        case 0x2580acu: goto label_2580ac;
        case 0x2580b0u: goto label_2580b0;
        case 0x2580b4u: goto label_2580b4;
        case 0x2580b8u: goto label_2580b8;
        case 0x2580bcu: goto label_2580bc;
        case 0x2580c0u: goto label_2580c0;
        case 0x2580c4u: goto label_2580c4;
        case 0x2580c8u: goto label_2580c8;
        case 0x2580ccu: goto label_2580cc;
        case 0x2580d0u: goto label_2580d0;
        case 0x2580d4u: goto label_2580d4;
        case 0x2580d8u: goto label_2580d8;
        case 0x2580dcu: goto label_2580dc;
        case 0x2580e0u: goto label_2580e0;
        case 0x2580e4u: goto label_2580e4;
        case 0x2580e8u: goto label_2580e8;
        case 0x2580ecu: goto label_2580ec;
        case 0x2580f0u: goto label_2580f0;
        case 0x2580f4u: goto label_2580f4;
        case 0x2580f8u: goto label_2580f8;
        case 0x2580fcu: goto label_2580fc;
        case 0x258100u: goto label_258100;
        case 0x258104u: goto label_258104;
        case 0x258108u: goto label_258108;
        case 0x25810cu: goto label_25810c;
        case 0x258110u: goto label_258110;
        case 0x258114u: goto label_258114;
        case 0x258118u: goto label_258118;
        case 0x25811cu: goto label_25811c;
        case 0x258120u: goto label_258120;
        case 0x258124u: goto label_258124;
        case 0x258128u: goto label_258128;
        case 0x25812cu: goto label_25812c;
        case 0x258130u: goto label_258130;
        case 0x258134u: goto label_258134;
        case 0x258138u: goto label_258138;
        case 0x25813cu: goto label_25813c;
        case 0x258140u: goto label_258140;
        case 0x258144u: goto label_258144;
        case 0x258148u: goto label_258148;
        case 0x25814cu: goto label_25814c;
        case 0x258150u: goto label_258150;
        case 0x258154u: goto label_258154;
        case 0x258158u: goto label_258158;
        case 0x25815cu: goto label_25815c;
        case 0x258160u: goto label_258160;
        case 0x258164u: goto label_258164;
        case 0x258168u: goto label_258168;
        case 0x25816cu: goto label_25816c;
        case 0x258170u: goto label_258170;
        case 0x258174u: goto label_258174;
        case 0x258178u: goto label_258178;
        case 0x25817cu: goto label_25817c;
        case 0x258180u: goto label_258180;
        case 0x258184u: goto label_258184;
        case 0x258188u: goto label_258188;
        case 0x25818cu: goto label_25818c;
        case 0x258190u: goto label_258190;
        case 0x258194u: goto label_258194;
        case 0x258198u: goto label_258198;
        case 0x25819cu: goto label_25819c;
        case 0x2581a0u: goto label_2581a0;
        case 0x2581a4u: goto label_2581a4;
        case 0x2581a8u: goto label_2581a8;
        case 0x2581acu: goto label_2581ac;
        case 0x2581b0u: goto label_2581b0;
        case 0x2581b4u: goto label_2581b4;
        case 0x2581b8u: goto label_2581b8;
        case 0x2581bcu: goto label_2581bc;
        case 0x2581c0u: goto label_2581c0;
        case 0x2581c4u: goto label_2581c4;
        case 0x2581c8u: goto label_2581c8;
        case 0x2581ccu: goto label_2581cc;
        case 0x2581d0u: goto label_2581d0;
        case 0x2581d4u: goto label_2581d4;
        case 0x2581d8u: goto label_2581d8;
        case 0x2581dcu: goto label_2581dc;
        case 0x2581e0u: goto label_2581e0;
        case 0x2581e4u: goto label_2581e4;
        case 0x2581e8u: goto label_2581e8;
        case 0x2581ecu: goto label_2581ec;
        case 0x2581f0u: goto label_2581f0;
        case 0x2581f4u: goto label_2581f4;
        case 0x2581f8u: goto label_2581f8;
        case 0x2581fcu: goto label_2581fc;
        case 0x258200u: goto label_258200;
        case 0x258204u: goto label_258204;
        case 0x258208u: goto label_258208;
        case 0x25820cu: goto label_25820c;
        case 0x258210u: goto label_258210;
        case 0x258214u: goto label_258214;
        case 0x258218u: goto label_258218;
        case 0x25821cu: goto label_25821c;
        case 0x258220u: goto label_258220;
        case 0x258224u: goto label_258224;
        case 0x258228u: goto label_258228;
        case 0x25822cu: goto label_25822c;
        case 0x258230u: goto label_258230;
        case 0x258234u: goto label_258234;
        case 0x258238u: goto label_258238;
        case 0x25823cu: goto label_25823c;
        case 0x258240u: goto label_258240;
        case 0x258244u: goto label_258244;
        case 0x258248u: goto label_258248;
        case 0x25824cu: goto label_25824c;
        case 0x258250u: goto label_258250;
        case 0x258254u: goto label_258254;
        case 0x258258u: goto label_258258;
        case 0x25825cu: goto label_25825c;
        case 0x258260u: goto label_258260;
        case 0x258264u: goto label_258264;
        case 0x258268u: goto label_258268;
        case 0x25826cu: goto label_25826c;
        case 0x258270u: goto label_258270;
        case 0x258274u: goto label_258274;
        case 0x258278u: goto label_258278;
        case 0x25827cu: goto label_25827c;
        case 0x258280u: goto label_258280;
        case 0x258284u: goto label_258284;
        case 0x258288u: goto label_258288;
        case 0x25828cu: goto label_25828c;
        case 0x258290u: goto label_258290;
        case 0x258294u: goto label_258294;
        case 0x258298u: goto label_258298;
        case 0x25829cu: goto label_25829c;
        case 0x2582a0u: goto label_2582a0;
        case 0x2582a4u: goto label_2582a4;
        case 0x2582a8u: goto label_2582a8;
        case 0x2582acu: goto label_2582ac;
        case 0x2582b0u: goto label_2582b0;
        case 0x2582b4u: goto label_2582b4;
        case 0x2582b8u: goto label_2582b8;
        case 0x2582bcu: goto label_2582bc;
        case 0x2582c0u: goto label_2582c0;
        case 0x2582c4u: goto label_2582c4;
        case 0x2582c8u: goto label_2582c8;
        case 0x2582ccu: goto label_2582cc;
        case 0x2582d0u: goto label_2582d0;
        case 0x2582d4u: goto label_2582d4;
        case 0x2582d8u: goto label_2582d8;
        case 0x2582dcu: goto label_2582dc;
        case 0x2582e0u: goto label_2582e0;
        case 0x2582e4u: goto label_2582e4;
        case 0x2582e8u: goto label_2582e8;
        case 0x2582ecu: goto label_2582ec;
        case 0x2582f0u: goto label_2582f0;
        case 0x2582f4u: goto label_2582f4;
        case 0x2582f8u: goto label_2582f8;
        case 0x2582fcu: goto label_2582fc;
        case 0x258300u: goto label_258300;
        case 0x258304u: goto label_258304;
        case 0x258308u: goto label_258308;
        case 0x25830cu: goto label_25830c;
        case 0x258310u: goto label_258310;
        case 0x258314u: goto label_258314;
        case 0x258318u: goto label_258318;
        case 0x25831cu: goto label_25831c;
        case 0x258320u: goto label_258320;
        case 0x258324u: goto label_258324;
        case 0x258328u: goto label_258328;
        case 0x25832cu: goto label_25832c;
        case 0x258330u: goto label_258330;
        case 0x258334u: goto label_258334;
        case 0x258338u: goto label_258338;
        case 0x25833cu: goto label_25833c;
        case 0x258340u: goto label_258340;
        case 0x258344u: goto label_258344;
        case 0x258348u: goto label_258348;
        case 0x25834cu: goto label_25834c;
        case 0x258350u: goto label_258350;
        case 0x258354u: goto label_258354;
        case 0x258358u: goto label_258358;
        case 0x25835cu: goto label_25835c;
        case 0x258360u: goto label_258360;
        case 0x258364u: goto label_258364;
        case 0x258368u: goto label_258368;
        case 0x25836cu: goto label_25836c;
        case 0x258370u: goto label_258370;
        case 0x258374u: goto label_258374;
        case 0x258378u: goto label_258378;
        case 0x25837cu: goto label_25837c;
        case 0x258380u: goto label_258380;
        case 0x258384u: goto label_258384;
        case 0x258388u: goto label_258388;
        case 0x25838cu: goto label_25838c;
        case 0x258390u: goto label_258390;
        case 0x258394u: goto label_258394;
        case 0x258398u: goto label_258398;
        case 0x25839cu: goto label_25839c;
        case 0x2583a0u: goto label_2583a0;
        case 0x2583a4u: goto label_2583a4;
        case 0x2583a8u: goto label_2583a8;
        case 0x2583acu: goto label_2583ac;
        case 0x2583b0u: goto label_2583b0;
        case 0x2583b4u: goto label_2583b4;
        case 0x2583b8u: goto label_2583b8;
        case 0x2583bcu: goto label_2583bc;
        case 0x2583c0u: goto label_2583c0;
        case 0x2583c4u: goto label_2583c4;
        case 0x2583c8u: goto label_2583c8;
        case 0x2583ccu: goto label_2583cc;
        case 0x2583d0u: goto label_2583d0;
        case 0x2583d4u: goto label_2583d4;
        case 0x2583d8u: goto label_2583d8;
        case 0x2583dcu: goto label_2583dc;
        case 0x2583e0u: goto label_2583e0;
        case 0x2583e4u: goto label_2583e4;
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
        default: return;
    }

label_257dd0:
    // 0x257dd0: 0x15b6  tne         $zero, $zero, 86
    ctx->pc = 0x257dd0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257dd4:
    // 0x257dd4: 0xec00  sll         $sp, $zero, 16
    ctx->pc = 0x257dd4u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_257dd8:
    // 0x257dd8: 0x0  nop
    ctx->pc = 0x257dd8u;
    // NOP
label_257ddc:
    // 0x257ddc: 0x0  nop
    ctx->pc = 0x257ddcu;
    // NOP
label_257de0:
    // 0x257de0: 0x15d4  .word       0x000015D4                   # dsllv       $v0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_257de4:
    // 0x257de4: 0x81a0  .word       0x000081A0                   # add         $s0, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257de4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_257de8:
    // 0x257de8: 0x0  nop
    ctx->pc = 0x257de8u;
    // NOP
label_257dec:
    // 0x257dec: 0x0  nop
    ctx->pc = 0x257decu;
    // NOP
label_257df0:
    // 0x257df0: 0x15e5  .word       0x000015E5                   # move        $v0, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_257df4:
    // 0x257df4: 0x10800  sll         $at, $at, 0
    ctx->pc = 0x257df4u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), 0));
label_257df8:
    // 0x257df8: 0x0  nop
    ctx->pc = 0x257df8u;
    // NOP
label_257dfc:
    // 0x257dfc: 0x0  nop
    ctx->pc = 0x257dfcu;
    // NOP
label_257e00:
    // 0x257e00: 0x1606  .word       0x00001606                   # srlv        $v0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257e00u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_257e04:
    // 0x257e04: 0x8940  sll         $s1, $zero, 5
    ctx->pc = 0x257e04u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_257e08:
    // 0x257e08: 0x0  nop
    ctx->pc = 0x257e08u;
    // NOP
label_257e0c:
    // 0x257e0c: 0x0  nop
    ctx->pc = 0x257e0cu;
    // NOP
label_257e10:
    // 0x257e10: 0x1618  .word       0x00001618                   # mult        $v0, $zero, $zero # 00000600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x257e10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_257e14:
    // 0x257e14: 0xeb40  sll         $sp, $zero, 13
    ctx->pc = 0x257e14u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_257e18:
    // 0x257e18: 0x0  nop
    ctx->pc = 0x257e18u;
    // NOP
label_257e1c:
    // 0x257e1c: 0x0  nop
    ctx->pc = 0x257e1cu;
    // NOP
label_257e20:
    // 0x257e20: 0x1636  tne         $zero, $zero, 88
    ctx->pc = 0x257e20u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257e24:
    // 0x257e24: 0xaa00  sll         $s5, $zero, 8
    ctx->pc = 0x257e24u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_257e28:
    // 0x257e28: 0x0  nop
    ctx->pc = 0x257e28u;
    // NOP
label_257e2c:
    // 0x257e2c: 0x0  nop
    ctx->pc = 0x257e2cu;
    // NOP
label_257e30:
    // 0x257e30: 0x164c  syscall     89
    ctx->pc = 0x257e30u;
    ctx->pc = 0x257E34u;
runtime->handleSyscall(rdram, ctx, 0x59u);
label_257e34:
    // 0x257e34: 0x11fa0  .word       0x00011FA0                   # add         $v1, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257e34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_257e38:
    // 0x257e38: 0x0  nop
    ctx->pc = 0x257e38u;
    // NOP
label_257e3c:
    // 0x257e3c: 0x0  nop
    ctx->pc = 0x257e3cu;
    // NOP
label_257e40:
    // 0x257e40: 0x1670  tge         $zero, $zero, 89
    ctx->pc = 0x257e40u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257e44:
    // 0x257e44: 0x100c0  sll         $zero, $at, 3
    ctx->pc = 0x257e44u;
    
label_257e48:
    // 0x257e48: 0x0  nop
    ctx->pc = 0x257e48u;
    // NOP
label_257e4c:
    // 0x257e4c: 0x0  nop
    ctx->pc = 0x257e4cu;
    // NOP
label_257e50:
    // 0x257e50: 0x1691  .word       0x00001691                   # mthi        $zero # 00001680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257e50u;
    ctx->hi = GPR_U64(ctx, 0);
label_257e54:
    // 0x257e54: 0xfe90  .word       0x0000FE90                   # mfhi        $ra # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257e54u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_257e58:
    // 0x257e58: 0x0  nop
    ctx->pc = 0x257e58u;
    // NOP
label_257e5c:
    // 0x257e5c: 0x0  nop
    ctx->pc = 0x257e5cu;
    // NOP
label_257e60:
    // 0x257e60: 0x16b1  tgeu        $zero, $zero, 90
    ctx->pc = 0x257e60u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257e64:
    // 0x257e64: 0xace0  .word       0x0000ACE0                   # add         $s5, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257e64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_257e68:
    // 0x257e68: 0x0  nop
    ctx->pc = 0x257e68u;
    // NOP
label_257e6c:
    // 0x257e6c: 0x0  nop
    ctx->pc = 0x257e6cu;
    // NOP
label_257e70:
    // 0x257e70: 0x16c7  .word       0x000016C7                   # srav        $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257e70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_257e74:
    // 0x257e74: 0xb3c0  sll         $s6, $zero, 15
    ctx->pc = 0x257e74u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_257e78:
    // 0x257e78: 0x0  nop
    ctx->pc = 0x257e78u;
    // NOP
label_257e7c:
    // 0x257e7c: 0x0  nop
    ctx->pc = 0x257e7cu;
    // NOP
label_257e80:
    // 0x257e80: 0x16de  .word       0x000016DE                   # ddiv        $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257e80u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x257E80 raw=0x000016DE");
 /* MITIGATED */
label_257e84:
    // 0x257e84: 0xdb20  .word       0x0000DB20                   # add         $k1, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257e84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_257e88:
    // 0x257e88: 0x0  nop
    ctx->pc = 0x257e88u;
    // NOP
label_257e8c:
    // 0x257e8c: 0x0  nop
    ctx->pc = 0x257e8cu;
    // NOP
label_257e90:
    // 0x257e90: 0x16fa  dsrl        $v0, $zero, 27
    ctx->pc = 0x257e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) >> 27);
label_257e94:
    // 0x257e94: 0xce70  tge         $zero, $zero, 825
    ctx->pc = 0x257e94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257e98:
    // 0x257e98: 0x0  nop
    ctx->pc = 0x257e98u;
    // NOP
label_257e9c:
    // 0x257e9c: 0x0  nop
    ctx->pc = 0x257e9cu;
    // NOP
label_257ea0:
    // 0x257ea0: 0x1714  .word       0x00001714                   # dsllv       $v0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_257ea4:
    // 0x257ea4: 0x11f50  .word       0x00011F50                   # mfhi        $v1 # 00010740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257ea4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_257ea8:
    // 0x257ea8: 0x0  nop
    ctx->pc = 0x257ea8u;
    // NOP
label_257eac:
    // 0x257eac: 0x0  nop
    ctx->pc = 0x257eacu;
    // NOP
label_257eb0:
    // 0x257eb0: 0x1738  dsll        $v0, $zero, 28
    ctx->pc = 0x257eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << 28);
label_257eb4:
    // 0x257eb4: 0x107b0  tge         $zero, $at, 30
    ctx->pc = 0x257eb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_257eb8:
    // 0x257eb8: 0x0  nop
    ctx->pc = 0x257eb8u;
    // NOP
label_257ebc:
    // 0x257ebc: 0x0  nop
    ctx->pc = 0x257ebcu;
    // NOP
label_257ec0:
    // 0x257ec0: 0x1759  .word       0x00001759                   # multu       $zero, $zero # 00001740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257ec0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_257ec4:
    // 0x257ec4: 0xdf50  .word       0x0000DF50                   # mfhi        $k1 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257ec4u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_257ec8:
    // 0x257ec8: 0x0  nop
    ctx->pc = 0x257ec8u;
    // NOP
label_257ecc:
    // 0x257ecc: 0x0  nop
    ctx->pc = 0x257eccu;
    // NOP
label_257ed0:
    // 0x257ed0: 0x1775  .word       0x00001775                   # INVALID     $zero, $zero, 0x1775 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257ed0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x257ED0 raw=0x00001775");
 /* MITIGATED */
label_257ed4:
    // 0x257ed4: 0x11a80  sll         $v1, $at, 10
    ctx->pc = 0x257ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 10));
label_257ed8:
    // 0x257ed8: 0x0  nop
    ctx->pc = 0x257ed8u;
    // NOP
label_257edc:
    // 0x257edc: 0x0  nop
    ctx->pc = 0x257edcu;
    // NOP
label_257ee0:
    // 0x257ee0: 0x1799  .word       0x00001799                   # multu       $zero, $zero # 00001780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257ee0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_257ee4:
    // 0x257ee4: 0xbdc0  sll         $s7, $zero, 23
    ctx->pc = 0x257ee4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_257ee8:
    // 0x257ee8: 0x0  nop
    ctx->pc = 0x257ee8u;
    // NOP
label_257eec:
    // 0x257eec: 0x0  nop
    ctx->pc = 0x257eecu;
    // NOP
label_257ef0:
    // 0x257ef0: 0x17b1  tgeu        $zero, $zero, 94
    ctx->pc = 0x257ef0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257ef4:
    // 0x257ef4: 0xbba0  .word       0x0000BBA0                   # add         $s7, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257ef4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_257ef8:
    // 0x257ef8: 0x0  nop
    ctx->pc = 0x257ef8u;
    // NOP
label_257efc:
    // 0x257efc: 0x0  nop
    ctx->pc = 0x257efcu;
    // NOP
label_257f00:
    // 0x257f00: 0x17c9  .word       0x000017C9                   # jalr        $v0, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
label_257f04:
    if (ctx->pc == 0x257F04u) {
        ctx->pc = 0x257F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257F00u;
        // 0x257f04: 0xbb00  sll         $s7, $zero, 12 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257F08u;
        goto label_257f08;
    }
    ctx->pc = 0x257F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 2, 0x257F08u);
        ctx->pc = 0x257F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257F00u;
        // 0x257f04: 0xbb00  sll         $s7, $zero, 12 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257F00u, 0x257F08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x257F08u;
label_257f08:
    // 0x257f08: 0x0  nop
    ctx->pc = 0x257f08u;
    // NOP
label_257f0c:
    // 0x257f0c: 0x0  nop
    ctx->pc = 0x257f0cu;
    // NOP
label_257f10:
    // 0x257f10: 0x17e1  .word       0x000017E1                   # addu        $v0, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_257f14:
    // 0x257f14: 0xbe50  .word       0x0000BE50                   # mfhi        $s7 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257f14u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_257f18:
    // 0x257f18: 0x0  nop
    ctx->pc = 0x257f18u;
    // NOP
label_257f1c:
    // 0x257f1c: 0x0  nop
    ctx->pc = 0x257f1cu;
    // NOP
label_257f20:
    // 0x257f20: 0x17f9  .word       0x000017F9                   # INVALID     $zero, $zero, 0x17F9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257f20u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x257F20 raw=0x000017F9");
 /* MITIGATED */
label_257f24:
    // 0x257f24: 0xd920  .word       0x0000D920                   # add         $k1, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257f24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_257f28:
    // 0x257f28: 0x0  nop
    ctx->pc = 0x257f28u;
    // NOP
label_257f2c:
    // 0x257f2c: 0x0  nop
    ctx->pc = 0x257f2cu;
    // NOP
label_257f30:
    // 0x257f30: 0x1815  .word       0x00001815                   # INVALID     $zero, $zero, 0x1815 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257f30u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x257F30 raw=0x00001815");
 /* MITIGATED */
label_257f34:
    // 0x257f34: 0xc920  .word       0x0000C920                   # add         $t9, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257f34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_257f38:
    // 0x257f38: 0x0  nop
    ctx->pc = 0x257f38u;
    // NOP
label_257f3c:
    // 0x257f3c: 0x0  nop
    ctx->pc = 0x257f3cu;
    // NOP
label_257f40:
    // 0x257f40: 0x182f  dsubu       $v1, $zero, $zero
    ctx->pc = 0x257f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_257f44:
    // 0x257f44: 0x1fec0  sll         $ra, $at, 27
    ctx->pc = 0x257f44u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 1), 27));
label_257f48:
    // 0x257f48: 0x0  nop
    ctx->pc = 0x257f48u;
    // NOP
label_257f4c:
    // 0x257f4c: 0x0  nop
    ctx->pc = 0x257f4cu;
    // NOP
label_257f50:
    // 0x257f50: 0x186f  .word       0x0000186F                   # dsubu       $v1, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257f50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_257f54:
    // 0x257f54: 0xbf90  .word       0x0000BF90                   # mfhi        $s7 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257f54u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_257f58:
    // 0x257f58: 0x0  nop
    ctx->pc = 0x257f58u;
    // NOP
label_257f5c:
    // 0x257f5c: 0x0  nop
    ctx->pc = 0x257f5cu;
    // NOP
label_257f60:
    // 0x257f60: 0x1887  .word       0x00001887                   # srav        $v1, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257f60u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_257f64:
    // 0x257f64: 0xc2c0  sll         $t8, $zero, 11
    ctx->pc = 0x257f64u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_257f68:
    // 0x257f68: 0x0  nop
    ctx->pc = 0x257f68u;
    // NOP
label_257f6c:
    // 0x257f6c: 0x0  nop
    ctx->pc = 0x257f6cu;
    // NOP
label_257f70:
    // 0x257f70: 0x18a0  .word       0x000018A0                   # add         $v1, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257f70u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_257f74:
    // 0x257f74: 0x7ee0  .word       0x00007EE0                   # add         $t7, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257f74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_257f78:
    // 0x257f78: 0x0  nop
    ctx->pc = 0x257f78u;
    // NOP
label_257f7c:
    // 0x257f7c: 0x0  nop
    ctx->pc = 0x257f7cu;
    // NOP
label_257f80:
    // 0x257f80: 0x18b0  tge         $zero, $zero, 98
    ctx->pc = 0x257f80u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257f84:
    // 0x257f84: 0xe560  .word       0x0000E560                   # add         $gp, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257f84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_257f88:
    // 0x257f88: 0x0  nop
    ctx->pc = 0x257f88u;
    // NOP
label_257f8c:
    // 0x257f8c: 0x0  nop
    ctx->pc = 0x257f8cu;
    // NOP
label_257f90:
    // 0x257f90: 0x18cd  break       0, 99
    ctx->pc = 0x257f90u;
    runtime->handleBreak(rdram, ctx);
label_257f94:
    // 0x257f94: 0x98d0  .word       0x000098D0                   # mfhi        $s3 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257f94u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_257f98:
    // 0x257f98: 0x0  nop
    ctx->pc = 0x257f98u;
    // NOP
label_257f9c:
    // 0x257f9c: 0x0  nop
    ctx->pc = 0x257f9cu;
    // NOP
label_257fa0:
    // 0x257fa0: 0x18e1  .word       0x000018E1                   # addu        $v1, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_257fa4:
    // 0x257fa4: 0x8e90  .word       0x00008E90                   # mfhi        $s1 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257fa4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_257fa8:
    // 0x257fa8: 0x0  nop
    ctx->pc = 0x257fa8u;
    // NOP
label_257fac:
    // 0x257fac: 0x0  nop
    ctx->pc = 0x257facu;
    // NOP
label_257fb0:
    // 0x257fb0: 0x18f3  tltu        $zero, $zero, 99
    ctx->pc = 0x257fb0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257fb4:
    // 0x257fb4: 0xf770  tge         $zero, $zero, 989
    ctx->pc = 0x257fb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257fb8:
    // 0x257fb8: 0x0  nop
    ctx->pc = 0x257fb8u;
    // NOP
label_257fbc:
    // 0x257fbc: 0x0  nop
    ctx->pc = 0x257fbcu;
    // NOP
label_257fc0:
    // 0x257fc0: 0x1912  .word       0x00001912                   # mflo        $v1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257fc0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_257fc4:
    // 0x257fc4: 0xae90  .word       0x0000AE90                   # mfhi        $s5 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257fc4u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_257fc8:
    // 0x257fc8: 0x0  nop
    ctx->pc = 0x257fc8u;
    // NOP
label_257fcc:
    // 0x257fcc: 0x0  nop
    ctx->pc = 0x257fccu;
    // NOP
label_257fd0:
    // 0x257fd0: 0x1928  .word       0x00001928                   # mfsa        $v1 # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x257fd0u;
    SET_GPR_U32(ctx, 3, ctx->sa);
label_257fd4:
    // 0x257fd4: 0xf520  .word       0x0000F520                   # add         $fp, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257fd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_257fd8:
    // 0x257fd8: 0x0  nop
    ctx->pc = 0x257fd8u;
    // NOP
label_257fdc:
    // 0x257fdc: 0x0  nop
    ctx->pc = 0x257fdcu;
    // NOP
label_257fe0:
    // 0x257fe0: 0x1947  .word       0x00001947                   # srav        $v1, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257fe0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_257fe4:
    // 0x257fe4: 0x9960  .word       0x00009960                   # add         $s3, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257fe4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_257fe8:
    // 0x257fe8: 0x0  nop
    ctx->pc = 0x257fe8u;
    // NOP
label_257fec:
    // 0x257fec: 0x0  nop
    ctx->pc = 0x257fecu;
    // NOP
label_257ff0:
    // 0x257ff0: 0x195b  .word       0x0000195B                   # divu        $v1, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257ff0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_257ff4:
    // 0x257ff4: 0xc0b0  tge         $zero, $zero, 770
    ctx->pc = 0x257ff4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257ff8:
    // 0x257ff8: 0x0  nop
    ctx->pc = 0x257ff8u;
    // NOP
label_257ffc:
    // 0x257ffc: 0x0  nop
    ctx->pc = 0x257ffcu;
    // NOP
label_258000:
    // 0x258000: 0x1974  teq         $zero, $zero, 101
    ctx->pc = 0x258000u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_258004:
    // 0x258004: 0xbe40  sll         $s7, $zero, 25
    ctx->pc = 0x258004u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_258008:
    // 0x258008: 0x0  nop
    ctx->pc = 0x258008u;
    // NOP
label_25800c:
    // 0x25800c: 0x0  nop
    ctx->pc = 0x25800cu;
    // NOP
label_258010:
    // 0x258010: 0x198c  syscall     102
    ctx->pc = 0x258010u;
    ctx->pc = 0x258014u;
runtime->handleSyscall(rdram, ctx, 0x66u);
label_258014:
    // 0x258014: 0x10b10  .word       0x00010B10                   # mfhi        $at # 00010300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258014u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_258018:
    // 0x258018: 0x0  nop
    ctx->pc = 0x258018u;
    // NOP
label_25801c:
    // 0x25801c: 0x0  nop
    ctx->pc = 0x25801cu;
    // NOP
label_258020:
    // 0x258020: 0x19ae  .word       0x000019AE                   # dsub        $v1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258020u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, r); }
label_258024:
    // 0x258024: 0x97c0  sll         $s2, $zero, 31
    ctx->pc = 0x258024u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_258028:
    // 0x258028: 0x0  nop
    ctx->pc = 0x258028u;
    // NOP
label_25802c:
    // 0x25802c: 0x0  nop
    ctx->pc = 0x25802cu;
    // NOP
label_258030:
    // 0x258030: 0x19c1  .word       0x000019C1                   # INVALID     $zero, $zero, 0x19C1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258030u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x258030 raw=0x000019C1");
 /* MITIGATED */
label_258034:
    // 0x258034: 0x8b20  .word       0x00008B20                   # add         $s1, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258034u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_258038:
    // 0x258038: 0x0  nop
    ctx->pc = 0x258038u;
    // NOP
label_25803c:
    // 0x25803c: 0x0  nop
    ctx->pc = 0x25803cu;
    // NOP
label_258040:
    // 0x258040: 0x19d3  .word       0x000019D3                   # mtlo        $zero # 000019C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258040u;
    ctx->lo = GPR_U64(ctx, 0);
label_258044:
    // 0x258044: 0x93c0  sll         $s2, $zero, 15
    ctx->pc = 0x258044u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_258048:
    // 0x258048: 0x0  nop
    ctx->pc = 0x258048u;
    // NOP
label_25804c:
    // 0x25804c: 0x0  nop
    ctx->pc = 0x25804cu;
    // NOP
label_258050:
    // 0x258050: 0x19e6  .word       0x000019E6                   # xor         $v1, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_258054:
    // 0x258054: 0x7a90  .word       0x00007A90                   # mfhi        $t7 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258054u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_258058:
    // 0x258058: 0x0  nop
    ctx->pc = 0x258058u;
    // NOP
label_25805c:
    // 0x25805c: 0x0  nop
    ctx->pc = 0x25805cu;
    // NOP
label_258060:
    // 0x258060: 0x19f6  tne         $zero, $zero, 103
    ctx->pc = 0x258060u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_258064:
    // 0x258064: 0x8b00  sll         $s1, $zero, 12
    ctx->pc = 0x258064u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_258068:
    // 0x258068: 0x0  nop
    ctx->pc = 0x258068u;
    // NOP
label_25806c:
    // 0x25806c: 0x0  nop
    ctx->pc = 0x25806cu;
    // NOP
label_258070:
    // 0x258070: 0x1a08  .word       0x00001A08                   # jr          $zero # 00001A00 <InstrIdType: CPU_SPECIAL>
label_258074:
    if (ctx->pc == 0x258074u) {
        ctx->pc = 0x258074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258070u;
        // 0x258074: 0x9a10  .word       0x00009A10                   # mfhi        $s3 # 00000200 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 19, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x258078u;
        goto label_258078;
    }
    ctx->pc = 0x258070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x258074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258070u;
        // 0x258074: 0x9a10  .word       0x00009A10                   # mfhi        $s3 # 00000200 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 19, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258070u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x258078u;
label_258078:
    // 0x258078: 0x0  nop
    ctx->pc = 0x258078u;
    // NOP
label_25807c:
    // 0x25807c: 0x0  nop
    ctx->pc = 0x25807cu;
    // NOP
label_258080:
    // 0x258080: 0x1a1c  .word       0x00001A1C                   # dmult       $zero, $zero # 00001A00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258080u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x258080 raw=0x00001A1C");
 /* MITIGATED */
label_258084:
    // 0x258084: 0xc7b0  tge         $zero, $zero, 798
    ctx->pc = 0x258084u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_258088:
    // 0x258088: 0x0  nop
    ctx->pc = 0x258088u;
    // NOP
label_25808c:
    // 0x25808c: 0x0  nop
    ctx->pc = 0x25808cu;
    // NOP
label_258090:
    // 0x258090: 0x1a35  .word       0x00001A35                   # INVALID     $zero, $zero, 0x1A35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258090u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x258090 raw=0x00001A35");
 /* MITIGATED */
label_258094:
    // 0x258094: 0xbae0  .word       0x0000BAE0                   # add         $s7, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258094u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_258098:
    // 0x258098: 0x0  nop
    ctx->pc = 0x258098u;
    // NOP
label_25809c:
    // 0x25809c: 0x0  nop
    ctx->pc = 0x25809cu;
    // NOP
label_2580a0:
    // 0x2580a0: 0x1a4d  break       0, 105
    ctx->pc = 0x2580a0u;
    runtime->handleBreak(rdram, ctx);
label_2580a4:
    // 0x2580a4: 0x8130  tge         $zero, $zero, 516
    ctx->pc = 0x2580a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2580a8:
    // 0x2580a8: 0x0  nop
    ctx->pc = 0x2580a8u;
    // NOP
label_2580ac:
    // 0x2580ac: 0x0  nop
    ctx->pc = 0x2580acu;
    // NOP
label_2580b0:
    // 0x2580b0: 0x1a5e  .word       0x00001A5E                   # ddiv        $v1, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2580b0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2580B0 raw=0x00001A5E");
 /* MITIGATED */
label_2580b4:
    // 0x2580b4: 0x7090  .word       0x00007090                   # mfhi        $t6 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2580b4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_2580b8:
    // 0x2580b8: 0x0  nop
    ctx->pc = 0x2580b8u;
    // NOP
label_2580bc:
    // 0x2580bc: 0x0  nop
    ctx->pc = 0x2580bcu;
    // NOP
label_2580c0:
    // 0x2580c0: 0x1a6d  .word       0x00001A6D                   # daddu       $v1, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2580c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2580c4:
    // 0x2580c4: 0x9d20  .word       0x00009D20                   # add         $s3, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2580c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_2580c8:
    // 0x2580c8: 0x0  nop
    ctx->pc = 0x2580c8u;
    // NOP
label_2580cc:
    // 0x2580cc: 0x0  nop
    ctx->pc = 0x2580ccu;
    // NOP
label_2580d0:
    // 0x2580d0: 0x1a81  .word       0x00001A81                   # INVALID     $zero, $zero, 0x1A81 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2580d0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2580D0 raw=0x00001A81");
 /* MITIGATED */
label_2580d4:
    // 0x2580d4: 0x8e50  .word       0x00008E50                   # mfhi        $s1 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2580d4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_2580d8:
    // 0x2580d8: 0x0  nop
    ctx->pc = 0x2580d8u;
    // NOP
label_2580dc:
    // 0x2580dc: 0x0  nop
    ctx->pc = 0x2580dcu;
    // NOP
label_2580e0:
    // 0x2580e0: 0x1a93  .word       0x00001A93                   # mtlo        $zero # 00001A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2580e0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2580e4:
    // 0x2580e4: 0x8970  tge         $zero, $zero, 549
    ctx->pc = 0x2580e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2580e8:
    // 0x2580e8: 0x0  nop
    ctx->pc = 0x2580e8u;
    // NOP
label_2580ec:
    // 0x2580ec: 0x0  nop
    ctx->pc = 0x2580ecu;
    // NOP
label_2580f0:
    // 0x2580f0: 0x1aa5  .word       0x00001AA5                   # move        $v1, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2580f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2580f4:
    // 0x2580f4: 0x8900  sll         $s1, $zero, 4
    ctx->pc = 0x2580f4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_2580f8:
    // 0x2580f8: 0x0  nop
    ctx->pc = 0x2580f8u;
    // NOP
label_2580fc:
    // 0x2580fc: 0x0  nop
    ctx->pc = 0x2580fcu;
    // NOP
label_258100:
    // 0x258100: 0x1ab7  .word       0x00001AB7                   # INVALID     $zero, $zero, 0x1AB7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258100u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x258100 raw=0x00001AB7");
 /* MITIGATED */
label_258104:
    // 0x258104: 0x8620  .word       0x00008620                   # add         $s0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258104u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_258108:
    // 0x258108: 0x0  nop
    ctx->pc = 0x258108u;
    // NOP
label_25810c:
    // 0x25810c: 0x0  nop
    ctx->pc = 0x25810cu;
    // NOP
label_258110:
    // 0x258110: 0x1ac8  .word       0x00001AC8                   # jr          $zero # 00001AC0 <InstrIdType: CPU_SPECIAL>
label_258114:
    if (ctx->pc == 0x258114u) {
        ctx->pc = 0x258114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258110u;
        // 0x258114: 0x9350  .word       0x00009350                   # mfhi        $s2 # 00000340 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 18, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x258118u;
        goto label_258118;
    }
    ctx->pc = 0x258110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x258114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258110u;
        // 0x258114: 0x9350  .word       0x00009350                   # mfhi        $s2 # 00000340 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 18, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258110u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x258118u;
label_258118:
    // 0x258118: 0x0  nop
    ctx->pc = 0x258118u;
    // NOP
label_25811c:
    // 0x25811c: 0x0  nop
    ctx->pc = 0x25811cu;
    // NOP
label_258120:
    // 0x258120: 0x1adb  .word       0x00001ADB                   # divu        $v1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258120u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_258124:
    // 0x258124: 0x94c0  sll         $s2, $zero, 19
    ctx->pc = 0x258124u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_258128:
    // 0x258128: 0x0  nop
    ctx->pc = 0x258128u;
    // NOP
label_25812c:
    // 0x25812c: 0x0  nop
    ctx->pc = 0x25812cu;
    // NOP
label_258130:
    // 0x258130: 0x1aee  .word       0x00001AEE                   # dsub        $v1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258130u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, r); }
label_258134:
    // 0x258134: 0x90a0  .word       0x000090A0                   # add         $s2, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258134u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_258138:
    // 0x258138: 0x0  nop
    ctx->pc = 0x258138u;
    // NOP
label_25813c:
    // 0x25813c: 0x0  nop
    ctx->pc = 0x25813cu;
    // NOP
label_258140:
    // 0x258140: 0x1b01  .word       0x00001B01                   # INVALID     $zero, $zero, 0x1B01 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258140u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x258140 raw=0x00001B01");
 /* MITIGATED */
label_258144:
    // 0x258144: 0x9550  .word       0x00009550                   # mfhi        $s2 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258144u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_258148:
    // 0x258148: 0x0  nop
    ctx->pc = 0x258148u;
    // NOP
label_25814c:
    // 0x25814c: 0x0  nop
    ctx->pc = 0x25814cu;
    // NOP
label_258150:
    // 0x258150: 0x1b14  .word       0x00001B14                   # dsllv       $v1, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_258154:
    // 0x258154: 0x8970  tge         $zero, $zero, 549
    ctx->pc = 0x258154u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_258158:
    // 0x258158: 0x0  nop
    ctx->pc = 0x258158u;
    // NOP
label_25815c:
    // 0x25815c: 0x0  nop
    ctx->pc = 0x25815cu;
    // NOP
label_258160:
    // 0x258160: 0x1b26  .word       0x00001B26                   # xor         $v1, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_258164:
    // 0x258164: 0x7b20  .word       0x00007B20                   # add         $t7, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258164u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_258168:
    // 0x258168: 0x0  nop
    ctx->pc = 0x258168u;
    // NOP
label_25816c:
    // 0x25816c: 0x0  nop
    ctx->pc = 0x25816cu;
    // NOP
label_258170:
    // 0x258170: 0x1b36  tne         $zero, $zero, 108
    ctx->pc = 0x258170u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_258174:
    // 0x258174: 0x8a90  .word       0x00008A90                   # mfhi        $s1 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258174u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_258178:
    // 0x258178: 0x0  nop
    ctx->pc = 0x258178u;
    // NOP
label_25817c:
    // 0x25817c: 0x0  nop
    ctx->pc = 0x25817cu;
    // NOP
label_258180:
    // 0x258180: 0x1b48  .word       0x00001B48                   # jr          $zero # 00001B40 <InstrIdType: CPU_SPECIAL>
label_258184:
    if (ctx->pc == 0x258184u) {
        ctx->pc = 0x258184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258180u;
        // 0x258184: 0x8640  sll         $s0, $zero, 25 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258188u;
        goto label_258188;
    }
    ctx->pc = 0x258180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x258184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258180u;
        // 0x258184: 0x8640  sll         $s0, $zero, 25 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258180u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x258188u;
label_258188:
    // 0x258188: 0x0  nop
    ctx->pc = 0x258188u;
    // NOP
label_25818c:
    // 0x25818c: 0x0  nop
    ctx->pc = 0x25818cu;
    // NOP
label_258190:
    // 0x258190: 0x1b59  .word       0x00001B59                   # multu       $zero, $zero # 00001B40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258190u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_258194:
    // 0x258194: 0x95c0  sll         $s2, $zero, 23
    ctx->pc = 0x258194u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_258198:
    // 0x258198: 0x0  nop
    ctx->pc = 0x258198u;
    // NOP
label_25819c:
    // 0x25819c: 0x0  nop
    ctx->pc = 0x25819cu;
    // NOP
label_2581a0:
    // 0x2581a0: 0x1b6c  .word       0x00001B6C                   # dadd        $v1, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2581a0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, r); }
label_2581a4:
    // 0x2581a4: 0x7d20  .word       0x00007D20                   # add         $t7, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2581a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_2581a8:
    // 0x2581a8: 0x0  nop
    ctx->pc = 0x2581a8u;
    // NOP
label_2581ac:
    // 0x2581ac: 0x0  nop
    ctx->pc = 0x2581acu;
    // NOP
label_2581b0:
    // 0x2581b0: 0x1b7c  dsll32      $v1, $zero, 13
    ctx->pc = 0x2581b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) << (32 + 13));
label_2581b4:
    // 0x2581b4: 0x8970  tge         $zero, $zero, 549
    ctx->pc = 0x2581b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2581b8:
    // 0x2581b8: 0x0  nop
    ctx->pc = 0x2581b8u;
    // NOP
label_2581bc:
    // 0x2581bc: 0x0  nop
    ctx->pc = 0x2581bcu;
    // NOP
label_2581c0:
    // 0x2581c0: 0x1b8e  .word       0x00001B8E                   # INVALID     $zero, $zero, 0x1B8E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2581c0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2581C0 raw=0x00001B8E");
 /* MITIGATED */
label_2581c4:
    // 0x2581c4: 0x8820  add         $s1, $zero, $zero
    ctx->pc = 0x2581c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2581c8:
    // 0x2581c8: 0x0  nop
    ctx->pc = 0x2581c8u;
    // NOP
label_2581cc:
    // 0x2581cc: 0x0  nop
    ctx->pc = 0x2581ccu;
    // NOP
label_2581d0:
    // 0x2581d0: 0x1ba0  .word       0x00001BA0                   # add         $v1, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2581d0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2581d4:
    // 0x2581d4: 0x9270  tge         $zero, $zero, 585
    ctx->pc = 0x2581d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2581d8:
    // 0x2581d8: 0x0  nop
    ctx->pc = 0x2581d8u;
    // NOP
label_2581dc:
    // 0x2581dc: 0x0  nop
    ctx->pc = 0x2581dcu;
    // NOP
label_2581e0:
    // 0x2581e0: 0x1bb3  tltu        $zero, $zero, 110
    ctx->pc = 0x2581e0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2581e4:
    // 0x2581e4: 0xa590  .word       0x0000A590                   # mfhi        $s4 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2581e4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_2581e8:
    // 0x2581e8: 0x0  nop
    ctx->pc = 0x2581e8u;
    // NOP
label_2581ec:
    // 0x2581ec: 0x0  nop
    ctx->pc = 0x2581ecu;
    // NOP
label_2581f0:
    // 0x2581f0: 0x1bc8  .word       0x00001BC8                   # jr          $zero # 00001BC0 <InstrIdType: CPU_SPECIAL>
label_2581f4:
    if (ctx->pc == 0x2581F4u) {
        ctx->pc = 0x2581F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2581F0u;
        // 0x2581f4: 0x9090  .word       0x00009090                   # mfhi        $s2 # 00000080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 18, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2581F8u;
        goto label_2581f8;
    }
    ctx->pc = 0x2581F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2581F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2581F0u;
        // 0x2581f4: 0x9090  .word       0x00009090                   # mfhi        $s2 # 00000080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 18, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2581F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2581F8u;
label_2581f8:
    // 0x2581f8: 0x0  nop
    ctx->pc = 0x2581f8u;
    // NOP
label_2581fc:
    // 0x2581fc: 0x0  nop
    ctx->pc = 0x2581fcu;
    // NOP
label_258200:
    // 0x258200: 0x1bdb  .word       0x00001BDB                   # divu        $v1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258200u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_258204:
    // 0x258204: 0x9d90  .word       0x00009D90                   # mfhi        $s3 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258204u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_258208:
    // 0x258208: 0x0  nop
    ctx->pc = 0x258208u;
    // NOP
label_25820c:
    // 0x25820c: 0x0  nop
    ctx->pc = 0x25820cu;
    // NOP
label_258210:
    // 0x258210: 0x1bef  .word       0x00001BEF                   # dsubu       $v1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_258214:
    // 0x258214: 0x7390  .word       0x00007390                   # mfhi        $t6 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258214u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_258218:
    // 0x258218: 0x0  nop
    ctx->pc = 0x258218u;
    // NOP
label_25821c:
    // 0x25821c: 0x0  nop
    ctx->pc = 0x25821cu;
    // NOP
label_258220:
    // 0x258220: 0x1bfe  dsrl32      $v1, $zero, 15
    ctx->pc = 0x258220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) >> (32 + 15));
label_258224:
    // 0x258224: 0x8ed0  .word       0x00008ED0                   # mfhi        $s1 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258224u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_258228:
    // 0x258228: 0x0  nop
    ctx->pc = 0x258228u;
    // NOP
label_25822c:
    // 0x25822c: 0x0  nop
    ctx->pc = 0x25822cu;
    // NOP
label_258230:
    // 0x258230: 0x1c10  .word       0x00001C10                   # mfhi        $v1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258230u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_258234:
    // 0x258234: 0xb220  .word       0x0000B220                   # add         $s6, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258234u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_258238:
    // 0x258238: 0x0  nop
    ctx->pc = 0x258238u;
    // NOP
label_25823c:
    // 0x25823c: 0x0  nop
    ctx->pc = 0x25823cu;
    // NOP
label_258240:
    // 0x258240: 0x1c27  .word       0x00001C27                   # not         $v1, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258240u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_258244:
    // 0x258244: 0x8c90  .word       0x00008C90                   # mfhi        $s1 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258244u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_258248:
    // 0x258248: 0x0  nop
    ctx->pc = 0x258248u;
    // NOP
label_25824c:
    // 0x25824c: 0x0  nop
    ctx->pc = 0x25824cu;
    // NOP
label_258250:
    // 0x258250: 0x1c39  .word       0x00001C39                   # INVALID     $zero, $zero, 0x1C39 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258250u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x258250 raw=0x00001C39");
 /* MITIGATED */
label_258254:
    // 0x258254: 0x8e90  .word       0x00008E90                   # mfhi        $s1 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258254u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_258258:
    // 0x258258: 0x0  nop
    ctx->pc = 0x258258u;
    // NOP
label_25825c:
    // 0x25825c: 0x0  nop
    ctx->pc = 0x25825cu;
    // NOP
label_258260:
    // 0x258260: 0x1c4b  .word       0x00001C4B                   # movn        $v1, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258260u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_258264:
    // 0x258264: 0x85e0  .word       0x000085E0                   # add         $s0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258264u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_258268:
    // 0x258268: 0x0  nop
    ctx->pc = 0x258268u;
    // NOP
label_25826c:
    // 0x25826c: 0x0  nop
    ctx->pc = 0x25826cu;
    // NOP
label_258270:
    // 0x258270: 0x1c5c  .word       0x00001C5C                   # dmult       $zero, $zero # 00001C40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258270u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x258270 raw=0x00001C5C");
 /* MITIGATED */
label_258274:
    // 0x258274: 0x9960  .word       0x00009960                   # add         $s3, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258274u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_258278:
    // 0x258278: 0x0  nop
    ctx->pc = 0x258278u;
    // NOP
label_25827c:
    // 0x25827c: 0x0  nop
    ctx->pc = 0x25827cu;
    // NOP
label_258280:
    // 0x258280: 0x1c70  tge         $zero, $zero, 113
    ctx->pc = 0x258280u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_258284:
    // 0x258284: 0xb090  .word       0x0000B090                   # mfhi        $s6 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258284u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_258288:
    // 0x258288: 0x0  nop
    ctx->pc = 0x258288u;
    // NOP
label_25828c:
    // 0x25828c: 0x0  nop
    ctx->pc = 0x25828cu;
    // NOP
label_258290:
    // 0x258290: 0x1c87  .word       0x00001C87                   # srav        $v1, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258290u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_258294:
    // 0x258294: 0x9af0  tge         $zero, $zero, 619
    ctx->pc = 0x258294u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_258298:
    // 0x258298: 0x0  nop
    ctx->pc = 0x258298u;
    // NOP
label_25829c:
    // 0x25829c: 0x0  nop
    ctx->pc = 0x25829cu;
    // NOP
label_2582a0:
    // 0x2582a0: 0x1c9b  .word       0x00001C9B                   # divu        $v1, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2582a0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2582a4:
    // 0x2582a4: 0x9700  sll         $s2, $zero, 28
    ctx->pc = 0x2582a4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_2582a8:
    // 0x2582a8: 0x0  nop
    ctx->pc = 0x2582a8u;
    // NOP
label_2582ac:
    // 0x2582ac: 0x0  nop
    ctx->pc = 0x2582acu;
    // NOP
label_2582b0:
    // 0x2582b0: 0x1cae  .word       0x00001CAE                   # dsub        $v1, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2582b0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, r); }
label_2582b4:
    // 0x2582b4: 0xb770  tge         $zero, $zero, 733
    ctx->pc = 0x2582b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2582b8:
    // 0x2582b8: 0x0  nop
    ctx->pc = 0x2582b8u;
    // NOP
label_2582bc:
    // 0x2582bc: 0x0  nop
    ctx->pc = 0x2582bcu;
    // NOP
label_2582c0:
    // 0x2582c0: 0x1cc5  .word       0x00001CC5                   # INVALID     $zero, $zero, 0x1CC5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2582c0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2582C0 raw=0x00001CC5");
 /* MITIGATED */
label_2582c4:
    // 0x2582c4: 0xaa70  tge         $zero, $zero, 681
    ctx->pc = 0x2582c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2582c8:
    // 0x2582c8: 0x0  nop
    ctx->pc = 0x2582c8u;
    // NOP
label_2582cc:
    // 0x2582cc: 0x0  nop
    ctx->pc = 0x2582ccu;
    // NOP
label_2582d0:
    // 0x2582d0: 0x1cdb  .word       0x00001CDB                   # divu        $v1, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2582d0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2582d4:
    // 0x2582d4: 0xa440  sll         $s4, $zero, 17
    ctx->pc = 0x2582d4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_2582d8:
    // 0x2582d8: 0x0  nop
    ctx->pc = 0x2582d8u;
    // NOP
label_2582dc:
    // 0x2582dc: 0x0  nop
    ctx->pc = 0x2582dcu;
    // NOP
label_2582e0:
    // 0x2582e0: 0x1cf0  tge         $zero, $zero, 115
    ctx->pc = 0x2582e0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2582e4:
    // 0x2582e4: 0xa4a0  .word       0x0000A4A0                   # add         $s4, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2582e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_2582e8:
    // 0x2582e8: 0x0  nop
    ctx->pc = 0x2582e8u;
    // NOP
label_2582ec:
    // 0x2582ec: 0x0  nop
    ctx->pc = 0x2582ecu;
    // NOP
label_2582f0:
    // 0x2582f0: 0x1d05  .word       0x00001D05                   # INVALID     $zero, $zero, 0x1D05 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2582f0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2582F0 raw=0x00001D05");
 /* MITIGATED */
label_2582f4:
    // 0x2582f4: 0x9fc0  sll         $s3, $zero, 31
    ctx->pc = 0x2582f4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_2582f8:
    // 0x2582f8: 0x0  nop
    ctx->pc = 0x2582f8u;
    // NOP
label_2582fc:
    // 0x2582fc: 0x0  nop
    ctx->pc = 0x2582fcu;
    // NOP
label_258300:
    // 0x258300: 0x1d19  .word       0x00001D19                   # multu       $zero, $zero # 00001D00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258300u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_258304:
    // 0x258304: 0xa0c0  sll         $s4, $zero, 3
    ctx->pc = 0x258304u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_258308:
    // 0x258308: 0x0  nop
    ctx->pc = 0x258308u;
    // NOP
label_25830c:
    // 0x25830c: 0x0  nop
    ctx->pc = 0x25830cu;
    // NOP
label_258310:
    // 0x258310: 0x1d2e  .word       0x00001D2E                   # dsub        $v1, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258310u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, r); }
label_258314:
    // 0x258314: 0xa940  sll         $s5, $zero, 5
    ctx->pc = 0x258314u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_258318:
    // 0x258318: 0x0  nop
    ctx->pc = 0x258318u;
    // NOP
label_25831c:
    // 0x25831c: 0x0  nop
    ctx->pc = 0x25831cu;
    // NOP
label_258320:
    // 0x258320: 0x1d44  .word       0x00001D44                   # sllv        $v1, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258320u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_258324:
    // 0x258324: 0x9440  sll         $s2, $zero, 17
    ctx->pc = 0x258324u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_258328:
    // 0x258328: 0x0  nop
    ctx->pc = 0x258328u;
    // NOP
label_25832c:
    // 0x25832c: 0x0  nop
    ctx->pc = 0x25832cu;
    // NOP
label_258330:
    // 0x258330: 0x1d57  .word       0x00001D57                   # dsrav       $v1, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258330u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_258334:
    // 0x258334: 0xb870  tge         $zero, $zero, 737
    ctx->pc = 0x258334u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_258338:
    // 0x258338: 0x0  nop
    ctx->pc = 0x258338u;
    // NOP
label_25833c:
    // 0x25833c: 0x0  nop
    ctx->pc = 0x25833cu;
    // NOP
label_258340:
    // 0x258340: 0x1d6f  .word       0x00001D6F                   # dsubu       $v1, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_258344:
    // 0x258344: 0xa4f0  tge         $zero, $zero, 659
    ctx->pc = 0x258344u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_258348:
    // 0x258348: 0x0  nop
    ctx->pc = 0x258348u;
    // NOP
label_25834c:
    // 0x25834c: 0x0  nop
    ctx->pc = 0x25834cu;
    // NOP
label_258350:
    // 0x258350: 0x1d84  .word       0x00001D84                   # sllv        $v1, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258350u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_258354:
    // 0x258354: 0xc810  mfhi        $t9
    ctx->pc = 0x258354u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_258358:
    // 0x258358: 0x0  nop
    ctx->pc = 0x258358u;
    // NOP
label_25835c:
    // 0x25835c: 0x0  nop
    ctx->pc = 0x25835cu;
    // NOP
label_258360:
    // 0x258360: 0x1d9e  .word       0x00001D9E                   # ddiv        $v1, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258360u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x258360 raw=0x00001D9E");
 /* MITIGATED */
label_258364:
    // 0x258364: 0xa0c0  sll         $s4, $zero, 3
    ctx->pc = 0x258364u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_258368:
    // 0x258368: 0x0  nop
    ctx->pc = 0x258368u;
    // NOP
label_25836c:
    // 0x25836c: 0x0  nop
    ctx->pc = 0x25836cu;
    // NOP
label_258370:
    // 0x258370: 0x1db3  tltu        $zero, $zero, 118
    ctx->pc = 0x258370u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_258374:
    // 0x258374: 0xa200  sll         $s4, $zero, 8
    ctx->pc = 0x258374u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_258378:
    // 0x258378: 0x0  nop
    ctx->pc = 0x258378u;
    // NOP
label_25837c:
    // 0x25837c: 0x0  nop
    ctx->pc = 0x25837cu;
    // NOP
label_258380:
    // 0x258380: 0x1dc8  .word       0x00001DC8                   # jr          $zero # 00001DC0 <InstrIdType: CPU_SPECIAL>
label_258384:
    if (ctx->pc == 0x258384u) {
        ctx->pc = 0x258384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258380u;
        // 0x258384: 0xb0c0  sll         $s6, $zero, 3 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258388u;
        goto label_258388;
    }
    ctx->pc = 0x258380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x258384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258380u;
        // 0x258384: 0xb0c0  sll         $s6, $zero, 3 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258380u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x258388u;
label_258388:
    // 0x258388: 0x0  nop
    ctx->pc = 0x258388u;
    // NOP
label_25838c:
    // 0x25838c: 0x0  nop
    ctx->pc = 0x25838cu;
    // NOP
label_258390:
    // 0x258390: 0x1ddf  .word       0x00001DDF                   # ddivu       $v1, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258390u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x258390 raw=0x00001DDF");
 /* MITIGATED */
label_258394:
    // 0x258394: 0x9750  .word       0x00009750                   # mfhi        $s2 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258394u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_258398:
    // 0x258398: 0x0  nop
    ctx->pc = 0x258398u;
    // NOP
label_25839c:
    // 0x25839c: 0x0  nop
    ctx->pc = 0x25839cu;
    // NOP
label_2583a0:
    // 0x2583a0: 0x1df2  tlt         $zero, $zero, 119
    ctx->pc = 0x2583a0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2583a4:
    // 0x2583a4: 0xafc0  sll         $s5, $zero, 31
    ctx->pc = 0x2583a4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_2583a8:
    // 0x2583a8: 0x0  nop
    ctx->pc = 0x2583a8u;
    // NOP
label_2583ac:
    // 0x2583ac: 0x0  nop
    ctx->pc = 0x2583acu;
    // NOP
label_2583b0:
    // 0x2583b0: 0x1e08  .word       0x00001E08                   # jr          $zero # 00001E00 <InstrIdType: CPU_SPECIAL>
label_2583b4:
    if (ctx->pc == 0x2583B4u) {
        ctx->pc = 0x2583B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2583B0u;
        // 0x2583b4: 0x9e00  sll         $s3, $zero, 24 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2583B8u;
        goto label_2583b8;
    }
    ctx->pc = 0x2583B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2583B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2583B0u;
        // 0x2583b4: 0x9e00  sll         $s3, $zero, 24 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2583B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2583B8u;
label_2583b8:
    // 0x2583b8: 0x0  nop
    ctx->pc = 0x2583b8u;
    // NOP
label_2583bc:
    // 0x2583bc: 0x0  nop
    ctx->pc = 0x2583bcu;
    // NOP
label_2583c0:
    // 0x2583c0: 0x1e1c  .word       0x00001E1C                   # dmult       $zero, $zero # 00001E00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2583c0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2583C0 raw=0x00001E1C");
 /* MITIGATED */
label_2583c4:
    // 0x2583c4: 0x9080  sll         $s2, $zero, 2
    ctx->pc = 0x2583c4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_2583c8:
    // 0x2583c8: 0x0  nop
    ctx->pc = 0x2583c8u;
    // NOP
label_2583cc:
    // 0x2583cc: 0x0  nop
    ctx->pc = 0x2583ccu;
    // NOP
label_2583d0:
    // 0x2583d0: 0x1e2f  .word       0x00001E2F                   # dsubu       $v1, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2583d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2583d4:
    // 0x2583d4: 0xa630  tge         $zero, $zero, 664
    ctx->pc = 0x2583d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2583d8:
    // 0x2583d8: 0x0  nop
    ctx->pc = 0x2583d8u;
    // NOP
label_2583dc:
    // 0x2583dc: 0x0  nop
    ctx->pc = 0x2583dcu;
    // NOP
label_2583e0:
    // 0x2583e0: 0x1e44  .word       0x00001E44                   # sllv        $v1, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2583e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2583e4:
    // 0x2583e4: 0xa2c0  sll         $s4, $zero, 11
    ctx->pc = 0x2583e4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x258440 raw=0x00001EB9");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x258450 raw=0x00001ECE");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2584A0 raw=0x00001F35");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2584C0 raw=0x00001F5D");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x258510 raw=0x00001FC1");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x258520 raw=0x00001FD5");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x258540 raw=0x00002001");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x258550 raw=0x0000201E");
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
    ctx->pc = 0x2585a0u;
    return;
}
