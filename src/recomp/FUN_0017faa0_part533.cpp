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

// Function: FUN_0017faa0
// Address: 0x17faa0 - 0x2bfb1c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017faa0_part533(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2836e0u: goto label_2836e0;
        case 0x2836e4u: goto label_2836e4;
        case 0x2836e8u: goto label_2836e8;
        case 0x2836ecu: goto label_2836ec;
        case 0x2836f0u: goto label_2836f0;
        case 0x2836f4u: goto label_2836f4;
        case 0x2836f8u: goto label_2836f8;
        case 0x2836fcu: goto label_2836fc;
        case 0x283700u: goto label_283700;
        case 0x283704u: goto label_283704;
        case 0x283708u: goto label_283708;
        case 0x28370cu: goto label_28370c;
        case 0x283710u: goto label_283710;
        case 0x283714u: goto label_283714;
        case 0x283718u: goto label_283718;
        case 0x28371cu: goto label_28371c;
        case 0x283720u: goto label_283720;
        case 0x283724u: goto label_283724;
        case 0x283728u: goto label_283728;
        case 0x28372cu: goto label_28372c;
        case 0x283730u: goto label_283730;
        case 0x283734u: goto label_283734;
        case 0x283738u: goto label_283738;
        case 0x28373cu: goto label_28373c;
        case 0x283740u: goto label_283740;
        case 0x283744u: goto label_283744;
        case 0x283748u: goto label_283748;
        case 0x28374cu: goto label_28374c;
        case 0x283750u: goto label_283750;
        case 0x283754u: goto label_283754;
        case 0x283758u: goto label_283758;
        case 0x28375cu: goto label_28375c;
        case 0x283760u: goto label_283760;
        case 0x283764u: goto label_283764;
        case 0x283768u: goto label_283768;
        case 0x28376cu: goto label_28376c;
        case 0x283770u: goto label_283770;
        case 0x283774u: goto label_283774;
        case 0x283778u: goto label_283778;
        case 0x28377cu: goto label_28377c;
        case 0x283780u: goto label_283780;
        case 0x283784u: goto label_283784;
        case 0x283788u: goto label_283788;
        case 0x28378cu: goto label_28378c;
        case 0x283790u: goto label_283790;
        case 0x283794u: goto label_283794;
        case 0x283798u: goto label_283798;
        case 0x28379cu: goto label_28379c;
        case 0x2837a0u: goto label_2837a0;
        case 0x2837a4u: goto label_2837a4;
        case 0x2837a8u: goto label_2837a8;
        case 0x2837acu: goto label_2837ac;
        case 0x2837b0u: goto label_2837b0;
        case 0x2837b4u: goto label_2837b4;
        case 0x2837b8u: goto label_2837b8;
        case 0x2837bcu: goto label_2837bc;
        case 0x2837c0u: goto label_2837c0;
        case 0x2837c4u: goto label_2837c4;
        case 0x2837c8u: goto label_2837c8;
        case 0x2837ccu: goto label_2837cc;
        case 0x2837d0u: goto label_2837d0;
        case 0x2837d4u: goto label_2837d4;
        case 0x2837d8u: goto label_2837d8;
        case 0x2837dcu: goto label_2837dc;
        case 0x2837e0u: goto label_2837e0;
        case 0x2837e4u: goto label_2837e4;
        case 0x2837e8u: goto label_2837e8;
        case 0x2837ecu: goto label_2837ec;
        case 0x2837f0u: goto label_2837f0;
        case 0x2837f4u: goto label_2837f4;
        case 0x2837f8u: goto label_2837f8;
        case 0x2837fcu: goto label_2837fc;
        case 0x283800u: goto label_283800;
        case 0x283804u: goto label_283804;
        case 0x283808u: goto label_283808;
        case 0x28380cu: goto label_28380c;
        case 0x283810u: goto label_283810;
        case 0x283814u: goto label_283814;
        case 0x283818u: goto label_283818;
        case 0x28381cu: goto label_28381c;
        case 0x283820u: goto label_283820;
        case 0x283824u: goto label_283824;
        case 0x283828u: goto label_283828;
        case 0x28382cu: goto label_28382c;
        case 0x283830u: goto label_283830;
        case 0x283834u: goto label_283834;
        case 0x283838u: goto label_283838;
        case 0x28383cu: goto label_28383c;
        case 0x283840u: goto label_283840;
        case 0x283844u: goto label_283844;
        case 0x283848u: goto label_283848;
        case 0x28384cu: goto label_28384c;
        case 0x283850u: goto label_283850;
        case 0x283854u: goto label_283854;
        case 0x283858u: goto label_283858;
        case 0x28385cu: goto label_28385c;
        case 0x283860u: goto label_283860;
        case 0x283864u: goto label_283864;
        case 0x283868u: goto label_283868;
        case 0x28386cu: goto label_28386c;
        case 0x283870u: goto label_283870;
        case 0x283874u: goto label_283874;
        case 0x283878u: goto label_283878;
        case 0x28387cu: goto label_28387c;
        case 0x283880u: goto label_283880;
        case 0x283884u: goto label_283884;
        case 0x283888u: goto label_283888;
        case 0x28388cu: goto label_28388c;
        case 0x283890u: goto label_283890;
        case 0x283894u: goto label_283894;
        case 0x283898u: goto label_283898;
        case 0x28389cu: goto label_28389c;
        case 0x2838a0u: goto label_2838a0;
        case 0x2838a4u: goto label_2838a4;
        case 0x2838a8u: goto label_2838a8;
        case 0x2838acu: goto label_2838ac;
        case 0x2838b0u: goto label_2838b0;
        case 0x2838b4u: goto label_2838b4;
        case 0x2838b8u: goto label_2838b8;
        case 0x2838bcu: goto label_2838bc;
        case 0x2838c0u: goto label_2838c0;
        case 0x2838c4u: goto label_2838c4;
        case 0x2838c8u: goto label_2838c8;
        case 0x2838ccu: goto label_2838cc;
        case 0x2838d0u: goto label_2838d0;
        case 0x2838d4u: goto label_2838d4;
        case 0x2838d8u: goto label_2838d8;
        case 0x2838dcu: goto label_2838dc;
        case 0x2838e0u: goto label_2838e0;
        case 0x2838e4u: goto label_2838e4;
        case 0x2838e8u: goto label_2838e8;
        case 0x2838ecu: goto label_2838ec;
        case 0x2838f0u: goto label_2838f0;
        case 0x2838f4u: goto label_2838f4;
        case 0x2838f8u: goto label_2838f8;
        case 0x2838fcu: goto label_2838fc;
        case 0x283900u: goto label_283900;
        case 0x283904u: goto label_283904;
        case 0x283908u: goto label_283908;
        case 0x28390cu: goto label_28390c;
        case 0x283910u: goto label_283910;
        case 0x283914u: goto label_283914;
        case 0x283918u: goto label_283918;
        case 0x28391cu: goto label_28391c;
        case 0x283920u: goto label_283920;
        case 0x283924u: goto label_283924;
        case 0x283928u: goto label_283928;
        case 0x28392cu: goto label_28392c;
        case 0x283930u: goto label_283930;
        case 0x283934u: goto label_283934;
        case 0x283938u: goto label_283938;
        case 0x28393cu: goto label_28393c;
        case 0x283940u: goto label_283940;
        case 0x283944u: goto label_283944;
        case 0x283948u: goto label_283948;
        case 0x28394cu: goto label_28394c;
        case 0x283950u: goto label_283950;
        case 0x283954u: goto label_283954;
        case 0x283958u: goto label_283958;
        case 0x28395cu: goto label_28395c;
        case 0x283960u: goto label_283960;
        case 0x283964u: goto label_283964;
        case 0x283968u: goto label_283968;
        case 0x28396cu: goto label_28396c;
        case 0x283970u: goto label_283970;
        case 0x283974u: goto label_283974;
        case 0x283978u: goto label_283978;
        case 0x28397cu: goto label_28397c;
        case 0x283980u: goto label_283980;
        case 0x283984u: goto label_283984;
        case 0x283988u: goto label_283988;
        case 0x28398cu: goto label_28398c;
        case 0x283990u: goto label_283990;
        case 0x283994u: goto label_283994;
        case 0x283998u: goto label_283998;
        case 0x28399cu: goto label_28399c;
        case 0x2839a0u: goto label_2839a0;
        case 0x2839a4u: goto label_2839a4;
        case 0x2839a8u: goto label_2839a8;
        case 0x2839acu: goto label_2839ac;
        case 0x2839b0u: goto label_2839b0;
        case 0x2839b4u: goto label_2839b4;
        case 0x2839b8u: goto label_2839b8;
        case 0x2839bcu: goto label_2839bc;
        case 0x2839c0u: goto label_2839c0;
        case 0x2839c4u: goto label_2839c4;
        case 0x2839c8u: goto label_2839c8;
        case 0x2839ccu: goto label_2839cc;
        case 0x2839d0u: goto label_2839d0;
        case 0x2839d4u: goto label_2839d4;
        case 0x2839d8u: goto label_2839d8;
        case 0x2839dcu: goto label_2839dc;
        case 0x2839e0u: goto label_2839e0;
        case 0x2839e4u: goto label_2839e4;
        case 0x2839e8u: goto label_2839e8;
        case 0x2839ecu: goto label_2839ec;
        case 0x2839f0u: goto label_2839f0;
        case 0x2839f4u: goto label_2839f4;
        case 0x2839f8u: goto label_2839f8;
        case 0x2839fcu: goto label_2839fc;
        case 0x283a00u: goto label_283a00;
        case 0x283a04u: goto label_283a04;
        case 0x283a08u: goto label_283a08;
        case 0x283a0cu: goto label_283a0c;
        case 0x283a10u: goto label_283a10;
        case 0x283a14u: goto label_283a14;
        case 0x283a18u: goto label_283a18;
        case 0x283a1cu: goto label_283a1c;
        case 0x283a20u: goto label_283a20;
        case 0x283a24u: goto label_283a24;
        case 0x283a28u: goto label_283a28;
        case 0x283a2cu: goto label_283a2c;
        case 0x283a30u: goto label_283a30;
        case 0x283a34u: goto label_283a34;
        case 0x283a38u: goto label_283a38;
        case 0x283a3cu: goto label_283a3c;
        case 0x283a40u: goto label_283a40;
        case 0x283a44u: goto label_283a44;
        case 0x283a48u: goto label_283a48;
        case 0x283a4cu: goto label_283a4c;
        case 0x283a50u: goto label_283a50;
        case 0x283a54u: goto label_283a54;
        case 0x283a58u: goto label_283a58;
        case 0x283a5cu: goto label_283a5c;
        case 0x283a60u: goto label_283a60;
        case 0x283a64u: goto label_283a64;
        case 0x283a68u: goto label_283a68;
        case 0x283a6cu: goto label_283a6c;
        case 0x283a70u: goto label_283a70;
        case 0x283a74u: goto label_283a74;
        case 0x283a78u: goto label_283a78;
        case 0x283a7cu: goto label_283a7c;
        case 0x283a80u: goto label_283a80;
        case 0x283a84u: goto label_283a84;
        case 0x283a88u: goto label_283a88;
        case 0x283a8cu: goto label_283a8c;
        case 0x283a90u: goto label_283a90;
        case 0x283a94u: goto label_283a94;
        case 0x283a98u: goto label_283a98;
        case 0x283a9cu: goto label_283a9c;
        case 0x283aa0u: goto label_283aa0;
        case 0x283aa4u: goto label_283aa4;
        case 0x283aa8u: goto label_283aa8;
        case 0x283aacu: goto label_283aac;
        case 0x283ab0u: goto label_283ab0;
        case 0x283ab4u: goto label_283ab4;
        case 0x283ab8u: goto label_283ab8;
        case 0x283abcu: goto label_283abc;
        case 0x283ac0u: goto label_283ac0;
        case 0x283ac4u: goto label_283ac4;
        case 0x283ac8u: goto label_283ac8;
        case 0x283accu: goto label_283acc;
        case 0x283ad0u: goto label_283ad0;
        case 0x283ad4u: goto label_283ad4;
        case 0x283ad8u: goto label_283ad8;
        case 0x283adcu: goto label_283adc;
        case 0x283ae0u: goto label_283ae0;
        case 0x283ae4u: goto label_283ae4;
        case 0x283ae8u: goto label_283ae8;
        case 0x283aecu: goto label_283aec;
        case 0x283af0u: goto label_283af0;
        case 0x283af4u: goto label_283af4;
        case 0x283af8u: goto label_283af8;
        case 0x283afcu: goto label_283afc;
        case 0x283b00u: goto label_283b00;
        case 0x283b04u: goto label_283b04;
        case 0x283b08u: goto label_283b08;
        case 0x283b0cu: goto label_283b0c;
        case 0x283b10u: goto label_283b10;
        case 0x283b14u: goto label_283b14;
        case 0x283b18u: goto label_283b18;
        case 0x283b1cu: goto label_283b1c;
        case 0x283b20u: goto label_283b20;
        case 0x283b24u: goto label_283b24;
        case 0x283b28u: goto label_283b28;
        case 0x283b2cu: goto label_283b2c;
        case 0x283b30u: goto label_283b30;
        case 0x283b34u: goto label_283b34;
        case 0x283b38u: goto label_283b38;
        case 0x283b3cu: goto label_283b3c;
        case 0x283b40u: goto label_283b40;
        case 0x283b44u: goto label_283b44;
        case 0x283b48u: goto label_283b48;
        case 0x283b4cu: goto label_283b4c;
        case 0x283b50u: goto label_283b50;
        case 0x283b54u: goto label_283b54;
        case 0x283b58u: goto label_283b58;
        case 0x283b5cu: goto label_283b5c;
        case 0x283b60u: goto label_283b60;
        case 0x283b64u: goto label_283b64;
        case 0x283b68u: goto label_283b68;
        case 0x283b6cu: goto label_283b6c;
        case 0x283b70u: goto label_283b70;
        case 0x283b74u: goto label_283b74;
        case 0x283b78u: goto label_283b78;
        case 0x283b7cu: goto label_283b7c;
        case 0x283b80u: goto label_283b80;
        case 0x283b84u: goto label_283b84;
        case 0x283b88u: goto label_283b88;
        case 0x283b8cu: goto label_283b8c;
        case 0x283b90u: goto label_283b90;
        case 0x283b94u: goto label_283b94;
        case 0x283b98u: goto label_283b98;
        case 0x283b9cu: goto label_283b9c;
        case 0x283ba0u: goto label_283ba0;
        case 0x283ba4u: goto label_283ba4;
        case 0x283ba8u: goto label_283ba8;
        case 0x283bacu: goto label_283bac;
        case 0x283bb0u: goto label_283bb0;
        case 0x283bb4u: goto label_283bb4;
        case 0x283bb8u: goto label_283bb8;
        case 0x283bbcu: goto label_283bbc;
        case 0x283bc0u: goto label_283bc0;
        case 0x283bc4u: goto label_283bc4;
        case 0x283bc8u: goto label_283bc8;
        case 0x283bccu: goto label_283bcc;
        case 0x283bd0u: goto label_283bd0;
        case 0x283bd4u: goto label_283bd4;
        case 0x283bd8u: goto label_283bd8;
        case 0x283bdcu: goto label_283bdc;
        case 0x283be0u: goto label_283be0;
        case 0x283be4u: goto label_283be4;
        case 0x283be8u: goto label_283be8;
        case 0x283becu: goto label_283bec;
        case 0x283bf0u: goto label_283bf0;
        case 0x283bf4u: goto label_283bf4;
        case 0x283bf8u: goto label_283bf8;
        case 0x283bfcu: goto label_283bfc;
        case 0x283c00u: goto label_283c00;
        case 0x283c04u: goto label_283c04;
        case 0x283c08u: goto label_283c08;
        case 0x283c0cu: goto label_283c0c;
        case 0x283c10u: goto label_283c10;
        case 0x283c14u: goto label_283c14;
        case 0x283c18u: goto label_283c18;
        case 0x283c1cu: goto label_283c1c;
        case 0x283c20u: goto label_283c20;
        case 0x283c24u: goto label_283c24;
        case 0x283c28u: goto label_283c28;
        case 0x283c2cu: goto label_283c2c;
        case 0x283c30u: goto label_283c30;
        case 0x283c34u: goto label_283c34;
        case 0x283c38u: goto label_283c38;
        case 0x283c3cu: goto label_283c3c;
        case 0x283c40u: goto label_283c40;
        case 0x283c44u: goto label_283c44;
        case 0x283c48u: goto label_283c48;
        case 0x283c4cu: goto label_283c4c;
        case 0x283c50u: goto label_283c50;
        case 0x283c54u: goto label_283c54;
        case 0x283c58u: goto label_283c58;
        case 0x283c5cu: goto label_283c5c;
        case 0x283c60u: goto label_283c60;
        case 0x283c64u: goto label_283c64;
        case 0x283c68u: goto label_283c68;
        case 0x283c6cu: goto label_283c6c;
        case 0x283c70u: goto label_283c70;
        case 0x283c74u: goto label_283c74;
        case 0x283c78u: goto label_283c78;
        case 0x283c7cu: goto label_283c7c;
        case 0x283c80u: goto label_283c80;
        case 0x283c84u: goto label_283c84;
        case 0x283c88u: goto label_283c88;
        case 0x283c8cu: goto label_283c8c;
        case 0x283c90u: goto label_283c90;
        case 0x283c94u: goto label_283c94;
        case 0x283c98u: goto label_283c98;
        case 0x283c9cu: goto label_283c9c;
        case 0x283ca0u: goto label_283ca0;
        case 0x283ca4u: goto label_283ca4;
        case 0x283ca8u: goto label_283ca8;
        case 0x283cacu: goto label_283cac;
        case 0x283cb0u: goto label_283cb0;
        case 0x283cb4u: goto label_283cb4;
        case 0x283cb8u: goto label_283cb8;
        case 0x283cbcu: goto label_283cbc;
        case 0x283cc0u: goto label_283cc0;
        case 0x283cc4u: goto label_283cc4;
        case 0x283cc8u: goto label_283cc8;
        case 0x283cccu: goto label_283ccc;
        case 0x283cd0u: goto label_283cd0;
        case 0x283cd4u: goto label_283cd4;
        case 0x283cd8u: goto label_283cd8;
        case 0x283cdcu: goto label_283cdc;
        case 0x283ce0u: goto label_283ce0;
        case 0x283ce4u: goto label_283ce4;
        case 0x283ce8u: goto label_283ce8;
        case 0x283cecu: goto label_283cec;
        case 0x283cf0u: goto label_283cf0;
        case 0x283cf4u: goto label_283cf4;
        case 0x283cf8u: goto label_283cf8;
        case 0x283cfcu: goto label_283cfc;
        case 0x283d00u: goto label_283d00;
        case 0x283d04u: goto label_283d04;
        case 0x283d08u: goto label_283d08;
        case 0x283d0cu: goto label_283d0c;
        case 0x283d10u: goto label_283d10;
        case 0x283d14u: goto label_283d14;
        case 0x283d18u: goto label_283d18;
        case 0x283d1cu: goto label_283d1c;
        case 0x283d20u: goto label_283d20;
        case 0x283d24u: goto label_283d24;
        case 0x283d28u: goto label_283d28;
        case 0x283d2cu: goto label_283d2c;
        case 0x283d30u: goto label_283d30;
        case 0x283d34u: goto label_283d34;
        case 0x283d38u: goto label_283d38;
        case 0x283d3cu: goto label_283d3c;
        case 0x283d40u: goto label_283d40;
        case 0x283d44u: goto label_283d44;
        case 0x283d48u: goto label_283d48;
        case 0x283d4cu: goto label_283d4c;
        case 0x283d50u: goto label_283d50;
        case 0x283d54u: goto label_283d54;
        case 0x283d58u: goto label_283d58;
        case 0x283d5cu: goto label_283d5c;
        case 0x283d60u: goto label_283d60;
        case 0x283d64u: goto label_283d64;
        case 0x283d68u: goto label_283d68;
        case 0x283d6cu: goto label_283d6c;
        case 0x283d70u: goto label_283d70;
        case 0x283d74u: goto label_283d74;
        case 0x283d78u: goto label_283d78;
        case 0x283d7cu: goto label_283d7c;
        case 0x283d80u: goto label_283d80;
        case 0x283d84u: goto label_283d84;
        case 0x283d88u: goto label_283d88;
        case 0x283d8cu: goto label_283d8c;
        case 0x283d90u: goto label_283d90;
        case 0x283d94u: goto label_283d94;
        case 0x283d98u: goto label_283d98;
        case 0x283d9cu: goto label_283d9c;
        case 0x283da0u: goto label_283da0;
        case 0x283da4u: goto label_283da4;
        case 0x283da8u: goto label_283da8;
        case 0x283dacu: goto label_283dac;
        case 0x283db0u: goto label_283db0;
        case 0x283db4u: goto label_283db4;
        case 0x283db8u: goto label_283db8;
        case 0x283dbcu: goto label_283dbc;
        case 0x283dc0u: goto label_283dc0;
        case 0x283dc4u: goto label_283dc4;
        case 0x283dc8u: goto label_283dc8;
        case 0x283dccu: goto label_283dcc;
        case 0x283dd0u: goto label_283dd0;
        case 0x283dd4u: goto label_283dd4;
        case 0x283dd8u: goto label_283dd8;
        case 0x283ddcu: goto label_283ddc;
        case 0x283de0u: goto label_283de0;
        case 0x283de4u: goto label_283de4;
        case 0x283de8u: goto label_283de8;
        case 0x283decu: goto label_283dec;
        case 0x283df0u: goto label_283df0;
        case 0x283df4u: goto label_283df4;
        case 0x283df8u: goto label_283df8;
        case 0x283dfcu: goto label_283dfc;
        case 0x283e00u: goto label_283e00;
        case 0x283e04u: goto label_283e04;
        case 0x283e08u: goto label_283e08;
        case 0x283e0cu: goto label_283e0c;
        case 0x283e10u: goto label_283e10;
        case 0x283e14u: goto label_283e14;
        case 0x283e18u: goto label_283e18;
        case 0x283e1cu: goto label_283e1c;
        case 0x283e20u: goto label_283e20;
        case 0x283e24u: goto label_283e24;
        case 0x283e28u: goto label_283e28;
        case 0x283e2cu: goto label_283e2c;
        case 0x283e30u: goto label_283e30;
        case 0x283e34u: goto label_283e34;
        case 0x283e38u: goto label_283e38;
        case 0x283e3cu: goto label_283e3c;
        case 0x283e40u: goto label_283e40;
        case 0x283e44u: goto label_283e44;
        case 0x283e48u: goto label_283e48;
        case 0x283e4cu: goto label_283e4c;
        case 0x283e50u: goto label_283e50;
        case 0x283e54u: goto label_283e54;
        case 0x283e58u: goto label_283e58;
        case 0x283e5cu: goto label_283e5c;
        case 0x283e60u: goto label_283e60;
        case 0x283e64u: goto label_283e64;
        case 0x283e68u: goto label_283e68;
        case 0x283e6cu: goto label_283e6c;
        case 0x283e70u: goto label_283e70;
        case 0x283e74u: goto label_283e74;
        case 0x283e78u: goto label_283e78;
        case 0x283e7cu: goto label_283e7c;
        case 0x283e80u: goto label_283e80;
        case 0x283e84u: goto label_283e84;
        case 0x283e88u: goto label_283e88;
        case 0x283e8cu: goto label_283e8c;
        case 0x283e90u: goto label_283e90;
        case 0x283e94u: goto label_283e94;
        case 0x283e98u: goto label_283e98;
        case 0x283e9cu: goto label_283e9c;
        case 0x283ea0u: goto label_283ea0;
        case 0x283ea4u: goto label_283ea4;
        case 0x283ea8u: goto label_283ea8;
        case 0x283eacu: goto label_283eac;
        default: return;
    }

label_2836e0:
    // 0x2836e0: 0x0  nop
    ctx->pc = 0x2836e0u;
    // NOP
label_2836e4:
    // 0x2836e4: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x2836e4u;
    
label_2836e8:
    // 0x2836e8: 0x1f030011  .word       0x1F030011                   # bgtz        $t8, . + 4 + (0x11 << 2) # 00030000 <InstrIdType: CPU_NORMAL>
label_2836ec:
    if (ctx->pc == 0x2836ECu) {
        ctx->pc = 0x2836F0u;
        goto label_2836f0;
    }
    ctx->pc = 0x2836E8u;
    {
        const bool branch_taken_0x2836e8 = (GPR_S32(ctx, 24) > 0);
        if (branch_taken_0x2836e8) {
            ctx->pc = 0x283730u;
            goto label_283730;
        }
    }
    ctx->pc = 0x2836F0u;
label_2836f0:
    // 0x2836f0: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x2836f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2836f4:
    // 0x2836f4: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x2836f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2836f8:
    // 0x2836f8: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x2836f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2836fc:
    // 0x2836fc: 0x429e0000  .word       0x429E0000                   # INVALID     $s4, $fp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2836fcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x2836FC raw=0x429E0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283700:
    // 0x283700: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283700u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x283700 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283704:
    // 0x283704: 0x41900000  .word       0x41900000                   # INVALID     $t4, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283704u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x283704 raw=0x41900000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283708:
    // 0x283708: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x283708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28370c:
    // 0x28370c: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x28370cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283710:
    // 0x283710: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x283710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283714:
    // 0x283714: 0x429e0000  .word       0x429E0000                   # INVALID     $s4, $fp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283714u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x283714 raw=0x429E0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283718:
    // 0x283718: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283718u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x283718 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28371c:
    // 0x28371c: 0x41900000  .word       0x41900000                   # INVALID     $t4, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28371cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x28371C raw=0x41900000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283720:
    // 0x283720: 0x0  nop
    ctx->pc = 0x283720u;
    // NOP
label_283724:
    // 0x283724: 0x0  nop
    ctx->pc = 0x283724u;
    // NOP
label_283728:
    // 0x283728: 0xd030012  jal         func_40C0048
label_28372c:
    if (ctx->pc == 0x28372Cu) {
        ctx->pc = 0x283730u;
        goto label_283730;
    }
    ctx->pc = 0x283728u;
    SET_GPR_U32(ctx, 31, 0x283730u);
    ctx->pc = 0x40C0048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C0048u, 0x283728u, 0x283730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283730u;
label_283730:
    // 0x283730: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x283730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283734:
    // 0x283734: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x283734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283738:
    // 0x283738: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x283738u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28373c:
    // 0x28373c: 0x42b00000  .word       0x42B00000                   # INVALID     $s5, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28373cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x28373C raw=0x42B00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283740:
    // 0x283740: 0x41900000  .word       0x41900000                   # INVALID     $t4, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283740u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x283740 raw=0x41900000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283744:
    // 0x283744: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283744u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x283744 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283748:
    // 0x283748: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x283748u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28374c:
    // 0x28374c: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x28374cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283750:
    // 0x283750: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x283750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283754:
    // 0x283754: 0x42b00000  .word       0x42B00000                   # INVALID     $s5, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283754u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x283754 raw=0x42B00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283758:
    // 0x283758: 0x41900000  .word       0x41900000                   # INVALID     $t4, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283758u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x283758 raw=0x41900000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28375c:
    // 0x28375c: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28375cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x28375C raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283760:
    // 0x283760: 0x0  nop
    ctx->pc = 0x283760u;
    // NOP
label_283764:
    // 0x283764: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x283764u;
    
label_283768:
    // 0x283768: 0x1c030013  .word       0x1C030013                   # bgtz        $zero, . + 4 + (0x13 << 2) # 00030000 <InstrIdType: CPU_NORMAL>
label_28376c:
    if (ctx->pc == 0x28376Cu) {
        ctx->pc = 0x283770u;
        goto label_283770;
    }
    ctx->pc = 0x283768u;
    {
        const bool branch_taken_0x283768 = (GPR_S32(ctx, 0) > 0);
        if (branch_taken_0x283768) {
            ctx->pc = 0x2837B8u;
            goto label_2837b8;
        }
    }
    ctx->pc = 0x283770u;
label_283770:
    // 0x283770: 0xc1300000  ll          $s0, 0x0($t1)
    ctx->pc = 0x283770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283774:
    // 0x283774: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x283774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283778:
    // 0x283778: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x283778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28377c:
    // 0x28377c: 0x42740000  .word       0x42740000                   # INVALID     $s3, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28377cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x28377C raw=0x42740000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283780:
    // 0x283780: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x283780u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_283784:
    // 0x283784: 0x41c00000  .word       0x41C00000                   # INVALID     $t6, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283784u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x283784 raw=0x41C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283788:
    // 0x283788: 0xc1300000  ll          $s0, 0x0($t1)
    ctx->pc = 0x283788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28378c:
    // 0x28378c: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x28378cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283790:
    // 0x283790: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x283790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283794:
    // 0x283794: 0x42740000  .word       0x42740000                   # INVALID     $s3, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283794u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x283794 raw=0x42740000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283798:
    // 0x283798: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x283798u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_28379c:
    // 0x28379c: 0x41c00000  .word       0x41C00000                   # INVALID     $t6, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28379cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x28379C raw=0x41C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2837a0:
    // 0x2837a0: 0x0  nop
    ctx->pc = 0x2837a0u;
    // NOP
label_2837a4:
    // 0x2837a4: 0x0  nop
    ctx->pc = 0x2837a4u;
    // NOP
label_2837a8:
    // 0x2837a8: 0xf000014  jal         func_C000050
label_2837ac:
    if (ctx->pc == 0x2837ACu) {
        ctx->pc = 0x2837B0u;
        goto label_2837b0;
    }
    ctx->pc = 0x2837A8u;
    SET_GPR_U32(ctx, 31, 0x2837B0u);
    ctx->pc = 0xC000050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC000050u, 0x2837A8u, 0x2837B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2837B0u;
label_2837b0:
    // 0x2837b0: 0xc1300000  ll          $s0, 0x0($t1)
    ctx->pc = 0x2837b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2837b4:
    // 0x2837b4: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x2837b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2837b8:
    // 0x2837b8: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x2837b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2837bc:
    // 0x2837bc: 0x428e0000  .word       0x428E0000                   # INVALID     $s4, $t6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2837bcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x2837BC raw=0x428E0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2837c0:
    // 0x2837c0: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x2837c0u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_2837c4:
    // 0x2837c4: 0x41e00000  .word       0x41E00000                   # INVALID     $t7, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2837c4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x2837C4 raw=0x41E00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2837c8:
    // 0x2837c8: 0xc1300000  ll          $s0, 0x0($t1)
    ctx->pc = 0x2837c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2837cc:
    // 0x2837cc: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x2837ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2837d0:
    // 0x2837d0: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x2837d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2837d4:
    // 0x2837d4: 0x428e0000  .word       0x428E0000                   # INVALID     $s4, $t6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2837d4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x2837D4 raw=0x428E0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2837d8:
    // 0x2837d8: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x2837d8u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_2837dc:
    // 0x2837dc: 0x41e00000  .word       0x41E00000                   # INVALID     $t7, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2837dcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x2837DC raw=0x41E00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2837e0:
    // 0x2837e0: 0x0  nop
    ctx->pc = 0x2837e0u;
    // NOP
label_2837e4:
    // 0x2837e4: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x2837e4u;
    
label_2837e8:
    // 0x2837e8: 0x1e000015  bgtz        $s0, . + 4 + (0x15 << 2)
label_2837ec:
    if (ctx->pc == 0x2837ECu) {
        ctx->pc = 0x2837F0u;
        goto label_2837f0;
    }
    ctx->pc = 0x2837E8u;
    {
        const bool branch_taken_0x2837e8 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x2837e8) {
            ctx->pc = 0x283840u;
            goto label_283840;
        }
    }
    ctx->pc = 0x2837F0u;
label_2837f0:
    // 0x2837f0: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x2837f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2837f4:
    // 0x2837f4: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x2837f4u;
    // CACHE instruction (ignored)
label_2837f8:
    // 0x2837f8: 0xc1b00000  ll          $s0, 0x0($t5)
    ctx->pc = 0x2837f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2837fc:
    // 0x2837fc: 0x42280000  .word       0x42280000                   # INVALID     $s1, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2837fcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x2837FC raw=0x42280000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283800:
    // 0x283800: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x283800u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_283804:
    // 0x283804: 0x42300000  .word       0x42300000                   # INVALID     $s1, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283804u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x283804 raw=0x42300000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283808:
    // 0x283808: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x283808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28380c:
    // 0x28380c: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x28380cu;
    // CACHE instruction (ignored)
label_283810:
    // 0x283810: 0xc1b00000  ll          $s0, 0x0($t5)
    ctx->pc = 0x283810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283814:
    // 0x283814: 0x42280000  .word       0x42280000                   # INVALID     $s1, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283814u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x283814 raw=0x42280000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283818:
    // 0x283818: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x283818u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_28381c:
    // 0x28381c: 0x42300000  .word       0x42300000                   # INVALID     $s1, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28381cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x28381C raw=0x42300000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283820:
    // 0x283820: 0x0  nop
    ctx->pc = 0x283820u;
    // NOP
label_283824:
    // 0x283824: 0x0  nop
    ctx->pc = 0x283824u;
    // NOP
label_283828:
    // 0x283828: 0x11030016  beq         $t0, $v1, . + 4 + (0x16 << 2)
label_28382c:
    if (ctx->pc == 0x28382Cu) {
        ctx->pc = 0x283830u;
        goto label_283830;
    }
    ctx->pc = 0x283828u;
    {
        const bool branch_taken_0x283828 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x283828) {
            ctx->pc = 0x283884u;
            goto label_283884;
        }
    }
    ctx->pc = 0x283830u;
label_283830:
    // 0x283830: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x283830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283834:
    // 0x283834: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x283834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283838:
    // 0x283838: 0xc1f80000  ll          $t8, 0x0($t7)
    ctx->pc = 0x283838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28383c:
    // 0x28383c: 0x42380000  .word       0x42380000                   # INVALID     $s1, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28383cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x28383C raw=0x42380000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283840:
    // 0x283840: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x283840u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_283844:
    // 0x283844: 0x42780000  .word       0x42780000                   # INVALID     $s3, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283844u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x283844 raw=0x42780000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283848:
    // 0x283848: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x283848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28384c:
    // 0x28384c: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x28384cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283850:
    // 0x283850: 0xc1f80000  ll          $t8, 0x0($t7)
    ctx->pc = 0x283850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283854:
    // 0x283854: 0x42380000  .word       0x42380000                   # INVALID     $s1, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283854u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x283854 raw=0x42380000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283858:
    // 0x283858: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x283858u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_28385c:
    // 0x28385c: 0x42780000  .word       0x42780000                   # INVALID     $s3, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28385cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x28385C raw=0x42780000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283860:
    // 0x283860: 0x0  nop
    ctx->pc = 0x283860u;
    // NOP
label_283864:
    // 0x283864: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x283864u;
    
label_283868:
    // 0x283868: 0x20030017  addi        $v1, $zero, 0x17
    ctx->pc = 0x283868u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)23, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
label_28386c:
    // 0x28386c: 0x0  nop
    ctx->pc = 0x28386cu;
    // NOP
label_283870:
    // 0x283870: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283870u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x283870 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283874:
    // 0x283874: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x283874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283878:
    // 0x283878: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x283878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28387c:
    // 0x28387c: 0x42f00000  .word       0x42F00000                   # INVALID     $s7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28387cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x28387C raw=0x42F00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283880:
    // 0x283880: 0x40e00000  .word       0x40E00000                   # INVALID     $a3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283880u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x7 at 0x283880 raw=0x40E00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283884:
    // 0x283884: 0x425c0000  .word       0x425C0000                   # INVALID     $s2, $gp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283884u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x283884 raw=0x425C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283888:
    // 0x283888: 0xc2040000  ll          $a0, 0x0($s0)
    ctx->pc = 0x283888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); SET_GPR_S32(ctx, 4, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28388c:
    // 0x28388c: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x28388cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283890:
    // 0x283890: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x283890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283894:
    // 0x283894: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283894u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x283894 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283898:
    // 0x283898: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x283898u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_28389c:
    // 0x28389c: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x28389cu;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_2838a0:
    // 0x2838a0: 0x0  nop
    ctx->pc = 0x2838a0u;
    // NOP
label_2838a4:
    // 0x2838a4: 0x0  nop
    ctx->pc = 0x2838a4u;
    // NOP
label_2838a8:
    // 0x2838a8: 0x12020018  beq         $s0, $v0, . + 4 + (0x18 << 2)
label_2838ac:
    if (ctx->pc == 0x2838ACu) {
        ctx->pc = 0x2838B0u;
        goto label_2838b0;
    }
    ctx->pc = 0x2838A8u;
    {
        const bool branch_taken_0x2838a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2838a8) {
            ctx->pc = 0x28390Cu;
            goto label_28390c;
        }
    }
    ctx->pc = 0x2838B0u;
label_2838b0:
    // 0x2838b0: 0x42820000  .word       0x42820000                   # INVALID     $s4, $v0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2838b0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x2838B0 raw=0x42820000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2838b4:
    // 0x2838b4: 0xc0c00000  ll          $zero, 0x0($a2)
    ctx->pc = 0x2838b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2838b8:
    // 0x2838b8: 0xc1f80000  ll          $t8, 0x0($t7)
    ctx->pc = 0x2838b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2838bc:
    // 0x2838bc: 0x43050000  .word       0x43050000                   # INVALID     $t8, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2838bcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x2838BC raw=0x43050000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2838c0:
    // 0x2838c0: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2838c0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x2838C0 raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2838c4:
    // 0x2838c4: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2838c4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x2838C4 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2838c8:
    // 0x2838c8: 0xc1b00000  ll          $s0, 0x0($t5)
    ctx->pc = 0x2838c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2838cc:
    // 0x2838cc: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x2838ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2838d0:
    // 0x2838d0: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x2838d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2838d4:
    // 0x2838d4: 0x42ae0000  .word       0x42AE0000                   # INVALID     $s5, $t6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2838d4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x2838D4 raw=0x42AE0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2838d8:
    // 0x2838d8: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x2838d8u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_2838dc:
    // 0x2838dc: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x2838dcu;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_2838e0:
    // 0x2838e0: 0x0  nop
    ctx->pc = 0x2838e0u;
    // NOP
label_2838e4:
    // 0x2838e4: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x2838e4u;
    
label_2838e8:
    // 0x2838e8: 0x21020019  addi        $v0, $t0, 0x19
    ctx->pc = 0x2838e8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 8), (int32_t)25, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
label_2838ec:
    // 0x2838ec: 0x0  nop
    ctx->pc = 0x2838ecu;
    // NOP
label_2838f0:
    // 0x2838f0: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x2838f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2838f4:
    // 0x2838f4: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2838f4u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2838f8:
    // 0x2838f8: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x2838f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2838fc:
    // 0x2838fc: 0x42960000  .word       0x42960000                   # INVALID     $s4, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2838fcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x2838FC raw=0x42960000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283900:
    // 0x283900: 0x41100000  .word       0x41100000                   # INVALID     $t0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_BC0>
    ctx->pc = 0x283900u;
    // BC0 (Condition: 0x10) - Handled by branch logic
label_283904:
    // 0x283904: 0x41900000  .word       0x41900000                   # INVALID     $t4, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283904u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x283904 raw=0x41900000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283908:
    // 0x283908: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x283908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28390c:
    // 0x28390c: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x28390cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283910:
    // 0x283910: 0xc1000000  ll          $zero, 0x0($t0)
    ctx->pc = 0x283910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283914:
    // 0x283914: 0x42a00000  .word       0x42A00000                   # INVALID     $s5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283914u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x283914 raw=0x42A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283918:
    // 0x283918: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283918u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x283918 raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28391c:
    // 0x28391c: 0x41800000  .word       0x41800000                   # INVALID     $t4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28391cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x28391C raw=0x41800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283920:
    // 0x283920: 0x0  nop
    ctx->pc = 0x283920u;
    // NOP
label_283924:
    // 0x283924: 0x0  nop
    ctx->pc = 0x283924u;
    // NOP
label_283928:
    // 0x283928: 0x1003001a  beq         $zero, $v1, . + 4 + (0x1A << 2)
label_28392c:
    if (ctx->pc == 0x28392Cu) {
        ctx->pc = 0x283930u;
        goto label_283930;
    }
    ctx->pc = 0x283928u;
    {
        const bool branch_taken_0x283928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x283928) {
            ctx->pc = 0x283994u;
            goto label_283994;
        }
    }
    ctx->pc = 0x283930u;
label_283930:
    // 0x283930: 0xc2180000  ll          $t8, 0x0($s0)
    ctx->pc = 0x283930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283934:
    // 0x283934: 0x0  nop
    ctx->pc = 0x283934u;
    // NOP
label_283938:
    // 0x283938: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x283938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28393c:
    // 0x28393c: 0x42d40000  .word       0x42D40000                   # INVALID     $s6, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28393cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x28393C raw=0x42D40000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283940:
    // 0x283940: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283940u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x283940 raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283944:
    // 0x283944: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283944u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x283944 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283948:
    // 0x283948: 0xc2180000  ll          $t8, 0x0($s0)
    ctx->pc = 0x283948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28394c:
    // 0x28394c: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x28394cu;
    // CACHE instruction (ignored)
label_283950:
    // 0x283950: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x283950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283954:
    // 0x283954: 0x42d80000  .word       0x42D80000                   # INVALID     $s6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283954u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x283954 raw=0x42D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283958:
    // 0x283958: 0x41100000  .word       0x41100000                   # INVALID     $t0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_BC0>
    ctx->pc = 0x283958u;
    // BC0 (Condition: 0x10) - Handled by branch logic
label_28395c:
    // 0x28395c: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28395cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x28395C raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283960:
    // 0x283960: 0x0  nop
    ctx->pc = 0x283960u;
    // NOP
label_283964:
    // 0x283964: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x283964u;
    
label_283968:
    // 0x283968: 0x1f03001b  .word       0x1F03001B                   # bgtz        $t8, . + 4 + (0x1B << 2) # 00030000 <InstrIdType: CPU_NORMAL>
label_28396c:
    if (ctx->pc == 0x28396Cu) {
        ctx->pc = 0x283970u;
        goto label_283970;
    }
    ctx->pc = 0x283968u;
    {
        const bool branch_taken_0x283968 = (GPR_S32(ctx, 24) > 0);
        if (branch_taken_0x283968) {
            ctx->pc = 0x2839D8u;
            goto label_2839d8;
        }
    }
    ctx->pc = 0x283970u;
label_283970:
    // 0x283970: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x283970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283974:
    // 0x283974: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x283974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283978:
    // 0x283978: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x283978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28397c:
    // 0x28397c: 0x428c0000  .word       0x428C0000                   # INVALID     $s4, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28397cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x28397C raw=0x428C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283980:
    // 0x283980: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x283980u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_283984:
    // 0x283984: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x283984u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_283988:
    // 0x283988: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x283988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28398c:
    // 0x28398c: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x28398cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283990:
    // 0x283990: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x283990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283994:
    // 0x283994: 0x42a00000  .word       0x42A00000                   # INVALID     $s5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283994u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x283994 raw=0x42A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283998:
    // 0x283998: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x283998u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_28399c:
    // 0x28399c: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x28399cu;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_2839a0:
    // 0x2839a0: 0x0  nop
    ctx->pc = 0x2839a0u;
    // NOP
label_2839a4:
    // 0x2839a4: 0x0  nop
    ctx->pc = 0x2839a4u;
    // NOP
label_2839a8:
    // 0x2839a8: 0xd00001c  jal         func_4000070
label_2839ac:
    if (ctx->pc == 0x2839ACu) {
        ctx->pc = 0x2839B0u;
        goto label_2839b0;
    }
    ctx->pc = 0x2839A8u;
    SET_GPR_U32(ctx, 31, 0x2839B0u);
    ctx->pc = 0x4000070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4000070u, 0x2839A8u, 0x2839B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2839B0u;
label_2839b0:
    // 0x2839b0: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x2839b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2839b4:
    // 0x2839b4: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x2839b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2839b8:
    // 0x2839b8: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x2839b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2839bc:
    // 0x2839bc: 0x429c0000  .word       0x429C0000                   # INVALID     $s4, $gp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2839bcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x2839BC raw=0x429C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2839c0:
    // 0x2839c0: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x2839c0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x2839C0 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2839c4:
    // 0x2839c4: 0x40a00000  dmtc0       $zero, Index
    ctx->pc = 0x2839c4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x5 at 0x2839C4 raw=0x40A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2839c8:
    // 0x2839c8: 0xc1000000  ll          $zero, 0x0($t0)
    ctx->pc = 0x2839c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2839cc:
    // 0x2839cc: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x2839ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2839d0:
    // 0x2839d0: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x2839d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2839d4:
    // 0x2839d4: 0x42aa0000  .word       0x42AA0000                   # INVALID     $s5, $t2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2839d4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x2839D4 raw=0x42AA0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2839d8:
    // 0x2839d8: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x2839d8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x2839D8 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2839dc:
    // 0x2839dc: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2839dcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x2839DC raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2839e0:
    // 0x2839e0: 0x0  nop
    ctx->pc = 0x2839e0u;
    // NOP
label_2839e4:
    // 0x2839e4: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x2839e4u;
    
label_2839e8:
    // 0x2839e8: 0x1c00001d  bgtz        $zero, . + 4 + (0x1D << 2)
label_2839ec:
    if (ctx->pc == 0x2839ECu) {
        ctx->pc = 0x2839F0u;
        goto label_2839f0;
    }
    ctx->pc = 0x2839E8u;
    {
        const bool branch_taken_0x2839e8 = (GPR_S32(ctx, 0) > 0);
        if (branch_taken_0x2839e8) {
            ctx->pc = 0x283A60u;
            goto label_283a60;
        }
    }
    ctx->pc = 0x2839F0u;
label_2839f0:
    // 0x2839f0: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x2839f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2839f4:
    // 0x2839f4: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x2839f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2839f8:
    // 0x2839f8: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x2839f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2839fc:
    // 0x2839fc: 0x430c0000  .word       0x430C0000                   # INVALID     $t8, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2839fcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x2839FC raw=0x430C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283a00:
    // 0x283a00: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x283a00u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x283A00 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283a04:
    // 0x283a04: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x283a04u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x283A04 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283a08:
    // 0x283a08: 0xc1a00000  ll          $zero, 0x0($t5)
    ctx->pc = 0x283a08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283a0c:
    // 0x283a0c: 0xc1700000  ll          $s0, 0x0($t3)
    ctx->pc = 0x283a0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283a10:
    // 0x283a10: 0xc1c80000  ll          $t0, 0x0($t6)
    ctx->pc = 0x283a10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283a14:
    // 0x283a14: 0x42200000  .word       0x42200000                   # INVALID     $s1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283a14u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x283A14 raw=0x42200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283a18:
    // 0x283a18: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x283a18u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x283A18 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283a1c:
    // 0x283a1c: 0x42180000  .word       0x42180000                   # INVALID     $s0, $t8, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x283a1cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x283A1C raw=0x42180000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283a20:
    // 0x283a20: 0x0  nop
    ctx->pc = 0x283a20u;
    // NOP
label_283a24:
    // 0x283a24: 0x0  nop
    ctx->pc = 0x283a24u;
    // NOP
label_283a28:
    // 0x283a28: 0x1004001e  beq         $zero, $a0, . + 4 + (0x1E << 2)
label_283a2c:
    if (ctx->pc == 0x283A2Cu) {
        ctx->pc = 0x283A30u;
        goto label_283a30;
    }
    ctx->pc = 0x283A28u;
    {
        const bool branch_taken_0x283a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x283a28) {
            ctx->pc = 0x283AA4u;
            goto label_283aa4;
        }
    }
    ctx->pc = 0x283A30u;
label_283a30:
    // 0x283a30: 0xc1700000  ll          $s0, 0x0($t3)
    ctx->pc = 0x283a30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283a34:
    // 0x283a34: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x283a34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283a38:
    // 0x283a38: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x283a38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283a3c:
    // 0x283a3c: 0x43180000  .word       0x43180000                   # INVALID     $t8, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283a3cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x283A3C raw=0x43180000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283a40:
    // 0x283a40: 0x40a00000  dmtc0       $zero, Index
    ctx->pc = 0x283a40u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x5 at 0x283A40 raw=0x40A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283a44:
    // 0x283a44: 0x41900000  .word       0x41900000                   # INVALID     $t4, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283a44u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x283A44 raw=0x41900000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283a48:
    // 0x283a48: 0xc1a00000  ll          $zero, 0x0($t5)
    ctx->pc = 0x283a48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283a4c:
    // 0x283a4c: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x283a4cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x283A4C raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283a50:
    // 0x283a50: 0xc1d80000  ll          $t8, 0x0($t6)
    ctx->pc = 0x283a50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283a54:
    // 0x283a54: 0x42200000  .word       0x42200000                   # INVALID     $s1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283a54u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x283A54 raw=0x42200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283a58:
    // 0x283a58: 0x41880000  .word       0x41880000                   # INVALID     $t4, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283a58u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x283A58 raw=0x41880000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283a5c:
    // 0x283a5c: 0x42180000  .word       0x42180000                   # INVALID     $s0, $t8, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x283a5cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x283A5C raw=0x42180000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283a60:
    // 0x283a60: 0x0  nop
    ctx->pc = 0x283a60u;
    // NOP
label_283a64:
    // 0x283a64: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x283a64u;
    
label_283a68:
    // 0x283a68: 0x1f04001f  .word       0x1F04001F                   # bgtz        $t8, . + 4 + (0x1F << 2) # 00040000 <InstrIdType: CPU_NORMAL>
label_283a6c:
    if (ctx->pc == 0x283A6Cu) {
        ctx->pc = 0x283A70u;
        goto label_283a70;
    }
    ctx->pc = 0x283A68u;
    {
        const bool branch_taken_0x283a68 = (GPR_S32(ctx, 24) > 0);
        if (branch_taken_0x283a68) {
            ctx->pc = 0x283AE8u;
            goto label_283ae8;
        }
    }
    ctx->pc = 0x283A70u;
label_283a70:
    // 0x283a70: 0x41a80000  .word       0x41A80000                   # INVALID     $t5, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283a70u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x283A70 raw=0x41A80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283a74:
    // 0x283a74: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x283a74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283a78:
    // 0x283a78: 0xc1300000  ll          $s0, 0x0($t1)
    ctx->pc = 0x283a78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283a7c:
    // 0x283a7c: 0xc2d00000  ll          $s0, 0x0($s6)
    ctx->pc = 0x283a7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283a80:
    // 0x283a80: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x283a80u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x283A80 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283a84:
    // 0x283a84: 0xc0c00000  ll          $zero, 0x0($a2)
    ctx->pc = 0x283a84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283a88:
    // 0x283a88: 0xc2a60000  ll          $a2, 0x0($s5)
    ctx->pc = 0x283a88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); SET_GPR_S32(ctx, 6, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283a8c:
    // 0x283a8c: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x283a8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283a90:
    // 0x283a90: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x283a90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283a94:
    // 0x283a94: 0x42d00000  .word       0x42D00000                   # INVALID     $s6, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283a94u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x283A94 raw=0x42D00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283a98:
    // 0x283a98: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x283a98u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x283A98 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283a9c:
    // 0x283a9c: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283a9cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x283A9C raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283aa0:
    // 0x283aa0: 0x0  nop
    ctx->pc = 0x283aa0u;
    // NOP
label_283aa4:
    // 0x283aa4: 0x0  nop
    ctx->pc = 0x283aa4u;
    // NOP
label_283aa8:
    // 0x283aa8: 0x10030020  beq         $zero, $v1, . + 4 + (0x20 << 2)
label_283aac:
    if (ctx->pc == 0x283AACu) {
        ctx->pc = 0x283AB0u;
        goto label_283ab0;
    }
    ctx->pc = 0x283AA8u;
    {
        const bool branch_taken_0x283aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x283aa8) {
            ctx->pc = 0x283B2Cu;
            goto label_283b2c;
        }
    }
    ctx->pc = 0x283AB0u;
label_283ab0:
    // 0x283ab0: 0x41f80000  .word       0x41F80000                   # INVALID     $t7, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283ab0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x283AB0 raw=0x41F80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283ab4:
    // 0x283ab4: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x283ab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283ab8:
    // 0x283ab8: 0xc1000000  ll          $zero, 0x0($t0)
    ctx->pc = 0x283ab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283abc:
    // 0x283abc: 0xc2fa0000  ll          $k0, 0x0($s7)
    ctx->pc = 0x283abcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 26, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283ac0:
    // 0x283ac0: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283ac0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x283AC0 raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283ac4:
    // 0x283ac4: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x283ac4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283ac8:
    // 0x283ac8: 0xc2ac0000  ll          $t4, 0x0($s5)
    ctx->pc = 0x283ac8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); SET_GPR_S32(ctx, 12, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283acc:
    // 0x283acc: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x283accu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283ad0:
    // 0x283ad0: 0xc1980000  ll          $t8, 0x0($t4)
    ctx->pc = 0x283ad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283ad4:
    // 0x283ad4: 0x42f20000  .word       0x42F20000                   # INVALID     $s7, $s2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283ad4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x283AD4 raw=0x42F20000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283ad8:
    // 0x283ad8: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283ad8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x283AD8 raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283adc:
    // 0x283adc: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283adcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x283ADC raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283ae0:
    // 0x283ae0: 0x0  nop
    ctx->pc = 0x283ae0u;
    // NOP
label_283ae4:
    // 0x283ae4: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x283ae4u;
    
label_283ae8:
    // 0x283ae8: 0x1f030021  .word       0x1F030021                   # bgtz        $t8, . + 4 + (0x21 << 2) # 00030000 <InstrIdType: CPU_NORMAL>
label_283aec:
    if (ctx->pc == 0x283AECu) {
        ctx->pc = 0x283AF0u;
        goto label_283af0;
    }
    ctx->pc = 0x283AE8u;
    {
        const bool branch_taken_0x283ae8 = (GPR_S32(ctx, 24) > 0);
        if (branch_taken_0x283ae8) {
            ctx->pc = 0x283B70u;
            goto label_283b70;
        }
    }
    ctx->pc = 0x283AF0u;
label_283af0:
    // 0x283af0: 0x42240000  .word       0x42240000                   # INVALID     $s1, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283af0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x283AF0 raw=0x42240000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283af4:
    // 0x283af4: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x283af4u;
    // CACHE instruction (ignored)
label_283af8:
    // 0x283af8: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x283af8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283afc:
    // 0x283afc: 0x42e40000  .word       0x42E40000                   # INVALID     $s7, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283afcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x283AFC raw=0x42E40000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283b00:
    // 0x283b00: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x283b00u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_283b04:
    // 0x283b04: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283b04u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x283B04 raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283b08:
    // 0x283b08: 0xc2920000  ll          $s2, 0x0($s4)
    ctx->pc = 0x283b08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); SET_GPR_S32(ctx, 18, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283b0c:
    // 0x283b0c: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x283b0cu;
    // CACHE instruction (ignored)
label_283b10:
    // 0x283b10: 0xc1000000  ll          $zero, 0x0($t0)
    ctx->pc = 0x283b10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283b14:
    // 0x283b14: 0x42e40000  .word       0x42E40000                   # INVALID     $s7, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283b14u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x283B14 raw=0x42E40000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283b18:
    // 0x283b18: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x283b18u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_283b1c:
    // 0x283b1c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283b1cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x283B1C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283b20:
    // 0x283b20: 0x0  nop
    ctx->pc = 0x283b20u;
    // NOP
label_283b24:
    // 0x283b24: 0x0  nop
    ctx->pc = 0x283b24u;
    // NOP
label_283b28:
    // 0x283b28: 0x12020022  beq         $s0, $v0, . + 4 + (0x22 << 2)
label_283b2c:
    if (ctx->pc == 0x283B2Cu) {
        ctx->pc = 0x283B30u;
        goto label_283b30;
    }
    ctx->pc = 0x283B28u;
    {
        const bool branch_taken_0x283b28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x283b28) {
            ctx->pc = 0x283BB4u;
            goto label_283bb4;
        }
    }
    ctx->pc = 0x283B30u;
label_283b30:
    // 0x283b30: 0x42240000  .word       0x42240000                   # INVALID     $s1, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283b30u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x283B30 raw=0x42240000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283b34:
    // 0x283b34: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x283b34u;
    // CACHE instruction (ignored)
label_283b38:
    // 0x283b38: 0xc1000000  ll          $zero, 0x0($t0)
    ctx->pc = 0x283b38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283b3c:
    // 0x283b3c: 0x43070000  .word       0x43070000                   # INVALID     $t8, $a3, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283b3cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x283B3C raw=0x43070000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283b40:
    // 0x283b40: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x283b40u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_283b44:
    // 0x283b44: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283b44u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x283B44 raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283b48:
    // 0x283b48: 0xc2bc0000  ll          $gp, 0x0($s5)
    ctx->pc = 0x283b48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); SET_GPR_S32(ctx, 28, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283b4c:
    // 0x283b4c: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x283b4cu;
    // CACHE instruction (ignored)
label_283b50:
    // 0x283b50: 0xc0c00000  ll          $zero, 0x0($a2)
    ctx->pc = 0x283b50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283b54:
    // 0x283b54: 0x43070000  .word       0x43070000                   # INVALID     $t8, $a3, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283b54u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x283B54 raw=0x43070000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283b58:
    // 0x283b58: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x283b58u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_283b5c:
    // 0x283b5c: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283b5cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x283B5C raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283b60:
    // 0x283b60: 0x0  nop
    ctx->pc = 0x283b60u;
    // NOP
label_283b64:
    // 0x283b64: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x283b64u;
    
label_283b68:
    // 0x283b68: 0x21020023  addi        $v0, $t0, 0x23
    ctx->pc = 0x283b68u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 8), (int32_t)35, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
label_283b6c:
    // 0x283b6c: 0x0  nop
    ctx->pc = 0x283b6cu;
    // NOP
label_283b70:
    // 0x283b70: 0xc2900000  ll          $s0, 0x0($s4)
    ctx->pc = 0x283b70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283b74:
    // 0x283b74: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x283b74u;
    // CACHE instruction (ignored)
label_283b78:
    // 0x283b78: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x283b78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283b7c:
    // 0x283b7c: 0x43020000  .word       0x43020000                   # INVALID     $t8, $v0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283b7cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x283B7C raw=0x43020000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283b80:
    // 0x283b80: 0x40400000  cfc0        $zero, Index
    ctx->pc = 0x283b80u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x283B80 raw=0x40400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283b84:
    // 0x283b84: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283b84u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x283B84 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283b88:
    // 0x283b88: 0xc1300000  ll          $s0, 0x0($t1)
    ctx->pc = 0x283b88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283b8c:
    // 0x283b8c: 0xc0c00000  ll          $zero, 0x0($a2)
    ctx->pc = 0x283b8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283b90:
    // 0x283b90: 0xc1300000  ll          $s0, 0x0($t1)
    ctx->pc = 0x283b90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283b94:
    // 0x283b94: 0x43100000  .word       0x43100000                   # INVALID     $t8, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283b94u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x283B94 raw=0x43100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283b98:
    // 0x283b98: 0x41500000  .word       0x41500000                   # INVALID     $t2, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283b98u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x283B98 raw=0x41500000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283b9c:
    // 0x283b9c: 0x41e80000  .word       0x41E80000                   # INVALID     $t7, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283b9cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x283B9C raw=0x41E80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283ba0:
    // 0x283ba0: 0x0  nop
    ctx->pc = 0x283ba0u;
    // NOP
label_283ba4:
    // 0x283ba4: 0x0  nop
    ctx->pc = 0x283ba4u;
    // NOP
label_283ba8:
    // 0x283ba8: 0xd000024  jal         func_4000090
label_283bac:
    if (ctx->pc == 0x283BACu) {
        ctx->pc = 0x283BB0u;
        goto label_283bb0;
    }
    ctx->pc = 0x283BA8u;
    SET_GPR_U32(ctx, 31, 0x283BB0u);
    ctx->pc = 0x4000090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4000090u, 0x283BA8u, 0x283BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283BB0u;
label_283bb0:
    // 0x283bb0: 0xc29e0000  ll          $fp, 0x0($s4)
    ctx->pc = 0x283bb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); SET_GPR_S32(ctx, 30, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283bb4:
    // 0x283bb4: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x283bb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283bb8:
    // 0x283bb8: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x283bb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283bbc:
    // 0x283bbc: 0x43120000  .word       0x43120000                   # INVALID     $t8, $s2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283bbcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x283BBC raw=0x43120000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283bc0:
    // 0x283bc0: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x283bc0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x283BC0 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283bc4:
    // 0x283bc4: 0x41880000  .word       0x41880000                   # INVALID     $t4, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283bc4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x283BC4 raw=0x41880000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283bc8:
    // 0x283bc8: 0xc1b00000  ll          $s0, 0x0($t5)
    ctx->pc = 0x283bc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283bcc:
    // 0x283bcc: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x283bccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283bd0:
    // 0x283bd0: 0xc1700000  ll          $s0, 0x0($t3)
    ctx->pc = 0x283bd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283bd4:
    // 0x283bd4: 0x43270000  .word       0x43270000                   # INVALID     $t9, $a3, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283bd4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x283BD4 raw=0x43270000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283bd8:
    // 0x283bd8: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283bd8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x283BD8 raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283bdc:
    // 0x283bdc: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x283bdcu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x283BDC raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283be0:
    // 0x283be0: 0x0  nop
    ctx->pc = 0x283be0u;
    // NOP
label_283be4:
    // 0x283be4: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x283be4u;
    
label_283be8:
    // 0x283be8: 0x1c000025  bgtz        $zero, . + 4 + (0x25 << 2)
label_283bec:
    if (ctx->pc == 0x283BECu) {
        ctx->pc = 0x283BF0u;
        goto label_283bf0;
    }
    ctx->pc = 0x283BE8u;
    {
        const bool branch_taken_0x283be8 = (GPR_S32(ctx, 0) > 0);
        if (branch_taken_0x283be8) {
            ctx->pc = 0x283C80u;
            goto label_283c80;
        }
    }
    ctx->pc = 0x283BF0u;
label_283bf0:
    // 0x283bf0: 0xc2300000  ll          $s0, 0x0($s1)
    ctx->pc = 0x283bf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283bf4:
    // 0x283bf4: 0xc1e00000  ll          $zero, 0x0($t7)
    ctx->pc = 0x283bf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283bf8:
    // 0x283bf8: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x283bf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283bfc:
    // 0x283bfc: 0x42ac0000  .word       0x42AC0000                   # INVALID     $s5, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283bfcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x283BFC raw=0x42AC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283c00:
    // 0x283c00: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283c00u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x283C00 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283c04:
    // 0x283c04: 0x42380000  .word       0x42380000                   # INVALID     $s1, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283c04u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x283C04 raw=0x42380000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283c08:
    // 0x283c08: 0xc0e00000  ll          $zero, 0x0($a3)
    ctx->pc = 0x283c08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283c0c:
    // 0x283c0c: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x283c0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283c10:
    // 0x283c10: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x283c10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283c14:
    // 0x283c14: 0x42180000  .word       0x42180000                   # INVALID     $s0, $t8, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x283c14u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x283C14 raw=0x42180000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283c18:
    // 0x283c18: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283c18u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x283C18 raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283c1c:
    // 0x283c1c: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x283c1cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x283C1C raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283c20:
    // 0x283c20: 0x0  nop
    ctx->pc = 0x283c20u;
    // NOP
label_283c24:
    // 0x283c24: 0x0  nop
    ctx->pc = 0x283c24u;
    // NOP
label_283c28:
    // 0x283c28: 0x13030026  beq         $t8, $v1, . + 4 + (0x26 << 2)
label_283c2c:
    if (ctx->pc == 0x283C2Cu) {
        ctx->pc = 0x283C30u;
        goto label_283c30;
    }
    ctx->pc = 0x283C28u;
    {
        const bool branch_taken_0x283c28 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 3));
        if (branch_taken_0x283c28) {
            ctx->pc = 0x283CC4u;
            goto label_283cc4;
        }
    }
    ctx->pc = 0x283C30u;
label_283c30:
    // 0x283c30: 0xc2580000  ll          $t8, 0x0($s2)
    ctx->pc = 0x283c30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283c34:
    // 0x283c34: 0xc2080000  ll          $t0, 0x0($s0)
    ctx->pc = 0x283c34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283c38:
    // 0x283c38: 0xc1e00000  ll          $zero, 0x0($t7)
    ctx->pc = 0x283c38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283c3c:
    // 0x283c3c: 0x42d40000  .word       0x42D40000                   # INVALID     $s6, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283c3cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x283C3C raw=0x42D40000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283c40:
    // 0x283c40: 0x41e00000  .word       0x41E00000                   # INVALID     $t7, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283c40u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x283C40 raw=0x41E00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283c44:
    // 0x283c44: 0x425c0000  .word       0x425C0000                   # INVALID     $s2, $gp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283c44u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x283C44 raw=0x425C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283c48:
    // 0x283c48: 0xc2240000  ll          $a0, 0x0($s1)
    ctx->pc = 0x283c48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); SET_GPR_S32(ctx, 4, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283c4c:
    // 0x283c4c: 0xc1e00000  ll          $zero, 0x0($t7)
    ctx->pc = 0x283c4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283c50:
    // 0x283c50: 0xc1c80000  ll          $t0, 0x0($t6)
    ctx->pc = 0x283c50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283c54:
    // 0x283c54: 0x42a80000  .word       0x42A80000                   # INVALID     $s5, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283c54u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x283C54 raw=0x42A80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283c58:
    // 0x283c58: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283c58u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x283C58 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283c5c:
    // 0x283c5c: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283c5cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x283C5C raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283c60:
    // 0x283c60: 0x0  nop
    ctx->pc = 0x283c60u;
    // NOP
label_283c64:
    // 0x283c64: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x283c64u;
    
label_283c68:
    // 0x283c68: 0x22030027  addi        $v1, $s0, 0x27
    ctx->pc = 0x283c68u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 16), (int32_t)39, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
label_283c6c:
    // 0x283c6c: 0x0  nop
    ctx->pc = 0x283c6cu;
    // NOP
label_283c70:
    // 0x283c70: 0xc1880000  ll          $t0, 0x0($t4)
    ctx->pc = 0x283c70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283c74:
    // 0x283c74: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x283c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283c78:
    // 0x283c78: 0xc1000000  ll          $zero, 0x0($t0)
    ctx->pc = 0x283c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283c7c:
    // 0x283c7c: 0x42f00000  .word       0x42F00000                   # INVALID     $s7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283c7cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x283C7C raw=0x42F00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283c80:
    // 0x283c80: 0x40a00000  dmtc0       $zero, Index
    ctx->pc = 0x283c80u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x5 at 0x283C80 raw=0x40A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283c84:
    // 0x283c84: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x283c84u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x283C84 raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283c88:
    // 0x283c88: 0xc1880000  ll          $t0, 0x0($t4)
    ctx->pc = 0x283c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283c8c:
    // 0x283c8c: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x283c8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283c90:
    // 0x283c90: 0xc1000000  ll          $zero, 0x0($t0)
    ctx->pc = 0x283c90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283c94:
    // 0x283c94: 0x42f00000  .word       0x42F00000                   # INVALID     $s7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283c94u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x283C94 raw=0x42F00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283c98:
    // 0x283c98: 0x40a00000  dmtc0       $zero, Index
    ctx->pc = 0x283c98u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x5 at 0x283C98 raw=0x40A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283c9c:
    // 0x283c9c: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x283c9cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x283C9C raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283ca0:
    // 0x283ca0: 0x0  nop
    ctx->pc = 0x283ca0u;
    // NOP
label_283ca4:
    // 0x283ca4: 0x0  nop
    ctx->pc = 0x283ca4u;
    // NOP
label_283ca8:
    // 0x283ca8: 0xf020028  jal         func_C0800A0
label_283cac:
    if (ctx->pc == 0x283CACu) {
        ctx->pc = 0x283CB0u;
        goto label_283cb0;
    }
    ctx->pc = 0x283CA8u;
    SET_GPR_U32(ctx, 31, 0x283CB0u);
    ctx->pc = 0xC0800A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC0800A0u, 0x283CA8u, 0x283CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283CB0u;
label_283cb0:
    // 0x283cb0: 0xc1e00000  ll          $zero, 0x0($t7)
    ctx->pc = 0x283cb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283cb4:
    // 0x283cb4: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x283cb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283cb8:
    // 0x283cb8: 0xc1700000  ll          $s0, 0x0($t3)
    ctx->pc = 0x283cb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283cbc:
    // 0x283cbc: 0x430b0000  .word       0x430B0000                   # INVALID     $t8, $t3, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283cbcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x283CBC raw=0x430B0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283cc0:
    // 0x283cc0: 0x41000000  bc0f        . + 4 + (0x0 << 2)
label_283cc4:
    if (ctx->pc == 0x283CC4u) {
        ctx->pc = 0x283CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283CC0u;
        // 0x283cc4: 0x42240000  .word       0x42240000                   # INVALID     $s1, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x283CC4 raw=0x42240000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x283CC8u;
        goto label_283cc8;
    }
    ctx->pc = 0x283CC0u;
    {
        const bool branch_taken_0x283cc0 = (false);
        ctx->pc = 0x283CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283CC0u;
        // 0x283cc4: 0x42240000  .word       0x42240000                   # INVALID     $s1, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x283CC4 raw=0x42240000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x283cc0) {
            ctx->pc = 0x283CC4u;
            goto label_283cc4;
        }
    }
    ctx->pc = 0x283CC8u;
label_283cc8:
    // 0x283cc8: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x283cc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283ccc:
    // 0x283ccc: 0xc1980000  ll          $t8, 0x0($t4)
    ctx->pc = 0x283cccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283cd0:
    // 0x283cd0: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x283cd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283cd4:
    // 0x283cd4: 0x42ea0000  .word       0x42EA0000                   # INVALID     $s7, $t2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283cd4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x283CD4 raw=0x42EA0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283cd8:
    // 0x283cd8: 0x41500000  .word       0x41500000                   # INVALID     $t2, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283cd8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x283CD8 raw=0x41500000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283cdc:
    // 0x283cdc: 0x42de0000  .word       0x42DE0000                   # INVALID     $s6, $fp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283cdcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x283CDC raw=0x42DE0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283ce0:
    // 0x283ce0: 0x0  nop
    ctx->pc = 0x283ce0u;
    // NOP
label_283ce4:
    // 0x283ce4: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x283ce4u;
    
label_283ce8:
    // 0x283ce8: 0x1e020029  .word       0x1E020029                   # bgtz        $s0, . + 4 + (0x29 << 2) # 00020000 <InstrIdType: CPU_NORMAL>
label_283cec:
    if (ctx->pc == 0x283CECu) {
        ctx->pc = 0x283CF0u;
        goto label_283cf0;
    }
    ctx->pc = 0x283CE8u;
    {
        const bool branch_taken_0x283ce8 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x283ce8) {
            ctx->pc = 0x283D90u;
            goto label_283d90;
        }
    }
    ctx->pc = 0x283CF0u;
label_283cf0:
    // 0x283cf0: 0xc0e00000  ll          $zero, 0x0($a3)
    ctx->pc = 0x283cf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283cf4:
    // 0x283cf4: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x283cf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283cf8:
    // 0x283cf8: 0xc2680000  ll          $t0, 0x0($s3)
    ctx->pc = 0x283cf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283cfc:
    // 0x283cfc: 0x425c0000  .word       0x425C0000                   # INVALID     $s2, $gp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283cfcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x283CFC raw=0x425C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283d00:
    // 0x283d00: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x283d00u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_283d04:
    // 0x283d04: 0x42e60000  .word       0x42E60000                   # INVALID     $s7, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283d04u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x283D04 raw=0x42E60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283d08:
    // 0x283d08: 0xc0e00000  ll          $zero, 0x0($a3)
    ctx->pc = 0x283d08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283d0c:
    // 0x283d0c: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x283d0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283d10:
    // 0x283d10: 0xc2680000  ll          $t0, 0x0($s3)
    ctx->pc = 0x283d10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283d14:
    // 0x283d14: 0x425c0000  .word       0x425C0000                   # INVALID     $s2, $gp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283d14u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x283D14 raw=0x425C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283d18:
    // 0x283d18: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x283d18u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_283d1c:
    // 0x283d1c: 0x42e60000  .word       0x42E60000                   # INVALID     $s7, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283d1cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x283D1C raw=0x42E60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283d20:
    // 0x283d20: 0x0  nop
    ctx->pc = 0x283d20u;
    // NOP
label_283d24:
    // 0x283d24: 0x0  nop
    ctx->pc = 0x283d24u;
    // NOP
label_283d28:
    // 0x283d28: 0x1003002a  beq         $zero, $v1, . + 4 + (0x2A << 2)
label_283d2c:
    if (ctx->pc == 0x283D2Cu) {
        ctx->pc = 0x283D30u;
        goto label_283d30;
    }
    ctx->pc = 0x283D28u;
    {
        const bool branch_taken_0x283d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x283d28) {
            ctx->pc = 0x283DD4u;
            goto label_283dd4;
        }
    }
    ctx->pc = 0x283D30u;
label_283d30:
    // 0x283d30: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x283d30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283d34:
    // 0x283d34: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x283d34u;
    // CACHE instruction (ignored)
label_283d38:
    // 0x283d38: 0xc2640000  ll          $a0, 0x0($s3)
    ctx->pc = 0x283d38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); SET_GPR_S32(ctx, 4, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283d3c:
    // 0x283d3c: 0x42700000  .word       0x42700000                   # INVALID     $s3, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283d3cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x283D3C raw=0x42700000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283d40:
    // 0x283d40: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x283d40u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_283d44:
    // 0x283d44: 0x42e60000  .word       0x42E60000                   # INVALID     $s7, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283d44u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x283D44 raw=0x42E60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283d48:
    // 0x283d48: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x283d48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283d4c:
    // 0x283d4c: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x283d4cu;
    // CACHE instruction (ignored)
label_283d50:
    // 0x283d50: 0xc2640000  ll          $a0, 0x0($s3)
    ctx->pc = 0x283d50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); SET_GPR_S32(ctx, 4, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283d54:
    // 0x283d54: 0x42700000  .word       0x42700000                   # INVALID     $s3, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283d54u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x283D54 raw=0x42700000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283d58:
    // 0x283d58: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x283d58u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_283d5c:
    // 0x283d5c: 0x42e60000  .word       0x42E60000                   # INVALID     $s7, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283d5cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x283D5C raw=0x42E60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283d60:
    // 0x283d60: 0x0  nop
    ctx->pc = 0x283d60u;
    // NOP
label_283d64:
    // 0x283d64: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x283d64u;
    
label_283d68:
    // 0x283d68: 0x1f03002b  .word       0x1F03002B                   # bgtz        $t8, . + 4 + (0x2B << 2) # 00030000 <InstrIdType: CPU_NORMAL>
label_283d6c:
    if (ctx->pc == 0x283D6Cu) {
        ctx->pc = 0x283D70u;
        goto label_283d70;
    }
    ctx->pc = 0x283D68u;
    {
        const bool branch_taken_0x283d68 = (GPR_S32(ctx, 24) > 0);
        if (branch_taken_0x283d68) {
            ctx->pc = 0x283E18u;
            goto label_283e18;
        }
    }
    ctx->pc = 0x283D70u;
label_283d70:
    // 0x283d70: 0xc1a00000  ll          $zero, 0x0($t5)
    ctx->pc = 0x283d70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283d74:
    // 0x283d74: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x283d74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283d78:
    // 0x283d78: 0xc1000000  ll          $zero, 0x0($t0)
    ctx->pc = 0x283d78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283d7c:
    // 0x283d7c: 0x43300000  .word       0x43300000                   # INVALID     $t9, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283d7cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x283D7C raw=0x43300000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283d80:
    // 0x283d80: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x283d80u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x283D80 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283d84:
    // 0x283d84: 0x41800000  .word       0x41800000                   # INVALID     $t4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283d84u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x283D84 raw=0x41800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283d88:
    // 0x283d88: 0xc1c00000  ll          $zero, 0x0($t6)
    ctx->pc = 0x283d88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283d8c:
    // 0x283d8c: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x283d8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283d90:
    // 0x283d90: 0xc1000000  ll          $zero, 0x0($t0)
    ctx->pc = 0x283d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283d94:
    // 0x283d94: 0x43300000  .word       0x43300000                   # INVALID     $t9, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283d94u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x283D94 raw=0x43300000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283d98:
    // 0x283d98: 0x41000000  bc0f        . + 4 + (0x0 << 2)
label_283d9c:
    if (ctx->pc == 0x283D9Cu) {
        ctx->pc = 0x283D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283D98u;
        // 0x283d9c: 0x41800000  .word       0x41800000                   # INVALID     $t4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x283D9C raw=0x41800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x283DA0u;
        goto label_283da0;
    }
    ctx->pc = 0x283D98u;
    {
        const bool branch_taken_0x283d98 = (false);
        ctx->pc = 0x283D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283D98u;
        // 0x283d9c: 0x41800000  .word       0x41800000                   # INVALID     $t4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x283D9C raw=0x41800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x283d98) {
            ctx->pc = 0x283D9Cu;
            goto label_283d9c;
        }
    }
    ctx->pc = 0x283DA0u;
label_283da0:
    // 0x283da0: 0x0  nop
    ctx->pc = 0x283da0u;
    // NOP
label_283da4:
    // 0x283da4: 0x0  nop
    ctx->pc = 0x283da4u;
    // NOP
label_283da8:
    // 0x283da8: 0x1302002c  beq         $t8, $v0, . + 4 + (0x2C << 2)
label_283dac:
    if (ctx->pc == 0x283DACu) {
        ctx->pc = 0x283DB0u;
        goto label_283db0;
    }
    ctx->pc = 0x283DA8u;
    {
        const bool branch_taken_0x283da8 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 2));
        if (branch_taken_0x283da8) {
            ctx->pc = 0x283E5Cu;
            goto label_283e5c;
        }
    }
    ctx->pc = 0x283DB0u;
label_283db0:
    // 0x283db0: 0xc1c00000  ll          $zero, 0x0($t6)
    ctx->pc = 0x283db0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283db4:
    // 0x283db4: 0xc0c00000  ll          $zero, 0x0($a2)
    ctx->pc = 0x283db4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283db8:
    // 0x283db8: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x283db8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283dbc:
    // 0x283dbc: 0x43480000  .word       0x43480000                   # INVALID     $k0, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283dbcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x283DBC raw=0x43480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283dc0:
    // 0x283dc0: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283dc0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x283DC0 raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283dc4:
    // 0x283dc4: 0x42280000  .word       0x42280000                   # INVALID     $s1, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283dc4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x283DC4 raw=0x42280000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283dc8:
    // 0x283dc8: 0xc1f00000  ll          $s0, 0x0($t7)
    ctx->pc = 0x283dc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283dcc:
    // 0x283dcc: 0xc0c00000  ll          $zero, 0x0($a2)
    ctx->pc = 0x283dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283dd0:
    // 0x283dd0: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x283dd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283dd4:
    // 0x283dd4: 0x43470000  .word       0x43470000                   # INVALID     $k0, $a3, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283dd4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x283DD4 raw=0x43470000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283dd8:
    // 0x283dd8: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283dd8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x283DD8 raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283ddc:
    // 0x283ddc: 0x42280000  .word       0x42280000                   # INVALID     $s1, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283ddcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x283DDC raw=0x42280000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283de0:
    // 0x283de0: 0x0  nop
    ctx->pc = 0x283de0u;
    // NOP
label_283de4:
    // 0x283de4: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x283de4u;
    
label_283de8:
    // 0x283de8: 0x2202002d  addi        $v0, $s0, 0x2D
    ctx->pc = 0x283de8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 16), (int32_t)45, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
label_283dec:
    // 0x283dec: 0x0  nop
    ctx->pc = 0x283decu;
    // NOP
label_283df0:
    // 0x283df0: 0xc0e00000  ll          $zero, 0x0($a3)
    ctx->pc = 0x283df0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283df4:
    // 0x283df4: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x283df4u;
    // CACHE instruction (ignored)
label_283df8:
    // 0x283df8: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x283df8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283dfc:
    // 0x283dfc: 0x42e80000  .word       0x42E80000                   # INVALID     $s7, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283dfcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x283DFC raw=0x42E80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283e00:
    // 0x283e00: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x283e00u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_283e04:
    // 0x283e04: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x283e04u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_283e08:
    // 0x283e08: 0xc1a00000  ll          $zero, 0x0($t5)
    ctx->pc = 0x283e08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283e0c:
    // 0x283e0c: 0xc1700000  ll          $s0, 0x0($t3)
    ctx->pc = 0x283e0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283e10:
    // 0x283e10: 0xc1c80000  ll          $t0, 0x0($t6)
    ctx->pc = 0x283e10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283e14:
    // 0x283e14: 0x42200000  .word       0x42200000                   # INVALID     $s1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283e14u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x283E14 raw=0x42200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283e18:
    // 0x283e18: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x283e18u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x283E18 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283e1c:
    // 0x283e1c: 0x42180000  .word       0x42180000                   # INVALID     $s0, $t8, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x283e1cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x283E1C raw=0x42180000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283e20:
    // 0x283e20: 0x0  nop
    ctx->pc = 0x283e20u;
    // NOP
label_283e24:
    // 0x283e24: 0x0  nop
    ctx->pc = 0x283e24u;
    // NOP
label_283e28:
    // 0x283e28: 0x1104002e  beq         $t0, $a0, . + 4 + (0x2E << 2)
label_283e2c:
    if (ctx->pc == 0x283E2Cu) {
        ctx->pc = 0x283E30u;
        goto label_283e30;
    }
    ctx->pc = 0x283E28u;
    {
        const bool branch_taken_0x283e28 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 4));
        if (branch_taken_0x283e28) {
            ctx->pc = 0x283EE4u;
            { ctx->pc = 0x283ee4; return; }
        }
    }
    ctx->pc = 0x283E30u;
label_283e30:
    // 0x283e30: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x283e30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283e34:
    // 0x283e34: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x283e34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283e38:
    // 0x283e38: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x283e38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283e3c:
    // 0x283e3c: 0x430f0000  .word       0x430F0000                   # INVALID     $t8, $t7, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283e3cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x283E3C raw=0x430F0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283e40:
    // 0x283e40: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x283e40u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_283e44:
    // 0x283e44: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x283e44u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_283e48:
    // 0x283e48: 0xc1a00000  ll          $zero, 0x0($t5)
    ctx->pc = 0x283e48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283e4c:
    // 0x283e4c: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x283e4cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x283E4C raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283e50:
    // 0x283e50: 0xc1d80000  ll          $t8, 0x0($t6)
    ctx->pc = 0x283e50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283e54:
    // 0x283e54: 0x42200000  .word       0x42200000                   # INVALID     $s1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283e54u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x283E54 raw=0x42200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283e58:
    // 0x283e58: 0x41880000  .word       0x41880000                   # INVALID     $t4, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283e58u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x283E58 raw=0x41880000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283e5c:
    // 0x283e5c: 0x42180000  .word       0x42180000                   # INVALID     $s0, $t8, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x283e5cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x283E5C raw=0x42180000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283e60:
    // 0x283e60: 0x0  nop
    ctx->pc = 0x283e60u;
    // NOP
label_283e64:
    // 0x283e64: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x283e64u;
    
label_283e68:
    // 0x283e68: 0x2004002f  addi        $a0, $zero, 0x2F
    ctx->pc = 0x283e68u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)47, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_283e6c:
    // 0x283e6c: 0x0  nop
    ctx->pc = 0x283e6cu;
    // NOP
label_283e70:
    // 0x283e70: 0x42ba0000  .word       0x42BA0000                   # INVALID     $s5, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283e70u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x283E70 raw=0x42BA0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283e74:
    // 0x283e74: 0xc0e00000  ll          $zero, 0x0($a3)
    ctx->pc = 0x283e74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283e78:
    // 0x283e78: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x283e78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283e7c:
    // 0x283e7c: 0x432e0000  .word       0x432E0000                   # INVALID     $t9, $t6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283e7cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x283E7C raw=0x432E0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283e80:
    // 0x283e80: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283e80u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x283E80 raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283e84:
    // 0x283e84: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x283e84u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_283e88:
    // 0x283e88: 0xc22c0000  ll          $t4, 0x0($s1)
    ctx->pc = 0x283e88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); SET_GPR_S32(ctx, 12, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283e8c:
    // 0x283e8c: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x283e8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283e90:
    // 0x283e90: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x283e90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283e94:
    // 0x283e94: 0x43080000  .word       0x43080000                   # INVALID     $t8, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283e94u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x283E94 raw=0x43080000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283e98:
    // 0x283e98: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x283e98u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_283e9c:
    // 0x283e9c: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x283e9cu;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_283ea0:
    // 0x283ea0: 0x0  nop
    ctx->pc = 0x283ea0u;
    // NOP
label_283ea4:
    // 0x283ea4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x283ea4u;
    
label_283ea8:
    // 0x283ea8: 0x2b020032  slti        $v0, $t8, 0x32
    ctx->pc = 0x283ea8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)50) ? 1 : 0);
label_283eac:
    // 0x283eac: 0x0  nop
    ctx->pc = 0x283eacu;
    // NOP
    ctx->pc = 0x283eb0u;
    return;
}
