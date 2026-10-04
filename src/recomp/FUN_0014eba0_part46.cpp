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


void FUN_0014eba0_part46(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x164b30u: goto label_164b30;
        case 0x164b34u: goto label_164b34;
        case 0x164b38u: goto label_164b38;
        case 0x164b3cu: goto label_164b3c;
        case 0x164b40u: goto label_164b40;
        case 0x164b44u: goto label_164b44;
        case 0x164b48u: goto label_164b48;
        case 0x164b4cu: goto label_164b4c;
        case 0x164b50u: goto label_164b50;
        case 0x164b54u: goto label_164b54;
        case 0x164b58u: goto label_164b58;
        case 0x164b5cu: goto label_164b5c;
        case 0x164b60u: goto label_164b60;
        case 0x164b64u: goto label_164b64;
        case 0x164b68u: goto label_164b68;
        case 0x164b6cu: goto label_164b6c;
        case 0x164b70u: goto label_164b70;
        case 0x164b74u: goto label_164b74;
        case 0x164b78u: goto label_164b78;
        case 0x164b7cu: goto label_164b7c;
        case 0x164b80u: goto label_164b80;
        case 0x164b84u: goto label_164b84;
        case 0x164b88u: goto label_164b88;
        case 0x164b8cu: goto label_164b8c;
        case 0x164b90u: goto label_164b90;
        case 0x164b94u: goto label_164b94;
        case 0x164b98u: goto label_164b98;
        case 0x164b9cu: goto label_164b9c;
        case 0x164ba0u: goto label_164ba0;
        case 0x164ba4u: goto label_164ba4;
        case 0x164ba8u: goto label_164ba8;
        case 0x164bacu: goto label_164bac;
        case 0x164bb0u: goto label_164bb0;
        case 0x164bb4u: goto label_164bb4;
        case 0x164bb8u: goto label_164bb8;
        case 0x164bbcu: goto label_164bbc;
        case 0x164bc0u: goto label_164bc0;
        case 0x164bc4u: goto label_164bc4;
        case 0x164bc8u: goto label_164bc8;
        case 0x164bccu: goto label_164bcc;
        case 0x164bd0u: goto label_164bd0;
        case 0x164bd4u: goto label_164bd4;
        case 0x164bd8u: goto label_164bd8;
        case 0x164bdcu: goto label_164bdc;
        case 0x164be0u: goto label_164be0;
        case 0x164be4u: goto label_164be4;
        case 0x164be8u: goto label_164be8;
        case 0x164becu: goto label_164bec;
        case 0x164bf0u: goto label_164bf0;
        case 0x164bf4u: goto label_164bf4;
        case 0x164bf8u: goto label_164bf8;
        case 0x164bfcu: goto label_164bfc;
        case 0x164c00u: goto label_164c00;
        case 0x164c04u: goto label_164c04;
        case 0x164c08u: goto label_164c08;
        case 0x164c0cu: goto label_164c0c;
        case 0x164c10u: goto label_164c10;
        case 0x164c14u: goto label_164c14;
        case 0x164c18u: goto label_164c18;
        case 0x164c1cu: goto label_164c1c;
        case 0x164c20u: goto label_164c20;
        case 0x164c24u: goto label_164c24;
        case 0x164c28u: goto label_164c28;
        case 0x164c2cu: goto label_164c2c;
        case 0x164c30u: goto label_164c30;
        case 0x164c34u: goto label_164c34;
        case 0x164c38u: goto label_164c38;
        case 0x164c3cu: goto label_164c3c;
        case 0x164c40u: goto label_164c40;
        case 0x164c44u: goto label_164c44;
        case 0x164c48u: goto label_164c48;
        case 0x164c4cu: goto label_164c4c;
        case 0x164c50u: goto label_164c50;
        case 0x164c54u: goto label_164c54;
        case 0x164c58u: goto label_164c58;
        case 0x164c5cu: goto label_164c5c;
        case 0x164c60u: goto label_164c60;
        case 0x164c64u: goto label_164c64;
        case 0x164c68u: goto label_164c68;
        case 0x164c6cu: goto label_164c6c;
        case 0x164c70u: goto label_164c70;
        case 0x164c74u: goto label_164c74;
        case 0x164c78u: goto label_164c78;
        case 0x164c7cu: goto label_164c7c;
        case 0x164c80u: goto label_164c80;
        case 0x164c84u: goto label_164c84;
        case 0x164c88u: goto label_164c88;
        case 0x164c8cu: goto label_164c8c;
        case 0x164c90u: goto label_164c90;
        case 0x164c94u: goto label_164c94;
        case 0x164c98u: goto label_164c98;
        case 0x164c9cu: goto label_164c9c;
        case 0x164ca0u: goto label_164ca0;
        case 0x164ca4u: goto label_164ca4;
        case 0x164ca8u: goto label_164ca8;
        case 0x164cacu: goto label_164cac;
        case 0x164cb0u: goto label_164cb0;
        case 0x164cb4u: goto label_164cb4;
        case 0x164cb8u: goto label_164cb8;
        case 0x164cbcu: goto label_164cbc;
        case 0x164cc0u: goto label_164cc0;
        case 0x164cc4u: goto label_164cc4;
        case 0x164cc8u: goto label_164cc8;
        case 0x164cccu: goto label_164ccc;
        case 0x164cd0u: goto label_164cd0;
        case 0x164cd4u: goto label_164cd4;
        case 0x164cd8u: goto label_164cd8;
        case 0x164cdcu: goto label_164cdc;
        case 0x164ce0u: goto label_164ce0;
        case 0x164ce4u: goto label_164ce4;
        case 0x164ce8u: goto label_164ce8;
        case 0x164cecu: goto label_164cec;
        case 0x164cf0u: goto label_164cf0;
        case 0x164cf4u: goto label_164cf4;
        case 0x164cf8u: goto label_164cf8;
        case 0x164cfcu: goto label_164cfc;
        case 0x164d00u: goto label_164d00;
        case 0x164d04u: goto label_164d04;
        case 0x164d08u: goto label_164d08;
        case 0x164d0cu: goto label_164d0c;
        case 0x164d10u: goto label_164d10;
        case 0x164d14u: goto label_164d14;
        case 0x164d18u: goto label_164d18;
        case 0x164d1cu: goto label_164d1c;
        case 0x164d20u: goto label_164d20;
        case 0x164d24u: goto label_164d24;
        case 0x164d28u: goto label_164d28;
        case 0x164d2cu: goto label_164d2c;
        case 0x164d30u: goto label_164d30;
        case 0x164d34u: goto label_164d34;
        case 0x164d38u: goto label_164d38;
        case 0x164d3cu: goto label_164d3c;
        case 0x164d40u: goto label_164d40;
        case 0x164d44u: goto label_164d44;
        case 0x164d48u: goto label_164d48;
        case 0x164d4cu: goto label_164d4c;
        case 0x164d50u: goto label_164d50;
        case 0x164d54u: goto label_164d54;
        case 0x164d58u: goto label_164d58;
        case 0x164d5cu: goto label_164d5c;
        case 0x164d60u: goto label_164d60;
        case 0x164d64u: goto label_164d64;
        case 0x164d68u: goto label_164d68;
        case 0x164d6cu: goto label_164d6c;
        case 0x164d70u: goto label_164d70;
        case 0x164d74u: goto label_164d74;
        case 0x164d78u: goto label_164d78;
        case 0x164d7cu: goto label_164d7c;
        case 0x164d80u: goto label_164d80;
        case 0x164d84u: goto label_164d84;
        case 0x164d88u: goto label_164d88;
        case 0x164d8cu: goto label_164d8c;
        case 0x164d90u: goto label_164d90;
        case 0x164d94u: goto label_164d94;
        case 0x164d98u: goto label_164d98;
        case 0x164d9cu: goto label_164d9c;
        case 0x164da0u: goto label_164da0;
        case 0x164da4u: goto label_164da4;
        case 0x164da8u: goto label_164da8;
        case 0x164dacu: goto label_164dac;
        case 0x164db0u: goto label_164db0;
        case 0x164db4u: goto label_164db4;
        case 0x164db8u: goto label_164db8;
        case 0x164dbcu: goto label_164dbc;
        case 0x164dc0u: goto label_164dc0;
        case 0x164dc4u: goto label_164dc4;
        case 0x164dc8u: goto label_164dc8;
        case 0x164dccu: goto label_164dcc;
        case 0x164dd0u: goto label_164dd0;
        case 0x164dd4u: goto label_164dd4;
        case 0x164dd8u: goto label_164dd8;
        case 0x164ddcu: goto label_164ddc;
        case 0x164de0u: goto label_164de0;
        case 0x164de4u: goto label_164de4;
        case 0x164de8u: goto label_164de8;
        case 0x164decu: goto label_164dec;
        case 0x164df0u: goto label_164df0;
        case 0x164df4u: goto label_164df4;
        case 0x164df8u: goto label_164df8;
        case 0x164dfcu: goto label_164dfc;
        case 0x164e00u: goto label_164e00;
        case 0x164e04u: goto label_164e04;
        case 0x164e08u: goto label_164e08;
        case 0x164e0cu: goto label_164e0c;
        case 0x164e10u: goto label_164e10;
        case 0x164e14u: goto label_164e14;
        case 0x164e18u: goto label_164e18;
        case 0x164e1cu: goto label_164e1c;
        case 0x164e20u: goto label_164e20;
        case 0x164e24u: goto label_164e24;
        case 0x164e28u: goto label_164e28;
        case 0x164e2cu: goto label_164e2c;
        case 0x164e30u: goto label_164e30;
        case 0x164e34u: goto label_164e34;
        case 0x164e38u: goto label_164e38;
        case 0x164e3cu: goto label_164e3c;
        case 0x164e40u: goto label_164e40;
        case 0x164e44u: goto label_164e44;
        case 0x164e48u: goto label_164e48;
        case 0x164e4cu: goto label_164e4c;
        case 0x164e50u: goto label_164e50;
        case 0x164e54u: goto label_164e54;
        case 0x164e58u: goto label_164e58;
        case 0x164e5cu: goto label_164e5c;
        case 0x164e60u: goto label_164e60;
        case 0x164e64u: goto label_164e64;
        case 0x164e68u: goto label_164e68;
        case 0x164e6cu: goto label_164e6c;
        case 0x164e70u: goto label_164e70;
        case 0x164e74u: goto label_164e74;
        case 0x164e78u: goto label_164e78;
        case 0x164e7cu: goto label_164e7c;
        case 0x164e80u: goto label_164e80;
        case 0x164e84u: goto label_164e84;
        case 0x164e88u: goto label_164e88;
        case 0x164e8cu: goto label_164e8c;
        case 0x164e90u: goto label_164e90;
        case 0x164e94u: goto label_164e94;
        case 0x164e98u: goto label_164e98;
        case 0x164e9cu: goto label_164e9c;
        case 0x164ea0u: goto label_164ea0;
        case 0x164ea4u: goto label_164ea4;
        case 0x164ea8u: goto label_164ea8;
        case 0x164eacu: goto label_164eac;
        case 0x164eb0u: goto label_164eb0;
        case 0x164eb4u: goto label_164eb4;
        case 0x164eb8u: goto label_164eb8;
        case 0x164ebcu: goto label_164ebc;
        case 0x164ec0u: goto label_164ec0;
        case 0x164ec4u: goto label_164ec4;
        case 0x164ec8u: goto label_164ec8;
        case 0x164eccu: goto label_164ecc;
        case 0x164ed0u: goto label_164ed0;
        case 0x164ed4u: goto label_164ed4;
        case 0x164ed8u: goto label_164ed8;
        case 0x164edcu: goto label_164edc;
        case 0x164ee0u: goto label_164ee0;
        case 0x164ee4u: goto label_164ee4;
        case 0x164ee8u: goto label_164ee8;
        case 0x164eecu: goto label_164eec;
        case 0x164ef0u: goto label_164ef0;
        case 0x164ef4u: goto label_164ef4;
        case 0x164ef8u: goto label_164ef8;
        case 0x164efcu: goto label_164efc;
        case 0x164f00u: goto label_164f00;
        case 0x164f04u: goto label_164f04;
        case 0x164f08u: goto label_164f08;
        case 0x164f0cu: goto label_164f0c;
        case 0x164f10u: goto label_164f10;
        case 0x164f14u: goto label_164f14;
        case 0x164f18u: goto label_164f18;
        case 0x164f1cu: goto label_164f1c;
        case 0x164f20u: goto label_164f20;
        case 0x164f24u: goto label_164f24;
        case 0x164f28u: goto label_164f28;
        case 0x164f2cu: goto label_164f2c;
        case 0x164f30u: goto label_164f30;
        case 0x164f34u: goto label_164f34;
        case 0x164f38u: goto label_164f38;
        case 0x164f3cu: goto label_164f3c;
        case 0x164f40u: goto label_164f40;
        case 0x164f44u: goto label_164f44;
        case 0x164f48u: goto label_164f48;
        case 0x164f4cu: goto label_164f4c;
        case 0x164f50u: goto label_164f50;
        case 0x164f54u: goto label_164f54;
        case 0x164f58u: goto label_164f58;
        case 0x164f5cu: goto label_164f5c;
        case 0x164f60u: goto label_164f60;
        case 0x164f64u: goto label_164f64;
        case 0x164f68u: goto label_164f68;
        case 0x164f6cu: goto label_164f6c;
        case 0x164f70u: goto label_164f70;
        case 0x164f74u: goto label_164f74;
        case 0x164f78u: goto label_164f78;
        case 0x164f7cu: goto label_164f7c;
        case 0x164f80u: goto label_164f80;
        case 0x164f84u: goto label_164f84;
        case 0x164f88u: goto label_164f88;
        case 0x164f8cu: goto label_164f8c;
        case 0x164f90u: goto label_164f90;
        case 0x164f94u: goto label_164f94;
        case 0x164f98u: goto label_164f98;
        case 0x164f9cu: goto label_164f9c;
        case 0x164fa0u: goto label_164fa0;
        case 0x164fa4u: goto label_164fa4;
        case 0x164fa8u: goto label_164fa8;
        case 0x164facu: goto label_164fac;
        case 0x164fb0u: goto label_164fb0;
        case 0x164fb4u: goto label_164fb4;
        case 0x164fb8u: goto label_164fb8;
        case 0x164fbcu: goto label_164fbc;
        case 0x164fc0u: goto label_164fc0;
        case 0x164fc4u: goto label_164fc4;
        case 0x164fc8u: goto label_164fc8;
        case 0x164fccu: goto label_164fcc;
        case 0x164fd0u: goto label_164fd0;
        case 0x164fd4u: goto label_164fd4;
        case 0x164fd8u: goto label_164fd8;
        case 0x164fdcu: goto label_164fdc;
        case 0x164fe0u: goto label_164fe0;
        case 0x164fe4u: goto label_164fe4;
        case 0x164fe8u: goto label_164fe8;
        case 0x164fecu: goto label_164fec;
        case 0x164ff0u: goto label_164ff0;
        case 0x164ff4u: goto label_164ff4;
        case 0x164ff8u: goto label_164ff8;
        case 0x164ffcu: goto label_164ffc;
        case 0x165000u: goto label_165000;
        case 0x165004u: goto label_165004;
        case 0x165008u: goto label_165008;
        case 0x16500cu: goto label_16500c;
        case 0x165010u: goto label_165010;
        case 0x165014u: goto label_165014;
        case 0x165018u: goto label_165018;
        case 0x16501cu: goto label_16501c;
        case 0x165020u: goto label_165020;
        case 0x165024u: goto label_165024;
        case 0x165028u: goto label_165028;
        case 0x16502cu: goto label_16502c;
        case 0x165030u: goto label_165030;
        case 0x165034u: goto label_165034;
        case 0x165038u: goto label_165038;
        case 0x16503cu: goto label_16503c;
        case 0x165040u: goto label_165040;
        case 0x165044u: goto label_165044;
        case 0x165048u: goto label_165048;
        case 0x16504cu: goto label_16504c;
        case 0x165050u: goto label_165050;
        case 0x165054u: goto label_165054;
        case 0x165058u: goto label_165058;
        case 0x16505cu: goto label_16505c;
        case 0x165060u: goto label_165060;
        case 0x165064u: goto label_165064;
        case 0x165068u: goto label_165068;
        case 0x16506cu: goto label_16506c;
        case 0x165070u: goto label_165070;
        case 0x165074u: goto label_165074;
        case 0x165078u: goto label_165078;
        case 0x16507cu: goto label_16507c;
        case 0x165080u: goto label_165080;
        case 0x165084u: goto label_165084;
        case 0x165088u: goto label_165088;
        case 0x16508cu: goto label_16508c;
        case 0x165090u: goto label_165090;
        case 0x165094u: goto label_165094;
        case 0x165098u: goto label_165098;
        case 0x16509cu: goto label_16509c;
        case 0x1650a0u: goto label_1650a0;
        case 0x1650a4u: goto label_1650a4;
        case 0x1650a8u: goto label_1650a8;
        case 0x1650acu: goto label_1650ac;
        case 0x1650b0u: goto label_1650b0;
        case 0x1650b4u: goto label_1650b4;
        case 0x1650b8u: goto label_1650b8;
        case 0x1650bcu: goto label_1650bc;
        case 0x1650c0u: goto label_1650c0;
        case 0x1650c4u: goto label_1650c4;
        case 0x1650c8u: goto label_1650c8;
        case 0x1650ccu: goto label_1650cc;
        case 0x1650d0u: goto label_1650d0;
        case 0x1650d4u: goto label_1650d4;
        case 0x1650d8u: goto label_1650d8;
        case 0x1650dcu: goto label_1650dc;
        case 0x1650e0u: goto label_1650e0;
        case 0x1650e4u: goto label_1650e4;
        case 0x1650e8u: goto label_1650e8;
        case 0x1650ecu: goto label_1650ec;
        case 0x1650f0u: goto label_1650f0;
        case 0x1650f4u: goto label_1650f4;
        case 0x1650f8u: goto label_1650f8;
        case 0x1650fcu: goto label_1650fc;
        case 0x165100u: goto label_165100;
        case 0x165104u: goto label_165104;
        case 0x165108u: goto label_165108;
        case 0x16510cu: goto label_16510c;
        case 0x165110u: goto label_165110;
        case 0x165114u: goto label_165114;
        case 0x165118u: goto label_165118;
        case 0x16511cu: goto label_16511c;
        case 0x165120u: goto label_165120;
        case 0x165124u: goto label_165124;
        case 0x165128u: goto label_165128;
        case 0x16512cu: goto label_16512c;
        case 0x165130u: goto label_165130;
        case 0x165134u: goto label_165134;
        case 0x165138u: goto label_165138;
        case 0x16513cu: goto label_16513c;
        case 0x165140u: goto label_165140;
        case 0x165144u: goto label_165144;
        case 0x165148u: goto label_165148;
        case 0x16514cu: goto label_16514c;
        case 0x165150u: goto label_165150;
        case 0x165154u: goto label_165154;
        case 0x165158u: goto label_165158;
        case 0x16515cu: goto label_16515c;
        case 0x165160u: goto label_165160;
        case 0x165164u: goto label_165164;
        case 0x165168u: goto label_165168;
        case 0x16516cu: goto label_16516c;
        case 0x165170u: goto label_165170;
        case 0x165174u: goto label_165174;
        case 0x165178u: goto label_165178;
        case 0x16517cu: goto label_16517c;
        case 0x165180u: goto label_165180;
        case 0x165184u: goto label_165184;
        case 0x165188u: goto label_165188;
        case 0x16518cu: goto label_16518c;
        case 0x165190u: goto label_165190;
        case 0x165194u: goto label_165194;
        case 0x165198u: goto label_165198;
        case 0x16519cu: goto label_16519c;
        case 0x1651a0u: goto label_1651a0;
        case 0x1651a4u: goto label_1651a4;
        case 0x1651a8u: goto label_1651a8;
        case 0x1651acu: goto label_1651ac;
        case 0x1651b0u: goto label_1651b0;
        case 0x1651b4u: goto label_1651b4;
        case 0x1651b8u: goto label_1651b8;
        case 0x1651bcu: goto label_1651bc;
        case 0x1651c0u: goto label_1651c0;
        case 0x1651c4u: goto label_1651c4;
        case 0x1651c8u: goto label_1651c8;
        case 0x1651ccu: goto label_1651cc;
        case 0x1651d0u: goto label_1651d0;
        case 0x1651d4u: goto label_1651d4;
        case 0x1651d8u: goto label_1651d8;
        case 0x1651dcu: goto label_1651dc;
        case 0x1651e0u: goto label_1651e0;
        case 0x1651e4u: goto label_1651e4;
        case 0x1651e8u: goto label_1651e8;
        case 0x1651ecu: goto label_1651ec;
        case 0x1651f0u: goto label_1651f0;
        case 0x1651f4u: goto label_1651f4;
        case 0x1651f8u: goto label_1651f8;
        case 0x1651fcu: goto label_1651fc;
        case 0x165200u: goto label_165200;
        case 0x165204u: goto label_165204;
        case 0x165208u: goto label_165208;
        case 0x16520cu: goto label_16520c;
        case 0x165210u: goto label_165210;
        case 0x165214u: goto label_165214;
        case 0x165218u: goto label_165218;
        case 0x16521cu: goto label_16521c;
        case 0x165220u: goto label_165220;
        case 0x165224u: goto label_165224;
        case 0x165228u: goto label_165228;
        case 0x16522cu: goto label_16522c;
        case 0x165230u: goto label_165230;
        case 0x165234u: goto label_165234;
        case 0x165238u: goto label_165238;
        case 0x16523cu: goto label_16523c;
        case 0x165240u: goto label_165240;
        case 0x165244u: goto label_165244;
        case 0x165248u: goto label_165248;
        case 0x16524cu: goto label_16524c;
        case 0x165250u: goto label_165250;
        case 0x165254u: goto label_165254;
        case 0x165258u: goto label_165258;
        case 0x16525cu: goto label_16525c;
        case 0x165260u: goto label_165260;
        case 0x165264u: goto label_165264;
        case 0x165268u: goto label_165268;
        case 0x16526cu: goto label_16526c;
        case 0x165270u: goto label_165270;
        case 0x165274u: goto label_165274;
        case 0x165278u: goto label_165278;
        case 0x16527cu: goto label_16527c;
        case 0x165280u: goto label_165280;
        case 0x165284u: goto label_165284;
        case 0x165288u: goto label_165288;
        case 0x16528cu: goto label_16528c;
        case 0x165290u: goto label_165290;
        case 0x165294u: goto label_165294;
        case 0x165298u: goto label_165298;
        case 0x16529cu: goto label_16529c;
        case 0x1652a0u: goto label_1652a0;
        case 0x1652a4u: goto label_1652a4;
        case 0x1652a8u: goto label_1652a8;
        case 0x1652acu: goto label_1652ac;
        case 0x1652b0u: goto label_1652b0;
        case 0x1652b4u: goto label_1652b4;
        case 0x1652b8u: goto label_1652b8;
        case 0x1652bcu: goto label_1652bc;
        case 0x1652c0u: goto label_1652c0;
        case 0x1652c4u: goto label_1652c4;
        case 0x1652c8u: goto label_1652c8;
        case 0x1652ccu: goto label_1652cc;
        case 0x1652d0u: goto label_1652d0;
        case 0x1652d4u: goto label_1652d4;
        case 0x1652d8u: goto label_1652d8;
        case 0x1652dcu: goto label_1652dc;
        case 0x1652e0u: goto label_1652e0;
        case 0x1652e4u: goto label_1652e4;
        case 0x1652e8u: goto label_1652e8;
        case 0x1652ecu: goto label_1652ec;
        case 0x1652f0u: goto label_1652f0;
        case 0x1652f4u: goto label_1652f4;
        case 0x1652f8u: goto label_1652f8;
        case 0x1652fcu: goto label_1652fc;
        default: return;
    }

label_164b30:
    // 0x164b30: 0x1120001a  beqz        $t1, . + 4 + (0x1A << 2)
label_164b34:
    if (ctx->pc == 0x164B34u) {
        ctx->pc = 0x164B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B30u;
        // 0x164b34: 0x308600ff  andi        $a2, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x164B38u;
        goto label_164b38;
    }
    ctx->pc = 0x164B30u;
    {
        const bool branch_taken_0x164b30 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x164B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B30u;
        // 0x164b34: 0x308600ff  andi        $a2, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x164b30) {
            ctx->pc = 0x164B9Cu;
            goto label_164b9c;
        }
    }
    ctx->pc = 0x164B38u;
label_164b38:
    // 0x164b38: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x164b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_164b3c:
    // 0x164b3c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x164b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_164b40:
    // 0x164b40: 0x9123005d  lbu         $v1, 0x5D($t1)
    ctx->pc = 0x164b40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 93)));
label_164b44:
    // 0x164b44: 0x14660012  bne         $v1, $a2, . + 4 + (0x12 << 2)
label_164b48:
    if (ctx->pc == 0x164B48u) {
        ctx->pc = 0x164B4Cu;
        goto label_164b4c;
    }
    ctx->pc = 0x164B44u;
    {
        const bool branch_taken_0x164b44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x164b44) {
            ctx->pc = 0x164B90u;
            goto label_164b90;
        }
    }
    ctx->pc = 0x164B4Cu;
label_164b4c:
    // 0x164b4c: 0x9123005b  lbu         $v1, 0x5B($t1)
    ctx->pc = 0x164b4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 91)));
label_164b50:
    // 0x164b50: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_164b54:
    if (ctx->pc == 0x164B54u) {
        ctx->pc = 0x164B58u;
        goto label_164b58;
    }
    ctx->pc = 0x164B50u;
    {
        const bool branch_taken_0x164b50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x164b50) {
            ctx->pc = 0x164B90u;
            goto label_164b90;
        }
    }
    ctx->pc = 0x164B58u;
label_164b58:
    // 0x164b58: 0x9123005f  lbu         $v1, 0x5F($t1)
    ctx->pc = 0x164b58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 95)));
label_164b5c:
    // 0x164b5c: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
label_164b60:
    if (ctx->pc == 0x164B60u) {
        ctx->pc = 0x164B64u;
        goto label_164b64;
    }
    ctx->pc = 0x164B5Cu;
    {
        const bool branch_taken_0x164b5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x164b5c) {
            ctx->pc = 0x164B78u;
            goto label_164b78;
        }
    }
    ctx->pc = 0x164B64u;
label_164b64:
    // 0x164b64: 0xa124005f  sb          $a0, 0x5F($t1)
    ctx->pc = 0x164b64u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 95), (uint8_t)GPR_U32(ctx, 4));
label_164b68:
    // 0x164b68: 0x95230056  lhu         $v1, 0x56($t1)
    ctx->pc = 0x164b68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 86)));
label_164b6c:
    // 0x164b6c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x164b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_164b70:
    // 0x164b70: 0x10000007  b           . + 4 + (0x7 << 2)
label_164b74:
    if (ctx->pc == 0x164B74u) {
        ctx->pc = 0x164B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B70u;
        // 0x164b74: 0xa5230056  sh          $v1, 0x56($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 86), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164B78u;
        goto label_164b78;
    }
    ctx->pc = 0x164B70u;
    {
        const bool branch_taken_0x164b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B70u;
        // 0x164b74: 0xa5230056  sh          $v1, 0x56($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 86), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164b70) {
            ctx->pc = 0x164B90u;
            goto label_164b90;
        }
    }
    ctx->pc = 0x164B78u;
label_164b78:
    // 0x164b78: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_164b7c:
    if (ctx->pc == 0x164B7Cu) {
        ctx->pc = 0x164B80u;
        goto label_164b80;
    }
    ctx->pc = 0x164B78u;
    {
        const bool branch_taken_0x164b78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x164b78) {
            ctx->pc = 0x164B90u;
            goto label_164b90;
        }
    }
    ctx->pc = 0x164B80u;
label_164b80:
    // 0x164b80: 0xa125005f  sb          $a1, 0x5F($t1)
    ctx->pc = 0x164b80u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 95), (uint8_t)GPR_U32(ctx, 5));
label_164b84:
    // 0x164b84: 0x95230056  lhu         $v1, 0x56($t1)
    ctx->pc = 0x164b84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 86)));
label_164b88:
    // 0x164b88: 0x3063fffe  andi        $v1, $v1, 0xFFFE
    ctx->pc = 0x164b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
label_164b8c:
    // 0x164b8c: 0xa5230056  sh          $v1, 0x56($t1)
    ctx->pc = 0x164b8cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 86), (uint16_t)GPR_U32(ctx, 3));
label_164b90:
    // 0x164b90: 0x8d290044  lw          $t1, 0x44($t1)
    ctx->pc = 0x164b90u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 68)));
label_164b94:
    // 0x164b94: 0x1520ffea  bnez        $t1, . + 4 + (-0x16 << 2)
label_164b98:
    if (ctx->pc == 0x164B98u) {
        ctx->pc = 0x164B9Cu;
        goto label_164b9c;
    }
    ctx->pc = 0x164B94u;
    {
        const bool branch_taken_0x164b94 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x164b94) {
            ctx->pc = 0x164B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164b40;
        }
    }
    ctx->pc = 0x164B9Cu;
label_164b9c:
    // 0x164b9c: 0x0  nop
    ctx->pc = 0x164b9cu;
    // NOP
label_164ba0:
    // 0x164ba0: 0x3e00008  jr          $ra
label_164ba4:
    if (ctx->pc == 0x164BA4u) {
        ctx->pc = 0x164BA8u;
        goto label_164ba8;
    }
    ctx->pc = 0x164BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164BA8u;
label_164ba8:
    // 0x164ba8: 0x0  nop
    ctx->pc = 0x164ba8u;
    // NOP
label_164bac:
    // 0x164bac: 0x0  nop
    ctx->pc = 0x164bacu;
    // NOP
label_164bb0:
    // 0x164bb0: 0x8f8a85d0  lw          $t2, -0x7A30($gp)
    ctx->pc = 0x164bb0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
label_164bb4:
    // 0x164bb4: 0x1140001b  beqz        $t2, . + 4 + (0x1B << 2)
label_164bb8:
    if (ctx->pc == 0x164BB8u) {
        ctx->pc = 0x164BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164BB4u;
        // 0x164bb8: 0x8f8984b0  lw          $t1, -0x7B50($gp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935728)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164BBCu;
        goto label_164bbc;
    }
    ctx->pc = 0x164BB4u;
    {
        const bool branch_taken_0x164bb4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x164BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164BB4u;
        // 0x164bb8: 0x8f8984b0  lw          $t1, -0x7B50($gp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164bb4) {
            ctx->pc = 0x164C24u;
            goto label_164c24;
        }
    }
    ctx->pc = 0x164BBCu;
label_164bbc:
    // 0x164bbc: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x164bbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_164bc0:
    // 0x164bc0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x164bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_164bc4:
    // 0x164bc4: 0x2406ffef  addiu       $a2, $zero, -0x11
    ctx->pc = 0x164bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_164bc8:
    // 0x164bc8: 0x308800ff  andi        $t0, $a0, 0xFF
    ctx->pc = 0x164bc8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_164bcc:
    // 0x164bcc: 0x91430096  lbu         $v1, 0x96($t2)
    ctx->pc = 0x164bccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 150)));
label_164bd0:
    // 0x164bd0: 0x14680010  bne         $v1, $t0, . + 4 + (0x10 << 2)
label_164bd4:
    if (ctx->pc == 0x164BD4u) {
        ctx->pc = 0x164BD8u;
        goto label_164bd8;
    }
    ctx->pc = 0x164BD0u;
    {
        const bool branch_taken_0x164bd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x164bd0) {
            ctx->pc = 0x164C14u;
            goto label_164c14;
        }
    }
    ctx->pc = 0x164BD8u;
label_164bd8:
    // 0x164bd8: 0x91430094  lbu         $v1, 0x94($t2)
    ctx->pc = 0x164bd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 148)));
label_164bdc:
    // 0x164bdc: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_164be0:
    if (ctx->pc == 0x164BE0u) {
        ctx->pc = 0x164BE4u;
        goto label_164be4;
    }
    ctx->pc = 0x164BDCu;
    {
        const bool branch_taken_0x164bdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x164bdc) {
            ctx->pc = 0x164C14u;
            goto label_164c14;
        }
    }
    ctx->pc = 0x164BE4u;
label_164be4:
    // 0x164be4: 0x91430097  lbu         $v1, 0x97($t2)
    ctx->pc = 0x164be4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 151)));
label_164be8:
    // 0x164be8: 0x14670005  bne         $v1, $a3, . + 4 + (0x5 << 2)
label_164bec:
    if (ctx->pc == 0x164BECu) {
        ctx->pc = 0x164BF0u;
        goto label_164bf0;
    }
    ctx->pc = 0x164BE8u;
    {
        const bool branch_taken_0x164be8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x164be8) {
            ctx->pc = 0x164C00u;
            goto label_164c00;
        }
    }
    ctx->pc = 0x164BF0u;
label_164bf0:
    // 0x164bf0: 0x8d430090  lw          $v1, 0x90($t2)
    ctx->pc = 0x164bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 144)));
label_164bf4:
    // 0x164bf4: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x164bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_164bf8:
    // 0x164bf8: 0x10000006  b           . + 4 + (0x6 << 2)
label_164bfc:
    if (ctx->pc == 0x164BFCu) {
        ctx->pc = 0x164BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164BF8u;
        // 0x164bfc: 0xad430090  sw          $v1, 0x90($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164C00u;
        goto label_164c00;
    }
    ctx->pc = 0x164BF8u;
    {
        const bool branch_taken_0x164bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164BF8u;
        // 0x164bfc: 0xad430090  sw          $v1, 0x90($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164bf8) {
            ctx->pc = 0x164C14u;
            goto label_164c14;
        }
    }
    ctx->pc = 0x164C00u;
label_164c00:
    // 0x164c00: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
label_164c04:
    if (ctx->pc == 0x164C04u) {
        ctx->pc = 0x164C08u;
        goto label_164c08;
    }
    ctx->pc = 0x164C00u;
    {
        const bool branch_taken_0x164c00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x164c00) {
            ctx->pc = 0x164C14u;
            goto label_164c14;
        }
    }
    ctx->pc = 0x164C08u;
label_164c08:
    // 0x164c08: 0x8d430090  lw          $v1, 0x90($t2)
    ctx->pc = 0x164c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 144)));
label_164c0c:
    // 0x164c0c: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x164c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_164c10:
    // 0x164c10: 0xad430090  sw          $v1, 0x90($t2)
    ctx->pc = 0x164c10u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 144), GPR_U32(ctx, 3));
label_164c14:
    // 0x164c14: 0x0  nop
    ctx->pc = 0x164c14u;
    // NOP
label_164c18:
    // 0x164c18: 0x8d4a0084  lw          $t2, 0x84($t2)
    ctx->pc = 0x164c18u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 132)));
label_164c1c:
    // 0x164c1c: 0x1540ffeb  bnez        $t2, . + 4 + (-0x15 << 2)
label_164c20:
    if (ctx->pc == 0x164C20u) {
        ctx->pc = 0x164C24u;
        goto label_164c24;
    }
    ctx->pc = 0x164C1Cu;
    {
        const bool branch_taken_0x164c1c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x164c1c) {
            ctx->pc = 0x164BCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164bcc;
        }
    }
    ctx->pc = 0x164C24u;
label_164c24:
    // 0x164c24: 0x0  nop
    ctx->pc = 0x164c24u;
    // NOP
label_164c28:
    // 0x164c28: 0x1120001a  beqz        $t1, . + 4 + (0x1A << 2)
label_164c2c:
    if (ctx->pc == 0x164C2Cu) {
        ctx->pc = 0x164C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164C28u;
        // 0x164c2c: 0x308600ff  andi        $a2, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x164C30u;
        goto label_164c30;
    }
    ctx->pc = 0x164C28u;
    {
        const bool branch_taken_0x164c28 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x164C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164C28u;
        // 0x164c2c: 0x308600ff  andi        $a2, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x164c28) {
            ctx->pc = 0x164C94u;
            goto label_164c94;
        }
    }
    ctx->pc = 0x164C30u;
label_164c30:
    // 0x164c30: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x164c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_164c34:
    // 0x164c34: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x164c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_164c38:
    // 0x164c38: 0x9123005d  lbu         $v1, 0x5D($t1)
    ctx->pc = 0x164c38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 93)));
label_164c3c:
    // 0x164c3c: 0x14660011  bne         $v1, $a2, . + 4 + (0x11 << 2)
label_164c40:
    if (ctx->pc == 0x164C40u) {
        ctx->pc = 0x164C44u;
        goto label_164c44;
    }
    ctx->pc = 0x164C3Cu;
    {
        const bool branch_taken_0x164c3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x164c3c) {
            ctx->pc = 0x164C84u;
            goto label_164c84;
        }
    }
    ctx->pc = 0x164C44u;
label_164c44:
    // 0x164c44: 0x9123005b  lbu         $v1, 0x5B($t1)
    ctx->pc = 0x164c44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 91)));
label_164c48:
    // 0x164c48: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_164c4c:
    if (ctx->pc == 0x164C4Cu) {
        ctx->pc = 0x164C50u;
        goto label_164c50;
    }
    ctx->pc = 0x164C48u;
    {
        const bool branch_taken_0x164c48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x164c48) {
            ctx->pc = 0x164C84u;
            goto label_164c84;
        }
    }
    ctx->pc = 0x164C50u;
label_164c50:
    // 0x164c50: 0x9123005f  lbu         $v1, 0x5F($t1)
    ctx->pc = 0x164c50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 95)));
label_164c54:
    // 0x164c54: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
label_164c58:
    if (ctx->pc == 0x164C58u) {
        ctx->pc = 0x164C5Cu;
        goto label_164c5c;
    }
    ctx->pc = 0x164C54u;
    {
        const bool branch_taken_0x164c54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x164c54) {
            ctx->pc = 0x164C6Cu;
            goto label_164c6c;
        }
    }
    ctx->pc = 0x164C5Cu;
label_164c5c:
    // 0x164c5c: 0x95230056  lhu         $v1, 0x56($t1)
    ctx->pc = 0x164c5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 86)));
label_164c60:
    // 0x164c60: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x164c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_164c64:
    // 0x164c64: 0x10000007  b           . + 4 + (0x7 << 2)
label_164c68:
    if (ctx->pc == 0x164C68u) {
        ctx->pc = 0x164C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164C64u;
        // 0x164c68: 0xa5230056  sh          $v1, 0x56($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 86), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164C6Cu;
        goto label_164c6c;
    }
    ctx->pc = 0x164C64u;
    {
        const bool branch_taken_0x164c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164C64u;
        // 0x164c68: 0xa5230056  sh          $v1, 0x56($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 86), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164c64) {
            ctx->pc = 0x164C84u;
            goto label_164c84;
        }
    }
    ctx->pc = 0x164C6Cu;
label_164c6c:
    // 0x164c6c: 0x0  nop
    ctx->pc = 0x164c6cu;
    // NOP
label_164c70:
    // 0x164c70: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
label_164c74:
    if (ctx->pc == 0x164C74u) {
        ctx->pc = 0x164C78u;
        goto label_164c78;
    }
    ctx->pc = 0x164C70u;
    {
        const bool branch_taken_0x164c70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x164c70) {
            ctx->pc = 0x164C84u;
            goto label_164c84;
        }
    }
    ctx->pc = 0x164C78u;
label_164c78:
    // 0x164c78: 0x95230056  lhu         $v1, 0x56($t1)
    ctx->pc = 0x164c78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 86)));
label_164c7c:
    // 0x164c7c: 0x3063fffe  andi        $v1, $v1, 0xFFFE
    ctx->pc = 0x164c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
label_164c80:
    // 0x164c80: 0xa5230056  sh          $v1, 0x56($t1)
    ctx->pc = 0x164c80u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 86), (uint16_t)GPR_U32(ctx, 3));
label_164c84:
    // 0x164c84: 0x0  nop
    ctx->pc = 0x164c84u;
    // NOP
label_164c88:
    // 0x164c88: 0x8d290044  lw          $t1, 0x44($t1)
    ctx->pc = 0x164c88u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 68)));
label_164c8c:
    // 0x164c8c: 0x1520ffea  bnez        $t1, . + 4 + (-0x16 << 2)
label_164c90:
    if (ctx->pc == 0x164C90u) {
        ctx->pc = 0x164C94u;
        goto label_164c94;
    }
    ctx->pc = 0x164C8Cu;
    {
        const bool branch_taken_0x164c8c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x164c8c) {
            ctx->pc = 0x164C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164c38;
        }
    }
    ctx->pc = 0x164C94u;
label_164c94:
    // 0x164c94: 0x0  nop
    ctx->pc = 0x164c94u;
    // NOP
label_164c98:
    // 0x164c98: 0x3e00008  jr          $ra
label_164c9c:
    if (ctx->pc == 0x164C9Cu) {
        ctx->pc = 0x164CA0u;
        goto label_164ca0;
    }
    ctx->pc = 0x164C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164CA0u;
label_164ca0:
    // 0x164ca0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x164ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_164ca4:
    // 0x164ca4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x164ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_164ca8:
    // 0x164ca8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x164ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_164cac:
    // 0x164cac: 0x24a53ee0  addiu       $a1, $a1, 0x3EE0
    ctx->pc = 0x164cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16096));
label_164cb0:
    // 0x164cb0: 0xc08e93e  jal         func_23A4F8
label_164cb4:
    if (ctx->pc == 0x164CB4u) {
        ctx->pc = 0x164CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164CB0u;
        // 0x164cb4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164CB8u;
        goto label_164cb8;
    }
    ctx->pc = 0x164CB0u;
    SET_GPR_U32(ctx, 31, 0x164CB8u);
    ctx->pc = 0x164CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164CB0u;
    // 0x164cb4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x164CB8u;
label_164cb8:
    // 0x164cb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x164cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_164cbc:
    // 0x164cbc: 0x3e00008  jr          $ra
label_164cc0:
    if (ctx->pc == 0x164CC0u) {
        ctx->pc = 0x164CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164CBCu;
        // 0x164cc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164CC4u;
        goto label_164cc4;
    }
    ctx->pc = 0x164CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164CBCu;
        // 0x164cc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164CC4u;
label_164cc4:
    // 0x164cc4: 0x0  nop
    ctx->pc = 0x164cc4u;
    // NOP
label_164cc8:
    // 0x164cc8: 0x0  nop
    ctx->pc = 0x164cc8u;
    // NOP
label_164ccc:
    // 0x164ccc: 0x0  nop
    ctx->pc = 0x164cccu;
    // NOP
label_164cd0:
    // 0x164cd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x164cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_164cd4:
    // 0x164cd4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x164cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_164cd8:
    // 0x164cd8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x164cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_164cdc:
    // 0x164cdc: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x164cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_164ce0:
    // 0x164ce0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x164ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_164ce4:
    // 0x164ce4: 0x24843ee0  addiu       $a0, $a0, 0x3EE0
    ctx->pc = 0x164ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16096));
label_164ce8:
    // 0x164ce8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x164ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_164cec:
    // 0x164cec: 0x8f9086c0  lw          $s0, -0x7940($gp)
    ctx->pc = 0x164cecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936256)));
label_164cf0:
    // 0x164cf0: 0xc08e93e  jal         func_23A4F8
label_164cf4:
    if (ctx->pc == 0x164CF4u) {
        ctx->pc = 0x164CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164CF0u;
        // 0x164cf4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164CF8u;
        goto label_164cf8;
    }
    ctx->pc = 0x164CF0u;
    SET_GPR_U32(ctx, 31, 0x164CF8u);
    ctx->pc = 0x164CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164CF0u;
    // 0x164cf4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x164CF8u;
label_164cf8:
    // 0x164cf8: 0x12000052  beqz        $s0, . + 4 + (0x52 << 2)
label_164cfc:
    if (ctx->pc == 0x164CFCu) {
        ctx->pc = 0x164D00u;
        goto label_164d00;
    }
    ctx->pc = 0x164CF8u;
    {
        const bool branch_taken_0x164cf8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x164cf8) {
            ctx->pc = 0x164E44u;
            goto label_164e44;
        }
    }
    ctx->pc = 0x164D00u;
label_164d00:
    // 0x164d00: 0x9203000b  lbu         $v1, 0xB($s0)
    ctx->pc = 0x164d00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
label_164d04:
    // 0x164d04: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x164d04u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_164d08:
    // 0x164d08: 0x3065007f  andi        $a1, $v1, 0x7F
    ctx->pc = 0x164d08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
label_164d0c:
    // 0x164d0c: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
label_164d10:
    if (ctx->pc == 0x164D10u) {
        ctx->pc = 0x164D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164D0Cu;
        // 0x164d10: 0x51943  sra         $v1, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164D14u;
        goto label_164d14;
    }
    ctx->pc = 0x164D0Cu;
    {
        const bool branch_taken_0x164d0c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x164D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164D0Cu;
        // 0x164d10: 0x51943  sra         $v1, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164d0c) {
            ctx->pc = 0x164D1Cu;
            goto label_164d1c;
        }
    }
    ctx->pc = 0x164D14u;
label_164d14:
    // 0x164d14: 0x24a3001f  addiu       $v1, $a1, 0x1F
    ctx->pc = 0x164d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 31));
label_164d18:
    // 0x164d18: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x164d18u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_164d1c:
    // 0x164d1c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x164d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_164d20:
    // 0x164d20: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x164d20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_164d24:
    // 0x164d24: 0x24633ee0  addiu       $v1, $v1, 0x3EE0
    ctx->pc = 0x164d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16096));
label_164d28:
    // 0x164d28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x164d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_164d2c:
    // 0x164d2c: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
label_164d30:
    if (ctx->pc == 0x164D30u) {
        ctx->pc = 0x164D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164D2Cu;
        // 0x164d30: 0x30a4001f  andi        $a0, $a1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        ctx->pc = 0x164D34u;
        goto label_164d34;
    }
    ctx->pc = 0x164D2Cu;
    {
        const bool branch_taken_0x164d2c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x164D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164D2Cu;
        // 0x164d30: 0x30a4001f  andi        $a0, $a1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x164d2c) {
            ctx->pc = 0x164D40u;
            goto label_164d40;
        }
    }
    ctx->pc = 0x164D34u;
label_164d34:
    // 0x164d34: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
label_164d38:
    if (ctx->pc == 0x164D38u) {
        ctx->pc = 0x164D3Cu;
        goto label_164d3c;
    }
    ctx->pc = 0x164D34u;
    {
        const bool branch_taken_0x164d34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x164d34) {
            ctx->pc = 0x164D40u;
            goto label_164d40;
        }
    }
    ctx->pc = 0x164D3Cu;
label_164d3c:
    // 0x164d3c: 0x2484ffe0  addiu       $a0, $a0, -0x20
    ctx->pc = 0x164d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
label_164d40:
    // 0x164d40: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x164d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_164d44:
    // 0x164d44: 0x831806  srlv        $v1, $v1, $a0
    ctx->pc = 0x164d44u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_164d48:
    // 0x164d48: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x164d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_164d4c:
    // 0x164d4c: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
label_164d50:
    if (ctx->pc == 0x164D50u) {
        ctx->pc = 0x164D54u;
        goto label_164d54;
    }
    ctx->pc = 0x164D4Cu;
    {
        const bool branch_taken_0x164d4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x164d4c) {
            ctx->pc = 0x164DE0u;
            goto label_164de0;
        }
    }
    ctx->pc = 0x164D54u;
label_164d54:
    // 0x164d54: 0x8e25004c  lw          $a1, 0x4C($s1)
    ctx->pc = 0x164d54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_164d58:
    // 0x164d58: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x164d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_164d5c:
    // 0x164d5c: 0x8ca40090  lw          $a0, 0x90($a1)
    ctx->pc = 0x164d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
label_164d60:
    // 0x164d60: 0x34840010  ori         $a0, $a0, 0x10
    ctx->pc = 0x164d60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
label_164d64:
    // 0x164d64: 0xaca40090  sw          $a0, 0x90($a1)
    ctx->pc = 0x164d64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 4));
label_164d68:
    // 0x164d68: 0x96240056  lhu         $a0, 0x56($s1)
    ctx->pc = 0x164d68u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 86)));
label_164d6c:
    // 0x164d6c: 0x3084fffe  andi        $a0, $a0, 0xFFFE
    ctx->pc = 0x164d6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65534);
label_164d70:
    // 0x164d70: 0xa6240056  sh          $a0, 0x56($s1)
    ctx->pc = 0x164d70u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 86), (uint16_t)GPR_U32(ctx, 4));
label_164d74:
    // 0x164d74: 0xa203000a  sb          $v1, 0xA($s0)
    ctx->pc = 0x164d74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 3));
label_164d78:
    // 0x164d78: 0x9224005d  lbu         $a0, 0x5D($s1)
    ctx->pc = 0x164d78u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 93)));
label_164d7c:
    // 0x164d7c: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
label_164d80:
    if (ctx->pc == 0x164D80u) {
        ctx->pc = 0x164D84u;
        goto label_164d84;
    }
    ctx->pc = 0x164D7Cu;
    {
        const bool branch_taken_0x164d7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x164d7c) {
            ctx->pc = 0x164DE0u;
            goto label_164de0;
        }
    }
    ctx->pc = 0x164D84u;
label_164d84:
    // 0x164d84: 0x8f8586b8  lw          $a1, -0x7948($gp)
    ctx->pc = 0x164d84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936248)));
label_164d88:
    // 0x164d88: 0x308b00ff  andi        $t3, $a0, 0xFF
    ctx->pc = 0x164d88u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_164d8c:
    // 0x164d8c: 0x3166001f  andi        $a2, $t3, 0x1F
    ctx->pc = 0x164d8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)31);
label_164d90:
    // 0x164d90: 0xc51806  srlv        $v1, $a1, $a2
    ctx->pc = 0x164d90u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
label_164d94:
    // 0x164d94: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x164d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_164d98:
    // 0x164d98: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
label_164d9c:
    if (ctx->pc == 0x164D9Cu) {
        ctx->pc = 0x164DA0u;
        goto label_164da0;
    }
    ctx->pc = 0x164D98u;
    {
        const bool branch_taken_0x164d98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x164d98) {
            ctx->pc = 0x164DE0u;
            goto label_164de0;
        }
    }
    ctx->pc = 0x164DA0u;
label_164da0:
    // 0x164da0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_164da4:
    // 0x164da4: 0xc21004  sllv        $v0, $v0, $a2
    ctx->pc = 0x164da4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
label_164da8:
    // 0x164da8: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x164da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_164dac:
    // 0x164dac: 0xc0592ec  jal         func_164BB0
label_164db0:
    if (ctx->pc == 0x164DB0u) {
        ctx->pc = 0x164DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164DACu;
        // 0x164db0: 0xaf8286b8  sw          $v0, -0x7948($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164DB4u;
        goto label_164db4;
    }
    ctx->pc = 0x164DACu;
    SET_GPR_U32(ctx, 31, 0x164DB4u);
    ctx->pc = 0x164DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164DACu;
    // 0x164db0: 0xaf8286b8  sw          $v0, -0x7948($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936248), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164BB0u;
    goto label_164bb0;
    ctx->pc = 0x164DB4u;
label_164db4:
    // 0x164db4: 0xc04f5bc  jal         func_13D6F0
label_164db8:
    if (ctx->pc == 0x164DB8u) {
        ctx->pc = 0x164DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164DB4u;
        // 0x164db8: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164DBCu;
        goto label_164dbc;
    }
    ctx->pc = 0x164DB4u;
    SET_GPR_U32(ctx, 31, 0x164DBCu);
    ctx->pc = 0x164DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164DB4u;
    // 0x164db8: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D6F0u, 0x164DB4u, 0x164DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164DBCu;
label_164dbc:
    // 0x164dbc: 0xc04f5bc  jal         func_13D6F0
label_164dc0:
    if (ctx->pc == 0x164DC0u) {
        ctx->pc = 0x164DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164DBCu;
        // 0x164dc0: 0x9224005d  lbu         $a0, 0x5D($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 93)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164DC4u;
        goto label_164dc4;
    }
    ctx->pc = 0x164DBCu;
    SET_GPR_U32(ctx, 31, 0x164DC4u);
    ctx->pc = 0x164DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164DBCu;
    // 0x164dc0: 0x9224005d  lbu         $a0, 0x5D($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 93)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D6F0u, 0x164DBCu, 0x164DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164DC4u;
label_164dc4:
    // 0x164dc4: 0x92040009  lbu         $a0, 0x9($s0)
    ctx->pc = 0x164dc4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_164dc8:
    // 0x164dc8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x164dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_164dcc:
    // 0x164dcc: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_164dd0:
    if (ctx->pc == 0x164DD0u) {
        ctx->pc = 0x164DD4u;
        goto label_164dd4;
    }
    ctx->pc = 0x164DCCu;
    {
        const bool branch_taken_0x164dcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x164dcc) {
            ctx->pc = 0x164DE0u;
            goto label_164de0;
        }
    }
    ctx->pc = 0x164DD4u;
label_164dd4:
    // 0x164dd4: 0x9222005d  lbu         $v0, 0x5D($s1)
    ctx->pc = 0x164dd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 93)));
label_164dd8:
    // 0x164dd8: 0xc05dcf8  jal         func_1773E0
label_164ddc:
    if (ctx->pc == 0x164DDCu) {
        ctx->pc = 0x164DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164DD8u;
        // 0x164ddc: 0x2444ffff  addiu       $a0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164DE0u;
        goto label_164de0;
    }
    ctx->pc = 0x164DD8u;
    SET_GPR_U32(ctx, 31, 0x164DE0u);
    ctx->pc = 0x164DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164DD8u;
    // 0x164ddc: 0x2444ffff  addiu       $a0, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1773E0u;
    { ctx->pc = 0x1773e0; return; }
    ctx->pc = 0x164DE0u;
label_164de0:
    // 0x164de0: 0x92040008  lbu         $a0, 0x8($s0)
    ctx->pc = 0x164de0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
label_164de4:
    // 0x164de4: 0x8f8386b8  lw          $v1, -0x7948($gp)
    ctx->pc = 0x164de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936248)));
label_164de8:
    // 0x164de8: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x164de8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
label_164dec:
    // 0x164dec: 0x831806  srlv        $v1, $v1, $a0
    ctx->pc = 0x164decu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_164df0:
    // 0x164df0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x164df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_164df4:
    // 0x164df4: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_164df8:
    if (ctx->pc == 0x164DF8u) {
        ctx->pc = 0x164DFCu;
        goto label_164dfc;
    }
    ctx->pc = 0x164DF4u;
    {
        const bool branch_taken_0x164df4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x164df4) {
            ctx->pc = 0x164E34u;
            goto label_164e34;
        }
    }
    ctx->pc = 0x164DFCu;
label_164dfc:
    // 0x164dfc: 0x9224005f  lbu         $a0, 0x5F($s1)
    ctx->pc = 0x164dfcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 95)));
label_164e00:
    // 0x164e00: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x164e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_164e04:
    // 0x164e04: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
label_164e08:
    if (ctx->pc == 0x164E08u) {
        ctx->pc = 0x164E0Cu;
        goto label_164e0c;
    }
    ctx->pc = 0x164E04u;
    {
        const bool branch_taken_0x164e04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x164e04) {
            ctx->pc = 0x164E34u;
            goto label_164e34;
        }
    }
    ctx->pc = 0x164E0Cu;
label_164e0c:
    // 0x164e0c: 0x8e26004c  lw          $a2, 0x4C($s1)
    ctx->pc = 0x164e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_164e10:
    // 0x164e10: 0x2404ffef  addiu       $a0, $zero, -0x11
    ctx->pc = 0x164e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_164e14:
    // 0x164e14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x164e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_164e18:
    // 0x164e18: 0x8cc50090  lw          $a1, 0x90($a2)
    ctx->pc = 0x164e18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 144)));
label_164e1c:
    // 0x164e1c: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x164e1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_164e20:
    // 0x164e20: 0xacc40090  sw          $a0, 0x90($a2)
    ctx->pc = 0x164e20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 4));
label_164e24:
    // 0x164e24: 0x96240056  lhu         $a0, 0x56($s1)
    ctx->pc = 0x164e24u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 86)));
label_164e28:
    // 0x164e28: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x164e28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
label_164e2c:
    // 0x164e2c: 0xa6240056  sh          $a0, 0x56($s1)
    ctx->pc = 0x164e2cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 86), (uint16_t)GPR_U32(ctx, 4));
label_164e30:
    // 0x164e30: 0xa203000a  sb          $v1, 0xA($s0)
    ctx->pc = 0x164e30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 3));
label_164e34:
    // 0x164e34: 0x0  nop
    ctx->pc = 0x164e34u;
    // NOP
label_164e38:
    // 0x164e38: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x164e38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_164e3c:
    // 0x164e3c: 0x1600ffb0  bnez        $s0, . + 4 + (-0x50 << 2)
label_164e40:
    if (ctx->pc == 0x164E40u) {
        ctx->pc = 0x164E44u;
        goto label_164e44;
    }
    ctx->pc = 0x164E3Cu;
    {
        const bool branch_taken_0x164e3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x164e3c) {
            ctx->pc = 0x164D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164d00;
        }
    }
    ctx->pc = 0x164E44u;
label_164e44:
    // 0x164e44: 0x0  nop
    ctx->pc = 0x164e44u;
    // NOP
label_164e48:
    // 0x164e48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x164e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_164e4c:
    // 0x164e4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x164e4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_164e50:
    // 0x164e50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x164e50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_164e54:
    // 0x164e54: 0x3e00008  jr          $ra
label_164e58:
    if (ctx->pc == 0x164E58u) {
        ctx->pc = 0x164E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164E54u;
        // 0x164e58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164E5Cu;
        goto label_164e5c;
    }
    ctx->pc = 0x164E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164E54u;
        // 0x164e58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164E5Cu;
label_164e5c:
    // 0x164e5c: 0x0  nop
    ctx->pc = 0x164e5cu;
    // NOP
label_164e60:
    // 0x164e60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x164e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_164e64:
    // 0x164e64: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x164e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_164e68:
    // 0x164e68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x164e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_164e6c:
    // 0x164e6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x164e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_164e70:
    // 0x164e70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x164e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_164e74:
    // 0x164e74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x164e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_164e78:
    // 0x164e78: 0x8f9186c0  lw          $s1, -0x7940($gp)
    ctx->pc = 0x164e78u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936256)));
label_164e7c:
    // 0x164e7c: 0x12200131  beqz        $s1, . + 4 + (0x131 << 2)
label_164e80:
    if (ctx->pc == 0x164E80u) {
        ctx->pc = 0x164E84u;
        goto label_164e84;
    }
    ctx->pc = 0x164E7Cu;
    {
        const bool branch_taken_0x164e7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x164e7c) {
            ctx->pc = 0x165344u;
            { ctx->pc = 0x165344; return; }
        }
    }
    ctx->pc = 0x164E84u;
label_164e84:
    // 0x164e84: 0x9224000a  lbu         $a0, 0xA($s1)
    ctx->pc = 0x164e84u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
label_164e88:
    // 0x164e88: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x164e88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_164e8c:
    // 0x164e8c: 0x1087012a  beq         $a0, $a3, . + 4 + (0x12A << 2)
label_164e90:
    if (ctx->pc == 0x164E90u) {
        ctx->pc = 0x164E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164E8Cu;
        // 0x164e90: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164E94u;
        goto label_164e94;
    }
    ctx->pc = 0x164E8Cu;
    {
        const bool branch_taken_0x164e8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        ctx->pc = 0x164E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164E8Cu;
        // 0x164e90: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164e8c) {
            ctx->pc = 0x165338u;
            { ctx->pc = 0x165338; return; }
        }
    }
    ctx->pc = 0x164E94u;
label_164e94:
    // 0x164e94: 0x1085011d  beq         $a0, $a1, . + 4 + (0x11D << 2)
label_164e98:
    if (ctx->pc == 0x164E98u) {
        ctx->pc = 0x164E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164E94u;
        // 0x164e98: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164E9Cu;
        goto label_164e9c;
    }
    ctx->pc = 0x164E94u;
    {
        const bool branch_taken_0x164e94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x164E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164E94u;
        // 0x164e98: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164e94) {
            ctx->pc = 0x16530Cu;
            { ctx->pc = 0x16530c; return; }
        }
    }
    ctx->pc = 0x164E9Cu;
label_164e9c:
    // 0x164e9c: 0x1083002d  beq         $a0, $v1, . + 4 + (0x2D << 2)
label_164ea0:
    if (ctx->pc == 0x164EA0u) {
        ctx->pc = 0x164EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164E9Cu;
        // 0x164ea0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164EA4u;
        goto label_164ea4;
    }
    ctx->pc = 0x164E9Cu;
    {
        const bool branch_taken_0x164e9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x164EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164E9Cu;
        // 0x164ea0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164e9c) {
            ctx->pc = 0x164F54u;
            goto label_164f54;
        }
    }
    ctx->pc = 0x164EA4u;
label_164ea4:
    // 0x164ea4: 0x10860017  beq         $a0, $a2, . + 4 + (0x17 << 2)
label_164ea8:
    if (ctx->pc == 0x164EA8u) {
        ctx->pc = 0x164EACu;
        goto label_164eac;
    }
    ctx->pc = 0x164EA4u;
    {
        const bool branch_taken_0x164ea4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x164ea4) {
            ctx->pc = 0x164F04u;
            goto label_164f04;
        }
    }
    ctx->pc = 0x164EACu;
label_164eac:
    // 0x164eac: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_164eb0:
    if (ctx->pc == 0x164EB0u) {
        ctx->pc = 0x164EB4u;
        goto label_164eb4;
    }
    ctx->pc = 0x164EACu;
    {
        const bool branch_taken_0x164eac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x164eac) {
            ctx->pc = 0x164EBCu;
            goto label_164ebc;
        }
    }
    ctx->pc = 0x164EB4u;
label_164eb4:
    // 0x164eb4: 0x10000120  b           . + 4 + (0x120 << 2)
label_164eb8:
    if (ctx->pc == 0x164EB8u) {
        ctx->pc = 0x164EBCu;
        goto label_164ebc;
    }
    ctx->pc = 0x164EB4u;
    {
        const bool branch_taken_0x164eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164eb4) {
            ctx->pc = 0x165338u;
            { ctx->pc = 0x165338; return; }
        }
    }
    ctx->pc = 0x164EBCu;
label_164ebc:
    // 0x164ebc: 0x0  nop
    ctx->pc = 0x164ebcu;
    // NOP
label_164ec0:
    // 0x164ec0: 0x92240008  lbu         $a0, 0x8($s1)
    ctx->pc = 0x164ec0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
label_164ec4:
    // 0x164ec4: 0x8f8386b8  lw          $v1, -0x7948($gp)
    ctx->pc = 0x164ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936248)));
label_164ec8:
    // 0x164ec8: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x164ec8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
label_164ecc:
    // 0x164ecc: 0x831806  srlv        $v1, $v1, $a0
    ctx->pc = 0x164eccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_164ed0:
    // 0x164ed0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x164ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_164ed4:
    // 0x164ed4: 0x10600118  beqz        $v1, . + 4 + (0x118 << 2)
label_164ed8:
    if (ctx->pc == 0x164ED8u) {
        ctx->pc = 0x164ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164ED4u;
        // 0x164ed8: 0x8e270004  lw          $a3, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164EDCu;
        goto label_164edc;
    }
    ctx->pc = 0x164ED4u;
    {
        const bool branch_taken_0x164ed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x164ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164ED4u;
        // 0x164ed8: 0x8e270004  lw          $a3, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164ed4) {
            ctx->pc = 0x165338u;
            { ctx->pc = 0x165338; return; }
        }
    }
    ctx->pc = 0x164EDCu;
label_164edc:
    // 0x164edc: 0x8ce5004c  lw          $a1, 0x4C($a3)
    ctx->pc = 0x164edcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 76)));
label_164ee0:
    // 0x164ee0: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x164ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_164ee4:
    // 0x164ee4: 0x8ca40090  lw          $a0, 0x90($a1)
    ctx->pc = 0x164ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
label_164ee8:
    // 0x164ee8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x164ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_164eec:
    // 0x164eec: 0xaca30090  sw          $v1, 0x90($a1)
    ctx->pc = 0x164eecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 3));
label_164ef0:
    // 0x164ef0: 0x94e30056  lhu         $v1, 0x56($a3)
    ctx->pc = 0x164ef0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 86)));
label_164ef4:
    // 0x164ef4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x164ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_164ef8:
    // 0x164ef8: 0xa4e30056  sh          $v1, 0x56($a3)
    ctx->pc = 0x164ef8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 86), (uint16_t)GPR_U32(ctx, 3));
label_164efc:
    // 0x164efc: 0x1000010e  b           . + 4 + (0x10E << 2)
label_164f00:
    if (ctx->pc == 0x164F00u) {
        ctx->pc = 0x164F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164EFCu;
        // 0x164f00: 0xa226000a  sb          $a2, 0xA($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 10), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164F04u;
        goto label_164f04;
    }
    ctx->pc = 0x164EFCu;
    {
        const bool branch_taken_0x164efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164EFCu;
        // 0x164f00: 0xa226000a  sb          $a2, 0xA($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 10), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164efc) {
            ctx->pc = 0x165338u;
            { ctx->pc = 0x165338; return; }
        }
    }
    ctx->pc = 0x164F04u;
label_164f04:
    // 0x164f04: 0x0  nop
    ctx->pc = 0x164f04u;
    // NOP
label_164f08:
    // 0x164f08: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x164f08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_164f0c:
    // 0x164f0c: 0x92240008  lbu         $a0, 0x8($s1)
    ctx->pc = 0x164f0cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
label_164f10:
    // 0x164f10: 0x8f8386b8  lw          $v1, -0x7948($gp)
    ctx->pc = 0x164f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936248)));
label_164f14:
    // 0x164f14: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x164f14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
label_164f18:
    // 0x164f18: 0x831806  srlv        $v1, $v1, $a0
    ctx->pc = 0x164f18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_164f1c:
    // 0x164f1c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x164f1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_164f20:
    // 0x164f20: 0x14600105  bnez        $v1, . + 4 + (0x105 << 2)
label_164f24:
    if (ctx->pc == 0x164F24u) {
        ctx->pc = 0x164F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164F20u;
        // 0x164f24: 0x8d06004c  lw          $a2, 0x4C($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164F28u;
        goto label_164f28;
    }
    ctx->pc = 0x164F20u;
    {
        const bool branch_taken_0x164f20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x164F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164F20u;
        // 0x164f24: 0x8d06004c  lw          $a2, 0x4C($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164f20) {
            ctx->pc = 0x165338u;
            { ctx->pc = 0x165338; return; }
        }
    }
    ctx->pc = 0x164F28u;
label_164f28:
    // 0x164f28: 0x90c30097  lbu         $v1, 0x97($a2)
    ctx->pc = 0x164f28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 151)));
label_164f2c:
    // 0x164f2c: 0x14650102  bne         $v1, $a1, . + 4 + (0x102 << 2)
label_164f30:
    if (ctx->pc == 0x164F30u) {
        ctx->pc = 0x164F34u;
        goto label_164f34;
    }
    ctx->pc = 0x164F2Cu;
    {
        const bool branch_taken_0x164f2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x164f2c) {
            ctx->pc = 0x165338u;
            { ctx->pc = 0x165338; return; }
        }
    }
    ctx->pc = 0x164F34u;
label_164f34:
    // 0x164f34: 0xa227000a  sb          $a3, 0xA($s1)
    ctx->pc = 0x164f34u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10), (uint8_t)GPR_U32(ctx, 7));
label_164f38:
    // 0x164f38: 0x95030056  lhu         $v1, 0x56($t0)
    ctx->pc = 0x164f38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 86)));
label_164f3c:
    // 0x164f3c: 0x3063fffe  andi        $v1, $v1, 0xFFFE
    ctx->pc = 0x164f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
label_164f40:
    // 0x164f40: 0xa5030056  sh          $v1, 0x56($t0)
    ctx->pc = 0x164f40u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 86), (uint16_t)GPR_U32(ctx, 3));
label_164f44:
    // 0x164f44: 0x8cc30090  lw          $v1, 0x90($a2)
    ctx->pc = 0x164f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 144)));
label_164f48:
    // 0x164f48: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x164f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_164f4c:
    // 0x164f4c: 0x100000fa  b           . + 4 + (0xFA << 2)
label_164f50:
    if (ctx->pc == 0x164F50u) {
        ctx->pc = 0x164F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164F4Cu;
        // 0x164f50: 0xacc30090  sw          $v1, 0x90($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164F54u;
        goto label_164f54;
    }
    ctx->pc = 0x164F4Cu;
    {
        const bool branch_taken_0x164f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164F4Cu;
        // 0x164f50: 0xacc30090  sw          $v1, 0x90($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164f4c) {
            ctx->pc = 0x165338u;
            { ctx->pc = 0x165338; return; }
        }
    }
    ctx->pc = 0x164F54u;
label_164f54:
    // 0x164f54: 0x0  nop
    ctx->pc = 0x164f54u;
    // NOP
label_164f58:
    // 0x164f58: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x164f58u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_164f5c:
    // 0x164f5c: 0x8e53004c  lw          $s3, 0x4C($s2)
    ctx->pc = 0x164f5cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_164f60:
    // 0x164f60: 0x8e630090  lw          $v1, 0x90($s3)
    ctx->pc = 0x164f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_164f64:
    // 0x164f64: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x164f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_164f68:
    // 0x164f68: 0xae630090  sw          $v1, 0x90($s3)
    ctx->pc = 0x164f68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 3));
label_164f6c:
    // 0x164f6c: 0xa220000e  sb          $zero, 0xE($s1)
    ctx->pc = 0x164f6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 14), (uint8_t)GPR_U32(ctx, 0));
label_164f70:
    // 0x164f70: 0x92240009  lbu         $a0, 0x9($s1)
    ctx->pc = 0x164f70u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
label_164f74:
    // 0x164f74: 0x10850057  beq         $a0, $a1, . + 4 + (0x57 << 2)
label_164f78:
    if (ctx->pc == 0x164F78u) {
        ctx->pc = 0x164F7Cu;
        goto label_164f7c;
    }
    ctx->pc = 0x164F74u;
    {
        const bool branch_taken_0x164f74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x164f74) {
            ctx->pc = 0x1650D4u;
            goto label_1650d4;
        }
    }
    ctx->pc = 0x164F7Cu;
label_164f7c:
    // 0x164f7c: 0x1087000a  beq         $a0, $a3, . + 4 + (0xA << 2)
label_164f80:
    if (ctx->pc == 0x164F80u) {
        ctx->pc = 0x164F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164F7Cu;
        // 0x164f80: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164F84u;
        goto label_164f84;
    }
    ctx->pc = 0x164F7Cu;
    {
        const bool branch_taken_0x164f7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        ctx->pc = 0x164F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164F7Cu;
        // 0x164f80: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164f7c) {
            ctx->pc = 0x164FA8u;
            goto label_164fa8;
        }
    }
    ctx->pc = 0x164F84u;
label_164f84:
    // 0x164f84: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_164f88:
    if (ctx->pc == 0x164F88u) {
        ctx->pc = 0x164F8Cu;
        goto label_164f8c;
    }
    ctx->pc = 0x164F84u;
    {
        const bool branch_taken_0x164f84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x164f84) {
            ctx->pc = 0x164FA8u;
            goto label_164fa8;
        }
    }
    ctx->pc = 0x164F8Cu;
label_164f8c:
    // 0x164f8c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x164f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_164f90:
    // 0x164f90: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_164f94:
    if (ctx->pc == 0x164F94u) {
        ctx->pc = 0x164F98u;
        goto label_164f98;
    }
    ctx->pc = 0x164F90u;
    {
        const bool branch_taken_0x164f90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x164f90) {
            ctx->pc = 0x164FA8u;
            goto label_164fa8;
        }
    }
    ctx->pc = 0x164F98u;
label_164f98:
    // 0x164f98: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_164f9c:
    if (ctx->pc == 0x164F9Cu) {
        ctx->pc = 0x164FA0u;
        goto label_164fa0;
    }
    ctx->pc = 0x164F98u;
    {
        const bool branch_taken_0x164f98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x164f98) {
            ctx->pc = 0x164FA8u;
            goto label_164fa8;
        }
    }
    ctx->pc = 0x164FA0u;
label_164fa0:
    // 0x164fa0: 0x100000b2  b           . + 4 + (0xB2 << 2)
label_164fa4:
    if (ctx->pc == 0x164FA4u) {
        ctx->pc = 0x164FA8u;
        goto label_164fa8;
    }
    ctx->pc = 0x164FA0u;
    {
        const bool branch_taken_0x164fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164fa0) {
            ctx->pc = 0x16526Cu;
            goto label_16526c;
        }
    }
    ctx->pc = 0x164FA8u;
label_164fa8:
    // 0x164fa8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x164fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_164fac:
    // 0x164fac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x164facu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_164fb0:
    // 0x164fb0: 0x278286b0  addiu       $v0, $gp, -0x7950
    ctx->pc = 0x164fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936240));
label_164fb4:
    // 0x164fb4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x164fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_164fb8:
    // 0x164fb8: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x164fb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_164fbc:
    // 0x164fbc: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x164fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
label_164fc0:
    // 0x164fc0: 0x2442bd60  addiu       $v0, $v0, -0x42A0
    ctx->pc = 0x164fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950240));
label_164fc4:
    // 0x164fc4: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x164fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_164fc8:
    // 0x164fc8: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x164fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_164fcc:
    // 0x164fcc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x164fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_164fd0:
    // 0x164fd0: 0x24428920  addiu       $v0, $v0, -0x76E0
    ctx->pc = 0x164fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936864));
label_164fd4:
    // 0x164fd4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x164fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_164fd8:
    // 0x164fd8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x164fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_164fdc:
    // 0x164fdc: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x164fdcu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_164fe0:
    // 0x164fe0: 0x0  nop
    ctx->pc = 0x164fe0u;
    // NOP
label_164fe4:
    // 0x164fe4: 0x0  nop
    ctx->pc = 0x164fe4u;
    // NOP
label_164fe8:
    // 0x164fe8: 0x1812  mflo        $v1
    ctx->pc = 0x164fe8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_164fec:
    // 0x164fec: 0x10000010  b           . + 4 + (0x10 << 2)
label_164ff0:
    if (ctx->pc == 0x164FF0u) {
        ctx->pc = 0x164FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164FECu;
        // 0x164ff0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164FF4u;
        goto label_164ff4;
    }
    ctx->pc = 0x164FECu;
    {
        const bool branch_taken_0x164fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164FECu;
        // 0x164ff0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164fec) {
            ctx->pc = 0x165030u;
            goto label_165030;
        }
    }
    ctx->pc = 0x164FF4u;
label_164ff4:
    // 0x164ff4: 0x0  nop
    ctx->pc = 0x164ff4u;
    // NOP
label_164ff8:
    // 0x164ff8: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x164ff8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_164ffc:
    // 0x164ffc: 0x3206000f  andi        $a2, $s0, 0xF
    ctx->pc = 0x164ffcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
label_165000:
    // 0x165000: 0xc41007  srav        $v0, $a0, $a2
    ctx->pc = 0x165000u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 6) & 0x1F));
label_165004:
    // 0x165004: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x165004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_165008:
    // 0x165008: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_16500c:
    if (ctx->pc == 0x16500Cu) {
        ctx->pc = 0x16500Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165008u;
        // 0x16500c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165010u;
        goto label_165010;
    }
    ctx->pc = 0x165008u;
    {
        const bool branch_taken_0x165008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16500Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165008u;
        // 0x16500c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165008) {
            ctx->pc = 0x165024u;
            goto label_165024;
        }
    }
    ctx->pc = 0x165010u;
label_165010:
    // 0x165010: 0xc21004  sllv        $v0, $v0, $a2
    ctx->pc = 0x165010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
label_165014:
    // 0x165014: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x165014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_165018:
    // 0x165018: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x165018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_16501c:
    // 0x16501c: 0x10000009  b           . + 4 + (0x9 << 2)
label_165020:
    if (ctx->pc == 0x165020u) {
        ctx->pc = 0x165020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16501Cu;
        // 0x165020: 0xa0e20000  sb          $v0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165024u;
        goto label_165024;
    }
    ctx->pc = 0x16501Cu;
    {
        const bool branch_taken_0x16501c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16501Cu;
        // 0x165020: 0xa0e20000  sb          $v0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16501c) {
            ctx->pc = 0x165044u;
            goto label_165044;
        }
    }
    ctx->pc = 0x165024u;
label_165024:
    // 0x165024: 0x0  nop
    ctx->pc = 0x165024u;
    // NOP
label_165028:
    // 0x165028: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x165028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_16502c:
    // 0x16502c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x16502cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_165030:
    // 0x165030: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x165030u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_165034:
    // 0x165034: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x165034u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_165038:
    // 0x165038: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_16503c:
    if (ctx->pc == 0x16503Cu) {
        ctx->pc = 0x165040u;
        goto label_165040;
    }
    ctx->pc = 0x165038u;
    {
        const bool branch_taken_0x165038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165038) {
            ctx->pc = 0x164FF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164ff4;
        }
    }
    ctx->pc = 0x165040u;
label_165040:
    // 0x165040: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x165040u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_165044:
    // 0x165044: 0x0  nop
    ctx->pc = 0x165044u;
    // NOP
label_165048:
    // 0x165048: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x165048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16504c:
    // 0x16504c: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_165050:
    if (ctx->pc == 0x165050u) {
        ctx->pc = 0x165054u;
        goto label_165054;
    }
    ctx->pc = 0x16504Cu;
    {
        const bool branch_taken_0x16504c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x16504c) {
            ctx->pc = 0x165070u;
            goto label_165070;
        }
    }
    ctx->pc = 0x165054u;
label_165054:
    // 0x165054: 0x92240009  lbu         $a0, 0x9($s1)
    ctx->pc = 0x165054u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
label_165058:
    // 0x165058: 0xc059744  jal         func_165D10
label_16505c:
    if (ctx->pc == 0x16505Cu) {
        ctx->pc = 0x16505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165058u;
        // 0x16505c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165060u;
        goto label_165060;
    }
    ctx->pc = 0x165058u;
    SET_GPR_U32(ctx, 31, 0x165060u);
    ctx->pc = 0x16505Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165058u;
    // 0x16505c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165D10u;
    { ctx->pc = 0x165d10; return; }
    ctx->pc = 0x165060u;
label_165060:
    // 0x165060: 0x92240009  lbu         $a0, 0x9($s1)
    ctx->pc = 0x165060u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
label_165064:
    // 0x165064: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x165064u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_165068:
    // 0x165068: 0xc05967c  jal         func_1659F0
label_16506c:
    if (ctx->pc == 0x16506Cu) {
        ctx->pc = 0x16506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165068u;
        // 0x16506c: 0x26650040  addiu       $a1, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165070u;
        goto label_165070;
    }
    ctx->pc = 0x165068u;
    SET_GPR_U32(ctx, 31, 0x165070u);
    ctx->pc = 0x16506Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165068u;
    // 0x16506c: 0x26650040  addiu       $a1, $s3, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1659F0u;
    { ctx->pc = 0x1659f0; return; }
    ctx->pc = 0x165070u;
label_165070:
    // 0x165070: 0x92230009  lbu         $v1, 0x9($s1)
    ctx->pc = 0x165070u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
label_165074:
    // 0x165074: 0x9228000f  lbu         $t0, 0xF($s1)
    ctx->pc = 0x165074u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 15)));
label_165078:
    // 0x165078: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x165078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_16507c:
    // 0x16507c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x16507cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_165080:
    // 0x165080: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x165080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_165084:
    // 0x165084: 0x24426230  addiu       $v0, $v0, 0x6230
    ctx->pc = 0x165084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25136));
label_165088:
    // 0x165088: 0x26670040  addiu       $a3, $s3, 0x40
    ctx->pc = 0x165088u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_16508c:
    // 0x16508c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16508cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_165090:
    // 0x165090: 0xa8200a  movz        $a0, $a1, $t0
    ctx->pc = 0x165090u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
label_165094:
    // 0x165094: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x165094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_165098:
    // 0x165098: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x165098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16509c:
    // 0x16509c: 0xc05ae1c  jal         func_16B870
label_1650a0:
    if (ctx->pc == 0x1650A0u) {
        ctx->pc = 0x1650A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16509Cu;
        // 0x1650a0: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1650A4u;
        goto label_1650a4;
    }
    ctx->pc = 0x16509Cu;
    SET_GPR_U32(ctx, 31, 0x1650A4u);
    ctx->pc = 0x1650A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16509Cu;
    // 0x1650a0: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B870u;
    { ctx->pc = 0x16b870; return; }
    ctx->pc = 0x1650A4u;
label_1650a4:
    // 0x1650a4: 0x9243005e  lbu         $v1, 0x5E($s2)
    ctx->pc = 0x1650a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 94)));
label_1650a8:
    // 0x1650a8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1650ac:
    if (ctx->pc == 0x1650ACu) {
        ctx->pc = 0x1650B0u;
        goto label_1650b0;
    }
    ctx->pc = 0x1650A8u;
    {
        const bool branch_taken_0x1650a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1650a8) {
            ctx->pc = 0x1650C8u;
            goto label_1650c8;
        }
    }
    ctx->pc = 0x1650B0u;
label_1650b0:
    // 0x1650b0: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1650b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1650b4:
    // 0x1650b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1650b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1650b8:
    // 0x1650b8: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x1650b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1650bc:
    // 0x1650bc: 0x24060e10  addiu       $a2, $zero, 0xE10
    ctx->pc = 0x1650bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3600));
label_1650c0:
    // 0x1650c0: 0xc054864  jal         func_152190
label_1650c4:
    if (ctx->pc == 0x1650C4u) {
        ctx->pc = 0x1650C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1650C0u;
        // 0x1650c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1650C8u;
        goto label_1650c8;
    }
    ctx->pc = 0x1650C0u;
    SET_GPR_U32(ctx, 31, 0x1650C8u);
    ctx->pc = 0x1650C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1650C0u;
    // 0x1650c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152190u;
    { ctx->pc = 0x152190; return; }
    ctx->pc = 0x1650C8u;
label_1650c8:
    // 0x1650c8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1650c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1650cc:
    // 0x1650cc: 0x10000067  b           . + 4 + (0x67 << 2)
label_1650d0:
    if (ctx->pc == 0x1650D0u) {
        ctx->pc = 0x1650D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1650CCu;
        // 0x1650d0: 0xa223000a  sb          $v1, 0xA($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 10), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1650D4u;
        goto label_1650d4;
    }
    ctx->pc = 0x1650CCu;
    {
        const bool branch_taken_0x1650cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1650D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1650CCu;
        // 0x1650d0: 0xa223000a  sb          $v1, 0xA($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 10), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1650cc) {
            ctx->pc = 0x16526Cu;
            goto label_16526c;
        }
    }
    ctx->pc = 0x1650D4u;
label_1650d4:
    // 0x1650d4: 0x0  nop
    ctx->pc = 0x1650d4u;
    // NOP
label_1650d8:
    // 0x1650d8: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1650d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1650dc:
    // 0x1650dc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1650dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1650e0:
    // 0x1650e0: 0x278386b0  addiu       $v1, $gp, -0x7950
    ctx->pc = 0x1650e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936240));
label_1650e4:
    // 0x1650e4: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x1650e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1650e8:
    // 0x1650e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1650e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1650ec:
    // 0x1650ec: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x1650ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
label_1650f0:
    // 0x1650f0: 0x2484bd60  addiu       $a0, $a0, -0x42A0
    ctx->pc = 0x1650f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950240));
label_1650f4:
    // 0x1650f4: 0x862821  addu        $a1, $a0, $a2
    ctx->pc = 0x1650f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1650f8:
    // 0x1650f8: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1650f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1650fc:
    // 0x1650fc: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1650fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_165100:
    // 0x165100: 0x24848920  addiu       $a0, $a0, -0x76E0
    ctx->pc = 0x165100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936864));
label_165104:
    // 0x165104: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x165104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_165108:
    // 0x165108: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x165108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16510c:
    // 0x16510c: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x16510cu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_165110:
    // 0x165110: 0x0  nop
    ctx->pc = 0x165110u;
    // NOP
label_165114:
    // 0x165114: 0x0  nop
    ctx->pc = 0x165114u;
    // NOP
label_165118:
    // 0x165118: 0x2812  mflo        $a1
    ctx->pc = 0x165118u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_16511c:
    // 0x16511c: 0x10000010  b           . + 4 + (0x10 << 2)
label_165120:
    if (ctx->pc == 0x165120u) {
        ctx->pc = 0x165120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16511Cu;
        // 0x165120: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165124u;
        goto label_165124;
    }
    ctx->pc = 0x16511Cu;
    {
        const bool branch_taken_0x16511c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16511Cu;
        // 0x165120: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16511c) {
            ctx->pc = 0x165160u;
            goto label_165160;
        }
    }
    ctx->pc = 0x165124u;
label_165124:
    // 0x165124: 0x0  nop
    ctx->pc = 0x165124u;
    // NOP
label_165128:
    // 0x165128: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x165128u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_16512c:
    // 0x16512c: 0x3208000f  andi        $t0, $s0, 0xF
    ctx->pc = 0x16512cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
label_165130:
    // 0x165130: 0x1062007  srav        $a0, $a2, $t0
    ctx->pc = 0x165130u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 8) & 0x1F));
label_165134:
    // 0x165134: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x165134u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_165138:
    // 0x165138: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_16513c:
    if (ctx->pc == 0x16513Cu) {
        ctx->pc = 0x16513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165138u;
        // 0x16513c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165140u;
        goto label_165140;
    }
    ctx->pc = 0x165138u;
    {
        const bool branch_taken_0x165138 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x16513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165138u;
        // 0x16513c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165138) {
            ctx->pc = 0x165154u;
            goto label_165154;
        }
    }
    ctx->pc = 0x165140u;
label_165140:
    // 0x165140: 0x1042004  sllv        $a0, $a0, $t0
    ctx->pc = 0x165140u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 8) & 0x1F));
label_165144:
    // 0x165144: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x165144u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_165148:
    // 0x165148: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x165148u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
label_16514c:
    // 0x16514c: 0x10000009  b           . + 4 + (0x9 << 2)
label_165150:
    if (ctx->pc == 0x165150u) {
        ctx->pc = 0x165150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16514Cu;
        // 0x165150: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165154u;
        goto label_165154;
    }
    ctx->pc = 0x16514Cu;
    {
        const bool branch_taken_0x16514c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16514Cu;
        // 0x165150: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16514c) {
            ctx->pc = 0x165174u;
            goto label_165174;
        }
    }
    ctx->pc = 0x165154u;
label_165154:
    // 0x165154: 0x0  nop
    ctx->pc = 0x165154u;
    // NOP
label_165158:
    // 0x165158: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x165158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_16515c:
    // 0x16515c: 0x308700ff  andi        $a3, $a0, 0xFF
    ctx->pc = 0x16515cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_165160:
    // 0x165160: 0x30f000ff  andi        $s0, $a3, 0xFF
    ctx->pc = 0x165160u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_165164:
    // 0x165164: 0x205202a  slt         $a0, $s0, $a1
    ctx->pc = 0x165164u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_165168:
    // 0x165168: 0x1480ffee  bnez        $a0, . + 4 + (-0x12 << 2)
label_16516c:
    if (ctx->pc == 0x16516Cu) {
        ctx->pc = 0x165170u;
        goto label_165170;
    }
    ctx->pc = 0x165168u;
    {
        const bool branch_taken_0x165168 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x165168) {
            ctx->pc = 0x165124u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165124;
        }
    }
    ctx->pc = 0x165170u;
label_165170:
    // 0x165170: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x165170u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_165174:
    // 0x165174: 0x0  nop
    ctx->pc = 0x165174u;
    // NOP
label_165178:
    // 0x165178: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x165178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16517c:
    // 0x16517c: 0x12030006  beq         $s0, $v1, . + 4 + (0x6 << 2)
label_165180:
    if (ctx->pc == 0x165180u) {
        ctx->pc = 0x165180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16517Cu;
        // 0x165180: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165184u;
        goto label_165184;
    }
    ctx->pc = 0x16517Cu;
    {
        const bool branch_taken_0x16517c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x165180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16517Cu;
        // 0x165180: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16517c) {
            ctx->pc = 0x165198u;
            goto label_165198;
        }
    }
    ctx->pc = 0x165184u;
label_165184:
    // 0x165184: 0xc059700  jal         func_165C00
label_165188:
    if (ctx->pc == 0x165188u) {
        ctx->pc = 0x165188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165184u;
        // 0x165188: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16518Cu;
        goto label_16518c;
    }
    ctx->pc = 0x165184u;
    SET_GPR_U32(ctx, 31, 0x16518Cu);
    ctx->pc = 0x165188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165184u;
    // 0x165188: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165C00u;
    { ctx->pc = 0x165c00; return; }
    ctx->pc = 0x16518Cu;
label_16518c:
    // 0x16518c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16518cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_165190:
    // 0x165190: 0xc0595f8  jal         func_1657E0
label_165194:
    if (ctx->pc == 0x165194u) {
        ctx->pc = 0x165194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165190u;
        // 0x165194: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165198u;
        goto label_165198;
    }
    ctx->pc = 0x165190u;
    SET_GPR_U32(ctx, 31, 0x165198u);
    ctx->pc = 0x165194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165190u;
    // 0x165194: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1657E0u;
    { ctx->pc = 0x1657e0; return; }
    ctx->pc = 0x165198u;
label_165198:
    // 0x165198: 0x96440056  lhu         $a0, 0x56($s2)
    ctx->pc = 0x165198u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 86)));
label_16519c:
    // 0x16519c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x16519cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1651a0:
    // 0x1651a0: 0x3084fffe  andi        $a0, $a0, 0xFFFE
    ctx->pc = 0x1651a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65534);
label_1651a4:
    // 0x1651a4: 0xa6440056  sh          $a0, 0x56($s2)
    ctx->pc = 0x1651a4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 86), (uint16_t)GPR_U32(ctx, 4));
label_1651a8:
    // 0x1651a8: 0xa223000a  sb          $v1, 0xA($s1)
    ctx->pc = 0x1651a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10), (uint8_t)GPR_U32(ctx, 3));
label_1651ac:
    // 0x1651ac: 0x9244005d  lbu         $a0, 0x5D($s2)
    ctx->pc = 0x1651acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 93)));
label_1651b0:
    // 0x1651b0: 0x8f8386b8  lw          $v1, -0x7948($gp)
    ctx->pc = 0x1651b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936248)));
label_1651b4:
    // 0x1651b4: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x1651b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
label_1651b8:
    // 0x1651b8: 0x831806  srlv        $v1, $v1, $a0
    ctx->pc = 0x1651b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_1651bc:
    // 0x1651bc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1651bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1651c0:
    // 0x1651c0: 0x1460002a  bnez        $v1, . + 4 + (0x2A << 2)
label_1651c4:
    if (ctx->pc == 0x1651C4u) {
        ctx->pc = 0x1651C8u;
        goto label_1651c8;
    }
    ctx->pc = 0x1651C0u;
    {
        const bool branch_taken_0x1651c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1651c0) {
            ctx->pc = 0x16526Cu;
            goto label_16526c;
        }
    }
    ctx->pc = 0x1651C8u;
label_1651c8:
    // 0x1651c8: 0x92230009  lbu         $v1, 0x9($s1)
    ctx->pc = 0x1651c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
label_1651cc:
    // 0x1651cc: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1651ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1651d0:
    // 0x1651d0: 0x9229000f  lbu         $t1, 0xF($s1)
    ctx->pc = 0x1651d0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 15)));
label_1651d4:
    // 0x1651d4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1651d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1651d8:
    // 0x1651d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1651d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1651dc:
    // 0x1651dc: 0x24426230  addiu       $v0, $v0, 0x6230
    ctx->pc = 0x1651dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25136));
label_1651e0:
    // 0x1651e0: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x1651e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_1651e4:
    // 0x1651e4: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1651e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1651e8:
    // 0x1651e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1651e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1651ec:
    // 0x1651ec: 0xa9200a  movz        $a0, $a1, $t1
    ctx->pc = 0x1651ecu;
    if (GPR_U64(ctx, 9) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
label_1651f0:
    // 0x1651f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1651f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1651f4:
    // 0x1651f4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1651f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1651f8:
    // 0x1651f8: 0xc05b4d4  jal         func_16D350
label_1651fc:
    if (ctx->pc == 0x1651FCu) {
        ctx->pc = 0x1651FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1651F8u;
        // 0x1651fc: 0x2408003c  addiu       $t0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165200u;
        goto label_165200;
    }
    ctx->pc = 0x1651F8u;
    SET_GPR_U32(ctx, 31, 0x165200u);
    ctx->pc = 0x1651FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1651F8u;
    // 0x1651fc: 0x2408003c  addiu       $t0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D350u;
    { ctx->pc = 0x16d350; return; }
    ctx->pc = 0x165200u;
label_165200:
    // 0x165200: 0xc04f5bc  jal         func_13D6F0
label_165204:
    if (ctx->pc == 0x165204u) {
        ctx->pc = 0x165204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165200u;
        // 0x165204: 0x9244005d  lbu         $a0, 0x5D($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 93)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165208u;
        goto label_165208;
    }
    ctx->pc = 0x165200u;
    SET_GPR_U32(ctx, 31, 0x165208u);
    ctx->pc = 0x165204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165200u;
    // 0x165204: 0x9244005d  lbu         $a0, 0x5D($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 93)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D6F0u, 0x165200u, 0x165208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165208u;
label_165208:
    // 0x165208: 0x8f8686c0  lw          $a2, -0x7940($gp)
    ctx->pc = 0x165208u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936256)));
label_16520c:
    // 0x16520c: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
label_165210:
    if (ctx->pc == 0x165210u) {
        ctx->pc = 0x165210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16520Cu;
        // 0x165210: 0x9245005d  lbu         $a1, 0x5D($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 93)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165214u;
        goto label_165214;
    }
    ctx->pc = 0x16520Cu;
    {
        const bool branch_taken_0x16520c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x165210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16520Cu;
        // 0x165210: 0x9245005d  lbu         $a1, 0x5D($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 93)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16520c) {
            ctx->pc = 0x16525Cu;
            goto label_16525c;
        }
    }
    ctx->pc = 0x165214u;
label_165214:
    // 0x165214: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x165214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_165218:
    // 0x165218: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x165218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16521c:
    // 0x16521c: 0x0  nop
    ctx->pc = 0x16521cu;
    // NOP
label_165220:
    // 0x165220: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x165220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_165224:
    // 0x165224: 0x9084005d  lbu         $a0, 0x5D($a0)
    ctx->pc = 0x165224u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 93)));
label_165228:
    // 0x165228: 0x14850008  bne         $a0, $a1, . + 4 + (0x8 << 2)
label_16522c:
    if (ctx->pc == 0x16522Cu) {
        ctx->pc = 0x165230u;
        goto label_165230;
    }
    ctx->pc = 0x165228u;
    {
        const bool branch_taken_0x165228 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x165228) {
            ctx->pc = 0x16524Cu;
            goto label_16524c;
        }
    }
    ctx->pc = 0x165230u;
label_165230:
    // 0x165230: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_165234:
    if (ctx->pc == 0x165234u) {
        ctx->pc = 0x165238u;
        goto label_165238;
    }
    ctx->pc = 0x165230u;
    {
        const bool branch_taken_0x165230 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x165230) {
            ctx->pc = 0x16524Cu;
            goto label_16524c;
        }
    }
    ctx->pc = 0x165238u;
label_165238:
    // 0x165238: 0x90c4000a  lbu         $a0, 0xA($a2)
    ctx->pc = 0x165238u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 10)));
label_16523c:
    // 0x16523c: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_165240:
    if (ctx->pc == 0x165240u) {
        ctx->pc = 0x165244u;
        goto label_165244;
    }
    ctx->pc = 0x16523Cu;
    {
        const bool branch_taken_0x16523c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16523c) {
            ctx->pc = 0x16524Cu;
            goto label_16524c;
        }
    }
    ctx->pc = 0x165244u;
label_165244:
    // 0x165244: 0xa0c2000a  sb          $v0, 0xA($a2)
    ctx->pc = 0x165244u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 10), (uint8_t)GPR_U32(ctx, 2));
label_165248:
    // 0x165248: 0xa0c0000f  sb          $zero, 0xF($a2)
    ctx->pc = 0x165248u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 15), (uint8_t)GPR_U32(ctx, 0));
label_16524c:
    // 0x16524c: 0x0  nop
    ctx->pc = 0x16524cu;
    // NOP
label_165250:
    // 0x165250: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x165250u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_165254:
    // 0x165254: 0x14c0fff1  bnez        $a2, . + 4 + (-0xF << 2)
label_165258:
    if (ctx->pc == 0x165258u) {
        ctx->pc = 0x16525Cu;
        goto label_16525c;
    }
    ctx->pc = 0x165254u;
    {
        const bool branch_taken_0x165254 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x165254) {
            ctx->pc = 0x16521Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16521c;
        }
    }
    ctx->pc = 0x16525Cu;
label_16525c:
    // 0x16525c: 0x0  nop
    ctx->pc = 0x16525cu;
    // NOP
label_165260:
    // 0x165260: 0x9242005d  lbu         $v0, 0x5D($s2)
    ctx->pc = 0x165260u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 93)));
label_165264:
    // 0x165264: 0xc05dcf8  jal         func_1773E0
label_165268:
    if (ctx->pc == 0x165268u) {
        ctx->pc = 0x165268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165264u;
        // 0x165268: 0x2444ffff  addiu       $a0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16526Cu;
        goto label_16526c;
    }
    ctx->pc = 0x165264u;
    SET_GPR_U32(ctx, 31, 0x16526Cu);
    ctx->pc = 0x165268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165264u;
    // 0x165268: 0x2444ffff  addiu       $a0, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1773E0u;
    { ctx->pc = 0x1773e0; return; }
    ctx->pc = 0x16526Cu;
label_16526c:
    // 0x16526c: 0x0  nop
    ctx->pc = 0x16526cu;
    // NOP
label_165270:
    // 0x165270: 0x9223000b  lbu         $v1, 0xB($s1)
    ctx->pc = 0x165270u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11)));
label_165274:
    // 0x165274: 0x3066007f  andi        $a2, $v1, 0x7F
    ctx->pc = 0x165274u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
label_165278:
    // 0x165278: 0x4c10004  bgez        $a2, . + 4 + (0x4 << 2)
label_16527c:
    if (ctx->pc == 0x16527Cu) {
        ctx->pc = 0x16527Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165278u;
        // 0x16527c: 0x30c5001f  andi        $a1, $a2, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        ctx->pc = 0x165280u;
        goto label_165280;
    }
    ctx->pc = 0x165278u;
    {
        const bool branch_taken_0x165278 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x16527Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165278u;
        // 0x16527c: 0x30c5001f  andi        $a1, $a2, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x165278) {
            ctx->pc = 0x16528Cu;
            goto label_16528c;
        }
    }
    ctx->pc = 0x165280u;
label_165280:
    // 0x165280: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_165284:
    if (ctx->pc == 0x165284u) {
        ctx->pc = 0x165284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165280u;
        // 0x165284: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165288u;
        goto label_165288;
    }
    ctx->pc = 0x165280u;
    {
        const bool branch_taken_0x165280 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x165284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165280u;
        // 0x165284: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165280) {
            ctx->pc = 0x165290u;
            goto label_165290;
        }
    }
    ctx->pc = 0x165288u;
label_165288:
    // 0x165288: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x165288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
label_16528c:
    // 0x16528c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16528cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_165290:
    // 0x165290: 0x61943  sra         $v1, $a2, 5
    ctx->pc = 0x165290u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 5));
label_165294:
    // 0x165294: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_165298:
    if (ctx->pc == 0x165298u) {
        ctx->pc = 0x165298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165294u;
        // 0x165298: 0xa42804  sllv        $a1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16529Cu;
        goto label_16529c;
    }
    ctx->pc = 0x165294u;
    {
        const bool branch_taken_0x165294 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x165298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165294u;
        // 0x165298: 0xa42804  sllv        $a1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165294) {
            ctx->pc = 0x1652A4u;
            goto label_1652a4;
        }
    }
    ctx->pc = 0x16529Cu;
label_16529c:
    // 0x16529c: 0x24c3001f  addiu       $v1, $a2, 0x1F
    ctx->pc = 0x16529cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 31));
label_1652a0:
    // 0x1652a0: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1652a0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1652a4:
    // 0x1652a4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1652a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1652a8:
    // 0x1652a8: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1652a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_1652ac:
    // 0x1652ac: 0x24633ee0  addiu       $v1, $v1, 0x3EE0
    ctx->pc = 0x1652acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16096));
label_1652b0:
    // 0x1652b0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1652b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1652b4:
    // 0x1652b4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1652b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1652b8:
    // 0x1652b8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1652b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_1652bc:
    // 0x1652bc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1652bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1652c0:
    // 0x1652c0: 0x9244005d  lbu         $a0, 0x5D($s2)
    ctx->pc = 0x1652c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 93)));
label_1652c4:
    // 0x1652c4: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
label_1652c8:
    if (ctx->pc == 0x1652C8u) {
        ctx->pc = 0x1652CCu;
        goto label_1652cc;
    }
    ctx->pc = 0x1652C4u;
    {
        const bool branch_taken_0x1652c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1652c4) {
            ctx->pc = 0x165338u;
            { ctx->pc = 0x165338; return; }
        }
    }
    ctx->pc = 0x1652CCu;
label_1652cc:
    // 0x1652cc: 0x8f8586b8  lw          $a1, -0x7948($gp)
    ctx->pc = 0x1652ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936248)));
label_1652d0:
    // 0x1652d0: 0x308b00ff  andi        $t3, $a0, 0xFF
    ctx->pc = 0x1652d0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1652d4:
    // 0x1652d4: 0x3166001f  andi        $a2, $t3, 0x1F
    ctx->pc = 0x1652d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)31);
label_1652d8:
    // 0x1652d8: 0xc51806  srlv        $v1, $a1, $a2
    ctx->pc = 0x1652d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
label_1652dc:
    // 0x1652dc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1652dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1652e0:
    // 0x1652e0: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
label_1652e4:
    if (ctx->pc == 0x1652E4u) {
        ctx->pc = 0x1652E8u;
        goto label_1652e8;
    }
    ctx->pc = 0x1652E0u;
    {
        const bool branch_taken_0x1652e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1652e0) {
            ctx->pc = 0x165338u;
            { ctx->pc = 0x165338; return; }
        }
    }
    ctx->pc = 0x1652E8u;
label_1652e8:
    // 0x1652e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1652e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1652ec:
    // 0x1652ec: 0xc21004  sllv        $v0, $v0, $a2
    ctx->pc = 0x1652ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
label_1652f0:
    // 0x1652f0: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x1652f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1652f4:
    // 0x1652f4: 0xc0592ec  jal         func_164BB0
label_1652f8:
    if (ctx->pc == 0x1652F8u) {
        ctx->pc = 0x1652F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1652F4u;
        // 0x1652f8: 0xaf8286b8  sw          $v0, -0x7948($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1652FCu;
        goto label_1652fc;
    }
    ctx->pc = 0x1652F4u;
    SET_GPR_U32(ctx, 31, 0x1652FCu);
    ctx->pc = 0x1652F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1652F4u;
    // 0x1652f8: 0xaf8286b8  sw          $v0, -0x7948($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936248), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164BB0u;
    goto label_164bb0;
    ctx->pc = 0x1652FCu;
label_1652fc:
    // 0x1652fc: 0xc04f5bc  jal         func_13D6F0
    ctx->pc = 0x165300u;
    return;
}
