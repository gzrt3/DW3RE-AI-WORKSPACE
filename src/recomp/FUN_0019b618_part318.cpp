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


void FUN_0019b618_part318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2362a8u: goto label_2362a8;
        case 0x2362acu: goto label_2362ac;
        case 0x2362b0u: goto label_2362b0;
        case 0x2362b4u: goto label_2362b4;
        case 0x2362b8u: goto label_2362b8;
        case 0x2362bcu: goto label_2362bc;
        case 0x2362c0u: goto label_2362c0;
        case 0x2362c4u: goto label_2362c4;
        case 0x2362c8u: goto label_2362c8;
        case 0x2362ccu: goto label_2362cc;
        case 0x2362d0u: goto label_2362d0;
        case 0x2362d4u: goto label_2362d4;
        case 0x2362d8u: goto label_2362d8;
        case 0x2362dcu: goto label_2362dc;
        case 0x2362e0u: goto label_2362e0;
        case 0x2362e4u: goto label_2362e4;
        case 0x2362e8u: goto label_2362e8;
        case 0x2362ecu: goto label_2362ec;
        case 0x2362f0u: goto label_2362f0;
        case 0x2362f4u: goto label_2362f4;
        case 0x2362f8u: goto label_2362f8;
        case 0x2362fcu: goto label_2362fc;
        case 0x236300u: goto label_236300;
        case 0x236304u: goto label_236304;
        case 0x236308u: goto label_236308;
        case 0x23630cu: goto label_23630c;
        case 0x236310u: goto label_236310;
        case 0x236314u: goto label_236314;
        case 0x236318u: goto label_236318;
        case 0x23631cu: goto label_23631c;
        case 0x236320u: goto label_236320;
        case 0x236324u: goto label_236324;
        case 0x236328u: goto label_236328;
        case 0x23632cu: goto label_23632c;
        case 0x236330u: goto label_236330;
        case 0x236334u: goto label_236334;
        case 0x236338u: goto label_236338;
        case 0x23633cu: goto label_23633c;
        case 0x236340u: goto label_236340;
        case 0x236344u: goto label_236344;
        case 0x236348u: goto label_236348;
        case 0x23634cu: goto label_23634c;
        case 0x236350u: goto label_236350;
        case 0x236354u: goto label_236354;
        case 0x236358u: goto label_236358;
        case 0x23635cu: goto label_23635c;
        case 0x236360u: goto label_236360;
        case 0x236364u: goto label_236364;
        case 0x236368u: goto label_236368;
        case 0x23636cu: goto label_23636c;
        case 0x236370u: goto label_236370;
        case 0x236374u: goto label_236374;
        case 0x236378u: goto label_236378;
        case 0x23637cu: goto label_23637c;
        case 0x236380u: goto label_236380;
        case 0x236384u: goto label_236384;
        case 0x236388u: goto label_236388;
        case 0x23638cu: goto label_23638c;
        case 0x236390u: goto label_236390;
        case 0x236394u: goto label_236394;
        case 0x236398u: goto label_236398;
        case 0x23639cu: goto label_23639c;
        case 0x2363a0u: goto label_2363a0;
        case 0x2363a4u: goto label_2363a4;
        case 0x2363a8u: goto label_2363a8;
        case 0x2363acu: goto label_2363ac;
        case 0x2363b0u: goto label_2363b0;
        case 0x2363b4u: goto label_2363b4;
        case 0x2363b8u: goto label_2363b8;
        case 0x2363bcu: goto label_2363bc;
        case 0x2363c0u: goto label_2363c0;
        case 0x2363c4u: goto label_2363c4;
        case 0x2363c8u: goto label_2363c8;
        case 0x2363ccu: goto label_2363cc;
        case 0x2363d0u: goto label_2363d0;
        case 0x2363d4u: goto label_2363d4;
        case 0x2363d8u: goto label_2363d8;
        case 0x2363dcu: goto label_2363dc;
        case 0x2363e0u: goto label_2363e0;
        case 0x2363e4u: goto label_2363e4;
        case 0x2363e8u: goto label_2363e8;
        case 0x2363ecu: goto label_2363ec;
        case 0x2363f0u: goto label_2363f0;
        case 0x2363f4u: goto label_2363f4;
        case 0x2363f8u: goto label_2363f8;
        case 0x2363fcu: goto label_2363fc;
        case 0x236400u: goto label_236400;
        case 0x236404u: goto label_236404;
        case 0x236408u: goto label_236408;
        case 0x23640cu: goto label_23640c;
        case 0x236410u: goto label_236410;
        case 0x236414u: goto label_236414;
        case 0x236418u: goto label_236418;
        case 0x23641cu: goto label_23641c;
        case 0x236420u: goto label_236420;
        case 0x236424u: goto label_236424;
        case 0x236428u: goto label_236428;
        case 0x23642cu: goto label_23642c;
        case 0x236430u: goto label_236430;
        case 0x236434u: goto label_236434;
        case 0x236438u: goto label_236438;
        case 0x23643cu: goto label_23643c;
        case 0x236440u: goto label_236440;
        case 0x236444u: goto label_236444;
        case 0x236448u: goto label_236448;
        case 0x23644cu: goto label_23644c;
        case 0x236450u: goto label_236450;
        case 0x236454u: goto label_236454;
        case 0x236458u: goto label_236458;
        case 0x23645cu: goto label_23645c;
        case 0x236460u: goto label_236460;
        case 0x236464u: goto label_236464;
        case 0x236468u: goto label_236468;
        case 0x23646cu: goto label_23646c;
        case 0x236470u: goto label_236470;
        case 0x236474u: goto label_236474;
        case 0x236478u: goto label_236478;
        case 0x23647cu: goto label_23647c;
        case 0x236480u: goto label_236480;
        case 0x236484u: goto label_236484;
        case 0x236488u: goto label_236488;
        case 0x23648cu: goto label_23648c;
        case 0x236490u: goto label_236490;
        case 0x236494u: goto label_236494;
        case 0x236498u: goto label_236498;
        case 0x23649cu: goto label_23649c;
        case 0x2364a0u: goto label_2364a0;
        case 0x2364a4u: goto label_2364a4;
        case 0x2364a8u: goto label_2364a8;
        case 0x2364acu: goto label_2364ac;
        case 0x2364b0u: goto label_2364b0;
        case 0x2364b4u: goto label_2364b4;
        case 0x2364b8u: goto label_2364b8;
        case 0x2364bcu: goto label_2364bc;
        case 0x2364c0u: goto label_2364c0;
        case 0x2364c4u: goto label_2364c4;
        case 0x2364c8u: goto label_2364c8;
        case 0x2364ccu: goto label_2364cc;
        case 0x2364d0u: goto label_2364d0;
        case 0x2364d4u: goto label_2364d4;
        case 0x2364d8u: goto label_2364d8;
        case 0x2364dcu: goto label_2364dc;
        case 0x2364e0u: goto label_2364e0;
        case 0x2364e4u: goto label_2364e4;
        case 0x2364e8u: goto label_2364e8;
        case 0x2364ecu: goto label_2364ec;
        case 0x2364f0u: goto label_2364f0;
        case 0x2364f4u: goto label_2364f4;
        case 0x2364f8u: goto label_2364f8;
        case 0x2364fcu: goto label_2364fc;
        case 0x236500u: goto label_236500;
        case 0x236504u: goto label_236504;
        case 0x236508u: goto label_236508;
        case 0x23650cu: goto label_23650c;
        case 0x236510u: goto label_236510;
        case 0x236514u: goto label_236514;
        case 0x236518u: goto label_236518;
        case 0x23651cu: goto label_23651c;
        case 0x236520u: goto label_236520;
        case 0x236524u: goto label_236524;
        case 0x236528u: goto label_236528;
        case 0x23652cu: goto label_23652c;
        case 0x236530u: goto label_236530;
        case 0x236534u: goto label_236534;
        case 0x236538u: goto label_236538;
        case 0x23653cu: goto label_23653c;
        case 0x236540u: goto label_236540;
        case 0x236544u: goto label_236544;
        case 0x236548u: goto label_236548;
        case 0x23654cu: goto label_23654c;
        case 0x236550u: goto label_236550;
        case 0x236554u: goto label_236554;
        case 0x236558u: goto label_236558;
        case 0x23655cu: goto label_23655c;
        case 0x236560u: goto label_236560;
        case 0x236564u: goto label_236564;
        case 0x236568u: goto label_236568;
        case 0x23656cu: goto label_23656c;
        case 0x236570u: goto label_236570;
        case 0x236574u: goto label_236574;
        case 0x236578u: goto label_236578;
        case 0x23657cu: goto label_23657c;
        case 0x236580u: goto label_236580;
        case 0x236584u: goto label_236584;
        case 0x236588u: goto label_236588;
        case 0x23658cu: goto label_23658c;
        case 0x236590u: goto label_236590;
        case 0x236594u: goto label_236594;
        case 0x236598u: goto label_236598;
        case 0x23659cu: goto label_23659c;
        case 0x2365a0u: goto label_2365a0;
        case 0x2365a4u: goto label_2365a4;
        case 0x2365a8u: goto label_2365a8;
        case 0x2365acu: goto label_2365ac;
        case 0x2365b0u: goto label_2365b0;
        case 0x2365b4u: goto label_2365b4;
        case 0x2365b8u: goto label_2365b8;
        case 0x2365bcu: goto label_2365bc;
        case 0x2365c0u: goto label_2365c0;
        case 0x2365c4u: goto label_2365c4;
        case 0x2365c8u: goto label_2365c8;
        case 0x2365ccu: goto label_2365cc;
        case 0x2365d0u: goto label_2365d0;
        case 0x2365d4u: goto label_2365d4;
        case 0x2365d8u: goto label_2365d8;
        case 0x2365dcu: goto label_2365dc;
        case 0x2365e0u: goto label_2365e0;
        case 0x2365e4u: goto label_2365e4;
        case 0x2365e8u: goto label_2365e8;
        case 0x2365ecu: goto label_2365ec;
        case 0x2365f0u: goto label_2365f0;
        case 0x2365f4u: goto label_2365f4;
        case 0x2365f8u: goto label_2365f8;
        case 0x2365fcu: goto label_2365fc;
        case 0x236600u: goto label_236600;
        case 0x236604u: goto label_236604;
        case 0x236608u: goto label_236608;
        case 0x23660cu: goto label_23660c;
        case 0x236610u: goto label_236610;
        case 0x236614u: goto label_236614;
        case 0x236618u: goto label_236618;
        case 0x23661cu: goto label_23661c;
        case 0x236620u: goto label_236620;
        case 0x236624u: goto label_236624;
        case 0x236628u: goto label_236628;
        case 0x23662cu: goto label_23662c;
        case 0x236630u: goto label_236630;
        case 0x236634u: goto label_236634;
        case 0x236638u: goto label_236638;
        case 0x23663cu: goto label_23663c;
        case 0x236640u: goto label_236640;
        case 0x236644u: goto label_236644;
        case 0x236648u: goto label_236648;
        case 0x23664cu: goto label_23664c;
        case 0x236650u: goto label_236650;
        case 0x236654u: goto label_236654;
        case 0x236658u: goto label_236658;
        case 0x23665cu: goto label_23665c;
        case 0x236660u: goto label_236660;
        case 0x236664u: goto label_236664;
        case 0x236668u: goto label_236668;
        case 0x23666cu: goto label_23666c;
        case 0x236670u: goto label_236670;
        case 0x236674u: goto label_236674;
        case 0x236678u: goto label_236678;
        case 0x23667cu: goto label_23667c;
        case 0x236680u: goto label_236680;
        case 0x236684u: goto label_236684;
        case 0x236688u: goto label_236688;
        case 0x23668cu: goto label_23668c;
        case 0x236690u: goto label_236690;
        case 0x236694u: goto label_236694;
        case 0x236698u: goto label_236698;
        case 0x23669cu: goto label_23669c;
        case 0x2366a0u: goto label_2366a0;
        case 0x2366a4u: goto label_2366a4;
        case 0x2366a8u: goto label_2366a8;
        case 0x2366acu: goto label_2366ac;
        case 0x2366b0u: goto label_2366b0;
        case 0x2366b4u: goto label_2366b4;
        case 0x2366b8u: goto label_2366b8;
        case 0x2366bcu: goto label_2366bc;
        case 0x2366c0u: goto label_2366c0;
        case 0x2366c4u: goto label_2366c4;
        case 0x2366c8u: goto label_2366c8;
        case 0x2366ccu: goto label_2366cc;
        case 0x2366d0u: goto label_2366d0;
        case 0x2366d4u: goto label_2366d4;
        case 0x2366d8u: goto label_2366d8;
        case 0x2366dcu: goto label_2366dc;
        case 0x2366e0u: goto label_2366e0;
        case 0x2366e4u: goto label_2366e4;
        case 0x2366e8u: goto label_2366e8;
        case 0x2366ecu: goto label_2366ec;
        case 0x2366f0u: goto label_2366f0;
        case 0x2366f4u: goto label_2366f4;
        case 0x2366f8u: goto label_2366f8;
        case 0x2366fcu: goto label_2366fc;
        case 0x236700u: goto label_236700;
        case 0x236704u: goto label_236704;
        case 0x236708u: goto label_236708;
        case 0x23670cu: goto label_23670c;
        case 0x236710u: goto label_236710;
        case 0x236714u: goto label_236714;
        case 0x236718u: goto label_236718;
        case 0x23671cu: goto label_23671c;
        case 0x236720u: goto label_236720;
        case 0x236724u: goto label_236724;
        case 0x236728u: goto label_236728;
        case 0x23672cu: goto label_23672c;
        case 0x236730u: goto label_236730;
        case 0x236734u: goto label_236734;
        case 0x236738u: goto label_236738;
        case 0x23673cu: goto label_23673c;
        case 0x236740u: goto label_236740;
        case 0x236744u: goto label_236744;
        case 0x236748u: goto label_236748;
        case 0x23674cu: goto label_23674c;
        case 0x236750u: goto label_236750;
        case 0x236754u: goto label_236754;
        case 0x236758u: goto label_236758;
        case 0x23675cu: goto label_23675c;
        case 0x236760u: goto label_236760;
        case 0x236764u: goto label_236764;
        case 0x236768u: goto label_236768;
        case 0x23676cu: goto label_23676c;
        case 0x236770u: goto label_236770;
        case 0x236774u: goto label_236774;
        case 0x236778u: goto label_236778;
        case 0x23677cu: goto label_23677c;
        case 0x236780u: goto label_236780;
        case 0x236784u: goto label_236784;
        case 0x236788u: goto label_236788;
        case 0x23678cu: goto label_23678c;
        case 0x236790u: goto label_236790;
        case 0x236794u: goto label_236794;
        case 0x236798u: goto label_236798;
        case 0x23679cu: goto label_23679c;
        case 0x2367a0u: goto label_2367a0;
        case 0x2367a4u: goto label_2367a4;
        case 0x2367a8u: goto label_2367a8;
        case 0x2367acu: goto label_2367ac;
        case 0x2367b0u: goto label_2367b0;
        case 0x2367b4u: goto label_2367b4;
        case 0x2367b8u: goto label_2367b8;
        case 0x2367bcu: goto label_2367bc;
        case 0x2367c0u: goto label_2367c0;
        case 0x2367c4u: goto label_2367c4;
        case 0x2367c8u: goto label_2367c8;
        case 0x2367ccu: goto label_2367cc;
        case 0x2367d0u: goto label_2367d0;
        case 0x2367d4u: goto label_2367d4;
        case 0x2367d8u: goto label_2367d8;
        case 0x2367dcu: goto label_2367dc;
        case 0x2367e0u: goto label_2367e0;
        case 0x2367e4u: goto label_2367e4;
        case 0x2367e8u: goto label_2367e8;
        case 0x2367ecu: goto label_2367ec;
        case 0x2367f0u: goto label_2367f0;
        case 0x2367f4u: goto label_2367f4;
        case 0x2367f8u: goto label_2367f8;
        case 0x2367fcu: goto label_2367fc;
        case 0x236800u: goto label_236800;
        case 0x236804u: goto label_236804;
        case 0x236808u: goto label_236808;
        case 0x23680cu: goto label_23680c;
        case 0x236810u: goto label_236810;
        case 0x236814u: goto label_236814;
        case 0x236818u: goto label_236818;
        case 0x23681cu: goto label_23681c;
        case 0x236820u: goto label_236820;
        case 0x236824u: goto label_236824;
        case 0x236828u: goto label_236828;
        case 0x23682cu: goto label_23682c;
        case 0x236830u: goto label_236830;
        case 0x236834u: goto label_236834;
        case 0x236838u: goto label_236838;
        case 0x23683cu: goto label_23683c;
        case 0x236840u: goto label_236840;
        case 0x236844u: goto label_236844;
        case 0x236848u: goto label_236848;
        case 0x23684cu: goto label_23684c;
        case 0x236850u: goto label_236850;
        case 0x236854u: goto label_236854;
        case 0x236858u: goto label_236858;
        case 0x23685cu: goto label_23685c;
        case 0x236860u: goto label_236860;
        case 0x236864u: goto label_236864;
        case 0x236868u: goto label_236868;
        case 0x23686cu: goto label_23686c;
        case 0x236870u: goto label_236870;
        case 0x236874u: goto label_236874;
        case 0x236878u: goto label_236878;
        case 0x23687cu: goto label_23687c;
        case 0x236880u: goto label_236880;
        case 0x236884u: goto label_236884;
        case 0x236888u: goto label_236888;
        case 0x23688cu: goto label_23688c;
        case 0x236890u: goto label_236890;
        case 0x236894u: goto label_236894;
        case 0x236898u: goto label_236898;
        case 0x23689cu: goto label_23689c;
        case 0x2368a0u: goto label_2368a0;
        case 0x2368a4u: goto label_2368a4;
        case 0x2368a8u: goto label_2368a8;
        case 0x2368acu: goto label_2368ac;
        case 0x2368b0u: goto label_2368b0;
        case 0x2368b4u: goto label_2368b4;
        case 0x2368b8u: goto label_2368b8;
        case 0x2368bcu: goto label_2368bc;
        case 0x2368c0u: goto label_2368c0;
        case 0x2368c4u: goto label_2368c4;
        case 0x2368c8u: goto label_2368c8;
        case 0x2368ccu: goto label_2368cc;
        case 0x2368d0u: goto label_2368d0;
        case 0x2368d4u: goto label_2368d4;
        case 0x2368d8u: goto label_2368d8;
        case 0x2368dcu: goto label_2368dc;
        case 0x2368e0u: goto label_2368e0;
        case 0x2368e4u: goto label_2368e4;
        case 0x2368e8u: goto label_2368e8;
        case 0x2368ecu: goto label_2368ec;
        case 0x2368f0u: goto label_2368f0;
        case 0x2368f4u: goto label_2368f4;
        case 0x2368f8u: goto label_2368f8;
        case 0x2368fcu: goto label_2368fc;
        case 0x236900u: goto label_236900;
        case 0x236904u: goto label_236904;
        case 0x236908u: goto label_236908;
        case 0x23690cu: goto label_23690c;
        case 0x236910u: goto label_236910;
        case 0x236914u: goto label_236914;
        case 0x236918u: goto label_236918;
        case 0x23691cu: goto label_23691c;
        case 0x236920u: goto label_236920;
        case 0x236924u: goto label_236924;
        case 0x236928u: goto label_236928;
        case 0x23692cu: goto label_23692c;
        case 0x236930u: goto label_236930;
        case 0x236934u: goto label_236934;
        case 0x236938u: goto label_236938;
        case 0x23693cu: goto label_23693c;
        case 0x236940u: goto label_236940;
        case 0x236944u: goto label_236944;
        case 0x236948u: goto label_236948;
        case 0x23694cu: goto label_23694c;
        case 0x236950u: goto label_236950;
        case 0x236954u: goto label_236954;
        case 0x236958u: goto label_236958;
        case 0x23695cu: goto label_23695c;
        case 0x236960u: goto label_236960;
        case 0x236964u: goto label_236964;
        case 0x236968u: goto label_236968;
        case 0x23696cu: goto label_23696c;
        case 0x236970u: goto label_236970;
        case 0x236974u: goto label_236974;
        case 0x236978u: goto label_236978;
        case 0x23697cu: goto label_23697c;
        case 0x236980u: goto label_236980;
        case 0x236984u: goto label_236984;
        case 0x236988u: goto label_236988;
        case 0x23698cu: goto label_23698c;
        case 0x236990u: goto label_236990;
        case 0x236994u: goto label_236994;
        case 0x236998u: goto label_236998;
        case 0x23699cu: goto label_23699c;
        case 0x2369a0u: goto label_2369a0;
        case 0x2369a4u: goto label_2369a4;
        case 0x2369a8u: goto label_2369a8;
        case 0x2369acu: goto label_2369ac;
        case 0x2369b0u: goto label_2369b0;
        case 0x2369b4u: goto label_2369b4;
        case 0x2369b8u: goto label_2369b8;
        case 0x2369bcu: goto label_2369bc;
        case 0x2369c0u: goto label_2369c0;
        case 0x2369c4u: goto label_2369c4;
        case 0x2369c8u: goto label_2369c8;
        case 0x2369ccu: goto label_2369cc;
        case 0x2369d0u: goto label_2369d0;
        case 0x2369d4u: goto label_2369d4;
        case 0x2369d8u: goto label_2369d8;
        case 0x2369dcu: goto label_2369dc;
        case 0x2369e0u: goto label_2369e0;
        case 0x2369e4u: goto label_2369e4;
        case 0x2369e8u: goto label_2369e8;
        case 0x2369ecu: goto label_2369ec;
        case 0x2369f0u: goto label_2369f0;
        case 0x2369f4u: goto label_2369f4;
        case 0x2369f8u: goto label_2369f8;
        case 0x2369fcu: goto label_2369fc;
        case 0x236a00u: goto label_236a00;
        case 0x236a04u: goto label_236a04;
        case 0x236a08u: goto label_236a08;
        case 0x236a0cu: goto label_236a0c;
        case 0x236a10u: goto label_236a10;
        case 0x236a14u: goto label_236a14;
        case 0x236a18u: goto label_236a18;
        case 0x236a1cu: goto label_236a1c;
        case 0x236a20u: goto label_236a20;
        case 0x236a24u: goto label_236a24;
        case 0x236a28u: goto label_236a28;
        case 0x236a2cu: goto label_236a2c;
        case 0x236a30u: goto label_236a30;
        case 0x236a34u: goto label_236a34;
        case 0x236a38u: goto label_236a38;
        case 0x236a3cu: goto label_236a3c;
        case 0x236a40u: goto label_236a40;
        case 0x236a44u: goto label_236a44;
        case 0x236a48u: goto label_236a48;
        case 0x236a4cu: goto label_236a4c;
        case 0x236a50u: goto label_236a50;
        case 0x236a54u: goto label_236a54;
        case 0x236a58u: goto label_236a58;
        case 0x236a5cu: goto label_236a5c;
        case 0x236a60u: goto label_236a60;
        case 0x236a64u: goto label_236a64;
        case 0x236a68u: goto label_236a68;
        case 0x236a6cu: goto label_236a6c;
        case 0x236a70u: goto label_236a70;
        case 0x236a74u: goto label_236a74;
        default: return;
    }

label_2362a8:
    // 0x2362a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2362a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2362ac:
    // 0x2362ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2362acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2362b0:
    // 0x2362b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2362b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2362b4:
    // 0x2362b4: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x2362b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
label_2362b8:
    // 0x2362b8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2362b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_2362bc:
    // 0x2362bc: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2362bcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2362c0:
    // 0x2362c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2362c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2362c4:
    // 0x2362c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2362c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2362c8:
    // 0x2362c8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2362c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2362cc:
    // 0x2362cc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2362ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2362d0:
    // 0x2362d0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2362d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2362d4:
    // 0x2362d4: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2362d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2362d8:
    // 0x2362d8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2362d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_2362dc:
    // 0x2362dc: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x2362dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2362e0:
    // 0x2362e0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2362e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_2362e4:
    // 0x2362e4: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x2362e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2362e8:
    // 0x2362e8: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x2362e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_2362ec:
    // 0x2362ec: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2362ecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2362f0:
    // 0x2362f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2362f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2362f4:
    // 0x2362f4: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2362f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_2362f8:
    // 0x2362f8: 0xc08dbf8  jal         func_236FE0
label_2362fc:
    if (ctx->pc == 0x2362FCu) {
        ctx->pc = 0x2362FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2362F8u;
        // 0x2362fc: 0x160882d  daddu       $s1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236300u;
        goto label_236300;
    }
    ctx->pc = 0x2362F8u;
    SET_GPR_U32(ctx, 31, 0x236300u);
    ctx->pc = 0x2362FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2362F8u;
    // 0x2362fc: 0x160882d  daddu       $s1, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x236300u;
label_236300:
    // 0x236300: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_236304:
    if (ctx->pc == 0x236304u) {
        ctx->pc = 0x236304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236300u;
        // 0x236304: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236308u;
        goto label_236308;
    }
    ctx->pc = 0x236300u;
    {
        const bool branch_taken_0x236300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236300u;
        // 0x236304: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236300) {
            ctx->pc = 0x236384u;
            goto label_236384;
        }
    }
    ctx->pc = 0x236308u;
label_236308:
    // 0x236308: 0xc08d736  jal         func_235CD8
label_23630c:
    if (ctx->pc == 0x23630Cu) {
        ctx->pc = 0x236310u;
        goto label_236310;
    }
    ctx->pc = 0x236308u;
    SET_GPR_U32(ctx, 31, 0x236310u);
    ctx->pc = 0x235CD8u;
    { ctx->pc = 0x235cd8; return; }
    ctx->pc = 0x236310u;
label_236310:
    // 0x236310: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x236310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_236314:
    // 0x236314: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236318:
    // 0x236318: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x236318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_23631c:
    // 0x23631c: 0x2442b1c0  addiu       $v0, $v0, -0x4E40
    ctx->pc = 0x23631cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947264));
label_236320:
    // 0x236320: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x236320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_236324:
    // 0x236324: 0x16000014  bnez        $s0, . + 4 + (0x14 << 2)
label_236328:
    if (ctx->pc == 0x236328u) {
        ctx->pc = 0x236328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236324u;
        // 0x236328: 0x24450014  addiu       $a1, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23632Cu;
        goto label_23632c;
    }
    ctx->pc = 0x236324u;
    {
        const bool branch_taken_0x236324 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x236328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236324u;
        // 0x236328: 0x24450014  addiu       $a1, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236324) {
            ctx->pc = 0x236378u;
            goto label_236378;
        }
    }
    ctx->pc = 0x23632Cu;
label_23632c:
    // 0x23632c: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x23632cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
label_236330:
    // 0x236330: 0x2410fffe  addiu       $s0, $zero, -0x2
    ctx->pc = 0x236330u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_236334:
    // 0x236334: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x236334u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
label_236338:
    // 0x236338: 0xac550008  sw          $s5, 0x8($v0)
    ctx->pc = 0x236338u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 21));
label_23633c:
    // 0x23633c: 0xac56000c  sw          $s6, 0xC($v0)
    ctx->pc = 0x23633cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 22));
label_236340:
    // 0x236340: 0xc08dc08  jal         func_237020
label_236344:
    if (ctx->pc == 0x236344u) {
        ctx->pc = 0x236344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236340u;
        // 0x236344: 0xac5e0010  sw          $fp, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236348u;
        goto label_236348;
    }
    ctx->pc = 0x236340u;
    SET_GPR_U32(ctx, 31, 0x236348u);
    ctx->pc = 0x236344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236340u;
    // 0x236344: 0xac5e0010  sw          $fp, 0x10($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237020u;
    { ctx->pc = 0x237020; return; }
    ctx->pc = 0x236348u;
label_236348:
    // 0x236348: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x236348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_23634c:
    // 0x23634c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x23634cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_236350:
    // 0x236350: 0x2252824  and         $a1, $s1, $a1
    ctx->pc = 0x236350u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & GPR_U64(ctx, 5));
label_236354:
    // 0x236354: 0x2e31824  and         $v1, $s7, $v1
    ctx->pc = 0x236354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & GPR_U64(ctx, 3));
label_236358:
    // 0x236358: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x236358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23635c:
    // 0x23635c: 0xa38825  or          $s1, $a1, $v1
    ctx->pc = 0x23635cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_236360:
    // 0x236360: 0x24460014  addiu       $a2, $v0, 0x14
    ctx->pc = 0x236360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_236364:
    // 0x236364: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_236368:
    if (ctx->pc == 0x236368u) {
        ctx->pc = 0x236368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236364u;
        // 0x236368: 0x36250095  ori         $a1, $s1, 0x95 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)149);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23636Cu;
        goto label_23636c;
    }
    ctx->pc = 0x236364u;
    {
        const bool branch_taken_0x236364 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x236368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236364u;
        // 0x236368: 0x36250095  ori         $a1, $s1, 0x95 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)149);
        ctx->in_delay_slot = false;
        if (branch_taken_0x236364) {
            ctx->pc = 0x236378u;
            goto label_236378;
        }
    }
    ctx->pc = 0x23636Cu;
label_23636c:
    // 0x23636c: 0xc08d74c  jal         func_235D30
label_236370:
    if (ctx->pc == 0x236370u) {
        ctx->pc = 0x236374u;
        goto label_236374;
    }
    ctx->pc = 0x23636Cu;
    SET_GPR_U32(ctx, 31, 0x236374u);
    ctx->pc = 0x235D30u;
    { ctx->pc = 0x235d30; return; }
    ctx->pc = 0x236374u;
label_236374:
    // 0x236374: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236378:
    // 0x236378: 0xc069210  jal         func_1A4840
label_23637c:
    if (ctx->pc == 0x23637Cu) {
        ctx->pc = 0x23637Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236378u;
        // 0x23637c: 0x8f8482f0  lw          $a0, -0x7D10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236380u;
        goto label_236380;
    }
    ctx->pc = 0x236378u;
    SET_GPR_U32(ctx, 31, 0x236380u);
    ctx->pc = 0x23637Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236378u;
    // 0x23637c: 0x8f8482f0  lw          $a0, -0x7D10($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x236380u;
label_236380:
    // 0x236380: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x236380u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236384:
    // 0x236384: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236388:
    // 0x236388: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x236388u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23638c:
    // 0x23638c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23638cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_236390:
    // 0x236390: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x236390u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_236394:
    // 0x236394: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x236394u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_236398:
    // 0x236398: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x236398u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_23639c:
    // 0x23639c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x23639cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2363a0:
    // 0x2363a0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2363a0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2363a4:
    // 0x2363a4: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2363a4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2363a8:
    // 0x2363a8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2363a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2363ac:
    // 0x2363ac: 0x3e00008  jr          $ra
label_2363b0:
    if (ctx->pc == 0x2363B0u) {
        ctx->pc = 0x2363B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2363ACu;
        // 0x2363b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2363B4u;
        goto label_2363b4;
    }
    ctx->pc = 0x2363ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2363B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2363ACu;
        // 0x2363b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2363ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2363B4u;
label_2363b4:
    // 0x2363b4: 0x0  nop
    ctx->pc = 0x2363b4u;
    // NOP
label_2363b8:
    // 0x2363b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2363b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2363bc:
    // 0x2363bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2363bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2363c0:
    // 0x2363c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2363c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2363c4:
    // 0x2363c4: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x2363c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
label_2363c8:
    // 0x2363c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2363c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2363cc:
    // 0x2363cc: 0xc08dbf8  jal         func_236FE0
label_2363d0:
    if (ctx->pc == 0x2363D0u) {
        ctx->pc = 0x2363D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2363CCu;
        // 0x2363d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2363D4u;
        goto label_2363d4;
    }
    ctx->pc = 0x2363CCu;
    SET_GPR_U32(ctx, 31, 0x2363D4u);
    ctx->pc = 0x2363D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2363CCu;
    // 0x2363d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x2363D4u;
label_2363d4:
    // 0x2363d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2363d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2363d8:
    // 0x2363d8: 0x24050096  addiu       $a1, $zero, 0x96
    ctx->pc = 0x2363d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
label_2363dc:
    // 0x2363dc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2363e0:
    if (ctx->pc == 0x2363E0u) {
        ctx->pc = 0x2363E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2363DCu;
        // 0x2363e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2363E4u;
        goto label_2363e4;
    }
    ctx->pc = 0x2363DCu;
    {
        const bool branch_taken_0x2363dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2363E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2363DCu;
        // 0x2363e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2363dc) {
            ctx->pc = 0x2363FCu;
            goto label_2363fc;
        }
    }
    ctx->pc = 0x2363E4u;
label_2363e4:
    // 0x2363e4: 0xc08d74c  jal         func_235D30
label_2363e8:
    if (ctx->pc == 0x2363E8u) {
        ctx->pc = 0x2363ECu;
        goto label_2363ec;
    }
    ctx->pc = 0x2363E4u;
    SET_GPR_U32(ctx, 31, 0x2363ECu);
    ctx->pc = 0x235D30u;
    { ctx->pc = 0x235d30; return; }
    ctx->pc = 0x2363ECu;
label_2363ec:
    // 0x2363ec: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x2363ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
label_2363f0:
    // 0x2363f0: 0xc069210  jal         func_1A4840
label_2363f4:
    if (ctx->pc == 0x2363F4u) {
        ctx->pc = 0x2363F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2363F0u;
        // 0x2363f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2363F8u;
        goto label_2363f8;
    }
    ctx->pc = 0x2363F0u;
    SET_GPR_U32(ctx, 31, 0x2363F8u);
    ctx->pc = 0x2363F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2363F0u;
    // 0x2363f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x2363F8u;
label_2363f8:
    // 0x2363f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2363f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2363fc:
    // 0x2363fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2363fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236400:
    // 0x236400: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x236400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_236404:
    // 0x236404: 0x3e00008  jr          $ra
label_236408:
    if (ctx->pc == 0x236408u) {
        ctx->pc = 0x236408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236404u;
        // 0x236408: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23640Cu;
        goto label_23640c;
    }
    ctx->pc = 0x236404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236404u;
        // 0x236408: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23640Cu;
label_23640c:
    // 0x23640c: 0x0  nop
    ctx->pc = 0x23640cu;
    // NOP
label_236410:
    // 0x236410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_236414:
    // 0x236414: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_236418:
    // 0x236418: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x236418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23641c:
    // 0x23641c: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x23641cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
label_236420:
    // 0x236420: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x236420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_236424:
    // 0x236424: 0xc08dbf8  jal         func_236FE0
label_236428:
    if (ctx->pc == 0x236428u) {
        ctx->pc = 0x236428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236424u;
        // 0x236428: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23642Cu;
        goto label_23642c;
    }
    ctx->pc = 0x236424u;
    SET_GPR_U32(ctx, 31, 0x23642Cu);
    ctx->pc = 0x236428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236424u;
    // 0x236428: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x23642Cu;
label_23642c:
    // 0x23642c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23642cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236430:
    // 0x236430: 0x24050097  addiu       $a1, $zero, 0x97
    ctx->pc = 0x236430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
label_236434:
    // 0x236434: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_236438:
    if (ctx->pc == 0x236438u) {
        ctx->pc = 0x236438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236434u;
        // 0x236438: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23643Cu;
        goto label_23643c;
    }
    ctx->pc = 0x236434u;
    {
        const bool branch_taken_0x236434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236434u;
        // 0x236438: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236434) {
            ctx->pc = 0x236454u;
            goto label_236454;
        }
    }
    ctx->pc = 0x23643Cu;
label_23643c:
    // 0x23643c: 0xc08d74c  jal         func_235D30
label_236440:
    if (ctx->pc == 0x236440u) {
        ctx->pc = 0x236444u;
        goto label_236444;
    }
    ctx->pc = 0x23643Cu;
    SET_GPR_U32(ctx, 31, 0x236444u);
    ctx->pc = 0x235D30u;
    { ctx->pc = 0x235d30; return; }
    ctx->pc = 0x236444u;
label_236444:
    // 0x236444: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x236444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
label_236448:
    // 0x236448: 0xc069210  jal         func_1A4840
label_23644c:
    if (ctx->pc == 0x23644Cu) {
        ctx->pc = 0x23644Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236448u;
        // 0x23644c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236450u;
        goto label_236450;
    }
    ctx->pc = 0x236448u;
    SET_GPR_U32(ctx, 31, 0x236450u);
    ctx->pc = 0x23644Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236448u;
    // 0x23644c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x236450u;
label_236450:
    // 0x236450: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x236450u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236454:
    // 0x236454: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236454u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236458:
    // 0x236458: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x236458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23645c:
    // 0x23645c: 0x3e00008  jr          $ra
label_236460:
    if (ctx->pc == 0x236460u) {
        ctx->pc = 0x236460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23645Cu;
        // 0x236460: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236464u;
        goto label_236464;
    }
    ctx->pc = 0x23645Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23645Cu;
        // 0x236460: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23645Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236464u;
label_236464:
    // 0x236464: 0x0  nop
    ctx->pc = 0x236464u;
    // NOP
label_236468:
    // 0x236468: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23646c:
    // 0x23646c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23646cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_236470:
    // 0x236470: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x236470u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_236474:
    // 0x236474: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x236474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
label_236478:
    // 0x236478: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x236478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_23647c:
    // 0x23647c: 0xc08dbf8  jal         func_236FE0
label_236480:
    if (ctx->pc == 0x236480u) {
        ctx->pc = 0x236480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23647Cu;
        // 0x236480: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236484u;
        goto label_236484;
    }
    ctx->pc = 0x23647Cu;
    SET_GPR_U32(ctx, 31, 0x236484u);
    ctx->pc = 0x236480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23647Cu;
    // 0x236480: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x236484u;
label_236484:
    // 0x236484: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236488:
    // 0x236488: 0x24050098  addiu       $a1, $zero, 0x98
    ctx->pc = 0x236488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
label_23648c:
    // 0x23648c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_236490:
    if (ctx->pc == 0x236490u) {
        ctx->pc = 0x236490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23648Cu;
        // 0x236490: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236494u;
        goto label_236494;
    }
    ctx->pc = 0x23648Cu;
    {
        const bool branch_taken_0x23648c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23648Cu;
        // 0x236490: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23648c) {
            ctx->pc = 0x2364ACu;
            goto label_2364ac;
        }
    }
    ctx->pc = 0x236494u;
label_236494:
    // 0x236494: 0xc08d74c  jal         func_235D30
label_236498:
    if (ctx->pc == 0x236498u) {
        ctx->pc = 0x23649Cu;
        goto label_23649c;
    }
    ctx->pc = 0x236494u;
    SET_GPR_U32(ctx, 31, 0x23649Cu);
    ctx->pc = 0x235D30u;
    { ctx->pc = 0x235d30; return; }
    ctx->pc = 0x23649Cu;
label_23649c:
    // 0x23649c: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x23649cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
label_2364a0:
    // 0x2364a0: 0xc069210  jal         func_1A4840
label_2364a4:
    if (ctx->pc == 0x2364A4u) {
        ctx->pc = 0x2364A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2364A0u;
        // 0x2364a4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2364A8u;
        goto label_2364a8;
    }
    ctx->pc = 0x2364A0u;
    SET_GPR_U32(ctx, 31, 0x2364A8u);
    ctx->pc = 0x2364A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2364A0u;
    // 0x2364a4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x2364A8u;
label_2364a8:
    // 0x2364a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2364a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2364ac:
    // 0x2364ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2364acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2364b0:
    // 0x2364b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2364b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2364b4:
    // 0x2364b4: 0x3e00008  jr          $ra
label_2364b8:
    if (ctx->pc == 0x2364B8u) {
        ctx->pc = 0x2364B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2364B4u;
        // 0x2364b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2364BCu;
        goto label_2364bc;
    }
    ctx->pc = 0x2364B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2364B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2364B4u;
        // 0x2364b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2364B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2364BCu;
label_2364bc:
    // 0x2364bc: 0x0  nop
    ctx->pc = 0x2364bcu;
    // NOP
label_2364c0:
    // 0x2364c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2364c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2364c4:
    // 0x2364c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2364c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2364c8:
    // 0x2364c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2364c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2364cc:
    // 0x2364cc: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x2364ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
label_2364d0:
    // 0x2364d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2364d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2364d4:
    // 0x2364d4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2364d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2364d8:
    // 0x2364d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2364d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2364dc:
    // 0x2364dc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2364dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_2364e0:
    // 0x2364e0: 0xc08dbf8  jal         func_236FE0
label_2364e4:
    if (ctx->pc == 0x2364E4u) {
        ctx->pc = 0x2364E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2364E0u;
        // 0x2364e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2364E8u;
        goto label_2364e8;
    }
    ctx->pc = 0x2364E0u;
    SET_GPR_U32(ctx, 31, 0x2364E8u);
    ctx->pc = 0x2364E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2364E0u;
    // 0x2364e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x2364E8u;
label_2364e8:
    // 0x2364e8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_2364ec:
    if (ctx->pc == 0x2364ECu) {
        ctx->pc = 0x2364ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2364E8u;
        // 0x2364ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2364F0u;
        goto label_2364f0;
    }
    ctx->pc = 0x2364E8u;
    {
        const bool branch_taken_0x2364e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2364ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2364E8u;
        // 0x2364ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2364e8) {
            ctx->pc = 0x236528u;
            goto label_236528;
        }
    }
    ctx->pc = 0x2364F0u;
label_2364f0:
    // 0x2364f0: 0xc08d736  jal         func_235CD8
label_2364f4:
    if (ctx->pc == 0x2364F4u) {
        ctx->pc = 0x2364F8u;
        goto label_2364f8;
    }
    ctx->pc = 0x2364F0u;
    SET_GPR_U32(ctx, 31, 0x2364F8u);
    ctx->pc = 0x235CD8u;
    { ctx->pc = 0x235cd8; return; }
    ctx->pc = 0x2364F8u;
label_2364f8:
    // 0x2364f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2364f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2364fc:
    // 0x2364fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2364fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236500:
    // 0x236500: 0x24050099  addiu       $a1, $zero, 0x99
    ctx->pc = 0x236500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
label_236504:
    // 0x236504: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
label_236508:
    if (ctx->pc == 0x236508u) {
        ctx->pc = 0x236508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236504u;
        // 0x236508: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23650Cu;
        goto label_23650c;
    }
    ctx->pc = 0x236504u;
    {
        const bool branch_taken_0x236504 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x236508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236504u;
        // 0x236508: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236504) {
            ctx->pc = 0x23651Cu;
            goto label_23651c;
        }
    }
    ctx->pc = 0x23650Cu;
label_23650c:
    // 0x23650c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x23650cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_236510:
    // 0x236510: 0xc08d74c  jal         func_235D30
label_236514:
    if (ctx->pc == 0x236514u) {
        ctx->pc = 0x236514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236510u;
        // 0x236514: 0xac52b1c0  sw          $s2, -0x4E40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294947264), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236518u;
        goto label_236518;
    }
    ctx->pc = 0x236510u;
    SET_GPR_U32(ctx, 31, 0x236518u);
    ctx->pc = 0x236514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236510u;
    // 0x236514: 0xac52b1c0  sw          $s2, -0x4E40($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294947264), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235D30u;
    { ctx->pc = 0x235d30; return; }
    ctx->pc = 0x236518u;
label_236518:
    // 0x236518: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x236518u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23651c:
    // 0x23651c: 0xc069210  jal         func_1A4840
label_236520:
    if (ctx->pc == 0x236520u) {
        ctx->pc = 0x236520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23651Cu;
        // 0x236520: 0x8f8482f0  lw          $a0, -0x7D10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236524u;
        goto label_236524;
    }
    ctx->pc = 0x23651Cu;
    SET_GPR_U32(ctx, 31, 0x236524u);
    ctx->pc = 0x236520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23651Cu;
    // 0x236520: 0x8f8482f0  lw          $a0, -0x7D10($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x236524u;
label_236524:
    // 0x236524: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x236524u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_236528:
    // 0x236528: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236528u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23652c:
    // 0x23652c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23652cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_236530:
    // 0x236530: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x236530u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_236534:
    // 0x236534: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x236534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_236538:
    // 0x236538: 0x3e00008  jr          $ra
label_23653c:
    if (ctx->pc == 0x23653Cu) {
        ctx->pc = 0x23653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236538u;
        // 0x23653c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236540u;
        goto label_236540;
    }
    ctx->pc = 0x236538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236538u;
        // 0x23653c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236540u;
label_236540:
    // 0x236540: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x236540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_236544:
    // 0x236544: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x236544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_236548:
    // 0x236548: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x236548u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23654c:
    // 0x23654c: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x23654cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
label_236550:
    // 0x236550: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x236550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_236554:
    // 0x236554: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x236554u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_236558:
    // 0x236558: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x236558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23655c:
    // 0x23655c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23655cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_236560:
    // 0x236560: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x236560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_236564:
    // 0x236564: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x236564u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_236568:
    // 0x236568: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23656c:
    // 0x23656c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x23656cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_236570:
    // 0x236570: 0xc08dbf8  jal         func_236FE0
label_236574:
    if (ctx->pc == 0x236574u) {
        ctx->pc = 0x236574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236570u;
        // 0x236574: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236578u;
        goto label_236578;
    }
    ctx->pc = 0x236570u;
    SET_GPR_U32(ctx, 31, 0x236578u);
    ctx->pc = 0x236574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236570u;
    // 0x236574: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x236578u;
label_236578:
    // 0x236578: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_23657c:
    if (ctx->pc == 0x23657Cu) {
        ctx->pc = 0x23657Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236578u;
        // 0x23657c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236580u;
        goto label_236580;
    }
    ctx->pc = 0x236578u;
    {
        const bool branch_taken_0x236578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23657Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236578u;
        // 0x23657c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236578) {
            ctx->pc = 0x2365C4u;
            goto label_2365c4;
        }
    }
    ctx->pc = 0x236580u;
label_236580:
    // 0x236580: 0xc08d736  jal         func_235CD8
label_236584:
    if (ctx->pc == 0x236584u) {
        ctx->pc = 0x236588u;
        goto label_236588;
    }
    ctx->pc = 0x236580u;
    SET_GPR_U32(ctx, 31, 0x236588u);
    ctx->pc = 0x235CD8u;
    { ctx->pc = 0x235cd8; return; }
    ctx->pc = 0x236588u;
label_236588:
    // 0x236588: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x236588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23658c:
    // 0x23658c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23658cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236590:
    // 0x236590: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x236590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_236594:
    // 0x236594: 0x2442b1c0  addiu       $v0, $v0, -0x4E40
    ctx->pc = 0x236594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947264));
label_236598:
    // 0x236598: 0x2405009a  addiu       $a1, $zero, 0x9A
    ctx->pc = 0x236598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
label_23659c:
    // 0x23659c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
label_2365a0:
    if (ctx->pc == 0x2365A0u) {
        ctx->pc = 0x2365A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23659Cu;
        // 0x2365a0: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2365A4u;
        goto label_2365a4;
    }
    ctx->pc = 0x23659Cu;
    {
        const bool branch_taken_0x23659c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2365A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23659Cu;
        // 0x2365a0: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23659c) {
            ctx->pc = 0x2365B8u;
            goto label_2365b8;
        }
    }
    ctx->pc = 0x2365A4u;
label_2365a4:
    // 0x2365a4: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x2365a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
label_2365a8:
    // 0x2365a8: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x2365a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
label_2365ac:
    // 0x2365ac: 0xc08d74c  jal         func_235D30
label_2365b0:
    if (ctx->pc == 0x2365B0u) {
        ctx->pc = 0x2365B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2365ACu;
        // 0x2365b0: 0xac530004  sw          $s3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2365B4u;
        goto label_2365b4;
    }
    ctx->pc = 0x2365ACu;
    SET_GPR_U32(ctx, 31, 0x2365B4u);
    ctx->pc = 0x2365B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2365ACu;
    // 0x2365b0: 0xac530004  sw          $s3, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235D30u;
    { ctx->pc = 0x235d30; return; }
    ctx->pc = 0x2365B4u;
label_2365b4:
    // 0x2365b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2365b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2365b8:
    // 0x2365b8: 0xc069210  jal         func_1A4840
label_2365bc:
    if (ctx->pc == 0x2365BCu) {
        ctx->pc = 0x2365BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2365B8u;
        // 0x2365bc: 0x8f8482f0  lw          $a0, -0x7D10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2365C0u;
        goto label_2365c0;
    }
    ctx->pc = 0x2365B8u;
    SET_GPR_U32(ctx, 31, 0x2365C0u);
    ctx->pc = 0x2365BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2365B8u;
    // 0x2365bc: 0x8f8482f0  lw          $a0, -0x7D10($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x2365C0u;
label_2365c0:
    // 0x2365c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2365c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2365c4:
    // 0x2365c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2365c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2365c8:
    // 0x2365c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2365c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2365cc:
    // 0x2365cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2365ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2365d0:
    // 0x2365d0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2365d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2365d4:
    // 0x2365d4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2365d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2365d8:
    // 0x2365d8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2365d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2365dc:
    // 0x2365dc: 0x3e00008  jr          $ra
label_2365e0:
    if (ctx->pc == 0x2365E0u) {
        ctx->pc = 0x2365E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2365DCu;
        // 0x2365e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2365E4u;
        goto label_2365e4;
    }
    ctx->pc = 0x2365DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2365E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2365DCu;
        // 0x2365e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2365DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2365E4u;
label_2365e4:
    // 0x2365e4: 0x0  nop
    ctx->pc = 0x2365e4u;
    // NOP
label_2365e8:
    // 0x2365e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2365e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2365ec:
    // 0x2365ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2365ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2365f0:
    // 0x2365f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2365f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2365f4:
    // 0x2365f4: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x2365f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
label_2365f8:
    // 0x2365f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2365f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2365fc:
    // 0x2365fc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2365fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_236600:
    // 0x236600: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x236600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_236604:
    // 0x236604: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x236604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_236608:
    // 0x236608: 0xc08dbf8  jal         func_236FE0
label_23660c:
    if (ctx->pc == 0x23660Cu) {
        ctx->pc = 0x23660Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236608u;
        // 0x23660c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236610u;
        goto label_236610;
    }
    ctx->pc = 0x236608u;
    SET_GPR_U32(ctx, 31, 0x236610u);
    ctx->pc = 0x23660Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236608u;
    // 0x23660c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x236610u;
label_236610:
    // 0x236610: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_236614:
    if (ctx->pc == 0x236614u) {
        ctx->pc = 0x236614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236610u;
        // 0x236614: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236618u;
        goto label_236618;
    }
    ctx->pc = 0x236610u;
    {
        const bool branch_taken_0x236610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236610u;
        // 0x236614: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236610) {
            ctx->pc = 0x236650u;
            goto label_236650;
        }
    }
    ctx->pc = 0x236618u;
label_236618:
    // 0x236618: 0xc08d736  jal         func_235CD8
label_23661c:
    if (ctx->pc == 0x23661Cu) {
        ctx->pc = 0x236620u;
        goto label_236620;
    }
    ctx->pc = 0x236618u;
    SET_GPR_U32(ctx, 31, 0x236620u);
    ctx->pc = 0x235CD8u;
    { ctx->pc = 0x235cd8; return; }
    ctx->pc = 0x236620u;
label_236620:
    // 0x236620: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236624:
    // 0x236624: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x236624u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236628:
    // 0x236628: 0x2405009b  addiu       $a1, $zero, 0x9B
    ctx->pc = 0x236628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
label_23662c:
    // 0x23662c: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
label_236630:
    if (ctx->pc == 0x236630u) {
        ctx->pc = 0x236630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23662Cu;
        // 0x236630: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236634u;
        goto label_236634;
    }
    ctx->pc = 0x23662Cu;
    {
        const bool branch_taken_0x23662c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x236630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23662Cu;
        // 0x236630: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23662c) {
            ctx->pc = 0x236644u;
            goto label_236644;
        }
    }
    ctx->pc = 0x236634u;
label_236634:
    // 0x236634: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x236634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_236638:
    // 0x236638: 0xc08d74c  jal         func_235D30
label_23663c:
    if (ctx->pc == 0x23663Cu) {
        ctx->pc = 0x23663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236638u;
        // 0x23663c: 0xac52b1c0  sw          $s2, -0x4E40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294947264), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236640u;
        goto label_236640;
    }
    ctx->pc = 0x236638u;
    SET_GPR_U32(ctx, 31, 0x236640u);
    ctx->pc = 0x23663Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236638u;
    // 0x23663c: 0xac52b1c0  sw          $s2, -0x4E40($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294947264), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235D30u;
    { ctx->pc = 0x235d30; return; }
    ctx->pc = 0x236640u;
label_236640:
    // 0x236640: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x236640u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236644:
    // 0x236644: 0xc069210  jal         func_1A4840
label_236648:
    if (ctx->pc == 0x236648u) {
        ctx->pc = 0x236648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236644u;
        // 0x236648: 0x8f8482f0  lw          $a0, -0x7D10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23664Cu;
        goto label_23664c;
    }
    ctx->pc = 0x236644u;
    SET_GPR_U32(ctx, 31, 0x23664Cu);
    ctx->pc = 0x236648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236644u;
    // 0x236648: 0x8f8482f0  lw          $a0, -0x7D10($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x23664Cu;
label_23664c:
    // 0x23664c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x23664cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_236650:
    // 0x236650: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236650u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236654:
    // 0x236654: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x236654u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_236658:
    // 0x236658: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x236658u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23665c:
    // 0x23665c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x23665cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_236660:
    // 0x236660: 0x3e00008  jr          $ra
label_236664:
    if (ctx->pc == 0x236664u) {
        ctx->pc = 0x236664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236660u;
        // 0x236664: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236668u;
        goto label_236668;
    }
    ctx->pc = 0x236660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236660u;
        // 0x236664: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236668u;
label_236668:
    // 0x236668: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23666c:
    // 0x23666c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23666cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_236670:
    // 0x236670: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x236670u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_236674:
    // 0x236674: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x236674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
label_236678:
    // 0x236678: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x236678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_23667c:
    // 0x23667c: 0xc08dbf8  jal         func_236FE0
label_236680:
    if (ctx->pc == 0x236680u) {
        ctx->pc = 0x236680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23667Cu;
        // 0x236680: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236684u;
        goto label_236684;
    }
    ctx->pc = 0x23667Cu;
    SET_GPR_U32(ctx, 31, 0x236684u);
    ctx->pc = 0x236680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23667Cu;
    // 0x236680: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x236684u;
label_236684:
    // 0x236684: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236688:
    // 0x236688: 0x2405009c  addiu       $a1, $zero, 0x9C
    ctx->pc = 0x236688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
label_23668c:
    // 0x23668c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_236690:
    if (ctx->pc == 0x236690u) {
        ctx->pc = 0x236690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23668Cu;
        // 0x236690: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236694u;
        goto label_236694;
    }
    ctx->pc = 0x23668Cu;
    {
        const bool branch_taken_0x23668c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23668Cu;
        // 0x236690: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23668c) {
            ctx->pc = 0x2366ACu;
            goto label_2366ac;
        }
    }
    ctx->pc = 0x236694u;
label_236694:
    // 0x236694: 0xc08d74c  jal         func_235D30
label_236698:
    if (ctx->pc == 0x236698u) {
        ctx->pc = 0x23669Cu;
        goto label_23669c;
    }
    ctx->pc = 0x236694u;
    SET_GPR_U32(ctx, 31, 0x23669Cu);
    ctx->pc = 0x235D30u;
    { ctx->pc = 0x235d30; return; }
    ctx->pc = 0x23669Cu;
label_23669c:
    // 0x23669c: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x23669cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
label_2366a0:
    // 0x2366a0: 0xc069210  jal         func_1A4840
label_2366a4:
    if (ctx->pc == 0x2366A4u) {
        ctx->pc = 0x2366A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2366A0u;
        // 0x2366a4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2366A8u;
        goto label_2366a8;
    }
    ctx->pc = 0x2366A0u;
    SET_GPR_U32(ctx, 31, 0x2366A8u);
    ctx->pc = 0x2366A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2366A0u;
    // 0x2366a4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x2366A8u;
label_2366a8:
    // 0x2366a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2366a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2366ac:
    // 0x2366ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2366acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2366b0:
    // 0x2366b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2366b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2366b4:
    // 0x2366b4: 0x3e00008  jr          $ra
label_2366b8:
    if (ctx->pc == 0x2366B8u) {
        ctx->pc = 0x2366B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2366B4u;
        // 0x2366b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2366BCu;
        goto label_2366bc;
    }
    ctx->pc = 0x2366B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2366B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2366B4u;
        // 0x2366b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2366B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2366BCu;
label_2366bc:
    // 0x2366bc: 0x0  nop
    ctx->pc = 0x2366bcu;
    // NOP
label_2366c0:
    // 0x2366c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2366c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2366c4:
    // 0x2366c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2366c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2366c8:
    // 0x2366c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2366c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2366cc:
    // 0x2366cc: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x2366ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
label_2366d0:
    // 0x2366d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2366d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2366d4:
    // 0x2366d4: 0xc08dbf8  jal         func_236FE0
label_2366d8:
    if (ctx->pc == 0x2366D8u) {
        ctx->pc = 0x2366D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2366D4u;
        // 0x2366d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2366DCu;
        goto label_2366dc;
    }
    ctx->pc = 0x2366D4u;
    SET_GPR_U32(ctx, 31, 0x2366DCu);
    ctx->pc = 0x2366D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2366D4u;
    // 0x2366d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x2366DCu;
label_2366dc:
    // 0x2366dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2366dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2366e0:
    // 0x2366e0: 0x2405009d  addiu       $a1, $zero, 0x9D
    ctx->pc = 0x2366e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
label_2366e4:
    // 0x2366e4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2366e8:
    if (ctx->pc == 0x2366E8u) {
        ctx->pc = 0x2366E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2366E4u;
        // 0x2366e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2366ECu;
        goto label_2366ec;
    }
    ctx->pc = 0x2366E4u;
    {
        const bool branch_taken_0x2366e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2366E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2366E4u;
        // 0x2366e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2366e4) {
            ctx->pc = 0x236704u;
            goto label_236704;
        }
    }
    ctx->pc = 0x2366ECu;
label_2366ec:
    // 0x2366ec: 0xc08d74c  jal         func_235D30
label_2366f0:
    if (ctx->pc == 0x2366F0u) {
        ctx->pc = 0x2366F4u;
        goto label_2366f4;
    }
    ctx->pc = 0x2366ECu;
    SET_GPR_U32(ctx, 31, 0x2366F4u);
    ctx->pc = 0x235D30u;
    { ctx->pc = 0x235d30; return; }
    ctx->pc = 0x2366F4u;
label_2366f4:
    // 0x2366f4: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x2366f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
label_2366f8:
    // 0x2366f8: 0xc069210  jal         func_1A4840
label_2366fc:
    if (ctx->pc == 0x2366FCu) {
        ctx->pc = 0x2366FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2366F8u;
        // 0x2366fc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236700u;
        goto label_236700;
    }
    ctx->pc = 0x2366F8u;
    SET_GPR_U32(ctx, 31, 0x236700u);
    ctx->pc = 0x2366FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2366F8u;
    // 0x2366fc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x236700u;
label_236700:
    // 0x236700: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x236700u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236704:
    // 0x236704: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236704u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236708:
    // 0x236708: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x236708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23670c:
    // 0x23670c: 0x3e00008  jr          $ra
label_236710:
    if (ctx->pc == 0x236710u) {
        ctx->pc = 0x236710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23670Cu;
        // 0x236710: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236714u;
        goto label_236714;
    }
    ctx->pc = 0x23670Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23670Cu;
        // 0x236710: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23670Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236714u;
label_236714:
    // 0x236714: 0x0  nop
    ctx->pc = 0x236714u;
    // NOP
label_236718:
    // 0x236718: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23671c:
    // 0x23671c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23671cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_236720:
    // 0x236720: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x236720u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_236724:
    // 0x236724: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x236724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
label_236728:
    // 0x236728: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x236728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_23672c:
    // 0x23672c: 0xc08dbf8  jal         func_236FE0
label_236730:
    if (ctx->pc == 0x236730u) {
        ctx->pc = 0x236730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23672Cu;
        // 0x236730: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236734u;
        goto label_236734;
    }
    ctx->pc = 0x23672Cu;
    SET_GPR_U32(ctx, 31, 0x236734u);
    ctx->pc = 0x236730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23672Cu;
    // 0x236730: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x236734u;
label_236734:
    // 0x236734: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236738:
    // 0x236738: 0x2405009e  addiu       $a1, $zero, 0x9E
    ctx->pc = 0x236738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
label_23673c:
    // 0x23673c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_236740:
    if (ctx->pc == 0x236740u) {
        ctx->pc = 0x236740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23673Cu;
        // 0x236740: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236744u;
        goto label_236744;
    }
    ctx->pc = 0x23673Cu;
    {
        const bool branch_taken_0x23673c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23673Cu;
        // 0x236740: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23673c) {
            ctx->pc = 0x236770u;
            goto label_236770;
        }
    }
    ctx->pc = 0x236744u;
label_236744:
    // 0x236744: 0xc08d74c  jal         func_235D30
label_236748:
    if (ctx->pc == 0x236748u) {
        ctx->pc = 0x23674Cu;
        goto label_23674c;
    }
    ctx->pc = 0x236744u;
    SET_GPR_U32(ctx, 31, 0x23674Cu);
    ctx->pc = 0x235D30u;
    { ctx->pc = 0x235d30; return; }
    ctx->pc = 0x23674Cu;
label_23674c:
    // 0x23674c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23674cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236750:
    // 0x236750: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
label_236754:
    if (ctx->pc == 0x236754u) {
        ctx->pc = 0x236758u;
        goto label_236758;
    }
    ctx->pc = 0x236750u;
    {
        const bool branch_taken_0x236750 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x236750) {
            ctx->pc = 0x236764u;
            goto label_236764;
        }
    }
    ctx->pc = 0x236758u;
label_236758:
    // 0x236758: 0xc08d9e0  jal         func_236780
label_23675c:
    if (ctx->pc == 0x23675Cu) {
        ctx->pc = 0x236760u;
        goto label_236760;
    }
    ctx->pc = 0x236758u;
    SET_GPR_U32(ctx, 31, 0x236760u);
    ctx->pc = 0x236780u;
    goto label_236780;
    ctx->pc = 0x236760u;
label_236760:
    // 0x236760: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236764:
    // 0x236764: 0xc069210  jal         func_1A4840
label_236768:
    if (ctx->pc == 0x236768u) {
        ctx->pc = 0x236768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236764u;
        // 0x236768: 0x8f8482f0  lw          $a0, -0x7D10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23676Cu;
        goto label_23676c;
    }
    ctx->pc = 0x236764u;
    SET_GPR_U32(ctx, 31, 0x23676Cu);
    ctx->pc = 0x236768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236764u;
    // 0x236768: 0x8f8482f0  lw          $a0, -0x7D10($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x23676Cu;
label_23676c:
    // 0x23676c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23676cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236770:
    // 0x236770: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236774:
    // 0x236774: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x236774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_236778:
    // 0x236778: 0x3e00008  jr          $ra
label_23677c:
    if (ctx->pc == 0x23677Cu) {
        ctx->pc = 0x23677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236778u;
        // 0x23677c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236780u;
        goto label_236780;
    }
    ctx->pc = 0x236778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236778u;
        // 0x23677c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236780u;
label_236780:
    // 0x236780: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_236784:
    // 0x236784: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x236784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_236788:
    // 0x236788: 0xc069a54  jal         func_1A6950
label_23678c:
    if (ctx->pc == 0x23678Cu) {
        ctx->pc = 0x23678Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236788u;
        // 0x23678c: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236790u;
        goto label_236790;
    }
    ctx->pc = 0x236788u;
    SET_GPR_U32(ctx, 31, 0x236790u);
    ctx->pc = 0x23678Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236788u;
    // 0x23678c: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6950u;
    { ctx->pc = 0x1a6950; return; }
    ctx->pc = 0x236790u;
label_236790:
    // 0x236790: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x236790u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236794:
    // 0x236794: 0x8f8282fc  lw          $v0, -0x7D04($gp)
    ctx->pc = 0x236794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935292)));
label_236798:
    // 0x236798: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_23679c:
    if (ctx->pc == 0x23679Cu) {
        ctx->pc = 0x23679Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236798u;
        // 0x23679c: 0x2402ff1f  addiu       $v0, $zero, -0xE1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967071));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2367A0u;
        goto label_2367a0;
    }
    ctx->pc = 0x236798u;
    {
        const bool branch_taken_0x236798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23679Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236798u;
        // 0x23679c: 0x2402ff1f  addiu       $v0, $zero, -0xE1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967071));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236798) {
            ctx->pc = 0x2367A8u;
            goto label_2367a8;
        }
    }
    ctx->pc = 0x2367A0u;
label_2367a0:
    // 0x2367a0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2367a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2367a4:
    // 0x2367a4: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x2367a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
label_2367a8:
    // 0x2367a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2367a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2367ac:
    // 0x2367ac: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2367acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2367b0:
    // 0x2367b0: 0x3e00008  jr          $ra
label_2367b4:
    if (ctx->pc == 0x2367B4u) {
        ctx->pc = 0x2367B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2367B0u;
        // 0x2367b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2367B8u;
        goto label_2367b8;
    }
    ctx->pc = 0x2367B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2367B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2367B0u;
        // 0x2367b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2367B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2367B8u;
label_2367b8:
    // 0x2367b8: 0x8f8282fc  lw          $v0, -0x7D04($gp)
    ctx->pc = 0x2367b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935292)));
label_2367bc:
    // 0x2367bc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2367bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2367c0:
    // 0x2367c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2367c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2367c4:
    // 0x2367c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2367c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2367c8:
    // 0x2367c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2367c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2367cc:
    // 0x2367cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2367ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2367d0:
    // 0x2367d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2367d4:
    if (ctx->pc == 0x2367D4u) {
        ctx->pc = 0x2367D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2367D0u;
        // 0x2367d4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2367D8u;
        goto label_2367d8;
    }
    ctx->pc = 0x2367D0u;
    {
        const bool branch_taken_0x2367d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2367D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2367D0u;
        // 0x2367d4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2367d0) {
            ctx->pc = 0x2367E8u;
            goto label_2367e8;
        }
    }
    ctx->pc = 0x2367D8u;
label_2367d8:
    // 0x2367d8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2367d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2367dc:
    // 0x2367dc: 0x1000000a  b           . + 4 + (0xA << 2)
label_2367e0:
    if (ctx->pc == 0x2367E0u) {
        ctx->pc = 0x2367E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2367DCu;
        // 0x2367e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2367E4u;
        goto label_2367e4;
    }
    ctx->pc = 0x2367DCu;
    {
        const bool branch_taken_0x2367dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2367E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2367DCu;
        // 0x2367e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2367dc) {
            ctx->pc = 0x236808u;
            goto label_236808;
        }
    }
    ctx->pc = 0x2367E4u;
label_2367e4:
    // 0x2367e4: 0x0  nop
    ctx->pc = 0x2367e4u;
    // NOP
label_2367e8:
    // 0x2367e8: 0xc069a54  jal         func_1A6950
label_2367ec:
    if (ctx->pc == 0x2367ECu) {
        ctx->pc = 0x2367ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2367E8u;
        // 0x2367ec: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2367F0u;
        goto label_2367f0;
    }
    ctx->pc = 0x2367E8u;
    SET_GPR_U32(ctx, 31, 0x2367F0u);
    ctx->pc = 0x2367ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2367E8u;
    // 0x2367ec: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6950u;
    { ctx->pc = 0x1a6950; return; }
    ctx->pc = 0x2367F0u;
label_2367f0:
    // 0x2367f0: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x2367f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
label_2367f4:
    // 0x2367f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2367f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2367f8:
    // 0x2367f8: 0x22502  srl         $a0, $v0, 20
    ctx->pc = 0x2367f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
label_2367fc:
    // 0x2367fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2367fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_236800:
    // 0x236800: 0x422c0  sll         $a0, $a0, 11
    ctx->pc = 0x236800u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 11));
label_236804:
    // 0x236804: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x236804u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_236808:
    // 0x236808: 0x56000001  bnel        $s0, $zero, . + 4 + (0x1 << 2)
label_23680c:
    if (ctx->pc == 0x23680Cu) {
        ctx->pc = 0x23680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236808u;
        // 0x23680c: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236810u;
        goto label_236810;
    }
    ctx->pc = 0x236808u;
    {
        const bool branch_taken_0x236808 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x236808) {
            ctx->pc = 0x23680Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236808u;
            // 0x23680c: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236810u;
            goto label_236810;
        }
    }
    ctx->pc = 0x236810u;
label_236810:
    // 0x236810: 0x56200001  bnel        $s1, $zero, . + 4 + (0x1 << 2)
label_236814:
    if (ctx->pc == 0x236814u) {
        ctx->pc = 0x236814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236810u;
        // 0x236814: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236818u;
        goto label_236818;
    }
    ctx->pc = 0x236810u;
    {
        const bool branch_taken_0x236810 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x236810) {
            ctx->pc = 0x236814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236810u;
            // 0x236814: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236818u;
            goto label_236818;
        }
    }
    ctx->pc = 0x236818u;
label_236818:
    // 0x236818: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_23681c:
    if (ctx->pc == 0x23681Cu) {
        ctx->pc = 0x23681Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236818u;
        // 0x23681c: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236820u;
        goto label_236820;
    }
    ctx->pc = 0x236818u;
    {
        const bool branch_taken_0x236818 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23681Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236818u;
        // 0x23681c: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236818) {
            ctx->pc = 0x236848u;
            goto label_236848;
        }
    }
    ctx->pc = 0x236820u;
label_236820:
    // 0x236820: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_236824:
    if (ctx->pc == 0x236824u) {
        ctx->pc = 0x236824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236820u;
        // 0x236824: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x236828u;
        goto label_236828;
    }
    ctx->pc = 0x236820u;
    {
        const bool branch_taken_0x236820 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x236820) {
            ctx->pc = 0x236824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236820u;
            // 0x236824: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x236828u;
            goto label_236828;
        }
    }
    ctx->pc = 0x236828u;
label_236828:
    // 0x236828: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x236828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23682c:
    // 0x23682c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x23682cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_236830:
    // 0x236830: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x236830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_236834:
    // 0x236834: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x236834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_236838:
    // 0x236838: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x236838u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_23683c:
    // 0x23683c: 0x1012  mflo        $v0
    ctx->pc = 0x23683cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_236840:
    // 0x236840: 0x10000003  b           . + 4 + (0x3 << 2)
label_236844:
    if (ctx->pc == 0x236844u) {
        ctx->pc = 0x236844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236840u;
        // 0x236844: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236848u;
        goto label_236848;
    }
    ctx->pc = 0x236840u;
    {
        const bool branch_taken_0x236840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236840u;
        // 0x236844: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236840) {
            ctx->pc = 0x236850u;
            goto label_236850;
        }
    }
    ctx->pc = 0x236848u;
label_236848:
    // 0x236848: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x236848u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23684c:
    // 0x23684c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23684cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236850:
    // 0x236850: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x236850u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_236854:
    // 0x236854: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x236854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_236858:
    // 0x236858: 0x3e00008  jr          $ra
label_23685c:
    if (ctx->pc == 0x23685Cu) {
        ctx->pc = 0x23685Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236858u;
        // 0x23685c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236860u;
        goto label_236860;
    }
    ctx->pc = 0x236858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23685Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236858u;
        // 0x23685c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236860u;
label_236860:
    // 0x236860: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x236860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
label_236864:
    // 0x236864: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236864u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_236868:
    // 0x236868: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23686c:
    // 0x23686c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23686cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_236870:
    // 0x236870: 0xc08dbf8  jal         func_236FE0
label_236874:
    if (ctx->pc == 0x236874u) {
        ctx->pc = 0x236874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236870u;
        // 0x236874: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236878u;
        goto label_236878;
    }
    ctx->pc = 0x236870u;
    SET_GPR_U32(ctx, 31, 0x236878u);
    ctx->pc = 0x236874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236870u;
    // 0x236874: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x236878u;
label_236878:
    // 0x236878: 0x240500ac  addiu       $a1, $zero, 0xAC
    ctx->pc = 0x236878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
label_23687c:
    // 0x23687c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23687cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236880:
    // 0x236880: 0xc08d74c  jal         func_235D30
label_236884:
    if (ctx->pc == 0x236884u) {
        ctx->pc = 0x236884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236880u;
        // 0x236884: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236888u;
        goto label_236888;
    }
    ctx->pc = 0x236880u;
    SET_GPR_U32(ctx, 31, 0x236888u);
    ctx->pc = 0x236884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236880u;
    // 0x236884: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235D30u;
    { ctx->pc = 0x235d30; return; }
    ctx->pc = 0x236888u;
label_236888:
    // 0x236888: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x236888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
label_23688c:
    // 0x23688c: 0xc069210  jal         func_1A4840
label_236890:
    if (ctx->pc == 0x236890u) {
        ctx->pc = 0x236890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23688Cu;
        // 0x236890: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236894u;
        goto label_236894;
    }
    ctx->pc = 0x23688Cu;
    SET_GPR_U32(ctx, 31, 0x236894u);
    ctx->pc = 0x236890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23688Cu;
    // 0x236890: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x236894u;
label_236894:
    // 0x236894: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x236894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236898:
    // 0x236898: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x236898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23689c:
    // 0x23689c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23689cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2368a0:
    // 0x2368a0: 0x3e00008  jr          $ra
label_2368a4:
    if (ctx->pc == 0x2368A4u) {
        ctx->pc = 0x2368A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2368A0u;
        // 0x2368a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2368A8u;
        goto label_2368a8;
    }
    ctx->pc = 0x2368A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2368A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2368A0u;
        // 0x2368a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2368A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2368A8u;
label_2368a8:
    // 0x2368a8: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x2368a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
label_2368ac:
    // 0x2368ac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2368acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2368b0:
    // 0x2368b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2368b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2368b4:
    // 0x2368b4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2368b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2368b8:
    // 0x2368b8: 0xc08dbf8  jal         func_236FE0
label_2368bc:
    if (ctx->pc == 0x2368BCu) {
        ctx->pc = 0x2368BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2368B8u;
        // 0x2368bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2368C0u;
        goto label_2368c0;
    }
    ctx->pc = 0x2368B8u;
    SET_GPR_U32(ctx, 31, 0x2368C0u);
    ctx->pc = 0x2368BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2368B8u;
    // 0x2368bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x2368C0u;
label_2368c0:
    // 0x2368c0: 0x240500ad  addiu       $a1, $zero, 0xAD
    ctx->pc = 0x2368c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 173));
label_2368c4:
    // 0x2368c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2368c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2368c8:
    // 0x2368c8: 0xc08d74c  jal         func_235D30
label_2368cc:
    if (ctx->pc == 0x2368CCu) {
        ctx->pc = 0x2368CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2368C8u;
        // 0x2368cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2368D0u;
        goto label_2368d0;
    }
    ctx->pc = 0x2368C8u;
    SET_GPR_U32(ctx, 31, 0x2368D0u);
    ctx->pc = 0x2368CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2368C8u;
    // 0x2368cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235D30u;
    { ctx->pc = 0x235d30; return; }
    ctx->pc = 0x2368D0u;
label_2368d0:
    // 0x2368d0: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x2368d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
label_2368d4:
    // 0x2368d4: 0xc069210  jal         func_1A4840
label_2368d8:
    if (ctx->pc == 0x2368D8u) {
        ctx->pc = 0x2368D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2368D4u;
        // 0x2368d8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2368DCu;
        goto label_2368dc;
    }
    ctx->pc = 0x2368D4u;
    SET_GPR_U32(ctx, 31, 0x2368DCu);
    ctx->pc = 0x2368D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2368D4u;
    // 0x2368d8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x2368DCu;
label_2368dc:
    // 0x2368dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2368dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2368e0:
    // 0x2368e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2368e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2368e4:
    // 0x2368e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2368e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2368e8:
    // 0x2368e8: 0x3e00008  jr          $ra
label_2368ec:
    if (ctx->pc == 0x2368ECu) {
        ctx->pc = 0x2368ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2368E8u;
        // 0x2368ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2368F0u;
        goto label_2368f0;
    }
    ctx->pc = 0x2368E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2368ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2368E8u;
        // 0x2368ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2368E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2368F0u;
label_2368f0:
    // 0x2368f0: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x2368f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
label_2368f4:
    // 0x2368f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2368f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2368f8:
    // 0x2368f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2368f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2368fc:
    // 0x2368fc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2368fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_236900:
    // 0x236900: 0xc08dbf8  jal         func_236FE0
label_236904:
    if (ctx->pc == 0x236904u) {
        ctx->pc = 0x236904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236900u;
        // 0x236904: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236908u;
        goto label_236908;
    }
    ctx->pc = 0x236900u;
    SET_GPR_U32(ctx, 31, 0x236908u);
    ctx->pc = 0x236904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236900u;
    // 0x236904: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x236908u;
label_236908:
    // 0x236908: 0x240500ae  addiu       $a1, $zero, 0xAE
    ctx->pc = 0x236908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 174));
label_23690c:
    // 0x23690c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23690cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236910:
    // 0x236910: 0xc08d74c  jal         func_235D30
label_236914:
    if (ctx->pc == 0x236914u) {
        ctx->pc = 0x236914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236910u;
        // 0x236914: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236918u;
        goto label_236918;
    }
    ctx->pc = 0x236910u;
    SET_GPR_U32(ctx, 31, 0x236918u);
    ctx->pc = 0x236914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236910u;
    // 0x236914: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235D30u;
    { ctx->pc = 0x235d30; return; }
    ctx->pc = 0x236918u;
label_236918:
    // 0x236918: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x236918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
label_23691c:
    // 0x23691c: 0xc069210  jal         func_1A4840
label_236920:
    if (ctx->pc == 0x236920u) {
        ctx->pc = 0x236920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23691Cu;
        // 0x236920: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236924u;
        goto label_236924;
    }
    ctx->pc = 0x23691Cu;
    SET_GPR_U32(ctx, 31, 0x236924u);
    ctx->pc = 0x236920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23691Cu;
    // 0x236920: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x236924u;
label_236924:
    // 0x236924: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x236924u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236928:
    // 0x236928: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x236928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23692c:
    // 0x23692c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23692cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236930:
    // 0x236930: 0x3e00008  jr          $ra
label_236934:
    if (ctx->pc == 0x236934u) {
        ctx->pc = 0x236934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236930u;
        // 0x236934: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236938u;
        goto label_236938;
    }
    ctx->pc = 0x236930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236930u;
        // 0x236934: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236938u;
label_236938:
    // 0x236938: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23693c:
    // 0x23693c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23693cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_236940:
    // 0x236940: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x236940u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_236944:
    // 0x236944: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x236944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
label_236948:
    // 0x236948: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x236948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_23694c:
    // 0x23694c: 0xc08dbf8  jal         func_236FE0
label_236950:
    if (ctx->pc == 0x236950u) {
        ctx->pc = 0x236950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23694Cu;
        // 0x236950: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236954u;
        goto label_236954;
    }
    ctx->pc = 0x23694Cu;
    SET_GPR_U32(ctx, 31, 0x236954u);
    ctx->pc = 0x236950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23694Cu;
    // 0x236950: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x236954u;
label_236954:
    // 0x236954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236958:
    // 0x236958: 0x2405009f  addiu       $a1, $zero, 0x9F
    ctx->pc = 0x236958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
label_23695c:
    // 0x23695c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_236960:
    if (ctx->pc == 0x236960u) {
        ctx->pc = 0x236960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23695Cu;
        // 0x236960: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236964u;
        goto label_236964;
    }
    ctx->pc = 0x23695Cu;
    {
        const bool branch_taken_0x23695c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23695Cu;
        // 0x236960: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23695c) {
            ctx->pc = 0x23697Cu;
            goto label_23697c;
        }
    }
    ctx->pc = 0x236964u;
label_236964:
    // 0x236964: 0xc08d74c  jal         func_235D30
label_236968:
    if (ctx->pc == 0x236968u) {
        ctx->pc = 0x23696Cu;
        goto label_23696c;
    }
    ctx->pc = 0x236964u;
    SET_GPR_U32(ctx, 31, 0x23696Cu);
    ctx->pc = 0x235D30u;
    { ctx->pc = 0x235d30; return; }
    ctx->pc = 0x23696Cu;
label_23696c:
    // 0x23696c: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x23696cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
label_236970:
    // 0x236970: 0xc069210  jal         func_1A4840
label_236974:
    if (ctx->pc == 0x236974u) {
        ctx->pc = 0x236974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236970u;
        // 0x236974: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236978u;
        goto label_236978;
    }
    ctx->pc = 0x236970u;
    SET_GPR_U32(ctx, 31, 0x236978u);
    ctx->pc = 0x236974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236970u;
    // 0x236974: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x236978u;
label_236978:
    // 0x236978: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x236978u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23697c:
    // 0x23697c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23697cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236980:
    // 0x236980: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x236980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_236984:
    // 0x236984: 0x3e00008  jr          $ra
label_236988:
    if (ctx->pc == 0x236988u) {
        ctx->pc = 0x236988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236984u;
        // 0x236988: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23698Cu;
        goto label_23698c;
    }
    ctx->pc = 0x236984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236984u;
        // 0x236988: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23698Cu;
label_23698c:
    // 0x23698c: 0x0  nop
    ctx->pc = 0x23698cu;
    // NOP
label_236990:
    // 0x236990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x236990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_236994:
    // 0x236994: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x236994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_236998:
    // 0x236998: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x236998u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23699c:
    // 0x23699c: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x23699cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
label_2369a0:
    // 0x2369a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2369a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2369a4:
    // 0x2369a4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2369a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2369a8:
    // 0x2369a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2369a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2369ac:
    // 0x2369ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2369acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2369b0:
    // 0x2369b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2369b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2369b4:
    // 0x2369b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2369b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2369b8:
    // 0x2369b8: 0xc08dbf8  jal         func_236FE0
label_2369bc:
    if (ctx->pc == 0x2369BCu) {
        ctx->pc = 0x2369BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2369B8u;
        // 0x2369bc: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2369C0u;
        goto label_2369c0;
    }
    ctx->pc = 0x2369B8u;
    SET_GPR_U32(ctx, 31, 0x2369C0u);
    ctx->pc = 0x2369BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2369B8u;
    // 0x2369bc: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x2369C0u;
label_2369c0:
    // 0x2369c0: 0xc08d736  jal         func_235CD8
label_2369c4:
    if (ctx->pc == 0x2369C4u) {
        ctx->pc = 0x2369C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2369C0u;
        // 0x2369c4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2369C8u;
        goto label_2369c8;
    }
    ctx->pc = 0x2369C0u;
    SET_GPR_U32(ctx, 31, 0x2369C8u);
    ctx->pc = 0x2369C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2369C0u;
    // 0x2369c4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235CD8u;
    { ctx->pc = 0x235cd8; return; }
    ctx->pc = 0x2369C8u;
label_2369c8:
    // 0x2369c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2369c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2369cc:
    // 0x2369cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2369ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2369d0:
    // 0x2369d0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2369d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_2369d4:
    // 0x2369d4: 0x2442b1c0  addiu       $v0, $v0, -0x4E40
    ctx->pc = 0x2369d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947264));
label_2369d8:
    // 0x2369d8: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x2369d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_2369dc:
    // 0x2369dc: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
label_2369e0:
    if (ctx->pc == 0x2369E0u) {
        ctx->pc = 0x2369E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2369DCu;
        // 0x2369e0: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2369E4u;
        goto label_2369e4;
    }
    ctx->pc = 0x2369DCu;
    {
        const bool branch_taken_0x2369dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2369E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2369DCu;
        // 0x2369e0: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2369dc) {
            ctx->pc = 0x2369F8u;
            goto label_2369f8;
        }
    }
    ctx->pc = 0x2369E4u;
label_2369e4:
    // 0x2369e4: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x2369e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
label_2369e8:
    // 0x2369e8: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x2369e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
label_2369ec:
    // 0x2369ec: 0xc08d74c  jal         func_235D30
label_2369f0:
    if (ctx->pc == 0x2369F0u) {
        ctx->pc = 0x2369F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2369ECu;
        // 0x2369f0: 0xac520004  sw          $s2, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2369F4u;
        goto label_2369f4;
    }
    ctx->pc = 0x2369ECu;
    SET_GPR_U32(ctx, 31, 0x2369F4u);
    ctx->pc = 0x2369F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2369ECu;
    // 0x2369f0: 0xac520004  sw          $s2, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235D30u;
    { ctx->pc = 0x235d30; return; }
    ctx->pc = 0x2369F4u;
label_2369f4:
    // 0x2369f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2369f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2369f8:
    // 0x2369f8: 0xc069210  jal         func_1A4840
label_2369fc:
    if (ctx->pc == 0x2369FCu) {
        ctx->pc = 0x2369FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2369F8u;
        // 0x2369fc: 0x8f8482f0  lw          $a0, -0x7D10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236A00u;
        goto label_236a00;
    }
    ctx->pc = 0x2369F8u;
    SET_GPR_U32(ctx, 31, 0x236A00u);
    ctx->pc = 0x2369FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2369F8u;
    // 0x2369fc: 0x8f8482f0  lw          $a0, -0x7D10($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x236A00u;
label_236a00:
    // 0x236a00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x236a00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236a04:
    // 0x236a04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x236a04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_236a08:
    // 0x236a08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236a08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236a0c:
    // 0x236a0c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x236a0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_236a10:
    // 0x236a10: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x236a10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_236a14:
    // 0x236a14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x236a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_236a18:
    // 0x236a18: 0x3e00008  jr          $ra
label_236a1c:
    if (ctx->pc == 0x236A1Cu) {
        ctx->pc = 0x236A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236A18u;
        // 0x236a1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236A20u;
        goto label_236a20;
    }
    ctx->pc = 0x236A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236A18u;
        // 0x236a1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236A20u;
label_236a20:
    // 0x236a20: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x236a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
label_236a24:
    // 0x236a24: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236a24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_236a28:
    // 0x236a28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_236a2c:
    // 0x236a2c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x236a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_236a30:
    // 0x236a30: 0xc08dbf8  jal         func_236FE0
label_236a34:
    if (ctx->pc == 0x236A34u) {
        ctx->pc = 0x236A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236A30u;
        // 0x236a34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236A38u;
        goto label_236a38;
    }
    ctx->pc = 0x236A30u;
    SET_GPR_U32(ctx, 31, 0x236A38u);
    ctx->pc = 0x236A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236A30u;
    // 0x236a34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x236A38u;
label_236a38:
    // 0x236a38: 0x240500a1  addiu       $a1, $zero, 0xA1
    ctx->pc = 0x236a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
label_236a3c:
    // 0x236a3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x236a3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236a40:
    // 0x236a40: 0xc08d74c  jal         func_235D30
label_236a44:
    if (ctx->pc == 0x236A44u) {
        ctx->pc = 0x236A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236A40u;
        // 0x236a44: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236A48u;
        goto label_236a48;
    }
    ctx->pc = 0x236A40u;
    SET_GPR_U32(ctx, 31, 0x236A48u);
    ctx->pc = 0x236A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236A40u;
    // 0x236a44: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235D30u;
    { ctx->pc = 0x235d30; return; }
    ctx->pc = 0x236A48u;
label_236a48:
    // 0x236a48: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x236a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
label_236a4c:
    // 0x236a4c: 0xc069210  jal         func_1A4840
label_236a50:
    if (ctx->pc == 0x236A50u) {
        ctx->pc = 0x236A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236A4Cu;
        // 0x236a50: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236A54u;
        goto label_236a54;
    }
    ctx->pc = 0x236A4Cu;
    SET_GPR_U32(ctx, 31, 0x236A54u);
    ctx->pc = 0x236A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236A4Cu;
    // 0x236a50: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x236A54u;
label_236a54:
    // 0x236a54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x236a54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236a58:
    // 0x236a58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x236a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_236a5c:
    // 0x236a5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236a5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236a60:
    // 0x236a60: 0x3e00008  jr          $ra
label_236a64:
    if (ctx->pc == 0x236A64u) {
        ctx->pc = 0x236A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236A60u;
        // 0x236a64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236A68u;
        goto label_236a68;
    }
    ctx->pc = 0x236A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236A60u;
        // 0x236a64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236A68u;
label_236a68:
    // 0x236a68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x236a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_236a6c:
    // 0x236a6c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x236a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_236a70:
    // 0x236a70: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x236a70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_236a74:
    // 0x236a74: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x236a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    ctx->pc = 0x236a78u;
    return;
}
