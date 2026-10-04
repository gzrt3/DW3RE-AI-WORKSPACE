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

// Function: FUN_0019b8d0
// Address: 0x19b8d0 - 0x29b8d8
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b8d0_part309(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x231f10u: goto label_231f10;
        case 0x231f14u: goto label_231f14;
        case 0x231f18u: goto label_231f18;
        case 0x231f1cu: goto label_231f1c;
        case 0x231f20u: goto label_231f20;
        case 0x231f24u: goto label_231f24;
        case 0x231f28u: goto label_231f28;
        case 0x231f2cu: goto label_231f2c;
        case 0x231f30u: goto label_231f30;
        case 0x231f34u: goto label_231f34;
        case 0x231f38u: goto label_231f38;
        case 0x231f3cu: goto label_231f3c;
        case 0x231f40u: goto label_231f40;
        case 0x231f44u: goto label_231f44;
        case 0x231f48u: goto label_231f48;
        case 0x231f4cu: goto label_231f4c;
        case 0x231f50u: goto label_231f50;
        case 0x231f54u: goto label_231f54;
        case 0x231f58u: goto label_231f58;
        case 0x231f5cu: goto label_231f5c;
        case 0x231f60u: goto label_231f60;
        case 0x231f64u: goto label_231f64;
        case 0x231f68u: goto label_231f68;
        case 0x231f6cu: goto label_231f6c;
        case 0x231f70u: goto label_231f70;
        case 0x231f74u: goto label_231f74;
        case 0x231f78u: goto label_231f78;
        case 0x231f7cu: goto label_231f7c;
        case 0x231f80u: goto label_231f80;
        case 0x231f84u: goto label_231f84;
        case 0x231f88u: goto label_231f88;
        case 0x231f8cu: goto label_231f8c;
        case 0x231f90u: goto label_231f90;
        case 0x231f94u: goto label_231f94;
        case 0x231f98u: goto label_231f98;
        case 0x231f9cu: goto label_231f9c;
        case 0x231fa0u: goto label_231fa0;
        case 0x231fa4u: goto label_231fa4;
        case 0x231fa8u: goto label_231fa8;
        case 0x231facu: goto label_231fac;
        case 0x231fb0u: goto label_231fb0;
        case 0x231fb4u: goto label_231fb4;
        case 0x231fb8u: goto label_231fb8;
        case 0x231fbcu: goto label_231fbc;
        case 0x231fc0u: goto label_231fc0;
        case 0x231fc4u: goto label_231fc4;
        case 0x231fc8u: goto label_231fc8;
        case 0x231fccu: goto label_231fcc;
        case 0x231fd0u: goto label_231fd0;
        case 0x231fd4u: goto label_231fd4;
        case 0x231fd8u: goto label_231fd8;
        case 0x231fdcu: goto label_231fdc;
        case 0x231fe0u: goto label_231fe0;
        case 0x231fe4u: goto label_231fe4;
        case 0x231fe8u: goto label_231fe8;
        case 0x231fecu: goto label_231fec;
        case 0x231ff0u: goto label_231ff0;
        case 0x231ff4u: goto label_231ff4;
        case 0x231ff8u: goto label_231ff8;
        case 0x231ffcu: goto label_231ffc;
        case 0x232000u: goto label_232000;
        case 0x232004u: goto label_232004;
        case 0x232008u: goto label_232008;
        case 0x23200cu: goto label_23200c;
        case 0x232010u: goto label_232010;
        case 0x232014u: goto label_232014;
        case 0x232018u: goto label_232018;
        case 0x23201cu: goto label_23201c;
        case 0x232020u: goto label_232020;
        case 0x232024u: goto label_232024;
        case 0x232028u: goto label_232028;
        case 0x23202cu: goto label_23202c;
        case 0x232030u: goto label_232030;
        case 0x232034u: goto label_232034;
        case 0x232038u: goto label_232038;
        case 0x23203cu: goto label_23203c;
        case 0x232040u: goto label_232040;
        case 0x232044u: goto label_232044;
        case 0x232048u: goto label_232048;
        case 0x23204cu: goto label_23204c;
        case 0x232050u: goto label_232050;
        case 0x232054u: goto label_232054;
        case 0x232058u: goto label_232058;
        case 0x23205cu: goto label_23205c;
        case 0x232060u: goto label_232060;
        case 0x232064u: goto label_232064;
        case 0x232068u: goto label_232068;
        case 0x23206cu: goto label_23206c;
        case 0x232070u: goto label_232070;
        case 0x232074u: goto label_232074;
        case 0x232078u: goto label_232078;
        case 0x23207cu: goto label_23207c;
        case 0x232080u: goto label_232080;
        case 0x232084u: goto label_232084;
        case 0x232088u: goto label_232088;
        case 0x23208cu: goto label_23208c;
        case 0x232090u: goto label_232090;
        case 0x232094u: goto label_232094;
        case 0x232098u: goto label_232098;
        case 0x23209cu: goto label_23209c;
        case 0x2320a0u: goto label_2320a0;
        case 0x2320a4u: goto label_2320a4;
        case 0x2320a8u: goto label_2320a8;
        case 0x2320acu: goto label_2320ac;
        case 0x2320b0u: goto label_2320b0;
        case 0x2320b4u: goto label_2320b4;
        case 0x2320b8u: goto label_2320b8;
        case 0x2320bcu: goto label_2320bc;
        case 0x2320c0u: goto label_2320c0;
        case 0x2320c4u: goto label_2320c4;
        case 0x2320c8u: goto label_2320c8;
        case 0x2320ccu: goto label_2320cc;
        case 0x2320d0u: goto label_2320d0;
        case 0x2320d4u: goto label_2320d4;
        case 0x2320d8u: goto label_2320d8;
        case 0x2320dcu: goto label_2320dc;
        case 0x2320e0u: goto label_2320e0;
        case 0x2320e4u: goto label_2320e4;
        case 0x2320e8u: goto label_2320e8;
        case 0x2320ecu: goto label_2320ec;
        case 0x2320f0u: goto label_2320f0;
        case 0x2320f4u: goto label_2320f4;
        case 0x2320f8u: goto label_2320f8;
        case 0x2320fcu: goto label_2320fc;
        case 0x232100u: goto label_232100;
        case 0x232104u: goto label_232104;
        case 0x232108u: goto label_232108;
        case 0x23210cu: goto label_23210c;
        case 0x232110u: goto label_232110;
        case 0x232114u: goto label_232114;
        case 0x232118u: goto label_232118;
        case 0x23211cu: goto label_23211c;
        case 0x232120u: goto label_232120;
        case 0x232124u: goto label_232124;
        case 0x232128u: goto label_232128;
        case 0x23212cu: goto label_23212c;
        case 0x232130u: goto label_232130;
        case 0x232134u: goto label_232134;
        case 0x232138u: goto label_232138;
        case 0x23213cu: goto label_23213c;
        case 0x232140u: goto label_232140;
        case 0x232144u: goto label_232144;
        case 0x232148u: goto label_232148;
        case 0x23214cu: goto label_23214c;
        case 0x232150u: goto label_232150;
        case 0x232154u: goto label_232154;
        case 0x232158u: goto label_232158;
        case 0x23215cu: goto label_23215c;
        case 0x232160u: goto label_232160;
        case 0x232164u: goto label_232164;
        case 0x232168u: goto label_232168;
        case 0x23216cu: goto label_23216c;
        case 0x232170u: goto label_232170;
        case 0x232174u: goto label_232174;
        case 0x232178u: goto label_232178;
        case 0x23217cu: goto label_23217c;
        case 0x232180u: goto label_232180;
        case 0x232184u: goto label_232184;
        case 0x232188u: goto label_232188;
        case 0x23218cu: goto label_23218c;
        case 0x232190u: goto label_232190;
        case 0x232194u: goto label_232194;
        case 0x232198u: goto label_232198;
        case 0x23219cu: goto label_23219c;
        case 0x2321a0u: goto label_2321a0;
        case 0x2321a4u: goto label_2321a4;
        case 0x2321a8u: goto label_2321a8;
        case 0x2321acu: goto label_2321ac;
        case 0x2321b0u: goto label_2321b0;
        case 0x2321b4u: goto label_2321b4;
        case 0x2321b8u: goto label_2321b8;
        case 0x2321bcu: goto label_2321bc;
        case 0x2321c0u: goto label_2321c0;
        case 0x2321c4u: goto label_2321c4;
        case 0x2321c8u: goto label_2321c8;
        case 0x2321ccu: goto label_2321cc;
        case 0x2321d0u: goto label_2321d0;
        case 0x2321d4u: goto label_2321d4;
        case 0x2321d8u: goto label_2321d8;
        case 0x2321dcu: goto label_2321dc;
        case 0x2321e0u: goto label_2321e0;
        case 0x2321e4u: goto label_2321e4;
        case 0x2321e8u: goto label_2321e8;
        case 0x2321ecu: goto label_2321ec;
        case 0x2321f0u: goto label_2321f0;
        case 0x2321f4u: goto label_2321f4;
        case 0x2321f8u: goto label_2321f8;
        case 0x2321fcu: goto label_2321fc;
        case 0x232200u: goto label_232200;
        case 0x232204u: goto label_232204;
        case 0x232208u: goto label_232208;
        case 0x23220cu: goto label_23220c;
        case 0x232210u: goto label_232210;
        case 0x232214u: goto label_232214;
        case 0x232218u: goto label_232218;
        case 0x23221cu: goto label_23221c;
        case 0x232220u: goto label_232220;
        case 0x232224u: goto label_232224;
        case 0x232228u: goto label_232228;
        case 0x23222cu: goto label_23222c;
        case 0x232230u: goto label_232230;
        case 0x232234u: goto label_232234;
        case 0x232238u: goto label_232238;
        case 0x23223cu: goto label_23223c;
        case 0x232240u: goto label_232240;
        case 0x232244u: goto label_232244;
        case 0x232248u: goto label_232248;
        case 0x23224cu: goto label_23224c;
        case 0x232250u: goto label_232250;
        case 0x232254u: goto label_232254;
        case 0x232258u: goto label_232258;
        case 0x23225cu: goto label_23225c;
        case 0x232260u: goto label_232260;
        case 0x232264u: goto label_232264;
        case 0x232268u: goto label_232268;
        case 0x23226cu: goto label_23226c;
        case 0x232270u: goto label_232270;
        case 0x232274u: goto label_232274;
        case 0x232278u: goto label_232278;
        case 0x23227cu: goto label_23227c;
        case 0x232280u: goto label_232280;
        case 0x232284u: goto label_232284;
        case 0x232288u: goto label_232288;
        case 0x23228cu: goto label_23228c;
        case 0x232290u: goto label_232290;
        case 0x232294u: goto label_232294;
        case 0x232298u: goto label_232298;
        case 0x23229cu: goto label_23229c;
        case 0x2322a0u: goto label_2322a0;
        case 0x2322a4u: goto label_2322a4;
        case 0x2322a8u: goto label_2322a8;
        case 0x2322acu: goto label_2322ac;
        case 0x2322b0u: goto label_2322b0;
        case 0x2322b4u: goto label_2322b4;
        case 0x2322b8u: goto label_2322b8;
        case 0x2322bcu: goto label_2322bc;
        case 0x2322c0u: goto label_2322c0;
        case 0x2322c4u: goto label_2322c4;
        case 0x2322c8u: goto label_2322c8;
        case 0x2322ccu: goto label_2322cc;
        case 0x2322d0u: goto label_2322d0;
        case 0x2322d4u: goto label_2322d4;
        case 0x2322d8u: goto label_2322d8;
        case 0x2322dcu: goto label_2322dc;
        case 0x2322e0u: goto label_2322e0;
        case 0x2322e4u: goto label_2322e4;
        case 0x2322e8u: goto label_2322e8;
        case 0x2322ecu: goto label_2322ec;
        case 0x2322f0u: goto label_2322f0;
        case 0x2322f4u: goto label_2322f4;
        case 0x2322f8u: goto label_2322f8;
        case 0x2322fcu: goto label_2322fc;
        case 0x232300u: goto label_232300;
        case 0x232304u: goto label_232304;
        case 0x232308u: goto label_232308;
        case 0x23230cu: goto label_23230c;
        case 0x232310u: goto label_232310;
        case 0x232314u: goto label_232314;
        case 0x232318u: goto label_232318;
        case 0x23231cu: goto label_23231c;
        case 0x232320u: goto label_232320;
        case 0x232324u: goto label_232324;
        case 0x232328u: goto label_232328;
        case 0x23232cu: goto label_23232c;
        case 0x232330u: goto label_232330;
        case 0x232334u: goto label_232334;
        case 0x232338u: goto label_232338;
        case 0x23233cu: goto label_23233c;
        case 0x232340u: goto label_232340;
        case 0x232344u: goto label_232344;
        case 0x232348u: goto label_232348;
        case 0x23234cu: goto label_23234c;
        case 0x232350u: goto label_232350;
        case 0x232354u: goto label_232354;
        case 0x232358u: goto label_232358;
        case 0x23235cu: goto label_23235c;
        case 0x232360u: goto label_232360;
        case 0x232364u: goto label_232364;
        case 0x232368u: goto label_232368;
        case 0x23236cu: goto label_23236c;
        case 0x232370u: goto label_232370;
        case 0x232374u: goto label_232374;
        case 0x232378u: goto label_232378;
        case 0x23237cu: goto label_23237c;
        case 0x232380u: goto label_232380;
        case 0x232384u: goto label_232384;
        case 0x232388u: goto label_232388;
        case 0x23238cu: goto label_23238c;
        case 0x232390u: goto label_232390;
        case 0x232394u: goto label_232394;
        case 0x232398u: goto label_232398;
        case 0x23239cu: goto label_23239c;
        case 0x2323a0u: goto label_2323a0;
        case 0x2323a4u: goto label_2323a4;
        case 0x2323a8u: goto label_2323a8;
        case 0x2323acu: goto label_2323ac;
        case 0x2323b0u: goto label_2323b0;
        case 0x2323b4u: goto label_2323b4;
        case 0x2323b8u: goto label_2323b8;
        case 0x2323bcu: goto label_2323bc;
        case 0x2323c0u: goto label_2323c0;
        case 0x2323c4u: goto label_2323c4;
        case 0x2323c8u: goto label_2323c8;
        case 0x2323ccu: goto label_2323cc;
        case 0x2323d0u: goto label_2323d0;
        case 0x2323d4u: goto label_2323d4;
        case 0x2323d8u: goto label_2323d8;
        case 0x2323dcu: goto label_2323dc;
        case 0x2323e0u: goto label_2323e0;
        case 0x2323e4u: goto label_2323e4;
        case 0x2323e8u: goto label_2323e8;
        case 0x2323ecu: goto label_2323ec;
        case 0x2323f0u: goto label_2323f0;
        case 0x2323f4u: goto label_2323f4;
        case 0x2323f8u: goto label_2323f8;
        case 0x2323fcu: goto label_2323fc;
        case 0x232400u: goto label_232400;
        case 0x232404u: goto label_232404;
        case 0x232408u: goto label_232408;
        case 0x23240cu: goto label_23240c;
        case 0x232410u: goto label_232410;
        case 0x232414u: goto label_232414;
        case 0x232418u: goto label_232418;
        case 0x23241cu: goto label_23241c;
        case 0x232420u: goto label_232420;
        case 0x232424u: goto label_232424;
        case 0x232428u: goto label_232428;
        case 0x23242cu: goto label_23242c;
        case 0x232430u: goto label_232430;
        case 0x232434u: goto label_232434;
        case 0x232438u: goto label_232438;
        case 0x23243cu: goto label_23243c;
        case 0x232440u: goto label_232440;
        case 0x232444u: goto label_232444;
        case 0x232448u: goto label_232448;
        case 0x23244cu: goto label_23244c;
        case 0x232450u: goto label_232450;
        case 0x232454u: goto label_232454;
        case 0x232458u: goto label_232458;
        case 0x23245cu: goto label_23245c;
        case 0x232460u: goto label_232460;
        case 0x232464u: goto label_232464;
        case 0x232468u: goto label_232468;
        case 0x23246cu: goto label_23246c;
        case 0x232470u: goto label_232470;
        case 0x232474u: goto label_232474;
        case 0x232478u: goto label_232478;
        case 0x23247cu: goto label_23247c;
        case 0x232480u: goto label_232480;
        case 0x232484u: goto label_232484;
        case 0x232488u: goto label_232488;
        case 0x23248cu: goto label_23248c;
        case 0x232490u: goto label_232490;
        case 0x232494u: goto label_232494;
        case 0x232498u: goto label_232498;
        case 0x23249cu: goto label_23249c;
        case 0x2324a0u: goto label_2324a0;
        case 0x2324a4u: goto label_2324a4;
        case 0x2324a8u: goto label_2324a8;
        case 0x2324acu: goto label_2324ac;
        case 0x2324b0u: goto label_2324b0;
        case 0x2324b4u: goto label_2324b4;
        case 0x2324b8u: goto label_2324b8;
        case 0x2324bcu: goto label_2324bc;
        case 0x2324c0u: goto label_2324c0;
        case 0x2324c4u: goto label_2324c4;
        case 0x2324c8u: goto label_2324c8;
        case 0x2324ccu: goto label_2324cc;
        case 0x2324d0u: goto label_2324d0;
        case 0x2324d4u: goto label_2324d4;
        case 0x2324d8u: goto label_2324d8;
        case 0x2324dcu: goto label_2324dc;
        case 0x2324e0u: goto label_2324e0;
        case 0x2324e4u: goto label_2324e4;
        case 0x2324e8u: goto label_2324e8;
        case 0x2324ecu: goto label_2324ec;
        case 0x2324f0u: goto label_2324f0;
        case 0x2324f4u: goto label_2324f4;
        case 0x2324f8u: goto label_2324f8;
        case 0x2324fcu: goto label_2324fc;
        case 0x232500u: goto label_232500;
        case 0x232504u: goto label_232504;
        case 0x232508u: goto label_232508;
        case 0x23250cu: goto label_23250c;
        case 0x232510u: goto label_232510;
        case 0x232514u: goto label_232514;
        case 0x232518u: goto label_232518;
        case 0x23251cu: goto label_23251c;
        case 0x232520u: goto label_232520;
        case 0x232524u: goto label_232524;
        case 0x232528u: goto label_232528;
        case 0x23252cu: goto label_23252c;
        case 0x232530u: goto label_232530;
        case 0x232534u: goto label_232534;
        case 0x232538u: goto label_232538;
        case 0x23253cu: goto label_23253c;
        case 0x232540u: goto label_232540;
        case 0x232544u: goto label_232544;
        case 0x232548u: goto label_232548;
        case 0x23254cu: goto label_23254c;
        case 0x232550u: goto label_232550;
        case 0x232554u: goto label_232554;
        case 0x232558u: goto label_232558;
        case 0x23255cu: goto label_23255c;
        case 0x232560u: goto label_232560;
        case 0x232564u: goto label_232564;
        case 0x232568u: goto label_232568;
        case 0x23256cu: goto label_23256c;
        case 0x232570u: goto label_232570;
        case 0x232574u: goto label_232574;
        case 0x232578u: goto label_232578;
        case 0x23257cu: goto label_23257c;
        case 0x232580u: goto label_232580;
        case 0x232584u: goto label_232584;
        case 0x232588u: goto label_232588;
        case 0x23258cu: goto label_23258c;
        case 0x232590u: goto label_232590;
        case 0x232594u: goto label_232594;
        case 0x232598u: goto label_232598;
        case 0x23259cu: goto label_23259c;
        case 0x2325a0u: goto label_2325a0;
        case 0x2325a4u: goto label_2325a4;
        case 0x2325a8u: goto label_2325a8;
        case 0x2325acu: goto label_2325ac;
        case 0x2325b0u: goto label_2325b0;
        case 0x2325b4u: goto label_2325b4;
        case 0x2325b8u: goto label_2325b8;
        case 0x2325bcu: goto label_2325bc;
        case 0x2325c0u: goto label_2325c0;
        case 0x2325c4u: goto label_2325c4;
        case 0x2325c8u: goto label_2325c8;
        case 0x2325ccu: goto label_2325cc;
        case 0x2325d0u: goto label_2325d0;
        case 0x2325d4u: goto label_2325d4;
        case 0x2325d8u: goto label_2325d8;
        case 0x2325dcu: goto label_2325dc;
        case 0x2325e0u: goto label_2325e0;
        case 0x2325e4u: goto label_2325e4;
        case 0x2325e8u: goto label_2325e8;
        case 0x2325ecu: goto label_2325ec;
        case 0x2325f0u: goto label_2325f0;
        case 0x2325f4u: goto label_2325f4;
        case 0x2325f8u: goto label_2325f8;
        case 0x2325fcu: goto label_2325fc;
        case 0x232600u: goto label_232600;
        case 0x232604u: goto label_232604;
        case 0x232608u: goto label_232608;
        case 0x23260cu: goto label_23260c;
        case 0x232610u: goto label_232610;
        case 0x232614u: goto label_232614;
        case 0x232618u: goto label_232618;
        case 0x23261cu: goto label_23261c;
        case 0x232620u: goto label_232620;
        case 0x232624u: goto label_232624;
        case 0x232628u: goto label_232628;
        case 0x23262cu: goto label_23262c;
        case 0x232630u: goto label_232630;
        case 0x232634u: goto label_232634;
        case 0x232638u: goto label_232638;
        case 0x23263cu: goto label_23263c;
        case 0x232640u: goto label_232640;
        case 0x232644u: goto label_232644;
        case 0x232648u: goto label_232648;
        case 0x23264cu: goto label_23264c;
        case 0x232650u: goto label_232650;
        case 0x232654u: goto label_232654;
        case 0x232658u: goto label_232658;
        case 0x23265cu: goto label_23265c;
        case 0x232660u: goto label_232660;
        case 0x232664u: goto label_232664;
        case 0x232668u: goto label_232668;
        case 0x23266cu: goto label_23266c;
        case 0x232670u: goto label_232670;
        case 0x232674u: goto label_232674;
        case 0x232678u: goto label_232678;
        case 0x23267cu: goto label_23267c;
        case 0x232680u: goto label_232680;
        case 0x232684u: goto label_232684;
        case 0x232688u: goto label_232688;
        case 0x23268cu: goto label_23268c;
        case 0x232690u: goto label_232690;
        case 0x232694u: goto label_232694;
        case 0x232698u: goto label_232698;
        case 0x23269cu: goto label_23269c;
        case 0x2326a0u: goto label_2326a0;
        case 0x2326a4u: goto label_2326a4;
        case 0x2326a8u: goto label_2326a8;
        case 0x2326acu: goto label_2326ac;
        case 0x2326b0u: goto label_2326b0;
        case 0x2326b4u: goto label_2326b4;
        case 0x2326b8u: goto label_2326b8;
        case 0x2326bcu: goto label_2326bc;
        case 0x2326c0u: goto label_2326c0;
        case 0x2326c4u: goto label_2326c4;
        case 0x2326c8u: goto label_2326c8;
        case 0x2326ccu: goto label_2326cc;
        case 0x2326d0u: goto label_2326d0;
        case 0x2326d4u: goto label_2326d4;
        case 0x2326d8u: goto label_2326d8;
        case 0x2326dcu: goto label_2326dc;
        default: return;
    }

label_231f10:
    // 0x231f10: 0x3e00008  jr          $ra
label_231f14:
    if (ctx->pc == 0x231F14u) {
        ctx->pc = 0x231F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231F10u;
        // 0x231f14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231F18u;
        goto label_231f18;
    }
    ctx->pc = 0x231F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231F10u;
        // 0x231f14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231F18u;
label_231f18:
    // 0x231f18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x231f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_231f1c:
    // 0x231f1c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x231f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_231f20:
    // 0x231f20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x231f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_231f24:
    // 0x231f24: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x231f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_231f28:
    // 0x231f28: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_231f2c:
    if (ctx->pc == 0x231F2Cu) {
        ctx->pc = 0x231F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231F28u;
        // 0x231f2c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231F30u;
        goto label_231f30;
    }
    ctx->pc = 0x231F28u;
    {
        const bool branch_taken_0x231f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231F28u;
        // 0x231f2c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231f28) {
            ctx->pc = 0x231F50u;
            goto label_231f50;
        }
    }
    ctx->pc = 0x231F30u;
label_231f30:
    // 0x231f30: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x231f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_231f34:
    // 0x231f34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x231f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_231f38:
    // 0x231f38: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
label_231f3c:
    if (ctx->pc == 0x231F3Cu) {
        ctx->pc = 0x231F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231F38u;
        // 0x231f3c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231F40u;
        goto label_231f40;
    }
    ctx->pc = 0x231F38u;
    {
        const bool branch_taken_0x231f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x231F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231F38u;
        // 0x231f3c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231f38) {
            ctx->pc = 0x231F50u;
            goto label_231f50;
        }
    }
    ctx->pc = 0x231F40u;
label_231f40:
    // 0x231f40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x231f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_231f44:
    // 0x231f44: 0x808dbb8  j           func_236EE0
label_231f48:
    if (ctx->pc == 0x231F48u) {
        ctx->pc = 0x231F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231F44u;
        // 0x231f48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231F4Cu;
        goto label_231f4c;
    }
    ctx->pc = 0x231F44u;
    ctx->pc = 0x231F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231F44u;
    // 0x231f48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236EE0u;
    { ctx->pc = 0x236ee0; return; }
    ctx->pc = 0x231F4Cu;
label_231f4c:
    // 0x231f4c: 0x0  nop
    ctx->pc = 0x231f4cu;
    // NOP
label_231f50:
    // 0x231f50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x231f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_231f54:
    // 0x231f54: 0x3e00008  jr          $ra
label_231f58:
    if (ctx->pc == 0x231F58u) {
        ctx->pc = 0x231F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231F54u;
        // 0x231f58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231F5Cu;
        goto label_231f5c;
    }
    ctx->pc = 0x231F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231F54u;
        // 0x231f58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231F5Cu;
label_231f5c:
    // 0x231f5c: 0x0  nop
    ctx->pc = 0x231f5cu;
    // NOP
label_231f60:
    // 0x231f60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x231f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_231f64:
    // 0x231f64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x231f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_231f68:
    // 0x231f68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x231f68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_231f6c:
    // 0x231f6c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x231f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_231f70:
    // 0x231f70: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x231f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_231f74:
    // 0x231f74: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_231f78:
    if (ctx->pc == 0x231F78u) {
        ctx->pc = 0x231F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231F74u;
        // 0x231f78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231F7Cu;
        goto label_231f7c;
    }
    ctx->pc = 0x231F74u;
    {
        const bool branch_taken_0x231f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231F74u;
        // 0x231f78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231f74) {
            ctx->pc = 0x231FACu;
            goto label_231fac;
        }
    }
    ctx->pc = 0x231F7Cu;
label_231f7c:
    // 0x231f7c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x231f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_231f80:
    // 0x231f80: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_231f84:
    if (ctx->pc == 0x231F84u) {
        ctx->pc = 0x231F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231F80u;
        // 0x231f84: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231F88u;
        goto label_231f88;
    }
    ctx->pc = 0x231F80u;
    {
        const bool branch_taken_0x231f80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x231f80) {
            ctx->pc = 0x231F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231F80u;
            // 0x231f84: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231F94u;
            goto label_231f94;
        }
    }
    ctx->pc = 0x231F88u;
label_231f88:
    // 0x231f88: 0xc08dbca  jal         func_236F28
label_231f8c:
    if (ctx->pc == 0x231F8Cu) {
        ctx->pc = 0x231F90u;
        goto label_231f90;
    }
    ctx->pc = 0x231F88u;
    SET_GPR_U32(ctx, 31, 0x231F90u);
    ctx->pc = 0x236F28u;
    { ctx->pc = 0x236f28; return; }
    ctx->pc = 0x231F90u;
label_231f90:
    // 0x231f90: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x231f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_231f94:
    // 0x231f94: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x231f94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_231f98:
    // 0x231f98: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x231f98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_231f9c:
    // 0x231f9c: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x231f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_231fa0:
    // 0x231fa0: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x231fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_231fa4:
    // 0x231fa4: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x231fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_231fa8:
    // 0x231fa8: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x231fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
label_231fac:
    // 0x231fac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x231facu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_231fb0:
    // 0x231fb0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x231fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_231fb4:
    // 0x231fb4: 0x3e00008  jr          $ra
label_231fb8:
    if (ctx->pc == 0x231FB8u) {
        ctx->pc = 0x231FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231FB4u;
        // 0x231fb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231FBCu;
        goto label_231fbc;
    }
    ctx->pc = 0x231FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231FB4u;
        // 0x231fb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231FBCu;
label_231fbc:
    // 0x231fbc: 0x0  nop
    ctx->pc = 0x231fbcu;
    // NOP
label_231fc0:
    // 0x231fc0: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x231fc0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_231fc4:
    // 0x231fc4: 0x8d220048  lw          $v0, 0x48($t1)
    ctx->pc = 0x231fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 72)));
label_231fc8:
    // 0x231fc8: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_231fcc:
    if (ctx->pc == 0x231FCCu) {
        ctx->pc = 0x231FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231FC8u;
        // 0x231fcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231FD0u;
        goto label_231fd0;
    }
    ctx->pc = 0x231FC8u;
    {
        const bool branch_taken_0x231fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231FC8u;
        // 0x231fcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231fc8) {
            ctx->pc = 0x232078u;
            goto label_232078;
        }
    }
    ctx->pc = 0x231FD0u;
label_231fd0:
    // 0x231fd0: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x231fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_231fd4:
    // 0x231fd4: 0x54620010  bnel        $v1, $v0, . + 4 + (0x10 << 2)
label_231fd8:
    if (ctx->pc == 0x231FD8u) {
        ctx->pc = 0x231FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231FD4u;
        // 0x231fd8: 0x8d220040  lw          $v0, 0x40($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231FDCu;
        goto label_231fdc;
    }
    ctx->pc = 0x231FD4u;
    {
        const bool branch_taken_0x231fd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x231fd4) {
            ctx->pc = 0x231FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231FD4u;
            // 0x231fd8: 0x8d220040  lw          $v0, 0x40($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232018u;
            goto label_232018;
        }
    }
    ctx->pc = 0x231FDCu;
label_231fdc:
    // 0x231fdc: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x231fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_231fe0:
    // 0x231fe0: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_231fe4:
    if (ctx->pc == 0x231FE4u) {
        ctx->pc = 0x231FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231FE0u;
        // 0x231fe4: 0x8d220040  lw          $v0, 0x40($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231FE8u;
        goto label_231fe8;
    }
    ctx->pc = 0x231FE0u;
    {
        const bool branch_taken_0x231fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x231fe0) {
            ctx->pc = 0x231FE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231FE0u;
            // 0x231fe4: 0x8d220040  lw          $v0, 0x40($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232018u;
            goto label_232018;
        }
    }
    ctx->pc = 0x231FE8u;
label_231fe8:
    // 0x231fe8: 0x8d240030  lw          $a0, 0x30($t1)
    ctx->pc = 0x231fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
label_231fec:
    // 0x231fec: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x231fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_231ff0:
    // 0x231ff0: 0x1241821  addu        $v1, $t1, $a0
    ctx->pc = 0x231ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_231ff4:
    // 0x231ff4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x231ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_231ff8:
    // 0x231ff8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x231ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_231ffc:
    // 0x231ffc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x231ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_232000:
    // 0x232000: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x232000u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_232004:
    // 0x232004: 0x8d220040  lw          $v0, 0x40($t1)
    ctx->pc = 0x232004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 64)));
label_232008:
    // 0x232008: 0x8d230034  lw          $v1, 0x34($t1)
    ctx->pc = 0x232008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 52)));
label_23200c:
    // 0x23200c: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x23200cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_232010:
    // 0x232010: 0x3e00008  jr          $ra
label_232014:
    if (ctx->pc == 0x232014u) {
        ctx->pc = 0x232014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232010u;
        // 0x232014: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232018u;
        goto label_232018;
    }
    ctx->pc = 0x232010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232010u;
        // 0x232014: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232018u;
label_232018:
    // 0x232018: 0x8d2a0038  lw          $t2, 0x38($t1)
    ctx->pc = 0x232018u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 56)));
label_23201c:
    // 0x23201c: 0x8d24003c  lw          $a0, 0x3C($t1)
    ctx->pc = 0x23201cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 60)));
label_232020:
    // 0x232020: 0x4a6023  subu        $t4, $v0, $t2
    ctx->pc = 0x232020u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_232024:
    // 0x232024: 0x445823  subu        $t3, $v0, $a0
    ctx->pc = 0x232024u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_232028:
    // 0x232028: 0x18b182a  slt         $v1, $t4, $t3
    ctx->pc = 0x232028u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
label_23202c:
    // 0x23202c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_232030:
    if (ctx->pc == 0x232030u) {
        ctx->pc = 0x232030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23202Cu;
        // 0x232030: 0x8d220034  lw          $v0, 0x34($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232034u;
        goto label_232034;
    }
    ctx->pc = 0x23202Cu;
    {
        const bool branch_taken_0x23202c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x232030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23202Cu;
        // 0x232030: 0x8d220034  lw          $v0, 0x34($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23202c) {
            ctx->pc = 0x232050u;
            goto label_232050;
        }
    }
    ctx->pc = 0x232034u;
label_232034:
    // 0x232034: 0xaccb0000  sw          $t3, 0x0($a2)
    ctx->pc = 0x232034u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 11));
label_232038:
    // 0x232038: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x232038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_23203c:
    // 0x23203c: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x23203cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
label_232040:
    // 0x232040: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x232040u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_232044:
    // 0x232044: 0x3e00008  jr          $ra
label_232048:
    if (ctx->pc == 0x232048u) {
        ctx->pc = 0x232048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232044u;
        // 0x232048: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23204Cu;
        goto label_23204c;
    }
    ctx->pc = 0x232044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232044u;
        // 0x232048: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23204Cu;
label_23204c:
    // 0x23204c: 0x0  nop
    ctx->pc = 0x23204cu;
    // NOP
label_232050:
    // 0x232050: 0xaccc0000  sw          $t4, 0x0($a2)
    ctx->pc = 0x232050u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 12));
label_232054:
    // 0x232054: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x232054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_232058:
    // 0x232058: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x232058u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_23205c:
    // 0x23205c: 0x8d230038  lw          $v1, 0x38($t1)
    ctx->pc = 0x23205cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 56)));
label_232060:
    // 0x232060: 0x8d220040  lw          $v0, 0x40($t1)
    ctx->pc = 0x232060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 64)));
label_232064:
    // 0x232064: 0x8d240034  lw          $a0, 0x34($t1)
    ctx->pc = 0x232064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 52)));
label_232068:
    // 0x232068: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x232068u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23206c:
    // 0x23206c: 0x1621023  subu        $v0, $t3, $v0
    ctx->pc = 0x23206cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_232070:
    // 0x232070: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x232070u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
label_232074:
    // 0x232074: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x232074u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_232078:
    // 0x232078: 0x3e00008  jr          $ra
label_23207c:
    if (ctx->pc == 0x23207Cu) {
        ctx->pc = 0x232080u;
        goto label_232080;
    }
    ctx->pc = 0x232078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232080u;
label_232080:
    // 0x232080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x232080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_232084:
    // 0x232084: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x232084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_232088:
    // 0x232088: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x232088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23208c:
    // 0x23208c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23208cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_232090:
    // 0x232090: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x232090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_232094:
    // 0x232094: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x232094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_232098:
    // 0x232098: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_23209c:
    if (ctx->pc == 0x23209Cu) {
        ctx->pc = 0x23209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232098u;
        // 0x23209c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2320A0u;
        goto label_2320a0;
    }
    ctx->pc = 0x232098u;
    {
        const bool branch_taken_0x232098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232098u;
        // 0x23209c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232098) {
            ctx->pc = 0x232178u;
            goto label_232178;
        }
    }
    ctx->pc = 0x2320A0u;
label_2320a0:
    // 0x2320a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2320a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2320a4:
    // 0x2320a4: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
label_2320a8:
    if (ctx->pc == 0x2320A8u) {
        ctx->pc = 0x2320A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2320A4u;
        // 0x2320a8: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2320ACu;
        goto label_2320ac;
    }
    ctx->pc = 0x2320A4u;
    {
        const bool branch_taken_0x2320a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2320a4) {
            ctx->pc = 0x2320A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2320A4u;
            // 0x2320a8: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232144u;
            goto label_232144;
        }
    }
    ctx->pc = 0x2320ACu;
label_2320ac:
    // 0x2320ac: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2320acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2320b0:
    // 0x2320b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2320b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2320b4:
    // 0x2320b4: 0x54a20023  bnel        $a1, $v0, . + 4 + (0x23 << 2)
label_2320b8:
    if (ctx->pc == 0x2320B8u) {
        ctx->pc = 0x2320B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2320B4u;
        // 0x2320b8: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2320BCu;
        goto label_2320bc;
    }
    ctx->pc = 0x2320B4u;
    {
        const bool branch_taken_0x2320b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2320b4) {
            ctx->pc = 0x2320B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2320B4u;
            // 0x2320b8: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232144u;
            goto label_232144;
        }
    }
    ctx->pc = 0x2320BCu;
label_2320bc:
    // 0x2320bc: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x2320bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2320c0:
    // 0x2320c0: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x2320c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2320c4:
    // 0x2320c4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2320c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2320c8:
    // 0x2320c8: 0x51182b  sltu        $v1, $v0, $s1
    ctx->pc = 0x2320c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_2320cc:
    // 0x2320cc: 0x223100a  movz        $v0, $s1, $v1
    ctx->pc = 0x2320ccu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 17));
label_2320d0:
    // 0x2320d0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2320d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2320d4:
    // 0x2320d4: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x2320d4u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2320d8:
    // 0x2320d8: 0x2c830028  sltiu       $v1, $a0, 0x28
    ctx->pc = 0x2320d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)40) ? 1 : 0);
label_2320dc:
    // 0x2320dc: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
label_2320e0:
    if (ctx->pc == 0x2320E0u) {
        ctx->pc = 0x2320E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2320DCu;
        // 0x2320e0: 0xae040030  sw          $a0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2320E4u;
        goto label_2320e4;
    }
    ctx->pc = 0x2320DCu;
    {
        const bool branch_taken_0x2320dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2320E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2320DCu;
        // 0x2320e0: 0xae040030  sw          $a0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2320dc) {
            ctx->pc = 0x232140u;
            goto label_232140;
        }
    }
    ctx->pc = 0x2320E4u;
label_2320e4:
    // 0x2320e4: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x2320e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2320e8:
    // 0x2320e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2320e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2320ec:
    // 0x2320ec: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x2320ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_2320f0:
    // 0x2320f0: 0xc44004d0  lwc1        $f0, 0x4D0($v0)
    ctx->pc = 0x2320f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2320f4:
    // 0x2320f4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2320f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2320f8:
    // 0x2320f8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2320f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2320fc:
    // 0x2320fc: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x2320fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
label_232100:
    // 0x232100: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x232100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_232104:
    // 0x232104: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x232104u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_232108:
    // 0x232108: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x232108u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_23210c:
    // 0x23210c: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x23210cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_232110:
    // 0x232110: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x232110u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_232114:
    // 0x232114: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x232114u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_232118:
    // 0x232118: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_23211c:
    if (ctx->pc == 0x23211Cu) {
        ctx->pc = 0x23211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232118u;
        // 0x23211c: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232120u;
        goto label_232120;
    }
    ctx->pc = 0x232118u;
    {
        const bool branch_taken_0x232118 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232118u;
        // 0x23211c: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232118) {
            ctx->pc = 0x232138u;
            goto label_232138;
        }
    }
    ctx->pc = 0x232120u;
label_232120:
    // 0x232120: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x232120u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_232124:
    // 0x232124: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x232124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_232128:
    // 0x232128: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x232128u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_23212c:
    // 0x23212c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x23212cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_232130:
    // 0x232130: 0x0  nop
    ctx->pc = 0x232130u;
    // NOP
label_232134:
    // 0x232134: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x232134u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_232138:
    // 0x232138: 0xc08db98  jal         func_236E60
label_23213c:
    if (ctx->pc == 0x23213Cu) {
        ctx->pc = 0x23213Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232138u;
        // 0x23213c: 0x8e05001c  lw          $a1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232140u;
        goto label_232140;
    }
    ctx->pc = 0x232138u;
    SET_GPR_U32(ctx, 31, 0x232140u);
    ctx->pc = 0x23213Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232138u;
    // 0x23213c: 0x8e05001c  lw          $a1, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236E60u;
    { ctx->pc = 0x236e60; return; }
    ctx->pc = 0x232140u;
label_232140:
    // 0x232140: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x232140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_232144:
    // 0x232144: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x232144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_232148:
    // 0x232148: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x232148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_23214c:
    // 0x23214c: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x23214cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_232150:
    // 0x232150: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_232154:
    if (ctx->pc == 0x232154u) {
        ctx->pc = 0x232154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232150u;
        // 0x232154: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x232158u;
        goto label_232158;
    }
    ctx->pc = 0x232150u;
    {
        const bool branch_taken_0x232150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x232150) {
            ctx->pc = 0x232154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232150u;
            // 0x232154: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x232158u;
            goto label_232158;
        }
    }
    ctx->pc = 0x232158u;
label_232158:
    // 0x232158: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x232158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_23215c:
    // 0x23215c: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x23215cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_232160:
    // 0x232160: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x232160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_232164:
    // 0x232164: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x232164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_232168:
    // 0x232168: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x232168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
label_23216c:
    // 0x23216c: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x23216cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
label_232170:
    // 0x232170: 0x2010  mfhi        $a0
    ctx->pc = 0x232170u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_232174:
    // 0x232174: 0xae040038  sw          $a0, 0x38($s0)
    ctx->pc = 0x232174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 4));
label_232178:
    // 0x232178: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x232178u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23217c:
    // 0x23217c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23217cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_232180:
    // 0x232180: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x232180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_232184:
    // 0x232184: 0x3e00008  jr          $ra
label_232188:
    if (ctx->pc == 0x232188u) {
        ctx->pc = 0x232188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232184u;
        // 0x232188: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23218Cu;
        goto label_23218c;
    }
    ctx->pc = 0x232184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232184u;
        // 0x232188: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23218Cu;
label_23218c:
    // 0x23218c: 0x0  nop
    ctx->pc = 0x23218cu;
    // NOP
label_232190:
    // 0x232190: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x232190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_232194:
    // 0x232194: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_232198:
    if (ctx->pc == 0x232198u) {
        ctx->pc = 0x23219Cu;
        goto label_23219c;
    }
    ctx->pc = 0x232194u;
    {
        const bool branch_taken_0x232194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232194) {
            ctx->pc = 0x2321B0u;
            goto label_2321b0;
        }
    }
    ctx->pc = 0x23219Cu;
label_23219c:
    // 0x23219c: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x23219cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_2321a0:
    // 0x2321a0: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x2321a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_2321a4:
    // 0x2321a4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2321a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2321a8:
    // 0x2321a8: 0x3e00008  jr          $ra
label_2321ac:
    if (ctx->pc == 0x2321ACu) {
        ctx->pc = 0x2321ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2321A8u;
        // 0x2321ac: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2321B0u;
        goto label_2321b0;
    }
    ctx->pc = 0x2321A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2321ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2321A8u;
        // 0x2321ac: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2321A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2321B0u;
label_2321b0:
    // 0x2321b0: 0x3e00008  jr          $ra
label_2321b4:
    if (ctx->pc == 0x2321B4u) {
        ctx->pc = 0x2321B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2321B0u;
        // 0x2321b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2321B8u;
        goto label_2321b8;
    }
    ctx->pc = 0x2321B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2321B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2321B0u;
        // 0x2321b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2321B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2321B8u;
label_2321b8:
    // 0x2321b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2321b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2321bc:
    // 0x2321bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2321bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2321c0:
    // 0x2321c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2321c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2321c4:
    // 0x2321c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2321c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2321c8:
    // 0x2321c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2321c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2321cc:
    // 0x2321cc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2321ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2321d0:
    // 0x2321d0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2321d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2321d4:
    // 0x2321d4: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x2321d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_2321d8:
    // 0x2321d8: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_2321dc:
    if (ctx->pc == 0x2321DCu) {
        ctx->pc = 0x2321DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2321D8u;
        // 0x2321dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2321E0u;
        goto label_2321e0;
    }
    ctx->pc = 0x2321D8u;
    {
        const bool branch_taken_0x2321d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2321DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2321D8u;
        // 0x2321dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2321d8) {
            ctx->pc = 0x2322F8u;
            goto label_2322f8;
        }
    }
    ctx->pc = 0x2321E0u;
label_2321e0:
    // 0x2321e0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2321e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2321e4:
    // 0x2321e4: 0x10600045  beqz        $v1, . + 4 + (0x45 << 2)
label_2321e8:
    if (ctx->pc == 0x2321E8u) {
        ctx->pc = 0x2321E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2321E4u;
        // 0x2321e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2321ECu;
        goto label_2321ec;
    }
    ctx->pc = 0x2321E4u;
    {
        const bool branch_taken_0x2321e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2321E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2321E4u;
        // 0x2321e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2321e4) {
            ctx->pc = 0x2322FCu;
            goto label_2322fc;
        }
    }
    ctx->pc = 0x2321ECu;
label_2321ec:
    // 0x2321ec: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x2321ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2321f0:
    // 0x2321f0: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x2321f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_2321f4:
    // 0x2321f4: 0x8e32003c  lw          $s2, 0x3C($s1)
    ctx->pc = 0x2321f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_2321f8:
    // 0x2321f8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2321f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2321fc:
    // 0x2321fc: 0x52202a  slt         $a0, $v0, $s2
    ctx->pc = 0x2321fcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_232200:
    // 0x232200: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x232200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_232204:
    // 0x232204: 0x44900b  movn        $s2, $v0, $a0
    ctx->pc = 0x232204u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
label_232208:
    // 0x232208: 0x2645000f  addiu       $a1, $s2, 0xF
    ctx->pc = 0x232208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 15));
label_23220c:
    // 0x23220c: 0x2a420000  slti        $v0, $s2, 0x0
    ctx->pc = 0x23220cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)0) ? 1 : 0);
label_232210:
    // 0x232210: 0xa2900b  movn        $s2, $a1, $v0
    ctx->pc = 0x232210u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 5));
label_232214:
    // 0x232214: 0x121903  sra         $v1, $s2, 4
    ctx->pc = 0x232214u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 4));
label_232218:
    // 0x232218: 0x39100  sll         $s2, $v1, 4
    ctx->pc = 0x232218u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_23221c:
    // 0x23221c: 0x12400035  beqz        $s2, . + 4 + (0x35 << 2)
label_232220:
    if (ctx->pc == 0x232220u) {
        ctx->pc = 0x232220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23221Cu;
        // 0x232220: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232224u;
        goto label_232224;
    }
    ctx->pc = 0x23221Cu;
    {
        const bool branch_taken_0x23221c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x232220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23221Cu;
        // 0x232220: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23221c) {
            ctx->pc = 0x2322F4u;
            goto label_2322f4;
        }
    }
    ctx->pc = 0x232224u;
label_232224:
    // 0x232224: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x232224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_232228:
    // 0x232228: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x232228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_23222c:
    // 0x23222c: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x23222cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_232230:
    // 0x232230: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x232230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_232234:
    // 0x232234: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_232238:
    if (ctx->pc == 0x232238u) {
        ctx->pc = 0x232238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232234u;
        // 0x232238: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23223Cu;
        goto label_23223c;
    }
    ctx->pc = 0x232234u;
    {
        const bool branch_taken_0x232234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232234) {
            ctx->pc = 0x232238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232234u;
            // 0x232238: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23223Cu;
            goto label_23223c;
        }
    }
    ctx->pc = 0x23223Cu;
label_23223c:
    // 0x23223c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x23223cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_232240:
    // 0x232240: 0x8010  mfhi        $s0
    ctx->pc = 0x232240u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_232244:
    // 0x232244: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x232244u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_232248:
    // 0x232248: 0x52182a  slt         $v1, $v0, $s2
    ctx->pc = 0x232248u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_23224c:
    // 0x23224c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x23224cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_232250:
    // 0x232250: 0xc08db50  jal         func_236D40
label_232254:
    if (ctx->pc == 0x232254u) {
        ctx->pc = 0x232254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232250u;
        // 0x232254: 0x243980a  movz        $s3, $s2, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232258u;
        goto label_232258;
    }
    ctx->pc = 0x232250u;
    SET_GPR_U32(ctx, 31, 0x232258u);
    ctx->pc = 0x232254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232250u;
    // 0x232254: 0x243980a  movz        $s3, $s2, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236D40u;
    { ctx->pc = 0x236d40; return; }
    ctx->pc = 0x232258u;
label_232258:
    // 0x232258: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x232258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_23225c:
    // 0x23225c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x23225cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_232260:
    // 0x232260: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x232260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_232264:
    // 0x232264: 0x8e250034  lw          $a1, 0x34($s1)
    ctx->pc = 0x232264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_232268:
    // 0x232268: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x232268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_23226c:
    // 0x23226c: 0xc08c8c6  jal         func_232318
label_232270:
    if (ctx->pc == 0x232270u) {
        ctx->pc = 0x232270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23226Cu;
        // 0x232270: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232274u;
        goto label_232274;
    }
    ctx->pc = 0x23226Cu;
    SET_GPR_U32(ctx, 31, 0x232274u);
    ctx->pc = 0x232270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23226Cu;
    // 0x232270: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232318u;
    goto label_232318;
    ctx->pc = 0x232274u;
label_232274:
    // 0x232274: 0x2533023  subu        $a2, $s2, $s3
    ctx->pc = 0x232274u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_232278:
    // 0x232278: 0x58c00008  blezl       $a2, . + 4 + (0x8 << 2)
label_23227c:
    if (ctx->pc == 0x23227Cu) {
        ctx->pc = 0x23227Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232278u;
        // 0x23227c: 0x8e22003c  lw          $v0, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232280u;
        goto label_232280;
    }
    ctx->pc = 0x232278u;
    {
        const bool branch_taken_0x232278 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x232278) {
            ctx->pc = 0x23227Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232278u;
            // 0x23227c: 0x8e22003c  lw          $v0, 0x3C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23229Cu;
            goto label_23229c;
        }
    }
    ctx->pc = 0x232280u;
label_232280:
    // 0x232280: 0x8e240048  lw          $a0, 0x48($s1)
    ctx->pc = 0x232280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_232284:
    // 0x232284: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x232284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_232288:
    // 0x232288: 0x8e250034  lw          $a1, 0x34($s1)
    ctx->pc = 0x232288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_23228c:
    // 0x23228c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x23228cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_232290:
    // 0x232290: 0xc08c8c6  jal         func_232318
label_232294:
    if (ctx->pc == 0x232294u) {
        ctx->pc = 0x232294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232290u;
        // 0x232294: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232298u;
        goto label_232298;
    }
    ctx->pc = 0x232290u;
    SET_GPR_U32(ctx, 31, 0x232298u);
    ctx->pc = 0x232294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232290u;
    // 0x232294: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232318u;
    goto label_232318;
    ctx->pc = 0x232298u;
label_232298:
    // 0x232298: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x232298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_23229c:
    // 0x23229c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x23229cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2322a0:
    // 0x2322a0: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x2322a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2322a4:
    // 0x2322a4: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x2322a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2322a8:
    // 0x2322a8: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x2322a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_2322ac:
    // 0x2322ac: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2322acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2322b0:
    // 0x2322b0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2322b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_2322b4:
    // 0x2322b4: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x2322b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_2322b8:
    // 0x2322b8: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x2322b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
label_2322bc:
    // 0x2322bc: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x2322bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_2322c0:
    // 0x2322c0: 0x14a6000c  bne         $a1, $a2, . + 4 + (0xC << 2)
label_2322c4:
    if (ctx->pc == 0x2322C4u) {
        ctx->pc = 0x2322C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2322C0u;
        // 0x2322c4: 0xae240050  sw          $a0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2322C8u;
        goto label_2322c8;
    }
    ctx->pc = 0x2322C0u;
    {
        const bool branch_taken_0x2322c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x2322C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2322C0u;
        // 0x2322c4: 0xae240050  sw          $a0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2322c0) {
            ctx->pc = 0x2322F4u;
            goto label_2322f4;
        }
    }
    ctx->pc = 0x2322C8u;
label_2322c8:
    // 0x2322c8: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x2322c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_2322cc:
    // 0x2322cc: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2322ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2322d0:
    // 0x2322d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2322d4:
    if (ctx->pc == 0x2322D4u) {
        ctx->pc = 0x2322D8u;
        goto label_2322d8;
    }
    ctx->pc = 0x2322D0u;
    {
        const bool branch_taken_0x2322d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2322d0) {
            ctx->pc = 0x2322E8u;
            goto label_2322e8;
        }
    }
    ctx->pc = 0x2322D8u;
label_2322d8:
    // 0x2322d8: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x2322d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2322dc:
    // 0x2322dc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2322dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2322e0:
    // 0x2322e0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2322e4:
    if (ctx->pc == 0x2322E4u) {
        ctx->pc = 0x2322E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2322E0u;
        // 0x2322e4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2322E8u;
        goto label_2322e8;
    }
    ctx->pc = 0x2322E0u;
    {
        const bool branch_taken_0x2322e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2322E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2322E0u;
        // 0x2322e4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2322e0) {
            ctx->pc = 0x2322F8u;
            goto label_2322f8;
        }
    }
    ctx->pc = 0x2322E8u;
label_2322e8:
    // 0x2322e8: 0xc08dbdc  jal         func_236F70
label_2322ec:
    if (ctx->pc == 0x2322ECu) {
        ctx->pc = 0x2322F0u;
        goto label_2322f0;
    }
    ctx->pc = 0x2322E8u;
    SET_GPR_U32(ctx, 31, 0x2322F0u);
    ctx->pc = 0x236F70u;
    { ctx->pc = 0x236f70; return; }
    ctx->pc = 0x2322F0u;
label_2322f0:
    // 0x2322f0: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x2322f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_2322f4:
    // 0x2322f4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2322f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2322f8:
    // 0x2322f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2322f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2322fc:
    // 0x2322fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2322fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_232300:
    // 0x232300: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x232300u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_232304:
    // 0x232304: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x232304u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_232308:
    // 0x232308: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x232308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23230c:
    // 0x23230c: 0x3e00008  jr          $ra
label_232310:
    if (ctx->pc == 0x232310u) {
        ctx->pc = 0x232310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23230Cu;
        // 0x232310: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232314u;
        goto label_232314;
    }
    ctx->pc = 0x23230Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23230Cu;
        // 0x232310: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23230Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232314u;
label_232314:
    // 0x232314: 0x0  nop
    ctx->pc = 0x232314u;
    // NOP
label_232318:
    // 0x232318: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x232318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_23231c:
    // 0x23231c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x23231cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_232320:
    // 0x232320: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x232320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_232324:
    // 0x232324: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x232324u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_232328:
    // 0x232328: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x232328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_23232c:
    // 0x23232c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23232cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_232330:
    // 0x232330: 0x1a20000f  blez        $s1, . + 4 + (0xF << 2)
label_232334:
    if (ctx->pc == 0x232334u) {
        ctx->pc = 0x232334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232330u;
        // 0x232334: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232338u;
        goto label_232338;
    }
    ctx->pc = 0x232330u;
    {
        const bool branch_taken_0x232330 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x232334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232330u;
        // 0x232334: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232330) {
            ctx->pc = 0x232370u;
            goto label_232370;
        }
    }
    ctx->pc = 0x232338u;
label_232338:
    // 0x232338: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x232338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23233c:
    // 0x23233c: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x23233cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_232340:
    // 0x232340: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x232340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_232344:
    // 0x232344: 0xafb10008  sw          $s1, 0x8($sp)
    ctx->pc = 0x232344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
label_232348:
    // 0x232348: 0xc0692a8  jal         func_1A4AA0
label_23234c:
    if (ctx->pc == 0x23234Cu) {
        ctx->pc = 0x23234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232348u;
        // 0x23234c: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232350u;
        goto label_232350;
    }
    ctx->pc = 0x232348u;
    SET_GPR_U32(ctx, 31, 0x232350u);
    ctx->pc = 0x23234Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232348u;
    // 0x23234c: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    { ctx->pc = 0x1a4aa0; return; }
    ctx->pc = 0x232350u;
label_232350:
    // 0x232350: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x232350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_232354:
    // 0x232354: 0xc0692f8  jal         func_1A4BE0
label_232358:
    if (ctx->pc == 0x232358u) {
        ctx->pc = 0x232358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232354u;
        // 0x232358: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23235Cu;
        goto label_23235c;
    }
    ctx->pc = 0x232354u;
    SET_GPR_U32(ctx, 31, 0x23235Cu);
    ctx->pc = 0x232358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232354u;
    // 0x232358: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4BE0u;
    { ctx->pc = 0x1a4be0; return; }
    ctx->pc = 0x23235Cu;
label_23235c:
    // 0x23235c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23235cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_232360:
    // 0x232360: 0xc0692f0  jal         func_1A4BC0
label_232364:
    if (ctx->pc == 0x232364u) {
        ctx->pc = 0x232364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232360u;
        // 0x232364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232368u;
        goto label_232368;
    }
    ctx->pc = 0x232360u;
    SET_GPR_U32(ctx, 31, 0x232368u);
    ctx->pc = 0x232364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232360u;
    // 0x232364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4BC0u;
    { ctx->pc = 0x1a4bc0; return; }
    ctx->pc = 0x232368u;
label_232368:
    // 0x232368: 0x441fffd  bgez        $v0, . + 4 + (-0x3 << 2)
label_23236c:
    if (ctx->pc == 0x23236Cu) {
        ctx->pc = 0x23236Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232368u;
        // 0x23236c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232370u;
        goto label_232370;
    }
    ctx->pc = 0x232368u;
    {
        const bool branch_taken_0x232368 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x23236Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232368u;
        // 0x23236c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232368) {
            ctx->pc = 0x232360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_232360;
        }
    }
    ctx->pc = 0x232370u;
label_232370:
    // 0x232370: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x232370u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_232374:
    // 0x232374: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x232374u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_232378:
    // 0x232378: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x232378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23237c:
    // 0x23237c: 0x3e00008  jr          $ra
label_232380:
    if (ctx->pc == 0x232380u) {
        ctx->pc = 0x232380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23237Cu;
        // 0x232380: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232384u;
        goto label_232384;
    }
    ctx->pc = 0x23237Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23237Cu;
        // 0x232380: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23237Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232384u;
label_232384:
    // 0x232384: 0x0  nop
    ctx->pc = 0x232384u;
    // NOP
label_232388:
    // 0x232388: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x232388u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23238c:
    // 0x23238c: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x23238cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
label_232390:
    // 0x232390: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x232390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_232394:
    // 0x232394: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x232394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_232398:
    // 0x232398: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x232398u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_23239c:
    // 0x23239c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x23239cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_2323a0:
    // 0x2323a0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2323a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_2323a4:
    // 0x2323a4: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x2323a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_2323a8:
    // 0x2323a8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x2323a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2323ac:
    // 0x2323ac: 0x10a40004  beq         $a1, $a0, . + 4 + (0x4 << 2)
label_2323b0:
    if (ctx->pc == 0x2323B0u) {
        ctx->pc = 0x2323B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2323ACu;
        // 0x2323b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2323B4u;
        goto label_2323b4;
    }
    ctx->pc = 0x2323ACu;
    {
        const bool branch_taken_0x2323ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x2323B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2323ACu;
        // 0x2323b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2323ac) {
            ctx->pc = 0x2323C0u;
            goto label_2323c0;
        }
    }
    ctx->pc = 0x2323B4u;
label_2323b4:
    // 0x2323b4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2323b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2323b8:
    // 0x2323b8: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x2323b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2323bc:
    // 0x2323bc: 0x212c2  srl         $v0, $v0, 11
    ctx->pc = 0x2323bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
label_2323c0:
    // 0x2323c0: 0x3e00008  jr          $ra
label_2323c4:
    if (ctx->pc == 0x2323C4u) {
        ctx->pc = 0x2323C8u;
        goto label_2323c8;
    }
    ctx->pc = 0x2323C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2323C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2323C8u;
label_2323c8:
    // 0x2323c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2323c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2323cc:
    // 0x2323cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2323ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2323d0:
    // 0x2323d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2323d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2323d4:
    // 0x2323d4: 0xc06b518  jal         func_1AD460
label_2323d8:
    if (ctx->pc == 0x2323D8u) {
        ctx->pc = 0x2323D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2323D4u;
        // 0x2323d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2323DCu;
        goto label_2323dc;
    }
    ctx->pc = 0x2323D4u;
    SET_GPR_U32(ctx, 31, 0x2323DCu);
    ctx->pc = 0x2323D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2323D4u;
    // 0x2323d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x2323DCu;
label_2323dc:
    // 0x2323dc: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x2323dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_2323e0:
    // 0x2323e0: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x2323e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
label_2323e4:
    // 0x2323e4: 0x34a5f520  ori         $a1, $a1, 0xF520
    ctx->pc = 0x2323e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62752);
label_2323e8:
    // 0x2323e8: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x2323e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
label_2323ec:
    // 0x2323ec: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2323ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2323f0:
    // 0x2323f0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2323f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_2323f4:
    // 0x2323f4: 0x34c6f590  ori         $a2, $a2, 0xF590
    ctx->pc = 0x2323f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62864);
label_2323f8:
    // 0x2323f8: 0x3484b000  ori         $a0, $a0, 0xB000
    ctx->pc = 0x2323f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45056);
label_2323fc:
    // 0x2323fc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2323fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_232400:
    // 0x232400: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x232400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
label_232404:
    // 0x232404: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x232404u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_232408:
    // 0x232408: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x232408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_23240c:
    // 0x23240c: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x23240cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
label_232410:
    // 0x232410: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x232410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_232414:
    // 0x232414: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x232414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_232418:
    // 0x232418: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x232418u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23241c:
    // 0x23241c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23241cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_232420:
    // 0x232420: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x232420u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_232424:
    // 0x232424: 0x806b52a  j           func_1AD4A8
label_232428:
    if (ctx->pc == 0x232428u) {
        ctx->pc = 0x232428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232424u;
        // 0x232428: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23242Cu;
        goto label_23242c;
    }
    ctx->pc = 0x232424u;
    ctx->pc = 0x232428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232424u;
    // 0x232428: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x23242Cu;
label_23242c:
    // 0x23242c: 0x0  nop
    ctx->pc = 0x23242cu;
    // NOP
label_232430:
    // 0x232430: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x232430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_232434:
    // 0x232434: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x232434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_232438:
    // 0x232438: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x232438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_23243c:
    // 0x23243c: 0xc06b518  jal         func_1AD460
label_232440:
    if (ctx->pc == 0x232440u) {
        ctx->pc = 0x232440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23243Cu;
        // 0x232440: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232444u;
        goto label_232444;
    }
    ctx->pc = 0x23243Cu;
    SET_GPR_U32(ctx, 31, 0x232444u);
    ctx->pc = 0x232440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23243Cu;
    // 0x232440: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x232444u;
label_232444:
    // 0x232444: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x232444u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_232448:
    // 0x232448: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x232448u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
label_23244c:
    // 0x23244c: 0x34a5f520  ori         $a1, $a1, 0xF520
    ctx->pc = 0x23244cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62752);
label_232450:
    // 0x232450: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x232450u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
label_232454:
    // 0x232454: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x232454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_232458:
    // 0x232458: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x232458u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_23245c:
    // 0x23245c: 0x34c6f590  ori         $a2, $a2, 0xF590
    ctx->pc = 0x23245cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62864);
label_232460:
    // 0x232460: 0x3484b400  ori         $a0, $a0, 0xB400
    ctx->pc = 0x232460u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46080);
label_232464:
    // 0x232464: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x232464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_232468:
    // 0x232468: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x232468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
label_23246c:
    // 0x23246c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x23246cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_232470:
    // 0x232470: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x232470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_232474:
    // 0x232474: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x232474u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
label_232478:
    // 0x232478: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x232478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23247c:
    // 0x23247c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x23247cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_232480:
    // 0x232480: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x232480u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_232484:
    // 0x232484: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x232484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_232488:
    // 0x232488: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x232488u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_23248c:
    // 0x23248c: 0x806b52a  j           func_1AD4A8
label_232490:
    if (ctx->pc == 0x232490u) {
        ctx->pc = 0x232490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23248Cu;
        // 0x232490: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232494u;
        goto label_232494;
    }
    ctx->pc = 0x23248Cu;
    ctx->pc = 0x232490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23248Cu;
    // 0x232490: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x232494u;
label_232494:
    // 0x232494: 0x0  nop
    ctx->pc = 0x232494u;
    // NOP
label_232498:
    // 0x232498: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x232498u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
label_23249c:
    // 0x23249c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x23249cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_2324a0:
    // 0x2324a0: 0x6313a  dsrl        $a2, $a2, 4
    ctx->pc = 0x2324a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
label_2324a4:
    // 0x2324a4: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x2324a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
label_2324a8:
    // 0x2324a8: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x2324a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_2324ac:
    // 0x2324ac: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2324acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
label_2324b0:
    // 0x2324b0: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x2324b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
label_2324b4:
    // 0x2324b4: 0x3e00008  jr          $ra
label_2324b8:
    if (ctx->pc == 0x2324B8u) {
        ctx->pc = 0x2324B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2324B4u;
        // 0x2324b8: 0xfc850000  sd          $a1, 0x0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2324BCu;
        goto label_2324bc;
    }
    ctx->pc = 0x2324B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2324B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2324B4u;
        // 0x2324b8: 0xfc850000  sd          $a1, 0x0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2324B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2324BCu;
label_2324bc:
    // 0x2324bc: 0x0  nop
    ctx->pc = 0x2324bcu;
    // NOP
label_2324c0:
    // 0x2324c0: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x2324c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_2324c4:
    // 0x2324c4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2324c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2324c8:
    // 0x2324c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2324c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2324cc:
    // 0x2324cc: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x2324ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_2324d0:
    // 0x2324d0: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x2324d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_2324d4:
    // 0x2324d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2324d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2324d8:
    // 0x2324d8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2324d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_2324dc:
    // 0x2324dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2324dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2324e0:
    // 0x2324e0: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x2324e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_2324e4:
    // 0x2324e4: 0x752c0  sll         $t2, $a3, 11
    ctx->pc = 0x2324e4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), 11));
label_2324e8:
    // 0x2324e8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2324e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_2324ec:
    // 0x2324ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2324ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2324f0:
    // 0x2324f0: 0xae090054  sw          $t1, 0x54($s0)
    ctx->pc = 0x2324f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 9));
label_2324f4:
    // 0x2324f4: 0xae0a0018  sw          $t2, 0x18($s0)
    ctx->pc = 0x2324f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 10));
label_2324f8:
    // 0x2324f8: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x2324f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
label_2324fc:
    // 0x2324fc: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2324fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_232500:
    // 0x232500: 0xae080050  sw          $t0, 0x50($s0)
    ctx->pc = 0x232500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 8));
label_232504:
    // 0x232504: 0xae060004  sw          $a2, 0x4($s0)
    ctx->pc = 0x232504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
label_232508:
    // 0x232508: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x232508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_23250c:
    // 0x23250c: 0xc069208  jal         func_1A4820
label_232510:
    if (ctx->pc == 0x232510u) {
        ctx->pc = 0x232510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23250Cu;
        // 0x232510: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232514u;
        goto label_232514;
    }
    ctx->pc = 0x23250Cu;
    SET_GPR_U32(ctx, 31, 0x232514u);
    ctx->pc = 0x232510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23250Cu;
    // 0x232510: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    { ctx->pc = 0x1a4820; return; }
    ctx->pc = 0x232514u;
label_232514:
    // 0x232514: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x232514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_232518:
    // 0x232518: 0xc08c94e  jal         func_232538
label_23251c:
    if (ctx->pc == 0x23251Cu) {
        ctx->pc = 0x23251Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232518u;
        // 0x23251c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232520u;
        goto label_232520;
    }
    ctx->pc = 0x232518u;
    SET_GPR_U32(ctx, 31, 0x232520u);
    ctx->pc = 0x23251Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232518u;
    // 0x23251c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232538u;
    goto label_232538;
    ctx->pc = 0x232520u;
label_232520:
    // 0x232520: 0xfe000048  sd          $zero, 0x48($s0)
    ctx->pc = 0x232520u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 0));
label_232524:
    // 0x232524: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x232524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_232528:
    // 0x232528: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x232528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23252c:
    // 0x23252c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x23252cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_232530:
    // 0x232530: 0x3e00008  jr          $ra
label_232534:
    if (ctx->pc == 0x232534u) {
        ctx->pc = 0x232534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232530u;
        // 0x232534: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232538u;
        goto label_232538;
    }
    ctx->pc = 0x232530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232530u;
        // 0x232534: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232538u;
label_232538:
    // 0x232538: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x232538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23253c:
    // 0x23253c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23253cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_232540:
    // 0x232540: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x232540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_232544:
    // 0x232544: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x232544u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_232548:
    // 0x232548: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x232548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_23254c:
    // 0x23254c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x23254cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_232550:
    // 0x232550: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x232550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_232554:
    // 0x232554: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x232554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_232558:
    // 0x232558: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x232558u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
label_23255c:
    // 0x23255c: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x23255cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_232560:
    // 0x232560: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x232560u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_232564:
    // 0x232564: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x232564u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_232568:
    // 0x232568: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x232568u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_23256c:
    // 0x23256c: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x23256cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
label_232570:
    // 0x232570: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
label_232574:
    if (ctx->pc == 0x232574u) {
        ctx->pc = 0x232574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232570u;
        // 0x232574: 0xae20005c  sw          $zero, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232578u;
        goto label_232578;
    }
    ctx->pc = 0x232570u;
    {
        const bool branch_taken_0x232570 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x232574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232570u;
        // 0x232574: 0xae20005c  sw          $zero, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232570) {
            ctx->pc = 0x2325A4u;
            goto label_2325a4;
        }
    }
    ctx->pc = 0x232578u;
label_232578:
    // 0x232578: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x232578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_23257c:
    // 0x23257c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x23257cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_232580:
    // 0x232580: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x232580u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_232584:
    // 0x232584: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x232584u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_232588:
    // 0x232588: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x232588u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
label_23258c:
    // 0x23258c: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x23258cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
label_232590:
    // 0x232590: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x232590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_232594:
    // 0x232594: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x232594u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
label_232598:
    // 0x232598: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x232598u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_23259c:
    // 0x23259c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_2325a0:
    if (ctx->pc == 0x2325A0u) {
        ctx->pc = 0x2325A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23259Cu;
        // 0x2325a0: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2325A4u;
        goto label_2325a4;
    }
    ctx->pc = 0x23259Cu;
    {
        const bool branch_taken_0x23259c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2325A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23259Cu;
        // 0x2325a0: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23259c) {
            ctx->pc = 0x232580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_232580;
        }
    }
    ctx->pc = 0x2325A4u;
label_2325a4:
    // 0x2325a4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2325a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2325a8:
    // 0x2325a8: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
label_2325ac:
    if (ctx->pc == 0x2325ACu) {
        ctx->pc = 0x2325ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2325A8u;
        // 0x2325ac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2325B0u;
        goto label_2325b0;
    }
    ctx->pc = 0x2325A8u;
    {
        const bool branch_taken_0x2325a8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2325ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2325A8u;
        // 0x2325ac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2325a8) {
            ctx->pc = 0x2325F8u;
            goto label_2325f8;
        }
    }
    ctx->pc = 0x2325B0u;
label_2325b0:
    // 0x2325b0: 0x3c100fff  lui         $s0, 0xFFF
    ctx->pc = 0x2325b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4095 << 16));
label_2325b4:
    // 0x2325b4: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x2325b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
label_2325b8:
    // 0x2325b8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2325b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2325bc:
    // 0x2325bc: 0x0  nop
    ctx->pc = 0x2325bcu;
    // NOP
label_2325c0:
    // 0x2325c0: 0x122ac0  sll         $a1, $s2, 11
    ctx->pc = 0x2325c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 11));
label_2325c4:
    // 0x2325c4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2325c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2325c8:
    // 0x2325c8: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x2325c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_2325cc:
    // 0x2325cc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2325ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2325d0:
    // 0x2325d0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2325d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2325d4:
    // 0x2325d4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2325d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2325d8:
    // 0x2325d8: 0xb02824  and         $a1, $a1, $s0
    ctx->pc = 0x2325d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
label_2325dc:
    // 0x2325dc: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x2325dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2325e0:
    // 0x2325e0: 0xc08c926  jal         func_232498
label_2325e4:
    if (ctx->pc == 0x2325E4u) {
        ctx->pc = 0x2325E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2325E0u;
        // 0x2325e4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2325E8u;
        goto label_2325e8;
    }
    ctx->pc = 0x2325E0u;
    SET_GPR_U32(ctx, 31, 0x2325E8u);
    ctx->pc = 0x2325E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2325E0u;
    // 0x2325e4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232498u;
    goto label_232498;
    ctx->pc = 0x2325E8u;
label_2325e8:
    // 0x2325e8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2325e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2325ec:
    // 0x2325ec: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2325ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2325f0:
    // 0x2325f0: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
label_2325f4:
    if (ctx->pc == 0x2325F4u) {
        ctx->pc = 0x2325F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2325F0u;
        // 0x2325f4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2325F8u;
        goto label_2325f8;
    }
    ctx->pc = 0x2325F0u;
    {
        const bool branch_taken_0x2325f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2325f0) {
            ctx->pc = 0x2325F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2325F0u;
            // 0x2325f4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2325C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2325c0;
        }
    }
    ctx->pc = 0x2325F8u;
label_2325f8:
    // 0x2325f8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2325f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2325fc:
    // 0x2325fc: 0x3c100fff  lui         $s0, 0xFFF
    ctx->pc = 0x2325fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4095 << 16));
label_232600:
    // 0x232600: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x232600u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
label_232604:
    // 0x232604: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x232604u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_232608:
    // 0x232608: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x232608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_23260c:
    // 0x23260c: 0xb02824  and         $a1, $a1, $s0
    ctx->pc = 0x23260cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
label_232610:
    // 0x232610: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x232610u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_232614:
    // 0x232614: 0xc08c926  jal         func_232498
label_232618:
    if (ctx->pc == 0x232618u) {
        ctx->pc = 0x232618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232614u;
        // 0x232618: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23261Cu;
        goto label_23261c;
    }
    ctx->pc = 0x232614u;
    SET_GPR_U32(ctx, 31, 0x23261Cu);
    ctx->pc = 0x232618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232614u;
    // 0x232618: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232498u;
    goto label_232498;
    ctx->pc = 0x23261Cu;
label_23261c:
    // 0x23261c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x23261cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_232620:
    // 0x232620: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x232620u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_232624:
    // 0x232624: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x232624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_232628:
    // 0x232628: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x232628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23262c:
    // 0x23262c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x23262cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_232630:
    // 0x232630: 0xd03024  and         $a2, $a2, $s0
    ctx->pc = 0x232630u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 16));
label_232634:
    // 0x232634: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x232634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46096);
label_232638:
    // 0x232638: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x232638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_23263c:
    // 0x23263c: 0x34a5b430  ori         $a1, $a1, 0xB430
    ctx->pc = 0x23263cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46128);
label_232640:
    // 0x232640: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x232640u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
label_232644:
    // 0x232644: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x232644u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_232648:
    // 0x232648: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x232648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_23264c:
    // 0x23264c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x23264cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_232650:
    // 0x232650: 0xc08c90c  jal         func_232430
label_232654:
    if (ctx->pc == 0x232654u) {
        ctx->pc = 0x232654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232650u;
        // 0x232654: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232658u;
        goto label_232658;
    }
    ctx->pc = 0x232650u;
    SET_GPR_U32(ctx, 31, 0x232658u);
    ctx->pc = 0x232654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232650u;
    // 0x232654: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232430u;
    goto label_232430;
    ctx->pc = 0x232658u;
label_232658:
    // 0x232658: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x232658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23265c:
    // 0x23265c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23265cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_232660:
    // 0x232660: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x232660u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_232664:
    // 0x232664: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x232664u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_232668:
    // 0x232668: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x232668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_23266c:
    // 0x23266c: 0x3e00008  jr          $ra
label_232670:
    if (ctx->pc == 0x232670u) {
        ctx->pc = 0x232670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23266Cu;
        // 0x232670: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232674u;
        goto label_232674;
    }
    ctx->pc = 0x23266Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23266Cu;
        // 0x232670: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23266Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232674u;
label_232674:
    // 0x232674: 0x0  nop
    ctx->pc = 0x232674u;
    // NOP
label_232678:
    // 0x232678: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x232678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_23267c:
    // 0x23267c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23267cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_232680:
    // 0x232680: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x232680u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_232684:
    // 0x232684: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x232684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_232688:
    // 0x232688: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x232688u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23268c:
    // 0x23268c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23268cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_232690:
    // 0x232690: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x232690u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_232694:
    // 0x232694: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x232694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_232698:
    // 0x232698: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x232698u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_23269c:
    // 0x23269c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x23269cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2326a0:
    // 0x2326a0: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2326a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2326a4:
    // 0x2326a4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2326a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_2326a8:
    // 0x2326a8: 0xc069218  jal         func_1A4860
label_2326ac:
    if (ctx->pc == 0x2326ACu) {
        ctx->pc = 0x2326ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2326A8u;
        // 0x2326ac: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2326B0u;
        goto label_2326b0;
    }
    ctx->pc = 0x2326A8u;
    SET_GPR_U32(ctx, 31, 0x2326B0u);
    ctx->pc = 0x2326ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2326A8u;
    // 0x2326ac: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x2326B0u;
label_2326b0:
    // 0x2326b0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2326b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2326b4:
    // 0x2326b4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x2326b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2326b8:
    // 0x2326b8: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x2326b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2326bc:
    // 0x2326bc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2326bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2326c0:
    // 0x2326c0: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x2326c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2326c4:
    // 0x2326c4: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x2326c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
label_2326c8:
    // 0x2326c8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2326c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2326cc:
    // 0x2326cc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2326ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2326d0:
    // 0x2326d0: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_2326d4:
    if (ctx->pc == 0x2326D4u) {
        ctx->pc = 0x2326D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2326D0u;
        // 0x2326d4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2326D8u;
        goto label_2326d8;
    }
    ctx->pc = 0x2326D0u;
    {
        const bool branch_taken_0x2326d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2326d0) {
            ctx->pc = 0x2326D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2326D0u;
            // 0x2326d4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2326D8u;
            goto label_2326d8;
        }
    }
    ctx->pc = 0x2326D8u;
label_2326d8:
    // 0x2326d8: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x2326d8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2326dc:
    // 0x2326dc: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2326dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->pc = 0x2326e0u;
    return;
}
