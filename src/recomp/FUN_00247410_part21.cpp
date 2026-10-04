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

// Function: FUN_00247410
// Address: 0x247410 - 0x2874a4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_00247410_part21(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x251050u: goto label_251050;
        case 0x251054u: goto label_251054;
        case 0x251058u: goto label_251058;
        case 0x25105cu: goto label_25105c;
        case 0x251060u: goto label_251060;
        case 0x251064u: goto label_251064;
        case 0x251068u: goto label_251068;
        case 0x25106cu: goto label_25106c;
        case 0x251070u: goto label_251070;
        case 0x251074u: goto label_251074;
        case 0x251078u: goto label_251078;
        case 0x25107cu: goto label_25107c;
        case 0x251080u: goto label_251080;
        case 0x251084u: goto label_251084;
        case 0x251088u: goto label_251088;
        case 0x25108cu: goto label_25108c;
        case 0x251090u: goto label_251090;
        case 0x251094u: goto label_251094;
        case 0x251098u: goto label_251098;
        case 0x25109cu: goto label_25109c;
        case 0x2510a0u: goto label_2510a0;
        case 0x2510a4u: goto label_2510a4;
        case 0x2510a8u: goto label_2510a8;
        case 0x2510acu: goto label_2510ac;
        case 0x2510b0u: goto label_2510b0;
        case 0x2510b4u: goto label_2510b4;
        case 0x2510b8u: goto label_2510b8;
        case 0x2510bcu: goto label_2510bc;
        case 0x2510c0u: goto label_2510c0;
        case 0x2510c4u: goto label_2510c4;
        case 0x2510c8u: goto label_2510c8;
        case 0x2510ccu: goto label_2510cc;
        case 0x2510d0u: goto label_2510d0;
        case 0x2510d4u: goto label_2510d4;
        case 0x2510d8u: goto label_2510d8;
        case 0x2510dcu: goto label_2510dc;
        case 0x2510e0u: goto label_2510e0;
        case 0x2510e4u: goto label_2510e4;
        case 0x2510e8u: goto label_2510e8;
        case 0x2510ecu: goto label_2510ec;
        case 0x2510f0u: goto label_2510f0;
        case 0x2510f4u: goto label_2510f4;
        case 0x2510f8u: goto label_2510f8;
        case 0x2510fcu: goto label_2510fc;
        case 0x251100u: goto label_251100;
        case 0x251104u: goto label_251104;
        case 0x251108u: goto label_251108;
        case 0x25110cu: goto label_25110c;
        case 0x251110u: goto label_251110;
        case 0x251114u: goto label_251114;
        case 0x251118u: goto label_251118;
        case 0x25111cu: goto label_25111c;
        case 0x251120u: goto label_251120;
        case 0x251124u: goto label_251124;
        case 0x251128u: goto label_251128;
        case 0x25112cu: goto label_25112c;
        case 0x251130u: goto label_251130;
        case 0x251134u: goto label_251134;
        case 0x251138u: goto label_251138;
        case 0x25113cu: goto label_25113c;
        case 0x251140u: goto label_251140;
        case 0x251144u: goto label_251144;
        case 0x251148u: goto label_251148;
        case 0x25114cu: goto label_25114c;
        case 0x251150u: goto label_251150;
        case 0x251154u: goto label_251154;
        case 0x251158u: goto label_251158;
        case 0x25115cu: goto label_25115c;
        case 0x251160u: goto label_251160;
        case 0x251164u: goto label_251164;
        case 0x251168u: goto label_251168;
        case 0x25116cu: goto label_25116c;
        case 0x251170u: goto label_251170;
        case 0x251174u: goto label_251174;
        case 0x251178u: goto label_251178;
        case 0x25117cu: goto label_25117c;
        case 0x251180u: goto label_251180;
        case 0x251184u: goto label_251184;
        case 0x251188u: goto label_251188;
        case 0x25118cu: goto label_25118c;
        case 0x251190u: goto label_251190;
        case 0x251194u: goto label_251194;
        case 0x251198u: goto label_251198;
        case 0x25119cu: goto label_25119c;
        case 0x2511a0u: goto label_2511a0;
        case 0x2511a4u: goto label_2511a4;
        case 0x2511a8u: goto label_2511a8;
        case 0x2511acu: goto label_2511ac;
        case 0x2511b0u: goto label_2511b0;
        case 0x2511b4u: goto label_2511b4;
        case 0x2511b8u: goto label_2511b8;
        case 0x2511bcu: goto label_2511bc;
        case 0x2511c0u: goto label_2511c0;
        case 0x2511c4u: goto label_2511c4;
        case 0x2511c8u: goto label_2511c8;
        case 0x2511ccu: goto label_2511cc;
        case 0x2511d0u: goto label_2511d0;
        case 0x2511d4u: goto label_2511d4;
        case 0x2511d8u: goto label_2511d8;
        case 0x2511dcu: goto label_2511dc;
        case 0x2511e0u: goto label_2511e0;
        case 0x2511e4u: goto label_2511e4;
        case 0x2511e8u: goto label_2511e8;
        case 0x2511ecu: goto label_2511ec;
        case 0x2511f0u: goto label_2511f0;
        case 0x2511f4u: goto label_2511f4;
        case 0x2511f8u: goto label_2511f8;
        case 0x2511fcu: goto label_2511fc;
        case 0x251200u: goto label_251200;
        case 0x251204u: goto label_251204;
        case 0x251208u: goto label_251208;
        case 0x25120cu: goto label_25120c;
        case 0x251210u: goto label_251210;
        case 0x251214u: goto label_251214;
        case 0x251218u: goto label_251218;
        case 0x25121cu: goto label_25121c;
        case 0x251220u: goto label_251220;
        case 0x251224u: goto label_251224;
        case 0x251228u: goto label_251228;
        case 0x25122cu: goto label_25122c;
        case 0x251230u: goto label_251230;
        case 0x251234u: goto label_251234;
        case 0x251238u: goto label_251238;
        case 0x25123cu: goto label_25123c;
        case 0x251240u: goto label_251240;
        case 0x251244u: goto label_251244;
        case 0x251248u: goto label_251248;
        case 0x25124cu: goto label_25124c;
        case 0x251250u: goto label_251250;
        case 0x251254u: goto label_251254;
        case 0x251258u: goto label_251258;
        case 0x25125cu: goto label_25125c;
        case 0x251260u: goto label_251260;
        case 0x251264u: goto label_251264;
        case 0x251268u: goto label_251268;
        case 0x25126cu: goto label_25126c;
        case 0x251270u: goto label_251270;
        case 0x251274u: goto label_251274;
        case 0x251278u: goto label_251278;
        case 0x25127cu: goto label_25127c;
        case 0x251280u: goto label_251280;
        case 0x251284u: goto label_251284;
        case 0x251288u: goto label_251288;
        case 0x25128cu: goto label_25128c;
        case 0x251290u: goto label_251290;
        case 0x251294u: goto label_251294;
        case 0x251298u: goto label_251298;
        case 0x25129cu: goto label_25129c;
        case 0x2512a0u: goto label_2512a0;
        case 0x2512a4u: goto label_2512a4;
        case 0x2512a8u: goto label_2512a8;
        case 0x2512acu: goto label_2512ac;
        case 0x2512b0u: goto label_2512b0;
        case 0x2512b4u: goto label_2512b4;
        case 0x2512b8u: goto label_2512b8;
        case 0x2512bcu: goto label_2512bc;
        case 0x2512c0u: goto label_2512c0;
        case 0x2512c4u: goto label_2512c4;
        case 0x2512c8u: goto label_2512c8;
        case 0x2512ccu: goto label_2512cc;
        case 0x2512d0u: goto label_2512d0;
        case 0x2512d4u: goto label_2512d4;
        case 0x2512d8u: goto label_2512d8;
        case 0x2512dcu: goto label_2512dc;
        case 0x2512e0u: goto label_2512e0;
        case 0x2512e4u: goto label_2512e4;
        case 0x2512e8u: goto label_2512e8;
        case 0x2512ecu: goto label_2512ec;
        case 0x2512f0u: goto label_2512f0;
        case 0x2512f4u: goto label_2512f4;
        case 0x2512f8u: goto label_2512f8;
        case 0x2512fcu: goto label_2512fc;
        case 0x251300u: goto label_251300;
        case 0x251304u: goto label_251304;
        case 0x251308u: goto label_251308;
        case 0x25130cu: goto label_25130c;
        case 0x251310u: goto label_251310;
        case 0x251314u: goto label_251314;
        case 0x251318u: goto label_251318;
        case 0x25131cu: goto label_25131c;
        case 0x251320u: goto label_251320;
        case 0x251324u: goto label_251324;
        case 0x251328u: goto label_251328;
        case 0x25132cu: goto label_25132c;
        case 0x251330u: goto label_251330;
        case 0x251334u: goto label_251334;
        case 0x251338u: goto label_251338;
        case 0x25133cu: goto label_25133c;
        case 0x251340u: goto label_251340;
        case 0x251344u: goto label_251344;
        case 0x251348u: goto label_251348;
        case 0x25134cu: goto label_25134c;
        case 0x251350u: goto label_251350;
        case 0x251354u: goto label_251354;
        case 0x251358u: goto label_251358;
        case 0x25135cu: goto label_25135c;
        case 0x251360u: goto label_251360;
        case 0x251364u: goto label_251364;
        case 0x251368u: goto label_251368;
        case 0x25136cu: goto label_25136c;
        case 0x251370u: goto label_251370;
        case 0x251374u: goto label_251374;
        case 0x251378u: goto label_251378;
        case 0x25137cu: goto label_25137c;
        case 0x251380u: goto label_251380;
        case 0x251384u: goto label_251384;
        case 0x251388u: goto label_251388;
        case 0x25138cu: goto label_25138c;
        case 0x251390u: goto label_251390;
        case 0x251394u: goto label_251394;
        case 0x251398u: goto label_251398;
        case 0x25139cu: goto label_25139c;
        case 0x2513a0u: goto label_2513a0;
        case 0x2513a4u: goto label_2513a4;
        case 0x2513a8u: goto label_2513a8;
        case 0x2513acu: goto label_2513ac;
        case 0x2513b0u: goto label_2513b0;
        case 0x2513b4u: goto label_2513b4;
        case 0x2513b8u: goto label_2513b8;
        case 0x2513bcu: goto label_2513bc;
        case 0x2513c0u: goto label_2513c0;
        case 0x2513c4u: goto label_2513c4;
        case 0x2513c8u: goto label_2513c8;
        case 0x2513ccu: goto label_2513cc;
        case 0x2513d0u: goto label_2513d0;
        case 0x2513d4u: goto label_2513d4;
        case 0x2513d8u: goto label_2513d8;
        case 0x2513dcu: goto label_2513dc;
        case 0x2513e0u: goto label_2513e0;
        case 0x2513e4u: goto label_2513e4;
        case 0x2513e8u: goto label_2513e8;
        case 0x2513ecu: goto label_2513ec;
        case 0x2513f0u: goto label_2513f0;
        case 0x2513f4u: goto label_2513f4;
        case 0x2513f8u: goto label_2513f8;
        case 0x2513fcu: goto label_2513fc;
        case 0x251400u: goto label_251400;
        case 0x251404u: goto label_251404;
        case 0x251408u: goto label_251408;
        case 0x25140cu: goto label_25140c;
        case 0x251410u: goto label_251410;
        case 0x251414u: goto label_251414;
        case 0x251418u: goto label_251418;
        case 0x25141cu: goto label_25141c;
        case 0x251420u: goto label_251420;
        case 0x251424u: goto label_251424;
        case 0x251428u: goto label_251428;
        case 0x25142cu: goto label_25142c;
        case 0x251430u: goto label_251430;
        case 0x251434u: goto label_251434;
        case 0x251438u: goto label_251438;
        case 0x25143cu: goto label_25143c;
        case 0x251440u: goto label_251440;
        case 0x251444u: goto label_251444;
        case 0x251448u: goto label_251448;
        case 0x25144cu: goto label_25144c;
        case 0x251450u: goto label_251450;
        case 0x251454u: goto label_251454;
        case 0x251458u: goto label_251458;
        case 0x25145cu: goto label_25145c;
        case 0x251460u: goto label_251460;
        case 0x251464u: goto label_251464;
        case 0x251468u: goto label_251468;
        case 0x25146cu: goto label_25146c;
        case 0x251470u: goto label_251470;
        case 0x251474u: goto label_251474;
        case 0x251478u: goto label_251478;
        case 0x25147cu: goto label_25147c;
        case 0x251480u: goto label_251480;
        case 0x251484u: goto label_251484;
        case 0x251488u: goto label_251488;
        case 0x25148cu: goto label_25148c;
        case 0x251490u: goto label_251490;
        case 0x251494u: goto label_251494;
        case 0x251498u: goto label_251498;
        case 0x25149cu: goto label_25149c;
        case 0x2514a0u: goto label_2514a0;
        case 0x2514a4u: goto label_2514a4;
        case 0x2514a8u: goto label_2514a8;
        case 0x2514acu: goto label_2514ac;
        case 0x2514b0u: goto label_2514b0;
        case 0x2514b4u: goto label_2514b4;
        case 0x2514b8u: goto label_2514b8;
        case 0x2514bcu: goto label_2514bc;
        case 0x2514c0u: goto label_2514c0;
        case 0x2514c4u: goto label_2514c4;
        case 0x2514c8u: goto label_2514c8;
        case 0x2514ccu: goto label_2514cc;
        case 0x2514d0u: goto label_2514d0;
        case 0x2514d4u: goto label_2514d4;
        case 0x2514d8u: goto label_2514d8;
        case 0x2514dcu: goto label_2514dc;
        case 0x2514e0u: goto label_2514e0;
        case 0x2514e4u: goto label_2514e4;
        case 0x2514e8u: goto label_2514e8;
        case 0x2514ecu: goto label_2514ec;
        case 0x2514f0u: goto label_2514f0;
        case 0x2514f4u: goto label_2514f4;
        case 0x2514f8u: goto label_2514f8;
        case 0x2514fcu: goto label_2514fc;
        case 0x251500u: goto label_251500;
        case 0x251504u: goto label_251504;
        case 0x251508u: goto label_251508;
        case 0x25150cu: goto label_25150c;
        case 0x251510u: goto label_251510;
        case 0x251514u: goto label_251514;
        case 0x251518u: goto label_251518;
        case 0x25151cu: goto label_25151c;
        case 0x251520u: goto label_251520;
        case 0x251524u: goto label_251524;
        case 0x251528u: goto label_251528;
        case 0x25152cu: goto label_25152c;
        case 0x251530u: goto label_251530;
        case 0x251534u: goto label_251534;
        case 0x251538u: goto label_251538;
        case 0x25153cu: goto label_25153c;
        case 0x251540u: goto label_251540;
        case 0x251544u: goto label_251544;
        case 0x251548u: goto label_251548;
        case 0x25154cu: goto label_25154c;
        case 0x251550u: goto label_251550;
        case 0x251554u: goto label_251554;
        case 0x251558u: goto label_251558;
        case 0x25155cu: goto label_25155c;
        case 0x251560u: goto label_251560;
        case 0x251564u: goto label_251564;
        case 0x251568u: goto label_251568;
        case 0x25156cu: goto label_25156c;
        case 0x251570u: goto label_251570;
        case 0x251574u: goto label_251574;
        case 0x251578u: goto label_251578;
        case 0x25157cu: goto label_25157c;
        case 0x251580u: goto label_251580;
        case 0x251584u: goto label_251584;
        case 0x251588u: goto label_251588;
        case 0x25158cu: goto label_25158c;
        case 0x251590u: goto label_251590;
        case 0x251594u: goto label_251594;
        case 0x251598u: goto label_251598;
        case 0x25159cu: goto label_25159c;
        case 0x2515a0u: goto label_2515a0;
        case 0x2515a4u: goto label_2515a4;
        case 0x2515a8u: goto label_2515a8;
        case 0x2515acu: goto label_2515ac;
        case 0x2515b0u: goto label_2515b0;
        case 0x2515b4u: goto label_2515b4;
        case 0x2515b8u: goto label_2515b8;
        case 0x2515bcu: goto label_2515bc;
        case 0x2515c0u: goto label_2515c0;
        case 0x2515c4u: goto label_2515c4;
        case 0x2515c8u: goto label_2515c8;
        case 0x2515ccu: goto label_2515cc;
        case 0x2515d0u: goto label_2515d0;
        case 0x2515d4u: goto label_2515d4;
        case 0x2515d8u: goto label_2515d8;
        case 0x2515dcu: goto label_2515dc;
        case 0x2515e0u: goto label_2515e0;
        case 0x2515e4u: goto label_2515e4;
        case 0x2515e8u: goto label_2515e8;
        case 0x2515ecu: goto label_2515ec;
        case 0x2515f0u: goto label_2515f0;
        case 0x2515f4u: goto label_2515f4;
        case 0x2515f8u: goto label_2515f8;
        case 0x2515fcu: goto label_2515fc;
        case 0x251600u: goto label_251600;
        case 0x251604u: goto label_251604;
        case 0x251608u: goto label_251608;
        case 0x25160cu: goto label_25160c;
        case 0x251610u: goto label_251610;
        case 0x251614u: goto label_251614;
        case 0x251618u: goto label_251618;
        case 0x25161cu: goto label_25161c;
        case 0x251620u: goto label_251620;
        case 0x251624u: goto label_251624;
        case 0x251628u: goto label_251628;
        case 0x25162cu: goto label_25162c;
        case 0x251630u: goto label_251630;
        case 0x251634u: goto label_251634;
        case 0x251638u: goto label_251638;
        case 0x25163cu: goto label_25163c;
        case 0x251640u: goto label_251640;
        case 0x251644u: goto label_251644;
        case 0x251648u: goto label_251648;
        case 0x25164cu: goto label_25164c;
        case 0x251650u: goto label_251650;
        case 0x251654u: goto label_251654;
        case 0x251658u: goto label_251658;
        case 0x25165cu: goto label_25165c;
        case 0x251660u: goto label_251660;
        case 0x251664u: goto label_251664;
        case 0x251668u: goto label_251668;
        case 0x25166cu: goto label_25166c;
        case 0x251670u: goto label_251670;
        case 0x251674u: goto label_251674;
        case 0x251678u: goto label_251678;
        case 0x25167cu: goto label_25167c;
        case 0x251680u: goto label_251680;
        case 0x251684u: goto label_251684;
        case 0x251688u: goto label_251688;
        case 0x25168cu: goto label_25168c;
        case 0x251690u: goto label_251690;
        case 0x251694u: goto label_251694;
        case 0x251698u: goto label_251698;
        case 0x25169cu: goto label_25169c;
        case 0x2516a0u: goto label_2516a0;
        case 0x2516a4u: goto label_2516a4;
        case 0x2516a8u: goto label_2516a8;
        case 0x2516acu: goto label_2516ac;
        case 0x2516b0u: goto label_2516b0;
        case 0x2516b4u: goto label_2516b4;
        case 0x2516b8u: goto label_2516b8;
        case 0x2516bcu: goto label_2516bc;
        case 0x2516c0u: goto label_2516c0;
        case 0x2516c4u: goto label_2516c4;
        case 0x2516c8u: goto label_2516c8;
        case 0x2516ccu: goto label_2516cc;
        case 0x2516d0u: goto label_2516d0;
        case 0x2516d4u: goto label_2516d4;
        case 0x2516d8u: goto label_2516d8;
        case 0x2516dcu: goto label_2516dc;
        case 0x2516e0u: goto label_2516e0;
        case 0x2516e4u: goto label_2516e4;
        case 0x2516e8u: goto label_2516e8;
        case 0x2516ecu: goto label_2516ec;
        case 0x2516f0u: goto label_2516f0;
        case 0x2516f4u: goto label_2516f4;
        case 0x2516f8u: goto label_2516f8;
        case 0x2516fcu: goto label_2516fc;
        case 0x251700u: goto label_251700;
        case 0x251704u: goto label_251704;
        case 0x251708u: goto label_251708;
        case 0x25170cu: goto label_25170c;
        case 0x251710u: goto label_251710;
        case 0x251714u: goto label_251714;
        case 0x251718u: goto label_251718;
        case 0x25171cu: goto label_25171c;
        case 0x251720u: goto label_251720;
        case 0x251724u: goto label_251724;
        case 0x251728u: goto label_251728;
        case 0x25172cu: goto label_25172c;
        case 0x251730u: goto label_251730;
        case 0x251734u: goto label_251734;
        case 0x251738u: goto label_251738;
        case 0x25173cu: goto label_25173c;
        case 0x251740u: goto label_251740;
        case 0x251744u: goto label_251744;
        case 0x251748u: goto label_251748;
        case 0x25174cu: goto label_25174c;
        case 0x251750u: goto label_251750;
        case 0x251754u: goto label_251754;
        case 0x251758u: goto label_251758;
        case 0x25175cu: goto label_25175c;
        case 0x251760u: goto label_251760;
        case 0x251764u: goto label_251764;
        case 0x251768u: goto label_251768;
        case 0x25176cu: goto label_25176c;
        case 0x251770u: goto label_251770;
        case 0x251774u: goto label_251774;
        case 0x251778u: goto label_251778;
        case 0x25177cu: goto label_25177c;
        case 0x251780u: goto label_251780;
        case 0x251784u: goto label_251784;
        case 0x251788u: goto label_251788;
        case 0x25178cu: goto label_25178c;
        case 0x251790u: goto label_251790;
        case 0x251794u: goto label_251794;
        case 0x251798u: goto label_251798;
        case 0x25179cu: goto label_25179c;
        case 0x2517a0u: goto label_2517a0;
        case 0x2517a4u: goto label_2517a4;
        case 0x2517a8u: goto label_2517a8;
        case 0x2517acu: goto label_2517ac;
        case 0x2517b0u: goto label_2517b0;
        case 0x2517b4u: goto label_2517b4;
        case 0x2517b8u: goto label_2517b8;
        case 0x2517bcu: goto label_2517bc;
        case 0x2517c0u: goto label_2517c0;
        case 0x2517c4u: goto label_2517c4;
        case 0x2517c8u: goto label_2517c8;
        case 0x2517ccu: goto label_2517cc;
        case 0x2517d0u: goto label_2517d0;
        case 0x2517d4u: goto label_2517d4;
        case 0x2517d8u: goto label_2517d8;
        case 0x2517dcu: goto label_2517dc;
        case 0x2517e0u: goto label_2517e0;
        case 0x2517e4u: goto label_2517e4;
        case 0x2517e8u: goto label_2517e8;
        case 0x2517ecu: goto label_2517ec;
        case 0x2517f0u: goto label_2517f0;
        case 0x2517f4u: goto label_2517f4;
        case 0x2517f8u: goto label_2517f8;
        case 0x2517fcu: goto label_2517fc;
        case 0x251800u: goto label_251800;
        case 0x251804u: goto label_251804;
        case 0x251808u: goto label_251808;
        case 0x25180cu: goto label_25180c;
        case 0x251810u: goto label_251810;
        case 0x251814u: goto label_251814;
        case 0x251818u: goto label_251818;
        case 0x25181cu: goto label_25181c;
        default: return;
    }

label_251050:
    // 0x251050: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x251050u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_251054:
    // 0x251054: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x251054u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_251058:
    // 0x251058: 0x8  jr          $zero
label_25105c:
    if (ctx->pc == 0x25105Cu) {
        ctx->pc = 0x25105Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251058u;
        // 0x25105c: 0x9  jalr        $zero, $zero (Delay Slot)
        // JALR $0, $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x251060u;
        goto label_251060;
    }
    ctx->pc = 0x251058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x25105Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251058u;
        // 0x25105c: 0x9  jalr        $zero, $zero (Delay Slot)
        // JALR $0, $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251058u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x251060u;
label_251060:
    // 0x251060: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x251060u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_251064:
    // 0x251064: 0x8  jr          $zero
label_251068:
    if (ctx->pc == 0x251068u) {
        ctx->pc = 0x251068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251064u;
        // 0x251068: 0xd  break       0 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25106Cu;
        goto label_25106c;
    }
    ctx->pc = 0x251064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x251068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251064u;
        // 0x251068: 0xd  break       0 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251064u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25106Cu;
label_25106c:
    // 0x25106c: 0x19  multu       $zero, $zero
    ctx->pc = 0x25106cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_251070:
    // 0x251070: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x251070u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_251074:
    // 0x251074: 0x28  mfsa        $zero
    ctx->pc = 0x251074u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_251078:
    // 0x251078: 0x2d  daddu       $zero, $zero, $zero
    ctx->pc = 0x251078u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25107c:
    // 0x25107c: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x25107cu;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_251080:
    // 0x251080: 0x3a  dsrl        $zero, $zero, 0
    ctx->pc = 0x251080u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 0);
label_251084:
    // 0x251084: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x251084u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_251088:
    // 0x251088: 0xc  syscall     0
    ctx->pc = 0x251088u;
    ctx->pc = 0x25108Cu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_25108c:
    // 0x25108c: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x25108cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_251090:
    // 0x251090: 0x1e  ddiv        $zero, $zero, $zero
    ctx->pc = 0x251090u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x251090 raw=0x0000001E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_251094:
    // 0x251094: 0x25  move        $zero, $zero
    ctx->pc = 0x251094u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_251098:
    // 0x251098: 0x2d  daddu       $zero, $zero, $zero
    ctx->pc = 0x251098u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25109c:
    // 0x25109c: 0x36  tne         $zero, $zero, 0
    ctx->pc = 0x25109cu;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2510a0:
    // 0x2510a0: 0xff  dsra32      $zero, $zero, 3
    ctx->pc = 0x2510a0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 3));
label_2510a4:
    // 0x2510a4: 0xff  dsra32      $zero, $zero, 3
    ctx->pc = 0x2510a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 3));
label_2510a8:
    // 0x2510a8: 0x0  nop
    ctx->pc = 0x2510a8u;
    // NOP
label_2510ac:
    // 0x2510ac: 0x0  nop
    ctx->pc = 0x2510acu;
    // NOP
label_2510b0:
    // 0x2510b0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2510b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2510B0 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2510b4:
    // 0x2510b4: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2510b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2510B4 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2510b8:
    // 0x2510b8: 0xff  dsra32      $zero, $zero, 3
    ctx->pc = 0x2510b8u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 3));
label_2510bc:
    // 0x2510bc: 0xff  dsra32      $zero, $zero, 3
    ctx->pc = 0x2510bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 3));
label_2510c0:
    // 0x2510c0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2510c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2510C0 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2510c4:
    // 0x2510c4: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x2510c4u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2510c8:
    // 0x2510c8: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x2510c8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2510cc:
    // 0x2510cc: 0x1e  ddiv        $zero, $zero, $zero
    ctx->pc = 0x2510ccu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2510CC raw=0x0000001E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2510d0:
    // 0x2510d0: 0x0  nop
    ctx->pc = 0x2510d0u;
    // NOP
label_2510d4:
    // 0x2510d4: 0x0  nop
    ctx->pc = 0x2510d4u;
    // NOP
label_2510d8:
    // 0x2510d8: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x2510d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2510dc:
    // 0x2510dc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2510dcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2510e0:
    // 0x2510e0: 0x5a9  .word       0x000005A9                   # mtsa        $zero # 00000580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2510e0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2510e4:
    // 0x2510e4: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x2510e4u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2510e8:
    // 0x2510e8: 0x152e00  sll         $a1, $s5, 24
    ctx->pc = 0x2510e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 24));
label_2510ec:
    // 0x2510ec: 0x0  nop
    ctx->pc = 0x2510ecu;
    // NOP
label_2510f0:
    // 0x2510f0: 0x0  nop
    ctx->pc = 0x2510f0u;
    // NOP
label_2510f4:
    // 0x2510f4: 0x0  nop
    ctx->pc = 0x2510f4u;
    // NOP
label_2510f8:
    // 0x2510f8: 0x0  nop
    ctx->pc = 0x2510f8u;
    // NOP
label_2510fc:
    // 0x2510fc: 0x0  nop
    ctx->pc = 0x2510fcu;
    // NOP
label_251100:
    // 0x251100: 0x0  nop
    ctx->pc = 0x251100u;
    // NOP
label_251104:
    // 0x251104: 0x0  nop
    ctx->pc = 0x251104u;
    // NOP
label_251108:
    // 0x251108: 0x0  nop
    ctx->pc = 0x251108u;
    // NOP
label_25110c:
    // 0x25110c: 0x0  nop
    ctx->pc = 0x25110cu;
    // NOP
label_251110:
    // 0x251110: 0x0  nop
    ctx->pc = 0x251110u;
    // NOP
label_251114:
    // 0x251114: 0x0  nop
    ctx->pc = 0x251114u;
    // NOP
label_251118:
    // 0x251118: 0x0  nop
    ctx->pc = 0x251118u;
    // NOP
label_25111c:
    // 0x25111c: 0x0  nop
    ctx->pc = 0x25111cu;
    // NOP
label_251120:
    // 0x251120: 0x0  nop
    ctx->pc = 0x251120u;
    // NOP
label_251124:
    // 0x251124: 0x0  nop
    ctx->pc = 0x251124u;
    // NOP
label_251128:
    // 0x251128: 0x0  nop
    ctx->pc = 0x251128u;
    // NOP
label_25112c:
    // 0x25112c: 0x0  nop
    ctx->pc = 0x25112cu;
    // NOP
label_251130:
    // 0x251130: 0x0  nop
    ctx->pc = 0x251130u;
    // NOP
label_251134:
    // 0x251134: 0x0  nop
    ctx->pc = 0x251134u;
    // NOP
label_251138:
    // 0x251138: 0x0  nop
    ctx->pc = 0x251138u;
    // NOP
label_25113c:
    // 0x25113c: 0x0  nop
    ctx->pc = 0x25113cu;
    // NOP
label_251140:
    // 0x251140: 0x0  nop
    ctx->pc = 0x251140u;
    // NOP
label_251144:
    // 0x251144: 0x0  nop
    ctx->pc = 0x251144u;
    // NOP
label_251148:
    // 0x251148: 0x0  nop
    ctx->pc = 0x251148u;
    // NOP
label_25114c:
    // 0x25114c: 0x0  nop
    ctx->pc = 0x25114cu;
    // NOP
label_251150:
    // 0x251150: 0x0  nop
    ctx->pc = 0x251150u;
    // NOP
label_251154:
    // 0x251154: 0x0  nop
    ctx->pc = 0x251154u;
    // NOP
label_251158:
    // 0x251158: 0x0  nop
    ctx->pc = 0x251158u;
    // NOP
label_25115c:
    // 0x25115c: 0x0  nop
    ctx->pc = 0x25115cu;
    // NOP
label_251160:
    // 0x251160: 0x0  nop
    ctx->pc = 0x251160u;
    // NOP
label_251164:
    // 0x251164: 0x0  nop
    ctx->pc = 0x251164u;
    // NOP
label_251168:
    // 0x251168: 0x0  nop
    ctx->pc = 0x251168u;
    // NOP
label_25116c:
    // 0x25116c: 0x0  nop
    ctx->pc = 0x25116cu;
    // NOP
label_251170:
    // 0x251170: 0x0  nop
    ctx->pc = 0x251170u;
    // NOP
label_251174:
    // 0x251174: 0x0  nop
    ctx->pc = 0x251174u;
    // NOP
label_251178:
    // 0x251178: 0x0  nop
    ctx->pc = 0x251178u;
    // NOP
label_25117c:
    // 0x25117c: 0x0  nop
    ctx->pc = 0x25117cu;
    // NOP
label_251180:
    // 0x251180: 0x0  nop
    ctx->pc = 0x251180u;
    // NOP
label_251184:
    // 0x251184: 0x0  nop
    ctx->pc = 0x251184u;
    // NOP
label_251188:
    // 0x251188: 0x0  nop
    ctx->pc = 0x251188u;
    // NOP
label_25118c:
    // 0x25118c: 0x0  nop
    ctx->pc = 0x25118cu;
    // NOP
label_251190:
    // 0x251190: 0x0  nop
    ctx->pc = 0x251190u;
    // NOP
label_251194:
    // 0x251194: 0x0  nop
    ctx->pc = 0x251194u;
    // NOP
label_251198:
    // 0x251198: 0x0  nop
    ctx->pc = 0x251198u;
    // NOP
label_25119c:
    // 0x25119c: 0x0  nop
    ctx->pc = 0x25119cu;
    // NOP
label_2511a0:
    // 0x2511a0: 0x0  nop
    ctx->pc = 0x2511a0u;
    // NOP
label_2511a4:
    // 0x2511a4: 0x0  nop
    ctx->pc = 0x2511a4u;
    // NOP
label_2511a8:
    // 0x2511a8: 0x0  nop
    ctx->pc = 0x2511a8u;
    // NOP
label_2511ac:
    // 0x2511ac: 0x0  nop
    ctx->pc = 0x2511acu;
    // NOP
label_2511b0:
    // 0x2511b0: 0x0  nop
    ctx->pc = 0x2511b0u;
    // NOP
label_2511b4:
    // 0x2511b4: 0x0  nop
    ctx->pc = 0x2511b4u;
    // NOP
label_2511b8:
    // 0x2511b8: 0x5aa  .word       0x000005AA                   # slt         $zero, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2511b8u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2511bc:
    // 0x2511bc: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2511bcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2511c0:
    // 0x2511c0: 0x152e00  sll         $a1, $s5, 24
    ctx->pc = 0x2511c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 24));
label_2511c4:
    // 0x2511c4: 0x0  nop
    ctx->pc = 0x2511c4u;
    // NOP
label_2511c8:
    // 0x2511c8: 0x0  nop
    ctx->pc = 0x2511c8u;
    // NOP
label_2511cc:
    // 0x2511cc: 0x0  nop
    ctx->pc = 0x2511ccu;
    // NOP
label_2511d0:
    // 0x2511d0: 0x0  nop
    ctx->pc = 0x2511d0u;
    // NOP
label_2511d4:
    // 0x2511d4: 0x0  nop
    ctx->pc = 0x2511d4u;
    // NOP
label_2511d8:
    // 0x2511d8: 0x0  nop
    ctx->pc = 0x2511d8u;
    // NOP
label_2511dc:
    // 0x2511dc: 0x0  nop
    ctx->pc = 0x2511dcu;
    // NOP
label_2511e0:
    // 0x2511e0: 0x0  nop
    ctx->pc = 0x2511e0u;
    // NOP
label_2511e4:
    // 0x2511e4: 0x0  nop
    ctx->pc = 0x2511e4u;
    // NOP
label_2511e8:
    // 0x2511e8: 0x0  nop
    ctx->pc = 0x2511e8u;
    // NOP
label_2511ec:
    // 0x2511ec: 0x0  nop
    ctx->pc = 0x2511ecu;
    // NOP
label_2511f0:
    // 0x2511f0: 0x0  nop
    ctx->pc = 0x2511f0u;
    // NOP
label_2511f4:
    // 0x2511f4: 0x0  nop
    ctx->pc = 0x2511f4u;
    // NOP
label_2511f8:
    // 0x2511f8: 0x0  nop
    ctx->pc = 0x2511f8u;
    // NOP
label_2511fc:
    // 0x2511fc: 0x0  nop
    ctx->pc = 0x2511fcu;
    // NOP
label_251200:
    // 0x251200: 0x0  nop
    ctx->pc = 0x251200u;
    // NOP
label_251204:
    // 0x251204: 0x0  nop
    ctx->pc = 0x251204u;
    // NOP
label_251208:
    // 0x251208: 0x0  nop
    ctx->pc = 0x251208u;
    // NOP
label_25120c:
    // 0x25120c: 0x0  nop
    ctx->pc = 0x25120cu;
    // NOP
label_251210:
    // 0x251210: 0x0  nop
    ctx->pc = 0x251210u;
    // NOP
label_251214:
    // 0x251214: 0x0  nop
    ctx->pc = 0x251214u;
    // NOP
label_251218:
    // 0x251218: 0x0  nop
    ctx->pc = 0x251218u;
    // NOP
label_25121c:
    // 0x25121c: 0x0  nop
    ctx->pc = 0x25121cu;
    // NOP
label_251220:
    // 0x251220: 0x0  nop
    ctx->pc = 0x251220u;
    // NOP
label_251224:
    // 0x251224: 0x0  nop
    ctx->pc = 0x251224u;
    // NOP
label_251228:
    // 0x251228: 0x0  nop
    ctx->pc = 0x251228u;
    // NOP
label_25122c:
    // 0x25122c: 0x0  nop
    ctx->pc = 0x25122cu;
    // NOP
label_251230:
    // 0x251230: 0x0  nop
    ctx->pc = 0x251230u;
    // NOP
label_251234:
    // 0x251234: 0x0  nop
    ctx->pc = 0x251234u;
    // NOP
label_251238:
    // 0x251238: 0x0  nop
    ctx->pc = 0x251238u;
    // NOP
label_25123c:
    // 0x25123c: 0x0  nop
    ctx->pc = 0x25123cu;
    // NOP
label_251240:
    // 0x251240: 0x0  nop
    ctx->pc = 0x251240u;
    // NOP
label_251244:
    // 0x251244: 0x0  nop
    ctx->pc = 0x251244u;
    // NOP
label_251248:
    // 0x251248: 0x0  nop
    ctx->pc = 0x251248u;
    // NOP
label_25124c:
    // 0x25124c: 0x0  nop
    ctx->pc = 0x25124cu;
    // NOP
label_251250:
    // 0x251250: 0x0  nop
    ctx->pc = 0x251250u;
    // NOP
label_251254:
    // 0x251254: 0x0  nop
    ctx->pc = 0x251254u;
    // NOP
label_251258:
    // 0x251258: 0x0  nop
    ctx->pc = 0x251258u;
    // NOP
label_25125c:
    // 0x25125c: 0x0  nop
    ctx->pc = 0x25125cu;
    // NOP
label_251260:
    // 0x251260: 0x0  nop
    ctx->pc = 0x251260u;
    // NOP
label_251264:
    // 0x251264: 0x0  nop
    ctx->pc = 0x251264u;
    // NOP
label_251268:
    // 0x251268: 0x0  nop
    ctx->pc = 0x251268u;
    // NOP
label_25126c:
    // 0x25126c: 0x0  nop
    ctx->pc = 0x25126cu;
    // NOP
label_251270:
    // 0x251270: 0x0  nop
    ctx->pc = 0x251270u;
    // NOP
label_251274:
    // 0x251274: 0x0  nop
    ctx->pc = 0x251274u;
    // NOP
label_251278:
    // 0x251278: 0x0  nop
    ctx->pc = 0x251278u;
    // NOP
label_25127c:
    // 0x25127c: 0x0  nop
    ctx->pc = 0x25127cu;
    // NOP
label_251280:
    // 0x251280: 0x0  nop
    ctx->pc = 0x251280u;
    // NOP
label_251284:
    // 0x251284: 0x0  nop
    ctx->pc = 0x251284u;
    // NOP
label_251288:
    // 0x251288: 0x0  nop
    ctx->pc = 0x251288u;
    // NOP
label_25128c:
    // 0x25128c: 0x0  nop
    ctx->pc = 0x25128cu;
    // NOP
label_251290:
    // 0x251290: 0x5ab  .word       0x000005AB                   # sltu        $zero, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x251290u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_251294:
    // 0x251294: 0xc8  .word       0x000000C8                   # jr          $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
label_251298:
    if (ctx->pc == 0x251298u) {
        ctx->pc = 0x251298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251294u;
        // 0x251298: 0x152e00  sll         $a1, $s5, 24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25129Cu;
        goto label_25129c;
    }
    ctx->pc = 0x251294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x251298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251294u;
        // 0x251298: 0x152e00  sll         $a1, $s5, 24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 24));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251294u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25129Cu;
label_25129c:
    // 0x25129c: 0x0  nop
    ctx->pc = 0x25129cu;
    // NOP
label_2512a0:
    // 0x2512a0: 0x0  nop
    ctx->pc = 0x2512a0u;
    // NOP
label_2512a4:
    // 0x2512a4: 0x0  nop
    ctx->pc = 0x2512a4u;
    // NOP
label_2512a8:
    // 0x2512a8: 0x0  nop
    ctx->pc = 0x2512a8u;
    // NOP
label_2512ac:
    // 0x2512ac: 0x0  nop
    ctx->pc = 0x2512acu;
    // NOP
label_2512b0:
    // 0x2512b0: 0x0  nop
    ctx->pc = 0x2512b0u;
    // NOP
label_2512b4:
    // 0x2512b4: 0x0  nop
    ctx->pc = 0x2512b4u;
    // NOP
label_2512b8:
    // 0x2512b8: 0x0  nop
    ctx->pc = 0x2512b8u;
    // NOP
label_2512bc:
    // 0x2512bc: 0x0  nop
    ctx->pc = 0x2512bcu;
    // NOP
label_2512c0:
    // 0x2512c0: 0x0  nop
    ctx->pc = 0x2512c0u;
    // NOP
label_2512c4:
    // 0x2512c4: 0x0  nop
    ctx->pc = 0x2512c4u;
    // NOP
label_2512c8:
    // 0x2512c8: 0x0  nop
    ctx->pc = 0x2512c8u;
    // NOP
label_2512cc:
    // 0x2512cc: 0x0  nop
    ctx->pc = 0x2512ccu;
    // NOP
label_2512d0:
    // 0x2512d0: 0x0  nop
    ctx->pc = 0x2512d0u;
    // NOP
label_2512d4:
    // 0x2512d4: 0x0  nop
    ctx->pc = 0x2512d4u;
    // NOP
label_2512d8:
    // 0x2512d8: 0x0  nop
    ctx->pc = 0x2512d8u;
    // NOP
label_2512dc:
    // 0x2512dc: 0x0  nop
    ctx->pc = 0x2512dcu;
    // NOP
label_2512e0:
    // 0x2512e0: 0x0  nop
    ctx->pc = 0x2512e0u;
    // NOP
label_2512e4:
    // 0x2512e4: 0x0  nop
    ctx->pc = 0x2512e4u;
    // NOP
label_2512e8:
    // 0x2512e8: 0x0  nop
    ctx->pc = 0x2512e8u;
    // NOP
label_2512ec:
    // 0x2512ec: 0x0  nop
    ctx->pc = 0x2512ecu;
    // NOP
label_2512f0:
    // 0x2512f0: 0x0  nop
    ctx->pc = 0x2512f0u;
    // NOP
label_2512f4:
    // 0x2512f4: 0x0  nop
    ctx->pc = 0x2512f4u;
    // NOP
label_2512f8:
    // 0x2512f8: 0x0  nop
    ctx->pc = 0x2512f8u;
    // NOP
label_2512fc:
    // 0x2512fc: 0x0  nop
    ctx->pc = 0x2512fcu;
    // NOP
label_251300:
    // 0x251300: 0x0  nop
    ctx->pc = 0x251300u;
    // NOP
label_251304:
    // 0x251304: 0x0  nop
    ctx->pc = 0x251304u;
    // NOP
label_251308:
    // 0x251308: 0x0  nop
    ctx->pc = 0x251308u;
    // NOP
label_25130c:
    // 0x25130c: 0x0  nop
    ctx->pc = 0x25130cu;
    // NOP
label_251310:
    // 0x251310: 0x0  nop
    ctx->pc = 0x251310u;
    // NOP
label_251314:
    // 0x251314: 0x0  nop
    ctx->pc = 0x251314u;
    // NOP
label_251318:
    // 0x251318: 0x0  nop
    ctx->pc = 0x251318u;
    // NOP
label_25131c:
    // 0x25131c: 0x0  nop
    ctx->pc = 0x25131cu;
    // NOP
label_251320:
    // 0x251320: 0x0  nop
    ctx->pc = 0x251320u;
    // NOP
label_251324:
    // 0x251324: 0x0  nop
    ctx->pc = 0x251324u;
    // NOP
label_251328:
    // 0x251328: 0x0  nop
    ctx->pc = 0x251328u;
    // NOP
label_25132c:
    // 0x25132c: 0x0  nop
    ctx->pc = 0x25132cu;
    // NOP
label_251330:
    // 0x251330: 0x0  nop
    ctx->pc = 0x251330u;
    // NOP
label_251334:
    // 0x251334: 0x0  nop
    ctx->pc = 0x251334u;
    // NOP
label_251338:
    // 0x251338: 0x0  nop
    ctx->pc = 0x251338u;
    // NOP
label_25133c:
    // 0x25133c: 0x0  nop
    ctx->pc = 0x25133cu;
    // NOP
label_251340:
    // 0x251340: 0x0  nop
    ctx->pc = 0x251340u;
    // NOP
label_251344:
    // 0x251344: 0x0  nop
    ctx->pc = 0x251344u;
    // NOP
label_251348:
    // 0x251348: 0x0  nop
    ctx->pc = 0x251348u;
    // NOP
label_25134c:
    // 0x25134c: 0x0  nop
    ctx->pc = 0x25134cu;
    // NOP
label_251350:
    // 0x251350: 0x0  nop
    ctx->pc = 0x251350u;
    // NOP
label_251354:
    // 0x251354: 0x0  nop
    ctx->pc = 0x251354u;
    // NOP
label_251358:
    // 0x251358: 0x0  nop
    ctx->pc = 0x251358u;
    // NOP
label_25135c:
    // 0x25135c: 0x0  nop
    ctx->pc = 0x25135cu;
    // NOP
label_251360:
    // 0x251360: 0x0  nop
    ctx->pc = 0x251360u;
    // NOP
label_251364:
    // 0x251364: 0x0  nop
    ctx->pc = 0x251364u;
    // NOP
label_251368:
    // 0x251368: 0x5ac  .word       0x000005AC                   # dadd        $zero, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x251368u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_25136c:
    // 0x25136c: 0x190  .word       0x00000190                   # mfhi        $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25136cu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_251370:
    // 0x251370: 0x152e00  sll         $a1, $s5, 24
    ctx->pc = 0x251370u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 24));
label_251374:
    // 0x251374: 0x0  nop
    ctx->pc = 0x251374u;
    // NOP
label_251378:
    // 0x251378: 0x0  nop
    ctx->pc = 0x251378u;
    // NOP
label_25137c:
    // 0x25137c: 0x0  nop
    ctx->pc = 0x25137cu;
    // NOP
label_251380:
    // 0x251380: 0x0  nop
    ctx->pc = 0x251380u;
    // NOP
label_251384:
    // 0x251384: 0x0  nop
    ctx->pc = 0x251384u;
    // NOP
label_251388:
    // 0x251388: 0x0  nop
    ctx->pc = 0x251388u;
    // NOP
label_25138c:
    // 0x25138c: 0x0  nop
    ctx->pc = 0x25138cu;
    // NOP
label_251390:
    // 0x251390: 0x0  nop
    ctx->pc = 0x251390u;
    // NOP
label_251394:
    // 0x251394: 0x0  nop
    ctx->pc = 0x251394u;
    // NOP
label_251398:
    // 0x251398: 0x0  nop
    ctx->pc = 0x251398u;
    // NOP
label_25139c:
    // 0x25139c: 0x0  nop
    ctx->pc = 0x25139cu;
    // NOP
label_2513a0:
    // 0x2513a0: 0x0  nop
    ctx->pc = 0x2513a0u;
    // NOP
label_2513a4:
    // 0x2513a4: 0x0  nop
    ctx->pc = 0x2513a4u;
    // NOP
label_2513a8:
    // 0x2513a8: 0x0  nop
    ctx->pc = 0x2513a8u;
    // NOP
label_2513ac:
    // 0x2513ac: 0x0  nop
    ctx->pc = 0x2513acu;
    // NOP
label_2513b0:
    // 0x2513b0: 0x0  nop
    ctx->pc = 0x2513b0u;
    // NOP
label_2513b4:
    // 0x2513b4: 0x0  nop
    ctx->pc = 0x2513b4u;
    // NOP
label_2513b8:
    // 0x2513b8: 0x0  nop
    ctx->pc = 0x2513b8u;
    // NOP
label_2513bc:
    // 0x2513bc: 0x0  nop
    ctx->pc = 0x2513bcu;
    // NOP
label_2513c0:
    // 0x2513c0: 0x0  nop
    ctx->pc = 0x2513c0u;
    // NOP
label_2513c4:
    // 0x2513c4: 0x0  nop
    ctx->pc = 0x2513c4u;
    // NOP
label_2513c8:
    // 0x2513c8: 0x0  nop
    ctx->pc = 0x2513c8u;
    // NOP
label_2513cc:
    // 0x2513cc: 0x0  nop
    ctx->pc = 0x2513ccu;
    // NOP
label_2513d0:
    // 0x2513d0: 0x0  nop
    ctx->pc = 0x2513d0u;
    // NOP
label_2513d4:
    // 0x2513d4: 0x0  nop
    ctx->pc = 0x2513d4u;
    // NOP
label_2513d8:
    // 0x2513d8: 0x0  nop
    ctx->pc = 0x2513d8u;
    // NOP
label_2513dc:
    // 0x2513dc: 0x0  nop
    ctx->pc = 0x2513dcu;
    // NOP
label_2513e0:
    // 0x2513e0: 0x0  nop
    ctx->pc = 0x2513e0u;
    // NOP
label_2513e4:
    // 0x2513e4: 0x0  nop
    ctx->pc = 0x2513e4u;
    // NOP
label_2513e8:
    // 0x2513e8: 0x0  nop
    ctx->pc = 0x2513e8u;
    // NOP
label_2513ec:
    // 0x2513ec: 0x0  nop
    ctx->pc = 0x2513ecu;
    // NOP
label_2513f0:
    // 0x2513f0: 0x0  nop
    ctx->pc = 0x2513f0u;
    // NOP
label_2513f4:
    // 0x2513f4: 0x0  nop
    ctx->pc = 0x2513f4u;
    // NOP
label_2513f8:
    // 0x2513f8: 0x0  nop
    ctx->pc = 0x2513f8u;
    // NOP
label_2513fc:
    // 0x2513fc: 0x0  nop
    ctx->pc = 0x2513fcu;
    // NOP
label_251400:
    // 0x251400: 0x0  nop
    ctx->pc = 0x251400u;
    // NOP
label_251404:
    // 0x251404: 0x0  nop
    ctx->pc = 0x251404u;
    // NOP
label_251408:
    // 0x251408: 0x0  nop
    ctx->pc = 0x251408u;
    // NOP
label_25140c:
    // 0x25140c: 0x0  nop
    ctx->pc = 0x25140cu;
    // NOP
label_251410:
    // 0x251410: 0x0  nop
    ctx->pc = 0x251410u;
    // NOP
label_251414:
    // 0x251414: 0x0  nop
    ctx->pc = 0x251414u;
    // NOP
label_251418:
    // 0x251418: 0x0  nop
    ctx->pc = 0x251418u;
    // NOP
label_25141c:
    // 0x25141c: 0x0  nop
    ctx->pc = 0x25141cu;
    // NOP
label_251420:
    // 0x251420: 0x0  nop
    ctx->pc = 0x251420u;
    // NOP
label_251424:
    // 0x251424: 0x0  nop
    ctx->pc = 0x251424u;
    // NOP
label_251428:
    // 0x251428: 0x0  nop
    ctx->pc = 0x251428u;
    // NOP
label_25142c:
    // 0x25142c: 0x0  nop
    ctx->pc = 0x25142cu;
    // NOP
label_251430:
    // 0x251430: 0x0  nop
    ctx->pc = 0x251430u;
    // NOP
label_251434:
    // 0x251434: 0x0  nop
    ctx->pc = 0x251434u;
    // NOP
label_251438:
    // 0x251438: 0x0  nop
    ctx->pc = 0x251438u;
    // NOP
label_25143c:
    // 0x25143c: 0x0  nop
    ctx->pc = 0x25143cu;
    // NOP
label_251440:
    // 0x251440: 0x5ad  .word       0x000005AD                   # daddu       $zero, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x251440u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_251444:
    // 0x251444: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x251444u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x251444 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_251448:
    // 0x251448: 0x152d40  sll         $a1, $s5, 21
    ctx->pc = 0x251448u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 21));
label_25144c:
    // 0x25144c: 0x0  nop
    ctx->pc = 0x25144cu;
    // NOP
label_251450:
    // 0x251450: 0x0  nop
    ctx->pc = 0x251450u;
    // NOP
label_251454:
    // 0x251454: 0x0  nop
    ctx->pc = 0x251454u;
    // NOP
label_251458:
    // 0x251458: 0x0  nop
    ctx->pc = 0x251458u;
    // NOP
label_25145c:
    // 0x25145c: 0x0  nop
    ctx->pc = 0x25145cu;
    // NOP
label_251460:
    // 0x251460: 0x0  nop
    ctx->pc = 0x251460u;
    // NOP
label_251464:
    // 0x251464: 0x0  nop
    ctx->pc = 0x251464u;
    // NOP
label_251468:
    // 0x251468: 0x0  nop
    ctx->pc = 0x251468u;
    // NOP
label_25146c:
    // 0x25146c: 0x0  nop
    ctx->pc = 0x25146cu;
    // NOP
label_251470:
    // 0x251470: 0x0  nop
    ctx->pc = 0x251470u;
    // NOP
label_251474:
    // 0x251474: 0x0  nop
    ctx->pc = 0x251474u;
    // NOP
label_251478:
    // 0x251478: 0x0  nop
    ctx->pc = 0x251478u;
    // NOP
label_25147c:
    // 0x25147c: 0x0  nop
    ctx->pc = 0x25147cu;
    // NOP
label_251480:
    // 0x251480: 0x0  nop
    ctx->pc = 0x251480u;
    // NOP
label_251484:
    // 0x251484: 0x0  nop
    ctx->pc = 0x251484u;
    // NOP
label_251488:
    // 0x251488: 0x0  nop
    ctx->pc = 0x251488u;
    // NOP
label_25148c:
    // 0x25148c: 0x0  nop
    ctx->pc = 0x25148cu;
    // NOP
label_251490:
    // 0x251490: 0x0  nop
    ctx->pc = 0x251490u;
    // NOP
label_251494:
    // 0x251494: 0x0  nop
    ctx->pc = 0x251494u;
    // NOP
label_251498:
    // 0x251498: 0x0  nop
    ctx->pc = 0x251498u;
    // NOP
label_25149c:
    // 0x25149c: 0x0  nop
    ctx->pc = 0x25149cu;
    // NOP
label_2514a0:
    // 0x2514a0: 0x0  nop
    ctx->pc = 0x2514a0u;
    // NOP
label_2514a4:
    // 0x2514a4: 0x0  nop
    ctx->pc = 0x2514a4u;
    // NOP
label_2514a8:
    // 0x2514a8: 0x0  nop
    ctx->pc = 0x2514a8u;
    // NOP
label_2514ac:
    // 0x2514ac: 0x0  nop
    ctx->pc = 0x2514acu;
    // NOP
label_2514b0:
    // 0x2514b0: 0x0  nop
    ctx->pc = 0x2514b0u;
    // NOP
label_2514b4:
    // 0x2514b4: 0x0  nop
    ctx->pc = 0x2514b4u;
    // NOP
label_2514b8:
    // 0x2514b8: 0x0  nop
    ctx->pc = 0x2514b8u;
    // NOP
label_2514bc:
    // 0x2514bc: 0x0  nop
    ctx->pc = 0x2514bcu;
    // NOP
label_2514c0:
    // 0x2514c0: 0x0  nop
    ctx->pc = 0x2514c0u;
    // NOP
label_2514c4:
    // 0x2514c4: 0x0  nop
    ctx->pc = 0x2514c4u;
    // NOP
label_2514c8:
    // 0x2514c8: 0x0  nop
    ctx->pc = 0x2514c8u;
    // NOP
label_2514cc:
    // 0x2514cc: 0x0  nop
    ctx->pc = 0x2514ccu;
    // NOP
label_2514d0:
    // 0x2514d0: 0x0  nop
    ctx->pc = 0x2514d0u;
    // NOP
label_2514d4:
    // 0x2514d4: 0x0  nop
    ctx->pc = 0x2514d4u;
    // NOP
label_2514d8:
    // 0x2514d8: 0x0  nop
    ctx->pc = 0x2514d8u;
    // NOP
label_2514dc:
    // 0x2514dc: 0x0  nop
    ctx->pc = 0x2514dcu;
    // NOP
label_2514e0:
    // 0x2514e0: 0x0  nop
    ctx->pc = 0x2514e0u;
    // NOP
label_2514e4:
    // 0x2514e4: 0x0  nop
    ctx->pc = 0x2514e4u;
    // NOP
label_2514e8:
    // 0x2514e8: 0x0  nop
    ctx->pc = 0x2514e8u;
    // NOP
label_2514ec:
    // 0x2514ec: 0x0  nop
    ctx->pc = 0x2514ecu;
    // NOP
label_2514f0:
    // 0x2514f0: 0x0  nop
    ctx->pc = 0x2514f0u;
    // NOP
label_2514f4:
    // 0x2514f4: 0x0  nop
    ctx->pc = 0x2514f4u;
    // NOP
label_2514f8:
    // 0x2514f8: 0x0  nop
    ctx->pc = 0x2514f8u;
    // NOP
label_2514fc:
    // 0x2514fc: 0x0  nop
    ctx->pc = 0x2514fcu;
    // NOP
label_251500:
    // 0x251500: 0x0  nop
    ctx->pc = 0x251500u;
    // NOP
label_251504:
    // 0x251504: 0x0  nop
    ctx->pc = 0x251504u;
    // NOP
label_251508:
    // 0x251508: 0x0  nop
    ctx->pc = 0x251508u;
    // NOP
label_25150c:
    // 0x25150c: 0x0  nop
    ctx->pc = 0x25150cu;
    // NOP
label_251510:
    // 0x251510: 0x0  nop
    ctx->pc = 0x251510u;
    // NOP
label_251514:
    // 0x251514: 0x0  nop
    ctx->pc = 0x251514u;
    // NOP
label_251518:
    // 0x251518: 0x5ae  .word       0x000005AE                   # dsub        $zero, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x251518u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_25151c:
    // 0x25151c: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x25151cu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_251520:
    // 0x251520: 0x152d40  sll         $a1, $s5, 21
    ctx->pc = 0x251520u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 21));
label_251524:
    // 0x251524: 0x0  nop
    ctx->pc = 0x251524u;
    // NOP
label_251528:
    // 0x251528: 0x0  nop
    ctx->pc = 0x251528u;
    // NOP
label_25152c:
    // 0x25152c: 0x0  nop
    ctx->pc = 0x25152cu;
    // NOP
label_251530:
    // 0x251530: 0x0  nop
    ctx->pc = 0x251530u;
    // NOP
label_251534:
    // 0x251534: 0x0  nop
    ctx->pc = 0x251534u;
    // NOP
label_251538:
    // 0x251538: 0x0  nop
    ctx->pc = 0x251538u;
    // NOP
label_25153c:
    // 0x25153c: 0x0  nop
    ctx->pc = 0x25153cu;
    // NOP
label_251540:
    // 0x251540: 0x0  nop
    ctx->pc = 0x251540u;
    // NOP
label_251544:
    // 0x251544: 0x0  nop
    ctx->pc = 0x251544u;
    // NOP
label_251548:
    // 0x251548: 0x0  nop
    ctx->pc = 0x251548u;
    // NOP
label_25154c:
    // 0x25154c: 0x0  nop
    ctx->pc = 0x25154cu;
    // NOP
label_251550:
    // 0x251550: 0x0  nop
    ctx->pc = 0x251550u;
    // NOP
label_251554:
    // 0x251554: 0x0  nop
    ctx->pc = 0x251554u;
    // NOP
label_251558:
    // 0x251558: 0x0  nop
    ctx->pc = 0x251558u;
    // NOP
label_25155c:
    // 0x25155c: 0x0  nop
    ctx->pc = 0x25155cu;
    // NOP
label_251560:
    // 0x251560: 0x0  nop
    ctx->pc = 0x251560u;
    // NOP
label_251564:
    // 0x251564: 0x0  nop
    ctx->pc = 0x251564u;
    // NOP
label_251568:
    // 0x251568: 0x0  nop
    ctx->pc = 0x251568u;
    // NOP
label_25156c:
    // 0x25156c: 0x0  nop
    ctx->pc = 0x25156cu;
    // NOP
label_251570:
    // 0x251570: 0x0  nop
    ctx->pc = 0x251570u;
    // NOP
label_251574:
    // 0x251574: 0x0  nop
    ctx->pc = 0x251574u;
    // NOP
label_251578:
    // 0x251578: 0x0  nop
    ctx->pc = 0x251578u;
    // NOP
label_25157c:
    // 0x25157c: 0x0  nop
    ctx->pc = 0x25157cu;
    // NOP
label_251580:
    // 0x251580: 0x0  nop
    ctx->pc = 0x251580u;
    // NOP
label_251584:
    // 0x251584: 0x0  nop
    ctx->pc = 0x251584u;
    // NOP
label_251588:
    // 0x251588: 0x0  nop
    ctx->pc = 0x251588u;
    // NOP
label_25158c:
    // 0x25158c: 0x0  nop
    ctx->pc = 0x25158cu;
    // NOP
label_251590:
    // 0x251590: 0x0  nop
    ctx->pc = 0x251590u;
    // NOP
label_251594:
    // 0x251594: 0x0  nop
    ctx->pc = 0x251594u;
    // NOP
label_251598:
    // 0x251598: 0x0  nop
    ctx->pc = 0x251598u;
    // NOP
label_25159c:
    // 0x25159c: 0x0  nop
    ctx->pc = 0x25159cu;
    // NOP
label_2515a0:
    // 0x2515a0: 0x0  nop
    ctx->pc = 0x2515a0u;
    // NOP
label_2515a4:
    // 0x2515a4: 0x0  nop
    ctx->pc = 0x2515a4u;
    // NOP
label_2515a8:
    // 0x2515a8: 0x0  nop
    ctx->pc = 0x2515a8u;
    // NOP
label_2515ac:
    // 0x2515ac: 0x0  nop
    ctx->pc = 0x2515acu;
    // NOP
label_2515b0:
    // 0x2515b0: 0x0  nop
    ctx->pc = 0x2515b0u;
    // NOP
label_2515b4:
    // 0x2515b4: 0x0  nop
    ctx->pc = 0x2515b4u;
    // NOP
label_2515b8:
    // 0x2515b8: 0x0  nop
    ctx->pc = 0x2515b8u;
    // NOP
label_2515bc:
    // 0x2515bc: 0x0  nop
    ctx->pc = 0x2515bcu;
    // NOP
label_2515c0:
    // 0x2515c0: 0x0  nop
    ctx->pc = 0x2515c0u;
    // NOP
label_2515c4:
    // 0x2515c4: 0x0  nop
    ctx->pc = 0x2515c4u;
    // NOP
label_2515c8:
    // 0x2515c8: 0x0  nop
    ctx->pc = 0x2515c8u;
    // NOP
label_2515cc:
    // 0x2515cc: 0x0  nop
    ctx->pc = 0x2515ccu;
    // NOP
label_2515d0:
    // 0x2515d0: 0x0  nop
    ctx->pc = 0x2515d0u;
    // NOP
label_2515d4:
    // 0x2515d4: 0x0  nop
    ctx->pc = 0x2515d4u;
    // NOP
label_2515d8:
    // 0x2515d8: 0x0  nop
    ctx->pc = 0x2515d8u;
    // NOP
label_2515dc:
    // 0x2515dc: 0x0  nop
    ctx->pc = 0x2515dcu;
    // NOP
label_2515e0:
    // 0x2515e0: 0x0  nop
    ctx->pc = 0x2515e0u;
    // NOP
label_2515e4:
    // 0x2515e4: 0x0  nop
    ctx->pc = 0x2515e4u;
    // NOP
label_2515e8:
    // 0x2515e8: 0x0  nop
    ctx->pc = 0x2515e8u;
    // NOP
label_2515ec:
    // 0x2515ec: 0x0  nop
    ctx->pc = 0x2515ecu;
    // NOP
label_2515f0:
    // 0x2515f0: 0x5af  .word       0x000005AF                   # dsubu       $zero, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2515f0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2515f4:
    // 0x2515f4: 0xf  sync
    ctx->pc = 0x2515f4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2515f8:
    // 0x2515f8: 0x152d40  sll         $a1, $s5, 21
    ctx->pc = 0x2515f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 21));
label_2515fc:
    // 0x2515fc: 0x0  nop
    ctx->pc = 0x2515fcu;
    // NOP
label_251600:
    // 0x251600: 0x0  nop
    ctx->pc = 0x251600u;
    // NOP
label_251604:
    // 0x251604: 0x0  nop
    ctx->pc = 0x251604u;
    // NOP
label_251608:
    // 0x251608: 0x0  nop
    ctx->pc = 0x251608u;
    // NOP
label_25160c:
    // 0x25160c: 0x0  nop
    ctx->pc = 0x25160cu;
    // NOP
label_251610:
    // 0x251610: 0x0  nop
    ctx->pc = 0x251610u;
    // NOP
label_251614:
    // 0x251614: 0x0  nop
    ctx->pc = 0x251614u;
    // NOP
label_251618:
    // 0x251618: 0x0  nop
    ctx->pc = 0x251618u;
    // NOP
label_25161c:
    // 0x25161c: 0x0  nop
    ctx->pc = 0x25161cu;
    // NOP
label_251620:
    // 0x251620: 0x0  nop
    ctx->pc = 0x251620u;
    // NOP
label_251624:
    // 0x251624: 0x0  nop
    ctx->pc = 0x251624u;
    // NOP
label_251628:
    // 0x251628: 0x0  nop
    ctx->pc = 0x251628u;
    // NOP
label_25162c:
    // 0x25162c: 0x0  nop
    ctx->pc = 0x25162cu;
    // NOP
label_251630:
    // 0x251630: 0x0  nop
    ctx->pc = 0x251630u;
    // NOP
label_251634:
    // 0x251634: 0x0  nop
    ctx->pc = 0x251634u;
    // NOP
label_251638:
    // 0x251638: 0x0  nop
    ctx->pc = 0x251638u;
    // NOP
label_25163c:
    // 0x25163c: 0x0  nop
    ctx->pc = 0x25163cu;
    // NOP
label_251640:
    // 0x251640: 0x0  nop
    ctx->pc = 0x251640u;
    // NOP
label_251644:
    // 0x251644: 0x0  nop
    ctx->pc = 0x251644u;
    // NOP
label_251648:
    // 0x251648: 0x0  nop
    ctx->pc = 0x251648u;
    // NOP
label_25164c:
    // 0x25164c: 0x0  nop
    ctx->pc = 0x25164cu;
    // NOP
label_251650:
    // 0x251650: 0x0  nop
    ctx->pc = 0x251650u;
    // NOP
label_251654:
    // 0x251654: 0x0  nop
    ctx->pc = 0x251654u;
    // NOP
label_251658:
    // 0x251658: 0x0  nop
    ctx->pc = 0x251658u;
    // NOP
label_25165c:
    // 0x25165c: 0x0  nop
    ctx->pc = 0x25165cu;
    // NOP
label_251660:
    // 0x251660: 0x0  nop
    ctx->pc = 0x251660u;
    // NOP
label_251664:
    // 0x251664: 0x0  nop
    ctx->pc = 0x251664u;
    // NOP
label_251668:
    // 0x251668: 0x0  nop
    ctx->pc = 0x251668u;
    // NOP
label_25166c:
    // 0x25166c: 0x0  nop
    ctx->pc = 0x25166cu;
    // NOP
label_251670:
    // 0x251670: 0x0  nop
    ctx->pc = 0x251670u;
    // NOP
label_251674:
    // 0x251674: 0x0  nop
    ctx->pc = 0x251674u;
    // NOP
label_251678:
    // 0x251678: 0x0  nop
    ctx->pc = 0x251678u;
    // NOP
label_25167c:
    // 0x25167c: 0x0  nop
    ctx->pc = 0x25167cu;
    // NOP
label_251680:
    // 0x251680: 0x0  nop
    ctx->pc = 0x251680u;
    // NOP
label_251684:
    // 0x251684: 0x0  nop
    ctx->pc = 0x251684u;
    // NOP
label_251688:
    // 0x251688: 0x0  nop
    ctx->pc = 0x251688u;
    // NOP
label_25168c:
    // 0x25168c: 0x0  nop
    ctx->pc = 0x25168cu;
    // NOP
label_251690:
    // 0x251690: 0x0  nop
    ctx->pc = 0x251690u;
    // NOP
label_251694:
    // 0x251694: 0x0  nop
    ctx->pc = 0x251694u;
    // NOP
label_251698:
    // 0x251698: 0x0  nop
    ctx->pc = 0x251698u;
    // NOP
label_25169c:
    // 0x25169c: 0x0  nop
    ctx->pc = 0x25169cu;
    // NOP
label_2516a0:
    // 0x2516a0: 0x0  nop
    ctx->pc = 0x2516a0u;
    // NOP
label_2516a4:
    // 0x2516a4: 0x0  nop
    ctx->pc = 0x2516a4u;
    // NOP
label_2516a8:
    // 0x2516a8: 0x0  nop
    ctx->pc = 0x2516a8u;
    // NOP
label_2516ac:
    // 0x2516ac: 0x0  nop
    ctx->pc = 0x2516acu;
    // NOP
label_2516b0:
    // 0x2516b0: 0x0  nop
    ctx->pc = 0x2516b0u;
    // NOP
label_2516b4:
    // 0x2516b4: 0x0  nop
    ctx->pc = 0x2516b4u;
    // NOP
label_2516b8:
    // 0x2516b8: 0x0  nop
    ctx->pc = 0x2516b8u;
    // NOP
label_2516bc:
    // 0x2516bc: 0x0  nop
    ctx->pc = 0x2516bcu;
    // NOP
label_2516c0:
    // 0x2516c0: 0x0  nop
    ctx->pc = 0x2516c0u;
    // NOP
label_2516c4:
    // 0x2516c4: 0x0  nop
    ctx->pc = 0x2516c4u;
    // NOP
label_2516c8:
    // 0x2516c8: 0x5b0  tge         $zero, $zero, 22
    ctx->pc = 0x2516c8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2516cc:
    // 0x2516cc: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x2516ccu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2516d0:
    // 0x2516d0: 0x152d40  sll         $a1, $s5, 21
    ctx->pc = 0x2516d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 21));
label_2516d4:
    // 0x2516d4: 0x0  nop
    ctx->pc = 0x2516d4u;
    // NOP
label_2516d8:
    // 0x2516d8: 0x0  nop
    ctx->pc = 0x2516d8u;
    // NOP
label_2516dc:
    // 0x2516dc: 0x0  nop
    ctx->pc = 0x2516dcu;
    // NOP
label_2516e0:
    // 0x2516e0: 0x0  nop
    ctx->pc = 0x2516e0u;
    // NOP
label_2516e4:
    // 0x2516e4: 0x0  nop
    ctx->pc = 0x2516e4u;
    // NOP
label_2516e8:
    // 0x2516e8: 0x0  nop
    ctx->pc = 0x2516e8u;
    // NOP
label_2516ec:
    // 0x2516ec: 0x0  nop
    ctx->pc = 0x2516ecu;
    // NOP
label_2516f0:
    // 0x2516f0: 0x0  nop
    ctx->pc = 0x2516f0u;
    // NOP
label_2516f4:
    // 0x2516f4: 0x0  nop
    ctx->pc = 0x2516f4u;
    // NOP
label_2516f8:
    // 0x2516f8: 0x0  nop
    ctx->pc = 0x2516f8u;
    // NOP
label_2516fc:
    // 0x2516fc: 0x0  nop
    ctx->pc = 0x2516fcu;
    // NOP
label_251700:
    // 0x251700: 0x0  nop
    ctx->pc = 0x251700u;
    // NOP
label_251704:
    // 0x251704: 0x0  nop
    ctx->pc = 0x251704u;
    // NOP
label_251708:
    // 0x251708: 0x0  nop
    ctx->pc = 0x251708u;
    // NOP
label_25170c:
    // 0x25170c: 0x0  nop
    ctx->pc = 0x25170cu;
    // NOP
label_251710:
    // 0x251710: 0x0  nop
    ctx->pc = 0x251710u;
    // NOP
label_251714:
    // 0x251714: 0x0  nop
    ctx->pc = 0x251714u;
    // NOP
label_251718:
    // 0x251718: 0x0  nop
    ctx->pc = 0x251718u;
    // NOP
label_25171c:
    // 0x25171c: 0x0  nop
    ctx->pc = 0x25171cu;
    // NOP
label_251720:
    // 0x251720: 0x0  nop
    ctx->pc = 0x251720u;
    // NOP
label_251724:
    // 0x251724: 0x0  nop
    ctx->pc = 0x251724u;
    // NOP
label_251728:
    // 0x251728: 0x0  nop
    ctx->pc = 0x251728u;
    // NOP
label_25172c:
    // 0x25172c: 0x0  nop
    ctx->pc = 0x25172cu;
    // NOP
label_251730:
    // 0x251730: 0x0  nop
    ctx->pc = 0x251730u;
    // NOP
label_251734:
    // 0x251734: 0x0  nop
    ctx->pc = 0x251734u;
    // NOP
label_251738:
    // 0x251738: 0x0  nop
    ctx->pc = 0x251738u;
    // NOP
label_25173c:
    // 0x25173c: 0x0  nop
    ctx->pc = 0x25173cu;
    // NOP
label_251740:
    // 0x251740: 0x0  nop
    ctx->pc = 0x251740u;
    // NOP
label_251744:
    // 0x251744: 0x0  nop
    ctx->pc = 0x251744u;
    // NOP
label_251748:
    // 0x251748: 0x0  nop
    ctx->pc = 0x251748u;
    // NOP
label_25174c:
    // 0x25174c: 0x0  nop
    ctx->pc = 0x25174cu;
    // NOP
label_251750:
    // 0x251750: 0x0  nop
    ctx->pc = 0x251750u;
    // NOP
label_251754:
    // 0x251754: 0x0  nop
    ctx->pc = 0x251754u;
    // NOP
label_251758:
    // 0x251758: 0x0  nop
    ctx->pc = 0x251758u;
    // NOP
label_25175c:
    // 0x25175c: 0x0  nop
    ctx->pc = 0x25175cu;
    // NOP
label_251760:
    // 0x251760: 0x0  nop
    ctx->pc = 0x251760u;
    // NOP
label_251764:
    // 0x251764: 0x0  nop
    ctx->pc = 0x251764u;
    // NOP
label_251768:
    // 0x251768: 0x0  nop
    ctx->pc = 0x251768u;
    // NOP
label_25176c:
    // 0x25176c: 0x0  nop
    ctx->pc = 0x25176cu;
    // NOP
label_251770:
    // 0x251770: 0x0  nop
    ctx->pc = 0x251770u;
    // NOP
label_251774:
    // 0x251774: 0x0  nop
    ctx->pc = 0x251774u;
    // NOP
label_251778:
    // 0x251778: 0x0  nop
    ctx->pc = 0x251778u;
    // NOP
label_25177c:
    // 0x25177c: 0x0  nop
    ctx->pc = 0x25177cu;
    // NOP
label_251780:
    // 0x251780: 0x0  nop
    ctx->pc = 0x251780u;
    // NOP
label_251784:
    // 0x251784: 0x0  nop
    ctx->pc = 0x251784u;
    // NOP
label_251788:
    // 0x251788: 0x0  nop
    ctx->pc = 0x251788u;
    // NOP
label_25178c:
    // 0x25178c: 0x0  nop
    ctx->pc = 0x25178cu;
    // NOP
label_251790:
    // 0x251790: 0x0  nop
    ctx->pc = 0x251790u;
    // NOP
label_251794:
    // 0x251794: 0x0  nop
    ctx->pc = 0x251794u;
    // NOP
label_251798:
    // 0x251798: 0x0  nop
    ctx->pc = 0x251798u;
    // NOP
label_25179c:
    // 0x25179c: 0x0  nop
    ctx->pc = 0x25179cu;
    // NOP
label_2517a0:
    // 0x2517a0: 0x5b1  tgeu        $zero, $zero, 22
    ctx->pc = 0x2517a0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2517a4:
    // 0x2517a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2517a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2517A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2517a8:
    // 0x2517a8: 0x152f90  .word       0x00152F90                   # mfhi        $a1 # 00150780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2517a8u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_2517ac:
    // 0x2517ac: 0x0  nop
    ctx->pc = 0x2517acu;
    // NOP
label_2517b0:
    // 0x2517b0: 0x0  nop
    ctx->pc = 0x2517b0u;
    // NOP
label_2517b4:
    // 0x2517b4: 0x0  nop
    ctx->pc = 0x2517b4u;
    // NOP
label_2517b8:
    // 0x2517b8: 0x0  nop
    ctx->pc = 0x2517b8u;
    // NOP
label_2517bc:
    // 0x2517bc: 0x0  nop
    ctx->pc = 0x2517bcu;
    // NOP
label_2517c0:
    // 0x2517c0: 0x0  nop
    ctx->pc = 0x2517c0u;
    // NOP
label_2517c4:
    // 0x2517c4: 0x0  nop
    ctx->pc = 0x2517c4u;
    // NOP
label_2517c8:
    // 0x2517c8: 0x0  nop
    ctx->pc = 0x2517c8u;
    // NOP
label_2517cc:
    // 0x2517cc: 0x0  nop
    ctx->pc = 0x2517ccu;
    // NOP
label_2517d0:
    // 0x2517d0: 0x0  nop
    ctx->pc = 0x2517d0u;
    // NOP
label_2517d4:
    // 0x2517d4: 0x0  nop
    ctx->pc = 0x2517d4u;
    // NOP
label_2517d8:
    // 0x2517d8: 0x0  nop
    ctx->pc = 0x2517d8u;
    // NOP
label_2517dc:
    // 0x2517dc: 0x0  nop
    ctx->pc = 0x2517dcu;
    // NOP
label_2517e0:
    // 0x2517e0: 0x0  nop
    ctx->pc = 0x2517e0u;
    // NOP
label_2517e4:
    // 0x2517e4: 0x0  nop
    ctx->pc = 0x2517e4u;
    // NOP
label_2517e8:
    // 0x2517e8: 0x0  nop
    ctx->pc = 0x2517e8u;
    // NOP
label_2517ec:
    // 0x2517ec: 0x0  nop
    ctx->pc = 0x2517ecu;
    // NOP
label_2517f0:
    // 0x2517f0: 0x0  nop
    ctx->pc = 0x2517f0u;
    // NOP
label_2517f4:
    // 0x2517f4: 0x0  nop
    ctx->pc = 0x2517f4u;
    // NOP
label_2517f8:
    // 0x2517f8: 0x0  nop
    ctx->pc = 0x2517f8u;
    // NOP
label_2517fc:
    // 0x2517fc: 0x0  nop
    ctx->pc = 0x2517fcu;
    // NOP
label_251800:
    // 0x251800: 0x0  nop
    ctx->pc = 0x251800u;
    // NOP
label_251804:
    // 0x251804: 0x0  nop
    ctx->pc = 0x251804u;
    // NOP
label_251808:
    // 0x251808: 0x0  nop
    ctx->pc = 0x251808u;
    // NOP
label_25180c:
    // 0x25180c: 0x0  nop
    ctx->pc = 0x25180cu;
    // NOP
label_251810:
    // 0x251810: 0x0  nop
    ctx->pc = 0x251810u;
    // NOP
label_251814:
    // 0x251814: 0x0  nop
    ctx->pc = 0x251814u;
    // NOP
label_251818:
    // 0x251818: 0x0  nop
    ctx->pc = 0x251818u;
    // NOP
label_25181c:
    // 0x25181c: 0x0  nop
    ctx->pc = 0x25181cu;
    // NOP
    ctx->pc = 0x251820u;
    return;
}
