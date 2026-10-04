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


void FUN_0014eba0_part670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x295630u: goto label_295630;
        case 0x295634u: goto label_295634;
        case 0x295638u: goto label_295638;
        case 0x29563cu: goto label_29563c;
        case 0x295640u: goto label_295640;
        case 0x295644u: goto label_295644;
        case 0x295648u: goto label_295648;
        case 0x29564cu: goto label_29564c;
        case 0x295650u: goto label_295650;
        case 0x295654u: goto label_295654;
        case 0x295658u: goto label_295658;
        case 0x29565cu: goto label_29565c;
        case 0x295660u: goto label_295660;
        case 0x295664u: goto label_295664;
        case 0x295668u: goto label_295668;
        case 0x29566cu: goto label_29566c;
        case 0x295670u: goto label_295670;
        case 0x295674u: goto label_295674;
        case 0x295678u: goto label_295678;
        case 0x29567cu: goto label_29567c;
        case 0x295680u: goto label_295680;
        case 0x295684u: goto label_295684;
        case 0x295688u: goto label_295688;
        case 0x29568cu: goto label_29568c;
        case 0x295690u: goto label_295690;
        case 0x295694u: goto label_295694;
        case 0x295698u: goto label_295698;
        case 0x29569cu: goto label_29569c;
        case 0x2956a0u: goto label_2956a0;
        case 0x2956a4u: goto label_2956a4;
        case 0x2956a8u: goto label_2956a8;
        case 0x2956acu: goto label_2956ac;
        case 0x2956b0u: goto label_2956b0;
        case 0x2956b4u: goto label_2956b4;
        case 0x2956b8u: goto label_2956b8;
        case 0x2956bcu: goto label_2956bc;
        case 0x2956c0u: goto label_2956c0;
        case 0x2956c4u: goto label_2956c4;
        case 0x2956c8u: goto label_2956c8;
        case 0x2956ccu: goto label_2956cc;
        case 0x2956d0u: goto label_2956d0;
        case 0x2956d4u: goto label_2956d4;
        case 0x2956d8u: goto label_2956d8;
        case 0x2956dcu: goto label_2956dc;
        case 0x2956e0u: goto label_2956e0;
        case 0x2956e4u: goto label_2956e4;
        case 0x2956e8u: goto label_2956e8;
        case 0x2956ecu: goto label_2956ec;
        case 0x2956f0u: goto label_2956f0;
        case 0x2956f4u: goto label_2956f4;
        case 0x2956f8u: goto label_2956f8;
        case 0x2956fcu: goto label_2956fc;
        case 0x295700u: goto label_295700;
        case 0x295704u: goto label_295704;
        case 0x295708u: goto label_295708;
        case 0x29570cu: goto label_29570c;
        case 0x295710u: goto label_295710;
        case 0x295714u: goto label_295714;
        case 0x295718u: goto label_295718;
        case 0x29571cu: goto label_29571c;
        case 0x295720u: goto label_295720;
        case 0x295724u: goto label_295724;
        case 0x295728u: goto label_295728;
        case 0x29572cu: goto label_29572c;
        case 0x295730u: goto label_295730;
        case 0x295734u: goto label_295734;
        case 0x295738u: goto label_295738;
        case 0x29573cu: goto label_29573c;
        case 0x295740u: goto label_295740;
        case 0x295744u: goto label_295744;
        case 0x295748u: goto label_295748;
        case 0x29574cu: goto label_29574c;
        case 0x295750u: goto label_295750;
        case 0x295754u: goto label_295754;
        case 0x295758u: goto label_295758;
        case 0x29575cu: goto label_29575c;
        case 0x295760u: goto label_295760;
        case 0x295764u: goto label_295764;
        case 0x295768u: goto label_295768;
        case 0x29576cu: goto label_29576c;
        case 0x295770u: goto label_295770;
        case 0x295774u: goto label_295774;
        case 0x295778u: goto label_295778;
        case 0x29577cu: goto label_29577c;
        case 0x295780u: goto label_295780;
        case 0x295784u: goto label_295784;
        case 0x295788u: goto label_295788;
        case 0x29578cu: goto label_29578c;
        case 0x295790u: goto label_295790;
        case 0x295794u: goto label_295794;
        case 0x295798u: goto label_295798;
        case 0x29579cu: goto label_29579c;
        case 0x2957a0u: goto label_2957a0;
        case 0x2957a4u: goto label_2957a4;
        case 0x2957a8u: goto label_2957a8;
        case 0x2957acu: goto label_2957ac;
        case 0x2957b0u: goto label_2957b0;
        case 0x2957b4u: goto label_2957b4;
        case 0x2957b8u: goto label_2957b8;
        case 0x2957bcu: goto label_2957bc;
        case 0x2957c0u: goto label_2957c0;
        case 0x2957c4u: goto label_2957c4;
        case 0x2957c8u: goto label_2957c8;
        case 0x2957ccu: goto label_2957cc;
        case 0x2957d0u: goto label_2957d0;
        case 0x2957d4u: goto label_2957d4;
        case 0x2957d8u: goto label_2957d8;
        case 0x2957dcu: goto label_2957dc;
        case 0x2957e0u: goto label_2957e0;
        case 0x2957e4u: goto label_2957e4;
        case 0x2957e8u: goto label_2957e8;
        case 0x2957ecu: goto label_2957ec;
        case 0x2957f0u: goto label_2957f0;
        case 0x2957f4u: goto label_2957f4;
        case 0x2957f8u: goto label_2957f8;
        case 0x2957fcu: goto label_2957fc;
        case 0x295800u: goto label_295800;
        case 0x295804u: goto label_295804;
        case 0x295808u: goto label_295808;
        case 0x29580cu: goto label_29580c;
        case 0x295810u: goto label_295810;
        case 0x295814u: goto label_295814;
        case 0x295818u: goto label_295818;
        case 0x29581cu: goto label_29581c;
        case 0x295820u: goto label_295820;
        case 0x295824u: goto label_295824;
        case 0x295828u: goto label_295828;
        case 0x29582cu: goto label_29582c;
        case 0x295830u: goto label_295830;
        case 0x295834u: goto label_295834;
        case 0x295838u: goto label_295838;
        case 0x29583cu: goto label_29583c;
        case 0x295840u: goto label_295840;
        case 0x295844u: goto label_295844;
        case 0x295848u: goto label_295848;
        case 0x29584cu: goto label_29584c;
        case 0x295850u: goto label_295850;
        case 0x295854u: goto label_295854;
        case 0x295858u: goto label_295858;
        case 0x29585cu: goto label_29585c;
        case 0x295860u: goto label_295860;
        case 0x295864u: goto label_295864;
        case 0x295868u: goto label_295868;
        case 0x29586cu: goto label_29586c;
        case 0x295870u: goto label_295870;
        case 0x295874u: goto label_295874;
        case 0x295878u: goto label_295878;
        case 0x29587cu: goto label_29587c;
        case 0x295880u: goto label_295880;
        case 0x295884u: goto label_295884;
        case 0x295888u: goto label_295888;
        case 0x29588cu: goto label_29588c;
        case 0x295890u: goto label_295890;
        case 0x295894u: goto label_295894;
        case 0x295898u: goto label_295898;
        case 0x29589cu: goto label_29589c;
        case 0x2958a0u: goto label_2958a0;
        case 0x2958a4u: goto label_2958a4;
        case 0x2958a8u: goto label_2958a8;
        case 0x2958acu: goto label_2958ac;
        case 0x2958b0u: goto label_2958b0;
        case 0x2958b4u: goto label_2958b4;
        case 0x2958b8u: goto label_2958b8;
        case 0x2958bcu: goto label_2958bc;
        case 0x2958c0u: goto label_2958c0;
        case 0x2958c4u: goto label_2958c4;
        case 0x2958c8u: goto label_2958c8;
        case 0x2958ccu: goto label_2958cc;
        case 0x2958d0u: goto label_2958d0;
        case 0x2958d4u: goto label_2958d4;
        case 0x2958d8u: goto label_2958d8;
        case 0x2958dcu: goto label_2958dc;
        case 0x2958e0u: goto label_2958e0;
        case 0x2958e4u: goto label_2958e4;
        case 0x2958e8u: goto label_2958e8;
        case 0x2958ecu: goto label_2958ec;
        case 0x2958f0u: goto label_2958f0;
        case 0x2958f4u: goto label_2958f4;
        case 0x2958f8u: goto label_2958f8;
        case 0x2958fcu: goto label_2958fc;
        case 0x295900u: goto label_295900;
        case 0x295904u: goto label_295904;
        case 0x295908u: goto label_295908;
        case 0x29590cu: goto label_29590c;
        case 0x295910u: goto label_295910;
        case 0x295914u: goto label_295914;
        case 0x295918u: goto label_295918;
        case 0x29591cu: goto label_29591c;
        case 0x295920u: goto label_295920;
        case 0x295924u: goto label_295924;
        case 0x295928u: goto label_295928;
        case 0x29592cu: goto label_29592c;
        case 0x295930u: goto label_295930;
        case 0x295934u: goto label_295934;
        case 0x295938u: goto label_295938;
        case 0x29593cu: goto label_29593c;
        case 0x295940u: goto label_295940;
        case 0x295944u: goto label_295944;
        case 0x295948u: goto label_295948;
        case 0x29594cu: goto label_29594c;
        case 0x295950u: goto label_295950;
        case 0x295954u: goto label_295954;
        case 0x295958u: goto label_295958;
        case 0x29595cu: goto label_29595c;
        case 0x295960u: goto label_295960;
        case 0x295964u: goto label_295964;
        case 0x295968u: goto label_295968;
        case 0x29596cu: goto label_29596c;
        case 0x295970u: goto label_295970;
        case 0x295974u: goto label_295974;
        case 0x295978u: goto label_295978;
        case 0x29597cu: goto label_29597c;
        case 0x295980u: goto label_295980;
        case 0x295984u: goto label_295984;
        case 0x295988u: goto label_295988;
        case 0x29598cu: goto label_29598c;
        case 0x295990u: goto label_295990;
        case 0x295994u: goto label_295994;
        case 0x295998u: goto label_295998;
        case 0x29599cu: goto label_29599c;
        case 0x2959a0u: goto label_2959a0;
        case 0x2959a4u: goto label_2959a4;
        case 0x2959a8u: goto label_2959a8;
        case 0x2959acu: goto label_2959ac;
        case 0x2959b0u: goto label_2959b0;
        case 0x2959b4u: goto label_2959b4;
        case 0x2959b8u: goto label_2959b8;
        case 0x2959bcu: goto label_2959bc;
        case 0x2959c0u: goto label_2959c0;
        case 0x2959c4u: goto label_2959c4;
        case 0x2959c8u: goto label_2959c8;
        case 0x2959ccu: goto label_2959cc;
        case 0x2959d0u: goto label_2959d0;
        case 0x2959d4u: goto label_2959d4;
        case 0x2959d8u: goto label_2959d8;
        case 0x2959dcu: goto label_2959dc;
        case 0x2959e0u: goto label_2959e0;
        case 0x2959e4u: goto label_2959e4;
        case 0x2959e8u: goto label_2959e8;
        case 0x2959ecu: goto label_2959ec;
        case 0x2959f0u: goto label_2959f0;
        case 0x2959f4u: goto label_2959f4;
        case 0x2959f8u: goto label_2959f8;
        case 0x2959fcu: goto label_2959fc;
        case 0x295a00u: goto label_295a00;
        case 0x295a04u: goto label_295a04;
        case 0x295a08u: goto label_295a08;
        case 0x295a0cu: goto label_295a0c;
        case 0x295a10u: goto label_295a10;
        case 0x295a14u: goto label_295a14;
        case 0x295a18u: goto label_295a18;
        case 0x295a1cu: goto label_295a1c;
        case 0x295a20u: goto label_295a20;
        case 0x295a24u: goto label_295a24;
        case 0x295a28u: goto label_295a28;
        case 0x295a2cu: goto label_295a2c;
        case 0x295a30u: goto label_295a30;
        case 0x295a34u: goto label_295a34;
        case 0x295a38u: goto label_295a38;
        case 0x295a3cu: goto label_295a3c;
        case 0x295a40u: goto label_295a40;
        case 0x295a44u: goto label_295a44;
        case 0x295a48u: goto label_295a48;
        case 0x295a4cu: goto label_295a4c;
        case 0x295a50u: goto label_295a50;
        case 0x295a54u: goto label_295a54;
        case 0x295a58u: goto label_295a58;
        case 0x295a5cu: goto label_295a5c;
        case 0x295a60u: goto label_295a60;
        case 0x295a64u: goto label_295a64;
        case 0x295a68u: goto label_295a68;
        case 0x295a6cu: goto label_295a6c;
        case 0x295a70u: goto label_295a70;
        case 0x295a74u: goto label_295a74;
        case 0x295a78u: goto label_295a78;
        case 0x295a7cu: goto label_295a7c;
        case 0x295a80u: goto label_295a80;
        case 0x295a84u: goto label_295a84;
        case 0x295a88u: goto label_295a88;
        case 0x295a8cu: goto label_295a8c;
        case 0x295a90u: goto label_295a90;
        case 0x295a94u: goto label_295a94;
        case 0x295a98u: goto label_295a98;
        case 0x295a9cu: goto label_295a9c;
        case 0x295aa0u: goto label_295aa0;
        case 0x295aa4u: goto label_295aa4;
        case 0x295aa8u: goto label_295aa8;
        case 0x295aacu: goto label_295aac;
        case 0x295ab0u: goto label_295ab0;
        case 0x295ab4u: goto label_295ab4;
        case 0x295ab8u: goto label_295ab8;
        case 0x295abcu: goto label_295abc;
        case 0x295ac0u: goto label_295ac0;
        case 0x295ac4u: goto label_295ac4;
        case 0x295ac8u: goto label_295ac8;
        case 0x295accu: goto label_295acc;
        case 0x295ad0u: goto label_295ad0;
        case 0x295ad4u: goto label_295ad4;
        case 0x295ad8u: goto label_295ad8;
        case 0x295adcu: goto label_295adc;
        case 0x295ae0u: goto label_295ae0;
        case 0x295ae4u: goto label_295ae4;
        case 0x295ae8u: goto label_295ae8;
        case 0x295aecu: goto label_295aec;
        case 0x295af0u: goto label_295af0;
        case 0x295af4u: goto label_295af4;
        case 0x295af8u: goto label_295af8;
        case 0x295afcu: goto label_295afc;
        case 0x295b00u: goto label_295b00;
        case 0x295b04u: goto label_295b04;
        case 0x295b08u: goto label_295b08;
        case 0x295b0cu: goto label_295b0c;
        case 0x295b10u: goto label_295b10;
        case 0x295b14u: goto label_295b14;
        case 0x295b18u: goto label_295b18;
        case 0x295b1cu: goto label_295b1c;
        case 0x295b20u: goto label_295b20;
        case 0x295b24u: goto label_295b24;
        case 0x295b28u: goto label_295b28;
        case 0x295b2cu: goto label_295b2c;
        case 0x295b30u: goto label_295b30;
        case 0x295b34u: goto label_295b34;
        case 0x295b38u: goto label_295b38;
        case 0x295b3cu: goto label_295b3c;
        case 0x295b40u: goto label_295b40;
        case 0x295b44u: goto label_295b44;
        case 0x295b48u: goto label_295b48;
        case 0x295b4cu: goto label_295b4c;
        case 0x295b50u: goto label_295b50;
        case 0x295b54u: goto label_295b54;
        case 0x295b58u: goto label_295b58;
        case 0x295b5cu: goto label_295b5c;
        case 0x295b60u: goto label_295b60;
        case 0x295b64u: goto label_295b64;
        case 0x295b68u: goto label_295b68;
        case 0x295b6cu: goto label_295b6c;
        case 0x295b70u: goto label_295b70;
        case 0x295b74u: goto label_295b74;
        case 0x295b78u: goto label_295b78;
        case 0x295b7cu: goto label_295b7c;
        case 0x295b80u: goto label_295b80;
        case 0x295b84u: goto label_295b84;
        case 0x295b88u: goto label_295b88;
        case 0x295b8cu: goto label_295b8c;
        case 0x295b90u: goto label_295b90;
        case 0x295b94u: goto label_295b94;
        case 0x295b98u: goto label_295b98;
        case 0x295b9cu: goto label_295b9c;
        case 0x295ba0u: goto label_295ba0;
        case 0x295ba4u: goto label_295ba4;
        case 0x295ba8u: goto label_295ba8;
        case 0x295bacu: goto label_295bac;
        case 0x295bb0u: goto label_295bb0;
        case 0x295bb4u: goto label_295bb4;
        case 0x295bb8u: goto label_295bb8;
        case 0x295bbcu: goto label_295bbc;
        case 0x295bc0u: goto label_295bc0;
        case 0x295bc4u: goto label_295bc4;
        case 0x295bc8u: goto label_295bc8;
        case 0x295bccu: goto label_295bcc;
        case 0x295bd0u: goto label_295bd0;
        case 0x295bd4u: goto label_295bd4;
        case 0x295bd8u: goto label_295bd8;
        case 0x295bdcu: goto label_295bdc;
        case 0x295be0u: goto label_295be0;
        case 0x295be4u: goto label_295be4;
        case 0x295be8u: goto label_295be8;
        case 0x295becu: goto label_295bec;
        case 0x295bf0u: goto label_295bf0;
        case 0x295bf4u: goto label_295bf4;
        case 0x295bf8u: goto label_295bf8;
        case 0x295bfcu: goto label_295bfc;
        case 0x295c00u: goto label_295c00;
        case 0x295c04u: goto label_295c04;
        case 0x295c08u: goto label_295c08;
        case 0x295c0cu: goto label_295c0c;
        case 0x295c10u: goto label_295c10;
        case 0x295c14u: goto label_295c14;
        case 0x295c18u: goto label_295c18;
        case 0x295c1cu: goto label_295c1c;
        case 0x295c20u: goto label_295c20;
        case 0x295c24u: goto label_295c24;
        case 0x295c28u: goto label_295c28;
        case 0x295c2cu: goto label_295c2c;
        case 0x295c30u: goto label_295c30;
        case 0x295c34u: goto label_295c34;
        case 0x295c38u: goto label_295c38;
        case 0x295c3cu: goto label_295c3c;
        case 0x295c40u: goto label_295c40;
        case 0x295c44u: goto label_295c44;
        case 0x295c48u: goto label_295c48;
        case 0x295c4cu: goto label_295c4c;
        case 0x295c50u: goto label_295c50;
        case 0x295c54u: goto label_295c54;
        case 0x295c58u: goto label_295c58;
        case 0x295c5cu: goto label_295c5c;
        case 0x295c60u: goto label_295c60;
        case 0x295c64u: goto label_295c64;
        case 0x295c68u: goto label_295c68;
        case 0x295c6cu: goto label_295c6c;
        case 0x295c70u: goto label_295c70;
        case 0x295c74u: goto label_295c74;
        case 0x295c78u: goto label_295c78;
        case 0x295c7cu: goto label_295c7c;
        case 0x295c80u: goto label_295c80;
        case 0x295c84u: goto label_295c84;
        case 0x295c88u: goto label_295c88;
        case 0x295c8cu: goto label_295c8c;
        case 0x295c90u: goto label_295c90;
        case 0x295c94u: goto label_295c94;
        case 0x295c98u: goto label_295c98;
        case 0x295c9cu: goto label_295c9c;
        case 0x295ca0u: goto label_295ca0;
        case 0x295ca4u: goto label_295ca4;
        case 0x295ca8u: goto label_295ca8;
        case 0x295cacu: goto label_295cac;
        case 0x295cb0u: goto label_295cb0;
        case 0x295cb4u: goto label_295cb4;
        case 0x295cb8u: goto label_295cb8;
        case 0x295cbcu: goto label_295cbc;
        case 0x295cc0u: goto label_295cc0;
        case 0x295cc4u: goto label_295cc4;
        case 0x295cc8u: goto label_295cc8;
        case 0x295cccu: goto label_295ccc;
        case 0x295cd0u: goto label_295cd0;
        case 0x295cd4u: goto label_295cd4;
        case 0x295cd8u: goto label_295cd8;
        case 0x295cdcu: goto label_295cdc;
        case 0x295ce0u: goto label_295ce0;
        case 0x295ce4u: goto label_295ce4;
        case 0x295ce8u: goto label_295ce8;
        case 0x295cecu: goto label_295cec;
        case 0x295cf0u: goto label_295cf0;
        case 0x295cf4u: goto label_295cf4;
        case 0x295cf8u: goto label_295cf8;
        case 0x295cfcu: goto label_295cfc;
        case 0x295d00u: goto label_295d00;
        case 0x295d04u: goto label_295d04;
        case 0x295d08u: goto label_295d08;
        case 0x295d0cu: goto label_295d0c;
        case 0x295d10u: goto label_295d10;
        case 0x295d14u: goto label_295d14;
        case 0x295d18u: goto label_295d18;
        case 0x295d1cu: goto label_295d1c;
        case 0x295d20u: goto label_295d20;
        case 0x295d24u: goto label_295d24;
        case 0x295d28u: goto label_295d28;
        case 0x295d2cu: goto label_295d2c;
        case 0x295d30u: goto label_295d30;
        case 0x295d34u: goto label_295d34;
        case 0x295d38u: goto label_295d38;
        case 0x295d3cu: goto label_295d3c;
        case 0x295d40u: goto label_295d40;
        case 0x295d44u: goto label_295d44;
        case 0x295d48u: goto label_295d48;
        case 0x295d4cu: goto label_295d4c;
        case 0x295d50u: goto label_295d50;
        case 0x295d54u: goto label_295d54;
        case 0x295d58u: goto label_295d58;
        case 0x295d5cu: goto label_295d5c;
        case 0x295d60u: goto label_295d60;
        case 0x295d64u: goto label_295d64;
        case 0x295d68u: goto label_295d68;
        case 0x295d6cu: goto label_295d6c;
        case 0x295d70u: goto label_295d70;
        case 0x295d74u: goto label_295d74;
        case 0x295d78u: goto label_295d78;
        case 0x295d7cu: goto label_295d7c;
        case 0x295d80u: goto label_295d80;
        case 0x295d84u: goto label_295d84;
        case 0x295d88u: goto label_295d88;
        case 0x295d8cu: goto label_295d8c;
        case 0x295d90u: goto label_295d90;
        case 0x295d94u: goto label_295d94;
        case 0x295d98u: goto label_295d98;
        case 0x295d9cu: goto label_295d9c;
        case 0x295da0u: goto label_295da0;
        case 0x295da4u: goto label_295da4;
        case 0x295da8u: goto label_295da8;
        case 0x295dacu: goto label_295dac;
        case 0x295db0u: goto label_295db0;
        case 0x295db4u: goto label_295db4;
        case 0x295db8u: goto label_295db8;
        case 0x295dbcu: goto label_295dbc;
        case 0x295dc0u: goto label_295dc0;
        case 0x295dc4u: goto label_295dc4;
        case 0x295dc8u: goto label_295dc8;
        case 0x295dccu: goto label_295dcc;
        case 0x295dd0u: goto label_295dd0;
        case 0x295dd4u: goto label_295dd4;
        case 0x295dd8u: goto label_295dd8;
        case 0x295ddcu: goto label_295ddc;
        case 0x295de0u: goto label_295de0;
        case 0x295de4u: goto label_295de4;
        case 0x295de8u: goto label_295de8;
        case 0x295decu: goto label_295dec;
        case 0x295df0u: goto label_295df0;
        case 0x295df4u: goto label_295df4;
        case 0x295df8u: goto label_295df8;
        case 0x295dfcu: goto label_295dfc;
        default: return;
    }

label_295630:
    // 0x295630: 0x17767  .word       0x00017767                   # nor         $t6, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295630u;
    SET_GPR_U64(ctx, 14, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_295634:
    // 0x295634: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295634u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295634 raw=0x00000001");
 /* MITIGATED */
label_295638:
    // 0x295638: 0x360  .word       0x00000360                   # add         $zero, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295638u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29563c:
    // 0x29563c: 0x0  nop
    ctx->pc = 0x29563cu;
    // NOP
label_295640:
    // 0x295640: 0x17768  .word       0x00017768                   # mfsa        $t6 # 00010740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x295640u;
    SET_GPR_U32(ctx, 14, ctx->sa);
label_295644:
    // 0x295644: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295644u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295644 raw=0x00000001");
 /* MITIGATED */
label_295648:
    // 0x295648: 0x480  sll         $zero, $zero, 18
    ctx->pc = 0x295648u;
    
label_29564c:
    // 0x29564c: 0x0  nop
    ctx->pc = 0x29564cu;
    // NOP
label_295650:
    // 0x295650: 0x17769  .word       0x00017769                   # mtsa        $zero # 00017740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x295650u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_295654:
    // 0x295654: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295654u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295654 raw=0x00000001");
 /* MITIGATED */
label_295658:
    // 0x295658: 0x490  .word       0x00000490                   # mfhi        $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295658u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29565c:
    // 0x29565c: 0x0  nop
    ctx->pc = 0x29565cu;
    // NOP
label_295660:
    // 0x295660: 0x1776a  .word       0x0001776A                   # slt         $t6, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295660u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_295664:
    // 0x295664: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295664u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295664 raw=0x00000001");
 /* MITIGATED */
label_295668:
    // 0x295668: 0x380  sll         $zero, $zero, 14
    ctx->pc = 0x295668u;
    
label_29566c:
    // 0x29566c: 0x0  nop
    ctx->pc = 0x29566cu;
    // NOP
label_295670:
    // 0x295670: 0x1776b  .word       0x0001776B                   # sltu        $t6, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295670u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_295674:
    // 0x295674: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x295674u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_295678:
    // 0x295678: 0x1c90  .word       0x00001C90                   # mfhi        $v1 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295678u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_29567c:
    // 0x29567c: 0x0  nop
    ctx->pc = 0x29567cu;
    // NOP
label_295680:
    // 0x295680: 0x1776f  .word       0x0001776F                   # dsubu       $t6, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295680u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_295684:
    // 0x295684: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295684u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x295684 raw=0x00000005");
 /* MITIGATED */
label_295688:
    // 0x295688: 0x25b0  tge         $zero, $zero, 150
    ctx->pc = 0x295688u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29568c:
    // 0x29568c: 0x0  nop
    ctx->pc = 0x29568cu;
    // NOP
label_295690:
    // 0x295690: 0x17774  teq         $zero, $at, 477
    ctx->pc = 0x295690u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_295694:
    // 0x295694: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x295694u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_295698:
    // 0x295698: 0xd70  tge         $zero, $zero, 53
    ctx->pc = 0x295698u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29569c:
    // 0x29569c: 0x0  nop
    ctx->pc = 0x29569cu;
    // NOP
label_2956a0:
    // 0x2956a0: 0x17776  tne         $zero, $at, 477
    ctx->pc = 0x2956a0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2956a4:
    // 0x2956a4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2956a4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2956a8:
    // 0x2956a8: 0x1fa0  .word       0x00001FA0                   # add         $v1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2956a8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2956ac:
    // 0x2956ac: 0x0  nop
    ctx->pc = 0x2956acu;
    // NOP
label_2956b0:
    // 0x2956b0: 0x1777a  dsrl        $t6, $at, 29
    ctx->pc = 0x2956b0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) >> 29);
label_2956b4:
    // 0x2956b4: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x2956b4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_2956b8:
    // 0x2956b8: 0x16b0  tge         $zero, $zero, 90
    ctx->pc = 0x2956b8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2956bc:
    // 0x2956bc: 0x0  nop
    ctx->pc = 0x2956bcu;
    // NOP
label_2956c0:
    // 0x2956c0: 0x1777d  .word       0x0001777D                   # INVALID     $zero, $at, 0x777D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2956c0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2956C0 raw=0x0001777D");
 /* MITIGATED */
label_2956c4:
    // 0x2956c4: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2956c4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2956C4 raw=0x00000005");
 /* MITIGATED */
label_2956c8:
    // 0x2956c8: 0x25b0  tge         $zero, $zero, 150
    ctx->pc = 0x2956c8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2956cc:
    // 0x2956cc: 0x0  nop
    ctx->pc = 0x2956ccu;
    // NOP
label_2956d0:
    // 0x2956d0: 0x17782  srl         $t6, $at, 30
    ctx->pc = 0x2956d0u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 1), 30));
label_2956d4:
    // 0x2956d4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2956d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2956d8:
    // 0x2956d8: 0x1970  tge         $zero, $zero, 101
    ctx->pc = 0x2956d8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2956dc:
    // 0x2956dc: 0x0  nop
    ctx->pc = 0x2956dcu;
    // NOP
label_2956e0:
    // 0x2956e0: 0x17786  .word       0x00017786                   # srlv        $t6, $at, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2956e0u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_2956e4:
    // 0x2956e4: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x2956e4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2956e8:
    // 0x2956e8: 0x28c0  sll         $a1, $zero, 3
    ctx->pc = 0x2956e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_2956ec:
    // 0x2956ec: 0x0  nop
    ctx->pc = 0x2956ecu;
    // NOP
label_2956f0:
    // 0x2956f0: 0x1778c  .word       0x0001778C                   # syscall     478 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2956f0u;
    ctx->pc = 0x2956F4u;
runtime->handleSyscall(rdram, ctx, 0x5DEu);
label_2956f4:
    // 0x2956f4: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x2956f4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2956f8:
    // 0x2956f8: 0x2ef0  tge         $zero, $zero, 187
    ctx->pc = 0x2956f8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2956fc:
    // 0x2956fc: 0x0  nop
    ctx->pc = 0x2956fcu;
    // NOP
label_295700:
    // 0x295700: 0x17792  .word       0x00017792                   # mflo        $t6 # 00010780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295700u;
    SET_GPR_U64(ctx, 14, ctx->lo);
label_295704:
    // 0x295704: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x295704u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_295708:
    // 0x295708: 0x2ef0  tge         $zero, $zero, 187
    ctx->pc = 0x295708u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29570c:
    // 0x29570c: 0x0  nop
    ctx->pc = 0x29570cu;
    // NOP
label_295710:
    // 0x295710: 0x17798  .word       0x00017798                   # mult        $t6, $zero, $at # 00000780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x295710u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_295714:
    // 0x295714: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x295714u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_295718:
    // 0x295718: 0x2ef0  tge         $zero, $zero, 187
    ctx->pc = 0x295718u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29571c:
    // 0x29571c: 0x0  nop
    ctx->pc = 0x29571cu;
    // NOP
label_295720:
    // 0x295720: 0x1779e  .word       0x0001779E                   # ddiv        $t6, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295720u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x295720 raw=0x0001779E");
 /* MITIGATED */
label_295724:
    // 0x295724: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x295724u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_295728:
    // 0x295728: 0x2f30  tge         $zero, $zero, 188
    ctx->pc = 0x295728u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29572c:
    // 0x29572c: 0x0  nop
    ctx->pc = 0x29572cu;
    // NOP
label_295730:
    // 0x295730: 0x177a4  .word       0x000177A4                   # and         $t6, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295730u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_295734:
    // 0x295734: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x295734u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_295738:
    // 0x295738: 0x2ef0  tge         $zero, $zero, 187
    ctx->pc = 0x295738u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29573c:
    // 0x29573c: 0x0  nop
    ctx->pc = 0x29573cu;
    // NOP
label_295740:
    // 0x295740: 0x177aa  .word       0x000177AA                   # slt         $t6, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295740u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_295744:
    // 0x295744: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x295744u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_295748:
    // 0x295748: 0x2ef0  tge         $zero, $zero, 187
    ctx->pc = 0x295748u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29574c:
    // 0x29574c: 0x0  nop
    ctx->pc = 0x29574cu;
    // NOP
label_295750:
    // 0x295750: 0x177b0  tge         $zero, $at, 478
    ctx->pc = 0x295750u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_295754:
    // 0x295754: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x295754u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_295758:
    // 0x295758: 0x2e80  sll         $a1, $zero, 26
    ctx->pc = 0x295758u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_29575c:
    // 0x29575c: 0x0  nop
    ctx->pc = 0x29575cu;
    // NOP
label_295760:
    // 0x295760: 0x177b6  tne         $zero, $at, 478
    ctx->pc = 0x295760u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_295764:
    // 0x295764: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x295764u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_295768:
    // 0x295768: 0xa60  .word       0x00000A60                   # add         $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295768u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_29576c:
    // 0x29576c: 0x0  nop
    ctx->pc = 0x29576cu;
    // NOP
label_295770:
    // 0x295770: 0x177b8  dsll        $t6, $at, 30
    ctx->pc = 0x295770u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) << 30);
label_295774:
    // 0x295774: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x295774u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_295778:
    // 0x295778: 0x1370  tge         $zero, $zero, 77
    ctx->pc = 0x295778u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29577c:
    // 0x29577c: 0x0  nop
    ctx->pc = 0x29577cu;
    // NOP
label_295780:
    // 0x295780: 0x177bb  dsra        $t6, $at, 30
    ctx->pc = 0x295780u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 1) >> 30);
label_295784:
    // 0x295784: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x295784u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_295788:
    // 0x295788: 0x2f00  sll         $a1, $zero, 28
    ctx->pc = 0x295788u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_29578c:
    // 0x29578c: 0x0  nop
    ctx->pc = 0x29578cu;
    // NOP
label_295790:
    // 0x295790: 0x177c1  .word       0x000177C1                   # INVALID     $zero, $at, 0x77C1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295790u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295790 raw=0x000177C1");
 /* MITIGATED */
label_295794:
    // 0x295794: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x295794u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_295798:
    // 0x295798: 0x2f10  .word       0x00002F10                   # mfhi        $a1 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295798u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_29579c:
    // 0x29579c: 0x0  nop
    ctx->pc = 0x29579cu;
    // NOP
label_2957a0:
    // 0x2957a0: 0x177c7  .word       0x000177C7                   # srav        $t6, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2957a0u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_2957a4:
    // 0x2957a4: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x2957a4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2957a8:
    // 0x2957a8: 0x31f0  tge         $zero, $zero, 199
    ctx->pc = 0x2957a8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2957ac:
    // 0x2957ac: 0x0  nop
    ctx->pc = 0x2957acu;
    // NOP
label_2957b0:
    // 0x2957b0: 0x177ce  .word       0x000177CE                   # INVALID     $zero, $at, 0x77CE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2957b0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2957B0 raw=0x000177CE");
 /* MITIGATED */
label_2957b4:
    // 0x2957b4: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x2957b4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2957b8:
    // 0x2957b8: 0x2f30  tge         $zero, $zero, 188
    ctx->pc = 0x2957b8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2957bc:
    // 0x2957bc: 0x0  nop
    ctx->pc = 0x2957bcu;
    // NOP
label_2957c0:
    // 0x2957c0: 0x177d4  .word       0x000177D4                   # dsllv       $t6, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2957c0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_2957c4:
    // 0x2957c4: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x2957c4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_2957c8:
    // 0x2957c8: 0x1690  .word       0x00001690                   # mfhi        $v0 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2957c8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2957cc:
    // 0x2957cc: 0x0  nop
    ctx->pc = 0x2957ccu;
    // NOP
label_2957d0:
    // 0x2957d0: 0x177d7  .word       0x000177D7                   # dsrav       $t6, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2957d0u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_2957d4:
    // 0x2957d4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2957d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2957d8:
    // 0x2957d8: 0x1990  .word       0x00001990                   # mfhi        $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2957d8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2957dc:
    // 0x2957dc: 0x0  nop
    ctx->pc = 0x2957dcu;
    // NOP
label_2957e0:
    // 0x2957e0: 0x177db  .word       0x000177DB                   # divu        $t6, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2957e0u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2957e4:
    // 0x2957e4: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x2957e4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2957e8:
    // 0x2957e8: 0x2f00  sll         $a1, $zero, 28
    ctx->pc = 0x2957e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_2957ec:
    // 0x2957ec: 0x0  nop
    ctx->pc = 0x2957ecu;
    // NOP
label_2957f0:
    // 0x2957f0: 0x177e1  .word       0x000177E1                   # addu        $t6, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2957f0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_2957f4:
    // 0x2957f4: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x2957f4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2957f8:
    // 0x2957f8: 0x2f00  sll         $a1, $zero, 28
    ctx->pc = 0x2957f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_2957fc:
    // 0x2957fc: 0x0  nop
    ctx->pc = 0x2957fcu;
    // NOP
label_295800:
    // 0x295800: 0x177e7  .word       0x000177E7                   # nor         $t6, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295800u;
    SET_GPR_U64(ctx, 14, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_295804:
    // 0x295804: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x295804u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_295808:
    // 0x295808: 0x1390  .word       0x00001390                   # mfhi        $v0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295808u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_29580c:
    // 0x29580c: 0x0  nop
    ctx->pc = 0x29580cu;
    // NOP
label_295810:
    // 0x295810: 0x177ea  .word       0x000177EA                   # slt         $t6, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295810u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_295814:
    // 0x295814: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x295814u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_295818:
    // 0x295818: 0x1770  tge         $zero, $zero, 93
    ctx->pc = 0x295818u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29581c:
    // 0x29581c: 0x0  nop
    ctx->pc = 0x29581cu;
    // NOP
label_295820:
    // 0x295820: 0x177ed  .word       0x000177ED                   # daddu       $t6, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295820u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_295824:
    // 0x295824: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295824u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x295824 raw=0x00000005");
 /* MITIGATED */
label_295828:
    // 0x295828: 0x22b0  tge         $zero, $zero, 138
    ctx->pc = 0x295828u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29582c:
    // 0x29582c: 0x0  nop
    ctx->pc = 0x29582cu;
    // NOP
label_295830:
    // 0x295830: 0x177f2  tlt         $zero, $at, 479
    ctx->pc = 0x295830u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_295834:
    // 0x295834: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x295834u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_295838:
    // 0x295838: 0x2f10  .word       0x00002F10                   # mfhi        $a1 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295838u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_29583c:
    // 0x29583c: 0x0  nop
    ctx->pc = 0x29583cu;
    // NOP
label_295840:
    // 0x295840: 0x177f8  dsll        $t6, $at, 31
    ctx->pc = 0x295840u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) << 31);
label_295844:
    // 0x295844: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x295844u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_295848:
    // 0x295848: 0x2ef0  tge         $zero, $zero, 187
    ctx->pc = 0x295848u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29584c:
    // 0x29584c: 0x0  nop
    ctx->pc = 0x29584cu;
    // NOP
label_295850:
    // 0x295850: 0x177fe  dsrl32      $t6, $at, 31
    ctx->pc = 0x295850u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) >> (32 + 31));
label_295854:
    // 0x295854: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x295854u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_295858:
    // 0x295858: 0x2eb0  tge         $zero, $zero, 186
    ctx->pc = 0x295858u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29585c:
    // 0x29585c: 0x0  nop
    ctx->pc = 0x29585cu;
    // NOP
label_295860:
    // 0x295860: 0x17804  sllv        $t7, $at, $zero
    ctx->pc = 0x295860u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_295864:
    // 0x295864: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x295864u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_295868:
    // 0x295868: 0x2eb0  tge         $zero, $zero, 186
    ctx->pc = 0x295868u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29586c:
    // 0x29586c: 0x0  nop
    ctx->pc = 0x29586cu;
    // NOP
label_295870:
    // 0x295870: 0x1780a  movz        $t7, $zero, $at
    ctx->pc = 0x295870u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 0));
label_295874:
    // 0x295874: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x295874u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_295878:
    // 0x295878: 0x2e10  .word       0x00002E10                   # mfhi        $a1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295878u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_29587c:
    // 0x29587c: 0x0  nop
    ctx->pc = 0x29587cu;
    // NOP
label_295880:
    // 0x295880: 0x17810  .word       0x00017810                   # mfhi        $t7 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295880u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_295884:
    // 0x295884: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x295884u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_295888:
    // 0x295888: 0x2f30  tge         $zero, $zero, 188
    ctx->pc = 0x295888u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29588c:
    // 0x29588c: 0x0  nop
    ctx->pc = 0x29588cu;
    // NOP
label_295890:
    // 0x295890: 0x17816  dsrlv       $t7, $at, $zero
    ctx->pc = 0x295890u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_295894:
    // 0x295894: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x295894u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_295898:
    // 0x295898: 0x2f00  sll         $a1, $zero, 28
    ctx->pc = 0x295898u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_29589c:
    // 0x29589c: 0x0  nop
    ctx->pc = 0x29589cu;
    // NOP
label_2958a0:
    // 0x2958a0: 0x1781c  .word       0x0001781C                   # dmult       $zero, $at # 00007800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2958a0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2958A0 raw=0x0001781C");
 /* MITIGATED */
label_2958a4:
    // 0x2958a4: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x2958a4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2958a8:
    // 0x2958a8: 0x2ef0  tge         $zero, $zero, 187
    ctx->pc = 0x2958a8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2958ac:
    // 0x2958ac: 0x0  nop
    ctx->pc = 0x2958acu;
    // NOP
label_2958b0:
    // 0x2958b0: 0x17822  neg         $t7, $at
    ctx->pc = 0x2958b0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_2958b4:
    // 0x2958b4: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x2958b4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2958b8:
    // 0x2958b8: 0x2ef0  tge         $zero, $zero, 187
    ctx->pc = 0x2958b8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2958bc:
    // 0x2958bc: 0x0  nop
    ctx->pc = 0x2958bcu;
    // NOP
label_2958c0:
    // 0x2958c0: 0x17828  .word       0x00017828                   # mfsa        $t7 # 00010000 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2958c0u;
    SET_GPR_U32(ctx, 15, ctx->sa);
label_2958c4:
    // 0x2958c4: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x2958c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2958c8:
    // 0x2958c8: 0x2f00  sll         $a1, $zero, 28
    ctx->pc = 0x2958c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_2958cc:
    // 0x2958cc: 0x0  nop
    ctx->pc = 0x2958ccu;
    // NOP
label_2958d0:
    // 0x2958d0: 0x1782e  dsub        $t7, $zero, $at
    ctx->pc = 0x2958d0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, r); }
label_2958d4:
    // 0x2958d4: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x2958d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2958d8:
    // 0x2958d8: 0x2f00  sll         $a1, $zero, 28
    ctx->pc = 0x2958d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_2958dc:
    // 0x2958dc: 0x0  nop
    ctx->pc = 0x2958dcu;
    // NOP
label_2958e0:
    // 0x2958e0: 0x17834  teq         $zero, $at, 480
    ctx->pc = 0x2958e0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2958e4:
    // 0x2958e4: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x2958e4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2958e8:
    // 0x2958e8: 0x2f00  sll         $a1, $zero, 28
    ctx->pc = 0x2958e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_2958ec:
    // 0x2958ec: 0x0  nop
    ctx->pc = 0x2958ecu;
    // NOP
label_2958f0:
    // 0x2958f0: 0x1783a  dsrl        $t7, $at, 0
    ctx->pc = 0x2958f0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 1) >> 0);
label_2958f4:
    // 0x2958f4: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x2958f4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2958f8:
    // 0x2958f8: 0x2f00  sll         $a1, $zero, 28
    ctx->pc = 0x2958f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_2958fc:
    // 0x2958fc: 0x0  nop
    ctx->pc = 0x2958fcu;
    // NOP
label_295900:
    // 0x295900: 0x17840  sll         $t7, $at, 1
    ctx->pc = 0x295900u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_295904:
    // 0x295904: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x295904u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_295908:
    // 0x295908: 0x2f00  sll         $a1, $zero, 28
    ctx->pc = 0x295908u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_29590c:
    // 0x29590c: 0x0  nop
    ctx->pc = 0x29590cu;
    // NOP
label_295910:
    // 0x295910: 0x17846  .word       0x00017846                   # srlv        $t7, $at, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295910u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_295914:
    // 0x295914: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x295914u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_295918:
    // 0x295918: 0x2f00  sll         $a1, $zero, 28
    ctx->pc = 0x295918u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_29591c:
    // 0x29591c: 0x0  nop
    ctx->pc = 0x29591cu;
    // NOP
label_295920:
    // 0x295920: 0x1784c  .word       0x0001784C                   # syscall     481 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295920u;
    ctx->pc = 0x295924u;
runtime->handleSyscall(rdram, ctx, 0x5E1u);
label_295924:
    // 0x295924: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x295924u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_295928:
    // 0x295928: 0x2f00  sll         $a1, $zero, 28
    ctx->pc = 0x295928u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_29592c:
    // 0x29592c: 0x0  nop
    ctx->pc = 0x29592cu;
    // NOP
label_295930:
    // 0x295930: 0x17852  .word       0x00017852                   # mflo        $t7 # 00010040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295930u;
    SET_GPR_U64(ctx, 15, ctx->lo);
label_295934:
    // 0x295934: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x295934u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_295938:
    // 0x295938: 0x2f00  sll         $a1, $zero, 28
    ctx->pc = 0x295938u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_29593c:
    // 0x29593c: 0x0  nop
    ctx->pc = 0x29593cu;
    // NOP
label_295940:
    // 0x295940: 0x17858  .word       0x00017858                   # mult        $t7, $zero, $at # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x295940u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_295944:
    // 0x295944: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295944u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295944 raw=0x00000001");
 /* MITIGATED */
label_295948:
    // 0x295948: 0x3d0  .word       0x000003D0                   # mfhi        $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295948u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29594c:
    // 0x29594c: 0x0  nop
    ctx->pc = 0x29594cu;
    // NOP
label_295950:
    // 0x295950: 0x17859  .word       0x00017859                   # multu       $zero, $at # 00007840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295950u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_295954:
    // 0x295954: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x295954u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_295958:
    // 0x295958: 0xd50  .word       0x00000D50                   # mfhi        $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295958u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_29595c:
    // 0x29595c: 0x0  nop
    ctx->pc = 0x29595cu;
    // NOP
label_295960:
    // 0x295960: 0x1785b  .word       0x0001785B                   # divu        $t7, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295960u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_295964:
    // 0x295964: 0x9  jalr        $zero, $zero
label_295968:
    if (ctx->pc == 0x295968u) {
        ctx->pc = 0x295968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295964u;
        // 0x295968: 0x4170  tge         $zero, $zero, 261 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29596Cu;
        goto label_29596c;
    }
    ctx->pc = 0x295964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x295968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295964u;
        // 0x295968: 0x4170  tge         $zero, $zero, 261 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295964u, 0x29596Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29596Cu;
label_29596c:
    // 0x29596c: 0x0  nop
    ctx->pc = 0x29596cu;
    // NOP
label_295970:
    // 0x295970: 0x17864  .word       0x00017864                   # and         $t7, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295970u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_295974:
    // 0x295974: 0x9  jalr        $zero, $zero
label_295978:
    if (ctx->pc == 0x295978u) {
        ctx->pc = 0x295978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295974u;
        // 0x295978: 0x4190  .word       0x00004190                   # mfhi        $t0 # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 8, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29597Cu;
        goto label_29597c;
    }
    ctx->pc = 0x295974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x295978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295974u;
        // 0x295978: 0x4190  .word       0x00004190                   # mfhi        $t0 # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 8, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295974u, 0x29597Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29597Cu;
label_29597c:
    // 0x29597c: 0x0  nop
    ctx->pc = 0x29597cu;
    // NOP
label_295980:
    // 0x295980: 0x1786d  .word       0x0001786D                   # daddu       $t7, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295980u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_295984:
    // 0x295984: 0x9  jalr        $zero, $zero
label_295988:
    if (ctx->pc == 0x295988u) {
        ctx->pc = 0x295988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295984u;
        // 0x295988: 0x4190  .word       0x00004190                   # mfhi        $t0 # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 8, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29598Cu;
        goto label_29598c;
    }
    ctx->pc = 0x295984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x295988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295984u;
        // 0x295988: 0x4190  .word       0x00004190                   # mfhi        $t0 # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 8, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295984u, 0x29598Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29598Cu;
label_29598c:
    // 0x29598c: 0x0  nop
    ctx->pc = 0x29598cu;
    // NOP
label_295990:
    // 0x295990: 0x17876  tne         $zero, $at, 481
    ctx->pc = 0x295990u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_295994:
    // 0x295994: 0x40  sll         $zero, $zero, 1
    ctx->pc = 0x295994u;
    
label_295998:
    // 0x295998: 0x1f920  .word       0x0001F920                   # add         $ra, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295998u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_29599c:
    // 0x29599c: 0x0  nop
    ctx->pc = 0x29599cu;
    // NOP
label_2959a0:
    // 0x2959a0: 0x178b6  tne         $zero, $at, 482
    ctx->pc = 0x2959a0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2959a4:
    // 0x2959a4: 0xca  .word       0x000000CA                   # movz        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2959a4u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2959a8:
    // 0x2959a8: 0x64960  .word       0x00064960                   # add         $t1, $zero, $a2 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2959a8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_2959ac:
    // 0x2959ac: 0x0  nop
    ctx->pc = 0x2959acu;
    // NOP
label_2959b0:
    // 0x2959b0: 0x17980  sll         $t7, $at, 6
    ctx->pc = 0x2959b0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 1), 6));
label_2959b4:
    // 0x2959b4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x2959b4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2959b8:
    // 0x2959b8: 0xd5b0  tge         $zero, $zero, 854
    ctx->pc = 0x2959b8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2959bc:
    // 0x2959bc: 0x0  nop
    ctx->pc = 0x2959bcu;
    // NOP
label_2959c0:
    // 0x2959c0: 0x1799b  .word       0x0001799B                   # divu        $t7, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2959c0u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2959c4:
    // 0x2959c4: 0x9a  .word       0x0000009A                   # div         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2959c4u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2959c8:
    // 0x2959c8: 0x4cef0  tge         $zero, $a0, 827
    ctx->pc = 0x2959c8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_2959cc:
    // 0x2959cc: 0x0  nop
    ctx->pc = 0x2959ccu;
    // NOP
label_2959d0:
    // 0x2959d0: 0x17a35  .word       0x00017A35                   # INVALID     $zero, $at, 0x7A35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2959d0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2959D0 raw=0x00017A35");
 /* MITIGATED */
label_2959d4:
    // 0x2959d4: 0xe8  .word       0x000000E8                   # mfsa        $zero # 000000C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2959d4u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_2959d8:
    // 0x2959d8: 0x73d80  sll         $a3, $a3, 22
    ctx->pc = 0x2959d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 22));
label_2959dc:
    // 0x2959dc: 0x0  nop
    ctx->pc = 0x2959dcu;
    // NOP
label_2959e0:
    // 0x2959e0: 0x17b1d  .word       0x00017B1D                   # dmultu      $zero, $at # 00007B00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2959e0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2959E0 raw=0x00017B1D");
 /* MITIGATED */
label_2959e4:
    // 0x2959e4: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x2959e4u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2959e8:
    // 0x2959e8: 0x18fe0  .word       0x00018FE0                   # add         $s1, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2959e8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2959ec:
    // 0x2959ec: 0x0  nop
    ctx->pc = 0x2959ecu;
    // NOP
label_2959f0:
    // 0x2959f0: 0x17b4f  .word       0x00017B4F                   # sync # 00017800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2959f0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2959f4:
    // 0x2959f4: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2959f4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2959f8:
    // 0x2959f8: 0x16db0  tge         $zero, $at, 438
    ctx->pc = 0x2959f8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2959fc:
    // 0x2959fc: 0x0  nop
    ctx->pc = 0x2959fcu;
    // NOP
label_295a00:
    // 0x295a00: 0x17b7d  .word       0x00017B7D                   # INVALID     $zero, $at, 0x7B7D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295a00u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x295A00 raw=0x00017B7D");
 /* MITIGATED */
label_295a04:
    // 0x295a04: 0x137  .word       0x00000137                   # INVALID     $zero, $zero, 0x137 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295a04u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x295A04 raw=0x00000137");
 /* MITIGATED */
label_295a08:
    // 0x295a08: 0x9b3c0  sll         $s6, $t1, 15
    ctx->pc = 0x295a08u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 9), 15));
label_295a0c:
    // 0x295a0c: 0x0  nop
    ctx->pc = 0x295a0cu;
    // NOP
label_295a10:
    // 0x295a10: 0x17cb4  teq         $zero, $at, 498
    ctx->pc = 0x295a10u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_295a14:
    // 0x295a14: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x295a14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_295a18:
    // 0x295a18: 0xfb00  sll         $ra, $zero, 12
    ctx->pc = 0x295a18u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_295a1c:
    // 0x295a1c: 0x0  nop
    ctx->pc = 0x295a1cu;
    // NOP
label_295a20:
    // 0x295a20: 0x17cd4  .word       0x00017CD4                   # dsllv       $t7, $at, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295a20u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_295a24:
    // 0x295a24: 0x29  mtsa        $zero
    ctx->pc = 0x295a24u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_295a28:
    // 0x295a28: 0x14450  .word       0x00014450                   # mfhi        $t0 # 00010440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295a28u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_295a2c:
    // 0x295a2c: 0x0  nop
    ctx->pc = 0x295a2cu;
    // NOP
label_295a30:
    // 0x295a30: 0x17cfd  .word       0x00017CFD                   # INVALID     $zero, $at, 0x7CFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295a30u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x295A30 raw=0x00017CFD");
 /* MITIGATED */
label_295a34:
    // 0x295a34: 0x34  teq         $zero, $zero, 0
    ctx->pc = 0x295a34u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_295a38:
    // 0x295a38: 0x19fe0  .word       0x00019FE0                   # add         $s3, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295a38u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_295a3c:
    // 0x295a3c: 0x0  nop
    ctx->pc = 0x295a3cu;
    // NOP
label_295a40:
    // 0x295a40: 0x17d31  tgeu        $zero, $at, 500
    ctx->pc = 0x295a40u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_295a44:
    // 0x295a44: 0x2d  daddu       $zero, $zero, $zero
    ctx->pc = 0x295a44u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_295a48:
    // 0x295a48: 0x16260  .word       0x00016260                   # add         $t4, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295a48u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_295a4c:
    // 0x295a4c: 0x0  nop
    ctx->pc = 0x295a4cu;
    // NOP
label_295a50:
    // 0x295a50: 0x17d5e  .word       0x00017D5E                   # ddiv        $t7, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295a50u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x295A50 raw=0x00017D5E");
 /* MITIGATED */
label_295a54:
    // 0x295a54: 0x3b  dsra        $zero, $zero, 0
    ctx->pc = 0x295a54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 0);
label_295a58:
    // 0x295a58: 0x1d640  sll         $k0, $at, 25
    ctx->pc = 0x295a58u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 1), 25));
label_295a5c:
    // 0x295a5c: 0x0  nop
    ctx->pc = 0x295a5cu;
    // NOP
label_295a60:
    // 0x295a60: 0x17d99  .word       0x00017D99                   # multu       $zero, $at # 00007D80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295a60u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_295a64:
    // 0x295a64: 0x3e  dsrl32      $zero, $zero, 0
    ctx->pc = 0x295a64u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 0));
label_295a68:
    // 0x295a68: 0x1ed10  .word       0x0001ED10                   # mfhi        $sp # 00010500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295a68u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_295a6c:
    // 0x295a6c: 0x0  nop
    ctx->pc = 0x295a6cu;
    // NOP
label_295a70:
    // 0x295a70: 0x17dd7  .word       0x00017DD7                   # dsrav       $t7, $at, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295a70u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_295a74:
    // 0x295a74: 0x2b  sltu        $zero, $zero, $zero
    ctx->pc = 0x295a74u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_295a78:
    // 0x295a78: 0x15750  .word       0x00015750                   # mfhi        $t2 # 00010740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295a78u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_295a7c:
    // 0x295a7c: 0x0  nop
    ctx->pc = 0x295a7cu;
    // NOP
label_295a80:
    // 0x295a80: 0x17e02  srl         $t7, $at, 24
    ctx->pc = 0x295a80u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 1), 24));
label_295a84:
    // 0x295a84: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x295a84u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_295a88:
    // 0x295a88: 0x105d0  .word       0x000105D0                   # mfhi        $zero # 000105C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295a88u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_295a8c:
    // 0x295a8c: 0x0  nop
    ctx->pc = 0x295a8cu;
    // NOP
label_295a90:
    // 0x295a90: 0x17e23  .word       0x00017E23                   # negu        $t7, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295a90u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_295a94:
    // 0x295a94: 0x2b  sltu        $zero, $zero, $zero
    ctx->pc = 0x295a94u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_295a98:
    // 0x295a98: 0x15160  .word       0x00015160                   # add         $t2, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295a98u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_295a9c:
    // 0x295a9c: 0x0  nop
    ctx->pc = 0x295a9cu;
    // NOP
label_295aa0:
    // 0x295aa0: 0x17e4e  .word       0x00017E4E                   # INVALID     $zero, $at, 0x7E4E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295aa0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x295AA0 raw=0x00017E4E");
 /* MITIGATED */
label_295aa4:
    // 0x295aa4: 0x27  not         $zero, $zero
    ctx->pc = 0x295aa4u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_295aa8:
    // 0x295aa8: 0x13690  .word       0x00013690                   # mfhi        $a2 # 00010680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295aa8u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_295aac:
    // 0x295aac: 0x0  nop
    ctx->pc = 0x295aacu;
    // NOP
label_295ab0:
    // 0x295ab0: 0x17e75  .word       0x00017E75                   # INVALID     $zero, $at, 0x7E75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295ab0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x295AB0 raw=0x00017E75");
 /* MITIGATED */
label_295ab4:
    // 0x295ab4: 0x28  mfsa        $zero
    ctx->pc = 0x295ab4u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_295ab8:
    // 0x295ab8: 0x13f30  tge         $zero, $at, 252
    ctx->pc = 0x295ab8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_295abc:
    // 0x295abc: 0x0  nop
    ctx->pc = 0x295abcu;
    // NOP
label_295ac0:
    // 0x295ac0: 0x17e9d  .word       0x00017E9D                   # dmultu      $zero, $at # 00007E80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295ac0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x295AC0 raw=0x00017E9D");
 /* MITIGATED */
label_295ac4:
    // 0x295ac4: 0x40  sll         $zero, $zero, 1
    ctx->pc = 0x295ac4u;
    
label_295ac8:
    // 0x295ac8: 0x1fae0  .word       0x0001FAE0                   # add         $ra, $zero, $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295ac8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_295acc:
    // 0x295acc: 0x0  nop
    ctx->pc = 0x295accu;
    // NOP
label_295ad0:
    // 0x295ad0: 0x17edd  .word       0x00017EDD                   # dmultu      $zero, $at # 00007EC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295ad0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x295AD0 raw=0x00017EDD");
 /* MITIGATED */
label_295ad4:
    // 0x295ad4: 0x30  tge         $zero, $zero, 0
    ctx->pc = 0x295ad4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_295ad8:
    // 0x295ad8: 0x17ca0  .word       0x00017CA0                   # add         $t7, $zero, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295ad8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_295adc:
    // 0x295adc: 0x0  nop
    ctx->pc = 0x295adcu;
    // NOP
label_295ae0:
    // 0x295ae0: 0x17f0d  break       1, 508
    ctx->pc = 0x295ae0u;
    runtime->handleBreak(rdram, ctx);
label_295ae4:
    // 0x295ae4: 0x2c  dadd        $zero, $zero, $zero
    ctx->pc = 0x295ae4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_295ae8:
    // 0x295ae8: 0x15e50  .word       0x00015E50                   # mfhi        $t3 # 00010640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295ae8u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_295aec:
    // 0x295aec: 0x0  nop
    ctx->pc = 0x295aecu;
    // NOP
label_295af0:
    // 0x295af0: 0x17f39  .word       0x00017F39                   # INVALID     $zero, $at, 0x7F39 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295af0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x295AF0 raw=0x00017F39");
 /* MITIGATED */
label_295af4:
    // 0x295af4: 0x2f  dsubu       $zero, $zero, $zero
    ctx->pc = 0x295af4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_295af8:
    // 0x295af8: 0x17410  .word       0x00017410                   # mfhi        $t6 # 00010400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295af8u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_295afc:
    // 0x295afc: 0x0  nop
    ctx->pc = 0x295afcu;
    // NOP
label_295b00:
    // 0x295b00: 0x17f68  .word       0x00017F68                   # mfsa        $t7 # 00010740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x295b00u;
    SET_GPR_U32(ctx, 15, ctx->sa);
label_295b04:
    // 0x295b04: 0x25  move        $zero, $zero
    ctx->pc = 0x295b04u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_295b08:
    // 0x295b08: 0x12330  tge         $zero, $at, 140
    ctx->pc = 0x295b08u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_295b0c:
    // 0x295b0c: 0x0  nop
    ctx->pc = 0x295b0cu;
    // NOP
label_295b10:
    // 0x295b10: 0x17f8d  break       1, 510
    ctx->pc = 0x295b10u;
    runtime->handleBreak(rdram, ctx);
label_295b14:
    // 0x295b14: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x295b14u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_295b18:
    // 0x295b18: 0x18710  .word       0x00018710                   # mfhi        $s0 # 00010700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295b18u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_295b1c:
    // 0x295b1c: 0x0  nop
    ctx->pc = 0x295b1cu;
    // NOP
label_295b20:
    // 0x295b20: 0x17fbe  dsrl32      $t7, $at, 30
    ctx->pc = 0x295b20u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 1) >> (32 + 30));
label_295b24:
    // 0x295b24: 0x3e  dsrl32      $zero, $zero, 0
    ctx->pc = 0x295b24u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 0));
label_295b28:
    // 0x295b28: 0x1e810  .word       0x0001E810                   # mfhi        $sp # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295b28u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_295b2c:
    // 0x295b2c: 0x0  nop
    ctx->pc = 0x295b2cu;
    // NOP
label_295b30:
    // 0x295b30: 0x17ffc  dsll32      $t7, $at, 31
    ctx->pc = 0x295b30u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 1) << (32 + 31));
label_295b34:
    // 0x295b34: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x295b34u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_295b38:
    // 0x295b38: 0x196c0  sll         $s2, $at, 27
    ctx->pc = 0x295b38u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 1), 27));
label_295b3c:
    // 0x295b3c: 0x0  nop
    ctx->pc = 0x295b3cu;
    // NOP
label_295b40:
    // 0x295b40: 0x1802f  dsubu       $s0, $zero, $at
    ctx->pc = 0x295b40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_295b44:
    // 0x295b44: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x295b44u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_295b48:
    // 0x295b48: 0x16d10  .word       0x00016D10                   # mfhi        $t5 # 00010500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295b48u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_295b4c:
    // 0x295b4c: 0x0  nop
    ctx->pc = 0x295b4cu;
    // NOP
label_295b50:
    // 0x295b50: 0x1805d  .word       0x0001805D                   # dmultu      $zero, $at # 00008040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295b50u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x295B50 raw=0x0001805D");
 /* MITIGATED */
label_295b54:
    // 0x295b54: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x295b54u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_295b58:
    // 0x295b58: 0x1db60  .word       0x0001DB60                   # add         $k1, $zero, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295b58u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_295b5c:
    // 0x295b5c: 0x0  nop
    ctx->pc = 0x295b5cu;
    // NOP
label_295b60:
    // 0x295b60: 0x18099  .word       0x00018099                   # multu       $zero, $at # 00008080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295b60u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_295b64:
    // 0x295b64: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x295b64u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_295b68:
    // 0x295b68: 0x16a90  .word       0x00016A90                   # mfhi        $t5 # 00010280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295b68u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_295b6c:
    // 0x295b6c: 0x0  nop
    ctx->pc = 0x295b6cu;
    // NOP
label_295b70:
    // 0x295b70: 0x180c7  .word       0x000180C7                   # srav        $s0, $at, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295b70u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_295b74:
    // 0x295b74: 0x2d  daddu       $zero, $zero, $zero
    ctx->pc = 0x295b74u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_295b78:
    // 0x295b78: 0x16600  sll         $t4, $at, 24
    ctx->pc = 0x295b78u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 1), 24));
label_295b7c:
    // 0x295b7c: 0x0  nop
    ctx->pc = 0x295b7cu;
    // NOP
label_295b80:
    // 0x295b80: 0x180f4  teq         $zero, $at, 515
    ctx->pc = 0x295b80u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_295b84:
    // 0x295b84: 0x29  mtsa        $zero
    ctx->pc = 0x295b84u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_295b88:
    // 0x295b88: 0x140c0  sll         $t0, $at, 3
    ctx->pc = 0x295b88u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 1), 3));
label_295b8c:
    // 0x295b8c: 0x0  nop
    ctx->pc = 0x295b8cu;
    // NOP
label_295b90:
    // 0x295b90: 0x1811d  .word       0x0001811D                   # dmultu      $zero, $at # 00008100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295b90u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x295B90 raw=0x0001811D");
 /* MITIGATED */
label_295b94:
    // 0x295b94: 0x3a  dsrl        $zero, $zero, 0
    ctx->pc = 0x295b94u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 0);
label_295b98:
    // 0x295b98: 0x1c8e0  .word       0x0001C8E0                   # add         $t9, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295b98u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_295b9c:
    // 0x295b9c: 0x0  nop
    ctx->pc = 0x295b9cu;
    // NOP
label_295ba0:
    // 0x295ba0: 0x18157  .word       0x00018157                   # dsrav       $s0, $at, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295ba0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_295ba4:
    // 0x295ba4: 0x3a  dsrl        $zero, $zero, 0
    ctx->pc = 0x295ba4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 0);
label_295ba8:
    // 0x295ba8: 0x1cf20  .word       0x0001CF20                   # add         $t9, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295ba8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_295bac:
    // 0x295bac: 0x0  nop
    ctx->pc = 0x295bacu;
    // NOP
label_295bb0:
    // 0x295bb0: 0x18191  .word       0x00018191                   # mthi        $zero # 00018180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295bb0u;
    ctx->hi = GPR_U64(ctx, 0);
label_295bb4:
    // 0x295bb4: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x295bb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_295bb8:
    // 0x295bb8: 0xfeb0  tge         $zero, $zero, 1018
    ctx->pc = 0x295bb8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_295bbc:
    // 0x295bbc: 0x0  nop
    ctx->pc = 0x295bbcu;
    // NOP
label_295bc0:
    // 0x295bc0: 0x181b1  tgeu        $zero, $at, 518
    ctx->pc = 0x295bc0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_295bc4:
    // 0x295bc4: 0x3e  dsrl32      $zero, $zero, 0
    ctx->pc = 0x295bc4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 0));
label_295bc8:
    // 0x295bc8: 0x1ee50  .word       0x0001EE50                   # mfhi        $sp # 00010640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295bc8u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_295bcc:
    // 0x295bcc: 0x0  nop
    ctx->pc = 0x295bccu;
    // NOP
label_295bd0:
    // 0x295bd0: 0x181ef  .word       0x000181EF                   # dsubu       $s0, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295bd0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_295bd4:
    // 0x295bd4: 0x2a  slt         $zero, $zero, $zero
    ctx->pc = 0x295bd4u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_295bd8:
    // 0x295bd8: 0x14ef0  tge         $zero, $at, 315
    ctx->pc = 0x295bd8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_295bdc:
    // 0x295bdc: 0x0  nop
    ctx->pc = 0x295bdcu;
    // NOP
label_295be0:
    // 0x295be0: 0x18219  .word       0x00018219                   # multu       $zero, $at # 00008200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295be0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_295be4:
    // 0x295be4: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x295be4u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_295be8:
    // 0x295be8: 0x18090  .word       0x00018090                   # mfhi        $s0 # 00010080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295be8u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_295bec:
    // 0x295bec: 0x0  nop
    ctx->pc = 0x295becu;
    // NOP
label_295bf0:
    // 0x295bf0: 0x1824a  .word       0x0001824A                   # movz        $s0, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295bf0u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_295bf4:
    // 0x295bf4: 0x25  move        $zero, $zero
    ctx->pc = 0x295bf4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_295bf8:
    // 0x295bf8: 0x12140  sll         $a0, $at, 5
    ctx->pc = 0x295bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 5));
label_295bfc:
    // 0x295bfc: 0x0  nop
    ctx->pc = 0x295bfcu;
    // NOP
label_295c00:
    // 0x295c00: 0x1826f  .word       0x0001826F                   # dsubu       $s0, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295c00u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_295c04:
    // 0x295c04: 0x35  .word       0x00000035                   # INVALID     $zero, $zero, 0x35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295c04u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x295C04 raw=0x00000035");
 /* MITIGATED */
label_295c08:
    // 0x295c08: 0x1a410  .word       0x0001A410                   # mfhi        $s4 # 00010400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295c08u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_295c0c:
    // 0x295c0c: 0x0  nop
    ctx->pc = 0x295c0cu;
    // NOP
label_295c10:
    // 0x295c10: 0x182a4  .word       0x000182A4                   # and         $s0, $zero, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295c10u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_295c14:
    // 0x295c14: 0x2b  sltu        $zero, $zero, $zero
    ctx->pc = 0x295c14u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_295c18:
    // 0x295c18: 0x15520  .word       0x00015520                   # add         $t2, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295c18u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_295c1c:
    // 0x295c1c: 0x0  nop
    ctx->pc = 0x295c1cu;
    // NOP
label_295c20:
    // 0x295c20: 0x182cf  .word       0x000182CF                   # sync # 00018000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295c20u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_295c24:
    // 0x295c24: 0x22  neg         $zero, $zero
    ctx->pc = 0x295c24u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_295c28:
    // 0x295c28: 0x10eb0  tge         $zero, $at, 58
    ctx->pc = 0x295c28u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_295c2c:
    // 0x295c2c: 0x0  nop
    ctx->pc = 0x295c2cu;
    // NOP
label_295c30:
    // 0x295c30: 0x182f1  tgeu        $zero, $at, 523
    ctx->pc = 0x295c30u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_295c34:
    // 0x295c34: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295c34u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x295C34 raw=0x0000003D");
 /* MITIGATED */
label_295c38:
    // 0x295c38: 0x1e550  .word       0x0001E550                   # mfhi        $gp # 00010540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295c38u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_295c3c:
    // 0x295c3c: 0x0  nop
    ctx->pc = 0x295c3cu;
    // NOP
label_295c40:
    // 0x295c40: 0x1832e  .word       0x0001832E                   # dsub        $s0, $zero, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295c40u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_295c44:
    // 0x295c44: 0x3e  dsrl32      $zero, $zero, 0
    ctx->pc = 0x295c44u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 0));
label_295c48:
    // 0x295c48: 0x1eeb0  tge         $zero, $at, 954
    ctx->pc = 0x295c48u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_295c4c:
    // 0x295c4c: 0x0  nop
    ctx->pc = 0x295c4cu;
    // NOP
label_295c50:
    // 0x295c50: 0x1836c  .word       0x0001836C                   # dadd        $s0, $zero, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295c50u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_295c54:
    // 0x295c54: 0x2a  slt         $zero, $zero, $zero
    ctx->pc = 0x295c54u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_295c58:
    // 0x295c58: 0x14df0  tge         $zero, $at, 311
    ctx->pc = 0x295c58u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_295c5c:
    // 0x295c5c: 0x0  nop
    ctx->pc = 0x295c5cu;
    // NOP
label_295c60:
    // 0x295c60: 0x18396  .word       0x00018396                   # dsrlv       $s0, $at, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295c60u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_295c64:
    // 0x295c64: 0x34  teq         $zero, $zero, 0
    ctx->pc = 0x295c64u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_295c68:
    // 0x295c68: 0x19a60  .word       0x00019A60                   # add         $s3, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295c68u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_295c6c:
    // 0x295c6c: 0x0  nop
    ctx->pc = 0x295c6cu;
    // NOP
label_295c70:
    // 0x295c70: 0x183ca  .word       0x000183CA                   # movz        $s0, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295c70u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_295c74:
    // 0x295c74: 0x3e  dsrl32      $zero, $zero, 0
    ctx->pc = 0x295c74u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 0));
label_295c78:
    // 0x295c78: 0x1e8f0  tge         $zero, $at, 931
    ctx->pc = 0x295c78u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_295c7c:
    // 0x295c7c: 0x0  nop
    ctx->pc = 0x295c7cu;
    // NOP
label_295c80:
    // 0x295c80: 0x18408  .word       0x00018408                   # jr          $zero # 00018400 <InstrIdType: CPU_SPECIAL>
label_295c84:
    if (ctx->pc == 0x295C84u) {
        ctx->pc = 0x295C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295C80u;
        // 0x295c84: 0x26  xor         $zero, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295C88u;
        goto label_295c88;
    }
    ctx->pc = 0x295C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x295C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295C80u;
        // 0x295c84: 0x26  xor         $zero, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295C80u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x295C88u;
label_295c88:
    // 0x295c88: 0x12cc0  sll         $a1, $at, 19
    ctx->pc = 0x295c88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 1), 19));
label_295c8c:
    // 0x295c8c: 0x0  nop
    ctx->pc = 0x295c8cu;
    // NOP
label_295c90:
    // 0x295c90: 0x1842e  .word       0x0001842E                   # dsub        $s0, $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295c90u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_295c94:
    // 0x295c94: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x295c94u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_295c98:
    // 0x295c98: 0x16cb0  tge         $zero, $at, 434
    ctx->pc = 0x295c98u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_295c9c:
    // 0x295c9c: 0x0  nop
    ctx->pc = 0x295c9cu;
    // NOP
label_295ca0:
    // 0x295ca0: 0x1845c  .word       0x0001845C                   # dmult       $zero, $at # 00008440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295ca0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x295CA0 raw=0x0001845C");
 /* MITIGATED */
label_295ca4:
    // 0x295ca4: 0xc5  .word       0x000000C5                   # INVALID     $zero, $zero, 0xC5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295ca4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x295CA4 raw=0x000000C5");
 /* MITIGATED */
label_295ca8:
    // 0x295ca8: 0x622f0  tge         $zero, $a2, 139
    ctx->pc = 0x295ca8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 6)) { runtime->handleTrap(rdram, ctx); }
label_295cac:
    // 0x295cac: 0x0  nop
    ctx->pc = 0x295cacu;
    // NOP
label_295cb0:
    // 0x295cb0: 0x18521  .word       0x00018521                   # addu        $s0, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295cb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_295cb4:
    // 0x295cb4: 0x82  srl         $zero, $zero, 2
    ctx->pc = 0x295cb4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 2));
label_295cb8:
    // 0x295cb8: 0x40e20  .word       0x00040E20                   # add         $at, $zero, $a0 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295cb8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_295cbc:
    // 0x295cbc: 0x0  nop
    ctx->pc = 0x295cbcu;
    // NOP
label_295cc0:
    // 0x295cc0: 0x185a3  .word       0x000185A3                   # negu        $s0, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295cc0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_295cc4:
    // 0x295cc4: 0xc2  srl         $zero, $zero, 3
    ctx->pc = 0x295cc4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 3));
label_295cc8:
    // 0x295cc8: 0x60c00  sll         $at, $a2, 16
    ctx->pc = 0x295cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_295ccc:
    // 0x295ccc: 0x0  nop
    ctx->pc = 0x295cccu;
    // NOP
label_295cd0:
    // 0x295cd0: 0x18665  .word       0x00018665                   # or          $s0, $zero, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295cd0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_295cd4:
    // 0x295cd4: 0x4a  .word       0x0000004A                   # movz        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295cd4u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_295cd8:
    // 0x295cd8: 0x248c0  sll         $t1, $v0, 3
    ctx->pc = 0x295cd8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_295cdc:
    // 0x295cdc: 0x0  nop
    ctx->pc = 0x295cdcu;
    // NOP
label_295ce0:
    // 0x295ce0: 0x186af  .word       0x000186AF                   # dsubu       $s0, $zero, $at # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295ce0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_295ce4:
    // 0x295ce4: 0xb8  dsll        $zero, $zero, 2
    ctx->pc = 0x295ce4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 2);
label_295ce8:
    // 0x295ce8: 0x5bda0  .word       0x0005BDA0                   # add         $s7, $zero, $a1 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295ce8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_295cec:
    // 0x295cec: 0x0  nop
    ctx->pc = 0x295cecu;
    // NOP
label_295cf0:
    // 0x295cf0: 0x18767  .word       0x00018767                   # nor         $s0, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295cf0u;
    SET_GPR_U64(ctx, 16, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_295cf4:
    // 0x295cf4: 0xaf  .word       0x000000AF                   # dsubu       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295cf4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_295cf8:
    // 0x295cf8: 0x57220  .word       0x00057220                   # add         $t6, $zero, $a1 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295cf8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_295cfc:
    // 0x295cfc: 0x0  nop
    ctx->pc = 0x295cfcu;
    // NOP
label_295d00:
    // 0x295d00: 0x18816  dsrlv       $s1, $at, $zero
    ctx->pc = 0x295d00u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_295d04:
    // 0x295d04: 0xdd  .word       0x000000DD                   # dmultu      $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295d04u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x295D04 raw=0x000000DD");
 /* MITIGATED */
label_295d08:
    // 0x295d08: 0x6e630  tge         $zero, $a2, 920
    ctx->pc = 0x295d08u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 6)) { runtime->handleTrap(rdram, ctx); }
label_295d0c:
    // 0x295d0c: 0x0  nop
    ctx->pc = 0x295d0cu;
    // NOP
label_295d10:
    // 0x295d10: 0x188f3  tltu        $zero, $at, 547
    ctx->pc = 0x295d10u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_295d14:
    // 0x295d14: 0xb6  tne         $zero, $zero, 2
    ctx->pc = 0x295d14u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_295d18:
    // 0x295d18: 0x5aee0  .word       0x0005AEE0                   # add         $s5, $zero, $a1 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295d18u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_295d1c:
    // 0x295d1c: 0x0  nop
    ctx->pc = 0x295d1cu;
    // NOP
label_295d20:
    // 0x295d20: 0x189a9  .word       0x000189A9                   # mtsa        $zero # 00018980 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x295d20u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_295d24:
    // 0x295d24: 0xb8  dsll        $zero, $zero, 2
    ctx->pc = 0x295d24u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 2);
label_295d28:
    // 0x295d28: 0x5b8c0  sll         $s7, $a1, 3
    ctx->pc = 0x295d28u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_295d2c:
    // 0x295d2c: 0x0  nop
    ctx->pc = 0x295d2cu;
    // NOP
label_295d30:
    // 0x295d30: 0x18a61  .word       0x00018A61                   # addu        $s1, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295d30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_295d34:
    // 0x295d34: 0x5e  .word       0x0000005E                   # ddiv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295d34u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x295D34 raw=0x0000005E");
 /* MITIGATED */
label_295d38:
    // 0x295d38: 0x2eed0  .word       0x0002EED0                   # mfhi        $sp # 000206C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295d38u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_295d3c:
    // 0x295d3c: 0x0  nop
    ctx->pc = 0x295d3cu;
    // NOP
label_295d40:
    // 0x295d40: 0x18abf  dsra32      $s1, $at, 10
    ctx->pc = 0x295d40u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 1) >> (32 + 10));
label_295d44:
    // 0x295d44: 0x62  .word       0x00000062                   # neg         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295d44u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_295d48:
    // 0x295d48: 0x30a10  .word       0x00030A10                   # mfhi        $at # 00030200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295d48u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_295d4c:
    // 0x295d4c: 0x0  nop
    ctx->pc = 0x295d4cu;
    // NOP
label_295d50:
    // 0x295d50: 0x18b21  .word       0x00018B21                   # addu        $s1, $zero, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295d50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_295d54:
    // 0x295d54: 0x87  .word       0x00000087                   # srav        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295d54u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_295d58:
    // 0x295d58: 0x43800  sll         $a3, $a0, 0
    ctx->pc = 0x295d58u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 0));
label_295d5c:
    // 0x295d5c: 0x0  nop
    ctx->pc = 0x295d5cu;
    // NOP
label_295d60:
    // 0x295d60: 0x18ba8  .word       0x00018BA8                   # mfsa        $s1 # 00010380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x295d60u;
    SET_GPR_U32(ctx, 17, ctx->sa);
label_295d64:
    // 0x295d64: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x295d64u;
    
label_295d68:
    // 0x295d68: 0x3fc40  sll         $ra, $v1, 17
    ctx->pc = 0x295d68u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 3), 17));
label_295d6c:
    // 0x295d6c: 0x0  nop
    ctx->pc = 0x295d6cu;
    // NOP
label_295d70:
    // 0x295d70: 0x18c28  .word       0x00018C28                   # mfsa        $s1 # 00010400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x295d70u;
    SET_GPR_U32(ctx, 17, ctx->sa);
label_295d74:
    // 0x295d74: 0x55  .word       0x00000055                   # INVALID     $zero, $zero, 0x55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295d74u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x295D74 raw=0x00000055");
 /* MITIGATED */
label_295d78:
    // 0x295d78: 0x2a6f0  tge         $zero, $v0, 667
    ctx->pc = 0x295d78u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_295d7c:
    // 0x295d7c: 0x0  nop
    ctx->pc = 0x295d7cu;
    // NOP
label_295d80:
    // 0x295d80: 0x18c7d  .word       0x00018C7D                   # INVALID     $zero, $at, -0x7383 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295d80u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x295D80 raw=0x00018C7D");
 /* MITIGATED */
label_295d84:
    // 0x295d84: 0x99  .word       0x00000099                   # multu       $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295d84u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_295d88:
    // 0x295d88: 0x4c1c0  sll         $t8, $a0, 7
    ctx->pc = 0x295d88u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
label_295d8c:
    // 0x295d8c: 0x0  nop
    ctx->pc = 0x295d8cu;
    // NOP
label_295d90:
    // 0x295d90: 0x18d16  .word       0x00018D16                   # dsrlv       $s1, $at, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295d90u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_295d94:
    // 0x295d94: 0xb4  teq         $zero, $zero, 2
    ctx->pc = 0x295d94u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_295d98:
    // 0x295d98: 0x59810  .word       0x00059810                   # mfhi        $s3 # 00050000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295d98u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_295d9c:
    // 0x295d9c: 0x0  nop
    ctx->pc = 0x295d9cu;
    // NOP
label_295da0:
    // 0x295da0: 0x18dca  .word       0x00018DCA                   # movz        $s1, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295da0u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_295da4:
    // 0x295da4: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295da4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_295da8:
    // 0x295da8: 0x36f50  .word       0x00036F50                   # mfhi        $t5 # 00030740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295da8u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_295dac:
    // 0x295dac: 0x0  nop
    ctx->pc = 0x295dacu;
    // NOP
label_295db0:
    // 0x295db0: 0x18e38  dsll        $s1, $at, 24
    ctx->pc = 0x295db0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 1) << 24);
label_295db4:
    // 0x295db4: 0x58  .word       0x00000058                   # mult        $zero, $zero, $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x295db4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_295db8:
    // 0x295db8: 0x2b820  add         $s7, $zero, $v0
    ctx->pc = 0x295db8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_295dbc:
    // 0x295dbc: 0x0  nop
    ctx->pc = 0x295dbcu;
    // NOP
label_295dc0:
    // 0x295dc0: 0x18e90  .word       0x00018E90                   # mfhi        $s1 # 00010680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295dc0u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_295dc4:
    // 0x295dc4: 0xab  .word       0x000000AB                   # sltu        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295dc4u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_295dc8:
    // 0x295dc8: 0x55730  tge         $zero, $a1, 348
    ctx->pc = 0x295dc8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 5)) { runtime->handleTrap(rdram, ctx); }
label_295dcc:
    // 0x295dcc: 0x0  nop
    ctx->pc = 0x295dccu;
    // NOP
label_295dd0:
    // 0x295dd0: 0x18f3b  dsra        $s1, $at, 28
    ctx->pc = 0x295dd0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 1) >> 28);
label_295dd4:
    // 0x295dd4: 0x6d  .word       0x0000006D                   # daddu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295dd4u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_295dd8:
    // 0x295dd8: 0x360b0  tge         $zero, $v1, 386
    ctx->pc = 0x295dd8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_295ddc:
    // 0x295ddc: 0x0  nop
    ctx->pc = 0x295ddcu;
    // NOP
label_295de0:
    // 0x295de0: 0x18fa8  .word       0x00018FA8                   # mfsa        $s1 # 00010780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x295de0u;
    SET_GPR_U32(ctx, 17, ctx->sa);
label_295de4:
    // 0x295de4: 0x83  sra         $zero, $zero, 2
    ctx->pc = 0x295de4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 2));
label_295de8:
    // 0x295de8: 0x417f0  tge         $zero, $a0, 95
    ctx->pc = 0x295de8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_295dec:
    // 0x295dec: 0x0  nop
    ctx->pc = 0x295decu;
    // NOP
label_295df0:
    // 0x295df0: 0x1902b  sltu        $s2, $zero, $at
    ctx->pc = 0x295df0u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_295df4:
    // 0x295df4: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x295df4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_295df8:
    // 0x295df8: 0x39030  tge         $zero, $v1, 576
    ctx->pc = 0x295df8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_295dfc:
    // 0x295dfc: 0x0  nop
    ctx->pc = 0x295dfcu;
    // NOP
    ctx->pc = 0x295e00u;
    return;
}
