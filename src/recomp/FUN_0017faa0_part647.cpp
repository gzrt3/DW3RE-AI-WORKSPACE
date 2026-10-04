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


void FUN_0017faa0_part647(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2bb180u: goto label_2bb180;
        case 0x2bb184u: goto label_2bb184;
        case 0x2bb188u: goto label_2bb188;
        case 0x2bb18cu: goto label_2bb18c;
        case 0x2bb190u: goto label_2bb190;
        case 0x2bb194u: goto label_2bb194;
        case 0x2bb198u: goto label_2bb198;
        case 0x2bb19cu: goto label_2bb19c;
        case 0x2bb1a0u: goto label_2bb1a0;
        case 0x2bb1a4u: goto label_2bb1a4;
        case 0x2bb1a8u: goto label_2bb1a8;
        case 0x2bb1acu: goto label_2bb1ac;
        case 0x2bb1b0u: goto label_2bb1b0;
        case 0x2bb1b4u: goto label_2bb1b4;
        case 0x2bb1b8u: goto label_2bb1b8;
        case 0x2bb1bcu: goto label_2bb1bc;
        case 0x2bb1c0u: goto label_2bb1c0;
        case 0x2bb1c4u: goto label_2bb1c4;
        case 0x2bb1c8u: goto label_2bb1c8;
        case 0x2bb1ccu: goto label_2bb1cc;
        case 0x2bb1d0u: goto label_2bb1d0;
        case 0x2bb1d4u: goto label_2bb1d4;
        case 0x2bb1d8u: goto label_2bb1d8;
        case 0x2bb1dcu: goto label_2bb1dc;
        case 0x2bb1e0u: goto label_2bb1e0;
        case 0x2bb1e4u: goto label_2bb1e4;
        case 0x2bb1e8u: goto label_2bb1e8;
        case 0x2bb1ecu: goto label_2bb1ec;
        case 0x2bb1f0u: goto label_2bb1f0;
        case 0x2bb1f4u: goto label_2bb1f4;
        case 0x2bb1f8u: goto label_2bb1f8;
        case 0x2bb1fcu: goto label_2bb1fc;
        case 0x2bb200u: goto label_2bb200;
        case 0x2bb204u: goto label_2bb204;
        case 0x2bb208u: goto label_2bb208;
        case 0x2bb20cu: goto label_2bb20c;
        case 0x2bb210u: goto label_2bb210;
        case 0x2bb214u: goto label_2bb214;
        case 0x2bb218u: goto label_2bb218;
        case 0x2bb21cu: goto label_2bb21c;
        case 0x2bb220u: goto label_2bb220;
        case 0x2bb224u: goto label_2bb224;
        case 0x2bb228u: goto label_2bb228;
        case 0x2bb22cu: goto label_2bb22c;
        case 0x2bb230u: goto label_2bb230;
        case 0x2bb234u: goto label_2bb234;
        case 0x2bb238u: goto label_2bb238;
        case 0x2bb23cu: goto label_2bb23c;
        case 0x2bb240u: goto label_2bb240;
        case 0x2bb244u: goto label_2bb244;
        case 0x2bb248u: goto label_2bb248;
        case 0x2bb24cu: goto label_2bb24c;
        case 0x2bb250u: goto label_2bb250;
        case 0x2bb254u: goto label_2bb254;
        case 0x2bb258u: goto label_2bb258;
        case 0x2bb25cu: goto label_2bb25c;
        case 0x2bb260u: goto label_2bb260;
        case 0x2bb264u: goto label_2bb264;
        case 0x2bb268u: goto label_2bb268;
        case 0x2bb26cu: goto label_2bb26c;
        case 0x2bb270u: goto label_2bb270;
        case 0x2bb274u: goto label_2bb274;
        case 0x2bb278u: goto label_2bb278;
        case 0x2bb27cu: goto label_2bb27c;
        case 0x2bb280u: goto label_2bb280;
        case 0x2bb284u: goto label_2bb284;
        case 0x2bb288u: goto label_2bb288;
        case 0x2bb28cu: goto label_2bb28c;
        case 0x2bb290u: goto label_2bb290;
        case 0x2bb294u: goto label_2bb294;
        case 0x2bb298u: goto label_2bb298;
        case 0x2bb29cu: goto label_2bb29c;
        case 0x2bb2a0u: goto label_2bb2a0;
        case 0x2bb2a4u: goto label_2bb2a4;
        case 0x2bb2a8u: goto label_2bb2a8;
        case 0x2bb2acu: goto label_2bb2ac;
        case 0x2bb2b0u: goto label_2bb2b0;
        case 0x2bb2b4u: goto label_2bb2b4;
        case 0x2bb2b8u: goto label_2bb2b8;
        case 0x2bb2bcu: goto label_2bb2bc;
        case 0x2bb2c0u: goto label_2bb2c0;
        case 0x2bb2c4u: goto label_2bb2c4;
        case 0x2bb2c8u: goto label_2bb2c8;
        case 0x2bb2ccu: goto label_2bb2cc;
        case 0x2bb2d0u: goto label_2bb2d0;
        case 0x2bb2d4u: goto label_2bb2d4;
        case 0x2bb2d8u: goto label_2bb2d8;
        case 0x2bb2dcu: goto label_2bb2dc;
        case 0x2bb2e0u: goto label_2bb2e0;
        case 0x2bb2e4u: goto label_2bb2e4;
        case 0x2bb2e8u: goto label_2bb2e8;
        case 0x2bb2ecu: goto label_2bb2ec;
        case 0x2bb2f0u: goto label_2bb2f0;
        case 0x2bb2f4u: goto label_2bb2f4;
        case 0x2bb2f8u: goto label_2bb2f8;
        case 0x2bb2fcu: goto label_2bb2fc;
        case 0x2bb300u: goto label_2bb300;
        case 0x2bb304u: goto label_2bb304;
        case 0x2bb308u: goto label_2bb308;
        case 0x2bb30cu: goto label_2bb30c;
        case 0x2bb310u: goto label_2bb310;
        case 0x2bb314u: goto label_2bb314;
        case 0x2bb318u: goto label_2bb318;
        case 0x2bb31cu: goto label_2bb31c;
        case 0x2bb320u: goto label_2bb320;
        case 0x2bb324u: goto label_2bb324;
        case 0x2bb328u: goto label_2bb328;
        case 0x2bb32cu: goto label_2bb32c;
        case 0x2bb330u: goto label_2bb330;
        case 0x2bb334u: goto label_2bb334;
        case 0x2bb338u: goto label_2bb338;
        case 0x2bb33cu: goto label_2bb33c;
        case 0x2bb340u: goto label_2bb340;
        case 0x2bb344u: goto label_2bb344;
        case 0x2bb348u: goto label_2bb348;
        case 0x2bb34cu: goto label_2bb34c;
        case 0x2bb350u: goto label_2bb350;
        case 0x2bb354u: goto label_2bb354;
        case 0x2bb358u: goto label_2bb358;
        case 0x2bb35cu: goto label_2bb35c;
        case 0x2bb360u: goto label_2bb360;
        case 0x2bb364u: goto label_2bb364;
        case 0x2bb368u: goto label_2bb368;
        case 0x2bb36cu: goto label_2bb36c;
        case 0x2bb370u: goto label_2bb370;
        case 0x2bb374u: goto label_2bb374;
        case 0x2bb378u: goto label_2bb378;
        case 0x2bb37cu: goto label_2bb37c;
        case 0x2bb380u: goto label_2bb380;
        case 0x2bb384u: goto label_2bb384;
        case 0x2bb388u: goto label_2bb388;
        case 0x2bb38cu: goto label_2bb38c;
        case 0x2bb390u: goto label_2bb390;
        case 0x2bb394u: goto label_2bb394;
        case 0x2bb398u: goto label_2bb398;
        case 0x2bb39cu: goto label_2bb39c;
        case 0x2bb3a0u: goto label_2bb3a0;
        case 0x2bb3a4u: goto label_2bb3a4;
        case 0x2bb3a8u: goto label_2bb3a8;
        case 0x2bb3acu: goto label_2bb3ac;
        case 0x2bb3b0u: goto label_2bb3b0;
        case 0x2bb3b4u: goto label_2bb3b4;
        case 0x2bb3b8u: goto label_2bb3b8;
        case 0x2bb3bcu: goto label_2bb3bc;
        case 0x2bb3c0u: goto label_2bb3c0;
        case 0x2bb3c4u: goto label_2bb3c4;
        case 0x2bb3c8u: goto label_2bb3c8;
        case 0x2bb3ccu: goto label_2bb3cc;
        case 0x2bb3d0u: goto label_2bb3d0;
        case 0x2bb3d4u: goto label_2bb3d4;
        case 0x2bb3d8u: goto label_2bb3d8;
        case 0x2bb3dcu: goto label_2bb3dc;
        case 0x2bb3e0u: goto label_2bb3e0;
        case 0x2bb3e4u: goto label_2bb3e4;
        case 0x2bb3e8u: goto label_2bb3e8;
        case 0x2bb3ecu: goto label_2bb3ec;
        case 0x2bb3f0u: goto label_2bb3f0;
        case 0x2bb3f4u: goto label_2bb3f4;
        case 0x2bb3f8u: goto label_2bb3f8;
        case 0x2bb3fcu: goto label_2bb3fc;
        case 0x2bb400u: goto label_2bb400;
        case 0x2bb404u: goto label_2bb404;
        case 0x2bb408u: goto label_2bb408;
        case 0x2bb40cu: goto label_2bb40c;
        case 0x2bb410u: goto label_2bb410;
        case 0x2bb414u: goto label_2bb414;
        case 0x2bb418u: goto label_2bb418;
        case 0x2bb41cu: goto label_2bb41c;
        case 0x2bb420u: goto label_2bb420;
        case 0x2bb424u: goto label_2bb424;
        case 0x2bb428u: goto label_2bb428;
        case 0x2bb42cu: goto label_2bb42c;
        case 0x2bb430u: goto label_2bb430;
        case 0x2bb434u: goto label_2bb434;
        case 0x2bb438u: goto label_2bb438;
        case 0x2bb43cu: goto label_2bb43c;
        case 0x2bb440u: goto label_2bb440;
        case 0x2bb444u: goto label_2bb444;
        case 0x2bb448u: goto label_2bb448;
        case 0x2bb44cu: goto label_2bb44c;
        case 0x2bb450u: goto label_2bb450;
        case 0x2bb454u: goto label_2bb454;
        case 0x2bb458u: goto label_2bb458;
        case 0x2bb45cu: goto label_2bb45c;
        case 0x2bb460u: goto label_2bb460;
        case 0x2bb464u: goto label_2bb464;
        case 0x2bb468u: goto label_2bb468;
        case 0x2bb46cu: goto label_2bb46c;
        case 0x2bb470u: goto label_2bb470;
        case 0x2bb474u: goto label_2bb474;
        case 0x2bb478u: goto label_2bb478;
        case 0x2bb47cu: goto label_2bb47c;
        case 0x2bb480u: goto label_2bb480;
        case 0x2bb484u: goto label_2bb484;
        case 0x2bb488u: goto label_2bb488;
        case 0x2bb48cu: goto label_2bb48c;
        case 0x2bb490u: goto label_2bb490;
        case 0x2bb494u: goto label_2bb494;
        case 0x2bb498u: goto label_2bb498;
        case 0x2bb49cu: goto label_2bb49c;
        case 0x2bb4a0u: goto label_2bb4a0;
        case 0x2bb4a4u: goto label_2bb4a4;
        case 0x2bb4a8u: goto label_2bb4a8;
        case 0x2bb4acu: goto label_2bb4ac;
        case 0x2bb4b0u: goto label_2bb4b0;
        case 0x2bb4b4u: goto label_2bb4b4;
        case 0x2bb4b8u: goto label_2bb4b8;
        case 0x2bb4bcu: goto label_2bb4bc;
        case 0x2bb4c0u: goto label_2bb4c0;
        case 0x2bb4c4u: goto label_2bb4c4;
        case 0x2bb4c8u: goto label_2bb4c8;
        case 0x2bb4ccu: goto label_2bb4cc;
        case 0x2bb4d0u: goto label_2bb4d0;
        case 0x2bb4d4u: goto label_2bb4d4;
        case 0x2bb4d8u: goto label_2bb4d8;
        case 0x2bb4dcu: goto label_2bb4dc;
        case 0x2bb4e0u: goto label_2bb4e0;
        case 0x2bb4e4u: goto label_2bb4e4;
        case 0x2bb4e8u: goto label_2bb4e8;
        case 0x2bb4ecu: goto label_2bb4ec;
        case 0x2bb4f0u: goto label_2bb4f0;
        case 0x2bb4f4u: goto label_2bb4f4;
        case 0x2bb4f8u: goto label_2bb4f8;
        case 0x2bb4fcu: goto label_2bb4fc;
        case 0x2bb500u: goto label_2bb500;
        case 0x2bb504u: goto label_2bb504;
        case 0x2bb508u: goto label_2bb508;
        case 0x2bb50cu: goto label_2bb50c;
        case 0x2bb510u: goto label_2bb510;
        case 0x2bb514u: goto label_2bb514;
        case 0x2bb518u: goto label_2bb518;
        case 0x2bb51cu: goto label_2bb51c;
        case 0x2bb520u: goto label_2bb520;
        case 0x2bb524u: goto label_2bb524;
        case 0x2bb528u: goto label_2bb528;
        case 0x2bb52cu: goto label_2bb52c;
        case 0x2bb530u: goto label_2bb530;
        case 0x2bb534u: goto label_2bb534;
        case 0x2bb538u: goto label_2bb538;
        case 0x2bb53cu: goto label_2bb53c;
        case 0x2bb540u: goto label_2bb540;
        case 0x2bb544u: goto label_2bb544;
        case 0x2bb548u: goto label_2bb548;
        case 0x2bb54cu: goto label_2bb54c;
        case 0x2bb550u: goto label_2bb550;
        case 0x2bb554u: goto label_2bb554;
        case 0x2bb558u: goto label_2bb558;
        case 0x2bb55cu: goto label_2bb55c;
        case 0x2bb560u: goto label_2bb560;
        case 0x2bb564u: goto label_2bb564;
        case 0x2bb568u: goto label_2bb568;
        case 0x2bb56cu: goto label_2bb56c;
        case 0x2bb570u: goto label_2bb570;
        case 0x2bb574u: goto label_2bb574;
        case 0x2bb578u: goto label_2bb578;
        case 0x2bb57cu: goto label_2bb57c;
        case 0x2bb580u: goto label_2bb580;
        case 0x2bb584u: goto label_2bb584;
        case 0x2bb588u: goto label_2bb588;
        case 0x2bb58cu: goto label_2bb58c;
        case 0x2bb590u: goto label_2bb590;
        case 0x2bb594u: goto label_2bb594;
        case 0x2bb598u: goto label_2bb598;
        case 0x2bb59cu: goto label_2bb59c;
        case 0x2bb5a0u: goto label_2bb5a0;
        case 0x2bb5a4u: goto label_2bb5a4;
        case 0x2bb5a8u: goto label_2bb5a8;
        case 0x2bb5acu: goto label_2bb5ac;
        case 0x2bb5b0u: goto label_2bb5b0;
        case 0x2bb5b4u: goto label_2bb5b4;
        case 0x2bb5b8u: goto label_2bb5b8;
        case 0x2bb5bcu: goto label_2bb5bc;
        case 0x2bb5c0u: goto label_2bb5c0;
        case 0x2bb5c4u: goto label_2bb5c4;
        case 0x2bb5c8u: goto label_2bb5c8;
        case 0x2bb5ccu: goto label_2bb5cc;
        case 0x2bb5d0u: goto label_2bb5d0;
        case 0x2bb5d4u: goto label_2bb5d4;
        case 0x2bb5d8u: goto label_2bb5d8;
        case 0x2bb5dcu: goto label_2bb5dc;
        case 0x2bb5e0u: goto label_2bb5e0;
        case 0x2bb5e4u: goto label_2bb5e4;
        case 0x2bb5e8u: goto label_2bb5e8;
        case 0x2bb5ecu: goto label_2bb5ec;
        case 0x2bb5f0u: goto label_2bb5f0;
        case 0x2bb5f4u: goto label_2bb5f4;
        case 0x2bb5f8u: goto label_2bb5f8;
        case 0x2bb5fcu: goto label_2bb5fc;
        case 0x2bb600u: goto label_2bb600;
        case 0x2bb604u: goto label_2bb604;
        case 0x2bb608u: goto label_2bb608;
        case 0x2bb60cu: goto label_2bb60c;
        case 0x2bb610u: goto label_2bb610;
        case 0x2bb614u: goto label_2bb614;
        case 0x2bb618u: goto label_2bb618;
        case 0x2bb61cu: goto label_2bb61c;
        case 0x2bb620u: goto label_2bb620;
        case 0x2bb624u: goto label_2bb624;
        case 0x2bb628u: goto label_2bb628;
        case 0x2bb62cu: goto label_2bb62c;
        case 0x2bb630u: goto label_2bb630;
        case 0x2bb634u: goto label_2bb634;
        case 0x2bb638u: goto label_2bb638;
        case 0x2bb63cu: goto label_2bb63c;
        case 0x2bb640u: goto label_2bb640;
        case 0x2bb644u: goto label_2bb644;
        case 0x2bb648u: goto label_2bb648;
        case 0x2bb64cu: goto label_2bb64c;
        case 0x2bb650u: goto label_2bb650;
        case 0x2bb654u: goto label_2bb654;
        case 0x2bb658u: goto label_2bb658;
        case 0x2bb65cu: goto label_2bb65c;
        case 0x2bb660u: goto label_2bb660;
        case 0x2bb664u: goto label_2bb664;
        case 0x2bb668u: goto label_2bb668;
        case 0x2bb66cu: goto label_2bb66c;
        case 0x2bb670u: goto label_2bb670;
        case 0x2bb674u: goto label_2bb674;
        case 0x2bb678u: goto label_2bb678;
        case 0x2bb67cu: goto label_2bb67c;
        case 0x2bb680u: goto label_2bb680;
        case 0x2bb684u: goto label_2bb684;
        case 0x2bb688u: goto label_2bb688;
        case 0x2bb68cu: goto label_2bb68c;
        case 0x2bb690u: goto label_2bb690;
        case 0x2bb694u: goto label_2bb694;
        case 0x2bb698u: goto label_2bb698;
        case 0x2bb69cu: goto label_2bb69c;
        case 0x2bb6a0u: goto label_2bb6a0;
        case 0x2bb6a4u: goto label_2bb6a4;
        case 0x2bb6a8u: goto label_2bb6a8;
        case 0x2bb6acu: goto label_2bb6ac;
        case 0x2bb6b0u: goto label_2bb6b0;
        case 0x2bb6b4u: goto label_2bb6b4;
        case 0x2bb6b8u: goto label_2bb6b8;
        case 0x2bb6bcu: goto label_2bb6bc;
        case 0x2bb6c0u: goto label_2bb6c0;
        case 0x2bb6c4u: goto label_2bb6c4;
        case 0x2bb6c8u: goto label_2bb6c8;
        case 0x2bb6ccu: goto label_2bb6cc;
        case 0x2bb6d0u: goto label_2bb6d0;
        case 0x2bb6d4u: goto label_2bb6d4;
        case 0x2bb6d8u: goto label_2bb6d8;
        case 0x2bb6dcu: goto label_2bb6dc;
        case 0x2bb6e0u: goto label_2bb6e0;
        case 0x2bb6e4u: goto label_2bb6e4;
        case 0x2bb6e8u: goto label_2bb6e8;
        case 0x2bb6ecu: goto label_2bb6ec;
        case 0x2bb6f0u: goto label_2bb6f0;
        case 0x2bb6f4u: goto label_2bb6f4;
        case 0x2bb6f8u: goto label_2bb6f8;
        case 0x2bb6fcu: goto label_2bb6fc;
        case 0x2bb700u: goto label_2bb700;
        case 0x2bb704u: goto label_2bb704;
        case 0x2bb708u: goto label_2bb708;
        case 0x2bb70cu: goto label_2bb70c;
        case 0x2bb710u: goto label_2bb710;
        case 0x2bb714u: goto label_2bb714;
        case 0x2bb718u: goto label_2bb718;
        case 0x2bb71cu: goto label_2bb71c;
        case 0x2bb720u: goto label_2bb720;
        case 0x2bb724u: goto label_2bb724;
        case 0x2bb728u: goto label_2bb728;
        case 0x2bb72cu: goto label_2bb72c;
        case 0x2bb730u: goto label_2bb730;
        case 0x2bb734u: goto label_2bb734;
        case 0x2bb738u: goto label_2bb738;
        case 0x2bb73cu: goto label_2bb73c;
        case 0x2bb740u: goto label_2bb740;
        case 0x2bb744u: goto label_2bb744;
        case 0x2bb748u: goto label_2bb748;
        case 0x2bb74cu: goto label_2bb74c;
        case 0x2bb750u: goto label_2bb750;
        case 0x2bb754u: goto label_2bb754;
        case 0x2bb758u: goto label_2bb758;
        case 0x2bb75cu: goto label_2bb75c;
        case 0x2bb760u: goto label_2bb760;
        case 0x2bb764u: goto label_2bb764;
        case 0x2bb768u: goto label_2bb768;
        case 0x2bb76cu: goto label_2bb76c;
        case 0x2bb770u: goto label_2bb770;
        case 0x2bb774u: goto label_2bb774;
        case 0x2bb778u: goto label_2bb778;
        case 0x2bb77cu: goto label_2bb77c;
        case 0x2bb780u: goto label_2bb780;
        case 0x2bb784u: goto label_2bb784;
        case 0x2bb788u: goto label_2bb788;
        case 0x2bb78cu: goto label_2bb78c;
        case 0x2bb790u: goto label_2bb790;
        case 0x2bb794u: goto label_2bb794;
        case 0x2bb798u: goto label_2bb798;
        case 0x2bb79cu: goto label_2bb79c;
        case 0x2bb7a0u: goto label_2bb7a0;
        case 0x2bb7a4u: goto label_2bb7a4;
        case 0x2bb7a8u: goto label_2bb7a8;
        case 0x2bb7acu: goto label_2bb7ac;
        case 0x2bb7b0u: goto label_2bb7b0;
        case 0x2bb7b4u: goto label_2bb7b4;
        case 0x2bb7b8u: goto label_2bb7b8;
        case 0x2bb7bcu: goto label_2bb7bc;
        case 0x2bb7c0u: goto label_2bb7c0;
        case 0x2bb7c4u: goto label_2bb7c4;
        case 0x2bb7c8u: goto label_2bb7c8;
        case 0x2bb7ccu: goto label_2bb7cc;
        case 0x2bb7d0u: goto label_2bb7d0;
        case 0x2bb7d4u: goto label_2bb7d4;
        case 0x2bb7d8u: goto label_2bb7d8;
        case 0x2bb7dcu: goto label_2bb7dc;
        case 0x2bb7e0u: goto label_2bb7e0;
        case 0x2bb7e4u: goto label_2bb7e4;
        case 0x2bb7e8u: goto label_2bb7e8;
        case 0x2bb7ecu: goto label_2bb7ec;
        case 0x2bb7f0u: goto label_2bb7f0;
        case 0x2bb7f4u: goto label_2bb7f4;
        case 0x2bb7f8u: goto label_2bb7f8;
        case 0x2bb7fcu: goto label_2bb7fc;
        case 0x2bb800u: goto label_2bb800;
        case 0x2bb804u: goto label_2bb804;
        case 0x2bb808u: goto label_2bb808;
        case 0x2bb80cu: goto label_2bb80c;
        case 0x2bb810u: goto label_2bb810;
        case 0x2bb814u: goto label_2bb814;
        case 0x2bb818u: goto label_2bb818;
        case 0x2bb81cu: goto label_2bb81c;
        case 0x2bb820u: goto label_2bb820;
        case 0x2bb824u: goto label_2bb824;
        case 0x2bb828u: goto label_2bb828;
        case 0x2bb82cu: goto label_2bb82c;
        case 0x2bb830u: goto label_2bb830;
        case 0x2bb834u: goto label_2bb834;
        case 0x2bb838u: goto label_2bb838;
        case 0x2bb83cu: goto label_2bb83c;
        case 0x2bb840u: goto label_2bb840;
        case 0x2bb844u: goto label_2bb844;
        case 0x2bb848u: goto label_2bb848;
        case 0x2bb84cu: goto label_2bb84c;
        case 0x2bb850u: goto label_2bb850;
        case 0x2bb854u: goto label_2bb854;
        case 0x2bb858u: goto label_2bb858;
        case 0x2bb85cu: goto label_2bb85c;
        case 0x2bb860u: goto label_2bb860;
        case 0x2bb864u: goto label_2bb864;
        case 0x2bb868u: goto label_2bb868;
        case 0x2bb86cu: goto label_2bb86c;
        case 0x2bb870u: goto label_2bb870;
        case 0x2bb874u: goto label_2bb874;
        case 0x2bb878u: goto label_2bb878;
        case 0x2bb87cu: goto label_2bb87c;
        case 0x2bb880u: goto label_2bb880;
        case 0x2bb884u: goto label_2bb884;
        case 0x2bb888u: goto label_2bb888;
        case 0x2bb88cu: goto label_2bb88c;
        case 0x2bb890u: goto label_2bb890;
        case 0x2bb894u: goto label_2bb894;
        case 0x2bb898u: goto label_2bb898;
        case 0x2bb89cu: goto label_2bb89c;
        case 0x2bb8a0u: goto label_2bb8a0;
        case 0x2bb8a4u: goto label_2bb8a4;
        case 0x2bb8a8u: goto label_2bb8a8;
        case 0x2bb8acu: goto label_2bb8ac;
        case 0x2bb8b0u: goto label_2bb8b0;
        case 0x2bb8b4u: goto label_2bb8b4;
        case 0x2bb8b8u: goto label_2bb8b8;
        case 0x2bb8bcu: goto label_2bb8bc;
        case 0x2bb8c0u: goto label_2bb8c0;
        case 0x2bb8c4u: goto label_2bb8c4;
        case 0x2bb8c8u: goto label_2bb8c8;
        case 0x2bb8ccu: goto label_2bb8cc;
        case 0x2bb8d0u: goto label_2bb8d0;
        case 0x2bb8d4u: goto label_2bb8d4;
        case 0x2bb8d8u: goto label_2bb8d8;
        case 0x2bb8dcu: goto label_2bb8dc;
        case 0x2bb8e0u: goto label_2bb8e0;
        case 0x2bb8e4u: goto label_2bb8e4;
        case 0x2bb8e8u: goto label_2bb8e8;
        case 0x2bb8ecu: goto label_2bb8ec;
        case 0x2bb8f0u: goto label_2bb8f0;
        case 0x2bb8f4u: goto label_2bb8f4;
        case 0x2bb8f8u: goto label_2bb8f8;
        case 0x2bb8fcu: goto label_2bb8fc;
        case 0x2bb900u: goto label_2bb900;
        case 0x2bb904u: goto label_2bb904;
        case 0x2bb908u: goto label_2bb908;
        case 0x2bb90cu: goto label_2bb90c;
        case 0x2bb910u: goto label_2bb910;
        case 0x2bb914u: goto label_2bb914;
        case 0x2bb918u: goto label_2bb918;
        case 0x2bb91cu: goto label_2bb91c;
        case 0x2bb920u: goto label_2bb920;
        case 0x2bb924u: goto label_2bb924;
        case 0x2bb928u: goto label_2bb928;
        case 0x2bb92cu: goto label_2bb92c;
        case 0x2bb930u: goto label_2bb930;
        case 0x2bb934u: goto label_2bb934;
        case 0x2bb938u: goto label_2bb938;
        case 0x2bb93cu: goto label_2bb93c;
        case 0x2bb940u: goto label_2bb940;
        case 0x2bb944u: goto label_2bb944;
        case 0x2bb948u: goto label_2bb948;
        case 0x2bb94cu: goto label_2bb94c;
        default: return;
    }

label_2bb180:
    // 0x2bb180: 0x52010032  beql        $s0, $at, . + 4 + (0x32 << 2)
label_2bb184:
    if (ctx->pc == 0x2BB184u) {
        ctx->pc = 0x2BB184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB180u;
        // 0x2bb184: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB188u;
        goto label_2bb188;
    }
    ctx->pc = 0x2BB180u;
    {
        const bool branch_taken_0x2bb180 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2bb180) {
            ctx->pc = 0x2BB184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB180u;
            // 0x2bb184: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB24Cu;
            goto label_2bb24c;
        }
    }
    ctx->pc = 0x2BB188u;
label_2bb188:
    // 0x2bb188: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb188u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb18c:
    // 0x2bb18c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb18cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb190:
    // 0x2bb190: 0x26ff7df7  addiu       $ra, $s7, 0x7DF7
    ctx->pc = 0x2bb190u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 32247));
label_2bb194:
    // 0x2bb194: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb194u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb198:
    // 0x2bb198: 0x5201002f  beql        $s0, $at, . + 4 + (0x2F << 2)
label_2bb19c:
    if (ctx->pc == 0x2BB19Cu) {
        ctx->pc = 0x2BB19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB198u;
        // 0x2bb19c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB1A0u;
        goto label_2bb1a0;
    }
    ctx->pc = 0x2BB198u;
    {
        const bool branch_taken_0x2bb198 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2bb198) {
            ctx->pc = 0x2BB19Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB198u;
            // 0x2bb19c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB258u;
            goto label_2bb258;
        }
    }
    ctx->pc = 0x2BB1A0u;
label_2bb1a0:
    // 0x2bb1a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb1a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb1a4:
    // 0x2bb1a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb1a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb1a8:
    // 0x2bb1a8: 0x26ffbefb  addiu       $ra, $s7, -0x4105
    ctx->pc = 0x2bb1a8u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294950651));
label_2bb1ac:
    // 0x2bb1ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb1acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb1b0:
    // 0x2bb1b0: 0x5201002c  beql        $s0, $at, . + 4 + (0x2C << 2)
label_2bb1b4:
    if (ctx->pc == 0x2BB1B4u) {
        ctx->pc = 0x2BB1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB1B0u;
        // 0x2bb1b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB1B8u;
        goto label_2bb1b8;
    }
    ctx->pc = 0x2BB1B0u;
    {
        const bool branch_taken_0x2bb1b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2bb1b0) {
            ctx->pc = 0x2BB1B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB1B0u;
            // 0x2bb1b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB264u;
            goto label_2bb264;
        }
    }
    ctx->pc = 0x2BB1B8u;
label_2bb1b8:
    // 0x2bb1b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb1b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb1bc:
    // 0x2bb1bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb1bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb1c0:
    // 0x2bb1c0: 0x26ffdf7d  addiu       $ra, $s7, -0x2083
    ctx->pc = 0x2bb1c0u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294958973));
label_2bb1c4:
    // 0x2bb1c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb1c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb1c8:
    // 0x2bb1c8: 0x52010029  beql        $s0, $at, . + 4 + (0x29 << 2)
label_2bb1cc:
    if (ctx->pc == 0x2BB1CCu) {
        ctx->pc = 0x2BB1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB1C8u;
        // 0x2bb1cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB1D0u;
        goto label_2bb1d0;
    }
    ctx->pc = 0x2BB1C8u;
    {
        const bool branch_taken_0x2bb1c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2bb1c8) {
            ctx->pc = 0x2BB1CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB1C8u;
            // 0x2bb1cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB270u;
            goto label_2bb270;
        }
    }
    ctx->pc = 0x2BB1D0u;
label_2bb1d0:
    // 0x2bb1d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb1d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb1d4:
    // 0x2bb1d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb1d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb1d8:
    // 0x2bb1d8: 0x26ffefbe  addiu       $ra, $s7, -0x1042
    ctx->pc = 0x2bb1d8u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294963134));
label_2bb1dc:
    // 0x2bb1dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb1dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb1e0:
    // 0x2bb1e0: 0x52010026  beql        $s0, $at, . + 4 + (0x26 << 2)
label_2bb1e4:
    if (ctx->pc == 0x2BB1E4u) {
        ctx->pc = 0x2BB1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB1E0u;
        // 0x2bb1e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB1E8u;
        goto label_2bb1e8;
    }
    ctx->pc = 0x2BB1E0u;
    {
        const bool branch_taken_0x2bb1e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2bb1e0) {
            ctx->pc = 0x2BB1E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB1E0u;
            // 0x2bb1e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB27Cu;
            goto label_2bb27c;
        }
    }
    ctx->pc = 0x2BB1E8u;
label_2bb1e8:
    // 0x2bb1e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb1e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb1ec:
    // 0x2bb1ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb1ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb1f0:
    // 0x2bb1f0: 0x120f7048  beq         $s0, $t7, . + 4 + (0x7048 << 2)
label_2bb1f4:
    if (ctx->pc == 0x2BB1F4u) {
        ctx->pc = 0x2BB1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB1F0u;
        // 0x2bb1f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB1F8u;
        goto label_2bb1f8;
    }
    ctx->pc = 0x2BB1F0u;
    {
        const bool branch_taken_0x2bb1f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        ctx->pc = 0x2BB1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB1F0u;
        // 0x2bb1f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb1f0) {
            ctx->pc = 0x2D7314u;
            return;
        }
    }
    ctx->pc = 0x2BB1F8u;
label_2bb1f8:
    // 0x2bb1f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb1f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb1fc:
    // 0x2bb1fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb1fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb200:
    // 0x2bb200: 0x5a00781c  blezl       $s0, . + 4 + (0x781C << 2)
label_2bb204:
    if (ctx->pc == 0x2BB204u) {
        ctx->pc = 0x2BB204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB200u;
        // 0x2bb204: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB208u;
        goto label_2bb208;
    }
    ctx->pc = 0x2BB200u;
    {
        const bool branch_taken_0x2bb200 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2bb200) {
            ctx->pc = 0x2BB204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB200u;
            // 0x2bb204: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9274u;
            return;
        }
    }
    ctx->pc = 0x2BB208u;
label_2bb208:
    // 0x2bb208: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb208u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb20c:
    // 0x2bb20c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb20cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb210:
    // 0x2bb210: 0x100f7012  beq         $zero, $t7, . + 4 + (0x7012 << 2)
label_2bb214:
    if (ctx->pc == 0x2BB214u) {
        ctx->pc = 0x2BB214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB210u;
        // 0x2bb214: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB218u;
        goto label_2bb218;
    }
    ctx->pc = 0x2BB210u;
    {
        const bool branch_taken_0x2bb210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 15));
        ctx->pc = 0x2BB214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB210u;
        // 0x2bb214: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb210) {
            ctx->pc = 0x2D725Cu;
            return;
        }
    }
    ctx->pc = 0x2BB218u;
label_2bb218:
    // 0x2bb218: 0x1f947f8  .word       0x01F947F8                   # dsll        $t0, $t9, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb218u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 25) << 31);
label_2bb21c:
    // 0x2bb21c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb21cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb220:
    // 0x2bb220: 0x1fb47fb  .word       0x01FB47FB                   # dsra        $t0, $k1, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb220u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 27) >> 31);
label_2bb224:
    // 0x2bb224: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb224u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb228:
    // 0x2bb228: 0x1fc47fe  .word       0x01FC47FE                   # dsrl32      $t0, $gp, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb228u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 28) >> (32 + 31));
label_2bb22c:
    // 0x2bb22c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb22cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb230:
    // 0x2bb230: 0x1d62ffd  .word       0x01D62FFD                   # INVALID     $t6, $s6, 0x2FFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb230u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BB230 raw=0x01D62FFD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bb234:
    // 0x2bb234: 0x1f9c93c  .word       0x01F9C93C                   # dsll32      $t9, $t9, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb234u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) << (32 + 4));
label_2bb238:
    // 0x2bb238: 0x1d72ffe  .word       0x01D72FFE                   # dsrl32      $a1, $s7, 31 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb238u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) >> (32 + 31));
label_2bb23c:
    // 0x2bb23c: 0x1fbd93c  .word       0x01FBD93C                   # dsll32      $k1, $k1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb23cu;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 27) << (32 + 4));
label_2bb240:
    // 0x2bb240: 0x1d82fff  .word       0x01D82FFF                   # dsra32      $a1, $t8, 31 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb240u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 24) >> (32 + 31));
label_2bb244:
    // 0x2bb244: 0x1fce13c  .word       0x01FCE13C                   # dsll32      $gp, $gp, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb244u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 28) << (32 + 4));
label_2bb248:
    // 0x2bb248: 0x3efc801  .word       0x03EFC801                   # INVALID     $ra, $t7, -0x37FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb248u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BB248 raw=0x03EFC801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bb24c:
    // 0x2bb24c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb24cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb250:
    // 0x2bb250: 0x3efd805  .word       0x03EFD805                   # INVALID     $ra, $t7, -0x27FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb250u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2BB250 raw=0x03EFD805"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bb254:
    // 0x2bb254: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb254u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb258:
    // 0x2bb258: 0x3efe009  .word       0x03EFE009                   # jalr        $gp, $ra # 000F0000 <InstrIdType: CPU_SPECIAL>
label_2bb25c:
    if (ctx->pc == 0x2BB25Cu) {
        ctx->pc = 0x2BB25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB258u;
        // 0x2bb25c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB260u;
        goto label_2bb260;
    }
    ctx->pc = 0x2BB258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        SET_GPR_U32(ctx, 28, 0x2BB260u);
        ctx->pc = 0x2BB25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB258u;
        // 0x2bb25c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB258u, 0x2BB260u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BB260u;
label_2bb260:
    // 0x2bb260: 0x19937fd  .word       0x019937FD                   # INVALID     $t4, $t9, 0x37FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb260u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BB260 raw=0x019937FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bb264:
    // 0x2bb264: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb264u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb268:
    // 0x2bb268: 0x19b37fe  .word       0x019B37FE                   # dsrl32      $a2, $k1, 31 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb268u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 27) >> (32 + 31));
label_2bb26c:
    // 0x2bb26c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb26cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb270:
    // 0x2bb270: 0x19c37ff  .word       0x019C37FF                   # dsra32      $a2, $gp, 31 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb270u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 28) >> (32 + 31));
label_2bb274:
    // 0x2bb274: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb274u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb278:
    // 0x2bb278: 0x3efb002  .word       0x03EFB002                   # srl         $s6, $t7, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb278u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 15), 0));
label_2bb27c:
    // 0x2bb27c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb27cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb280:
    // 0x2bb280: 0x3efb806  srlv        $s7, $t7, $ra
    ctx->pc = 0x2bb280u;
    SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 15), GPR_U32(ctx, 31) & 0x1F));
label_2bb284:
    // 0x2bb284: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb284u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb288:
    // 0x2bb288: 0x3efc00a  movz        $t8, $ra, $t7
    ctx->pc = 0x2bb288u;
    if (GPR_U64(ctx, 15) == 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 31));
label_2bb28c:
    // 0x2bb28c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb28cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb290:
    // 0x2bb290: 0x3efc803  .word       0x03EFC803                   # sra         $t9, $t7, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb290u;
    SET_GPR_S32(ctx, 25, SRA32(GPR_S32(ctx, 15), 0));
label_2bb294:
    // 0x2bb294: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb294u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb298:
    // 0x2bb298: 0x3efd807  srav        $k1, $t7, $ra
    ctx->pc = 0x2bb298u;
    SET_GPR_S32(ctx, 27, SRA32(GPR_S32(ctx, 15), GPR_U32(ctx, 31) & 0x1F));
label_2bb29c:
    // 0x2bb29c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb29cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb2a0:
    // 0x2bb2a0: 0x3efe00b  movn        $gp, $ra, $t7
    ctx->pc = 0x2bb2a0u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 28, GPR_VEC(ctx, 31));
label_2bb2a4:
    // 0x2bb2a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb2a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb2a8:
    // 0x2bb2a8: 0x3ef8000  .word       0x03EF8000                   # sll         $s0, $t7, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb2a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 15), 0));
label_2bb2ac:
    // 0x2bb2ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb2acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb2b0:
    // 0x2bb2b0: 0x3ef8804  sllv        $s1, $t7, $ra
    ctx->pc = 0x2bb2b0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 31) & 0x1F));
label_2bb2b4:
    // 0x2bb2b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb2b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb2b8:
    // 0x2bb2b8: 0x3ef9008  .word       0x03EF9008                   # jr          $ra # 000F9000 <InstrIdType: CPU_SPECIAL>
label_2bb2bc:
    if (ctx->pc == 0x2BB2BCu) {
        ctx->pc = 0x2BB2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB2B8u;
        // 0x2bb2bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB2C0u;
        goto label_2bb2c0;
    }
    ctx->pc = 0x2BB2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB2B8u;
        // 0x2bb2bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB2B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB2C0u;
label_2bb2c0:
    // 0x2bb2c0: 0x100e700c  beq         $zero, $t6, . + 4 + (0x700C << 2)
label_2bb2c4:
    if (ctx->pc == 0x2BB2C4u) {
        ctx->pc = 0x2BB2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB2C0u;
        // 0x2bb2c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB2C8u;
        goto label_2bb2c8;
    }
    ctx->pc = 0x2BB2C0u;
    {
        const bool branch_taken_0x2bb2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2BB2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB2C0u;
        // 0x2bb2c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb2c0) {
            ctx->pc = 0x2D72F4u;
            return;
        }
    }
    ctx->pc = 0x2BB2C8u;
label_2bb2c8:
    // 0x2bb2c8: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2bb2c8u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2bb2cc:
    // 0x2bb2cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb2ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb2d0:
    // 0x2bb2d0: 0xa8e080a  j           func_A382028
label_2bb2d4:
    if (ctx->pc == 0x2BB2D4u) {
        ctx->pc = 0x2BB2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB2D0u;
        // 0x2bb2d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB2D8u;
        goto label_2bb2d8;
    }
    ctx->pc = 0x2BB2D0u;
    ctx->pc = 0x2BB2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB2D0u;
    // 0x2bb2d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xA382028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA382028u, 0x2BB2D0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BB2D8u;
label_2bb2d8:
    // 0x2bb2d8: 0x40000007  .word       0x40000007                   # mfc0        $zero, Index # 00000007 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bb2d8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2bb2dc:
    // 0x2bb2dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb2dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb2e0:
    // 0x2bb2e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb2e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb2e4:
    // 0x2bb2e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb2e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb2e8:
    // 0x2bb2e8: 0x420f000a  .word       0x420F000A                   # INVALID     $s0, $t7, 0xA # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bb2e8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0xA at 0x2BB2E8 raw=0x420F000A"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bb2ec:
    // 0x2bb2ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb2ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb2f0:
    // 0x2bb2f0: 0x100e00db  beq         $zero, $t6, . + 4 + (0xDB << 2)
label_2bb2f4:
    if (ctx->pc == 0x2BB2F4u) {
        ctx->pc = 0x2BB2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB2F0u;
        // 0x2bb2f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB2F8u;
        goto label_2bb2f8;
    }
    ctx->pc = 0x2BB2F0u;
    {
        const bool branch_taken_0x2bb2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2BB2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB2F0u;
        // 0x2bb2f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb2f0) {
            ctx->pc = 0x2BB660u;
            goto label_2bb660;
        }
    }
    ctx->pc = 0x2BB2F8u;
label_2bb2f8:
    // 0x2bb2f8: 0x420f0035  .word       0x420F0035                   # INVALID     $s0, $t7, 0x35 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bb2f8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x35 at 0x2BB2F8 raw=0x420F0035"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bb2fc:
    // 0x2bb2fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb2fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb300:
    // 0x2bb300: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb300u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb304:
    // 0x2bb304: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb304u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb308:
    // 0x2bb308: 0x420f001c  .word       0x420F001C                   # INVALID     $s0, $t7, 0x1C # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bb308u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x1C at 0x2BB308 raw=0x420F001C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bb30c:
    // 0x2bb30c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb30cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb310:
    // 0x2bb310: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb310u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb314:
    // 0x2bb314: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb314u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb318:
    // 0x2bb318: 0x11e117ff  beq         $t7, $at, . + 4 + (0x17FF << 2)
label_2bb31c:
    if (ctx->pc == 0x2BB31Cu) {
        ctx->pc = 0x2BB31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB318u;
        // 0x2bb31c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB320u;
        goto label_2bb320;
    }
    ctx->pc = 0x2BB318u;
    {
        const bool branch_taken_0x2bb318 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 1));
        ctx->pc = 0x2BB31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB318u;
        // 0x2bb31c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb318) {
            ctx->pc = 0x2C1318u;
            return;
        }
    }
    ctx->pc = 0x2BB320u;
label_2bb320:
    // 0x2bb320: 0x80010872  lb          $at, 0x872($zero)
    ctx->pc = 0x2bb320u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x872u));
label_2bb324:
    // 0x2bb324: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb324u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb328:
    // 0x2bb328: 0xa213fff  j           func_884FFFC
label_2bb32c:
    if (ctx->pc == 0x2BB32Cu) {
        ctx->pc = 0x2BB32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB328u;
        // 0x2bb32c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB330u;
        goto label_2bb330;
    }
    ctx->pc = 0x2BB328u;
    ctx->pc = 0x2BB32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB328u;
    // 0x2bb32c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x884FFFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x884FFFCu, 0x2BB328u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BB330u;
label_2bb330:
    // 0x2bb330: 0x400007aa  .word       0x400007AA                   # mfc0        $zero, Index # 000007AA <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bb330u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2bb334:
    // 0x2bb334: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb334u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb338:
    // 0x2bb338: 0xa2147ff  j           func_8851FFC
label_2bb33c:
    if (ctx->pc == 0x2BB33Cu) {
        ctx->pc = 0x2BB33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB338u;
        // 0x2bb33c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB340u;
        goto label_2bb340;
    }
    ctx->pc = 0x2BB338u;
    ctx->pc = 0x2BB33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB338u;
    // 0x2bb33c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x8851FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8851FFCu, 0x2BB338u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BB340u;
label_2bb340:
    // 0x2bb340: 0x81ee837f  lb          $t6, -0x7C81($t7)
    ctx->pc = 0x2bb340u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294935423)));
label_2bb344:
    // 0x2bb344: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb344u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb348:
    // 0x2bb348: 0x81ee8b7f  lb          $t6, -0x7481($t7)
    ctx->pc = 0x2bb348u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937471)));
label_2bb34c:
    // 0x2bb34c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb34cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb350:
    // 0x2bb350: 0x81ee937f  lb          $t6, -0x6C81($t7)
    ctx->pc = 0x2bb350u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939519)));
label_2bb354:
    // 0x2bb354: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb354u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb358:
    // 0x2bb358: 0x81ee9b7f  lb          $t6, -0x6481($t7)
    ctx->pc = 0x2bb358u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294941567)));
label_2bb35c:
    // 0x2bb35c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb35cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb360:
    // 0x2bb360: 0x81eeab7f  lb          $t6, -0x5481($t7)
    ctx->pc = 0x2bb360u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945663)));
label_2bb364:
    // 0x2bb364: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb364u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb368:
    // 0x2bb368: 0x120e7001  beq         $s0, $t6, . + 4 + (0x7001 << 2)
label_2bb36c:
    if (ctx->pc == 0x2BB36Cu) {
        ctx->pc = 0x2BB36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB368u;
        // 0x2bb36c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB370u;
        goto label_2bb370;
    }
    ctx->pc = 0x2BB368u;
    {
        const bool branch_taken_0x2bb368 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x2BB36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB368u;
        // 0x2bb36c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb368) {
            ctx->pc = 0x2D7370u;
            return;
        }
    }
    ctx->pc = 0x2BB370u;
label_2bb370:
    // 0x2bb370: 0x810273ff  lb          $v0, 0x73FF($t0)
    ctx->pc = 0x2bb370u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29695)));
label_2bb374:
    // 0x2bb374: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb374u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb378:
    // 0x2bb378: 0x808373ff  lb          $v1, 0x73FF($a0)
    ctx->pc = 0x2bb378u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29695)));
label_2bb37c:
    // 0x2bb37c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb37cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb380:
    // 0x2bb380: 0x804473ff  lb          $a0, 0x73FF($v0)
    ctx->pc = 0x2bb380u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29695)));
label_2bb384:
    // 0x2bb384: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb384u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb388:
    // 0x2bb388: 0x802573ff  lb          $a1, 0x73FF($at)
    ctx->pc = 0x2bb388u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29695)));
label_2bb38c:
    // 0x2bb38c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb38cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb390:
    // 0x2bb390: 0x120e7001  beq         $s0, $t6, . + 4 + (0x7001 << 2)
label_2bb394:
    if (ctx->pc == 0x2BB394u) {
        ctx->pc = 0x2BB394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB390u;
        // 0x2bb394: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB398u;
        goto label_2bb398;
    }
    ctx->pc = 0x2BB390u;
    {
        const bool branch_taken_0x2bb390 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x2BB394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB390u;
        // 0x2bb394: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb390) {
            ctx->pc = 0x2D7398u;
            return;
        }
    }
    ctx->pc = 0x2BB398u;
label_2bb398:
    // 0x2bb398: 0x810673ff  lb          $a2, 0x73FF($t0)
    ctx->pc = 0x2bb398u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29695)));
label_2bb39c:
    // 0x2bb39c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb39cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb3a0:
    // 0x2bb3a0: 0x808773ff  lb          $a3, 0x73FF($a0)
    ctx->pc = 0x2bb3a0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29695)));
label_2bb3a4:
    // 0x2bb3a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb3a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb3a8:
    // 0x2bb3a8: 0x804873ff  lb          $t0, 0x73FF($v0)
    ctx->pc = 0x2bb3a8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29695)));
label_2bb3ac:
    // 0x2bb3ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb3acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb3b0:
    // 0x2bb3b0: 0x802973ff  lb          $t1, 0x73FF($at)
    ctx->pc = 0x2bb3b0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29695)));
label_2bb3b4:
    // 0x2bb3b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb3b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb3b8:
    // 0x2bb3b8: 0x120e7001  beq         $s0, $t6, . + 4 + (0x7001 << 2)
label_2bb3bc:
    if (ctx->pc == 0x2BB3BCu) {
        ctx->pc = 0x2BB3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB3B8u;
        // 0x2bb3bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB3C0u;
        goto label_2bb3c0;
    }
    ctx->pc = 0x2BB3B8u;
    {
        const bool branch_taken_0x2bb3b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x2BB3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB3B8u;
        // 0x2bb3bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb3b8) {
            ctx->pc = 0x2D73C0u;
            return;
        }
    }
    ctx->pc = 0x2BB3C0u;
label_2bb3c0:
    // 0x2bb3c0: 0x810a73ff  lb          $t2, 0x73FF($t0)
    ctx->pc = 0x2bb3c0u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29695)));
label_2bb3c4:
    // 0x2bb3c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb3c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb3c8:
    // 0x2bb3c8: 0x808b73ff  lb          $t3, 0x73FF($a0)
    ctx->pc = 0x2bb3c8u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29695)));
label_2bb3cc:
    // 0x2bb3cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb3ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb3d0:
    // 0x2bb3d0: 0x804c73ff  lb          $t4, 0x73FF($v0)
    ctx->pc = 0x2bb3d0u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29695)));
label_2bb3d4:
    // 0x2bb3d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb3d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb3d8:
    // 0x2bb3d8: 0x802d73ff  lb          $t5, 0x73FF($at)
    ctx->pc = 0x2bb3d8u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29695)));
label_2bb3dc:
    // 0x2bb3dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb3dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb3e0:
    // 0x2bb3e0: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2bb3e0u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2BB3E0 raw=0x48007800");
 /* MITIGATED */
label_2bb3e4:
    // 0x2bb3e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb3e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb3e8:
    // 0x2bb3e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb3e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb3ec:
    // 0x2bb3ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb3ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb3f0:
    // 0x2bb3f0: 0x800f0070  lb          $t7, 0x70($zero)
    ctx->pc = 0x2bb3f0u;
    SET_GPR_S32(ctx, 15, (int8_t)FAST_READ8(0x70u));
label_2bb3f4:
    // 0x2bb3f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb3f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb3f8:
    // 0x2bb3f8: 0x810a73fe  lb          $t2, 0x73FE($t0)
    ctx->pc = 0x2bb3f8u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29694)));
label_2bb3fc:
    // 0x2bb3fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb3fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb400:
    // 0x2bb400: 0x808b73fe  lb          $t3, 0x73FE($a0)
    ctx->pc = 0x2bb400u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29694)));
label_2bb404:
    // 0x2bb404: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb404u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb408:
    // 0x2bb408: 0x804c73fe  lb          $t4, 0x73FE($v0)
    ctx->pc = 0x2bb408u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29694)));
label_2bb40c:
    // 0x2bb40c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb40cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb410:
    // 0x2bb410: 0x802d73fe  lb          $t5, 0x73FE($at)
    ctx->pc = 0x2bb410u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29694)));
label_2bb414:
    // 0x2bb414: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb414u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb418:
    // 0x2bb418: 0x100e7001  beq         $zero, $t6, . + 4 + (0x7001 << 2)
label_2bb41c:
    if (ctx->pc == 0x2BB41Cu) {
        ctx->pc = 0x2BB41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB418u;
        // 0x2bb41c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB420u;
        goto label_2bb420;
    }
    ctx->pc = 0x2BB418u;
    {
        const bool branch_taken_0x2bb418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2BB41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB418u;
        // 0x2bb41c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb418) {
            ctx->pc = 0x2D7420u;
            return;
        }
    }
    ctx->pc = 0x2BB420u;
label_2bb420:
    // 0x2bb420: 0x810673fe  lb          $a2, 0x73FE($t0)
    ctx->pc = 0x2bb420u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29694)));
label_2bb424:
    // 0x2bb424: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb424u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb428:
    // 0x2bb428: 0x808773fe  lb          $a3, 0x73FE($a0)
    ctx->pc = 0x2bb428u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29694)));
label_2bb42c:
    // 0x2bb42c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb42cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb430:
    // 0x2bb430: 0x804873fe  lb          $t0, 0x73FE($v0)
    ctx->pc = 0x2bb430u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29694)));
label_2bb434:
    // 0x2bb434: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb434u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb438:
    // 0x2bb438: 0x802973fe  lb          $t1, 0x73FE($at)
    ctx->pc = 0x2bb438u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29694)));
label_2bb43c:
    // 0x2bb43c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb43cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb440:
    // 0x2bb440: 0x100e7001  beq         $zero, $t6, . + 4 + (0x7001 << 2)
label_2bb444:
    if (ctx->pc == 0x2BB444u) {
        ctx->pc = 0x2BB444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB440u;
        // 0x2bb444: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB448u;
        goto label_2bb448;
    }
    ctx->pc = 0x2BB440u;
    {
        const bool branch_taken_0x2bb440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2BB444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB440u;
        // 0x2bb444: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb440) {
            ctx->pc = 0x2D7448u;
            return;
        }
    }
    ctx->pc = 0x2BB448u;
label_2bb448:
    // 0x2bb448: 0x810273fe  lb          $v0, 0x73FE($t0)
    ctx->pc = 0x2bb448u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29694)));
label_2bb44c:
    // 0x2bb44c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb44cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb450:
    // 0x2bb450: 0x808373fe  lb          $v1, 0x73FE($a0)
    ctx->pc = 0x2bb450u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29694)));
label_2bb454:
    // 0x2bb454: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb454u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb458:
    // 0x2bb458: 0x804473fe  lb          $a0, 0x73FE($v0)
    ctx->pc = 0x2bb458u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29694)));
label_2bb45c:
    // 0x2bb45c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb45cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb460:
    // 0x2bb460: 0x802573fe  lb          $a1, 0x73FE($at)
    ctx->pc = 0x2bb460u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29694)));
label_2bb464:
    // 0x2bb464: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb464u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb468:
    // 0x2bb468: 0x100e7001  beq         $zero, $t6, . + 4 + (0x7001 << 2)
label_2bb46c:
    if (ctx->pc == 0x2BB46Cu) {
        ctx->pc = 0x2BB46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB468u;
        // 0x2bb46c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB470u;
        goto label_2bb470;
    }
    ctx->pc = 0x2BB468u;
    {
        const bool branch_taken_0x2bb468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2BB46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB468u;
        // 0x2bb46c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb468) {
            ctx->pc = 0x2D7470u;
            return;
        }
    }
    ctx->pc = 0x2BB470u;
label_2bb470:
    // 0x2bb470: 0x81f5737c  lb          $s5, 0x737C($t7)
    ctx->pc = 0x2bb470u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2bb474:
    // 0x2bb474: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb474u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb478:
    // 0x2bb478: 0x81f3737c  lb          $s3, 0x737C($t7)
    ctx->pc = 0x2bb478u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2bb47c:
    // 0x2bb47c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb47cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb480:
    // 0x2bb480: 0x81f2737c  lb          $s2, 0x737C($t7)
    ctx->pc = 0x2bb480u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2bb484:
    // 0x2bb484: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb484u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb488:
    // 0x2bb488: 0x81f1737c  lb          $s1, 0x737C($t7)
    ctx->pc = 0x2bb488u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2bb48c:
    // 0x2bb48c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb48cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb490:
    // 0x2bb490: 0x81f0737c  lb          $s0, 0x737C($t7)
    ctx->pc = 0x2bb490u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2bb494:
    // 0x2bb494: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb494u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb498:
    // 0x2bb498: 0x48000800  .word       0x48000800                   # INVALID     $zero, $zero, 0x800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2bb498u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2BB498 raw=0x48000800");
 /* MITIGATED */
label_2bb49c:
    // 0x2bb49c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb49cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb4a0:
    // 0x2bb4a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb4a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb4a4:
    // 0x2bb4a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb4a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb4a8:
    // 0x2bb4a8: 0x1f347f8  .word       0x01F347F8                   # dsll        $t0, $s3, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb4a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 19) << 31);
label_2bb4ac:
    // 0x2bb4ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb4acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb4b0:
    // 0x2bb4b0: 0x1f447fb  .word       0x01F447FB                   # dsra        $t0, $s4, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb4b0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 20) >> 31);
label_2bb4b4:
    // 0x2bb4b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb4b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb4b8:
    // 0x2bb4b8: 0x1f547fe  .word       0x01F547FE                   # dsrl32      $t0, $s5, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb4b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 21) >> (32 + 31));
label_2bb4bc:
    // 0x2bb4bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb4bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb4c0:
    // 0x2bb4c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb4c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb4c4:
    // 0x2bb4c4: 0x1f3993c  .word       0x01F3993C                   # dsll32      $s3, $s3, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb4c4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 4));
label_2bb4c8:
    // 0x2bb4c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb4c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb4cc:
    // 0x2bb4cc: 0x1f4a13c  .word       0x01F4A13C                   # dsll32      $s4, $s4, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb4ccu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 4));
label_2bb4d0:
    // 0x2bb4d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb4d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb4d4:
    // 0x2bb4d4: 0x1f5a93c  .word       0x01F5A93C                   # dsll32      $s5, $s5, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb4d4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 4));
label_2bb4d8:
    // 0x2bb4d8: 0x1d62ffd  .word       0x01D62FFD                   # INVALID     $t6, $s6, 0x2FFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb4d8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BB4D8 raw=0x01D62FFD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bb4dc:
    // 0x2bb4dc: 0x1e0ffd8  .word       0x01E0FFD8                   # mult        $ra, $t7, $zero # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bb4dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_2bb4e0:
    // 0x2bb4e0: 0x1d72ffe  .word       0x01D72FFE                   # dsrl32      $a1, $s7, 31 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb4e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) >> (32 + 31));
label_2bb4e4:
    // 0x2bb4e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb4e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb4e8:
    // 0x2bb4e8: 0x1d82fff  .word       0x01D82FFF                   # dsra32      $a1, $t8, 31 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb4e8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 24) >> (32 + 31));
label_2bb4ec:
    // 0x2bb4ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb4ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb4f0:
    // 0x2bb4f0: 0x19937fd  .word       0x019937FD                   # INVALID     $t4, $t9, 0x37FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb4f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BB4F0 raw=0x019937FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bb4f4:
    // 0x2bb4f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb4f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb4f8:
    // 0x2bb4f8: 0x19a37fe  .word       0x019A37FE                   # dsrl32      $a2, $k0, 31 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb4f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 26) >> (32 + 31));
label_2bb4fc:
    // 0x2bb4fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb4fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb500:
    // 0x2bb500: 0x19b37ff  .word       0x019B37FF                   # dsra32      $a2, $k1, 31 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb500u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 27) >> (32 + 31));
label_2bb504:
    // 0x2bb504: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb504u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb508:
    // 0x2bb508: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2bb508u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2bb50c:
    // 0x2bb50c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb50cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb510:
    // 0x2bb510: 0x10080066  beq         $zero, $t0, . + 4 + (0x66 << 2)
label_2bb514:
    if (ctx->pc == 0x2BB514u) {
        ctx->pc = 0x2BB514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB510u;
        // 0x2bb514: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB518u;
        goto label_2bb518;
    }
    ctx->pc = 0x2BB510u;
    {
        const bool branch_taken_0x2bb510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BB514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB510u;
        // 0x2bb514: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb510) {
            ctx->pc = 0x2BB6ACu;
            goto label_2bb6ac;
        }
    }
    ctx->pc = 0x2BB518u;
label_2bb518:
    // 0x2bb518: 0x10090086  beq         $zero, $t1, . + 4 + (0x86 << 2)
label_2bb51c:
    if (ctx->pc == 0x2BB51Cu) {
        ctx->pc = 0x2BB51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB518u;
        // 0x2bb51c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB520u;
        goto label_2bb520;
    }
    ctx->pc = 0x2BB518u;
    {
        const bool branch_taken_0x2bb518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2BB51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB518u;
        // 0x2bb51c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb518) {
            ctx->pc = 0x2BB734u;
            goto label_2bb734;
        }
    }
    ctx->pc = 0x2BB520u;
label_2bb520:
    // 0x2bb520: 0x3e89801  .word       0x03E89801                   # INVALID     $ra, $t0, -0x67FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb520u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BB520 raw=0x03E89801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bb524:
    // 0x2bb524: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb524u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb528:
    // 0x2bb528: 0x3e8a005  .word       0x03E8A005                   # INVALID     $ra, $t0, -0x5FFB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb528u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2BB528 raw=0x03E8A005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bb52c:
    // 0x2bb52c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb52cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb530:
    // 0x2bb530: 0x3e8a809  .word       0x03E8A809                   # jalr        $s5, $ra # 00080000 <InstrIdType: CPU_SPECIAL>
label_2bb534:
    if (ctx->pc == 0x2BB534u) {
        ctx->pc = 0x2BB534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB530u;
        // 0x2bb534: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB538u;
        goto label_2bb538;
    }
    ctx->pc = 0x2BB530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        SET_GPR_U32(ctx, 21, 0x2BB538u);
        ctx->pc = 0x2BB534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB530u;
        // 0x2bb534: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB530u, 0x2BB538u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BB538u;
label_2bb538:
    // 0x2bb538: 0x3e8980d  break       1000, 608
    ctx->pc = 0x2bb538u;
    runtime->handleBreak(rdram, ctx);
label_2bb53c:
    // 0x2bb53c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb53cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb540:
    // 0x2bb540: 0x3e8b002  .word       0x03E8B002                   # srl         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb540u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 8), 0));
label_2bb544:
    // 0x2bb544: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb544u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb548:
    // 0x2bb548: 0x3e8b806  srlv        $s7, $t0, $ra
    ctx->pc = 0x2bb548u;
    SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2bb54c:
    // 0x2bb54c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb54cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb550:
    // 0x2bb550: 0x3e8c00a  movz        $t8, $ra, $t0
    ctx->pc = 0x2bb550u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 31));
label_2bb554:
    // 0x2bb554: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb554u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb558:
    // 0x2bb558: 0x3e8b00e  .word       0x03E8B00E                   # INVALID     $ra, $t0, -0x4FF2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb558u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2BB558 raw=0x03E8B00E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bb55c:
    // 0x2bb55c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb55cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb560:
    // 0x2bb560: 0x3e8c803  .word       0x03E8C803                   # sra         $t9, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb560u;
    SET_GPR_S32(ctx, 25, SRA32(GPR_S32(ctx, 8), 0));
label_2bb564:
    // 0x2bb564: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb564u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb568:
    // 0x2bb568: 0x3e8d007  srav        $k0, $t0, $ra
    ctx->pc = 0x2bb568u;
    SET_GPR_S32(ctx, 26, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2bb56c:
    // 0x2bb56c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb56cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb570:
    // 0x2bb570: 0x3e8d80b  movn        $k1, $ra, $t0
    ctx->pc = 0x2bb570u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 27, GPR_VEC(ctx, 31));
label_2bb574:
    // 0x2bb574: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb574u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb578:
    // 0x2bb578: 0x0  nop
    ctx->pc = 0x2bb578u;
    // NOP
label_2bb57c:
    // 0x2bb57c: 0x4a000100  vaddx       $vf4, $vf0, $vf0x
    ctx->pc = 0x2bb57cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2bb580:
    // 0x2bb580: 0x3e8c80f  .word       0x03E8C80F                   # sync # 03E8C800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb580u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2bb584:
    // 0x2bb584: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb584u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb588:
    // 0x2bb588: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2bb588u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2bb58c:
    // 0x2bb58c: 0x81f182bc  lb          $s1, -0x7D44($t7)
    ctx->pc = 0x2bb58cu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294935228)));
label_2bb590:
    // 0x2bb590: 0x3eaaaaaa  .word       0x3EAAAAAA                   # lui         $t2, 0xAAAA # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2bb590u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)43690 << 16));
label_2bb594:
    // 0x2bb594: 0x81e09723  lb          $zero, -0x68DD($t7)
    ctx->pc = 0x2bb594u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294940451)));
label_2bb598:
    // 0x2bb598: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb598u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb59c:
    // 0x2bb59c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb59cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb5a0:
    // 0x2bb5a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb5a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb5a4:
    // 0x2bb5a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb5a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb5a8:
    // 0x2bb5a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb5a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb5ac:
    // 0x2bb5ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb5acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb5b0:
    // 0x2bb5b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb5b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb5b4:
    // 0x2bb5b4: 0x1e0e71e  .word       0x01E0E71E                   # ddiv        $gp, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb5b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2BB5B4 raw=0x01E0E71E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bb5b8:
    // 0x2bb5b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb5b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb5bc:
    // 0x2bb5bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb5bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb5c0:
    // 0x2bb5c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb5c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb5c4:
    // 0x2bb5c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb5c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb5c8:
    // 0x2bb5c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb5c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb5cc:
    // 0x2bb5cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb5ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb5d0:
    // 0x2bb5d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb5d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb5d4:
    // 0x2bb5d4: 0x1fc866c  .word       0x01FC866C                   # dadd        $s0, $t7, $gp # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb5d4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_2bb5d8:
    // 0x2bb5d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb5d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb5dc:
    // 0x2bb5dc: 0x1fc8eac  .word       0x01FC8EAC                   # dadd        $s1, $t7, $gp # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb5dcu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_2bb5e0:
    // 0x2bb5e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb5e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb5e4:
    // 0x2bb5e4: 0x1fc96ec  .word       0x01FC96EC                   # dadd        $s2, $t7, $gp # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb5e4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, r); }
label_2bb5e8:
    // 0x2bb5e8: 0x3f808312  .word       0x3F808312                   # lui         $zero, 0x8312 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2bb5e8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)33554 << 16));
label_2bb5ec:
    // 0x2bb5ec: 0x81e0e1bf  lb          $zero, -0x1E41($t7)
    ctx->pc = 0x2bb5ecu;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294959551)));
label_2bb5f0:
    // 0x2bb5f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb5f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb5f4:
    // 0x2bb5f4: 0x1e0cda3  .word       0x01E0CDA3                   # subu        $t9, $t7, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb5f4u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2bb5f8:
    // 0x2bb5f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb5f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb5fc:
    // 0x2bb5fc: 0x1e0e1bf  .word       0x01E0E1BF                   # dsra32      $gp, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb5fcu;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 6));
label_2bb600:
    // 0x2bb600: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb600u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb604:
    // 0x2bb604: 0x1e0d5e3  .word       0x01E0D5E3                   # subu        $k0, $t7, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb604u;
    SET_GPR_S32(ctx, 26, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2bb608:
    // 0x2bb608: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb608u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb60c:
    // 0x2bb60c: 0x1e0e1bf  .word       0x01E0E1BF                   # dsra32      $gp, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb60cu;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 6));
label_2bb610:
    // 0x2bb610: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb610u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb614:
    // 0x2bb614: 0x1e0de23  .word       0x01E0DE23                   # subu        $k1, $t7, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb614u;
    SET_GPR_S32(ctx, 27, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2bb618:
    // 0x2bb618: 0x437f0000  .word       0x437F0000                   # INVALID     $k1, $ra, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bb618u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x2BB618 raw=0x437F0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bb61c:
    // 0x2bb61c: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x2bb61cu;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
label_2bb620:
    // 0x2bb620: 0x3e8b000  .word       0x03E8B000                   # sll         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb620u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 8), 0));
label_2bb624:
    // 0x2bb624: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb624u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb628:
    // 0x2bb628: 0x3e8b804  sllv        $s7, $t0, $ra
    ctx->pc = 0x2bb628u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2bb62c:
    // 0x2bb62c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb62cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb630:
    // 0x2bb630: 0x3e8c008  .word       0x03E8C008                   # jr          $ra # 0008C000 <InstrIdType: CPU_SPECIAL>
label_2bb634:
    if (ctx->pc == 0x2BB634u) {
        ctx->pc = 0x2BB634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB630u;
        // 0x2bb634: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB638u;
        goto label_2bb638;
    }
    ctx->pc = 0x2BB630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB630u;
        // 0x2bb634: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB638u;
label_2bb638:
    // 0x2bb638: 0x3e8b00c  .word       0x03E8B00C                   # syscall     704 # 03E80000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb638u;
    ctx->pc = 0x2BB63Cu;
runtime->handleSyscall(rdram, ctx, 0xFA2C0u);
label_2bb63c:
    // 0x2bb63c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb63cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb640:
    // 0x2bb640: 0x800040f0  lb          $zero, 0x40F0($zero)
    ctx->pc = 0x2bb640u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x40F0u));
label_2bb644:
    // 0x2bb644: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb644u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb648:
    // 0x2bb648: 0x102d0000  beq         $at, $t5, . + 4 + (0x0 << 2)
label_2bb64c:
    if (ctx->pc == 0x2BB64Cu) {
        ctx->pc = 0x2BB64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB648u;
        // 0x2bb64c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB650u;
        goto label_2bb650;
    }
    ctx->pc = 0x2BB648u;
    {
        const bool branch_taken_0x2bb648 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 13));
        ctx->pc = 0x2BB64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB648u;
        // 0x2bb64c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb648) {
            ctx->pc = 0x2BB64Cu;
            goto label_2bb64c;
        }
    }
    ctx->pc = 0x2BB650u;
label_2bb650:
    // 0x2bb650: 0x10060020  beq         $zero, $a2, . + 4 + (0x20 << 2)
label_2bb654:
    if (ctx->pc == 0x2BB654u) {
        ctx->pc = 0x2BB654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB650u;
        // 0x2bb654: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB658u;
        goto label_2bb658;
    }
    ctx->pc = 0x2BB650u;
    {
        const bool branch_taken_0x2bb650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BB654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB650u;
        // 0x2bb654: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb650) {
            ctx->pc = 0x2BB6D4u;
            goto label_2bb6d4;
        }
    }
    ctx->pc = 0x2BB658u;
label_2bb658:
    // 0x2bb658: 0x10070002  beq         $zero, $a3, . + 4 + (0x2 << 2)
label_2bb65c:
    if (ctx->pc == 0x2BB65Cu) {
        ctx->pc = 0x2BB65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB658u;
        // 0x2bb65c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB660u;
        goto label_2bb660;
    }
    ctx->pc = 0x2BB658u;
    {
        const bool branch_taken_0x2bb658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BB65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB658u;
        // 0x2bb65c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb658) {
            ctx->pc = 0x2BB664u;
            goto label_2bb664;
        }
    }
    ctx->pc = 0x2BB660u;
label_2bb660:
    // 0x2bb660: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2bb664:
    if (ctx->pc == 0x2BB664u) {
        ctx->pc = 0x2BB664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB660u;
        // 0x2bb664: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB668u;
        goto label_2bb668;
    }
    ctx->pc = 0x2BB660u;
    {
        const bool branch_taken_0x2bb660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BB664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB660u;
        // 0x2bb664: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb660) {
            ctx->pc = 0x2C1664u;
            return;
        }
    }
    ctx->pc = 0x2BB668u;
label_2bb668:
    // 0x2bb668: 0x10091820  beq         $zero, $t1, . + 4 + (0x1820 << 2)
label_2bb66c:
    if (ctx->pc == 0x2BB66Cu) {
        ctx->pc = 0x2BB66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB668u;
        // 0x2bb66c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB670u;
        goto label_2bb670;
    }
    ctx->pc = 0x2BB668u;
    {
        const bool branch_taken_0x2bb668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2BB66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB668u;
        // 0x2bb66c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb668) {
            ctx->pc = 0x2C16ECu;
            return;
        }
    }
    ctx->pc = 0x2BB670u;
label_2bb670:
    // 0x2bb670: 0x100a0003  beq         $zero, $t2, . + 4 + (0x3 << 2)
label_2bb674:
    if (ctx->pc == 0x2BB674u) {
        ctx->pc = 0x2BB674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB670u;
        // 0x2bb674: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB678u;
        goto label_2bb678;
    }
    ctx->pc = 0x2BB670u;
    {
        const bool branch_taken_0x2bb670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 10));
        ctx->pc = 0x2BB674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB670u;
        // 0x2bb674: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb670) {
            ctx->pc = 0x2BB680u;
            goto label_2bb680;
        }
    }
    ctx->pc = 0x2BB678u;
label_2bb678:
    // 0x2bb678: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2bb67c:
    if (ctx->pc == 0x2BB67Cu) {
        ctx->pc = 0x2BB67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB678u;
        // 0x2bb67c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB680u;
        goto label_2bb680;
    }
    ctx->pc = 0x2BB678u;
    {
        const bool branch_taken_0x2bb678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BB67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB678u;
        // 0x2bb67c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb678) {
            ctx->pc = 0x2BB67Cu;
            goto label_2bb67c;
        }
    }
    ctx->pc = 0x2BB680u;
label_2bb680:
    // 0x2bb680: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb680u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb684:
    // 0x2bb684: 0x1000707  .word       0x01000707                   # srav        $zero, $zero, $t0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb684u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
label_2bb688:
    // 0x2bb688: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2bb688u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bb68c:
    // 0x2bb68c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb68cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb690:
    // 0x2bb690: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2bb690u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bb694:
    // 0x2bb694: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb694u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb698:
    // 0x2bb698: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2bb698u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bb69c:
    // 0x2bb69c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb69cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb6a0:
    // 0x2bb6a0: 0x81e5437c  lb          $a1, 0x437C($t7)
    ctx->pc = 0x2bb6a0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bb6a4:
    // 0x2bb6a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb6a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb6a8:
    // 0x2bb6a8: 0x42020097  .word       0x42020097                   # INVALID     $s0, $v0, 0x97 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bb6a8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x17 at 0x2BB6A8 raw=0x42020097"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bb6ac:
    // 0x2bb6ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb6acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb6b0:
    // 0x2bb6b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb6b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb6b4:
    // 0x2bb6b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb6b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb6b8:
    // 0x2bb6b8: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2bb6bc:
    if (ctx->pc == 0x2BB6BCu) {
        ctx->pc = 0x2BB6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB6B8u;
        // 0x2bb6bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB6C0u;
        goto label_2bb6c0;
    }
    ctx->pc = 0x2BB6B8u;
    {
        const bool branch_taken_0x2bb6b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2BB6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB6B8u;
        // 0x2bb6bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb6b8) {
            ctx->pc = 0x2CF6C0u;
            return;
        }
    }
    ctx->pc = 0x2BB6C0u;
label_2bb6c0:
    // 0x2bb6c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb6c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb6c4:
    // 0x2bb6c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb6c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb6c8:
    // 0x2bb6c8: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2bb6cc:
    if (ctx->pc == 0x2BB6CCu) {
        ctx->pc = 0x2BB6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB6C8u;
        // 0x2bb6cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB6D0u;
        goto label_2bb6d0;
    }
    ctx->pc = 0x2BB6C8u;
    {
        const bool branch_taken_0x2bb6c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2bb6c8) {
            ctx->pc = 0x2BB6CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB6C8u;
            // 0x2bb6cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD6B8u;
            { ctx->pc = 0x2bd6b8; return; }
        }
    }
    ctx->pc = 0x2BB6D0u;
label_2bb6d0:
    // 0x2bb6d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb6d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb6d4:
    // 0x2bb6d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb6d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb6d8:
    // 0x2bb6d8: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2bb6dc:
    if (ctx->pc == 0x2BB6DCu) {
        ctx->pc = 0x2BB6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB6D8u;
        // 0x2bb6dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB6E0u;
        goto label_2bb6e0;
    }
    ctx->pc = 0x2BB6D8u;
    {
        const bool branch_taken_0x2bb6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BB6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB6D8u;
        // 0x2bb6dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb6d8) {
            ctx->pc = 0x2C175Cu;
            return;
        }
    }
    ctx->pc = 0x2BB6E0u;
label_2bb6e0:
    // 0x2bb6e0: 0x42020085  .word       0x42020085                   # INVALID     $s0, $v0, 0x85 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bb6e0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x5 at 0x2BB6E0 raw=0x42020085"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bb6e4:
    // 0x2bb6e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb6e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb6e8:
    // 0x2bb6e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb6e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb6ec:
    // 0x2bb6ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb6ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb6f0:
    // 0x2bb6f0: 0x500b0081  beql        $zero, $t3, . + 4 + (0x81 << 2)
label_2bb6f4:
    if (ctx->pc == 0x2BB6F4u) {
        ctx->pc = 0x2BB6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB6F0u;
        // 0x2bb6f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB6F8u;
        goto label_2bb6f8;
    }
    ctx->pc = 0x2BB6F0u;
    {
        const bool branch_taken_0x2bb6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2bb6f0) {
            ctx->pc = 0x2BB6F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB6F0u;
            // 0x2bb6f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB8F8u;
            goto label_2bb8f8;
        }
    }
    ctx->pc = 0x2BB6F8u;
label_2bb6f8:
    // 0x2bb6f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb6f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb6fc:
    // 0x2bb6fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb6fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb700:
    // 0x2bb700: 0x100d0080  beq         $zero, $t5, . + 4 + (0x80 << 2)
label_2bb704:
    if (ctx->pc == 0x2BB704u) {
        ctx->pc = 0x2BB704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB700u;
        // 0x2bb704: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB708u;
        goto label_2bb708;
    }
    ctx->pc = 0x2BB700u;
    {
        const bool branch_taken_0x2bb700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2BB704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB700u;
        // 0x2bb704: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb700) {
            ctx->pc = 0x2BB904u;
            goto label_2bb904;
        }
    }
    ctx->pc = 0x2BB708u;
label_2bb708:
    // 0x2bb708: 0x10060002  beq         $zero, $a2, . + 4 + (0x2 << 2)
label_2bb70c:
    if (ctx->pc == 0x2BB70Cu) {
        ctx->pc = 0x2BB70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB708u;
        // 0x2bb70c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB710u;
        goto label_2bb710;
    }
    ctx->pc = 0x2BB708u;
    {
        const bool branch_taken_0x2bb708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BB70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB708u;
        // 0x2bb70c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb708) {
            ctx->pc = 0x2BB714u;
            goto label_2bb714;
        }
    }
    ctx->pc = 0x2BB710u;
label_2bb710:
    // 0x2bb710: 0x10070000  beq         $zero, $a3, . + 4 + (0x0 << 2)
label_2bb714:
    if (ctx->pc == 0x2BB714u) {
        ctx->pc = 0x2BB714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB710u;
        // 0x2bb714: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB718u;
        goto label_2bb718;
    }
    ctx->pc = 0x2BB710u;
    {
        const bool branch_taken_0x2bb710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BB714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB710u;
        // 0x2bb714: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb710) {
            ctx->pc = 0x2BB714u;
            goto label_2bb714;
        }
    }
    ctx->pc = 0x2BB718u;
label_2bb718:
    // 0x2bb718: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2bb71c:
    if (ctx->pc == 0x2BB71Cu) {
        ctx->pc = 0x2BB71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB718u;
        // 0x2bb71c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB720u;
        goto label_2bb720;
    }
    ctx->pc = 0x2BB718u;
    {
        const bool branch_taken_0x2bb718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BB71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB718u;
        // 0x2bb71c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb718) {
            ctx->pc = 0x2C179Cu;
            return;
        }
    }
    ctx->pc = 0x2BB720u;
label_2bb720:
    // 0x2bb720: 0x10091800  beq         $zero, $t1, . + 4 + (0x1800 << 2)
label_2bb724:
    if (ctx->pc == 0x2BB724u) {
        ctx->pc = 0x2BB724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB720u;
        // 0x2bb724: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB728u;
        goto label_2bb728;
    }
    ctx->pc = 0x2BB720u;
    {
        const bool branch_taken_0x2bb720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2BB724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB720u;
        // 0x2bb724: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb720) {
            ctx->pc = 0x2C1724u;
            return;
        }
    }
    ctx->pc = 0x2BB728u;
label_2bb728:
    // 0x2bb728: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2bb728u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2bb72c:
    // 0x2bb72c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb72cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb730:
    // 0x2bb730: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2bb734:
    if (ctx->pc == 0x2BB734u) {
        ctx->pc = 0x2BB734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB730u;
        // 0x2bb734: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB738u;
        goto label_2bb738;
    }
    ctx->pc = 0x2BB730u;
    {
        const bool branch_taken_0x2bb730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BB734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB730u;
        // 0x2bb734: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb730) {
            ctx->pc = 0x2BB734u;
            goto label_2bb734;
        }
    }
    ctx->pc = 0x2BB738u;
label_2bb738:
    // 0x2bb738: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb738u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb73c:
    // 0x2bb73c: 0x1000707  .word       0x01000707                   # srav        $zero, $zero, $t0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb73cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
label_2bb740:
    // 0x2bb740: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2bb740u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bb744:
    // 0x2bb744: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb744u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb748:
    // 0x2bb748: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2bb748u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bb74c:
    // 0x2bb74c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb74cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb750:
    // 0x2bb750: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2bb750u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bb754:
    // 0x2bb754: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb754u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb758:
    // 0x2bb758: 0x81e5437c  lb          $a1, 0x437C($t7)
    ctx->pc = 0x2bb758u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bb75c:
    // 0x2bb75c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb75cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb760:
    // 0x2bb760: 0x42020080  .word       0x42020080                   # INVALID     $s0, $v0, 0x80 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bb760u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x2BB760 raw=0x42020080"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bb764:
    // 0x2bb764: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb764u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb768:
    // 0x2bb768: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb768u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb76c:
    // 0x2bb76c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb76cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb770:
    // 0x2bb770: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2bb774:
    if (ctx->pc == 0x2BB774u) {
        ctx->pc = 0x2BB774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB770u;
        // 0x2bb774: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB778u;
        goto label_2bb778;
    }
    ctx->pc = 0x2BB770u;
    {
        const bool branch_taken_0x2bb770 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2BB774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB770u;
        // 0x2bb774: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb770) {
            ctx->pc = 0x2CF778u;
            return;
        }
    }
    ctx->pc = 0x2BB778u;
label_2bb778:
    // 0x2bb778: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb778u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb77c:
    // 0x2bb77c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb77cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb780:
    // 0x2bb780: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2bb784:
    if (ctx->pc == 0x2BB784u) {
        ctx->pc = 0x2BB784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB780u;
        // 0x2bb784: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB788u;
        goto label_2bb788;
    }
    ctx->pc = 0x2BB780u;
    {
        const bool branch_taken_0x2bb780 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2bb780) {
            ctx->pc = 0x2BB784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB780u;
            // 0x2bb784: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD770u;
            { ctx->pc = 0x2bd770; return; }
        }
    }
    ctx->pc = 0x2BB788u;
label_2bb788:
    // 0x2bb788: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb788u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb78c:
    // 0x2bb78c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb78cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb790:
    // 0x2bb790: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2bb794:
    if (ctx->pc == 0x2BB794u) {
        ctx->pc = 0x2BB794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB790u;
        // 0x2bb794: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB798u;
        goto label_2bb798;
    }
    ctx->pc = 0x2BB790u;
    {
        const bool branch_taken_0x2bb790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BB794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB790u;
        // 0x2bb794: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb790) {
            ctx->pc = 0x2C1794u;
            return;
        }
    }
    ctx->pc = 0x2BB798u;
label_2bb798:
    // 0x2bb798: 0x4202006e  .word       0x4202006E                   # INVALID     $s0, $v0, 0x6E # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bb798u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x2E at 0x2BB798 raw=0x4202006E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bb79c:
    // 0x2bb79c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb79cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb7a0:
    // 0x2bb7a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb7a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb7a4:
    // 0x2bb7a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb7a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb7a8:
    // 0x2bb7a8: 0x500b006a  beql        $zero, $t3, . + 4 + (0x6A << 2)
label_2bb7ac:
    if (ctx->pc == 0x2BB7ACu) {
        ctx->pc = 0x2BB7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB7A8u;
        // 0x2bb7ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB7B0u;
        goto label_2bb7b0;
    }
    ctx->pc = 0x2BB7A8u;
    {
        const bool branch_taken_0x2bb7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2bb7a8) {
            ctx->pc = 0x2BB7ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB7A8u;
            // 0x2bb7ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB954u;
            { ctx->pc = 0x2bb954; return; }
        }
    }
    ctx->pc = 0x2BB7B0u;
label_2bb7b0:
    // 0x2bb7b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb7b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb7b4:
    // 0x2bb7b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb7b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb7b8:
    // 0x2bb7b8: 0x100d0040  beq         $zero, $t5, . + 4 + (0x40 << 2)
label_2bb7bc:
    if (ctx->pc == 0x2BB7BCu) {
        ctx->pc = 0x2BB7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB7B8u;
        // 0x2bb7bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB7C0u;
        goto label_2bb7c0;
    }
    ctx->pc = 0x2BB7B8u;
    {
        const bool branch_taken_0x2bb7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2BB7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB7B8u;
        // 0x2bb7bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb7b8) {
            ctx->pc = 0x2BB8BCu;
            goto label_2bb8bc;
        }
    }
    ctx->pc = 0x2BB7C0u;
label_2bb7c0:
    // 0x2bb7c0: 0x10060001  beq         $zero, $a2, . + 4 + (0x1 << 2)
label_2bb7c4:
    if (ctx->pc == 0x2BB7C4u) {
        ctx->pc = 0x2BB7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB7C0u;
        // 0x2bb7c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB7C8u;
        goto label_2bb7c8;
    }
    ctx->pc = 0x2BB7C0u;
    {
        const bool branch_taken_0x2bb7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BB7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB7C0u;
        // 0x2bb7c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb7c0) {
            ctx->pc = 0x2BB7C8u;
            goto label_2bb7c8;
        }
    }
    ctx->pc = 0x2BB7C8u;
label_2bb7c8:
    // 0x2bb7c8: 0x10070000  beq         $zero, $a3, . + 4 + (0x0 << 2)
label_2bb7cc:
    if (ctx->pc == 0x2BB7CCu) {
        ctx->pc = 0x2BB7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB7C8u;
        // 0x2bb7cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB7D0u;
        goto label_2bb7d0;
    }
    ctx->pc = 0x2BB7C8u;
    {
        const bool branch_taken_0x2bb7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BB7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB7C8u;
        // 0x2bb7cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb7c8) {
            ctx->pc = 0x2BB7CCu;
            goto label_2bb7cc;
        }
    }
    ctx->pc = 0x2BB7D0u;
label_2bb7d0:
    // 0x2bb7d0: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2bb7d4:
    if (ctx->pc == 0x2BB7D4u) {
        ctx->pc = 0x2BB7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB7D0u;
        // 0x2bb7d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB7D8u;
        goto label_2bb7d8;
    }
    ctx->pc = 0x2BB7D0u;
    {
        const bool branch_taken_0x2bb7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BB7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB7D0u;
        // 0x2bb7d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb7d0) {
            ctx->pc = 0x2C17D4u;
            return;
        }
    }
    ctx->pc = 0x2BB7D8u;
label_2bb7d8:
    // 0x2bb7d8: 0x10091820  beq         $zero, $t1, . + 4 + (0x1820 << 2)
label_2bb7dc:
    if (ctx->pc == 0x2BB7DCu) {
        ctx->pc = 0x2BB7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB7D8u;
        // 0x2bb7dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB7E0u;
        goto label_2bb7e0;
    }
    ctx->pc = 0x2BB7D8u;
    {
        const bool branch_taken_0x2bb7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2BB7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB7D8u;
        // 0x2bb7dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb7d8) {
            ctx->pc = 0x2C185Cu;
            return;
        }
    }
    ctx->pc = 0x2BB7E0u;
label_2bb7e0:
    // 0x2bb7e0: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2bb7e0u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2bb7e4:
    // 0x2bb7e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb7e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb7e8:
    // 0x2bb7e8: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2bb7ec:
    if (ctx->pc == 0x2BB7ECu) {
        ctx->pc = 0x2BB7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB7E8u;
        // 0x2bb7ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB7F0u;
        goto label_2bb7f0;
    }
    ctx->pc = 0x2BB7E8u;
    {
        const bool branch_taken_0x2bb7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BB7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB7E8u;
        // 0x2bb7ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb7e8) {
            ctx->pc = 0x2BB7ECu;
            goto label_2bb7ec;
        }
    }
    ctx->pc = 0x2BB7F0u;
label_2bb7f0:
    // 0x2bb7f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb7f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb7f4:
    // 0x2bb7f4: 0x1000703  .word       0x01000703                   # sra         $zero, $zero, 28 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb7f4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 28));
label_2bb7f8:
    // 0x2bb7f8: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2bb7f8u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bb7fc:
    // 0x2bb7fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb7fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb800:
    // 0x2bb800: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2bb800u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bb804:
    // 0x2bb804: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb804u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb808:
    // 0x2bb808: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2bb808u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bb80c:
    // 0x2bb80c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb80cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb810:
    // 0x2bb810: 0x81e5437c  lb          $a1, 0x437C($t7)
    ctx->pc = 0x2bb810u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bb814:
    // 0x2bb814: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb814u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb818:
    // 0x2bb818: 0x42020069  .word       0x42020069                   # INVALID     $s0, $v0, 0x69 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bb818u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x29 at 0x2BB818 raw=0x42020069"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bb81c:
    // 0x2bb81c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb81cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb820:
    // 0x2bb820: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb820u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb824:
    // 0x2bb824: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb824u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb828:
    // 0x2bb828: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2bb82c:
    if (ctx->pc == 0x2BB82Cu) {
        ctx->pc = 0x2BB82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB828u;
        // 0x2bb82c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB830u;
        goto label_2bb830;
    }
    ctx->pc = 0x2BB828u;
    {
        const bool branch_taken_0x2bb828 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2BB82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB828u;
        // 0x2bb82c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb828) {
            ctx->pc = 0x2CF830u;
            return;
        }
    }
    ctx->pc = 0x2BB830u;
label_2bb830:
    // 0x2bb830: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb830u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb834:
    // 0x2bb834: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb834u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb838:
    // 0x2bb838: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2bb83c:
    if (ctx->pc == 0x2BB83Cu) {
        ctx->pc = 0x2BB83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB838u;
        // 0x2bb83c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB840u;
        goto label_2bb840;
    }
    ctx->pc = 0x2BB838u;
    {
        const bool branch_taken_0x2bb838 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2bb838) {
            ctx->pc = 0x2BB83Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB838u;
            // 0x2bb83c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD828u;
            { ctx->pc = 0x2bd828; return; }
        }
    }
    ctx->pc = 0x2BB840u;
label_2bb840:
    // 0x2bb840: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb840u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb844:
    // 0x2bb844: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb844u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb848:
    // 0x2bb848: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2bb84c:
    if (ctx->pc == 0x2BB84Cu) {
        ctx->pc = 0x2BB84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB848u;
        // 0x2bb84c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB850u;
        goto label_2bb850;
    }
    ctx->pc = 0x2BB848u;
    {
        const bool branch_taken_0x2bb848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BB84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB848u;
        // 0x2bb84c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb848) {
            ctx->pc = 0x2C18CCu;
            return;
        }
    }
    ctx->pc = 0x2BB850u;
label_2bb850:
    // 0x2bb850: 0x42020057  .word       0x42020057                   # INVALID     $s0, $v0, 0x57 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bb850u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x17 at 0x2BB850 raw=0x42020057"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bb854:
    // 0x2bb854: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb854u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb858:
    // 0x2bb858: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb858u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb85c:
    // 0x2bb85c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb85cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb860:
    // 0x2bb860: 0x500b0053  beql        $zero, $t3, . + 4 + (0x53 << 2)
label_2bb864:
    if (ctx->pc == 0x2BB864u) {
        ctx->pc = 0x2BB864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB860u;
        // 0x2bb864: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB868u;
        goto label_2bb868;
    }
    ctx->pc = 0x2BB860u;
    {
        const bool branch_taken_0x2bb860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2bb860) {
            ctx->pc = 0x2BB864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB860u;
            // 0x2bb864: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB9B0u;
            { ctx->pc = 0x2bb9b0; return; }
        }
    }
    ctx->pc = 0x2BB868u;
label_2bb868:
    // 0x2bb868: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb868u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb86c:
    // 0x2bb86c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb86cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb870:
    // 0x2bb870: 0x100d0200  beq         $zero, $t5, . + 4 + (0x200 << 2)
label_2bb874:
    if (ctx->pc == 0x2BB874u) {
        ctx->pc = 0x2BB874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB870u;
        // 0x2bb874: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB878u;
        goto label_2bb878;
    }
    ctx->pc = 0x2BB870u;
    {
        const bool branch_taken_0x2bb870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2BB874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB870u;
        // 0x2bb874: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb870) {
            ctx->pc = 0x2BC074u;
            { ctx->pc = 0x2bc074; return; }
        }
    }
    ctx->pc = 0x2BB878u;
label_2bb878:
    // 0x2bb878: 0x10060008  beq         $zero, $a2, . + 4 + (0x8 << 2)
label_2bb87c:
    if (ctx->pc == 0x2BB87Cu) {
        ctx->pc = 0x2BB87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB878u;
        // 0x2bb87c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB880u;
        goto label_2bb880;
    }
    ctx->pc = 0x2BB878u;
    {
        const bool branch_taken_0x2bb878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BB87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB878u;
        // 0x2bb87c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb878) {
            ctx->pc = 0x2BB89Cu;
            goto label_2bb89c;
        }
    }
    ctx->pc = 0x2BB880u;
label_2bb880:
    // 0x2bb880: 0x10070001  beq         $zero, $a3, . + 4 + (0x1 << 2)
label_2bb884:
    if (ctx->pc == 0x2BB884u) {
        ctx->pc = 0x2BB884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB880u;
        // 0x2bb884: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB888u;
        goto label_2bb888;
    }
    ctx->pc = 0x2BB880u;
    {
        const bool branch_taken_0x2bb880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BB884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB880u;
        // 0x2bb884: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb880) {
            ctx->pc = 0x2BB888u;
            goto label_2bb888;
        }
    }
    ctx->pc = 0x2BB888u;
label_2bb888:
    // 0x2bb888: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2bb88c:
    if (ctx->pc == 0x2BB88Cu) {
        ctx->pc = 0x2BB88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB888u;
        // 0x2bb88c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB890u;
        goto label_2bb890;
    }
    ctx->pc = 0x2BB888u;
    {
        const bool branch_taken_0x2bb888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BB88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB888u;
        // 0x2bb88c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb888) {
            ctx->pc = 0x2C190Cu;
            return;
        }
    }
    ctx->pc = 0x2BB890u;
label_2bb890:
    // 0x2bb890: 0x10091800  beq         $zero, $t1, . + 4 + (0x1800 << 2)
label_2bb894:
    if (ctx->pc == 0x2BB894u) {
        ctx->pc = 0x2BB894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB890u;
        // 0x2bb894: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB898u;
        goto label_2bb898;
    }
    ctx->pc = 0x2BB890u;
    {
        const bool branch_taken_0x2bb890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2BB894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB890u;
        // 0x2bb894: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb890) {
            ctx->pc = 0x2C1894u;
            return;
        }
    }
    ctx->pc = 0x2BB898u;
label_2bb898:
    // 0x2bb898: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2bb898u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2bb89c:
    // 0x2bb89c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb89cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb8a0:
    // 0x2bb8a0: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2bb8a4:
    if (ctx->pc == 0x2BB8A4u) {
        ctx->pc = 0x2BB8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB8A0u;
        // 0x2bb8a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB8A8u;
        goto label_2bb8a8;
    }
    ctx->pc = 0x2BB8A0u;
    {
        const bool branch_taken_0x2bb8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BB8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB8A0u;
        // 0x2bb8a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb8a0) {
            ctx->pc = 0x2BB8A4u;
            goto label_2bb8a4;
        }
    }
    ctx->pc = 0x2BB8A8u;
label_2bb8a8:
    // 0x2bb8a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb8a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb8ac:
    // 0x2bb8ac: 0x1000707  .word       0x01000707                   # srav        $zero, $zero, $t0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb8acu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
label_2bb8b0:
    // 0x2bb8b0: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2bb8b0u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bb8b4:
    // 0x2bb8b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb8b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb8b8:
    // 0x2bb8b8: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2bb8b8u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bb8bc:
    // 0x2bb8bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb8bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb8c0:
    // 0x2bb8c0: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2bb8c0u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bb8c4:
    // 0x2bb8c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb8c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb8c8:
    // 0x2bb8c8: 0x81e5437c  lb          $a1, 0x437C($t7)
    ctx->pc = 0x2bb8c8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bb8cc:
    // 0x2bb8cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb8ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb8d0:
    // 0x2bb8d0: 0x42020052  .word       0x42020052                   # INVALID     $s0, $v0, 0x52 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bb8d0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x12 at 0x2BB8D0 raw=0x42020052"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bb8d4:
    // 0x2bb8d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb8d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb8d8:
    // 0x2bb8d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb8d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb8dc:
    // 0x2bb8dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb8dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb8e0:
    // 0x2bb8e0: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2bb8e4:
    if (ctx->pc == 0x2BB8E4u) {
        ctx->pc = 0x2BB8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB8E0u;
        // 0x2bb8e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB8E8u;
        goto label_2bb8e8;
    }
    ctx->pc = 0x2BB8E0u;
    {
        const bool branch_taken_0x2bb8e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2BB8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB8E0u;
        // 0x2bb8e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb8e0) {
            ctx->pc = 0x2CF8E8u;
            return;
        }
    }
    ctx->pc = 0x2BB8E8u;
label_2bb8e8:
    // 0x2bb8e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb8e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb8ec:
    // 0x2bb8ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb8ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb8f0:
    // 0x2bb8f0: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2bb8f4:
    if (ctx->pc == 0x2BB8F4u) {
        ctx->pc = 0x2BB8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB8F0u;
        // 0x2bb8f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB8F8u;
        goto label_2bb8f8;
    }
    ctx->pc = 0x2BB8F0u;
    {
        const bool branch_taken_0x2bb8f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2bb8f0) {
            ctx->pc = 0x2BB8F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB8F0u;
            // 0x2bb8f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD8E0u;
            { ctx->pc = 0x2bd8e0; return; }
        }
    }
    ctx->pc = 0x2BB8F8u;
label_2bb8f8:
    // 0x2bb8f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb8f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb8fc:
    // 0x2bb8fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb8fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb900:
    // 0x2bb900: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2bb904:
    if (ctx->pc == 0x2BB904u) {
        ctx->pc = 0x2BB904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB900u;
        // 0x2bb904: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB908u;
        goto label_2bb908;
    }
    ctx->pc = 0x2BB900u;
    {
        const bool branch_taken_0x2bb900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BB904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB900u;
        // 0x2bb904: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb900) {
            ctx->pc = 0x2C1904u;
            return;
        }
    }
    ctx->pc = 0x2BB908u;
label_2bb908:
    // 0x2bb908: 0x42020040  .word       0x42020040                   # INVALID     $s0, $v0, 0x40 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bb908u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x2BB908 raw=0x42020040"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bb90c:
    // 0x2bb90c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb90cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb910:
    // 0x2bb910: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb910u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb914:
    // 0x2bb914: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb914u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb918:
    // 0x2bb918: 0x500b003c  beql        $zero, $t3, . + 4 + (0x3C << 2)
label_2bb91c:
    if (ctx->pc == 0x2BB91Cu) {
        ctx->pc = 0x2BB91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB918u;
        // 0x2bb91c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB920u;
        goto label_2bb920;
    }
    ctx->pc = 0x2BB918u;
    {
        const bool branch_taken_0x2bb918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2bb918) {
            ctx->pc = 0x2BB91Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB918u;
            // 0x2bb91c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BBA0Cu;
            { ctx->pc = 0x2bba0c; return; }
        }
    }
    ctx->pc = 0x2BB920u;
label_2bb920:
    // 0x2bb920: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb920u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb924:
    // 0x2bb924: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb924u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb928:
    // 0x2bb928: 0x100d0100  beq         $zero, $t5, . + 4 + (0x100 << 2)
label_2bb92c:
    if (ctx->pc == 0x2BB92Cu) {
        ctx->pc = 0x2BB92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB928u;
        // 0x2bb92c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB930u;
        goto label_2bb930;
    }
    ctx->pc = 0x2BB928u;
    {
        const bool branch_taken_0x2bb928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2BB92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB928u;
        // 0x2bb92c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb928) {
            ctx->pc = 0x2BBD2Cu;
            { ctx->pc = 0x2bbd2c; return; }
        }
    }
    ctx->pc = 0x2BB930u;
label_2bb930:
    // 0x2bb930: 0x10060004  beq         $zero, $a2, . + 4 + (0x4 << 2)
label_2bb934:
    if (ctx->pc == 0x2BB934u) {
        ctx->pc = 0x2BB934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB930u;
        // 0x2bb934: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB938u;
        goto label_2bb938;
    }
    ctx->pc = 0x2BB930u;
    {
        const bool branch_taken_0x2bb930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BB934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB930u;
        // 0x2bb934: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb930) {
            ctx->pc = 0x2BB944u;
            goto label_2bb944;
        }
    }
    ctx->pc = 0x2BB938u;
label_2bb938:
    // 0x2bb938: 0x10070001  beq         $zero, $a3, . + 4 + (0x1 << 2)
label_2bb93c:
    if (ctx->pc == 0x2BB93Cu) {
        ctx->pc = 0x2BB93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB938u;
        // 0x2bb93c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB940u;
        goto label_2bb940;
    }
    ctx->pc = 0x2BB938u;
    {
        const bool branch_taken_0x2bb938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BB93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB938u;
        // 0x2bb93c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb938) {
            ctx->pc = 0x2BB940u;
            goto label_2bb940;
        }
    }
    ctx->pc = 0x2BB940u;
label_2bb940:
    // 0x2bb940: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2bb944:
    if (ctx->pc == 0x2BB944u) {
        ctx->pc = 0x2BB944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB940u;
        // 0x2bb944: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB948u;
        goto label_2bb948;
    }
    ctx->pc = 0x2BB940u;
    {
        const bool branch_taken_0x2bb940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BB944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB940u;
        // 0x2bb944: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb940) {
            ctx->pc = 0x2C1944u;
            return;
        }
    }
    ctx->pc = 0x2BB948u;
label_2bb948:
    // 0x2bb948: 0x10091820  beq         $zero, $t1, . + 4 + (0x1820 << 2)
label_2bb94c:
    if (ctx->pc == 0x2BB94Cu) {
        ctx->pc = 0x2BB94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB948u;
        // 0x2bb94c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB950u;
        { ctx->pc = 0x2bb950; return; }
    }
    ctx->pc = 0x2BB948u;
    {
        const bool branch_taken_0x2bb948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2BB94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB948u;
        // 0x2bb94c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb948) {
            ctx->pc = 0x2C19CCu;
            return;
        }
    }
    ctx->pc = 0x2BB950u;
    ctx->pc = 0x2bb950u;
    return;
}
