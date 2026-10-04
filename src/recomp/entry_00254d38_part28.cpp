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


void entry_00254d38_part28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x262028u: goto label_262028;
        case 0x26202cu: goto label_26202c;
        case 0x262030u: goto label_262030;
        case 0x262034u: goto label_262034;
        case 0x262038u: goto label_262038;
        case 0x26203cu: goto label_26203c;
        case 0x262040u: goto label_262040;
        case 0x262044u: goto label_262044;
        case 0x262048u: goto label_262048;
        case 0x26204cu: goto label_26204c;
        case 0x262050u: goto label_262050;
        case 0x262054u: goto label_262054;
        case 0x262058u: goto label_262058;
        case 0x26205cu: goto label_26205c;
        case 0x262060u: goto label_262060;
        case 0x262064u: goto label_262064;
        case 0x262068u: goto label_262068;
        case 0x26206cu: goto label_26206c;
        case 0x262070u: goto label_262070;
        case 0x262074u: goto label_262074;
        case 0x262078u: goto label_262078;
        case 0x26207cu: goto label_26207c;
        case 0x262080u: goto label_262080;
        case 0x262084u: goto label_262084;
        case 0x262088u: goto label_262088;
        case 0x26208cu: goto label_26208c;
        case 0x262090u: goto label_262090;
        case 0x262094u: goto label_262094;
        case 0x262098u: goto label_262098;
        case 0x26209cu: goto label_26209c;
        case 0x2620a0u: goto label_2620a0;
        case 0x2620a4u: goto label_2620a4;
        case 0x2620a8u: goto label_2620a8;
        case 0x2620acu: goto label_2620ac;
        case 0x2620b0u: goto label_2620b0;
        case 0x2620b4u: goto label_2620b4;
        case 0x2620b8u: goto label_2620b8;
        case 0x2620bcu: goto label_2620bc;
        case 0x2620c0u: goto label_2620c0;
        case 0x2620c4u: goto label_2620c4;
        case 0x2620c8u: goto label_2620c8;
        case 0x2620ccu: goto label_2620cc;
        case 0x2620d0u: goto label_2620d0;
        case 0x2620d4u: goto label_2620d4;
        case 0x2620d8u: goto label_2620d8;
        case 0x2620dcu: goto label_2620dc;
        case 0x2620e0u: goto label_2620e0;
        case 0x2620e4u: goto label_2620e4;
        case 0x2620e8u: goto label_2620e8;
        case 0x2620ecu: goto label_2620ec;
        case 0x2620f0u: goto label_2620f0;
        case 0x2620f4u: goto label_2620f4;
        case 0x2620f8u: goto label_2620f8;
        case 0x2620fcu: goto label_2620fc;
        case 0x262100u: goto label_262100;
        case 0x262104u: goto label_262104;
        case 0x262108u: goto label_262108;
        case 0x26210cu: goto label_26210c;
        case 0x262110u: goto label_262110;
        case 0x262114u: goto label_262114;
        case 0x262118u: goto label_262118;
        case 0x26211cu: goto label_26211c;
        case 0x262120u: goto label_262120;
        case 0x262124u: goto label_262124;
        case 0x262128u: goto label_262128;
        case 0x26212cu: goto label_26212c;
        case 0x262130u: goto label_262130;
        case 0x262134u: goto label_262134;
        case 0x262138u: goto label_262138;
        case 0x26213cu: goto label_26213c;
        case 0x262140u: goto label_262140;
        case 0x262144u: goto label_262144;
        case 0x262148u: goto label_262148;
        case 0x26214cu: goto label_26214c;
        case 0x262150u: goto label_262150;
        case 0x262154u: goto label_262154;
        case 0x262158u: goto label_262158;
        case 0x26215cu: goto label_26215c;
        case 0x262160u: goto label_262160;
        case 0x262164u: goto label_262164;
        case 0x262168u: goto label_262168;
        case 0x26216cu: goto label_26216c;
        case 0x262170u: goto label_262170;
        case 0x262174u: goto label_262174;
        case 0x262178u: goto label_262178;
        case 0x26217cu: goto label_26217c;
        case 0x262180u: goto label_262180;
        case 0x262184u: goto label_262184;
        case 0x262188u: goto label_262188;
        case 0x26218cu: goto label_26218c;
        case 0x262190u: goto label_262190;
        case 0x262194u: goto label_262194;
        case 0x262198u: goto label_262198;
        case 0x26219cu: goto label_26219c;
        case 0x2621a0u: goto label_2621a0;
        case 0x2621a4u: goto label_2621a4;
        case 0x2621a8u: goto label_2621a8;
        case 0x2621acu: goto label_2621ac;
        case 0x2621b0u: goto label_2621b0;
        case 0x2621b4u: goto label_2621b4;
        case 0x2621b8u: goto label_2621b8;
        case 0x2621bcu: goto label_2621bc;
        case 0x2621c0u: goto label_2621c0;
        case 0x2621c4u: goto label_2621c4;
        case 0x2621c8u: goto label_2621c8;
        case 0x2621ccu: goto label_2621cc;
        case 0x2621d0u: goto label_2621d0;
        case 0x2621d4u: goto label_2621d4;
        case 0x2621d8u: goto label_2621d8;
        case 0x2621dcu: goto label_2621dc;
        case 0x2621e0u: goto label_2621e0;
        case 0x2621e4u: goto label_2621e4;
        case 0x2621e8u: goto label_2621e8;
        case 0x2621ecu: goto label_2621ec;
        case 0x2621f0u: goto label_2621f0;
        case 0x2621f4u: goto label_2621f4;
        case 0x2621f8u: goto label_2621f8;
        case 0x2621fcu: goto label_2621fc;
        case 0x262200u: goto label_262200;
        case 0x262204u: goto label_262204;
        case 0x262208u: goto label_262208;
        case 0x26220cu: goto label_26220c;
        case 0x262210u: goto label_262210;
        case 0x262214u: goto label_262214;
        case 0x262218u: goto label_262218;
        case 0x26221cu: goto label_26221c;
        case 0x262220u: goto label_262220;
        case 0x262224u: goto label_262224;
        case 0x262228u: goto label_262228;
        case 0x26222cu: goto label_26222c;
        case 0x262230u: goto label_262230;
        case 0x262234u: goto label_262234;
        case 0x262238u: goto label_262238;
        case 0x26223cu: goto label_26223c;
        case 0x262240u: goto label_262240;
        case 0x262244u: goto label_262244;
        case 0x262248u: goto label_262248;
        case 0x26224cu: goto label_26224c;
        case 0x262250u: goto label_262250;
        case 0x262254u: goto label_262254;
        case 0x262258u: goto label_262258;
        case 0x26225cu: goto label_26225c;
        case 0x262260u: goto label_262260;
        case 0x262264u: goto label_262264;
        case 0x262268u: goto label_262268;
        case 0x26226cu: goto label_26226c;
        case 0x262270u: goto label_262270;
        case 0x262274u: goto label_262274;
        case 0x262278u: goto label_262278;
        case 0x26227cu: goto label_26227c;
        case 0x262280u: goto label_262280;
        case 0x262284u: goto label_262284;
        case 0x262288u: goto label_262288;
        case 0x26228cu: goto label_26228c;
        case 0x262290u: goto label_262290;
        case 0x262294u: goto label_262294;
        case 0x262298u: goto label_262298;
        case 0x26229cu: goto label_26229c;
        case 0x2622a0u: goto label_2622a0;
        case 0x2622a4u: goto label_2622a4;
        case 0x2622a8u: goto label_2622a8;
        case 0x2622acu: goto label_2622ac;
        case 0x2622b0u: goto label_2622b0;
        case 0x2622b4u: goto label_2622b4;
        case 0x2622b8u: goto label_2622b8;
        case 0x2622bcu: goto label_2622bc;
        case 0x2622c0u: goto label_2622c0;
        case 0x2622c4u: goto label_2622c4;
        case 0x2622c8u: goto label_2622c8;
        case 0x2622ccu: goto label_2622cc;
        case 0x2622d0u: goto label_2622d0;
        case 0x2622d4u: goto label_2622d4;
        case 0x2622d8u: goto label_2622d8;
        case 0x2622dcu: goto label_2622dc;
        case 0x2622e0u: goto label_2622e0;
        case 0x2622e4u: goto label_2622e4;
        case 0x2622e8u: goto label_2622e8;
        case 0x2622ecu: goto label_2622ec;
        case 0x2622f0u: goto label_2622f0;
        case 0x2622f4u: goto label_2622f4;
        case 0x2622f8u: goto label_2622f8;
        case 0x2622fcu: goto label_2622fc;
        case 0x262300u: goto label_262300;
        case 0x262304u: goto label_262304;
        case 0x262308u: goto label_262308;
        case 0x26230cu: goto label_26230c;
        case 0x262310u: goto label_262310;
        case 0x262314u: goto label_262314;
        case 0x262318u: goto label_262318;
        case 0x26231cu: goto label_26231c;
        case 0x262320u: goto label_262320;
        case 0x262324u: goto label_262324;
        case 0x262328u: goto label_262328;
        case 0x26232cu: goto label_26232c;
        case 0x262330u: goto label_262330;
        case 0x262334u: goto label_262334;
        case 0x262338u: goto label_262338;
        case 0x26233cu: goto label_26233c;
        case 0x262340u: goto label_262340;
        case 0x262344u: goto label_262344;
        case 0x262348u: goto label_262348;
        case 0x26234cu: goto label_26234c;
        case 0x262350u: goto label_262350;
        case 0x262354u: goto label_262354;
        case 0x262358u: goto label_262358;
        case 0x26235cu: goto label_26235c;
        case 0x262360u: goto label_262360;
        case 0x262364u: goto label_262364;
        case 0x262368u: goto label_262368;
        case 0x26236cu: goto label_26236c;
        case 0x262370u: goto label_262370;
        case 0x262374u: goto label_262374;
        case 0x262378u: goto label_262378;
        case 0x26237cu: goto label_26237c;
        case 0x262380u: goto label_262380;
        case 0x262384u: goto label_262384;
        case 0x262388u: goto label_262388;
        case 0x26238cu: goto label_26238c;
        case 0x262390u: goto label_262390;
        case 0x262394u: goto label_262394;
        case 0x262398u: goto label_262398;
        case 0x26239cu: goto label_26239c;
        case 0x2623a0u: goto label_2623a0;
        case 0x2623a4u: goto label_2623a4;
        case 0x2623a8u: goto label_2623a8;
        case 0x2623acu: goto label_2623ac;
        case 0x2623b0u: goto label_2623b0;
        case 0x2623b4u: goto label_2623b4;
        case 0x2623b8u: goto label_2623b8;
        case 0x2623bcu: goto label_2623bc;
        case 0x2623c0u: goto label_2623c0;
        case 0x2623c4u: goto label_2623c4;
        case 0x2623c8u: goto label_2623c8;
        case 0x2623ccu: goto label_2623cc;
        case 0x2623d0u: goto label_2623d0;
        case 0x2623d4u: goto label_2623d4;
        case 0x2623d8u: goto label_2623d8;
        case 0x2623dcu: goto label_2623dc;
        case 0x2623e0u: goto label_2623e0;
        case 0x2623e4u: goto label_2623e4;
        case 0x2623e8u: goto label_2623e8;
        case 0x2623ecu: goto label_2623ec;
        case 0x2623f0u: goto label_2623f0;
        case 0x2623f4u: goto label_2623f4;
        case 0x2623f8u: goto label_2623f8;
        case 0x2623fcu: goto label_2623fc;
        case 0x262400u: goto label_262400;
        case 0x262404u: goto label_262404;
        case 0x262408u: goto label_262408;
        case 0x26240cu: goto label_26240c;
        case 0x262410u: goto label_262410;
        case 0x262414u: goto label_262414;
        case 0x262418u: goto label_262418;
        case 0x26241cu: goto label_26241c;
        case 0x262420u: goto label_262420;
        case 0x262424u: goto label_262424;
        case 0x262428u: goto label_262428;
        case 0x26242cu: goto label_26242c;
        case 0x262430u: goto label_262430;
        case 0x262434u: goto label_262434;
        case 0x262438u: goto label_262438;
        case 0x26243cu: goto label_26243c;
        case 0x262440u: goto label_262440;
        case 0x262444u: goto label_262444;
        case 0x262448u: goto label_262448;
        case 0x26244cu: goto label_26244c;
        case 0x262450u: goto label_262450;
        case 0x262454u: goto label_262454;
        case 0x262458u: goto label_262458;
        case 0x26245cu: goto label_26245c;
        case 0x262460u: goto label_262460;
        case 0x262464u: goto label_262464;
        case 0x262468u: goto label_262468;
        case 0x26246cu: goto label_26246c;
        case 0x262470u: goto label_262470;
        case 0x262474u: goto label_262474;
        case 0x262478u: goto label_262478;
        case 0x26247cu: goto label_26247c;
        case 0x262480u: goto label_262480;
        case 0x262484u: goto label_262484;
        case 0x262488u: goto label_262488;
        case 0x26248cu: goto label_26248c;
        case 0x262490u: goto label_262490;
        case 0x262494u: goto label_262494;
        case 0x262498u: goto label_262498;
        case 0x26249cu: goto label_26249c;
        case 0x2624a0u: goto label_2624a0;
        case 0x2624a4u: goto label_2624a4;
        case 0x2624a8u: goto label_2624a8;
        case 0x2624acu: goto label_2624ac;
        case 0x2624b0u: goto label_2624b0;
        case 0x2624b4u: goto label_2624b4;
        case 0x2624b8u: goto label_2624b8;
        case 0x2624bcu: goto label_2624bc;
        case 0x2624c0u: goto label_2624c0;
        case 0x2624c4u: goto label_2624c4;
        case 0x2624c8u: goto label_2624c8;
        case 0x2624ccu: goto label_2624cc;
        case 0x2624d0u: goto label_2624d0;
        case 0x2624d4u: goto label_2624d4;
        case 0x2624d8u: goto label_2624d8;
        case 0x2624dcu: goto label_2624dc;
        case 0x2624e0u: goto label_2624e0;
        case 0x2624e4u: goto label_2624e4;
        case 0x2624e8u: goto label_2624e8;
        case 0x2624ecu: goto label_2624ec;
        case 0x2624f0u: goto label_2624f0;
        case 0x2624f4u: goto label_2624f4;
        case 0x2624f8u: goto label_2624f8;
        case 0x2624fcu: goto label_2624fc;
        case 0x262500u: goto label_262500;
        case 0x262504u: goto label_262504;
        case 0x262508u: goto label_262508;
        case 0x26250cu: goto label_26250c;
        case 0x262510u: goto label_262510;
        case 0x262514u: goto label_262514;
        case 0x262518u: goto label_262518;
        case 0x26251cu: goto label_26251c;
        case 0x262520u: goto label_262520;
        case 0x262524u: goto label_262524;
        case 0x262528u: goto label_262528;
        case 0x26252cu: goto label_26252c;
        case 0x262530u: goto label_262530;
        case 0x262534u: goto label_262534;
        case 0x262538u: goto label_262538;
        case 0x26253cu: goto label_26253c;
        case 0x262540u: goto label_262540;
        case 0x262544u: goto label_262544;
        case 0x262548u: goto label_262548;
        case 0x26254cu: goto label_26254c;
        case 0x262550u: goto label_262550;
        case 0x262554u: goto label_262554;
        case 0x262558u: goto label_262558;
        case 0x26255cu: goto label_26255c;
        case 0x262560u: goto label_262560;
        case 0x262564u: goto label_262564;
        case 0x262568u: goto label_262568;
        case 0x26256cu: goto label_26256c;
        case 0x262570u: goto label_262570;
        case 0x262574u: goto label_262574;
        case 0x262578u: goto label_262578;
        case 0x26257cu: goto label_26257c;
        case 0x262580u: goto label_262580;
        case 0x262584u: goto label_262584;
        case 0x262588u: goto label_262588;
        case 0x26258cu: goto label_26258c;
        case 0x262590u: goto label_262590;
        case 0x262594u: goto label_262594;
        case 0x262598u: goto label_262598;
        case 0x26259cu: goto label_26259c;
        case 0x2625a0u: goto label_2625a0;
        case 0x2625a4u: goto label_2625a4;
        case 0x2625a8u: goto label_2625a8;
        case 0x2625acu: goto label_2625ac;
        case 0x2625b0u: goto label_2625b0;
        case 0x2625b4u: goto label_2625b4;
        case 0x2625b8u: goto label_2625b8;
        case 0x2625bcu: goto label_2625bc;
        case 0x2625c0u: goto label_2625c0;
        case 0x2625c4u: goto label_2625c4;
        case 0x2625c8u: goto label_2625c8;
        case 0x2625ccu: goto label_2625cc;
        case 0x2625d0u: goto label_2625d0;
        case 0x2625d4u: goto label_2625d4;
        case 0x2625d8u: goto label_2625d8;
        case 0x2625dcu: goto label_2625dc;
        case 0x2625e0u: goto label_2625e0;
        case 0x2625e4u: goto label_2625e4;
        case 0x2625e8u: goto label_2625e8;
        case 0x2625ecu: goto label_2625ec;
        case 0x2625f0u: goto label_2625f0;
        case 0x2625f4u: goto label_2625f4;
        case 0x2625f8u: goto label_2625f8;
        case 0x2625fcu: goto label_2625fc;
        case 0x262600u: goto label_262600;
        case 0x262604u: goto label_262604;
        case 0x262608u: goto label_262608;
        case 0x26260cu: goto label_26260c;
        case 0x262610u: goto label_262610;
        case 0x262614u: goto label_262614;
        case 0x262618u: goto label_262618;
        case 0x26261cu: goto label_26261c;
        case 0x262620u: goto label_262620;
        case 0x262624u: goto label_262624;
        case 0x262628u: goto label_262628;
        case 0x26262cu: goto label_26262c;
        case 0x262630u: goto label_262630;
        case 0x262634u: goto label_262634;
        case 0x262638u: goto label_262638;
        case 0x26263cu: goto label_26263c;
        case 0x262640u: goto label_262640;
        case 0x262644u: goto label_262644;
        case 0x262648u: goto label_262648;
        case 0x26264cu: goto label_26264c;
        case 0x262650u: goto label_262650;
        case 0x262654u: goto label_262654;
        case 0x262658u: goto label_262658;
        case 0x26265cu: goto label_26265c;
        case 0x262660u: goto label_262660;
        case 0x262664u: goto label_262664;
        case 0x262668u: goto label_262668;
        case 0x26266cu: goto label_26266c;
        case 0x262670u: goto label_262670;
        case 0x262674u: goto label_262674;
        case 0x262678u: goto label_262678;
        case 0x26267cu: goto label_26267c;
        case 0x262680u: goto label_262680;
        case 0x262684u: goto label_262684;
        case 0x262688u: goto label_262688;
        case 0x26268cu: goto label_26268c;
        case 0x262690u: goto label_262690;
        case 0x262694u: goto label_262694;
        case 0x262698u: goto label_262698;
        case 0x26269cu: goto label_26269c;
        case 0x2626a0u: goto label_2626a0;
        case 0x2626a4u: goto label_2626a4;
        case 0x2626a8u: goto label_2626a8;
        case 0x2626acu: goto label_2626ac;
        case 0x2626b0u: goto label_2626b0;
        case 0x2626b4u: goto label_2626b4;
        case 0x2626b8u: goto label_2626b8;
        case 0x2626bcu: goto label_2626bc;
        case 0x2626c0u: goto label_2626c0;
        case 0x2626c4u: goto label_2626c4;
        case 0x2626c8u: goto label_2626c8;
        case 0x2626ccu: goto label_2626cc;
        case 0x2626d0u: goto label_2626d0;
        case 0x2626d4u: goto label_2626d4;
        case 0x2626d8u: goto label_2626d8;
        case 0x2626dcu: goto label_2626dc;
        case 0x2626e0u: goto label_2626e0;
        case 0x2626e4u: goto label_2626e4;
        case 0x2626e8u: goto label_2626e8;
        case 0x2626ecu: goto label_2626ec;
        case 0x2626f0u: goto label_2626f0;
        case 0x2626f4u: goto label_2626f4;
        case 0x2626f8u: goto label_2626f8;
        case 0x2626fcu: goto label_2626fc;
        case 0x262700u: goto label_262700;
        case 0x262704u: goto label_262704;
        case 0x262708u: goto label_262708;
        case 0x26270cu: goto label_26270c;
        case 0x262710u: goto label_262710;
        case 0x262714u: goto label_262714;
        case 0x262718u: goto label_262718;
        case 0x26271cu: goto label_26271c;
        case 0x262720u: goto label_262720;
        case 0x262724u: goto label_262724;
        case 0x262728u: goto label_262728;
        case 0x26272cu: goto label_26272c;
        case 0x262730u: goto label_262730;
        case 0x262734u: goto label_262734;
        case 0x262738u: goto label_262738;
        case 0x26273cu: goto label_26273c;
        case 0x262740u: goto label_262740;
        case 0x262744u: goto label_262744;
        case 0x262748u: goto label_262748;
        case 0x26274cu: goto label_26274c;
        case 0x262750u: goto label_262750;
        case 0x262754u: goto label_262754;
        case 0x262758u: goto label_262758;
        case 0x26275cu: goto label_26275c;
        case 0x262760u: goto label_262760;
        case 0x262764u: goto label_262764;
        case 0x262768u: goto label_262768;
        case 0x26276cu: goto label_26276c;
        case 0x262770u: goto label_262770;
        case 0x262774u: goto label_262774;
        case 0x262778u: goto label_262778;
        case 0x26277cu: goto label_26277c;
        case 0x262780u: goto label_262780;
        case 0x262784u: goto label_262784;
        case 0x262788u: goto label_262788;
        case 0x26278cu: goto label_26278c;
        case 0x262790u: goto label_262790;
        case 0x262794u: goto label_262794;
        case 0x262798u: goto label_262798;
        case 0x26279cu: goto label_26279c;
        case 0x2627a0u: goto label_2627a0;
        case 0x2627a4u: goto label_2627a4;
        case 0x2627a8u: goto label_2627a8;
        case 0x2627acu: goto label_2627ac;
        case 0x2627b0u: goto label_2627b0;
        case 0x2627b4u: goto label_2627b4;
        case 0x2627b8u: goto label_2627b8;
        case 0x2627bcu: goto label_2627bc;
        case 0x2627c0u: goto label_2627c0;
        case 0x2627c4u: goto label_2627c4;
        case 0x2627c8u: goto label_2627c8;
        case 0x2627ccu: goto label_2627cc;
        case 0x2627d0u: goto label_2627d0;
        case 0x2627d4u: goto label_2627d4;
        case 0x2627d8u: goto label_2627d8;
        case 0x2627dcu: goto label_2627dc;
        case 0x2627e0u: goto label_2627e0;
        case 0x2627e4u: goto label_2627e4;
        case 0x2627e8u: goto label_2627e8;
        case 0x2627ecu: goto label_2627ec;
        case 0x2627f0u: goto label_2627f0;
        case 0x2627f4u: goto label_2627f4;
        default: return;
    }

label_262028:
    // 0x262028: 0x0  nop
    ctx->pc = 0x262028u;
    // NOP
label_26202c:
    // 0x26202c: 0x0  nop
    ctx->pc = 0x26202cu;
    // NOP
label_262030:
    // 0x262030: 0xcbac  .word       0x0000CBAC                   # dadd        $t9, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262030u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 25, r); }
label_262034:
    // 0x262034: 0x7460  .word       0x00007460                   # add         $t6, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262034u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_262038:
    // 0x262038: 0x0  nop
    ctx->pc = 0x262038u;
    // NOP
label_26203c:
    // 0x26203c: 0x0  nop
    ctx->pc = 0x26203cu;
    // NOP
label_262040:
    // 0x262040: 0xcbbb  dsra        $t9, $zero, 14
    ctx->pc = 0x262040u;
    SET_GPR_S64(ctx, 25, GPR_S64(ctx, 0) >> 14);
label_262044:
    // 0x262044: 0x1960  .word       0x00001960                   # add         $v1, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262044u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_262048:
    // 0x262048: 0x0  nop
    ctx->pc = 0x262048u;
    // NOP
label_26204c:
    // 0x26204c: 0x0  nop
    ctx->pc = 0x26204cu;
    // NOP
label_262050:
    // 0x262050: 0xcbbf  dsra32      $t9, $zero, 14
    ctx->pc = 0x262050u;
    SET_GPR_S64(ctx, 25, GPR_S64(ctx, 0) >> (32 + 14));
label_262054:
    // 0x262054: 0x9370  tge         $zero, $zero, 589
    ctx->pc = 0x262054u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262058:
    // 0x262058: 0x0  nop
    ctx->pc = 0x262058u;
    // NOP
label_26205c:
    // 0x26205c: 0x0  nop
    ctx->pc = 0x26205cu;
    // NOP
label_262060:
    // 0x262060: 0xcbd2  .word       0x0000CBD2                   # mflo        $t9 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262060u;
    SET_GPR_U64(ctx, 25, ctx->lo);
label_262064:
    // 0x262064: 0xc220  .word       0x0000C220                   # add         $t8, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262064u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_262068:
    // 0x262068: 0x0  nop
    ctx->pc = 0x262068u;
    // NOP
label_26206c:
    // 0x26206c: 0x0  nop
    ctx->pc = 0x26206cu;
    // NOP
label_262070:
    // 0x262070: 0xcbeb  .word       0x0000CBEB                   # sltu        $t9, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262070u;
    SET_GPR_U64(ctx, 25, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_262074:
    // 0x262074: 0x73a0  .word       0x000073A0                   # add         $t6, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262074u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_262078:
    // 0x262078: 0x0  nop
    ctx->pc = 0x262078u;
    // NOP
label_26207c:
    // 0x26207c: 0x0  nop
    ctx->pc = 0x26207cu;
    // NOP
label_262080:
    // 0x262080: 0xcbfa  dsrl        $t9, $zero, 15
    ctx->pc = 0x262080u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) >> 15);
label_262084:
    // 0x262084: 0x3ee0  .word       0x00003EE0                   # add         $a3, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262084u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_262088:
    // 0x262088: 0x0  nop
    ctx->pc = 0x262088u;
    // NOP
label_26208c:
    // 0x26208c: 0x0  nop
    ctx->pc = 0x26208cu;
    // NOP
label_262090:
    // 0x262090: 0xcc02  srl         $t9, $zero, 16
    ctx->pc = 0x262090u;
    SET_GPR_S32(ctx, 25, (int32_t)SRL32(GPR_U32(ctx, 0), 16));
label_262094:
    // 0x262094: 0xac50  .word       0x0000AC50                   # mfhi        $s5 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262094u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_262098:
    // 0x262098: 0x0  nop
    ctx->pc = 0x262098u;
    // NOP
label_26209c:
    // 0x26209c: 0x0  nop
    ctx->pc = 0x26209cu;
    // NOP
label_2620a0:
    // 0x2620a0: 0xcc18  .word       0x0000CC18                   # mult        $t9, $zero, $zero # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2620a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
label_2620a4:
    // 0x2620a4: 0x6fe0  .word       0x00006FE0                   # add         $t5, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2620a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_2620a8:
    // 0x2620a8: 0x0  nop
    ctx->pc = 0x2620a8u;
    // NOP
label_2620ac:
    // 0x2620ac: 0x0  nop
    ctx->pc = 0x2620acu;
    // NOP
label_2620b0:
    // 0x2620b0: 0xcc26  .word       0x0000CC26                   # xor         $t9, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2620b0u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2620b4:
    // 0x2620b4: 0xab70  tge         $zero, $zero, 685
    ctx->pc = 0x2620b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2620b8:
    // 0x2620b8: 0x0  nop
    ctx->pc = 0x2620b8u;
    // NOP
label_2620bc:
    // 0x2620bc: 0x0  nop
    ctx->pc = 0x2620bcu;
    // NOP
label_2620c0:
    // 0x2620c0: 0xcc3c  dsll32      $t9, $zero, 16
    ctx->pc = 0x2620c0u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) << (32 + 16));
label_2620c4:
    // 0x2620c4: 0x98e0  .word       0x000098E0                   # add         $s3, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2620c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_2620c8:
    // 0x2620c8: 0x0  nop
    ctx->pc = 0x2620c8u;
    // NOP
label_2620cc:
    // 0x2620cc: 0x0  nop
    ctx->pc = 0x2620ccu;
    // NOP
label_2620d0:
    // 0x2620d0: 0xcc50  .word       0x0000CC50                   # mfhi        $t9 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2620d0u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_2620d4:
    // 0x2620d4: 0x4380  sll         $t0, $zero, 14
    ctx->pc = 0x2620d4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_2620d8:
    // 0x2620d8: 0x0  nop
    ctx->pc = 0x2620d8u;
    // NOP
label_2620dc:
    // 0x2620dc: 0x0  nop
    ctx->pc = 0x2620dcu;
    // NOP
label_2620e0:
    // 0x2620e0: 0xcc59  .word       0x0000CC59                   # multu       $zero, $zero # 0000CC40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2620e0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
label_2620e4:
    // 0x2620e4: 0x4ee0  .word       0x00004EE0                   # add         $t1, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2620e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_2620e8:
    // 0x2620e8: 0x0  nop
    ctx->pc = 0x2620e8u;
    // NOP
label_2620ec:
    // 0x2620ec: 0x0  nop
    ctx->pc = 0x2620ecu;
    // NOP
label_2620f0:
    // 0x2620f0: 0xcc63  .word       0x0000CC63                   # negu        $t9, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2620f0u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2620f4:
    // 0x2620f4: 0x6ca0  .word       0x00006CA0                   # add         $t5, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2620f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_2620f8:
    // 0x2620f8: 0x0  nop
    ctx->pc = 0x2620f8u;
    // NOP
label_2620fc:
    // 0x2620fc: 0x0  nop
    ctx->pc = 0x2620fcu;
    // NOP
label_262100:
    // 0x262100: 0xcc71  tgeu        $zero, $zero, 817
    ctx->pc = 0x262100u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262104:
    // 0x262104: 0x9090  .word       0x00009090                   # mfhi        $s2 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262104u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_262108:
    // 0x262108: 0x0  nop
    ctx->pc = 0x262108u;
    // NOP
label_26210c:
    // 0x26210c: 0x0  nop
    ctx->pc = 0x26210cu;
    // NOP
label_262110:
    // 0x262110: 0xcc84  .word       0x0000CC84                   # sllv        $t9, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262110u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_262114:
    // 0x262114: 0x8230  tge         $zero, $zero, 520
    ctx->pc = 0x262114u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262118:
    // 0x262118: 0x0  nop
    ctx->pc = 0x262118u;
    // NOP
label_26211c:
    // 0x26211c: 0x0  nop
    ctx->pc = 0x26211cu;
    // NOP
label_262120:
    // 0x262120: 0xcc95  .word       0x0000CC95                   # INVALID     $zero, $zero, -0x336B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262120u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x262120 raw=0x0000CC95"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262124:
    // 0x262124: 0x15f0  tge         $zero, $zero, 87
    ctx->pc = 0x262124u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262128:
    // 0x262128: 0x0  nop
    ctx->pc = 0x262128u;
    // NOP
label_26212c:
    // 0x26212c: 0x0  nop
    ctx->pc = 0x26212cu;
    // NOP
label_262130:
    // 0x262130: 0xcc98  .word       0x0000CC98                   # mult        $t9, $zero, $zero # 00000480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x262130u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
label_262134:
    // 0x262134: 0xc0f0  tge         $zero, $zero, 771
    ctx->pc = 0x262134u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262138:
    // 0x262138: 0x0  nop
    ctx->pc = 0x262138u;
    // NOP
label_26213c:
    // 0x26213c: 0x0  nop
    ctx->pc = 0x26213cu;
    // NOP
label_262140:
    // 0x262140: 0xccb1  tgeu        $zero, $zero, 818
    ctx->pc = 0x262140u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262144:
    // 0x262144: 0x7480  sll         $t6, $zero, 18
    ctx->pc = 0x262144u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_262148:
    // 0x262148: 0x0  nop
    ctx->pc = 0x262148u;
    // NOP
label_26214c:
    // 0x26214c: 0x0  nop
    ctx->pc = 0x26214cu;
    // NOP
label_262150:
    // 0x262150: 0xccc0  sll         $t9, $zero, 19
    ctx->pc = 0x262150u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_262154:
    // 0x262154: 0x45c0  sll         $t0, $zero, 23
    ctx->pc = 0x262154u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_262158:
    // 0x262158: 0x0  nop
    ctx->pc = 0x262158u;
    // NOP
label_26215c:
    // 0x26215c: 0x0  nop
    ctx->pc = 0x26215cu;
    // NOP
label_262160:
    // 0x262160: 0xccc9  .word       0x0000CCC9                   # jalr        $t9, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
label_262164:
    if (ctx->pc == 0x262164u) {
        ctx->pc = 0x262164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262160u;
        // 0x262164: 0x66b0  tge         $zero, $zero, 410 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x262168u;
        goto label_262168;
    }
    ctx->pc = 0x262160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 25, 0x262168u);
        ctx->pc = 0x262164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262160u;
        // 0x262164: 0x66b0  tge         $zero, $zero, 410 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262160u, 0x262168u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x262168u;
label_262168:
    // 0x262168: 0x0  nop
    ctx->pc = 0x262168u;
    // NOP
label_26216c:
    // 0x26216c: 0x0  nop
    ctx->pc = 0x26216cu;
    // NOP
label_262170:
    // 0x262170: 0xccd6  .word       0x0000CCD6                   # dsrlv       $t9, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262170u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_262174:
    // 0x262174: 0x2420  .word       0x00002420                   # add         $a0, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262174u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_262178:
    // 0x262178: 0x0  nop
    ctx->pc = 0x262178u;
    // NOP
label_26217c:
    // 0x26217c: 0x0  nop
    ctx->pc = 0x26217cu;
    // NOP
label_262180:
    // 0x262180: 0xccdb  .word       0x0000CCDB                   # divu        $t9, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262180u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_262184:
    // 0x262184: 0x3f50  .word       0x00003F50                   # mfhi        $a3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262184u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_262188:
    // 0x262188: 0x0  nop
    ctx->pc = 0x262188u;
    // NOP
label_26218c:
    // 0x26218c: 0x0  nop
    ctx->pc = 0x26218cu;
    // NOP
label_262190:
    // 0x262190: 0xcce3  .word       0x0000CCE3                   # negu        $t9, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262190u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_262194:
    // 0x262194: 0x3600  sll         $a2, $zero, 24
    ctx->pc = 0x262194u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_262198:
    // 0x262198: 0x0  nop
    ctx->pc = 0x262198u;
    // NOP
label_26219c:
    // 0x26219c: 0x0  nop
    ctx->pc = 0x26219cu;
    // NOP
label_2621a0:
    // 0x2621a0: 0xccea  .word       0x0000CCEA                   # slt         $t9, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2621a0u;
    SET_GPR_U64(ctx, 25, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2621a4:
    // 0x2621a4: 0x58c0  sll         $t3, $zero, 3
    ctx->pc = 0x2621a4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_2621a8:
    // 0x2621a8: 0x0  nop
    ctx->pc = 0x2621a8u;
    // NOP
label_2621ac:
    // 0x2621ac: 0x0  nop
    ctx->pc = 0x2621acu;
    // NOP
label_2621b0:
    // 0x2621b0: 0xccf6  tne         $zero, $zero, 819
    ctx->pc = 0x2621b0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2621b4:
    // 0x2621b4: 0x4170  tge         $zero, $zero, 261
    ctx->pc = 0x2621b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2621b8:
    // 0x2621b8: 0x0  nop
    ctx->pc = 0x2621b8u;
    // NOP
label_2621bc:
    // 0x2621bc: 0x0  nop
    ctx->pc = 0x2621bcu;
    // NOP
label_2621c0:
    // 0x2621c0: 0xccff  dsra32      $t9, $zero, 19
    ctx->pc = 0x2621c0u;
    SET_GPR_S64(ctx, 25, GPR_S64(ctx, 0) >> (32 + 19));
label_2621c4:
    // 0x2621c4: 0x8f50  .word       0x00008F50                   # mfhi        $s1 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2621c4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_2621c8:
    // 0x2621c8: 0x0  nop
    ctx->pc = 0x2621c8u;
    // NOP
label_2621cc:
    // 0x2621cc: 0x0  nop
    ctx->pc = 0x2621ccu;
    // NOP
label_2621d0:
    // 0x2621d0: 0xcd11  .word       0x0000CD11                   # mthi        $zero # 0000CD00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2621d0u;
    ctx->hi = GPR_U64(ctx, 0);
label_2621d4:
    // 0x2621d4: 0xddf0  tge         $zero, $zero, 887
    ctx->pc = 0x2621d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2621d8:
    // 0x2621d8: 0x0  nop
    ctx->pc = 0x2621d8u;
    // NOP
label_2621dc:
    // 0x2621dc: 0x0  nop
    ctx->pc = 0x2621dcu;
    // NOP
label_2621e0:
    // 0x2621e0: 0xcd2d  .word       0x0000CD2D                   # daddu       $t9, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2621e0u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2621e4:
    // 0x2621e4: 0x15b10  .word       0x00015B10                   # mfhi        $t3 # 00010300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2621e4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_2621e8:
    // 0x2621e8: 0x0  nop
    ctx->pc = 0x2621e8u;
    // NOP
label_2621ec:
    // 0x2621ec: 0x0  nop
    ctx->pc = 0x2621ecu;
    // NOP
label_2621f0:
    // 0x2621f0: 0xcd59  .word       0x0000CD59                   # multu       $zero, $zero # 0000CD40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2621f0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
label_2621f4:
    // 0x2621f4: 0x6990  .word       0x00006990                   # mfhi        $t5 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2621f4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_2621f8:
    // 0x2621f8: 0x0  nop
    ctx->pc = 0x2621f8u;
    // NOP
label_2621fc:
    // 0x2621fc: 0x0  nop
    ctx->pc = 0x2621fcu;
    // NOP
label_262200:
    // 0x262200: 0xcd67  .word       0x0000CD67                   # not         $t9, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262200u;
    SET_GPR_U64(ctx, 25, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_262204:
    // 0x262204: 0xf790  .word       0x0000F790                   # mfhi        $fp # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262204u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_262208:
    // 0x262208: 0x0  nop
    ctx->pc = 0x262208u;
    // NOP
label_26220c:
    // 0x26220c: 0x0  nop
    ctx->pc = 0x26220cu;
    // NOP
label_262210:
    // 0x262210: 0xcd86  .word       0x0000CD86                   # srlv        $t9, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262210u;
    SET_GPR_S32(ctx, 25, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_262214:
    // 0x262214: 0x5070  tge         $zero, $zero, 321
    ctx->pc = 0x262214u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262218:
    // 0x262218: 0x0  nop
    ctx->pc = 0x262218u;
    // NOP
label_26221c:
    // 0x26221c: 0x0  nop
    ctx->pc = 0x26221cu;
    // NOP
label_262220:
    // 0x262220: 0xcd91  .word       0x0000CD91                   # mthi        $zero # 0000CD80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262220u;
    ctx->hi = GPR_U64(ctx, 0);
label_262224:
    // 0x262224: 0xa3a0  .word       0x0000A3A0                   # add         $s4, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262224u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_262228:
    // 0x262228: 0x0  nop
    ctx->pc = 0x262228u;
    // NOP
label_26222c:
    // 0x26222c: 0x0  nop
    ctx->pc = 0x26222cu;
    // NOP
label_262230:
    // 0x262230: 0xcda6  .word       0x0000CDA6                   # xor         $t9, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262230u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_262234:
    // 0x262234: 0x9f80  sll         $s3, $zero, 30
    ctx->pc = 0x262234u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_262238:
    // 0x262238: 0x0  nop
    ctx->pc = 0x262238u;
    // NOP
label_26223c:
    // 0x26223c: 0x0  nop
    ctx->pc = 0x26223cu;
    // NOP
label_262240:
    // 0x262240: 0xcdba  dsrl        $t9, $zero, 22
    ctx->pc = 0x262240u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) >> 22);
label_262244:
    // 0x262244: 0x6a30  tge         $zero, $zero, 424
    ctx->pc = 0x262244u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262248:
    // 0x262248: 0x0  nop
    ctx->pc = 0x262248u;
    // NOP
label_26224c:
    // 0x26224c: 0x0  nop
    ctx->pc = 0x26224cu;
    // NOP
label_262250:
    // 0x262250: 0xcdc8  .word       0x0000CDC8                   # jr          $zero # 0000CDC0 <InstrIdType: CPU_SPECIAL>
label_262254:
    if (ctx->pc == 0x262254u) {
        ctx->pc = 0x262254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262250u;
        // 0x262254: 0x3fe0  .word       0x00003FE0                   # add         $a3, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x262258u;
        goto label_262258;
    }
    ctx->pc = 0x262250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x262254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262250u;
        // 0x262254: 0x3fe0  .word       0x00003FE0                   # add         $a3, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262250u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x262258u;
label_262258:
    // 0x262258: 0x0  nop
    ctx->pc = 0x262258u;
    // NOP
label_26225c:
    // 0x26225c: 0x0  nop
    ctx->pc = 0x26225cu;
    // NOP
label_262260:
    // 0x262260: 0xcdd0  .word       0x0000CDD0                   # mfhi        $t9 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262260u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_262264:
    // 0x262264: 0xd440  sll         $k0, $zero, 17
    ctx->pc = 0x262264u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_262268:
    // 0x262268: 0x0  nop
    ctx->pc = 0x262268u;
    // NOP
label_26226c:
    // 0x26226c: 0x0  nop
    ctx->pc = 0x26226cu;
    // NOP
label_262270:
    // 0x262270: 0xcdeb  .word       0x0000CDEB                   # sltu        $t9, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262270u;
    SET_GPR_U64(ctx, 25, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_262274:
    // 0x262274: 0x8900  sll         $s1, $zero, 4
    ctx->pc = 0x262274u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_262278:
    // 0x262278: 0x0  nop
    ctx->pc = 0x262278u;
    // NOP
label_26227c:
    // 0x26227c: 0x0  nop
    ctx->pc = 0x26227cu;
    // NOP
label_262280:
    // 0x262280: 0xcdfd  .word       0x0000CDFD                   # INVALID     $zero, $zero, -0x3203 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262280u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x262280 raw=0x0000CDFD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262284:
    // 0x262284: 0xb3c0  sll         $s6, $zero, 15
    ctx->pc = 0x262284u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_262288:
    // 0x262288: 0x0  nop
    ctx->pc = 0x262288u;
    // NOP
label_26228c:
    // 0x26228c: 0x0  nop
    ctx->pc = 0x26228cu;
    // NOP
label_262290:
    // 0x262290: 0xce14  .word       0x0000CE14                   # dsllv       $t9, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262290u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_262294:
    // 0x262294: 0x107b0  tge         $zero, $at, 30
    ctx->pc = 0x262294u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_262298:
    // 0x262298: 0x0  nop
    ctx->pc = 0x262298u;
    // NOP
label_26229c:
    // 0x26229c: 0x0  nop
    ctx->pc = 0x26229cu;
    // NOP
label_2622a0:
    // 0x2622a0: 0xce35  .word       0x0000CE35                   # INVALID     $zero, $zero, -0x31CB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2622a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2622A0 raw=0x0000CE35"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2622a4:
    // 0x2622a4: 0x100c0  sll         $zero, $at, 3
    ctx->pc = 0x2622a4u;
    
label_2622a8:
    // 0x2622a8: 0x0  nop
    ctx->pc = 0x2622a8u;
    // NOP
label_2622ac:
    // 0x2622ac: 0x0  nop
    ctx->pc = 0x2622acu;
    // NOP
label_2622b0:
    // 0x2622b0: 0xce56  .word       0x0000CE56                   # dsrlv       $t9, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2622b0u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2622b4:
    // 0x2622b4: 0x8d50  .word       0x00008D50                   # mfhi        $s1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2622b4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_2622b8:
    // 0x2622b8: 0x0  nop
    ctx->pc = 0x2622b8u;
    // NOP
label_2622bc:
    // 0x2622bc: 0x0  nop
    ctx->pc = 0x2622bcu;
    // NOP
label_2622c0:
    // 0x2622c0: 0xce68  .word       0x0000CE68                   # mfsa        $t9 # 00000640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2622c0u;
    SET_GPR_U32(ctx, 25, ctx->sa);
label_2622c4:
    // 0x2622c4: 0x8840  sll         $s1, $zero, 1
    ctx->pc = 0x2622c4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_2622c8:
    // 0x2622c8: 0x0  nop
    ctx->pc = 0x2622c8u;
    // NOP
label_2622cc:
    // 0x2622cc: 0x0  nop
    ctx->pc = 0x2622ccu;
    // NOP
label_2622d0:
    // 0x2622d0: 0xce7a  dsrl        $t9, $zero, 25
    ctx->pc = 0x2622d0u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) >> 25);
label_2622d4:
    // 0x2622d4: 0x8430  tge         $zero, $zero, 528
    ctx->pc = 0x2622d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2622d8:
    // 0x2622d8: 0x0  nop
    ctx->pc = 0x2622d8u;
    // NOP
label_2622dc:
    // 0x2622dc: 0x0  nop
    ctx->pc = 0x2622dcu;
    // NOP
label_2622e0:
    // 0x2622e0: 0xce8b  .word       0x0000CE8B                   # movn        $t9, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2622e0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 0));
label_2622e4:
    // 0x2622e4: 0x9bf0  tge         $zero, $zero, 623
    ctx->pc = 0x2622e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2622e8:
    // 0x2622e8: 0x0  nop
    ctx->pc = 0x2622e8u;
    // NOP
label_2622ec:
    // 0x2622ec: 0x0  nop
    ctx->pc = 0x2622ecu;
    // NOP
label_2622f0:
    // 0x2622f0: 0xce9f  .word       0x0000CE9F                   # ddivu       $t9, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2622f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2622F0 raw=0x0000CE9F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2622f4:
    // 0x2622f4: 0xd690  .word       0x0000D690                   # mfhi        $k0 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2622f4u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_2622f8:
    // 0x2622f8: 0x0  nop
    ctx->pc = 0x2622f8u;
    // NOP
label_2622fc:
    // 0x2622fc: 0x0  nop
    ctx->pc = 0x2622fcu;
    // NOP
label_262300:
    // 0x262300: 0xceba  dsrl        $t9, $zero, 26
    ctx->pc = 0x262300u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) >> 26);
label_262304:
    // 0x262304: 0x4e90  .word       0x00004E90                   # mfhi        $t1 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262304u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_262308:
    // 0x262308: 0x0  nop
    ctx->pc = 0x262308u;
    // NOP
label_26230c:
    // 0x26230c: 0x0  nop
    ctx->pc = 0x26230cu;
    // NOP
label_262310:
    // 0x262310: 0xcec4  .word       0x0000CEC4                   # sllv        $t9, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262310u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_262314:
    // 0x262314: 0x47b0  tge         $zero, $zero, 286
    ctx->pc = 0x262314u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262318:
    // 0x262318: 0x0  nop
    ctx->pc = 0x262318u;
    // NOP
label_26231c:
    // 0x26231c: 0x0  nop
    ctx->pc = 0x26231cu;
    // NOP
label_262320:
    // 0x262320: 0xcecd  break       0, 827
    ctx->pc = 0x262320u;
    runtime->handleBreak(rdram, ctx);
label_262324:
    // 0x262324: 0x5980  sll         $t3, $zero, 6
    ctx->pc = 0x262324u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_262328:
    // 0x262328: 0x0  nop
    ctx->pc = 0x262328u;
    // NOP
label_26232c:
    // 0x26232c: 0x0  nop
    ctx->pc = 0x26232cu;
    // NOP
label_262330:
    // 0x262330: 0xced9  .word       0x0000CED9                   # multu       $zero, $zero # 0000CEC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262330u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
label_262334:
    // 0x262334: 0x5020  add         $t2, $zero, $zero
    ctx->pc = 0x262334u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_262338:
    // 0x262338: 0x0  nop
    ctx->pc = 0x262338u;
    // NOP
label_26233c:
    // 0x26233c: 0x0  nop
    ctx->pc = 0x26233cu;
    // NOP
label_262340:
    // 0x262340: 0xcee4  .word       0x0000CEE4                   # and         $t9, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262340u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_262344:
    // 0x262344: 0xe100  sll         $gp, $zero, 4
    ctx->pc = 0x262344u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_262348:
    // 0x262348: 0x0  nop
    ctx->pc = 0x262348u;
    // NOP
label_26234c:
    // 0x26234c: 0x0  nop
    ctx->pc = 0x26234cu;
    // NOP
label_262350:
    // 0x262350: 0xcf01  .word       0x0000CF01                   # INVALID     $zero, $zero, -0x30FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262350u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x262350 raw=0x0000CF01"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262354:
    // 0x262354: 0x101b0  tge         $zero, $at, 6
    ctx->pc = 0x262354u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_262358:
    // 0x262358: 0x0  nop
    ctx->pc = 0x262358u;
    // NOP
label_26235c:
    // 0x26235c: 0x0  nop
    ctx->pc = 0x26235cu;
    // NOP
label_262360:
    // 0x262360: 0xcf22  .word       0x0000CF22                   # neg         $t9, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262360u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 25, (int32_t)tmp); }
label_262364:
    // 0x262364: 0xbf80  sll         $s7, $zero, 30
    ctx->pc = 0x262364u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_262368:
    // 0x262368: 0x0  nop
    ctx->pc = 0x262368u;
    // NOP
label_26236c:
    // 0x26236c: 0x0  nop
    ctx->pc = 0x26236cu;
    // NOP
label_262370:
    // 0x262370: 0xcf3a  dsrl        $t9, $zero, 28
    ctx->pc = 0x262370u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) >> 28);
label_262374:
    // 0x262374: 0x102d0  .word       0x000102D0                   # mfhi        $zero # 000102C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262374u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_262378:
    // 0x262378: 0x0  nop
    ctx->pc = 0x262378u;
    // NOP
label_26237c:
    // 0x26237c: 0x0  nop
    ctx->pc = 0x26237cu;
    // NOP
label_262380:
    // 0x262380: 0xcf5b  .word       0x0000CF5B                   # divu        $t9, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262380u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_262384:
    // 0x262384: 0x9680  sll         $s2, $zero, 26
    ctx->pc = 0x262384u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_262388:
    // 0x262388: 0x0  nop
    ctx->pc = 0x262388u;
    // NOP
label_26238c:
    // 0x26238c: 0x0  nop
    ctx->pc = 0x26238cu;
    // NOP
label_262390:
    // 0x262390: 0xcf6e  .word       0x0000CF6E                   # dsub        $t9, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262390u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 25, r); }
label_262394:
    // 0x262394: 0x2170  tge         $zero, $zero, 133
    ctx->pc = 0x262394u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262398:
    // 0x262398: 0x0  nop
    ctx->pc = 0x262398u;
    // NOP
label_26239c:
    // 0x26239c: 0x0  nop
    ctx->pc = 0x26239cu;
    // NOP
label_2623a0:
    // 0x2623a0: 0xcf73  tltu        $zero, $zero, 829
    ctx->pc = 0x2623a0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2623a4:
    // 0x2623a4: 0x6ac0  sll         $t5, $zero, 11
    ctx->pc = 0x2623a4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_2623a8:
    // 0x2623a8: 0x0  nop
    ctx->pc = 0x2623a8u;
    // NOP
label_2623ac:
    // 0x2623ac: 0x0  nop
    ctx->pc = 0x2623acu;
    // NOP
label_2623b0:
    // 0x2623b0: 0xcf81  .word       0x0000CF81                   # INVALID     $zero, $zero, -0x307F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2623b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2623B0 raw=0x0000CF81"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2623b4:
    // 0x2623b4: 0xc990  .word       0x0000C990                   # mfhi        $t9 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2623b4u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_2623b8:
    // 0x2623b8: 0x0  nop
    ctx->pc = 0x2623b8u;
    // NOP
label_2623bc:
    // 0x2623bc: 0x0  nop
    ctx->pc = 0x2623bcu;
    // NOP
label_2623c0:
    // 0x2623c0: 0xcf9b  .word       0x0000CF9B                   # divu        $t9, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2623c0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2623c4:
    // 0x2623c4: 0x83b0  tge         $zero, $zero, 526
    ctx->pc = 0x2623c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2623c8:
    // 0x2623c8: 0x0  nop
    ctx->pc = 0x2623c8u;
    // NOP
label_2623cc:
    // 0x2623cc: 0x0  nop
    ctx->pc = 0x2623ccu;
    // NOP
label_2623d0:
    // 0x2623d0: 0xcfac  .word       0x0000CFAC                   # dadd        $t9, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2623d0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 25, r); }
label_2623d4:
    // 0x2623d4: 0x6c60  .word       0x00006C60                   # add         $t5, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2623d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_2623d8:
    // 0x2623d8: 0x0  nop
    ctx->pc = 0x2623d8u;
    // NOP
label_2623dc:
    // 0x2623dc: 0x0  nop
    ctx->pc = 0x2623dcu;
    // NOP
label_2623e0:
    // 0x2623e0: 0xcfba  dsrl        $t9, $zero, 30
    ctx->pc = 0x2623e0u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) >> 30);
label_2623e4:
    // 0x2623e4: 0x14350  .word       0x00014350                   # mfhi        $t0 # 00010340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2623e4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_2623e8:
    // 0x2623e8: 0x0  nop
    ctx->pc = 0x2623e8u;
    // NOP
label_2623ec:
    // 0x2623ec: 0x0  nop
    ctx->pc = 0x2623ecu;
    // NOP
label_2623f0:
    // 0x2623f0: 0xcfe3  .word       0x0000CFE3                   # negu        $t9, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2623f0u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2623f4:
    // 0x2623f4: 0xd6f0  tge         $zero, $zero, 859
    ctx->pc = 0x2623f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2623f8:
    // 0x2623f8: 0x0  nop
    ctx->pc = 0x2623f8u;
    // NOP
label_2623fc:
    // 0x2623fc: 0x0  nop
    ctx->pc = 0x2623fcu;
    // NOP
label_262400:
    // 0x262400: 0xcffe  dsrl32      $t9, $zero, 31
    ctx->pc = 0x262400u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) >> (32 + 31));
label_262404:
    // 0x262404: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x262404u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_262408:
    // 0x262408: 0x0  nop
    ctx->pc = 0x262408u;
    // NOP
label_26240c:
    // 0x26240c: 0x0  nop
    ctx->pc = 0x26240cu;
    // NOP
label_262410:
    // 0x262410: 0xd00b  movn        $k0, $zero, $zero
    ctx->pc = 0x262410u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 26, GPR_VEC(ctx, 0));
label_262414:
    // 0x262414: 0x2a30  tge         $zero, $zero, 168
    ctx->pc = 0x262414u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262418:
    // 0x262418: 0x0  nop
    ctx->pc = 0x262418u;
    // NOP
label_26241c:
    // 0x26241c: 0x0  nop
    ctx->pc = 0x26241cu;
    // NOP
label_262420:
    // 0x262420: 0xd011  .word       0x0000D011                   # mthi        $zero # 0000D000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262420u;
    ctx->hi = GPR_U64(ctx, 0);
label_262424:
    // 0x262424: 0x9b80  sll         $s3, $zero, 14
    ctx->pc = 0x262424u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_262428:
    // 0x262428: 0x0  nop
    ctx->pc = 0x262428u;
    // NOP
label_26242c:
    // 0x26242c: 0x0  nop
    ctx->pc = 0x26242cu;
    // NOP
label_262430:
    // 0x262430: 0xd025  move        $k0, $zero
    ctx->pc = 0x262430u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_262434:
    // 0x262434: 0x8f40  sll         $s1, $zero, 29
    ctx->pc = 0x262434u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_262438:
    // 0x262438: 0x0  nop
    ctx->pc = 0x262438u;
    // NOP
label_26243c:
    // 0x26243c: 0x0  nop
    ctx->pc = 0x26243cu;
    // NOP
label_262440:
    // 0x262440: 0xd037  .word       0x0000D037                   # INVALID     $zero, $zero, -0x2FC9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262440u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x262440 raw=0x0000D037"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262444:
    // 0x262444: 0xe740  sll         $gp, $zero, 29
    ctx->pc = 0x262444u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_262448:
    // 0x262448: 0x0  nop
    ctx->pc = 0x262448u;
    // NOP
label_26244c:
    // 0x26244c: 0x0  nop
    ctx->pc = 0x26244cu;
    // NOP
label_262450:
    // 0x262450: 0xd054  .word       0x0000D054                   # dsllv       $k0, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262450u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_262454:
    // 0x262454: 0xd3b0  tge         $zero, $zero, 846
    ctx->pc = 0x262454u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262458:
    // 0x262458: 0x0  nop
    ctx->pc = 0x262458u;
    // NOP
label_26245c:
    // 0x26245c: 0x0  nop
    ctx->pc = 0x26245cu;
    // NOP
label_262460:
    // 0x262460: 0xd06f  .word       0x0000D06F                   # dsubu       $k0, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262460u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_262464:
    // 0x262464: 0x12400  sll         $a0, $at, 16
    ctx->pc = 0x262464u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 16));
label_262468:
    // 0x262468: 0x0  nop
    ctx->pc = 0x262468u;
    // NOP
label_26246c:
    // 0x26246c: 0x0  nop
    ctx->pc = 0x26246cu;
    // NOP
label_262470:
    // 0x262470: 0xd094  .word       0x0000D094                   # dsllv       $k0, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262470u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_262474:
    // 0x262474: 0x11970  tge         $zero, $at, 101
    ctx->pc = 0x262474u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_262478:
    // 0x262478: 0x0  nop
    ctx->pc = 0x262478u;
    // NOP
label_26247c:
    // 0x26247c: 0x0  nop
    ctx->pc = 0x26247cu;
    // NOP
label_262480:
    // 0x262480: 0xd0b8  dsll        $k0, $zero, 2
    ctx->pc = 0x262480u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) << 2);
label_262484:
    // 0x262484: 0x64a0  .word       0x000064A0                   # add         $t4, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262484u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_262488:
    // 0x262488: 0x0  nop
    ctx->pc = 0x262488u;
    // NOP
label_26248c:
    // 0x26248c: 0x0  nop
    ctx->pc = 0x26248cu;
    // NOP
label_262490:
    // 0x262490: 0xd0c5  .word       0x0000D0C5                   # INVALID     $zero, $zero, -0x2F3B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262490u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x262490 raw=0x0000D0C5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262494:
    // 0x262494: 0xdb70  tge         $zero, $zero, 877
    ctx->pc = 0x262494u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262498:
    // 0x262498: 0x0  nop
    ctx->pc = 0x262498u;
    // NOP
label_26249c:
    // 0x26249c: 0x0  nop
    ctx->pc = 0x26249cu;
    // NOP
label_2624a0:
    // 0x2624a0: 0xd0e1  .word       0x0000D0E1                   # addu        $k0, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2624a0u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2624a4:
    // 0x2624a4: 0x2950  .word       0x00002950                   # mfhi        $a1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2624a4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_2624a8:
    // 0x2624a8: 0x0  nop
    ctx->pc = 0x2624a8u;
    // NOP
label_2624ac:
    // 0x2624ac: 0x0  nop
    ctx->pc = 0x2624acu;
    // NOP
label_2624b0:
    // 0x2624b0: 0xd0e7  .word       0x0000D0E7                   # not         $k0, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2624b0u;
    SET_GPR_U64(ctx, 26, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2624b4:
    // 0x2624b4: 0x10e0  .word       0x000010E0                   # add         $v0, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2624b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_2624b8:
    // 0x2624b8: 0x0  nop
    ctx->pc = 0x2624b8u;
    // NOP
label_2624bc:
    // 0x2624bc: 0x0  nop
    ctx->pc = 0x2624bcu;
    // NOP
label_2624c0:
    // 0x2624c0: 0xd0ea  .word       0x0000D0EA                   # slt         $k0, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2624c0u;
    SET_GPR_U64(ctx, 26, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2624c4:
    // 0x2624c4: 0x5ea0  .word       0x00005EA0                   # add         $t3, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2624c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2624c8:
    // 0x2624c8: 0x0  nop
    ctx->pc = 0x2624c8u;
    // NOP
label_2624cc:
    // 0x2624cc: 0x0  nop
    ctx->pc = 0x2624ccu;
    // NOP
label_2624d0:
    // 0x2624d0: 0xd0f6  tne         $zero, $zero, 835
    ctx->pc = 0x2624d0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2624d4:
    // 0x2624d4: 0xe250  .word       0x0000E250                   # mfhi        $gp # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2624d4u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_2624d8:
    // 0x2624d8: 0x0  nop
    ctx->pc = 0x2624d8u;
    // NOP
label_2624dc:
    // 0x2624dc: 0x0  nop
    ctx->pc = 0x2624dcu;
    // NOP
label_2624e0:
    // 0x2624e0: 0xd113  .word       0x0000D113                   # mtlo        $zero # 0000D100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2624e0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2624e4:
    // 0x2624e4: 0x14610  .word       0x00014610                   # mfhi        $t0 # 00010600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2624e4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_2624e8:
    // 0x2624e8: 0x0  nop
    ctx->pc = 0x2624e8u;
    // NOP
label_2624ec:
    // 0x2624ec: 0x0  nop
    ctx->pc = 0x2624ecu;
    // NOP
label_2624f0:
    // 0x2624f0: 0xd13c  dsll32      $k0, $zero, 4
    ctx->pc = 0x2624f0u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) << (32 + 4));
label_2624f4:
    // 0x2624f4: 0xc4d0  .word       0x0000C4D0                   # mfhi        $t8 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2624f4u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_2624f8:
    // 0x2624f8: 0x0  nop
    ctx->pc = 0x2624f8u;
    // NOP
label_2624fc:
    // 0x2624fc: 0x0  nop
    ctx->pc = 0x2624fcu;
    // NOP
label_262500:
    // 0x262500: 0xd155  .word       0x0000D155                   # INVALID     $zero, $zero, -0x2EAB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262500u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x262500 raw=0x0000D155"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262504:
    // 0x262504: 0xe120  .word       0x0000E120                   # add         $gp, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262504u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_262508:
    // 0x262508: 0x0  nop
    ctx->pc = 0x262508u;
    // NOP
label_26250c:
    // 0x26250c: 0x0  nop
    ctx->pc = 0x26250cu;
    // NOP
label_262510:
    // 0x262510: 0xd172  tlt         $zero, $zero, 837
    ctx->pc = 0x262510u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262514:
    // 0x262514: 0x14130  tge         $zero, $at, 260
    ctx->pc = 0x262514u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_262518:
    // 0x262518: 0x0  nop
    ctx->pc = 0x262518u;
    // NOP
label_26251c:
    // 0x26251c: 0x0  nop
    ctx->pc = 0x26251cu;
    // NOP
label_262520:
    // 0x262520: 0xd19b  .word       0x0000D19B                   # divu        $k0, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262520u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_262524:
    // 0x262524: 0xcdb0  tge         $zero, $zero, 822
    ctx->pc = 0x262524u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262528:
    // 0x262528: 0x0  nop
    ctx->pc = 0x262528u;
    // NOP
label_26252c:
    // 0x26252c: 0x0  nop
    ctx->pc = 0x26252cu;
    // NOP
label_262530:
    // 0x262530: 0xd1b5  .word       0x0000D1B5                   # INVALID     $zero, $zero, -0x2E4B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262530u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x262530 raw=0x0000D1B5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262534:
    // 0x262534: 0x10f70  tge         $zero, $at, 61
    ctx->pc = 0x262534u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_262538:
    // 0x262538: 0x0  nop
    ctx->pc = 0x262538u;
    // NOP
label_26253c:
    // 0x26253c: 0x0  nop
    ctx->pc = 0x26253cu;
    // NOP
label_262540:
    // 0x262540: 0xd1d7  .word       0x0000D1D7                   # dsrav       $k0, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262540u;
    SET_GPR_S64(ctx, 26, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_262544:
    // 0x262544: 0x32e0  .word       0x000032E0                   # add         $a2, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262544u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_262548:
    // 0x262548: 0x0  nop
    ctx->pc = 0x262548u;
    // NOP
label_26254c:
    // 0x26254c: 0x0  nop
    ctx->pc = 0x26254cu;
    // NOP
label_262550:
    // 0x262550: 0xd1de  .word       0x0000D1DE                   # ddiv        $k0, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262550u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x262550 raw=0x0000D1DE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262554:
    // 0x262554: 0x7770  tge         $zero, $zero, 477
    ctx->pc = 0x262554u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262558:
    // 0x262558: 0x0  nop
    ctx->pc = 0x262558u;
    // NOP
label_26255c:
    // 0x26255c: 0x0  nop
    ctx->pc = 0x26255cu;
    // NOP
label_262560:
    // 0x262560: 0xd1ed  .word       0x0000D1ED                   # daddu       $k0, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262560u;
    SET_GPR_U64(ctx, 26, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_262564:
    // 0x262564: 0x2890  .word       0x00002890                   # mfhi        $a1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262564u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_262568:
    // 0x262568: 0x0  nop
    ctx->pc = 0x262568u;
    // NOP
label_26256c:
    // 0x26256c: 0x0  nop
    ctx->pc = 0x26256cu;
    // NOP
label_262570:
    // 0x262570: 0xd1f3  tltu        $zero, $zero, 839
    ctx->pc = 0x262570u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262574:
    // 0x262574: 0x30a0  .word       0x000030A0                   # add         $a2, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262574u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_262578:
    // 0x262578: 0x0  nop
    ctx->pc = 0x262578u;
    // NOP
label_26257c:
    // 0x26257c: 0x0  nop
    ctx->pc = 0x26257cu;
    // NOP
label_262580:
    // 0x262580: 0xd1fa  dsrl        $k0, $zero, 7
    ctx->pc = 0x262580u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) >> 7);
label_262584:
    // 0x262584: 0x45d0  .word       0x000045D0                   # mfhi        $t0 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262584u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_262588:
    // 0x262588: 0x0  nop
    ctx->pc = 0x262588u;
    // NOP
label_26258c:
    // 0x26258c: 0x0  nop
    ctx->pc = 0x26258cu;
    // NOP
label_262590:
    // 0x262590: 0xd203  sra         $k0, $zero, 8
    ctx->pc = 0x262590u;
    SET_GPR_S32(ctx, 26, SRA32(GPR_S32(ctx, 0), 8));
label_262594:
    // 0x262594: 0x58c0  sll         $t3, $zero, 3
    ctx->pc = 0x262594u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_262598:
    // 0x262598: 0x0  nop
    ctx->pc = 0x262598u;
    // NOP
label_26259c:
    // 0x26259c: 0x0  nop
    ctx->pc = 0x26259cu;
    // NOP
label_2625a0:
    // 0x2625a0: 0xd20f  .word       0x0000D20F                   # sync # 0000D000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2625a0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2625a4:
    // 0x2625a4: 0xbf00  sll         $s7, $zero, 28
    ctx->pc = 0x2625a4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_2625a8:
    // 0x2625a8: 0x0  nop
    ctx->pc = 0x2625a8u;
    // NOP
label_2625ac:
    // 0x2625ac: 0x0  nop
    ctx->pc = 0x2625acu;
    // NOP
label_2625b0:
    // 0x2625b0: 0xd227  .word       0x0000D227                   # not         $k0, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2625b0u;
    SET_GPR_U64(ctx, 26, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2625b4:
    // 0x2625b4: 0x7eb0  tge         $zero, $zero, 506
    ctx->pc = 0x2625b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2625b8:
    // 0x2625b8: 0x0  nop
    ctx->pc = 0x2625b8u;
    // NOP
label_2625bc:
    // 0x2625bc: 0x0  nop
    ctx->pc = 0x2625bcu;
    // NOP
label_2625c0:
    // 0x2625c0: 0xd237  .word       0x0000D237                   # INVALID     $zero, $zero, -0x2DC9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2625c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2625C0 raw=0x0000D237"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2625c4:
    // 0x2625c4: 0x4fe0  .word       0x00004FE0                   # add         $t1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2625c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_2625c8:
    // 0x2625c8: 0x0  nop
    ctx->pc = 0x2625c8u;
    // NOP
label_2625cc:
    // 0x2625cc: 0x0  nop
    ctx->pc = 0x2625ccu;
    // NOP
label_2625d0:
    // 0x2625d0: 0xd241  .word       0x0000D241                   # INVALID     $zero, $zero, -0x2DBF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2625d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2625D0 raw=0x0000D241"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2625d4:
    // 0x2625d4: 0xfd50  .word       0x0000FD50                   # mfhi        $ra # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2625d4u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_2625d8:
    // 0x2625d8: 0x0  nop
    ctx->pc = 0x2625d8u;
    // NOP
label_2625dc:
    // 0x2625dc: 0x0  nop
    ctx->pc = 0x2625dcu;
    // NOP
label_2625e0:
    // 0x2625e0: 0xd261  .word       0x0000D261                   # addu        $k0, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2625e0u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2625e4:
    // 0x2625e4: 0x1460  .word       0x00001460                   # add         $v0, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2625e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_2625e8:
    // 0x2625e8: 0x0  nop
    ctx->pc = 0x2625e8u;
    // NOP
label_2625ec:
    // 0x2625ec: 0x0  nop
    ctx->pc = 0x2625ecu;
    // NOP
label_2625f0:
    // 0x2625f0: 0xd264  .word       0x0000D264                   # and         $k0, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2625f0u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2625f4:
    // 0x2625f4: 0xd1f0  tge         $zero, $zero, 839
    ctx->pc = 0x2625f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2625f8:
    // 0x2625f8: 0x0  nop
    ctx->pc = 0x2625f8u;
    // NOP
label_2625fc:
    // 0x2625fc: 0x0  nop
    ctx->pc = 0x2625fcu;
    // NOP
label_262600:
    // 0x262600: 0xd27f  dsra32      $k0, $zero, 9
    ctx->pc = 0x262600u;
    SET_GPR_S64(ctx, 26, GPR_S64(ctx, 0) >> (32 + 9));
label_262604:
    // 0x262604: 0x7cd0  .word       0x00007CD0                   # mfhi        $t7 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262604u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_262608:
    // 0x262608: 0x0  nop
    ctx->pc = 0x262608u;
    // NOP
label_26260c:
    // 0x26260c: 0x0  nop
    ctx->pc = 0x26260cu;
    // NOP
label_262610:
    // 0x262610: 0xd28f  .word       0x0000D28F                   # sync # 0000D000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262610u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_262614:
    // 0x262614: 0x11410  .word       0x00011410                   # mfhi        $v0 # 00010400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262614u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_262618:
    // 0x262618: 0x0  nop
    ctx->pc = 0x262618u;
    // NOP
label_26261c:
    // 0x26261c: 0x0  nop
    ctx->pc = 0x26261cu;
    // NOP
label_262620:
    // 0x262620: 0xd2b2  tlt         $zero, $zero, 842
    ctx->pc = 0x262620u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262624:
    // 0x262624: 0xe8d0  .word       0x0000E8D0                   # mfhi        $sp # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262624u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_262628:
    // 0x262628: 0x0  nop
    ctx->pc = 0x262628u;
    // NOP
label_26262c:
    // 0x26262c: 0x0  nop
    ctx->pc = 0x26262cu;
    // NOP
label_262630:
    // 0x262630: 0xd2d0  .word       0x0000D2D0                   # mfhi        $k0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262630u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_262634:
    // 0x262634: 0x5d90  .word       0x00005D90                   # mfhi        $t3 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262634u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_262638:
    // 0x262638: 0x0  nop
    ctx->pc = 0x262638u;
    // NOP
label_26263c:
    // 0x26263c: 0x0  nop
    ctx->pc = 0x26263cu;
    // NOP
label_262640:
    // 0x262640: 0xd2dc  .word       0x0000D2DC                   # dmult       $zero, $zero # 0000D2C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262640u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x262640 raw=0x0000D2DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262644:
    // 0x262644: 0x4e70  tge         $zero, $zero, 313
    ctx->pc = 0x262644u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262648:
    // 0x262648: 0x0  nop
    ctx->pc = 0x262648u;
    // NOP
label_26264c:
    // 0x26264c: 0x0  nop
    ctx->pc = 0x26264cu;
    // NOP
label_262650:
    // 0x262650: 0xd2e6  .word       0x0000D2E6                   # xor         $k0, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262650u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_262654:
    // 0x262654: 0x13100  sll         $a2, $at, 4
    ctx->pc = 0x262654u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 4));
label_262658:
    // 0x262658: 0x0  nop
    ctx->pc = 0x262658u;
    // NOP
label_26265c:
    // 0x26265c: 0x0  nop
    ctx->pc = 0x26265cu;
    // NOP
label_262660:
    // 0x262660: 0xd30d  break       0, 844
    ctx->pc = 0x262660u;
    runtime->handleBreak(rdram, ctx);
label_262664:
    // 0x262664: 0x11280  sll         $v0, $at, 10
    ctx->pc = 0x262664u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 1), 10));
label_262668:
    // 0x262668: 0x0  nop
    ctx->pc = 0x262668u;
    // NOP
label_26266c:
    // 0x26266c: 0x0  nop
    ctx->pc = 0x26266cu;
    // NOP
label_262670:
    // 0x262670: 0xd330  tge         $zero, $zero, 844
    ctx->pc = 0x262670u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262674:
    // 0x262674: 0x2720  .word       0x00002720                   # add         $a0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262674u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_262678:
    // 0x262678: 0x0  nop
    ctx->pc = 0x262678u;
    // NOP
label_26267c:
    // 0x26267c: 0x0  nop
    ctx->pc = 0x26267cu;
    // NOP
label_262680:
    // 0x262680: 0xd335  .word       0x0000D335                   # INVALID     $zero, $zero, -0x2CCB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262680u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x262680 raw=0x0000D335"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262684:
    // 0x262684: 0x2c80  sll         $a1, $zero, 18
    ctx->pc = 0x262684u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_262688:
    // 0x262688: 0x0  nop
    ctx->pc = 0x262688u;
    // NOP
label_26268c:
    // 0x26268c: 0x0  nop
    ctx->pc = 0x26268cu;
    // NOP
label_262690:
    // 0x262690: 0xd33b  dsra        $k0, $zero, 12
    ctx->pc = 0x262690u;
    SET_GPR_S64(ctx, 26, GPR_S64(ctx, 0) >> 12);
label_262694:
    // 0x262694: 0x10b30  tge         $zero, $at, 44
    ctx->pc = 0x262694u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_262698:
    // 0x262698: 0x0  nop
    ctx->pc = 0x262698u;
    // NOP
label_26269c:
    // 0x26269c: 0x0  nop
    ctx->pc = 0x26269cu;
    // NOP
label_2626a0:
    // 0x2626a0: 0xd35d  .word       0x0000D35D                   # dmultu      $zero, $zero # 0000D340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2626a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2626A0 raw=0x0000D35D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2626a4:
    // 0x2626a4: 0xaa30  tge         $zero, $zero, 680
    ctx->pc = 0x2626a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2626a8:
    // 0x2626a8: 0x0  nop
    ctx->pc = 0x2626a8u;
    // NOP
label_2626ac:
    // 0x2626ac: 0x0  nop
    ctx->pc = 0x2626acu;
    // NOP
label_2626b0:
    // 0x2626b0: 0xd373  tltu        $zero, $zero, 845
    ctx->pc = 0x2626b0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2626b4:
    // 0x2626b4: 0xcc60  .word       0x0000CC60                   # add         $t9, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2626b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_2626b8:
    // 0x2626b8: 0x0  nop
    ctx->pc = 0x2626b8u;
    // NOP
label_2626bc:
    // 0x2626bc: 0x0  nop
    ctx->pc = 0x2626bcu;
    // NOP
label_2626c0:
    // 0x2626c0: 0xd38d  break       0, 846
    ctx->pc = 0x2626c0u;
    runtime->handleBreak(rdram, ctx);
label_2626c4:
    // 0x2626c4: 0x8c90  .word       0x00008C90                   # mfhi        $s1 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2626c4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_2626c8:
    // 0x2626c8: 0x0  nop
    ctx->pc = 0x2626c8u;
    // NOP
label_2626cc:
    // 0x2626cc: 0x0  nop
    ctx->pc = 0x2626ccu;
    // NOP
label_2626d0:
    // 0x2626d0: 0xd39f  .word       0x0000D39F                   # ddivu       $k0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2626d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2626D0 raw=0x0000D39F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2626d4:
    // 0x2626d4: 0x1a10  .word       0x00001A10                   # mfhi        $v1 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2626d4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2626d8:
    // 0x2626d8: 0x0  nop
    ctx->pc = 0x2626d8u;
    // NOP
label_2626dc:
    // 0x2626dc: 0x0  nop
    ctx->pc = 0x2626dcu;
    // NOP
label_2626e0:
    // 0x2626e0: 0xd3a3  .word       0x0000D3A3                   # negu        $k0, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2626e0u;
    SET_GPR_S32(ctx, 26, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2626e4:
    // 0x2626e4: 0x4b80  sll         $t1, $zero, 14
    ctx->pc = 0x2626e4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_2626e8:
    // 0x2626e8: 0x0  nop
    ctx->pc = 0x2626e8u;
    // NOP
label_2626ec:
    // 0x2626ec: 0x0  nop
    ctx->pc = 0x2626ecu;
    // NOP
label_2626f0:
    // 0x2626f0: 0xd3ad  .word       0x0000D3AD                   # daddu       $k0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2626f0u;
    SET_GPR_U64(ctx, 26, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2626f4:
    // 0x2626f4: 0x8390  .word       0x00008390                   # mfhi        $s0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2626f4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_2626f8:
    // 0x2626f8: 0x0  nop
    ctx->pc = 0x2626f8u;
    // NOP
label_2626fc:
    // 0x2626fc: 0x0  nop
    ctx->pc = 0x2626fcu;
    // NOP
label_262700:
    // 0x262700: 0xd3be  dsrl32      $k0, $zero, 14
    ctx->pc = 0x262700u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) >> (32 + 14));
label_262704:
    // 0x262704: 0x8570  tge         $zero, $zero, 533
    ctx->pc = 0x262704u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262708:
    // 0x262708: 0x0  nop
    ctx->pc = 0x262708u;
    // NOP
label_26270c:
    // 0x26270c: 0x0  nop
    ctx->pc = 0x26270cu;
    // NOP
label_262710:
    // 0x262710: 0xd3cf  .word       0x0000D3CF                   # sync # 0000D000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262710u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_262714:
    // 0x262714: 0x85b0  tge         $zero, $zero, 534
    ctx->pc = 0x262714u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262718:
    // 0x262718: 0x0  nop
    ctx->pc = 0x262718u;
    // NOP
label_26271c:
    // 0x26271c: 0x0  nop
    ctx->pc = 0x26271cu;
    // NOP
label_262720:
    // 0x262720: 0xd3e0  .word       0x0000D3E0                   # add         $k0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262720u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_262724:
    // 0x262724: 0x38f0  tge         $zero, $zero, 227
    ctx->pc = 0x262724u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262728:
    // 0x262728: 0x0  nop
    ctx->pc = 0x262728u;
    // NOP
label_26272c:
    // 0x26272c: 0x0  nop
    ctx->pc = 0x26272cu;
    // NOP
label_262730:
    // 0x262730: 0xd3e8  .word       0x0000D3E8                   # mfsa        $k0 # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x262730u;
    SET_GPR_U32(ctx, 26, ctx->sa);
label_262734:
    // 0x262734: 0x7020  add         $t6, $zero, $zero
    ctx->pc = 0x262734u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_262738:
    // 0x262738: 0x0  nop
    ctx->pc = 0x262738u;
    // NOP
label_26273c:
    // 0x26273c: 0x0  nop
    ctx->pc = 0x26273cu;
    // NOP
label_262740:
    // 0x262740: 0xd3f7  .word       0x0000D3F7                   # INVALID     $zero, $zero, -0x2C09 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262740u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x262740 raw=0x0000D3F7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262744:
    // 0x262744: 0xd0a0  .word       0x0000D0A0                   # add         $k0, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262744u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_262748:
    // 0x262748: 0x0  nop
    ctx->pc = 0x262748u;
    // NOP
label_26274c:
    // 0x26274c: 0x0  nop
    ctx->pc = 0x26274cu;
    // NOP
label_262750:
    // 0x262750: 0xd412  .word       0x0000D412                   # mflo        $k0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262750u;
    SET_GPR_U64(ctx, 26, ctx->lo);
label_262754:
    // 0x262754: 0x3be0  .word       0x00003BE0                   # add         $a3, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262754u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_262758:
    // 0x262758: 0x0  nop
    ctx->pc = 0x262758u;
    // NOP
label_26275c:
    // 0x26275c: 0x0  nop
    ctx->pc = 0x26275cu;
    // NOP
label_262760:
    // 0x262760: 0xd41a  .word       0x0000D41A                   # div         $k0, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262760u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_262764:
    // 0x262764: 0x16c0  sll         $v0, $zero, 27
    ctx->pc = 0x262764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_262768:
    // 0x262768: 0x0  nop
    ctx->pc = 0x262768u;
    // NOP
label_26276c:
    // 0x26276c: 0x0  nop
    ctx->pc = 0x26276cu;
    // NOP
label_262770:
    // 0x262770: 0xd41d  .word       0x0000D41D                   # dmultu      $zero, $zero # 0000D400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262770u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x262770 raw=0x0000D41D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262774:
    // 0x262774: 0x7640  sll         $t6, $zero, 25
    ctx->pc = 0x262774u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_262778:
    // 0x262778: 0x0  nop
    ctx->pc = 0x262778u;
    // NOP
label_26277c:
    // 0x26277c: 0x0  nop
    ctx->pc = 0x26277cu;
    // NOP
label_262780:
    // 0x262780: 0xd42c  .word       0x0000D42C                   # dadd        $k0, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262780u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 26, r); }
label_262784:
    // 0x262784: 0x15e50  .word       0x00015E50                   # mfhi        $t3 # 00010640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262784u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_262788:
    // 0x262788: 0x0  nop
    ctx->pc = 0x262788u;
    // NOP
label_26278c:
    // 0x26278c: 0x0  nop
    ctx->pc = 0x26278cu;
    // NOP
label_262790:
    // 0x262790: 0xd458  .word       0x0000D458                   # mult        $k0, $zero, $zero # 00000440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x262790u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 26, (int32_t)result); }
label_262794:
    // 0x262794: 0xe350  .word       0x0000E350                   # mfhi        $gp # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262794u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_262798:
    // 0x262798: 0x0  nop
    ctx->pc = 0x262798u;
    // NOP
label_26279c:
    // 0x26279c: 0x0  nop
    ctx->pc = 0x26279cu;
    // NOP
label_2627a0:
    // 0x2627a0: 0xd475  .word       0x0000D475                   # INVALID     $zero, $zero, -0x2B8B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2627a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2627A0 raw=0x0000D475"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2627a4:
    // 0x2627a4: 0x13520  .word       0x00013520                   # add         $a2, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2627a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_2627a8:
    // 0x2627a8: 0x0  nop
    ctx->pc = 0x2627a8u;
    // NOP
label_2627ac:
    // 0x2627ac: 0x0  nop
    ctx->pc = 0x2627acu;
    // NOP
label_2627b0:
    // 0x2627b0: 0xd49c  .word       0x0000D49C                   # dmult       $zero, $zero # 0000D480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2627b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2627B0 raw=0x0000D49C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2627b4:
    // 0x2627b4: 0xa640  sll         $s4, $zero, 25
    ctx->pc = 0x2627b4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_2627b8:
    // 0x2627b8: 0x0  nop
    ctx->pc = 0x2627b8u;
    // NOP
label_2627bc:
    // 0x2627bc: 0x0  nop
    ctx->pc = 0x2627bcu;
    // NOP
label_2627c0:
    // 0x2627c0: 0xd4b1  tgeu        $zero, $zero, 850
    ctx->pc = 0x2627c0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2627c4:
    // 0x2627c4: 0x1a2b0  tge         $zero, $at, 650
    ctx->pc = 0x2627c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2627c8:
    // 0x2627c8: 0x0  nop
    ctx->pc = 0x2627c8u;
    // NOP
label_2627cc:
    // 0x2627cc: 0x0  nop
    ctx->pc = 0x2627ccu;
    // NOP
label_2627d0:
    // 0x2627d0: 0xd4e6  .word       0x0000D4E6                   # xor         $k0, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2627d0u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2627d4:
    // 0x2627d4: 0xb610  .word       0x0000B610                   # mfhi        $s6 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2627d4u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_2627d8:
    // 0x2627d8: 0x0  nop
    ctx->pc = 0x2627d8u;
    // NOP
label_2627dc:
    // 0x2627dc: 0x0  nop
    ctx->pc = 0x2627dcu;
    // NOP
label_2627e0:
    // 0x2627e0: 0xd4fd  .word       0x0000D4FD                   # INVALID     $zero, $zero, -0x2B03 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2627e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2627E0 raw=0x0000D4FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2627e4:
    // 0x2627e4: 0xbbf0  tge         $zero, $zero, 751
    ctx->pc = 0x2627e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2627e8:
    // 0x2627e8: 0x0  nop
    ctx->pc = 0x2627e8u;
    // NOP
label_2627ec:
    // 0x2627ec: 0x0  nop
    ctx->pc = 0x2627ecu;
    // NOP
label_2627f0:
    // 0x2627f0: 0xd515  .word       0x0000D515                   # INVALID     $zero, $zero, -0x2AEB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2627f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2627F0 raw=0x0000D515"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2627f4:
    // 0x2627f4: 0x10a00  sll         $at, $at, 8
    ctx->pc = 0x2627f4u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), 8));
    ctx->pc = 0x2627f8u;
    return;
}
