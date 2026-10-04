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

// Function: FUN_0019b618
// Address: 0x19b618 - 0x29b620
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b618_part66(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1bb1e8u: goto label_1bb1e8;
        case 0x1bb1ecu: goto label_1bb1ec;
        case 0x1bb1f0u: goto label_1bb1f0;
        case 0x1bb1f4u: goto label_1bb1f4;
        case 0x1bb1f8u: goto label_1bb1f8;
        case 0x1bb1fcu: goto label_1bb1fc;
        case 0x1bb200u: goto label_1bb200;
        case 0x1bb204u: goto label_1bb204;
        case 0x1bb208u: goto label_1bb208;
        case 0x1bb20cu: goto label_1bb20c;
        case 0x1bb210u: goto label_1bb210;
        case 0x1bb214u: goto label_1bb214;
        case 0x1bb218u: goto label_1bb218;
        case 0x1bb21cu: goto label_1bb21c;
        case 0x1bb220u: goto label_1bb220;
        case 0x1bb224u: goto label_1bb224;
        case 0x1bb228u: goto label_1bb228;
        case 0x1bb22cu: goto label_1bb22c;
        case 0x1bb230u: goto label_1bb230;
        case 0x1bb234u: goto label_1bb234;
        case 0x1bb238u: goto label_1bb238;
        case 0x1bb23cu: goto label_1bb23c;
        case 0x1bb240u: goto label_1bb240;
        case 0x1bb244u: goto label_1bb244;
        case 0x1bb248u: goto label_1bb248;
        case 0x1bb24cu: goto label_1bb24c;
        case 0x1bb250u: goto label_1bb250;
        case 0x1bb254u: goto label_1bb254;
        case 0x1bb258u: goto label_1bb258;
        case 0x1bb25cu: goto label_1bb25c;
        case 0x1bb260u: goto label_1bb260;
        case 0x1bb264u: goto label_1bb264;
        case 0x1bb268u: goto label_1bb268;
        case 0x1bb26cu: goto label_1bb26c;
        case 0x1bb270u: goto label_1bb270;
        case 0x1bb274u: goto label_1bb274;
        case 0x1bb278u: goto label_1bb278;
        case 0x1bb27cu: goto label_1bb27c;
        case 0x1bb280u: goto label_1bb280;
        case 0x1bb284u: goto label_1bb284;
        case 0x1bb288u: goto label_1bb288;
        case 0x1bb28cu: goto label_1bb28c;
        case 0x1bb290u: goto label_1bb290;
        case 0x1bb294u: goto label_1bb294;
        case 0x1bb298u: goto label_1bb298;
        case 0x1bb29cu: goto label_1bb29c;
        case 0x1bb2a0u: goto label_1bb2a0;
        case 0x1bb2a4u: goto label_1bb2a4;
        case 0x1bb2a8u: goto label_1bb2a8;
        case 0x1bb2acu: goto label_1bb2ac;
        case 0x1bb2b0u: goto label_1bb2b0;
        case 0x1bb2b4u: goto label_1bb2b4;
        case 0x1bb2b8u: goto label_1bb2b8;
        case 0x1bb2bcu: goto label_1bb2bc;
        case 0x1bb2c0u: goto label_1bb2c0;
        case 0x1bb2c4u: goto label_1bb2c4;
        case 0x1bb2c8u: goto label_1bb2c8;
        case 0x1bb2ccu: goto label_1bb2cc;
        case 0x1bb2d0u: goto label_1bb2d0;
        case 0x1bb2d4u: goto label_1bb2d4;
        case 0x1bb2d8u: goto label_1bb2d8;
        case 0x1bb2dcu: goto label_1bb2dc;
        case 0x1bb2e0u: goto label_1bb2e0;
        case 0x1bb2e4u: goto label_1bb2e4;
        case 0x1bb2e8u: goto label_1bb2e8;
        case 0x1bb2ecu: goto label_1bb2ec;
        case 0x1bb2f0u: goto label_1bb2f0;
        case 0x1bb2f4u: goto label_1bb2f4;
        case 0x1bb2f8u: goto label_1bb2f8;
        case 0x1bb2fcu: goto label_1bb2fc;
        case 0x1bb300u: goto label_1bb300;
        case 0x1bb304u: goto label_1bb304;
        case 0x1bb308u: goto label_1bb308;
        case 0x1bb30cu: goto label_1bb30c;
        case 0x1bb310u: goto label_1bb310;
        case 0x1bb314u: goto label_1bb314;
        case 0x1bb318u: goto label_1bb318;
        case 0x1bb31cu: goto label_1bb31c;
        case 0x1bb320u: goto label_1bb320;
        case 0x1bb324u: goto label_1bb324;
        case 0x1bb328u: goto label_1bb328;
        case 0x1bb32cu: goto label_1bb32c;
        case 0x1bb330u: goto label_1bb330;
        case 0x1bb334u: goto label_1bb334;
        case 0x1bb338u: goto label_1bb338;
        case 0x1bb33cu: goto label_1bb33c;
        case 0x1bb340u: goto label_1bb340;
        case 0x1bb344u: goto label_1bb344;
        case 0x1bb348u: goto label_1bb348;
        case 0x1bb34cu: goto label_1bb34c;
        case 0x1bb350u: goto label_1bb350;
        case 0x1bb354u: goto label_1bb354;
        case 0x1bb358u: goto label_1bb358;
        case 0x1bb35cu: goto label_1bb35c;
        case 0x1bb360u: goto label_1bb360;
        case 0x1bb364u: goto label_1bb364;
        case 0x1bb368u: goto label_1bb368;
        case 0x1bb36cu: goto label_1bb36c;
        case 0x1bb370u: goto label_1bb370;
        case 0x1bb374u: goto label_1bb374;
        case 0x1bb378u: goto label_1bb378;
        case 0x1bb37cu: goto label_1bb37c;
        case 0x1bb380u: goto label_1bb380;
        case 0x1bb384u: goto label_1bb384;
        case 0x1bb388u: goto label_1bb388;
        case 0x1bb38cu: goto label_1bb38c;
        case 0x1bb390u: goto label_1bb390;
        case 0x1bb394u: goto label_1bb394;
        case 0x1bb398u: goto label_1bb398;
        case 0x1bb39cu: goto label_1bb39c;
        case 0x1bb3a0u: goto label_1bb3a0;
        case 0x1bb3a4u: goto label_1bb3a4;
        case 0x1bb3a8u: goto label_1bb3a8;
        case 0x1bb3acu: goto label_1bb3ac;
        case 0x1bb3b0u: goto label_1bb3b0;
        case 0x1bb3b4u: goto label_1bb3b4;
        case 0x1bb3b8u: goto label_1bb3b8;
        case 0x1bb3bcu: goto label_1bb3bc;
        case 0x1bb3c0u: goto label_1bb3c0;
        case 0x1bb3c4u: goto label_1bb3c4;
        case 0x1bb3c8u: goto label_1bb3c8;
        case 0x1bb3ccu: goto label_1bb3cc;
        case 0x1bb3d0u: goto label_1bb3d0;
        case 0x1bb3d4u: goto label_1bb3d4;
        case 0x1bb3d8u: goto label_1bb3d8;
        case 0x1bb3dcu: goto label_1bb3dc;
        case 0x1bb3e0u: goto label_1bb3e0;
        case 0x1bb3e4u: goto label_1bb3e4;
        case 0x1bb3e8u: goto label_1bb3e8;
        case 0x1bb3ecu: goto label_1bb3ec;
        case 0x1bb3f0u: goto label_1bb3f0;
        case 0x1bb3f4u: goto label_1bb3f4;
        case 0x1bb3f8u: goto label_1bb3f8;
        case 0x1bb3fcu: goto label_1bb3fc;
        case 0x1bb400u: goto label_1bb400;
        case 0x1bb404u: goto label_1bb404;
        case 0x1bb408u: goto label_1bb408;
        case 0x1bb40cu: goto label_1bb40c;
        case 0x1bb410u: goto label_1bb410;
        case 0x1bb414u: goto label_1bb414;
        case 0x1bb418u: goto label_1bb418;
        case 0x1bb41cu: goto label_1bb41c;
        case 0x1bb420u: goto label_1bb420;
        case 0x1bb424u: goto label_1bb424;
        case 0x1bb428u: goto label_1bb428;
        case 0x1bb42cu: goto label_1bb42c;
        case 0x1bb430u: goto label_1bb430;
        case 0x1bb434u: goto label_1bb434;
        case 0x1bb438u: goto label_1bb438;
        case 0x1bb43cu: goto label_1bb43c;
        case 0x1bb440u: goto label_1bb440;
        case 0x1bb444u: goto label_1bb444;
        case 0x1bb448u: goto label_1bb448;
        case 0x1bb44cu: goto label_1bb44c;
        case 0x1bb450u: goto label_1bb450;
        case 0x1bb454u: goto label_1bb454;
        case 0x1bb458u: goto label_1bb458;
        case 0x1bb45cu: goto label_1bb45c;
        case 0x1bb460u: goto label_1bb460;
        case 0x1bb464u: goto label_1bb464;
        case 0x1bb468u: goto label_1bb468;
        case 0x1bb46cu: goto label_1bb46c;
        case 0x1bb470u: goto label_1bb470;
        case 0x1bb474u: goto label_1bb474;
        case 0x1bb478u: goto label_1bb478;
        case 0x1bb47cu: goto label_1bb47c;
        case 0x1bb480u: goto label_1bb480;
        case 0x1bb484u: goto label_1bb484;
        case 0x1bb488u: goto label_1bb488;
        case 0x1bb48cu: goto label_1bb48c;
        case 0x1bb490u: goto label_1bb490;
        case 0x1bb494u: goto label_1bb494;
        case 0x1bb498u: goto label_1bb498;
        case 0x1bb49cu: goto label_1bb49c;
        case 0x1bb4a0u: goto label_1bb4a0;
        case 0x1bb4a4u: goto label_1bb4a4;
        case 0x1bb4a8u: goto label_1bb4a8;
        case 0x1bb4acu: goto label_1bb4ac;
        case 0x1bb4b0u: goto label_1bb4b0;
        case 0x1bb4b4u: goto label_1bb4b4;
        case 0x1bb4b8u: goto label_1bb4b8;
        case 0x1bb4bcu: goto label_1bb4bc;
        case 0x1bb4c0u: goto label_1bb4c0;
        case 0x1bb4c4u: goto label_1bb4c4;
        case 0x1bb4c8u: goto label_1bb4c8;
        case 0x1bb4ccu: goto label_1bb4cc;
        case 0x1bb4d0u: goto label_1bb4d0;
        case 0x1bb4d4u: goto label_1bb4d4;
        case 0x1bb4d8u: goto label_1bb4d8;
        case 0x1bb4dcu: goto label_1bb4dc;
        case 0x1bb4e0u: goto label_1bb4e0;
        case 0x1bb4e4u: goto label_1bb4e4;
        case 0x1bb4e8u: goto label_1bb4e8;
        case 0x1bb4ecu: goto label_1bb4ec;
        case 0x1bb4f0u: goto label_1bb4f0;
        case 0x1bb4f4u: goto label_1bb4f4;
        case 0x1bb4f8u: goto label_1bb4f8;
        case 0x1bb4fcu: goto label_1bb4fc;
        case 0x1bb500u: goto label_1bb500;
        case 0x1bb504u: goto label_1bb504;
        case 0x1bb508u: goto label_1bb508;
        case 0x1bb50cu: goto label_1bb50c;
        case 0x1bb510u: goto label_1bb510;
        case 0x1bb514u: goto label_1bb514;
        case 0x1bb518u: goto label_1bb518;
        case 0x1bb51cu: goto label_1bb51c;
        case 0x1bb520u: goto label_1bb520;
        case 0x1bb524u: goto label_1bb524;
        case 0x1bb528u: goto label_1bb528;
        case 0x1bb52cu: goto label_1bb52c;
        case 0x1bb530u: goto label_1bb530;
        case 0x1bb534u: goto label_1bb534;
        case 0x1bb538u: goto label_1bb538;
        case 0x1bb53cu: goto label_1bb53c;
        case 0x1bb540u: goto label_1bb540;
        case 0x1bb544u: goto label_1bb544;
        case 0x1bb548u: goto label_1bb548;
        case 0x1bb54cu: goto label_1bb54c;
        case 0x1bb550u: goto label_1bb550;
        case 0x1bb554u: goto label_1bb554;
        case 0x1bb558u: goto label_1bb558;
        case 0x1bb55cu: goto label_1bb55c;
        case 0x1bb560u: goto label_1bb560;
        case 0x1bb564u: goto label_1bb564;
        case 0x1bb568u: goto label_1bb568;
        case 0x1bb56cu: goto label_1bb56c;
        case 0x1bb570u: goto label_1bb570;
        case 0x1bb574u: goto label_1bb574;
        case 0x1bb578u: goto label_1bb578;
        case 0x1bb57cu: goto label_1bb57c;
        case 0x1bb580u: goto label_1bb580;
        case 0x1bb584u: goto label_1bb584;
        case 0x1bb588u: goto label_1bb588;
        case 0x1bb58cu: goto label_1bb58c;
        case 0x1bb590u: goto label_1bb590;
        case 0x1bb594u: goto label_1bb594;
        case 0x1bb598u: goto label_1bb598;
        case 0x1bb59cu: goto label_1bb59c;
        case 0x1bb5a0u: goto label_1bb5a0;
        case 0x1bb5a4u: goto label_1bb5a4;
        case 0x1bb5a8u: goto label_1bb5a8;
        case 0x1bb5acu: goto label_1bb5ac;
        case 0x1bb5b0u: goto label_1bb5b0;
        case 0x1bb5b4u: goto label_1bb5b4;
        case 0x1bb5b8u: goto label_1bb5b8;
        case 0x1bb5bcu: goto label_1bb5bc;
        case 0x1bb5c0u: goto label_1bb5c0;
        case 0x1bb5c4u: goto label_1bb5c4;
        case 0x1bb5c8u: goto label_1bb5c8;
        case 0x1bb5ccu: goto label_1bb5cc;
        case 0x1bb5d0u: goto label_1bb5d0;
        case 0x1bb5d4u: goto label_1bb5d4;
        case 0x1bb5d8u: goto label_1bb5d8;
        case 0x1bb5dcu: goto label_1bb5dc;
        case 0x1bb5e0u: goto label_1bb5e0;
        case 0x1bb5e4u: goto label_1bb5e4;
        case 0x1bb5e8u: goto label_1bb5e8;
        case 0x1bb5ecu: goto label_1bb5ec;
        case 0x1bb5f0u: goto label_1bb5f0;
        case 0x1bb5f4u: goto label_1bb5f4;
        case 0x1bb5f8u: goto label_1bb5f8;
        case 0x1bb5fcu: goto label_1bb5fc;
        case 0x1bb600u: goto label_1bb600;
        case 0x1bb604u: goto label_1bb604;
        case 0x1bb608u: goto label_1bb608;
        case 0x1bb60cu: goto label_1bb60c;
        case 0x1bb610u: goto label_1bb610;
        case 0x1bb614u: goto label_1bb614;
        case 0x1bb618u: goto label_1bb618;
        case 0x1bb61cu: goto label_1bb61c;
        case 0x1bb620u: goto label_1bb620;
        case 0x1bb624u: goto label_1bb624;
        case 0x1bb628u: goto label_1bb628;
        case 0x1bb62cu: goto label_1bb62c;
        case 0x1bb630u: goto label_1bb630;
        case 0x1bb634u: goto label_1bb634;
        case 0x1bb638u: goto label_1bb638;
        case 0x1bb63cu: goto label_1bb63c;
        case 0x1bb640u: goto label_1bb640;
        case 0x1bb644u: goto label_1bb644;
        case 0x1bb648u: goto label_1bb648;
        case 0x1bb64cu: goto label_1bb64c;
        case 0x1bb650u: goto label_1bb650;
        case 0x1bb654u: goto label_1bb654;
        case 0x1bb658u: goto label_1bb658;
        case 0x1bb65cu: goto label_1bb65c;
        case 0x1bb660u: goto label_1bb660;
        case 0x1bb664u: goto label_1bb664;
        case 0x1bb668u: goto label_1bb668;
        case 0x1bb66cu: goto label_1bb66c;
        case 0x1bb670u: goto label_1bb670;
        case 0x1bb674u: goto label_1bb674;
        case 0x1bb678u: goto label_1bb678;
        case 0x1bb67cu: goto label_1bb67c;
        case 0x1bb680u: goto label_1bb680;
        case 0x1bb684u: goto label_1bb684;
        case 0x1bb688u: goto label_1bb688;
        case 0x1bb68cu: goto label_1bb68c;
        case 0x1bb690u: goto label_1bb690;
        case 0x1bb694u: goto label_1bb694;
        case 0x1bb698u: goto label_1bb698;
        case 0x1bb69cu: goto label_1bb69c;
        case 0x1bb6a0u: goto label_1bb6a0;
        case 0x1bb6a4u: goto label_1bb6a4;
        case 0x1bb6a8u: goto label_1bb6a8;
        case 0x1bb6acu: goto label_1bb6ac;
        case 0x1bb6b0u: goto label_1bb6b0;
        case 0x1bb6b4u: goto label_1bb6b4;
        case 0x1bb6b8u: goto label_1bb6b8;
        case 0x1bb6bcu: goto label_1bb6bc;
        case 0x1bb6c0u: goto label_1bb6c0;
        case 0x1bb6c4u: goto label_1bb6c4;
        case 0x1bb6c8u: goto label_1bb6c8;
        case 0x1bb6ccu: goto label_1bb6cc;
        case 0x1bb6d0u: goto label_1bb6d0;
        case 0x1bb6d4u: goto label_1bb6d4;
        case 0x1bb6d8u: goto label_1bb6d8;
        case 0x1bb6dcu: goto label_1bb6dc;
        case 0x1bb6e0u: goto label_1bb6e0;
        case 0x1bb6e4u: goto label_1bb6e4;
        case 0x1bb6e8u: goto label_1bb6e8;
        case 0x1bb6ecu: goto label_1bb6ec;
        case 0x1bb6f0u: goto label_1bb6f0;
        case 0x1bb6f4u: goto label_1bb6f4;
        case 0x1bb6f8u: goto label_1bb6f8;
        case 0x1bb6fcu: goto label_1bb6fc;
        case 0x1bb700u: goto label_1bb700;
        case 0x1bb704u: goto label_1bb704;
        case 0x1bb708u: goto label_1bb708;
        case 0x1bb70cu: goto label_1bb70c;
        case 0x1bb710u: goto label_1bb710;
        case 0x1bb714u: goto label_1bb714;
        case 0x1bb718u: goto label_1bb718;
        case 0x1bb71cu: goto label_1bb71c;
        case 0x1bb720u: goto label_1bb720;
        case 0x1bb724u: goto label_1bb724;
        case 0x1bb728u: goto label_1bb728;
        case 0x1bb72cu: goto label_1bb72c;
        case 0x1bb730u: goto label_1bb730;
        case 0x1bb734u: goto label_1bb734;
        case 0x1bb738u: goto label_1bb738;
        case 0x1bb73cu: goto label_1bb73c;
        case 0x1bb740u: goto label_1bb740;
        case 0x1bb744u: goto label_1bb744;
        case 0x1bb748u: goto label_1bb748;
        case 0x1bb74cu: goto label_1bb74c;
        case 0x1bb750u: goto label_1bb750;
        case 0x1bb754u: goto label_1bb754;
        case 0x1bb758u: goto label_1bb758;
        case 0x1bb75cu: goto label_1bb75c;
        case 0x1bb760u: goto label_1bb760;
        case 0x1bb764u: goto label_1bb764;
        case 0x1bb768u: goto label_1bb768;
        case 0x1bb76cu: goto label_1bb76c;
        case 0x1bb770u: goto label_1bb770;
        case 0x1bb774u: goto label_1bb774;
        case 0x1bb778u: goto label_1bb778;
        case 0x1bb77cu: goto label_1bb77c;
        case 0x1bb780u: goto label_1bb780;
        case 0x1bb784u: goto label_1bb784;
        case 0x1bb788u: goto label_1bb788;
        case 0x1bb78cu: goto label_1bb78c;
        case 0x1bb790u: goto label_1bb790;
        case 0x1bb794u: goto label_1bb794;
        case 0x1bb798u: goto label_1bb798;
        case 0x1bb79cu: goto label_1bb79c;
        case 0x1bb7a0u: goto label_1bb7a0;
        case 0x1bb7a4u: goto label_1bb7a4;
        case 0x1bb7a8u: goto label_1bb7a8;
        case 0x1bb7acu: goto label_1bb7ac;
        case 0x1bb7b0u: goto label_1bb7b0;
        case 0x1bb7b4u: goto label_1bb7b4;
        case 0x1bb7b8u: goto label_1bb7b8;
        case 0x1bb7bcu: goto label_1bb7bc;
        case 0x1bb7c0u: goto label_1bb7c0;
        case 0x1bb7c4u: goto label_1bb7c4;
        case 0x1bb7c8u: goto label_1bb7c8;
        case 0x1bb7ccu: goto label_1bb7cc;
        case 0x1bb7d0u: goto label_1bb7d0;
        case 0x1bb7d4u: goto label_1bb7d4;
        case 0x1bb7d8u: goto label_1bb7d8;
        case 0x1bb7dcu: goto label_1bb7dc;
        case 0x1bb7e0u: goto label_1bb7e0;
        case 0x1bb7e4u: goto label_1bb7e4;
        case 0x1bb7e8u: goto label_1bb7e8;
        case 0x1bb7ecu: goto label_1bb7ec;
        case 0x1bb7f0u: goto label_1bb7f0;
        case 0x1bb7f4u: goto label_1bb7f4;
        case 0x1bb7f8u: goto label_1bb7f8;
        case 0x1bb7fcu: goto label_1bb7fc;
        case 0x1bb800u: goto label_1bb800;
        case 0x1bb804u: goto label_1bb804;
        case 0x1bb808u: goto label_1bb808;
        case 0x1bb80cu: goto label_1bb80c;
        case 0x1bb810u: goto label_1bb810;
        case 0x1bb814u: goto label_1bb814;
        case 0x1bb818u: goto label_1bb818;
        case 0x1bb81cu: goto label_1bb81c;
        case 0x1bb820u: goto label_1bb820;
        case 0x1bb824u: goto label_1bb824;
        case 0x1bb828u: goto label_1bb828;
        case 0x1bb82cu: goto label_1bb82c;
        case 0x1bb830u: goto label_1bb830;
        case 0x1bb834u: goto label_1bb834;
        case 0x1bb838u: goto label_1bb838;
        case 0x1bb83cu: goto label_1bb83c;
        case 0x1bb840u: goto label_1bb840;
        case 0x1bb844u: goto label_1bb844;
        case 0x1bb848u: goto label_1bb848;
        case 0x1bb84cu: goto label_1bb84c;
        case 0x1bb850u: goto label_1bb850;
        case 0x1bb854u: goto label_1bb854;
        case 0x1bb858u: goto label_1bb858;
        case 0x1bb85cu: goto label_1bb85c;
        case 0x1bb860u: goto label_1bb860;
        case 0x1bb864u: goto label_1bb864;
        case 0x1bb868u: goto label_1bb868;
        case 0x1bb86cu: goto label_1bb86c;
        case 0x1bb870u: goto label_1bb870;
        case 0x1bb874u: goto label_1bb874;
        case 0x1bb878u: goto label_1bb878;
        case 0x1bb87cu: goto label_1bb87c;
        case 0x1bb880u: goto label_1bb880;
        case 0x1bb884u: goto label_1bb884;
        case 0x1bb888u: goto label_1bb888;
        case 0x1bb88cu: goto label_1bb88c;
        case 0x1bb890u: goto label_1bb890;
        case 0x1bb894u: goto label_1bb894;
        case 0x1bb898u: goto label_1bb898;
        case 0x1bb89cu: goto label_1bb89c;
        case 0x1bb8a0u: goto label_1bb8a0;
        case 0x1bb8a4u: goto label_1bb8a4;
        case 0x1bb8a8u: goto label_1bb8a8;
        case 0x1bb8acu: goto label_1bb8ac;
        case 0x1bb8b0u: goto label_1bb8b0;
        case 0x1bb8b4u: goto label_1bb8b4;
        case 0x1bb8b8u: goto label_1bb8b8;
        case 0x1bb8bcu: goto label_1bb8bc;
        case 0x1bb8c0u: goto label_1bb8c0;
        case 0x1bb8c4u: goto label_1bb8c4;
        case 0x1bb8c8u: goto label_1bb8c8;
        case 0x1bb8ccu: goto label_1bb8cc;
        case 0x1bb8d0u: goto label_1bb8d0;
        case 0x1bb8d4u: goto label_1bb8d4;
        case 0x1bb8d8u: goto label_1bb8d8;
        case 0x1bb8dcu: goto label_1bb8dc;
        case 0x1bb8e0u: goto label_1bb8e0;
        case 0x1bb8e4u: goto label_1bb8e4;
        case 0x1bb8e8u: goto label_1bb8e8;
        case 0x1bb8ecu: goto label_1bb8ec;
        case 0x1bb8f0u: goto label_1bb8f0;
        case 0x1bb8f4u: goto label_1bb8f4;
        case 0x1bb8f8u: goto label_1bb8f8;
        case 0x1bb8fcu: goto label_1bb8fc;
        case 0x1bb900u: goto label_1bb900;
        case 0x1bb904u: goto label_1bb904;
        case 0x1bb908u: goto label_1bb908;
        case 0x1bb90cu: goto label_1bb90c;
        case 0x1bb910u: goto label_1bb910;
        case 0x1bb914u: goto label_1bb914;
        case 0x1bb918u: goto label_1bb918;
        case 0x1bb91cu: goto label_1bb91c;
        case 0x1bb920u: goto label_1bb920;
        case 0x1bb924u: goto label_1bb924;
        case 0x1bb928u: goto label_1bb928;
        case 0x1bb92cu: goto label_1bb92c;
        case 0x1bb930u: goto label_1bb930;
        case 0x1bb934u: goto label_1bb934;
        case 0x1bb938u: goto label_1bb938;
        case 0x1bb93cu: goto label_1bb93c;
        case 0x1bb940u: goto label_1bb940;
        case 0x1bb944u: goto label_1bb944;
        case 0x1bb948u: goto label_1bb948;
        case 0x1bb94cu: goto label_1bb94c;
        case 0x1bb950u: goto label_1bb950;
        case 0x1bb954u: goto label_1bb954;
        case 0x1bb958u: goto label_1bb958;
        case 0x1bb95cu: goto label_1bb95c;
        case 0x1bb960u: goto label_1bb960;
        case 0x1bb964u: goto label_1bb964;
        case 0x1bb968u: goto label_1bb968;
        case 0x1bb96cu: goto label_1bb96c;
        case 0x1bb970u: goto label_1bb970;
        case 0x1bb974u: goto label_1bb974;
        case 0x1bb978u: goto label_1bb978;
        case 0x1bb97cu: goto label_1bb97c;
        case 0x1bb980u: goto label_1bb980;
        case 0x1bb984u: goto label_1bb984;
        case 0x1bb988u: goto label_1bb988;
        case 0x1bb98cu: goto label_1bb98c;
        case 0x1bb990u: goto label_1bb990;
        case 0x1bb994u: goto label_1bb994;
        case 0x1bb998u: goto label_1bb998;
        case 0x1bb99cu: goto label_1bb99c;
        case 0x1bb9a0u: goto label_1bb9a0;
        case 0x1bb9a4u: goto label_1bb9a4;
        case 0x1bb9a8u: goto label_1bb9a8;
        case 0x1bb9acu: goto label_1bb9ac;
        case 0x1bb9b0u: goto label_1bb9b0;
        case 0x1bb9b4u: goto label_1bb9b4;
        default: return;
    }

label_1bb1e8:
    // 0x1bb1e8: 0x2861004a  slti        $at, $v1, 0x4A
    ctx->pc = 0x1bb1e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)74) ? 1 : 0);
label_1bb1ec:
    // 0x1bb1ec: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_1bb1f0:
    if (ctx->pc == 0x1BB1F0u) {
        ctx->pc = 0x1BB1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB1ECu;
        // 0x1bb1f0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB1F4u;
        goto label_1bb1f4;
    }
    ctx->pc = 0x1BB1ECu;
    {
        const bool branch_taken_0x1bb1ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB1ECu;
        // 0x1bb1f0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb1ec) {
            ctx->pc = 0x1BB204u;
            goto label_1bb204;
        }
    }
    ctx->pc = 0x1BB1F4u;
label_1bb1f4:
    // 0x1bb1f4: 0xc06ee60  jal         func_1BB980
label_1bb1f8:
    if (ctx->pc == 0x1BB1F8u) {
        ctx->pc = 0x1BB1FCu;
        goto label_1bb1fc;
    }
    ctx->pc = 0x1BB1F4u;
    SET_GPR_U32(ctx, 31, 0x1BB1FCu);
    ctx->pc = 0x1BB980u;
    goto label_1bb980;
    ctx->pc = 0x1BB1FCu;
label_1bb1fc:
    // 0x1bb1fc: 0x100000ba  b           . + 4 + (0xBA << 2)
label_1bb200:
    if (ctx->pc == 0x1BB200u) {
        ctx->pc = 0x1BB200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB1FCu;
        // 0x1bb200: 0x92240036  lbu         $a0, 0x36($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB204u;
        goto label_1bb204;
    }
    ctx->pc = 0x1BB1FCu;
    {
        const bool branch_taken_0x1bb1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB1FCu;
        // 0x1bb200: 0x92240036  lbu         $a0, 0x36($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb1fc) {
            ctx->pc = 0x1BB4E8u;
            goto label_1bb4e8;
        }
    }
    ctx->pc = 0x1BB204u;
label_1bb204:
    // 0x1bb204: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1bb204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1bb208:
    // 0x1bb208: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bb208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bb20c:
    // 0x1bb20c: 0x90840012  lbu         $a0, 0x12($a0)
    ctx->pc = 0x1bb20cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
label_1bb210:
    // 0x1bb210: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_1bb214:
    if (ctx->pc == 0x1BB214u) {
        ctx->pc = 0x1BB218u;
        goto label_1bb218;
    }
    ctx->pc = 0x1BB210u;
    {
        const bool branch_taken_0x1bb210 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bb210) {
            ctx->pc = 0x1BB228u;
            goto label_1bb228;
        }
    }
    ctx->pc = 0x1BB218u;
label_1bb218:
    // 0x1bb218: 0x92240034  lbu         $a0, 0x34($s1)
    ctx->pc = 0x1bb218u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
label_1bb21c:
    // 0x1bb21c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bb21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bb220:
    // 0x1bb220: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_1bb224:
    if (ctx->pc == 0x1BB224u) {
        ctx->pc = 0x1BB228u;
        goto label_1bb228;
    }
    ctx->pc = 0x1BB220u;
    {
        const bool branch_taken_0x1bb220 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bb220) {
            ctx->pc = 0x1BB238u;
            goto label_1bb238;
        }
    }
    ctx->pc = 0x1BB228u;
label_1bb228:
    // 0x1bb228: 0x9223002a  lbu         $v1, 0x2A($s1)
    ctx->pc = 0x1bb228u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
label_1bb22c:
    // 0x1bb22c: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x1bb22cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1bb230:
    // 0x1bb230: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_1bb234:
    if (ctx->pc == 0x1BB234u) {
        ctx->pc = 0x1BB238u;
        goto label_1bb238;
    }
    ctx->pc = 0x1BB230u;
    {
        const bool branch_taken_0x1bb230 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb230) {
            ctx->pc = 0x1BB248u;
            goto label_1bb248;
        }
    }
    ctx->pc = 0x1BB238u;
label_1bb238:
    // 0x1bb238: 0x86230032  lh          $v1, 0x32($s1)
    ctx->pc = 0x1bb238u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
label_1bb23c:
    // 0x1bb23c: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
label_1bb240:
    if (ctx->pc == 0x1BB240u) {
        ctx->pc = 0x1BB240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB23Cu;
        // 0x1bb240: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB244u;
        goto label_1bb244;
    }
    ctx->pc = 0x1BB23Cu;
    {
        const bool branch_taken_0x1bb23c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1BB240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB23Cu;
        // 0x1bb240: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb23c) {
            ctx->pc = 0x1BB248u;
            goto label_1bb248;
        }
    }
    ctx->pc = 0x1BB244u;
label_1bb244:
    // 0x1bb244: 0xa6230032  sh          $v1, 0x32($s1)
    ctx->pc = 0x1bb244u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 50), (uint16_t)GPR_U32(ctx, 3));
label_1bb248:
    // 0x1bb248: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x1bb248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1bb24c:
    // 0x1bb24c: 0x306301c0  andi        $v1, $v1, 0x1C0
    ctx->pc = 0x1bb24cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)448);
label_1bb250:
    // 0x1bb250: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_1bb254:
    if (ctx->pc == 0x1BB254u) {
        ctx->pc = 0x1BB258u;
        goto label_1bb258;
    }
    ctx->pc = 0x1BB250u;
    {
        const bool branch_taken_0x1bb250 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb250) {
            ctx->pc = 0x1BB280u;
            goto label_1bb280;
        }
    }
    ctx->pc = 0x1BB258u;
label_1bb258:
    // 0x1bb258: 0x92240036  lbu         $a0, 0x36($s1)
    ctx->pc = 0x1bb258u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
label_1bb25c:
    // 0x1bb25c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bb25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1bb260:
    // 0x1bb260: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_1bb264:
    if (ctx->pc == 0x1BB264u) {
        ctx->pc = 0x1BB264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB260u;
        // 0x1bb264: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB268u;
        goto label_1bb268;
    }
    ctx->pc = 0x1BB260u;
    {
        const bool branch_taken_0x1bb260 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BB264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB260u;
        // 0x1bb264: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb260) {
            ctx->pc = 0x1BB270u;
            goto label_1bb270;
        }
    }
    ctx->pc = 0x1BB268u;
label_1bb268:
    // 0x1bb268: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_1bb26c:
    if (ctx->pc == 0x1BB26Cu) {
        ctx->pc = 0x1BB270u;
        goto label_1bb270;
    }
    ctx->pc = 0x1BB268u;
    {
        const bool branch_taken_0x1bb268 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bb268) {
            ctx->pc = 0x1BB280u;
            goto label_1bb280;
        }
    }
    ctx->pc = 0x1BB270u;
label_1bb270:
    // 0x1bb270: 0xa620002e  sh          $zero, 0x2E($s1)
    ctx->pc = 0x1bb270u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 46), (uint16_t)GPR_U32(ctx, 0));
label_1bb274:
    // 0x1bb274: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1bb274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1bb278:
    // 0x1bb278: 0xa6200032  sh          $zero, 0x32($s1)
    ctx->pc = 0x1bb278u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 50), (uint16_t)GPR_U32(ctx, 0));
label_1bb27c:
    // 0x1bb27c: 0xa2230038  sb          $v1, 0x38($s1)
    ctx->pc = 0x1bb27cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 56), (uint8_t)GPR_U32(ctx, 3));
label_1bb280:
    // 0x1bb280: 0x86250032  lh          $a1, 0x32($s1)
    ctx->pc = 0x1bb280u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
label_1bb284:
    // 0x1bb284: 0x18a00064  blez        $a1, . + 4 + (0x64 << 2)
label_1bb288:
    if (ctx->pc == 0x1BB288u) {
        ctx->pc = 0x1BB28Cu;
        goto label_1bb28c;
    }
    ctx->pc = 0x1BB284u;
    {
        const bool branch_taken_0x1bb284 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x1bb284) {
            ctx->pc = 0x1BB418u;
            goto label_1bb418;
        }
    }
    ctx->pc = 0x1BB28Cu;
label_1bb28c:
    // 0x1bb28c: 0x86260030  lh          $a2, 0x30($s1)
    ctx->pc = 0x1bb28cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
label_1bb290:
    // 0x1bb290: 0xa6082a  slt         $at, $a1, $a2
    ctx->pc = 0x1bb290u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1bb294:
    // 0x1bb294: 0x10200068  beqz        $at, . + 4 + (0x68 << 2)
label_1bb298:
    if (ctx->pc == 0x1BB298u) {
        ctx->pc = 0x1BB29Cu;
        goto label_1bb29c;
    }
    ctx->pc = 0x1BB294u;
    {
        const bool branch_taken_0x1bb294 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb294) {
            ctx->pc = 0x1BB438u;
            goto label_1bb438;
        }
    }
    ctx->pc = 0x1BB29Cu;
label_1bb29c:
    // 0x1bb29c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1bb29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1bb2a0:
    // 0x1bb2a0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bb2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bb2a4:
    // 0x1bb2a4: 0x90840012  lbu         $a0, 0x12($a0)
    ctx->pc = 0x1bb2a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
label_1bb2a8:
    // 0x1bb2a8: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_1bb2ac:
    if (ctx->pc == 0x1BB2ACu) {
        ctx->pc = 0x1BB2B0u;
        goto label_1bb2b0;
    }
    ctx->pc = 0x1BB2A8u;
    {
        const bool branch_taken_0x1bb2a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bb2a8) {
            ctx->pc = 0x1BB2C0u;
            goto label_1bb2c0;
        }
    }
    ctx->pc = 0x1BB2B0u;
label_1bb2b0:
    // 0x1bb2b0: 0x92240034  lbu         $a0, 0x34($s1)
    ctx->pc = 0x1bb2b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
label_1bb2b4:
    // 0x1bb2b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bb2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bb2b8:
    // 0x1bb2b8: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_1bb2bc:
    if (ctx->pc == 0x1BB2BCu) {
        ctx->pc = 0x1BB2C0u;
        goto label_1bb2c0;
    }
    ctx->pc = 0x1BB2B8u;
    {
        const bool branch_taken_0x1bb2b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bb2b8) {
            ctx->pc = 0x1BB2D0u;
            goto label_1bb2d0;
        }
    }
    ctx->pc = 0x1BB2C0u;
label_1bb2c0:
    // 0x1bb2c0: 0x9223002a  lbu         $v1, 0x2A($s1)
    ctx->pc = 0x1bb2c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
label_1bb2c4:
    // 0x1bb2c4: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x1bb2c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1bb2c8:
    // 0x1bb2c8: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
label_1bb2cc:
    if (ctx->pc == 0x1BB2CCu) {
        ctx->pc = 0x1BB2D0u;
        goto label_1bb2d0;
    }
    ctx->pc = 0x1BB2C8u;
    {
        const bool branch_taken_0x1bb2c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb2c8) {
            ctx->pc = 0x1BB2E8u;
            goto label_1bb2e8;
        }
    }
    ctx->pc = 0x1BB2D0u;
label_1bb2d0:
    // 0x1bb2d0: 0x8623002e  lh          $v1, 0x2E($s1)
    ctx->pc = 0x1bb2d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 46)));
label_1bb2d4:
    // 0x1bb2d4: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x1bb2d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1bb2d8:
    // 0x1bb2d8: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_1bb2dc:
    if (ctx->pc == 0x1BB2DCu) {
        ctx->pc = 0x1BB2E0u;
        goto label_1bb2e0;
    }
    ctx->pc = 0x1BB2D8u;
    {
        const bool branch_taken_0x1bb2d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb2d8) {
            ctx->pc = 0x1BB314u;
            goto label_1bb314;
        }
    }
    ctx->pc = 0x1BB2E0u;
label_1bb2e0:
    // 0x1bb2e0: 0x1000000c  b           . + 4 + (0xC << 2)
label_1bb2e4:
    if (ctx->pc == 0x1BB2E4u) {
        ctx->pc = 0x1BB2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB2E0u;
        // 0x1bb2e4: 0xa6230032  sh          $v1, 0x32($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 50), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB2E8u;
        goto label_1bb2e8;
    }
    ctx->pc = 0x1BB2E0u;
    {
        const bool branch_taken_0x1bb2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB2E0u;
        // 0x1bb2e4: 0xa6230032  sh          $v1, 0x32($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 50), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb2e0) {
            ctx->pc = 0x1BB314u;
            goto label_1bb314;
        }
    }
    ctx->pc = 0x1BB2E8u;
label_1bb2e8:
    // 0x1bb2e8: 0x8624002e  lh          $a0, 0x2E($s1)
    ctx->pc = 0x1bb2e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 46)));
label_1bb2ec:
    // 0x1bb2ec: 0xc51823  subu        $v1, $a2, $a1
    ctx->pc = 0x1bb2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_1bb2f0:
    // 0x1bb2f0: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x1bb2f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1bb2f4:
    // 0x1bb2f4: 0x66001a  div         $zero, $v1, $a2
    ctx->pc = 0x1bb2f4u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1bb2f8:
    // 0x1bb2f8: 0x0  nop
    ctx->pc = 0x1bb2f8u;
    // NOP
label_1bb2fc:
    // 0x1bb2fc: 0x0  nop
    ctx->pc = 0x1bb2fcu;
    // NOP
label_1bb300:
    // 0x1bb300: 0x1812  mflo        $v1
    ctx->pc = 0x1bb300u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_1bb304:
    // 0x1bb304: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1bb304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_1bb308:
    // 0x1bb308: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1bb308u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1bb30c:
    // 0x1bb30c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1bb30cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1bb310:
    // 0x1bb310: 0xa623002e  sh          $v1, 0x2E($s1)
    ctx->pc = 0x1bb310u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 46), (uint16_t)GPR_U32(ctx, 3));
label_1bb314:
    // 0x1bb314: 0x8628002e  lh          $t0, 0x2E($s1)
    ctx->pc = 0x1bb314u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 46)));
label_1bb318:
    // 0x1bb318: 0x1d000009  bgtz        $t0, . + 4 + (0x9 << 2)
label_1bb31c:
    if (ctx->pc == 0x1BB31Cu) {
        ctx->pc = 0x1BB320u;
        goto label_1bb320;
    }
    ctx->pc = 0x1BB318u;
    {
        const bool branch_taken_0x1bb318 = (GPR_S32(ctx, 8) > 0);
        if (branch_taken_0x1bb318) {
            ctx->pc = 0x1BB340u;
            goto label_1bb340;
        }
    }
    ctx->pc = 0x1BB320u;
label_1bb320:
    // 0x1bb320: 0x9223002a  lbu         $v1, 0x2A($s1)
    ctx->pc = 0x1bb320u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
label_1bb324:
    // 0x1bb324: 0x18600002  blez        $v1, . + 4 + (0x2 << 2)
label_1bb328:
    if (ctx->pc == 0x1BB328u) {
        ctx->pc = 0x1BB32Cu;
        goto label_1bb32c;
    }
    ctx->pc = 0x1BB324u;
    {
        const bool branch_taken_0x1bb324 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1bb324) {
            ctx->pc = 0x1BB330u;
            goto label_1bb330;
        }
    }
    ctx->pc = 0x1BB32Cu;
label_1bb32c:
    // 0x1bb32c: 0xa220002a  sb          $zero, 0x2A($s1)
    ctx->pc = 0x1bb32cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 0));
label_1bb330:
    // 0x1bb330: 0xa6200032  sh          $zero, 0x32($s1)
    ctx->pc = 0x1bb330u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 50), (uint16_t)GPR_U32(ctx, 0));
label_1bb334:
    // 0x1bb334: 0xa6200030  sh          $zero, 0x30($s1)
    ctx->pc = 0x1bb334u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 0));
label_1bb338:
    // 0x1bb338: 0x1000003f  b           . + 4 + (0x3F << 2)
label_1bb33c:
    if (ctx->pc == 0x1BB33Cu) {
        ctx->pc = 0x1BB33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB338u;
        // 0x1bb33c: 0xa620002e  sh          $zero, 0x2E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 46), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB340u;
        goto label_1bb340;
    }
    ctx->pc = 0x1BB338u;
    {
        const bool branch_taken_0x1bb338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB338u;
        // 0x1bb33c: 0xa620002e  sh          $zero, 0x2E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 46), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb338) {
            ctx->pc = 0x1BB438u;
            goto label_1bb438;
        }
    }
    ctx->pc = 0x1BB340u;
label_1bb340:
    // 0x1bb340: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1bb340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1bb344:
    // 0x1bb344: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x1bb344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
label_1bb348:
    // 0x1bb348: 0x34675556  ori         $a3, $v1, 0x5556
    ctx->pc = 0x1bb348u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
label_1bb34c:
    // 0x1bb34c: 0x9226002a  lbu         $a2, 0x2A($s1)
    ctx->pc = 0x1bb34cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
label_1bb350:
    // 0x1bb350: 0x86240032  lh          $a0, 0x32($s1)
    ctx->pc = 0x1bb350u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
label_1bb354:
    // 0x1bb354: 0x84a90008  lh          $t1, 0x8($a1)
    ctx->pc = 0x1bb354u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
label_1bb358:
    // 0x1bb358: 0x1281823  subu        $v1, $t1, $t0
    ctx->pc = 0x1bb358u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_1bb35c:
    // 0x1bb35c: 0x24c5ffff  addiu       $a1, $a2, -0x1
    ctx->pc = 0x1bb35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1bb360:
    // 0x1bb360: 0x94040  sll         $t0, $t1, 1
    ctx->pc = 0x1bb360u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_1bb364:
    // 0x1bb364: 0xe80018  mult        $zero, $a3, $t0
    ctx->pc = 0x1bb364u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1bb368:
    // 0x1bb368: 0x0  nop
    ctx->pc = 0x1bb368u;
    // NOP
label_1bb36c:
    // 0x1bb36c: 0x0  nop
    ctx->pc = 0x1bb36cu;
    // NOP
label_1bb370:
    // 0x1bb370: 0x3810  mfhi        $a3
    ctx->pc = 0x1bb370u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_1bb374:
    // 0x1bb374: 0x847c2  srl         $t0, $t0, 31
    ctx->pc = 0x1bb374u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_1bb378:
    // 0x1bb378: 0xe88021  addu        $s0, $a3, $t0
    ctx->pc = 0x1bb378u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1bb37c:
    // 0x1bb37c: 0x2052818  mult        $a1, $s0, $a1
    ctx->pc = 0x1bb37cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_1bb380:
    // 0x1bb380: 0x1252821  addu        $a1, $t1, $a1
    ctx->pc = 0x1bb380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
label_1bb384:
    // 0x1bb384: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x1bb384u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1bb388:
    // 0x1bb388: 0x839023  subu        $s2, $a0, $v1
    ctx->pc = 0x1bb388u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1bb38c:
    // 0x1bb38c: 0x250182a  slt         $v1, $s2, $s0
    ctx->pc = 0x1bb38cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1bb390:
    // 0x1bb390: 0x14600029  bnez        $v1, . + 4 + (0x29 << 2)
label_1bb394:
    if (ctx->pc == 0x1BB394u) {
        ctx->pc = 0x1BB398u;
        goto label_1bb398;
    }
    ctx->pc = 0x1BB390u;
    {
        const bool branch_taken_0x1bb390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb390) {
            ctx->pc = 0x1BB438u;
            goto label_1bb438;
        }
    }
    ctx->pc = 0x1BB398u;
label_1bb398:
    // 0x1bb398: 0x18c00027  blez        $a2, . + 4 + (0x27 << 2)
label_1bb39c:
    if (ctx->pc == 0x1BB39Cu) {
        ctx->pc = 0x1BB3A0u;
        goto label_1bb3a0;
    }
    ctx->pc = 0x1BB398u;
    {
        const bool branch_taken_0x1bb398 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x1bb398) {
            ctx->pc = 0x1BB438u;
            goto label_1bb438;
        }
    }
    ctx->pc = 0x1BB3A0u;
label_1bb3a0:
    // 0x1bb3a0: 0xc08f0cc  jal         func_23C330
label_1bb3a4:
    if (ctx->pc == 0x1BB3A4u) {
        ctx->pc = 0x1BB3A8u;
        goto label_1bb3a8;
    }
    ctx->pc = 0x1BB3A0u;
    SET_GPR_U32(ctx, 31, 0x1BB3A8u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1BB3A8u;
label_1bb3a8:
    // 0x1bb3a8: 0x9226002a  lbu         $a2, 0x2A($s1)
    ctx->pc = 0x1bb3a8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
label_1bb3ac:
    // 0x1bb3ac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1bb3acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1bb3b0:
    // 0x1bb3b0: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x1bb3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
label_1bb3b4:
    // 0x1bb3b4: 0x250001a  div         $zero, $s2, $s0
    ctx->pc = 0x1bb3b4u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1bb3b8:
    // 0x1bb3b8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1bb3b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1bb3bc:
    // 0x1bb3bc: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x1bb3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1bb3c0:
    // 0x1bb3c0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1bb3c0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bb3c4:
    // 0x1bb3c4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1bb3c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bb3c8:
    // 0x1bb3c8: 0x0  nop
    ctx->pc = 0x1bb3c8u;
    // NOP
label_1bb3cc:
    // 0x1bb3cc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1bb3ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1bb3d0:
    // 0x1bb3d0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1bb3d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1bb3d4:
    // 0x1bb3d4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1bb3d4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1bb3d8:
    // 0x1bb3d8: 0x1812  mflo        $v1
    ctx->pc = 0x1bb3d8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_1bb3dc:
    // 0x1bb3dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1bb3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1bb3e0:
    // 0x1bb3e0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bb3e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1bb3e4:
    // 0x1bb3e4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1bb3e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1bb3e8:
    // 0x1bb3e8: 0x0  nop
    ctx->pc = 0x1bb3e8u;
    // NOP
label_1bb3ec:
    // 0x1bb3ec: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1bb3ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1bb3f0:
    // 0x1bb3f0: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
label_1bb3f4:
    if (ctx->pc == 0x1BB3F4u) {
        ctx->pc = 0x1BB3F8u;
        goto label_1bb3f8;
    }
    ctx->pc = 0x1BB3F0u;
    {
        const bool branch_taken_0x1bb3f0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb3f0) {
            ctx->pc = 0x1BB438u;
            goto label_1bb438;
        }
    }
    ctx->pc = 0x1BB3F8u;
label_1bb3f8:
    // 0x1bb3f8: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x1bb3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1bb3fc:
    // 0x1bb3fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bb3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bb400:
    // 0x1bb400: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bb400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bb404:
    // 0x1bb404: 0xa222002a  sb          $v0, 0x2A($s1)
    ctx->pc = 0x1bb404u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 2));
label_1bb408:
    // 0x1bb408: 0xc06ed6c  jal         func_1BB5B0
label_1bb40c:
    if (ctx->pc == 0x1BB40Cu) {
        ctx->pc = 0x1BB40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB408u;
        // 0x1bb40c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB410u;
        goto label_1bb410;
    }
    ctx->pc = 0x1BB408u;
    SET_GPR_U32(ctx, 31, 0x1BB410u);
    ctx->pc = 0x1BB40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB408u;
    // 0x1bb40c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB5B0u;
    goto label_1bb5b0;
    ctx->pc = 0x1BB410u;
label_1bb410:
    // 0x1bb410: 0x1000000a  b           . + 4 + (0xA << 2)
label_1bb414:
    if (ctx->pc == 0x1BB414u) {
        ctx->pc = 0x1BB414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB410u;
        // 0x1bb414: 0x86230032  lh          $v1, 0x32($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB418u;
        goto label_1bb418;
    }
    ctx->pc = 0x1BB410u;
    {
        const bool branch_taken_0x1bb410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB410u;
        // 0x1bb414: 0x86230032  lh          $v1, 0x32($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb410) {
            ctx->pc = 0x1BB43Cu;
            goto label_1bb43c;
        }
    }
    ctx->pc = 0x1BB418u;
label_1bb418:
    // 0x1bb418: 0x9226002a  lbu         $a2, 0x2A($s1)
    ctx->pc = 0x1bb418u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
label_1bb41c:
    // 0x1bb41c: 0x18c00004  blez        $a2, . + 4 + (0x4 << 2)
label_1bb420:
    if (ctx->pc == 0x1BB420u) {
        ctx->pc = 0x1BB420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB41Cu;
        // 0x1bb420: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB424u;
        goto label_1bb424;
    }
    ctx->pc = 0x1BB41Cu;
    {
        const bool branch_taken_0x1bb41c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1BB420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB41Cu;
        // 0x1bb420: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb41c) {
            ctx->pc = 0x1BB430u;
            goto label_1bb430;
        }
    }
    ctx->pc = 0x1BB424u;
label_1bb424:
    // 0x1bb424: 0xc06ed6c  jal         func_1BB5B0
label_1bb428:
    if (ctx->pc == 0x1BB428u) {
        ctx->pc = 0x1BB428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB424u;
        // 0x1bb428: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB42Cu;
        goto label_1bb42c;
    }
    ctx->pc = 0x1BB424u;
    SET_GPR_U32(ctx, 31, 0x1BB42Cu);
    ctx->pc = 0x1BB428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB424u;
    // 0x1bb428: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB5B0u;
    goto label_1bb5b0;
    ctx->pc = 0x1BB42Cu;
label_1bb42c:
    // 0x1bb42c: 0xa220002a  sb          $zero, 0x2A($s1)
    ctx->pc = 0x1bb42cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 0));
label_1bb430:
    // 0x1bb430: 0xa620002e  sh          $zero, 0x2E($s1)
    ctx->pc = 0x1bb430u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 46), (uint16_t)GPR_U32(ctx, 0));
label_1bb434:
    // 0x1bb434: 0xa6200032  sh          $zero, 0x32($s1)
    ctx->pc = 0x1bb434u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 50), (uint16_t)GPR_U32(ctx, 0));
label_1bb438:
    // 0x1bb438: 0x86230032  lh          $v1, 0x32($s1)
    ctx->pc = 0x1bb438u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
label_1bb43c:
    // 0x1bb43c: 0xa6230030  sh          $v1, 0x30($s1)
    ctx->pc = 0x1bb43cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 3));
label_1bb440:
    // 0x1bb440: 0x9223002a  lbu         $v1, 0x2A($s1)
    ctx->pc = 0x1bb440u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
label_1bb444:
    // 0x1bb444: 0x1c600005  bgtz        $v1, . + 4 + (0x5 << 2)
label_1bb448:
    if (ctx->pc == 0x1BB448u) {
        ctx->pc = 0x1BB44Cu;
        goto label_1bb44c;
    }
    ctx->pc = 0x1BB444u;
    {
        const bool branch_taken_0x1bb444 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1bb444) {
            ctx->pc = 0x1BB45Cu;
            goto label_1bb45c;
        }
    }
    ctx->pc = 0x1BB44Cu;
label_1bb44c:
    // 0x1bb44c: 0xa6200032  sh          $zero, 0x32($s1)
    ctx->pc = 0x1bb44cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 50), (uint16_t)GPR_U32(ctx, 0));
label_1bb450:
    // 0x1bb450: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bb450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bb454:
    // 0x1bb454: 0xa6200030  sh          $zero, 0x30($s1)
    ctx->pc = 0x1bb454u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 0));
label_1bb458:
    // 0x1bb458: 0xa223003d  sb          $v1, 0x3D($s1)
    ctx->pc = 0x1bb458u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 61), (uint8_t)GPR_U32(ctx, 3));
label_1bb45c:
    // 0x1bb45c: 0x9223003d  lbu         $v1, 0x3D($s1)
    ctx->pc = 0x1bb45cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 61)));
label_1bb460:
    // 0x1bb460: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_1bb464:
    if (ctx->pc == 0x1BB464u) {
        ctx->pc = 0x1BB468u;
        goto label_1bb468;
    }
    ctx->pc = 0x1BB460u;
    {
        const bool branch_taken_0x1bb460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb460) {
            ctx->pc = 0x1BB4E4u;
            goto label_1bb4e4;
        }
    }
    ctx->pc = 0x1BB468u;
label_1bb468:
    // 0x1bb468: 0x92230038  lbu         $v1, 0x38($s1)
    ctx->pc = 0x1bb468u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 56)));
label_1bb46c:
    // 0x1bb46c: 0x286100ff  slti        $at, $v1, 0xFF
    ctx->pc = 0x1bb46cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)255) ? 1 : 0);
label_1bb470:
    // 0x1bb470: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
label_1bb474:
    if (ctx->pc == 0x1BB474u) {
        ctx->pc = 0x1BB478u;
        goto label_1bb478;
    }
    ctx->pc = 0x1BB470u;
    {
        const bool branch_taken_0x1bb470 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb470) {
            ctx->pc = 0x1BB4C8u;
            goto label_1bb4c8;
        }
    }
    ctx->pc = 0x1BB478u;
label_1bb478:
    // 0x1bb478: 0x92260034  lbu         $a2, 0x34($s1)
    ctx->pc = 0x1bb478u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
label_1bb47c:
    // 0x1bb47c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1bb47cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1bb480:
    // 0x1bb480: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1bb480u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1bb484:
    // 0x1bb484: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x1bb484u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_1bb488:
    // 0x1bb488: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bb488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bb48c:
    // 0x1bb48c: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x1bb48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
label_1bb490:
    // 0x1bb490: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1bb490u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1bb494:
    // 0x1bb494: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bb494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bb498:
    // 0x1bb498: 0x38c60001  xori        $a2, $a2, 0x1
    ctx->pc = 0x1bb498u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
label_1bb49c:
    // 0x1bb49c: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x1bb49cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1bb4a0:
    // 0x1bb4a0: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x1bb4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1bb4a4:
    // 0x1bb4a4: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x1bb4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1bb4a8:
    // 0x1bb4a8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1bb4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1bb4ac:
    // 0x1bb4ac: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1bb4acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1bb4b0:
    // 0x1bb4b0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1bb4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1bb4b4:
    // 0x1bb4b4: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1bb4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1bb4b8:
    // 0x1bb4b8: 0xc072c58  jal         func_1CB160
label_1bb4bc:
    if (ctx->pc == 0x1BB4BCu) {
        ctx->pc = 0x1BB4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB4B8u;
        // 0x1bb4bc: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB4C0u;
        goto label_1bb4c0;
    }
    ctx->pc = 0x1BB4B8u;
    SET_GPR_U32(ctx, 31, 0x1BB4C0u);
    ctx->pc = 0x1BB4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB4B8u;
    // 0x1bb4bc: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB160u;
    { ctx->pc = 0x1cb160; return; }
    ctx->pc = 0x1BB4C0u;
label_1bb4c0:
    // 0x1bb4c0: 0x10000008  b           . + 4 + (0x8 << 2)
label_1bb4c4:
    if (ctx->pc == 0x1BB4C4u) {
        ctx->pc = 0x1BB4C8u;
        goto label_1bb4c8;
    }
    ctx->pc = 0x1BB4C0u;
    {
        const bool branch_taken_0x1bb4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb4c0) {
            ctx->pc = 0x1BB4E4u;
            goto label_1bb4e4;
        }
    }
    ctx->pc = 0x1BB4C8u;
label_1bb4c8:
    // 0x1bb4c8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1bb4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1bb4cc:
    // 0x1bb4cc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1bb4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1bb4d0:
    // 0x1bb4d0: 0x90840014  lbu         $a0, 0x14($a0)
    ctx->pc = 0x1bb4d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
label_1bb4d4:
    // 0x1bb4d4: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_1bb4d8:
    if (ctx->pc == 0x1BB4D8u) {
        ctx->pc = 0x1BB4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB4D4u;
        // 0x1bb4d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB4DCu;
        goto label_1bb4dc;
    }
    ctx->pc = 0x1BB4D4u;
    {
        const bool branch_taken_0x1bb4d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BB4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB4D4u;
        // 0x1bb4d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb4d4) {
            ctx->pc = 0x1BB4E4u;
            goto label_1bb4e4;
        }
    }
    ctx->pc = 0x1BB4DCu;
label_1bb4dc:
    // 0x1bb4dc: 0xc0448fc  jal         func_1123F0
label_1bb4e0:
    if (ctx->pc == 0x1BB4E0u) {
        ctx->pc = 0x1BB4E4u;
        goto label_1bb4e4;
    }
    ctx->pc = 0x1BB4DCu;
    SET_GPR_U32(ctx, 31, 0x1BB4E4u);
    ctx->pc = 0x1123F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1123F0u, 0x1BB4DCu, 0x1BB4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB4E4u;
label_1bb4e4:
    // 0x1bb4e4: 0x92240036  lbu         $a0, 0x36($s1)
    ctx->pc = 0x1bb4e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
label_1bb4e8:
    // 0x1bb4e8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bb4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1bb4ec:
    // 0x1bb4ec: 0x10830028  beq         $a0, $v1, . + 4 + (0x28 << 2)
label_1bb4f0:
    if (ctx->pc == 0x1BB4F0u) {
        ctx->pc = 0x1BB4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB4ECu;
        // 0x1bb4f0: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB4F4u;
        goto label_1bb4f4;
    }
    ctx->pc = 0x1BB4ECu;
    {
        const bool branch_taken_0x1bb4ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BB4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB4ECu;
        // 0x1bb4f0: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb4ec) {
            ctx->pc = 0x1BB590u;
            goto label_1bb590;
        }
    }
    ctx->pc = 0x1BB4F4u;
label_1bb4f4:
    // 0x1bb4f4: 0x10830026  beq         $a0, $v1, . + 4 + (0x26 << 2)
label_1bb4f8:
    if (ctx->pc == 0x1BB4F8u) {
        ctx->pc = 0x1BB4FCu;
        goto label_1bb4fc;
    }
    ctx->pc = 0x1BB4F4u;
    {
        const bool branch_taken_0x1bb4f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bb4f4) {
            ctx->pc = 0x1BB590u;
            goto label_1bb590;
        }
    }
    ctx->pc = 0x1BB4FCu;
label_1bb4fc:
    // 0x1bb4fc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1bb4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1bb500:
    // 0x1bb500: 0x90a30006  lbu         $v1, 0x6($a1)
    ctx->pc = 0x1bb500u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
label_1bb504:
    // 0x1bb504: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_1bb508:
    if (ctx->pc == 0x1BB508u) {
        ctx->pc = 0x1BB50Cu;
        goto label_1bb50c;
    }
    ctx->pc = 0x1BB504u;
    {
        const bool branch_taken_0x1bb504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb504) {
            ctx->pc = 0x1BB590u;
            goto label_1bb590;
        }
    }
    ctx->pc = 0x1BB50Cu;
label_1bb50c:
    // 0x1bb50c: 0x90a40012  lbu         $a0, 0x12($a1)
    ctx->pc = 0x1bb50cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 18)));
label_1bb510:
    // 0x1bb510: 0x28830002  slti        $v1, $a0, 0x2
    ctx->pc = 0x1bb510u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_1bb514:
    // 0x1bb514: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1bb518:
    if (ctx->pc == 0x1BB518u) {
        ctx->pc = 0x1BB518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB514u;
        // 0x1bb518: 0x28810006  slti        $at, $a0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB51Cu;
        goto label_1bb51c;
    }
    ctx->pc = 0x1BB514u;
    {
        const bool branch_taken_0x1bb514 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB514u;
        // 0x1bb518: 0x28810006  slti        $at, $a0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb514) {
            ctx->pc = 0x1BB524u;
            goto label_1bb524;
        }
    }
    ctx->pc = 0x1BB51Cu;
label_1bb51c:
    // 0x1bb51c: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
label_1bb520:
    if (ctx->pc == 0x1BB520u) {
        ctx->pc = 0x1BB524u;
        goto label_1bb524;
    }
    ctx->pc = 0x1BB51Cu;
    {
        const bool branch_taken_0x1bb51c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb51c) {
            ctx->pc = 0x1BB544u;
            goto label_1bb544;
        }
    }
    ctx->pc = 0x1BB524u;
label_1bb524:
    // 0x1bb524: 0x90a40014  lbu         $a0, 0x14($a1)
    ctx->pc = 0x1bb524u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 20)));
label_1bb528:
    // 0x1bb528: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1bb528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1bb52c:
    // 0x1bb52c: 0x14830018  bne         $a0, $v1, . + 4 + (0x18 << 2)
label_1bb530:
    if (ctx->pc == 0x1BB530u) {
        ctx->pc = 0x1BB534u;
        goto label_1bb534;
    }
    ctx->pc = 0x1BB52Cu;
    {
        const bool branch_taken_0x1bb52c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bb52c) {
            ctx->pc = 0x1BB590u;
            goto label_1bb590;
        }
    }
    ctx->pc = 0x1BB534u;
label_1bb534:
    // 0x1bb534: 0x92240039  lbu         $a0, 0x39($s1)
    ctx->pc = 0x1bb534u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 57)));
label_1bb538:
    // 0x1bb538: 0x2403004a  addiu       $v1, $zero, 0x4A
    ctx->pc = 0x1bb538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_1bb53c:
    // 0x1bb53c: 0x14830014  bne         $a0, $v1, . + 4 + (0x14 << 2)
label_1bb540:
    if (ctx->pc == 0x1BB540u) {
        ctx->pc = 0x1BB544u;
        goto label_1bb544;
    }
    ctx->pc = 0x1BB53Cu;
    {
        const bool branch_taken_0x1bb53c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bb53c) {
            ctx->pc = 0x1BB590u;
            goto label_1bb590;
        }
    }
    ctx->pc = 0x1BB544u;
label_1bb544:
    // 0x1bb544: 0x90a30011  lbu         $v1, 0x11($a1)
    ctx->pc = 0x1bb544u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 17)));
label_1bb548:
    // 0x1bb548: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x1bb548u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_1bb54c:
    // 0x1bb54c: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x1bb54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
label_1bb550:
    // 0x1bb550: 0x92250034  lbu         $a1, 0x34($s1)
    ctx->pc = 0x1bb550u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
label_1bb554:
    // 0x1bb554: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1bb554u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1bb558:
    // 0x1bb558: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bb558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bb55c:
    // 0x1bb55c: 0x51a00  sll         $v1, $a1, 8
    ctx->pc = 0x1bb55cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1bb560:
    // 0x1bb560: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x1bb560u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1bb564:
    // 0x1bb564: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1bb564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1bb568:
    // 0x1bb568: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1bb568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1bb56c:
    // 0x1bb56c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1bb56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1bb570:
    // 0x1bb570: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1bb570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1bb574:
    // 0x1bb574: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1bb574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1bb578:
    // 0x1bb578: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1bb578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1bb57c:
    // 0x1bb57c: 0xc04485c  jal         func_112170
label_1bb580:
    if (ctx->pc == 0x1BB580u) {
        ctx->pc = 0x1BB580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB57Cu;
        // 0x1bb580: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB584u;
        goto label_1bb584;
    }
    ctx->pc = 0x1BB57Cu;
    SET_GPR_U32(ctx, 31, 0x1BB584u);
    ctx->pc = 0x1BB580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB57Cu;
    // 0x1bb580: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112170u, 0x1BB57Cu, 0x1BB584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB584u;
label_1bb584:
    // 0x1bb584: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1bb588:
    if (ctx->pc == 0x1BB588u) {
        ctx->pc = 0x1BB588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB584u;
        // 0x1bb588: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB58Cu;
        goto label_1bb58c;
    }
    ctx->pc = 0x1BB584u;
    {
        const bool branch_taken_0x1bb584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB584u;
        // 0x1bb588: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb584) {
            ctx->pc = 0x1BB590u;
            goto label_1bb590;
        }
    }
    ctx->pc = 0x1BB58Cu;
label_1bb58c:
    // 0x1bb58c: 0xa2230036  sb          $v1, 0x36($s1)
    ctx->pc = 0x1bb58cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 54), (uint8_t)GPR_U32(ctx, 3));
label_1bb590:
    // 0x1bb590: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1bb590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1bb594:
    // 0x1bb594: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bb594u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bb598:
    // 0x1bb598: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bb598u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bb59c:
    // 0x1bb59c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bb59cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1bb5a0:
    // 0x1bb5a0: 0x3e00008  jr          $ra
label_1bb5a4:
    if (ctx->pc == 0x1BB5A4u) {
        ctx->pc = 0x1BB5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB5A0u;
        // 0x1bb5a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB5A8u;
        goto label_1bb5a8;
    }
    ctx->pc = 0x1BB5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB5A0u;
        // 0x1bb5a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB5A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB5A8u;
label_1bb5a8:
    // 0x1bb5a8: 0x0  nop
    ctx->pc = 0x1bb5a8u;
    // NOP
label_1bb5ac:
    // 0x1bb5ac: 0x0  nop
    ctx->pc = 0x1bb5acu;
    // NOP
label_1bb5b0:
    // 0x1bb5b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1bb5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1bb5b4:
    // 0x1bb5b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1bb5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1bb5b8:
    // 0x1bb5b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1bb5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1bb5bc:
    // 0x1bb5bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bb5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1bb5c0:
    // 0x1bb5c0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1bb5c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bb5c4:
    // 0x1bb5c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bb5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1bb5c8:
    // 0x1bb5c8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1bb5c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1bb5cc:
    // 0x1bb5cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bb5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1bb5d0:
    // 0x1bb5d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bb5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1bb5d4:
    // 0x1bb5d4: 0x90820038  lbu         $v0, 0x38($a0)
    ctx->pc = 0x1bb5d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 56)));
label_1bb5d8:
    // 0x1bb5d8: 0x284100ff  slti        $at, $v0, 0xFF
    ctx->pc = 0x1bb5d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
label_1bb5dc:
    // 0x1bb5dc: 0x1020005a  beqz        $at, . + 4 + (0x5A << 2)
label_1bb5e0:
    if (ctx->pc == 0x1BB5E0u) {
        ctx->pc = 0x1BB5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB5DCu;
        // 0x1bb5e0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB5E4u;
        goto label_1bb5e4;
    }
    ctx->pc = 0x1BB5DCu;
    {
        const bool branch_taken_0x1bb5dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB5DCu;
        // 0x1bb5e0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb5dc) {
            ctx->pc = 0x1BB748u;
            goto label_1bb748;
        }
    }
    ctx->pc = 0x1BB5E4u;
label_1bb5e4:
    // 0x1bb5e4: 0x92850034  lbu         $a1, 0x34($s4)
    ctx->pc = 0x1bb5e4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 52)));
label_1bb5e8:
    // 0x1bb5e8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1bb5e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1bb5ec:
    // 0x1bb5ec: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1bb5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1bb5f0:
    // 0x1bb5f0: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x1bb5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_1bb5f4:
    // 0x1bb5f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bb5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bb5f8:
    // 0x1bb5f8: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x1bb5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
label_1bb5fc:
    // 0x1bb5fc: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1bb5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1bb600:
    // 0x1bb600: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1bb600u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bb604:
    // 0x1bb604: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x1bb604u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
label_1bb608:
    // 0x1bb608: 0x51200  sll         $v0, $a1, 8
    ctx->pc = 0x1bb608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1bb60c:
    // 0x1bb60c: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x1bb60cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1bb610:
    // 0x1bb610: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1bb610u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1bb614:
    // 0x1bb614: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1bb614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1bb618:
    // 0x1bb618: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1bb618u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1bb61c:
    // 0x1bb61c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1bb61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1bb620:
    // 0x1bb620: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1bb620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1bb624:
    // 0x1bb624: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x1bb624u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bb628:
    // 0x1bb628: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1bb628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1bb62c:
    // 0x1bb62c: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x1bb62cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
label_1bb630:
    // 0x1bb630: 0x28410006  slti        $at, $v0, 0x6
    ctx->pc = 0x1bb630u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
label_1bb634:
    // 0x1bb634: 0x1800a  movz        $s0, $zero, $at
    ctx->pc = 0x1bb634u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_1bb638:
    // 0x1bb638: 0xc0448bc  jal         func_1122F0
label_1bb63c:
    if (ctx->pc == 0x1BB63Cu) {
        ctx->pc = 0x1BB63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB638u;
        // 0x1bb63c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB640u;
        goto label_1bb640;
    }
    ctx->pc = 0x1BB638u;
    SET_GPR_U32(ctx, 31, 0x1BB640u);
    ctx->pc = 0x1BB63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB638u;
    // 0x1bb63c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1122F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1122F0u, 0x1BB638u, 0x1BB640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB640u;
label_1bb640:
    // 0x1bb640: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_1bb644:
    if (ctx->pc == 0x1BB644u) {
        ctx->pc = 0x1BB648u;
        goto label_1bb648;
    }
    ctx->pc = 0x1BB640u;
    {
        const bool branch_taken_0x1bb640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb640) {
            ctx->pc = 0x1BB6C4u;
            goto label_1bb6c4;
        }
    }
    ctx->pc = 0x1BB648u;
label_1bb648:
    // 0x1bb648: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
label_1bb64c:
    if (ctx->pc == 0x1BB64Cu) {
        ctx->pc = 0x1BB650u;
        goto label_1bb650;
    }
    ctx->pc = 0x1BB648u;
    {
        const bool branch_taken_0x1bb648 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb648) {
            ctx->pc = 0x1BB6C4u;
            goto label_1bb6c4;
        }
    }
    ctx->pc = 0x1BB650u;
label_1bb650:
    // 0x1bb650: 0x86230042  lh          $v1, 0x42($s1)
    ctx->pc = 0x1bb650u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 66)));
label_1bb654:
    // 0x1bb654: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x1bb654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1bb658:
    // 0x1bb658: 0xa6220042  sh          $v0, 0x42($s1)
    ctx->pc = 0x1bb658u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 66), (uint16_t)GPR_U32(ctx, 2));
label_1bb65c:
    // 0x1bb65c: 0x86220042  lh          $v0, 0x42($s1)
    ctx->pc = 0x1bb65cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 66)));
label_1bb660:
    // 0x1bb660: 0x28412710  slti        $at, $v0, 0x2710
    ctx->pc = 0x1bb660u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10000) ? 1 : 0);
label_1bb664:
    // 0x1bb664: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1bb668:
    if (ctx->pc == 0x1BB668u) {
        ctx->pc = 0x1BB66Cu;
        goto label_1bb66c;
    }
    ctx->pc = 0x1BB664u;
    {
        const bool branch_taken_0x1bb664 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb664) {
            ctx->pc = 0x1BB670u;
            goto label_1bb670;
        }
    }
    ctx->pc = 0x1BB66Cu;
label_1bb66c:
    // 0x1bb66c: 0x2402270f  addiu       $v0, $zero, 0x270F
    ctx->pc = 0x1bb66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
label_1bb670:
    // 0x1bb670: 0xa6220042  sh          $v0, 0x42($s1)
    ctx->pc = 0x1bb670u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 66), (uint16_t)GPR_U32(ctx, 2));
label_1bb674:
    // 0x1bb674: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x1bb674u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1bb678:
    // 0x1bb678: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x1bb678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
label_1bb67c:
    // 0x1bb67c: 0x86250042  lh          $a1, 0x42($s1)
    ctx->pc = 0x1bb67cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 66)));
label_1bb680:
    // 0x1bb680: 0x3446851f  ori         $a2, $v0, 0x851F
    ctx->pc = 0x1bb680u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
label_1bb684:
    // 0x1bb684: 0xc30018  mult        $zero, $a2, $v1
    ctx->pc = 0x1bb684u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1bb688:
    // 0x1bb688: 0x0  nop
    ctx->pc = 0x1bb688u;
    // NOP
label_1bb68c:
    // 0x1bb68c: 0x0  nop
    ctx->pc = 0x1bb68cu;
    // NOP
label_1bb690:
    // 0x1bb690: 0x1010  mfhi        $v0
    ctx->pc = 0x1bb690u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1bb694:
    // 0x1bb694: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x1bb694u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_1bb698:
    // 0x1bb698: 0xc50018  mult        $zero, $a2, $a1
    ctx->pc = 0x1bb698u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1bb69c:
    // 0x1bb69c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1bb69cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1bb6a0:
    // 0x1bb6a0: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1bb6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1bb6a4:
    // 0x1bb6a4: 0x1010  mfhi        $v0
    ctx->pc = 0x1bb6a4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1bb6a8:
    // 0x1bb6a8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1bb6a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1bb6ac:
    // 0x1bb6ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bb6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bb6b0:
    // 0x1bb6b0: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x1bb6b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1bb6b4:
    // 0x1bb6b4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1bb6b8:
    if (ctx->pc == 0x1BB6B8u) {
        ctx->pc = 0x1BB6BCu;
        goto label_1bb6bc;
    }
    ctx->pc = 0x1BB6B4u;
    {
        const bool branch_taken_0x1bb6b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb6b4) {
            ctx->pc = 0x1BB6C4u;
            goto label_1bb6c4;
        }
    }
    ctx->pc = 0x1BB6BCu;
label_1bb6bc:
    // 0x1bb6bc: 0xc072a30  jal         func_1CA8C0
label_1bb6c0:
    if (ctx->pc == 0x1BB6C0u) {
        ctx->pc = 0x1BB6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB6BCu;
        // 0x1bb6c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB6C4u;
        goto label_1bb6c4;
    }
    ctx->pc = 0x1BB6BCu;
    SET_GPR_U32(ctx, 31, 0x1BB6C4u);
    ctx->pc = 0x1BB6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB6BCu;
    // 0x1bb6c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA8C0u;
    { ctx->pc = 0x1ca8c0; return; }
    ctx->pc = 0x1BB6C4u;
label_1bb6c4:
    // 0x1bb6c4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1bb6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1bb6c8:
    // 0x1bb6c8: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x1bb6c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
label_1bb6cc:
    // 0x1bb6cc: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_1bb6d0:
    if (ctx->pc == 0x1BB6D0u) {
        ctx->pc = 0x1BB6D4u;
        goto label_1bb6d4;
    }
    ctx->pc = 0x1BB6CCu;
    {
        const bool branch_taken_0x1bb6cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb6cc) {
            ctx->pc = 0x1BB748u;
            goto label_1bb748;
        }
    }
    ctx->pc = 0x1BB6D4u;
label_1bb6d4:
    // 0x1bb6d4: 0x1660001c  bnez        $s3, . + 4 + (0x1C << 2)
label_1bb6d8:
    if (ctx->pc == 0x1BB6D8u) {
        ctx->pc = 0x1BB6DCu;
        goto label_1bb6dc;
    }
    ctx->pc = 0x1BB6D4u;
    {
        const bool branch_taken_0x1bb6d4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb6d4) {
            ctx->pc = 0x1BB748u;
            goto label_1bb748;
        }
    }
    ctx->pc = 0x1BB6DCu;
label_1bb6dc:
    // 0x1bb6dc: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1bb6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bb6e0:
    // 0x1bb6e0: 0x90620012  lbu         $v0, 0x12($v1)
    ctx->pc = 0x1bb6e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
label_1bb6e4:
    // 0x1bb6e4: 0x28410006  slti        $at, $v0, 0x6
    ctx->pc = 0x1bb6e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
label_1bb6e8:
    // 0x1bb6e8: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
label_1bb6ec:
    if (ctx->pc == 0x1BB6ECu) {
        ctx->pc = 0x1BB6F0u;
        goto label_1bb6f0;
    }
    ctx->pc = 0x1BB6E8u;
    {
        const bool branch_taken_0x1bb6e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb6e8) {
            ctx->pc = 0x1BB748u;
            goto label_1bb748;
        }
    }
    ctx->pc = 0x1BB6F0u;
label_1bb6f0:
    // 0x1bb6f0: 0x9465001c  lhu         $a1, 0x1C($v1)
    ctx->pc = 0x1bb6f0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
label_1bb6f4:
    // 0x1bb6f4: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1bb6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
label_1bb6f8:
    // 0x1bb6f8: 0x248420d8  addiu       $a0, $a0, 0x20D8
    ctx->pc = 0x1bb6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8408));
label_1bb6fc:
    // 0x1bb6fc: 0x92230039  lbu         $v1, 0x39($s1)
    ctx->pc = 0x1bb6fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 57)));
label_1bb700:
    // 0x1bb700: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1bb700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1bb704:
    // 0x1bb704: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bb704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bb708:
    // 0x1bb708: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1bb708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1bb70c:
    // 0x1bb70c: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x1bb70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1bb710:
    // 0x1bb710: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1bb710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1bb714:
    // 0x1bb714: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1bb714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1bb718:
    // 0x1bb718: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1bb718u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1bb71c:
    // 0x1bb71c: 0x92230039  lbu         $v1, 0x39($s1)
    ctx->pc = 0x1bb71cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 57)));
label_1bb720:
    // 0x1bb720: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1bb720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1bb724:
    // 0x1bb724: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bb724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bb728:
    // 0x1bb728: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1bb728u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1bb72c:
    // 0x1bb72c: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x1bb72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1bb730:
    // 0x1bb730: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1bb730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1bb734:
    // 0x1bb734: 0x28412710  slti        $at, $v0, 0x2710
    ctx->pc = 0x1bb734u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10000) ? 1 : 0);
label_1bb738:
    // 0x1bb738: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1bb73c:
    if (ctx->pc == 0x1BB73Cu) {
        ctx->pc = 0x1BB740u;
        goto label_1bb740;
    }
    ctx->pc = 0x1BB738u;
    {
        const bool branch_taken_0x1bb738 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb738) {
            ctx->pc = 0x1BB744u;
            goto label_1bb744;
        }
    }
    ctx->pc = 0x1BB740u;
label_1bb740:
    // 0x1bb740: 0x2402270f  addiu       $v0, $zero, 0x270F
    ctx->pc = 0x1bb740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
label_1bb744:
    // 0x1bb744: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1bb744u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1bb748:
    // 0x1bb748: 0x92840034  lbu         $a0, 0x34($s4)
    ctx->pc = 0x1bb748u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 52)));
label_1bb74c:
    // 0x1bb74c: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
label_1bb750:
    if (ctx->pc == 0x1BB750u) {
        ctx->pc = 0x1BB750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB74Cu;
        // 0x1bb750: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB754u;
        goto label_1bb754;
    }
    ctx->pc = 0x1BB74Cu;
    {
        const bool branch_taken_0x1bb74c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB74Cu;
        // 0x1bb750: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb74c) {
            ctx->pc = 0x1BB7BCu;
            goto label_1bb7bc;
        }
    }
    ctx->pc = 0x1BB754u;
label_1bb754:
    // 0x1bb754: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bb754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1bb758:
    // 0x1bb758: 0x9022497c  lbu         $v0, 0x497C($at)
    ctx->pc = 0x1bb758u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18812)));
label_1bb75c:
    // 0x1bb75c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1bb760:
    if (ctx->pc == 0x1BB760u) {
        ctx->pc = 0x1BB764u;
        goto label_1bb764;
    }
    ctx->pc = 0x1BB75Cu;
    {
        const bool branch_taken_0x1bb75c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb75c) {
            ctx->pc = 0x1BB788u;
            goto label_1bb788;
        }
    }
    ctx->pc = 0x1BB764u;
label_1bb764:
    // 0x1bb764: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bb764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1bb768:
    // 0x1bb768: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1bb768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1bb76c:
    // 0x1bb76c: 0x8c234968  lw          $v1, 0x4968($at)
    ctx->pc = 0x1bb76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18792)));
label_1bb770:
    // 0x1bb770: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bb770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1bb774:
    // 0x1bb774: 0xdc630270  ld          $v1, 0x270($v1)
    ctx->pc = 0x1bb774u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 624)));
label_1bb778:
    // 0x1bb778: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1bb778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1bb77c:
    // 0x1bb77c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1bb780:
    if (ctx->pc == 0x1BB780u) {
        ctx->pc = 0x1BB784u;
        goto label_1bb784;
    }
    ctx->pc = 0x1BB77Cu;
    {
        const bool branch_taken_0x1bb77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb77c) {
            ctx->pc = 0x1BB788u;
            goto label_1bb788;
        }
    }
    ctx->pc = 0x1BB784u;
label_1bb784:
    // 0x1bb784: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1bb784u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bb788:
    // 0x1bb788: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bb788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1bb78c:
    // 0x1bb78c: 0x90224a0c  lbu         $v0, 0x4A0C($at)
    ctx->pc = 0x1bb78cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18956)));
label_1bb790:
    // 0x1bb790: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1bb794:
    if (ctx->pc == 0x1BB794u) {
        ctx->pc = 0x1BB798u;
        goto label_1bb798;
    }
    ctx->pc = 0x1BB790u;
    {
        const bool branch_taken_0x1bb790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb790) {
            ctx->pc = 0x1BB7BCu;
            goto label_1bb7bc;
        }
    }
    ctx->pc = 0x1BB798u;
label_1bb798:
    // 0x1bb798: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bb798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1bb79c:
    // 0x1bb79c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1bb79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1bb7a0:
    // 0x1bb7a0: 0x8c2349f8  lw          $v1, 0x49F8($at)
    ctx->pc = 0x1bb7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18936)));
label_1bb7a4:
    // 0x1bb7a4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bb7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1bb7a8:
    // 0x1bb7a8: 0xdc630270  ld          $v1, 0x270($v1)
    ctx->pc = 0x1bb7a8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 624)));
label_1bb7ac:
    // 0x1bb7ac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1bb7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1bb7b0:
    // 0x1bb7b0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1bb7b4:
    if (ctx->pc == 0x1BB7B4u) {
        ctx->pc = 0x1BB7B8u;
        goto label_1bb7b8;
    }
    ctx->pc = 0x1BB7B0u;
    {
        const bool branch_taken_0x1bb7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb7b0) {
            ctx->pc = 0x1BB7BCu;
            goto label_1bb7bc;
        }
    }
    ctx->pc = 0x1BB7B8u;
label_1bb7b8:
    // 0x1bb7b8: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1bb7b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bb7bc:
    // 0x1bb7bc: 0x16600007  bnez        $s3, . + 4 + (0x7 << 2)
label_1bb7c0:
    if (ctx->pc == 0x1BB7C0u) {
        ctx->pc = 0x1BB7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB7BCu;
        // 0x1bb7c0: 0x121023  negu        $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB7C4u;
        goto label_1bb7c4;
    }
    ctx->pc = 0x1BB7BCu;
    {
        const bool branch_taken_0x1bb7bc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB7BCu;
        // 0x1bb7c0: 0x121023  negu        $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb7bc) {
            ctx->pc = 0x1BB7DCu;
            goto label_1bb7dc;
        }
    }
    ctx->pc = 0x1BB7C4u;
label_1bb7c4:
    // 0x1bb7c4: 0x9285003e  lbu         $a1, 0x3E($s4)
    ctx->pc = 0x1bb7c4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 62)));
label_1bb7c8:
    // 0x1bb7c8: 0x101023  negu        $v0, $s0
    ctx->pc = 0x1bb7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
label_1bb7cc:
    // 0x1bb7cc: 0xc0564fc  jal         func_1593F0
label_1bb7d0:
    if (ctx->pc == 0x1BB7D0u) {
        ctx->pc = 0x1BB7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB7CCu;
        // 0x1bb7d0: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB7D4u;
        goto label_1bb7d4;
    }
    ctx->pc = 0x1BB7CCu;
    SET_GPR_U32(ctx, 31, 0x1BB7D4u);
    ctx->pc = 0x1BB7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB7CCu;
    // 0x1bb7d0: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1593F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1593F0u, 0x1BB7CCu, 0x1BB7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB7D4u;
label_1bb7d4:
    // 0x1bb7d4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1bb7d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1bb7d8:
    // 0x1bb7d8: 0x121023  negu        $v0, $s2
    ctx->pc = 0x1bb7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
label_1bb7dc:
    // 0x1bb7dc: 0x92840034  lbu         $a0, 0x34($s4)
    ctx->pc = 0x1bb7dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 52)));
label_1bb7e0:
    // 0x1bb7e0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1bb7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1bb7e4:
    // 0x1bb7e4: 0x9285003e  lbu         $a1, 0x3E($s4)
    ctx->pc = 0x1bb7e4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 62)));
label_1bb7e8:
    // 0x1bb7e8: 0xc0564fc  jal         func_1593F0
label_1bb7ec:
    if (ctx->pc == 0x1BB7ECu) {
        ctx->pc = 0x1BB7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB7E8u;
        // 0x1bb7ec: 0x2023018  mult        $a2, $s0, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB7F0u;
        goto label_1bb7f0;
    }
    ctx->pc = 0x1BB7E8u;
    SET_GPR_U32(ctx, 31, 0x1BB7F0u);
    ctx->pc = 0x1BB7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB7E8u;
    // 0x1bb7ec: 0x2023018  mult        $a2, $s0, $v0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1593F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1593F0u, 0x1BB7E8u, 0x1BB7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB7F0u;
label_1bb7f0:
    // 0x1bb7f0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1bb7f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1bb7f4:
    // 0x1bb7f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1bb7f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1bb7f8:
    // 0x1bb7f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bb7f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1bb7fc:
    // 0x1bb7fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bb7fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bb800:
    // 0x1bb800: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bb800u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bb804:
    // 0x1bb804: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bb804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1bb808:
    // 0x1bb808: 0x3e00008  jr          $ra
label_1bb80c:
    if (ctx->pc == 0x1BB80Cu) {
        ctx->pc = 0x1BB80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB808u;
        // 0x1bb80c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB810u;
        goto label_1bb810;
    }
    ctx->pc = 0x1BB808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB808u;
        // 0x1bb80c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB810u;
label_1bb810:
    // 0x1bb810: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1bb810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1bb814:
    // 0x1bb814: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x1bb814u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
label_1bb818:
    // 0x1bb818: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
label_1bb81c:
    if (ctx->pc == 0x1BB81Cu) {
        ctx->pc = 0x1BB820u;
        goto label_1bb820;
    }
    ctx->pc = 0x1BB818u;
    {
        const bool branch_taken_0x1bb818 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb818) {
            ctx->pc = 0x1BB894u;
            goto label_1bb894;
        }
    }
    ctx->pc = 0x1BB820u;
label_1bb820:
    // 0x1bb820: 0x14c0001c  bnez        $a2, . + 4 + (0x1C << 2)
label_1bb824:
    if (ctx->pc == 0x1BB824u) {
        ctx->pc = 0x1BB828u;
        goto label_1bb828;
    }
    ctx->pc = 0x1BB820u;
    {
        const bool branch_taken_0x1bb820 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb820) {
            ctx->pc = 0x1BB894u;
            goto label_1bb894;
        }
    }
    ctx->pc = 0x1BB828u;
label_1bb828:
    // 0x1bb828: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1bb828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1bb82c:
    // 0x1bb82c: 0x90830012  lbu         $v1, 0x12($a0)
    ctx->pc = 0x1bb82cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
label_1bb830:
    // 0x1bb830: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x1bb830u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_1bb834:
    // 0x1bb834: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
label_1bb838:
    if (ctx->pc == 0x1BB838u) {
        ctx->pc = 0x1BB83Cu;
        goto label_1bb83c;
    }
    ctx->pc = 0x1BB834u;
    {
        const bool branch_taken_0x1bb834 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb834) {
            ctx->pc = 0x1BB894u;
            goto label_1bb894;
        }
    }
    ctx->pc = 0x1BB83Cu;
label_1bb83c:
    // 0x1bb83c: 0x9487001c  lhu         $a3, 0x1C($a0)
    ctx->pc = 0x1bb83cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
label_1bb840:
    // 0x1bb840: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x1bb840u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
label_1bb844:
    // 0x1bb844: 0x24c620d8  addiu       $a2, $a2, 0x20D8
    ctx->pc = 0x1bb844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8408));
label_1bb848:
    // 0x1bb848: 0x90a40039  lbu         $a0, 0x39($a1)
    ctx->pc = 0x1bb848u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 57)));
label_1bb84c:
    // 0x1bb84c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1bb84cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1bb850:
    // 0x1bb850: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bb850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bb854:
    // 0x1bb854: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1bb854u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1bb858:
    // 0x1bb858: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x1bb858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1bb85c:
    // 0x1bb85c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1bb85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1bb860:
    // 0x1bb860: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1bb860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1bb864:
    // 0x1bb864: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1bb864u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1bb868:
    // 0x1bb868: 0x90a40039  lbu         $a0, 0x39($a1)
    ctx->pc = 0x1bb868u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 57)));
label_1bb86c:
    // 0x1bb86c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1bb86cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1bb870:
    // 0x1bb870: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bb870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bb874:
    // 0x1bb874: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1bb874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1bb878:
    // 0x1bb878: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x1bb878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1bb87c:
    // 0x1bb87c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1bb87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1bb880:
    // 0x1bb880: 0x28612710  slti        $at, $v1, 0x2710
    ctx->pc = 0x1bb880u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10000) ? 1 : 0);
label_1bb884:
    // 0x1bb884: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1bb888:
    if (ctx->pc == 0x1BB888u) {
        ctx->pc = 0x1BB88Cu;
        goto label_1bb88c;
    }
    ctx->pc = 0x1BB884u;
    {
        const bool branch_taken_0x1bb884 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb884) {
            ctx->pc = 0x1BB890u;
            goto label_1bb890;
        }
    }
    ctx->pc = 0x1BB88Cu;
label_1bb88c:
    // 0x1bb88c: 0x2403270f  addiu       $v1, $zero, 0x270F
    ctx->pc = 0x1bb88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
label_1bb890:
    // 0x1bb890: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1bb890u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1bb894:
    // 0x1bb894: 0x3e00008  jr          $ra
label_1bb898:
    if (ctx->pc == 0x1BB898u) {
        ctx->pc = 0x1BB89Cu;
        goto label_1bb89c;
    }
    ctx->pc = 0x1BB894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB89Cu;
label_1bb89c:
    // 0x1bb89c: 0x0  nop
    ctx->pc = 0x1bb89cu;
    // NOP
label_1bb8a0:
    // 0x1bb8a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bb8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1bb8a4:
    // 0x1bb8a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1bb8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1bb8a8:
    // 0x1bb8a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bb8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1bb8ac:
    // 0x1bb8ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bb8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1bb8b0:
    // 0x1bb8b0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1bb8b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1bb8b4:
    // 0x1bb8b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bb8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1bb8b8:
    // 0x1bb8b8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1bb8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1bb8bc:
    // 0x1bb8bc: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x1bb8bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
label_1bb8c0:
    // 0x1bb8c0: 0x28410006  slti        $at, $v0, 0x6
    ctx->pc = 0x1bb8c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
label_1bb8c4:
    // 0x1bb8c4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1bb8c8:
    if (ctx->pc == 0x1BB8C8u) {
        ctx->pc = 0x1BB8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB8C4u;
        // 0x1bb8c8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB8CCu;
        goto label_1bb8cc;
    }
    ctx->pc = 0x1BB8C4u;
    {
        const bool branch_taken_0x1bb8c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB8C4u;
        // 0x1bb8c8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb8c4) {
            ctx->pc = 0x1BB8D4u;
            goto label_1bb8d4;
        }
    }
    ctx->pc = 0x1BB8CCu;
label_1bb8cc:
    // 0x1bb8cc: 0x10000003  b           . + 4 + (0x3 << 2)
label_1bb8d0:
    if (ctx->pc == 0x1BB8D0u) {
        ctx->pc = 0x1BB8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB8CCu;
        // 0x1bb8d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB8D4u;
        goto label_1bb8d4;
    }
    ctx->pc = 0x1BB8CCu;
    {
        const bool branch_taken_0x1bb8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB8CCu;
        // 0x1bb8d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb8cc) {
            ctx->pc = 0x1BB8DCu;
            goto label_1bb8dc;
        }
    }
    ctx->pc = 0x1BB8D4u;
label_1bb8d4:
    // 0x1bb8d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bb8d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bb8d8:
    // 0x1bb8d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1bb8d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bb8dc:
    // 0x1bb8dc: 0xc0448bc  jal         func_1122F0
label_1bb8e0:
    if (ctx->pc == 0x1BB8E0u) {
        ctx->pc = 0x1BB8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB8DCu;
        // 0x1bb8e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB8E4u;
        goto label_1bb8e4;
    }
    ctx->pc = 0x1BB8DCu;
    SET_GPR_U32(ctx, 31, 0x1BB8E4u);
    ctx->pc = 0x1BB8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB8DCu;
    // 0x1bb8e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1122F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1122F0u, 0x1BB8DCu, 0x1BB8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB8E4u;
label_1bb8e4:
    // 0x1bb8e4: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_1bb8e8:
    if (ctx->pc == 0x1BB8E8u) {
        ctx->pc = 0x1BB8ECu;
        goto label_1bb8ec;
    }
    ctx->pc = 0x1BB8E4u;
    {
        const bool branch_taken_0x1bb8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb8e4) {
            ctx->pc = 0x1BB968u;
            goto label_1bb968;
        }
    }
    ctx->pc = 0x1BB8ECu;
label_1bb8ec:
    // 0x1bb8ec: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
label_1bb8f0:
    if (ctx->pc == 0x1BB8F0u) {
        ctx->pc = 0x1BB8F4u;
        goto label_1bb8f4;
    }
    ctx->pc = 0x1BB8ECu;
    {
        const bool branch_taken_0x1bb8ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb8ec) {
            ctx->pc = 0x1BB968u;
            goto label_1bb968;
        }
    }
    ctx->pc = 0x1BB8F4u;
label_1bb8f4:
    // 0x1bb8f4: 0x86040042  lh          $a0, 0x42($s0)
    ctx->pc = 0x1bb8f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 66)));
label_1bb8f8:
    // 0x1bb8f8: 0x921821  addu        $v1, $a0, $s2
    ctx->pc = 0x1bb8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_1bb8fc:
    // 0x1bb8fc: 0xa6030042  sh          $v1, 0x42($s0)
    ctx->pc = 0x1bb8fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 66), (uint16_t)GPR_U32(ctx, 3));
label_1bb900:
    // 0x1bb900: 0x86030042  lh          $v1, 0x42($s0)
    ctx->pc = 0x1bb900u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 66)));
label_1bb904:
    // 0x1bb904: 0x28612710  slti        $at, $v1, 0x2710
    ctx->pc = 0x1bb904u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10000) ? 1 : 0);
label_1bb908:
    // 0x1bb908: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1bb90c:
    if (ctx->pc == 0x1BB90Cu) {
        ctx->pc = 0x1BB910u;
        goto label_1bb910;
    }
    ctx->pc = 0x1BB908u;
    {
        const bool branch_taken_0x1bb908 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb908) {
            ctx->pc = 0x1BB914u;
            goto label_1bb914;
        }
    }
    ctx->pc = 0x1BB910u;
label_1bb910:
    // 0x1bb910: 0x2403270f  addiu       $v1, $zero, 0x270F
    ctx->pc = 0x1bb910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
label_1bb914:
    // 0x1bb914: 0xa6030042  sh          $v1, 0x42($s0)
    ctx->pc = 0x1bb914u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 66), (uint16_t)GPR_U32(ctx, 3));
label_1bb918:
    // 0x1bb918: 0x437c2  srl         $a2, $a0, 31
    ctx->pc = 0x1bb918u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1bb91c:
    // 0x1bb91c: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x1bb91cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
label_1bb920:
    // 0x1bb920: 0x86050042  lh          $a1, 0x42($s0)
    ctx->pc = 0x1bb920u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 66)));
label_1bb924:
    // 0x1bb924: 0x3467851f  ori         $a3, $v1, 0x851F
    ctx->pc = 0x1bb924u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
label_1bb928:
    // 0x1bb928: 0xe40018  mult        $zero, $a3, $a0
    ctx->pc = 0x1bb928u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1bb92c:
    // 0x1bb92c: 0x0  nop
    ctx->pc = 0x1bb92cu;
    // NOP
label_1bb930:
    // 0x1bb930: 0x0  nop
    ctx->pc = 0x1bb930u;
    // NOP
label_1bb934:
    // 0x1bb934: 0x1810  mfhi        $v1
    ctx->pc = 0x1bb934u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1bb938:
    // 0x1bb938: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x1bb938u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_1bb93c:
    // 0x1bb93c: 0xe50018  mult        $zero, $a3, $a1
    ctx->pc = 0x1bb93cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1bb940:
    // 0x1bb940: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1bb940u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_1bb944:
    // 0x1bb944: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x1bb944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1bb948:
    // 0x1bb948: 0x1810  mfhi        $v1
    ctx->pc = 0x1bb948u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1bb94c:
    // 0x1bb94c: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1bb94cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_1bb950:
    // 0x1bb950: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bb950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bb954:
    // 0x1bb954: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x1bb954u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1bb958:
    // 0x1bb958: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1bb95c:
    if (ctx->pc == 0x1BB95Cu) {
        ctx->pc = 0x1BB960u;
        goto label_1bb960;
    }
    ctx->pc = 0x1BB958u;
    {
        const bool branch_taken_0x1bb958 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb958) {
            ctx->pc = 0x1BB968u;
            goto label_1bb968;
        }
    }
    ctx->pc = 0x1BB960u;
label_1bb960:
    // 0x1bb960: 0xc072a30  jal         func_1CA8C0
label_1bb964:
    if (ctx->pc == 0x1BB964u) {
        ctx->pc = 0x1BB964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB960u;
        // 0x1bb964: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB968u;
        goto label_1bb968;
    }
    ctx->pc = 0x1BB960u;
    SET_GPR_U32(ctx, 31, 0x1BB968u);
    ctx->pc = 0x1BB964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB960u;
    // 0x1bb964: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA8C0u;
    { ctx->pc = 0x1ca8c0; return; }
    ctx->pc = 0x1BB968u;
label_1bb968:
    // 0x1bb968: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1bb968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1bb96c:
    // 0x1bb96c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bb96cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bb970:
    // 0x1bb970: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bb970u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bb974:
    // 0x1bb974: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bb974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1bb978:
    // 0x1bb978: 0x3e00008  jr          $ra
label_1bb97c:
    if (ctx->pc == 0x1BB97Cu) {
        ctx->pc = 0x1BB97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB978u;
        // 0x1bb97c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB980u;
        goto label_1bb980;
    }
    ctx->pc = 0x1BB978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB978u;
        // 0x1bb97c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB980u;
label_1bb980:
    // 0x1bb980: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1bb980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1bb984:
    // 0x1bb984: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1bb984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1bb988:
    // 0x1bb988: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1bb988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1bb98c:
    // 0x1bb98c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1bb98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1bb990:
    // 0x1bb990: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1bb990u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bb994:
    // 0x1bb994: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1bb994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1bb998:
    // 0x1bb998: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1bb998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1bb99c:
    // 0x1bb99c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1bb99cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bb9a0:
    // 0x1bb9a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bb9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1bb9a4:
    // 0x1bb9a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bb9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1bb9a8:
    // 0x1bb9a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bb9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1bb9ac:
    // 0x1bb9ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bb9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1bb9b0:
    // 0x1bb9b0: 0x90850039  lbu         $a1, 0x39($a0)
    ctx->pc = 0x1bb9b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 57)));
label_1bb9b4:
    // 0x1bb9b4: 0x8f8384e0  lw          $v1, -0x7B20($gp)
    ctx->pc = 0x1bb9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
    ctx->pc = 0x1bb9b8u;
    return;
}
