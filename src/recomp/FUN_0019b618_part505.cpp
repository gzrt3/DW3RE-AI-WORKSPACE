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


void FUN_0019b618_part505(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x291798u: goto label_291798;
        case 0x29179cu: goto label_29179c;
        case 0x2917a0u: goto label_2917a0;
        case 0x2917a4u: goto label_2917a4;
        case 0x2917a8u: goto label_2917a8;
        case 0x2917acu: goto label_2917ac;
        case 0x2917b0u: goto label_2917b0;
        case 0x2917b4u: goto label_2917b4;
        case 0x2917b8u: goto label_2917b8;
        case 0x2917bcu: goto label_2917bc;
        case 0x2917c0u: goto label_2917c0;
        case 0x2917c4u: goto label_2917c4;
        case 0x2917c8u: goto label_2917c8;
        case 0x2917ccu: goto label_2917cc;
        case 0x2917d0u: goto label_2917d0;
        case 0x2917d4u: goto label_2917d4;
        case 0x2917d8u: goto label_2917d8;
        case 0x2917dcu: goto label_2917dc;
        case 0x2917e0u: goto label_2917e0;
        case 0x2917e4u: goto label_2917e4;
        case 0x2917e8u: goto label_2917e8;
        case 0x2917ecu: goto label_2917ec;
        case 0x2917f0u: goto label_2917f0;
        case 0x2917f4u: goto label_2917f4;
        case 0x2917f8u: goto label_2917f8;
        case 0x2917fcu: goto label_2917fc;
        case 0x291800u: goto label_291800;
        case 0x291804u: goto label_291804;
        case 0x291808u: goto label_291808;
        case 0x29180cu: goto label_29180c;
        case 0x291810u: goto label_291810;
        case 0x291814u: goto label_291814;
        case 0x291818u: goto label_291818;
        case 0x29181cu: goto label_29181c;
        case 0x291820u: goto label_291820;
        case 0x291824u: goto label_291824;
        case 0x291828u: goto label_291828;
        case 0x29182cu: goto label_29182c;
        case 0x291830u: goto label_291830;
        case 0x291834u: goto label_291834;
        case 0x291838u: goto label_291838;
        case 0x29183cu: goto label_29183c;
        case 0x291840u: goto label_291840;
        case 0x291844u: goto label_291844;
        case 0x291848u: goto label_291848;
        case 0x29184cu: goto label_29184c;
        case 0x291850u: goto label_291850;
        case 0x291854u: goto label_291854;
        case 0x291858u: goto label_291858;
        case 0x29185cu: goto label_29185c;
        case 0x291860u: goto label_291860;
        case 0x291864u: goto label_291864;
        case 0x291868u: goto label_291868;
        case 0x29186cu: goto label_29186c;
        case 0x291870u: goto label_291870;
        case 0x291874u: goto label_291874;
        case 0x291878u: goto label_291878;
        case 0x29187cu: goto label_29187c;
        case 0x291880u: goto label_291880;
        case 0x291884u: goto label_291884;
        case 0x291888u: goto label_291888;
        case 0x29188cu: goto label_29188c;
        case 0x291890u: goto label_291890;
        case 0x291894u: goto label_291894;
        case 0x291898u: goto label_291898;
        case 0x29189cu: goto label_29189c;
        case 0x2918a0u: goto label_2918a0;
        case 0x2918a4u: goto label_2918a4;
        case 0x2918a8u: goto label_2918a8;
        case 0x2918acu: goto label_2918ac;
        case 0x2918b0u: goto label_2918b0;
        case 0x2918b4u: goto label_2918b4;
        case 0x2918b8u: goto label_2918b8;
        case 0x2918bcu: goto label_2918bc;
        case 0x2918c0u: goto label_2918c0;
        case 0x2918c4u: goto label_2918c4;
        case 0x2918c8u: goto label_2918c8;
        case 0x2918ccu: goto label_2918cc;
        case 0x2918d0u: goto label_2918d0;
        case 0x2918d4u: goto label_2918d4;
        case 0x2918d8u: goto label_2918d8;
        case 0x2918dcu: goto label_2918dc;
        case 0x2918e0u: goto label_2918e0;
        case 0x2918e4u: goto label_2918e4;
        case 0x2918e8u: goto label_2918e8;
        case 0x2918ecu: goto label_2918ec;
        case 0x2918f0u: goto label_2918f0;
        case 0x2918f4u: goto label_2918f4;
        case 0x2918f8u: goto label_2918f8;
        case 0x2918fcu: goto label_2918fc;
        case 0x291900u: goto label_291900;
        case 0x291904u: goto label_291904;
        case 0x291908u: goto label_291908;
        case 0x29190cu: goto label_29190c;
        case 0x291910u: goto label_291910;
        case 0x291914u: goto label_291914;
        case 0x291918u: goto label_291918;
        case 0x29191cu: goto label_29191c;
        case 0x291920u: goto label_291920;
        case 0x291924u: goto label_291924;
        case 0x291928u: goto label_291928;
        case 0x29192cu: goto label_29192c;
        case 0x291930u: goto label_291930;
        case 0x291934u: goto label_291934;
        case 0x291938u: goto label_291938;
        case 0x29193cu: goto label_29193c;
        case 0x291940u: goto label_291940;
        case 0x291944u: goto label_291944;
        case 0x291948u: goto label_291948;
        case 0x29194cu: goto label_29194c;
        case 0x291950u: goto label_291950;
        case 0x291954u: goto label_291954;
        case 0x291958u: goto label_291958;
        case 0x29195cu: goto label_29195c;
        case 0x291960u: goto label_291960;
        case 0x291964u: goto label_291964;
        case 0x291968u: goto label_291968;
        case 0x29196cu: goto label_29196c;
        case 0x291970u: goto label_291970;
        case 0x291974u: goto label_291974;
        case 0x291978u: goto label_291978;
        case 0x29197cu: goto label_29197c;
        case 0x291980u: goto label_291980;
        case 0x291984u: goto label_291984;
        case 0x291988u: goto label_291988;
        case 0x29198cu: goto label_29198c;
        case 0x291990u: goto label_291990;
        case 0x291994u: goto label_291994;
        case 0x291998u: goto label_291998;
        case 0x29199cu: goto label_29199c;
        case 0x2919a0u: goto label_2919a0;
        case 0x2919a4u: goto label_2919a4;
        case 0x2919a8u: goto label_2919a8;
        case 0x2919acu: goto label_2919ac;
        case 0x2919b0u: goto label_2919b0;
        case 0x2919b4u: goto label_2919b4;
        case 0x2919b8u: goto label_2919b8;
        case 0x2919bcu: goto label_2919bc;
        case 0x2919c0u: goto label_2919c0;
        case 0x2919c4u: goto label_2919c4;
        case 0x2919c8u: goto label_2919c8;
        case 0x2919ccu: goto label_2919cc;
        case 0x2919d0u: goto label_2919d0;
        case 0x2919d4u: goto label_2919d4;
        case 0x2919d8u: goto label_2919d8;
        case 0x2919dcu: goto label_2919dc;
        case 0x2919e0u: goto label_2919e0;
        case 0x2919e4u: goto label_2919e4;
        case 0x2919e8u: goto label_2919e8;
        case 0x2919ecu: goto label_2919ec;
        case 0x2919f0u: goto label_2919f0;
        case 0x2919f4u: goto label_2919f4;
        case 0x2919f8u: goto label_2919f8;
        case 0x2919fcu: goto label_2919fc;
        case 0x291a00u: goto label_291a00;
        case 0x291a04u: goto label_291a04;
        case 0x291a08u: goto label_291a08;
        case 0x291a0cu: goto label_291a0c;
        case 0x291a10u: goto label_291a10;
        case 0x291a14u: goto label_291a14;
        case 0x291a18u: goto label_291a18;
        case 0x291a1cu: goto label_291a1c;
        case 0x291a20u: goto label_291a20;
        case 0x291a24u: goto label_291a24;
        case 0x291a28u: goto label_291a28;
        case 0x291a2cu: goto label_291a2c;
        case 0x291a30u: goto label_291a30;
        case 0x291a34u: goto label_291a34;
        case 0x291a38u: goto label_291a38;
        case 0x291a3cu: goto label_291a3c;
        case 0x291a40u: goto label_291a40;
        case 0x291a44u: goto label_291a44;
        case 0x291a48u: goto label_291a48;
        case 0x291a4cu: goto label_291a4c;
        case 0x291a50u: goto label_291a50;
        case 0x291a54u: goto label_291a54;
        case 0x291a58u: goto label_291a58;
        case 0x291a5cu: goto label_291a5c;
        case 0x291a60u: goto label_291a60;
        case 0x291a64u: goto label_291a64;
        case 0x291a68u: goto label_291a68;
        case 0x291a6cu: goto label_291a6c;
        case 0x291a70u: goto label_291a70;
        case 0x291a74u: goto label_291a74;
        case 0x291a78u: goto label_291a78;
        case 0x291a7cu: goto label_291a7c;
        case 0x291a80u: goto label_291a80;
        case 0x291a84u: goto label_291a84;
        case 0x291a88u: goto label_291a88;
        case 0x291a8cu: goto label_291a8c;
        case 0x291a90u: goto label_291a90;
        case 0x291a94u: goto label_291a94;
        case 0x291a98u: goto label_291a98;
        case 0x291a9cu: goto label_291a9c;
        case 0x291aa0u: goto label_291aa0;
        case 0x291aa4u: goto label_291aa4;
        case 0x291aa8u: goto label_291aa8;
        case 0x291aacu: goto label_291aac;
        case 0x291ab0u: goto label_291ab0;
        case 0x291ab4u: goto label_291ab4;
        case 0x291ab8u: goto label_291ab8;
        case 0x291abcu: goto label_291abc;
        case 0x291ac0u: goto label_291ac0;
        case 0x291ac4u: goto label_291ac4;
        case 0x291ac8u: goto label_291ac8;
        case 0x291accu: goto label_291acc;
        case 0x291ad0u: goto label_291ad0;
        case 0x291ad4u: goto label_291ad4;
        case 0x291ad8u: goto label_291ad8;
        case 0x291adcu: goto label_291adc;
        case 0x291ae0u: goto label_291ae0;
        case 0x291ae4u: goto label_291ae4;
        case 0x291ae8u: goto label_291ae8;
        case 0x291aecu: goto label_291aec;
        case 0x291af0u: goto label_291af0;
        case 0x291af4u: goto label_291af4;
        case 0x291af8u: goto label_291af8;
        case 0x291afcu: goto label_291afc;
        case 0x291b00u: goto label_291b00;
        case 0x291b04u: goto label_291b04;
        case 0x291b08u: goto label_291b08;
        case 0x291b0cu: goto label_291b0c;
        case 0x291b10u: goto label_291b10;
        case 0x291b14u: goto label_291b14;
        case 0x291b18u: goto label_291b18;
        case 0x291b1cu: goto label_291b1c;
        case 0x291b20u: goto label_291b20;
        case 0x291b24u: goto label_291b24;
        case 0x291b28u: goto label_291b28;
        case 0x291b2cu: goto label_291b2c;
        case 0x291b30u: goto label_291b30;
        case 0x291b34u: goto label_291b34;
        case 0x291b38u: goto label_291b38;
        case 0x291b3cu: goto label_291b3c;
        case 0x291b40u: goto label_291b40;
        case 0x291b44u: goto label_291b44;
        case 0x291b48u: goto label_291b48;
        case 0x291b4cu: goto label_291b4c;
        case 0x291b50u: goto label_291b50;
        case 0x291b54u: goto label_291b54;
        case 0x291b58u: goto label_291b58;
        case 0x291b5cu: goto label_291b5c;
        case 0x291b60u: goto label_291b60;
        case 0x291b64u: goto label_291b64;
        case 0x291b68u: goto label_291b68;
        case 0x291b6cu: goto label_291b6c;
        case 0x291b70u: goto label_291b70;
        case 0x291b74u: goto label_291b74;
        case 0x291b78u: goto label_291b78;
        case 0x291b7cu: goto label_291b7c;
        case 0x291b80u: goto label_291b80;
        case 0x291b84u: goto label_291b84;
        case 0x291b88u: goto label_291b88;
        case 0x291b8cu: goto label_291b8c;
        case 0x291b90u: goto label_291b90;
        case 0x291b94u: goto label_291b94;
        case 0x291b98u: goto label_291b98;
        case 0x291b9cu: goto label_291b9c;
        case 0x291ba0u: goto label_291ba0;
        case 0x291ba4u: goto label_291ba4;
        case 0x291ba8u: goto label_291ba8;
        case 0x291bacu: goto label_291bac;
        case 0x291bb0u: goto label_291bb0;
        case 0x291bb4u: goto label_291bb4;
        case 0x291bb8u: goto label_291bb8;
        case 0x291bbcu: goto label_291bbc;
        case 0x291bc0u: goto label_291bc0;
        case 0x291bc4u: goto label_291bc4;
        case 0x291bc8u: goto label_291bc8;
        case 0x291bccu: goto label_291bcc;
        case 0x291bd0u: goto label_291bd0;
        case 0x291bd4u: goto label_291bd4;
        case 0x291bd8u: goto label_291bd8;
        case 0x291bdcu: goto label_291bdc;
        case 0x291be0u: goto label_291be0;
        case 0x291be4u: goto label_291be4;
        case 0x291be8u: goto label_291be8;
        case 0x291becu: goto label_291bec;
        case 0x291bf0u: goto label_291bf0;
        case 0x291bf4u: goto label_291bf4;
        case 0x291bf8u: goto label_291bf8;
        case 0x291bfcu: goto label_291bfc;
        case 0x291c00u: goto label_291c00;
        case 0x291c04u: goto label_291c04;
        case 0x291c08u: goto label_291c08;
        case 0x291c0cu: goto label_291c0c;
        case 0x291c10u: goto label_291c10;
        case 0x291c14u: goto label_291c14;
        case 0x291c18u: goto label_291c18;
        case 0x291c1cu: goto label_291c1c;
        case 0x291c20u: goto label_291c20;
        case 0x291c24u: goto label_291c24;
        case 0x291c28u: goto label_291c28;
        case 0x291c2cu: goto label_291c2c;
        case 0x291c30u: goto label_291c30;
        case 0x291c34u: goto label_291c34;
        case 0x291c38u: goto label_291c38;
        case 0x291c3cu: goto label_291c3c;
        case 0x291c40u: goto label_291c40;
        case 0x291c44u: goto label_291c44;
        case 0x291c48u: goto label_291c48;
        case 0x291c4cu: goto label_291c4c;
        case 0x291c50u: goto label_291c50;
        case 0x291c54u: goto label_291c54;
        case 0x291c58u: goto label_291c58;
        case 0x291c5cu: goto label_291c5c;
        case 0x291c60u: goto label_291c60;
        case 0x291c64u: goto label_291c64;
        case 0x291c68u: goto label_291c68;
        case 0x291c6cu: goto label_291c6c;
        case 0x291c70u: goto label_291c70;
        case 0x291c74u: goto label_291c74;
        case 0x291c78u: goto label_291c78;
        case 0x291c7cu: goto label_291c7c;
        case 0x291c80u: goto label_291c80;
        case 0x291c84u: goto label_291c84;
        case 0x291c88u: goto label_291c88;
        case 0x291c8cu: goto label_291c8c;
        case 0x291c90u: goto label_291c90;
        case 0x291c94u: goto label_291c94;
        case 0x291c98u: goto label_291c98;
        case 0x291c9cu: goto label_291c9c;
        case 0x291ca0u: goto label_291ca0;
        case 0x291ca4u: goto label_291ca4;
        case 0x291ca8u: goto label_291ca8;
        case 0x291cacu: goto label_291cac;
        case 0x291cb0u: goto label_291cb0;
        case 0x291cb4u: goto label_291cb4;
        case 0x291cb8u: goto label_291cb8;
        case 0x291cbcu: goto label_291cbc;
        case 0x291cc0u: goto label_291cc0;
        case 0x291cc4u: goto label_291cc4;
        case 0x291cc8u: goto label_291cc8;
        case 0x291cccu: goto label_291ccc;
        case 0x291cd0u: goto label_291cd0;
        case 0x291cd4u: goto label_291cd4;
        case 0x291cd8u: goto label_291cd8;
        case 0x291cdcu: goto label_291cdc;
        case 0x291ce0u: goto label_291ce0;
        case 0x291ce4u: goto label_291ce4;
        case 0x291ce8u: goto label_291ce8;
        case 0x291cecu: goto label_291cec;
        case 0x291cf0u: goto label_291cf0;
        case 0x291cf4u: goto label_291cf4;
        case 0x291cf8u: goto label_291cf8;
        case 0x291cfcu: goto label_291cfc;
        case 0x291d00u: goto label_291d00;
        case 0x291d04u: goto label_291d04;
        case 0x291d08u: goto label_291d08;
        case 0x291d0cu: goto label_291d0c;
        case 0x291d10u: goto label_291d10;
        case 0x291d14u: goto label_291d14;
        case 0x291d18u: goto label_291d18;
        case 0x291d1cu: goto label_291d1c;
        case 0x291d20u: goto label_291d20;
        case 0x291d24u: goto label_291d24;
        case 0x291d28u: goto label_291d28;
        case 0x291d2cu: goto label_291d2c;
        case 0x291d30u: goto label_291d30;
        case 0x291d34u: goto label_291d34;
        case 0x291d38u: goto label_291d38;
        case 0x291d3cu: goto label_291d3c;
        case 0x291d40u: goto label_291d40;
        case 0x291d44u: goto label_291d44;
        case 0x291d48u: goto label_291d48;
        case 0x291d4cu: goto label_291d4c;
        case 0x291d50u: goto label_291d50;
        case 0x291d54u: goto label_291d54;
        case 0x291d58u: goto label_291d58;
        case 0x291d5cu: goto label_291d5c;
        case 0x291d60u: goto label_291d60;
        case 0x291d64u: goto label_291d64;
        case 0x291d68u: goto label_291d68;
        case 0x291d6cu: goto label_291d6c;
        case 0x291d70u: goto label_291d70;
        case 0x291d74u: goto label_291d74;
        case 0x291d78u: goto label_291d78;
        case 0x291d7cu: goto label_291d7c;
        case 0x291d80u: goto label_291d80;
        case 0x291d84u: goto label_291d84;
        case 0x291d88u: goto label_291d88;
        case 0x291d8cu: goto label_291d8c;
        case 0x291d90u: goto label_291d90;
        case 0x291d94u: goto label_291d94;
        case 0x291d98u: goto label_291d98;
        case 0x291d9cu: goto label_291d9c;
        case 0x291da0u: goto label_291da0;
        case 0x291da4u: goto label_291da4;
        case 0x291da8u: goto label_291da8;
        case 0x291dacu: goto label_291dac;
        case 0x291db0u: goto label_291db0;
        case 0x291db4u: goto label_291db4;
        case 0x291db8u: goto label_291db8;
        case 0x291dbcu: goto label_291dbc;
        case 0x291dc0u: goto label_291dc0;
        case 0x291dc4u: goto label_291dc4;
        case 0x291dc8u: goto label_291dc8;
        case 0x291dccu: goto label_291dcc;
        case 0x291dd0u: goto label_291dd0;
        case 0x291dd4u: goto label_291dd4;
        case 0x291dd8u: goto label_291dd8;
        case 0x291ddcu: goto label_291ddc;
        case 0x291de0u: goto label_291de0;
        case 0x291de4u: goto label_291de4;
        case 0x291de8u: goto label_291de8;
        case 0x291decu: goto label_291dec;
        case 0x291df0u: goto label_291df0;
        case 0x291df4u: goto label_291df4;
        case 0x291df8u: goto label_291df8;
        case 0x291dfcu: goto label_291dfc;
        case 0x291e00u: goto label_291e00;
        case 0x291e04u: goto label_291e04;
        case 0x291e08u: goto label_291e08;
        case 0x291e0cu: goto label_291e0c;
        case 0x291e10u: goto label_291e10;
        case 0x291e14u: goto label_291e14;
        case 0x291e18u: goto label_291e18;
        case 0x291e1cu: goto label_291e1c;
        case 0x291e20u: goto label_291e20;
        case 0x291e24u: goto label_291e24;
        case 0x291e28u: goto label_291e28;
        case 0x291e2cu: goto label_291e2c;
        case 0x291e30u: goto label_291e30;
        case 0x291e34u: goto label_291e34;
        case 0x291e38u: goto label_291e38;
        case 0x291e3cu: goto label_291e3c;
        case 0x291e40u: goto label_291e40;
        case 0x291e44u: goto label_291e44;
        case 0x291e48u: goto label_291e48;
        case 0x291e4cu: goto label_291e4c;
        case 0x291e50u: goto label_291e50;
        case 0x291e54u: goto label_291e54;
        case 0x291e58u: goto label_291e58;
        case 0x291e5cu: goto label_291e5c;
        case 0x291e60u: goto label_291e60;
        case 0x291e64u: goto label_291e64;
        case 0x291e68u: goto label_291e68;
        case 0x291e6cu: goto label_291e6c;
        case 0x291e70u: goto label_291e70;
        case 0x291e74u: goto label_291e74;
        case 0x291e78u: goto label_291e78;
        case 0x291e7cu: goto label_291e7c;
        case 0x291e80u: goto label_291e80;
        case 0x291e84u: goto label_291e84;
        case 0x291e88u: goto label_291e88;
        case 0x291e8cu: goto label_291e8c;
        case 0x291e90u: goto label_291e90;
        case 0x291e94u: goto label_291e94;
        case 0x291e98u: goto label_291e98;
        case 0x291e9cu: goto label_291e9c;
        case 0x291ea0u: goto label_291ea0;
        case 0x291ea4u: goto label_291ea4;
        case 0x291ea8u: goto label_291ea8;
        case 0x291eacu: goto label_291eac;
        case 0x291eb0u: goto label_291eb0;
        case 0x291eb4u: goto label_291eb4;
        case 0x291eb8u: goto label_291eb8;
        case 0x291ebcu: goto label_291ebc;
        case 0x291ec0u: goto label_291ec0;
        case 0x291ec4u: goto label_291ec4;
        case 0x291ec8u: goto label_291ec8;
        case 0x291eccu: goto label_291ecc;
        case 0x291ed0u: goto label_291ed0;
        case 0x291ed4u: goto label_291ed4;
        case 0x291ed8u: goto label_291ed8;
        case 0x291edcu: goto label_291edc;
        case 0x291ee0u: goto label_291ee0;
        case 0x291ee4u: goto label_291ee4;
        case 0x291ee8u: goto label_291ee8;
        case 0x291eecu: goto label_291eec;
        case 0x291ef0u: goto label_291ef0;
        case 0x291ef4u: goto label_291ef4;
        case 0x291ef8u: goto label_291ef8;
        case 0x291efcu: goto label_291efc;
        case 0x291f00u: goto label_291f00;
        case 0x291f04u: goto label_291f04;
        case 0x291f08u: goto label_291f08;
        case 0x291f0cu: goto label_291f0c;
        case 0x291f10u: goto label_291f10;
        case 0x291f14u: goto label_291f14;
        case 0x291f18u: goto label_291f18;
        case 0x291f1cu: goto label_291f1c;
        case 0x291f20u: goto label_291f20;
        case 0x291f24u: goto label_291f24;
        case 0x291f28u: goto label_291f28;
        case 0x291f2cu: goto label_291f2c;
        case 0x291f30u: goto label_291f30;
        case 0x291f34u: goto label_291f34;
        case 0x291f38u: goto label_291f38;
        case 0x291f3cu: goto label_291f3c;
        case 0x291f40u: goto label_291f40;
        case 0x291f44u: goto label_291f44;
        case 0x291f48u: goto label_291f48;
        case 0x291f4cu: goto label_291f4c;
        case 0x291f50u: goto label_291f50;
        case 0x291f54u: goto label_291f54;
        case 0x291f58u: goto label_291f58;
        case 0x291f5cu: goto label_291f5c;
        case 0x291f60u: goto label_291f60;
        case 0x291f64u: goto label_291f64;
        default: return;
    }

label_291798:
    // 0x291798: 0x4d2f0  tge         $zero, $a0, 843
    ctx->pc = 0x291798u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_29179c:
    // 0x29179c: 0x0  nop
    ctx->pc = 0x29179cu;
    // NOP
label_2917a0:
    // 0x2917a0: 0x57b6  tne         $zero, $zero, 350
    ctx->pc = 0x2917a0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2917a4:
    // 0x2917a4: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x2917a4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2917a8:
    // 0x2917a8: 0x9b38  dsll        $s3, $zero, 12
    ctx->pc = 0x2917a8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) << 12);
label_2917ac:
    // 0x2917ac: 0x0  nop
    ctx->pc = 0x2917acu;
    // NOP
label_2917b0:
    // 0x2917b0: 0x57ca  .word       0x000057CA                   # movz        $t2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2917b0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 0));
label_2917b4:
    // 0x2917b4: 0x9a  .word       0x0000009A                   # div         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2917b4u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2917b8:
    // 0x2917b8: 0x4cf40  sll         $t9, $a0, 29
    ctx->pc = 0x2917b8u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 4), 29));
label_2917bc:
    // 0x2917bc: 0x0  nop
    ctx->pc = 0x2917bcu;
    // NOP
label_2917c0:
    // 0x2917c0: 0x5864  .word       0x00005864                   # and         $t3, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2917c0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2917c4:
    // 0x2917c4: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2917c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2917C4 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2917c8:
    // 0x2917c8: 0xa718  .word       0x0000A718                   # mult        $s4, $zero, $zero # 00000700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2917c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
label_2917cc:
    // 0x2917cc: 0x0  nop
    ctx->pc = 0x2917ccu;
    // NOP
label_2917d0:
    // 0x2917d0: 0x5879  .word       0x00005879                   # INVALID     $zero, $zero, 0x5879 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2917d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2917D0 raw=0x00005879"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2917d4:
    // 0x2917d4: 0xa1  .word       0x000000A1                   # addu        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2917d4u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2917d8:
    // 0x2917d8: 0x50680  sll         $zero, $a1, 26
    ctx->pc = 0x2917d8u;
    
label_2917dc:
    // 0x2917dc: 0x0  nop
    ctx->pc = 0x2917dcu;
    // NOP
label_2917e0:
    // 0x2917e0: 0x591a  .word       0x0000591A                   # div         $t3, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2917e0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2917e4:
    // 0x2917e4: 0x13  mtlo        $zero
    ctx->pc = 0x2917e4u;
    ctx->lo = GPR_U64(ctx, 0);
label_2917e8:
    // 0x2917e8: 0x95ac  .word       0x000095AC                   # dadd        $s2, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2917e8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, r); }
label_2917ec:
    // 0x2917ec: 0x0  nop
    ctx->pc = 0x2917ecu;
    // NOP
label_2917f0:
    // 0x2917f0: 0x592d  .word       0x0000592D                   # daddu       $t3, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2917f0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2917f4:
    // 0x2917f4: 0x48  .word       0x00000048                   # jr          $zero # 00000040 <InstrIdType: CPU_SPECIAL>
label_2917f8:
    if (ctx->pc == 0x2917F8u) {
        ctx->pc = 0x2917F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2917F4u;
        // 0x2917f8: 0x23f20  .word       0x00023F20                   # add         $a3, $zero, $v0 # 00000700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2917FCu;
        goto label_2917fc;
    }
    ctx->pc = 0x2917F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2917F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2917F4u;
        // 0x2917f8: 0x23f20  .word       0x00023F20                   # add         $a3, $zero, $v0 # 00000700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2917F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2917FCu;
label_2917fc:
    // 0x2917fc: 0x0  nop
    ctx->pc = 0x2917fcu;
    // NOP
label_291800:
    // 0x291800: 0x5975  .word       0x00005975                   # INVALID     $zero, $zero, 0x5975 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291800u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x291800 raw=0x00005975"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291804:
    // 0x291804: 0x4e  .word       0x0000004E                   # INVALID     $zero, $zero, 0x4E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291804u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x291804 raw=0x0000004E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291808:
    // 0x291808: 0x26e20  .word       0x00026E20                   # add         $t5, $zero, $v0 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291808u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_29180c:
    // 0x29180c: 0x0  nop
    ctx->pc = 0x29180cu;
    // NOP
label_291810:
    // 0x291810: 0x59c3  sra         $t3, $zero, 7
    ctx->pc = 0x291810u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 0), 7));
label_291814:
    // 0x291814: 0x56  .word       0x00000056                   # dsrlv       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291814u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_291818:
    // 0x291818: 0x2acb0  tge         $zero, $v0, 690
    ctx->pc = 0x291818u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_29181c:
    // 0x29181c: 0x0  nop
    ctx->pc = 0x29181cu;
    // NOP
label_291820:
    // 0x291820: 0x5a19  .word       0x00005A19                   # multu       $zero, $zero # 00005A00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291820u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_291824:
    // 0x291824: 0x51  .word       0x00000051                   # mthi        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291824u;
    ctx->hi = GPR_U64(ctx, 0);
label_291828:
    // 0x291828: 0x280b0  tge         $zero, $v0, 514
    ctx->pc = 0x291828u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_29182c:
    // 0x29182c: 0x0  nop
    ctx->pc = 0x29182cu;
    // NOP
label_291830:
    // 0x291830: 0x5a6a  .word       0x00005A6A                   # slt         $t3, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291830u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_291834:
    // 0x291834: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x291834u;
    
label_291838:
    // 0x291838: 0x3fcd0  .word       0x0003FCD0                   # mfhi        $ra # 000304C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291838u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_29183c:
    // 0x29183c: 0x0  nop
    ctx->pc = 0x29183cu;
    // NOP
label_291840:
    // 0x291840: 0x5aea  .word       0x00005AEA                   # slt         $t3, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291840u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_291844:
    // 0x291844: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x291844u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_291848:
    // 0x291848: 0x9a84  .word       0x00009A84                   # sllv        $s3, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291848u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29184c:
    // 0x29184c: 0x0  nop
    ctx->pc = 0x29184cu;
    // NOP
label_291850:
    // 0x291850: 0x5afe  dsrl32      $t3, $zero, 11
    ctx->pc = 0x291850u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) >> (32 + 11));
label_291854:
    // 0x291854: 0x82  srl         $zero, $zero, 2
    ctx->pc = 0x291854u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 2));
label_291858:
    // 0x291858: 0x40e30  tge         $zero, $a0, 56
    ctx->pc = 0x291858u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_29185c:
    // 0x29185c: 0x0  nop
    ctx->pc = 0x29185cu;
    // NOP
label_291860:
    // 0x291860: 0x5b80  sll         $t3, $zero, 14
    ctx->pc = 0x291860u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_291864:
    // 0x291864: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291864u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x291864 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291868:
    // 0x291868: 0xa038  dsll        $s4, $zero, 0
    ctx->pc = 0x291868u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) << 0);
label_29186c:
    // 0x29186c: 0x0  nop
    ctx->pc = 0x29186cu;
    // NOP
label_291870:
    // 0x291870: 0x5b95  .word       0x00005B95                   # INVALID     $zero, $zero, 0x5B95 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291870u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x291870 raw=0x00005B95"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291874:
    // 0x291874: 0x85  .word       0x00000085                   # INVALID     $zero, $zero, 0x85 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291874u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x291874 raw=0x00000085"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291878:
    // 0x291878: 0x42290  .word       0x00042290                   # mfhi        $a0 # 00040280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291878u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_29187c:
    // 0x29187c: 0x0  nop
    ctx->pc = 0x29187cu;
    // NOP
label_291880:
    // 0x291880: 0x5c1a  .word       0x00005C1A                   # div         $t3, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291880u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_291884:
    // 0x291884: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x291884u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_291888:
    // 0x291888: 0x9dcc  syscall     631
    ctx->pc = 0x291888u;
    ctx->pc = 0x29188Cu;
runtime->handleSyscall(rdram, ctx, 0x277u);
label_29188c:
    // 0x29188c: 0x0  nop
    ctx->pc = 0x29188cu;
    // NOP
label_291890:
    // 0x291890: 0x5c2e  .word       0x00005C2E                   # dsub        $t3, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291890u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 11, r); }
label_291894:
    // 0x291894: 0x98  .word       0x00000098                   # mult        $zero, $zero, $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x291894u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_291898:
    // 0x291898: 0x4b900  sll         $s7, $a0, 4
    ctx->pc = 0x291898u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_29189c:
    // 0x29189c: 0x0  nop
    ctx->pc = 0x29189cu;
    // NOP
label_2918a0:
    // 0x2918a0: 0x5cc6  .word       0x00005CC6                   # srlv        $t3, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2918a0u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2918a4:
    // 0x2918a4: 0x13  mtlo        $zero
    ctx->pc = 0x2918a4u;
    ctx->lo = GPR_U64(ctx, 0);
label_2918a8:
    // 0x2918a8: 0x9570  tge         $zero, $zero, 597
    ctx->pc = 0x2918a8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2918ac:
    // 0x2918ac: 0x0  nop
    ctx->pc = 0x2918acu;
    // NOP
label_2918b0:
    // 0x2918b0: 0x5cd9  .word       0x00005CD9                   # multu       $zero, $zero # 00005CC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2918b0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_2918b4:
    // 0x2918b4: 0x96  .word       0x00000096                   # dsrlv       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2918b4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2918b8:
    // 0x2918b8: 0x4aed0  .word       0x0004AED0                   # mfhi        $s5 # 000406C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2918b8u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_2918bc:
    // 0x2918bc: 0x0  nop
    ctx->pc = 0x2918bcu;
    // NOP
label_2918c0:
    // 0x2918c0: 0x5d6f  .word       0x00005D6F                   # dsubu       $t3, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2918c0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2918c4:
    // 0x2918c4: 0x13  mtlo        $zero
    ctx->pc = 0x2918c4u;
    ctx->lo = GPR_U64(ctx, 0);
label_2918c8:
    // 0x2918c8: 0x96c4  .word       0x000096C4                   # sllv        $s2, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2918c8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2918cc:
    // 0x2918cc: 0x0  nop
    ctx->pc = 0x2918ccu;
    // NOP
label_2918d0:
    // 0x2918d0: 0x5d82  srl         $t3, $zero, 22
    ctx->pc = 0x2918d0u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 0), 22));
label_2918d4:
    // 0x2918d4: 0x97  .word       0x00000097                   # dsrav       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2918d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2918d8:
    // 0x2918d8: 0x4b3a0  .word       0x0004B3A0                   # add         $s6, $zero, $a0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2918d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_2918dc:
    // 0x2918dc: 0x0  nop
    ctx->pc = 0x2918dcu;
    // NOP
label_2918e0:
    // 0x2918e0: 0x5e19  .word       0x00005E19                   # multu       $zero, $zero # 00005E00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2918e0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_2918e4:
    // 0x2918e4: 0x13  mtlo        $zero
    ctx->pc = 0x2918e4u;
    ctx->lo = GPR_U64(ctx, 0);
label_2918e8:
    // 0x2918e8: 0x95c0  sll         $s2, $zero, 23
    ctx->pc = 0x2918e8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_2918ec:
    // 0x2918ec: 0x0  nop
    ctx->pc = 0x2918ecu;
    // NOP
label_2918f0:
    // 0x2918f0: 0x5e2c  .word       0x00005E2C                   # dadd        $t3, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2918f0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 11, r); }
label_2918f4:
    // 0x2918f4: 0xa0  .word       0x000000A0                   # add         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2918f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2918f8:
    // 0x2918f8: 0x4ffb0  tge         $zero, $a0, 1022
    ctx->pc = 0x2918f8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_2918fc:
    // 0x2918fc: 0x0  nop
    ctx->pc = 0x2918fcu;
    // NOP
label_291900:
    // 0x291900: 0x5ecc  syscall     379
    ctx->pc = 0x291900u;
    ctx->pc = 0x291904u;
runtime->handleSyscall(rdram, ctx, 0x17Bu);
label_291904:
    // 0x291904: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291904u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x291904 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291908:
    // 0x291908: 0xa3f8  dsll        $s4, $zero, 15
    ctx->pc = 0x291908u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) << 15);
label_29190c:
    // 0x29190c: 0x0  nop
    ctx->pc = 0x29190cu;
    // NOP
label_291910:
    // 0x291910: 0x5ee1  .word       0x00005EE1                   # addu        $t3, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291910u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_291914:
    // 0x291914: 0x9b  .word       0x0000009B                   # divu        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291914u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291918:
    // 0x291918: 0x4d020  add         $k0, $zero, $a0
    ctx->pc = 0x291918u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_29191c:
    // 0x29191c: 0x0  nop
    ctx->pc = 0x29191cu;
    // NOP
label_291920:
    // 0x291920: 0x5f7c  dsll32      $t3, $zero, 29
    ctx->pc = 0x291920u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) << (32 + 29));
label_291924:
    // 0x291924: 0x13  mtlo        $zero
    ctx->pc = 0x291924u;
    ctx->lo = GPR_U64(ctx, 0);
label_291928:
    // 0x291928: 0x964c  syscall     601
    ctx->pc = 0x291928u;
    ctx->pc = 0x29192Cu;
runtime->handleSyscall(rdram, ctx, 0x259u);
label_29192c:
    // 0x29192c: 0x0  nop
    ctx->pc = 0x29192cu;
    // NOP
label_291930:
    // 0x291930: 0x5f8f  .word       0x00005F8F                   # sync.p # 00005800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291930u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_291934:
    // 0x291934: 0x86  .word       0x00000086                   # srlv        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291934u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_291938:
    // 0x291938: 0x42b40  sll         $a1, $a0, 13
    ctx->pc = 0x291938u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 13));
label_29193c:
    // 0x29193c: 0x0  nop
    ctx->pc = 0x29193cu;
    // NOP
label_291940:
    // 0x291940: 0x6015  .word       0x00006015                   # INVALID     $zero, $zero, 0x6015 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291940u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x291940 raw=0x00006015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291944:
    // 0x291944: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291944u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x291944 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291948:
    // 0x291948: 0xa3f8  dsll        $s4, $zero, 15
    ctx->pc = 0x291948u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) << 15);
label_29194c:
    // 0x29194c: 0x0  nop
    ctx->pc = 0x29194cu;
    // NOP
label_291950:
    // 0x291950: 0x602a  slt         $t4, $zero, $zero
    ctx->pc = 0x291950u;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_291954:
    // 0x291954: 0x9d  .word       0x0000009D                   # dmultu      $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291954u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x291954 raw=0x0000009D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291958:
    // 0x291958: 0x4e2c0  sll         $gp, $a0, 11
    ctx->pc = 0x291958u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 4), 11));
label_29195c:
    // 0x29195c: 0x0  nop
    ctx->pc = 0x29195cu;
    // NOP
label_291960:
    // 0x291960: 0x60c7  .word       0x000060C7                   # srav        $t4, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291960u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_291964:
    // 0x291964: 0x13  mtlo        $zero
    ctx->pc = 0x291964u;
    ctx->lo = GPR_U64(ctx, 0);
label_291968:
    // 0x291968: 0x9304  .word       0x00009304                   # sllv        $s2, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291968u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29196c:
    // 0x29196c: 0x0  nop
    ctx->pc = 0x29196cu;
    // NOP
label_291970:
    // 0x291970: 0x60da  .word       0x000060DA                   # div         $t4, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291970u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_291974:
    // 0x291974: 0x94  .word       0x00000094                   # dsllv       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291974u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_291978:
    // 0x291978: 0x499e0  .word       0x000499E0                   # add         $s3, $zero, $a0 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291978u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_29197c:
    // 0x29197c: 0x0  nop
    ctx->pc = 0x29197cu;
    // NOP
label_291980:
    // 0x291980: 0x616e  .word       0x0000616E                   # dsub        $t4, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291980u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_291984:
    // 0x291984: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x291984u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_291988:
    // 0x291988: 0x98a4  .word       0x000098A4                   # and         $s3, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291988u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29198c:
    // 0x29198c: 0x0  nop
    ctx->pc = 0x29198cu;
    // NOP
label_291990:
    // 0x291990: 0x6182  srl         $t4, $zero, 6
    ctx->pc = 0x291990u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 0), 6));
label_291994:
    // 0x291994: 0xa0  .word       0x000000A0                   # add         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291994u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_291998:
    // 0x291998: 0x4fce0  .word       0x0004FCE0                   # add         $ra, $zero, $a0 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291998u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_29199c:
    // 0x29199c: 0x0  nop
    ctx->pc = 0x29199cu;
    // NOP
label_2919a0:
    // 0x2919a0: 0x6222  .word       0x00006222                   # neg         $t4, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2919a0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
label_2919a4:
    // 0x2919a4: 0x13  mtlo        $zero
    ctx->pc = 0x2919a4u;
    ctx->lo = GPR_U64(ctx, 0);
label_2919a8:
    // 0x2919a8: 0x9728  .word       0x00009728                   # mfsa        $s2 # 00000700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2919a8u;
    SET_GPR_U32(ctx, 18, ctx->sa);
label_2919ac:
    // 0x2919ac: 0x0  nop
    ctx->pc = 0x2919acu;
    // NOP
label_2919b0:
    // 0x2919b0: 0x6235  .word       0x00006235                   # INVALID     $zero, $zero, 0x6235 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2919b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2919B0 raw=0x00006235"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2919b4:
    // 0x2919b4: 0xa9  .word       0x000000A9                   # mtsa        $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2919b4u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2919b8:
    // 0x2919b8: 0x540b0  tge         $zero, $a1, 258
    ctx->pc = 0x2919b8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 5)) { runtime->handleTrap(rdram, ctx); }
label_2919bc:
    // 0x2919bc: 0x0  nop
    ctx->pc = 0x2919bcu;
    // NOP
label_2919c0:
    // 0x2919c0: 0x62de  .word       0x000062DE                   # ddiv        $t4, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2919c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2919C0 raw=0x000062DE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2919c4:
    // 0x2919c4: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x2919c4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2919c8:
    // 0x2919c8: 0x98b8  dsll        $s3, $zero, 2
    ctx->pc = 0x2919c8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) << 2);
label_2919cc:
    // 0x2919cc: 0x0  nop
    ctx->pc = 0x2919ccu;
    // NOP
label_2919d0:
    // 0x2919d0: 0x62f2  tlt         $zero, $zero, 395
    ctx->pc = 0x2919d0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2919d4:
    // 0x2919d4: 0xa8  .word       0x000000A8                   # mfsa        $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2919d4u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_2919d8:
    // 0x2919d8: 0x53f30  tge         $zero, $a1, 252
    ctx->pc = 0x2919d8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 5)) { runtime->handleTrap(rdram, ctx); }
label_2919dc:
    // 0x2919dc: 0x0  nop
    ctx->pc = 0x2919dcu;
    // NOP
label_2919e0:
    // 0x2919e0: 0x639a  .word       0x0000639A                   # div         $t4, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2919e0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2919e4:
    // 0x2919e4: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x2919e4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2919e8:
    // 0x2919e8: 0x9840  sll         $s3, $zero, 1
    ctx->pc = 0x2919e8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_2919ec:
    // 0x2919ec: 0x0  nop
    ctx->pc = 0x2919ecu;
    // NOP
label_2919f0:
    // 0x2919f0: 0x63ae  .word       0x000063AE                   # dsub        $t4, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2919f0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_2919f4:
    // 0x2919f4: 0x90  .word       0x00000090                   # mfhi        $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2919f4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2919f8:
    // 0x2919f8: 0x47fa0  .word       0x00047FA0                   # add         $t7, $zero, $a0 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2919f8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_2919fc:
    // 0x2919fc: 0x0  nop
    ctx->pc = 0x2919fcu;
    // NOP
label_291a00:
    // 0x291a00: 0x643e  dsrl32      $t4, $zero, 16
    ctx->pc = 0x291a00u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) >> (32 + 16));
label_291a04:
    // 0x291a04: 0x13  mtlo        $zero
    ctx->pc = 0x291a04u;
    ctx->lo = GPR_U64(ctx, 0);
label_291a08:
    // 0x291a08: 0x96d8  .word       0x000096D8                   # mult        $s2, $zero, $zero # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x291a08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_291a0c:
    // 0x291a0c: 0x0  nop
    ctx->pc = 0x291a0cu;
    // NOP
label_291a10:
    // 0x291a10: 0x6451  .word       0x00006451                   # mthi        $zero # 00006440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291a10u;
    ctx->hi = GPR_U64(ctx, 0);
label_291a14:
    // 0x291a14: 0x91  .word       0x00000091                   # mthi        $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291a14u;
    ctx->hi = GPR_U64(ctx, 0);
label_291a18:
    // 0x291a18: 0x48080  sll         $s0, $a0, 2
    ctx->pc = 0x291a18u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_291a1c:
    // 0x291a1c: 0x0  nop
    ctx->pc = 0x291a1cu;
    // NOP
label_291a20:
    // 0x291a20: 0x64e2  .word       0x000064E2                   # neg         $t4, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291a20u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
label_291a24:
    // 0x291a24: 0x13  mtlo        $zero
    ctx->pc = 0x291a24u;
    ctx->lo = GPR_U64(ctx, 0);
label_291a28:
    // 0x291a28: 0x9584  .word       0x00009584                   # sllv        $s2, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291a28u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_291a2c:
    // 0x291a2c: 0x0  nop
    ctx->pc = 0x291a2cu;
    // NOP
label_291a30:
    // 0x291a30: 0x64f5  .word       0x000064F5                   # INVALID     $zero, $zero, 0x64F5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291a30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x291A30 raw=0x000064F5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291a34:
    // 0x291a34: 0x48  .word       0x00000048                   # jr          $zero # 00000040 <InstrIdType: CPU_SPECIAL>
label_291a38:
    if (ctx->pc == 0x291A38u) {
        ctx->pc = 0x291A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291A34u;
        // 0x291a38: 0x23d00  sll         $a3, $v0, 20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291A3Cu;
        goto label_291a3c;
    }
    ctx->pc = 0x291A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x291A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291A34u;
        // 0x291a38: 0x23d00  sll         $a3, $v0, 20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291A34u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x291A3Cu;
label_291a3c:
    // 0x291a3c: 0x0  nop
    ctx->pc = 0x291a3cu;
    // NOP
label_291a40:
    // 0x291a40: 0x653d  .word       0x0000653D                   # INVALID     $zero, $zero, 0x653D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291a40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x291A40 raw=0x0000653D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291a44:
    // 0x291a44: 0x48  .word       0x00000048                   # jr          $zero # 00000040 <InstrIdType: CPU_SPECIAL>
label_291a48:
    if (ctx->pc == 0x291A48u) {
        ctx->pc = 0x291A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291A44u;
        // 0x291a48: 0x23ea0  .word       0x00023EA0                   # add         $a3, $zero, $v0 # 00000680 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x291A4Cu;
        goto label_291a4c;
    }
    ctx->pc = 0x291A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x291A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291A44u;
        // 0x291a48: 0x23ea0  .word       0x00023EA0                   # add         $a3, $zero, $v0 # 00000680 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291A44u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x291A4Cu;
label_291a4c:
    // 0x291a4c: 0x0  nop
    ctx->pc = 0x291a4cu;
    // NOP
label_291a50:
    // 0x291a50: 0x6585  .word       0x00006585                   # INVALID     $zero, $zero, 0x6585 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291a50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x291A50 raw=0x00006585"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291a54:
    // 0x291a54: 0x52  .word       0x00000052                   # mflo        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291a54u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_291a58:
    // 0x291a58: 0x28df0  tge         $zero, $v0, 567
    ctx->pc = 0x291a58u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_291a5c:
    // 0x291a5c: 0x0  nop
    ctx->pc = 0x291a5cu;
    // NOP
label_291a60:
    // 0x291a60: 0x65d7  .word       0x000065D7                   # dsrav       $t4, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291a60u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_291a64:
    // 0x291a64: 0x4d  break       0, 1
    ctx->pc = 0x291a64u;
    runtime->handleBreak(rdram, ctx);
label_291a68:
    // 0x291a68: 0x26690  .word       0x00026690                   # mfhi        $t4 # 00020680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291a68u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_291a6c:
    // 0x291a6c: 0x0  nop
    ctx->pc = 0x291a6cu;
    // NOP
label_291a70:
    // 0x291a70: 0x6624  .word       0x00006624                   # and         $t4, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291a70u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_291a74:
    // 0x291a74: 0x4e  .word       0x0000004E                   # INVALID     $zero, $zero, 0x4E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291a74u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x291A74 raw=0x0000004E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291a78:
    // 0x291a78: 0x26bd0  .word       0x00026BD0                   # mfhi        $t5 # 000203C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291a78u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_291a7c:
    // 0x291a7c: 0x0  nop
    ctx->pc = 0x291a7cu;
    // NOP
label_291a80:
    // 0x291a80: 0x6672  tlt         $zero, $zero, 409
    ctx->pc = 0x291a80u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291a84:
    // 0x291a84: 0x50  .word       0x00000050                   # mfhi        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291a84u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_291a88:
    // 0x291a88: 0x27e20  .word       0x00027E20                   # add         $t7, $zero, $v0 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291a88u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_291a8c:
    // 0x291a8c: 0x0  nop
    ctx->pc = 0x291a8cu;
    // NOP
label_291a90:
    // 0x291a90: 0x66c2  srl         $t4, $zero, 27
    ctx->pc = 0x291a90u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 0), 27));
label_291a94:
    // 0x291a94: 0x53  .word       0x00000053                   # mtlo        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291a94u;
    ctx->lo = GPR_U64(ctx, 0);
label_291a98:
    // 0x291a98: 0x29790  .word       0x00029790                   # mfhi        $s2 # 00020780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291a98u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_291a9c:
    // 0x291a9c: 0x0  nop
    ctx->pc = 0x291a9cu;
    // NOP
label_291aa0:
    // 0x291aa0: 0x6715  .word       0x00006715                   # INVALID     $zero, $zero, 0x6715 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291aa0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x291AA0 raw=0x00006715"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291aa4:
    // 0x291aa4: 0x48  .word       0x00000048                   # jr          $zero # 00000040 <InstrIdType: CPU_SPECIAL>
label_291aa8:
    if (ctx->pc == 0x291AA8u) {
        ctx->pc = 0x291AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291AA4u;
        // 0x291aa8: 0x23df0  tge         $zero, $v0, 247 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x291AACu;
        goto label_291aac;
    }
    ctx->pc = 0x291AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x291AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291AA4u;
        // 0x291aa8: 0x23df0  tge         $zero, $v0, 247 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291AA4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x291AACu;
label_291aac:
    // 0x291aac: 0x0  nop
    ctx->pc = 0x291aacu;
    // NOP
label_291ab0:
    // 0x291ab0: 0x675d  .word       0x0000675D                   # dmultu      $zero, $zero # 00006740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291ab0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x291AB0 raw=0x0000675D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291ab4:
    // 0x291ab4: 0x93  .word       0x00000093                   # mtlo        $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291ab4u;
    ctx->lo = GPR_U64(ctx, 0);
label_291ab8:
    // 0x291ab8: 0x49340  sll         $s2, $a0, 13
    ctx->pc = 0x291ab8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 4), 13));
label_291abc:
    // 0x291abc: 0x0  nop
    ctx->pc = 0x291abcu;
    // NOP
label_291ac0:
    // 0x291ac0: 0x67f0  tge         $zero, $zero, 415
    ctx->pc = 0x291ac0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291ac4:
    // 0x291ac4: 0x13  mtlo        $zero
    ctx->pc = 0x291ac4u;
    ctx->lo = GPR_U64(ctx, 0);
label_291ac8:
    // 0x291ac8: 0x94bc  dsll32      $s2, $zero, 18
    ctx->pc = 0x291ac8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) << (32 + 18));
label_291acc:
    // 0x291acc: 0x0  nop
    ctx->pc = 0x291accu;
    // NOP
label_291ad0:
    // 0x291ad0: 0x6803  sra         $t5, $zero, 0
    ctx->pc = 0x291ad0u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 0), 0));
label_291ad4:
    // 0x291ad4: 0x11  mthi        $zero
    ctx->pc = 0x291ad4u;
    ctx->hi = GPR_U64(ctx, 0);
label_291ad8:
    // 0x291ad8: 0x8440  sll         $s0, $zero, 17
    ctx->pc = 0x291ad8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_291adc:
    // 0x291adc: 0x0  nop
    ctx->pc = 0x291adcu;
    // NOP
label_291ae0:
    // 0x291ae0: 0x6814  dsllv       $t5, $zero, $zero
    ctx->pc = 0x291ae0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_291ae4:
    // 0x291ae4: 0x11  mthi        $zero
    ctx->pc = 0x291ae4u;
    ctx->hi = GPR_U64(ctx, 0);
label_291ae8:
    // 0x291ae8: 0x8440  sll         $s0, $zero, 17
    ctx->pc = 0x291ae8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_291aec:
    // 0x291aec: 0x0  nop
    ctx->pc = 0x291aecu;
    // NOP
label_291af0:
    // 0x291af0: 0x6825  move        $t5, $zero
    ctx->pc = 0x291af0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_291af4:
    // 0x291af4: 0x12  mflo        $zero
    ctx->pc = 0x291af4u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_291af8:
    // 0x291af8: 0x8840  sll         $s1, $zero, 1
    ctx->pc = 0x291af8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_291afc:
    // 0x291afc: 0x0  nop
    ctx->pc = 0x291afcu;
    // NOP
label_291b00:
    // 0x291b00: 0x6837  .word       0x00006837                   # INVALID     $zero, $zero, 0x6837 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291b00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x291B00 raw=0x00006837"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291b04:
    // 0x291b04: 0x12  mflo        $zero
    ctx->pc = 0x291b04u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_291b08:
    // 0x291b08: 0x8840  sll         $s1, $zero, 1
    ctx->pc = 0x291b08u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_291b0c:
    // 0x291b0c: 0x0  nop
    ctx->pc = 0x291b0cu;
    // NOP
label_291b10:
    // 0x291b10: 0x6849  .word       0x00006849                   # jalr        $t5, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
label_291b14:
    if (ctx->pc == 0x291B14u) {
        ctx->pc = 0x291B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291B10u;
        // 0x291b14: 0x21  addu        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291B18u;
        goto label_291b18;
    }
    ctx->pc = 0x291B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 13, 0x291B18u);
        ctx->pc = 0x291B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291B10u;
        // 0x291b14: 0x21  addu        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291B10u, 0x291B18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x291B18u;
label_291b18:
    // 0x291b18: 0x10440  sll         $zero, $at, 17
    ctx->pc = 0x291b18u;
    
label_291b1c:
    // 0x291b1c: 0x0  nop
    ctx->pc = 0x291b1cu;
    // NOP
label_291b20:
    // 0x291b20: 0x686a  .word       0x0000686A                   # slt         $t5, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291b20u;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_291b24:
    // 0x291b24: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x291b24u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_291b28:
    // 0x291b28: 0x10440  sll         $zero, $at, 17
    ctx->pc = 0x291b28u;
    
label_291b2c:
    // 0x291b2c: 0x0  nop
    ctx->pc = 0x291b2cu;
    // NOP
label_291b30:
    // 0x291b30: 0x688b  .word       0x0000688B                   # movn        $t5, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291b30u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 0));
label_291b34:
    // 0x291b34: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291b34u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x291B34 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291b38:
    // 0x291b38: 0xa200  sll         $s4, $zero, 8
    ctx->pc = 0x291b38u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_291b3c:
    // 0x291b3c: 0x0  nop
    ctx->pc = 0x291b3cu;
    // NOP
label_291b40:
    // 0x291b40: 0x68a0  .word       0x000068A0                   # add         $t5, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291b40u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_291b44:
    // 0x291b44: 0x35  .word       0x00000035                   # INVALID     $zero, $zero, 0x35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291b44u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x291B44 raw=0x00000035"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291b48:
    // 0x291b48: 0x1a5f0  tge         $zero, $at, 663
    ctx->pc = 0x291b48u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_291b4c:
    // 0x291b4c: 0x0  nop
    ctx->pc = 0x291b4cu;
    // NOP
label_291b50:
    // 0x291b50: 0x68d5  .word       0x000068D5                   # INVALID     $zero, $zero, 0x68D5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291b50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x291B50 raw=0x000068D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291b54:
    // 0x291b54: 0x34  teq         $zero, $zero, 0
    ctx->pc = 0x291b54u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291b58:
    // 0x291b58: 0x19b70  tge         $zero, $at, 621
    ctx->pc = 0x291b58u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_291b5c:
    // 0x291b5c: 0x0  nop
    ctx->pc = 0x291b5cu;
    // NOP
label_291b60:
    // 0x291b60: 0x6909  .word       0x00006909                   # jalr        $t5, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
label_291b64:
    if (ctx->pc == 0x291B64u) {
        ctx->pc = 0x291B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291B60u;
        // 0x291b64: 0x1d  dmultu      $zero, $zero (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x291B64 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x291B68u;
        goto label_291b68;
    }
    ctx->pc = 0x291B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 13, 0x291B68u);
        ctx->pc = 0x291B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291B60u;
        // 0x291b64: 0x1d  dmultu      $zero, $zero (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x291B64 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291B60u, 0x291B68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x291B68u;
label_291b68:
    // 0x291b68: 0xe290  .word       0x0000E290                   # mfhi        $gp # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291b68u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_291b6c:
    // 0x291b6c: 0x0  nop
    ctx->pc = 0x291b6cu;
    // NOP
label_291b70:
    // 0x291b70: 0x6926  .word       0x00006926                   # xor         $t5, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291b70u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_291b74:
    // 0x291b74: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291b74u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x291B74 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291b78:
    // 0x291b78: 0x400  sll         $zero, $zero, 16
    ctx->pc = 0x291b78u;
    
label_291b7c:
    // 0x291b7c: 0x0  nop
    ctx->pc = 0x291b7cu;
    // NOP
label_291b80:
    // 0x291b80: 0x6927  .word       0x00006927                   # not         $t5, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291b80u;
    SET_GPR_U64(ctx, 13, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_291b84:
    // 0x291b84: 0x2f  dsubu       $zero, $zero, $zero
    ctx->pc = 0x291b84u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_291b88:
    // 0x291b88: 0x175a0  .word       0x000175A0                   # add         $t6, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291b88u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_291b8c:
    // 0x291b8c: 0x0  nop
    ctx->pc = 0x291b8cu;
    // NOP
label_291b90:
    // 0x291b90: 0x6956  .word       0x00006956                   # dsrlv       $t5, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291b90u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_291b94:
    // 0x291b94: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291b94u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x291B94 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291b98:
    // 0x291b98: 0x400  sll         $zero, $zero, 16
    ctx->pc = 0x291b98u;
    
label_291b9c:
    // 0x291b9c: 0x0  nop
    ctx->pc = 0x291b9cu;
    // NOP
label_291ba0:
    // 0x291ba0: 0x6957  .word       0x00006957                   # dsrav       $t5, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291ba0u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_291ba4:
    // 0x291ba4: 0x52  .word       0x00000052                   # mflo        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291ba4u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_291ba8:
    // 0x291ba8: 0x28e60  .word       0x00028E60                   # add         $s1, $zero, $v0 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291ba8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_291bac:
    // 0x291bac: 0x0  nop
    ctx->pc = 0x291bacu;
    // NOP
label_291bb0:
    // 0x291bb0: 0x69a9  .word       0x000069A9                   # mtsa        $zero # 00006980 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x291bb0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_291bb4:
    // 0x291bb4: 0x38  dsll        $zero, $zero, 0
    ctx->pc = 0x291bb4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 0);
label_291bb8:
    // 0x291bb8: 0x1be10  .word       0x0001BE10                   # mfhi        $s7 # 00010600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291bb8u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_291bbc:
    // 0x291bbc: 0x0  nop
    ctx->pc = 0x291bbcu;
    // NOP
label_291bc0:
    // 0x291bc0: 0x69e1  .word       0x000069E1                   # addu        $t5, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291bc0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_291bc4:
    // 0x291bc4: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x291bc4u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_291bc8:
    // 0x291bc8: 0x10440  sll         $zero, $at, 17
    ctx->pc = 0x291bc8u;
    
label_291bcc:
    // 0x291bcc: 0x0  nop
    ctx->pc = 0x291bccu;
    // NOP
label_291bd0:
    // 0x291bd0: 0x6a02  srl         $t5, $zero, 8
    ctx->pc = 0x291bd0u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 0), 8));
label_291bd4:
    // 0x291bd4: 0x11  mthi        $zero
    ctx->pc = 0x291bd4u;
    ctx->hi = GPR_U64(ctx, 0);
label_291bd8:
    // 0x291bd8: 0x8510  .word       0x00008510                   # mfhi        $s0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291bd8u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_291bdc:
    // 0x291bdc: 0x0  nop
    ctx->pc = 0x291bdcu;
    // NOP
label_291be0:
    // 0x291be0: 0x6a13  .word       0x00006A13                   # mtlo        $zero # 00006A00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291be0u;
    ctx->lo = GPR_U64(ctx, 0);
label_291be4:
    // 0x291be4: 0x11  mthi        $zero
    ctx->pc = 0x291be4u;
    ctx->hi = GPR_U64(ctx, 0);
label_291be8:
    // 0x291be8: 0x8510  .word       0x00008510                   # mfhi        $s0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291be8u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_291bec:
    // 0x291bec: 0x0  nop
    ctx->pc = 0x291becu;
    // NOP
label_291bf0:
    // 0x291bf0: 0x6a24  .word       0x00006A24                   # and         $t5, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291bf0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_291bf4:
    // 0x291bf4: 0x12  mflo        $zero
    ctx->pc = 0x291bf4u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_291bf8:
    // 0x291bf8: 0x8980  sll         $s1, $zero, 6
    ctx->pc = 0x291bf8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_291bfc:
    // 0x291bfc: 0x0  nop
    ctx->pc = 0x291bfcu;
    // NOP
label_291c00:
    // 0x291c00: 0x6a36  tne         $zero, $zero, 424
    ctx->pc = 0x291c00u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291c04:
    // 0x291c04: 0x12  mflo        $zero
    ctx->pc = 0x291c04u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_291c08:
    // 0x291c08: 0x8980  sll         $s1, $zero, 6
    ctx->pc = 0x291c08u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_291c0c:
    // 0x291c0c: 0x0  nop
    ctx->pc = 0x291c0cu;
    // NOP
label_291c10:
    // 0x291c10: 0x6a48  .word       0x00006A48                   # jr          $zero # 00006A40 <InstrIdType: CPU_SPECIAL>
label_291c14:
    if (ctx->pc == 0x291C14u) {
        ctx->pc = 0x291C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C10u;
        // 0x291c14: 0x21  addu        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291C18u;
        goto label_291c18;
    }
    ctx->pc = 0x291C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x291C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C10u;
        // 0x291c14: 0x21  addu        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291C10u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x291C18u;
label_291c18:
    // 0x291c18: 0x10510  .word       0x00010510                   # mfhi        $zero # 00010500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291c18u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_291c1c:
    // 0x291c1c: 0x0  nop
    ctx->pc = 0x291c1cu;
    // NOP
label_291c20:
    // 0x291c20: 0x6a69  .word       0x00006A69                   # mtsa        $zero # 00006A40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x291c20u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_291c24:
    // 0x291c24: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x291c24u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_291c28:
    // 0x291c28: 0x10510  .word       0x00010510                   # mfhi        $zero # 00010500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291c28u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_291c2c:
    // 0x291c2c: 0x0  nop
    ctx->pc = 0x291c2cu;
    // NOP
label_291c30:
    // 0x291c30: 0x6a8a  .word       0x00006A8A                   # movz        $t5, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291c30u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 0));
label_291c34:
    // 0x291c34: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x291c34u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_291c38:
    // 0x291c38: 0x10510  .word       0x00010510                   # mfhi        $zero # 00010500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291c38u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_291c3c:
    // 0x291c3c: 0x0  nop
    ctx->pc = 0x291c3cu;
    // NOP
label_291c40:
    // 0x291c40: 0x6aab  .word       0x00006AAB                   # sltu        $t5, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291c40u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_291c44:
    // 0x291c44: 0x1f  ddivu       $zero, $zero, $zero
    ctx->pc = 0x291c44u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x291C44 raw=0x0000001F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291c48:
    // 0x291c48: 0xf4d0  .word       0x0000F4D0                   # mfhi        $fp # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291c48u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_291c4c:
    // 0x291c4c: 0x0  nop
    ctx->pc = 0x291c4cu;
    // NOP
label_291c50:
    // 0x291c50: 0x6aca  .word       0x00006ACA                   # movz        $t5, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291c50u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 0));
label_291c54:
    // 0x291c54: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x291c54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_291c58:
    // 0x291c58: 0xfe50  .word       0x0000FE50                   # mfhi        $ra # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291c58u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_291c5c:
    // 0x291c5c: 0x0  nop
    ctx->pc = 0x291c5cu;
    // NOP
label_291c60:
    // 0x291c60: 0x6aea  .word       0x00006AEA                   # slt         $t5, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291c60u;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_291c64:
    // 0x291c64: 0x28  mfsa        $zero
    ctx->pc = 0x291c64u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_291c68:
    // 0x291c68: 0x13c80  sll         $a3, $at, 18
    ctx->pc = 0x291c68u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 1), 18));
label_291c6c:
    // 0x291c6c: 0x0  nop
    ctx->pc = 0x291c6cu;
    // NOP
label_291c70:
    // 0x291c70: 0x6b12  .word       0x00006B12                   # mflo        $t5 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291c70u;
    SET_GPR_U64(ctx, 13, ctx->lo);
label_291c74:
    // 0x291c74: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x291c74u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_291c78:
    // 0x291c78: 0x11e10  .word       0x00011E10                   # mfhi        $v1 # 00010600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291c78u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_291c7c:
    // 0x291c7c: 0x0  nop
    ctx->pc = 0x291c7cu;
    // NOP
label_291c80:
    // 0x291c80: 0x6b36  tne         $zero, $zero, 428
    ctx->pc = 0x291c80u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291c84:
    // 0x291c84: 0x1e  ddiv        $zero, $zero, $zero
    ctx->pc = 0x291c84u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x291C84 raw=0x0000001E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291c88:
    // 0x291c88: 0xedb0  tge         $zero, $zero, 950
    ctx->pc = 0x291c88u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291c8c:
    // 0x291c8c: 0x0  nop
    ctx->pc = 0x291c8cu;
    // NOP
label_291c90:
    // 0x291c90: 0x6b54  .word       0x00006B54                   # dsllv       $t5, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291c90u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_291c94:
    // 0x291c94: 0x1f  ddivu       $zero, $zero, $zero
    ctx->pc = 0x291c94u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x291C94 raw=0x0000001F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291c98:
    // 0x291c98: 0xf3b0  tge         $zero, $zero, 974
    ctx->pc = 0x291c98u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291c9c:
    // 0x291c9c: 0x0  nop
    ctx->pc = 0x291c9cu;
    // NOP
label_291ca0:
    // 0x291ca0: 0x6b73  tltu        $zero, $zero, 429
    ctx->pc = 0x291ca0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291ca4:
    // 0x291ca4: 0x27  not         $zero, $zero
    ctx->pc = 0x291ca4u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_291ca8:
    // 0x291ca8: 0x13330  tge         $zero, $at, 204
    ctx->pc = 0x291ca8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_291cac:
    // 0x291cac: 0x0  nop
    ctx->pc = 0x291cacu;
    // NOP
label_291cb0:
    // 0x291cb0: 0x6b9a  .word       0x00006B9A                   # div         $t5, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291cb0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_291cb4:
    // 0x291cb4: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x291cb4u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_291cb8:
    // 0x291cb8: 0x104b0  tge         $zero, $at, 18
    ctx->pc = 0x291cb8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_291cbc:
    // 0x291cbc: 0x0  nop
    ctx->pc = 0x291cbcu;
    // NOP
label_291cc0:
    // 0x291cc0: 0x6bbb  dsra        $t5, $zero, 14
    ctx->pc = 0x291cc0u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 0) >> 14);
label_291cc4:
    // 0x291cc4: 0x50  .word       0x00000050                   # mfhi        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291cc4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_291cc8:
    // 0x291cc8: 0x27e50  .word       0x00027E50                   # mfhi        $t7 # 00020640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291cc8u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_291ccc:
    // 0x291ccc: 0x0  nop
    ctx->pc = 0x291cccu;
    // NOP
label_291cd0:
    // 0x291cd0: 0x6c0b  .word       0x00006C0B                   # movn        $t5, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291cd0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 0));
label_291cd4:
    // 0x291cd4: 0x50  .word       0x00000050                   # mfhi        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291cd4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_291cd8:
    // 0x291cd8: 0x27a60  .word       0x00027A60                   # add         $t7, $zero, $v0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291cd8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_291cdc:
    // 0x291cdc: 0x0  nop
    ctx->pc = 0x291cdcu;
    // NOP
label_291ce0:
    // 0x291ce0: 0x6c5b  .word       0x00006C5B                   # divu        $t5, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291ce0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291ce4:
    // 0x291ce4: 0x55  .word       0x00000055                   # INVALID     $zero, $zero, 0x55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291ce4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x291CE4 raw=0x00000055"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291ce8:
    // 0x291ce8: 0x2a360  .word       0x0002A360                   # add         $s4, $zero, $v0 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291ce8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_291cec:
    // 0x291cec: 0x0  nop
    ctx->pc = 0x291cecu;
    // NOP
label_291cf0:
    // 0x291cf0: 0x6cb0  tge         $zero, $zero, 434
    ctx->pc = 0x291cf0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291cf4:
    // 0x291cf4: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x291cf4u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_291cf8:
    // 0x291cf8: 0x10700  sll         $zero, $at, 28
    ctx->pc = 0x291cf8u;
    
label_291cfc:
    // 0x291cfc: 0x0  nop
    ctx->pc = 0x291cfcu;
    // NOP
label_291d00:
    // 0x291d00: 0x6cd1  .word       0x00006CD1                   # mthi        $zero # 00006CC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291d00u;
    ctx->hi = GPR_U64(ctx, 0);
label_291d04:
    // 0x291d04: 0x27  not         $zero, $zero
    ctx->pc = 0x291d04u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_291d08:
    // 0x291d08: 0x136d0  .word       0x000136D0                   # mfhi        $a2 # 000106C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291d08u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_291d0c:
    // 0x291d0c: 0x0  nop
    ctx->pc = 0x291d0cu;
    // NOP
label_291d10:
    // 0x291d10: 0x6cf8  dsll        $t5, $zero, 19
    ctx->pc = 0x291d10u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) << 19);
label_291d14:
    // 0x291d14: 0x22  neg         $zero, $zero
    ctx->pc = 0x291d14u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_291d18:
    // 0x291d18: 0x10b70  tge         $zero, $at, 45
    ctx->pc = 0x291d18u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_291d1c:
    // 0x291d1c: 0x0  nop
    ctx->pc = 0x291d1cu;
    // NOP
label_291d20:
    // 0x291d20: 0x6d1a  .word       0x00006D1A                   # div         $t5, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291d20u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_291d24:
    // 0x291d24: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x291d24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_291d28:
    // 0x291d28: 0xfa70  tge         $zero, $zero, 1001
    ctx->pc = 0x291d28u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291d2c:
    // 0x291d2c: 0x0  nop
    ctx->pc = 0x291d2cu;
    // NOP
label_291d30:
    // 0x291d30: 0x6d3a  dsrl        $t5, $zero, 20
    ctx->pc = 0x291d30u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) >> 20);
label_291d34:
    // 0x291d34: 0x59  .word       0x00000059                   # multu       $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291d34u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_291d38:
    // 0x291d38: 0x2c620  .word       0x0002C620                   # add         $t8, $zero, $v0 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291d38u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_291d3c:
    // 0x291d3c: 0x0  nop
    ctx->pc = 0x291d3cu;
    // NOP
label_291d40:
    // 0x291d40: 0x6d93  .word       0x00006D93                   # mtlo        $zero # 00006D80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291d40u;
    ctx->lo = GPR_U64(ctx, 0);
label_291d44:
    // 0x291d44: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291d44u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291d48:
    // 0x291d48: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291d48u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291d4c:
    // 0x291d4c: 0x0  nop
    ctx->pc = 0x291d4cu;
    // NOP
label_291d50:
    // 0x291d50: 0x6dae  .word       0x00006DAE                   # dsub        $t5, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291d50u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
label_291d54:
    // 0x291d54: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291d54u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291d58:
    // 0x291d58: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291d58u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291d5c:
    // 0x291d5c: 0x0  nop
    ctx->pc = 0x291d5cu;
    // NOP
label_291d60:
    // 0x291d60: 0x6dc9  .word       0x00006DC9                   # jalr        $t5, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
label_291d64:
    if (ctx->pc == 0x291D64u) {
        ctx->pc = 0x291D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291D60u;
        // 0x291d64: 0x1b  divu        $zero, $zero, $zero (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x291D68u;
        goto label_291d68;
    }
    ctx->pc = 0x291D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 13, 0x291D68u);
        ctx->pc = 0x291D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291D60u;
        // 0x291d64: 0x1b  divu        $zero, $zero, $zero (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291D60u, 0x291D68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x291D68u;
label_291d68:
    // 0x291d68: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291d68u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291d6c:
    // 0x291d6c: 0x0  nop
    ctx->pc = 0x291d6cu;
    // NOP
label_291d70:
    // 0x291d70: 0x6de4  .word       0x00006DE4                   # and         $t5, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291d70u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_291d74:
    // 0x291d74: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291d74u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291d78:
    // 0x291d78: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291d78u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291d7c:
    // 0x291d7c: 0x0  nop
    ctx->pc = 0x291d7cu;
    // NOP
label_291d80:
    // 0x291d80: 0x6dff  dsra32      $t5, $zero, 23
    ctx->pc = 0x291d80u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 0) >> (32 + 23));
label_291d84:
    // 0x291d84: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291d84u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291d88:
    // 0x291d88: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291d88u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291d8c:
    // 0x291d8c: 0x0  nop
    ctx->pc = 0x291d8cu;
    // NOP
label_291d90:
    // 0x291d90: 0x6e1a  .word       0x00006E1A                   # div         $t5, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291d90u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_291d94:
    // 0x291d94: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291d94u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291d98:
    // 0x291d98: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291d98u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291d9c:
    // 0x291d9c: 0x0  nop
    ctx->pc = 0x291d9cu;
    // NOP
label_291da0:
    // 0x291da0: 0x6e35  .word       0x00006E35                   # INVALID     $zero, $zero, 0x6E35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291da0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x291DA0 raw=0x00006E35"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291da4:
    // 0x291da4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291da4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291da8:
    // 0x291da8: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291da8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291dac:
    // 0x291dac: 0x0  nop
    ctx->pc = 0x291dacu;
    // NOP
label_291db0:
    // 0x291db0: 0x6e50  .word       0x00006E50                   # mfhi        $t5 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291db0u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_291db4:
    // 0x291db4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291db4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291db8:
    // 0x291db8: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291db8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291dbc:
    // 0x291dbc: 0x0  nop
    ctx->pc = 0x291dbcu;
    // NOP
label_291dc0:
    // 0x291dc0: 0x6e6b  .word       0x00006E6B                   # sltu        $t5, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291dc0u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_291dc4:
    // 0x291dc4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291dc4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291dc8:
    // 0x291dc8: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291dc8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291dcc:
    // 0x291dcc: 0x0  nop
    ctx->pc = 0x291dccu;
    // NOP
label_291dd0:
    // 0x291dd0: 0x6e86  .word       0x00006E86                   # srlv        $t5, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291dd0u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_291dd4:
    // 0x291dd4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291dd4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291dd8:
    // 0x291dd8: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291dd8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291ddc:
    // 0x291ddc: 0x0  nop
    ctx->pc = 0x291ddcu;
    // NOP
label_291de0:
    // 0x291de0: 0x6ea1  .word       0x00006EA1                   # addu        $t5, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291de0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_291de4:
    // 0x291de4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291de4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291de8:
    // 0x291de8: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291de8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291dec:
    // 0x291dec: 0x0  nop
    ctx->pc = 0x291decu;
    // NOP
label_291df0:
    // 0x291df0: 0x6ebc  dsll32      $t5, $zero, 26
    ctx->pc = 0x291df0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) << (32 + 26));
label_291df4:
    // 0x291df4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291df4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291df8:
    // 0x291df8: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291df8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291dfc:
    // 0x291dfc: 0x0  nop
    ctx->pc = 0x291dfcu;
    // NOP
label_291e00:
    // 0x291e00: 0x6ed7  .word       0x00006ED7                   # dsrav       $t5, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291e00u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_291e04:
    // 0x291e04: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291e04u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291e08:
    // 0x291e08: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291e08u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291e0c:
    // 0x291e0c: 0x0  nop
    ctx->pc = 0x291e0cu;
    // NOP
label_291e10:
    // 0x291e10: 0x6ef2  tlt         $zero, $zero, 443
    ctx->pc = 0x291e10u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291e14:
    // 0x291e14: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291e14u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291e18:
    // 0x291e18: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291e18u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291e1c:
    // 0x291e1c: 0x0  nop
    ctx->pc = 0x291e1cu;
    // NOP
label_291e20:
    // 0x291e20: 0x6f0d  break       0, 444
    ctx->pc = 0x291e20u;
    runtime->handleBreak(rdram, ctx);
label_291e24:
    // 0x291e24: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291e24u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291e28:
    // 0x291e28: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291e28u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291e2c:
    // 0x291e2c: 0x0  nop
    ctx->pc = 0x291e2cu;
    // NOP
label_291e30:
    // 0x291e30: 0x6f28  .word       0x00006F28                   # mfsa        $t5 # 00000700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x291e30u;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_291e34:
    // 0x291e34: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291e34u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291e38:
    // 0x291e38: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291e38u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291e3c:
    // 0x291e3c: 0x0  nop
    ctx->pc = 0x291e3cu;
    // NOP
label_291e40:
    // 0x291e40: 0x6f43  sra         $t5, $zero, 29
    ctx->pc = 0x291e40u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 0), 29));
label_291e44:
    // 0x291e44: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291e44u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291e48:
    // 0x291e48: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291e48u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291e4c:
    // 0x291e4c: 0x0  nop
    ctx->pc = 0x291e4cu;
    // NOP
label_291e50:
    // 0x291e50: 0x6f5e  .word       0x00006F5E                   # ddiv        $t5, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291e50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x291E50 raw=0x00006F5E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291e54:
    // 0x291e54: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291e54u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291e58:
    // 0x291e58: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291e58u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291e5c:
    // 0x291e5c: 0x0  nop
    ctx->pc = 0x291e5cu;
    // NOP
label_291e60:
    // 0x291e60: 0x6f79  .word       0x00006F79                   # INVALID     $zero, $zero, 0x6F79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291e60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x291E60 raw=0x00006F79"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291e64:
    // 0x291e64: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291e64u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291e68:
    // 0x291e68: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291e68u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291e6c:
    // 0x291e6c: 0x0  nop
    ctx->pc = 0x291e6cu;
    // NOP
label_291e70:
    // 0x291e70: 0x6f94  .word       0x00006F94                   # dsllv       $t5, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291e70u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_291e74:
    // 0x291e74: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291e74u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291e78:
    // 0x291e78: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291e78u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291e7c:
    // 0x291e7c: 0x0  nop
    ctx->pc = 0x291e7cu;
    // NOP
label_291e80:
    // 0x291e80: 0x6faf  .word       0x00006FAF                   # dsubu       $t5, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291e80u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_291e84:
    // 0x291e84: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291e84u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291e88:
    // 0x291e88: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291e88u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291e8c:
    // 0x291e8c: 0x0  nop
    ctx->pc = 0x291e8cu;
    // NOP
label_291e90:
    // 0x291e90: 0x6fca  .word       0x00006FCA                   # movz        $t5, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291e90u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 0));
label_291e94:
    // 0x291e94: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291e94u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291e98:
    // 0x291e98: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291e98u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291e9c:
    // 0x291e9c: 0x0  nop
    ctx->pc = 0x291e9cu;
    // NOP
label_291ea0:
    // 0x291ea0: 0x6fe5  .word       0x00006FE5                   # move        $t5, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291ea0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_291ea4:
    // 0x291ea4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291ea4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291ea8:
    // 0x291ea8: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291ea8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291eac:
    // 0x291eac: 0x0  nop
    ctx->pc = 0x291eacu;
    // NOP
label_291eb0:
    // 0x291eb0: 0x7000  sll         $t6, $zero, 0
    ctx->pc = 0x291eb0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_291eb4:
    // 0x291eb4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291eb4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291eb8:
    // 0x291eb8: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291eb8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291ebc:
    // 0x291ebc: 0x0  nop
    ctx->pc = 0x291ebcu;
    // NOP
label_291ec0:
    // 0x291ec0: 0x701b  divu        $t6, $zero, $zero
    ctx->pc = 0x291ec0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291ec4:
    // 0x291ec4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291ec4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291ec8:
    // 0x291ec8: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291ec8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291ecc:
    // 0x291ecc: 0x0  nop
    ctx->pc = 0x291eccu;
    // NOP
label_291ed0:
    // 0x291ed0: 0x7036  tne         $zero, $zero, 448
    ctx->pc = 0x291ed0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291ed4:
    // 0x291ed4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291ed4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291ed8:
    // 0x291ed8: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291ed8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291edc:
    // 0x291edc: 0x0  nop
    ctx->pc = 0x291edcu;
    // NOP
label_291ee0:
    // 0x291ee0: 0x7051  .word       0x00007051                   # mthi        $zero # 00007040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291ee0u;
    ctx->hi = GPR_U64(ctx, 0);
label_291ee4:
    // 0x291ee4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291ee4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291ee8:
    // 0x291ee8: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291ee8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291eec:
    // 0x291eec: 0x0  nop
    ctx->pc = 0x291eecu;
    // NOP
label_291ef0:
    // 0x291ef0: 0x706c  .word       0x0000706C                   # dadd        $t6, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291ef0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_291ef4:
    // 0x291ef4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291ef4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291ef8:
    // 0x291ef8: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291ef8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291efc:
    // 0x291efc: 0x0  nop
    ctx->pc = 0x291efcu;
    // NOP
label_291f00:
    // 0x291f00: 0x7087  .word       0x00007087                   # srav        $t6, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291f00u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_291f04:
    // 0x291f04: 0x25  move        $zero, $zero
    ctx->pc = 0x291f04u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_291f08:
    // 0x291f08: 0x12500  sll         $a0, $at, 20
    ctx->pc = 0x291f08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 20));
label_291f0c:
    // 0x291f0c: 0x0  nop
    ctx->pc = 0x291f0cu;
    // NOP
label_291f10:
    // 0x291f10: 0x70ac  .word       0x000070AC                   # dadd        $t6, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291f10u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_291f14:
    // 0x291f14: 0x25  move        $zero, $zero
    ctx->pc = 0x291f14u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_291f18:
    // 0x291f18: 0x12500  sll         $a0, $at, 20
    ctx->pc = 0x291f18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 20));
label_291f1c:
    // 0x291f1c: 0x0  nop
    ctx->pc = 0x291f1cu;
    // NOP
label_291f20:
    // 0x291f20: 0x70d1  .word       0x000070D1                   # mthi        $zero # 000070C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291f20u;
    ctx->hi = GPR_U64(ctx, 0);
label_291f24:
    // 0x291f24: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291f24u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x291F24 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291f28:
    // 0x291f28: 0xa180  sll         $s4, $zero, 6
    ctx->pc = 0x291f28u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_291f2c:
    // 0x291f2c: 0x0  nop
    ctx->pc = 0x291f2cu;
    // NOP
label_291f30:
    // 0x291f30: 0x70e6  .word       0x000070E6                   # xor         $t6, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291f30u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_291f34:
    // 0x291f34: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291f34u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x291F34 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291f38:
    // 0x291f38: 0xa180  sll         $s4, $zero, 6
    ctx->pc = 0x291f38u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_291f3c:
    // 0x291f3c: 0x0  nop
    ctx->pc = 0x291f3cu;
    // NOP
label_291f40:
    // 0x291f40: 0x70fb  dsra        $t6, $zero, 3
    ctx->pc = 0x291f40u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 0) >> 3);
label_291f44:
    // 0x291f44: 0x25  move        $zero, $zero
    ctx->pc = 0x291f44u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_291f48:
    // 0x291f48: 0x12500  sll         $a0, $at, 20
    ctx->pc = 0x291f48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 20));
label_291f4c:
    // 0x291f4c: 0x0  nop
    ctx->pc = 0x291f4cu;
    // NOP
label_291f50:
    // 0x291f50: 0x7120  .word       0x00007120                   # add         $t6, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291f50u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_291f54:
    // 0x291f54: 0x36  tne         $zero, $zero, 0
    ctx->pc = 0x291f54u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291f58:
    // 0x291f58: 0x1a880  sll         $s5, $at, 2
    ctx->pc = 0x291f58u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 1), 2));
label_291f5c:
    // 0x291f5c: 0x0  nop
    ctx->pc = 0x291f5cu;
    // NOP
label_291f60:
    // 0x291f60: 0x7156  .word       0x00007156                   # dsrlv       $t6, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291f60u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_291f64:
    // 0x291f64: 0x25  move        $zero, $zero
    ctx->pc = 0x291f64u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    ctx->pc = 0x291f68u;
    return;
}
