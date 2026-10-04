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


void FUN_0019b618_part309(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x231c58u: goto label_231c58;
        case 0x231c5cu: goto label_231c5c;
        case 0x231c60u: goto label_231c60;
        case 0x231c64u: goto label_231c64;
        case 0x231c68u: goto label_231c68;
        case 0x231c6cu: goto label_231c6c;
        case 0x231c70u: goto label_231c70;
        case 0x231c74u: goto label_231c74;
        case 0x231c78u: goto label_231c78;
        case 0x231c7cu: goto label_231c7c;
        case 0x231c80u: goto label_231c80;
        case 0x231c84u: goto label_231c84;
        case 0x231c88u: goto label_231c88;
        case 0x231c8cu: goto label_231c8c;
        case 0x231c90u: goto label_231c90;
        case 0x231c94u: goto label_231c94;
        case 0x231c98u: goto label_231c98;
        case 0x231c9cu: goto label_231c9c;
        case 0x231ca0u: goto label_231ca0;
        case 0x231ca4u: goto label_231ca4;
        case 0x231ca8u: goto label_231ca8;
        case 0x231cacu: goto label_231cac;
        case 0x231cb0u: goto label_231cb0;
        case 0x231cb4u: goto label_231cb4;
        case 0x231cb8u: goto label_231cb8;
        case 0x231cbcu: goto label_231cbc;
        case 0x231cc0u: goto label_231cc0;
        case 0x231cc4u: goto label_231cc4;
        case 0x231cc8u: goto label_231cc8;
        case 0x231cccu: goto label_231ccc;
        case 0x231cd0u: goto label_231cd0;
        case 0x231cd4u: goto label_231cd4;
        case 0x231cd8u: goto label_231cd8;
        case 0x231cdcu: goto label_231cdc;
        case 0x231ce0u: goto label_231ce0;
        case 0x231ce4u: goto label_231ce4;
        case 0x231ce8u: goto label_231ce8;
        case 0x231cecu: goto label_231cec;
        case 0x231cf0u: goto label_231cf0;
        case 0x231cf4u: goto label_231cf4;
        case 0x231cf8u: goto label_231cf8;
        case 0x231cfcu: goto label_231cfc;
        case 0x231d00u: goto label_231d00;
        case 0x231d04u: goto label_231d04;
        case 0x231d08u: goto label_231d08;
        case 0x231d0cu: goto label_231d0c;
        case 0x231d10u: goto label_231d10;
        case 0x231d14u: goto label_231d14;
        case 0x231d18u: goto label_231d18;
        case 0x231d1cu: goto label_231d1c;
        case 0x231d20u: goto label_231d20;
        case 0x231d24u: goto label_231d24;
        case 0x231d28u: goto label_231d28;
        case 0x231d2cu: goto label_231d2c;
        case 0x231d30u: goto label_231d30;
        case 0x231d34u: goto label_231d34;
        case 0x231d38u: goto label_231d38;
        case 0x231d3cu: goto label_231d3c;
        case 0x231d40u: goto label_231d40;
        case 0x231d44u: goto label_231d44;
        case 0x231d48u: goto label_231d48;
        case 0x231d4cu: goto label_231d4c;
        case 0x231d50u: goto label_231d50;
        case 0x231d54u: goto label_231d54;
        case 0x231d58u: goto label_231d58;
        case 0x231d5cu: goto label_231d5c;
        case 0x231d60u: goto label_231d60;
        case 0x231d64u: goto label_231d64;
        case 0x231d68u: goto label_231d68;
        case 0x231d6cu: goto label_231d6c;
        case 0x231d70u: goto label_231d70;
        case 0x231d74u: goto label_231d74;
        case 0x231d78u: goto label_231d78;
        case 0x231d7cu: goto label_231d7c;
        case 0x231d80u: goto label_231d80;
        case 0x231d84u: goto label_231d84;
        case 0x231d88u: goto label_231d88;
        case 0x231d8cu: goto label_231d8c;
        case 0x231d90u: goto label_231d90;
        case 0x231d94u: goto label_231d94;
        case 0x231d98u: goto label_231d98;
        case 0x231d9cu: goto label_231d9c;
        case 0x231da0u: goto label_231da0;
        case 0x231da4u: goto label_231da4;
        case 0x231da8u: goto label_231da8;
        case 0x231dacu: goto label_231dac;
        case 0x231db0u: goto label_231db0;
        case 0x231db4u: goto label_231db4;
        case 0x231db8u: goto label_231db8;
        case 0x231dbcu: goto label_231dbc;
        case 0x231dc0u: goto label_231dc0;
        case 0x231dc4u: goto label_231dc4;
        case 0x231dc8u: goto label_231dc8;
        case 0x231dccu: goto label_231dcc;
        case 0x231dd0u: goto label_231dd0;
        case 0x231dd4u: goto label_231dd4;
        case 0x231dd8u: goto label_231dd8;
        case 0x231ddcu: goto label_231ddc;
        case 0x231de0u: goto label_231de0;
        case 0x231de4u: goto label_231de4;
        case 0x231de8u: goto label_231de8;
        case 0x231decu: goto label_231dec;
        case 0x231df0u: goto label_231df0;
        case 0x231df4u: goto label_231df4;
        case 0x231df8u: goto label_231df8;
        case 0x231dfcu: goto label_231dfc;
        case 0x231e00u: goto label_231e00;
        case 0x231e04u: goto label_231e04;
        case 0x231e08u: goto label_231e08;
        case 0x231e0cu: goto label_231e0c;
        case 0x231e10u: goto label_231e10;
        case 0x231e14u: goto label_231e14;
        case 0x231e18u: goto label_231e18;
        case 0x231e1cu: goto label_231e1c;
        case 0x231e20u: goto label_231e20;
        case 0x231e24u: goto label_231e24;
        case 0x231e28u: goto label_231e28;
        case 0x231e2cu: goto label_231e2c;
        case 0x231e30u: goto label_231e30;
        case 0x231e34u: goto label_231e34;
        case 0x231e38u: goto label_231e38;
        case 0x231e3cu: goto label_231e3c;
        case 0x231e40u: goto label_231e40;
        case 0x231e44u: goto label_231e44;
        case 0x231e48u: goto label_231e48;
        case 0x231e4cu: goto label_231e4c;
        case 0x231e50u: goto label_231e50;
        case 0x231e54u: goto label_231e54;
        case 0x231e58u: goto label_231e58;
        case 0x231e5cu: goto label_231e5c;
        case 0x231e60u: goto label_231e60;
        case 0x231e64u: goto label_231e64;
        case 0x231e68u: goto label_231e68;
        case 0x231e6cu: goto label_231e6c;
        case 0x231e70u: goto label_231e70;
        case 0x231e74u: goto label_231e74;
        case 0x231e78u: goto label_231e78;
        case 0x231e7cu: goto label_231e7c;
        case 0x231e80u: goto label_231e80;
        case 0x231e84u: goto label_231e84;
        case 0x231e88u: goto label_231e88;
        case 0x231e8cu: goto label_231e8c;
        case 0x231e90u: goto label_231e90;
        case 0x231e94u: goto label_231e94;
        case 0x231e98u: goto label_231e98;
        case 0x231e9cu: goto label_231e9c;
        case 0x231ea0u: goto label_231ea0;
        case 0x231ea4u: goto label_231ea4;
        case 0x231ea8u: goto label_231ea8;
        case 0x231eacu: goto label_231eac;
        case 0x231eb0u: goto label_231eb0;
        case 0x231eb4u: goto label_231eb4;
        case 0x231eb8u: goto label_231eb8;
        case 0x231ebcu: goto label_231ebc;
        case 0x231ec0u: goto label_231ec0;
        case 0x231ec4u: goto label_231ec4;
        case 0x231ec8u: goto label_231ec8;
        case 0x231eccu: goto label_231ecc;
        case 0x231ed0u: goto label_231ed0;
        case 0x231ed4u: goto label_231ed4;
        case 0x231ed8u: goto label_231ed8;
        case 0x231edcu: goto label_231edc;
        case 0x231ee0u: goto label_231ee0;
        case 0x231ee4u: goto label_231ee4;
        case 0x231ee8u: goto label_231ee8;
        case 0x231eecu: goto label_231eec;
        case 0x231ef0u: goto label_231ef0;
        case 0x231ef4u: goto label_231ef4;
        case 0x231ef8u: goto label_231ef8;
        case 0x231efcu: goto label_231efc;
        case 0x231f00u: goto label_231f00;
        case 0x231f04u: goto label_231f04;
        case 0x231f08u: goto label_231f08;
        case 0x231f0cu: goto label_231f0c;
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
        default: return;
    }

label_231c58:
    // 0x231c58: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x231c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_231c5c:
    // 0x231c5c: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x231c5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_231c60:
    // 0x231c60: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x231c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_231c64:
    // 0x231c64: 0x215f021  addu        $fp, $s0, $s5
    ctx->pc = 0x231c64u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
label_231c68:
    // 0x231c68: 0x2273821  addu        $a3, $s1, $a3
    ctx->pc = 0x231c68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
label_231c6c:
    // 0x231c6c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x231c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_231c70:
    // 0x231c70: 0xfe382a  slt         $a3, $a3, $fp
    ctx->pc = 0x231c70u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_231c74:
    // 0x231c74: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x231c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_231c78:
    // 0x231c78: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x231c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_231c7c:
    // 0x231c7c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x231c7cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_231c80:
    // 0x231c80: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x231c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_231c84:
    // 0x231c84: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x231c84u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_231c88:
    // 0x231c88: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x231c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_231c8c:
    // 0x231c8c: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x231c8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_231c90:
    // 0x231c90: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x231c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_231c94:
    // 0x231c94: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x231c94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_231c98:
    // 0x231c98: 0x14e00028  bnez        $a3, . + 4 + (0x28 << 2)
label_231c9c:
    if (ctx->pc == 0x231C9Cu) {
        ctx->pc = 0x231C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231C98u;
        // 0x231c9c: 0x140a02d  daddu       $s4, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231CA0u;
        goto label_231ca0;
    }
    ctx->pc = 0x231C98u;
    {
        const bool branch_taken_0x231c98 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x231C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231C98u;
        // 0x231c9c: 0x140a02d  daddu       $s4, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231c98) {
            ctx->pc = 0x231D3Cu;
            goto label_231d3c;
        }
    }
    ctx->pc = 0x231CA0u;
label_231ca0:
    // 0x231ca0: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
label_231ca4:
    if (ctx->pc == 0x231CA4u) {
        ctx->pc = 0x231CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231CA0u;
        // 0x231ca4: 0x2309823  subu        $s3, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231CA8u;
        goto label_231ca8;
    }
    ctx->pc = 0x231CA0u;
    {
        const bool branch_taken_0x231ca0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x231ca0) {
            ctx->pc = 0x231CA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231CA0u;
            // 0x231ca4: 0x2309823  subu        $s3, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231CE0u;
            goto label_231ce0;
        }
    }
    ctx->pc = 0x231CA8u;
label_231ca8:
    // 0x231ca8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x231ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_231cac:
    // 0x231cac: 0xc08e93e  jal         func_23A4F8
label_231cb0:
    if (ctx->pc == 0x231CB0u) {
        ctx->pc = 0x231CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231CACu;
        // 0x231cb0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231CB4u;
        goto label_231cb4;
    }
    ctx->pc = 0x231CACu;
    SET_GPR_U32(ctx, 31, 0x231CB4u);
    ctx->pc = 0x231CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231CACu;
    // 0x231cb0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x231CB4u;
label_231cb4:
    // 0x231cb4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x231cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_231cb8:
    // 0x231cb8: 0x2512821  addu        $a1, $s2, $s1
    ctx->pc = 0x231cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_231cbc:
    // 0x231cbc: 0xc08e93e  jal         func_23A4F8
label_231cc0:
    if (ctx->pc == 0x231CC0u) {
        ctx->pc = 0x231CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231CBCu;
        // 0x231cc0: 0x2113023  subu        $a2, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231CC4u;
        goto label_231cc4;
    }
    ctx->pc = 0x231CBCu;
    SET_GPR_U32(ctx, 31, 0x231CC4u);
    ctx->pc = 0x231CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231CBCu;
    // 0x231cc0: 0x2113023  subu        $a2, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x231CC4u;
label_231cc4:
    // 0x231cc4: 0x2d02021  addu        $a0, $s6, $s0
    ctx->pc = 0x231cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_231cc8:
    // 0x231cc8: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x231cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_231ccc:
    // 0x231ccc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x231cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_231cd0:
    // 0x231cd0: 0xc08e93e  jal         func_23A4F8
label_231cd4:
    if (ctx->pc == 0x231CD4u) {
        ctx->pc = 0x231CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231CD0u;
        // 0x231cd4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231CD8u;
        goto label_231cd8;
    }
    ctx->pc = 0x231CD0u;
    SET_GPR_U32(ctx, 31, 0x231CD8u);
    ctx->pc = 0x231CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231CD0u;
    // 0x231cd4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x231CD8u;
label_231cd8:
    // 0x231cd8: 0x10000018  b           . + 4 + (0x18 << 2)
label_231cdc:
    if (ctx->pc == 0x231CDCu) {
        ctx->pc = 0x231CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231CD8u;
        // 0x231cdc: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231CE0u;
        goto label_231ce0;
    }
    ctx->pc = 0x231CD8u;
    {
        const bool branch_taken_0x231cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231CD8u;
        // 0x231cdc: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231cd8) {
            ctx->pc = 0x231D3Cu;
            goto label_231d3c;
        }
    }
    ctx->pc = 0x231CE0u;
label_231ce0:
    // 0x231ce0: 0x2b3102a  slt         $v0, $s5, $s3
    ctx->pc = 0x231ce0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_231ce4:
    // 0x231ce4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_231ce8:
    if (ctx->pc == 0x231CE8u) {
        ctx->pc = 0x231CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231CE4u;
        // 0x231ce8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231CECu;
        goto label_231cec;
    }
    ctx->pc = 0x231CE4u;
    {
        const bool branch_taken_0x231ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x231CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231CE4u;
        // 0x231ce8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231ce4) {
            ctx->pc = 0x231D20u;
            goto label_231d20;
        }
    }
    ctx->pc = 0x231CECu;
label_231cec:
    // 0x231cec: 0xc08e93e  jal         func_23A4F8
label_231cf0:
    if (ctx->pc == 0x231CF0u) {
        ctx->pc = 0x231CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231CECu;
        // 0x231cf0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231CF4u;
        goto label_231cf4;
    }
    ctx->pc = 0x231CECu;
    SET_GPR_U32(ctx, 31, 0x231CF4u);
    ctx->pc = 0x231CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231CECu;
    // 0x231cf0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x231CF4u;
label_231cf4:
    // 0x231cf4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x231cf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_231cf8:
    // 0x231cf8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x231cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_231cfc:
    // 0x231cfc: 0xc08e93e  jal         func_23A4F8
label_231d00:
    if (ctx->pc == 0x231D00u) {
        ctx->pc = 0x231D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231CFCu;
        // 0x231d00: 0x2f02021  addu        $a0, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231D04u;
        goto label_231d04;
    }
    ctx->pc = 0x231CFCu;
    SET_GPR_U32(ctx, 31, 0x231D04u);
    ctx->pc = 0x231D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231CFCu;
    // 0x231d00: 0x2f02021  addu        $a0, $s7, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x231D04u;
label_231d04:
    // 0x231d04: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x231d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_231d08:
    // 0x231d08: 0xb02823  subu        $a1, $a1, $s0
    ctx->pc = 0x231d08u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_231d0c:
    // 0x231d0c: 0x2b33023  subu        $a2, $s5, $s3
    ctx->pc = 0x231d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_231d10:
    // 0x231d10: 0xc08e93e  jal         func_23A4F8
label_231d14:
    if (ctx->pc == 0x231D14u) {
        ctx->pc = 0x231D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231D10u;
        // 0x231d14: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231D18u;
        goto label_231d18;
    }
    ctx->pc = 0x231D10u;
    SET_GPR_U32(ctx, 31, 0x231D18u);
    ctx->pc = 0x231D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231D10u;
    // 0x231d14: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x231D18u;
label_231d18:
    // 0x231d18: 0x10000008  b           . + 4 + (0x8 << 2)
label_231d1c:
    if (ctx->pc == 0x231D1Cu) {
        ctx->pc = 0x231D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231D18u;
        // 0x231d1c: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231D20u;
        goto label_231d20;
    }
    ctx->pc = 0x231D18u;
    {
        const bool branch_taken_0x231d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231D18u;
        // 0x231d1c: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231d18) {
            ctx->pc = 0x231D3Cu;
            goto label_231d3c;
        }
    }
    ctx->pc = 0x231D20u;
label_231d20:
    // 0x231d20: 0xc08e93e  jal         func_23A4F8
label_231d24:
    if (ctx->pc == 0x231D24u) {
        ctx->pc = 0x231D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231D20u;
        // 0x231d24: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231D28u;
        goto label_231d28;
    }
    ctx->pc = 0x231D20u;
    SET_GPR_U32(ctx, 31, 0x231D28u);
    ctx->pc = 0x231D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231D20u;
    // 0x231d24: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x231D28u;
label_231d28:
    // 0x231d28: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x231d28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_231d2c:
    // 0x231d2c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x231d2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_231d30:
    // 0x231d30: 0xc08e93e  jal         func_23A4F8
label_231d34:
    if (ctx->pc == 0x231D34u) {
        ctx->pc = 0x231D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231D30u;
        // 0x231d34: 0x2f02021  addu        $a0, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231D38u;
        goto label_231d38;
    }
    ctx->pc = 0x231D30u;
    SET_GPR_U32(ctx, 31, 0x231D38u);
    ctx->pc = 0x231D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231D30u;
    // 0x231d34: 0x2f02021  addu        $a0, $s7, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x231D38u;
label_231d38:
    // 0x231d38: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x231d38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_231d3c:
    // 0x231d3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x231d3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_231d40:
    // 0x231d40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x231d40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_231d44:
    // 0x231d44: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x231d44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_231d48:
    // 0x231d48: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x231d48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_231d4c:
    // 0x231d4c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x231d4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_231d50:
    // 0x231d50: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x231d50u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_231d54:
    // 0x231d54: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x231d54u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_231d58:
    // 0x231d58: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x231d58u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_231d5c:
    // 0x231d5c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x231d5cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_231d60:
    // 0x231d60: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x231d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_231d64:
    // 0x231d64: 0x3e00008  jr          $ra
label_231d68:
    if (ctx->pc == 0x231D68u) {
        ctx->pc = 0x231D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231D64u;
        // 0x231d68: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231D6Cu;
        goto label_231d6c;
    }
    ctx->pc = 0x231D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231D64u;
        // 0x231d68: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231D6Cu;
label_231d6c:
    // 0x231d6c: 0x0  nop
    ctx->pc = 0x231d6cu;
    // NOP
label_231d70:
    // 0x231d70: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x231d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_231d74:
    // 0x231d74: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x231d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_231d78:
    // 0x231d78: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x231d78u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
label_231d7c:
    // 0x231d7c: 0xac208004  sw          $zero, -0x7FFC($at)
    ctx->pc = 0x231d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294934532), GPR_U32(ctx, 0));
label_231d80:
    // 0x231d80: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x231d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_231d84:
    // 0x231d84: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x231d84u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
label_231d88:
    // 0x231d88: 0xac228008  sw          $v0, -0x7FF8($at)
    ctx->pc = 0x231d88u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294934536), GPR_U32(ctx, 2));
label_231d8c:
    // 0x231d8c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x231d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_231d90:
    // 0x231d90: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x231d90u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
label_231d94:
    // 0x231d94: 0x3e00008  jr          $ra
label_231d98:
    if (ctx->pc == 0x231D98u) {
        ctx->pc = 0x231D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231D94u;
        // 0x231d98: 0xac208000  sw          $zero, -0x8000($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294934528), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231D9Cu;
        goto label_231d9c;
    }
    ctx->pc = 0x231D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231D94u;
        // 0x231d98: 0xac208000  sw          $zero, -0x8000($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294934528), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231D9Cu;
label_231d9c:
    // 0x231d9c: 0x0  nop
    ctx->pc = 0x231d9cu;
    // NOP
label_231da0:
    // 0x231da0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x231da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_231da4:
    // 0x231da4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x231da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_231da8:
    // 0x231da8: 0x8c428004  lw          $v0, -0x7FFC($v0)
    ctx->pc = 0x231da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294934532)));
label_231dac:
    // 0x231dac: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x231dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_231db0:
    // 0x231db0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x231db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_231db4:
    // 0x231db4: 0x8c638008  lw          $v1, -0x7FF8($v1)
    ctx->pc = 0x231db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294934536)));
label_231db8:
    // 0x231db8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x231db8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_231dbc:
    // 0x231dbc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_231dc0:
    if (ctx->pc == 0x231DC0u) {
        ctx->pc = 0x231DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231DBCu;
        // 0x231dc0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231DC4u;
        goto label_231dc4;
    }
    ctx->pc = 0x231DBCu;
    {
        const bool branch_taken_0x231dbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x231DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231DBCu;
        // 0x231dc0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231dbc) {
            ctx->pc = 0x231DD8u;
            goto label_231dd8;
        }
    }
    ctx->pc = 0x231DC4u;
label_231dc4:
    // 0x231dc4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x231dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_231dc8:
    // 0x231dc8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x231dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_231dcc:
    // 0x231dcc: 0x8c638000  lw          $v1, -0x8000($v1)
    ctx->pc = 0x231dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294934528)));
label_231dd0:
    // 0x231dd0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x231dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_231dd4:
    // 0x231dd4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x231dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_231dd8:
    // 0x231dd8: 0x3e00008  jr          $ra
label_231ddc:
    if (ctx->pc == 0x231DDCu) {
        ctx->pc = 0x231DE0u;
        goto label_231de0;
    }
    ctx->pc = 0x231DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231DE0u;
label_231de0:
    // 0x231de0: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x231de0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
label_231de4:
    // 0x231de4: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x231de4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_231de8:
    // 0x231de8: 0x8ce78008  lw          $a3, -0x7FF8($a3)
    ctx->pc = 0x231de8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294934536)));
label_231dec:
    // 0x231dec: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x231decu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
label_231df0:
    // 0x231df0: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x231df0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_231df4:
    // 0x231df4: 0x8d088004  lw          $t0, -0x7FFC($t0)
    ctx->pc = 0x231df4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294934532)));
label_231df8:
    // 0x231df8: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x231df8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
label_231dfc:
    // 0x231dfc: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x231dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_231e00:
    // 0x231e00: 0x8cc68000  lw          $a2, -0x8000($a2)
    ctx->pc = 0x231e00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294934528)));
label_231e04:
    // 0x231e04: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
label_231e08:
    if (ctx->pc == 0x231E08u) {
        ctx->pc = 0x231E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231E04u;
        // 0x231e08: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x231E0Cu;
        goto label_231e0c;
    }
    ctx->pc = 0x231E04u;
    {
        const bool branch_taken_0x231e04 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x231e04) {
            ctx->pc = 0x231E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231E04u;
            // 0x231e08: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x231E0Cu;
            goto label_231e0c;
        }
    }
    ctx->pc = 0x231E0Cu;
label_231e0c:
    // 0x231e0c: 0xe81023  subu        $v0, $a3, $t0
    ctx->pc = 0x231e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_231e10:
    // 0x231e10: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x231e10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_231e14:
    // 0x231e14: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x231e14u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_231e18:
    // 0x231e18: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x231e18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_231e1c:
    // 0x231e1c: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x231e1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_231e20:
    // 0x231e20: 0xc7001a  div         $zero, $a2, $a3
    ctx->pc = 0x231e20u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_231e24:
    // 0x231e24: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x231e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_231e28:
    // 0x231e28: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x231e28u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
label_231e2c:
    // 0x231e2c: 0xac288004  sw          $t0, -0x7FFC($at)
    ctx->pc = 0x231e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294934532), GPR_U32(ctx, 8));
label_231e30:
    // 0x231e30: 0x1810  mfhi        $v1
    ctx->pc = 0x231e30u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_231e34:
    // 0x231e34: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x231e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_231e38:
    // 0x231e38: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x231e38u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
label_231e3c:
    // 0x231e3c: 0x3e00008  jr          $ra
label_231e40:
    if (ctx->pc == 0x231E40u) {
        ctx->pc = 0x231E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231E3Cu;
        // 0x231e40: 0xac238000  sw          $v1, -0x8000($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294934528), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231E44u;
        goto label_231e44;
    }
    ctx->pc = 0x231E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231E3Cu;
        // 0x231e40: 0xac238000  sw          $v1, -0x8000($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294934528), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231E44u;
label_231e44:
    // 0x231e44: 0x0  nop
    ctx->pc = 0x231e44u;
    // NOP
label_231e48:
    // 0x231e48: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x231e48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_231e4c:
    // 0x231e4c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x231e4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_231e50:
    // 0x231e50: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x231e50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_231e54:
    // 0x231e54: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x231e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_231e58:
    // 0x231e58: 0x8c638004  lw          $v1, -0x7FFC($v1)
    ctx->pc = 0x231e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294934532)));
label_231e5c:
    // 0x231e5c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_231e60:
    if (ctx->pc == 0x231E60u) {
        ctx->pc = 0x231E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231E5Cu;
        // 0x231e60: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231E64u;
        goto label_231e64;
    }
    ctx->pc = 0x231E5Cu;
    {
        const bool branch_taken_0x231e5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x231E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231E5Cu;
        // 0x231e60: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231e5c) {
            ctx->pc = 0x231E9Cu;
            goto label_231e9c;
        }
    }
    ctx->pc = 0x231E64u;
label_231e64:
    // 0x231e64: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x231e64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_231e68:
    // 0x231e68: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x231e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_231e6c:
    // 0x231e6c: 0x8c848000  lw          $a0, -0x8000($a0)
    ctx->pc = 0x231e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294934528)));
label_231e70:
    // 0x231e70: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x231e70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_231e74:
    // 0x231e74: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x231e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_231e78:
    // 0x231e78: 0x8ca58008  lw          $a1, -0x7FF8($a1)
    ctx->pc = 0x231e78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294934536)));
label_231e7c:
    // 0x231e7c: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x231e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_231e80:
    // 0x231e80: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x231e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_231e84:
    // 0x231e84: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
label_231e88:
    if (ctx->pc == 0x231E88u) {
        ctx->pc = 0x231E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231E84u;
        // 0x231e88: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x231E8Cu;
        goto label_231e8c;
    }
    ctx->pc = 0x231E84u;
    {
        const bool branch_taken_0x231e84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x231e84) {
            ctx->pc = 0x231E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231E84u;
            // 0x231e88: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x231E8Cu;
            goto label_231e8c;
        }
    }
    ctx->pc = 0x231E8Cu;
label_231e8c:
    // 0x231e8c: 0x85001a  div         $zero, $a0, $a1
    ctx->pc = 0x231e8cu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_231e90:
    // 0x231e90: 0x1810  mfhi        $v1
    ctx->pc = 0x231e90u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_231e94:
    // 0x231e94: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x231e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_231e98:
    // 0x231e98: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x231e98u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_231e9c:
    // 0x231e9c: 0x3e00008  jr          $ra
label_231ea0:
    if (ctx->pc == 0x231EA0u) {
        ctx->pc = 0x231EA4u;
        goto label_231ea4;
    }
    ctx->pc = 0x231E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231EA4u;
label_231ea4:
    // 0x231ea4: 0x0  nop
    ctx->pc = 0x231ea4u;
    // NOP
label_231ea8:
    // 0x231ea8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x231ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_231eac:
    // 0x231eac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x231eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_231eb0:
    // 0x231eb0: 0x8c428004  lw          $v0, -0x7FFC($v0)
    ctx->pc = 0x231eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294934532)));
label_231eb4:
    // 0x231eb4: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x231eb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_231eb8:
    // 0x231eb8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x231eb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_231ebc:
    // 0x231ebc: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x231ebcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_231ec0:
    // 0x231ec0: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x231ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_231ec4:
    // 0x231ec4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x231ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_231ec8:
    // 0x231ec8: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x231ec8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
label_231ecc:
    // 0x231ecc: 0x3e00008  jr          $ra
label_231ed0:
    if (ctx->pc == 0x231ED0u) {
        ctx->pc = 0x231ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231ECCu;
        // 0x231ed0: 0xac268004  sw          $a2, -0x7FFC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294934532), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231ED4u;
        goto label_231ed4;
    }
    ctx->pc = 0x231ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231ECCu;
        // 0x231ed0: 0xac268004  sw          $a2, -0x7FFC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294934532), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231ED4u;
label_231ed4:
    // 0x231ed4: 0x0  nop
    ctx->pc = 0x231ed4u;
    // NOP
label_231ed8:
    // 0x231ed8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x231ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_231edc:
    // 0x231edc: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x231edcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
label_231ee0:
    // 0x231ee0: 0xac860034  sw          $a2, 0x34($a0)
    ctx->pc = 0x231ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 6));
label_231ee4:
    // 0x231ee4: 0xac870040  sw          $a3, 0x40($a0)
    ctx->pc = 0x231ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 7));
label_231ee8:
    // 0x231ee8: 0xac880048  sw          $t0, 0x48($a0)
    ctx->pc = 0x231ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 8));
label_231eec:
    // 0x231eec: 0xac89004c  sw          $t1, 0x4C($a0)
    ctx->pc = 0x231eecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 9));
label_231ef0:
    // 0x231ef0: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x231ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
label_231ef4:
    // 0x231ef4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x231ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_231ef8:
    // 0x231ef8: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x231ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
label_231efc:
    // 0x231efc: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x231efcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
label_231f00:
    // 0x231f00: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x231f00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
label_231f04:
    // 0x231f04: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x231f04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
label_231f08:
    // 0x231f08: 0x3e00008  jr          $ra
label_231f0c:
    if (ctx->pc == 0x231F0Cu) {
        ctx->pc = 0x231F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231F08u;
        // 0x231f0c: 0xac800054  sw          $zero, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231F10u;
        goto label_231f10;
    }
    ctx->pc = 0x231F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231F08u;
        // 0x231f0c: 0xac800054  sw          $zero, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231F10u;
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
    ctx->pc = 0x232428u;
    return;
}
