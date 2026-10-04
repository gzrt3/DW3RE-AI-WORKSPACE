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


void FUN_0014eba0_part73(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x171e20u: goto label_171e20;
        case 0x171e24u: goto label_171e24;
        case 0x171e28u: goto label_171e28;
        case 0x171e2cu: goto label_171e2c;
        case 0x171e30u: goto label_171e30;
        case 0x171e34u: goto label_171e34;
        case 0x171e38u: goto label_171e38;
        case 0x171e3cu: goto label_171e3c;
        case 0x171e40u: goto label_171e40;
        case 0x171e44u: goto label_171e44;
        case 0x171e48u: goto label_171e48;
        case 0x171e4cu: goto label_171e4c;
        case 0x171e50u: goto label_171e50;
        case 0x171e54u: goto label_171e54;
        case 0x171e58u: goto label_171e58;
        case 0x171e5cu: goto label_171e5c;
        case 0x171e60u: goto label_171e60;
        case 0x171e64u: goto label_171e64;
        case 0x171e68u: goto label_171e68;
        case 0x171e6cu: goto label_171e6c;
        case 0x171e70u: goto label_171e70;
        case 0x171e74u: goto label_171e74;
        case 0x171e78u: goto label_171e78;
        case 0x171e7cu: goto label_171e7c;
        case 0x171e80u: goto label_171e80;
        case 0x171e84u: goto label_171e84;
        case 0x171e88u: goto label_171e88;
        case 0x171e8cu: goto label_171e8c;
        case 0x171e90u: goto label_171e90;
        case 0x171e94u: goto label_171e94;
        case 0x171e98u: goto label_171e98;
        case 0x171e9cu: goto label_171e9c;
        case 0x171ea0u: goto label_171ea0;
        case 0x171ea4u: goto label_171ea4;
        case 0x171ea8u: goto label_171ea8;
        case 0x171eacu: goto label_171eac;
        case 0x171eb0u: goto label_171eb0;
        case 0x171eb4u: goto label_171eb4;
        case 0x171eb8u: goto label_171eb8;
        case 0x171ebcu: goto label_171ebc;
        case 0x171ec0u: goto label_171ec0;
        case 0x171ec4u: goto label_171ec4;
        case 0x171ec8u: goto label_171ec8;
        case 0x171eccu: goto label_171ecc;
        case 0x171ed0u: goto label_171ed0;
        case 0x171ed4u: goto label_171ed4;
        case 0x171ed8u: goto label_171ed8;
        case 0x171edcu: goto label_171edc;
        case 0x171ee0u: goto label_171ee0;
        case 0x171ee4u: goto label_171ee4;
        case 0x171ee8u: goto label_171ee8;
        case 0x171eecu: goto label_171eec;
        case 0x171ef0u: goto label_171ef0;
        case 0x171ef4u: goto label_171ef4;
        case 0x171ef8u: goto label_171ef8;
        case 0x171efcu: goto label_171efc;
        case 0x171f00u: goto label_171f00;
        case 0x171f04u: goto label_171f04;
        case 0x171f08u: goto label_171f08;
        case 0x171f0cu: goto label_171f0c;
        case 0x171f10u: goto label_171f10;
        case 0x171f14u: goto label_171f14;
        case 0x171f18u: goto label_171f18;
        case 0x171f1cu: goto label_171f1c;
        case 0x171f20u: goto label_171f20;
        case 0x171f24u: goto label_171f24;
        case 0x171f28u: goto label_171f28;
        case 0x171f2cu: goto label_171f2c;
        case 0x171f30u: goto label_171f30;
        case 0x171f34u: goto label_171f34;
        case 0x171f38u: goto label_171f38;
        case 0x171f3cu: goto label_171f3c;
        case 0x171f40u: goto label_171f40;
        case 0x171f44u: goto label_171f44;
        case 0x171f48u: goto label_171f48;
        case 0x171f4cu: goto label_171f4c;
        case 0x171f50u: goto label_171f50;
        case 0x171f54u: goto label_171f54;
        case 0x171f58u: goto label_171f58;
        case 0x171f5cu: goto label_171f5c;
        case 0x171f60u: goto label_171f60;
        case 0x171f64u: goto label_171f64;
        case 0x171f68u: goto label_171f68;
        case 0x171f6cu: goto label_171f6c;
        case 0x171f70u: goto label_171f70;
        case 0x171f74u: goto label_171f74;
        case 0x171f78u: goto label_171f78;
        case 0x171f7cu: goto label_171f7c;
        case 0x171f80u: goto label_171f80;
        case 0x171f84u: goto label_171f84;
        case 0x171f88u: goto label_171f88;
        case 0x171f8cu: goto label_171f8c;
        case 0x171f90u: goto label_171f90;
        case 0x171f94u: goto label_171f94;
        case 0x171f98u: goto label_171f98;
        case 0x171f9cu: goto label_171f9c;
        case 0x171fa0u: goto label_171fa0;
        case 0x171fa4u: goto label_171fa4;
        case 0x171fa8u: goto label_171fa8;
        case 0x171facu: goto label_171fac;
        case 0x171fb0u: goto label_171fb0;
        case 0x171fb4u: goto label_171fb4;
        case 0x171fb8u: goto label_171fb8;
        case 0x171fbcu: goto label_171fbc;
        case 0x171fc0u: goto label_171fc0;
        case 0x171fc4u: goto label_171fc4;
        case 0x171fc8u: goto label_171fc8;
        case 0x171fccu: goto label_171fcc;
        case 0x171fd0u: goto label_171fd0;
        case 0x171fd4u: goto label_171fd4;
        case 0x171fd8u: goto label_171fd8;
        case 0x171fdcu: goto label_171fdc;
        case 0x171fe0u: goto label_171fe0;
        case 0x171fe4u: goto label_171fe4;
        case 0x171fe8u: goto label_171fe8;
        case 0x171fecu: goto label_171fec;
        case 0x171ff0u: goto label_171ff0;
        case 0x171ff4u: goto label_171ff4;
        case 0x171ff8u: goto label_171ff8;
        case 0x171ffcu: goto label_171ffc;
        case 0x172000u: goto label_172000;
        case 0x172004u: goto label_172004;
        case 0x172008u: goto label_172008;
        case 0x17200cu: goto label_17200c;
        case 0x172010u: goto label_172010;
        case 0x172014u: goto label_172014;
        case 0x172018u: goto label_172018;
        case 0x17201cu: goto label_17201c;
        case 0x172020u: goto label_172020;
        case 0x172024u: goto label_172024;
        case 0x172028u: goto label_172028;
        case 0x17202cu: goto label_17202c;
        case 0x172030u: goto label_172030;
        case 0x172034u: goto label_172034;
        case 0x172038u: goto label_172038;
        case 0x17203cu: goto label_17203c;
        case 0x172040u: goto label_172040;
        case 0x172044u: goto label_172044;
        case 0x172048u: goto label_172048;
        case 0x17204cu: goto label_17204c;
        case 0x172050u: goto label_172050;
        case 0x172054u: goto label_172054;
        case 0x172058u: goto label_172058;
        case 0x17205cu: goto label_17205c;
        case 0x172060u: goto label_172060;
        case 0x172064u: goto label_172064;
        case 0x172068u: goto label_172068;
        case 0x17206cu: goto label_17206c;
        case 0x172070u: goto label_172070;
        case 0x172074u: goto label_172074;
        case 0x172078u: goto label_172078;
        case 0x17207cu: goto label_17207c;
        case 0x172080u: goto label_172080;
        case 0x172084u: goto label_172084;
        case 0x172088u: goto label_172088;
        case 0x17208cu: goto label_17208c;
        case 0x172090u: goto label_172090;
        case 0x172094u: goto label_172094;
        case 0x172098u: goto label_172098;
        case 0x17209cu: goto label_17209c;
        case 0x1720a0u: goto label_1720a0;
        case 0x1720a4u: goto label_1720a4;
        case 0x1720a8u: goto label_1720a8;
        case 0x1720acu: goto label_1720ac;
        case 0x1720b0u: goto label_1720b0;
        case 0x1720b4u: goto label_1720b4;
        case 0x1720b8u: goto label_1720b8;
        case 0x1720bcu: goto label_1720bc;
        case 0x1720c0u: goto label_1720c0;
        case 0x1720c4u: goto label_1720c4;
        case 0x1720c8u: goto label_1720c8;
        case 0x1720ccu: goto label_1720cc;
        case 0x1720d0u: goto label_1720d0;
        case 0x1720d4u: goto label_1720d4;
        case 0x1720d8u: goto label_1720d8;
        case 0x1720dcu: goto label_1720dc;
        case 0x1720e0u: goto label_1720e0;
        case 0x1720e4u: goto label_1720e4;
        case 0x1720e8u: goto label_1720e8;
        case 0x1720ecu: goto label_1720ec;
        case 0x1720f0u: goto label_1720f0;
        case 0x1720f4u: goto label_1720f4;
        case 0x1720f8u: goto label_1720f8;
        case 0x1720fcu: goto label_1720fc;
        case 0x172100u: goto label_172100;
        case 0x172104u: goto label_172104;
        case 0x172108u: goto label_172108;
        case 0x17210cu: goto label_17210c;
        case 0x172110u: goto label_172110;
        case 0x172114u: goto label_172114;
        case 0x172118u: goto label_172118;
        case 0x17211cu: goto label_17211c;
        case 0x172120u: goto label_172120;
        case 0x172124u: goto label_172124;
        case 0x172128u: goto label_172128;
        case 0x17212cu: goto label_17212c;
        case 0x172130u: goto label_172130;
        case 0x172134u: goto label_172134;
        case 0x172138u: goto label_172138;
        case 0x17213cu: goto label_17213c;
        case 0x172140u: goto label_172140;
        case 0x172144u: goto label_172144;
        case 0x172148u: goto label_172148;
        case 0x17214cu: goto label_17214c;
        case 0x172150u: goto label_172150;
        case 0x172154u: goto label_172154;
        case 0x172158u: goto label_172158;
        case 0x17215cu: goto label_17215c;
        case 0x172160u: goto label_172160;
        case 0x172164u: goto label_172164;
        case 0x172168u: goto label_172168;
        case 0x17216cu: goto label_17216c;
        case 0x172170u: goto label_172170;
        case 0x172174u: goto label_172174;
        case 0x172178u: goto label_172178;
        case 0x17217cu: goto label_17217c;
        case 0x172180u: goto label_172180;
        case 0x172184u: goto label_172184;
        case 0x172188u: goto label_172188;
        case 0x17218cu: goto label_17218c;
        case 0x172190u: goto label_172190;
        case 0x172194u: goto label_172194;
        case 0x172198u: goto label_172198;
        case 0x17219cu: goto label_17219c;
        case 0x1721a0u: goto label_1721a0;
        case 0x1721a4u: goto label_1721a4;
        case 0x1721a8u: goto label_1721a8;
        case 0x1721acu: goto label_1721ac;
        case 0x1721b0u: goto label_1721b0;
        case 0x1721b4u: goto label_1721b4;
        case 0x1721b8u: goto label_1721b8;
        case 0x1721bcu: goto label_1721bc;
        case 0x1721c0u: goto label_1721c0;
        case 0x1721c4u: goto label_1721c4;
        case 0x1721c8u: goto label_1721c8;
        case 0x1721ccu: goto label_1721cc;
        case 0x1721d0u: goto label_1721d0;
        case 0x1721d4u: goto label_1721d4;
        case 0x1721d8u: goto label_1721d8;
        case 0x1721dcu: goto label_1721dc;
        case 0x1721e0u: goto label_1721e0;
        case 0x1721e4u: goto label_1721e4;
        case 0x1721e8u: goto label_1721e8;
        case 0x1721ecu: goto label_1721ec;
        case 0x1721f0u: goto label_1721f0;
        case 0x1721f4u: goto label_1721f4;
        case 0x1721f8u: goto label_1721f8;
        case 0x1721fcu: goto label_1721fc;
        case 0x172200u: goto label_172200;
        case 0x172204u: goto label_172204;
        case 0x172208u: goto label_172208;
        case 0x17220cu: goto label_17220c;
        case 0x172210u: goto label_172210;
        case 0x172214u: goto label_172214;
        case 0x172218u: goto label_172218;
        case 0x17221cu: goto label_17221c;
        case 0x172220u: goto label_172220;
        case 0x172224u: goto label_172224;
        case 0x172228u: goto label_172228;
        case 0x17222cu: goto label_17222c;
        case 0x172230u: goto label_172230;
        case 0x172234u: goto label_172234;
        case 0x172238u: goto label_172238;
        case 0x17223cu: goto label_17223c;
        case 0x172240u: goto label_172240;
        case 0x172244u: goto label_172244;
        case 0x172248u: goto label_172248;
        case 0x17224cu: goto label_17224c;
        case 0x172250u: goto label_172250;
        case 0x172254u: goto label_172254;
        case 0x172258u: goto label_172258;
        case 0x17225cu: goto label_17225c;
        case 0x172260u: goto label_172260;
        case 0x172264u: goto label_172264;
        case 0x172268u: goto label_172268;
        case 0x17226cu: goto label_17226c;
        case 0x172270u: goto label_172270;
        case 0x172274u: goto label_172274;
        case 0x172278u: goto label_172278;
        case 0x17227cu: goto label_17227c;
        case 0x172280u: goto label_172280;
        case 0x172284u: goto label_172284;
        case 0x172288u: goto label_172288;
        case 0x17228cu: goto label_17228c;
        case 0x172290u: goto label_172290;
        case 0x172294u: goto label_172294;
        case 0x172298u: goto label_172298;
        case 0x17229cu: goto label_17229c;
        case 0x1722a0u: goto label_1722a0;
        case 0x1722a4u: goto label_1722a4;
        case 0x1722a8u: goto label_1722a8;
        case 0x1722acu: goto label_1722ac;
        case 0x1722b0u: goto label_1722b0;
        case 0x1722b4u: goto label_1722b4;
        case 0x1722b8u: goto label_1722b8;
        case 0x1722bcu: goto label_1722bc;
        case 0x1722c0u: goto label_1722c0;
        case 0x1722c4u: goto label_1722c4;
        case 0x1722c8u: goto label_1722c8;
        case 0x1722ccu: goto label_1722cc;
        case 0x1722d0u: goto label_1722d0;
        case 0x1722d4u: goto label_1722d4;
        case 0x1722d8u: goto label_1722d8;
        case 0x1722dcu: goto label_1722dc;
        case 0x1722e0u: goto label_1722e0;
        case 0x1722e4u: goto label_1722e4;
        case 0x1722e8u: goto label_1722e8;
        case 0x1722ecu: goto label_1722ec;
        case 0x1722f0u: goto label_1722f0;
        case 0x1722f4u: goto label_1722f4;
        case 0x1722f8u: goto label_1722f8;
        case 0x1722fcu: goto label_1722fc;
        case 0x172300u: goto label_172300;
        case 0x172304u: goto label_172304;
        case 0x172308u: goto label_172308;
        case 0x17230cu: goto label_17230c;
        case 0x172310u: goto label_172310;
        case 0x172314u: goto label_172314;
        case 0x172318u: goto label_172318;
        case 0x17231cu: goto label_17231c;
        case 0x172320u: goto label_172320;
        case 0x172324u: goto label_172324;
        case 0x172328u: goto label_172328;
        case 0x17232cu: goto label_17232c;
        case 0x172330u: goto label_172330;
        case 0x172334u: goto label_172334;
        case 0x172338u: goto label_172338;
        case 0x17233cu: goto label_17233c;
        case 0x172340u: goto label_172340;
        case 0x172344u: goto label_172344;
        case 0x172348u: goto label_172348;
        case 0x17234cu: goto label_17234c;
        case 0x172350u: goto label_172350;
        case 0x172354u: goto label_172354;
        case 0x172358u: goto label_172358;
        case 0x17235cu: goto label_17235c;
        case 0x172360u: goto label_172360;
        case 0x172364u: goto label_172364;
        case 0x172368u: goto label_172368;
        case 0x17236cu: goto label_17236c;
        case 0x172370u: goto label_172370;
        case 0x172374u: goto label_172374;
        case 0x172378u: goto label_172378;
        case 0x17237cu: goto label_17237c;
        case 0x172380u: goto label_172380;
        case 0x172384u: goto label_172384;
        case 0x172388u: goto label_172388;
        case 0x17238cu: goto label_17238c;
        case 0x172390u: goto label_172390;
        case 0x172394u: goto label_172394;
        case 0x172398u: goto label_172398;
        case 0x17239cu: goto label_17239c;
        case 0x1723a0u: goto label_1723a0;
        case 0x1723a4u: goto label_1723a4;
        case 0x1723a8u: goto label_1723a8;
        case 0x1723acu: goto label_1723ac;
        case 0x1723b0u: goto label_1723b0;
        case 0x1723b4u: goto label_1723b4;
        case 0x1723b8u: goto label_1723b8;
        case 0x1723bcu: goto label_1723bc;
        case 0x1723c0u: goto label_1723c0;
        case 0x1723c4u: goto label_1723c4;
        case 0x1723c8u: goto label_1723c8;
        case 0x1723ccu: goto label_1723cc;
        case 0x1723d0u: goto label_1723d0;
        case 0x1723d4u: goto label_1723d4;
        case 0x1723d8u: goto label_1723d8;
        case 0x1723dcu: goto label_1723dc;
        case 0x1723e0u: goto label_1723e0;
        case 0x1723e4u: goto label_1723e4;
        case 0x1723e8u: goto label_1723e8;
        case 0x1723ecu: goto label_1723ec;
        case 0x1723f0u: goto label_1723f0;
        case 0x1723f4u: goto label_1723f4;
        case 0x1723f8u: goto label_1723f8;
        case 0x1723fcu: goto label_1723fc;
        case 0x172400u: goto label_172400;
        case 0x172404u: goto label_172404;
        case 0x172408u: goto label_172408;
        case 0x17240cu: goto label_17240c;
        case 0x172410u: goto label_172410;
        case 0x172414u: goto label_172414;
        case 0x172418u: goto label_172418;
        case 0x17241cu: goto label_17241c;
        case 0x172420u: goto label_172420;
        case 0x172424u: goto label_172424;
        case 0x172428u: goto label_172428;
        case 0x17242cu: goto label_17242c;
        case 0x172430u: goto label_172430;
        case 0x172434u: goto label_172434;
        case 0x172438u: goto label_172438;
        case 0x17243cu: goto label_17243c;
        case 0x172440u: goto label_172440;
        case 0x172444u: goto label_172444;
        case 0x172448u: goto label_172448;
        case 0x17244cu: goto label_17244c;
        case 0x172450u: goto label_172450;
        case 0x172454u: goto label_172454;
        case 0x172458u: goto label_172458;
        case 0x17245cu: goto label_17245c;
        case 0x172460u: goto label_172460;
        case 0x172464u: goto label_172464;
        case 0x172468u: goto label_172468;
        case 0x17246cu: goto label_17246c;
        case 0x172470u: goto label_172470;
        case 0x172474u: goto label_172474;
        case 0x172478u: goto label_172478;
        case 0x17247cu: goto label_17247c;
        case 0x172480u: goto label_172480;
        case 0x172484u: goto label_172484;
        case 0x172488u: goto label_172488;
        case 0x17248cu: goto label_17248c;
        case 0x172490u: goto label_172490;
        case 0x172494u: goto label_172494;
        case 0x172498u: goto label_172498;
        case 0x17249cu: goto label_17249c;
        case 0x1724a0u: goto label_1724a0;
        case 0x1724a4u: goto label_1724a4;
        case 0x1724a8u: goto label_1724a8;
        case 0x1724acu: goto label_1724ac;
        case 0x1724b0u: goto label_1724b0;
        case 0x1724b4u: goto label_1724b4;
        case 0x1724b8u: goto label_1724b8;
        case 0x1724bcu: goto label_1724bc;
        case 0x1724c0u: goto label_1724c0;
        case 0x1724c4u: goto label_1724c4;
        case 0x1724c8u: goto label_1724c8;
        case 0x1724ccu: goto label_1724cc;
        case 0x1724d0u: goto label_1724d0;
        case 0x1724d4u: goto label_1724d4;
        case 0x1724d8u: goto label_1724d8;
        case 0x1724dcu: goto label_1724dc;
        case 0x1724e0u: goto label_1724e0;
        case 0x1724e4u: goto label_1724e4;
        case 0x1724e8u: goto label_1724e8;
        case 0x1724ecu: goto label_1724ec;
        case 0x1724f0u: goto label_1724f0;
        case 0x1724f4u: goto label_1724f4;
        case 0x1724f8u: goto label_1724f8;
        case 0x1724fcu: goto label_1724fc;
        case 0x172500u: goto label_172500;
        case 0x172504u: goto label_172504;
        case 0x172508u: goto label_172508;
        case 0x17250cu: goto label_17250c;
        case 0x172510u: goto label_172510;
        case 0x172514u: goto label_172514;
        case 0x172518u: goto label_172518;
        case 0x17251cu: goto label_17251c;
        case 0x172520u: goto label_172520;
        case 0x172524u: goto label_172524;
        case 0x172528u: goto label_172528;
        case 0x17252cu: goto label_17252c;
        case 0x172530u: goto label_172530;
        case 0x172534u: goto label_172534;
        case 0x172538u: goto label_172538;
        case 0x17253cu: goto label_17253c;
        case 0x172540u: goto label_172540;
        case 0x172544u: goto label_172544;
        case 0x172548u: goto label_172548;
        case 0x17254cu: goto label_17254c;
        case 0x172550u: goto label_172550;
        case 0x172554u: goto label_172554;
        case 0x172558u: goto label_172558;
        case 0x17255cu: goto label_17255c;
        case 0x172560u: goto label_172560;
        case 0x172564u: goto label_172564;
        case 0x172568u: goto label_172568;
        case 0x17256cu: goto label_17256c;
        case 0x172570u: goto label_172570;
        case 0x172574u: goto label_172574;
        case 0x172578u: goto label_172578;
        case 0x17257cu: goto label_17257c;
        case 0x172580u: goto label_172580;
        case 0x172584u: goto label_172584;
        case 0x172588u: goto label_172588;
        case 0x17258cu: goto label_17258c;
        case 0x172590u: goto label_172590;
        case 0x172594u: goto label_172594;
        case 0x172598u: goto label_172598;
        case 0x17259cu: goto label_17259c;
        case 0x1725a0u: goto label_1725a0;
        case 0x1725a4u: goto label_1725a4;
        case 0x1725a8u: goto label_1725a8;
        case 0x1725acu: goto label_1725ac;
        case 0x1725b0u: goto label_1725b0;
        case 0x1725b4u: goto label_1725b4;
        case 0x1725b8u: goto label_1725b8;
        case 0x1725bcu: goto label_1725bc;
        case 0x1725c0u: goto label_1725c0;
        case 0x1725c4u: goto label_1725c4;
        case 0x1725c8u: goto label_1725c8;
        case 0x1725ccu: goto label_1725cc;
        case 0x1725d0u: goto label_1725d0;
        case 0x1725d4u: goto label_1725d4;
        case 0x1725d8u: goto label_1725d8;
        case 0x1725dcu: goto label_1725dc;
        case 0x1725e0u: goto label_1725e0;
        case 0x1725e4u: goto label_1725e4;
        case 0x1725e8u: goto label_1725e8;
        case 0x1725ecu: goto label_1725ec;
        default: return;
    }

label_171e20:
    // 0x171e20: 0x96a31138  lhu         $v1, 0x1138($s5)
    ctx->pc = 0x171e20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4408)));
label_171e24:
    // 0x171e24: 0x2e3182b  sltu        $v1, $s7, $v1
    ctx->pc = 0x171e24u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_171e28:
    // 0x171e28: 0x1460ff29  bnez        $v1, . + 4 + (-0xD7 << 2)
label_171e2c:
    if (ctx->pc == 0x171E2Cu) {
        ctx->pc = 0x171E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171E28u;
        // 0x171e2c: 0x2b61821  addu        $v1, $s5, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171E30u;
        goto label_171e30;
    }
    ctx->pc = 0x171E28u;
    {
        const bool branch_taken_0x171e28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x171E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171E28u;
        // 0x171e2c: 0x2b61821  addu        $v1, $s5, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171e28) {
            ctx->pc = 0x171AD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x171ad0; return; }
        }
    }
    ctx->pc = 0x171E30u;
label_171e30:
    // 0x171e30: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x171e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_171e34:
    // 0x171e34: 0xc7bb001c  lwc1        $f27, 0x1C($sp)
    ctx->pc = 0x171e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_171e38:
    // 0x171e38: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x171e38u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_171e3c:
    // 0x171e3c: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x171e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_171e40:
    // 0x171e40: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x171e40u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_171e44:
    // 0x171e44: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x171e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_171e48:
    // 0x171e48: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x171e48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_171e4c:
    // 0x171e4c: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x171e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_171e50:
    // 0x171e50: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x171e50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_171e54:
    // 0x171e54: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x171e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_171e58:
    // 0x171e58: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x171e58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_171e5c:
    // 0x171e5c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x171e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_171e60:
    // 0x171e60: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x171e60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_171e64:
    // 0x171e64: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x171e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_171e68:
    // 0x171e68: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x171e68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_171e6c:
    // 0x171e6c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x171e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_171e70:
    // 0x171e70: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x171e70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_171e74:
    // 0x171e74: 0x3e00008  jr          $ra
label_171e78:
    if (ctx->pc == 0x171E78u) {
        ctx->pc = 0x171E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171E74u;
        // 0x171e78: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171E7Cu;
        goto label_171e7c;
    }
    ctx->pc = 0x171E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171E74u;
        // 0x171e78: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171E7Cu;
label_171e7c:
    // 0x171e7c: 0x0  nop
    ctx->pc = 0x171e7cu;
    // NOP
label_171e80:
    // 0x171e80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x171e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_171e84:
    // 0x171e84: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x171e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_171e88:
    // 0x171e88: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x171e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_171e8c:
    // 0x171e8c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x171e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_171e90:
    // 0x171e90: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x171e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_171e94:
    // 0x171e94: 0x24631e00  addiu       $v1, $v1, 0x1E00
    ctx->pc = 0x171e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7680));
label_171e98:
    // 0x171e98: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x171e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_171e9c:
    // 0x171e9c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x171e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_171ea0:
    // 0x171ea0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x171ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_171ea4:
    // 0x171ea4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x171ea4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_171ea8:
    // 0x171ea8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x171ea8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_171eac:
    // 0x171eac: 0x90841134  lbu         $a0, 0x1134($a0)
    ctx->pc = 0x171eacu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4404)));
label_171eb0:
    // 0x171eb0: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x171eb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_171eb4:
    // 0x171eb4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_171eb8:
    if (ctx->pc == 0x171EB8u) {
        ctx->pc = 0x171EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171EB4u;
        // 0x171eb8: 0x658021  addu        $s0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171EBCu;
        goto label_171ebc;
    }
    ctx->pc = 0x171EB4u;
    {
        const bool branch_taken_0x171eb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x171EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171EB4u;
        // 0x171eb8: 0x658021  addu        $s0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171eb4) {
            ctx->pc = 0x171EC8u;
            goto label_171ec8;
        }
    }
    ctx->pc = 0x171EBCu;
label_171ebc:
    // 0x171ebc: 0x8f838640  lw          $v1, -0x79C0($gp)
    ctx->pc = 0x171ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
label_171ec0:
    // 0x171ec0: 0x14830055  bne         $a0, $v1, . + 4 + (0x55 << 2)
label_171ec4:
    if (ctx->pc == 0x171EC4u) {
        ctx->pc = 0x171EC8u;
        goto label_171ec8;
    }
    ctx->pc = 0x171EC0u;
    {
        const bool branch_taken_0x171ec0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x171ec0) {
            ctx->pc = 0x172018u;
            goto label_172018;
        }
    }
    ctx->pc = 0x171EC8u;
label_171ec8:
    // 0x171ec8: 0x8f838640  lw          $v1, -0x79C0($gp)
    ctx->pc = 0x171ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
label_171ecc:
    // 0x171ecc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x171eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_171ed0:
    // 0x171ed0: 0x24429c40  addiu       $v0, $v0, -0x63C0
    ctx->pc = 0x171ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941760));
label_171ed4:
    // 0x171ed4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x171ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_171ed8:
    // 0x171ed8: 0x26261120  addiu       $a2, $s1, 0x1120
    ctx->pc = 0x171ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4384));
label_171edc:
    // 0x171edc: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x171edcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_171ee0:
    // 0x171ee0: 0xc066d7a  jal         func_19B5E8
label_171ee4:
    if (ctx->pc == 0x171EE4u) {
        ctx->pc = 0x171EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171EE0u;
        // 0x171ee4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171EE8u;
        goto label_171ee8;
    }
    ctx->pc = 0x171EE0u;
    SET_GPR_U32(ctx, 31, 0x171EE8u);
    ctx->pc = 0x171EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171EE0u;
    // 0x171ee4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x171EE8u;
label_171ee8:
    // 0x171ee8: 0xc07f1a0  jal         func_1FC680
label_171eec:
    if (ctx->pc == 0x171EECu) {
        ctx->pc = 0x171EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171EE8u;
        // 0x171eec: 0x8f848640  lw          $a0, -0x79C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171EF0u;
        goto label_171ef0;
    }
    ctx->pc = 0x171EE8u;
    SET_GPR_U32(ctx, 31, 0x171EF0u);
    ctx->pc = 0x171EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171EE8u;
    // 0x171eec: 0x8f848640  lw          $a0, -0x79C0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC680u;
    { ctx->pc = 0x1fc680; return; }
    ctx->pc = 0x171EF0u;
label_171ef0:
    // 0x171ef0: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x171ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_171ef4:
    // 0x171ef4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x171ef4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_171ef8:
    // 0x171ef8: 0x0  nop
    ctx->pc = 0x171ef8u;
    // NOP
label_171efc:
    // 0x171efc: 0x45000046  bc1f        . + 4 + (0x46 << 2)
label_171f00:
    if (ctx->pc == 0x171F00u) {
        ctx->pc = 0x171F04u;
        goto label_171f04;
    }
    ctx->pc = 0x171EFCu;
    {
        const bool branch_taken_0x171efc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x171efc) {
            ctx->pc = 0x172018u;
            goto label_172018;
        }
    }
    ctx->pc = 0x171F04u;
label_171f04:
    // 0x171f04: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x171f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_171f08:
    // 0x171f08: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x171f08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_171f0c:
    // 0x171f0c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_171f10:
    if (ctx->pc == 0x171F10u) {
        ctx->pc = 0x171F14u;
        goto label_171f14;
    }
    ctx->pc = 0x171F0Cu;
    {
        const bool branch_taken_0x171f0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x171f0c) {
            ctx->pc = 0x171F20u;
            goto label_171f20;
        }
    }
    ctx->pc = 0x171F14u;
label_171f14:
    // 0x171f14: 0x9623113a  lhu         $v1, 0x113A($s1)
    ctx->pc = 0x171f14u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4410)));
label_171f18:
    // 0x171f18: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
label_171f1c:
    if (ctx->pc == 0x171F1Cu) {
        ctx->pc = 0x171F20u;
        goto label_171f20;
    }
    ctx->pc = 0x171F18u;
    {
        const bool branch_taken_0x171f18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x171f18) {
            ctx->pc = 0x172018u;
            goto label_172018;
        }
    }
    ctx->pc = 0x171F20u;
label_171f20:
    // 0x171f20: 0xc62c113c  lwc1        $f12, 0x113C($s1)
    ctx->pc = 0x171f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_171f24:
    // 0x171f24: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x171f24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_171f28:
    // 0x171f28: 0xc6341140  lwc1        $f20, 0x1140($s1)
    ctx->pc = 0x171f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_171f2c:
    // 0x171f2c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x171f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_171f30:
    // 0x171f30: 0x24844590  addiu       $a0, $a0, 0x4590
    ctx->pc = 0x171f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17808));
label_171f34:
    // 0x171f34: 0xc066e14  jal         func_19B850
label_171f38:
    if (ctx->pc == 0x171F38u) {
        ctx->pc = 0x171F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171F34u;
        // 0x171f38: 0x24a545b0  addiu       $a1, $a1, 0x45B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171F3Cu;
        goto label_171f3c;
    }
    ctx->pc = 0x171F34u;
    SET_GPR_U32(ctx, 31, 0x171F3Cu);
    ctx->pc = 0x171F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171F34u;
    // 0x171f38: 0x24a545b0  addiu       $a1, $a1, 0x45B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x171F3Cu;
label_171f3c:
    // 0x171f3c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x171f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_171f40:
    // 0x171f40: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x171f40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_171f44:
    // 0x171f44: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x171f44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_171f48:
    // 0x171f48: 0x248445a0  addiu       $a0, $a0, 0x45A0
    ctx->pc = 0x171f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17824));
label_171f4c:
    // 0x171f4c: 0xc066e14  jal         func_19B850
label_171f50:
    if (ctx->pc == 0x171F50u) {
        ctx->pc = 0x171F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171F4Cu;
        // 0x171f50: 0x24a545c0  addiu       $a1, $a1, 0x45C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171F54u;
        goto label_171f54;
    }
    ctx->pc = 0x171F4Cu;
    SET_GPR_U32(ctx, 31, 0x171F54u);
    ctx->pc = 0x171F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171F4Cu;
    // 0x171f50: 0x24a545c0  addiu       $a1, $a1, 0x45C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x171F54u;
label_171f54:
    // 0x171f54: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x171f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_171f58:
    // 0x171f58: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x171f58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_171f5c:
    // 0x171f5c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x171f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_171f60:
    // 0x171f60: 0x24844580  addiu       $a0, $a0, 0x4580
    ctx->pc = 0x171f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17792));
label_171f64:
    // 0x171f64: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x171f64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_171f68:
    // 0x171f68: 0xc066e14  jal         func_19B850
label_171f6c:
    if (ctx->pc == 0x171F6Cu) {
        ctx->pc = 0x171F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171F68u;
        // 0x171f6c: 0x24a54590  addiu       $a1, $a1, 0x4590 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17808));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171F70u;
        goto label_171f70;
    }
    ctx->pc = 0x171F68u;
    SET_GPR_U32(ctx, 31, 0x171F70u);
    ctx->pc = 0x171F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171F68u;
    // 0x171f6c: 0x24a54590  addiu       $a1, $a1, 0x4590 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x171F70u;
label_171f70:
    // 0x171f70: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x171f70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_171f74:
    // 0x171f74: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x171f74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_171f78:
    // 0x171f78: 0x262410d0  addiu       $a0, $s1, 0x10D0
    ctx->pc = 0x171f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4304));
label_171f7c:
    // 0x171f7c: 0x24a54580  addiu       $a1, $a1, 0x4580
    ctx->pc = 0x171f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17792));
label_171f80:
    // 0x171f80: 0xc066e08  jal         func_19B820
label_171f84:
    if (ctx->pc == 0x171F84u) {
        ctx->pc = 0x171F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171F80u;
        // 0x171f84: 0x24c645a0  addiu       $a2, $a2, 0x45A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171F88u;
        goto label_171f88;
    }
    ctx->pc = 0x171F80u;
    SET_GPR_U32(ctx, 31, 0x171F88u);
    ctx->pc = 0x171F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171F80u;
    // 0x171f84: 0x24c645a0  addiu       $a2, $a2, 0x45A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x171F88u;
label_171f88:
    // 0x171f88: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x171f88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_171f8c:
    // 0x171f8c: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x171f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_171f90:
    // 0x171f90: 0x262410e0  addiu       $a0, $s1, 0x10E0
    ctx->pc = 0x171f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4320));
label_171f94:
    // 0x171f94: 0x24a54590  addiu       $a1, $a1, 0x4590
    ctx->pc = 0x171f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17808));
label_171f98:
    // 0x171f98: 0xc066e02  jal         func_19B808
label_171f9c:
    if (ctx->pc == 0x171F9Cu) {
        ctx->pc = 0x171F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171F98u;
        // 0x171f9c: 0x24c645a0  addiu       $a2, $a2, 0x45A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171FA0u;
        goto label_171fa0;
    }
    ctx->pc = 0x171F98u;
    SET_GPR_U32(ctx, 31, 0x171FA0u);
    ctx->pc = 0x171F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171F98u;
    // 0x171f9c: 0x24c645a0  addiu       $a2, $a2, 0x45A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x171FA0u;
label_171fa0:
    // 0x171fa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x171fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_171fa4:
    // 0x171fa4: 0xc066c5c  jal         func_19B170
label_171fa8:
    if (ctx->pc == 0x171FA8u) {
        ctx->pc = 0x171FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171FA4u;
        // 0x171fa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171FACu;
        goto label_171fac;
    }
    ctx->pc = 0x171FA4u;
    SET_GPR_U32(ctx, 31, 0x171FACu);
    ctx->pc = 0x171FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171FA4u;
    // 0x171fa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B170u;
    { ctx->pc = 0x19b170; return; }
    ctx->pc = 0x171FACu;
label_171fac:
    // 0x171fac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x171facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_171fb0:
    // 0x171fb0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x171fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_171fb4:
    // 0x171fb4: 0xc066d10  jal         func_19B440
label_171fb8:
    if (ctx->pc == 0x171FB8u) {
        ctx->pc = 0x171FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171FB4u;
        // 0x171fb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171FBCu;
        goto label_171fbc;
    }
    ctx->pc = 0x171FB4u;
    SET_GPR_U32(ctx, 31, 0x171FBCu);
    ctx->pc = 0x171FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171FB4u;
    // 0x171fb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B440u;
    { ctx->pc = 0x19b440; return; }
    ctx->pc = 0x171FBCu;
label_171fbc:
    // 0x171fbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x171fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_171fc0:
    // 0x171fc0: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x171fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_171fc4:
    // 0x171fc4: 0xc066d36  jal         func_19B4D8
label_171fc8:
    if (ctx->pc == 0x171FC8u) {
        ctx->pc = 0x171FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171FC4u;
        // 0x171fc8: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171FCCu;
        goto label_171fcc;
    }
    ctx->pc = 0x171FC4u;
    SET_GPR_U32(ctx, 31, 0x171FCCu);
    ctx->pc = 0x171FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171FC4u;
    // 0x171fc8: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B4D8u;
    { ctx->pc = 0x19b4d8; return; }
    ctx->pc = 0x171FCCu;
label_171fcc:
    // 0x171fcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x171fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_171fd0:
    // 0x171fd0: 0x262510c0  addiu       $a1, $s1, 0x10C0
    ctx->pc = 0x171fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4288));
label_171fd4:
    // 0x171fd4: 0xc066d36  jal         func_19B4D8
label_171fd8:
    if (ctx->pc == 0x171FD8u) {
        ctx->pc = 0x171FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171FD4u;
        // 0x171fd8: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171FDCu;
        goto label_171fdc;
    }
    ctx->pc = 0x171FD4u;
    SET_GPR_U32(ctx, 31, 0x171FDCu);
    ctx->pc = 0x171FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171FD4u;
    // 0x171fd8: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B4D8u;
    { ctx->pc = 0x19b4d8; return; }
    ctx->pc = 0x171FDCu;
label_171fdc:
    // 0x171fdc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x171fdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171fe0:
    // 0x171fe0: 0x10000007  b           . + 4 + (0x7 << 2)
label_171fe4:
    if (ctx->pc == 0x171FE4u) {
        ctx->pc = 0x171FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171FE0u;
        // 0x171fe4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171FE8u;
        goto label_171fe8;
    }
    ctx->pc = 0x171FE0u;
    {
        const bool branch_taken_0x171fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171FE0u;
        // 0x171fe4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171fe0) {
            ctx->pc = 0x172000u;
            goto label_172000;
        }
    }
    ctx->pc = 0x171FE8u;
label_171fe8:
    // 0x171fe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x171fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_171fec:
    // 0x171fec: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x171fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_171ff0:
    // 0x171ff0: 0xc066d36  jal         func_19B4D8
label_171ff4:
    if (ctx->pc == 0x171FF4u) {
        ctx->pc = 0x171FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171FF0u;
        // 0x171ff4: 0x24060208  addiu       $a2, $zero, 0x208 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171FF8u;
        goto label_171ff8;
    }
    ctx->pc = 0x171FF0u;
    SET_GPR_U32(ctx, 31, 0x171FF8u);
    ctx->pc = 0x171FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171FF0u;
    // 0x171ff4: 0x24060208  addiu       $a2, $zero, 0x208 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B4D8u;
    { ctx->pc = 0x19b4d8; return; }
    ctx->pc = 0x171FF8u;
label_171ff8:
    // 0x171ff8: 0x26730820  addiu       $s3, $s3, 0x820
    ctx->pc = 0x171ff8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2080));
label_171ffc:
    // 0x171ffc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x171ffcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_172000:
    // 0x172000: 0x96221138  lhu         $v0, 0x1138($s1)
    ctx->pc = 0x172000u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4408)));
label_172004:
    // 0x172004: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x172004u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_172008:
    // 0x172008: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_17200c:
    if (ctx->pc == 0x17200Cu) {
        ctx->pc = 0x17200Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172008u;
        // 0x17200c: 0x2331021  addu        $v0, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172010u;
        goto label_172010;
    }
    ctx->pc = 0x172008u;
    {
        const bool branch_taken_0x172008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17200Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172008u;
        // 0x17200c: 0x2331021  addu        $v0, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172008) {
            ctx->pc = 0x171FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171fe8;
        }
    }
    ctx->pc = 0x172010u;
label_172010:
    // 0x172010: 0xc066c46  jal         func_19B118
label_172014:
    if (ctx->pc == 0x172014u) {
        ctx->pc = 0x172014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172010u;
        // 0x172014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172018u;
        goto label_172018;
    }
    ctx->pc = 0x172010u;
    SET_GPR_U32(ctx, 31, 0x172018u);
    ctx->pc = 0x172014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172010u;
    // 0x172014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B118u;
    { ctx->pc = 0x19b118; return; }
    ctx->pc = 0x172018u;
label_172018:
    // 0x172018: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x172018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_17201c:
    // 0x17201c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x17201cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_172020:
    // 0x172020: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x172020u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_172024:
    // 0x172024: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x172024u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_172028:
    // 0x172028: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x172028u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17202c:
    // 0x17202c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17202cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_172030:
    // 0x172030: 0x3e00008  jr          $ra
label_172034:
    if (ctx->pc == 0x172034u) {
        ctx->pc = 0x172034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172030u;
        // 0x172034: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172038u;
        goto label_172038;
    }
    ctx->pc = 0x172030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172030u;
        // 0x172034: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172038u;
label_172038:
    // 0x172038: 0x0  nop
    ctx->pc = 0x172038u;
    // NOP
label_17203c:
    // 0x17203c: 0x0  nop
    ctx->pc = 0x17203cu;
    // NOP
label_172040:
    // 0x172040: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x172040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_172044:
    // 0x172044: 0x3123ffff  andi        $v1, $t1, 0xFFFF
    ctx->pc = 0x172044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
label_172048:
    // 0x172048: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x172048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_17204c:
    // 0x17204c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x17204cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
label_172050:
    // 0x172050: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x172050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_172054:
    // 0x172054: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x172054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_172058:
    // 0x172058: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x172058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17205c:
    // 0x17205c: 0x240c0007  addiu       $t4, $zero, 0x7
    ctx->pc = 0x17205cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_172060:
    // 0x172060: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x172060u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_172064:
    // 0x172064: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x172064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_172068:
    // 0x172068: 0x34470404  ori         $a3, $v0, 0x404
    ctx->pc = 0x172068u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
label_17206c:
    // 0x17206c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x17206cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_172070:
    // 0x172070: 0xac8710c0  sw          $a3, 0x10C0($a0)
    ctx->pc = 0x172070u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4288), GPR_U32(ctx, 7));
label_172074:
    // 0x172074: 0x3c026c05  lui         $v0, 0x6C05
    ctx->pc = 0x172074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27653 << 16));
label_172078:
    // 0x172078: 0x34470008  ori         $a3, $v0, 0x8
    ctx->pc = 0x172078u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_17207c:
    // 0x17207c: 0xac8010c4  sw          $zero, 0x10C4($a0)
    ctx->pc = 0x17207cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4292), GPR_U32(ctx, 0));
label_172080:
    // 0x172080: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x172080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_172084:
    // 0x172084: 0xac8010c8  sw          $zero, 0x10C8($a0)
    ctx->pc = 0x172084u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4296), GPR_U32(ctx, 0));
label_172088:
    // 0x172088: 0x34483431  ori         $t0, $v0, 0x3431
    ctx->pc = 0x172088u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13361);
label_17208c:
    // 0x17208c: 0xac8710cc  sw          $a3, 0x10CC($a0)
    ctx->pc = 0x17208cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4300), GPR_U32(ctx, 7));
label_172090:
    // 0x172090: 0x3c0251ab  lui         $v0, 0x51AB
    ctx->pc = 0x172090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20907 << 16));
label_172094:
    // 0x172094: 0xac80111c  sw          $zero, 0x111C($a0)
    ctx->pc = 0x172094u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4380), GPR_U32(ctx, 0));
label_172098:
    // 0x172098: 0x34474000  ori         $a3, $v0, 0x4000
    ctx->pc = 0x172098u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_17209c:
    // 0x17209c: 0xac881118  sw          $t0, 0x1118($a0)
    ctx->pc = 0x17209cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4376), GPR_U32(ctx, 8));
label_1720a0:
    // 0x1720a0: 0xac871114  sw          $a3, 0x1114($a0)
    ctx->pc = 0x1720a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4372), GPR_U32(ctx, 7));
label_1720a4:
    // 0x1720a4: 0x34028040  ori         $v0, $zero, 0x8040
    ctx->pc = 0x1720a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32832);
label_1720a8:
    // 0x1720a8: 0xac821110  sw          $v0, 0x1110($a0)
    ctx->pc = 0x1720a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4368), GPR_U32(ctx, 2));
label_1720ac:
    // 0x1720ac: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x1720acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
label_1720b0:
    // 0x1720b0: 0xac870010  sw          $a3, 0x10($a0)
    ctx->pc = 0x1720b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
label_1720b4:
    // 0x1720b4: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x1720b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
label_1720b8:
    // 0x1720b8: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1720b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
label_1720bc:
    // 0x1720bc: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x1720bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
label_1720c0:
    // 0x1720c0: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1720c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_1720c4:
    // 0x1720c4: 0x240b0061  addiu       $t3, $zero, 0x61
    ctx->pc = 0x1720c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
label_1720c8:
    // 0x1720c8: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x1720c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_1720cc:
    // 0x1720cc: 0x24090015  addiu       $t1, $zero, 0x15
    ctx->pc = 0x1720ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1720d0:
    // 0x1720d0: 0xdc2d1fa0  ld          $t5, 0x1FA0($at)
    ctx->pc = 0x1720d0u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 1), 8096)));
label_1720d4:
    // 0x1720d4: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x1720d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_1720d8:
    // 0x1720d8: 0x34481001  ori         $t0, $v0, 0x1001
    ctx->pc = 0x1720d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4097);
label_1720dc:
    // 0x1720dc: 0x24070048  addiu       $a3, $zero, 0x48
    ctx->pc = 0x1720dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_1720e0:
    // 0x1720e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1720e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1720e4:
    // 0x1720e4: 0xfc8d0020  sd          $t5, 0x20($a0)
    ctx->pc = 0x1720e4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 13));
label_1720e8:
    // 0x1720e8: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x1720e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_1720ec:
    // 0x1720ec: 0xdc2d1fa8  ld          $t5, 0x1FA8($at)
    ctx->pc = 0x1720ecu;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 1), 8104)));
label_1720f0:
    // 0x1720f0: 0xfc8d0028  sd          $t5, 0x28($a0)
    ctx->pc = 0x1720f0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 13));
label_1720f4:
    // 0x1720f4: 0xfc860030  sd          $a2, 0x30($a0)
    ctx->pc = 0x1720f4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 6));
label_1720f8:
    // 0x1720f8: 0xfc8c0038  sd          $t4, 0x38($a0)
    ctx->pc = 0x1720f8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 12));
label_1720fc:
    // 0x1720fc: 0xfc8b0040  sd          $t3, 0x40($a0)
    ctx->pc = 0x1720fcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 64), GPR_U64(ctx, 11));
label_172100:
    // 0x172100: 0xfc890048  sd          $t1, 0x48($a0)
    ctx->pc = 0x172100u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 72), GPR_U64(ctx, 9));
label_172104:
    // 0x172104: 0xfc880050  sd          $t0, 0x50($a0)
    ctx->pc = 0x172104u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 80), GPR_U64(ctx, 8));
label_172108:
    // 0x172108: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_17210c:
    if (ctx->pc == 0x17210Cu) {
        ctx->pc = 0x17210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172108u;
        // 0x17210c: 0xfc870058  sd          $a3, 0x58($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 88), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172110u;
        goto label_172110;
    }
    ctx->pc = 0x172108u;
    {
        const bool branch_taken_0x172108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172108u;
        // 0x17210c: 0xfc870058  sd          $a3, 0x58($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 88), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172108) {
            ctx->pc = 0x172178u;
            goto label_172178;
        }
    }
    ctx->pc = 0x172110u;
label_172110:
    // 0x172110: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x172110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_172114:
    // 0x172114: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_172118:
    if (ctx->pc == 0x172118u) {
        ctx->pc = 0x172118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172114u;
        // 0x172118: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17211Cu;
        goto label_17211c;
    }
    ctx->pc = 0x172114u;
    {
        const bool branch_taken_0x172114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x172118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172114u;
        // 0x172118: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172114) {
            ctx->pc = 0x172160u;
            goto label_172160;
        }
    }
    ctx->pc = 0x17211Cu;
label_17211c:
    // 0x17211c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_172120:
    if (ctx->pc == 0x172120u) {
        ctx->pc = 0x172124u;
        goto label_172124;
    }
    ctx->pc = 0x17211Cu;
    {
        const bool branch_taken_0x17211c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17211c) {
            ctx->pc = 0x172148u;
            goto label_172148;
        }
    }
    ctx->pc = 0x172124u;
label_172124:
    // 0x172124: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x172124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_172128:
    // 0x172128: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_17212c:
    if (ctx->pc == 0x17212Cu) {
        ctx->pc = 0x17212Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172128u;
        // 0x17212c: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172130u;
        goto label_172130;
    }
    ctx->pc = 0x172128u;
    {
        const bool branch_taken_0x172128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17212Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172128u;
        // 0x17212c: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172128) {
            ctx->pc = 0x172138u;
            goto label_172138;
        }
    }
    ctx->pc = 0x172130u;
label_172130:
    // 0x172130: 0x10000017  b           . + 4 + (0x17 << 2)
label_172134:
    if (ctx->pc == 0x172134u) {
        ctx->pc = 0x172134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172130u;
        // 0x172134: 0x24060043  addiu       $a2, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172138u;
        goto label_172138;
    }
    ctx->pc = 0x172130u;
    {
        const bool branch_taken_0x172130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172130u;
        // 0x172134: 0x24060043  addiu       $a2, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172130) {
            ctx->pc = 0x172190u;
            goto label_172190;
        }
    }
    ctx->pc = 0x172138u;
label_172138:
    // 0x172138: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x172138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_17213c:
    // 0x17213c: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x17213cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_172140:
    // 0x172140: 0x10000012  b           . + 4 + (0x12 << 2)
label_172144:
    if (ctx->pc == 0x172144u) {
        ctx->pc = 0x172144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172140u;
        // 0x172144: 0xfe420070  sd          $v0, 0x70($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 112), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172148u;
        goto label_172148;
    }
    ctx->pc = 0x172140u;
    {
        const bool branch_taken_0x172140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172140u;
        // 0x172144: 0xfe420070  sd          $v0, 0x70($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 112), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172140) {
            ctx->pc = 0x17218Cu;
            goto label_17218c;
        }
    }
    ctx->pc = 0x172148u;
label_172148:
    // 0x172148: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x172148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_17214c:
    // 0x17214c: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x17214cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_172150:
    // 0x172150: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x172150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_172154:
    // 0x172154: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x172154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_172158:
    // 0x172158: 0x1000000c  b           . + 4 + (0xC << 2)
label_17215c:
    if (ctx->pc == 0x17215Cu) {
        ctx->pc = 0x17215Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172158u;
        // 0x17215c: 0xfe420070  sd          $v0, 0x70($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 112), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172160u;
        goto label_172160;
    }
    ctx->pc = 0x172158u;
    {
        const bool branch_taken_0x172158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17215Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172158u;
        // 0x17215c: 0xfe420070  sd          $v0, 0x70($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 112), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172158) {
            ctx->pc = 0x17218Cu;
            goto label_17218c;
        }
    }
    ctx->pc = 0x172160u;
label_172160:
    // 0x172160: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x172160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_172164:
    // 0x172164: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x172164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_172168:
    // 0x172168: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x172168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_17216c:
    // 0x17216c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17216cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_172170:
    // 0x172170: 0x10000006  b           . + 4 + (0x6 << 2)
label_172174:
    if (ctx->pc == 0x172174u) {
        ctx->pc = 0x172174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172170u;
        // 0x172174: 0xfe420070  sd          $v0, 0x70($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 112), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172178u;
        goto label_172178;
    }
    ctx->pc = 0x172170u;
    {
        const bool branch_taken_0x172170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172170u;
        // 0x172174: 0xfe420070  sd          $v0, 0x70($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 112), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172170) {
            ctx->pc = 0x17218Cu;
            goto label_17218c;
        }
    }
    ctx->pc = 0x172178u;
label_172178:
    // 0x172178: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x172178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_17217c:
    // 0x17217c: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x17217cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
label_172180:
    // 0x172180: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x172180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_172184:
    // 0x172184: 0xfe430070  sd          $v1, 0x70($s2)
    ctx->pc = 0x172184u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 112), GPR_U64(ctx, 3));
label_172188:
    // 0x172188: 0xfe420050  sd          $v0, 0x50($s2)
    ctx->pc = 0x172188u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 80), GPR_U64(ctx, 2));
label_17218c:
    // 0x17218c: 0x24060043  addiu       $a2, $zero, 0x43
    ctx->pc = 0x17218cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_172190:
    // 0x172190: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x172190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_172194:
    // 0x172194: 0xfe460078  sd          $a2, 0x78($s2)
    ctx->pc = 0x172194u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 120), GPR_U64(ctx, 6));
label_172198:
    // 0x172198: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x172198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_17219c:
    // 0x17219c: 0xfe420060  sd          $v0, 0x60($s2)
    ctx->pc = 0x17219cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 96), GPR_U64(ctx, 2));
label_1721a0:
    // 0x1721a0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1721a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1721a4:
    // 0x1721a4: 0xfe430068  sd          $v1, 0x68($s2)
    ctx->pc = 0x1721a4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 104), GPR_U64(ctx, 3));
label_1721a8:
    // 0x1721a8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1721a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_1721ac:
    // 0x1721ac: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x1721acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_1721b0:
    // 0x1721b0: 0x3142ffff  andi        $v0, $t2, 0xFFFF
    ctx->pc = 0x1721b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
label_1721b4:
    // 0x1721b4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1721b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1721b8:
    // 0x1721b8: 0xfe430070  sd          $v1, 0x70($s2)
    ctx->pc = 0x1721b8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 112), GPR_U64(ctx, 3));
label_1721bc:
    // 0x1721bc: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1721bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1721c0:
    // 0x1721c0: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_1721c4:
    if (ctx->pc == 0x1721C4u) {
        ctx->pc = 0x1721C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1721C0u;
        // 0x1721c4: 0xfe460078  sd          $a2, 0x78($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 120), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1721C8u;
        goto label_1721c8;
    }
    ctx->pc = 0x1721C0u;
    {
        const bool branch_taken_0x1721c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1721C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1721C0u;
        // 0x1721c4: 0xfe460078  sd          $a2, 0x78($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 120), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1721c0) {
            ctx->pc = 0x1721D4u;
            goto label_1721d4;
        }
    }
    ctx->pc = 0x1721C8u;
label_1721c8:
    // 0x1721c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1721c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1721cc:
    // 0x1721cc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1721d0:
    if (ctx->pc == 0x1721D0u) {
        ctx->pc = 0x1721D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1721CCu;
        // 0x1721d0: 0xa6421138  sh          $v0, 0x1138($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 4408), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1721D4u;
        goto label_1721d4;
    }
    ctx->pc = 0x1721CCu;
    {
        const bool branch_taken_0x1721cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1721D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1721CCu;
        // 0x1721d0: 0xa6421138  sh          $v0, 0x1138($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 4408), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1721cc) {
            ctx->pc = 0x1721D8u;
            goto label_1721d8;
        }
    }
    ctx->pc = 0x1721D4u;
label_1721d4:
    // 0x1721d4: 0xa64a1138  sh          $t2, 0x1138($s2)
    ctx->pc = 0x1721d4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4408), (uint16_t)GPR_U32(ctx, 10));
label_1721d8:
    // 0x1721d8: 0x3c026c80  lui         $v0, 0x6C80
    ctx->pc = 0x1721d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27776 << 16));
label_1721dc:
    // 0x1721dc: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1721dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_1721e0:
    // 0x1721e0: 0x34468001  ori         $a2, $v0, 0x8001
    ctx->pc = 0x1721e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
label_1721e4:
    // 0x1721e4: 0x34670404  ori         $a3, $v1, 0x404
    ctx->pc = 0x1721e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
label_1721e8:
    // 0x1721e8: 0x3c021400  lui         $v0, 0x1400
    ctx->pc = 0x1721e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5120 << 16));
label_1721ec:
    // 0x1721ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1721ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1721f0:
    // 0x1721f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1721f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1721f4:
    // 0x1721f4: 0x3c031700  lui         $v1, 0x1700
    ctx->pc = 0x1721f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5888 << 16));
label_1721f8:
    // 0x1721f8: 0x10000010  b           . + 4 + (0x10 << 2)
label_1721fc:
    if (ctx->pc == 0x1721FCu) {
        ctx->pc = 0x1721FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1721F8u;
        // 0x1721fc: 0x34440300  ori         $a0, $v0, 0x300 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x172200u;
        goto label_172200;
    }
    ctx->pc = 0x1721F8u;
    {
        const bool branch_taken_0x1721f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1721FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1721F8u;
        // 0x1721fc: 0x34440300  ori         $a0, $v0, 0x300 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1721f8) {
            ctx->pc = 0x17223Cu;
            goto label_17223c;
        }
    }
    ctx->pc = 0x172200u;
label_172200:
    // 0x172200: 0xac470080  sw          $a3, 0x80($v0)
    ctx->pc = 0x172200u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 7));
label_172204:
    // 0x172204: 0xac400084  sw          $zero, 0x84($v0)
    ctx->pc = 0x172204u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
label_172208:
    // 0x172208: 0xac400088  sw          $zero, 0x88($v0)
    ctx->pc = 0x172208u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 0));
label_17220c:
    // 0x17220c: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
label_172210:
    if (ctx->pc == 0x172210u) {
        ctx->pc = 0x172210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17220Cu;
        // 0x172210: 0xac46008c  sw          $a2, 0x8C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172214u;
        goto label_172214;
    }
    ctx->pc = 0x17220Cu;
    {
        const bool branch_taken_0x17220c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x172210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17220Cu;
        // 0x172210: 0xac46008c  sw          $a2, 0x8C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17220c) {
            ctx->pc = 0x17221Cu;
            goto label_17221c;
        }
    }
    ctx->pc = 0x172214u;
label_172214:
    // 0x172214: 0x10000003  b           . + 4 + (0x3 << 2)
label_172218:
    if (ctx->pc == 0x172218u) {
        ctx->pc = 0x172218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172214u;
        // 0x172218: 0xac440890  sw          $a0, 0x890($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 2192), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17221Cu;
        goto label_17221c;
    }
    ctx->pc = 0x172214u;
    {
        const bool branch_taken_0x172214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172214u;
        // 0x172218: 0xac440890  sw          $a0, 0x890($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 2192), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172214) {
            ctx->pc = 0x172224u;
            goto label_172224;
        }
    }
    ctx->pc = 0x17221Cu;
label_17221c:
    // 0x17221c: 0x0  nop
    ctx->pc = 0x17221cu;
    // NOP
label_172220:
    // 0x172220: 0xac430890  sw          $v1, 0x890($v0)
    ctx->pc = 0x172220u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2192), GPR_U32(ctx, 3));
label_172224:
    // 0x172224: 0x0  nop
    ctx->pc = 0x172224u;
    // NOP
label_172228:
    // 0x172228: 0xac400894  sw          $zero, 0x894($v0)
    ctx->pc = 0x172228u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2196), GPR_U32(ctx, 0));
label_17222c:
    // 0x17222c: 0xac400898  sw          $zero, 0x898($v0)
    ctx->pc = 0x17222cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2200), GPR_U32(ctx, 0));
label_172230:
    // 0x172230: 0x25290820  addiu       $t1, $t1, 0x820
    ctx->pc = 0x172230u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2080));
label_172234:
    // 0x172234: 0xac40089c  sw          $zero, 0x89C($v0)
    ctx->pc = 0x172234u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2204), GPR_U32(ctx, 0));
label_172238:
    // 0x172238: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x172238u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_17223c:
    // 0x17223c: 0x0  nop
    ctx->pc = 0x17223cu;
    // NOP
label_172240:
    // 0x172240: 0x96421138  lhu         $v0, 0x1138($s2)
    ctx->pc = 0x172240u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4408)));
label_172244:
    // 0x172244: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x172244u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_172248:
    // 0x172248: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_17224c:
    if (ctx->pc == 0x17224Cu) {
        ctx->pc = 0x17224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172248u;
        // 0x17224c: 0x2491021  addu        $v0, $s2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172250u;
        goto label_172250;
    }
    ctx->pc = 0x172248u;
    {
        const bool branch_taken_0x172248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172248u;
        // 0x17224c: 0x2491021  addu        $v0, $s2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172248) {
            ctx->pc = 0x172200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_172200;
        }
    }
    ctx->pc = 0x172250u;
label_172250:
    // 0x172250: 0xc066e26  jal         func_19B898
label_172254:
    if (ctx->pc == 0x172254u) {
        ctx->pc = 0x172254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172250u;
        // 0x172254: 0x26441120  addiu       $a0, $s2, 0x1120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172258u;
        goto label_172258;
    }
    ctx->pc = 0x172250u;
    SET_GPR_U32(ctx, 31, 0x172258u);
    ctx->pc = 0x172254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172250u;
    // 0x172254: 0x26441120  addiu       $a0, $s2, 0x1120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x172258u;
label_172258:
    // 0x172258: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x172258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_17225c:
    // 0x17225c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17225cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_172260:
    // 0x172260: 0xae43113c  sw          $v1, 0x113C($s2)
    ctx->pc = 0x172260u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4412), GPR_U32(ctx, 3));
label_172264:
    // 0x172264: 0xae431140  sw          $v1, 0x1140($s2)
    ctx->pc = 0x172264u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4416), GPR_U32(ctx, 3));
label_172268:
    // 0x172268: 0xa6401132  sh          $zero, 0x1132($s2)
    ctx->pc = 0x172268u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4402), (uint16_t)GPR_U32(ctx, 0));
label_17226c:
    // 0x17226c: 0xa6501130  sh          $s0, 0x1130($s2)
    ctx->pc = 0x17226cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4400), (uint16_t)GPR_U32(ctx, 16));
label_172270:
    // 0x172270: 0xa2421134  sb          $v0, 0x1134($s2)
    ctx->pc = 0x172270u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4404), (uint8_t)GPR_U32(ctx, 2));
label_172274:
    // 0x172274: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x172274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_172278:
    // 0x172278: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x172278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_17227c:
    // 0x17227c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_172280:
    if (ctx->pc == 0x172280u) {
        ctx->pc = 0x172280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17227Cu;
        // 0x172280: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172284u;
        goto label_172284;
    }
    ctx->pc = 0x17227Cu;
    {
        const bool branch_taken_0x17227c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17227Cu;
        // 0x172280: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17227c) {
            ctx->pc = 0x17228Cu;
            goto label_17228c;
        }
    }
    ctx->pc = 0x172284u;
label_172284:
    // 0x172284: 0x10000002  b           . + 4 + (0x2 << 2)
label_172288:
    if (ctx->pc == 0x172288u) {
        ctx->pc = 0x172288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172284u;
        // 0x172288: 0xa642113a  sh          $v0, 0x113A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 4410), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17228Cu;
        goto label_17228c;
    }
    ctx->pc = 0x172284u;
    {
        const bool branch_taken_0x172284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172284u;
        // 0x172288: 0xa642113a  sh          $v0, 0x113A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 4410), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172284) {
            ctx->pc = 0x172290u;
            goto label_172290;
        }
    }
    ctx->pc = 0x17228Cu;
label_17228c:
    // 0x17228c: 0xa640113a  sh          $zero, 0x113A($s2)
    ctx->pc = 0x17228cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4410), (uint16_t)GPR_U32(ctx, 0));
label_172290:
    // 0x172290: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x172290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_172294:
    // 0x172294: 0xc071424  jal         func_1C5090
label_172298:
    if (ctx->pc == 0x172298u) {
        ctx->pc = 0x172298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172294u;
        // 0x172298: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17229Cu;
        goto label_17229c;
    }
    ctx->pc = 0x172294u;
    SET_GPR_U32(ctx, 31, 0x17229Cu);
    ctx->pc = 0x172298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172294u;
    // 0x172298: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5090u;
    { ctx->pc = 0x1c5090; return; }
    ctx->pc = 0x17229Cu;
label_17229c:
    // 0x17229c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17229cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1722a0:
    // 0x1722a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1722a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1722a4:
    // 0x1722a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1722a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1722a8:
    // 0x1722a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1722a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1722ac:
    // 0x1722ac: 0x3e00008  jr          $ra
label_1722b0:
    if (ctx->pc == 0x1722B0u) {
        ctx->pc = 0x1722B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1722ACu;
        // 0x1722b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1722B4u;
        goto label_1722b4;
    }
    ctx->pc = 0x1722ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1722B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1722ACu;
        // 0x1722b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1722ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1722B4u;
label_1722b4:
    // 0x1722b4: 0x0  nop
    ctx->pc = 0x1722b4u;
    // NOP
label_1722b8:
    // 0x1722b8: 0x0  nop
    ctx->pc = 0x1722b8u;
    // NOP
label_1722bc:
    // 0x1722bc: 0x0  nop
    ctx->pc = 0x1722bcu;
    // NOP
label_1722c0:
    // 0x1722c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1722c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1722c4:
    // 0x1722c4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1722c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1722c8:
    // 0x1722c8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1722c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1722cc:
    // 0x1722cc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1722ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1722d0:
    // 0x1722d0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1722d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1722d4:
    // 0x1722d4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1722d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1722d8:
    // 0x1722d8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1722d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1722dc:
    // 0x1722dc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1722dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1722e0:
    // 0x1722e0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1722e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1722e4:
    // 0x1722e4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1722e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1722e8:
    // 0x1722e8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1722e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1722ec:
    // 0x1722ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1722ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1722f0:
    // 0x1722f0: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1722f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1722f4:
    // 0x1722f4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1722f4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1722f8:
    // 0x1722f8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1722f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1722fc:
    // 0x1722fc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1722fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_172300:
    // 0x172300: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x172300u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_172304:
    // 0x172304: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x172304u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
label_172308:
    // 0x172308: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x172308u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_17230c:
    // 0x17230c: 0xc0590dc  jal         func_164370
label_172310:
    if (ctx->pc == 0x172310u) {
        ctx->pc = 0x172310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17230Cu;
        // 0x172310: 0x46007506  mov.s       $f20, $f14 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x172314u;
        goto label_172314;
    }
    ctx->pc = 0x17230Cu;
    SET_GPR_U32(ctx, 31, 0x172314u);
    ctx->pc = 0x172310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17230Cu;
    // 0x172310: 0x46007506  mov.s       $f20, $f14 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    { ctx->pc = 0x164370; return; }
    ctx->pc = 0x172314u;
label_172314:
    // 0x172314: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x172314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172318:
    // 0x172318: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_17231c:
    if (ctx->pc == 0x17231Cu) {
        ctx->pc = 0x17231Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172318u;
        // 0x17231c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172320u;
        goto label_172320;
    }
    ctx->pc = 0x172318u;
    {
        const bool branch_taken_0x172318 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17231Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172318u;
        // 0x17231c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172318) {
            ctx->pc = 0x1723ACu;
            goto label_1723ac;
        }
    }
    ctx->pc = 0x172320u;
label_172320:
    // 0x172320: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x172320u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_172324:
    // 0x172324: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x172324u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_172328:
    // 0x172328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x172328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17232c:
    // 0x17232c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x17232cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_172330:
    // 0x172330: 0xc05cd04  jal         func_173410
label_172334:
    if (ctx->pc == 0x172334u) {
        ctx->pc = 0x172334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172330u;
        // 0x172334: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172338u;
        goto label_172338;
    }
    ctx->pc = 0x172330u;
    SET_GPR_U32(ctx, 31, 0x172338u);
    ctx->pc = 0x172334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172330u;
    // 0x172334: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173410u;
    { ctx->pc = 0x173410; return; }
    ctx->pc = 0x172338u;
label_172338:
    // 0x172338: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x172338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
label_17233c:
    // 0x17233c: 0xae140dc0  sw          $s4, 0xDC0($s0)
    ctx->pc = 0x17233cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3520), GPR_U32(ctx, 20));
label_172340:
    // 0x172340: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_172344:
    // 0x172344: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x172344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
label_172348:
    // 0x172348: 0xe6150d78  swc1        $f21, 0xD78($s0)
    ctx->pc = 0x172348u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3448), bits); }
label_17234c:
    // 0x17234c: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x17234cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_172350:
    // 0x172350: 0x46160042  mul.s       $f1, $f0, $f22
    ctx->pc = 0x172350u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_172354:
    // 0x172354: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x172354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
label_172358:
    // 0x172358: 0x246323e0  addiu       $v1, $v1, 0x23E0
    ctx->pc = 0x172358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9184));
label_17235c:
    // 0x17235c: 0x24422e20  addiu       $v0, $v0, 0x2E20
    ctx->pc = 0x17235cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11808));
label_172360:
    // 0x172360: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x172360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_172364:
    // 0x172364: 0x26040d90  addiu       $a0, $s0, 0xD90
    ctx->pc = 0x172364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3472));
label_172368:
    // 0x172368: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x172368u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17236c:
    // 0x17236c: 0xe6150d7c  swc1        $f21, 0xD7C($s0)
    ctx->pc = 0x17236cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3452), bits); }
label_172370:
    // 0x172370: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x172370u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_172374:
    // 0x172374: 0xe6140d88  swc1        $f20, 0xD88($s0)
    ctx->pc = 0x172374u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3464), bits); }
label_172378:
    // 0x172378: 0xe6010d80  swc1        $f1, 0xD80($s0)
    ctx->pc = 0x172378u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3456), bits); }
label_17237c:
    // 0x17237c: 0xe6000d84  swc1        $f0, 0xD84($s0)
    ctx->pc = 0x17237cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3460), bits); }
label_172380:
    // 0x172380: 0xae030dd8  sw          $v1, 0xDD8($s0)
    ctx->pc = 0x172380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3544), GPR_U32(ctx, 3));
label_172384:
    // 0x172384: 0xc066e26  jal         func_19B898
label_172388:
    if (ctx->pc == 0x172388u) {
        ctx->pc = 0x172388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172384u;
        // 0x172388: 0xae020ddc  sw          $v0, 0xDDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3548), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17238Cu;
        goto label_17238c;
    }
    ctx->pc = 0x172384u;
    SET_GPR_U32(ctx, 31, 0x17238Cu);
    ctx->pc = 0x172388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172384u;
    // 0x172388: 0xae020ddc  sw          $v0, 0xDDC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 3548), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x17238Cu;
label_17238c:
    // 0x17238c: 0x3c023f8c  lui         $v0, 0x3F8C
    ctx->pc = 0x17238cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16268 << 16));
label_172390:
    // 0x172390: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x172390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_172394:
    // 0x172394: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x172394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_172398:
    // 0x172398: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x172398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_17239c:
    // 0x17239c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x17239cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1723a0:
    // 0x1723a0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1723a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1723a4:
    // 0x1723a4: 0xc05cbf4  jal         func_172FD0
label_1723a8:
    if (ctx->pc == 0x1723A8u) {
        ctx->pc = 0x1723A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1723A4u;
        // 0x1723a8: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1723ACu;
        goto label_1723ac;
    }
    ctx->pc = 0x1723A4u;
    SET_GPR_U32(ctx, 31, 0x1723ACu);
    ctx->pc = 0x1723A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1723A4u;
    // 0x1723a8: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172FD0u;
    { ctx->pc = 0x172fd0; return; }
    ctx->pc = 0x1723ACu;
label_1723ac:
    // 0x1723ac: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1723acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1723b0:
    // 0x1723b0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1723b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1723b4:
    // 0x1723b4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1723b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1723b8:
    // 0x1723b8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1723b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1723bc:
    // 0x1723bc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1723bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1723c0:
    // 0x1723c0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1723c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1723c4:
    // 0x1723c4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1723c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1723c8:
    // 0x1723c8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1723c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1723cc:
    // 0x1723cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1723ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1723d0:
    // 0x1723d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1723d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1723d4:
    // 0x1723d4: 0x3e00008  jr          $ra
label_1723d8:
    if (ctx->pc == 0x1723D8u) {
        ctx->pc = 0x1723D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1723D4u;
        // 0x1723d8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1723DCu;
        goto label_1723dc;
    }
    ctx->pc = 0x1723D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1723D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1723D4u;
        // 0x1723d8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1723D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1723DCu;
label_1723dc:
    // 0x1723dc: 0x0  nop
    ctx->pc = 0x1723dcu;
    // NOP
label_1723e0:
    // 0x1723e0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1723e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1723e4:
    // 0x1723e4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1723e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_1723e8:
    // 0x1723e8: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1723e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_1723ec:
    // 0x1723ec: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1723ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_1723f0:
    // 0x1723f0: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1723f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_1723f4:
    // 0x1723f4: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1723f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1723f8:
    // 0x1723f8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1723f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1723fc:
    // 0x1723fc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1723fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_172400:
    // 0x172400: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x172400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_172404:
    // 0x172404: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x172404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_172408:
    // 0x172408: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x172408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_17240c:
    // 0x17240c: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x17240cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_172410:
    // 0x172410: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x172410u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_172414:
    // 0x172414: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x172414u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_172418:
    // 0x172418: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x172418u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_17241c:
    // 0x17241c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x17241cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_172420:
    // 0x172420: 0xc0713b0  jal         func_1C4EC0
label_172424:
    if (ctx->pc == 0x172424u) {
        ctx->pc = 0x172424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172420u;
        // 0x172424: 0x8c840dc0  lw          $a0, 0xDC0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3520)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172428u;
        goto label_172428;
    }
    ctx->pc = 0x172420u;
    SET_GPR_U32(ctx, 31, 0x172428u);
    ctx->pc = 0x172424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172420u;
    // 0x172424: 0x8c840dc0  lw          $a0, 0xDC0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3520)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4EC0u;
    { ctx->pc = 0x1c4ec0; return; }
    ctx->pc = 0x172428u;
label_172428:
    // 0x172428: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x172428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_17242c:
    // 0x17242c: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x17242cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_172430:
    // 0x172430: 0x14200017  bnez        $at, . + 4 + (0x17 << 2)
label_172434:
    if (ctx->pc == 0x172434u) {
        ctx->pc = 0x172438u;
        goto label_172438;
    }
    ctx->pc = 0x172430u;
    {
        const bool branch_taken_0x172430 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x172430) {
            ctx->pc = 0x172490u;
            goto label_172490;
        }
    }
    ctx->pc = 0x172438u;
label_172438:
    // 0x172438: 0x8ea40dc0  lw          $a0, 0xDC0($s5)
    ctx->pc = 0x172438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3520)));
label_17243c:
    // 0x17243c: 0xc0713a8  jal         func_1C4EA0
label_172440:
    if (ctx->pc == 0x172440u) {
        ctx->pc = 0x172440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17243Cu;
        // 0x172440: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172444u;
        goto label_172444;
    }
    ctx->pc = 0x17243Cu;
    SET_GPR_U32(ctx, 31, 0x172444u);
    ctx->pc = 0x172440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17243Cu;
    // 0x172440: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4EA0u;
    { ctx->pc = 0x1c4ea0; return; }
    ctx->pc = 0x172444u;
label_172444:
    // 0x172444: 0x96a20d72  lhu         $v0, 0xD72($s5)
    ctx->pc = 0x172444u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 3442)));
label_172448:
    // 0x172448: 0x2841000b  slti        $at, $v0, 0xB
    ctx->pc = 0x172448u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
label_17244c:
    // 0x17244c: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_172450:
    if (ctx->pc == 0x172450u) {
        ctx->pc = 0x172450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17244Cu;
        // 0x172450: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172454u;
        goto label_172454;
    }
    ctx->pc = 0x17244Cu;
    {
        const bool branch_taken_0x17244c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x172450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17244Cu;
        // 0x172450: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17244c) {
            ctx->pc = 0x172464u;
            goto label_172464;
        }
    }
    ctx->pc = 0x172454u;
label_172454:
    // 0x172454: 0xc0591f4  jal         func_1647D0
label_172458:
    if (ctx->pc == 0x172458u) {
        ctx->pc = 0x17245Cu;
        goto label_17245c;
    }
    ctx->pc = 0x172454u;
    SET_GPR_U32(ctx, 31, 0x17245Cu);
    ctx->pc = 0x1647D0u;
    { ctx->pc = 0x1647d0; return; }
    ctx->pc = 0x17245Cu;
label_17245c:
    // 0x17245c: 0x100000f1  b           . + 4 + (0xF1 << 2)
label_172460:
    if (ctx->pc == 0x172460u) {
        ctx->pc = 0x172460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17245Cu;
        // 0x172460: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172464u;
        goto label_172464;
    }
    ctx->pc = 0x17245Cu;
    {
        const bool branch_taken_0x17245c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17245Cu;
        // 0x172460: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17245c) {
            ctx->pc = 0x172824u;
            { ctx->pc = 0x172824; return; }
        }
    }
    ctx->pc = 0x172464u;
label_172464:
    // 0x172464: 0x96a20d70  lhu         $v0, 0xD70($s5)
    ctx->pc = 0x172464u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 3440)));
label_172468:
    // 0x172468: 0x28410012  slti        $at, $v0, 0x12
    ctx->pc = 0x172468u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18) ? 1 : 0);
label_17246c:
    // 0x17246c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_172470:
    if (ctx->pc == 0x172470u) {
        ctx->pc = 0x172474u;
        goto label_172474;
    }
    ctx->pc = 0x17246Cu;
    {
        const bool branch_taken_0x17246c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17246c) {
            ctx->pc = 0x17247Cu;
            goto label_17247c;
        }
    }
    ctx->pc = 0x172474u;
label_172474:
    // 0x172474: 0x10000003  b           . + 4 + (0x3 << 2)
label_172478:
    if (ctx->pc == 0x172478u) {
        ctx->pc = 0x172478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172474u;
        // 0x172478: 0xa6a00d70  sh          $zero, 0xD70($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 3440), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17247Cu;
        goto label_17247c;
    }
    ctx->pc = 0x172474u;
    {
        const bool branch_taken_0x172474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172474u;
        // 0x172478: 0xa6a00d70  sh          $zero, 0xD70($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 3440), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172474) {
            ctx->pc = 0x172484u;
            goto label_172484;
        }
    }
    ctx->pc = 0x17247Cu;
label_17247c:
    // 0x17247c: 0x2442ffee  addiu       $v0, $v0, -0x12
    ctx->pc = 0x17247cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967278));
label_172480:
    // 0x172480: 0xa6a20d70  sh          $v0, 0xD70($s5)
    ctx->pc = 0x172480u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 3440), (uint16_t)GPR_U32(ctx, 2));
label_172484:
    // 0x172484: 0x96a20d72  lhu         $v0, 0xD72($s5)
    ctx->pc = 0x172484u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 3442)));
label_172488:
    // 0x172488: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x172488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_17248c:
    // 0x17248c: 0xa6a20d72  sh          $v0, 0xD72($s5)
    ctx->pc = 0x17248cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 3442), (uint16_t)GPR_U32(ctx, 2));
label_172490:
    // 0x172490: 0x8ea40dc0  lw          $a0, 0xDC0($s5)
    ctx->pc = 0x172490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3520)));
label_172494:
    // 0x172494: 0xc07139c  jal         func_1C4E70
label_172498:
    if (ctx->pc == 0x172498u) {
        ctx->pc = 0x172498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172494u;
        // 0x172498: 0x26a50d90  addiu       $a1, $s5, 0xD90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 3472));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17249Cu;
        goto label_17249c;
    }
    ctx->pc = 0x172494u;
    SET_GPR_U32(ctx, 31, 0x17249Cu);
    ctx->pc = 0x172498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172494u;
    // 0x172498: 0x26a50d90  addiu       $a1, $s5, 0xD90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 3472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4E70u;
    { ctx->pc = 0x1c4e70; return; }
    ctx->pc = 0x17249Cu;
label_17249c:
    // 0x17249c: 0x96a30d70  lhu         $v1, 0xD70($s5)
    ctx->pc = 0x17249cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 3440)));
label_1724a0:
    // 0x1724a0: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_1724a4:
    if (ctx->pc == 0x1724A4u) {
        ctx->pc = 0x1724A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1724A0u;
        // 0x1724a4: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1724A8u;
        goto label_1724a8;
    }
    ctx->pc = 0x1724A0u;
    {
        const bool branch_taken_0x1724a0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1724A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1724A0u;
        // 0x1724a4: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1724a0) {
            ctx->pc = 0x1724B4u;
            goto label_1724b4;
        }
    }
    ctx->pc = 0x1724A8u;
label_1724a8:
    // 0x1724a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1724a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1724ac:
    // 0x1724ac: 0x10000007  b           . + 4 + (0x7 << 2)
label_1724b0:
    if (ctx->pc == 0x1724B0u) {
        ctx->pc = 0x1724B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1724ACu;
        // 0x1724b0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1724B4u;
        goto label_1724b4;
    }
    ctx->pc = 0x1724ACu;
    {
        const bool branch_taken_0x1724ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1724B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1724ACu;
        // 0x1724b0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1724ac) {
            ctx->pc = 0x1724CCu;
            goto label_1724cc;
        }
    }
    ctx->pc = 0x1724B4u;
label_1724b4:
    // 0x1724b4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1724b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1724b8:
    // 0x1724b8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1724b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1724bc:
    // 0x1724bc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1724bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1724c0:
    // 0x1724c0: 0x0  nop
    ctx->pc = 0x1724c0u;
    // NOP
label_1724c4:
    // 0x1724c4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1724c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1724c8:
    // 0x1724c8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1724c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1724cc:
    // 0x1724cc: 0x3c033ad9  lui         $v1, 0x3AD9
    ctx->pc = 0x1724ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15065 << 16));
label_1724d0:
    // 0x1724d0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1724d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1724d4:
    // 0x1724d4: 0x3463945b  ori         $v1, $v1, 0x945B
    ctx->pc = 0x1724d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)37979);
label_1724d8:
    // 0x1724d8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1724d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1724dc:
    // 0x1724dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1724dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1724e0:
    // 0x1724e0: 0x100000cb  b           . + 4 + (0xCB << 2)
label_1724e4:
    if (ctx->pc == 0x1724E4u) {
        ctx->pc = 0x1724E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1724E0u;
        // 0x1724e4: 0x460105c2  mul.s       $f23, $f0, $f1 (Delay Slot)
        ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1724E8u;
        goto label_1724e8;
    }
    ctx->pc = 0x1724E0u;
    {
        const bool branch_taken_0x1724e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1724E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1724E0u;
        // 0x1724e4: 0x460105c2  mul.s       $f23, $f0, $f1 (Delay Slot)
        ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1724e0) {
            ctx->pc = 0x172810u;
            { ctx->pc = 0x172810; return; }
        }
    }
    ctx->pc = 0x1724E8u;
label_1724e8:
    // 0x1724e8: 0x2b41021  addu        $v0, $s5, $s4
    ctx->pc = 0x1724e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_1724ec:
    // 0x1724ec: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1724ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1724f0:
    // 0x1724f0: 0x24500090  addiu       $s0, $v0, 0x90
    ctx->pc = 0x1724f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_1724f4:
    // 0x1724f4: 0x245100b0  addiu       $s1, $v0, 0xB0
    ctx->pc = 0x1724f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
label_1724f8:
    // 0x1724f8: 0x245200a0  addiu       $s2, $v0, 0xA0
    ctx->pc = 0x1724f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
label_1724fc:
    // 0x1724fc: 0x26a50d90  addiu       $a1, $s5, 0xD90
    ctx->pc = 0x1724fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 3472));
label_172500:
    // 0x172500: 0xc066e08  jal         func_19B820
label_172504:
    if (ctx->pc == 0x172504u) {
        ctx->pc = 0x172504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172500u;
        // 0x172504: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172508u;
        goto label_172508;
    }
    ctx->pc = 0x172500u;
    SET_GPR_U32(ctx, 31, 0x172508u);
    ctx->pc = 0x172504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172500u;
    // 0x172504: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x172508u;
label_172508:
    // 0x172508: 0x27b700b4  addiu       $s7, $sp, 0xB4
    ctx->pc = 0x172508u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
label_17250c:
    // 0x17250c: 0x27b600b8  addiu       $s6, $sp, 0xB8
    ctx->pc = 0x17250cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_172510:
    // 0x172510: 0xc7a300b0  lwc1        $f3, 0xB0($sp)
    ctx->pc = 0x172510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_172514:
    // 0x172514: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x172514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_172518:
    // 0x172518: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x172518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17251c:
    // 0x17251c: 0xc6c40000  lwc1        $f4, 0x0($s6)
    ctx->pc = 0x17251cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_172520:
    // 0x172520: 0xc6a00d88  lwc1        $f0, 0xD88($s5)
    ctx->pc = 0x172520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_172524:
    // 0x172524: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x172524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_172528:
    // 0x172528: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x172528u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_17252c:
    // 0x17252c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x17252cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_172530:
    // 0x172530: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x172530u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[2]));
label_172534:
    // 0x172534: 0x4604209c  madd.s      $f2, $f4, $f4
    ctx->pc = 0x172534u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_172538:
    // 0x172538: 0x46020584  c1          0x20584
    ctx->pc = 0x172538u;
    ctx->f[22] = FPU_SQRT_S(ctx->f[0]);
label_17253c:
    // 0x17253c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17253cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_172540:
    // 0x172540: 0x0  nop
    ctx->pc = 0x172540u;
    // NOP
label_172544:
    // 0x172544: 0x0  nop
    ctx->pc = 0x172544u;
    // NOP
label_172548:
    // 0x172548: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x172548u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17254c:
    // 0x17254c: 0x0  nop
    ctx->pc = 0x17254cu;
    // NOP
label_172550:
    // 0x172550: 0x45010023  bc1t        . + 4 + (0x23 << 2)
label_172554:
    if (ctx->pc == 0x172554u) {
        ctx->pc = 0x172554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172550u;
        // 0x172554: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172558u;
        goto label_172558;
    }
    ctx->pc = 0x172550u;
    {
        const bool branch_taken_0x172550 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x172554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172550u;
        // 0x172554: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172550) {
            ctx->pc = 0x1725E0u;
            goto label_1725e0;
        }
    }
    ctx->pc = 0x172558u;
label_172558:
    // 0x172558: 0xc066daa  jal         func_19B6A8
label_17255c:
    if (ctx->pc == 0x17255Cu) {
        ctx->pc = 0x17255Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172558u;
        // 0x17255c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172560u;
        goto label_172560;
    }
    ctx->pc = 0x172558u;
    SET_GPR_U32(ctx, 31, 0x172560u);
    ctx->pc = 0x17255Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172558u;
    // 0x17255c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    { ctx->pc = 0x19b6a8; return; }
    ctx->pc = 0x172560u;
label_172560:
    // 0x172560: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x172560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
label_172564:
    // 0x172564: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_172568:
    // 0x172568: 0x0  nop
    ctx->pc = 0x172568u;
    // NOP
label_17256c:
    // 0x17256c: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x17256cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_172570:
    // 0x172570: 0x0  nop
    ctx->pc = 0x172570u;
    // NOP
label_172574:
    // 0x172574: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_172578:
    if (ctx->pc == 0x172578u) {
        ctx->pc = 0x172578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172574u;
        // 0x172578: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17257Cu;
        goto label_17257c;
    }
    ctx->pc = 0x172574u;
    {
        const bool branch_taken_0x172574 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x172578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172574u;
        // 0x172578: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172574) {
            ctx->pc = 0x1725BCu;
            goto label_1725bc;
        }
    }
    ctx->pc = 0x17257Cu;
label_17257c:
    // 0x17257c: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x17257cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
label_172580:
    // 0x172580: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x172580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_172584:
    // 0x172584: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x172584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_172588:
    // 0x172588: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x172588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_17258c:
    // 0x17258c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x17258cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_172590:
    // 0x172590: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x172590u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_172594:
    // 0x172594: 0x0  nop
    ctx->pc = 0x172594u;
    // NOP
label_172598:
    // 0x172598: 0x46161082  mul.s       $f2, $f2, $f22
    ctx->pc = 0x172598u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
label_17259c:
    // 0x17259c: 0xc6a10d88  lwc1        $f1, 0xD88($s5)
    ctx->pc = 0x17259cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1725a0:
    // 0x1725a0: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1725a0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1725a4:
    // 0x1725a4: 0xc6a00d80  lwc1        $f0, 0xD80($s5)
    ctx->pc = 0x1725a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1725a8:
    // 0x1725a8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1725a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1725ac:
    // 0x1725ac: 0xc066e14  jal         func_19B850
label_1725b0:
    if (ctx->pc == 0x1725B0u) {
        ctx->pc = 0x1725B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1725ACu;
        // 0x1725b0: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1725B4u;
        goto label_1725b4;
    }
    ctx->pc = 0x1725ACu;
    SET_GPR_U32(ctx, 31, 0x1725B4u);
    ctx->pc = 0x1725B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1725ACu;
    // 0x1725b0: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x1725B4u;
label_1725b4:
    // 0x1725b4: 0x1000006d  b           . + 4 + (0x6D << 2)
label_1725b8:
    if (ctx->pc == 0x1725B8u) {
        ctx->pc = 0x1725BCu;
        goto label_1725bc;
    }
    ctx->pc = 0x1725B4u;
    {
        const bool branch_taken_0x1725b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1725b4) {
            ctx->pc = 0x17276Cu;
            { ctx->pc = 0x17276c; return; }
        }
    }
    ctx->pc = 0x1725BCu;
label_1725bc:
    // 0x1725bc: 0x0  nop
    ctx->pc = 0x1725bcu;
    // NOP
label_1725c0:
    // 0x1725c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1725c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1725c4:
    // 0x1725c4: 0xc6a10d88  lwc1        $f1, 0xD88($s5)
    ctx->pc = 0x1725c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1725c8:
    // 0x1725c8: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1725c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1725cc:
    // 0x1725cc: 0xc6a00d80  lwc1        $f0, 0xD80($s5)
    ctx->pc = 0x1725ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1725d0:
    // 0x1725d0: 0xc066e14  jal         func_19B850
label_1725d4:
    if (ctx->pc == 0x1725D4u) {
        ctx->pc = 0x1725D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1725D0u;
        // 0x1725d4: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1725D8u;
        goto label_1725d8;
    }
    ctx->pc = 0x1725D0u;
    SET_GPR_U32(ctx, 31, 0x1725D8u);
    ctx->pc = 0x1725D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1725D0u;
    // 0x1725d4: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x1725D8u;
label_1725d8:
    // 0x1725d8: 0x10000064  b           . + 4 + (0x64 << 2)
label_1725dc:
    if (ctx->pc == 0x1725DCu) {
        ctx->pc = 0x1725E0u;
        goto label_1725e0;
    }
    ctx->pc = 0x1725D8u;
    {
        const bool branch_taken_0x1725d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1725d8) {
            ctx->pc = 0x17276Cu;
            { ctx->pc = 0x17276c; return; }
        }
    }
    ctx->pc = 0x1725E0u;
label_1725e0:
    // 0x1725e0: 0xc08f0cc  jal         func_23C330
label_1725e4:
    if (ctx->pc == 0x1725E4u) {
        ctx->pc = 0x1725E8u;
        goto label_1725e8;
    }
    ctx->pc = 0x1725E0u;
    SET_GPR_U32(ctx, 31, 0x1725E8u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1725E8u;
label_1725e8:
    // 0x1725e8: 0xc08f0cc  jal         func_23C330
label_1725ec:
    if (ctx->pc == 0x1725ECu) {
        ctx->pc = 0x1725F0u;
        { ctx->pc = 0x1725f0; return; }
    }
    ctx->pc = 0x1725E8u;
    SET_GPR_U32(ctx, 31, 0x1725F0u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1725F0u;
    ctx->pc = 0x1725f0u;
    return;
}
