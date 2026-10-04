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


void FUN_0019b8d0_part407(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x261cb0u: goto label_261cb0;
        case 0x261cb4u: goto label_261cb4;
        case 0x261cb8u: goto label_261cb8;
        case 0x261cbcu: goto label_261cbc;
        case 0x261cc0u: goto label_261cc0;
        case 0x261cc4u: goto label_261cc4;
        case 0x261cc8u: goto label_261cc8;
        case 0x261cccu: goto label_261ccc;
        case 0x261cd0u: goto label_261cd0;
        case 0x261cd4u: goto label_261cd4;
        case 0x261cd8u: goto label_261cd8;
        case 0x261cdcu: goto label_261cdc;
        case 0x261ce0u: goto label_261ce0;
        case 0x261ce4u: goto label_261ce4;
        case 0x261ce8u: goto label_261ce8;
        case 0x261cecu: goto label_261cec;
        case 0x261cf0u: goto label_261cf0;
        case 0x261cf4u: goto label_261cf4;
        case 0x261cf8u: goto label_261cf8;
        case 0x261cfcu: goto label_261cfc;
        case 0x261d00u: goto label_261d00;
        case 0x261d04u: goto label_261d04;
        case 0x261d08u: goto label_261d08;
        case 0x261d0cu: goto label_261d0c;
        case 0x261d10u: goto label_261d10;
        case 0x261d14u: goto label_261d14;
        case 0x261d18u: goto label_261d18;
        case 0x261d1cu: goto label_261d1c;
        case 0x261d20u: goto label_261d20;
        case 0x261d24u: goto label_261d24;
        case 0x261d28u: goto label_261d28;
        case 0x261d2cu: goto label_261d2c;
        case 0x261d30u: goto label_261d30;
        case 0x261d34u: goto label_261d34;
        case 0x261d38u: goto label_261d38;
        case 0x261d3cu: goto label_261d3c;
        case 0x261d40u: goto label_261d40;
        case 0x261d44u: goto label_261d44;
        case 0x261d48u: goto label_261d48;
        case 0x261d4cu: goto label_261d4c;
        case 0x261d50u: goto label_261d50;
        case 0x261d54u: goto label_261d54;
        case 0x261d58u: goto label_261d58;
        case 0x261d5cu: goto label_261d5c;
        case 0x261d60u: goto label_261d60;
        case 0x261d64u: goto label_261d64;
        case 0x261d68u: goto label_261d68;
        case 0x261d6cu: goto label_261d6c;
        case 0x261d70u: goto label_261d70;
        case 0x261d74u: goto label_261d74;
        case 0x261d78u: goto label_261d78;
        case 0x261d7cu: goto label_261d7c;
        case 0x261d80u: goto label_261d80;
        case 0x261d84u: goto label_261d84;
        case 0x261d88u: goto label_261d88;
        case 0x261d8cu: goto label_261d8c;
        case 0x261d90u: goto label_261d90;
        case 0x261d94u: goto label_261d94;
        case 0x261d98u: goto label_261d98;
        case 0x261d9cu: goto label_261d9c;
        case 0x261da0u: goto label_261da0;
        case 0x261da4u: goto label_261da4;
        case 0x261da8u: goto label_261da8;
        case 0x261dacu: goto label_261dac;
        case 0x261db0u: goto label_261db0;
        case 0x261db4u: goto label_261db4;
        case 0x261db8u: goto label_261db8;
        case 0x261dbcu: goto label_261dbc;
        case 0x261dc0u: goto label_261dc0;
        case 0x261dc4u: goto label_261dc4;
        case 0x261dc8u: goto label_261dc8;
        case 0x261dccu: goto label_261dcc;
        case 0x261dd0u: goto label_261dd0;
        case 0x261dd4u: goto label_261dd4;
        case 0x261dd8u: goto label_261dd8;
        case 0x261ddcu: goto label_261ddc;
        case 0x261de0u: goto label_261de0;
        case 0x261de4u: goto label_261de4;
        case 0x261de8u: goto label_261de8;
        case 0x261decu: goto label_261dec;
        case 0x261df0u: goto label_261df0;
        case 0x261df4u: goto label_261df4;
        case 0x261df8u: goto label_261df8;
        case 0x261dfcu: goto label_261dfc;
        case 0x261e00u: goto label_261e00;
        case 0x261e04u: goto label_261e04;
        case 0x261e08u: goto label_261e08;
        case 0x261e0cu: goto label_261e0c;
        case 0x261e10u: goto label_261e10;
        case 0x261e14u: goto label_261e14;
        case 0x261e18u: goto label_261e18;
        case 0x261e1cu: goto label_261e1c;
        case 0x261e20u: goto label_261e20;
        case 0x261e24u: goto label_261e24;
        case 0x261e28u: goto label_261e28;
        case 0x261e2cu: goto label_261e2c;
        case 0x261e30u: goto label_261e30;
        case 0x261e34u: goto label_261e34;
        case 0x261e38u: goto label_261e38;
        case 0x261e3cu: goto label_261e3c;
        case 0x261e40u: goto label_261e40;
        case 0x261e44u: goto label_261e44;
        case 0x261e48u: goto label_261e48;
        case 0x261e4cu: goto label_261e4c;
        case 0x261e50u: goto label_261e50;
        case 0x261e54u: goto label_261e54;
        case 0x261e58u: goto label_261e58;
        case 0x261e5cu: goto label_261e5c;
        case 0x261e60u: goto label_261e60;
        case 0x261e64u: goto label_261e64;
        case 0x261e68u: goto label_261e68;
        case 0x261e6cu: goto label_261e6c;
        case 0x261e70u: goto label_261e70;
        case 0x261e74u: goto label_261e74;
        case 0x261e78u: goto label_261e78;
        case 0x261e7cu: goto label_261e7c;
        case 0x261e80u: goto label_261e80;
        case 0x261e84u: goto label_261e84;
        case 0x261e88u: goto label_261e88;
        case 0x261e8cu: goto label_261e8c;
        case 0x261e90u: goto label_261e90;
        case 0x261e94u: goto label_261e94;
        case 0x261e98u: goto label_261e98;
        case 0x261e9cu: goto label_261e9c;
        case 0x261ea0u: goto label_261ea0;
        case 0x261ea4u: goto label_261ea4;
        case 0x261ea8u: goto label_261ea8;
        case 0x261eacu: goto label_261eac;
        case 0x261eb0u: goto label_261eb0;
        case 0x261eb4u: goto label_261eb4;
        case 0x261eb8u: goto label_261eb8;
        case 0x261ebcu: goto label_261ebc;
        case 0x261ec0u: goto label_261ec0;
        case 0x261ec4u: goto label_261ec4;
        case 0x261ec8u: goto label_261ec8;
        case 0x261eccu: goto label_261ecc;
        case 0x261ed0u: goto label_261ed0;
        case 0x261ed4u: goto label_261ed4;
        case 0x261ed8u: goto label_261ed8;
        case 0x261edcu: goto label_261edc;
        case 0x261ee0u: goto label_261ee0;
        case 0x261ee4u: goto label_261ee4;
        case 0x261ee8u: goto label_261ee8;
        case 0x261eecu: goto label_261eec;
        case 0x261ef0u: goto label_261ef0;
        case 0x261ef4u: goto label_261ef4;
        case 0x261ef8u: goto label_261ef8;
        case 0x261efcu: goto label_261efc;
        case 0x261f00u: goto label_261f00;
        case 0x261f04u: goto label_261f04;
        case 0x261f08u: goto label_261f08;
        case 0x261f0cu: goto label_261f0c;
        case 0x261f10u: goto label_261f10;
        case 0x261f14u: goto label_261f14;
        case 0x261f18u: goto label_261f18;
        case 0x261f1cu: goto label_261f1c;
        case 0x261f20u: goto label_261f20;
        case 0x261f24u: goto label_261f24;
        case 0x261f28u: goto label_261f28;
        case 0x261f2cu: goto label_261f2c;
        case 0x261f30u: goto label_261f30;
        case 0x261f34u: goto label_261f34;
        case 0x261f38u: goto label_261f38;
        case 0x261f3cu: goto label_261f3c;
        case 0x261f40u: goto label_261f40;
        case 0x261f44u: goto label_261f44;
        case 0x261f48u: goto label_261f48;
        case 0x261f4cu: goto label_261f4c;
        case 0x261f50u: goto label_261f50;
        case 0x261f54u: goto label_261f54;
        case 0x261f58u: goto label_261f58;
        case 0x261f5cu: goto label_261f5c;
        case 0x261f60u: goto label_261f60;
        case 0x261f64u: goto label_261f64;
        case 0x261f68u: goto label_261f68;
        case 0x261f6cu: goto label_261f6c;
        case 0x261f70u: goto label_261f70;
        case 0x261f74u: goto label_261f74;
        case 0x261f78u: goto label_261f78;
        case 0x261f7cu: goto label_261f7c;
        case 0x261f80u: goto label_261f80;
        case 0x261f84u: goto label_261f84;
        case 0x261f88u: goto label_261f88;
        case 0x261f8cu: goto label_261f8c;
        case 0x261f90u: goto label_261f90;
        case 0x261f94u: goto label_261f94;
        case 0x261f98u: goto label_261f98;
        case 0x261f9cu: goto label_261f9c;
        case 0x261fa0u: goto label_261fa0;
        case 0x261fa4u: goto label_261fa4;
        case 0x261fa8u: goto label_261fa8;
        case 0x261facu: goto label_261fac;
        case 0x261fb0u: goto label_261fb0;
        case 0x261fb4u: goto label_261fb4;
        case 0x261fb8u: goto label_261fb8;
        case 0x261fbcu: goto label_261fbc;
        case 0x261fc0u: goto label_261fc0;
        case 0x261fc4u: goto label_261fc4;
        case 0x261fc8u: goto label_261fc8;
        case 0x261fccu: goto label_261fcc;
        case 0x261fd0u: goto label_261fd0;
        case 0x261fd4u: goto label_261fd4;
        case 0x261fd8u: goto label_261fd8;
        case 0x261fdcu: goto label_261fdc;
        case 0x261fe0u: goto label_261fe0;
        case 0x261fe4u: goto label_261fe4;
        case 0x261fe8u: goto label_261fe8;
        case 0x261fecu: goto label_261fec;
        case 0x261ff0u: goto label_261ff0;
        case 0x261ff4u: goto label_261ff4;
        case 0x261ff8u: goto label_261ff8;
        case 0x261ffcu: goto label_261ffc;
        case 0x262000u: goto label_262000;
        case 0x262004u: goto label_262004;
        case 0x262008u: goto label_262008;
        case 0x26200cu: goto label_26200c;
        case 0x262010u: goto label_262010;
        case 0x262014u: goto label_262014;
        case 0x262018u: goto label_262018;
        case 0x26201cu: goto label_26201c;
        case 0x262020u: goto label_262020;
        case 0x262024u: goto label_262024;
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
        default: return;
    }

label_261cb0:
    // 0x261cb0: 0xc847  .word       0x0000C847                   # srav        $t9, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261cb0u;
    SET_GPR_S32(ctx, 25, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_261cb4:
    // 0x261cb4: 0xc3e0  .word       0x0000C3E0                   # add         $t8, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261cb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_261cb8:
    // 0x261cb8: 0x0  nop
    ctx->pc = 0x261cb8u;
    // NOP
label_261cbc:
    // 0x261cbc: 0x0  nop
    ctx->pc = 0x261cbcu;
    // NOP
label_261cc0:
    // 0x261cc0: 0xc860  .word       0x0000C860                   # add         $t9, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261cc0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_261cc4:
    // 0x261cc4: 0x11390  .word       0x00011390                   # mfhi        $v0 # 00010380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261cc4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_261cc8:
    // 0x261cc8: 0x0  nop
    ctx->pc = 0x261cc8u;
    // NOP
label_261ccc:
    // 0x261ccc: 0x0  nop
    ctx->pc = 0x261cccu;
    // NOP
label_261cd0:
    // 0x261cd0: 0xc883  sra         $t9, $zero, 2
    ctx->pc = 0x261cd0u;
    SET_GPR_S32(ctx, 25, SRA32(GPR_S32(ctx, 0), 2));
label_261cd4:
    // 0x261cd4: 0x3bc0  sll         $a3, $zero, 15
    ctx->pc = 0x261cd4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_261cd8:
    // 0x261cd8: 0x0  nop
    ctx->pc = 0x261cd8u;
    // NOP
label_261cdc:
    // 0x261cdc: 0x0  nop
    ctx->pc = 0x261cdcu;
    // NOP
label_261ce0:
    // 0x261ce0: 0xc88b  .word       0x0000C88B                   # movn        $t9, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261ce0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 0));
label_261ce4:
    // 0x261ce4: 0x8bb0  tge         $zero, $zero, 558
    ctx->pc = 0x261ce4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_261ce8:
    // 0x261ce8: 0x0  nop
    ctx->pc = 0x261ce8u;
    // NOP
label_261cec:
    // 0x261cec: 0x0  nop
    ctx->pc = 0x261cecu;
    // NOP
label_261cf0:
    // 0x261cf0: 0xc89d  .word       0x0000C89D                   # dmultu      $zero, $zero # 0000C880 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261cf0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x261CF0 raw=0x0000C89D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_261cf4:
    // 0x261cf4: 0x4190  .word       0x00004190                   # mfhi        $t0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261cf4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_261cf8:
    // 0x261cf8: 0x0  nop
    ctx->pc = 0x261cf8u;
    // NOP
label_261cfc:
    // 0x261cfc: 0x0  nop
    ctx->pc = 0x261cfcu;
    // NOP
label_261d00:
    // 0x261d00: 0xc8a6  .word       0x0000C8A6                   # xor         $t9, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261d00u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_261d04:
    // 0x261d04: 0x56b0  tge         $zero, $zero, 346
    ctx->pc = 0x261d04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_261d08:
    // 0x261d08: 0x0  nop
    ctx->pc = 0x261d08u;
    // NOP
label_261d0c:
    // 0x261d0c: 0x0  nop
    ctx->pc = 0x261d0cu;
    // NOP
label_261d10:
    // 0x261d10: 0xc8b1  tgeu        $zero, $zero, 802
    ctx->pc = 0x261d10u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_261d14:
    // 0x261d14: 0xafc0  sll         $s5, $zero, 31
    ctx->pc = 0x261d14u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_261d18:
    // 0x261d18: 0x0  nop
    ctx->pc = 0x261d18u;
    // NOP
label_261d1c:
    // 0x261d1c: 0x0  nop
    ctx->pc = 0x261d1cu;
    // NOP
label_261d20:
    // 0x261d20: 0xc8c7  .word       0x0000C8C7                   # srav        $t9, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261d20u;
    SET_GPR_S32(ctx, 25, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_261d24:
    // 0x261d24: 0x7ab0  tge         $zero, $zero, 490
    ctx->pc = 0x261d24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_261d28:
    // 0x261d28: 0x0  nop
    ctx->pc = 0x261d28u;
    // NOP
label_261d2c:
    // 0x261d2c: 0x0  nop
    ctx->pc = 0x261d2cu;
    // NOP
label_261d30:
    // 0x261d30: 0xc8d7  .word       0x0000C8D7                   # dsrav       $t9, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261d30u;
    SET_GPR_S64(ctx, 25, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_261d34:
    // 0x261d34: 0xbfc0  sll         $s7, $zero, 31
    ctx->pc = 0x261d34u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_261d38:
    // 0x261d38: 0x0  nop
    ctx->pc = 0x261d38u;
    // NOP
label_261d3c:
    // 0x261d3c: 0x0  nop
    ctx->pc = 0x261d3cu;
    // NOP
label_261d40:
    // 0x261d40: 0xc8ef  .word       0x0000C8EF                   # dsubu       $t9, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261d40u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_261d44:
    // 0x261d44: 0x8250  .word       0x00008250                   # mfhi        $s0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261d44u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_261d48:
    // 0x261d48: 0x0  nop
    ctx->pc = 0x261d48u;
    // NOP
label_261d4c:
    // 0x261d4c: 0x0  nop
    ctx->pc = 0x261d4cu;
    // NOP
label_261d50:
    // 0x261d50: 0xc900  sll         $t9, $zero, 4
    ctx->pc = 0x261d50u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_261d54:
    // 0x261d54: 0x3940  sll         $a3, $zero, 5
    ctx->pc = 0x261d54u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_261d58:
    // 0x261d58: 0x0  nop
    ctx->pc = 0x261d58u;
    // NOP
label_261d5c:
    // 0x261d5c: 0x0  nop
    ctx->pc = 0x261d5cu;
    // NOP
label_261d60:
    // 0x261d60: 0xc908  .word       0x0000C908                   # jr          $zero # 0000C900 <InstrIdType: CPU_SPECIAL>
label_261d64:
    if (ctx->pc == 0x261D64u) {
        ctx->pc = 0x261D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261D60u;
        // 0x261d64: 0x59c0  sll         $t3, $zero, 7 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261D68u;
        goto label_261d68;
    }
    ctx->pc = 0x261D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x261D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261D60u;
        // 0x261d64: 0x59c0  sll         $t3, $zero, 7 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261D60u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x261D68u;
label_261d68:
    // 0x261d68: 0x0  nop
    ctx->pc = 0x261d68u;
    // NOP
label_261d6c:
    // 0x261d6c: 0x0  nop
    ctx->pc = 0x261d6cu;
    // NOP
label_261d70:
    // 0x261d70: 0xc914  .word       0x0000C914                   # dsllv       $t9, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261d70u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_261d74:
    // 0x261d74: 0xd550  .word       0x0000D550                   # mfhi        $k0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261d74u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_261d78:
    // 0x261d78: 0x0  nop
    ctx->pc = 0x261d78u;
    // NOP
label_261d7c:
    // 0x261d7c: 0x0  nop
    ctx->pc = 0x261d7cu;
    // NOP
label_261d80:
    // 0x261d80: 0xc92f  .word       0x0000C92F                   # dsubu       $t9, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261d80u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_261d84:
    // 0x261d84: 0xcbf0  tge         $zero, $zero, 815
    ctx->pc = 0x261d84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_261d88:
    // 0x261d88: 0x0  nop
    ctx->pc = 0x261d88u;
    // NOP
label_261d8c:
    // 0x261d8c: 0x0  nop
    ctx->pc = 0x261d8cu;
    // NOP
label_261d90:
    // 0x261d90: 0xc949  .word       0x0000C949                   # jalr        $t9, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
label_261d94:
    if (ctx->pc == 0x261D94u) {
        ctx->pc = 0x261D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261D90u;
        // 0x261d94: 0xa6e0  .word       0x0000A6E0                   # add         $s4, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x261D98u;
        goto label_261d98;
    }
    ctx->pc = 0x261D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 25, 0x261D98u);
        ctx->pc = 0x261D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261D90u;
        // 0x261d94: 0xa6e0  .word       0x0000A6E0                   # add         $s4, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261D90u, 0x261D98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x261D98u;
label_261d98:
    // 0x261d98: 0x0  nop
    ctx->pc = 0x261d98u;
    // NOP
label_261d9c:
    // 0x261d9c: 0x0  nop
    ctx->pc = 0x261d9cu;
    // NOP
label_261da0:
    // 0x261da0: 0xc95e  .word       0x0000C95E                   # ddiv        $t9, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261da0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x261DA0 raw=0x0000C95E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_261da4:
    // 0x261da4: 0x12b60  .word       0x00012B60                   # add         $a1, $zero, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261da4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_261da8:
    // 0x261da8: 0x0  nop
    ctx->pc = 0x261da8u;
    // NOP
label_261dac:
    // 0x261dac: 0x0  nop
    ctx->pc = 0x261dacu;
    // NOP
label_261db0:
    // 0x261db0: 0xc984  .word       0x0000C984                   # sllv        $t9, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261db0u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_261db4:
    // 0x261db4: 0x37f0  tge         $zero, $zero, 223
    ctx->pc = 0x261db4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_261db8:
    // 0x261db8: 0x0  nop
    ctx->pc = 0x261db8u;
    // NOP
label_261dbc:
    // 0x261dbc: 0x0  nop
    ctx->pc = 0x261dbcu;
    // NOP
label_261dc0:
    // 0x261dc0: 0xc98b  .word       0x0000C98B                   # movn        $t9, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261dc0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 0));
label_261dc4:
    // 0x261dc4: 0x8d90  .word       0x00008D90                   # mfhi        $s1 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261dc4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_261dc8:
    // 0x261dc8: 0x0  nop
    ctx->pc = 0x261dc8u;
    // NOP
label_261dcc:
    // 0x261dcc: 0x0  nop
    ctx->pc = 0x261dccu;
    // NOP
label_261dd0:
    // 0x261dd0: 0xc99d  .word       0x0000C99D                   # dmultu      $zero, $zero # 0000C980 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261dd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x261DD0 raw=0x0000C99D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_261dd4:
    // 0x261dd4: 0x7470  tge         $zero, $zero, 465
    ctx->pc = 0x261dd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_261dd8:
    // 0x261dd8: 0x0  nop
    ctx->pc = 0x261dd8u;
    // NOP
label_261ddc:
    // 0x261ddc: 0x0  nop
    ctx->pc = 0x261ddcu;
    // NOP
label_261de0:
    // 0x261de0: 0xc9ac  .word       0x0000C9AC                   # dadd        $t9, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261de0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 25, r); }
label_261de4:
    // 0x261de4: 0x3600  sll         $a2, $zero, 24
    ctx->pc = 0x261de4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_261de8:
    // 0x261de8: 0x0  nop
    ctx->pc = 0x261de8u;
    // NOP
label_261dec:
    // 0x261dec: 0x0  nop
    ctx->pc = 0x261decu;
    // NOP
label_261df0:
    // 0x261df0: 0xc9b3  tltu        $zero, $zero, 806
    ctx->pc = 0x261df0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_261df4:
    // 0x261df4: 0x3c00  sll         $a3, $zero, 16
    ctx->pc = 0x261df4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_261df8:
    // 0x261df8: 0x0  nop
    ctx->pc = 0x261df8u;
    // NOP
label_261dfc:
    // 0x261dfc: 0x0  nop
    ctx->pc = 0x261dfcu;
    // NOP
label_261e00:
    // 0x261e00: 0xc9bb  dsra        $t9, $zero, 6
    ctx->pc = 0x261e00u;
    SET_GPR_S64(ctx, 25, GPR_S64(ctx, 0) >> 6);
label_261e04:
    // 0x261e04: 0x27d0  .word       0x000027D0                   # mfhi        $a0 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261e04u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_261e08:
    // 0x261e08: 0x0  nop
    ctx->pc = 0x261e08u;
    // NOP
label_261e0c:
    // 0x261e0c: 0x0  nop
    ctx->pc = 0x261e0cu;
    // NOP
label_261e10:
    // 0x261e10: 0xc9c0  sll         $t9, $zero, 7
    ctx->pc = 0x261e10u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_261e14:
    // 0x261e14: 0x6220  .word       0x00006220                   # add         $t4, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261e14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_261e18:
    // 0x261e18: 0x0  nop
    ctx->pc = 0x261e18u;
    // NOP
label_261e1c:
    // 0x261e1c: 0x0  nop
    ctx->pc = 0x261e1cu;
    // NOP
label_261e20:
    // 0x261e20: 0xc9cd  break       0, 807
    ctx->pc = 0x261e20u;
    runtime->handleBreak(rdram, ctx);
label_261e24:
    // 0x261e24: 0x2a70  tge         $zero, $zero, 169
    ctx->pc = 0x261e24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_261e28:
    // 0x261e28: 0x0  nop
    ctx->pc = 0x261e28u;
    // NOP
label_261e2c:
    // 0x261e2c: 0x0  nop
    ctx->pc = 0x261e2cu;
    // NOP
label_261e30:
    // 0x261e30: 0xc9d3  .word       0x0000C9D3                   # mtlo        $zero # 0000C9C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261e30u;
    ctx->lo = GPR_U64(ctx, 0);
label_261e34:
    // 0x261e34: 0x9f90  .word       0x00009F90                   # mfhi        $s3 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261e34u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_261e38:
    // 0x261e38: 0x0  nop
    ctx->pc = 0x261e38u;
    // NOP
label_261e3c:
    // 0x261e3c: 0x0  nop
    ctx->pc = 0x261e3cu;
    // NOP
label_261e40:
    // 0x261e40: 0xc9e7  .word       0x0000C9E7                   # not         $t9, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261e40u;
    SET_GPR_U64(ctx, 25, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_261e44:
    // 0x261e44: 0x5070  tge         $zero, $zero, 321
    ctx->pc = 0x261e44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_261e48:
    // 0x261e48: 0x0  nop
    ctx->pc = 0x261e48u;
    // NOP
label_261e4c:
    // 0x261e4c: 0x0  nop
    ctx->pc = 0x261e4cu;
    // NOP
label_261e50:
    // 0x261e50: 0xc9f2  tlt         $zero, $zero, 807
    ctx->pc = 0x261e50u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_261e54:
    // 0x261e54: 0x3290  .word       0x00003290                   # mfhi        $a2 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261e54u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_261e58:
    // 0x261e58: 0x0  nop
    ctx->pc = 0x261e58u;
    // NOP
label_261e5c:
    // 0x261e5c: 0x0  nop
    ctx->pc = 0x261e5cu;
    // NOP
label_261e60:
    // 0x261e60: 0xc9f9  .word       0x0000C9F9                   # INVALID     $zero, $zero, -0x3607 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261e60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x261E60 raw=0x0000C9F9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_261e64:
    // 0x261e64: 0x8390  .word       0x00008390                   # mfhi        $s0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261e64u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_261e68:
    // 0x261e68: 0x0  nop
    ctx->pc = 0x261e68u;
    // NOP
label_261e6c:
    // 0x261e6c: 0x0  nop
    ctx->pc = 0x261e6cu;
    // NOP
label_261e70:
    // 0x261e70: 0xca0a  .word       0x0000CA0A                   # movz        $t9, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261e70u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 0));
label_261e74:
    // 0x261e74: 0x2cf0  tge         $zero, $zero, 179
    ctx->pc = 0x261e74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_261e78:
    // 0x261e78: 0x0  nop
    ctx->pc = 0x261e78u;
    // NOP
label_261e7c:
    // 0x261e7c: 0x0  nop
    ctx->pc = 0x261e7cu;
    // NOP
label_261e80:
    // 0x261e80: 0xca10  .word       0x0000CA10                   # mfhi        $t9 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261e80u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_261e84:
    // 0x261e84: 0xac40  sll         $s5, $zero, 17
    ctx->pc = 0x261e84u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_261e88:
    // 0x261e88: 0x0  nop
    ctx->pc = 0x261e88u;
    // NOP
label_261e8c:
    // 0x261e8c: 0x0  nop
    ctx->pc = 0x261e8cu;
    // NOP
label_261e90:
    // 0x261e90: 0xca26  .word       0x0000CA26                   # xor         $t9, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261e90u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_261e94:
    // 0x261e94: 0x3ec0  sll         $a3, $zero, 27
    ctx->pc = 0x261e94u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_261e98:
    // 0x261e98: 0x0  nop
    ctx->pc = 0x261e98u;
    // NOP
label_261e9c:
    // 0x261e9c: 0x0  nop
    ctx->pc = 0x261e9cu;
    // NOP
label_261ea0:
    // 0x261ea0: 0xca2e  .word       0x0000CA2E                   # dsub        $t9, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261ea0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 25, r); }
label_261ea4:
    // 0x261ea4: 0x2cf0  tge         $zero, $zero, 179
    ctx->pc = 0x261ea4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_261ea8:
    // 0x261ea8: 0x0  nop
    ctx->pc = 0x261ea8u;
    // NOP
label_261eac:
    // 0x261eac: 0x0  nop
    ctx->pc = 0x261eacu;
    // NOP
label_261eb0:
    // 0x261eb0: 0xca34  teq         $zero, $zero, 808
    ctx->pc = 0x261eb0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_261eb4:
    // 0x261eb4: 0x2730  tge         $zero, $zero, 156
    ctx->pc = 0x261eb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_261eb8:
    // 0x261eb8: 0x0  nop
    ctx->pc = 0x261eb8u;
    // NOP
label_261ebc:
    // 0x261ebc: 0x0  nop
    ctx->pc = 0x261ebcu;
    // NOP
label_261ec0:
    // 0x261ec0: 0xca39  .word       0x0000CA39                   # INVALID     $zero, $zero, -0x35C7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261ec0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x261EC0 raw=0x0000CA39"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_261ec4:
    // 0x261ec4: 0x3420  .word       0x00003420                   # add         $a2, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261ec4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_261ec8:
    // 0x261ec8: 0x0  nop
    ctx->pc = 0x261ec8u;
    // NOP
label_261ecc:
    // 0x261ecc: 0x0  nop
    ctx->pc = 0x261eccu;
    // NOP
label_261ed0:
    // 0x261ed0: 0xca40  sll         $t9, $zero, 9
    ctx->pc = 0x261ed0u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_261ed4:
    // 0x261ed4: 0x95d0  .word       0x000095D0                   # mfhi        $s2 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261ed4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_261ed8:
    // 0x261ed8: 0x0  nop
    ctx->pc = 0x261ed8u;
    // NOP
label_261edc:
    // 0x261edc: 0x0  nop
    ctx->pc = 0x261edcu;
    // NOP
label_261ee0:
    // 0x261ee0: 0xca53  .word       0x0000CA53                   # mtlo        $zero # 0000CA40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261ee0u;
    ctx->lo = GPR_U64(ctx, 0);
label_261ee4:
    // 0x261ee4: 0x6b40  sll         $t5, $zero, 13
    ctx->pc = 0x261ee4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_261ee8:
    // 0x261ee8: 0x0  nop
    ctx->pc = 0x261ee8u;
    // NOP
label_261eec:
    // 0x261eec: 0x0  nop
    ctx->pc = 0x261eecu;
    // NOP
label_261ef0:
    // 0x261ef0: 0xca61  .word       0x0000CA61                   # addu        $t9, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261ef0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_261ef4:
    // 0x261ef4: 0xbba0  .word       0x0000BBA0                   # add         $s7, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261ef4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_261ef8:
    // 0x261ef8: 0x0  nop
    ctx->pc = 0x261ef8u;
    // NOP
label_261efc:
    // 0x261efc: 0x0  nop
    ctx->pc = 0x261efcu;
    // NOP
label_261f00:
    // 0x261f00: 0xca79  .word       0x0000CA79                   # INVALID     $zero, $zero, -0x3587 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261f00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x261F00 raw=0x0000CA79"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_261f04:
    // 0x261f04: 0x1450  .word       0x00001450                   # mfhi        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261f04u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_261f08:
    // 0x261f08: 0x0  nop
    ctx->pc = 0x261f08u;
    // NOP
label_261f0c:
    // 0x261f0c: 0x0  nop
    ctx->pc = 0x261f0cu;
    // NOP
label_261f10:
    // 0x261f10: 0xca7c  dsll32      $t9, $zero, 9
    ctx->pc = 0x261f10u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) << (32 + 9));
label_261f14:
    // 0x261f14: 0x5b30  tge         $zero, $zero, 364
    ctx->pc = 0x261f14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_261f18:
    // 0x261f18: 0x0  nop
    ctx->pc = 0x261f18u;
    // NOP
label_261f1c:
    // 0x261f1c: 0x0  nop
    ctx->pc = 0x261f1cu;
    // NOP
label_261f20:
    // 0x261f20: 0xca88  .word       0x0000CA88                   # jr          $zero # 0000CA80 <InstrIdType: CPU_SPECIAL>
label_261f24:
    if (ctx->pc == 0x261F24u) {
        ctx->pc = 0x261F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F20u;
        // 0x261f24: 0x10e0  .word       0x000010E0                   # add         $v0, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x261F28u;
        goto label_261f28;
    }
    ctx->pc = 0x261F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x261F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F20u;
        // 0x261f24: 0x10e0  .word       0x000010E0                   # add         $v0, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261F20u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x261F28u;
label_261f28:
    // 0x261f28: 0x0  nop
    ctx->pc = 0x261f28u;
    // NOP
label_261f2c:
    // 0x261f2c: 0x0  nop
    ctx->pc = 0x261f2cu;
    // NOP
label_261f30:
    // 0x261f30: 0xca8b  .word       0x0000CA8B                   # movn        $t9, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261f30u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 0));
label_261f34:
    // 0x261f34: 0x52e0  .word       0x000052E0                   # add         $t2, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261f34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_261f38:
    // 0x261f38: 0x0  nop
    ctx->pc = 0x261f38u;
    // NOP
label_261f3c:
    // 0x261f3c: 0x0  nop
    ctx->pc = 0x261f3cu;
    // NOP
label_261f40:
    // 0x261f40: 0xca96  .word       0x0000CA96                   # dsrlv       $t9, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261f40u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_261f44:
    // 0x261f44: 0x3c90  .word       0x00003C90                   # mfhi        $a3 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261f44u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_261f48:
    // 0x261f48: 0x0  nop
    ctx->pc = 0x261f48u;
    // NOP
label_261f4c:
    // 0x261f4c: 0x0  nop
    ctx->pc = 0x261f4cu;
    // NOP
label_261f50:
    // 0x261f50: 0xca9e  .word       0x0000CA9E                   # ddiv        $t9, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261f50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x261F50 raw=0x0000CA9E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_261f54:
    // 0x261f54: 0x3c30  tge         $zero, $zero, 240
    ctx->pc = 0x261f54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_261f58:
    // 0x261f58: 0x0  nop
    ctx->pc = 0x261f58u;
    // NOP
label_261f5c:
    // 0x261f5c: 0x0  nop
    ctx->pc = 0x261f5cu;
    // NOP
label_261f60:
    // 0x261f60: 0xcaa6  .word       0x0000CAA6                   # xor         $t9, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261f60u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_261f64:
    // 0x261f64: 0x6ba0  .word       0x00006BA0                   # add         $t5, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261f64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_261f68:
    // 0x261f68: 0x0  nop
    ctx->pc = 0x261f68u;
    // NOP
label_261f6c:
    // 0x261f6c: 0x0  nop
    ctx->pc = 0x261f6cu;
    // NOP
label_261f70:
    // 0x261f70: 0xcab4  teq         $zero, $zero, 810
    ctx->pc = 0x261f70u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_261f74:
    // 0x261f74: 0xf790  .word       0x0000F790                   # mfhi        $fp # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261f74u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_261f78:
    // 0x261f78: 0x0  nop
    ctx->pc = 0x261f78u;
    // NOP
label_261f7c:
    // 0x261f7c: 0x0  nop
    ctx->pc = 0x261f7cu;
    // NOP
label_261f80:
    // 0x261f80: 0xcad3  .word       0x0000CAD3                   # mtlo        $zero # 0000CAC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261f80u;
    ctx->lo = GPR_U64(ctx, 0);
label_261f84:
    // 0x261f84: 0x84b0  tge         $zero, $zero, 530
    ctx->pc = 0x261f84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_261f88:
    // 0x261f88: 0x0  nop
    ctx->pc = 0x261f88u;
    // NOP
label_261f8c:
    // 0x261f8c: 0x0  nop
    ctx->pc = 0x261f8cu;
    // NOP
label_261f90:
    // 0x261f90: 0xcae4  .word       0x0000CAE4                   # and         $t9, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261f90u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_261f94:
    // 0x261f94: 0x55f0  tge         $zero, $zero, 343
    ctx->pc = 0x261f94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_261f98:
    // 0x261f98: 0x0  nop
    ctx->pc = 0x261f98u;
    // NOP
label_261f9c:
    // 0x261f9c: 0x0  nop
    ctx->pc = 0x261f9cu;
    // NOP
label_261fa0:
    // 0x261fa0: 0xcaef  .word       0x0000CAEF                   # dsubu       $t9, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261fa0u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_261fa4:
    // 0x261fa4: 0x144d0  .word       0x000144D0                   # mfhi        $t0 # 000104C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261fa4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_261fa8:
    // 0x261fa8: 0x0  nop
    ctx->pc = 0x261fa8u;
    // NOP
label_261fac:
    // 0x261fac: 0x0  nop
    ctx->pc = 0x261facu;
    // NOP
label_261fb0:
    // 0x261fb0: 0xcb18  .word       0x0000CB18                   # mult        $t9, $zero, $zero # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x261fb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
label_261fb4:
    // 0x261fb4: 0x123d0  .word       0x000123D0                   # mfhi        $a0 # 000103C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261fb4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_261fb8:
    // 0x261fb8: 0x0  nop
    ctx->pc = 0x261fb8u;
    // NOP
label_261fbc:
    // 0x261fbc: 0x0  nop
    ctx->pc = 0x261fbcu;
    // NOP
label_261fc0:
    // 0x261fc0: 0xcb3d  .word       0x0000CB3D                   # INVALID     $zero, $zero, -0x34C3 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261fc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x261FC0 raw=0x0000CB3D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_261fc4:
    // 0x261fc4: 0x37d0  .word       0x000037D0                   # mfhi        $a2 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261fc4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_261fc8:
    // 0x261fc8: 0x0  nop
    ctx->pc = 0x261fc8u;
    // NOP
label_261fcc:
    // 0x261fcc: 0x0  nop
    ctx->pc = 0x261fccu;
    // NOP
label_261fd0:
    // 0x261fd0: 0xcb44  .word       0x0000CB44                   # sllv        $t9, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261fd0u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_261fd4:
    // 0x261fd4: 0x2cd0  .word       0x00002CD0                   # mfhi        $a1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261fd4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_261fd8:
    // 0x261fd8: 0x0  nop
    ctx->pc = 0x261fd8u;
    // NOP
label_261fdc:
    // 0x261fdc: 0x0  nop
    ctx->pc = 0x261fdcu;
    // NOP
label_261fe0:
    // 0x261fe0: 0xcb4a  .word       0x0000CB4A                   # movz        $t9, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261fe0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 0));
label_261fe4:
    // 0x261fe4: 0x9990  .word       0x00009990                   # mfhi        $s3 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261fe4u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_261fe8:
    // 0x261fe8: 0x0  nop
    ctx->pc = 0x261fe8u;
    // NOP
label_261fec:
    // 0x261fec: 0x0  nop
    ctx->pc = 0x261fecu;
    // NOP
label_261ff0:
    // 0x261ff0: 0xcb5e  .word       0x0000CB5E                   # ddiv        $t9, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261ff0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x261FF0 raw=0x0000CB5E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_261ff4:
    // 0x261ff4: 0xc5e0  .word       0x0000C5E0                   # add         $t8, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261ff4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_261ff8:
    // 0x261ff8: 0x0  nop
    ctx->pc = 0x261ff8u;
    // NOP
label_261ffc:
    // 0x261ffc: 0x0  nop
    ctx->pc = 0x261ffcu;
    // NOP
label_262000:
    // 0x262000: 0xcb77  .word       0x0000CB77                   # INVALID     $zero, $zero, -0x3489 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262000u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x262000 raw=0x0000CB77"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262004:
    // 0x262004: 0x7dd0  .word       0x00007DD0                   # mfhi        $t7 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262004u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_262008:
    // 0x262008: 0x0  nop
    ctx->pc = 0x262008u;
    // NOP
label_26200c:
    // 0x26200c: 0x0  nop
    ctx->pc = 0x26200cu;
    // NOP
label_262010:
    // 0x262010: 0xcb87  .word       0x0000CB87                   # srav        $t9, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262010u;
    SET_GPR_S32(ctx, 25, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_262014:
    // 0x262014: 0x8900  sll         $s1, $zero, 4
    ctx->pc = 0x262014u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_262018:
    // 0x262018: 0x0  nop
    ctx->pc = 0x262018u;
    // NOP
label_26201c:
    // 0x26201c: 0x0  nop
    ctx->pc = 0x26201cu;
    // NOP
label_262020:
    // 0x262020: 0xcb99  .word       0x0000CB99                   # multu       $zero, $zero # 0000CB80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262020u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
label_262024:
    // 0x262024: 0x9680  sll         $s2, $zero, 26
    ctx->pc = 0x262024u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
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
    ctx->pc = 0x262480u;
    return;
}
