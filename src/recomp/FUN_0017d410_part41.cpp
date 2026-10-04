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


void FUN_0017d410_part41(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x190c90u: goto label_190c90;
        case 0x190c94u: goto label_190c94;
        case 0x190c98u: goto label_190c98;
        case 0x190c9cu: goto label_190c9c;
        case 0x190ca0u: goto label_190ca0;
        case 0x190ca4u: goto label_190ca4;
        case 0x190ca8u: goto label_190ca8;
        case 0x190cacu: goto label_190cac;
        case 0x190cb0u: goto label_190cb0;
        case 0x190cb4u: goto label_190cb4;
        case 0x190cb8u: goto label_190cb8;
        case 0x190cbcu: goto label_190cbc;
        case 0x190cc0u: goto label_190cc0;
        case 0x190cc4u: goto label_190cc4;
        case 0x190cc8u: goto label_190cc8;
        case 0x190cccu: goto label_190ccc;
        case 0x190cd0u: goto label_190cd0;
        case 0x190cd4u: goto label_190cd4;
        case 0x190cd8u: goto label_190cd8;
        case 0x190cdcu: goto label_190cdc;
        case 0x190ce0u: goto label_190ce0;
        case 0x190ce4u: goto label_190ce4;
        case 0x190ce8u: goto label_190ce8;
        case 0x190cecu: goto label_190cec;
        case 0x190cf0u: goto label_190cf0;
        case 0x190cf4u: goto label_190cf4;
        case 0x190cf8u: goto label_190cf8;
        case 0x190cfcu: goto label_190cfc;
        case 0x190d00u: goto label_190d00;
        case 0x190d04u: goto label_190d04;
        case 0x190d08u: goto label_190d08;
        case 0x190d0cu: goto label_190d0c;
        case 0x190d10u: goto label_190d10;
        case 0x190d14u: goto label_190d14;
        case 0x190d18u: goto label_190d18;
        case 0x190d1cu: goto label_190d1c;
        case 0x190d20u: goto label_190d20;
        case 0x190d24u: goto label_190d24;
        case 0x190d28u: goto label_190d28;
        case 0x190d2cu: goto label_190d2c;
        case 0x190d30u: goto label_190d30;
        case 0x190d34u: goto label_190d34;
        case 0x190d38u: goto label_190d38;
        case 0x190d3cu: goto label_190d3c;
        case 0x190d40u: goto label_190d40;
        case 0x190d44u: goto label_190d44;
        case 0x190d48u: goto label_190d48;
        case 0x190d4cu: goto label_190d4c;
        case 0x190d50u: goto label_190d50;
        case 0x190d54u: goto label_190d54;
        case 0x190d58u: goto label_190d58;
        case 0x190d5cu: goto label_190d5c;
        case 0x190d60u: goto label_190d60;
        case 0x190d64u: goto label_190d64;
        case 0x190d68u: goto label_190d68;
        case 0x190d6cu: goto label_190d6c;
        case 0x190d70u: goto label_190d70;
        case 0x190d74u: goto label_190d74;
        case 0x190d78u: goto label_190d78;
        case 0x190d7cu: goto label_190d7c;
        case 0x190d80u: goto label_190d80;
        case 0x190d84u: goto label_190d84;
        case 0x190d88u: goto label_190d88;
        case 0x190d8cu: goto label_190d8c;
        case 0x190d90u: goto label_190d90;
        case 0x190d94u: goto label_190d94;
        case 0x190d98u: goto label_190d98;
        case 0x190d9cu: goto label_190d9c;
        case 0x190da0u: goto label_190da0;
        case 0x190da4u: goto label_190da4;
        case 0x190da8u: goto label_190da8;
        case 0x190dacu: goto label_190dac;
        case 0x190db0u: goto label_190db0;
        case 0x190db4u: goto label_190db4;
        case 0x190db8u: goto label_190db8;
        case 0x190dbcu: goto label_190dbc;
        case 0x190dc0u: goto label_190dc0;
        case 0x190dc4u: goto label_190dc4;
        case 0x190dc8u: goto label_190dc8;
        case 0x190dccu: goto label_190dcc;
        case 0x190dd0u: goto label_190dd0;
        case 0x190dd4u: goto label_190dd4;
        case 0x190dd8u: goto label_190dd8;
        case 0x190ddcu: goto label_190ddc;
        case 0x190de0u: goto label_190de0;
        case 0x190de4u: goto label_190de4;
        case 0x190de8u: goto label_190de8;
        case 0x190decu: goto label_190dec;
        case 0x190df0u: goto label_190df0;
        case 0x190df4u: goto label_190df4;
        case 0x190df8u: goto label_190df8;
        case 0x190dfcu: goto label_190dfc;
        case 0x190e00u: goto label_190e00;
        case 0x190e04u: goto label_190e04;
        case 0x190e08u: goto label_190e08;
        case 0x190e0cu: goto label_190e0c;
        case 0x190e10u: goto label_190e10;
        case 0x190e14u: goto label_190e14;
        case 0x190e18u: goto label_190e18;
        case 0x190e1cu: goto label_190e1c;
        case 0x190e20u: goto label_190e20;
        case 0x190e24u: goto label_190e24;
        case 0x190e28u: goto label_190e28;
        case 0x190e2cu: goto label_190e2c;
        case 0x190e30u: goto label_190e30;
        case 0x190e34u: goto label_190e34;
        case 0x190e38u: goto label_190e38;
        case 0x190e3cu: goto label_190e3c;
        case 0x190e40u: goto label_190e40;
        case 0x190e44u: goto label_190e44;
        case 0x190e48u: goto label_190e48;
        case 0x190e4cu: goto label_190e4c;
        case 0x190e50u: goto label_190e50;
        case 0x190e54u: goto label_190e54;
        case 0x190e58u: goto label_190e58;
        case 0x190e5cu: goto label_190e5c;
        case 0x190e60u: goto label_190e60;
        case 0x190e64u: goto label_190e64;
        case 0x190e68u: goto label_190e68;
        case 0x190e6cu: goto label_190e6c;
        case 0x190e70u: goto label_190e70;
        case 0x190e74u: goto label_190e74;
        case 0x190e78u: goto label_190e78;
        case 0x190e7cu: goto label_190e7c;
        case 0x190e80u: goto label_190e80;
        case 0x190e84u: goto label_190e84;
        case 0x190e88u: goto label_190e88;
        case 0x190e8cu: goto label_190e8c;
        case 0x190e90u: goto label_190e90;
        case 0x190e94u: goto label_190e94;
        case 0x190e98u: goto label_190e98;
        case 0x190e9cu: goto label_190e9c;
        case 0x190ea0u: goto label_190ea0;
        case 0x190ea4u: goto label_190ea4;
        case 0x190ea8u: goto label_190ea8;
        case 0x190eacu: goto label_190eac;
        case 0x190eb0u: goto label_190eb0;
        case 0x190eb4u: goto label_190eb4;
        case 0x190eb8u: goto label_190eb8;
        case 0x190ebcu: goto label_190ebc;
        case 0x190ec0u: goto label_190ec0;
        case 0x190ec4u: goto label_190ec4;
        case 0x190ec8u: goto label_190ec8;
        case 0x190eccu: goto label_190ecc;
        case 0x190ed0u: goto label_190ed0;
        case 0x190ed4u: goto label_190ed4;
        case 0x190ed8u: goto label_190ed8;
        case 0x190edcu: goto label_190edc;
        case 0x190ee0u: goto label_190ee0;
        case 0x190ee4u: goto label_190ee4;
        case 0x190ee8u: goto label_190ee8;
        case 0x190eecu: goto label_190eec;
        case 0x190ef0u: goto label_190ef0;
        case 0x190ef4u: goto label_190ef4;
        case 0x190ef8u: goto label_190ef8;
        case 0x190efcu: goto label_190efc;
        case 0x190f00u: goto label_190f00;
        case 0x190f04u: goto label_190f04;
        case 0x190f08u: goto label_190f08;
        case 0x190f0cu: goto label_190f0c;
        case 0x190f10u: goto label_190f10;
        case 0x190f14u: goto label_190f14;
        case 0x190f18u: goto label_190f18;
        case 0x190f1cu: goto label_190f1c;
        case 0x190f20u: goto label_190f20;
        case 0x190f24u: goto label_190f24;
        case 0x190f28u: goto label_190f28;
        case 0x190f2cu: goto label_190f2c;
        case 0x190f30u: goto label_190f30;
        case 0x190f34u: goto label_190f34;
        case 0x190f38u: goto label_190f38;
        case 0x190f3cu: goto label_190f3c;
        case 0x190f40u: goto label_190f40;
        case 0x190f44u: goto label_190f44;
        case 0x190f48u: goto label_190f48;
        case 0x190f4cu: goto label_190f4c;
        case 0x190f50u: goto label_190f50;
        case 0x190f54u: goto label_190f54;
        case 0x190f58u: goto label_190f58;
        case 0x190f5cu: goto label_190f5c;
        case 0x190f60u: goto label_190f60;
        case 0x190f64u: goto label_190f64;
        case 0x190f68u: goto label_190f68;
        case 0x190f6cu: goto label_190f6c;
        case 0x190f70u: goto label_190f70;
        case 0x190f74u: goto label_190f74;
        case 0x190f78u: goto label_190f78;
        case 0x190f7cu: goto label_190f7c;
        case 0x190f80u: goto label_190f80;
        case 0x190f84u: goto label_190f84;
        case 0x190f88u: goto label_190f88;
        case 0x190f8cu: goto label_190f8c;
        case 0x190f90u: goto label_190f90;
        case 0x190f94u: goto label_190f94;
        case 0x190f98u: goto label_190f98;
        case 0x190f9cu: goto label_190f9c;
        case 0x190fa0u: goto label_190fa0;
        case 0x190fa4u: goto label_190fa4;
        case 0x190fa8u: goto label_190fa8;
        case 0x190facu: goto label_190fac;
        case 0x190fb0u: goto label_190fb0;
        case 0x190fb4u: goto label_190fb4;
        case 0x190fb8u: goto label_190fb8;
        case 0x190fbcu: goto label_190fbc;
        case 0x190fc0u: goto label_190fc0;
        case 0x190fc4u: goto label_190fc4;
        case 0x190fc8u: goto label_190fc8;
        case 0x190fccu: goto label_190fcc;
        case 0x190fd0u: goto label_190fd0;
        case 0x190fd4u: goto label_190fd4;
        case 0x190fd8u: goto label_190fd8;
        case 0x190fdcu: goto label_190fdc;
        case 0x190fe0u: goto label_190fe0;
        case 0x190fe4u: goto label_190fe4;
        case 0x190fe8u: goto label_190fe8;
        case 0x190fecu: goto label_190fec;
        case 0x190ff0u: goto label_190ff0;
        case 0x190ff4u: goto label_190ff4;
        case 0x190ff8u: goto label_190ff8;
        case 0x190ffcu: goto label_190ffc;
        case 0x191000u: goto label_191000;
        case 0x191004u: goto label_191004;
        case 0x191008u: goto label_191008;
        case 0x19100cu: goto label_19100c;
        case 0x191010u: goto label_191010;
        case 0x191014u: goto label_191014;
        case 0x191018u: goto label_191018;
        case 0x19101cu: goto label_19101c;
        case 0x191020u: goto label_191020;
        case 0x191024u: goto label_191024;
        case 0x191028u: goto label_191028;
        case 0x19102cu: goto label_19102c;
        case 0x191030u: goto label_191030;
        case 0x191034u: goto label_191034;
        case 0x191038u: goto label_191038;
        case 0x19103cu: goto label_19103c;
        case 0x191040u: goto label_191040;
        case 0x191044u: goto label_191044;
        case 0x191048u: goto label_191048;
        case 0x19104cu: goto label_19104c;
        case 0x191050u: goto label_191050;
        case 0x191054u: goto label_191054;
        case 0x191058u: goto label_191058;
        case 0x19105cu: goto label_19105c;
        case 0x191060u: goto label_191060;
        case 0x191064u: goto label_191064;
        case 0x191068u: goto label_191068;
        case 0x19106cu: goto label_19106c;
        case 0x191070u: goto label_191070;
        case 0x191074u: goto label_191074;
        case 0x191078u: goto label_191078;
        case 0x19107cu: goto label_19107c;
        case 0x191080u: goto label_191080;
        case 0x191084u: goto label_191084;
        case 0x191088u: goto label_191088;
        case 0x19108cu: goto label_19108c;
        case 0x191090u: goto label_191090;
        case 0x191094u: goto label_191094;
        case 0x191098u: goto label_191098;
        case 0x19109cu: goto label_19109c;
        case 0x1910a0u: goto label_1910a0;
        case 0x1910a4u: goto label_1910a4;
        case 0x1910a8u: goto label_1910a8;
        case 0x1910acu: goto label_1910ac;
        case 0x1910b0u: goto label_1910b0;
        case 0x1910b4u: goto label_1910b4;
        case 0x1910b8u: goto label_1910b8;
        case 0x1910bcu: goto label_1910bc;
        case 0x1910c0u: goto label_1910c0;
        case 0x1910c4u: goto label_1910c4;
        case 0x1910c8u: goto label_1910c8;
        case 0x1910ccu: goto label_1910cc;
        case 0x1910d0u: goto label_1910d0;
        case 0x1910d4u: goto label_1910d4;
        case 0x1910d8u: goto label_1910d8;
        case 0x1910dcu: goto label_1910dc;
        case 0x1910e0u: goto label_1910e0;
        case 0x1910e4u: goto label_1910e4;
        case 0x1910e8u: goto label_1910e8;
        case 0x1910ecu: goto label_1910ec;
        case 0x1910f0u: goto label_1910f0;
        case 0x1910f4u: goto label_1910f4;
        case 0x1910f8u: goto label_1910f8;
        case 0x1910fcu: goto label_1910fc;
        case 0x191100u: goto label_191100;
        case 0x191104u: goto label_191104;
        case 0x191108u: goto label_191108;
        case 0x19110cu: goto label_19110c;
        case 0x191110u: goto label_191110;
        case 0x191114u: goto label_191114;
        case 0x191118u: goto label_191118;
        case 0x19111cu: goto label_19111c;
        case 0x191120u: goto label_191120;
        case 0x191124u: goto label_191124;
        case 0x191128u: goto label_191128;
        case 0x19112cu: goto label_19112c;
        case 0x191130u: goto label_191130;
        case 0x191134u: goto label_191134;
        case 0x191138u: goto label_191138;
        case 0x19113cu: goto label_19113c;
        case 0x191140u: goto label_191140;
        case 0x191144u: goto label_191144;
        case 0x191148u: goto label_191148;
        case 0x19114cu: goto label_19114c;
        case 0x191150u: goto label_191150;
        case 0x191154u: goto label_191154;
        case 0x191158u: goto label_191158;
        case 0x19115cu: goto label_19115c;
        case 0x191160u: goto label_191160;
        case 0x191164u: goto label_191164;
        case 0x191168u: goto label_191168;
        case 0x19116cu: goto label_19116c;
        case 0x191170u: goto label_191170;
        case 0x191174u: goto label_191174;
        case 0x191178u: goto label_191178;
        case 0x19117cu: goto label_19117c;
        case 0x191180u: goto label_191180;
        case 0x191184u: goto label_191184;
        case 0x191188u: goto label_191188;
        case 0x19118cu: goto label_19118c;
        case 0x191190u: goto label_191190;
        case 0x191194u: goto label_191194;
        case 0x191198u: goto label_191198;
        case 0x19119cu: goto label_19119c;
        case 0x1911a0u: goto label_1911a0;
        case 0x1911a4u: goto label_1911a4;
        case 0x1911a8u: goto label_1911a8;
        case 0x1911acu: goto label_1911ac;
        case 0x1911b0u: goto label_1911b0;
        case 0x1911b4u: goto label_1911b4;
        case 0x1911b8u: goto label_1911b8;
        case 0x1911bcu: goto label_1911bc;
        case 0x1911c0u: goto label_1911c0;
        case 0x1911c4u: goto label_1911c4;
        case 0x1911c8u: goto label_1911c8;
        case 0x1911ccu: goto label_1911cc;
        case 0x1911d0u: goto label_1911d0;
        case 0x1911d4u: goto label_1911d4;
        case 0x1911d8u: goto label_1911d8;
        case 0x1911dcu: goto label_1911dc;
        case 0x1911e0u: goto label_1911e0;
        case 0x1911e4u: goto label_1911e4;
        case 0x1911e8u: goto label_1911e8;
        case 0x1911ecu: goto label_1911ec;
        case 0x1911f0u: goto label_1911f0;
        case 0x1911f4u: goto label_1911f4;
        case 0x1911f8u: goto label_1911f8;
        case 0x1911fcu: goto label_1911fc;
        case 0x191200u: goto label_191200;
        case 0x191204u: goto label_191204;
        case 0x191208u: goto label_191208;
        case 0x19120cu: goto label_19120c;
        case 0x191210u: goto label_191210;
        case 0x191214u: goto label_191214;
        case 0x191218u: goto label_191218;
        case 0x19121cu: goto label_19121c;
        case 0x191220u: goto label_191220;
        case 0x191224u: goto label_191224;
        case 0x191228u: goto label_191228;
        case 0x19122cu: goto label_19122c;
        case 0x191230u: goto label_191230;
        case 0x191234u: goto label_191234;
        case 0x191238u: goto label_191238;
        case 0x19123cu: goto label_19123c;
        case 0x191240u: goto label_191240;
        case 0x191244u: goto label_191244;
        case 0x191248u: goto label_191248;
        case 0x19124cu: goto label_19124c;
        case 0x191250u: goto label_191250;
        case 0x191254u: goto label_191254;
        case 0x191258u: goto label_191258;
        case 0x19125cu: goto label_19125c;
        case 0x191260u: goto label_191260;
        case 0x191264u: goto label_191264;
        case 0x191268u: goto label_191268;
        case 0x19126cu: goto label_19126c;
        case 0x191270u: goto label_191270;
        case 0x191274u: goto label_191274;
        case 0x191278u: goto label_191278;
        case 0x19127cu: goto label_19127c;
        case 0x191280u: goto label_191280;
        case 0x191284u: goto label_191284;
        case 0x191288u: goto label_191288;
        case 0x19128cu: goto label_19128c;
        case 0x191290u: goto label_191290;
        case 0x191294u: goto label_191294;
        case 0x191298u: goto label_191298;
        case 0x19129cu: goto label_19129c;
        case 0x1912a0u: goto label_1912a0;
        case 0x1912a4u: goto label_1912a4;
        case 0x1912a8u: goto label_1912a8;
        case 0x1912acu: goto label_1912ac;
        case 0x1912b0u: goto label_1912b0;
        case 0x1912b4u: goto label_1912b4;
        case 0x1912b8u: goto label_1912b8;
        case 0x1912bcu: goto label_1912bc;
        case 0x1912c0u: goto label_1912c0;
        case 0x1912c4u: goto label_1912c4;
        case 0x1912c8u: goto label_1912c8;
        case 0x1912ccu: goto label_1912cc;
        case 0x1912d0u: goto label_1912d0;
        case 0x1912d4u: goto label_1912d4;
        case 0x1912d8u: goto label_1912d8;
        case 0x1912dcu: goto label_1912dc;
        case 0x1912e0u: goto label_1912e0;
        case 0x1912e4u: goto label_1912e4;
        case 0x1912e8u: goto label_1912e8;
        case 0x1912ecu: goto label_1912ec;
        case 0x1912f0u: goto label_1912f0;
        case 0x1912f4u: goto label_1912f4;
        case 0x1912f8u: goto label_1912f8;
        case 0x1912fcu: goto label_1912fc;
        case 0x191300u: goto label_191300;
        case 0x191304u: goto label_191304;
        case 0x191308u: goto label_191308;
        case 0x19130cu: goto label_19130c;
        case 0x191310u: goto label_191310;
        case 0x191314u: goto label_191314;
        case 0x191318u: goto label_191318;
        case 0x19131cu: goto label_19131c;
        case 0x191320u: goto label_191320;
        case 0x191324u: goto label_191324;
        case 0x191328u: goto label_191328;
        case 0x19132cu: goto label_19132c;
        case 0x191330u: goto label_191330;
        case 0x191334u: goto label_191334;
        case 0x191338u: goto label_191338;
        case 0x19133cu: goto label_19133c;
        case 0x191340u: goto label_191340;
        case 0x191344u: goto label_191344;
        case 0x191348u: goto label_191348;
        case 0x19134cu: goto label_19134c;
        case 0x191350u: goto label_191350;
        case 0x191354u: goto label_191354;
        case 0x191358u: goto label_191358;
        case 0x19135cu: goto label_19135c;
        case 0x191360u: goto label_191360;
        case 0x191364u: goto label_191364;
        case 0x191368u: goto label_191368;
        case 0x19136cu: goto label_19136c;
        case 0x191370u: goto label_191370;
        case 0x191374u: goto label_191374;
        case 0x191378u: goto label_191378;
        case 0x19137cu: goto label_19137c;
        case 0x191380u: goto label_191380;
        case 0x191384u: goto label_191384;
        case 0x191388u: goto label_191388;
        case 0x19138cu: goto label_19138c;
        case 0x191390u: goto label_191390;
        case 0x191394u: goto label_191394;
        case 0x191398u: goto label_191398;
        case 0x19139cu: goto label_19139c;
        case 0x1913a0u: goto label_1913a0;
        case 0x1913a4u: goto label_1913a4;
        case 0x1913a8u: goto label_1913a8;
        case 0x1913acu: goto label_1913ac;
        case 0x1913b0u: goto label_1913b0;
        case 0x1913b4u: goto label_1913b4;
        case 0x1913b8u: goto label_1913b8;
        case 0x1913bcu: goto label_1913bc;
        case 0x1913c0u: goto label_1913c0;
        case 0x1913c4u: goto label_1913c4;
        case 0x1913c8u: goto label_1913c8;
        case 0x1913ccu: goto label_1913cc;
        case 0x1913d0u: goto label_1913d0;
        case 0x1913d4u: goto label_1913d4;
        case 0x1913d8u: goto label_1913d8;
        case 0x1913dcu: goto label_1913dc;
        case 0x1913e0u: goto label_1913e0;
        case 0x1913e4u: goto label_1913e4;
        case 0x1913e8u: goto label_1913e8;
        case 0x1913ecu: goto label_1913ec;
        case 0x1913f0u: goto label_1913f0;
        case 0x1913f4u: goto label_1913f4;
        case 0x1913f8u: goto label_1913f8;
        case 0x1913fcu: goto label_1913fc;
        case 0x191400u: goto label_191400;
        case 0x191404u: goto label_191404;
        case 0x191408u: goto label_191408;
        case 0x19140cu: goto label_19140c;
        case 0x191410u: goto label_191410;
        case 0x191414u: goto label_191414;
        case 0x191418u: goto label_191418;
        case 0x19141cu: goto label_19141c;
        case 0x191420u: goto label_191420;
        case 0x191424u: goto label_191424;
        case 0x191428u: goto label_191428;
        case 0x19142cu: goto label_19142c;
        case 0x191430u: goto label_191430;
        case 0x191434u: goto label_191434;
        case 0x191438u: goto label_191438;
        case 0x19143cu: goto label_19143c;
        case 0x191440u: goto label_191440;
        case 0x191444u: goto label_191444;
        case 0x191448u: goto label_191448;
        case 0x19144cu: goto label_19144c;
        case 0x191450u: goto label_191450;
        case 0x191454u: goto label_191454;
        case 0x191458u: goto label_191458;
        case 0x19145cu: goto label_19145c;
        default: return;
    }

label_190c90:
    // 0x190c90: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x190c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_190c94:
    // 0x190c94: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x190c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_190c98:
    // 0x190c98: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x190c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_190c9c:
    // 0x190c9c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x190c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_190ca0:
    // 0x190ca0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x190ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_190ca4:
    // 0x190ca4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x190ca4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_190ca8:
    // 0x190ca8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x190ca8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_190cac:
    // 0x190cac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x190cacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_190cb0:
    // 0x190cb0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x190cb0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_190cb4:
    // 0x190cb4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x190cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_190cb8:
    // 0x190cb8: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x190cb8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_190cbc:
    // 0x190cbc: 0x26260030  addiu       $a2, $s1, 0x30
    ctx->pc = 0x190cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_190cc0:
    // 0x190cc0: 0xc066e08  jal         func_19B820
label_190cc4:
    if (ctx->pc == 0x190CC4u) {
        ctx->pc = 0x190CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190CC0u;
        // 0x190cc4: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x190CC8u;
        goto label_190cc8;
    }
    ctx->pc = 0x190CC0u;
    SET_GPR_U32(ctx, 31, 0x190CC8u);
    ctx->pc = 0x190CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190CC0u;
    // 0x190cc4: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x190CC8u;
label_190cc8:
    // 0x190cc8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x190cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_190ccc:
    // 0x190ccc: 0x27b20054  addiu       $s2, $sp, 0x54
    ctx->pc = 0x190cccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_190cd0:
    // 0x190cd0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x190cd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_190cd4:
    // 0x190cd4: 0xc066daa  jal         func_19B6A8
label_190cd8:
    if (ctx->pc == 0x190CD8u) {
        ctx->pc = 0x190CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190CD4u;
        // 0x190cd8: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190CDCu;
        goto label_190cdc;
    }
    ctx->pc = 0x190CD4u;
    SET_GPR_U32(ctx, 31, 0x190CDCu);
    ctx->pc = 0x190CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190CD4u;
    // 0x190cd8: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    { ctx->pc = 0x19b6a8; return; }
    ctx->pc = 0x190CDCu;
label_190cdc:
    // 0x190cdc: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x190cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_190ce0:
    // 0x190ce0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x190ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_190ce4:
    // 0x190ce4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x190ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_190ce8:
    // 0x190ce8: 0xc066e14  jal         func_19B850
label_190cec:
    if (ctx->pc == 0x190CECu) {
        ctx->pc = 0x190CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190CE8u;
        // 0x190cec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190CF0u;
        goto label_190cf0;
    }
    ctx->pc = 0x190CE8u;
    SET_GPR_U32(ctx, 31, 0x190CF0u);
    ctx->pc = 0x190CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190CE8u;
    // 0x190cec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x190CF0u;
label_190cf0:
    // 0x190cf0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x190cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_190cf4:
    // 0x190cf4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x190cf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_190cf8:
    // 0x190cf8: 0xc066e02  jal         func_19B808
label_190cfc:
    if (ctx->pc == 0x190CFCu) {
        ctx->pc = 0x190CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190CF8u;
        // 0x190cfc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190D00u;
        goto label_190d00;
    }
    ctx->pc = 0x190CF8u;
    SET_GPR_U32(ctx, 31, 0x190D00u);
    ctx->pc = 0x190CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190CF8u;
    // 0x190cfc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x190D00u;
label_190d00:
    // 0x190d00: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x190d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_190d04:
    // 0x190d04: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x190d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
label_190d08:
    // 0x190d08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190d08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_190d0c:
    // 0x190d0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x190d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_190d10:
    // 0x190d10: 0x27a20058  addiu       $v0, $sp, 0x58
    ctx->pc = 0x190d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_190d14:
    // 0x190d14: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x190d14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_190d18:
    // 0x190d18: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x190d18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_190d1c:
    // 0x190d1c: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x190d1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_190d20:
    // 0x190d20: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x190d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_190d24:
    // 0x190d24: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x190d24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_190d28:
    // 0x190d28: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x190d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_190d2c:
    // 0x190d2c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x190d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190d30:
    // 0x190d30: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x190d30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_190d34:
    // 0x190d34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x190d34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_190d38:
    // 0x190d38: 0xc049e3c  jal         func_1278F0
label_190d3c:
    if (ctx->pc == 0x190D3Cu) {
        ctx->pc = 0x190D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D38u;
        // 0x190d3c: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x190D40u;
        goto label_190d40;
    }
    ctx->pc = 0x190D38u;
    SET_GPR_U32(ctx, 31, 0x190D40u);
    ctx->pc = 0x190D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190D38u;
    // 0x190d3c: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278F0u, 0x190D38u, 0x190D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190D40u;
label_190d40:
    // 0x190d40: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x190d40u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_190d44:
    // 0x190d44: 0xc049e3c  jal         func_1278F0
label_190d48:
    if (ctx->pc == 0x190D48u) {
        ctx->pc = 0x190D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D44u;
        // 0x190d48: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190D4Cu;
        goto label_190d4c;
    }
    ctx->pc = 0x190D44u;
    SET_GPR_U32(ctx, 31, 0x190D4Cu);
    ctx->pc = 0x190D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190D44u;
    // 0x190d48: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278F0u, 0x190D44u, 0x190D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190D4Cu;
label_190d4c:
    // 0x190d4c: 0x4600a581  sub.s       $f22, $f20, $f0
    ctx->pc = 0x190d4cu;
    ctx->f[22] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_190d50:
    // 0x190d50: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x190d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_190d54:
    // 0x190d54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190d54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_190d58:
    // 0x190d58: 0x0  nop
    ctx->pc = 0x190d58u;
    // NOP
label_190d5c:
    // 0x190d5c: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x190d5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_190d60:
    // 0x190d60: 0x0  nop
    ctx->pc = 0x190d60u;
    // NOP
label_190d64:
    // 0x190d64: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_190d68:
    if (ctx->pc == 0x190D68u) {
        ctx->pc = 0x190D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D64u;
        // 0x190d68: 0x3c02c2c8  lui         $v0, 0xC2C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190D6Cu;
        goto label_190d6c;
    }
    ctx->pc = 0x190D64u;
    {
        const bool branch_taken_0x190d64 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x190D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D64u;
        // 0x190d68: 0x3c02c2c8  lui         $v0, 0xC2C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190d64) {
            ctx->pc = 0x190D74u;
            goto label_190d74;
        }
    }
    ctx->pc = 0x190D6Cu;
label_190d6c:
    // 0x190d6c: 0x10000008  b           . + 4 + (0x8 << 2)
label_190d70:
    if (ctx->pc == 0x190D70u) {
        ctx->pc = 0x190D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D6Cu;
        // 0x190d70: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x190D74u;
        goto label_190d74;
    }
    ctx->pc = 0x190D6Cu;
    {
        const bool branch_taken_0x190d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D6Cu;
        // 0x190d70: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x190d6c) {
            ctx->pc = 0x190D90u;
            goto label_190d90;
        }
    }
    ctx->pc = 0x190D74u;
label_190d74:
    // 0x190d74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190d74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_190d78:
    // 0x190d78: 0x0  nop
    ctx->pc = 0x190d78u;
    // NOP
label_190d7c:
    // 0x190d7c: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x190d7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_190d80:
    // 0x190d80: 0x0  nop
    ctx->pc = 0x190d80u;
    // NOP
label_190d84:
    // 0x190d84: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_190d88:
    if (ctx->pc == 0x190D88u) {
        ctx->pc = 0x190D8Cu;
        goto label_190d8c;
    }
    ctx->pc = 0x190D84u;
    {
        const bool branch_taken_0x190d84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x190d84) {
            ctx->pc = 0x190D90u;
            goto label_190d90;
        }
    }
    ctx->pc = 0x190D8Cu;
label_190d8c:
    // 0x190d8c: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x190d8cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_190d90:
    // 0x190d90: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x190d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_190d94:
    // 0x190d94: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x190d94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_190d98:
    // 0x190d98: 0xc06d51e  jal         func_1B5478
label_190d9c:
    if (ctx->pc == 0x190D9Cu) {
        ctx->pc = 0x190D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D98u;
        // 0x190d9c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x190DA0u;
        goto label_190da0;
    }
    ctx->pc = 0x190D98u;
    SET_GPR_U32(ctx, 31, 0x190DA0u);
    ctx->pc = 0x190D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190D98u;
    // 0x190d9c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x190DA0u;
label_190da0:
    // 0x190da0: 0x3c03be68  lui         $v1, 0xBE68
    ctx->pc = 0x190da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48744 << 16));
label_190da4:
    // 0x190da4: 0x962200e4  lhu         $v0, 0xE4($s1)
    ctx->pc = 0x190da4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 228)));
label_190da8:
    // 0x190da8: 0x34635697  ori         $v1, $v1, 0x5697
    ctx->pc = 0x190da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)22167);
label_190dac:
    // 0x190dac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x190dacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_190db0:
    // 0x190db0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x190db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_190db4:
    // 0x190db4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_190db8:
    if (ctx->pc == 0x190DB8u) {
        ctx->pc = 0x190DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190DB4u;
        // 0x190db8: 0x46000d00  add.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x190DBCu;
        goto label_190dbc;
    }
    ctx->pc = 0x190DB4u;
    {
        const bool branch_taken_0x190db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190DB4u;
        // 0x190db8: 0x46000d00  add.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x190db4) {
            ctx->pc = 0x190DCCu;
            goto label_190dcc;
        }
    }
    ctx->pc = 0x190DBCu;
label_190dbc:
    // 0x190dbc: 0x3c02c3fa  lui         $v0, 0xC3FA
    ctx->pc = 0x190dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50170 << 16));
label_190dc0:
    // 0x190dc0: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x190dc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_190dc4:
    // 0x190dc4: 0x10000003  b           . + 4 + (0x3 << 2)
label_190dc8:
    if (ctx->pc == 0x190DC8u) {
        ctx->pc = 0x190DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190DC4u;
        // 0x190dc8: 0xc6210034  lwc1        $f1, 0x34($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x190DCCu;
        goto label_190dcc;
    }
    ctx->pc = 0x190DC4u;
    {
        const bool branch_taken_0x190dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190DC4u;
        // 0x190dc8: 0xc6210034  lwc1        $f1, 0x34($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x190dc4) {
            ctx->pc = 0x190DD4u;
            goto label_190dd4;
        }
    }
    ctx->pc = 0x190DCCu;
label_190dcc:
    // 0x190dcc: 0x4616ad40  add.s       $f21, $f21, $f22
    ctx->pc = 0x190dccu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[22]);
label_190dd0:
    // 0x190dd0: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x190dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_190dd4:
    // 0x190dd4: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x190dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190dd8:
    // 0x190dd8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x190dd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_190ddc:
    // 0x190ddc: 0xc06d448  jal         func_1B5120
label_190de0:
    if (ctx->pc == 0x190DE0u) {
        ctx->pc = 0x190DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190DDCu;
        // 0x190de0: 0x46150301  sub.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x190DE4u;
        goto label_190de4;
    }
    ctx->pc = 0x190DDCu;
    SET_GPR_U32(ctx, 31, 0x190DE4u);
    ctx->pc = 0x190DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190DDCu;
    // 0x190de0: 0x46150301  sub.s       $f12, $f0, $f21 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x190DE4u;
label_190de4:
    // 0x190de4: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x190de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
label_190de8:
    // 0x190de8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x190de8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_190dec:
    // 0x190dec: 0x0  nop
    ctx->pc = 0x190decu;
    // NOP
label_190df0:
    // 0x190df0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x190df0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_190df4:
    // 0x190df4: 0x0  nop
    ctx->pc = 0x190df4u;
    // NOP
label_190df8:
    // 0x190df8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_190dfc:
    if (ctx->pc == 0x190DFCu) {
        ctx->pc = 0x190DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190DF8u;
        // 0x190dfc: 0x24030023  addiu       $v1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190E00u;
        goto label_190e00;
    }
    ctx->pc = 0x190DF8u;
    {
        const bool branch_taken_0x190df8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x190DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190DF8u;
        // 0x190dfc: 0x24030023  addiu       $v1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190df8) {
            ctx->pc = 0x190E30u;
            goto label_190e30;
        }
    }
    ctx->pc = 0x190E00u;
label_190e00:
    // 0x190e00: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x190e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190e04:
    // 0x190e04: 0xc06d448  jal         func_1B5120
label_190e08:
    if (ctx->pc == 0x190E08u) {
        ctx->pc = 0x190E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E04u;
        // 0x190e08: 0x4600a301  sub.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x190E0Cu;
        goto label_190e0c;
    }
    ctx->pc = 0x190E04u;
    SET_GPR_U32(ctx, 31, 0x190E0Cu);
    ctx->pc = 0x190E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190E04u;
    // 0x190e08: 0x4600a301  sub.s       $f12, $f20, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x190E0Cu;
label_190e0c:
    // 0x190e0c: 0x3c033c8e  lui         $v1, 0x3C8E
    ctx->pc = 0x190e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15502 << 16));
label_190e10:
    // 0x190e10: 0x3463fa36  ori         $v1, $v1, 0xFA36
    ctx->pc = 0x190e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64054);
label_190e14:
    // 0x190e14: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x190e14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_190e18:
    // 0x190e18: 0x0  nop
    ctx->pc = 0x190e18u;
    // NOP
label_190e1c:
    // 0x190e1c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x190e1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_190e20:
    // 0x190e20: 0x0  nop
    ctx->pc = 0x190e20u;
    // NOP
label_190e24:
    // 0x190e24: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_190e28:
    if (ctx->pc == 0x190E28u) {
        ctx->pc = 0x190E2Cu;
        goto label_190e2c;
    }
    ctx->pc = 0x190E24u;
    {
        const bool branch_taken_0x190e24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x190e24) {
            ctx->pc = 0x190E38u;
            goto label_190e38;
        }
    }
    ctx->pc = 0x190E2Cu;
label_190e2c:
    // 0x190e2c: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x190e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_190e30:
    // 0x190e30: 0x10000002  b           . + 4 + (0x2 << 2)
label_190e34:
    if (ctx->pc == 0x190E34u) {
        ctx->pc = 0x190E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E30u;
        // 0x190e34: 0xae2300a0  sw          $v1, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190E38u;
        goto label_190e38;
    }
    ctx->pc = 0x190E30u;
    {
        const bool branch_taken_0x190e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E30u;
        // 0x190e34: 0xae2300a0  sw          $v1, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190e30) {
            ctx->pc = 0x190E3Cu;
            goto label_190e3c;
        }
    }
    ctx->pc = 0x190E38u;
label_190e38:
    // 0x190e38: 0xae2000a0  sw          $zero, 0xA0($s1)
    ctx->pc = 0x190e38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
label_190e3c:
    // 0x190e3c: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x190e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_190e40:
    // 0x190e40: 0x10800048  beqz        $a0, . + 4 + (0x48 << 2)
label_190e44:
    if (ctx->pc == 0x190E44u) {
        ctx->pc = 0x190E48u;
        goto label_190e48;
    }
    ctx->pc = 0x190E40u;
    {
        const bool branch_taken_0x190e40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x190e40) {
            ctx->pc = 0x190F64u;
            goto label_190f64;
        }
    }
    ctx->pc = 0x190E48u;
label_190e48:
    // 0x190e48: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x190e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_190e4c:
    // 0x190e4c: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x190e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190e50:
    // 0x190e50: 0x46150840  add.s       $f1, $f1, $f21
    ctx->pc = 0x190e50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
label_190e54:
    // 0x190e54: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_190e58:
    if (ctx->pc == 0x190E58u) {
        ctx->pc = 0x190E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E54u;
        // 0x190e58: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x190E5Cu;
        goto label_190e5c;
    }
    ctx->pc = 0x190E54u;
    {
        const bool branch_taken_0x190e54 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x190E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E54u;
        // 0x190e58: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x190e54) {
            ctx->pc = 0x190E68u;
            goto label_190e68;
        }
    }
    ctx->pc = 0x190E5Cu;
label_190e5c:
    // 0x190e5c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x190e5cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_190e60:
    // 0x190e60: 0x10000008  b           . + 4 + (0x8 << 2)
label_190e64:
    if (ctx->pc == 0x190E64u) {
        ctx->pc = 0x190E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E60u;
        // 0x190e64: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x190E68u;
        goto label_190e68;
    }
    ctx->pc = 0x190E60u;
    {
        const bool branch_taken_0x190e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E60u;
        // 0x190e64: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x190e60) {
            ctx->pc = 0x190E84u;
            goto label_190e84;
        }
    }
    ctx->pc = 0x190E68u;
label_190e68:
    // 0x190e68: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x190e68u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_190e6c:
    // 0x190e6c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x190e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_190e70:
    // 0x190e70: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x190e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_190e74:
    // 0x190e74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x190e74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_190e78:
    // 0x190e78: 0x0  nop
    ctx->pc = 0x190e78u;
    // NOP
label_190e7c:
    // 0x190e7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x190e7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_190e80:
    // 0x190e80: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x190e80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_190e84:
    // 0x190e84: 0x0  nop
    ctx->pc = 0x190e84u;
    // NOP
label_190e88:
    // 0x190e88: 0x0  nop
    ctx->pc = 0x190e88u;
    // NOP
label_190e8c:
    // 0x190e8c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x190e8cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_190e90:
    // 0x190e90: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x190e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190e94:
    // 0x190e94: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x190e94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_190e98:
    // 0x190e98: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x190e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
label_190e9c:
    // 0x190e9c: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x190e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190ea0:
    // 0x190ea0: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x190ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_190ea4:
    // 0x190ea4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_190ea8:
    if (ctx->pc == 0x190EA8u) {
        ctx->pc = 0x190EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190EA4u;
        // 0x190ea8: 0x4600a041  sub.s       $f1, $f20, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x190EACu;
        goto label_190eac;
    }
    ctx->pc = 0x190EA4u;
    {
        const bool branch_taken_0x190ea4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x190EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190EA4u;
        // 0x190ea8: 0x4600a041  sub.s       $f1, $f20, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x190ea4) {
            ctx->pc = 0x190EB8u;
            goto label_190eb8;
        }
    }
    ctx->pc = 0x190EACu;
label_190eac:
    // 0x190eac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190eacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_190eb0:
    // 0x190eb0: 0x10000008  b           . + 4 + (0x8 << 2)
label_190eb4:
    if (ctx->pc == 0x190EB4u) {
        ctx->pc = 0x190EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190EB0u;
        // 0x190eb4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x190EB8u;
        goto label_190eb8;
    }
    ctx->pc = 0x190EB0u;
    {
        const bool branch_taken_0x190eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190EB0u;
        // 0x190eb4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x190eb0) {
            ctx->pc = 0x190ED4u;
            goto label_190ed4;
        }
    }
    ctx->pc = 0x190EB8u;
label_190eb8:
    // 0x190eb8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x190eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_190ebc:
    // 0x190ebc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x190ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_190ec0:
    // 0x190ec0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x190ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_190ec4:
    // 0x190ec4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x190ec4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_190ec8:
    // 0x190ec8: 0x0  nop
    ctx->pc = 0x190ec8u;
    // NOP
label_190ecc:
    // 0x190ecc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x190eccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_190ed0:
    // 0x190ed0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x190ed0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_190ed4:
    // 0x190ed4: 0x0  nop
    ctx->pc = 0x190ed4u;
    // NOP
label_190ed8:
    // 0x190ed8: 0x0  nop
    ctx->pc = 0x190ed8u;
    // NOP
label_190edc:
    // 0x190edc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x190edcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_190ee0:
    // 0x190ee0: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x190ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_190ee4:
    // 0x190ee4: 0x24422f90  addiu       $v0, $v0, 0x2F90
    ctx->pc = 0x190ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
label_190ee8:
    // 0x190ee8: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x190ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_190eec:
    // 0x190eec: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x190eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_190ef0:
    // 0x190ef0: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x190ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190ef4:
    // 0x190ef4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x190ef4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_190ef8:
    // 0x190ef8: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x190ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_190efc:
    // 0x190efc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x190efcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_190f00:
    // 0x190f00: 0xc066e44  jal         func_19B910
label_190f04:
    if (ctx->pc == 0x190F04u) {
        ctx->pc = 0x190F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F00u;
        // 0x190f04: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190F08u;
        goto label_190f08;
    }
    ctx->pc = 0x190F00u;
    SET_GPR_U32(ctx, 31, 0x190F08u);
    ctx->pc = 0x190F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190F00u;
    // 0x190f04: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x190F08u;
label_190f08:
    // 0x190f08: 0xc62c0028  lwc1        $f12, 0x28($s1)
    ctx->pc = 0x190f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_190f0c:
    // 0x190f0c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x190f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_190f10:
    // 0x190f10: 0xc066e6c  jal         func_19B9B0
label_190f14:
    if (ctx->pc == 0x190F14u) {
        ctx->pc = 0x190F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F10u;
        // 0x190f14: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190F18u;
        goto label_190f18;
    }
    ctx->pc = 0x190F10u;
    SET_GPR_U32(ctx, 31, 0x190F18u);
    ctx->pc = 0x190F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190F10u;
    // 0x190f14: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    { ctx->pc = 0x19b9b0; return; }
    ctx->pc = 0x190F18u;
label_190f18:
    // 0x190f18: 0xc62c0020  lwc1        $f12, 0x20($s1)
    ctx->pc = 0x190f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_190f1c:
    // 0x190f1c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x190f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_190f20:
    // 0x190f20: 0xc066e96  jal         func_19BA58
label_190f24:
    if (ctx->pc == 0x190F24u) {
        ctx->pc = 0x190F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F20u;
        // 0x190f24: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190F28u;
        goto label_190f28;
    }
    ctx->pc = 0x190F20u;
    SET_GPR_U32(ctx, 31, 0x190F28u);
    ctx->pc = 0x190F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190F20u;
    // 0x190f24: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x190F28u;
label_190f28:
    // 0x190f28: 0xc62c0024  lwc1        $f12, 0x24($s1)
    ctx->pc = 0x190f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_190f2c:
    // 0x190f2c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x190f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_190f30:
    // 0x190f30: 0xc066ec0  jal         func_19BB00
label_190f34:
    if (ctx->pc == 0x190F34u) {
        ctx->pc = 0x190F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F30u;
        // 0x190f34: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190F38u;
        goto label_190f38;
    }
    ctx->pc = 0x190F30u;
    SET_GPR_U32(ctx, 31, 0x190F38u);
    ctx->pc = 0x190F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190F30u;
    // 0x190f34: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x190F38u;
label_190f38:
    // 0x190f38: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x190f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_190f3c:
    // 0x190f3c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x190f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_190f40:
    // 0x190f40: 0xc066d7a  jal         func_19B5E8
label_190f44:
    if (ctx->pc == 0x190F44u) {
        ctx->pc = 0x190F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F40u;
        // 0x190f44: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190F48u;
        goto label_190f48;
    }
    ctx->pc = 0x190F40u;
    SET_GPR_U32(ctx, 31, 0x190F48u);
    ctx->pc = 0x190F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190F40u;
    // 0x190f44: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x190F48u;
label_190f48:
    // 0x190f48: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x190f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_190f4c:
    // 0x190f4c: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x190f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_190f50:
    // 0x190f50: 0xc066e02  jal         func_19B808
label_190f54:
    if (ctx->pc == 0x190F54u) {
        ctx->pc = 0x190F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F50u;
        // 0x190f54: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190F58u;
        goto label_190f58;
    }
    ctx->pc = 0x190F50u;
    SET_GPR_U32(ctx, 31, 0x190F58u);
    ctx->pc = 0x190F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190F50u;
    // 0x190f54: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x190F58u;
label_190f58:
    // 0x190f58: 0x8e2300a0  lw          $v1, 0xA0($s1)
    ctx->pc = 0x190f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_190f5c:
    // 0x190f5c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x190f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_190f60:
    // 0x190f60: 0xae2300a0  sw          $v1, 0xA0($s1)
    ctx->pc = 0x190f60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 3));
label_190f64:
    // 0x190f64: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x190f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_190f68:
    // 0x190f68: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x190f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_190f6c:
    // 0x190f6c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x190f6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_190f70:
    // 0x190f70: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x190f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_190f74:
    // 0x190f74: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x190f74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_190f78:
    // 0x190f78: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x190f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_190f7c:
    // 0x190f7c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x190f7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_190f80:
    // 0x190f80: 0x3e00008  jr          $ra
label_190f84:
    if (ctx->pc == 0x190F84u) {
        ctx->pc = 0x190F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F80u;
        // 0x190f84: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190F88u;
        goto label_190f88;
    }
    ctx->pc = 0x190F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F80u;
        // 0x190f84: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190F80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190F88u;
label_190f88:
    // 0x190f88: 0x0  nop
    ctx->pc = 0x190f88u;
    // NOP
label_190f8c:
    // 0x190f8c: 0x0  nop
    ctx->pc = 0x190f8cu;
    // NOP
label_190f90:
    // 0x190f90: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x190f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_190f94:
    // 0x190f94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x190f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_190f98:
    // 0x190f98: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x190f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_190f9c:
    // 0x190f9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x190f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_190fa0:
    // 0x190fa0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x190fa0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_190fa4:
    // 0x190fa4: 0x948200e4  lhu         $v0, 0xE4($a0)
    ctx->pc = 0x190fa4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 228)));
label_190fa8:
    // 0x190fa8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x190fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_190fac:
    // 0x190fac: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_190fb0:
    if (ctx->pc == 0x190FB0u) {
        ctx->pc = 0x190FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190FACu;
        // 0x190fb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190FB4u;
        goto label_190fb4;
    }
    ctx->pc = 0x190FACu;
    {
        const bool branch_taken_0x190fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190FACu;
        // 0x190fb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190fac) {
            ctx->pc = 0x191014u;
            goto label_191014;
        }
    }
    ctx->pc = 0x190FB4u;
label_190fb4:
    // 0x190fb4: 0xc066e26  jal         func_19B898
label_190fb8:
    if (ctx->pc == 0x190FB8u) {
        ctx->pc = 0x190FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190FB4u;
        // 0x190fb8: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190FBCu;
        goto label_190fbc;
    }
    ctx->pc = 0x190FB4u;
    SET_GPR_U32(ctx, 31, 0x190FBCu);
    ctx->pc = 0x190FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190FB4u;
    // 0x190fb8: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x190FBCu;
label_190fbc:
    // 0x190fbc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x190fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_190fc0:
    // 0x190fc0: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x190fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_190fc4:
    // 0x190fc4: 0xc066e08  jal         func_19B820
label_190fc8:
    if (ctx->pc == 0x190FC8u) {
        ctx->pc = 0x190FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190FC4u;
        // 0x190fc8: 0x26060030  addiu       $a2, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190FCCu;
        goto label_190fcc;
    }
    ctx->pc = 0x190FC4u;
    SET_GPR_U32(ctx, 31, 0x190FCCu);
    ctx->pc = 0x190FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190FC4u;
    // 0x190fc8: 0x26060030  addiu       $a2, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x190FCCu;
label_190fcc:
    // 0x190fcc: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x190fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_190fd0:
    // 0x190fd0: 0x27b10068  addiu       $s1, $sp, 0x68
    ctx->pc = 0x190fd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_190fd4:
    // 0x190fd4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x190fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190fd8:
    // 0x190fd8: 0xc7ac0064  lwc1        $f12, 0x64($sp)
    ctx->pc = 0x190fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_190fdc:
    // 0x190fdc: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x190fdcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_190fe0:
    // 0x190fe0: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x190fe0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_190fe4:
    // 0x190fe4: 0x46000344  c1          0x344
    ctx->pc = 0x190fe4u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_190fe8:
    // 0x190fe8: 0x0  nop
    ctx->pc = 0x190fe8u;
    // NOP
label_190fec:
    // 0x190fec: 0x0  nop
    ctx->pc = 0x190fecu;
    // NOP
label_190ff0:
    // 0x190ff0: 0xc06d51e  jal         func_1B5478
label_190ff4:
    if (ctx->pc == 0x190FF4u) {
        ctx->pc = 0x190FF8u;
        goto label_190ff8;
    }
    ctx->pc = 0x190FF0u;
    SET_GPR_U32(ctx, 31, 0x190FF8u);
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x190FF8u;
label_190ff8:
    // 0x190ff8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x190ff8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_190ffc:
    // 0x190ffc: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x190ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_191000:
    // 0x191000: 0xc7ac0060  lwc1        $f12, 0x60($sp)
    ctx->pc = 0x191000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_191004:
    // 0x191004: 0xc06d51e  jal         func_1B5478
label_191008:
    if (ctx->pc == 0x191008u) {
        ctx->pc = 0x191008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191004u;
        // 0x191008: 0xc62d0000  lwc1        $f13, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19100Cu;
        goto label_19100c;
    }
    ctx->pc = 0x191004u;
    SET_GPR_U32(ctx, 31, 0x19100Cu);
    ctx->pc = 0x191008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191004u;
    // 0x191008: 0xc62d0000  lwc1        $f13, 0x0($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x19100Cu;
label_19100c:
    // 0x19100c: 0x100000f6  b           . + 4 + (0xF6 << 2)
label_191010:
    if (ctx->pc == 0x191010u) {
        ctx->pc = 0x191010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19100Cu;
        // 0x191010: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x191014u;
        goto label_191014;
    }
    ctx->pc = 0x19100Cu;
    {
        const bool branch_taken_0x19100c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19100Cu;
        // 0x191010: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19100c) {
            ctx->pc = 0x1913E8u;
            goto label_1913e8;
        }
    }
    ctx->pc = 0x191014u;
label_191014:
    // 0x191014: 0xc066e26  jal         func_19B898
label_191018:
    if (ctx->pc == 0x191018u) {
        ctx->pc = 0x191018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191014u;
        // 0x191018: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19101Cu;
        goto label_19101c;
    }
    ctx->pc = 0x191014u;
    SET_GPR_U32(ctx, 31, 0x19101Cu);
    ctx->pc = 0x191018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191014u;
    // 0x191018: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x19101Cu;
label_19101c:
    // 0x19101c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x19101cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_191020:
    // 0x191020: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x191020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_191024:
    // 0x191024: 0xc066e08  jal         func_19B820
label_191028:
    if (ctx->pc == 0x191028u) {
        ctx->pc = 0x191028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191024u;
        // 0x191028: 0x26060030  addiu       $a2, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19102Cu;
        goto label_19102c;
    }
    ctx->pc = 0x191024u;
    SET_GPR_U32(ctx, 31, 0x19102Cu);
    ctx->pc = 0x191028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191024u;
    // 0x191028: 0x26060030  addiu       $a2, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x19102Cu;
label_19102c:
    // 0x19102c: 0xc7ad0048  lwc1        $f13, 0x48($sp)
    ctx->pc = 0x19102cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_191030:
    // 0x191030: 0xc06d51e  jal         func_1B5478
label_191034:
    if (ctx->pc == 0x191034u) {
        ctx->pc = 0x191034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191030u;
        // 0x191034: 0xc7ac0040  lwc1        $f12, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x191038u;
        goto label_191038;
    }
    ctx->pc = 0x191030u;
    SET_GPR_U32(ctx, 31, 0x191038u);
    ctx->pc = 0x191034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191030u;
    // 0x191034: 0xc7ac0040  lwc1        $f12, 0x40($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x191038u;
label_191038:
    // 0x191038: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x191038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19103c:
    // 0x19103c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x19103cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_191040:
    // 0x191040: 0xc06d448  jal         func_1B5120
label_191044:
    if (ctx->pc == 0x191044u) {
        ctx->pc = 0x191044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191040u;
        // 0x191044: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x191048u;
        goto label_191048;
    }
    ctx->pc = 0x191040u;
    SET_GPR_U32(ctx, 31, 0x191048u);
    ctx->pc = 0x191044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191040u;
    // 0x191044: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x191048u;
label_191048:
    // 0x191048: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x191048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_19104c:
    // 0x19104c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19104cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_191050:
    // 0x191050: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x191050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_191054:
    // 0x191054: 0x0  nop
    ctx->pc = 0x191054u;
    // NOP
label_191058:
    // 0x191058: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x191058u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19105c:
    // 0x19105c: 0x0  nop
    ctx->pc = 0x19105cu;
    // NOP
label_191060:
    // 0x191060: 0x45010016  bc1t        . + 4 + (0x16 << 2)
label_191064:
    if (ctx->pc == 0x191064u) {
        ctx->pc = 0x191068u;
        goto label_191068;
    }
    ctx->pc = 0x191060u;
    {
        const bool branch_taken_0x191060 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x191060) {
            ctx->pc = 0x1910BCu;
            goto label_1910bc;
        }
    }
    ctx->pc = 0x191068u;
label_191068:
    // 0x191068: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x191068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19106c:
    // 0x19106c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19106cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_191070:
    // 0x191070: 0x0  nop
    ctx->pc = 0x191070u;
    // NOP
label_191074:
    // 0x191074: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x191074u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_191078:
    // 0x191078: 0x0  nop
    ctx->pc = 0x191078u;
    // NOP
label_19107c:
    // 0x19107c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_191080:
    if (ctx->pc == 0x191080u) {
        ctx->pc = 0x191080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19107Cu;
        // 0x191080: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191084u;
        goto label_191084;
    }
    ctx->pc = 0x19107Cu;
    {
        const bool branch_taken_0x19107c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x191080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19107Cu;
        // 0x191080: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19107c) {
            ctx->pc = 0x191094u;
            goto label_191094;
        }
    }
    ctx->pc = 0x191084u;
label_191084:
    // 0x191084: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x191084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_191088:
    // 0x191088: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19108c:
    // 0x19108c: 0x0  nop
    ctx->pc = 0x19108cu;
    // NOP
label_191090:
    // 0x191090: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x191090u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_191094:
    // 0x191094: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x191094u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_191098:
    // 0x191098: 0x0  nop
    ctx->pc = 0x191098u;
    // NOP
label_19109c:
    // 0x19109c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19109cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1910a0:
    // 0x1910a0: 0x0  nop
    ctx->pc = 0x1910a0u;
    // NOP
label_1910a4:
    // 0x1910a4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1910a8:
    if (ctx->pc == 0x1910A8u) {
        ctx->pc = 0x1910A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1910A4u;
        // 0x1910a8: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1910ACu;
        goto label_1910ac;
    }
    ctx->pc = 0x1910A4u;
    {
        const bool branch_taken_0x1910a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1910A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1910A4u;
        // 0x1910a8: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1910a4) {
            ctx->pc = 0x1910BCu;
            goto label_1910bc;
        }
    }
    ctx->pc = 0x1910ACu;
label_1910ac:
    // 0x1910ac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1910acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1910b0:
    // 0x1910b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1910b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1910b4:
    // 0x1910b4: 0x0  nop
    ctx->pc = 0x1910b4u;
    // NOP
label_1910b8:
    // 0x1910b8: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x1910b8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_1910bc:
    // 0x1910bc: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x1910bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1910c0:
    // 0x1910c0: 0xc06d448  jal         func_1B5120
label_1910c4:
    if (ctx->pc == 0x1910C4u) {
        ctx->pc = 0x1910C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1910C0u;
        // 0x1910c4: 0x4600a301  sub.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1910C8u;
        goto label_1910c8;
    }
    ctx->pc = 0x1910C0u;
    SET_GPR_U32(ctx, 31, 0x1910C8u);
    ctx->pc = 0x1910C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1910C0u;
    // 0x1910c4: 0x4600a301  sub.s       $f12, $f20, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x1910C8u;
label_1910c8:
    // 0x1910c8: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1910c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_1910cc:
    // 0x1910cc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1910ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1910d0:
    // 0x1910d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1910d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1910d4:
    // 0x1910d4: 0x0  nop
    ctx->pc = 0x1910d4u;
    // NOP
label_1910d8:
    // 0x1910d8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1910d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1910dc:
    // 0x1910dc: 0x0  nop
    ctx->pc = 0x1910dcu;
    // NOP
label_1910e0:
    // 0x1910e0: 0x45010038  bc1t        . + 4 + (0x38 << 2)
label_1910e4:
    if (ctx->pc == 0x1910E4u) {
        ctx->pc = 0x1910E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1910E0u;
        // 0x1910e4: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1910E8u;
        goto label_1910e8;
    }
    ctx->pc = 0x1910E0u;
    {
        const bool branch_taken_0x1910e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1910E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1910E0u;
        // 0x1910e4: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1910e0) {
            ctx->pc = 0x1911C4u;
            goto label_1911c4;
        }
    }
    ctx->pc = 0x1910E8u;
label_1910e8:
    // 0x1910e8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1910e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1910ec:
    // 0x1910ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1910ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1910f0:
    // 0x1910f0: 0x0  nop
    ctx->pc = 0x1910f0u;
    // NOP
label_1910f4:
    // 0x1910f4: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x1910f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1910f8:
    // 0x1910f8: 0x0  nop
    ctx->pc = 0x1910f8u;
    // NOP
label_1910fc:
    // 0x1910fc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_191100:
    if (ctx->pc == 0x191100u) {
        ctx->pc = 0x191104u;
        goto label_191104;
    }
    ctx->pc = 0x1910FCu;
    {
        const bool branch_taken_0x1910fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1910fc) {
            ctx->pc = 0x191118u;
            goto label_191118;
        }
    }
    ctx->pc = 0x191104u;
label_191104:
    // 0x191104: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x191104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_191108:
    // 0x191108: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x191108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_19110c:
    // 0x19110c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19110cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_191110:
    // 0x191110: 0x1000000e  b           . + 4 + (0xE << 2)
label_191114:
    if (ctx->pc == 0x191114u) {
        ctx->pc = 0x191114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191110u;
        // 0x191114: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x191118u;
        goto label_191118;
    }
    ctx->pc = 0x191110u;
    {
        const bool branch_taken_0x191110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191110u;
        // 0x191114: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x191110) {
            ctx->pc = 0x19114Cu;
            goto label_19114c;
        }
    }
    ctx->pc = 0x191118u;
label_191118:
    // 0x191118: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x191118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_19111c:
    // 0x19111c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19111cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_191120:
    // 0x191120: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_191124:
    // 0x191124: 0x0  nop
    ctx->pc = 0x191124u;
    // NOP
label_191128:
    // 0x191128: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x191128u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19112c:
    // 0x19112c: 0x0  nop
    ctx->pc = 0x19112cu;
    // NOP
label_191130:
    // 0x191130: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_191134:
    if (ctx->pc == 0x191134u) {
        ctx->pc = 0x191138u;
        goto label_191138;
    }
    ctx->pc = 0x191130u;
    {
        const bool branch_taken_0x191130 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x191130) {
            ctx->pc = 0x19114Cu;
            goto label_19114c;
        }
    }
    ctx->pc = 0x191138u;
label_191138:
    // 0x191138: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x191138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_19113c:
    // 0x19113c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19113cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_191140:
    // 0x191140: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_191144:
    // 0x191144: 0x0  nop
    ctx->pc = 0x191144u;
    // NOP
label_191148:
    // 0x191148: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x191148u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_19114c:
    // 0x19114c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x19114cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_191150:
    // 0x191150: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x191150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_191154:
    // 0x191154: 0xe6140024  swc1        $f20, 0x24($s0)
    ctx->pc = 0x191154u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_191158:
    // 0x191158: 0x24422f90  addiu       $v0, $v0, 0x2F90
    ctx->pc = 0x191158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
label_19115c:
    // 0x19115c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x19115cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_191160:
    // 0x191160: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x191160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_191164:
    // 0x191164: 0xc066e44  jal         func_19B910
label_191168:
    if (ctx->pc == 0x191168u) {
        ctx->pc = 0x191168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191164u;
        // 0x191168: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19116Cu;
        goto label_19116c;
    }
    ctx->pc = 0x191164u;
    SET_GPR_U32(ctx, 31, 0x19116Cu);
    ctx->pc = 0x191168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191164u;
    // 0x191168: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x19116Cu;
label_19116c:
    // 0x19116c: 0xc60c0028  lwc1        $f12, 0x28($s0)
    ctx->pc = 0x19116cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_191170:
    // 0x191170: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x191170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_191174:
    // 0x191174: 0xc066e6c  jal         func_19B9B0
label_191178:
    if (ctx->pc == 0x191178u) {
        ctx->pc = 0x191178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191174u;
        // 0x191178: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19117Cu;
        goto label_19117c;
    }
    ctx->pc = 0x191174u;
    SET_GPR_U32(ctx, 31, 0x19117Cu);
    ctx->pc = 0x191178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191174u;
    // 0x191178: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    { ctx->pc = 0x19b9b0; return; }
    ctx->pc = 0x19117Cu;
label_19117c:
    // 0x19117c: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x19117cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_191180:
    // 0x191180: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x191180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_191184:
    // 0x191184: 0xc066e96  jal         func_19BA58
label_191188:
    if (ctx->pc == 0x191188u) {
        ctx->pc = 0x191188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191184u;
        // 0x191188: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19118Cu;
        goto label_19118c;
    }
    ctx->pc = 0x191184u;
    SET_GPR_U32(ctx, 31, 0x19118Cu);
    ctx->pc = 0x191188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191184u;
    // 0x191188: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x19118Cu;
label_19118c:
    // 0x19118c: 0xc60c0024  lwc1        $f12, 0x24($s0)
    ctx->pc = 0x19118cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_191190:
    // 0x191190: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x191190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_191194:
    // 0x191194: 0xc066ec0  jal         func_19BB00
label_191198:
    if (ctx->pc == 0x191198u) {
        ctx->pc = 0x191198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191194u;
        // 0x191198: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19119Cu;
        goto label_19119c;
    }
    ctx->pc = 0x191194u;
    SET_GPR_U32(ctx, 31, 0x19119Cu);
    ctx->pc = 0x191198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191194u;
    // 0x191198: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x19119Cu;
label_19119c:
    // 0x19119c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x19119cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1911a0:
    // 0x1911a0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1911a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1911a4:
    // 0x1911a4: 0xc066d7a  jal         func_19B5E8
label_1911a8:
    if (ctx->pc == 0x1911A8u) {
        ctx->pc = 0x1911A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1911A4u;
        // 0x1911a8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1911ACu;
        goto label_1911ac;
    }
    ctx->pc = 0x1911A4u;
    SET_GPR_U32(ctx, 31, 0x1911ACu);
    ctx->pc = 0x1911A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1911A4u;
    // 0x1911a8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x1911ACu;
label_1911ac:
    // 0x1911ac: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1911acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1911b0:
    // 0x1911b0: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x1911b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_1911b4:
    // 0x1911b4: 0xc066e02  jal         func_19B808
label_1911b8:
    if (ctx->pc == 0x1911B8u) {
        ctx->pc = 0x1911B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1911B4u;
        // 0x1911b8: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1911BCu;
        goto label_1911bc;
    }
    ctx->pc = 0x1911B4u;
    SET_GPR_U32(ctx, 31, 0x1911BCu);
    ctx->pc = 0x1911B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1911B4u;
    // 0x1911b8: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x1911BCu;
label_1911bc:
    // 0x1911bc: 0xc064720  jal         func_191C80
label_1911c0:
    if (ctx->pc == 0x1911C0u) {
        ctx->pc = 0x1911C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1911BCu;
        // 0x1911c0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1911C4u;
        goto label_1911c4;
    }
    ctx->pc = 0x1911BCu;
    SET_GPR_U32(ctx, 31, 0x1911C4u);
    ctx->pc = 0x1911C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1911BCu;
    // 0x1911c0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191C80u;
    { ctx->pc = 0x191c80; return; }
    ctx->pc = 0x1911C4u;
label_1911c4:
    // 0x1911c4: 0x8e0300e8  lw          $v1, 0xE8($s0)
    ctx->pc = 0x1911c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
label_1911c8:
    // 0x1911c8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1911c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1911cc:
    // 0x1911cc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1911ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1911d0:
    // 0x1911d0: 0x24429c40  addiu       $v0, $v0, -0x63C0
    ctx->pc = 0x1911d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941760));
label_1911d4:
    // 0x1911d4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1911d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1911d8:
    // 0x1911d8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1911d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_1911dc:
    // 0x1911dc: 0xc066d7a  jal         func_19B5E8
label_1911e0:
    if (ctx->pc == 0x1911E0u) {
        ctx->pc = 0x1911E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1911DCu;
        // 0x1911e0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1911E4u;
        goto label_1911e4;
    }
    ctx->pc = 0x1911DCu;
    SET_GPR_U32(ctx, 31, 0x1911E4u);
    ctx->pc = 0x1911E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1911DCu;
    // 0x1911e0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x1911E4u;
label_1911e4:
    // 0x1911e4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1911e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1911e8:
    // 0x1911e8: 0xc066daa  jal         func_19B6A8
label_1911ec:
    if (ctx->pc == 0x1911ECu) {
        ctx->pc = 0x1911ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1911E8u;
        // 0x1911ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1911F0u;
        goto label_1911f0;
    }
    ctx->pc = 0x1911E8u;
    SET_GPR_U32(ctx, 31, 0x1911F0u);
    ctx->pc = 0x1911ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1911E8u;
    // 0x1911ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    { ctx->pc = 0x19b6a8; return; }
    ctx->pc = 0x1911F0u;
label_1911f0:
    // 0x1911f0: 0xc06d448  jal         func_1B5120
label_1911f4:
    if (ctx->pc == 0x1911F4u) {
        ctx->pc = 0x1911F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1911F0u;
        // 0x1911f4: 0xc7ac0040  lwc1        $f12, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1911F8u;
        goto label_1911f8;
    }
    ctx->pc = 0x1911F0u;
    SET_GPR_U32(ctx, 31, 0x1911F8u);
    ctx->pc = 0x1911F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1911F0u;
    // 0x1911f4: 0xc7ac0040  lwc1        $f12, 0x40($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x1911F8u;
label_1911f8:
    // 0x1911f8: 0xc60100bc  lwc1        $f1, 0xBC($s0)
    ctx->pc = 0x1911f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1911fc:
    // 0x1911fc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1911fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_191200:
    // 0x191200: 0x0  nop
    ctx->pc = 0x191200u;
    // NOP
label_191204:
    // 0x191204: 0x45010010  bc1t        . + 4 + (0x10 << 2)
label_191208:
    if (ctx->pc == 0x191208u) {
        ctx->pc = 0x19120Cu;
        goto label_19120c;
    }
    ctx->pc = 0x191204u;
    {
        const bool branch_taken_0x191204 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x191204) {
            ctx->pc = 0x191248u;
            goto label_191248;
        }
    }
    ctx->pc = 0x19120Cu;
label_19120c:
    // 0x19120c: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x19120cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_191210:
    // 0x191210: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x191210u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_191214:
    // 0x191214: 0x0  nop
    ctx->pc = 0x191214u;
    // NOP
label_191218:
    // 0x191218: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x191218u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19121c:
    // 0x19121c: 0x0  nop
    ctx->pc = 0x19121cu;
    // NOP
label_191220:
    // 0x191220: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_191224:
    if (ctx->pc == 0x191224u) {
        ctx->pc = 0x191224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191220u;
        // 0x191224: 0x46011000  add.s       $f0, $f2, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x191228u;
        goto label_191228;
    }
    ctx->pc = 0x191220u;
    {
        const bool branch_taken_0x191220 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x191224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191220u;
        // 0x191224: 0x46011000  add.s       $f0, $f2, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x191220) {
            ctx->pc = 0x19123Cu;
            goto label_19123c;
        }
    }
    ctx->pc = 0x191228u;
label_191228:
    // 0x191228: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x191228u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_19122c:
    // 0x19122c: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x19122cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_191230:
    // 0x191230: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x191230u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_191234:
    // 0x191234: 0x10000004  b           . + 4 + (0x4 << 2)
label_191238:
    if (ctx->pc == 0x191238u) {
        ctx->pc = 0x191238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191234u;
        // 0x191238: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19123Cu;
        goto label_19123c;
    }
    ctx->pc = 0x191234u;
    {
        const bool branch_taken_0x191234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191234u;
        // 0x191238: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x191234) {
            ctx->pc = 0x191248u;
            goto label_191248;
        }
    }
    ctx->pc = 0x19123Cu;
label_19123c:
    // 0x19123c: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x19123cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_191240:
    // 0x191240: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x191240u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_191244:
    // 0x191244: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x191244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_191248:
    // 0x191248: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x191248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19124c:
    // 0x19124c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x19124cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_191250:
    // 0x191250: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x191250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_191254:
    // 0x191254: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_191258:
    // 0x191258: 0x0  nop
    ctx->pc = 0x191258u;
    // NOP
label_19125c:
    // 0x19125c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19125cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_191260:
    // 0x191260: 0x0  nop
    ctx->pc = 0x191260u;
    // NOP
label_191264:
    // 0x191264: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_191268:
    if (ctx->pc == 0x191268u) {
        ctx->pc = 0x191268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191264u;
        // 0x191268: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19126Cu;
        goto label_19126c;
    }
    ctx->pc = 0x191264u;
    {
        const bool branch_taken_0x191264 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x191268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191264u;
        // 0x191268: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191264) {
            ctx->pc = 0x191280u;
            goto label_191280;
        }
    }
    ctx->pc = 0x19126Cu;
label_19126c:
    // 0x19126c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x19126cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_191270:
    // 0x191270: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x191270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_191274:
    // 0x191274: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_191278:
    // 0x191278: 0x1000000d  b           . + 4 + (0xD << 2)
label_19127c:
    if (ctx->pc == 0x19127Cu) {
        ctx->pc = 0x19127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191278u;
        // 0x19127c: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x191280u;
        goto label_191280;
    }
    ctx->pc = 0x191278u;
    {
        const bool branch_taken_0x191278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191278u;
        // 0x19127c: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x191278) {
            ctx->pc = 0x1912B0u;
            goto label_1912b0;
        }
    }
    ctx->pc = 0x191280u;
label_191280:
    // 0x191280: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x191280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_191284:
    // 0x191284: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_191288:
    // 0x191288: 0x0  nop
    ctx->pc = 0x191288u;
    // NOP
label_19128c:
    // 0x19128c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19128cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_191290:
    // 0x191290: 0x0  nop
    ctx->pc = 0x191290u;
    // NOP
label_191294:
    // 0x191294: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_191298:
    if (ctx->pc == 0x191298u) {
        ctx->pc = 0x19129Cu;
        goto label_19129c;
    }
    ctx->pc = 0x191294u;
    {
        const bool branch_taken_0x191294 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x191294) {
            ctx->pc = 0x1912B0u;
            goto label_1912b0;
        }
    }
    ctx->pc = 0x19129Cu;
label_19129c:
    // 0x19129c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x19129cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1912a0:
    // 0x1912a0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1912a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1912a4:
    // 0x1912a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1912a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1912a8:
    // 0x1912a8: 0x0  nop
    ctx->pc = 0x1912a8u;
    // NOP
label_1912ac:
    // 0x1912ac: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1912acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1912b0:
    // 0x1912b0: 0xe6010020  swc1        $f1, 0x20($s0)
    ctx->pc = 0x1912b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_1912b4:
    // 0x1912b4: 0x27b10044  addiu       $s1, $sp, 0x44
    ctx->pc = 0x1912b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_1912b8:
    // 0x1912b8: 0xc06d448  jal         func_1B5120
label_1912bc:
    if (ctx->pc == 0x1912BCu) {
        ctx->pc = 0x1912BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1912B8u;
        // 0x1912bc: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1912C0u;
        goto label_1912c0;
    }
    ctx->pc = 0x1912B8u;
    SET_GPR_U32(ctx, 31, 0x1912C0u);
    ctx->pc = 0x1912BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1912B8u;
    // 0x1912bc: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x1912C0u;
label_1912c0:
    // 0x1912c0: 0xc60100c0  lwc1        $f1, 0xC0($s0)
    ctx->pc = 0x1912c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1912c4:
    // 0x1912c4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1912c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1912c8:
    // 0x1912c8: 0x0  nop
    ctx->pc = 0x1912c8u;
    // NOP
label_1912cc:
    // 0x1912cc: 0x45010010  bc1t        . + 4 + (0x10 << 2)
label_1912d0:
    if (ctx->pc == 0x1912D0u) {
        ctx->pc = 0x1912D4u;
        goto label_1912d4;
    }
    ctx->pc = 0x1912CCu;
    {
        const bool branch_taken_0x1912cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1912cc) {
            ctx->pc = 0x191310u;
            goto label_191310;
        }
    }
    ctx->pc = 0x1912D4u;
label_1912d4:
    // 0x1912d4: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x1912d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1912d8:
    // 0x1912d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1912d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1912dc:
    // 0x1912dc: 0x0  nop
    ctx->pc = 0x1912dcu;
    // NOP
label_1912e0:
    // 0x1912e0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1912e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1912e4:
    // 0x1912e4: 0x0  nop
    ctx->pc = 0x1912e4u;
    // NOP
label_1912e8:
    // 0x1912e8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1912ec:
    if (ctx->pc == 0x1912ECu) {
        ctx->pc = 0x1912ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1912E8u;
        // 0x1912ec: 0x46011000  add.s       $f0, $f2, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1912F0u;
        goto label_1912f0;
    }
    ctx->pc = 0x1912E8u;
    {
        const bool branch_taken_0x1912e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1912ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1912E8u;
        // 0x1912ec: 0x46011000  add.s       $f0, $f2, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1912e8) {
            ctx->pc = 0x191304u;
            goto label_191304;
        }
    }
    ctx->pc = 0x1912F0u;
label_1912f0:
    // 0x1912f0: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x1912f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1912f4:
    // 0x1912f4: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x1912f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1912f8:
    // 0x1912f8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1912f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1912fc:
    // 0x1912fc: 0x10000004  b           . + 4 + (0x4 << 2)
label_191300:
    if (ctx->pc == 0x191300u) {
        ctx->pc = 0x191300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1912FCu;
        // 0x191300: 0xe6000020  swc1        $f0, 0x20($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x191304u;
        goto label_191304;
    }
    ctx->pc = 0x1912FCu;
    {
        const bool branch_taken_0x1912fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1912FCu;
        // 0x191300: 0xe6000020  swc1        $f0, 0x20($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1912fc) {
            ctx->pc = 0x191310u;
            goto label_191310;
        }
    }
    ctx->pc = 0x191304u;
label_191304:
    // 0x191304: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x191304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_191308:
    // 0x191308: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x191308u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_19130c:
    // 0x19130c: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x19130cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_191310:
    // 0x191310: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x191310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_191314:
    // 0x191314: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x191314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_191318:
    // 0x191318: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x191318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_19131c:
    // 0x19131c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19131cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_191320:
    // 0x191320: 0x0  nop
    ctx->pc = 0x191320u;
    // NOP
label_191324:
    // 0x191324: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x191324u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_191328:
    // 0x191328: 0x0  nop
    ctx->pc = 0x191328u;
    // NOP
label_19132c:
    // 0x19132c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_191330:
    if (ctx->pc == 0x191330u) {
        ctx->pc = 0x191330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19132Cu;
        // 0x191330: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191334u;
        goto label_191334;
    }
    ctx->pc = 0x19132Cu;
    {
        const bool branch_taken_0x19132c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x191330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19132Cu;
        // 0x191330: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19132c) {
            ctx->pc = 0x191348u;
            goto label_191348;
        }
    }
    ctx->pc = 0x191334u;
label_191334:
    // 0x191334: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x191334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_191338:
    // 0x191338: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x191338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_19133c:
    // 0x19133c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19133cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_191340:
    // 0x191340: 0x1000000d  b           . + 4 + (0xD << 2)
label_191344:
    if (ctx->pc == 0x191344u) {
        ctx->pc = 0x191344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191340u;
        // 0x191344: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x191348u;
        goto label_191348;
    }
    ctx->pc = 0x191340u;
    {
        const bool branch_taken_0x191340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191340u;
        // 0x191344: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x191340) {
            ctx->pc = 0x191378u;
            goto label_191378;
        }
    }
    ctx->pc = 0x191348u;
label_191348:
    // 0x191348: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x191348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_19134c:
    // 0x19134c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19134cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_191350:
    // 0x191350: 0x0  nop
    ctx->pc = 0x191350u;
    // NOP
label_191354:
    // 0x191354: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x191354u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_191358:
    // 0x191358: 0x0  nop
    ctx->pc = 0x191358u;
    // NOP
label_19135c:
    // 0x19135c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_191360:
    if (ctx->pc == 0x191360u) {
        ctx->pc = 0x191364u;
        goto label_191364;
    }
    ctx->pc = 0x19135Cu;
    {
        const bool branch_taken_0x19135c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19135c) {
            ctx->pc = 0x191378u;
            goto label_191378;
        }
    }
    ctx->pc = 0x191364u;
label_191364:
    // 0x191364: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x191364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_191368:
    // 0x191368: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x191368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_19136c:
    // 0x19136c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19136cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_191370:
    // 0x191370: 0x0  nop
    ctx->pc = 0x191370u;
    // NOP
label_191374:
    // 0x191374: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x191374u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_191378:
    // 0x191378: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x191378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_19137c:
    // 0x19137c: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x19137cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_191380:
    // 0x191380: 0xe6010024  swc1        $f1, 0x24($s0)
    ctx->pc = 0x191380u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_191384:
    // 0x191384: 0x24422f90  addiu       $v0, $v0, 0x2F90
    ctx->pc = 0x191384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
label_191388:
    // 0x191388: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x191388u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_19138c:
    // 0x19138c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x19138cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_191390:
    // 0x191390: 0xc066e44  jal         func_19B910
label_191394:
    if (ctx->pc == 0x191394u) {
        ctx->pc = 0x191394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191390u;
        // 0x191394: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191398u;
        goto label_191398;
    }
    ctx->pc = 0x191390u;
    SET_GPR_U32(ctx, 31, 0x191398u);
    ctx->pc = 0x191394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191390u;
    // 0x191394: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x191398u;
label_191398:
    // 0x191398: 0xc60c0028  lwc1        $f12, 0x28($s0)
    ctx->pc = 0x191398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19139c:
    // 0x19139c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x19139cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1913a0:
    // 0x1913a0: 0xc066e6c  jal         func_19B9B0
label_1913a4:
    if (ctx->pc == 0x1913A4u) {
        ctx->pc = 0x1913A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1913A0u;
        // 0x1913a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1913A8u;
        goto label_1913a8;
    }
    ctx->pc = 0x1913A0u;
    SET_GPR_U32(ctx, 31, 0x1913A8u);
    ctx->pc = 0x1913A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1913A0u;
    // 0x1913a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    { ctx->pc = 0x19b9b0; return; }
    ctx->pc = 0x1913A8u;
label_1913a8:
    // 0x1913a8: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x1913a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1913ac:
    // 0x1913ac: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1913acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1913b0:
    // 0x1913b0: 0xc066e96  jal         func_19BA58
label_1913b4:
    if (ctx->pc == 0x1913B4u) {
        ctx->pc = 0x1913B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1913B0u;
        // 0x1913b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1913B8u;
        goto label_1913b8;
    }
    ctx->pc = 0x1913B0u;
    SET_GPR_U32(ctx, 31, 0x1913B8u);
    ctx->pc = 0x1913B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1913B0u;
    // 0x1913b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x1913B8u;
label_1913b8:
    // 0x1913b8: 0xc60c0024  lwc1        $f12, 0x24($s0)
    ctx->pc = 0x1913b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1913bc:
    // 0x1913bc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1913bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1913c0:
    // 0x1913c0: 0xc066ec0  jal         func_19BB00
label_1913c4:
    if (ctx->pc == 0x1913C4u) {
        ctx->pc = 0x1913C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1913C0u;
        // 0x1913c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1913C8u;
        goto label_1913c8;
    }
    ctx->pc = 0x1913C0u;
    SET_GPR_U32(ctx, 31, 0x1913C8u);
    ctx->pc = 0x1913C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1913C0u;
    // 0x1913c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x1913C8u;
label_1913c8:
    // 0x1913c8: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1913c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1913cc:
    // 0x1913cc: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1913ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1913d0:
    // 0x1913d0: 0xc066d7a  jal         func_19B5E8
label_1913d4:
    if (ctx->pc == 0x1913D4u) {
        ctx->pc = 0x1913D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1913D0u;
        // 0x1913d4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1913D8u;
        goto label_1913d8;
    }
    ctx->pc = 0x1913D0u;
    SET_GPR_U32(ctx, 31, 0x1913D8u);
    ctx->pc = 0x1913D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1913D0u;
    // 0x1913d4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x1913D8u;
label_1913d8:
    // 0x1913d8: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1913d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1913dc:
    // 0x1913dc: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x1913dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_1913e0:
    // 0x1913e0: 0xc066e02  jal         func_19B808
label_1913e4:
    if (ctx->pc == 0x1913E4u) {
        ctx->pc = 0x1913E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1913E0u;
        // 0x1913e4: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1913E8u;
        goto label_1913e8;
    }
    ctx->pc = 0x1913E0u;
    SET_GPR_U32(ctx, 31, 0x1913E8u);
    ctx->pc = 0x1913E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1913E0u;
    // 0x1913e4: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x1913E8u;
label_1913e8:
    // 0x1913e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1913e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1913ec:
    // 0x1913ec: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1913ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1913f0:
    // 0x1913f0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1913f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1913f4:
    // 0x1913f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1913f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1913f8:
    // 0x1913f8: 0x3e00008  jr          $ra
label_1913fc:
    if (ctx->pc == 0x1913FCu) {
        ctx->pc = 0x1913FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1913F8u;
        // 0x1913fc: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191400u;
        goto label_191400;
    }
    ctx->pc = 0x1913F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1913FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1913F8u;
        // 0x1913fc: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1913F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191400u;
label_191400:
    // 0x191400: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x191400u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_191404:
    // 0x191404: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x191404u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_191408:
    // 0x191408: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x191408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_19140c:
    // 0x19140c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x19140cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_191410:
    // 0x191410: 0x24632cc0  addiu       $v1, $v1, 0x2CC0
    ctx->pc = 0x191410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11456));
label_191414:
    // 0x191414: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x191414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_191418:
    // 0x191418: 0xac6500dc  sw          $a1, 0xDC($v1)
    ctx->pc = 0x191418u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 220), GPR_U32(ctx, 5));
label_19141c:
    // 0x19141c: 0x3e00008  jr          $ra
label_191420:
    if (ctx->pc == 0x191420u) {
        ctx->pc = 0x191420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19141Cu;
        // 0x191420: 0xac6600e0  sw          $a2, 0xE0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 224), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191424u;
        goto label_191424;
    }
    ctx->pc = 0x19141Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19141Cu;
        // 0x191420: 0xac6600e0  sw          $a2, 0xE0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 224), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19141Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191424u;
label_191424:
    // 0x191424: 0x0  nop
    ctx->pc = 0x191424u;
    // NOP
label_191428:
    // 0x191428: 0x0  nop
    ctx->pc = 0x191428u;
    // NOP
label_19142c:
    // 0x19142c: 0x0  nop
    ctx->pc = 0x19142cu;
    // NOP
label_191430:
    // 0x191430: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x191430u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_191434:
    // 0x191434: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x191434u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_191438:
    // 0x191438: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x191438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_19143c:
    // 0x19143c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x19143cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_191440:
    // 0x191440: 0x24632cc0  addiu       $v1, $v1, 0x2CC0
    ctx->pc = 0x191440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11456));
label_191444:
    // 0x191444: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x191444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_191448:
    // 0x191448: 0xac6500d4  sw          $a1, 0xD4($v1)
    ctx->pc = 0x191448u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 212), GPR_U32(ctx, 5));
label_19144c:
    // 0x19144c: 0x3e00008  jr          $ra
label_191450:
    if (ctx->pc == 0x191450u) {
        ctx->pc = 0x191450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19144Cu;
        // 0x191450: 0xac6600d8  sw          $a2, 0xD8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 216), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191454u;
        goto label_191454;
    }
    ctx->pc = 0x19144Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19144Cu;
        // 0x191450: 0xac6600d8  sw          $a2, 0xD8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 216), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19144Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191454u;
label_191454:
    // 0x191454: 0x0  nop
    ctx->pc = 0x191454u;
    // NOP
label_191458:
    // 0x191458: 0x0  nop
    ctx->pc = 0x191458u;
    // NOP
label_19145c:
    // 0x19145c: 0x0  nop
    ctx->pc = 0x19145cu;
    // NOP
    ctx->pc = 0x191460u;
    return;
}
