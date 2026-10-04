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

// Function: FUN_0017d410
// Address: 0x17d410 - 0x27d534
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017d410_part345(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x225390u: goto label_225390;
        case 0x225394u: goto label_225394;
        case 0x225398u: goto label_225398;
        case 0x22539cu: goto label_22539c;
        case 0x2253a0u: goto label_2253a0;
        case 0x2253a4u: goto label_2253a4;
        case 0x2253a8u: goto label_2253a8;
        case 0x2253acu: goto label_2253ac;
        case 0x2253b0u: goto label_2253b0;
        case 0x2253b4u: goto label_2253b4;
        case 0x2253b8u: goto label_2253b8;
        case 0x2253bcu: goto label_2253bc;
        case 0x2253c0u: goto label_2253c0;
        case 0x2253c4u: goto label_2253c4;
        case 0x2253c8u: goto label_2253c8;
        case 0x2253ccu: goto label_2253cc;
        case 0x2253d0u: goto label_2253d0;
        case 0x2253d4u: goto label_2253d4;
        case 0x2253d8u: goto label_2253d8;
        case 0x2253dcu: goto label_2253dc;
        case 0x2253e0u: goto label_2253e0;
        case 0x2253e4u: goto label_2253e4;
        case 0x2253e8u: goto label_2253e8;
        case 0x2253ecu: goto label_2253ec;
        case 0x2253f0u: goto label_2253f0;
        case 0x2253f4u: goto label_2253f4;
        case 0x2253f8u: goto label_2253f8;
        case 0x2253fcu: goto label_2253fc;
        case 0x225400u: goto label_225400;
        case 0x225404u: goto label_225404;
        case 0x225408u: goto label_225408;
        case 0x22540cu: goto label_22540c;
        case 0x225410u: goto label_225410;
        case 0x225414u: goto label_225414;
        case 0x225418u: goto label_225418;
        case 0x22541cu: goto label_22541c;
        case 0x225420u: goto label_225420;
        case 0x225424u: goto label_225424;
        case 0x225428u: goto label_225428;
        case 0x22542cu: goto label_22542c;
        case 0x225430u: goto label_225430;
        case 0x225434u: goto label_225434;
        case 0x225438u: goto label_225438;
        case 0x22543cu: goto label_22543c;
        case 0x225440u: goto label_225440;
        case 0x225444u: goto label_225444;
        case 0x225448u: goto label_225448;
        case 0x22544cu: goto label_22544c;
        case 0x225450u: goto label_225450;
        case 0x225454u: goto label_225454;
        case 0x225458u: goto label_225458;
        case 0x22545cu: goto label_22545c;
        case 0x225460u: goto label_225460;
        case 0x225464u: goto label_225464;
        case 0x225468u: goto label_225468;
        case 0x22546cu: goto label_22546c;
        case 0x225470u: goto label_225470;
        case 0x225474u: goto label_225474;
        case 0x225478u: goto label_225478;
        case 0x22547cu: goto label_22547c;
        case 0x225480u: goto label_225480;
        case 0x225484u: goto label_225484;
        case 0x225488u: goto label_225488;
        case 0x22548cu: goto label_22548c;
        case 0x225490u: goto label_225490;
        case 0x225494u: goto label_225494;
        case 0x225498u: goto label_225498;
        case 0x22549cu: goto label_22549c;
        case 0x2254a0u: goto label_2254a0;
        case 0x2254a4u: goto label_2254a4;
        case 0x2254a8u: goto label_2254a8;
        case 0x2254acu: goto label_2254ac;
        case 0x2254b0u: goto label_2254b0;
        case 0x2254b4u: goto label_2254b4;
        case 0x2254b8u: goto label_2254b8;
        case 0x2254bcu: goto label_2254bc;
        case 0x2254c0u: goto label_2254c0;
        case 0x2254c4u: goto label_2254c4;
        case 0x2254c8u: goto label_2254c8;
        case 0x2254ccu: goto label_2254cc;
        case 0x2254d0u: goto label_2254d0;
        case 0x2254d4u: goto label_2254d4;
        case 0x2254d8u: goto label_2254d8;
        case 0x2254dcu: goto label_2254dc;
        case 0x2254e0u: goto label_2254e0;
        case 0x2254e4u: goto label_2254e4;
        case 0x2254e8u: goto label_2254e8;
        case 0x2254ecu: goto label_2254ec;
        case 0x2254f0u: goto label_2254f0;
        case 0x2254f4u: goto label_2254f4;
        case 0x2254f8u: goto label_2254f8;
        case 0x2254fcu: goto label_2254fc;
        case 0x225500u: goto label_225500;
        case 0x225504u: goto label_225504;
        case 0x225508u: goto label_225508;
        case 0x22550cu: goto label_22550c;
        case 0x225510u: goto label_225510;
        case 0x225514u: goto label_225514;
        case 0x225518u: goto label_225518;
        case 0x22551cu: goto label_22551c;
        case 0x225520u: goto label_225520;
        case 0x225524u: goto label_225524;
        case 0x225528u: goto label_225528;
        case 0x22552cu: goto label_22552c;
        case 0x225530u: goto label_225530;
        case 0x225534u: goto label_225534;
        case 0x225538u: goto label_225538;
        case 0x22553cu: goto label_22553c;
        case 0x225540u: goto label_225540;
        case 0x225544u: goto label_225544;
        case 0x225548u: goto label_225548;
        case 0x22554cu: goto label_22554c;
        case 0x225550u: goto label_225550;
        case 0x225554u: goto label_225554;
        case 0x225558u: goto label_225558;
        case 0x22555cu: goto label_22555c;
        case 0x225560u: goto label_225560;
        case 0x225564u: goto label_225564;
        case 0x225568u: goto label_225568;
        case 0x22556cu: goto label_22556c;
        case 0x225570u: goto label_225570;
        case 0x225574u: goto label_225574;
        case 0x225578u: goto label_225578;
        case 0x22557cu: goto label_22557c;
        case 0x225580u: goto label_225580;
        case 0x225584u: goto label_225584;
        case 0x225588u: goto label_225588;
        case 0x22558cu: goto label_22558c;
        case 0x225590u: goto label_225590;
        case 0x225594u: goto label_225594;
        case 0x225598u: goto label_225598;
        case 0x22559cu: goto label_22559c;
        case 0x2255a0u: goto label_2255a0;
        case 0x2255a4u: goto label_2255a4;
        case 0x2255a8u: goto label_2255a8;
        case 0x2255acu: goto label_2255ac;
        case 0x2255b0u: goto label_2255b0;
        case 0x2255b4u: goto label_2255b4;
        case 0x2255b8u: goto label_2255b8;
        case 0x2255bcu: goto label_2255bc;
        case 0x2255c0u: goto label_2255c0;
        case 0x2255c4u: goto label_2255c4;
        case 0x2255c8u: goto label_2255c8;
        case 0x2255ccu: goto label_2255cc;
        case 0x2255d0u: goto label_2255d0;
        case 0x2255d4u: goto label_2255d4;
        case 0x2255d8u: goto label_2255d8;
        case 0x2255dcu: goto label_2255dc;
        case 0x2255e0u: goto label_2255e0;
        case 0x2255e4u: goto label_2255e4;
        case 0x2255e8u: goto label_2255e8;
        case 0x2255ecu: goto label_2255ec;
        case 0x2255f0u: goto label_2255f0;
        case 0x2255f4u: goto label_2255f4;
        case 0x2255f8u: goto label_2255f8;
        case 0x2255fcu: goto label_2255fc;
        case 0x225600u: goto label_225600;
        case 0x225604u: goto label_225604;
        case 0x225608u: goto label_225608;
        case 0x22560cu: goto label_22560c;
        case 0x225610u: goto label_225610;
        case 0x225614u: goto label_225614;
        case 0x225618u: goto label_225618;
        case 0x22561cu: goto label_22561c;
        case 0x225620u: goto label_225620;
        case 0x225624u: goto label_225624;
        case 0x225628u: goto label_225628;
        case 0x22562cu: goto label_22562c;
        case 0x225630u: goto label_225630;
        case 0x225634u: goto label_225634;
        case 0x225638u: goto label_225638;
        case 0x22563cu: goto label_22563c;
        case 0x225640u: goto label_225640;
        case 0x225644u: goto label_225644;
        case 0x225648u: goto label_225648;
        case 0x22564cu: goto label_22564c;
        case 0x225650u: goto label_225650;
        case 0x225654u: goto label_225654;
        case 0x225658u: goto label_225658;
        case 0x22565cu: goto label_22565c;
        case 0x225660u: goto label_225660;
        case 0x225664u: goto label_225664;
        case 0x225668u: goto label_225668;
        case 0x22566cu: goto label_22566c;
        case 0x225670u: goto label_225670;
        case 0x225674u: goto label_225674;
        case 0x225678u: goto label_225678;
        case 0x22567cu: goto label_22567c;
        case 0x225680u: goto label_225680;
        case 0x225684u: goto label_225684;
        case 0x225688u: goto label_225688;
        case 0x22568cu: goto label_22568c;
        case 0x225690u: goto label_225690;
        case 0x225694u: goto label_225694;
        case 0x225698u: goto label_225698;
        case 0x22569cu: goto label_22569c;
        case 0x2256a0u: goto label_2256a0;
        case 0x2256a4u: goto label_2256a4;
        case 0x2256a8u: goto label_2256a8;
        case 0x2256acu: goto label_2256ac;
        case 0x2256b0u: goto label_2256b0;
        case 0x2256b4u: goto label_2256b4;
        case 0x2256b8u: goto label_2256b8;
        case 0x2256bcu: goto label_2256bc;
        case 0x2256c0u: goto label_2256c0;
        case 0x2256c4u: goto label_2256c4;
        case 0x2256c8u: goto label_2256c8;
        case 0x2256ccu: goto label_2256cc;
        case 0x2256d0u: goto label_2256d0;
        case 0x2256d4u: goto label_2256d4;
        case 0x2256d8u: goto label_2256d8;
        case 0x2256dcu: goto label_2256dc;
        case 0x2256e0u: goto label_2256e0;
        case 0x2256e4u: goto label_2256e4;
        case 0x2256e8u: goto label_2256e8;
        case 0x2256ecu: goto label_2256ec;
        case 0x2256f0u: goto label_2256f0;
        case 0x2256f4u: goto label_2256f4;
        case 0x2256f8u: goto label_2256f8;
        case 0x2256fcu: goto label_2256fc;
        case 0x225700u: goto label_225700;
        case 0x225704u: goto label_225704;
        case 0x225708u: goto label_225708;
        case 0x22570cu: goto label_22570c;
        case 0x225710u: goto label_225710;
        case 0x225714u: goto label_225714;
        case 0x225718u: goto label_225718;
        case 0x22571cu: goto label_22571c;
        case 0x225720u: goto label_225720;
        case 0x225724u: goto label_225724;
        case 0x225728u: goto label_225728;
        case 0x22572cu: goto label_22572c;
        case 0x225730u: goto label_225730;
        case 0x225734u: goto label_225734;
        case 0x225738u: goto label_225738;
        case 0x22573cu: goto label_22573c;
        case 0x225740u: goto label_225740;
        case 0x225744u: goto label_225744;
        case 0x225748u: goto label_225748;
        case 0x22574cu: goto label_22574c;
        case 0x225750u: goto label_225750;
        case 0x225754u: goto label_225754;
        case 0x225758u: goto label_225758;
        case 0x22575cu: goto label_22575c;
        case 0x225760u: goto label_225760;
        case 0x225764u: goto label_225764;
        case 0x225768u: goto label_225768;
        case 0x22576cu: goto label_22576c;
        case 0x225770u: goto label_225770;
        case 0x225774u: goto label_225774;
        case 0x225778u: goto label_225778;
        case 0x22577cu: goto label_22577c;
        case 0x225780u: goto label_225780;
        case 0x225784u: goto label_225784;
        case 0x225788u: goto label_225788;
        case 0x22578cu: goto label_22578c;
        case 0x225790u: goto label_225790;
        case 0x225794u: goto label_225794;
        case 0x225798u: goto label_225798;
        case 0x22579cu: goto label_22579c;
        case 0x2257a0u: goto label_2257a0;
        case 0x2257a4u: goto label_2257a4;
        case 0x2257a8u: goto label_2257a8;
        case 0x2257acu: goto label_2257ac;
        case 0x2257b0u: goto label_2257b0;
        case 0x2257b4u: goto label_2257b4;
        case 0x2257b8u: goto label_2257b8;
        case 0x2257bcu: goto label_2257bc;
        case 0x2257c0u: goto label_2257c0;
        case 0x2257c4u: goto label_2257c4;
        case 0x2257c8u: goto label_2257c8;
        case 0x2257ccu: goto label_2257cc;
        case 0x2257d0u: goto label_2257d0;
        case 0x2257d4u: goto label_2257d4;
        case 0x2257d8u: goto label_2257d8;
        case 0x2257dcu: goto label_2257dc;
        case 0x2257e0u: goto label_2257e0;
        case 0x2257e4u: goto label_2257e4;
        case 0x2257e8u: goto label_2257e8;
        case 0x2257ecu: goto label_2257ec;
        case 0x2257f0u: goto label_2257f0;
        case 0x2257f4u: goto label_2257f4;
        case 0x2257f8u: goto label_2257f8;
        case 0x2257fcu: goto label_2257fc;
        case 0x225800u: goto label_225800;
        case 0x225804u: goto label_225804;
        case 0x225808u: goto label_225808;
        case 0x22580cu: goto label_22580c;
        case 0x225810u: goto label_225810;
        case 0x225814u: goto label_225814;
        case 0x225818u: goto label_225818;
        case 0x22581cu: goto label_22581c;
        case 0x225820u: goto label_225820;
        case 0x225824u: goto label_225824;
        case 0x225828u: goto label_225828;
        case 0x22582cu: goto label_22582c;
        case 0x225830u: goto label_225830;
        case 0x225834u: goto label_225834;
        case 0x225838u: goto label_225838;
        case 0x22583cu: goto label_22583c;
        case 0x225840u: goto label_225840;
        case 0x225844u: goto label_225844;
        case 0x225848u: goto label_225848;
        case 0x22584cu: goto label_22584c;
        case 0x225850u: goto label_225850;
        case 0x225854u: goto label_225854;
        case 0x225858u: goto label_225858;
        case 0x22585cu: goto label_22585c;
        case 0x225860u: goto label_225860;
        case 0x225864u: goto label_225864;
        case 0x225868u: goto label_225868;
        case 0x22586cu: goto label_22586c;
        case 0x225870u: goto label_225870;
        case 0x225874u: goto label_225874;
        case 0x225878u: goto label_225878;
        case 0x22587cu: goto label_22587c;
        case 0x225880u: goto label_225880;
        case 0x225884u: goto label_225884;
        case 0x225888u: goto label_225888;
        case 0x22588cu: goto label_22588c;
        case 0x225890u: goto label_225890;
        case 0x225894u: goto label_225894;
        case 0x225898u: goto label_225898;
        case 0x22589cu: goto label_22589c;
        case 0x2258a0u: goto label_2258a0;
        case 0x2258a4u: goto label_2258a4;
        case 0x2258a8u: goto label_2258a8;
        case 0x2258acu: goto label_2258ac;
        case 0x2258b0u: goto label_2258b0;
        case 0x2258b4u: goto label_2258b4;
        case 0x2258b8u: goto label_2258b8;
        case 0x2258bcu: goto label_2258bc;
        case 0x2258c0u: goto label_2258c0;
        case 0x2258c4u: goto label_2258c4;
        case 0x2258c8u: goto label_2258c8;
        case 0x2258ccu: goto label_2258cc;
        case 0x2258d0u: goto label_2258d0;
        case 0x2258d4u: goto label_2258d4;
        case 0x2258d8u: goto label_2258d8;
        case 0x2258dcu: goto label_2258dc;
        case 0x2258e0u: goto label_2258e0;
        case 0x2258e4u: goto label_2258e4;
        case 0x2258e8u: goto label_2258e8;
        case 0x2258ecu: goto label_2258ec;
        case 0x2258f0u: goto label_2258f0;
        case 0x2258f4u: goto label_2258f4;
        case 0x2258f8u: goto label_2258f8;
        case 0x2258fcu: goto label_2258fc;
        case 0x225900u: goto label_225900;
        case 0x225904u: goto label_225904;
        case 0x225908u: goto label_225908;
        case 0x22590cu: goto label_22590c;
        case 0x225910u: goto label_225910;
        case 0x225914u: goto label_225914;
        case 0x225918u: goto label_225918;
        case 0x22591cu: goto label_22591c;
        case 0x225920u: goto label_225920;
        case 0x225924u: goto label_225924;
        case 0x225928u: goto label_225928;
        case 0x22592cu: goto label_22592c;
        case 0x225930u: goto label_225930;
        case 0x225934u: goto label_225934;
        case 0x225938u: goto label_225938;
        case 0x22593cu: goto label_22593c;
        case 0x225940u: goto label_225940;
        case 0x225944u: goto label_225944;
        case 0x225948u: goto label_225948;
        case 0x22594cu: goto label_22594c;
        case 0x225950u: goto label_225950;
        case 0x225954u: goto label_225954;
        case 0x225958u: goto label_225958;
        case 0x22595cu: goto label_22595c;
        case 0x225960u: goto label_225960;
        case 0x225964u: goto label_225964;
        case 0x225968u: goto label_225968;
        case 0x22596cu: goto label_22596c;
        case 0x225970u: goto label_225970;
        case 0x225974u: goto label_225974;
        case 0x225978u: goto label_225978;
        case 0x22597cu: goto label_22597c;
        case 0x225980u: goto label_225980;
        case 0x225984u: goto label_225984;
        case 0x225988u: goto label_225988;
        case 0x22598cu: goto label_22598c;
        case 0x225990u: goto label_225990;
        case 0x225994u: goto label_225994;
        case 0x225998u: goto label_225998;
        case 0x22599cu: goto label_22599c;
        case 0x2259a0u: goto label_2259a0;
        case 0x2259a4u: goto label_2259a4;
        case 0x2259a8u: goto label_2259a8;
        case 0x2259acu: goto label_2259ac;
        case 0x2259b0u: goto label_2259b0;
        case 0x2259b4u: goto label_2259b4;
        case 0x2259b8u: goto label_2259b8;
        case 0x2259bcu: goto label_2259bc;
        case 0x2259c0u: goto label_2259c0;
        case 0x2259c4u: goto label_2259c4;
        case 0x2259c8u: goto label_2259c8;
        case 0x2259ccu: goto label_2259cc;
        case 0x2259d0u: goto label_2259d0;
        case 0x2259d4u: goto label_2259d4;
        case 0x2259d8u: goto label_2259d8;
        case 0x2259dcu: goto label_2259dc;
        case 0x2259e0u: goto label_2259e0;
        case 0x2259e4u: goto label_2259e4;
        case 0x2259e8u: goto label_2259e8;
        case 0x2259ecu: goto label_2259ec;
        case 0x2259f0u: goto label_2259f0;
        case 0x2259f4u: goto label_2259f4;
        case 0x2259f8u: goto label_2259f8;
        case 0x2259fcu: goto label_2259fc;
        case 0x225a00u: goto label_225a00;
        case 0x225a04u: goto label_225a04;
        case 0x225a08u: goto label_225a08;
        case 0x225a0cu: goto label_225a0c;
        case 0x225a10u: goto label_225a10;
        case 0x225a14u: goto label_225a14;
        case 0x225a18u: goto label_225a18;
        case 0x225a1cu: goto label_225a1c;
        case 0x225a20u: goto label_225a20;
        case 0x225a24u: goto label_225a24;
        case 0x225a28u: goto label_225a28;
        case 0x225a2cu: goto label_225a2c;
        case 0x225a30u: goto label_225a30;
        case 0x225a34u: goto label_225a34;
        case 0x225a38u: goto label_225a38;
        case 0x225a3cu: goto label_225a3c;
        case 0x225a40u: goto label_225a40;
        case 0x225a44u: goto label_225a44;
        case 0x225a48u: goto label_225a48;
        case 0x225a4cu: goto label_225a4c;
        case 0x225a50u: goto label_225a50;
        case 0x225a54u: goto label_225a54;
        case 0x225a58u: goto label_225a58;
        case 0x225a5cu: goto label_225a5c;
        case 0x225a60u: goto label_225a60;
        case 0x225a64u: goto label_225a64;
        case 0x225a68u: goto label_225a68;
        case 0x225a6cu: goto label_225a6c;
        case 0x225a70u: goto label_225a70;
        case 0x225a74u: goto label_225a74;
        case 0x225a78u: goto label_225a78;
        case 0x225a7cu: goto label_225a7c;
        case 0x225a80u: goto label_225a80;
        case 0x225a84u: goto label_225a84;
        case 0x225a88u: goto label_225a88;
        case 0x225a8cu: goto label_225a8c;
        case 0x225a90u: goto label_225a90;
        case 0x225a94u: goto label_225a94;
        case 0x225a98u: goto label_225a98;
        case 0x225a9cu: goto label_225a9c;
        case 0x225aa0u: goto label_225aa0;
        case 0x225aa4u: goto label_225aa4;
        case 0x225aa8u: goto label_225aa8;
        case 0x225aacu: goto label_225aac;
        case 0x225ab0u: goto label_225ab0;
        case 0x225ab4u: goto label_225ab4;
        case 0x225ab8u: goto label_225ab8;
        case 0x225abcu: goto label_225abc;
        case 0x225ac0u: goto label_225ac0;
        case 0x225ac4u: goto label_225ac4;
        case 0x225ac8u: goto label_225ac8;
        case 0x225accu: goto label_225acc;
        case 0x225ad0u: goto label_225ad0;
        case 0x225ad4u: goto label_225ad4;
        case 0x225ad8u: goto label_225ad8;
        case 0x225adcu: goto label_225adc;
        case 0x225ae0u: goto label_225ae0;
        case 0x225ae4u: goto label_225ae4;
        case 0x225ae8u: goto label_225ae8;
        case 0x225aecu: goto label_225aec;
        case 0x225af0u: goto label_225af0;
        case 0x225af4u: goto label_225af4;
        case 0x225af8u: goto label_225af8;
        case 0x225afcu: goto label_225afc;
        case 0x225b00u: goto label_225b00;
        case 0x225b04u: goto label_225b04;
        case 0x225b08u: goto label_225b08;
        case 0x225b0cu: goto label_225b0c;
        case 0x225b10u: goto label_225b10;
        case 0x225b14u: goto label_225b14;
        case 0x225b18u: goto label_225b18;
        case 0x225b1cu: goto label_225b1c;
        case 0x225b20u: goto label_225b20;
        case 0x225b24u: goto label_225b24;
        case 0x225b28u: goto label_225b28;
        case 0x225b2cu: goto label_225b2c;
        case 0x225b30u: goto label_225b30;
        case 0x225b34u: goto label_225b34;
        case 0x225b38u: goto label_225b38;
        case 0x225b3cu: goto label_225b3c;
        case 0x225b40u: goto label_225b40;
        case 0x225b44u: goto label_225b44;
        case 0x225b48u: goto label_225b48;
        case 0x225b4cu: goto label_225b4c;
        case 0x225b50u: goto label_225b50;
        case 0x225b54u: goto label_225b54;
        case 0x225b58u: goto label_225b58;
        case 0x225b5cu: goto label_225b5c;
        default: return;
    }

label_225390:
    // 0x225390: 0x9065003d  lbu         $a1, 0x3D($v1)
    ctx->pc = 0x225390u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 61)));
label_225394:
    // 0x225394: 0x14a00023  bnez        $a1, . + 4 + (0x23 << 2)
label_225398:
    if (ctx->pc == 0x225398u) {
        ctx->pc = 0x22539Cu;
        goto label_22539c;
    }
    ctx->pc = 0x225394u;
    {
        const bool branch_taken_0x225394 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x225394) {
            ctx->pc = 0x225424u;
            goto label_225424;
        }
    }
    ctx->pc = 0x22539Cu;
label_22539c:
    // 0x22539c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x22539cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2253a0:
    // 0x2253a0: 0x90a50012  lbu         $a1, 0x12($a1)
    ctx->pc = 0x2253a0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 18)));
label_2253a4:
    // 0x2253a4: 0x10a0001f  beqz        $a1, . + 4 + (0x1F << 2)
label_2253a8:
    if (ctx->pc == 0x2253A8u) {
        ctx->pc = 0x2253ACu;
        goto label_2253ac;
    }
    ctx->pc = 0x2253A4u;
    {
        const bool branch_taken_0x2253a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2253a4) {
            ctx->pc = 0x225424u;
            goto label_225424;
        }
    }
    ctx->pc = 0x2253ACu;
label_2253ac:
    // 0x2253ac: 0x90650039  lbu         $a1, 0x39($v1)
    ctx->pc = 0x2253acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 57)));
label_2253b0:
    // 0x2253b0: 0x10a80019  beq         $a1, $t0, . + 4 + (0x19 << 2)
label_2253b4:
    if (ctx->pc == 0x2253B4u) {
        ctx->pc = 0x2253B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2253B0u;
        // 0x2253b4: 0x30a700ff  andi        $a3, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2253B8u;
        goto label_2253b8;
    }
    ctx->pc = 0x2253B0u;
    {
        const bool branch_taken_0x2253b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 8));
        ctx->pc = 0x2253B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2253B0u;
        // 0x2253b4: 0x30a700ff  andi        $a3, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2253b0) {
            ctx->pc = 0x225418u;
            goto label_225418;
        }
    }
    ctx->pc = 0x2253B8u;
label_2253b8:
    // 0x2253b8: 0x72840  sll         $a1, $a3, 1
    ctx->pc = 0x2253b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_2253bc:
    // 0x2253bc: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x2253bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_2253c0:
    // 0x2253c0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2253c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_2253c4:
    // 0x2253c4: 0xc55021  addu        $t2, $a2, $a1
    ctx->pc = 0x2253c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_2253c8:
    // 0x2253c8: 0x9145002e  lbu         $a1, 0x2E($t2)
    ctx->pc = 0x2253c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 46)));
label_2253cc:
    // 0x2253cc: 0x14a00014  bnez        $a1, . + 4 + (0x14 << 2)
label_2253d0:
    if (ctx->pc == 0x2253D0u) {
        ctx->pc = 0x2253D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2253CCu;
        // 0x2253d0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2253D4u;
        goto label_2253d4;
    }
    ctx->pc = 0x2253CCu;
    {
        const bool branch_taken_0x2253cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2253D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2253CCu;
        // 0x2253d0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2253cc) {
            ctx->pc = 0x225420u;
            goto label_225420;
        }
    }
    ctx->pc = 0x2253D4u;
label_2253d4:
    // 0x2253d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2253d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2253d8:
    // 0x2253d8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2253d8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2253dc:
    // 0x2253dc: 0x0  nop
    ctx->pc = 0x2253dcu;
    // NOP
label_2253e0:
    // 0x2253e0: 0x14b2821  addu        $a1, $t2, $t3
    ctx->pc = 0x2253e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_2253e4:
    // 0x2253e4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2253e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2253e8:
    // 0x2253e8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_2253ec:
    if (ctx->pc == 0x2253ECu) {
        ctx->pc = 0x2253F0u;
        goto label_2253f0;
    }
    ctx->pc = 0x2253E8u;
    {
        const bool branch_taken_0x2253e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2253e8) {
            ctx->pc = 0x225400u;
            goto label_225400;
        }
    }
    ctx->pc = 0x2253F0u;
label_2253f0:
    // 0x2253f0: 0x90a5023a  lbu         $a1, 0x23A($a1)
    ctx->pc = 0x2253f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 570)));
label_2253f4:
    // 0x2253f4: 0x14a00002  bnez        $a1, . + 4 + (0x2 << 2)
label_2253f8:
    if (ctx->pc == 0x2253F8u) {
        ctx->pc = 0x2253FCu;
        goto label_2253fc;
    }
    ctx->pc = 0x2253F4u;
    {
        const bool branch_taken_0x2253f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2253f4) {
            ctx->pc = 0x225400u;
            goto label_225400;
        }
    }
    ctx->pc = 0x2253FCu;
label_2253fc:
    // 0x2253fc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2253fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_225400:
    // 0x225400: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x225400u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_225404:
    // 0x225404: 0x28e50009  slti        $a1, $a3, 0x9
    ctx->pc = 0x225404u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)9) ? 1 : 0);
label_225408:
    // 0x225408: 0x14a0fff4  bnez        $a1, . + 4 + (-0xC << 2)
label_22540c:
    if (ctx->pc == 0x22540Cu) {
        ctx->pc = 0x22540Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225408u;
        // 0x22540c: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225410u;
        goto label_225410;
    }
    ctx->pc = 0x225408u;
    {
        const bool branch_taken_0x225408 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x22540Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225408u;
        // 0x22540c: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225408) {
            ctx->pc = 0x2253DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2253dc;
        }
    }
    ctx->pc = 0x225410u;
label_225410:
    // 0x225410: 0x10000003  b           . + 4 + (0x3 << 2)
label_225414:
    if (ctx->pc == 0x225414u) {
        ctx->pc = 0x225418u;
        goto label_225418;
    }
    ctx->pc = 0x225410u;
    {
        const bool branch_taken_0x225410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x225410) {
            ctx->pc = 0x225420u;
            goto label_225420;
        }
    }
    ctx->pc = 0x225418u;
label_225418:
    // 0x225418: 0x9069002a  lbu         $t1, 0x2A($v1)
    ctx->pc = 0x225418u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 42)));
label_22541c:
    // 0x22541c: 0x0  nop
    ctx->pc = 0x22541cu;
    // NOP
label_225420:
    // 0x225420: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x225420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_225424:
    // 0x225424: 0x0  nop
    ctx->pc = 0x225424u;
    // NOP
label_225428:
    // 0x225428: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x225428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_22542c:
    // 0x22542c: 0x288500ff  slti        $a1, $a0, 0xFF
    ctx->pc = 0x22542cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)255) ? 1 : 0);
label_225430:
    // 0x225430: 0x14a0ffd6  bnez        $a1, . + 4 + (-0x2A << 2)
label_225434:
    if (ctx->pc == 0x225434u) {
        ctx->pc = 0x225434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225430u;
        // 0x225434: 0x24630048  addiu       $v1, $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225438u;
        goto label_225438;
    }
    ctx->pc = 0x225430u;
    {
        const bool branch_taken_0x225430 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x225434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225430u;
        // 0x225434: 0x24630048  addiu       $v1, $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225430) {
            ctx->pc = 0x22538Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x22538c; return; }
        }
    }
    ctx->pc = 0x225438u;
label_225438:
    // 0x225438: 0x144000d6  bnez        $v0, . + 4 + (0xD6 << 2)
label_22543c:
    if (ctx->pc == 0x22543Cu) {
        ctx->pc = 0x225440u;
        goto label_225440;
    }
    ctx->pc = 0x225438u;
    {
        const bool branch_taken_0x225438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225438) {
            ctx->pc = 0x225794u;
            goto label_225794;
        }
    }
    ctx->pc = 0x225440u;
label_225440:
    // 0x225440: 0x100000d4  b           . + 4 + (0xD4 << 2)
label_225444:
    if (ctx->pc == 0x225444u) {
        ctx->pc = 0x225444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225440u;
        // 0x225444: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225448u;
        goto label_225448;
    }
    ctx->pc = 0x225440u;
    {
        const bool branch_taken_0x225440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225440u;
        // 0x225444: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225440) {
            ctx->pc = 0x225794u;
            goto label_225794;
        }
    }
    ctx->pc = 0x225448u;
label_225448:
    // 0x225448: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x225448u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22544c:
    // 0x22544c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x22544cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_225450:
    // 0x225450: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x225450u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_225454:
    // 0x225454: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x225454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
label_225458:
    // 0x225458: 0x3c021062  lui         $v0, 0x1062
    ctx->pc = 0x225458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4194 << 16));
label_22545c:
    // 0x22545c: 0x24632570  addiu       $v1, $v1, 0x2570
    ctx->pc = 0x22545cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9584));
label_225460:
    // 0x225460: 0x34464dd3  ori         $a2, $v0, 0x4DD3
    ctx->pc = 0x225460u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19923);
label_225464:
    // 0x225464: 0x723821  addu        $a3, $v1, $s2
    ctx->pc = 0x225464u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_225468:
    // 0x225468: 0x27b30069  addiu       $s3, $sp, 0x69
    ctx->pc = 0x225468u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 105));
label_22546c:
    // 0x22546c: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x22546cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_225470:
    // 0x225470: 0x24e40022  addiu       $a0, $a3, 0x22
    ctx->pc = 0x225470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 34));
label_225474:
    // 0x225474: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x225474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_225478:
    // 0x225478: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x225478u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_22547c:
    // 0x22547c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x22547cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_225480:
    // 0x225480: 0x0  nop
    ctx->pc = 0x225480u;
    // NOP
label_225484:
    // 0x225484: 0xc20018  mult        $zero, $a2, $v0
    ctx->pc = 0x225484u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_225488:
    // 0x225488: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x225488u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_22548c:
    // 0x22548c: 0x0  nop
    ctx->pc = 0x22548cu;
    // NOP
label_225490:
    // 0x225490: 0x1010  mfhi        $v0
    ctx->pc = 0x225490u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_225494:
    // 0x225494: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x225494u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_225498:
    // 0x225498: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x225498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22549c:
    // 0x22549c: 0xa3a20068  sb          $v0, 0x68($sp)
    ctx->pc = 0x22549cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 104), (uint8_t)GPR_U32(ctx, 2));
label_2254a0:
    // 0x2254a0: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x2254a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2254a4:
    // 0x2254a4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2254a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2254a8:
    // 0x2254a8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2254a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2254ac:
    // 0x2254ac: 0x0  nop
    ctx->pc = 0x2254acu;
    // NOP
label_2254b0:
    // 0x2254b0: 0xc20018  mult        $zero, $a2, $v0
    ctx->pc = 0x2254b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2254b4:
    // 0x2254b4: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2254b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_2254b8:
    // 0x2254b8: 0x0  nop
    ctx->pc = 0x2254b8u;
    // NOP
label_2254bc:
    // 0x2254bc: 0x1010  mfhi        $v0
    ctx->pc = 0x2254bcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2254c0:
    // 0x2254c0: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2254c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_2254c4:
    // 0x2254c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2254c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2254c8:
    // 0x2254c8: 0xc05d724  jal         func_175C90
label_2254cc:
    if (ctx->pc == 0x2254CCu) {
        ctx->pc = 0x2254CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2254C8u;
        // 0x2254cc: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2254D0u;
        goto label_2254d0;
    }
    ctx->pc = 0x2254C8u;
    SET_GPR_U32(ctx, 31, 0x2254D0u);
    ctx->pc = 0x2254CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2254C8u;
    // 0x2254cc: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175C90u, 0x2254C8u, 0x2254D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2254D0u;
label_2254d0:
    // 0x2254d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2254d4:
    if (ctx->pc == 0x2254D4u) {
        ctx->pc = 0x2254D8u;
        goto label_2254d8;
    }
    ctx->pc = 0x2254D0u;
    {
        const bool branch_taken_0x2254d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2254d0) {
            ctx->pc = 0x2254E0u;
            goto label_2254e0;
        }
    }
    ctx->pc = 0x2254D8u;
label_2254d8:
    // 0x2254d8: 0x10000005  b           . + 4 + (0x5 << 2)
label_2254dc:
    if (ctx->pc == 0x2254DCu) {
        ctx->pc = 0x2254DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2254D8u;
        // 0x2254dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2254E0u;
        goto label_2254e0;
    }
    ctx->pc = 0x2254D8u;
    {
        const bool branch_taken_0x2254d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2254DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2254D8u;
        // 0x2254dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2254d8) {
            ctx->pc = 0x2254F0u;
            goto label_2254f0;
        }
    }
    ctx->pc = 0x2254E0u;
label_2254e0:
    // 0x2254e0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2254e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2254e4:
    // 0x2254e4: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x2254e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_2254e8:
    // 0x2254e8: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
label_2254ec:
    if (ctx->pc == 0x2254ECu) {
        ctx->pc = 0x2254ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2254E8u;
        // 0x2254ec: 0x265247b8  addiu       $s2, $s2, 0x47B8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 18360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2254F0u;
        goto label_2254f0;
    }
    ctx->pc = 0x2254E8u;
    {
        const bool branch_taken_0x2254e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2254ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2254E8u;
        // 0x2254ec: 0x265247b8  addiu       $s2, $s2, 0x47B8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 18360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2254e8) {
            ctx->pc = 0x225454u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_225454;
        }
    }
    ctx->pc = 0x2254F0u;
label_2254f0:
    // 0x2254f0: 0x120000a8  beqz        $s0, . + 4 + (0xA8 << 2)
label_2254f4:
    if (ctx->pc == 0x2254F4u) {
        ctx->pc = 0x2254F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2254F0u;
        // 0x2254f4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2254F8u;
        goto label_2254f8;
    }
    ctx->pc = 0x2254F0u;
    {
        const bool branch_taken_0x2254f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2254F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2254F0u;
        // 0x2254f4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2254f0) {
            ctx->pc = 0x225794u;
            goto label_225794;
        }
    }
    ctx->pc = 0x2254F8u;
label_2254f8:
    // 0x2254f8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2254f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2254fc:
    // 0x2254fc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2254fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_225500:
    // 0x225500: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x225500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
label_225504:
    // 0x225504: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x225504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_225508:
    // 0x225508: 0x24623620  addiu       $v0, $v1, 0x3620
    ctx->pc = 0x225508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 13856));
label_22550c:
    // 0x22550c: 0x9063367c  lbu         $v1, 0x367C($v1)
    ctx->pc = 0x22550cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13948)));
label_225510:
    // 0x225510: 0x10600040  beqz        $v1, . + 4 + (0x40 << 2)
label_225514:
    if (ctx->pc == 0x225514u) {
        ctx->pc = 0x225518u;
        goto label_225518;
    }
    ctx->pc = 0x225510u;
    {
        const bool branch_taken_0x225510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x225510) {
            ctx->pc = 0x225614u;
            goto label_225614;
        }
    }
    ctx->pc = 0x225518u;
label_225518:
    // 0x225518: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x225518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_22551c:
    // 0x22551c: 0x86230008  lh          $v1, 0x8($s1)
    ctx->pc = 0x22551cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_225520:
    // 0x225520: 0x1483003c  bne         $a0, $v1, . + 4 + (0x3C << 2)
label_225524:
    if (ctx->pc == 0x225524u) {
        ctx->pc = 0x225528u;
        goto label_225528;
    }
    ctx->pc = 0x225520u;
    {
        const bool branch_taken_0x225520 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x225520) {
            ctx->pc = 0x225614u;
            goto label_225614;
        }
    }
    ctx->pc = 0x225528u;
label_225528:
    // 0x225528: 0x8c460048  lw          $a2, 0x48($v0)
    ctx->pc = 0x225528u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_22552c:
    // 0x22552c: 0x3c0368db  lui         $v1, 0x68DB
    ctx->pc = 0x22552cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26843 << 16));
label_225530:
    // 0x225530: 0x34688bad  ori         $t0, $v1, 0x8BAD
    ctx->pc = 0x225530u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)35757);
label_225534:
    // 0x225534: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x225534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_225538:
    // 0x225538: 0x3c031062  lui         $v1, 0x1062
    ctx->pc = 0x225538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
label_22553c:
    // 0x22553c: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x22553cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_225540:
    // 0x225540: 0x34674dd3  ori         $a3, $v1, 0x4DD3
    ctx->pc = 0x225540u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19923);
label_225544:
    // 0x225544: 0xc4c00150  lwc1        $f0, 0x150($a2)
    ctx->pc = 0x225544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_225548:
    // 0x225548: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x225548u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_22554c:
    // 0x22554c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x22554cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_225550:
    // 0x225550: 0x0  nop
    ctx->pc = 0x225550u;
    // NOP
label_225554:
    // 0x225554: 0x1030018  mult        $zero, $t0, $v1
    ctx->pc = 0x225554u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_225558:
    // 0x225558: 0x337c2  srl         $a2, $v1, 31
    ctx->pc = 0x225558u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_22555c:
    // 0x22555c: 0x0  nop
    ctx->pc = 0x22555cu;
    // NOP
label_225560:
    // 0x225560: 0x1810  mfhi        $v1
    ctx->pc = 0x225560u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_225564:
    // 0x225564: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x225564u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
label_225568:
    // 0x225568: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x225568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_22556c:
    // 0x22556c: 0xa3a3006c  sb          $v1, 0x6C($sp)
    ctx->pc = 0x22556cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 108), (uint8_t)GPR_U32(ctx, 3));
label_225570:
    // 0x225570: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x225570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_225574:
    // 0x225574: 0xc4600158  lwc1        $f0, 0x158($v1)
    ctx->pc = 0x225574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_225578:
    // 0x225578: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x225578u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_22557c:
    // 0x22557c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x22557cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_225580:
    // 0x225580: 0x0  nop
    ctx->pc = 0x225580u;
    // NOP
label_225584:
    // 0x225584: 0x1030018  mult        $zero, $t0, $v1
    ctx->pc = 0x225584u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_225588:
    // 0x225588: 0x337c2  srl         $a2, $v1, 31
    ctx->pc = 0x225588u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_22558c:
    // 0x22558c: 0x0  nop
    ctx->pc = 0x22558cu;
    // NOP
label_225590:
    // 0x225590: 0x1810  mfhi        $v1
    ctx->pc = 0x225590u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_225594:
    // 0x225594: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x225594u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
label_225598:
    // 0x225598: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x225598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_22559c:
    // 0x22559c: 0xa3a3006d  sb          $v1, 0x6D($sp)
    ctx->pc = 0x22559cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 109), (uint8_t)GPR_U32(ctx, 3));
label_2255a0:
    // 0x2255a0: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x2255a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2255a4:
    // 0x2255a4: 0xc4600150  lwc1        $f0, 0x150($v1)
    ctx->pc = 0x2255a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2255a8:
    // 0x2255a8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2255a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2255ac:
    // 0x2255ac: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2255acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2255b0:
    // 0x2255b0: 0x0  nop
    ctx->pc = 0x2255b0u;
    // NOP
label_2255b4:
    // 0x2255b4: 0xe30018  mult        $zero, $a3, $v1
    ctx->pc = 0x2255b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2255b8:
    // 0x2255b8: 0x337c2  srl         $a2, $v1, 31
    ctx->pc = 0x2255b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_2255bc:
    // 0x2255bc: 0x0  nop
    ctx->pc = 0x2255bcu;
    // NOP
label_2255c0:
    // 0x2255c0: 0x1810  mfhi        $v1
    ctx->pc = 0x2255c0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2255c4:
    // 0x2255c4: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x2255c4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
label_2255c8:
    // 0x2255c8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2255c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2255cc:
    // 0x2255cc: 0xa3a30068  sb          $v1, 0x68($sp)
    ctx->pc = 0x2255ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 104), (uint8_t)GPR_U32(ctx, 3));
label_2255d0:
    // 0x2255d0: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x2255d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2255d4:
    // 0x2255d4: 0xc4400158  lwc1        $f0, 0x158($v0)
    ctx->pc = 0x2255d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2255d8:
    // 0x2255d8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2255d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2255dc:
    // 0x2255dc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2255dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2255e0:
    // 0x2255e0: 0x0  nop
    ctx->pc = 0x2255e0u;
    // NOP
label_2255e4:
    // 0x2255e4: 0xe20018  mult        $zero, $a3, $v0
    ctx->pc = 0x2255e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2255e8:
    // 0x2255e8: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2255e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_2255ec:
    // 0x2255ec: 0x0  nop
    ctx->pc = 0x2255ecu;
    // NOP
label_2255f0:
    // 0x2255f0: 0x1010  mfhi        $v0
    ctx->pc = 0x2255f0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2255f4:
    // 0x2255f4: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2255f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_2255f8:
    // 0x2255f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2255f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2255fc:
    // 0x2255fc: 0xc05d724  jal         func_175C90
label_225600:
    if (ctx->pc == 0x225600u) {
        ctx->pc = 0x225600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2255FCu;
        // 0x225600: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225604u;
        goto label_225604;
    }
    ctx->pc = 0x2255FCu;
    SET_GPR_U32(ctx, 31, 0x225604u);
    ctx->pc = 0x225600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2255FCu;
    // 0x225600: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175C90u, 0x2255FCu, 0x225604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225604u;
label_225604:
    // 0x225604: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_225608:
    if (ctx->pc == 0x225608u) {
        ctx->pc = 0x22560Cu;
        goto label_22560c;
    }
    ctx->pc = 0x225604u;
    {
        const bool branch_taken_0x225604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x225604) {
            ctx->pc = 0x225614u;
            goto label_225614;
        }
    }
    ctx->pc = 0x22560Cu;
label_22560c:
    // 0x22560c: 0x10000061  b           . + 4 + (0x61 << 2)
label_225610:
    if (ctx->pc == 0x225610u) {
        ctx->pc = 0x225610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22560Cu;
        // 0x225610: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225614u;
        goto label_225614;
    }
    ctx->pc = 0x22560Cu;
    {
        const bool branch_taken_0x22560c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22560Cu;
        // 0x225610: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22560c) {
            ctx->pc = 0x225794u;
            goto label_225794;
        }
    }
    ctx->pc = 0x225614u;
label_225614:
    // 0x225614: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x225614u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_225618:
    // 0x225618: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x225618u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_22561c:
    // 0x22561c: 0x1440ffb7  bnez        $v0, . + 4 + (-0x49 << 2)
label_225620:
    if (ctx->pc == 0x225620u) {
        ctx->pc = 0x225620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22561Cu;
        // 0x225620: 0x26520090  addiu       $s2, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225624u;
        goto label_225624;
    }
    ctx->pc = 0x22561Cu;
    {
        const bool branch_taken_0x22561c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22561Cu;
        // 0x225620: 0x26520090  addiu       $s2, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22561c) {
            ctx->pc = 0x2254FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2254fc;
        }
    }
    ctx->pc = 0x225624u;
label_225624:
    // 0x225624: 0x1000005b  b           . + 4 + (0x5B << 2)
label_225628:
    if (ctx->pc == 0x225628u) {
        ctx->pc = 0x22562Cu;
        goto label_22562c;
    }
    ctx->pc = 0x225624u;
    {
        const bool branch_taken_0x225624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x225624) {
            ctx->pc = 0x225794u;
            goto label_225794;
        }
    }
    ctx->pc = 0x22562Cu;
label_22562c:
    // 0x22562c: 0x86250008  lh          $a1, 0x8($s1)
    ctx->pc = 0x22562cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_225630:
    // 0x225630: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x225630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
label_225634:
    // 0x225634: 0x24632570  addiu       $v1, $v1, 0x2570
    ctx->pc = 0x225634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9584));
label_225638:
    // 0x225638: 0x8622000a  lh          $v0, 0xA($s1)
    ctx->pc = 0x225638u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
label_22563c:
    // 0x22563c: 0x52200  sll         $a0, $a1, 8
    ctx->pc = 0x22563cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_225640:
    // 0x225640: 0x852823  subu        $a1, $a0, $a1
    ctx->pc = 0x225640u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_225644:
    // 0x225644: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x225644u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_225648:
    // 0x225648: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x225648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_22564c:
    // 0x22564c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x22564cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_225650:
    // 0x225650: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x225650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_225654:
    // 0x225654: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x225654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_225658:
    // 0x225658: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x225658u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_22565c:
    // 0x22565c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_225660:
    if (ctx->pc == 0x225660u) {
        ctx->pc = 0x225664u;
        goto label_225664;
    }
    ctx->pc = 0x22565Cu;
    {
        const bool branch_taken_0x22565c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22565c) {
            ctx->pc = 0x225668u;
            goto label_225668;
        }
    }
    ctx->pc = 0x225664u;
label_225664:
    // 0x225664: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x225664u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_225668:
    // 0x225668: 0x8622000c  lh          $v0, 0xC($s1)
    ctx->pc = 0x225668u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_22566c:
    // 0x22566c: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
label_225670:
    if (ctx->pc == 0x225670u) {
        ctx->pc = 0x225674u;
        goto label_225674;
    }
    ctx->pc = 0x22566Cu;
    {
        const bool branch_taken_0x22566c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22566c) {
            ctx->pc = 0x225794u;
            goto label_225794;
        }
    }
    ctx->pc = 0x225674u;
label_225674:
    // 0x225674: 0x10000047  b           . + 4 + (0x47 << 2)
label_225678:
    if (ctx->pc == 0x225678u) {
        ctx->pc = 0x225678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225674u;
        // 0x225678: 0x3a100001  xori        $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22567Cu;
        goto label_22567c;
    }
    ctx->pc = 0x225674u;
    {
        const bool branch_taken_0x225674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225674u;
        // 0x225678: 0x3a100001  xori        $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x225674) {
            ctx->pc = 0x225794u;
            goto label_225794;
        }
    }
    ctx->pc = 0x22567Cu;
label_22567c:
    // 0x22567c: 0x86240008  lh          $a0, 0x8($s1)
    ctx->pc = 0x22567cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_225680:
    // 0x225680: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x225680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
label_225684:
    // 0x225684: 0x24422570  addiu       $v0, $v0, 0x2570
    ctx->pc = 0x225684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9584));
label_225688:
    // 0x225688: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x225688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22568c:
    // 0x22568c: 0x41a00  sll         $v1, $a0, 8
    ctx->pc = 0x22568cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_225690:
    // 0x225690: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x225690u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_225694:
    // 0x225694: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x225694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_225698:
    // 0x225698: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x225698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_22569c:
    // 0x22569c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x22569cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2256a0:
    // 0x2256a0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2256a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2256a4:
    // 0x2256a4: 0x0  nop
    ctx->pc = 0x2256a4u;
    // NOP
label_2256a8:
    // 0x2256a8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2256a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2256ac:
    // 0x2256ac: 0x90620010  lbu         $v0, 0x10($v1)
    ctx->pc = 0x2256acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_2256b0:
    // 0x2256b0: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
label_2256b4:
    if (ctx->pc == 0x2256B4u) {
        ctx->pc = 0x2256B8u;
        goto label_2256b8;
    }
    ctx->pc = 0x2256B0u;
    {
        const bool branch_taken_0x2256b0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2256b0) {
            ctx->pc = 0x2256E0u;
            goto label_2256e0;
        }
    }
    ctx->pc = 0x2256B8u;
label_2256b8:
    // 0x2256b8: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x2256b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_2256bc:
    // 0x2256bc: 0x8622000a  lh          $v0, 0xA($s1)
    ctx->pc = 0x2256bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
label_2256c0:
    // 0x2256c0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_2256c4:
    if (ctx->pc == 0x2256C4u) {
        ctx->pc = 0x2256C8u;
        goto label_2256c8;
    }
    ctx->pc = 0x2256C0u;
    {
        const bool branch_taken_0x2256c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2256c0) {
            ctx->pc = 0x2256E0u;
            goto label_2256e0;
        }
    }
    ctx->pc = 0x2256C8u;
label_2256c8:
    // 0x2256c8: 0xc044894  jal         func_112250
label_2256cc:
    if (ctx->pc == 0x2256CCu) {
        ctx->pc = 0x2256D0u;
        goto label_2256d0;
    }
    ctx->pc = 0x2256C8u;
    SET_GPR_U32(ctx, 31, 0x2256D0u);
    ctx->pc = 0x112250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112250u, 0x2256C8u, 0x2256D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2256D0u;
label_2256d0:
    // 0x2256d0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2256d4:
    if (ctx->pc == 0x2256D4u) {
        ctx->pc = 0x2256D8u;
        goto label_2256d8;
    }
    ctx->pc = 0x2256D0u;
    {
        const bool branch_taken_0x2256d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2256d0) {
            ctx->pc = 0x2256F0u;
            goto label_2256f0;
        }
    }
    ctx->pc = 0x2256D8u;
label_2256d8:
    // 0x2256d8: 0x10000005  b           . + 4 + (0x5 << 2)
label_2256dc:
    if (ctx->pc == 0x2256DCu) {
        ctx->pc = 0x2256DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2256D8u;
        // 0x2256dc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2256E0u;
        goto label_2256e0;
    }
    ctx->pc = 0x2256D8u;
    {
        const bool branch_taken_0x2256d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2256DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2256D8u;
        // 0x2256dc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2256d8) {
            ctx->pc = 0x2256F0u;
            goto label_2256f0;
        }
    }
    ctx->pc = 0x2256E0u;
label_2256e0:
    // 0x2256e0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2256e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2256e4:
    // 0x2256e4: 0x28a200ff  slti        $v0, $a1, 0xFF
    ctx->pc = 0x2256e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)255) ? 1 : 0);
label_2256e8:
    // 0x2256e8: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_2256ec:
    if (ctx->pc == 0x2256ECu) {
        ctx->pc = 0x2256ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2256E8u;
        // 0x2256ec: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2256F0u;
        goto label_2256f0;
    }
    ctx->pc = 0x2256E8u;
    {
        const bool branch_taken_0x2256e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2256ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2256E8u;
        // 0x2256ec: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2256e8) {
            ctx->pc = 0x2256A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2256a4;
        }
    }
    ctx->pc = 0x2256F0u;
label_2256f0:
    // 0x2256f0: 0x8622000c  lh          $v0, 0xC($s1)
    ctx->pc = 0x2256f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_2256f4:
    // 0x2256f4: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
label_2256f8:
    if (ctx->pc == 0x2256F8u) {
        ctx->pc = 0x2256FCu;
        goto label_2256fc;
    }
    ctx->pc = 0x2256F4u;
    {
        const bool branch_taken_0x2256f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2256f4) {
            ctx->pc = 0x225794u;
            goto label_225794;
        }
    }
    ctx->pc = 0x2256FCu;
label_2256fc:
    // 0x2256fc: 0x10000025  b           . + 4 + (0x25 << 2)
label_225700:
    if (ctx->pc == 0x225700u) {
        ctx->pc = 0x225700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2256FCu;
        // 0x225700: 0x3a100001  xori        $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x225704u;
        goto label_225704;
    }
    ctx->pc = 0x2256FCu;
    {
        const bool branch_taken_0x2256fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2256FCu;
        // 0x225700: 0x3a100001  xori        $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2256fc) {
            ctx->pc = 0x225794u;
            goto label_225794;
        }
    }
    ctx->pc = 0x225704u;
label_225704:
    // 0x225704: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x225704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_225708:
    // 0x225708: 0x26526d28  addiu       $s2, $s2, 0x6D28
    ctx->pc = 0x225708u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 27944));
label_22570c:
    // 0x22570c: 0xa622000c  sh          $v0, 0xC($s1)
    ctx->pc = 0x22570cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
label_225710:
    // 0x225710: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x225710u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_225714:
    // 0x225714: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x225714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_225718:
    // 0x225718: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x225718u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
label_22571c:
    // 0x22571c: 0x28410006  slti        $at, $v0, 0x6
    ctx->pc = 0x22571cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
label_225720:
    // 0x225720: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_225724:
    if (ctx->pc == 0x225724u) {
        ctx->pc = 0x225724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225720u;
        // 0x225724: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225728u;
        goto label_225728;
    }
    ctx->pc = 0x225720u;
    {
        const bool branch_taken_0x225720 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x225724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225720u;
        // 0x225724: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225720) {
            ctx->pc = 0x225740u;
            goto label_225740;
        }
    }
    ctx->pc = 0x225728u;
label_225728:
    // 0x225728: 0xc0895f0  jal         func_2257C0
label_22572c:
    if (ctx->pc == 0x22572Cu) {
        ctx->pc = 0x22572Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225728u;
        // 0x22572c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225730u;
        goto label_225730;
    }
    ctx->pc = 0x225728u;
    SET_GPR_U32(ctx, 31, 0x225730u);
    ctx->pc = 0x22572Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225728u;
    // 0x22572c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2257C0u;
    goto label_2257c0;
    ctx->pc = 0x225730u;
label_225730:
    // 0x225730: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_225734:
    if (ctx->pc == 0x225734u) {
        ctx->pc = 0x225738u;
        goto label_225738;
    }
    ctx->pc = 0x225730u;
    {
        const bool branch_taken_0x225730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x225730) {
            ctx->pc = 0x225740u;
            goto label_225740;
        }
    }
    ctx->pc = 0x225738u;
label_225738:
    // 0x225738: 0x10000016  b           . + 4 + (0x16 << 2)
label_22573c:
    if (ctx->pc == 0x22573Cu) {
        ctx->pc = 0x22573Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225738u;
        // 0x22573c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225740u;
        goto label_225740;
    }
    ctx->pc = 0x225738u;
    {
        const bool branch_taken_0x225738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22573Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225738u;
        // 0x22573c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225738) {
            ctx->pc = 0x225794u;
            goto label_225794;
        }
    }
    ctx->pc = 0x225740u;
label_225740:
    // 0x225740: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x225740u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_225744:
    // 0x225744: 0x2a6200ff  slti        $v0, $s3, 0xFF
    ctx->pc = 0x225744u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)255) ? 1 : 0);
label_225748:
    // 0x225748: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_22574c:
    if (ctx->pc == 0x22574Cu) {
        ctx->pc = 0x22574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225748u;
        // 0x22574c: 0x26520048  addiu       $s2, $s2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225750u;
        goto label_225750;
    }
    ctx->pc = 0x225748u;
    {
        const bool branch_taken_0x225748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225748u;
        // 0x22574c: 0x26520048  addiu       $s2, $s2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225748) {
            ctx->pc = 0x225714u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_225714;
        }
    }
    ctx->pc = 0x225750u;
label_225750:
    // 0x225750: 0x10000010  b           . + 4 + (0x10 << 2)
label_225754:
    if (ctx->pc == 0x225754u) {
        ctx->pc = 0x225758u;
        goto label_225758;
    }
    ctx->pc = 0x225750u;
    {
        const bool branch_taken_0x225750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x225750) {
            ctx->pc = 0x225794u;
            goto label_225794;
        }
    }
    ctx->pc = 0x225758u;
label_225758:
    // 0x225758: 0x8f8592e4  lw          $a1, -0x6D1C($gp)
    ctx->pc = 0x225758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939364)));
label_22575c:
    // 0x22575c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x22575cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_225760:
    // 0x225760: 0x24634968  addiu       $v1, $v1, 0x4968
    ctx->pc = 0x225760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18792));
label_225764:
    // 0x225764: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x225764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_225768:
    // 0x225768: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x225768u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_22576c:
    // 0x22576c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x22576cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_225770:
    // 0x225770: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x225770u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_225774:
    // 0x225774: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x225774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_225778:
    // 0x225778: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x225778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22577c:
    // 0x22577c: 0x90630231  lbu         $v1, 0x231($v1)
    ctx->pc = 0x22577cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 561)));
label_225780:
    // 0x225780: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_225784:
    if (ctx->pc == 0x225784u) {
        ctx->pc = 0x225788u;
        goto label_225788;
    }
    ctx->pc = 0x225780u;
    {
        const bool branch_taken_0x225780 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x225780) {
            ctx->pc = 0x225794u;
            goto label_225794;
        }
    }
    ctx->pc = 0x225788u;
label_225788:
    // 0x225788: 0x10000002  b           . + 4 + (0x2 << 2)
label_22578c:
    if (ctx->pc == 0x22578Cu) {
        ctx->pc = 0x22578Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225788u;
        // 0x22578c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225790u;
        goto label_225790;
    }
    ctx->pc = 0x225788u;
    {
        const bool branch_taken_0x225788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22578Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225788u;
        // 0x22578c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225788) {
            ctx->pc = 0x225794u;
            goto label_225794;
        }
    }
    ctx->pc = 0x225790u;
label_225790:
    // 0x225790: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x225790u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_225794:
    // 0x225794: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x225794u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_225798:
    // 0x225798: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x225798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_22579c:
    // 0x22579c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22579cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2257a0:
    // 0x2257a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2257a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2257a4:
    // 0x2257a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2257a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2257a8:
    // 0x2257a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2257a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2257ac:
    // 0x2257ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2257acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2257b0:
    // 0x2257b0: 0x3e00008  jr          $ra
label_2257b4:
    if (ctx->pc == 0x2257B4u) {
        ctx->pc = 0x2257B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2257B0u;
        // 0x2257b4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2257B8u;
        goto label_2257b8;
    }
    ctx->pc = 0x2257B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2257B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2257B0u;
        // 0x2257b4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2257B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2257B8u;
label_2257b8:
    // 0x2257b8: 0x0  nop
    ctx->pc = 0x2257b8u;
    // NOP
label_2257bc:
    // 0x2257bc: 0x0  nop
    ctx->pc = 0x2257bcu;
    // NOP
label_2257c0:
    // 0x2257c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2257c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2257c4:
    // 0x2257c4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2257c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2257c8:
    // 0x2257c8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2257c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2257cc:
    // 0x2257cc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2257ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2257d0:
    // 0x2257d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2257d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2257d4:
    // 0x2257d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2257d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2257d8:
    // 0x2257d8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2257d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2257dc:
    // 0x2257dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2257dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2257e0:
    // 0x2257e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2257e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2257e4:
    // 0x2257e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2257e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2257e8:
    // 0x2257e8: 0xc0448bc  jal         func_1122F0
label_2257ec:
    if (ctx->pc == 0x2257ECu) {
        ctx->pc = 0x2257ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2257E8u;
        // 0x2257ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2257F0u;
        goto label_2257f0;
    }
    ctx->pc = 0x2257E8u;
    SET_GPR_U32(ctx, 31, 0x2257F0u);
    ctx->pc = 0x2257ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2257E8u;
    // 0x2257ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1122F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1122F0u, 0x2257E8u, 0x2257F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2257F0u;
label_2257f0:
    // 0x2257f0: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
label_2257f4:
    if (ctx->pc == 0x2257F4u) {
        ctx->pc = 0x2257F8u;
        goto label_2257f8;
    }
    ctx->pc = 0x2257F0u;
    {
        const bool branch_taken_0x2257f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2257f0) {
            ctx->pc = 0x225938u;
            goto label_225938;
        }
    }
    ctx->pc = 0x2257F8u;
label_2257f8:
    // 0x2257f8: 0x92030039  lbu         $v1, 0x39($s0)
    ctx->pc = 0x2257f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 57)));
label_2257fc:
    // 0x2257fc: 0x2402004a  addiu       $v0, $zero, 0x4A
    ctx->pc = 0x2257fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_225800:
    // 0x225800: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_225804:
    if (ctx->pc == 0x225804u) {
        ctx->pc = 0x225804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225800u;
        // 0x225804: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225808u;
        goto label_225808;
    }
    ctx->pc = 0x225800u;
    {
        const bool branch_taken_0x225800 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x225804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225800u;
        // 0x225804: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225800) {
            ctx->pc = 0x22580Cu;
            goto label_22580c;
        }
    }
    ctx->pc = 0x225808u;
label_225808:
    // 0x225808: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x225808u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22580c:
    // 0x22580c: 0x8623000c  lh          $v1, 0xC($s1)
    ctx->pc = 0x22580cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_225810:
    // 0x225810: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x225810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_225814:
    // 0x225814: 0x1462002f  bne         $v1, $v0, . + 4 + (0x2F << 2)
label_225818:
    if (ctx->pc == 0x225818u) {
        ctx->pc = 0x22581Cu;
        goto label_22581c;
    }
    ctx->pc = 0x225814u;
    {
        const bool branch_taken_0x225814 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x225814) {
            ctx->pc = 0x2258D4u;
            goto label_2258d4;
        }
    }
    ctx->pc = 0x22581Cu;
label_22581c:
    // 0x22581c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22581cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_225820:
    // 0x225820: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x225820u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_225824:
    // 0x225824: 0x0  nop
    ctx->pc = 0x225824u;
    // NOP
label_225828:
    // 0x225828: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x225828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_22582c:
    // 0x22582c: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x22582cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
label_225830:
    // 0x225830: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x225830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_225834:
    // 0x225834: 0x9062367c  lbu         $v0, 0x367C($v1)
    ctx->pc = 0x225834u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13948)));
label_225838:
    // 0x225838: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_22583c:
    if (ctx->pc == 0x22583Cu) {
        ctx->pc = 0x225840u;
        goto label_225840;
    }
    ctx->pc = 0x225838u;
    {
        const bool branch_taken_0x225838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x225838) {
            ctx->pc = 0x2258BCu;
            goto label_2258bc;
        }
    }
    ctx->pc = 0x225840u;
label_225840:
    // 0x225840: 0x8c643674  lw          $a0, 0x3674($v1)
    ctx->pc = 0x225840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13940)));
label_225844:
    // 0x225844: 0x92020034  lbu         $v0, 0x34($s0)
    ctx->pc = 0x225844u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
label_225848:
    // 0x225848: 0x1082001c  beq         $a0, $v0, . + 4 + (0x1C << 2)
label_22584c:
    if (ctx->pc == 0x22584Cu) {
        ctx->pc = 0x225850u;
        goto label_225850;
    }
    ctx->pc = 0x225848u;
    {
        const bool branch_taken_0x225848 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x225848) {
            ctx->pc = 0x2258BCu;
            goto label_2258bc;
        }
    }
    ctx->pc = 0x225850u;
label_225850:
    // 0x225850: 0x8c65366c  lw          $a1, 0x366C($v1)
    ctx->pc = 0x225850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13932)));
label_225854:
    // 0x225854: 0x2475366c  addiu       $s5, $v1, 0x366C
    ctx->pc = 0x225854u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 13932));
label_225858:
    // 0x225858: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x225858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
label_22585c:
    // 0x22585c: 0x24422570  addiu       $v0, $v0, 0x2570
    ctx->pc = 0x22585cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9584));
label_225860:
    // 0x225860: 0x41a00  sll         $v1, $a0, 8
    ctx->pc = 0x225860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_225864:
    // 0x225864: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x225864u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_225868:
    // 0x225868: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x225868u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_22586c:
    // 0x22586c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x22586cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_225870:
    // 0x225870: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x225870u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_225874:
    // 0x225874: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x225874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_225878:
    // 0x225878: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x225878u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_22587c:
    // 0x22587c: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x22587cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_225880:
    // 0x225880: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x225880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_225884:
    // 0x225884: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x225884u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_225888:
    // 0x225888: 0xc044894  jal         func_112250
label_22588c:
    if (ctx->pc == 0x22588Cu) {
        ctx->pc = 0x22588Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225888u;
        // 0x22588c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225890u;
        goto label_225890;
    }
    ctx->pc = 0x225888u;
    SET_GPR_U32(ctx, 31, 0x225890u);
    ctx->pc = 0x22588Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225888u;
    // 0x22588c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112250u, 0x225888u, 0x225890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225890u;
label_225890:
    // 0x225890: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_225894:
    if (ctx->pc == 0x225894u) {
        ctx->pc = 0x225898u;
        goto label_225898;
    }
    ctx->pc = 0x225890u;
    {
        const bool branch_taken_0x225890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225890) {
            ctx->pc = 0x2258BCu;
            goto label_2258bc;
        }
    }
    ctx->pc = 0x225898u;
label_225898:
    // 0x225898: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x225898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_22589c:
    // 0x22589c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22589cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2258a0:
    // 0x2258a0: 0xc05257c  jal         func_1495F0
label_2258a4:
    if (ctx->pc == 0x2258A4u) {
        ctx->pc = 0x2258A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2258A0u;
        // 0x2258a4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2258A8u;
        goto label_2258a8;
    }
    ctx->pc = 0x2258A0u;
    SET_GPR_U32(ctx, 31, 0x2258A8u);
    ctx->pc = 0x2258A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2258A0u;
    // 0x2258a4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1495F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1495F0u, 0x2258A0u, 0x2258A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2258A8u;
label_2258a8:
    // 0x2258a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2258ac:
    if (ctx->pc == 0x2258ACu) {
        ctx->pc = 0x2258B0u;
        goto label_2258b0;
    }
    ctx->pc = 0x2258A8u;
    {
        const bool branch_taken_0x2258a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2258a8) {
            ctx->pc = 0x2258BCu;
            goto label_2258bc;
        }
    }
    ctx->pc = 0x2258B0u;
label_2258b0:
    // 0x2258b0: 0xaf9192e4  sw          $s1, -0x6D1C($gp)
    ctx->pc = 0x2258b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939364), GPR_U32(ctx, 17));
label_2258b4:
    // 0x2258b4: 0x10000020  b           . + 4 + (0x20 << 2)
label_2258b8:
    if (ctx->pc == 0x2258B8u) {
        ctx->pc = 0x2258B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2258B4u;
        // 0x2258b8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2258BCu;
        goto label_2258bc;
    }
    ctx->pc = 0x2258B4u;
    {
        const bool branch_taken_0x2258b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2258B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2258B4u;
        // 0x2258b8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2258b4) {
            ctx->pc = 0x225938u;
            goto label_225938;
        }
    }
    ctx->pc = 0x2258BCu;
label_2258bc:
    // 0x2258bc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2258bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2258c0:
    // 0x2258c0: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x2258c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_2258c4:
    // 0x2258c4: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
label_2258c8:
    if (ctx->pc == 0x2258C8u) {
        ctx->pc = 0x2258C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2258C4u;
        // 0x2258c8: 0x26940090  addiu       $s4, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2258CCu;
        goto label_2258cc;
    }
    ctx->pc = 0x2258C4u;
    {
        const bool branch_taken_0x2258c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2258C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2258C4u;
        // 0x2258c8: 0x26940090  addiu       $s4, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2258c4) {
            ctx->pc = 0x225824u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_225824;
        }
    }
    ctx->pc = 0x2258CCu;
label_2258cc:
    // 0x2258cc: 0x1000001b  b           . + 4 + (0x1B << 2)
label_2258d0:
    if (ctx->pc == 0x2258D0u) {
        ctx->pc = 0x2258D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2258CCu;
        // 0x2258d0: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2258D4u;
        goto label_2258d4;
    }
    ctx->pc = 0x2258CCu;
    {
        const bool branch_taken_0x2258cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2258D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2258CCu;
        // 0x2258d0: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2258cc) {
            ctx->pc = 0x22593Cu;
            goto label_22593c;
        }
    }
    ctx->pc = 0x2258D4u;
label_2258d4:
    // 0x2258d4: 0x92050034  lbu         $a1, 0x34($s0)
    ctx->pc = 0x2258d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
label_2258d8:
    // 0x2258d8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2258d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2258dc:
    // 0x2258dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2258dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2258e0:
    // 0x2258e0: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x2258e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_2258e4:
    // 0x2258e4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2258e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2258e8:
    // 0x2258e8: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x2258e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
label_2258ec:
    // 0x2258ec: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x2258ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
label_2258f0:
    // 0x2258f0: 0x51200  sll         $v0, $a1, 8
    ctx->pc = 0x2258f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_2258f4:
    // 0x2258f4: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x2258f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2258f8:
    // 0x2258f8: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2258f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2258fc:
    // 0x2258fc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2258fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_225900:
    // 0x225900: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x225900u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_225904:
    // 0x225904: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x225904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_225908:
    // 0x225908: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x225908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_22590c:
    // 0x22590c: 0xc044894  jal         func_112250
label_225910:
    if (ctx->pc == 0x225910u) {
        ctx->pc = 0x225910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22590Cu;
        // 0x225910: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225914u;
        goto label_225914;
    }
    ctx->pc = 0x22590Cu;
    SET_GPR_U32(ctx, 31, 0x225914u);
    ctx->pc = 0x225910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22590Cu;
    // 0x225910: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112250u, 0x22590Cu, 0x225914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225914u;
label_225914:
    // 0x225914: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_225918:
    if (ctx->pc == 0x225918u) {
        ctx->pc = 0x22591Cu;
        goto label_22591c;
    }
    ctx->pc = 0x225914u;
    {
        const bool branch_taken_0x225914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225914) {
            ctx->pc = 0x225938u;
            goto label_225938;
        }
    }
    ctx->pc = 0x22591Cu;
label_22591c:
    // 0x22591c: 0x8625000c  lh          $a1, 0xC($s1)
    ctx->pc = 0x22591cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_225920:
    // 0x225920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_225924:
    // 0x225924: 0xc05257c  jal         func_1495F0
label_225928:
    if (ctx->pc == 0x225928u) {
        ctx->pc = 0x225928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225924u;
        // 0x225928: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22592Cu;
        goto label_22592c;
    }
    ctx->pc = 0x225924u;
    SET_GPR_U32(ctx, 31, 0x22592Cu);
    ctx->pc = 0x225928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225924u;
    // 0x225928: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1495F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1495F0u, 0x225924u, 0x22592Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22592Cu;
label_22592c:
    // 0x22592c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_225930:
    if (ctx->pc == 0x225930u) {
        ctx->pc = 0x225934u;
        goto label_225934;
    }
    ctx->pc = 0x22592Cu;
    {
        const bool branch_taken_0x22592c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22592c) {
            ctx->pc = 0x225938u;
            goto label_225938;
        }
    }
    ctx->pc = 0x225934u;
label_225934:
    // 0x225934: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x225934u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_225938:
    // 0x225938: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x225938u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_22593c:
    // 0x22593c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x22593cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_225940:
    // 0x225940: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x225940u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_225944:
    // 0x225944: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x225944u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_225948:
    // 0x225948: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x225948u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22594c:
    // 0x22594c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22594cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_225950:
    // 0x225950: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x225950u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_225954:
    // 0x225954: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x225954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_225958:
    // 0x225958: 0x3e00008  jr          $ra
label_22595c:
    if (ctx->pc == 0x22595Cu) {
        ctx->pc = 0x22595Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225958u;
        // 0x22595c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225960u;
        goto label_225960;
    }
    ctx->pc = 0x225958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22595Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225958u;
        // 0x22595c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225960u;
label_225960:
    // 0x225960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x225960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_225964:
    // 0x225964: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x225964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_225968:
    // 0x225968: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22596c:
    // 0x22596c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x22596cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_225970:
    // 0x225970: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x225970u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_225974:
    // 0x225974: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_225978:
    if (ctx->pc == 0x225978u) {
        ctx->pc = 0x225978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225974u;
        // 0x225978: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22597Cu;
        goto label_22597c;
    }
    ctx->pc = 0x225974u;
    {
        const bool branch_taken_0x225974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x225978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225974u;
        // 0x225978: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225974) {
            ctx->pc = 0x22598Cu;
            goto label_22598c;
        }
    }
    ctx->pc = 0x22597Cu;
label_22597c:
    // 0x22597c: 0x24020039  addiu       $v0, $zero, 0x39
    ctx->pc = 0x22597cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_225980:
    // 0x225980: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
label_225984:
    if (ctx->pc == 0x225984u) {
        ctx->pc = 0x225984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225980u;
        // 0x225984: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225988u;
        goto label_225988;
    }
    ctx->pc = 0x225980u;
    {
        const bool branch_taken_0x225980 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x225984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225980u;
        // 0x225984: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225980) {
            ctx->pc = 0x2259D8u;
            goto label_2259d8;
        }
    }
    ctx->pc = 0x225988u;
label_225988:
    // 0x225988: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x225988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_22598c:
    // 0x22598c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x22598cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_225990:
    // 0x225990: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x225990u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_225994:
    // 0x225994: 0x1443005b  bne         $v0, $v1, . + 4 + (0x5B << 2)
label_225998:
    if (ctx->pc == 0x225998u) {
        ctx->pc = 0x22599Cu;
        goto label_22599c;
    }
    ctx->pc = 0x225994u;
    {
        const bool branch_taken_0x225994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x225994) {
            ctx->pc = 0x225B04u;
            goto label_225b04;
        }
    }
    ctx->pc = 0x22599Cu;
label_22599c:
    // 0x22599c: 0x6143c  dsll32      $v0, $a2, 16
    ctx->pc = 0x22599cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
label_2259a0:
    // 0x2259a0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2259a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2259a4:
    // 0x2259a4: 0x14430057  bne         $v0, $v1, . + 4 + (0x57 << 2)
label_2259a8:
    if (ctx->pc == 0x2259A8u) {
        ctx->pc = 0x2259ACu;
        goto label_2259ac;
    }
    ctx->pc = 0x2259A4u;
    {
        const bool branch_taken_0x2259a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2259a4) {
            ctx->pc = 0x225B04u;
            goto label_225b04;
        }
    }
    ctx->pc = 0x2259ACu;
label_2259ac:
    // 0x2259ac: 0x9082003d  lbu         $v0, 0x3D($a0)
    ctx->pc = 0x2259acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 61)));
label_2259b0:
    // 0x2259b0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2259b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2259b4:
    // 0x2259b4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2259b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2259b8:
    // 0x2259b8: 0x1040008a  beqz        $v0, . + 4 + (0x8A << 2)
label_2259bc:
    if (ctx->pc == 0x2259BCu) {
        ctx->pc = 0x2259C0u;
        goto label_2259c0;
    }
    ctx->pc = 0x2259B8u;
    {
        const bool branch_taken_0x2259b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2259b8) {
            ctx->pc = 0x225BE4u;
            { ctx->pc = 0x225be4; return; }
        }
    }
    ctx->pc = 0x2259C0u;
label_2259c0:
    // 0x2259c0: 0xc089884  jal         func_226210
label_2259c4:
    if (ctx->pc == 0x2259C4u) {
        ctx->pc = 0x2259C8u;
        goto label_2259c8;
    }
    ctx->pc = 0x2259C0u;
    SET_GPR_U32(ctx, 31, 0x2259C8u);
    ctx->pc = 0x226210u;
    { ctx->pc = 0x226210; return; }
    ctx->pc = 0x2259C8u;
label_2259c8:
    // 0x2259c8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2259c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2259cc:
    // 0x2259cc: 0x10000086  b           . + 4 + (0x86 << 2)
label_2259d0:
    if (ctx->pc == 0x2259D0u) {
        ctx->pc = 0x2259D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2259CCu;
        // 0x2259d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2259D4u;
        goto label_2259d4;
    }
    ctx->pc = 0x2259CCu;
    {
        const bool branch_taken_0x2259cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2259D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2259CCu;
        // 0x2259d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2259cc) {
            ctx->pc = 0x225BE8u;
            { ctx->pc = 0x225be8; return; }
        }
    }
    ctx->pc = 0x2259D4u;
label_2259d4:
    // 0x2259d4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2259d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2259d8:
    // 0x2259d8: 0x14620025  bne         $v1, $v0, . + 4 + (0x25 << 2)
label_2259dc:
    if (ctx->pc == 0x2259DCu) {
        ctx->pc = 0x2259DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2259D8u;
        // 0x2259dc: 0x24020041  addiu       $v0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2259E0u;
        goto label_2259e0;
    }
    ctx->pc = 0x2259D8u;
    {
        const bool branch_taken_0x2259d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2259DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2259D8u;
        // 0x2259dc: 0x24020041  addiu       $v0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2259d8) {
            ctx->pc = 0x225A70u;
            goto label_225a70;
        }
    }
    ctx->pc = 0x2259E0u;
label_2259e0:
    // 0x2259e0: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x2259e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2259e4:
    // 0x2259e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2259e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2259e8:
    // 0x2259e8: 0x90e30012  lbu         $v1, 0x12($a3)
    ctx->pc = 0x2259e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 18)));
label_2259ec:
    // 0x2259ec: 0x14620045  bne         $v1, $v0, . + 4 + (0x45 << 2)
label_2259f0:
    if (ctx->pc == 0x2259F0u) {
        ctx->pc = 0x2259F4u;
        goto label_2259f4;
    }
    ctx->pc = 0x2259ECu;
    {
        const bool branch_taken_0x2259ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2259ec) {
            ctx->pc = 0x225B04u;
            goto label_225b04;
        }
    }
    ctx->pc = 0x2259F4u;
label_2259f4:
    // 0x2259f4: 0x90e30015  lbu         $v1, 0x15($a3)
    ctx->pc = 0x2259f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 21)));
label_2259f8:
    // 0x2259f8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2259fc:
    if (ctx->pc == 0x2259FCu) {
        ctx->pc = 0x225A00u;
        goto label_225a00;
    }
    ctx->pc = 0x2259F8u;
    {
        const bool branch_taken_0x2259f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2259f8) {
            ctx->pc = 0x225A0Cu;
            goto label_225a0c;
        }
    }
    ctx->pc = 0x225A00u;
label_225a00:
    // 0x225a00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x225a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_225a04:
    // 0x225a04: 0x1462003f  bne         $v1, $v0, . + 4 + (0x3F << 2)
label_225a08:
    if (ctx->pc == 0x225A08u) {
        ctx->pc = 0x225A0Cu;
        goto label_225a0c;
    }
    ctx->pc = 0x225A04u;
    {
        const bool branch_taken_0x225a04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x225a04) {
            ctx->pc = 0x225B04u;
            goto label_225b04;
        }
    }
    ctx->pc = 0x225A0Cu;
label_225a0c:
    // 0x225a0c: 0x90830022  lbu         $v1, 0x22($a0)
    ctx->pc = 0x225a0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 34)));
label_225a10:
    // 0x225a10: 0x53c3c  dsll32      $a3, $a1, 16
    ctx->pc = 0x225a10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 16));
label_225a14:
    // 0x225a14: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x225a14u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
label_225a18:
    // 0x225a18: 0x71103  sra         $v0, $a3, 4
    ctx->pc = 0x225a18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 4));
label_225a1c:
    // 0x225a1c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x225a1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_225a20:
    // 0x225a20: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
label_225a24:
    if (ctx->pc == 0x225A24u) {
        ctx->pc = 0x225A28u;
        goto label_225a28;
    }
    ctx->pc = 0x225A20u;
    {
        const bool branch_taken_0x225a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225a20) {
            ctx->pc = 0x225B04u;
            goto label_225b04;
        }
    }
    ctx->pc = 0x225A28u;
label_225a28:
    // 0x225a28: 0x6443c  dsll32      $t0, $a2, 16
    ctx->pc = 0x225a28u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) << (32 + 16));
label_225a2c:
    // 0x225a2c: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x225a2cu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
label_225a30:
    // 0x225a30: 0x81103  sra         $v0, $t0, 4
    ctx->pc = 0x225a30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 4));
label_225a34:
    // 0x225a34: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x225a34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_225a38:
    // 0x225a38: 0x14200032  bnez        $at, . + 4 + (0x32 << 2)
label_225a3c:
    if (ctx->pc == 0x225A3Cu) {
        ctx->pc = 0x225A40u;
        goto label_225a40;
    }
    ctx->pc = 0x225A38u;
    {
        const bool branch_taken_0x225a38 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x225a38) {
            ctx->pc = 0x225B04u;
            goto label_225b04;
        }
    }
    ctx->pc = 0x225A40u;
label_225a40:
    // 0x225a40: 0x90830023  lbu         $v1, 0x23($a0)
    ctx->pc = 0x225a40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
label_225a44:
    // 0x225a44: 0x30e2000f  andi        $v0, $a3, 0xF
    ctx->pc = 0x225a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
label_225a48:
    // 0x225a48: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x225a48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_225a4c:
    // 0x225a4c: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
label_225a50:
    if (ctx->pc == 0x225A50u) {
        ctx->pc = 0x225A54u;
        goto label_225a54;
    }
    ctx->pc = 0x225A4Cu;
    {
        const bool branch_taken_0x225a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225a4c) {
            ctx->pc = 0x225B04u;
            goto label_225b04;
        }
    }
    ctx->pc = 0x225A54u;
label_225a54:
    // 0x225a54: 0x3102000f  andi        $v0, $t0, 0xF
    ctx->pc = 0x225a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
label_225a58:
    // 0x225a58: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x225a58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_225a5c:
    // 0x225a5c: 0x14200029  bnez        $at, . + 4 + (0x29 << 2)
label_225a60:
    if (ctx->pc == 0x225A60u) {
        ctx->pc = 0x225A64u;
        goto label_225a64;
    }
    ctx->pc = 0x225A5Cu;
    {
        const bool branch_taken_0x225a5c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x225a5c) {
            ctx->pc = 0x225B04u;
            goto label_225b04;
        }
    }
    ctx->pc = 0x225A64u;
label_225a64:
    // 0x225a64: 0x1000005f  b           . + 4 + (0x5F << 2)
label_225a68:
    if (ctx->pc == 0x225A68u) {
        ctx->pc = 0x225A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225A64u;
        // 0x225a68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225A6Cu;
        goto label_225a6c;
    }
    ctx->pc = 0x225A64u;
    {
        const bool branch_taken_0x225a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225A64u;
        // 0x225a68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225a64) {
            ctx->pc = 0x225BE4u;
            { ctx->pc = 0x225be4; return; }
        }
    }
    ctx->pc = 0x225A6Cu;
label_225a6c:
    // 0x225a6c: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x225a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_225a70:
    // 0x225a70: 0x14620024  bne         $v1, $v0, . + 4 + (0x24 << 2)
label_225a74:
    if (ctx->pc == 0x225A74u) {
        ctx->pc = 0x225A78u;
        goto label_225a78;
    }
    ctx->pc = 0x225A70u;
    {
        const bool branch_taken_0x225a70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x225a70) {
            ctx->pc = 0x225B04u;
            goto label_225b04;
        }
    }
    ctx->pc = 0x225A78u;
label_225a78:
    // 0x225a78: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x225a78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_225a7c:
    // 0x225a7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x225a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_225a80:
    // 0x225a80: 0x90e30012  lbu         $v1, 0x12($a3)
    ctx->pc = 0x225a80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 18)));
label_225a84:
    // 0x225a84: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
label_225a88:
    if (ctx->pc == 0x225A88u) {
        ctx->pc = 0x225A8Cu;
        goto label_225a8c;
    }
    ctx->pc = 0x225A84u;
    {
        const bool branch_taken_0x225a84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x225a84) {
            ctx->pc = 0x225B04u;
            goto label_225b04;
        }
    }
    ctx->pc = 0x225A8Cu;
label_225a8c:
    // 0x225a8c: 0x90e30015  lbu         $v1, 0x15($a3)
    ctx->pc = 0x225a8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 21)));
label_225a90:
    // 0x225a90: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_225a94:
    if (ctx->pc == 0x225A94u) {
        ctx->pc = 0x225A98u;
        goto label_225a98;
    }
    ctx->pc = 0x225A90u;
    {
        const bool branch_taken_0x225a90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x225a90) {
            ctx->pc = 0x225AA4u;
            goto label_225aa4;
        }
    }
    ctx->pc = 0x225A98u;
label_225a98:
    // 0x225a98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x225a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_225a9c:
    // 0x225a9c: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
label_225aa0:
    if (ctx->pc == 0x225AA0u) {
        ctx->pc = 0x225AA4u;
        goto label_225aa4;
    }
    ctx->pc = 0x225A9Cu;
    {
        const bool branch_taken_0x225a9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x225a9c) {
            ctx->pc = 0x225B04u;
            goto label_225b04;
        }
    }
    ctx->pc = 0x225AA4u;
label_225aa4:
    // 0x225aa4: 0x90830022  lbu         $v1, 0x22($a0)
    ctx->pc = 0x225aa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 34)));
label_225aa8:
    // 0x225aa8: 0x53c3c  dsll32      $a3, $a1, 16
    ctx->pc = 0x225aa8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 16));
label_225aac:
    // 0x225aac: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x225aacu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
label_225ab0:
    // 0x225ab0: 0x71103  sra         $v0, $a3, 4
    ctx->pc = 0x225ab0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 4));
label_225ab4:
    // 0x225ab4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x225ab4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_225ab8:
    // 0x225ab8: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_225abc:
    if (ctx->pc == 0x225ABCu) {
        ctx->pc = 0x225AC0u;
        goto label_225ac0;
    }
    ctx->pc = 0x225AB8u;
    {
        const bool branch_taken_0x225ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225ab8) {
            ctx->pc = 0x225B04u;
            goto label_225b04;
        }
    }
    ctx->pc = 0x225AC0u;
label_225ac0:
    // 0x225ac0: 0x6443c  dsll32      $t0, $a2, 16
    ctx->pc = 0x225ac0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) << (32 + 16));
label_225ac4:
    // 0x225ac4: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x225ac4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
label_225ac8:
    // 0x225ac8: 0x81103  sra         $v0, $t0, 4
    ctx->pc = 0x225ac8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 4));
label_225acc:
    // 0x225acc: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x225accu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_225ad0:
    // 0x225ad0: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
label_225ad4:
    if (ctx->pc == 0x225AD4u) {
        ctx->pc = 0x225AD8u;
        goto label_225ad8;
    }
    ctx->pc = 0x225AD0u;
    {
        const bool branch_taken_0x225ad0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x225ad0) {
            ctx->pc = 0x225B04u;
            goto label_225b04;
        }
    }
    ctx->pc = 0x225AD8u;
label_225ad8:
    // 0x225ad8: 0x90830023  lbu         $v1, 0x23($a0)
    ctx->pc = 0x225ad8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
label_225adc:
    // 0x225adc: 0x30e2000f  andi        $v0, $a3, 0xF
    ctx->pc = 0x225adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
label_225ae0:
    // 0x225ae0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x225ae0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_225ae4:
    // 0x225ae4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_225ae8:
    if (ctx->pc == 0x225AE8u) {
        ctx->pc = 0x225AECu;
        goto label_225aec;
    }
    ctx->pc = 0x225AE4u;
    {
        const bool branch_taken_0x225ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225ae4) {
            ctx->pc = 0x225B04u;
            goto label_225b04;
        }
    }
    ctx->pc = 0x225AECu;
label_225aec:
    // 0x225aec: 0x3102000f  andi        $v0, $t0, 0xF
    ctx->pc = 0x225aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
label_225af0:
    // 0x225af0: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x225af0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_225af4:
    // 0x225af4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_225af8:
    if (ctx->pc == 0x225AF8u) {
        ctx->pc = 0x225AFCu;
        goto label_225afc;
    }
    ctx->pc = 0x225AF4u;
    {
        const bool branch_taken_0x225af4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x225af4) {
            ctx->pc = 0x225B04u;
            goto label_225b04;
        }
    }
    ctx->pc = 0x225AFCu;
label_225afc:
    // 0x225afc: 0x10000039  b           . + 4 + (0x39 << 2)
label_225b00:
    if (ctx->pc == 0x225B00u) {
        ctx->pc = 0x225B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225AFCu;
        // 0x225b00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225B04u;
        goto label_225b04;
    }
    ctx->pc = 0x225AFCu;
    {
        const bool branch_taken_0x225afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225AFCu;
        // 0x225b00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225afc) {
            ctx->pc = 0x225BE4u;
            { ctx->pc = 0x225be4; return; }
        }
    }
    ctx->pc = 0x225B04u;
label_225b04:
    // 0x225b04: 0x9082003d  lbu         $v0, 0x3D($a0)
    ctx->pc = 0x225b04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 61)));
label_225b08:
    // 0x225b08: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
label_225b0c:
    if (ctx->pc == 0x225B0Cu) {
        ctx->pc = 0x225B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225B08u;
        // 0x225b0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225B10u;
        goto label_225b10;
    }
    ctx->pc = 0x225B08u;
    {
        const bool branch_taken_0x225b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225B08u;
        // 0x225b0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225b08) {
            ctx->pc = 0x225BE4u;
            { ctx->pc = 0x225be4; return; }
        }
    }
    ctx->pc = 0x225B10u;
label_225b10:
    // 0x225b10: 0x90870023  lbu         $a3, 0x23($a0)
    ctx->pc = 0x225b10u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
label_225b14:
    // 0x225b14: 0x28e20010  slti        $v0, $a3, 0x10
    ctx->pc = 0x225b14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
label_225b18:
    // 0x225b18: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_225b1c:
    if (ctx->pc == 0x225B1Cu) {
        ctx->pc = 0x225B20u;
        goto label_225b20;
    }
    ctx->pc = 0x225B18u;
    {
        const bool branch_taken_0x225b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225b18) {
            ctx->pc = 0x225B84u;
            { ctx->pc = 0x225b84; return; }
        }
    }
    ctx->pc = 0x225B20u;
label_225b20:
    // 0x225b20: 0x90830022  lbu         $v1, 0x22($a0)
    ctx->pc = 0x225b20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 34)));
label_225b24:
    // 0x225b24: 0x5243c  dsll32      $a0, $a1, 16
    ctx->pc = 0x225b24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 16));
label_225b28:
    // 0x225b28: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x225b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_225b2c:
    // 0x225b2c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x225b2cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_225b30:
    // 0x225b30: 0x41103  sra         $v0, $a0, 4
    ctx->pc = 0x225b30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 4));
label_225b34:
    // 0x225b34: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x225b34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_225b38:
    // 0x225b38: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
label_225b3c:
    if (ctx->pc == 0x225B3Cu) {
        ctx->pc = 0x225B40u;
        goto label_225b40;
    }
    ctx->pc = 0x225B38u;
    {
        const bool branch_taken_0x225b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225b38) {
            ctx->pc = 0x225BE0u;
            { ctx->pc = 0x225be0; return; }
        }
    }
    ctx->pc = 0x225B40u;
label_225b40:
    // 0x225b40: 0x62c3c  dsll32      $a1, $a2, 16
    ctx->pc = 0x225b40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 16));
label_225b44:
    // 0x225b44: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x225b44u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_225b48:
    // 0x225b48: 0x51103  sra         $v0, $a1, 4
    ctx->pc = 0x225b48u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 4));
label_225b4c:
    // 0x225b4c: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x225b4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_225b50:
    // 0x225b50: 0x14200023  bnez        $at, . + 4 + (0x23 << 2)
label_225b54:
    if (ctx->pc == 0x225B54u) {
        ctx->pc = 0x225B58u;
        goto label_225b58;
    }
    ctx->pc = 0x225B50u;
    {
        const bool branch_taken_0x225b50 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x225b50) {
            ctx->pc = 0x225BE0u;
            { ctx->pc = 0x225be0; return; }
        }
    }
    ctx->pc = 0x225B58u;
label_225b58:
    // 0x225b58: 0x24e3fff0  addiu       $v1, $a3, -0x10
    ctx->pc = 0x225b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
label_225b5c:
    // 0x225b5c: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x225b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    ctx->pc = 0x225b60u;
    return;
}
