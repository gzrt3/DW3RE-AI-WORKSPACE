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


void FUN_0019b618_part483(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x286bb8u: goto label_286bb8;
        case 0x286bbcu: goto label_286bbc;
        case 0x286bc0u: goto label_286bc0;
        case 0x286bc4u: goto label_286bc4;
        case 0x286bc8u: goto label_286bc8;
        case 0x286bccu: goto label_286bcc;
        case 0x286bd0u: goto label_286bd0;
        case 0x286bd4u: goto label_286bd4;
        case 0x286bd8u: goto label_286bd8;
        case 0x286bdcu: goto label_286bdc;
        case 0x286be0u: goto label_286be0;
        case 0x286be4u: goto label_286be4;
        case 0x286be8u: goto label_286be8;
        case 0x286becu: goto label_286bec;
        case 0x286bf0u: goto label_286bf0;
        case 0x286bf4u: goto label_286bf4;
        case 0x286bf8u: goto label_286bf8;
        case 0x286bfcu: goto label_286bfc;
        case 0x286c00u: goto label_286c00;
        case 0x286c04u: goto label_286c04;
        case 0x286c08u: goto label_286c08;
        case 0x286c0cu: goto label_286c0c;
        case 0x286c10u: goto label_286c10;
        case 0x286c14u: goto label_286c14;
        case 0x286c18u: goto label_286c18;
        case 0x286c1cu: goto label_286c1c;
        case 0x286c20u: goto label_286c20;
        case 0x286c24u: goto label_286c24;
        case 0x286c28u: goto label_286c28;
        case 0x286c2cu: goto label_286c2c;
        case 0x286c30u: goto label_286c30;
        case 0x286c34u: goto label_286c34;
        case 0x286c38u: goto label_286c38;
        case 0x286c3cu: goto label_286c3c;
        case 0x286c40u: goto label_286c40;
        case 0x286c44u: goto label_286c44;
        case 0x286c48u: goto label_286c48;
        case 0x286c4cu: goto label_286c4c;
        case 0x286c50u: goto label_286c50;
        case 0x286c54u: goto label_286c54;
        case 0x286c58u: goto label_286c58;
        case 0x286c5cu: goto label_286c5c;
        case 0x286c60u: goto label_286c60;
        case 0x286c64u: goto label_286c64;
        case 0x286c68u: goto label_286c68;
        case 0x286c6cu: goto label_286c6c;
        case 0x286c70u: goto label_286c70;
        case 0x286c74u: goto label_286c74;
        case 0x286c78u: goto label_286c78;
        case 0x286c7cu: goto label_286c7c;
        case 0x286c80u: goto label_286c80;
        case 0x286c84u: goto label_286c84;
        case 0x286c88u: goto label_286c88;
        case 0x286c8cu: goto label_286c8c;
        case 0x286c90u: goto label_286c90;
        case 0x286c94u: goto label_286c94;
        case 0x286c98u: goto label_286c98;
        case 0x286c9cu: goto label_286c9c;
        case 0x286ca0u: goto label_286ca0;
        case 0x286ca4u: goto label_286ca4;
        case 0x286ca8u: goto label_286ca8;
        case 0x286cacu: goto label_286cac;
        case 0x286cb0u: goto label_286cb0;
        case 0x286cb4u: goto label_286cb4;
        case 0x286cb8u: goto label_286cb8;
        case 0x286cbcu: goto label_286cbc;
        case 0x286cc0u: goto label_286cc0;
        case 0x286cc4u: goto label_286cc4;
        case 0x286cc8u: goto label_286cc8;
        case 0x286cccu: goto label_286ccc;
        case 0x286cd0u: goto label_286cd0;
        case 0x286cd4u: goto label_286cd4;
        case 0x286cd8u: goto label_286cd8;
        case 0x286cdcu: goto label_286cdc;
        case 0x286ce0u: goto label_286ce0;
        case 0x286ce4u: goto label_286ce4;
        case 0x286ce8u: goto label_286ce8;
        case 0x286cecu: goto label_286cec;
        case 0x286cf0u: goto label_286cf0;
        case 0x286cf4u: goto label_286cf4;
        case 0x286cf8u: goto label_286cf8;
        case 0x286cfcu: goto label_286cfc;
        case 0x286d00u: goto label_286d00;
        case 0x286d04u: goto label_286d04;
        case 0x286d08u: goto label_286d08;
        case 0x286d0cu: goto label_286d0c;
        case 0x286d10u: goto label_286d10;
        case 0x286d14u: goto label_286d14;
        case 0x286d18u: goto label_286d18;
        case 0x286d1cu: goto label_286d1c;
        case 0x286d20u: goto label_286d20;
        case 0x286d24u: goto label_286d24;
        case 0x286d28u: goto label_286d28;
        case 0x286d2cu: goto label_286d2c;
        case 0x286d30u: goto label_286d30;
        case 0x286d34u: goto label_286d34;
        case 0x286d38u: goto label_286d38;
        case 0x286d3cu: goto label_286d3c;
        case 0x286d40u: goto label_286d40;
        case 0x286d44u: goto label_286d44;
        case 0x286d48u: goto label_286d48;
        case 0x286d4cu: goto label_286d4c;
        case 0x286d50u: goto label_286d50;
        case 0x286d54u: goto label_286d54;
        case 0x286d58u: goto label_286d58;
        case 0x286d5cu: goto label_286d5c;
        case 0x286d60u: goto label_286d60;
        case 0x286d64u: goto label_286d64;
        case 0x286d68u: goto label_286d68;
        case 0x286d6cu: goto label_286d6c;
        case 0x286d70u: goto label_286d70;
        case 0x286d74u: goto label_286d74;
        case 0x286d78u: goto label_286d78;
        case 0x286d7cu: goto label_286d7c;
        case 0x286d80u: goto label_286d80;
        case 0x286d84u: goto label_286d84;
        case 0x286d88u: goto label_286d88;
        case 0x286d8cu: goto label_286d8c;
        case 0x286d90u: goto label_286d90;
        case 0x286d94u: goto label_286d94;
        case 0x286d98u: goto label_286d98;
        case 0x286d9cu: goto label_286d9c;
        case 0x286da0u: goto label_286da0;
        case 0x286da4u: goto label_286da4;
        case 0x286da8u: goto label_286da8;
        case 0x286dacu: goto label_286dac;
        case 0x286db0u: goto label_286db0;
        case 0x286db4u: goto label_286db4;
        case 0x286db8u: goto label_286db8;
        case 0x286dbcu: goto label_286dbc;
        case 0x286dc0u: goto label_286dc0;
        case 0x286dc4u: goto label_286dc4;
        case 0x286dc8u: goto label_286dc8;
        case 0x286dccu: goto label_286dcc;
        case 0x286dd0u: goto label_286dd0;
        case 0x286dd4u: goto label_286dd4;
        case 0x286dd8u: goto label_286dd8;
        case 0x286ddcu: goto label_286ddc;
        case 0x286de0u: goto label_286de0;
        case 0x286de4u: goto label_286de4;
        case 0x286de8u: goto label_286de8;
        case 0x286decu: goto label_286dec;
        case 0x286df0u: goto label_286df0;
        case 0x286df4u: goto label_286df4;
        case 0x286df8u: goto label_286df8;
        case 0x286dfcu: goto label_286dfc;
        case 0x286e00u: goto label_286e00;
        case 0x286e04u: goto label_286e04;
        case 0x286e08u: goto label_286e08;
        case 0x286e0cu: goto label_286e0c;
        case 0x286e10u: goto label_286e10;
        case 0x286e14u: goto label_286e14;
        case 0x286e18u: goto label_286e18;
        case 0x286e1cu: goto label_286e1c;
        case 0x286e20u: goto label_286e20;
        case 0x286e24u: goto label_286e24;
        case 0x286e28u: goto label_286e28;
        case 0x286e2cu: goto label_286e2c;
        case 0x286e30u: goto label_286e30;
        case 0x286e34u: goto label_286e34;
        case 0x286e38u: goto label_286e38;
        case 0x286e3cu: goto label_286e3c;
        case 0x286e40u: goto label_286e40;
        case 0x286e44u: goto label_286e44;
        case 0x286e48u: goto label_286e48;
        case 0x286e4cu: goto label_286e4c;
        case 0x286e50u: goto label_286e50;
        case 0x286e54u: goto label_286e54;
        case 0x286e58u: goto label_286e58;
        case 0x286e5cu: goto label_286e5c;
        case 0x286e60u: goto label_286e60;
        case 0x286e64u: goto label_286e64;
        case 0x286e68u: goto label_286e68;
        case 0x286e6cu: goto label_286e6c;
        case 0x286e70u: goto label_286e70;
        case 0x286e74u: goto label_286e74;
        case 0x286e78u: goto label_286e78;
        case 0x286e7cu: goto label_286e7c;
        case 0x286e80u: goto label_286e80;
        case 0x286e84u: goto label_286e84;
        case 0x286e88u: goto label_286e88;
        case 0x286e8cu: goto label_286e8c;
        case 0x286e90u: goto label_286e90;
        case 0x286e94u: goto label_286e94;
        case 0x286e98u: goto label_286e98;
        case 0x286e9cu: goto label_286e9c;
        case 0x286ea0u: goto label_286ea0;
        case 0x286ea4u: goto label_286ea4;
        case 0x286ea8u: goto label_286ea8;
        case 0x286eacu: goto label_286eac;
        case 0x286eb0u: goto label_286eb0;
        case 0x286eb4u: goto label_286eb4;
        case 0x286eb8u: goto label_286eb8;
        case 0x286ebcu: goto label_286ebc;
        case 0x286ec0u: goto label_286ec0;
        case 0x286ec4u: goto label_286ec4;
        case 0x286ec8u: goto label_286ec8;
        case 0x286eccu: goto label_286ecc;
        case 0x286ed0u: goto label_286ed0;
        case 0x286ed4u: goto label_286ed4;
        case 0x286ed8u: goto label_286ed8;
        case 0x286edcu: goto label_286edc;
        case 0x286ee0u: goto label_286ee0;
        case 0x286ee4u: goto label_286ee4;
        case 0x286ee8u: goto label_286ee8;
        case 0x286eecu: goto label_286eec;
        case 0x286ef0u: goto label_286ef0;
        case 0x286ef4u: goto label_286ef4;
        case 0x286ef8u: goto label_286ef8;
        case 0x286efcu: goto label_286efc;
        case 0x286f00u: goto label_286f00;
        case 0x286f04u: goto label_286f04;
        case 0x286f08u: goto label_286f08;
        case 0x286f0cu: goto label_286f0c;
        case 0x286f10u: goto label_286f10;
        case 0x286f14u: goto label_286f14;
        case 0x286f18u: goto label_286f18;
        case 0x286f1cu: goto label_286f1c;
        case 0x286f20u: goto label_286f20;
        case 0x286f24u: goto label_286f24;
        case 0x286f28u: goto label_286f28;
        case 0x286f2cu: goto label_286f2c;
        case 0x286f30u: goto label_286f30;
        case 0x286f34u: goto label_286f34;
        case 0x286f38u: goto label_286f38;
        case 0x286f3cu: goto label_286f3c;
        case 0x286f40u: goto label_286f40;
        case 0x286f44u: goto label_286f44;
        case 0x286f48u: goto label_286f48;
        case 0x286f4cu: goto label_286f4c;
        case 0x286f50u: goto label_286f50;
        case 0x286f54u: goto label_286f54;
        case 0x286f58u: goto label_286f58;
        case 0x286f5cu: goto label_286f5c;
        case 0x286f60u: goto label_286f60;
        case 0x286f64u: goto label_286f64;
        case 0x286f68u: goto label_286f68;
        case 0x286f6cu: goto label_286f6c;
        case 0x286f70u: goto label_286f70;
        case 0x286f74u: goto label_286f74;
        case 0x286f78u: goto label_286f78;
        case 0x286f7cu: goto label_286f7c;
        case 0x286f80u: goto label_286f80;
        case 0x286f84u: goto label_286f84;
        case 0x286f88u: goto label_286f88;
        case 0x286f8cu: goto label_286f8c;
        case 0x286f90u: goto label_286f90;
        case 0x286f94u: goto label_286f94;
        case 0x286f98u: goto label_286f98;
        case 0x286f9cu: goto label_286f9c;
        case 0x286fa0u: goto label_286fa0;
        case 0x286fa4u: goto label_286fa4;
        case 0x286fa8u: goto label_286fa8;
        case 0x286facu: goto label_286fac;
        case 0x286fb0u: goto label_286fb0;
        case 0x286fb4u: goto label_286fb4;
        case 0x286fb8u: goto label_286fb8;
        case 0x286fbcu: goto label_286fbc;
        case 0x286fc0u: goto label_286fc0;
        case 0x286fc4u: goto label_286fc4;
        case 0x286fc8u: goto label_286fc8;
        case 0x286fccu: goto label_286fcc;
        case 0x286fd0u: goto label_286fd0;
        case 0x286fd4u: goto label_286fd4;
        case 0x286fd8u: goto label_286fd8;
        case 0x286fdcu: goto label_286fdc;
        case 0x286fe0u: goto label_286fe0;
        case 0x286fe4u: goto label_286fe4;
        case 0x286fe8u: goto label_286fe8;
        case 0x286fecu: goto label_286fec;
        case 0x286ff0u: goto label_286ff0;
        case 0x286ff4u: goto label_286ff4;
        case 0x286ff8u: goto label_286ff8;
        case 0x286ffcu: goto label_286ffc;
        case 0x287000u: goto label_287000;
        case 0x287004u: goto label_287004;
        case 0x287008u: goto label_287008;
        case 0x28700cu: goto label_28700c;
        case 0x287010u: goto label_287010;
        case 0x287014u: goto label_287014;
        case 0x287018u: goto label_287018;
        case 0x28701cu: goto label_28701c;
        case 0x287020u: goto label_287020;
        case 0x287024u: goto label_287024;
        case 0x287028u: goto label_287028;
        case 0x28702cu: goto label_28702c;
        case 0x287030u: goto label_287030;
        case 0x287034u: goto label_287034;
        case 0x287038u: goto label_287038;
        case 0x28703cu: goto label_28703c;
        case 0x287040u: goto label_287040;
        case 0x287044u: goto label_287044;
        case 0x287048u: goto label_287048;
        case 0x28704cu: goto label_28704c;
        case 0x287050u: goto label_287050;
        case 0x287054u: goto label_287054;
        case 0x287058u: goto label_287058;
        case 0x28705cu: goto label_28705c;
        case 0x287060u: goto label_287060;
        case 0x287064u: goto label_287064;
        case 0x287068u: goto label_287068;
        case 0x28706cu: goto label_28706c;
        case 0x287070u: goto label_287070;
        case 0x287074u: goto label_287074;
        case 0x287078u: goto label_287078;
        case 0x28707cu: goto label_28707c;
        case 0x287080u: goto label_287080;
        case 0x287084u: goto label_287084;
        case 0x287088u: goto label_287088;
        case 0x28708cu: goto label_28708c;
        case 0x287090u: goto label_287090;
        case 0x287094u: goto label_287094;
        case 0x287098u: goto label_287098;
        case 0x28709cu: goto label_28709c;
        case 0x2870a0u: goto label_2870a0;
        case 0x2870a4u: goto label_2870a4;
        case 0x2870a8u: goto label_2870a8;
        case 0x2870acu: goto label_2870ac;
        case 0x2870b0u: goto label_2870b0;
        case 0x2870b4u: goto label_2870b4;
        case 0x2870b8u: goto label_2870b8;
        case 0x2870bcu: goto label_2870bc;
        case 0x2870c0u: goto label_2870c0;
        case 0x2870c4u: goto label_2870c4;
        case 0x2870c8u: goto label_2870c8;
        case 0x2870ccu: goto label_2870cc;
        case 0x2870d0u: goto label_2870d0;
        case 0x2870d4u: goto label_2870d4;
        case 0x2870d8u: goto label_2870d8;
        case 0x2870dcu: goto label_2870dc;
        case 0x2870e0u: goto label_2870e0;
        case 0x2870e4u: goto label_2870e4;
        case 0x2870e8u: goto label_2870e8;
        case 0x2870ecu: goto label_2870ec;
        case 0x2870f0u: goto label_2870f0;
        case 0x2870f4u: goto label_2870f4;
        case 0x2870f8u: goto label_2870f8;
        case 0x2870fcu: goto label_2870fc;
        case 0x287100u: goto label_287100;
        case 0x287104u: goto label_287104;
        case 0x287108u: goto label_287108;
        case 0x28710cu: goto label_28710c;
        case 0x287110u: goto label_287110;
        case 0x287114u: goto label_287114;
        case 0x287118u: goto label_287118;
        case 0x28711cu: goto label_28711c;
        case 0x287120u: goto label_287120;
        case 0x287124u: goto label_287124;
        case 0x287128u: goto label_287128;
        case 0x28712cu: goto label_28712c;
        case 0x287130u: goto label_287130;
        case 0x287134u: goto label_287134;
        case 0x287138u: goto label_287138;
        case 0x28713cu: goto label_28713c;
        case 0x287140u: goto label_287140;
        case 0x287144u: goto label_287144;
        case 0x287148u: goto label_287148;
        case 0x28714cu: goto label_28714c;
        case 0x287150u: goto label_287150;
        case 0x287154u: goto label_287154;
        case 0x287158u: goto label_287158;
        case 0x28715cu: goto label_28715c;
        case 0x287160u: goto label_287160;
        case 0x287164u: goto label_287164;
        case 0x287168u: goto label_287168;
        case 0x28716cu: goto label_28716c;
        case 0x287170u: goto label_287170;
        case 0x287174u: goto label_287174;
        case 0x287178u: goto label_287178;
        case 0x28717cu: goto label_28717c;
        case 0x287180u: goto label_287180;
        case 0x287184u: goto label_287184;
        case 0x287188u: goto label_287188;
        case 0x28718cu: goto label_28718c;
        case 0x287190u: goto label_287190;
        case 0x287194u: goto label_287194;
        case 0x287198u: goto label_287198;
        case 0x28719cu: goto label_28719c;
        case 0x2871a0u: goto label_2871a0;
        case 0x2871a4u: goto label_2871a4;
        case 0x2871a8u: goto label_2871a8;
        case 0x2871acu: goto label_2871ac;
        case 0x2871b0u: goto label_2871b0;
        case 0x2871b4u: goto label_2871b4;
        case 0x2871b8u: goto label_2871b8;
        case 0x2871bcu: goto label_2871bc;
        case 0x2871c0u: goto label_2871c0;
        case 0x2871c4u: goto label_2871c4;
        case 0x2871c8u: goto label_2871c8;
        case 0x2871ccu: goto label_2871cc;
        case 0x2871d0u: goto label_2871d0;
        case 0x2871d4u: goto label_2871d4;
        case 0x2871d8u: goto label_2871d8;
        case 0x2871dcu: goto label_2871dc;
        case 0x2871e0u: goto label_2871e0;
        case 0x2871e4u: goto label_2871e4;
        case 0x2871e8u: goto label_2871e8;
        case 0x2871ecu: goto label_2871ec;
        case 0x2871f0u: goto label_2871f0;
        case 0x2871f4u: goto label_2871f4;
        case 0x2871f8u: goto label_2871f8;
        case 0x2871fcu: goto label_2871fc;
        case 0x287200u: goto label_287200;
        case 0x287204u: goto label_287204;
        case 0x287208u: goto label_287208;
        case 0x28720cu: goto label_28720c;
        case 0x287210u: goto label_287210;
        case 0x287214u: goto label_287214;
        case 0x287218u: goto label_287218;
        case 0x28721cu: goto label_28721c;
        case 0x287220u: goto label_287220;
        case 0x287224u: goto label_287224;
        case 0x287228u: goto label_287228;
        case 0x28722cu: goto label_28722c;
        case 0x287230u: goto label_287230;
        case 0x287234u: goto label_287234;
        case 0x287238u: goto label_287238;
        case 0x28723cu: goto label_28723c;
        case 0x287240u: goto label_287240;
        case 0x287244u: goto label_287244;
        case 0x287248u: goto label_287248;
        case 0x28724cu: goto label_28724c;
        case 0x287250u: goto label_287250;
        case 0x287254u: goto label_287254;
        case 0x287258u: goto label_287258;
        case 0x28725cu: goto label_28725c;
        case 0x287260u: goto label_287260;
        case 0x287264u: goto label_287264;
        case 0x287268u: goto label_287268;
        case 0x28726cu: goto label_28726c;
        case 0x287270u: goto label_287270;
        case 0x287274u: goto label_287274;
        case 0x287278u: goto label_287278;
        case 0x28727cu: goto label_28727c;
        case 0x287280u: goto label_287280;
        case 0x287284u: goto label_287284;
        case 0x287288u: goto label_287288;
        case 0x28728cu: goto label_28728c;
        case 0x287290u: goto label_287290;
        case 0x287294u: goto label_287294;
        case 0x287298u: goto label_287298;
        case 0x28729cu: goto label_28729c;
        case 0x2872a0u: goto label_2872a0;
        case 0x2872a4u: goto label_2872a4;
        case 0x2872a8u: goto label_2872a8;
        case 0x2872acu: goto label_2872ac;
        case 0x2872b0u: goto label_2872b0;
        case 0x2872b4u: goto label_2872b4;
        case 0x2872b8u: goto label_2872b8;
        case 0x2872bcu: goto label_2872bc;
        case 0x2872c0u: goto label_2872c0;
        case 0x2872c4u: goto label_2872c4;
        case 0x2872c8u: goto label_2872c8;
        case 0x2872ccu: goto label_2872cc;
        case 0x2872d0u: goto label_2872d0;
        case 0x2872d4u: goto label_2872d4;
        case 0x2872d8u: goto label_2872d8;
        case 0x2872dcu: goto label_2872dc;
        case 0x2872e0u: goto label_2872e0;
        case 0x2872e4u: goto label_2872e4;
        case 0x2872e8u: goto label_2872e8;
        case 0x2872ecu: goto label_2872ec;
        case 0x2872f0u: goto label_2872f0;
        case 0x2872f4u: goto label_2872f4;
        case 0x2872f8u: goto label_2872f8;
        case 0x2872fcu: goto label_2872fc;
        case 0x287300u: goto label_287300;
        case 0x287304u: goto label_287304;
        case 0x287308u: goto label_287308;
        case 0x28730cu: goto label_28730c;
        case 0x287310u: goto label_287310;
        case 0x287314u: goto label_287314;
        case 0x287318u: goto label_287318;
        case 0x28731cu: goto label_28731c;
        case 0x287320u: goto label_287320;
        case 0x287324u: goto label_287324;
        case 0x287328u: goto label_287328;
        case 0x28732cu: goto label_28732c;
        case 0x287330u: goto label_287330;
        case 0x287334u: goto label_287334;
        case 0x287338u: goto label_287338;
        case 0x28733cu: goto label_28733c;
        case 0x287340u: goto label_287340;
        case 0x287344u: goto label_287344;
        case 0x287348u: goto label_287348;
        case 0x28734cu: goto label_28734c;
        case 0x287350u: goto label_287350;
        case 0x287354u: goto label_287354;
        case 0x287358u: goto label_287358;
        case 0x28735cu: goto label_28735c;
        case 0x287360u: goto label_287360;
        case 0x287364u: goto label_287364;
        case 0x287368u: goto label_287368;
        case 0x28736cu: goto label_28736c;
        case 0x287370u: goto label_287370;
        case 0x287374u: goto label_287374;
        case 0x287378u: goto label_287378;
        case 0x28737cu: goto label_28737c;
        case 0x287380u: goto label_287380;
        case 0x287384u: goto label_287384;
        default: return;
    }

label_286bb8:
    // 0x286bb8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x286bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_286bbc:
    // 0x286bbc: 0x3c02b000  lui         $v0, 0xB000
    ctx->pc = 0x286bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45056 << 16));
label_286bc0:
    // 0x286bc0: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x286bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_286bc4:
    // 0x286bc4: 0x34421800  ori         $v0, $v0, 0x1800
    ctx->pc = 0x286bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6144);
label_286bc8:
    // 0x286bc8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x286bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_286bcc:
    // 0x286bcc: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x286bccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_286bd0:
    // 0x286bd0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x286bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_286bd4:
    // 0x286bd4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x286bd4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_286bd8:
    // 0x286bd8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x286bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_286bdc:
    // 0x286bdc: 0x3c158007  lui         $s5, 0x8007
    ctx->pc = 0x286bdcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32775 << 16));
label_286be0:
    // 0x286be0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x286be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_286be4:
    // 0x286be4: 0x3093ffff  andi        $s3, $a0, 0xFFFF
    ctx->pc = 0x286be4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_286be8:
    // 0x286be8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x286be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_286bec:
    // 0x286bec: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x286becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_286bf0:
    // 0x286bf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x286bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_286bf4:
    // 0x286bf4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x286bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_286bf8:
    // 0x286bf8: 0x8ea36700  lw          $v1, 0x6700($s5)
    ctx->pc = 0x286bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 26368)));
label_286bfc:
    // 0x286bfc: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x286bfcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_286c00:
    // 0x286c00: 0x28630040  slti        $v1, $v1, 0x40
    ctx->pc = 0x286c00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
label_286c04:
    // 0x286c04: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_286c08:
    if (ctx->pc == 0x286C08u) {
        ctx->pc = 0x286C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C04u;
        // 0x286c08: 0x2749821  addu        $s3, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286C0Cu;
        goto label_286c0c;
    }
    ctx->pc = 0x286C04u;
    {
        const bool branch_taken_0x286c04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x286C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C04u;
        // 0x286c08: 0x2749821  addu        $s3, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c04) {
            ctx->pc = 0x286C28u;
            goto label_286c28;
        }
    }
    ctx->pc = 0x286C0Cu;
label_286c0c:
    // 0x286c0c: 0x1000002e  b           . + 4 + (0x2E << 2)
label_286c10:
    if (ctx->pc == 0x286C10u) {
        ctx->pc = 0x286C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C0Cu;
        // 0x286c10: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286C14u;
        goto label_286c14;
    }
    ctx->pc = 0x286C0Cu;
    {
        const bool branch_taken_0x286c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C0Cu;
        // 0x286c10: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c0c) {
            ctx->pc = 0x286CC8u;
            goto label_286cc8;
        }
    }
    ctx->pc = 0x286C14u;
label_286c14:
    // 0x286c14: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x286c14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_286c18:
    // 0x286c18: 0x621014  dsllv       $v0, $v0, $v1
    ctx->pc = 0x286c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
label_286c1c:
    // 0x286c1c: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x286c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_286c20:
    // 0x286c20: 0x1000000d  b           . + 4 + (0xD << 2)
label_286c24:
    if (ctx->pc == 0x286C24u) {
        ctx->pc = 0x286C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C20u;
        // 0x286c24: 0xfca26708  sd          $v0, 0x6708($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 26376), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286C28u;
        goto label_286c28;
    }
    ctx->pc = 0x286C20u;
    {
        const bool branch_taken_0x286c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C20u;
        // 0x286c24: 0xfca26708  sd          $v0, 0x6708($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 26376), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c20) {
            ctx->pc = 0x286C58u;
            goto label_286c58;
        }
    }
    ctx->pc = 0x286C28u;
label_286c28:
    // 0x286c28: 0x3c058007  lui         $a1, 0x8007
    ctx->pc = 0x286c28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32775 << 16));
label_286c2c:
    // 0x286c2c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x286c2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_286c30:
    // 0x286c30: 0xdca46708  ld          $a0, 0x6708($a1)
    ctx->pc = 0x286c30u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 26376)));
label_286c34:
    // 0x286c34: 0x641016  dsrlv       $v0, $a0, $v1
    ctx->pc = 0x286c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> (GPR_U32(ctx, 3) & 0x3F));
label_286c38:
    // 0x286c38: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x286c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_286c3c:
    // 0x286c3c: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
label_286c40:
    if (ctx->pc == 0x286C40u) {
        ctx->pc = 0x286C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C3Cu;
        // 0x286c40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286C44u;
        goto label_286c44;
    }
    ctx->pc = 0x286C3Cu;
    {
        const bool branch_taken_0x286c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C3Cu;
        // 0x286c40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c3c) {
            ctx->pc = 0x286C14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286c14;
        }
    }
    ctx->pc = 0x286C44u;
label_286c44:
    // 0x286c44: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x286c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_286c48:
    // 0x286c48: 0x28620040  slti        $v0, $v1, 0x40
    ctx->pc = 0x286c48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
label_286c4c:
    // 0x286c4c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_286c50:
    if (ctx->pc == 0x286C50u) {
        ctx->pc = 0x286C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C4Cu;
        // 0x286c50: 0x641016  dsrlv       $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> (GPR_U32(ctx, 3) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286C54u;
        goto label_286c54;
    }
    ctx->pc = 0x286C4Cu;
    {
        const bool branch_taken_0x286c4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C4Cu;
        // 0x286c50: 0x641016  dsrlv       $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> (GPR_U32(ctx, 3) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c4c) {
            ctx->pc = 0x286C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286c38;
        }
    }
    ctx->pc = 0x286C54u;
label_286c54:
    // 0x286c54: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x286c54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_286c58:
    // 0x286c58: 0x640001b  bltz        $s2, . + 4 + (0x1B << 2)
label_286c5c:
    if (ctx->pc == 0x286C5Cu) {
        ctx->pc = 0x286C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C58u;
        // 0x286c5c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286C60u;
        goto label_286c60;
    }
    ctx->pc = 0x286C58u;
    {
        const bool branch_taken_0x286c58 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x286C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C58u;
        // 0x286c5c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c58) {
            ctx->pc = 0x286CC8u;
            goto label_286cc8;
        }
    }
    ctx->pc = 0x286C60u;
label_286c60:
    // 0x286c60: 0x380882d  daddu       $s1, $gp, $zero
    ctx->pc = 0x286c60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_286c64:
    // 0x286c64: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x286c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_286c68:
    // 0x286c68: 0xc01d816  jal         func_076058
label_286c6c:
    if (ctx->pc == 0x286C6Cu) {
        ctx->pc = 0x286C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C68u;
        // 0x286c6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286C70u;
        goto label_286c70;
    }
    ctx->pc = 0x286C68u;
    SET_GPR_U32(ctx, 31, 0x286C70u);
    ctx->pc = 0x286C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286C68u;
    // 0x286c6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x76058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76058u, 0x286C68u, 0x286C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286C70u;
label_286c70:
    // 0x286c70: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x286c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_286c74:
    // 0x286c74: 0x3c088007  lui         $t0, 0x8007
    ctx->pc = 0x286c74u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32775 << 16));
label_286c78:
    // 0x286c78: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x286c78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_286c7c:
    // 0x286c7c: 0x25036740  addiu       $v1, $t0, 0x6740
    ctx->pc = 0x286c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 26432));
label_286c80:
    // 0x286c80: 0x8ea56700  lw          $a1, 0x6700($s5)
    ctx->pc = 0x286c80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 26368)));
label_286c84:
    // 0x286c84: 0x24700004  addiu       $s0, $v1, 0x4
    ctx->pc = 0x286c84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_286c88:
    // 0x286c88: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x286c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_286c8c:
    // 0x286c8c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x286c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_286c90:
    // 0x286c90: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x286c90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_286c94:
    // 0x286c94: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x286c94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_286c98:
    // 0x286c98: 0xa4940002  sh          $s4, 0x2($a0)
    ctx->pc = 0x286c98u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 20));
label_286c9c:
    // 0x286c9c: 0xa4930000  sh          $s3, 0x0($a0)
    ctx->pc = 0x286c9cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 19));
label_286ca0:
    // 0x286ca0: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x286ca0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_286ca4:
    // 0x286ca4: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x286ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
label_286ca8:
    // 0x286ca8: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x286ca8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_286cac:
    // 0x286cac: 0xacf10010  sw          $s1, 0x10($a3)
    ctx->pc = 0x286cacu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 17));
label_286cb0:
    // 0x286cb0: 0x95046740  lhu         $a0, 0x6740($t0)
    ctx->pc = 0x286cb0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 26432)));
label_286cb4:
    // 0x286cb4: 0xacd60008  sw          $s6, 0x8($a2)
    ctx->pc = 0x286cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 22));
label_286cb8:
    // 0x286cb8: 0xac77000c  sw          $s7, 0xC($v1)
    ctx->pc = 0x286cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 23));
label_286cbc:
    // 0x286cbc: 0xc01d918  jal         func_076460
label_286cc0:
    if (ctx->pc == 0x286CC0u) {
        ctx->pc = 0x286CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286CBCu;
        // 0x286cc0: 0xaea56700  sw          $a1, 0x6700($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 26368), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286CC4u;
        goto label_286cc4;
    }
    ctx->pc = 0x286CBCu;
    SET_GPR_U32(ctx, 31, 0x286CC4u);
    ctx->pc = 0x286CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286CBCu;
    // 0x286cc0: 0xaea56700  sw          $a1, 0x6700($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 26368), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x76460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76460u, 0x286CBCu, 0x286CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286CC4u;
label_286cc4:
    // 0x286cc4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x286cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_286cc8:
    // 0x286cc8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x286cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_286ccc:
    // 0x286ccc: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x286cccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_286cd0:
    // 0x286cd0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x286cd0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_286cd4:
    // 0x286cd4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x286cd4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_286cd8:
    // 0x286cd8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x286cd8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_286cdc:
    // 0x286cdc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x286cdcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_286ce0:
    // 0x286ce0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x286ce0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_286ce4:
    // 0x286ce4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x286ce4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_286ce8:
    // 0x286ce8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x286ce8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_286cec:
    // 0x286cec: 0x3e00008  jr          $ra
label_286cf0:
    if (ctx->pc == 0x286CF0u) {
        ctx->pc = 0x286CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286CECu;
        // 0x286cf0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286CF4u;
        goto label_286cf4;
    }
    ctx->pc = 0x286CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286CECu;
        // 0x286cf0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286CF4u;
label_286cf4:
    // 0x286cf4: 0x0  nop
    ctx->pc = 0x286cf4u;
    // NOP
label_286cf8:
    // 0x286cf8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x286cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_286cfc:
    // 0x286cfc: 0x3c0c8007  lui         $t4, 0x8007
    ctx->pc = 0x286cfcu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)32775 << 16));
label_286d00:
    // 0x286d00: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x286d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_286d04:
    // 0x286d04: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x286d04u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_286d08:
    // 0x286d08: 0x8d826700  lw          $v0, 0x6700($t4)
    ctx->pc = 0x286d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 26368)));
label_286d0c:
    // 0x286d0c: 0x180882d  daddu       $s1, $t4, $zero
    ctx->pc = 0x286d0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_286d10:
    // 0x286d10: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x286d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_286d14:
    // 0x286d14: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x286d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_286d18:
    // 0x286d18: 0x18400058  blez        $v0, . + 4 + (0x58 << 2)
label_286d1c:
    if (ctx->pc == 0x286D1Cu) {
        ctx->pc = 0x286D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D18u;
        // 0x286d1c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286D20u;
        goto label_286d20;
    }
    ctx->pc = 0x286D18u;
    {
        const bool branch_taken_0x286d18 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x286D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D18u;
        // 0x286d1c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d18) {
            ctx->pc = 0x286E7Cu;
            goto label_286e7c;
        }
    }
    ctx->pc = 0x286D20u;
label_286d20:
    // 0x286d20: 0x18400056  blez        $v0, . + 4 + (0x56 << 2)
label_286d24:
    if (ctx->pc == 0x286D24u) {
        ctx->pc = 0x286D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D20u;
        // 0x286d24: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286D28u;
        goto label_286d28;
    }
    ctx->pc = 0x286D20u;
    {
        const bool branch_taken_0x286d20 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x286D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D20u;
        // 0x286d24: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d20) {
            ctx->pc = 0x286E7Cu;
            goto label_286e7c;
        }
    }
    ctx->pc = 0x286D28u;
label_286d28:
    // 0x286d28: 0x3c0b8007  lui         $t3, 0x8007
    ctx->pc = 0x286d28u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)32775 << 16));
label_286d2c:
    // 0x286d2c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x286d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_286d30:
    // 0x286d30: 0x25656740  addiu       $a1, $t3, 0x6740
    ctx->pc = 0x286d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 26432));
label_286d34:
    // 0x286d34: 0x1032018  mult        $a0, $t0, $v1
    ctx->pc = 0x286d34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_286d38:
    // 0x286d38: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x286d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_286d3c:
    // 0x286d3c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x286d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_286d40:
    // 0x286d40: 0x15a3004a  bne         $t5, $v1, . + 4 + (0x4A << 2)
label_286d44:
    if (ctx->pc == 0x286D44u) {
        ctx->pc = 0x286D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D40u;
        // 0x286d44: 0x8d826700  lw          $v0, 0x6700($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 26368)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286D48u;
        goto label_286d48;
    }
    ctx->pc = 0x286D40u;
    {
        const bool branch_taken_0x286d40 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 3));
        ctx->pc = 0x286D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D40u;
        // 0x286d44: 0x8d826700  lw          $v0, 0x6700($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 26368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d40) {
            ctx->pc = 0x286E6Cu;
            goto label_286e6c;
        }
    }
    ctx->pc = 0x286D48u;
label_286d48:
    // 0x286d48: 0x3c03b000  lui         $v1, 0xB000
    ctx->pc = 0x286d48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45056 << 16));
label_286d4c:
    // 0x286d4c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x286d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_286d50:
    // 0x286d50: 0x34631820  ori         $v1, $v1, 0x1820
    ctx->pc = 0x286d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6176);
label_286d54:
    // 0x286d54: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x286d54u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_286d58:
    // 0x286d58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x286d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_286d5c:
    // 0x286d5c: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
label_286d60:
    if (ctx->pc == 0x286D60u) {
        ctx->pc = 0x286D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D5Cu;
        // 0x286d60: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286D64u;
        goto label_286d64;
    }
    ctx->pc = 0x286D5Cu;
    {
        const bool branch_taken_0x286d5c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x286D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D5Cu;
        // 0x286d60: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d5c) {
            ctx->pc = 0x286D80u;
            goto label_286d80;
        }
    }
    ctx->pc = 0x286D64u;
label_286d64:
    // 0x286d64: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x286d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_286d68:
    // 0x286d68: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x286d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_286d6c:
    // 0x286d6c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x286d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_286d70:
    // 0x286d70: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x286d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
label_286d74:
    // 0x286d74: 0x14600043  bnez        $v1, . + 4 + (0x43 << 2)
label_286d78:
    if (ctx->pc == 0x286D78u) {
        ctx->pc = 0x286D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D74u;
        // 0x286d78: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286D7Cu;
        goto label_286d7c;
    }
    ctx->pc = 0x286D74u;
    {
        const bool branch_taken_0x286d74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x286D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D74u;
        // 0x286d78: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d74) {
            ctx->pc = 0x286E84u;
            goto label_286e84;
        }
    }
    ctx->pc = 0x286D7Cu;
label_286d7c:
    // 0x286d7c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x286d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_286d80:
    // 0x286d80: 0x8d896700  lw          $t1, 0x6700($t4)
    ctx->pc = 0x286d80u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 26368)));
label_286d84:
    // 0x286d84: 0x1031818  mult        $v1, $t0, $v1
    ctx->pc = 0x286d84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_286d88:
    // 0x286d88: 0x25646740  addiu       $a0, $t3, 0x6740
    ctx->pc = 0x286d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 26432));
label_286d8c:
    // 0x286d8c: 0x2522ffff  addiu       $v0, $t1, -0x1
    ctx->pc = 0x286d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_286d90:
    // 0x286d90: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x286d90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_286d94:
    // 0x286d94: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x286d94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_286d98:
    // 0x286d98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x286d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_286d9c:
    // 0x286d9c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_286da0:
    if (ctx->pc == 0x286DA0u) {
        ctx->pc = 0x286DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D9Cu;
        // 0x286da0: 0x94700002  lhu         $s0, 0x2($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286DA4u;
        goto label_286da4;
    }
    ctx->pc = 0x286D9Cu;
    {
        const bool branch_taken_0x286d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D9Cu;
        // 0x286da0: 0x94700002  lhu         $s0, 0x2($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d9c) {
            ctx->pc = 0x286E04u;
            goto label_286e04;
        }
    }
    ctx->pc = 0x286DA4u;
label_286da4:
    // 0x286da4: 0x3c0a8007  lui         $t2, 0x8007
    ctx->pc = 0x286da4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32775 << 16));
label_286da8:
    // 0x286da8: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x286da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_286dac:
    // 0x286dac: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x286dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_286db0:
    // 0x286db0: 0x651018  mult        $v0, $v1, $a1
    ctx->pc = 0x286db0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_286db4:
    // 0x286db4: 0xe52018  mult        $a0, $a3, $a1
    ctx->pc = 0x286db4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_286db8:
    // 0x286db8: 0x25666740  addiu       $a2, $t3, 0x6740
    ctx->pc = 0x286db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 26432));
label_286dbc:
    // 0x286dbc: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x286dbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_286dc0:
    // 0x286dc0: 0x462821  addu        $a1, $v0, $a2
    ctx->pc = 0x286dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_286dc4:
    // 0x286dc4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x286dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_286dc8:
    // 0x286dc8: 0x2522ffff  addiu       $v0, $t1, -0x1
    ctx->pc = 0x286dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_286dcc:
    // 0x286dcc: 0x68a30007  ldl         $v1, 0x7($a1)
    ctx->pc = 0x286dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_286dd0:
    // 0x286dd0: 0x6ca30000  ldr         $v1, 0x0($a1)
    ctx->pc = 0x286dd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_286dd4:
    // 0x286dd4: 0x68a6000f  ldl         $a2, 0xF($a1)
    ctx->pc = 0x286dd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_286dd8:
    // 0x286dd8: 0x6ca60008  ldr         $a2, 0x8($a1)
    ctx->pc = 0x286dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_286ddc:
    // 0x286ddc: 0x8cae0010  lw          $t6, 0x10($a1)
    ctx->pc = 0x286ddcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_286de0:
    // 0x286de0: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x286de0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_286de4:
    // 0x286de4: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x286de4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_286de8:
    // 0x286de8: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x286de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_286dec:
    // 0x286dec: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x286decu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_286df0:
    // 0x286df0: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x286df0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_286df4:
    // 0x286df4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_286df8:
    if (ctx->pc == 0x286DF8u) {
        ctx->pc = 0x286DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286DF4u;
        // 0x286df8: 0xac8e0010  sw          $t6, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286DFCu;
        goto label_286dfc;
    }
    ctx->pc = 0x286DF4u;
    {
        const bool branch_taken_0x286df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286DF4u;
        // 0x286df8: 0xac8e0010  sw          $t6, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286df4) {
            ctx->pc = 0x286DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286da8;
        }
    }
    ctx->pc = 0x286DFCu;
label_286dfc:
    // 0x286dfc: 0x10000003  b           . + 4 + (0x3 << 2)
label_286e00:
    if (ctx->pc == 0x286E00u) {
        ctx->pc = 0x286E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286DFCu;
        // 0x286e00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286E04u;
        goto label_286e04;
    }
    ctx->pc = 0x286DFCu;
    {
        const bool branch_taken_0x286dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286DFCu;
        // 0x286e00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286dfc) {
            ctx->pc = 0x286E0Cu;
            goto label_286e0c;
        }
    }
    ctx->pc = 0x286E04u;
label_286e04:
    // 0x286e04: 0x3c0a8007  lui         $t2, 0x8007
    ctx->pc = 0x286e04u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32775 << 16));
label_286e08:
    // 0x286e08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x286e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_286e0c:
    // 0x286e0c: 0x8d846700  lw          $a0, 0x6700($t4)
    ctx->pc = 0x286e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 26368)));
label_286e10:
    // 0x286e10: 0xdd436708  ld          $v1, 0x6708($t2)
    ctx->pc = 0x286e10u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 10), 26376)));
label_286e14:
    // 0x286e14: 0x1a21014  dsllv       $v0, $v0, $t5
    ctx->pc = 0x286e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 13) & 0x3F));
label_286e18:
    // 0x286e18: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x286e18u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_286e1c:
    // 0x286e1c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x286e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_286e20:
    // 0x286e20: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x286e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_286e24:
    // 0x286e24: 0xad846700  sw          $a0, 0x6700($t4)
    ctx->pc = 0x286e24u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 26368), GPR_U32(ctx, 4));
label_286e28:
    // 0x286e28: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
label_286e2c:
    if (ctx->pc == 0x286E2Cu) {
        ctx->pc = 0x286E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E28u;
        // 0x286e2c: 0xfd436708  sd          $v1, 0x6708($t2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 10), 26376), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286E30u;
        goto label_286e30;
    }
    ctx->pc = 0x286E28u;
    {
        const bool branch_taken_0x286e28 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x286E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E28u;
        // 0x286e2c: 0xfd436708  sd          $v1, 0x6708($t2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 10), 26376), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e28) {
            ctx->pc = 0x286E38u;
            goto label_286e38;
        }
    }
    ctx->pc = 0x286E30u;
label_286e30:
    // 0x286e30: 0xc01d918  jal         func_076460
label_286e34:
    if (ctx->pc == 0x286E34u) {
        ctx->pc = 0x286E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E30u;
        // 0x286e34: 0x95646740  lhu         $a0, 0x6740($t3) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 26432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286E38u;
        goto label_286e38;
    }
    ctx->pc = 0x286E30u;
    SET_GPR_U32(ctx, 31, 0x286E38u);
    ctx->pc = 0x286E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286E30u;
    // 0x286e34: 0x95646740  lhu         $a0, 0x6740($t3) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 26432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x76460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76460u, 0x286E30u, 0x286E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286E38u;
label_286e38:
    // 0x286e38: 0x8e226700  lw          $v0, 0x6700($s1)
    ctx->pc = 0x286e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26368)));
label_286e3c:
    // 0x286e3c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_286e40:
    if (ctx->pc == 0x286E40u) {
        ctx->pc = 0x286E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E3Cu;
        // 0x286e40: 0x24030083  addiu       $v1, $zero, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286E44u;
        goto label_286e44;
    }
    ctx->pc = 0x286E3Cu;
    {
        const bool branch_taken_0x286e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E3Cu;
        // 0x286e40: 0x24030083  addiu       $v1, $zero, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e3c) {
            ctx->pc = 0x286E50u;
            goto label_286e50;
        }
    }
    ctx->pc = 0x286E44u;
label_286e44:
    // 0x286e44: 0x3c02b000  lui         $v0, 0xB000
    ctx->pc = 0x286e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45056 << 16));
label_286e48:
    // 0x286e48: 0x34421810  ori         $v0, $v0, 0x1810
    ctx->pc = 0x286e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6160);
label_286e4c:
    // 0x286e4c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x286e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_286e50:
    // 0x286e50: 0x3c02b000  lui         $v0, 0xB000
    ctx->pc = 0x286e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45056 << 16));
label_286e54:
    // 0x286e54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_286e58:
    // 0x286e58: 0x34421800  ori         $v0, $v0, 0x1800
    ctx->pc = 0x286e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6144);
label_286e5c:
    // 0x286e5c: 0xc01d80e  jal         func_076038
label_286e60:
    if (ctx->pc == 0x286E60u) {
        ctx->pc = 0x286E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E5Cu;
        // 0x286e60: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286E64u;
        goto label_286e64;
    }
    ctx->pc = 0x286E5Cu;
    SET_GPR_U32(ctx, 31, 0x286E64u);
    ctx->pc = 0x286E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286E5Cu;
    // 0x286e60: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x76038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76038u, 0x286E5Cu, 0x286E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286E64u;
label_286e64:
    // 0x286e64: 0x10000005  b           . + 4 + (0x5 << 2)
label_286e68:
    if (ctx->pc == 0x286E68u) {
        ctx->pc = 0x286E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E64u;
        // 0x286e68: 0x503023  subu        $a2, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286E6Cu;
        goto label_286e6c;
    }
    ctx->pc = 0x286E64u;
    {
        const bool branch_taken_0x286e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E64u;
        // 0x286e68: 0x503023  subu        $a2, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e64) {
            ctx->pc = 0x286E7Cu;
            goto label_286e7c;
        }
    }
    ctx->pc = 0x286E6Cu;
label_286e6c:
    // 0x286e6c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x286e6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_286e70:
    // 0x286e70: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x286e70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_286e74:
    // 0x286e74: 0x1440ffae  bnez        $v0, . + 4 + (-0x52 << 2)
label_286e78:
    if (ctx->pc == 0x286E78u) {
        ctx->pc = 0x286E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E74u;
        // 0x286e78: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286E7Cu;
        goto label_286e7c;
    }
    ctx->pc = 0x286E74u;
    {
        const bool branch_taken_0x286e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E74u;
        // 0x286e78: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e74) {
            ctx->pc = 0x286D30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286d30;
        }
    }
    ctx->pc = 0x286E7Cu;
label_286e7c:
    // 0x286e7c: 0xf  sync
    ctx->pc = 0x286e7cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_286e80:
    // 0x286e80: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x286e80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_286e84:
    // 0x286e84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x286e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_286e88:
    // 0x286e88: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x286e88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_286e8c:
    // 0x286e8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x286e8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_286e90:
    // 0x286e90: 0x3e00008  jr          $ra
label_286e94:
    if (ctx->pc == 0x286E94u) {
        ctx->pc = 0x286E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E90u;
        // 0x286e94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286E98u;
        goto label_286e98;
    }
    ctx->pc = 0x286E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E90u;
        // 0x286e94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286E98u;
label_286e98:
    // 0x286e98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x286e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_286e9c:
    // 0x286e9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x286e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_286ea0:
    // 0x286ea0: 0xc01d858  jal         func_076160
label_286ea4:
    if (ctx->pc == 0x286EA4u) {
        ctx->pc = 0x286EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286EA0u;
        // 0x286ea4: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x286EA8u;
        goto label_286ea8;
    }
    ctx->pc = 0x286EA0u;
    SET_GPR_U32(ctx, 31, 0x286EA8u);
    ctx->pc = 0x286EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286EA0u;
    // 0x286ea4: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x76160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76160u, 0x286EA0u, 0x286EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286EA8u;
label_286ea8:
    // 0x286ea8: 0xf  sync
    ctx->pc = 0x286ea8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_286eac:
    // 0x286eac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x286eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_286eb0:
    // 0x286eb0: 0x3e00008  jr          $ra
label_286eb4:
    if (ctx->pc == 0x286EB4u) {
        ctx->pc = 0x286EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286EB0u;
        // 0x286eb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286EB8u;
        goto label_286eb8;
    }
    ctx->pc = 0x286EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286EB0u;
        // 0x286eb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286EB8u;
label_286eb8:
    // 0x286eb8: 0x3c02b000  lui         $v0, 0xB000
    ctx->pc = 0x286eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45056 << 16));
label_286ebc:
    // 0x286ebc: 0x34421820  ori         $v0, $v0, 0x1820
    ctx->pc = 0x286ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6176);
label_286ec0:
    // 0x286ec0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x286ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_286ec4:
    // 0x286ec4: 0xf  sync
    ctx->pc = 0x286ec4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_286ec8:
    // 0x286ec8: 0x3c02b000  lui         $v0, 0xB000
    ctx->pc = 0x286ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45056 << 16));
label_286ecc:
    // 0x286ecc: 0x24030583  addiu       $v1, $zero, 0x583
    ctx->pc = 0x286eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1411));
label_286ed0:
    // 0x286ed0: 0x34421810  ori         $v0, $v0, 0x1810
    ctx->pc = 0x286ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6160);
label_286ed4:
    // 0x286ed4: 0x3e00008  jr          $ra
label_286ed8:
    if (ctx->pc == 0x286ED8u) {
        ctx->pc = 0x286ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286ED4u;
        // 0x286ed8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286EDCu;
        goto label_286edc;
    }
    ctx->pc = 0x286ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286ED4u;
        // 0x286ed8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286ED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286EDCu;
label_286edc:
    // 0x286edc: 0x0  nop
    ctx->pc = 0x286edcu;
    // NOP
label_286ee0:
    // 0x286ee0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x286ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_286ee4:
    // 0x286ee4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x286ee4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_286ee8:
    // 0x286ee8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x286ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_286eec:
    // 0x286eec: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x286eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
label_286ef0:
    // 0x286ef0: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x286ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_286ef4:
    // 0x286ef4: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x286ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
label_286ef8:
    // 0x286ef8: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x286ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_286efc:
    // 0x286efc: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x286efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_286f00:
    // 0x286f00: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x286f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_286f04:
    // 0x286f04: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x286f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_286f08:
    // 0x286f08: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x286f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_286f0c:
    // 0x286f0c: 0x3c118007  lui         $s1, 0x8007
    ctx->pc = 0x286f0cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32775 << 16));
label_286f10:
    // 0x286f10: 0x3c128007  lui         $s2, 0x8007
    ctx->pc = 0x286f10u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32775 << 16));
label_286f14:
    // 0x286f14: 0x0  nop
    ctx->pc = 0x286f14u;
    // NOP
label_286f18:
    // 0x286f18: 0x8e226700  lw          $v0, 0x6700($s1)
    ctx->pc = 0x286f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26368)));
label_286f1c:
    // 0x286f1c: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x286f1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_286f20:
    // 0x286f20: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_286f24:
    if (ctx->pc == 0x286F24u) {
        ctx->pc = 0x286F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286F20u;
        // 0x286f24: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286F28u;
        goto label_286f28;
    }
    ctx->pc = 0x286F20u;
    {
        const bool branch_taken_0x286f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286F20u;
        // 0x286f24: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286f20) {
            ctx->pc = 0x286F4Cu;
            goto label_286f4c;
        }
    }
    ctx->pc = 0x286F28u;
label_286f28:
    // 0x286f28: 0x26446740  addiu       $a0, $s2, 0x6740
    ctx->pc = 0x286f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 26432));
label_286f2c:
    // 0x286f2c: 0x1031818  mult        $v1, $t0, $v1
    ctx->pc = 0x286f2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_286f30:
    // 0x286f30: 0x96456740  lhu         $a1, 0x6740($s2)
    ctx->pc = 0x286f30u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 26432)));
label_286f34:
    // 0x286f34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x286f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_286f38:
    // 0x286f38: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x286f38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_286f3c:
    // 0x286f3c: 0x10a2fff6  beq         $a1, $v0, . + 4 + (-0xA << 2)
label_286f40:
    if (ctx->pc == 0x286F40u) {
        ctx->pc = 0x286F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286F3Cu;
        // 0x286f40: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286F44u;
        goto label_286f44;
    }
    ctx->pc = 0x286F3Cu;
    {
        const bool branch_taken_0x286f3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x286F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286F3Cu;
        // 0x286f40: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286f3c) {
            ctx->pc = 0x286F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286f18;
        }
    }
    ctx->pc = 0x286F44u;
label_286f44:
    // 0x286f44: 0xc01d918  jal         func_076460
label_286f48:
    if (ctx->pc == 0x286F48u) {
        ctx->pc = 0x286F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286F44u;
        // 0x286f48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286F4Cu;
        goto label_286f4c;
    }
    ctx->pc = 0x286F44u;
    SET_GPR_U32(ctx, 31, 0x286F4Cu);
    ctx->pc = 0x286F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286F44u;
    // 0x286f48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x76460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76460u, 0x286F44u, 0x286F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286F4Cu;
label_286f4c:
    // 0x286f4c: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x286f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_286f50:
    // 0x286f50: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x286f50u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_286f54:
    // 0x286f54: 0x24546740  addiu       $s4, $v0, 0x6740
    ctx->pc = 0x286f54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 26432));
label_286f58:
    // 0x286f58: 0x24130014  addiu       $s3, $zero, 0x14
    ctx->pc = 0x286f58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_286f5c:
    // 0x286f5c: 0x3c158007  lui         $s5, 0x8007
    ctx->pc = 0x286f5cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32775 << 16));
label_286f60:
    // 0x286f60: 0x10000004  b           . + 4 + (0x4 << 2)
label_286f64:
    if (ctx->pc == 0x286F64u) {
        ctx->pc = 0x286F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286F60u;
        // 0x286f64: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286F68u;
        goto label_286f68;
    }
    ctx->pc = 0x286F60u;
    {
        const bool branch_taken_0x286f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286F60u;
        // 0x286f64: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286f60) {
            ctx->pc = 0x286F74u;
            goto label_286f74;
        }
    }
    ctx->pc = 0x286F68u;
label_286f68:
    // 0x286f68: 0x96426740  lhu         $v0, 0x6740($s2)
    ctx->pc = 0x286f68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 26432)));
label_286f6c:
    // 0x286f6c: 0x1462003e  bne         $v1, $v0, . + 4 + (0x3E << 2)
label_286f70:
    if (ctx->pc == 0x286F70u) {
        ctx->pc = 0x286F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286F6Cu;
        // 0x286f70: 0x8e226700  lw          $v0, 0x6700($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26368)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286F74u;
        goto label_286f74;
    }
    ctx->pc = 0x286F6Cu;
    {
        const bool branch_taken_0x286f6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x286F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286F6Cu;
        // 0x286f70: 0x8e226700  lw          $v0, 0x6700($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286f6c) {
            ctx->pc = 0x287068u;
            goto label_287068;
        }
    }
    ctx->pc = 0x286F74u;
label_286f74:
    // 0x286f74: 0x8ec26700  lw          $v0, 0x6700($s6)
    ctx->pc = 0x286f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 26368)));
label_286f78:
    // 0x286f78: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x286f78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_286f7c:
    // 0x286f7c: 0x26466740  addiu       $a2, $s2, 0x6740
    ctx->pc = 0x286f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 26432));
label_286f80:
    // 0x286f80: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x286f80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_286f84:
    // 0x286f84: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x286f84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_286f88:
    // 0x286f88: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x286f88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_286f8c:
    // 0x286f8c: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x286f8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_286f90:
    // 0x286f90: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x286f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_286f94:
    // 0x286f94: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x286f94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_286f98:
    // 0x286f98: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x286f98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_286f9c:
    // 0x286f9c: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x286f9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_286fa0:
    // 0x286fa0: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x286fa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_286fa4:
    // 0x286fa4: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x286fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
label_286fa8:
    // 0x286fa8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x286fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_286fac:
    // 0x286fac: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
label_286fb0:
    if (ctx->pc == 0x286FB0u) {
        ctx->pc = 0x286FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286FACu;
        // 0x286fb0: 0xaec26700  sw          $v0, 0x6700($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 26368), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286FB4u;
        goto label_286fb4;
    }
    ctx->pc = 0x286FACu;
    {
        const bool branch_taken_0x286fac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x286FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286FACu;
        // 0x286fb0: 0xaec26700  sw          $v0, 0x6700($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 26368), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286fac) {
            ctx->pc = 0x287018u;
            goto label_287018;
        }
    }
    ctx->pc = 0x286FB4u;
label_286fb4:
    // 0x286fb4: 0x8e296700  lw          $t1, 0x6700($s1)
    ctx->pc = 0x286fb4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26368)));
label_286fb8:
    // 0x286fb8: 0x8faa0010  lw          $t2, 0x10($sp)
    ctx->pc = 0x286fb8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_286fbc:
    // 0x286fbc: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x286fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_286fc0:
    // 0x286fc0: 0x97a70000  lhu         $a3, 0x0($sp)
    ctx->pc = 0x286fc0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
label_286fc4:
    // 0x286fc4: 0x0  nop
    ctx->pc = 0x286fc4u;
    // NOP
label_286fc8:
    // 0x286fc8: 0x1131818  mult        $v1, $t0, $s3
    ctx->pc = 0x286fc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_286fcc:
    // 0x286fcc: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x286fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_286fd0:
    // 0x286fd0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x286fd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_286fd4:
    // 0x286fd4: 0x742821  addu        $a1, $v1, $s4
    ctx->pc = 0x286fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_286fd8:
    // 0x286fd8: 0x531818  mult        $v1, $v0, $s3
    ctx->pc = 0x286fd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_286fdc:
    // 0x286fdc: 0x742021  addu        $a0, $v1, $s4
    ctx->pc = 0x286fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_286fe0:
    // 0x286fe0: 0x688b0007  ldl         $t3, 0x7($a0)
    ctx->pc = 0x286fe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_286fe4:
    // 0x286fe4: 0x6c8b0000  ldr         $t3, 0x0($a0)
    ctx->pc = 0x286fe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_286fe8:
    // 0x286fe8: 0x688c000f  ldl         $t4, 0xF($a0)
    ctx->pc = 0x286fe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_286fec:
    // 0x286fec: 0x6c8c0008  ldr         $t4, 0x8($a0)
    ctx->pc = 0x286fecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_286ff0:
    // 0x286ff0: 0x8c8d0010  lw          $t5, 0x10($a0)
    ctx->pc = 0x286ff0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_286ff4:
    // 0x286ff4: 0xb0ab0007  sdl         $t3, 0x7($a1)
    ctx->pc = 0x286ff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_286ff8:
    // 0x286ff8: 0xb4ab0000  sdr         $t3, 0x0($a1)
    ctx->pc = 0x286ff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_286ffc:
    // 0x286ffc: 0xb0ac000f  sdl         $t4, 0xF($a1)
    ctx->pc = 0x286ffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_287000:
    // 0x287000: 0xb4ac0008  sdr         $t4, 0x8($a1)
    ctx->pc = 0x287000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_287004:
    // 0x287004: 0x109182a  slt         $v1, $t0, $t1
    ctx->pc = 0x287004u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_287008:
    // 0x287008: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
label_28700c:
    if (ctx->pc == 0x28700Cu) {
        ctx->pc = 0x28700Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287008u;
        // 0x28700c: 0xacad0010  sw          $t5, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287010u;
        goto label_287010;
    }
    ctx->pc = 0x287008u;
    {
        const bool branch_taken_0x287008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28700Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287008u;
        // 0x28700c: 0xacad0010  sw          $t5, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287008) {
            ctx->pc = 0x286FC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286fc8;
        }
    }
    ctx->pc = 0x287010u;
label_287010:
    // 0x287010: 0x10000004  b           . + 4 + (0x4 << 2)
label_287014:
    if (ctx->pc == 0x287014u) {
        ctx->pc = 0x287018u;
        goto label_287018;
    }
    ctx->pc = 0x287010u;
    {
        const bool branch_taken_0x287010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x287010) {
            ctx->pc = 0x287024u;
            goto label_287024;
        }
    }
    ctx->pc = 0x287018u;
label_287018:
    // 0x287018: 0x8faa0010  lw          $t2, 0x10($sp)
    ctx->pc = 0x287018u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_28701c:
    // 0x28701c: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x28701cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_287020:
    // 0x287020: 0x97a70000  lhu         $a3, 0x0($sp)
    ctx->pc = 0x287020u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
label_287024:
    // 0x287024: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x287024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_287028:
    // 0x287028: 0x140e02d  daddu       $gp, $t2, $zero
    ctx->pc = 0x287028u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_28702c:
    // 0x28702c: 0xdea36708  ld          $v1, 0x6708($s5)
    ctx->pc = 0x28702cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 26376)));
label_287030:
    // 0x287030: 0xd71014  dsllv       $v0, $s7, $a2
    ctx->pc = 0x287030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) << (GPR_U32(ctx, 6) & 0x3F));
label_287034:
    // 0x287034: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x287034u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_287038:
    // 0x287038: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x287038u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
label_28703c:
    // 0x28703c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x28703cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_287040:
    // 0x287040: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x287040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_287044:
    // 0x287044: 0x8fa8000c  lw          $t0, 0xC($sp)
    ctx->pc = 0x287044u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_287048:
    // 0x287048: 0x34842000  ori         $a0, $a0, 0x2000
    ctx->pc = 0x287048u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
label_28704c:
    // 0x28704c: 0xc01d9a0  jal         func_076680
label_287050:
    if (ctx->pc == 0x287050u) {
        ctx->pc = 0x287050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28704Cu;
        // 0x287050: 0xfea36708  sd          $v1, 0x6708($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 26376), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287054u;
        goto label_287054;
    }
    ctx->pc = 0x28704Cu;
    SET_GPR_U32(ctx, 31, 0x287054u);
    ctx->pc = 0x287050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28704Cu;
    // 0x287050: 0xfea36708  sd          $v1, 0x6708($s5) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 21), 26376), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x76680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76680u, 0x28704Cu, 0x287054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287054u;
label_287054:
    // 0x287054: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x287054u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287058:
    // 0x287058: 0x8e226700  lw          $v0, 0x6700($s1)
    ctx->pc = 0x287058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26368)));
label_28705c:
    // 0x28705c: 0x1c40ffc2  bgtz        $v0, . + 4 + (-0x3E << 2)
label_287060:
    if (ctx->pc == 0x287060u) {
        ctx->pc = 0x287060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28705Cu;
        // 0x287060: 0x97a30000  lhu         $v1, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287064u;
        goto label_287064;
    }
    ctx->pc = 0x28705Cu;
    {
        const bool branch_taken_0x28705c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x287060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28705Cu;
        // 0x287060: 0x97a30000  lhu         $v1, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28705c) {
            ctx->pc = 0x286F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286f68;
        }
    }
    ctx->pc = 0x287064u;
label_287064:
    // 0x287064: 0x8e226700  lw          $v0, 0x6700($s1)
    ctx->pc = 0x287064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26368)));
label_287068:
    // 0x287068: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
label_28706c:
    if (ctx->pc == 0x28706Cu) {
        ctx->pc = 0x28706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287068u;
        // 0x28706c: 0x24030483  addiu       $v1, $zero, 0x483 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1155));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287070u;
        goto label_287070;
    }
    ctx->pc = 0x287068u;
    {
        const bool branch_taken_0x287068 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x28706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287068u;
        // 0x28706c: 0x24030483  addiu       $v1, $zero, 0x483 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1155));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287068) {
            ctx->pc = 0x287080u;
            goto label_287080;
        }
    }
    ctx->pc = 0x287070u;
label_287070:
    // 0x287070: 0xc01d918  jal         func_076460
label_287074:
    if (ctx->pc == 0x287074u) {
        ctx->pc = 0x287074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287070u;
        // 0x287074: 0x96446740  lhu         $a0, 0x6740($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 26432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287078u;
        goto label_287078;
    }
    ctx->pc = 0x287070u;
    SET_GPR_U32(ctx, 31, 0x287078u);
    ctx->pc = 0x287074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287070u;
    // 0x287074: 0x96446740  lhu         $a0, 0x6740($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 26432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x76460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76460u, 0x287070u, 0x287078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287078u;
label_287078:
    // 0x287078: 0x10000004  b           . + 4 + (0x4 << 2)
label_28707c:
    if (ctx->pc == 0x28707Cu) {
        ctx->pc = 0x287080u;
        goto label_287080;
    }
    ctx->pc = 0x287078u;
    {
        const bool branch_taken_0x287078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x287078) {
            ctx->pc = 0x28708Cu;
            goto label_28708c;
        }
    }
    ctx->pc = 0x287080u;
label_287080:
    // 0x287080: 0x3c02b000  lui         $v0, 0xB000
    ctx->pc = 0x287080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45056 << 16));
label_287084:
    // 0x287084: 0x34421810  ori         $v0, $v0, 0x1810
    ctx->pc = 0x287084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6160);
label_287088:
    // 0x287088: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x287088u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_28708c:
    // 0x28708c: 0xf  sync
    ctx->pc = 0x28708cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_287090:
    // 0x287090: 0x42000038  ei
    ctx->pc = 0x287090u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_287094:
    // 0x287094: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x287094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_287098:
    // 0x287098: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x287098u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_28709c:
    // 0x28709c: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x28709cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2870a0:
    // 0x2870a0: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x2870a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2870a4:
    // 0x2870a4: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2870a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2870a8:
    // 0x2870a8: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x2870a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2870ac:
    // 0x2870ac: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2870acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2870b0:
    // 0x2870b0: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2870b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2870b4:
    // 0x2870b4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2870b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2870b8:
    // 0x2870b8: 0x3e00008  jr          $ra
label_2870bc:
    if (ctx->pc == 0x2870BCu) {
        ctx->pc = 0x2870BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2870B8u;
        // 0x2870bc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2870C0u;
        goto label_2870c0;
    }
    ctx->pc = 0x2870B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2870BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2870B8u;
        // 0x2870bc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2870B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2870C0u;
label_2870c0:
    // 0x2870c0: 0x0  nop
    ctx->pc = 0x2870c0u;
    // NOP
label_2870c4:
    // 0x2870c4: 0x0  nop
    ctx->pc = 0x2870c4u;
    // NOP
label_2870c8:
    // 0x2870c8: 0x0  nop
    ctx->pc = 0x2870c8u;
    // NOP
label_2870cc:
    // 0x2870cc: 0x0  nop
    ctx->pc = 0x2870ccu;
    // NOP
label_2870d0:
    // 0x2870d0: 0x0  nop
    ctx->pc = 0x2870d0u;
    // NOP
label_2870d4:
    // 0x2870d4: 0x0  nop
    ctx->pc = 0x2870d4u;
    // NOP
label_2870d8:
    // 0x2870d8: 0x3c1a8007  lui         $k0, 0x8007
    ctx->pc = 0x2870d8u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)32775 << 16));
label_2870dc:
    // 0x2870dc: 0xaf5f6c40  sw          $ra, 0x6C40($k0)
    ctx->pc = 0x2870dcu;
    WRITE32(ADD32(GPR_U32(ctx, 26), 27712), GPR_U32(ctx, 31));
label_2870e0:
    // 0x2870e0: 0x3c1a8007  lui         $k0, 0x8007
    ctx->pc = 0x2870e0u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)32775 << 16));
label_2870e4:
    // 0x2870e4: 0xaf5d6c50  sw          $sp, 0x6C50($k0)
    ctx->pc = 0x2870e4u;
    WRITE32(ADD32(GPR_U32(ctx, 26), 27728), GPR_U32(ctx, 29));
label_2870e8:
    // 0x2870e8: 0x40847000  mtc0        $a0, EPC
    ctx->pc = 0x2870e8u;
    ctx->cop0_epc = GPR_U32(ctx, 4);
label_2870ec:
    // 0x2870ec: 0x40f  sync.p
    ctx->pc = 0x2870ecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2870f0:
    // 0x2870f0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2870f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2870f4:
    // 0x2870f4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2870f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2870f8:
    // 0x2870f8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2870f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2870fc:
    // 0x2870fc: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x2870fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_287100:
    // 0x287100: 0x401a6000  mfc0        $k0, Status
    ctx->pc = 0x287100u;
    SET_GPR_S32(ctx, 26, (int32_t)ctx->cop0_status);
label_287104:
    // 0x287104: 0x375a0012  ori         $k0, $k0, 0x12
    ctx->pc = 0x287104u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)18);
label_287108:
    // 0x287108: 0x409a6000  mtc0        $k0, Status
    ctx->pc = 0x287108u;
    ctx->cop0_status = GPR_U32(ctx, 26) & 0xFF57FFFF;
label_28710c:
    // 0x28710c: 0x40f  sync.p
    ctx->pc = 0x28710cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_287110:
    // 0x287110: 0x42000018  eret
    ctx->pc = 0x287110u;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
label_287114:
    // 0x287114: 0x0  nop
    ctx->pc = 0x287114u;
    // NOP
label_287118:
    // 0x287118: 0x40016000  mfc0        $at, Status
    ctx->pc = 0x287118u;
    SET_GPR_S32(ctx, 1, (int32_t)ctx->cop0_status);
label_28711c:
    // 0x28711c: 0x241affe4  addiu       $k0, $zero, -0x1C
    ctx->pc = 0x28711cu;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
label_287120:
    // 0x287120: 0x3a0824  and         $at, $at, $k0
    ctx->pc = 0x287120u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) & GPR_U64(ctx, 26));
label_287124:
    // 0x287124: 0x40816000  mtc0        $at, Status
    ctx->pc = 0x287124u;
    ctx->cop0_status = GPR_U32(ctx, 1) & 0xFF57FFFF;
label_287128:
    // 0x287128: 0x40f  sync.p
    ctx->pc = 0x287128u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_28712c:
    // 0x28712c: 0x3c1a8007  lui         $k0, 0x8007
    ctx->pc = 0x28712cu;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)32775 << 16));
label_287130:
    // 0x287130: 0x8f5f6c40  lw          $ra, 0x6C40($k0)
    ctx->pc = 0x287130u;
    SET_GPR_S32(ctx, 31, (int32_t)READ32(ADD32(GPR_U32(ctx, 26), 27712)));
label_287134:
    // 0x287134: 0x3c1a8007  lui         $k0, 0x8007
    ctx->pc = 0x287134u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)32775 << 16));
label_287138:
    // 0x287138: 0x3e00008  jr          $ra
label_28713c:
    if (ctx->pc == 0x28713Cu) {
        ctx->pc = 0x28713Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287138u;
        // 0x28713c: 0x8f5d6c50  lw          $sp, 0x6C50($k0) (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)READ32(ADD32(GPR_U32(ctx, 26), 27728)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287140u;
        goto label_287140;
    }
    ctx->pc = 0x287138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28713Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287138u;
        // 0x28713c: 0x8f5d6c50  lw          $sp, 0x6C50($k0) (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)READ32(ADD32(GPR_U32(ctx, 26), 27728)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287140u;
label_287140:
    // 0x287140: 0x0  nop
    ctx->pc = 0x287140u;
    // NOP
label_287144:
    // 0x287144: 0x0  nop
    ctx->pc = 0x287144u;
    // NOP
label_287148:
    // 0x287148: 0x0  nop
    ctx->pc = 0x287148u;
    // NOP
label_28714c:
    // 0x28714c: 0x0  nop
    ctx->pc = 0x28714cu;
    // NOP
label_287150:
    // 0x287150: 0x0  nop
    ctx->pc = 0x287150u;
    // NOP
label_287154:
    // 0x287154: 0x0  nop
    ctx->pc = 0x287154u;
    // NOP
label_287158:
    // 0x287158: 0x0  nop
    ctx->pc = 0x287158u;
    // NOP
label_28715c:
    // 0x28715c: 0x0  nop
    ctx->pc = 0x28715cu;
    // NOP
label_287160:
    // 0x287160: 0x0  nop
    ctx->pc = 0x287160u;
    // NOP
label_287164:
    // 0x287164: 0x0  nop
    ctx->pc = 0x287164u;
    // NOP
label_287168:
    // 0x287168: 0xfc  dsll32      $zero, $zero, 3
    ctx->pc = 0x287168u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 3));
label_28716c:
    // 0x28716c: 0x80076440  lb          $a3, 0x6440($zero)
    ctx->pc = 0x28716cu;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x6440u));
label_287170:
    // 0x287170: 0xfe  dsrl32      $zero, $zero, 3
    ctx->pc = 0x287170u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 3));
label_287174:
    // 0x287174: 0x80076440  lb          $a3, 0x6440($zero)
    ctx->pc = 0x287174u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x6440u));
label_287178:
    // 0x287178: 0xfd  .word       0x000000FD                   # INVALID     $zero, $zero, 0xFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x287178u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x287178 raw=0x000000FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28717c:
    // 0x28717c: 0x800762a0  lb          $a3, 0x62A0($zero)
    ctx->pc = 0x28717cu;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x62A0u));
label_287180:
    // 0x287180: 0xff  dsra32      $zero, $zero, 3
    ctx->pc = 0x287180u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 3));
label_287184:
    // 0x287184: 0x800762a0  lb          $a3, 0x62A0($zero)
    ctx->pc = 0x287184u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x62A0u));
label_287188:
    // 0x287188: 0x12c  .word       0x0000012C                   # dadd        $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x287188u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_28718c:
    // 0x28718c: 0x80076488  lb          $a3, 0x6488($zero)
    ctx->pc = 0x28718cu;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x6488u));
label_287190:
    // 0x287190: 0x8  jr          $zero
label_287194:
    if (ctx->pc == 0x287194u) {
        ctx->pc = 0x287194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287190u;
        // 0x287194: 0x800766c0  lb          $a3, 0x66C0($zero) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 26304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287198u;
        goto label_287198;
    }
    ctx->pc = 0x287190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x287194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287190u;
        // 0x287194: 0x800766c0  lb          $a3, 0x66C0($zero) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 26304)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287190u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x287198u;
label_287198:
    // 0x287198: 0x3c1d0008  lui         $sp, 0x8
    ctx->pc = 0x287198u;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)8 << 16));
label_28719c:
    // 0x28719c: 0x60f809  jalr        $v1
label_2871a0:
    if (ctx->pc == 0x2871A0u) {
        ctx->pc = 0x2871A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28719Cu;
        // 0x2871a0: 0x27bd1fc0  addiu       $sp, $sp, 0x1FC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 8128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2871A4u;
        goto label_2871a4;
    }
    ctx->pc = 0x28719Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2871A4u);
        ctx->pc = 0x2871A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28719Cu;
        // 0x2871a0: 0x27bd1fc0  addiu       $sp, $sp, 0x1FC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 8128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28719Cu, 0x2871A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2871A4u;
label_2871a4:
    // 0x2871a4: 0x2403fff8  addiu       $v1, $zero, -0x8
    ctx->pc = 0x2871a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
label_2871a8:
    // 0x2871a8: 0xc  syscall     0
    ctx->pc = 0x2871a8u;
    ctx->pc = 0x2871ACu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2871ac:
    // 0x2871ac: 0x0  nop
    ctx->pc = 0x2871acu;
    // NOP
label_2871b0:
    // 0x2871b0: 0x0  nop
    ctx->pc = 0x2871b0u;
    // NOP
label_2871b4:
    // 0x2871b4: 0x0  nop
    ctx->pc = 0x2871b4u;
    // NOP
label_2871b8:
    // 0x2871b8: 0x0  nop
    ctx->pc = 0x2871b8u;
    // NOP
label_2871bc:
    // 0x2871bc: 0x0  nop
    ctx->pc = 0x2871bcu;
    // NOP
label_2871c0:
    // 0x2871c0: 0x5a  .word       0x0000005A                   # div         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2871c0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2871c4:
    // 0x2871c4: 0x1adb68  .word       0x001ADB68                   # mfsa        $k1 # 001A0340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2871c4u;
    SET_GPR_U32(ctx, 27, ctx->sa);
label_2871c8:
    // 0x2871c8: 0x5b  .word       0x0000005B                   # divu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2871c8u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2871cc:
    // 0x2871cc: 0x80076000  lb          $a3, 0x6000($zero)
    ctx->pc = 0x2871ccu;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x6000u));
label_2871d0:
    // 0x2871d0: 0xfc  dsll32      $zero, $zero, 3
    ctx->pc = 0x2871d0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 3));
label_2871d4:
    // 0x2871d4: 0x0  nop
    ctx->pc = 0x2871d4u;
    // NOP
label_2871d8:
    // 0x2871d8: 0xfe  dsrl32      $zero, $zero, 3
    ctx->pc = 0x2871d8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 3));
label_2871dc:
    // 0x2871dc: 0x0  nop
    ctx->pc = 0x2871dcu;
    // NOP
label_2871e0:
    // 0x2871e0: 0xfd  .word       0x000000FD                   # INVALID     $zero, $zero, 0xFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2871e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2871E0 raw=0x000000FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2871e4:
    // 0x2871e4: 0x0  nop
    ctx->pc = 0x2871e4u;
    // NOP
label_2871e8:
    // 0x2871e8: 0xff  dsra32      $zero, $zero, 3
    ctx->pc = 0x2871e8u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 3));
label_2871ec:
    // 0x2871ec: 0x0  nop
    ctx->pc = 0x2871ecu;
    // NOP
label_2871f0:
    // 0x2871f0: 0x12c  .word       0x0000012C                   # dadd        $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2871f0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2871f4:
    // 0x2871f4: 0x0  nop
    ctx->pc = 0x2871f4u;
    // NOP
label_2871f8:
    // 0x2871f8: 0x8  jr          $zero
label_2871fc:
    if (ctx->pc == 0x2871FCu) {
        ctx->pc = 0x287200u;
        goto label_287200;
    }
    ctx->pc = 0x2871F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2871F8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x287200u;
label_287200:
    // 0x287200: 0x49497350  .word       0x49497350                   # INVALID     $t2, $t1, 0x7350 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x287200u;
//     throw std::runtime_error("Unhandled COP2 format: 0xA at 0x287200 raw=0x49497350");
 /* MITIGATED */
label_287204:
    // 0x287204: 0x7062696c  .word       0x7062696C                   # INVALID     $v1, $v0, 0x696C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x287204u;
// //     throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x287204 raw=0x7062696C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_287208:
    // 0x287208: 0x20206461  addi        $zero, $at, 0x6461
    ctx->pc = 0x287208u;
    // NOP (addi to $zero)
label_28720c:
    // 0x28720c: 0x30313432  andi        $s1, $at, 0x3432
    ctx->pc = 0x28720cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)13362);
label_287210:
    // 0x287210: 0x0  nop
    ctx->pc = 0x287210u;
    // NOP
label_287214:
    // 0x287214: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x287214u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x287214 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_287218:
    // 0x287218: 0x2ca920  .word       0x002CA920                   # add         $s5, $at, $t4 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x287218u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_28721c:
    // 0x28721c: 0x2ca918  .word       0x002CA918                   # mult        $s5, $at, $t4 # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28721cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_287220:
    // 0x287220: 0x2ca908  .word       0x002CA908                   # jr          $at # 000CA900 <InstrIdType: CPU_SPECIAL>
label_287224:
    if (ctx->pc == 0x287224u) {
        ctx->pc = 0x287224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287220u;
        // 0x287224: 0x2ca918  .word       0x002CA918                   # mult        $s5, $at, $t4 # 00000100 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x287228u;
        goto label_287228;
    }
    ctx->pc = 0x287220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x287224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287220u;
        // 0x287224: 0x2ca918  .word       0x002CA918                   # mult        $s5, $at, $t4 # 00000100 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287220u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x287228u;
label_287228:
    // 0x287228: 0x2ca918  .word       0x002CA918                   # mult        $s5, $at, $t4 # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x287228u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_28722c:
    // 0x28722c: 0x2ca900  .word       0x002CA900                   # sll         $s5, $t4, 4 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28722cu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
label_287230:
    // 0x287230: 0x2ca8f8  .word       0x002CA8F8                   # dsll        $s5, $t4, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x287230u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 12) << 3);
label_287234:
    // 0x287234: 0x2ca8f0  tge         $at, $t4, 675
    ctx->pc = 0x287234u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_287238:
    // 0x287238: 0x2ca940  .word       0x002CA940                   # sll         $s5, $t4, 5 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x287238u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
label_28723c:
    // 0x28723c: 0x2ca938  .word       0x002CA938                   # dsll        $s5, $t4, 4 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28723cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 12) << 4);
label_287240:
    // 0x287240: 0x2ca930  tge         $at, $t4, 676
    ctx->pc = 0x287240u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_287244:
    // 0x287244: 0x0  nop
    ctx->pc = 0x287244u;
    // NOP
label_287248:
    // 0x287248: 0x0  nop
    ctx->pc = 0x287248u;
    // NOP
label_28724c:
    // 0x28724c: 0x0  nop
    ctx->pc = 0x28724cu;
    // NOP
label_287250:
    // 0x287250: 0x0  nop
    ctx->pc = 0x287250u;
    // NOP
label_287254:
    // 0x287254: 0x0  nop
    ctx->pc = 0x287254u;
    // NOP
label_287258:
    // 0x287258: 0x0  nop
    ctx->pc = 0x287258u;
    // NOP
label_28725c:
    // 0x28725c: 0x0  nop
    ctx->pc = 0x28725cu;
    // NOP
label_287260:
    // 0x287260: 0x0  nop
    ctx->pc = 0x287260u;
    // NOP
label_287264:
    // 0x287264: 0x0  nop
    ctx->pc = 0x287264u;
    // NOP
label_287268:
    // 0x287268: 0x0  nop
    ctx->pc = 0x287268u;
    // NOP
label_28726c:
    // 0x28726c: 0x0  nop
    ctx->pc = 0x28726cu;
    // NOP
label_287270:
    // 0x287270: 0x0  nop
    ctx->pc = 0x287270u;
    // NOP
label_287274:
    // 0x287274: 0x0  nop
    ctx->pc = 0x287274u;
    // NOP
label_287278:
    // 0x287278: 0x0  nop
    ctx->pc = 0x287278u;
    // NOP
label_28727c:
    // 0x28727c: 0x0  nop
    ctx->pc = 0x28727cu;
    // NOP
label_287280:
    // 0x287280: 0x49497350  .word       0x49497350                   # INVALID     $t2, $t1, 0x7350 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x287280u;
//     throw std::runtime_error("Unhandled COP2 format: 0xA at 0x287280 raw=0x49497350");
 /* MITIGATED */
label_287284:
    // 0x287284: 0x6362696c  daddi       $v0, $k1, 0x696C
    ctx->pc = 0x287284u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26988; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
label_287288:
    // 0x287288: 0x20647664  addi        $a0, $v1, 0x7664
    ctx->pc = 0x287288u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30308, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_28728c:
    // 0x28728c: 0x30333532  andi        $s3, $at, 0x3532
    ctx->pc = 0x28728cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)13618);
label_287290:
    // 0x287290: 0x0  nop
    ctx->pc = 0x287290u;
    // NOP
label_287294:
    // 0x287294: 0x0  nop
    ctx->pc = 0x287294u;
    // NOP
label_287298:
    // 0x287298: 0x0  nop
    ctx->pc = 0x287298u;
    // NOP
label_28729c:
    // 0x28729c: 0x0  nop
    ctx->pc = 0x28729cu;
    // NOP
label_2872a0:
    // 0x2872a0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x2872a0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_2872a4:
    // 0x2872a4: 0x0  nop
    ctx->pc = 0x2872a4u;
    // NOP
label_2872a8:
    // 0x2872a8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x2872a8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_2872ac:
    // 0x2872ac: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x2872acu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_2872b0:
    // 0x2872b0: 0x0  nop
    ctx->pc = 0x2872b0u;
    // NOP
label_2872b4:
    // 0x2872b4: 0x0  nop
    ctx->pc = 0x2872b4u;
    // NOP
label_2872b8:
    // 0x2872b8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x2872b8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_2872bc:
    // 0x2872bc: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x2872bcu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_2872c0:
    // 0x2872c0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x2872c0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_2872c4:
    // 0x2872c4: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x2872c4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_2872c8:
    // 0x2872c8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x2872c8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_2872cc:
    // 0x2872cc: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x2872ccu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_2872d0:
    // 0x2872d0: 0x0  nop
    ctx->pc = 0x2872d0u;
    // NOP
label_2872d4:
    // 0x2872d4: 0x0  nop
    ctx->pc = 0x2872d4u;
    // NOP
label_2872d8:
    // 0x2872d8: 0x0  nop
    ctx->pc = 0x2872d8u;
    // NOP
label_2872dc:
    // 0x2872dc: 0x0  nop
    ctx->pc = 0x2872dcu;
    // NOP
label_2872e0:
    // 0x2872e0: 0x0  nop
    ctx->pc = 0x2872e0u;
    // NOP
label_2872e4:
    // 0x2872e4: 0x0  nop
    ctx->pc = 0x2872e4u;
    // NOP
label_2872e8:
    // 0x2872e8: 0x0  nop
    ctx->pc = 0x2872e8u;
    // NOP
label_2872ec:
    // 0x2872ec: 0x0  nop
    ctx->pc = 0x2872ecu;
    // NOP
label_2872f0:
    // 0x2872f0: 0x0  nop
    ctx->pc = 0x2872f0u;
    // NOP
label_2872f4:
    // 0x2872f4: 0x0  nop
    ctx->pc = 0x2872f4u;
    // NOP
label_2872f8:
    // 0x2872f8: 0x0  nop
    ctx->pc = 0x2872f8u;
    // NOP
label_2872fc:
    // 0x2872fc: 0x0  nop
    ctx->pc = 0x2872fcu;
    // NOP
label_287300:
    // 0x287300: 0x0  nop
    ctx->pc = 0x287300u;
    // NOP
label_287304:
    // 0x287304: 0x0  nop
    ctx->pc = 0x287304u;
    // NOP
label_287308:
    // 0x287308: 0x0  nop
    ctx->pc = 0x287308u;
    // NOP
label_28730c:
    // 0x28730c: 0x0  nop
    ctx->pc = 0x28730cu;
    // NOP
label_287310:
    // 0x287310: 0x0  nop
    ctx->pc = 0x287310u;
    // NOP
label_287314:
    // 0x287314: 0x0  nop
    ctx->pc = 0x287314u;
    // NOP
label_287318:
    // 0x287318: 0x0  nop
    ctx->pc = 0x287318u;
    // NOP
label_28731c:
    // 0x28731c: 0x0  nop
    ctx->pc = 0x28731cu;
    // NOP
label_287320:
    // 0x287320: 0x0  nop
    ctx->pc = 0x287320u;
    // NOP
label_287324:
    // 0x287324: 0x0  nop
    ctx->pc = 0x287324u;
    // NOP
label_287328:
    // 0x287328: 0x0  nop
    ctx->pc = 0x287328u;
    // NOP
label_28732c:
    // 0x28732c: 0x0  nop
    ctx->pc = 0x28732cu;
    // NOP
label_287330:
    // 0x287330: 0x0  nop
    ctx->pc = 0x287330u;
    // NOP
label_287334:
    // 0x287334: 0x0  nop
    ctx->pc = 0x287334u;
    // NOP
label_287338:
    // 0x287338: 0x0  nop
    ctx->pc = 0x287338u;
    // NOP
label_28733c:
    // 0x28733c: 0x0  nop
    ctx->pc = 0x28733cu;
    // NOP
label_287340:
    // 0x287340: 0x0  nop
    ctx->pc = 0x287340u;
    // NOP
label_287344:
    // 0x287344: 0x0  nop
    ctx->pc = 0x287344u;
    // NOP
label_287348:
    // 0x287348: 0x0  nop
    ctx->pc = 0x287348u;
    // NOP
label_28734c:
    // 0x28734c: 0x0  nop
    ctx->pc = 0x28734cu;
    // NOP
label_287350:
    // 0x287350: 0x0  nop
    ctx->pc = 0x287350u;
    // NOP
label_287354:
    // 0x287354: 0x0  nop
    ctx->pc = 0x287354u;
    // NOP
label_287358:
    // 0x287358: 0x0  nop
    ctx->pc = 0x287358u;
    // NOP
label_28735c:
    // 0x28735c: 0x0  nop
    ctx->pc = 0x28735cu;
    // NOP
label_287360:
    // 0x287360: 0x0  nop
    ctx->pc = 0x287360u;
    // NOP
label_287364:
    // 0x287364: 0x0  nop
    ctx->pc = 0x287364u;
    // NOP
label_287368:
    // 0x287368: 0x0  nop
    ctx->pc = 0x287368u;
    // NOP
label_28736c:
    // 0x28736c: 0x0  nop
    ctx->pc = 0x28736cu;
    // NOP
label_287370:
    // 0x287370: 0x0  nop
    ctx->pc = 0x287370u;
    // NOP
label_287374:
    // 0x287374: 0x0  nop
    ctx->pc = 0x287374u;
    // NOP
label_287378:
    // 0x287378: 0x0  nop
    ctx->pc = 0x287378u;
    // NOP
label_28737c:
    // 0x28737c: 0x0  nop
    ctx->pc = 0x28737cu;
    // NOP
label_287380:
    // 0x287380: 0x0  nop
    ctx->pc = 0x287380u;
    // NOP
label_287384:
    // 0x287384: 0x0  nop
    ctx->pc = 0x287384u;
    // NOP
    ctx->pc = 0x287388u;
    return;
}
