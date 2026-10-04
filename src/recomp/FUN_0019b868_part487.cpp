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

// Function: FUN_0019b868
// Address: 0x19b868 - 0x29b870
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b868_part487(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x288d48u: goto label_288d48;
        case 0x288d4cu: goto label_288d4c;
        case 0x288d50u: goto label_288d50;
        case 0x288d54u: goto label_288d54;
        case 0x288d58u: goto label_288d58;
        case 0x288d5cu: goto label_288d5c;
        case 0x288d60u: goto label_288d60;
        case 0x288d64u: goto label_288d64;
        case 0x288d68u: goto label_288d68;
        case 0x288d6cu: goto label_288d6c;
        case 0x288d70u: goto label_288d70;
        case 0x288d74u: goto label_288d74;
        case 0x288d78u: goto label_288d78;
        case 0x288d7cu: goto label_288d7c;
        case 0x288d80u: goto label_288d80;
        case 0x288d84u: goto label_288d84;
        case 0x288d88u: goto label_288d88;
        case 0x288d8cu: goto label_288d8c;
        case 0x288d90u: goto label_288d90;
        case 0x288d94u: goto label_288d94;
        case 0x288d98u: goto label_288d98;
        case 0x288d9cu: goto label_288d9c;
        case 0x288da0u: goto label_288da0;
        case 0x288da4u: goto label_288da4;
        case 0x288da8u: goto label_288da8;
        case 0x288dacu: goto label_288dac;
        case 0x288db0u: goto label_288db0;
        case 0x288db4u: goto label_288db4;
        case 0x288db8u: goto label_288db8;
        case 0x288dbcu: goto label_288dbc;
        case 0x288dc0u: goto label_288dc0;
        case 0x288dc4u: goto label_288dc4;
        case 0x288dc8u: goto label_288dc8;
        case 0x288dccu: goto label_288dcc;
        case 0x288dd0u: goto label_288dd0;
        case 0x288dd4u: goto label_288dd4;
        case 0x288dd8u: goto label_288dd8;
        case 0x288ddcu: goto label_288ddc;
        case 0x288de0u: goto label_288de0;
        case 0x288de4u: goto label_288de4;
        case 0x288de8u: goto label_288de8;
        case 0x288decu: goto label_288dec;
        case 0x288df0u: goto label_288df0;
        case 0x288df4u: goto label_288df4;
        case 0x288df8u: goto label_288df8;
        case 0x288dfcu: goto label_288dfc;
        case 0x288e00u: goto label_288e00;
        case 0x288e04u: goto label_288e04;
        case 0x288e08u: goto label_288e08;
        case 0x288e0cu: goto label_288e0c;
        case 0x288e10u: goto label_288e10;
        case 0x288e14u: goto label_288e14;
        case 0x288e18u: goto label_288e18;
        case 0x288e1cu: goto label_288e1c;
        case 0x288e20u: goto label_288e20;
        case 0x288e24u: goto label_288e24;
        case 0x288e28u: goto label_288e28;
        case 0x288e2cu: goto label_288e2c;
        case 0x288e30u: goto label_288e30;
        case 0x288e34u: goto label_288e34;
        case 0x288e38u: goto label_288e38;
        case 0x288e3cu: goto label_288e3c;
        case 0x288e40u: goto label_288e40;
        case 0x288e44u: goto label_288e44;
        case 0x288e48u: goto label_288e48;
        case 0x288e4cu: goto label_288e4c;
        case 0x288e50u: goto label_288e50;
        case 0x288e54u: goto label_288e54;
        case 0x288e58u: goto label_288e58;
        case 0x288e5cu: goto label_288e5c;
        case 0x288e60u: goto label_288e60;
        case 0x288e64u: goto label_288e64;
        case 0x288e68u: goto label_288e68;
        case 0x288e6cu: goto label_288e6c;
        case 0x288e70u: goto label_288e70;
        case 0x288e74u: goto label_288e74;
        case 0x288e78u: goto label_288e78;
        case 0x288e7cu: goto label_288e7c;
        case 0x288e80u: goto label_288e80;
        case 0x288e84u: goto label_288e84;
        case 0x288e88u: goto label_288e88;
        case 0x288e8cu: goto label_288e8c;
        case 0x288e90u: goto label_288e90;
        case 0x288e94u: goto label_288e94;
        case 0x288e98u: goto label_288e98;
        case 0x288e9cu: goto label_288e9c;
        case 0x288ea0u: goto label_288ea0;
        case 0x288ea4u: goto label_288ea4;
        case 0x288ea8u: goto label_288ea8;
        case 0x288eacu: goto label_288eac;
        case 0x288eb0u: goto label_288eb0;
        case 0x288eb4u: goto label_288eb4;
        case 0x288eb8u: goto label_288eb8;
        case 0x288ebcu: goto label_288ebc;
        case 0x288ec0u: goto label_288ec0;
        case 0x288ec4u: goto label_288ec4;
        case 0x288ec8u: goto label_288ec8;
        case 0x288eccu: goto label_288ecc;
        case 0x288ed0u: goto label_288ed0;
        case 0x288ed4u: goto label_288ed4;
        case 0x288ed8u: goto label_288ed8;
        case 0x288edcu: goto label_288edc;
        case 0x288ee0u: goto label_288ee0;
        case 0x288ee4u: goto label_288ee4;
        case 0x288ee8u: goto label_288ee8;
        case 0x288eecu: goto label_288eec;
        case 0x288ef0u: goto label_288ef0;
        case 0x288ef4u: goto label_288ef4;
        case 0x288ef8u: goto label_288ef8;
        case 0x288efcu: goto label_288efc;
        case 0x288f00u: goto label_288f00;
        case 0x288f04u: goto label_288f04;
        case 0x288f08u: goto label_288f08;
        case 0x288f0cu: goto label_288f0c;
        case 0x288f10u: goto label_288f10;
        case 0x288f14u: goto label_288f14;
        case 0x288f18u: goto label_288f18;
        case 0x288f1cu: goto label_288f1c;
        case 0x288f20u: goto label_288f20;
        case 0x288f24u: goto label_288f24;
        case 0x288f28u: goto label_288f28;
        case 0x288f2cu: goto label_288f2c;
        case 0x288f30u: goto label_288f30;
        case 0x288f34u: goto label_288f34;
        case 0x288f38u: goto label_288f38;
        case 0x288f3cu: goto label_288f3c;
        case 0x288f40u: goto label_288f40;
        case 0x288f44u: goto label_288f44;
        case 0x288f48u: goto label_288f48;
        case 0x288f4cu: goto label_288f4c;
        case 0x288f50u: goto label_288f50;
        case 0x288f54u: goto label_288f54;
        case 0x288f58u: goto label_288f58;
        case 0x288f5cu: goto label_288f5c;
        case 0x288f60u: goto label_288f60;
        case 0x288f64u: goto label_288f64;
        case 0x288f68u: goto label_288f68;
        case 0x288f6cu: goto label_288f6c;
        case 0x288f70u: goto label_288f70;
        case 0x288f74u: goto label_288f74;
        case 0x288f78u: goto label_288f78;
        case 0x288f7cu: goto label_288f7c;
        case 0x288f80u: goto label_288f80;
        case 0x288f84u: goto label_288f84;
        case 0x288f88u: goto label_288f88;
        case 0x288f8cu: goto label_288f8c;
        case 0x288f90u: goto label_288f90;
        case 0x288f94u: goto label_288f94;
        case 0x288f98u: goto label_288f98;
        case 0x288f9cu: goto label_288f9c;
        case 0x288fa0u: goto label_288fa0;
        case 0x288fa4u: goto label_288fa4;
        case 0x288fa8u: goto label_288fa8;
        case 0x288facu: goto label_288fac;
        case 0x288fb0u: goto label_288fb0;
        case 0x288fb4u: goto label_288fb4;
        case 0x288fb8u: goto label_288fb8;
        case 0x288fbcu: goto label_288fbc;
        case 0x288fc0u: goto label_288fc0;
        case 0x288fc4u: goto label_288fc4;
        case 0x288fc8u: goto label_288fc8;
        case 0x288fccu: goto label_288fcc;
        case 0x288fd0u: goto label_288fd0;
        case 0x288fd4u: goto label_288fd4;
        case 0x288fd8u: goto label_288fd8;
        case 0x288fdcu: goto label_288fdc;
        case 0x288fe0u: goto label_288fe0;
        case 0x288fe4u: goto label_288fe4;
        case 0x288fe8u: goto label_288fe8;
        case 0x288fecu: goto label_288fec;
        case 0x288ff0u: goto label_288ff0;
        case 0x288ff4u: goto label_288ff4;
        case 0x288ff8u: goto label_288ff8;
        case 0x288ffcu: goto label_288ffc;
        case 0x289000u: goto label_289000;
        case 0x289004u: goto label_289004;
        case 0x289008u: goto label_289008;
        case 0x28900cu: goto label_28900c;
        case 0x289010u: goto label_289010;
        case 0x289014u: goto label_289014;
        case 0x289018u: goto label_289018;
        case 0x28901cu: goto label_28901c;
        case 0x289020u: goto label_289020;
        case 0x289024u: goto label_289024;
        case 0x289028u: goto label_289028;
        case 0x28902cu: goto label_28902c;
        case 0x289030u: goto label_289030;
        case 0x289034u: goto label_289034;
        case 0x289038u: goto label_289038;
        case 0x28903cu: goto label_28903c;
        case 0x289040u: goto label_289040;
        case 0x289044u: goto label_289044;
        case 0x289048u: goto label_289048;
        case 0x28904cu: goto label_28904c;
        case 0x289050u: goto label_289050;
        case 0x289054u: goto label_289054;
        case 0x289058u: goto label_289058;
        case 0x28905cu: goto label_28905c;
        case 0x289060u: goto label_289060;
        case 0x289064u: goto label_289064;
        case 0x289068u: goto label_289068;
        case 0x28906cu: goto label_28906c;
        case 0x289070u: goto label_289070;
        case 0x289074u: goto label_289074;
        case 0x289078u: goto label_289078;
        case 0x28907cu: goto label_28907c;
        case 0x289080u: goto label_289080;
        case 0x289084u: goto label_289084;
        case 0x289088u: goto label_289088;
        case 0x28908cu: goto label_28908c;
        case 0x289090u: goto label_289090;
        case 0x289094u: goto label_289094;
        case 0x289098u: goto label_289098;
        case 0x28909cu: goto label_28909c;
        case 0x2890a0u: goto label_2890a0;
        case 0x2890a4u: goto label_2890a4;
        case 0x2890a8u: goto label_2890a8;
        case 0x2890acu: goto label_2890ac;
        case 0x2890b0u: goto label_2890b0;
        case 0x2890b4u: goto label_2890b4;
        case 0x2890b8u: goto label_2890b8;
        case 0x2890bcu: goto label_2890bc;
        case 0x2890c0u: goto label_2890c0;
        case 0x2890c4u: goto label_2890c4;
        case 0x2890c8u: goto label_2890c8;
        case 0x2890ccu: goto label_2890cc;
        case 0x2890d0u: goto label_2890d0;
        case 0x2890d4u: goto label_2890d4;
        case 0x2890d8u: goto label_2890d8;
        case 0x2890dcu: goto label_2890dc;
        case 0x2890e0u: goto label_2890e0;
        case 0x2890e4u: goto label_2890e4;
        case 0x2890e8u: goto label_2890e8;
        case 0x2890ecu: goto label_2890ec;
        case 0x2890f0u: goto label_2890f0;
        case 0x2890f4u: goto label_2890f4;
        case 0x2890f8u: goto label_2890f8;
        case 0x2890fcu: goto label_2890fc;
        case 0x289100u: goto label_289100;
        case 0x289104u: goto label_289104;
        case 0x289108u: goto label_289108;
        case 0x28910cu: goto label_28910c;
        case 0x289110u: goto label_289110;
        case 0x289114u: goto label_289114;
        case 0x289118u: goto label_289118;
        case 0x28911cu: goto label_28911c;
        case 0x289120u: goto label_289120;
        case 0x289124u: goto label_289124;
        case 0x289128u: goto label_289128;
        case 0x28912cu: goto label_28912c;
        case 0x289130u: goto label_289130;
        case 0x289134u: goto label_289134;
        case 0x289138u: goto label_289138;
        case 0x28913cu: goto label_28913c;
        case 0x289140u: goto label_289140;
        case 0x289144u: goto label_289144;
        case 0x289148u: goto label_289148;
        case 0x28914cu: goto label_28914c;
        case 0x289150u: goto label_289150;
        case 0x289154u: goto label_289154;
        case 0x289158u: goto label_289158;
        case 0x28915cu: goto label_28915c;
        case 0x289160u: goto label_289160;
        case 0x289164u: goto label_289164;
        case 0x289168u: goto label_289168;
        case 0x28916cu: goto label_28916c;
        case 0x289170u: goto label_289170;
        case 0x289174u: goto label_289174;
        case 0x289178u: goto label_289178;
        case 0x28917cu: goto label_28917c;
        case 0x289180u: goto label_289180;
        case 0x289184u: goto label_289184;
        case 0x289188u: goto label_289188;
        case 0x28918cu: goto label_28918c;
        case 0x289190u: goto label_289190;
        case 0x289194u: goto label_289194;
        case 0x289198u: goto label_289198;
        case 0x28919cu: goto label_28919c;
        case 0x2891a0u: goto label_2891a0;
        case 0x2891a4u: goto label_2891a4;
        case 0x2891a8u: goto label_2891a8;
        case 0x2891acu: goto label_2891ac;
        case 0x2891b0u: goto label_2891b0;
        case 0x2891b4u: goto label_2891b4;
        case 0x2891b8u: goto label_2891b8;
        case 0x2891bcu: goto label_2891bc;
        case 0x2891c0u: goto label_2891c0;
        case 0x2891c4u: goto label_2891c4;
        case 0x2891c8u: goto label_2891c8;
        case 0x2891ccu: goto label_2891cc;
        case 0x2891d0u: goto label_2891d0;
        case 0x2891d4u: goto label_2891d4;
        case 0x2891d8u: goto label_2891d8;
        case 0x2891dcu: goto label_2891dc;
        case 0x2891e0u: goto label_2891e0;
        case 0x2891e4u: goto label_2891e4;
        case 0x2891e8u: goto label_2891e8;
        case 0x2891ecu: goto label_2891ec;
        case 0x2891f0u: goto label_2891f0;
        case 0x2891f4u: goto label_2891f4;
        case 0x2891f8u: goto label_2891f8;
        case 0x2891fcu: goto label_2891fc;
        case 0x289200u: goto label_289200;
        case 0x289204u: goto label_289204;
        case 0x289208u: goto label_289208;
        case 0x28920cu: goto label_28920c;
        case 0x289210u: goto label_289210;
        case 0x289214u: goto label_289214;
        case 0x289218u: goto label_289218;
        case 0x28921cu: goto label_28921c;
        case 0x289220u: goto label_289220;
        case 0x289224u: goto label_289224;
        case 0x289228u: goto label_289228;
        case 0x28922cu: goto label_28922c;
        case 0x289230u: goto label_289230;
        case 0x289234u: goto label_289234;
        case 0x289238u: goto label_289238;
        case 0x28923cu: goto label_28923c;
        case 0x289240u: goto label_289240;
        case 0x289244u: goto label_289244;
        case 0x289248u: goto label_289248;
        case 0x28924cu: goto label_28924c;
        case 0x289250u: goto label_289250;
        case 0x289254u: goto label_289254;
        case 0x289258u: goto label_289258;
        case 0x28925cu: goto label_28925c;
        case 0x289260u: goto label_289260;
        case 0x289264u: goto label_289264;
        case 0x289268u: goto label_289268;
        case 0x28926cu: goto label_28926c;
        case 0x289270u: goto label_289270;
        case 0x289274u: goto label_289274;
        case 0x289278u: goto label_289278;
        case 0x28927cu: goto label_28927c;
        case 0x289280u: goto label_289280;
        case 0x289284u: goto label_289284;
        case 0x289288u: goto label_289288;
        case 0x28928cu: goto label_28928c;
        case 0x289290u: goto label_289290;
        case 0x289294u: goto label_289294;
        case 0x289298u: goto label_289298;
        case 0x28929cu: goto label_28929c;
        case 0x2892a0u: goto label_2892a0;
        case 0x2892a4u: goto label_2892a4;
        case 0x2892a8u: goto label_2892a8;
        case 0x2892acu: goto label_2892ac;
        case 0x2892b0u: goto label_2892b0;
        case 0x2892b4u: goto label_2892b4;
        case 0x2892b8u: goto label_2892b8;
        case 0x2892bcu: goto label_2892bc;
        case 0x2892c0u: goto label_2892c0;
        case 0x2892c4u: goto label_2892c4;
        case 0x2892c8u: goto label_2892c8;
        case 0x2892ccu: goto label_2892cc;
        case 0x2892d0u: goto label_2892d0;
        case 0x2892d4u: goto label_2892d4;
        case 0x2892d8u: goto label_2892d8;
        case 0x2892dcu: goto label_2892dc;
        case 0x2892e0u: goto label_2892e0;
        case 0x2892e4u: goto label_2892e4;
        case 0x2892e8u: goto label_2892e8;
        case 0x2892ecu: goto label_2892ec;
        case 0x2892f0u: goto label_2892f0;
        case 0x2892f4u: goto label_2892f4;
        case 0x2892f8u: goto label_2892f8;
        case 0x2892fcu: goto label_2892fc;
        case 0x289300u: goto label_289300;
        case 0x289304u: goto label_289304;
        case 0x289308u: goto label_289308;
        case 0x28930cu: goto label_28930c;
        case 0x289310u: goto label_289310;
        case 0x289314u: goto label_289314;
        case 0x289318u: goto label_289318;
        case 0x28931cu: goto label_28931c;
        case 0x289320u: goto label_289320;
        case 0x289324u: goto label_289324;
        case 0x289328u: goto label_289328;
        case 0x28932cu: goto label_28932c;
        case 0x289330u: goto label_289330;
        case 0x289334u: goto label_289334;
        case 0x289338u: goto label_289338;
        case 0x28933cu: goto label_28933c;
        case 0x289340u: goto label_289340;
        case 0x289344u: goto label_289344;
        case 0x289348u: goto label_289348;
        case 0x28934cu: goto label_28934c;
        case 0x289350u: goto label_289350;
        case 0x289354u: goto label_289354;
        case 0x289358u: goto label_289358;
        case 0x28935cu: goto label_28935c;
        case 0x289360u: goto label_289360;
        case 0x289364u: goto label_289364;
        case 0x289368u: goto label_289368;
        case 0x28936cu: goto label_28936c;
        case 0x289370u: goto label_289370;
        case 0x289374u: goto label_289374;
        case 0x289378u: goto label_289378;
        case 0x28937cu: goto label_28937c;
        case 0x289380u: goto label_289380;
        case 0x289384u: goto label_289384;
        case 0x289388u: goto label_289388;
        case 0x28938cu: goto label_28938c;
        case 0x289390u: goto label_289390;
        case 0x289394u: goto label_289394;
        case 0x289398u: goto label_289398;
        case 0x28939cu: goto label_28939c;
        case 0x2893a0u: goto label_2893a0;
        case 0x2893a4u: goto label_2893a4;
        case 0x2893a8u: goto label_2893a8;
        case 0x2893acu: goto label_2893ac;
        case 0x2893b0u: goto label_2893b0;
        case 0x2893b4u: goto label_2893b4;
        case 0x2893b8u: goto label_2893b8;
        case 0x2893bcu: goto label_2893bc;
        case 0x2893c0u: goto label_2893c0;
        case 0x2893c4u: goto label_2893c4;
        case 0x2893c8u: goto label_2893c8;
        case 0x2893ccu: goto label_2893cc;
        case 0x2893d0u: goto label_2893d0;
        case 0x2893d4u: goto label_2893d4;
        case 0x2893d8u: goto label_2893d8;
        case 0x2893dcu: goto label_2893dc;
        case 0x2893e0u: goto label_2893e0;
        case 0x2893e4u: goto label_2893e4;
        case 0x2893e8u: goto label_2893e8;
        case 0x2893ecu: goto label_2893ec;
        case 0x2893f0u: goto label_2893f0;
        case 0x2893f4u: goto label_2893f4;
        case 0x2893f8u: goto label_2893f8;
        case 0x2893fcu: goto label_2893fc;
        case 0x289400u: goto label_289400;
        case 0x289404u: goto label_289404;
        case 0x289408u: goto label_289408;
        case 0x28940cu: goto label_28940c;
        case 0x289410u: goto label_289410;
        case 0x289414u: goto label_289414;
        case 0x289418u: goto label_289418;
        case 0x28941cu: goto label_28941c;
        case 0x289420u: goto label_289420;
        case 0x289424u: goto label_289424;
        case 0x289428u: goto label_289428;
        case 0x28942cu: goto label_28942c;
        case 0x289430u: goto label_289430;
        case 0x289434u: goto label_289434;
        case 0x289438u: goto label_289438;
        case 0x28943cu: goto label_28943c;
        case 0x289440u: goto label_289440;
        case 0x289444u: goto label_289444;
        case 0x289448u: goto label_289448;
        case 0x28944cu: goto label_28944c;
        case 0x289450u: goto label_289450;
        case 0x289454u: goto label_289454;
        case 0x289458u: goto label_289458;
        case 0x28945cu: goto label_28945c;
        case 0x289460u: goto label_289460;
        case 0x289464u: goto label_289464;
        case 0x289468u: goto label_289468;
        case 0x28946cu: goto label_28946c;
        case 0x289470u: goto label_289470;
        case 0x289474u: goto label_289474;
        case 0x289478u: goto label_289478;
        case 0x28947cu: goto label_28947c;
        case 0x289480u: goto label_289480;
        case 0x289484u: goto label_289484;
        case 0x289488u: goto label_289488;
        case 0x28948cu: goto label_28948c;
        case 0x289490u: goto label_289490;
        case 0x289494u: goto label_289494;
        case 0x289498u: goto label_289498;
        case 0x28949cu: goto label_28949c;
        case 0x2894a0u: goto label_2894a0;
        case 0x2894a4u: goto label_2894a4;
        case 0x2894a8u: goto label_2894a8;
        case 0x2894acu: goto label_2894ac;
        case 0x2894b0u: goto label_2894b0;
        case 0x2894b4u: goto label_2894b4;
        case 0x2894b8u: goto label_2894b8;
        case 0x2894bcu: goto label_2894bc;
        case 0x2894c0u: goto label_2894c0;
        case 0x2894c4u: goto label_2894c4;
        case 0x2894c8u: goto label_2894c8;
        case 0x2894ccu: goto label_2894cc;
        case 0x2894d0u: goto label_2894d0;
        case 0x2894d4u: goto label_2894d4;
        case 0x2894d8u: goto label_2894d8;
        case 0x2894dcu: goto label_2894dc;
        case 0x2894e0u: goto label_2894e0;
        case 0x2894e4u: goto label_2894e4;
        case 0x2894e8u: goto label_2894e8;
        case 0x2894ecu: goto label_2894ec;
        case 0x2894f0u: goto label_2894f0;
        case 0x2894f4u: goto label_2894f4;
        case 0x2894f8u: goto label_2894f8;
        case 0x2894fcu: goto label_2894fc;
        case 0x289500u: goto label_289500;
        case 0x289504u: goto label_289504;
        case 0x289508u: goto label_289508;
        case 0x28950cu: goto label_28950c;
        case 0x289510u: goto label_289510;
        case 0x289514u: goto label_289514;
        default: return;
    }

label_288d48:
    // 0x288d48: 0x577  .word       0x00000577                   # INVALID     $zero, $zero, 0x577 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288d48u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x288D48 raw=0x00000577"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_288d4c:
    // 0x288d4c: 0x57a  dsrl        $zero, $zero, 21
    ctx->pc = 0x288d4cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 21);
label_288d50:
    // 0x288d50: 0x57d  .word       0x0000057D                   # INVALID     $zero, $zero, 0x57D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288d50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x288D50 raw=0x0000057D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_288d54:
    // 0x288d54: 0x580  sll         $zero, $zero, 22
    ctx->pc = 0x288d54u;
    
label_288d58:
    // 0x288d58: 0x583  sra         $zero, $zero, 22
    ctx->pc = 0x288d58u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 22));
label_288d5c:
    // 0x288d5c: 0x586  .word       0x00000586                   # srlv        $zero, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288d5cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_288d60:
    // 0x288d60: 0x589  .word       0x00000589                   # jalr        $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
label_288d64:
    if (ctx->pc == 0x288D64u) {
        ctx->pc = 0x288D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288D60u;
        // 0x288d64: 0x58c  syscall     22 (Delay Slot)
        ctx->pc = 0x288D68u;
        runtime->handleSyscall(rdram, ctx, 0x16u);
        ctx->in_delay_slot = false;
        ctx->pc = 0x288D68u;
        goto label_288d68;
    }
    ctx->pc = 0x288D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x288D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288D60u;
        // 0x288d64: 0x58c  syscall     22 (Delay Slot)
        ctx->pc = 0x288D68u;
        runtime->handleSyscall(rdram, ctx, 0x16u);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288D60u, 0x288D68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x288D68u;
label_288d68:
    // 0x288d68: 0x58f  sync.p
    ctx->pc = 0x288d68u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_288d6c:
    // 0x288d6c: 0x0  nop
    ctx->pc = 0x288d6cu;
    // NOP
label_288d70:
    // 0x288d70: 0x0  nop
    ctx->pc = 0x288d70u;
    // NOP
label_288d74:
    // 0x288d74: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288d74u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x288D74 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_288d78:
    // 0x288d78: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288d78u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x288D78 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_288d7c:
    // 0x288d7c: 0x0  nop
    ctx->pc = 0x288d7cu;
    // NOP
label_288d80:
    // 0x288d80: 0x0  nop
    ctx->pc = 0x288d80u;
    // NOP
label_288d84:
    // 0x288d84: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x288d84u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_288d88:
    // 0x288d88: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x288d88u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_288d8c:
    // 0x288d8c: 0x0  nop
    ctx->pc = 0x288d8cu;
    // NOP
label_288d90:
    // 0x288d90: 0x40830001  .word       0x40830001                   # mtc0        $v1, Index # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x288d90u;
    ctx->cop0_index = GPR_U32(ctx, 3) & 0x3F;
label_288d94:
    // 0x288d94: 0x63066107  daddi       $a2, $t8, 0x6107
    ctx->pc = 0x288d94u;
    { int64_t src = (int64_t)GPR_S64(ctx, 24); int64_t imm = (int64_t)(int32_t)24839; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, res); }
label_288d98:
    // 0x288d98: 0x638c620e  daddi       $t4, $gp, 0x620E
    ctx->pc = 0x288d98u;
    { int64_t src = (int64_t)GPR_S64(ctx, 28); int64_t imm = (int64_t)(int32_t)25102; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, res); }
label_288d9c:
    // 0x288d9c: 0x77d07758  .word       0x77D07758                   # INVALID     $fp, $s0, 0x7758 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x288d9cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x288D9C raw=0x77D07758");
 /* MITIGATED */
label_288da0:
    // 0x288da0: 0x41860083  .word       0x41860083                   # INVALID     $t4, $a2, 0x83 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x288da0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x288DA0 raw=0x41860083"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_288da4:
    // 0x288da4: 0x630c6187  daddi       $t4, $t8, 0x6187
    ctx->pc = 0x288da4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 24); int64_t imm = (int64_t)(int32_t)24967; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, res); }
label_288da8:
    // 0x288da8: 0x77dc738e  .word       0x77DC738E                   # INVALID     $fp, $gp, 0x738E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x288da8u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x288DA8 raw=0x77DC738E");
 /* MITIGATED */
label_288dac:
    // 0x288dac: 0x7ff07ff8  sq          $s0, 0x7FF8($ra)
    ctx->pc = 0x288dacu;
    WRITE128(ADD32(GPR_U32(ctx, 31), 32760), GPR_VEC(ctx, 16));
label_288db0:
    // 0x288db0: 0x400100  .word       0x00400100                   # sll         $zero, $zero, 4 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288db0u;
    
label_288db4:
    // 0x288db4: 0x500090  .word       0x00500090                   # mfhi        $zero # 00500080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288db4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_288db8:
    // 0x288db8: 0x10002  srl         $zero, $at, 0
    ctx->pc = 0x288db8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 1), 0));
label_288dbc:
    // 0x288dbc: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x288dbcu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_288dc0:
    // 0x288dc0: 0xa80100  .word       0x00A80100                   # sll         $zero, $t0, 4 # 00A00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288dc0u;
    
label_288dc4:
    // 0x288dc4: 0x180058  .word       0x00180058                   # mult        $zero, $zero, $t8 # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x288dc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_288dc8:
    // 0x288dc8: 0x10002  srl         $zero, $at, 0
    ctx->pc = 0x288dc8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 1), 0));
label_288dcc:
    // 0x288dcc: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288dccu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x288DCC raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_288dd0:
    // 0x288dd0: 0x1ea  .word       0x000001EA                   # slt         $zero, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288dd0u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_288dd4:
    // 0x288dd4: 0x168  .word       0x00000168                   # mfsa        $zero # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x288dd4u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_288dd8:
    // 0x288dd8: 0x20e  .word       0x0000020E                   # INVALID     $zero, $zero, 0x20E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288dd8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x288DD8 raw=0x0000020E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_288ddc:
    // 0x288ddc: 0x190  .word       0x00000190                   # mfhi        $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288ddcu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_288de0:
    // 0x288de0: 0x280  sll         $zero, $zero, 10
    ctx->pc = 0x288de0u;
    
label_288de4:
    // 0x288de4: 0x1c0  sll         $zero, $zero, 7
    ctx->pc = 0x288de4u;
    
label_288de8:
    // 0x288de8: 0x280  sll         $zero, $zero, 10
    ctx->pc = 0x288de8u;
    
label_288dec:
    // 0x288dec: 0x1c0  sll         $zero, $zero, 7
    ctx->pc = 0x288decu;
    
label_288df0:
    // 0x288df0: 0x5d1  .word       0x000005D1                   # mthi        $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288df0u;
    ctx->hi = GPR_U64(ctx, 0);
label_288df4:
    // 0x288df4: 0x5d2  .word       0x000005D2                   # mflo        $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288df4u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_288df8:
    // 0x288df8: 0x5d3  .word       0x000005D3                   # mtlo        $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288df8u;
    ctx->lo = GPR_U64(ctx, 0);
label_288dfc:
    // 0x288dfc: 0x5d4  .word       0x000005D4                   # dsllv       $zero, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288dfcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_288e00:
    // 0x288e00: 0x5d5  .word       0x000005D5                   # INVALID     $zero, $zero, 0x5D5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288e00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x288E00 raw=0x000005D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_288e04:
    // 0x288e04: 0x5d6  .word       0x000005D6                   # dsrlv       $zero, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288e04u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_288e08:
    // 0x288e08: 0x5d7  .word       0x000005D7                   # dsrav       $zero, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288e08u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_288e0c:
    // 0x288e0c: 0x5d8  .word       0x000005D8                   # mult        $zero, $zero, $zero # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x288e0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_288e10:
    // 0x288e10: 0x5d9  .word       0x000005D9                   # multu       $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288e10u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_288e14:
    // 0x288e14: 0x5da  .word       0x000005DA                   # div         $zero, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288e14u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_288e18:
    // 0x288e18: 0x5db  .word       0x000005DB                   # divu        $zero, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288e18u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_288e1c:
    // 0x288e1c: 0x5dc  .word       0x000005DC                   # dmult       $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288e1cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x288E1C raw=0x000005DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_288e20:
    // 0x288e20: 0x5dd  .word       0x000005DD                   # dmultu      $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288e20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x288E20 raw=0x000005DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_288e24:
    // 0x288e24: 0x5de  .word       0x000005DE                   # ddiv        $zero, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288e24u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x288E24 raw=0x000005DE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_288e28:
    // 0x288e28: 0x5df  .word       0x000005DF                   # ddivu       $zero, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288e28u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x288E28 raw=0x000005DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_288e2c:
    // 0x288e2c: 0x5e0  .word       0x000005E0                   # add         $zero, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288e2cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_288e30:
    // 0x288e30: 0x5e1  .word       0x000005E1                   # addu        $zero, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288e30u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_288e34:
    // 0x288e34: 0x5e2  .word       0x000005E2                   # neg         $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288e34u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_288e38:
    // 0x288e38: 0x5e3  .word       0x000005E3                   # negu        $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288e38u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_288e3c:
    // 0x288e3c: 0x5e4  .word       0x000005E4                   # and         $zero, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288e3cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_288e40:
    // 0x288e40: 0x5e5  .word       0x000005E5                   # move        $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288e40u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_288e44:
    // 0x288e44: 0x5e6  .word       0x000005E6                   # xor         $zero, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288e44u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_288e48:
    // 0x288e48: 0x5e7  .word       0x000005E7                   # not         $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288e48u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_288e4c:
    // 0x288e4c: 0x0  nop
    ctx->pc = 0x288e4cu;
    // NOP
label_288e50:
    // 0x288e50: 0x5e4  .word       0x000005E4                   # and         $zero, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288e50u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_288e54:
    // 0x288e54: 0x5e3  .word       0x000005E3                   # negu        $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288e54u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_288e58:
    // 0x288e58: 0x5d4  .word       0x000005D4                   # dsllv       $zero, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288e58u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_288e5c:
    // 0x288e5c: 0x5d4  .word       0x000005D4                   # dsllv       $zero, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288e5cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_288e60:
    // 0x288e60: 0x5d5  .word       0x000005D5                   # INVALID     $zero, $zero, 0x5D5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288e60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x288E60 raw=0x000005D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_288e64:
    // 0x288e64: 0x5d1  .word       0x000005D1                   # mthi        $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288e64u;
    ctx->hi = GPR_U64(ctx, 0);
label_288e68:
    // 0x288e68: 0x5d7  .word       0x000005D7                   # dsrav       $zero, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288e68u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_288e6c:
    // 0x288e6c: 0x5d8  .word       0x000005D8                   # mult        $zero, $zero, $zero # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x288e6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_288e70:
    // 0x288e70: 0x5d9  .word       0x000005D9                   # multu       $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288e70u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_288e74:
    // 0x288e74: 0x5de  .word       0x000005DE                   # ddiv        $zero, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288e74u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x288E74 raw=0x000005DE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_288e78:
    // 0x288e78: 0x5da  .word       0x000005DA                   # div         $zero, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288e78u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_288e7c:
    // 0x288e7c: 0x5dc  .word       0x000005DC                   # dmult       $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288e7cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x288E7C raw=0x000005DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_288e80:
    // 0x288e80: 0x5dd  .word       0x000005DD                   # dmultu      $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288e80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x288E80 raw=0x000005DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_288e84:
    // 0x288e84: 0x5d6  .word       0x000005D6                   # dsrlv       $zero, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288e84u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_288e88:
    // 0x288e88: 0x5df  .word       0x000005DF                   # ddivu       $zero, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288e88u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x288E88 raw=0x000005DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_288e8c:
    // 0x288e8c: 0x5e0  .word       0x000005E0                   # add         $zero, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288e8cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_288e90:
    // 0x288e90: 0x5df  .word       0x000005DF                   # ddivu       $zero, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288e90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x288E90 raw=0x000005DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_288e94:
    // 0x288e94: 0x5e2  .word       0x000005E2                   # neg         $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288e94u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_288e98:
    // 0x288e98: 0x5e3  .word       0x000005E3                   # negu        $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288e98u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_288e9c:
    // 0x288e9c: 0x5e4  .word       0x000005E4                   # and         $zero, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288e9cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_288ea0:
    // 0x288ea0: 0x5e5  .word       0x000005E5                   # move        $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288ea0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_288ea4:
    // 0x288ea4: 0x5e6  .word       0x000005E6                   # xor         $zero, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288ea4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_288ea8:
    // 0x288ea8: 0x5d4  .word       0x000005D4                   # dsllv       $zero, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288ea8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_288eac:
    // 0x288eac: 0x0  nop
    ctx->pc = 0x288eacu;
    // NOP
label_288eb0:
    // 0x288eb0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288eb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x288EB0 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_288eb4:
    // 0x288eb4: 0x10000000  b           . + 4 + (0x0 << 2)
label_288eb8:
    if (ctx->pc == 0x288EB8u) {
        ctx->pc = 0x288EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288EB4u;
        // 0x288eb8: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x288EB8 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x288EBCu;
        goto label_288ebc;
    }
    ctx->pc = 0x288EB4u;
    {
        const bool branch_taken_0x288eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288EB4u;
        // 0x288eb8: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x288EB8 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x288eb4) {
            ctx->pc = 0x288EB8u;
            goto label_288eb8;
        }
    }
    ctx->pc = 0x288EBCu;
label_288ebc:
    // 0x288ebc: 0x0  nop
    ctx->pc = 0x288ebcu;
    // NOP
label_288ec0:
    // 0x288ec0: 0x8001  .word       0x00008001                   # INVALID     $zero, $zero, -0x7FFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288ec0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x288EC0 raw=0x00008001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_288ec4:
    // 0x288ec4: 0x10000000  b           . + 4 + (0x0 << 2)
label_288ec8:
    if (ctx->pc == 0x288EC8u) {
        ctx->pc = 0x288EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288EC4u;
        // 0x288ec8: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x288EC8 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x288ECCu;
        goto label_288ecc;
    }
    ctx->pc = 0x288EC4u;
    {
        const bool branch_taken_0x288ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288EC4u;
        // 0x288ec8: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x288EC8 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x288ec4) {
            ctx->pc = 0x288EC8u;
            goto label_288ec8;
        }
    }
    ctx->pc = 0x288ECCu;
label_288ecc:
    // 0x288ecc: 0x0  nop
    ctx->pc = 0x288eccu;
    // NOP
label_288ed0:
    // 0x288ed0: 0x0  nop
    ctx->pc = 0x288ed0u;
    // NOP
label_288ed4:
    // 0x288ed4: 0xe4000000  swc1        $f0, 0x0($zero)
    ctx->pc = 0x288ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x0u, _value); } while (0); }
label_288ed8:
    // 0x288ed8: 0xc12c1270  ll          $t4, 0x1270($t1)
    ctx->pc = 0x288ed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 4720); SET_GPR_S32(ctx, 12, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_288edc:
    // 0x288edc: 0x412412  .word       0x00412412                   # mflo        $a0 # 00410400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288edcu;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_288ee0:
    // 0x288ee0: 0x2cb840  .word       0x002CB840                   # sll         $s7, $t4, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288ee0u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
label_288ee4:
    // 0x288ee4: 0x2cb870  tge         $at, $t4, 737
    ctx->pc = 0x288ee4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_288ee8:
    // 0x288ee8: 0x2cb8a0  .word       0x002CB8A0                   # add         $s7, $at, $t4 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288ee8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_288eec:
    // 0x288eec: 0x2cb8d0  .word       0x002CB8D0                   # mfhi        $s7 # 002C00C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288eecu;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_288ef0:
    // 0x288ef0: 0x2cb900  .word       0x002CB900                   # sll         $s7, $t4, 4 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288ef0u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
label_288ef4:
    // 0x288ef4: 0x2cb930  tge         $at, $t4, 740
    ctx->pc = 0x288ef4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_288ef8:
    // 0x288ef8: 0x2cb960  .word       0x002CB960                   # add         $s7, $at, $t4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288ef8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_288efc:
    // 0x288efc: 0x2cb980  .word       0x002CB980                   # sll         $s7, $t4, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288efcu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 12), 6));
label_288f00:
    // 0x288f00: 0x2cb9a0  .word       0x002CB9A0                   # add         $s7, $at, $t4 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288f00u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_288f04:
    // 0x288f04: 0x2cb9c0  .word       0x002CB9C0                   # sll         $s7, $t4, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288f04u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 12), 7));
label_288f08:
    // 0x288f08: 0x2cb9f0  tge         $at, $t4, 743
    ctx->pc = 0x288f08u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_288f0c:
    // 0x288f0c: 0x2cba10  .word       0x002CBA10                   # mfhi        $s7 # 002C0200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288f0cu;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_288f10:
    // 0x288f10: 0x2cba40  .word       0x002CBA40                   # sll         $s7, $t4, 9 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288f10u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 12), 9));
label_288f14:
    // 0x288f14: 0x2cba60  .word       0x002CBA60                   # add         $s7, $at, $t4 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288f14u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_288f18:
    // 0x288f18: 0x2cba80  .word       0x002CBA80                   # sll         $s7, $t4, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288f18u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 12), 10));
label_288f1c:
    // 0x288f1c: 0x2cbab0  tge         $at, $t4, 746
    ctx->pc = 0x288f1cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_288f20:
    // 0x288f20: 0x2cbae0  .word       0x002CBAE0                   # add         $s7, $at, $t4 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288f20u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_288f24:
    // 0x288f24: 0x2cbb00  .word       0x002CBB00                   # sll         $s7, $t4, 12 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288f24u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 12), 12));
label_288f28:
    // 0x288f28: 0x2cbb30  tge         $at, $t4, 748
    ctx->pc = 0x288f28u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_288f2c:
    // 0x288f2c: 0x2cbb50  .word       0x002CBB50                   # mfhi        $s7 # 002C0340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288f2cu;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_288f30:
    // 0x288f30: 0x2cbb90  .word       0x002CBB90                   # mfhi        $s7 # 002C0380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288f30u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_288f34:
    // 0x288f34: 0x2cbbb0  tge         $at, $t4, 750
    ctx->pc = 0x288f34u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_288f38:
    // 0x288f38: 0x2cbbe0  .word       0x002CBBE0                   # add         $s7, $at, $t4 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288f38u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_288f3c:
    // 0x288f3c: 0x2cbc10  .word       0x002CBC10                   # mfhi        $s7 # 002C0400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288f3cu;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_288f40:
    // 0x288f40: 0x2cbc30  tge         $at, $t4, 752
    ctx->pc = 0x288f40u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_288f44:
    // 0x288f44: 0x2cbc50  .word       0x002CBC50                   # mfhi        $s7 # 002C0440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288f44u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_288f48:
    // 0x288f48: 0x2cbc70  tge         $at, $t4, 753
    ctx->pc = 0x288f48u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_288f4c:
    // 0x288f4c: 0x2cbca0  .word       0x002CBCA0                   # add         $s7, $at, $t4 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288f4cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_288f50:
    // 0x288f50: 0x2cbcd0  .word       0x002CBCD0                   # mfhi        $s7 # 002C04C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288f50u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_288f54:
    // 0x288f54: 0x2cbd20  .word       0x002CBD20                   # add         $s7, $at, $t4 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288f54u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_288f58:
    // 0x288f58: 0x2cbd50  .word       0x002CBD50                   # mfhi        $s7 # 002C0540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288f58u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_288f5c:
    // 0x288f5c: 0x2cbd80  .word       0x002CBD80                   # sll         $s7, $t4, 22 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288f5cu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 12), 22));
label_288f60:
    // 0x288f60: 0x2cbdb0  tge         $at, $t4, 758
    ctx->pc = 0x288f60u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_288f64:
    // 0x288f64: 0x0  nop
    ctx->pc = 0x288f64u;
    // NOP
label_288f68:
    // 0x288f68: 0x0  nop
    ctx->pc = 0x288f68u;
    // NOP
label_288f6c:
    // 0x288f6c: 0x0  nop
    ctx->pc = 0x288f6cu;
    // NOP
label_288f70:
    // 0x288f70: 0x2cbdf0  tge         $at, $t4, 759
    ctx->pc = 0x288f70u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_288f74:
    // 0x288f74: 0x2cbe20  .word       0x002CBE20                   # add         $s7, $at, $t4 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288f74u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_288f78:
    // 0x288f78: 0x2cbe60  .word       0x002CBE60                   # add         $s7, $at, $t4 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288f78u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_288f7c:
    // 0x288f7c: 0x2cbe80  .word       0x002CBE80                   # sll         $s7, $t4, 26 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288f7cu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 12), 26));
label_288f80:
    // 0x288f80: 0x2cbea0  .word       0x002CBEA0                   # add         $s7, $at, $t4 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288f80u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_288f84:
    // 0x288f84: 0x2cbec0  .word       0x002CBEC0                   # sll         $s7, $t4, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288f84u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 12), 27));
label_288f88:
    // 0x288f88: 0x2cbee0  .word       0x002CBEE0                   # add         $s7, $at, $t4 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288f88u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_288f8c:
    // 0x288f8c: 0x2cbf10  .word       0x002CBF10                   # mfhi        $s7 # 002C0700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288f8cu;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_288f90:
    // 0x288f90: 0x2cbf30  tge         $at, $t4, 764
    ctx->pc = 0x288f90u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_288f94:
    // 0x288f94: 0x2cbf60  .word       0x002CBF60                   # add         $s7, $at, $t4 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288f94u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_288f98:
    // 0x288f98: 0x2cbf80  .word       0x002CBF80                   # sll         $s7, $t4, 30 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288f98u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 12), 30));
label_288f9c:
    // 0x288f9c: 0x2cbfa0  .word       0x002CBFA0                   # add         $s7, $at, $t4 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288f9cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_288fa0:
    // 0x288fa0: 0x2cbfc0  .word       0x002CBFC0                   # sll         $s7, $t4, 31 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288fa0u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 12), 31));
label_288fa4:
    // 0x288fa4: 0x2cbfe0  .word       0x002CBFE0                   # add         $s7, $at, $t4 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288fa4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_288fa8:
    // 0x288fa8: 0x2cc010  .word       0x002CC010                   # mfhi        $t8 # 002C0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288fa8u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_288fac:
    // 0x288fac: 0x2cc040  .word       0x002CC040                   # sll         $t8, $t4, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288facu;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
label_288fb0:
    // 0x288fb0: 0x2cc070  tge         $at, $t4, 769
    ctx->pc = 0x288fb0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_288fb4:
    // 0x288fb4: 0x2cc0a0  .word       0x002CC0A0                   # add         $t8, $at, $t4 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288fb4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_288fb8:
    // 0x288fb8: 0x2cc0d0  .word       0x002CC0D0                   # mfhi        $t8 # 002C00C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288fb8u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_288fbc:
    // 0x288fbc: 0x2cc0f0  tge         $at, $t4, 771
    ctx->pc = 0x288fbcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_288fc0:
    // 0x288fc0: 0x2cc110  .word       0x002CC110                   # mfhi        $t8 # 002C0100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288fc0u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_288fc4:
    // 0x288fc4: 0x2cc130  tge         $at, $t4, 772
    ctx->pc = 0x288fc4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_288fc8:
    // 0x288fc8: 0x2cc150  .word       0x002CC150                   # mfhi        $t8 # 002C0140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288fc8u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_288fcc:
    // 0x288fcc: 0x2cc180  .word       0x002CC180                   # sll         $t8, $t4, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288fccu;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 6));
label_288fd0:
    // 0x288fd0: 0x2cc1a0  .word       0x002CC1A0                   # add         $t8, $at, $t4 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288fd0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_288fd4:
    // 0x288fd4: 0x2cc1e0  .word       0x002CC1E0                   # add         $t8, $at, $t4 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288fd4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_288fd8:
    // 0x288fd8: 0x2cc200  .word       0x002CC200                   # sll         $t8, $t4, 8 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288fd8u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 8));
label_288fdc:
    // 0x288fdc: 0x2cc220  .word       0x002CC220                   # add         $t8, $at, $t4 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288fdcu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_288fe0:
    // 0x288fe0: 0x2cc260  .word       0x002CC260                   # add         $t8, $at, $t4 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288fe0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_288fe4:
    // 0x288fe4: 0x2cc280  .word       0x002CC280                   # sll         $t8, $t4, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288fe4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 10));
label_288fe8:
    // 0x288fe8: 0x2cc2b0  tge         $at, $t4, 778
    ctx->pc = 0x288fe8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_288fec:
    // 0x288fec: 0x2cc2d0  .word       0x002CC2D0                   # mfhi        $t8 # 002C02C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288fecu;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_288ff0:
    // 0x288ff0: 0x2cc300  .word       0x002CC300                   # sll         $t8, $t4, 12 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288ff0u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 12));
label_288ff4:
    // 0x288ff4: 0x2cc330  tge         $at, $t4, 780
    ctx->pc = 0x288ff4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_288ff8:
    // 0x288ff8: 0x2cc350  .word       0x002CC350                   # mfhi        $t8 # 002C0340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288ff8u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_288ffc:
    // 0x288ffc: 0x2cc370  tge         $at, $t4, 781
    ctx->pc = 0x288ffcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_289000:
    // 0x289000: 0x2cc3b0  tge         $at, $t4, 782
    ctx->pc = 0x289000u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_289004:
    // 0x289004: 0x2cc3d0  .word       0x002CC3D0                   # mfhi        $t8 # 002C03C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289004u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_289008:
    // 0x289008: 0x2cc3e0  .word       0x002CC3E0                   # add         $t8, $at, $t4 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289008u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_28900c:
    // 0x28900c: 0x0  nop
    ctx->pc = 0x28900cu;
    // NOP
label_289010:
    // 0x289010: 0x6aa  .word       0x000006AA                   # slt         $zero, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289010u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_289014:
    // 0x289014: 0x6ab  .word       0x000006AB                   # sltu        $zero, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289014u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_289018:
    // 0x289018: 0x6ac  .word       0x000006AC                   # dadd        $zero, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289018u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_28901c:
    // 0x28901c: 0x6ad  .word       0x000006AD                   # daddu       $zero, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28901cu;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_289020:
    // 0x289020: 0x6ae  .word       0x000006AE                   # dsub        $zero, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289020u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_289024:
    // 0x289024: 0x6af  .word       0x000006AF                   # dsubu       $zero, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289024u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_289028:
    // 0x289028: 0x6b0  tge         $zero, $zero, 26
    ctx->pc = 0x289028u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28902c:
    // 0x28902c: 0x6b1  tgeu        $zero, $zero, 26
    ctx->pc = 0x28902cu;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_289030:
    // 0x289030: 0x6b2  tlt         $zero, $zero, 26
    ctx->pc = 0x289030u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_289034:
    // 0x289034: 0x6b3  tltu        $zero, $zero, 26
    ctx->pc = 0x289034u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_289038:
    // 0x289038: 0x6b4  teq         $zero, $zero, 26
    ctx->pc = 0x289038u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28903c:
    // 0x28903c: 0x6b5  .word       0x000006B5                   # INVALID     $zero, $zero, 0x6B5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28903cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x28903C raw=0x000006B5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289040:
    // 0x289040: 0x6b6  tne         $zero, $zero, 26
    ctx->pc = 0x289040u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_289044:
    // 0x289044: 0x6b7  .word       0x000006B7                   # INVALID     $zero, $zero, 0x6B7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289044u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x289044 raw=0x000006B7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289048:
    // 0x289048: 0x6b8  dsll        $zero, $zero, 26
    ctx->pc = 0x289048u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 26);
label_28904c:
    // 0x28904c: 0x6b9  .word       0x000006B9                   # INVALID     $zero, $zero, 0x6B9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28904cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x28904C raw=0x000006B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289050:
    // 0x289050: 0x6ba  dsrl        $zero, $zero, 26
    ctx->pc = 0x289050u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 26);
label_289054:
    // 0x289054: 0x6bb  dsra        $zero, $zero, 26
    ctx->pc = 0x289054u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 26);
label_289058:
    // 0x289058: 0x6bc  dsll32      $zero, $zero, 26
    ctx->pc = 0x289058u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 26));
label_28905c:
    // 0x28905c: 0x6bd  .word       0x000006BD                   # INVALID     $zero, $zero, 0x6BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28905cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x28905C raw=0x000006BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289060:
    // 0x289060: 0x6be  dsrl32      $zero, $zero, 26
    ctx->pc = 0x289060u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 26));
label_289064:
    // 0x289064: 0x6bf  dsra32      $zero, $zero, 26
    ctx->pc = 0x289064u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 26));
label_289068:
    // 0x289068: 0x6c0  sll         $zero, $zero, 27
    ctx->pc = 0x289068u;
    
label_28906c:
    // 0x28906c: 0x6c1  .word       0x000006C1                   # INVALID     $zero, $zero, 0x6C1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28906cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28906C raw=0x000006C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289070:
    // 0x289070: 0x6c2  srl         $zero, $zero, 27
    ctx->pc = 0x289070u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 27));
label_289074:
    // 0x289074: 0x6c3  sra         $zero, $zero, 27
    ctx->pc = 0x289074u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 27));
label_289078:
    // 0x289078: 0x6c4  .word       0x000006C4                   # sllv        $zero, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289078u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28907c:
    // 0x28907c: 0x6c5  .word       0x000006C5                   # INVALID     $zero, $zero, 0x6C5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28907cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x28907C raw=0x000006C5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289080:
    // 0x289080: 0x6c6  .word       0x000006C6                   # srlv        $zero, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289080u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289084:
    // 0x289084: 0x6c7  .word       0x000006C7                   # srav        $zero, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289084u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289088:
    // 0x289088: 0x6c8  .word       0x000006C8                   # jr          $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
label_28908c:
    if (ctx->pc == 0x28908Cu) {
        ctx->pc = 0x28908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289088u;
        // 0x28908c: 0x6c9  .word       0x000006C9                   # jalr        $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JALR $0, $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x289090u;
        goto label_289090;
    }
    ctx->pc = 0x289088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289088u;
        // 0x28908c: 0x6c9  .word       0x000006C9                   # jalr        $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JALR $0, $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289088u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x289090u;
label_289090:
    // 0x289090: 0x6ca  .word       0x000006CA                   # movz        $zero, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289090u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_289094:
    // 0x289094: 0x6cb  .word       0x000006CB                   # movn        $zero, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289094u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_289098:
    // 0x289098: 0x6cc  syscall     27
    ctx->pc = 0x289098u;
    ctx->pc = 0x28909Cu;
runtime->handleSyscall(rdram, ctx, 0x1Bu);
label_28909c:
    // 0x28909c: 0x6cd  break       0, 27
    ctx->pc = 0x28909cu;
    runtime->handleBreak(rdram, ctx);
label_2890a0:
    // 0x2890a0: 0x6ce  .word       0x000006CE                   # INVALID     $zero, $zero, 0x6CE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2890a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2890A0 raw=0x000006CE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2890a4:
    // 0x2890a4: 0x6cf  sync.p
    ctx->pc = 0x2890a4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2890a8:
    // 0x2890a8: 0x6d0  .word       0x000006D0                   # mfhi        $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2890a8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2890ac:
    // 0x2890ac: 0x6d5  .word       0x000006D5                   # INVALID     $zero, $zero, 0x6D5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2890acu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2890AC raw=0x000006D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2890b0:
    // 0x2890b0: 0x6d6  .word       0x000006D6                   # dsrlv       $zero, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2890b0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2890b4:
    // 0x2890b4: 0x6d1  .word       0x000006D1                   # mthi        $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2890b4u;
    ctx->hi = GPR_U64(ctx, 0);
label_2890b8:
    // 0x2890b8: 0x6d2  .word       0x000006D2                   # mflo        $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2890b8u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_2890bc:
    // 0x2890bc: 0x6d3  .word       0x000006D3                   # mtlo        $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2890bcu;
    ctx->lo = GPR_U64(ctx, 0);
label_2890c0:
    // 0x2890c0: 0x6d4  .word       0x000006D4                   # dsllv       $zero, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2890c0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2890c4:
    // 0x2890c4: 0x0  nop
    ctx->pc = 0x2890c4u;
    // NOP
label_2890c8:
    // 0x2890c8: 0x0  nop
    ctx->pc = 0x2890c8u;
    // NOP
label_2890cc:
    // 0x2890cc: 0x0  nop
    ctx->pc = 0x2890ccu;
    // NOP
label_2890d0:
    // 0x2890d0: 0x0  nop
    ctx->pc = 0x2890d0u;
    // NOP
label_2890d4:
    // 0x2890d4: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x2890d4u;
    // CACHE instruction (ignored)
label_2890d8:
    // 0x2890d8: 0x0  nop
    ctx->pc = 0x2890d8u;
    // NOP
label_2890dc:
    // 0x2890dc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2890dcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2890e0:
    // 0x2890e0: 0x3c23d70a  .word       0x3C23D70A                   # lui         $v1, 0xD70A # 00200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2890e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_2890e4:
    // 0x2890e4: 0x3c23d70a  .word       0x3C23D70A                   # lui         $v1, 0xD70A # 00200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2890e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_2890e8:
    // 0x2890e8: 0x0  nop
    ctx->pc = 0x2890e8u;
    // NOP
label_2890ec:
    // 0x2890ec: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2890ecu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2890f0:
    // 0x2890f0: 0x3dae147b  .word       0x3DAE147B                   # lui         $t6, 0x147B # 01A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2890f0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)5243 << 16));
label_2890f4:
    // 0x2890f4: 0x3dae147b  .word       0x3DAE147B                   # lui         $t6, 0x147B # 01A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2890f4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)5243 << 16));
label_2890f8:
    // 0x2890f8: 0x0  nop
    ctx->pc = 0x2890f8u;
    // NOP
label_2890fc:
    // 0x2890fc: 0x0  nop
    ctx->pc = 0x2890fcu;
    // NOP
label_289100:
    // 0x289100: 0x3d4ccccd  .word       0x3D4CCCCD                   # lui         $t4, 0xCCCD # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x289100u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_289104:
    // 0x289104: 0x3d4ccccd  .word       0x3D4CCCCD                   # lui         $t4, 0xCCCD # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x289104u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_289108:
    // 0x289108: 0x0  nop
    ctx->pc = 0x289108u;
    // NOP
label_28910c:
    // 0x28910c: 0x0  nop
    ctx->pc = 0x28910cu;
    // NOP
label_289110:
    // 0x289110: 0x22d2b  .word       0x00022D2B                   # sltu        $a1, $zero, $v0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289110u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_289114:
    // 0x289114: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289114u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289114 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289118:
    // 0x289118: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289118u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28911c:
    // 0x28911c: 0x0  nop
    ctx->pc = 0x28911cu;
    // NOP
label_289120:
    // 0x289120: 0x22d2c  .word       0x00022D2C                   # dadd        $a1, $zero, $v0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289120u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 2); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, r); }
label_289124:
    // 0x289124: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289124u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289124 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289128:
    // 0x289128: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289128u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28912c:
    // 0x28912c: 0x0  nop
    ctx->pc = 0x28912cu;
    // NOP
label_289130:
    // 0x289130: 0x22d2d  .word       0x00022D2D                   # daddu       $a1, $zero, $v0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 2));
label_289134:
    // 0x289134: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289134u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289138:
    // 0x289138: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289138u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28913c:
    // 0x28913c: 0x0  nop
    ctx->pc = 0x28913cu;
    // NOP
label_289140:
    // 0x289140: 0x22d31  tgeu        $zero, $v0, 180
    ctx->pc = 0x289140u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_289144:
    // 0x289144: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289144u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289148:
    // 0x289148: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289148u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28914c:
    // 0x28914c: 0x0  nop
    ctx->pc = 0x28914cu;
    // NOP
label_289150:
    // 0x289150: 0x22d35  .word       0x00022D35                   # INVALID     $zero, $v0, 0x2D35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289150u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x289150 raw=0x00022D35"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289154:
    // 0x289154: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289154u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289154 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289158:
    // 0x289158: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289158u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28915c:
    // 0x28915c: 0x0  nop
    ctx->pc = 0x28915cu;
    // NOP
label_289160:
    // 0x289160: 0x22d36  tne         $zero, $v0, 180
    ctx->pc = 0x289160u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_289164:
    // 0x289164: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289164u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289164 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289168:
    // 0x289168: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289168u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28916c:
    // 0x28916c: 0x0  nop
    ctx->pc = 0x28916cu;
    // NOP
label_289170:
    // 0x289170: 0x22d37  .word       0x00022D37                   # INVALID     $zero, $v0, 0x2D37 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289170u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x289170 raw=0x00022D37"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289174:
    // 0x289174: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289174u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289178:
    // 0x289178: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289178u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28917c:
    // 0x28917c: 0x0  nop
    ctx->pc = 0x28917cu;
    // NOP
label_289180:
    // 0x289180: 0x22d3b  dsra        $a1, $v0, 20
    ctx->pc = 0x289180u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 2) >> 20);
label_289184:
    // 0x289184: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289184u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289188:
    // 0x289188: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289188u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28918c:
    // 0x28918c: 0x0  nop
    ctx->pc = 0x28918cu;
    // NOP
label_289190:
    // 0x289190: 0x22d3f  dsra32      $a1, $v0, 20
    ctx->pc = 0x289190u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 2) >> (32 + 20));
label_289194:
    // 0x289194: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289194u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289194 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289198:
    // 0x289198: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289198u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28919c:
    // 0x28919c: 0x0  nop
    ctx->pc = 0x28919cu;
    // NOP
label_2891a0:
    // 0x2891a0: 0x22d40  sll         $a1, $v0, 21
    ctx->pc = 0x2891a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 21));
label_2891a4:
    // 0x2891a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2891a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2891A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2891a8:
    // 0x2891a8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2891a8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2891ac:
    // 0x2891ac: 0x0  nop
    ctx->pc = 0x2891acu;
    // NOP
label_2891b0:
    // 0x2891b0: 0x22d41  .word       0x00022D41                   # INVALID     $zero, $v0, 0x2D41 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2891b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2891B0 raw=0x00022D41"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2891b4:
    // 0x2891b4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2891b4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2891b8:
    // 0x2891b8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2891b8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2891bc:
    // 0x2891bc: 0x0  nop
    ctx->pc = 0x2891bcu;
    // NOP
label_2891c0:
    // 0x2891c0: 0x22d45  .word       0x00022D45                   # INVALID     $zero, $v0, 0x2D45 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2891c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2891C0 raw=0x00022D45"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2891c4:
    // 0x2891c4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2891c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2891c8:
    // 0x2891c8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2891c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2891cc:
    // 0x2891cc: 0x0  nop
    ctx->pc = 0x2891ccu;
    // NOP
label_2891d0:
    // 0x2891d0: 0x22d49  .word       0x00022D49                   # jalr        $a1, $zero # 00020540 <InstrIdType: CPU_SPECIAL>
label_2891d4:
    if (ctx->pc == 0x2891D4u) {
        ctx->pc = 0x2891D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2891D0u;
        // 0x2891d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2891D4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2891D8u;
        goto label_2891d8;
    }
    ctx->pc = 0x2891D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 5, 0x2891D8u);
        ctx->pc = 0x2891D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2891D0u;
        // 0x2891d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2891D4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2891D0u, 0x2891D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2891D8u;
label_2891d8:
    // 0x2891d8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2891d8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2891dc:
    // 0x2891dc: 0x0  nop
    ctx->pc = 0x2891dcu;
    // NOP
label_2891e0:
    // 0x2891e0: 0x22d4a  .word       0x00022D4A                   # movz        $a1, $zero, $v0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2891e0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_2891e4:
    // 0x2891e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2891e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2891E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2891e8:
    // 0x2891e8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2891e8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2891ec:
    // 0x2891ec: 0x0  nop
    ctx->pc = 0x2891ecu;
    // NOP
label_2891f0:
    // 0x2891f0: 0x22d4b  .word       0x00022D4B                   # movn        $a1, $zero, $v0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2891f0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_2891f4:
    // 0x2891f4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2891f4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2891f8:
    // 0x2891f8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2891f8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2891fc:
    // 0x2891fc: 0x0  nop
    ctx->pc = 0x2891fcu;
    // NOP
label_289200:
    // 0x289200: 0x22d4f  .word       0x00022D4F                   # sync.p # 00022800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289200u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_289204:
    // 0x289204: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289204u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289208:
    // 0x289208: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289208u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28920c:
    // 0x28920c: 0x0  nop
    ctx->pc = 0x28920cu;
    // NOP
label_289210:
    // 0x289210: 0x22d53  .word       0x00022D53                   # mtlo        $zero # 00022D40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289210u;
    ctx->lo = GPR_U64(ctx, 0);
label_289214:
    // 0x289214: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289214u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289214 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289218:
    // 0x289218: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289218u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28921c:
    // 0x28921c: 0x0  nop
    ctx->pc = 0x28921cu;
    // NOP
label_289220:
    // 0x289220: 0x22d54  .word       0x00022D54                   # dsllv       $a1, $v0, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289220u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (GPR_U32(ctx, 0) & 0x3F));
label_289224:
    // 0x289224: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289224u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289224 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289228:
    // 0x289228: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289228u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28922c:
    // 0x28922c: 0x0  nop
    ctx->pc = 0x28922cu;
    // NOP
label_289230:
    // 0x289230: 0x22d55  .word       0x00022D55                   # INVALID     $zero, $v0, 0x2D55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289230u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x289230 raw=0x00022D55"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289234:
    // 0x289234: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289234u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289238:
    // 0x289238: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289238u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28923c:
    // 0x28923c: 0x0  nop
    ctx->pc = 0x28923cu;
    // NOP
label_289240:
    // 0x289240: 0x22d59  .word       0x00022D59                   # multu       $zero, $v0 # 00002D40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289240u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_289244:
    // 0x289244: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289244u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289248:
    // 0x289248: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289248u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28924c:
    // 0x28924c: 0x0  nop
    ctx->pc = 0x28924cu;
    // NOP
label_289250:
    // 0x289250: 0x22d5d  .word       0x00022D5D                   # dmultu      $zero, $v0 # 00002D40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289250u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x289250 raw=0x00022D5D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289254:
    // 0x289254: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289254u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289254 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289258:
    // 0x289258: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289258u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28925c:
    // 0x28925c: 0x0  nop
    ctx->pc = 0x28925cu;
    // NOP
label_289260:
    // 0x289260: 0x22d5e  .word       0x00022D5E                   # ddiv        $a1, $zero, $v0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289260u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x289260 raw=0x00022D5E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289264:
    // 0x289264: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289264u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289264 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289268:
    // 0x289268: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289268u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28926c:
    // 0x28926c: 0x0  nop
    ctx->pc = 0x28926cu;
    // NOP
label_289270:
    // 0x289270: 0x22d5f  .word       0x00022D5F                   # ddivu       $a1, $zero, $v0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289270u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x289270 raw=0x00022D5F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289274:
    // 0x289274: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289274u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289278:
    // 0x289278: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289278u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28927c:
    // 0x28927c: 0x0  nop
    ctx->pc = 0x28927cu;
    // NOP
label_289280:
    // 0x289280: 0x22d63  .word       0x00022D63                   # negu        $a1, $v0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289280u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_289284:
    // 0x289284: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289284u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289288:
    // 0x289288: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289288u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28928c:
    // 0x28928c: 0x0  nop
    ctx->pc = 0x28928cu;
    // NOP
label_289290:
    // 0x289290: 0x22d67  .word       0x00022D67                   # nor         $a1, $zero, $v0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289290u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_289294:
    // 0x289294: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289294u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289294 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289298:
    // 0x289298: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289298u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28929c:
    // 0x28929c: 0x0  nop
    ctx->pc = 0x28929cu;
    // NOP
label_2892a0:
    // 0x2892a0: 0x22d68  .word       0x00022D68                   # mfsa        $a1 # 00020540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2892a0u;
    SET_GPR_U32(ctx, 5, ctx->sa);
label_2892a4:
    // 0x2892a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2892a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2892A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2892a8:
    // 0x2892a8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2892a8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2892ac:
    // 0x2892ac: 0x0  nop
    ctx->pc = 0x2892acu;
    // NOP
label_2892b0:
    // 0x2892b0: 0x22d69  .word       0x00022D69                   # mtsa        $zero # 00022D40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2892b0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2892b4:
    // 0x2892b4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2892b4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2892b8:
    // 0x2892b8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2892b8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2892bc:
    // 0x2892bc: 0x0  nop
    ctx->pc = 0x2892bcu;
    // NOP
label_2892c0:
    // 0x2892c0: 0x22d6d  .word       0x00022D6D                   # daddu       $a1, $zero, $v0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2892c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 2));
label_2892c4:
    // 0x2892c4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2892c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2892c8:
    // 0x2892c8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2892c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2892cc:
    // 0x2892cc: 0x0  nop
    ctx->pc = 0x2892ccu;
    // NOP
label_2892d0:
    // 0x2892d0: 0x22d71  tgeu        $zero, $v0, 181
    ctx->pc = 0x2892d0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_2892d4:
    // 0x2892d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2892d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2892D4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2892d8:
    // 0x2892d8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2892d8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2892dc:
    // 0x2892dc: 0x0  nop
    ctx->pc = 0x2892dcu;
    // NOP
label_2892e0:
    // 0x2892e0: 0x22d72  tlt         $zero, $v0, 181
    ctx->pc = 0x2892e0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_2892e4:
    // 0x2892e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2892e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2892E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2892e8:
    // 0x2892e8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2892e8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2892ec:
    // 0x2892ec: 0x0  nop
    ctx->pc = 0x2892ecu;
    // NOP
label_2892f0:
    // 0x2892f0: 0x22d73  tltu        $zero, $v0, 181
    ctx->pc = 0x2892f0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_2892f4:
    // 0x2892f4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2892f4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2892f8:
    // 0x2892f8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2892f8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2892fc:
    // 0x2892fc: 0x0  nop
    ctx->pc = 0x2892fcu;
    // NOP
label_289300:
    // 0x289300: 0x22d77  .word       0x00022D77                   # INVALID     $zero, $v0, 0x2D77 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289300u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x289300 raw=0x00022D77"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289304:
    // 0x289304: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289304u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289308:
    // 0x289308: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289308u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28930c:
    // 0x28930c: 0x0  nop
    ctx->pc = 0x28930cu;
    // NOP
label_289310:
    // 0x289310: 0x22d7b  dsra        $a1, $v0, 21
    ctx->pc = 0x289310u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 2) >> 21);
label_289314:
    // 0x289314: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289314u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289314 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289318:
    // 0x289318: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289318u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28931c:
    // 0x28931c: 0x0  nop
    ctx->pc = 0x28931cu;
    // NOP
label_289320:
    // 0x289320: 0x22d7c  dsll32      $a1, $v0, 21
    ctx->pc = 0x289320u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 21));
label_289324:
    // 0x289324: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289324u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289324 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289328:
    // 0x289328: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289328u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28932c:
    // 0x28932c: 0x0  nop
    ctx->pc = 0x28932cu;
    // NOP
label_289330:
    // 0x289330: 0x22d7d  .word       0x00022D7D                   # INVALID     $zero, $v0, 0x2D7D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289330u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x289330 raw=0x00022D7D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289334:
    // 0x289334: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289334u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289338:
    // 0x289338: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289338u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28933c:
    // 0x28933c: 0x0  nop
    ctx->pc = 0x28933cu;
    // NOP
label_289340:
    // 0x289340: 0x22d81  .word       0x00022D81                   # INVALID     $zero, $v0, 0x2D81 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289340u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289340 raw=0x00022D81"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289344:
    // 0x289344: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289344u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289348:
    // 0x289348: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289348u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28934c:
    // 0x28934c: 0x0  nop
    ctx->pc = 0x28934cu;
    // NOP
label_289350:
    // 0x289350: 0x22d85  .word       0x00022D85                   # INVALID     $zero, $v0, 0x2D85 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289350u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x289350 raw=0x00022D85"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289354:
    // 0x289354: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289354u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289354 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289358:
    // 0x289358: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289358u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28935c:
    // 0x28935c: 0x0  nop
    ctx->pc = 0x28935cu;
    // NOP
label_289360:
    // 0x289360: 0x22d86  .word       0x00022D86                   # srlv        $a1, $v0, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289360u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_289364:
    // 0x289364: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289364u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289364 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289368:
    // 0x289368: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289368u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28936c:
    // 0x28936c: 0x0  nop
    ctx->pc = 0x28936cu;
    // NOP
label_289370:
    // 0x289370: 0x22d87  .word       0x00022D87                   # srav        $a1, $v0, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289370u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_289374:
    // 0x289374: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289374u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289378:
    // 0x289378: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289378u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28937c:
    // 0x28937c: 0x0  nop
    ctx->pc = 0x28937cu;
    // NOP
label_289380:
    // 0x289380: 0x22d8b  .word       0x00022D8B                   # movn        $a1, $zero, $v0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289380u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_289384:
    // 0x289384: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289384u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289388:
    // 0x289388: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289388u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28938c:
    // 0x28938c: 0x0  nop
    ctx->pc = 0x28938cu;
    // NOP
label_289390:
    // 0x289390: 0x22d8f  .word       0x00022D8F                   # sync.p # 00022800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289390u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_289394:
    // 0x289394: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289394u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289394 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289398:
    // 0x289398: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289398u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28939c:
    // 0x28939c: 0x0  nop
    ctx->pc = 0x28939cu;
    // NOP
label_2893a0:
    // 0x2893a0: 0x22d90  .word       0x00022D90                   # mfhi        $a1 # 00020580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2893a0u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_2893a4:
    // 0x2893a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2893a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2893A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2893a8:
    // 0x2893a8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2893a8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2893ac:
    // 0x2893ac: 0x0  nop
    ctx->pc = 0x2893acu;
    // NOP
label_2893b0:
    // 0x2893b0: 0x22d91  .word       0x00022D91                   # mthi        $zero # 00022D80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2893b0u;
    ctx->hi = GPR_U64(ctx, 0);
label_2893b4:
    // 0x2893b4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2893b4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2893b8:
    // 0x2893b8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2893b8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2893bc:
    // 0x2893bc: 0x0  nop
    ctx->pc = 0x2893bcu;
    // NOP
label_2893c0:
    // 0x2893c0: 0x22d95  .word       0x00022D95                   # INVALID     $zero, $v0, 0x2D95 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2893c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2893C0 raw=0x00022D95"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2893c4:
    // 0x2893c4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2893c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2893c8:
    // 0x2893c8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2893c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2893cc:
    // 0x2893cc: 0x0  nop
    ctx->pc = 0x2893ccu;
    // NOP
label_2893d0:
    // 0x2893d0: 0x22d99  .word       0x00022D99                   # multu       $zero, $v0 # 00002D80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2893d0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_2893d4:
    // 0x2893d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2893d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2893D4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2893d8:
    // 0x2893d8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2893d8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2893dc:
    // 0x2893dc: 0x0  nop
    ctx->pc = 0x2893dcu;
    // NOP
label_2893e0:
    // 0x2893e0: 0x22d9a  .word       0x00022D9A                   # div         $a1, $zero, $v0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2893e0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2893e4:
    // 0x2893e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2893e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2893E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2893e8:
    // 0x2893e8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2893e8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2893ec:
    // 0x2893ec: 0x0  nop
    ctx->pc = 0x2893ecu;
    // NOP
label_2893f0:
    // 0x2893f0: 0x22d9b  .word       0x00022D9B                   # divu        $a1, $zero, $v0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2893f0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2893f4:
    // 0x2893f4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2893f4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2893f8:
    // 0x2893f8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2893f8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2893fc:
    // 0x2893fc: 0x0  nop
    ctx->pc = 0x2893fcu;
    // NOP
label_289400:
    // 0x289400: 0x22d9f  .word       0x00022D9F                   # ddivu       $a1, $zero, $v0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289400u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x289400 raw=0x00022D9F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289404:
    // 0x289404: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289404u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289408:
    // 0x289408: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289408u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28940c:
    // 0x28940c: 0x0  nop
    ctx->pc = 0x28940cu;
    // NOP
label_289410:
    // 0x289410: 0x22da3  .word       0x00022DA3                   # negu        $a1, $v0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289410u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_289414:
    // 0x289414: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289414u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289414 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289418:
    // 0x289418: 0x680  sll         $zero, $zero, 26
    ctx->pc = 0x289418u;
    
label_28941c:
    // 0x28941c: 0x0  nop
    ctx->pc = 0x28941cu;
    // NOP
label_289420:
    // 0x289420: 0x22da4  .word       0x00022DA4                   # and         $a1, $zero, $v0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289420u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & GPR_U64(ctx, 2));
label_289424:
    // 0x289424: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289424u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289424 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289428:
    // 0x289428: 0x680  sll         $zero, $zero, 26
    ctx->pc = 0x289428u;
    
label_28942c:
    // 0x28942c: 0x0  nop
    ctx->pc = 0x28942cu;
    // NOP
label_289430:
    // 0x289430: 0x22da5  .word       0x00022DA5                   # or          $a1, $zero, $v0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289430u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | GPR_U64(ctx, 2));
label_289434:
    // 0x289434: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289434u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289438:
    // 0x289438: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289438u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28943c:
    // 0x28943c: 0x0  nop
    ctx->pc = 0x28943cu;
    // NOP
label_289440:
    // 0x289440: 0x22da9  .word       0x00022DA9                   # mtsa        $zero # 00022D80 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x289440u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_289444:
    // 0x289444: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289444u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289448:
    // 0x289448: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289448u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28944c:
    // 0x28944c: 0x0  nop
    ctx->pc = 0x28944cu;
    // NOP
label_289450:
    // 0x289450: 0x22dad  .word       0x00022DAD                   # daddu       $a1, $zero, $v0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 2));
label_289454:
    // 0x289454: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289454u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289454 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289458:
    // 0x289458: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289458u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28945c:
    // 0x28945c: 0x0  nop
    ctx->pc = 0x28945cu;
    // NOP
label_289460:
    // 0x289460: 0x22dae  .word       0x00022DAE                   # dsub        $a1, $zero, $v0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289460u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 2); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, r); }
label_289464:
    // 0x289464: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289464u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289464 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289468:
    // 0x289468: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289468u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28946c:
    // 0x28946c: 0x0  nop
    ctx->pc = 0x28946cu;
    // NOP
label_289470:
    // 0x289470: 0x22daf  .word       0x00022DAF                   # dsubu       $a1, $zero, $v0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289470u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
label_289474:
    // 0x289474: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289474u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289478:
    // 0x289478: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289478u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28947c:
    // 0x28947c: 0x0  nop
    ctx->pc = 0x28947cu;
    // NOP
label_289480:
    // 0x289480: 0x22db3  tltu        $zero, $v0, 182
    ctx->pc = 0x289480u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_289484:
    // 0x289484: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289484u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289488:
    // 0x289488: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289488u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28948c:
    // 0x28948c: 0x0  nop
    ctx->pc = 0x28948cu;
    // NOP
label_289490:
    // 0x289490: 0x22db7  .word       0x00022DB7                   # INVALID     $zero, $v0, 0x2DB7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289490u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x289490 raw=0x00022DB7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289494:
    // 0x289494: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289494u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289494 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289498:
    // 0x289498: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289498u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28949c:
    // 0x28949c: 0x0  nop
    ctx->pc = 0x28949cu;
    // NOP
label_2894a0:
    // 0x2894a0: 0x22db8  dsll        $a1, $v0, 22
    ctx->pc = 0x2894a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 22);
label_2894a4:
    // 0x2894a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2894a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2894A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2894a8:
    // 0x2894a8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2894a8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2894ac:
    // 0x2894ac: 0x0  nop
    ctx->pc = 0x2894acu;
    // NOP
label_2894b0:
    // 0x2894b0: 0x22db9  .word       0x00022DB9                   # INVALID     $zero, $v0, 0x2DB9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2894b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2894B0 raw=0x00022DB9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2894b4:
    // 0x2894b4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2894b4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2894b8:
    // 0x2894b8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2894b8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2894bc:
    // 0x2894bc: 0x0  nop
    ctx->pc = 0x2894bcu;
    // NOP
label_2894c0:
    // 0x2894c0: 0x22dbd  .word       0x00022DBD                   # INVALID     $zero, $v0, 0x2DBD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2894c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2894C0 raw=0x00022DBD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2894c4:
    // 0x2894c4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2894c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2894c8:
    // 0x2894c8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2894c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2894cc:
    // 0x2894cc: 0x0  nop
    ctx->pc = 0x2894ccu;
    // NOP
label_2894d0:
    // 0x2894d0: 0x22dc1  .word       0x00022DC1                   # INVALID     $zero, $v0, 0x2DC1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2894d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2894D0 raw=0x00022DC1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2894d4:
    // 0x2894d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2894d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2894D4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2894d8:
    // 0x2894d8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2894d8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2894dc:
    // 0x2894dc: 0x0  nop
    ctx->pc = 0x2894dcu;
    // NOP
label_2894e0:
    // 0x2894e0: 0x22dc2  srl         $a1, $v0, 23
    ctx->pc = 0x2894e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 23));
label_2894e4:
    // 0x2894e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2894e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2894E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2894e8:
    // 0x2894e8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2894e8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2894ec:
    // 0x2894ec: 0x0  nop
    ctx->pc = 0x2894ecu;
    // NOP
label_2894f0:
    // 0x2894f0: 0x22dc3  sra         $a1, $v0, 23
    ctx->pc = 0x2894f0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 23));
label_2894f4:
    // 0x2894f4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2894f4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2894f8:
    // 0x2894f8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2894f8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2894fc:
    // 0x2894fc: 0x0  nop
    ctx->pc = 0x2894fcu;
    // NOP
label_289500:
    // 0x289500: 0x22dc7  .word       0x00022DC7                   # srav        $a1, $v0, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289500u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_289504:
    // 0x289504: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289504u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289508:
    // 0x289508: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289508u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28950c:
    // 0x28950c: 0x0  nop
    ctx->pc = 0x28950cu;
    // NOP
label_289510:
    // 0x289510: 0x22dcb  .word       0x00022DCB                   # movn        $a1, $zero, $v0 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289510u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_289514:
    // 0x289514: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289514u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289514 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
    ctx->pc = 0x289518u;
    return;
}
