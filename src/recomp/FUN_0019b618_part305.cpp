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


void FUN_0019b618_part305(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x22fd18u: goto label_22fd18;
        case 0x22fd1cu: goto label_22fd1c;
        case 0x22fd20u: goto label_22fd20;
        case 0x22fd24u: goto label_22fd24;
        case 0x22fd28u: goto label_22fd28;
        case 0x22fd2cu: goto label_22fd2c;
        case 0x22fd30u: goto label_22fd30;
        case 0x22fd34u: goto label_22fd34;
        case 0x22fd38u: goto label_22fd38;
        case 0x22fd3cu: goto label_22fd3c;
        case 0x22fd40u: goto label_22fd40;
        case 0x22fd44u: goto label_22fd44;
        case 0x22fd48u: goto label_22fd48;
        case 0x22fd4cu: goto label_22fd4c;
        case 0x22fd50u: goto label_22fd50;
        case 0x22fd54u: goto label_22fd54;
        case 0x22fd58u: goto label_22fd58;
        case 0x22fd5cu: goto label_22fd5c;
        case 0x22fd60u: goto label_22fd60;
        case 0x22fd64u: goto label_22fd64;
        case 0x22fd68u: goto label_22fd68;
        case 0x22fd6cu: goto label_22fd6c;
        case 0x22fd70u: goto label_22fd70;
        case 0x22fd74u: goto label_22fd74;
        case 0x22fd78u: goto label_22fd78;
        case 0x22fd7cu: goto label_22fd7c;
        case 0x22fd80u: goto label_22fd80;
        case 0x22fd84u: goto label_22fd84;
        case 0x22fd88u: goto label_22fd88;
        case 0x22fd8cu: goto label_22fd8c;
        case 0x22fd90u: goto label_22fd90;
        case 0x22fd94u: goto label_22fd94;
        case 0x22fd98u: goto label_22fd98;
        case 0x22fd9cu: goto label_22fd9c;
        case 0x22fda0u: goto label_22fda0;
        case 0x22fda4u: goto label_22fda4;
        case 0x22fda8u: goto label_22fda8;
        case 0x22fdacu: goto label_22fdac;
        case 0x22fdb0u: goto label_22fdb0;
        case 0x22fdb4u: goto label_22fdb4;
        case 0x22fdb8u: goto label_22fdb8;
        case 0x22fdbcu: goto label_22fdbc;
        case 0x22fdc0u: goto label_22fdc0;
        case 0x22fdc4u: goto label_22fdc4;
        case 0x22fdc8u: goto label_22fdc8;
        case 0x22fdccu: goto label_22fdcc;
        case 0x22fdd0u: goto label_22fdd0;
        case 0x22fdd4u: goto label_22fdd4;
        case 0x22fdd8u: goto label_22fdd8;
        case 0x22fddcu: goto label_22fddc;
        case 0x22fde0u: goto label_22fde0;
        case 0x22fde4u: goto label_22fde4;
        case 0x22fde8u: goto label_22fde8;
        case 0x22fdecu: goto label_22fdec;
        case 0x22fdf0u: goto label_22fdf0;
        case 0x22fdf4u: goto label_22fdf4;
        case 0x22fdf8u: goto label_22fdf8;
        case 0x22fdfcu: goto label_22fdfc;
        case 0x22fe00u: goto label_22fe00;
        case 0x22fe04u: goto label_22fe04;
        case 0x22fe08u: goto label_22fe08;
        case 0x22fe0cu: goto label_22fe0c;
        case 0x22fe10u: goto label_22fe10;
        case 0x22fe14u: goto label_22fe14;
        case 0x22fe18u: goto label_22fe18;
        case 0x22fe1cu: goto label_22fe1c;
        case 0x22fe20u: goto label_22fe20;
        case 0x22fe24u: goto label_22fe24;
        case 0x22fe28u: goto label_22fe28;
        case 0x22fe2cu: goto label_22fe2c;
        case 0x22fe30u: goto label_22fe30;
        case 0x22fe34u: goto label_22fe34;
        case 0x22fe38u: goto label_22fe38;
        case 0x22fe3cu: goto label_22fe3c;
        case 0x22fe40u: goto label_22fe40;
        case 0x22fe44u: goto label_22fe44;
        case 0x22fe48u: goto label_22fe48;
        case 0x22fe4cu: goto label_22fe4c;
        case 0x22fe50u: goto label_22fe50;
        case 0x22fe54u: goto label_22fe54;
        case 0x22fe58u: goto label_22fe58;
        case 0x22fe5cu: goto label_22fe5c;
        case 0x22fe60u: goto label_22fe60;
        case 0x22fe64u: goto label_22fe64;
        case 0x22fe68u: goto label_22fe68;
        case 0x22fe6cu: goto label_22fe6c;
        case 0x22fe70u: goto label_22fe70;
        case 0x22fe74u: goto label_22fe74;
        case 0x22fe78u: goto label_22fe78;
        case 0x22fe7cu: goto label_22fe7c;
        case 0x22fe80u: goto label_22fe80;
        case 0x22fe84u: goto label_22fe84;
        case 0x22fe88u: goto label_22fe88;
        case 0x22fe8cu: goto label_22fe8c;
        case 0x22fe90u: goto label_22fe90;
        case 0x22fe94u: goto label_22fe94;
        case 0x22fe98u: goto label_22fe98;
        case 0x22fe9cu: goto label_22fe9c;
        case 0x22fea0u: goto label_22fea0;
        case 0x22fea4u: goto label_22fea4;
        case 0x22fea8u: goto label_22fea8;
        case 0x22feacu: goto label_22feac;
        case 0x22feb0u: goto label_22feb0;
        case 0x22feb4u: goto label_22feb4;
        case 0x22feb8u: goto label_22feb8;
        case 0x22febcu: goto label_22febc;
        case 0x22fec0u: goto label_22fec0;
        case 0x22fec4u: goto label_22fec4;
        case 0x22fec8u: goto label_22fec8;
        case 0x22feccu: goto label_22fecc;
        case 0x22fed0u: goto label_22fed0;
        case 0x22fed4u: goto label_22fed4;
        case 0x22fed8u: goto label_22fed8;
        case 0x22fedcu: goto label_22fedc;
        case 0x22fee0u: goto label_22fee0;
        case 0x22fee4u: goto label_22fee4;
        case 0x22fee8u: goto label_22fee8;
        case 0x22feecu: goto label_22feec;
        case 0x22fef0u: goto label_22fef0;
        case 0x22fef4u: goto label_22fef4;
        case 0x22fef8u: goto label_22fef8;
        case 0x22fefcu: goto label_22fefc;
        case 0x22ff00u: goto label_22ff00;
        case 0x22ff04u: goto label_22ff04;
        case 0x22ff08u: goto label_22ff08;
        case 0x22ff0cu: goto label_22ff0c;
        case 0x22ff10u: goto label_22ff10;
        case 0x22ff14u: goto label_22ff14;
        case 0x22ff18u: goto label_22ff18;
        case 0x22ff1cu: goto label_22ff1c;
        case 0x22ff20u: goto label_22ff20;
        case 0x22ff24u: goto label_22ff24;
        case 0x22ff28u: goto label_22ff28;
        case 0x22ff2cu: goto label_22ff2c;
        case 0x22ff30u: goto label_22ff30;
        case 0x22ff34u: goto label_22ff34;
        case 0x22ff38u: goto label_22ff38;
        case 0x22ff3cu: goto label_22ff3c;
        case 0x22ff40u: goto label_22ff40;
        case 0x22ff44u: goto label_22ff44;
        case 0x22ff48u: goto label_22ff48;
        case 0x22ff4cu: goto label_22ff4c;
        case 0x22ff50u: goto label_22ff50;
        case 0x22ff54u: goto label_22ff54;
        case 0x22ff58u: goto label_22ff58;
        case 0x22ff5cu: goto label_22ff5c;
        case 0x22ff60u: goto label_22ff60;
        case 0x22ff64u: goto label_22ff64;
        case 0x22ff68u: goto label_22ff68;
        case 0x22ff6cu: goto label_22ff6c;
        case 0x22ff70u: goto label_22ff70;
        case 0x22ff74u: goto label_22ff74;
        case 0x22ff78u: goto label_22ff78;
        case 0x22ff7cu: goto label_22ff7c;
        case 0x22ff80u: goto label_22ff80;
        case 0x22ff84u: goto label_22ff84;
        case 0x22ff88u: goto label_22ff88;
        case 0x22ff8cu: goto label_22ff8c;
        case 0x22ff90u: goto label_22ff90;
        case 0x22ff94u: goto label_22ff94;
        case 0x22ff98u: goto label_22ff98;
        case 0x22ff9cu: goto label_22ff9c;
        case 0x22ffa0u: goto label_22ffa0;
        case 0x22ffa4u: goto label_22ffa4;
        case 0x22ffa8u: goto label_22ffa8;
        case 0x22ffacu: goto label_22ffac;
        case 0x22ffb0u: goto label_22ffb0;
        case 0x22ffb4u: goto label_22ffb4;
        case 0x22ffb8u: goto label_22ffb8;
        case 0x22ffbcu: goto label_22ffbc;
        case 0x22ffc0u: goto label_22ffc0;
        case 0x22ffc4u: goto label_22ffc4;
        case 0x22ffc8u: goto label_22ffc8;
        case 0x22ffccu: goto label_22ffcc;
        case 0x22ffd0u: goto label_22ffd0;
        case 0x22ffd4u: goto label_22ffd4;
        case 0x22ffd8u: goto label_22ffd8;
        case 0x22ffdcu: goto label_22ffdc;
        case 0x22ffe0u: goto label_22ffe0;
        case 0x22ffe4u: goto label_22ffe4;
        case 0x22ffe8u: goto label_22ffe8;
        case 0x22ffecu: goto label_22ffec;
        case 0x22fff0u: goto label_22fff0;
        case 0x22fff4u: goto label_22fff4;
        case 0x22fff8u: goto label_22fff8;
        case 0x22fffcu: goto label_22fffc;
        case 0x230000u: goto label_230000;
        case 0x230004u: goto label_230004;
        case 0x230008u: goto label_230008;
        case 0x23000cu: goto label_23000c;
        case 0x230010u: goto label_230010;
        case 0x230014u: goto label_230014;
        case 0x230018u: goto label_230018;
        case 0x23001cu: goto label_23001c;
        case 0x230020u: goto label_230020;
        case 0x230024u: goto label_230024;
        case 0x230028u: goto label_230028;
        case 0x23002cu: goto label_23002c;
        case 0x230030u: goto label_230030;
        case 0x230034u: goto label_230034;
        case 0x230038u: goto label_230038;
        case 0x23003cu: goto label_23003c;
        case 0x230040u: goto label_230040;
        case 0x230044u: goto label_230044;
        case 0x230048u: goto label_230048;
        case 0x23004cu: goto label_23004c;
        case 0x230050u: goto label_230050;
        case 0x230054u: goto label_230054;
        case 0x230058u: goto label_230058;
        case 0x23005cu: goto label_23005c;
        case 0x230060u: goto label_230060;
        case 0x230064u: goto label_230064;
        case 0x230068u: goto label_230068;
        case 0x23006cu: goto label_23006c;
        case 0x230070u: goto label_230070;
        case 0x230074u: goto label_230074;
        case 0x230078u: goto label_230078;
        case 0x23007cu: goto label_23007c;
        case 0x230080u: goto label_230080;
        case 0x230084u: goto label_230084;
        case 0x230088u: goto label_230088;
        case 0x23008cu: goto label_23008c;
        case 0x230090u: goto label_230090;
        case 0x230094u: goto label_230094;
        case 0x230098u: goto label_230098;
        case 0x23009cu: goto label_23009c;
        case 0x2300a0u: goto label_2300a0;
        case 0x2300a4u: goto label_2300a4;
        case 0x2300a8u: goto label_2300a8;
        case 0x2300acu: goto label_2300ac;
        case 0x2300b0u: goto label_2300b0;
        case 0x2300b4u: goto label_2300b4;
        case 0x2300b8u: goto label_2300b8;
        case 0x2300bcu: goto label_2300bc;
        case 0x2300c0u: goto label_2300c0;
        case 0x2300c4u: goto label_2300c4;
        case 0x2300c8u: goto label_2300c8;
        case 0x2300ccu: goto label_2300cc;
        case 0x2300d0u: goto label_2300d0;
        case 0x2300d4u: goto label_2300d4;
        case 0x2300d8u: goto label_2300d8;
        case 0x2300dcu: goto label_2300dc;
        case 0x2300e0u: goto label_2300e0;
        case 0x2300e4u: goto label_2300e4;
        case 0x2300e8u: goto label_2300e8;
        case 0x2300ecu: goto label_2300ec;
        case 0x2300f0u: goto label_2300f0;
        case 0x2300f4u: goto label_2300f4;
        case 0x2300f8u: goto label_2300f8;
        case 0x2300fcu: goto label_2300fc;
        case 0x230100u: goto label_230100;
        case 0x230104u: goto label_230104;
        case 0x230108u: goto label_230108;
        case 0x23010cu: goto label_23010c;
        case 0x230110u: goto label_230110;
        case 0x230114u: goto label_230114;
        case 0x230118u: goto label_230118;
        case 0x23011cu: goto label_23011c;
        case 0x230120u: goto label_230120;
        case 0x230124u: goto label_230124;
        case 0x230128u: goto label_230128;
        case 0x23012cu: goto label_23012c;
        case 0x230130u: goto label_230130;
        case 0x230134u: goto label_230134;
        case 0x230138u: goto label_230138;
        case 0x23013cu: goto label_23013c;
        case 0x230140u: goto label_230140;
        case 0x230144u: goto label_230144;
        case 0x230148u: goto label_230148;
        case 0x23014cu: goto label_23014c;
        case 0x230150u: goto label_230150;
        case 0x230154u: goto label_230154;
        case 0x230158u: goto label_230158;
        case 0x23015cu: goto label_23015c;
        case 0x230160u: goto label_230160;
        case 0x230164u: goto label_230164;
        case 0x230168u: goto label_230168;
        case 0x23016cu: goto label_23016c;
        case 0x230170u: goto label_230170;
        case 0x230174u: goto label_230174;
        case 0x230178u: goto label_230178;
        case 0x23017cu: goto label_23017c;
        case 0x230180u: goto label_230180;
        case 0x230184u: goto label_230184;
        case 0x230188u: goto label_230188;
        case 0x23018cu: goto label_23018c;
        case 0x230190u: goto label_230190;
        case 0x230194u: goto label_230194;
        case 0x230198u: goto label_230198;
        case 0x23019cu: goto label_23019c;
        case 0x2301a0u: goto label_2301a0;
        case 0x2301a4u: goto label_2301a4;
        case 0x2301a8u: goto label_2301a8;
        case 0x2301acu: goto label_2301ac;
        case 0x2301b0u: goto label_2301b0;
        case 0x2301b4u: goto label_2301b4;
        case 0x2301b8u: goto label_2301b8;
        case 0x2301bcu: goto label_2301bc;
        case 0x2301c0u: goto label_2301c0;
        case 0x2301c4u: goto label_2301c4;
        case 0x2301c8u: goto label_2301c8;
        case 0x2301ccu: goto label_2301cc;
        case 0x2301d0u: goto label_2301d0;
        case 0x2301d4u: goto label_2301d4;
        case 0x2301d8u: goto label_2301d8;
        case 0x2301dcu: goto label_2301dc;
        case 0x2301e0u: goto label_2301e0;
        case 0x2301e4u: goto label_2301e4;
        case 0x2301e8u: goto label_2301e8;
        case 0x2301ecu: goto label_2301ec;
        case 0x2301f0u: goto label_2301f0;
        case 0x2301f4u: goto label_2301f4;
        case 0x2301f8u: goto label_2301f8;
        case 0x2301fcu: goto label_2301fc;
        case 0x230200u: goto label_230200;
        case 0x230204u: goto label_230204;
        case 0x230208u: goto label_230208;
        case 0x23020cu: goto label_23020c;
        case 0x230210u: goto label_230210;
        case 0x230214u: goto label_230214;
        case 0x230218u: goto label_230218;
        case 0x23021cu: goto label_23021c;
        case 0x230220u: goto label_230220;
        case 0x230224u: goto label_230224;
        case 0x230228u: goto label_230228;
        case 0x23022cu: goto label_23022c;
        case 0x230230u: goto label_230230;
        case 0x230234u: goto label_230234;
        case 0x230238u: goto label_230238;
        case 0x23023cu: goto label_23023c;
        case 0x230240u: goto label_230240;
        case 0x230244u: goto label_230244;
        case 0x230248u: goto label_230248;
        case 0x23024cu: goto label_23024c;
        case 0x230250u: goto label_230250;
        case 0x230254u: goto label_230254;
        case 0x230258u: goto label_230258;
        case 0x23025cu: goto label_23025c;
        case 0x230260u: goto label_230260;
        case 0x230264u: goto label_230264;
        case 0x230268u: goto label_230268;
        case 0x23026cu: goto label_23026c;
        case 0x230270u: goto label_230270;
        case 0x230274u: goto label_230274;
        case 0x230278u: goto label_230278;
        case 0x23027cu: goto label_23027c;
        case 0x230280u: goto label_230280;
        case 0x230284u: goto label_230284;
        case 0x230288u: goto label_230288;
        case 0x23028cu: goto label_23028c;
        case 0x230290u: goto label_230290;
        case 0x230294u: goto label_230294;
        case 0x230298u: goto label_230298;
        case 0x23029cu: goto label_23029c;
        case 0x2302a0u: goto label_2302a0;
        case 0x2302a4u: goto label_2302a4;
        case 0x2302a8u: goto label_2302a8;
        case 0x2302acu: goto label_2302ac;
        case 0x2302b0u: goto label_2302b0;
        case 0x2302b4u: goto label_2302b4;
        case 0x2302b8u: goto label_2302b8;
        case 0x2302bcu: goto label_2302bc;
        case 0x2302c0u: goto label_2302c0;
        case 0x2302c4u: goto label_2302c4;
        case 0x2302c8u: goto label_2302c8;
        case 0x2302ccu: goto label_2302cc;
        case 0x2302d0u: goto label_2302d0;
        case 0x2302d4u: goto label_2302d4;
        case 0x2302d8u: goto label_2302d8;
        case 0x2302dcu: goto label_2302dc;
        case 0x2302e0u: goto label_2302e0;
        case 0x2302e4u: goto label_2302e4;
        case 0x2302e8u: goto label_2302e8;
        case 0x2302ecu: goto label_2302ec;
        case 0x2302f0u: goto label_2302f0;
        case 0x2302f4u: goto label_2302f4;
        case 0x2302f8u: goto label_2302f8;
        case 0x2302fcu: goto label_2302fc;
        case 0x230300u: goto label_230300;
        case 0x230304u: goto label_230304;
        case 0x230308u: goto label_230308;
        case 0x23030cu: goto label_23030c;
        case 0x230310u: goto label_230310;
        case 0x230314u: goto label_230314;
        case 0x230318u: goto label_230318;
        case 0x23031cu: goto label_23031c;
        case 0x230320u: goto label_230320;
        case 0x230324u: goto label_230324;
        case 0x230328u: goto label_230328;
        case 0x23032cu: goto label_23032c;
        case 0x230330u: goto label_230330;
        case 0x230334u: goto label_230334;
        case 0x230338u: goto label_230338;
        case 0x23033cu: goto label_23033c;
        case 0x230340u: goto label_230340;
        case 0x230344u: goto label_230344;
        case 0x230348u: goto label_230348;
        case 0x23034cu: goto label_23034c;
        case 0x230350u: goto label_230350;
        case 0x230354u: goto label_230354;
        case 0x230358u: goto label_230358;
        case 0x23035cu: goto label_23035c;
        case 0x230360u: goto label_230360;
        case 0x230364u: goto label_230364;
        case 0x230368u: goto label_230368;
        case 0x23036cu: goto label_23036c;
        case 0x230370u: goto label_230370;
        case 0x230374u: goto label_230374;
        case 0x230378u: goto label_230378;
        case 0x23037cu: goto label_23037c;
        case 0x230380u: goto label_230380;
        case 0x230384u: goto label_230384;
        case 0x230388u: goto label_230388;
        case 0x23038cu: goto label_23038c;
        case 0x230390u: goto label_230390;
        case 0x230394u: goto label_230394;
        case 0x230398u: goto label_230398;
        case 0x23039cu: goto label_23039c;
        case 0x2303a0u: goto label_2303a0;
        case 0x2303a4u: goto label_2303a4;
        case 0x2303a8u: goto label_2303a8;
        case 0x2303acu: goto label_2303ac;
        case 0x2303b0u: goto label_2303b0;
        case 0x2303b4u: goto label_2303b4;
        case 0x2303b8u: goto label_2303b8;
        case 0x2303bcu: goto label_2303bc;
        case 0x2303c0u: goto label_2303c0;
        case 0x2303c4u: goto label_2303c4;
        case 0x2303c8u: goto label_2303c8;
        case 0x2303ccu: goto label_2303cc;
        case 0x2303d0u: goto label_2303d0;
        case 0x2303d4u: goto label_2303d4;
        case 0x2303d8u: goto label_2303d8;
        case 0x2303dcu: goto label_2303dc;
        case 0x2303e0u: goto label_2303e0;
        case 0x2303e4u: goto label_2303e4;
        case 0x2303e8u: goto label_2303e8;
        case 0x2303ecu: goto label_2303ec;
        case 0x2303f0u: goto label_2303f0;
        case 0x2303f4u: goto label_2303f4;
        case 0x2303f8u: goto label_2303f8;
        case 0x2303fcu: goto label_2303fc;
        case 0x230400u: goto label_230400;
        case 0x230404u: goto label_230404;
        case 0x230408u: goto label_230408;
        case 0x23040cu: goto label_23040c;
        case 0x230410u: goto label_230410;
        case 0x230414u: goto label_230414;
        case 0x230418u: goto label_230418;
        case 0x23041cu: goto label_23041c;
        case 0x230420u: goto label_230420;
        case 0x230424u: goto label_230424;
        case 0x230428u: goto label_230428;
        case 0x23042cu: goto label_23042c;
        case 0x230430u: goto label_230430;
        case 0x230434u: goto label_230434;
        case 0x230438u: goto label_230438;
        case 0x23043cu: goto label_23043c;
        case 0x230440u: goto label_230440;
        case 0x230444u: goto label_230444;
        case 0x230448u: goto label_230448;
        case 0x23044cu: goto label_23044c;
        case 0x230450u: goto label_230450;
        case 0x230454u: goto label_230454;
        case 0x230458u: goto label_230458;
        case 0x23045cu: goto label_23045c;
        case 0x230460u: goto label_230460;
        case 0x230464u: goto label_230464;
        case 0x230468u: goto label_230468;
        case 0x23046cu: goto label_23046c;
        case 0x230470u: goto label_230470;
        case 0x230474u: goto label_230474;
        case 0x230478u: goto label_230478;
        case 0x23047cu: goto label_23047c;
        case 0x230480u: goto label_230480;
        case 0x230484u: goto label_230484;
        case 0x230488u: goto label_230488;
        case 0x23048cu: goto label_23048c;
        case 0x230490u: goto label_230490;
        case 0x230494u: goto label_230494;
        case 0x230498u: goto label_230498;
        case 0x23049cu: goto label_23049c;
        case 0x2304a0u: goto label_2304a0;
        case 0x2304a4u: goto label_2304a4;
        case 0x2304a8u: goto label_2304a8;
        case 0x2304acu: goto label_2304ac;
        case 0x2304b0u: goto label_2304b0;
        case 0x2304b4u: goto label_2304b4;
        case 0x2304b8u: goto label_2304b8;
        case 0x2304bcu: goto label_2304bc;
        case 0x2304c0u: goto label_2304c0;
        case 0x2304c4u: goto label_2304c4;
        case 0x2304c8u: goto label_2304c8;
        case 0x2304ccu: goto label_2304cc;
        case 0x2304d0u: goto label_2304d0;
        case 0x2304d4u: goto label_2304d4;
        case 0x2304d8u: goto label_2304d8;
        case 0x2304dcu: goto label_2304dc;
        case 0x2304e0u: goto label_2304e0;
        case 0x2304e4u: goto label_2304e4;
        default: return;
    }

label_22fd18:
    // 0x22fd18: 0x1425023  subu        $t2, $t2, $v0
    ctx->pc = 0x22fd18u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_22fd1c:
    // 0x22fd1c: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x22fd1cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_22fd20:
    // 0x22fd20: 0x1ca5021  addu        $t2, $t6, $t2
    ctx->pc = 0x22fd20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
label_22fd24:
    // 0x22fd24: 0x254d0000  addiu       $t5, $t2, 0x0
    ctx->pc = 0x22fd24u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 10), 0));
label_22fd28:
    // 0x22fd28: 0x1a85021  addu        $t2, $t5, $t0
    ctx->pc = 0x22fd28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
label_22fd2c:
    // 0x22fd2c: 0x8d4f0004  lw          $t7, 0x4($t2)
    ctx->pc = 0x22fd2cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_22fd30:
    // 0x22fd30: 0x29e10195  slti        $at, $t7, 0x195
    ctx->pc = 0x22fd30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)405) ? 1 : 0);
label_22fd34:
    // 0x22fd34: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
label_22fd38:
    if (ctx->pc == 0x22FD38u) {
        ctx->pc = 0x22FD3Cu;
        goto label_22fd3c;
    }
    ctx->pc = 0x22FD34u;
    {
        const bool branch_taken_0x22fd34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fd34) {
            ctx->pc = 0x22FDA8u;
            goto label_22fda8;
        }
    }
    ctx->pc = 0x22FD3Cu;
label_22fd3c:
    // 0x22fd3c: 0x15ec0006  bne         $t7, $t4, . + 4 + (0x6 << 2)
label_22fd40:
    if (ctx->pc == 0x22FD40u) {
        ctx->pc = 0x22FD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FD3Cu;
        // 0x22fd40: 0x3401d2f1  ori         $at, $zero, 0xD2F1 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)54001);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FD44u;
        goto label_22fd44;
    }
    ctx->pc = 0x22FD3Cu;
    {
        const bool branch_taken_0x22fd3c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 12));
        ctx->pc = 0x22FD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FD3Cu;
        // 0x22fd40: 0x3401d2f1  ori         $at, $zero, 0xD2F1 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)54001);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fd3c) {
            ctx->pc = 0x22FD58u;
            goto label_22fd58;
        }
    }
    ctx->pc = 0x22FD44u;
label_22fd44:
    // 0x22fd44: 0xa1082a  slt         $at, $a1, $at
    ctx->pc = 0x22fd44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_22fd48:
    // 0x22fd48: 0x14200013  bnez        $at, . + 4 + (0x13 << 2)
label_22fd4c:
    if (ctx->pc == 0x22FD4Cu) {
        ctx->pc = 0x22FD50u;
        goto label_22fd50;
    }
    ctx->pc = 0x22FD48u;
    {
        const bool branch_taken_0x22fd48 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fd48) {
            ctx->pc = 0x22FD98u;
            goto label_22fd98;
        }
    }
    ctx->pc = 0x22FD50u;
label_22fd50:
    // 0x22fd50: 0x10000015  b           . + 4 + (0x15 << 2)
label_22fd54:
    if (ctx->pc == 0x22FD54u) {
        ctx->pc = 0x22FD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FD50u;
        // 0x22fd54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FD58u;
        goto label_22fd58;
    }
    ctx->pc = 0x22FD50u;
    {
        const bool branch_taken_0x22fd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FD50u;
        // 0x22fd54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fd50) {
            ctx->pc = 0x22FDA8u;
            goto label_22fda8;
        }
    }
    ctx->pc = 0x22FD58u;
label_22fd58:
    // 0x22fd58: 0x29e10027  slti        $at, $t7, 0x27
    ctx->pc = 0x22fd58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)39) ? 1 : 0);
label_22fd5c:
    // 0x22fd5c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_22fd60:
    if (ctx->pc == 0x22FD60u) {
        ctx->pc = 0x22FD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FD5Cu;
        // 0x22fd60: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FD64u;
        goto label_22fd64;
    }
    ctx->pc = 0x22FD5Cu;
    {
        const bool branch_taken_0x22fd5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FD5Cu;
        // 0x22fd60: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fd5c) {
            ctx->pc = 0x22FD88u;
            goto label_22fd88;
        }
    }
    ctx->pc = 0x22FD64u;
label_22fd64:
    // 0x22fd64: 0xf5040  sll         $t2, $t7, 1
    ctx->pc = 0x22fd64u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 15), 1));
label_22fd68:
    // 0x22fd68: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x22fd68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_22fd6c:
    // 0x22fd6c: 0x14f5021  addu        $t2, $t2, $t7
    ctx->pc = 0x22fd6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 15)));
label_22fd70:
    // 0x22fd70: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x22fd70u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_22fd74:
    // 0x22fd74: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x22fd74u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
label_22fd78:
    // 0x22fd78: 0x1410821  addu        $at, $t2, $at
    ctx->pc = 0x22fd78u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 1)));
label_22fd7c:
    // 0x22fd7c: 0x8c2a35fc  lw          $t2, 0x35FC($at)
    ctx->pc = 0x22fd7cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13820)));
label_22fd80:
    // 0x22fd80: 0x394a000a  xori        $t2, $t2, 0xA
    ctx->pc = 0x22fd80u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) ^ (uint64_t)(uint16_t)10);
label_22fd84:
    // 0x22fd84: 0x2d4a0001  sltiu       $t2, $t2, 0x1
    ctx->pc = 0x22fd84u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_22fd88:
    // 0x22fd88: 0x15400003  bnez        $t2, . + 4 + (0x3 << 2)
label_22fd8c:
    if (ctx->pc == 0x22FD8Cu) {
        ctx->pc = 0x22FD90u;
        goto label_22fd90;
    }
    ctx->pc = 0x22FD88u;
    {
        const bool branch_taken_0x22fd88 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fd88) {
            ctx->pc = 0x22FD98u;
            goto label_22fd98;
        }
    }
    ctx->pc = 0x22FD90u;
label_22fd90:
    // 0x22fd90: 0x10000005  b           . + 4 + (0x5 << 2)
label_22fd94:
    if (ctx->pc == 0x22FD94u) {
        ctx->pc = 0x22FD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FD90u;
        // 0x22fd94: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FD98u;
        goto label_22fd98;
    }
    ctx->pc = 0x22FD90u;
    {
        const bool branch_taken_0x22fd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FD90u;
        // 0x22fd94: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fd90) {
            ctx->pc = 0x22FDA8u;
            goto label_22fda8;
        }
    }
    ctx->pc = 0x22FD98u;
label_22fd98:
    // 0x22fd98: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x22fd98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_22fd9c:
    // 0x22fd9c: 0x288a0006  slti        $t2, $a0, 0x6
    ctx->pc = 0x22fd9cu;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
label_22fda0:
    // 0x22fda0: 0x1540ffe1  bnez        $t2, . + 4 + (-0x1F << 2)
label_22fda4:
    if (ctx->pc == 0x22FDA4u) {
        ctx->pc = 0x22FDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FDA0u;
        // 0x22fda4: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FDA8u;
        goto label_22fda8;
    }
    ctx->pc = 0x22FDA0u;
    {
        const bool branch_taken_0x22fda0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x22FDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FDA0u;
        // 0x22fda4: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fda0) {
            ctx->pc = 0x22FD28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22fd28;
        }
    }
    ctx->pc = 0x22FDA8u;
label_22fda8:
    // 0x22fda8: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
label_22fdac:
    if (ctx->pc == 0x22FDACu) {
        ctx->pc = 0x22FDB0u;
        goto label_22fdb0;
    }
    ctx->pc = 0x22FDA8u;
    {
        const bool branch_taken_0x22fda8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fda8) {
            ctx->pc = 0x22FDB8u;
            goto label_22fdb8;
        }
    }
    ctx->pc = 0x22FDB0u;
label_22fdb0:
    // 0x22fdb0: 0x10000004  b           . + 4 + (0x4 << 2)
label_22fdb4:
    if (ctx->pc == 0x22FDB4u) {
        ctx->pc = 0x22FDB8u;
        goto label_22fdb8;
    }
    ctx->pc = 0x22FDB0u;
    {
        const bool branch_taken_0x22fdb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fdb0) {
            ctx->pc = 0x22FDC4u;
            goto label_22fdc4;
        }
    }
    ctx->pc = 0x22FDB8u;
label_22fdb8:
    // 0x22fdb8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x22fdb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_22fdbc:
    // 0x22fdbc: 0x1cc0ffd0  bgtz        $a2, . + 4 + (-0x30 << 2)
label_22fdc0:
    if (ctx->pc == 0x22FDC0u) {
        ctx->pc = 0x22FDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FDBCu;
        // 0x22fdc0: 0x2529fffc  addiu       $t1, $t1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FDC4u;
        goto label_22fdc4;
    }
    ctx->pc = 0x22FDBCu;
    {
        const bool branch_taken_0x22fdbc = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x22FDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FDBCu;
        // 0x22fdc0: 0x2529fffc  addiu       $t1, $t1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fdbc) {
            ctx->pc = 0x22FD00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x22fd00; return; }
        }
    }
    ctx->pc = 0x22FDC4u;
label_22fdc4:
    // 0x22fdc4: 0x3e00008  jr          $ra
label_22fdc8:
    if (ctx->pc == 0x22FDC8u) {
        ctx->pc = 0x22FDCCu;
        goto label_22fdcc;
    }
    ctx->pc = 0x22FDC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FDC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22FDCCu;
label_22fdcc:
    // 0x22fdcc: 0x0  nop
    ctx->pc = 0x22fdccu;
    // NOP
label_22fdd0:
    // 0x22fdd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22fdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_22fdd4:
    // 0x22fdd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22fdd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_22fdd8:
    // 0x22fdd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22fdd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22fddc:
    // 0x22fddc: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x22fddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_22fde0:
    // 0x22fde0: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x22fde0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_22fde4:
    // 0x22fde4: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
label_22fde8:
    if (ctx->pc == 0x22FDE8u) {
        ctx->pc = 0x22FDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FDE4u;
        // 0x22fde8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FDECu;
        goto label_22fdec;
    }
    ctx->pc = 0x22FDE4u;
    {
        const bool branch_taken_0x22fde4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22FDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FDE4u;
        // 0x22fde8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fde4) {
            ctx->pc = 0x22FE5Cu;
            goto label_22fe5c;
        }
    }
    ctx->pc = 0x22FDECu;
label_22fdec:
    // 0x22fdec: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x22fdecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_22fdf0:
    // 0x22fdf0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x22fdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_22fdf4:
    // 0x22fdf4: 0x9025490d  lbu         $a1, 0x490D($at)
    ctx->pc = 0x22fdf4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_22fdf8:
    // 0x22fdf8: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_22fdfc:
    if (ctx->pc == 0x22FDFCu) {
        ctx->pc = 0x22FE00u;
        goto label_22fe00;
    }
    ctx->pc = 0x22FDF8u;
    {
        const bool branch_taken_0x22fdf8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x22fdf8) {
            ctx->pc = 0x22FE08u;
            goto label_22fe08;
        }
    }
    ctx->pc = 0x22FE00u;
label_22fe00:
    // 0x22fe00: 0x10000017  b           . + 4 + (0x17 << 2)
label_22fe04:
    if (ctx->pc == 0x22FE04u) {
        ctx->pc = 0x22FE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FE00u;
        // 0x22fe04: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FE08u;
        goto label_22fe08;
    }
    ctx->pc = 0x22FE00u;
    {
        const bool branch_taken_0x22fe00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FE00u;
        // 0x22fe04: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fe00) {
            ctx->pc = 0x22FE60u;
            goto label_22fe60;
        }
    }
    ctx->pc = 0x22FE08u;
label_22fe08:
    // 0x22fe08: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x22fe08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_22fe0c:
    // 0x22fe0c: 0xc045100  jal         func_114400
label_22fe10:
    if (ctx->pc == 0x22FE10u) {
        ctx->pc = 0x22FE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FE0Cu;
        // 0x22fe10: 0x24a5a650  addiu       $a1, $a1, -0x59B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FE14u;
        goto label_22fe14;
    }
    ctx->pc = 0x22FE0Cu;
    SET_GPR_U32(ctx, 31, 0x22FE14u);
    ctx->pc = 0x22FE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FE0Cu;
    // 0x22fe10: 0x24a5a650  addiu       $a1, $a1, -0x59B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114400u, 0x22FE0Cu, 0x22FE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FE14u;
label_22fe14:
    // 0x22fe14: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_22fe18:
    if (ctx->pc == 0x22FE18u) {
        ctx->pc = 0x22FE1Cu;
        goto label_22fe1c;
    }
    ctx->pc = 0x22FE14u;
    {
        const bool branch_taken_0x22fe14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fe14) {
            ctx->pc = 0x22FE5Cu;
            goto label_22fe5c;
        }
    }
    ctx->pc = 0x22FE1Cu;
label_22fe1c:
    // 0x22fe1c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x22fe1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_22fe20:
    // 0x22fe20: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x22fe20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
label_22fe24:
    // 0x22fe24: 0xc422a650  lwc1        $f2, -0x59B0($at)
    ctx->pc = 0x22fe24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22fe28:
    // 0x22fe28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22fe28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22fe2c:
    // 0x22fe2c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22fe2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22fe30:
    // 0x22fe30: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x22fe30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_22fe34:
    // 0x22fe34: 0x24c6a760  addiu       $a2, $a2, -0x58A0
    ctx->pc = 0x22fe34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944608));
label_22fe38:
    // 0x22fe38: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x22fe38u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_22fe3c:
    // 0x22fe3c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x22fe3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_22fe40:
    // 0x22fe40: 0xc421aad0  lwc1        $f1, -0x5530($at)
    ctx->pc = 0x22fe40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294945488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22fe44:
    // 0x22fe44: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x22fe44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_22fe48:
    // 0x22fe48: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x22fe48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_22fe4c:
    // 0x22fe4c: 0xc420a658  lwc1        $f0, -0x59A8($at)
    ctx->pc = 0x22fe4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22fe50:
    // 0x22fe50: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x22fe50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_22fe54:
    // 0x22fe54: 0xc05ced8  jal         func_173B60
label_22fe58:
    if (ctx->pc == 0x22FE58u) {
        ctx->pc = 0x22FE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FE54u;
        // 0x22fe58: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FE5Cu;
        goto label_22fe5c;
    }
    ctx->pc = 0x22FE54u;
    SET_GPR_U32(ctx, 31, 0x22FE5Cu);
    ctx->pc = 0x22FE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FE54u;
    // 0x22fe58: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B60u, 0x22FE54u, 0x22FE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FE5Cu;
label_22fe5c:
    // 0x22fe5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22fe5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22fe60:
    // 0x22fe60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22fe60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22fe64:
    // 0x22fe64: 0x3e00008  jr          $ra
label_22fe68:
    if (ctx->pc == 0x22FE68u) {
        ctx->pc = 0x22FE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FE64u;
        // 0x22fe68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FE6Cu;
        goto label_22fe6c;
    }
    ctx->pc = 0x22FE64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FE64u;
        // 0x22fe68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FE64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22FE6Cu;
label_22fe6c:
    // 0x22fe6c: 0x0  nop
    ctx->pc = 0x22fe6cu;
    // NOP
label_22fe70:
    // 0x22fe70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22fe70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_22fe74:
    // 0x22fe74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22fe74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_22fe78:
    // 0x22fe78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22fe78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_22fe7c:
    // 0x22fe7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22fe7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22fe80:
    // 0x22fe80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22fe80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22fe84:
    // 0x22fe84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22fe84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22fe88:
    // 0x22fe88: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x22fe88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_22fe8c:
    // 0x22fe8c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x22fe8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_22fe90:
    // 0x22fe90: 0x1460007c  bnez        $v1, . + 4 + (0x7C << 2)
label_22fe94:
    if (ctx->pc == 0x22FE94u) {
        ctx->pc = 0x22FE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FE90u;
        // 0x22fe94: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FE98u;
        goto label_22fe98;
    }
    ctx->pc = 0x22FE90u;
    {
        const bool branch_taken_0x22fe90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22FE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FE90u;
        // 0x22fe94: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fe90) {
            ctx->pc = 0x230084u;
            goto label_230084;
        }
    }
    ctx->pc = 0x22FE98u;
label_22fe98:
    // 0x22fe98: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x22fe98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_22fe9c:
    // 0x22fe9c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x22fe9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_22fea0:
    // 0x22fea0: 0x9025490d  lbu         $a1, 0x490D($at)
    ctx->pc = 0x22fea0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_22fea4:
    // 0x22fea4: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_22fea8:
    if (ctx->pc == 0x22FEA8u) {
        ctx->pc = 0x22FEACu;
        goto label_22feac;
    }
    ctx->pc = 0x22FEA4u;
    {
        const bool branch_taken_0x22fea4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x22fea4) {
            ctx->pc = 0x22FEB4u;
            goto label_22feb4;
        }
    }
    ctx->pc = 0x22FEACu;
label_22feac:
    // 0x22feac: 0x10000076  b           . + 4 + (0x76 << 2)
label_22feb0:
    if (ctx->pc == 0x22FEB0u) {
        ctx->pc = 0x22FEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FEACu;
        // 0x22feb0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FEB4u;
        goto label_22feb4;
    }
    ctx->pc = 0x22FEACu;
    {
        const bool branch_taken_0x22feac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FEACu;
        // 0x22feb0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22feac) {
            ctx->pc = 0x230088u;
            goto label_230088;
        }
    }
    ctx->pc = 0x22FEB4u;
label_22feb4:
    // 0x22feb4: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x22feb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
label_22feb8:
    // 0x22feb8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22feb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22febc:
    // 0x22febc: 0x24c6a650  addiu       $a2, $a2, -0x59B0
    ctx->pc = 0x22febcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944336));
label_22fec0:
    // 0x22fec0: 0xc04509c  jal         func_114270
label_22fec4:
    if (ctx->pc == 0x22FEC4u) {
        ctx->pc = 0x22FEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FEC0u;
        // 0x22fec4: 0x27a70050  addiu       $a3, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FEC8u;
        goto label_22fec8;
    }
    ctx->pc = 0x22FEC0u;
    SET_GPR_U32(ctx, 31, 0x22FEC8u);
    ctx->pc = 0x22FEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FEC0u;
    // 0x22fec4: 0x27a70050  addiu       $a3, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114270u, 0x22FEC0u, 0x22FEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FEC8u;
label_22fec8:
    // 0x22fec8: 0x1040006e  beqz        $v0, . + 4 + (0x6E << 2)
label_22fecc:
    if (ctx->pc == 0x22FECCu) {
        ctx->pc = 0x22FED0u;
        goto label_22fed0;
    }
    ctx->pc = 0x22FEC8u;
    {
        const bool branch_taken_0x22fec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fec8) {
            ctx->pc = 0x230084u;
            goto label_230084;
        }
    }
    ctx->pc = 0x22FED0u;
label_22fed0:
    // 0x22fed0: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x22fed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_22fed4:
    // 0x22fed4: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x22fed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_22fed8:
    // 0x22fed8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x22fed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_22fedc:
    // 0x22fedc: 0x246303c4  addiu       $v1, $v1, 0x3C4
    ctx->pc = 0x22fedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 964));
label_22fee0:
    // 0x22fee0: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x22fee0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_22fee4:
    // 0x22fee4: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x22fee4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_22fee8:
    // 0x22fee8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x22fee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_22feec:
    // 0x22feec: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x22feecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_22fef0:
    // 0x22fef0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x22fef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22fef4:
    // 0x22fef4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x22fef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_22fef8:
    // 0x22fef8: 0x246301b0  addiu       $v1, $v1, 0x1B0
    ctx->pc = 0x22fef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 432));
label_22fefc:
    // 0x22fefc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22fefcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_22ff00:
    // 0x22ff00: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_22ff04:
    if (ctx->pc == 0x22FF04u) {
        ctx->pc = 0x22FF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FF00u;
        // 0x22ff04: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FF08u;
        goto label_22ff08;
    }
    ctx->pc = 0x22FF00u;
    {
        const bool branch_taken_0x22ff00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22FF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FF00u;
        // 0x22ff04: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ff00) {
            ctx->pc = 0x22FF20u;
            goto label_22ff20;
        }
    }
    ctx->pc = 0x22FF08u;
label_22ff08:
    // 0x22ff08: 0xc4612138  lwc1        $f1, 0x2138($v1)
    ctx->pc = 0x22ff08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22ff0c:
    // 0x22ff0c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x22ff0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22ff10:
    // 0x22ff10: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22ff10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22ff14:
    // 0x22ff14: 0x0  nop
    ctx->pc = 0x22ff14u;
    // NOP
label_22ff18:
    // 0x22ff18: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_22ff1c:
    if (ctx->pc == 0x22FF1Cu) {
        ctx->pc = 0x22FF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FF18u;
        // 0x22ff1c: 0x24120030  addiu       $s2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FF20u;
        goto label_22ff20;
    }
    ctx->pc = 0x22FF18u;
    {
        const bool branch_taken_0x22ff18 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22FF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FF18u;
        // 0x22ff1c: 0x24120030  addiu       $s2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ff18) {
            ctx->pc = 0x22FF2Cu;
            goto label_22ff2c;
        }
    }
    ctx->pc = 0x22FF20u;
label_22ff20:
    // 0x22ff20: 0x10000002  b           . + 4 + (0x2 << 2)
label_22ff24:
    if (ctx->pc == 0x22FF24u) {
        ctx->pc = 0x22FF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FF20u;
        // 0x22ff24: 0x24120080  addiu       $s2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FF28u;
        goto label_22ff28;
    }
    ctx->pc = 0x22FF20u;
    {
        const bool branch_taken_0x22ff20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FF20u;
        // 0x22ff24: 0x24120080  addiu       $s2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ff20) {
            ctx->pc = 0x22FF2Cu;
            goto label_22ff2c;
        }
    }
    ctx->pc = 0x22FF28u;
label_22ff28:
    // 0x22ff28: 0x24120030  addiu       $s2, $zero, 0x30
    ctx->pc = 0x22ff28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_22ff2c:
    // 0x22ff2c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x22ff2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_22ff30:
    // 0x22ff30: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x22ff30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_22ff34:
    // 0x22ff34: 0x34633ffc  ori         $v1, $v1, 0x3FFC
    ctx->pc = 0x22ff34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16380);
label_22ff38:
    // 0x22ff38: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x22ff38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_22ff3c:
    // 0x22ff3c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x22ff3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22ff40:
    // 0x22ff40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22ff40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22ff44:
    // 0x22ff44: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x22ff44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_22ff48:
    // 0x22ff48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22ff48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22ff4c:
    // 0x22ff4c: 0x2893c  dsll32      $s1, $v0, 4
    ctx->pc = 0x22ff4cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 4));
label_22ff50:
    // 0x22ff50: 0x11893e  dsrl32      $s1, $s1, 4
    ctx->pc = 0x22ff50u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 4));
label_22ff54:
    // 0x22ff54: 0xc066c5c  jal         func_19B170
label_22ff58:
    if (ctx->pc == 0x22FF58u) {
        ctx->pc = 0x22FF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FF54u;
        // 0x22ff58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FF5Cu;
        goto label_22ff5c;
    }
    ctx->pc = 0x22FF54u;
    SET_GPR_U32(ctx, 31, 0x22FF5Cu);
    ctx->pc = 0x22FF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FF54u;
    // 0x22ff58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B170u, 0x22FF54u, 0x22FF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FF5Cu;
label_22ff5c:
    // 0x22ff5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22ff5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22ff60:
    // 0x22ff60: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x22ff60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22ff64:
    // 0x22ff64: 0xc066d10  jal         func_19B440
label_22ff68:
    if (ctx->pc == 0x22FF68u) {
        ctx->pc = 0x22FF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FF64u;
        // 0x22ff68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FF6Cu;
        goto label_22ff6c;
    }
    ctx->pc = 0x22FF64u;
    SET_GPR_U32(ctx, 31, 0x22FF6Cu);
    ctx->pc = 0x22FF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FF64u;
    // 0x22ff68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B440u, 0x22FF64u, 0x22FF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FF6Cu;
label_22ff6c:
    // 0x22ff6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22ff6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22ff70:
    // 0x22ff70: 0xc066d30  jal         func_19B4C0
label_22ff74:
    if (ctx->pc == 0x22FF74u) {
        ctx->pc = 0x22FF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FF70u;
        // 0x22ff74: 0x3c051100  lui         $a1, 0x1100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FF78u;
        goto label_22ff78;
    }
    ctx->pc = 0x22FF70u;
    SET_GPR_U32(ctx, 31, 0x22FF78u);
    ctx->pc = 0x22FF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FF70u;
    // 0x22ff74: 0x3c051100  lui         $a1, 0x1100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B4C0u, 0x22FF70u, 0x22FF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FF78u;
label_22ff78:
    // 0x22ff78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22ff78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22ff7c:
    // 0x22ff7c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x22ff7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22ff80:
    // 0x22ff80: 0xc066d10  jal         func_19B440
label_22ff84:
    if (ctx->pc == 0x22FF84u) {
        ctx->pc = 0x22FF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FF80u;
        // 0x22ff84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FF88u;
        goto label_22ff88;
    }
    ctx->pc = 0x22FF80u;
    SET_GPR_U32(ctx, 31, 0x22FF88u);
    ctx->pc = 0x22FF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FF80u;
    // 0x22ff84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B440u, 0x22FF80u, 0x22FF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FF88u;
label_22ff88:
    // 0x22ff88: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x22ff88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_22ff8c:
    // 0x22ff8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22ff8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22ff90:
    // 0x22ff90: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x22ff90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22ff94:
    // 0x22ff94: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x22ff94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_22ff98:
    // 0x22ff98: 0xc066cae  jal         func_19B2B8
label_22ff9c:
    if (ctx->pc == 0x22FF9Cu) {
        ctx->pc = 0x22FF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FF98u;
        // 0x22ff9c: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FFA0u;
        goto label_22ffa0;
    }
    ctx->pc = 0x22FF98u;
    SET_GPR_U32(ctx, 31, 0x22FFA0u);
    ctx->pc = 0x22FF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FF98u;
    // 0x22ff9c: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B2B8u, 0x22FF98u, 0x22FFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FFA0u;
label_22ffa0:
    // 0x22ffa0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x22ffa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_22ffa4:
    // 0x22ffa4: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x22ffa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
label_22ffa8:
    // 0x22ffa8: 0x24429bc0  addiu       $v0, $v0, -0x6440
    ctx->pc = 0x22ffa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941632));
label_22ffac:
    // 0x22ffac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22ffacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22ffb0:
    // 0x22ffb0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x22ffb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22ffb4:
    // 0x22ffb4: 0xc066d4c  jal         func_19B530
label_22ffb8:
    if (ctx->pc == 0x22FFB8u) {
        ctx->pc = 0x22FFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FFB4u;
        // 0x22ffb8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FFBCu;
        goto label_22ffbc;
    }
    ctx->pc = 0x22FFB4u;
    SET_GPR_U32(ctx, 31, 0x22FFBCu);
    ctx->pc = 0x22FFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FFB4u;
    // 0x22ffb8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B530u, 0x22FFB4u, 0x22FFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FFBCu;
label_22ffbc:
    // 0x22ffbc: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x22ffbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_22ffc0:
    // 0x22ffc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22ffc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22ffc4:
    // 0x22ffc4: 0x24a5b930  addiu       $a1, $a1, -0x46D0
    ctx->pc = 0x22ffc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949168));
label_22ffc8:
    // 0x22ffc8: 0xc066d4c  jal         func_19B530
label_22ffcc:
    if (ctx->pc == 0x22FFCCu) {
        ctx->pc = 0x22FFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FFC8u;
        // 0x22ffcc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FFD0u;
        goto label_22ffd0;
    }
    ctx->pc = 0x22FFC8u;
    SET_GPR_U32(ctx, 31, 0x22FFD0u);
    ctx->pc = 0x22FFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FFC8u;
    // 0x22ffcc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B530u, 0x22FFC8u, 0x22FFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FFD0u;
label_22ffd0:
    // 0x22ffd0: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x22ffd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_22ffd4:
    // 0x22ffd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22ffd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22ffd8:
    // 0x22ffd8: 0x24a5b8f0  addiu       $a1, $a1, -0x4710
    ctx->pc = 0x22ffd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949104));
label_22ffdc:
    // 0x22ffdc: 0xc066d4c  jal         func_19B530
label_22ffe0:
    if (ctx->pc == 0x22FFE0u) {
        ctx->pc = 0x22FFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FFDCu;
        // 0x22ffe0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FFE4u;
        goto label_22ffe4;
    }
    ctx->pc = 0x22FFDCu;
    SET_GPR_U32(ctx, 31, 0x22FFE4u);
    ctx->pc = 0x22FFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FFDCu;
    // 0x22ffe0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B530u, 0x22FFDCu, 0x22FFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FFE4u;
label_22ffe4:
    // 0x22ffe4: 0xc066cd2  jal         func_19B348
label_22ffe8:
    if (ctx->pc == 0x22FFE8u) {
        ctx->pc = 0x22FFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FFE4u;
        // 0x22ffe8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FFECu;
        goto label_22ffec;
    }
    ctx->pc = 0x22FFE4u;
    SET_GPR_U32(ctx, 31, 0x22FFECu);
    ctx->pc = 0x22FFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FFE4u;
    // 0x22ffe8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B348u, 0x22FFE4u, 0x22FFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FFECu;
label_22ffec:
    // 0x22ffec: 0xc066c46  jal         func_19B118
label_22fff0:
    if (ctx->pc == 0x22FFF0u) {
        ctx->pc = 0x22FFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FFECu;
        // 0x22fff0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FFF4u;
        goto label_22fff4;
    }
    ctx->pc = 0x22FFECu;
    SET_GPR_U32(ctx, 31, 0x22FFF4u);
    ctx->pc = 0x22FFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FFECu;
    // 0x22fff0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B118u, 0x22FFECu, 0x22FFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FFF4u;
label_22fff4:
    // 0x22fff4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x22fff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_22fff8:
    // 0x22fff8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22fff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22fffc:
    // 0x22fffc: 0x8c25ab0c  lw          $a1, -0x54F4($at)
    ctx->pc = 0x22fffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294945548)));
label_230000:
    // 0x230000: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x230000u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_230004:
    // 0x230004: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x230004u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_230008:
    // 0x230008: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x230008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_23000c:
    // 0x23000c: 0x8c26ab54  lw          $a2, -0x54AC($at)
    ctx->pc = 0x23000cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294945620)));
label_230010:
    // 0x230010: 0xc066c72  jal         func_19B1C8
label_230014:
    if (ctx->pc == 0x230014u) {
        ctx->pc = 0x230014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230010u;
        // 0x230014: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230018u;
        goto label_230018;
    }
    ctx->pc = 0x230010u;
    SET_GPR_U32(ctx, 31, 0x230018u);
    ctx->pc = 0x230014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230010u;
    // 0x230014: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x230010u, 0x230018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230018u;
label_230018:
    // 0x230018: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x230018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_23001c:
    // 0x23001c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23001cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_230020:
    // 0x230020: 0x9426ab04  lhu         $a2, -0x54FC($at)
    ctx->pc = 0x230020u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294945540)));
label_230024:
    // 0x230024: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x230024u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_230028:
    // 0x230028: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x230028u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23002c:
    // 0x23002c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x23002cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_230030:
    // 0x230030: 0x8c25ab00  lw          $a1, -0x5500($at)
    ctx->pc = 0x230030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294945536)));
label_230034:
    // 0x230034: 0xc066c72  jal         func_19B1C8
label_230038:
    if (ctx->pc == 0x230038u) {
        ctx->pc = 0x230038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230034u;
        // 0x230038: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23003Cu;
        goto label_23003c;
    }
    ctx->pc = 0x230034u;
    SET_GPR_U32(ctx, 31, 0x23003Cu);
    ctx->pc = 0x230038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230034u;
    // 0x230038: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x230034u, 0x23003Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23003Cu;
label_23003c:
    // 0x23003c: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x23003cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
label_230040:
    // 0x230040: 0x3c110059  lui         $s1, 0x59
    ctx->pc = 0x230040u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
label_230044:
    // 0x230044: 0x2610aae0  addiu       $s0, $s0, -0x5520
    ctx->pc = 0x230044u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945504));
label_230048:
    // 0x230048: 0x2631a640  addiu       $s1, $s1, -0x59C0
    ctx->pc = 0x230048u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944320));
label_23004c:
    // 0x23004c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x23004cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_230050:
    // 0x230050: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x230050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_230054:
    // 0x230054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_230058:
    // 0x230058: 0x8c223ffc  lw          $v0, 0x3FFC($at)
    ctx->pc = 0x230058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_23005c:
    // 0x23005c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23005cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_230060:
    // 0x230060: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x230060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_230064:
    // 0x230064: 0x8c450080  lw          $a1, 0x80($v0)
    ctx->pc = 0x230064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_230068:
    // 0x230068: 0xc057150  jal         func_15C540
label_23006c:
    if (ctx->pc == 0x23006Cu) {
        ctx->pc = 0x23006Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230068u;
        // 0x23006c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230070u;
        goto label_230070;
    }
    ctx->pc = 0x230068u;
    SET_GPR_U32(ctx, 31, 0x230070u);
    ctx->pc = 0x23006Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230068u;
    // 0x23006c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C540u, 0x230068u, 0x230070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230070u;
label_230070:
    // 0x230070: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x230070u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_230074:
    // 0x230074: 0x261000c8  addiu       $s0, $s0, 0xC8
    ctx->pc = 0x230074u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
label_230078:
    // 0x230078: 0x2a630002  slti        $v1, $s3, 0x2
    ctx->pc = 0x230078u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
label_23007c:
    // 0x23007c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_230080:
    if (ctx->pc == 0x230080u) {
        ctx->pc = 0x230080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23007Cu;
        // 0x230080: 0x26310090  addiu       $s1, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230084u;
        goto label_230084;
    }
    ctx->pc = 0x23007Cu;
    {
        const bool branch_taken_0x23007c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x230080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23007Cu;
        // 0x230080: 0x26310090  addiu       $s1, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23007c) {
            ctx->pc = 0x230050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_230050;
        }
    }
    ctx->pc = 0x230084u;
label_230084:
    // 0x230084: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x230084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_230088:
    // 0x230088: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x230088u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23008c:
    // 0x23008c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23008cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_230090:
    // 0x230090: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x230090u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_230094:
    // 0x230094: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x230094u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_230098:
    // 0x230098: 0x3e00008  jr          $ra
label_23009c:
    if (ctx->pc == 0x23009Cu) {
        ctx->pc = 0x23009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230098u;
        // 0x23009c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2300A0u;
        goto label_2300a0;
    }
    ctx->pc = 0x230098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230098u;
        // 0x23009c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2300A0u;
label_2300a0:
    // 0x2300a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2300a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2300a4:
    // 0x2300a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2300a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2300a8:
    // 0x2300a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2300a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2300ac:
    // 0x2300ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2300acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2300b0:
    // 0x2300b0: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x2300b0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2300b4:
    // 0x2300b4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2300b4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2300b8:
    // 0x2300b8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2300b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2300bc:
    // 0x2300bc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2300bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2300c0:
    // 0x2300c0: 0x8083002a  lb          $v1, 0x2A($a0)
    ctx->pc = 0x2300c0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 42)));
label_2300c4:
    // 0x2300c4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_2300c8:
    if (ctx->pc == 0x2300C8u) {
        ctx->pc = 0x2300C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2300C4u;
        // 0x2300c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2300CCu;
        goto label_2300cc;
    }
    ctx->pc = 0x2300C4u;
    {
        const bool branch_taken_0x2300c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2300C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2300C4u;
        // 0x2300c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2300c4) {
            ctx->pc = 0x2300E8u;
            goto label_2300e8;
        }
    }
    ctx->pc = 0x2300CCu;
label_2300cc:
    // 0x2300cc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2300ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2300d0:
    // 0x2300d0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2300d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2300d4:
    // 0x2300d4: 0x8463020a  lh          $v1, 0x20A($v1)
    ctx->pc = 0x2300d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 522)));
label_2300d8:
    // 0x2300d8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_2300dc:
    if (ctx->pc == 0x2300DCu) {
        ctx->pc = 0x2300DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2300D8u;
        // 0x2300dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2300E0u;
        goto label_2300e0;
    }
    ctx->pc = 0x2300D8u;
    {
        const bool branch_taken_0x2300d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2300DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2300D8u;
        // 0x2300dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2300d8) {
            ctx->pc = 0x2300E8u;
            goto label_2300e8;
        }
    }
    ctx->pc = 0x2300E0u;
label_2300e0:
    // 0x2300e0: 0x100000b7  b           . + 4 + (0xB7 << 2)
label_2300e4:
    if (ctx->pc == 0x2300E4u) {
        ctx->pc = 0x2300E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2300E0u;
        // 0x2300e4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2300E8u;
        goto label_2300e8;
    }
    ctx->pc = 0x2300E0u;
    {
        const bool branch_taken_0x2300e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2300E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2300E0u;
        // 0x2300e4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2300e0) {
            ctx->pc = 0x2303C0u;
            goto label_2303c0;
        }
    }
    ctx->pc = 0x2300E8u;
label_2300e8:
    // 0x2300e8: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x2300e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2300ec:
    // 0x2300ec: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x2300ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_2300f0:
    // 0x2300f0: 0x244204a0  addiu       $v0, $v0, 0x4A0
    ctx->pc = 0x2300f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1184));
label_2300f4:
    // 0x2300f4: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x2300f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2300f8:
    // 0x2300f8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2300f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2300fc:
    // 0x2300fc: 0xc4a00150  lwc1        $f0, 0x150($a1)
    ctx->pc = 0x2300fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_230100:
    // 0x230100: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x230100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_230104:
    // 0x230104: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x230104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_230108:
    // 0x230108: 0xc4a00154  lwc1        $f0, 0x154($a1)
    ctx->pc = 0x230108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23010c:
    // 0x23010c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x23010cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_230110:
    // 0x230110: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x230110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_230114:
    // 0x230114: 0xc4a00158  lwc1        $f0, 0x158($a1)
    ctx->pc = 0x230114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_230118:
    // 0x230118: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x230118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_23011c:
    // 0x23011c: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x23011cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_230120:
    // 0x230120: 0xc4a0015c  lwc1        $f0, 0x15C($a1)
    ctx->pc = 0x230120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_230124:
    // 0x230124: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x230124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_230128:
    // 0x230128: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x230128u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_23012c:
    // 0x23012c: 0xc066e44  jal         func_19B910
label_230130:
    if (ctx->pc == 0x230130u) {
        ctx->pc = 0x230130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23012Cu;
        // 0x230130: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230134u;
        goto label_230134;
    }
    ctx->pc = 0x23012Cu;
    SET_GPR_U32(ctx, 31, 0x230134u);
    ctx->pc = 0x230130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23012Cu;
    // 0x230130: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x230134u;
label_230134:
    // 0x230134: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x230134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_230138:
    // 0x230138: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x230138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_23013c:
    // 0x23013c: 0xc42ca644  lwc1        $f12, -0x59BC($at)
    ctx->pc = 0x23013cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_230140:
    // 0x230140: 0xc066ec0  jal         func_19BB00
label_230144:
    if (ctx->pc == 0x230144u) {
        ctx->pc = 0x230144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230140u;
        // 0x230144: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230148u;
        goto label_230148;
    }
    ctx->pc = 0x230140u;
    SET_GPR_U32(ctx, 31, 0x230148u);
    ctx->pc = 0x230144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230140u;
    // 0x230144: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x230148u;
label_230148:
    // 0x230148: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x230148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_23014c:
    // 0x23014c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x23014cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_230150:
    // 0x230150: 0xc066d7a  jal         func_19B5E8
label_230154:
    if (ctx->pc == 0x230154u) {
        ctx->pc = 0x230154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230150u;
        // 0x230154: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230158u;
        goto label_230158;
    }
    ctx->pc = 0x230150u;
    SET_GPR_U32(ctx, 31, 0x230158u);
    ctx->pc = 0x230154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230150u;
    // 0x230154: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B5E8u, 0x230150u, 0x230158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230158u;
label_230158:
    // 0x230158: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x230158u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
label_23015c:
    // 0x23015c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x23015cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_230160:
    // 0x230160: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x230160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_230164:
    // 0x230164: 0xc066e02  jal         func_19B808
label_230168:
    if (ctx->pc == 0x230168u) {
        ctx->pc = 0x230168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230164u;
        // 0x230168: 0x24c6a650  addiu       $a2, $a2, -0x59B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23016Cu;
        goto label_23016c;
    }
    ctx->pc = 0x230164u;
    SET_GPR_U32(ctx, 31, 0x23016Cu);
    ctx->pc = 0x230168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230164u;
    // 0x230168: 0x24c6a650  addiu       $a2, $a2, -0x59B0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x23016Cu;
label_23016c:
    // 0x23016c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x23016cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_230170:
    // 0x230170: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x230170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_230174:
    // 0x230174: 0xc066e08  jal         func_19B820
label_230178:
    if (ctx->pc == 0x230178u) {
        ctx->pc = 0x230178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230174u;
        // 0x230178: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23017Cu;
        goto label_23017c;
    }
    ctx->pc = 0x230174u;
    SET_GPR_U32(ctx, 31, 0x23017Cu);
    ctx->pc = 0x230178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230174u;
    // 0x230178: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x23017Cu;
label_23017c:
    // 0x23017c: 0x8203002a  lb          $v1, 0x2A($s0)
    ctx->pc = 0x23017cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
label_230180:
    // 0x230180: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x230180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_230184:
    // 0x230184: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_230188:
    if (ctx->pc == 0x230188u) {
        ctx->pc = 0x230188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230184u;
        // 0x230188: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23018Cu;
        goto label_23018c;
    }
    ctx->pc = 0x230184u;
    {
        const bool branch_taken_0x230184 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x230188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230184u;
        // 0x230188: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230184) {
            ctx->pc = 0x230194u;
            goto label_230194;
        }
    }
    ctx->pc = 0x23018Cu;
label_23018c:
    // 0x23018c: 0x14620026  bne         $v1, $v0, . + 4 + (0x26 << 2)
label_230190:
    if (ctx->pc == 0x230190u) {
        ctx->pc = 0x230194u;
        goto label_230194;
    }
    ctx->pc = 0x23018Cu;
    {
        const bool branch_taken_0x23018c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23018c) {
            ctx->pc = 0x230228u;
            goto label_230228;
        }
    }
    ctx->pc = 0x230194u;
label_230194:
    // 0x230194: 0xc7ad0058  lwc1        $f13, 0x58($sp)
    ctx->pc = 0x230194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_230198:
    // 0x230198: 0xc06d51e  jal         func_1B5478
label_23019c:
    if (ctx->pc == 0x23019Cu) {
        ctx->pc = 0x23019Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230198u;
        // 0x23019c: 0xc7ac0050  lwc1        $f12, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2301A0u;
        goto label_2301a0;
    }
    ctx->pc = 0x230198u;
    SET_GPR_U32(ctx, 31, 0x2301A0u);
    ctx->pc = 0x23019Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230198u;
    // 0x23019c: 0xc7ac0050  lwc1        $f12, 0x50($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x2301A0u;
label_2301a0:
    // 0x2301a0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2301a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2301a4:
    // 0x2301a4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2301a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_2301a8:
    // 0x2301a8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2301a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2301ac:
    // 0x2301ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2301acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2301b0:
    // 0x2301b0: 0x0  nop
    ctx->pc = 0x2301b0u;
    // NOP
label_2301b4:
    // 0x2301b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2301b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2301b8:
    // 0x2301b8: 0xc4620044  lwc1        $f2, 0x44($v1)
    ctx->pc = 0x2301b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2301bc:
    // 0x2301bc: 0x46020301  sub.s       $f12, $f0, $f2
    ctx->pc = 0x2301bcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_2301c0:
    // 0x2301c0: 0x46016036  c.le.s      $f12, $f1
    ctx->pc = 0x2301c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2301c4:
    // 0x2301c4: 0x0  nop
    ctx->pc = 0x2301c4u;
    // NOP
label_2301c8:
    // 0x2301c8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_2301cc:
    if (ctx->pc == 0x2301CCu) {
        ctx->pc = 0x2301CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2301C8u;
        // 0x2301cc: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2301D0u;
        goto label_2301d0;
    }
    ctx->pc = 0x2301C8u;
    {
        const bool branch_taken_0x2301c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2301CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2301C8u;
        // 0x2301cc: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2301c8) {
            ctx->pc = 0x2301E4u;
            goto label_2301e4;
        }
    }
    ctx->pc = 0x2301D0u;
label_2301d0:
    // 0x2301d0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x2301d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_2301d4:
    // 0x2301d4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2301d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2301d8:
    // 0x2301d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2301d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2301dc:
    // 0x2301dc: 0x1000000d  b           . + 4 + (0xD << 2)
label_2301e0:
    if (ctx->pc == 0x2301E0u) {
        ctx->pc = 0x2301E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2301DCu;
        // 0x2301e0: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2301E4u;
        goto label_2301e4;
    }
    ctx->pc = 0x2301DCu;
    {
        const bool branch_taken_0x2301dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2301E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2301DCu;
        // 0x2301e0: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2301dc) {
            ctx->pc = 0x230214u;
            goto label_230214;
        }
    }
    ctx->pc = 0x2301E4u;
label_2301e4:
    // 0x2301e4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2301e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2301e8:
    // 0x2301e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2301e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2301ec:
    // 0x2301ec: 0x0  nop
    ctx->pc = 0x2301ecu;
    // NOP
label_2301f0:
    // 0x2301f0: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x2301f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2301f4:
    // 0x2301f4: 0x0  nop
    ctx->pc = 0x2301f4u;
    // NOP
label_2301f8:
    // 0x2301f8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2301fc:
    if (ctx->pc == 0x2301FCu) {
        ctx->pc = 0x230200u;
        goto label_230200;
    }
    ctx->pc = 0x2301F8u;
    {
        const bool branch_taken_0x2301f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2301f8) {
            ctx->pc = 0x230214u;
            goto label_230214;
        }
    }
    ctx->pc = 0x230200u;
label_230200:
    // 0x230200: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x230200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_230204:
    // 0x230204: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x230204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_230208:
    // 0x230208: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23020c:
    // 0x23020c: 0x10000001  b           . + 4 + (0x1 << 2)
label_230210:
    if (ctx->pc == 0x230210u) {
        ctx->pc = 0x230210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23020Cu;
        // 0x230210: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x230214u;
        goto label_230214;
    }
    ctx->pc = 0x23020Cu;
    {
        const bool branch_taken_0x23020c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23020Cu;
        // 0x230210: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23020c) {
            ctx->pc = 0x230214u;
            goto label_230214;
        }
    }
    ctx->pc = 0x230214u;
label_230214:
    // 0x230214: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x230214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_230218:
    // 0x230218: 0xc054560  jal         func_151580
label_23021c:
    if (ctx->pc == 0x23021Cu) {
        ctx->pc = 0x23021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230218u;
        // 0x23021c: 0x8044021f  lb          $a0, 0x21F($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 543)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230220u;
        goto label_230220;
    }
    ctx->pc = 0x230218u;
    SET_GPR_U32(ctx, 31, 0x230220u);
    ctx->pc = 0x23021Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230218u;
    // 0x23021c: 0x8044021f  lb          $a0, 0x21F($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 543)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151580u, 0x230218u, 0x230220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230220u;
label_230220:
    // 0x230220: 0x10000003  b           . + 4 + (0x3 << 2)
label_230224:
    if (ctx->pc == 0x230224u) {
        ctx->pc = 0x230224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230220u;
        // 0x230224: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x230228u;
        goto label_230228;
    }
    ctx->pc = 0x230220u;
    {
        const bool branch_taken_0x230220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230220u;
        // 0x230224: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x230220) {
            ctx->pc = 0x230230u;
            goto label_230230;
        }
    }
    ctx->pc = 0x230228u;
label_230228:
    // 0x230228: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x230228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_23022c:
    // 0x23022c: 0x4482b000  mtc1        $v0, $f22
    ctx->pc = 0x23022cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_230230:
    // 0x230230: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x230230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_230234:
    // 0x230234: 0x3c03432a  lui         $v1, 0x432A
    ctx->pc = 0x230234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17194 << 16));
label_230238:
    // 0x230238: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x230238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23023c:
    // 0x23023c: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x23023cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
label_230240:
    // 0x230240: 0x4483b800  mtc1        $v1, $f23
    ctx->pc = 0x230240u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_230244:
    // 0x230244: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x230244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_230248:
    // 0x230248: 0xc06d448  jal         func_1B5120
label_23024c:
    if (ctx->pc == 0x23024Cu) {
        ctx->pc = 0x23024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230248u;
        // 0x23024c: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x230250u;
        goto label_230250;
    }
    ctx->pc = 0x230248u;
    SET_GPR_U32(ctx, 31, 0x230250u);
    ctx->pc = 0x23024Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230248u;
    // 0x23024c: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x230250u;
label_230250:
    // 0x230250: 0x4617b040  add.s       $f1, $f22, $f23
    ctx->pc = 0x230250u;
    ctx->f[1] = FPU_ADD_S(ctx->f[22], ctx->f[23]);
label_230254:
    // 0x230254: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x230254u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_230258:
    // 0x230258: 0x0  nop
    ctx->pc = 0x230258u;
    // NOP
label_23025c:
    // 0x23025c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_230260:
    if (ctx->pc == 0x230260u) {
        ctx->pc = 0x230260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23025Cu;
        // 0x230260: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230264u;
        goto label_230264;
    }
    ctx->pc = 0x23025Cu;
    {
        const bool branch_taken_0x23025c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x230260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23025Cu;
        // 0x230260: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23025c) {
            ctx->pc = 0x23028Cu;
            goto label_23028c;
        }
    }
    ctx->pc = 0x230264u;
label_230264:
    // 0x230264: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x230264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_230268:
    // 0x230268: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x230268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23026c:
    // 0x23026c: 0xc06d448  jal         func_1B5120
label_230270:
    if (ctx->pc == 0x230270u) {
        ctx->pc = 0x230270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23026Cu;
        // 0x230270: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x230274u;
        goto label_230274;
    }
    ctx->pc = 0x23026Cu;
    SET_GPR_U32(ctx, 31, 0x230274u);
    ctx->pc = 0x230270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23026Cu;
    // 0x230270: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x230274u;
label_230274:
    // 0x230274: 0x4617b040  add.s       $f1, $f22, $f23
    ctx->pc = 0x230274u;
    ctx->f[1] = FPU_ADD_S(ctx->f[22], ctx->f[23]);
label_230278:
    // 0x230278: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x230278u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23027c:
    // 0x23027c: 0x0  nop
    ctx->pc = 0x23027cu;
    // NOP
label_230280:
    // 0x230280: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_230284:
    if (ctx->pc == 0x230284u) {
        ctx->pc = 0x230284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230280u;
        // 0x230284: 0x27a30030  addiu       $v1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230288u;
        goto label_230288;
    }
    ctx->pc = 0x230280u;
    {
        const bool branch_taken_0x230280 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x230284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230280u;
        // 0x230284: 0x27a30030  addiu       $v1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230280) {
            ctx->pc = 0x230294u;
            goto label_230294;
        }
    }
    ctx->pc = 0x230288u;
label_230288:
    // 0x230288: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x230288u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23028c:
    // 0x23028c: 0x1000004b  b           . + 4 + (0x4B << 2)
label_230290:
    if (ctx->pc == 0x230290u) {
        ctx->pc = 0x230294u;
        goto label_230294;
    }
    ctx->pc = 0x23028Cu;
    {
        const bool branch_taken_0x23028c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23028c) {
            ctx->pc = 0x2303BCu;
            goto label_2303bc;
        }
    }
    ctx->pc = 0x230294u;
label_230294:
    // 0x230294: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x230294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_230298:
    // 0x230298: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x230298u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_23029c:
    // 0x23029c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x23029cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2302a0:
    // 0x2302a0: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x2302a0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2302a4:
    // 0x2302a4: 0x4a0002ff  vnop
    ctx->pc = 0x2302a4u;
    // NOP operation, no action needed for VU0
label_2302a8:
    // 0x2302a8: 0x4a0002ff  vnop
    ctx->pc = 0x2302a8u;
    // NOP operation, no action needed for VU0
label_2302ac:
    // 0x2302ac: 0x4a0002ff  vnop
    ctx->pc = 0x2302acu;
    // NOP operation, no action needed for VU0
label_2302b0:
    // 0x2302b0: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x2302b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_2302b4:
    // 0x2302b4: 0x4a0002ff  vnop
    ctx->pc = 0x2302b4u;
    // NOP operation, no action needed for VU0
label_2302b8:
    // 0x2302b8: 0x4a0002ff  vnop
    ctx->pc = 0x2302b8u;
    // NOP operation, no action needed for VU0
label_2302bc:
    // 0x2302bc: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x2302bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_2302c0:
    // 0x2302c0: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x2302c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2302c4:
    // 0x2302c4: 0x4a0002ff  vnop
    ctx->pc = 0x2302c4u;
    // NOP operation, no action needed for VU0
label_2302c8:
    // 0x2302c8: 0x4a0002ff  vnop
    ctx->pc = 0x2302c8u;
    // NOP operation, no action needed for VU0
label_2302cc:
    // 0x2302cc: 0x4a0002ff  vnop
    ctx->pc = 0x2302ccu;
    // NOP operation, no action needed for VU0
label_2302d0:
    // 0x2302d0: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x2302d0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_2302d4:
    // 0x2302d4: 0x4a0003bf  vwaitq
    ctx->pc = 0x2302d4u;
    // VWAITQ (Q already resolved in this runtime)
label_2302d8:
    // 0x2302d8: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x2302d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_2302dc:
    // 0x2302dc: 0x4489a000  mtc1        $t1, $f20
    ctx->pc = 0x2302dcu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2302e0:
    // 0x2302e0: 0x0  nop
    ctx->pc = 0x2302e0u;
    // NOP
label_2302e4:
    // 0x2302e4: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x2302e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2302e8:
    // 0x2302e8: 0x0  nop
    ctx->pc = 0x2302e8u;
    // NOP
label_2302ec:
    // 0x2302ec: 0x45000033  bc1f        . + 4 + (0x33 << 2)
label_2302f0:
    if (ctx->pc == 0x2302F0u) {
        ctx->pc = 0x2302F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2302ECu;
        // 0x2302f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2302F4u;
        goto label_2302f4;
    }
    ctx->pc = 0x2302ECu;
    {
        const bool branch_taken_0x2302ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2302F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2302ECu;
        // 0x2302f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2302ec) {
            ctx->pc = 0x2303BCu;
            goto label_2303bc;
        }
    }
    ctx->pc = 0x2302F4u;
label_2302f4:
    // 0x2302f4: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2302f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2302f8:
    // 0x2302f8: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x2302f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2302fc:
    // 0x2302fc: 0xc06d448  jal         func_1B5120
label_230300:
    if (ctx->pc == 0x230300u) {
        ctx->pc = 0x230300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2302FCu;
        // 0x230300: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x230304u;
        goto label_230304;
    }
    ctx->pc = 0x2302FCu;
    SET_GPR_U32(ctx, 31, 0x230304u);
    ctx->pc = 0x230300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2302FCu;
    // 0x230300: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x230304u;
label_230304:
    // 0x230304: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x230304u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_230308:
    // 0x230308: 0x0  nop
    ctx->pc = 0x230308u;
    // NOP
label_23030c:
    // 0x23030c: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
label_230310:
    if (ctx->pc == 0x230310u) {
        ctx->pc = 0x230314u;
        goto label_230314;
    }
    ctx->pc = 0x23030Cu;
    {
        const bool branch_taken_0x23030c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23030c) {
            ctx->pc = 0x2303B8u;
            goto label_2303b8;
        }
    }
    ctx->pc = 0x230314u;
label_230314:
    // 0x230314: 0x4617b000  add.s       $f0, $f22, $f23
    ctx->pc = 0x230314u;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[23]);
label_230318:
    // 0x230318: 0x46140081  sub.s       $f2, $f0, $f20
    ctx->pc = 0x230318u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_23031c:
    // 0x23031c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23031cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_230320:
    // 0x230320: 0x0  nop
    ctx->pc = 0x230320u;
    // NOP
label_230324:
    // 0x230324: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x230324u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_230328:
    // 0x230328: 0x0  nop
    ctx->pc = 0x230328u;
    // NOP
label_23032c:
    // 0x23032c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_230330:
    if (ctx->pc == 0x230330u) {
        ctx->pc = 0x230334u;
        goto label_230334;
    }
    ctx->pc = 0x23032Cu;
    {
        const bool branch_taken_0x23032c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23032c) {
            ctx->pc = 0x230340u;
            goto label_230340;
        }
    }
    ctx->pc = 0x230334u;
label_230334:
    // 0x230334: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x230334u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_230338:
    // 0x230338: 0x10000009  b           . + 4 + (0x9 << 2)
label_23033c:
    if (ctx->pc == 0x23033Cu) {
        ctx->pc = 0x23033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230338u;
        // 0x23033c: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x230340u;
        goto label_230340;
    }
    ctx->pc = 0x230338u;
    {
        const bool branch_taken_0x230338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230338u;
        // 0x23033c: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x230338) {
            ctx->pc = 0x230360u;
            goto label_230360;
        }
    }
    ctx->pc = 0x230340u;
label_230340:
    // 0x230340: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x230340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_230344:
    // 0x230344: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x230344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_230348:
    // 0x230348: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x230348u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_23034c:
    // 0x23034c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x23034cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_230350:
    // 0x230350: 0x46140843  div.s       $f1, $f1, $f20
    ctx->pc = 0x230350u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[20];
label_230354:
    // 0x230354: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x230354u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
label_230358:
    // 0x230358: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x230358u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_23035c:
    // 0x23035c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x23035cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_230360:
    // 0x230360: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x230360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_230364:
    // 0x230364: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x230364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_230368:
    // 0x230368: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x230368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23036c:
    // 0x23036c: 0xc4610050  lwc1        $f1, 0x50($v1)
    ctx->pc = 0x23036cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_230370:
    // 0x230370: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x230370u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_230374:
    // 0x230374: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x230374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
label_230378:
    // 0x230378: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x230378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_23037c:
    // 0x23037c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x23037cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_230380:
    // 0x230380: 0xc4610058  lwc1        $f1, 0x58($v1)
    ctx->pc = 0x230380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_230384:
    // 0x230384: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x230384u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_230388:
    // 0x230388: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x230388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
label_23038c:
    // 0x23038c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x23038cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_230390:
    // 0x230390: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x230390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_230394:
    // 0x230394: 0xc4610150  lwc1        $f1, 0x150($v1)
    ctx->pc = 0x230394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_230398:
    // 0x230398: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x230398u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_23039c:
    // 0x23039c: 0xe4600150  swc1        $f0, 0x150($v1)
    ctx->pc = 0x23039cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 336), bits); }
label_2303a0:
    // 0x2303a0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2303a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2303a4:
    // 0x2303a4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2303a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2303a8:
    // 0x2303a8: 0xc4610158  lwc1        $f1, 0x158($v1)
    ctx->pc = 0x2303a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2303ac:
    // 0x2303ac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2303acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2303b0:
    // 0x2303b0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2303b4:
    if (ctx->pc == 0x2303B4u) {
        ctx->pc = 0x2303B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2303B0u;
        // 0x2303b4: 0xe4600158  swc1        $f0, 0x158($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 344), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2303B8u;
        goto label_2303b8;
    }
    ctx->pc = 0x2303B0u;
    {
        const bool branch_taken_0x2303b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2303B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2303B0u;
        // 0x2303b4: 0xe4600158  swc1        $f0, 0x158($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 344), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2303b0) {
            ctx->pc = 0x2303BCu;
            goto label_2303bc;
        }
    }
    ctx->pc = 0x2303B8u;
label_2303b8:
    // 0x2303b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2303b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2303bc:
    // 0x2303bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2303bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2303c0:
    // 0x2303c0: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x2303c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_2303c4:
    // 0x2303c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2303c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2303c8:
    // 0x2303c8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2303c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2303cc:
    // 0x2303cc: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2303ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2303d0:
    // 0x2303d0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2303d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2303d4:
    // 0x2303d4: 0x3e00008  jr          $ra
label_2303d8:
    if (ctx->pc == 0x2303D8u) {
        ctx->pc = 0x2303D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2303D4u;
        // 0x2303d8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2303DCu;
        goto label_2303dc;
    }
    ctx->pc = 0x2303D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2303D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2303D4u;
        // 0x2303d8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2303D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2303DCu;
label_2303dc:
    // 0x2303dc: 0x0  nop
    ctx->pc = 0x2303dcu;
    // NOP
label_2303e0:
    // 0x2303e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2303e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2303e4:
    // 0x2303e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2303e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2303e8:
    // 0x2303e8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2303e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2303ec:
    // 0x2303ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2303ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2303f0:
    // 0x2303f0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2303f0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2303f4:
    // 0x2303f4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2303f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2303f8:
    // 0x2303f8: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x2303f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_2303fc:
    // 0x2303fc: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x2303fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_230400:
    // 0x230400: 0x146000fb  bnez        $v1, . + 4 + (0xFB << 2)
label_230404:
    if (ctx->pc == 0x230404u) {
        ctx->pc = 0x230404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230400u;
        // 0x230404: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230408u;
        goto label_230408;
    }
    ctx->pc = 0x230400u;
    {
        const bool branch_taken_0x230400 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x230404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230400u;
        // 0x230404: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230400) {
            ctx->pc = 0x2307F0u;
            { ctx->pc = 0x2307f0; return; }
        }
    }
    ctx->pc = 0x230408u;
label_230408:
    // 0x230408: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x230408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_23040c:
    // 0x23040c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x23040cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_230410:
    // 0x230410: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x230410u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_230414:
    // 0x230414: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_230418:
    if (ctx->pc == 0x230418u) {
        ctx->pc = 0x23041Cu;
        goto label_23041c;
    }
    ctx->pc = 0x230414u;
    {
        const bool branch_taken_0x230414 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x230414) {
            ctx->pc = 0x230424u;
            goto label_230424;
        }
    }
    ctx->pc = 0x23041Cu;
label_23041c:
    // 0x23041c: 0x100000f5  b           . + 4 + (0xF5 << 2)
label_230420:
    if (ctx->pc == 0x230420u) {
        ctx->pc = 0x230420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23041Cu;
        // 0x230420: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230424u;
        goto label_230424;
    }
    ctx->pc = 0x23041Cu;
    {
        const bool branch_taken_0x23041c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23041Cu;
        // 0x230420: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23041c) {
            ctx->pc = 0x2307F4u;
            { ctx->pc = 0x2307f4; return; }
        }
    }
    ctx->pc = 0x230424u;
label_230424:
    // 0x230424: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x230424u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
label_230428:
    // 0x230428: 0x2610a640  addiu       $s0, $s0, -0x59C0
    ctx->pc = 0x230428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944320));
label_23042c:
    // 0x23042c: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x23042cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_230430:
    // 0x230430: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x230430u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_230434:
    // 0x230434: 0x0  nop
    ctx->pc = 0x230434u;
    // NOP
label_230438:
    // 0x230438: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x230438u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23043c:
    // 0x23043c: 0x0  nop
    ctx->pc = 0x23043cu;
    // NOP
label_230440:
    // 0x230440: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_230444:
    if (ctx->pc == 0x230444u) {
        ctx->pc = 0x230444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230440u;
        // 0x230444: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230448u;
        goto label_230448;
    }
    ctx->pc = 0x230440u;
    {
        const bool branch_taken_0x230440 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x230444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230440u;
        // 0x230444: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230440) {
            ctx->pc = 0x230480u;
            goto label_230480;
        }
    }
    ctx->pc = 0x230448u;
label_230448:
    // 0x230448: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x230448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_23044c:
    // 0x23044c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x23044cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_230450:
    // 0x230450: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x230450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_230454:
    // 0x230454: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x230454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
label_230458:
    // 0x230458: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23045c:
    // 0x23045c: 0xe6020010  swc1        $f2, 0x10($s0)
    ctx->pc = 0x23045cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_230460:
    // 0x230460: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x230460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_230464:
    // 0x230464: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x230464u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_230468:
    // 0x230468: 0xe6010014  swc1        $f1, 0x14($s0)
    ctx->pc = 0x230468u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_23046c:
    // 0x23046c: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x23046cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_230470:
    // 0x230470: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x230470u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_230474:
    // 0x230474: 0x100000ba  b           . + 4 + (0xBA << 2)
label_230478:
    if (ctx->pc == 0x230478u) {
        ctx->pc = 0x230478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230474u;
        // 0x230478: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x23047Cu;
        goto label_23047c;
    }
    ctx->pc = 0x230474u;
    {
        const bool branch_taken_0x230474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230474u;
        // 0x230478: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x230474) {
            ctx->pc = 0x230760u;
            { ctx->pc = 0x230760; return; }
        }
    }
    ctx->pc = 0x23047Cu;
label_23047c:
    // 0x23047c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x23047cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_230480:
    // 0x230480: 0xc066e26  jal         func_19B898
label_230484:
    if (ctx->pc == 0x230484u) {
        ctx->pc = 0x230484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230480u;
        // 0x230484: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230488u;
        goto label_230488;
    }
    ctx->pc = 0x230480u;
    SET_GPR_U32(ctx, 31, 0x230488u);
    ctx->pc = 0x230484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230480u;
    // 0x230484: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x230488u;
label_230488:
    // 0x230488: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x230488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_23048c:
    // 0x23048c: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x23048cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_230490:
    // 0x230490: 0xc066e08  jal         func_19B820
label_230494:
    if (ctx->pc == 0x230494u) {
        ctx->pc = 0x230494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230490u;
        // 0x230494: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230498u;
        goto label_230498;
    }
    ctx->pc = 0x230490u;
    SET_GPR_U32(ctx, 31, 0x230498u);
    ctx->pc = 0x230494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230490u;
    // 0x230494: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x230498u;
label_230498:
    // 0x230498: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x230498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_23049c:
    // 0x23049c: 0xc066daa  jal         func_19B6A8
label_2304a0:
    if (ctx->pc == 0x2304A0u) {
        ctx->pc = 0x2304A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23049Cu;
        // 0x2304a0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2304A4u;
        goto label_2304a4;
    }
    ctx->pc = 0x23049Cu;
    SET_GPR_U32(ctx, 31, 0x2304A4u);
    ctx->pc = 0x2304A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23049Cu;
    // 0x2304a0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    { ctx->pc = 0x19b6a8; return; }
    ctx->pc = 0x2304A4u;
label_2304a4:
    // 0x2304a4: 0xc7ad0048  lwc1        $f13, 0x48($sp)
    ctx->pc = 0x2304a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2304a8:
    // 0x2304a8: 0xc06d51e  jal         func_1B5478
label_2304ac:
    if (ctx->pc == 0x2304ACu) {
        ctx->pc = 0x2304ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2304A8u;
        // 0x2304ac: 0xc7ac0040  lwc1        $f12, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2304B0u;
        goto label_2304b0;
    }
    ctx->pc = 0x2304A8u;
    SET_GPR_U32(ctx, 31, 0x2304B0u);
    ctx->pc = 0x2304ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2304A8u;
    // 0x2304ac: 0xc7ac0040  lwc1        $f12, 0x40($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x2304B0u;
label_2304b0:
    // 0x2304b0: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x2304b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
label_2304b4:
    // 0x2304b4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2304b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2304b8:
    // 0x2304b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2304b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2304bc:
    // 0x2304bc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2304bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2304c0:
    // 0x2304c0: 0xc066e14  jal         func_19B850
label_2304c4:
    if (ctx->pc == 0x2304C4u) {
        ctx->pc = 0x2304C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2304C0u;
        // 0x2304c4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2304C8u;
        goto label_2304c8;
    }
    ctx->pc = 0x2304C0u;
    SET_GPR_U32(ctx, 31, 0x2304C8u);
    ctx->pc = 0x2304C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2304C0u;
    // 0x2304c4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x2304C8u;
label_2304c8:
    // 0x2304c8: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2304c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2304cc:
    // 0x2304cc: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2304ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2304d0:
    // 0x2304d0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2304d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2304d4:
    // 0x2304d4: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x2304d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_2304d8:
    // 0x2304d8: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x2304d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2304dc:
    // 0x2304dc: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2304dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2304e0:
    // 0x2304e0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2304e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2304e4:
    // 0x2304e4: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x2304e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    ctx->pc = 0x2304e8u;
    return;
}
