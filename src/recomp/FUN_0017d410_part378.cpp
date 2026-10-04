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


void FUN_0017d410_part378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x235560u: goto label_235560;
        case 0x235564u: goto label_235564;
        case 0x235568u: goto label_235568;
        case 0x23556cu: goto label_23556c;
        case 0x235570u: goto label_235570;
        case 0x235574u: goto label_235574;
        case 0x235578u: goto label_235578;
        case 0x23557cu: goto label_23557c;
        case 0x235580u: goto label_235580;
        case 0x235584u: goto label_235584;
        case 0x235588u: goto label_235588;
        case 0x23558cu: goto label_23558c;
        case 0x235590u: goto label_235590;
        case 0x235594u: goto label_235594;
        case 0x235598u: goto label_235598;
        case 0x23559cu: goto label_23559c;
        case 0x2355a0u: goto label_2355a0;
        case 0x2355a4u: goto label_2355a4;
        case 0x2355a8u: goto label_2355a8;
        case 0x2355acu: goto label_2355ac;
        case 0x2355b0u: goto label_2355b0;
        case 0x2355b4u: goto label_2355b4;
        case 0x2355b8u: goto label_2355b8;
        case 0x2355bcu: goto label_2355bc;
        case 0x2355c0u: goto label_2355c0;
        case 0x2355c4u: goto label_2355c4;
        case 0x2355c8u: goto label_2355c8;
        case 0x2355ccu: goto label_2355cc;
        case 0x2355d0u: goto label_2355d0;
        case 0x2355d4u: goto label_2355d4;
        case 0x2355d8u: goto label_2355d8;
        case 0x2355dcu: goto label_2355dc;
        case 0x2355e0u: goto label_2355e0;
        case 0x2355e4u: goto label_2355e4;
        case 0x2355e8u: goto label_2355e8;
        case 0x2355ecu: goto label_2355ec;
        case 0x2355f0u: goto label_2355f0;
        case 0x2355f4u: goto label_2355f4;
        case 0x2355f8u: goto label_2355f8;
        case 0x2355fcu: goto label_2355fc;
        case 0x235600u: goto label_235600;
        case 0x235604u: goto label_235604;
        case 0x235608u: goto label_235608;
        case 0x23560cu: goto label_23560c;
        case 0x235610u: goto label_235610;
        case 0x235614u: goto label_235614;
        case 0x235618u: goto label_235618;
        case 0x23561cu: goto label_23561c;
        case 0x235620u: goto label_235620;
        case 0x235624u: goto label_235624;
        case 0x235628u: goto label_235628;
        case 0x23562cu: goto label_23562c;
        case 0x235630u: goto label_235630;
        case 0x235634u: goto label_235634;
        case 0x235638u: goto label_235638;
        case 0x23563cu: goto label_23563c;
        case 0x235640u: goto label_235640;
        case 0x235644u: goto label_235644;
        case 0x235648u: goto label_235648;
        case 0x23564cu: goto label_23564c;
        case 0x235650u: goto label_235650;
        case 0x235654u: goto label_235654;
        case 0x235658u: goto label_235658;
        case 0x23565cu: goto label_23565c;
        case 0x235660u: goto label_235660;
        case 0x235664u: goto label_235664;
        case 0x235668u: goto label_235668;
        case 0x23566cu: goto label_23566c;
        case 0x235670u: goto label_235670;
        case 0x235674u: goto label_235674;
        case 0x235678u: goto label_235678;
        case 0x23567cu: goto label_23567c;
        case 0x235680u: goto label_235680;
        case 0x235684u: goto label_235684;
        case 0x235688u: goto label_235688;
        case 0x23568cu: goto label_23568c;
        case 0x235690u: goto label_235690;
        case 0x235694u: goto label_235694;
        case 0x235698u: goto label_235698;
        case 0x23569cu: goto label_23569c;
        case 0x2356a0u: goto label_2356a0;
        case 0x2356a4u: goto label_2356a4;
        case 0x2356a8u: goto label_2356a8;
        case 0x2356acu: goto label_2356ac;
        case 0x2356b0u: goto label_2356b0;
        case 0x2356b4u: goto label_2356b4;
        case 0x2356b8u: goto label_2356b8;
        case 0x2356bcu: goto label_2356bc;
        case 0x2356c0u: goto label_2356c0;
        case 0x2356c4u: goto label_2356c4;
        case 0x2356c8u: goto label_2356c8;
        case 0x2356ccu: goto label_2356cc;
        case 0x2356d0u: goto label_2356d0;
        case 0x2356d4u: goto label_2356d4;
        case 0x2356d8u: goto label_2356d8;
        case 0x2356dcu: goto label_2356dc;
        case 0x2356e0u: goto label_2356e0;
        case 0x2356e4u: goto label_2356e4;
        case 0x2356e8u: goto label_2356e8;
        case 0x2356ecu: goto label_2356ec;
        case 0x2356f0u: goto label_2356f0;
        case 0x2356f4u: goto label_2356f4;
        case 0x2356f8u: goto label_2356f8;
        case 0x2356fcu: goto label_2356fc;
        case 0x235700u: goto label_235700;
        case 0x235704u: goto label_235704;
        case 0x235708u: goto label_235708;
        case 0x23570cu: goto label_23570c;
        case 0x235710u: goto label_235710;
        case 0x235714u: goto label_235714;
        case 0x235718u: goto label_235718;
        case 0x23571cu: goto label_23571c;
        case 0x235720u: goto label_235720;
        case 0x235724u: goto label_235724;
        case 0x235728u: goto label_235728;
        case 0x23572cu: goto label_23572c;
        case 0x235730u: goto label_235730;
        case 0x235734u: goto label_235734;
        case 0x235738u: goto label_235738;
        case 0x23573cu: goto label_23573c;
        case 0x235740u: goto label_235740;
        case 0x235744u: goto label_235744;
        case 0x235748u: goto label_235748;
        case 0x23574cu: goto label_23574c;
        case 0x235750u: goto label_235750;
        case 0x235754u: goto label_235754;
        case 0x235758u: goto label_235758;
        case 0x23575cu: goto label_23575c;
        case 0x235760u: goto label_235760;
        case 0x235764u: goto label_235764;
        case 0x235768u: goto label_235768;
        case 0x23576cu: goto label_23576c;
        case 0x235770u: goto label_235770;
        case 0x235774u: goto label_235774;
        case 0x235778u: goto label_235778;
        case 0x23577cu: goto label_23577c;
        case 0x235780u: goto label_235780;
        case 0x235784u: goto label_235784;
        case 0x235788u: goto label_235788;
        case 0x23578cu: goto label_23578c;
        case 0x235790u: goto label_235790;
        case 0x235794u: goto label_235794;
        case 0x235798u: goto label_235798;
        case 0x23579cu: goto label_23579c;
        case 0x2357a0u: goto label_2357a0;
        case 0x2357a4u: goto label_2357a4;
        case 0x2357a8u: goto label_2357a8;
        case 0x2357acu: goto label_2357ac;
        case 0x2357b0u: goto label_2357b0;
        case 0x2357b4u: goto label_2357b4;
        case 0x2357b8u: goto label_2357b8;
        case 0x2357bcu: goto label_2357bc;
        case 0x2357c0u: goto label_2357c0;
        case 0x2357c4u: goto label_2357c4;
        case 0x2357c8u: goto label_2357c8;
        case 0x2357ccu: goto label_2357cc;
        case 0x2357d0u: goto label_2357d0;
        case 0x2357d4u: goto label_2357d4;
        case 0x2357d8u: goto label_2357d8;
        case 0x2357dcu: goto label_2357dc;
        case 0x2357e0u: goto label_2357e0;
        case 0x2357e4u: goto label_2357e4;
        case 0x2357e8u: goto label_2357e8;
        case 0x2357ecu: goto label_2357ec;
        case 0x2357f0u: goto label_2357f0;
        case 0x2357f4u: goto label_2357f4;
        case 0x2357f8u: goto label_2357f8;
        case 0x2357fcu: goto label_2357fc;
        case 0x235800u: goto label_235800;
        case 0x235804u: goto label_235804;
        case 0x235808u: goto label_235808;
        case 0x23580cu: goto label_23580c;
        case 0x235810u: goto label_235810;
        case 0x235814u: goto label_235814;
        case 0x235818u: goto label_235818;
        case 0x23581cu: goto label_23581c;
        case 0x235820u: goto label_235820;
        case 0x235824u: goto label_235824;
        case 0x235828u: goto label_235828;
        case 0x23582cu: goto label_23582c;
        case 0x235830u: goto label_235830;
        case 0x235834u: goto label_235834;
        case 0x235838u: goto label_235838;
        case 0x23583cu: goto label_23583c;
        case 0x235840u: goto label_235840;
        case 0x235844u: goto label_235844;
        case 0x235848u: goto label_235848;
        case 0x23584cu: goto label_23584c;
        case 0x235850u: goto label_235850;
        case 0x235854u: goto label_235854;
        case 0x235858u: goto label_235858;
        case 0x23585cu: goto label_23585c;
        case 0x235860u: goto label_235860;
        case 0x235864u: goto label_235864;
        case 0x235868u: goto label_235868;
        case 0x23586cu: goto label_23586c;
        case 0x235870u: goto label_235870;
        case 0x235874u: goto label_235874;
        case 0x235878u: goto label_235878;
        case 0x23587cu: goto label_23587c;
        case 0x235880u: goto label_235880;
        case 0x235884u: goto label_235884;
        case 0x235888u: goto label_235888;
        case 0x23588cu: goto label_23588c;
        case 0x235890u: goto label_235890;
        case 0x235894u: goto label_235894;
        case 0x235898u: goto label_235898;
        case 0x23589cu: goto label_23589c;
        case 0x2358a0u: goto label_2358a0;
        case 0x2358a4u: goto label_2358a4;
        case 0x2358a8u: goto label_2358a8;
        case 0x2358acu: goto label_2358ac;
        case 0x2358b0u: goto label_2358b0;
        case 0x2358b4u: goto label_2358b4;
        case 0x2358b8u: goto label_2358b8;
        case 0x2358bcu: goto label_2358bc;
        case 0x2358c0u: goto label_2358c0;
        case 0x2358c4u: goto label_2358c4;
        case 0x2358c8u: goto label_2358c8;
        case 0x2358ccu: goto label_2358cc;
        case 0x2358d0u: goto label_2358d0;
        case 0x2358d4u: goto label_2358d4;
        case 0x2358d8u: goto label_2358d8;
        case 0x2358dcu: goto label_2358dc;
        case 0x2358e0u: goto label_2358e0;
        case 0x2358e4u: goto label_2358e4;
        case 0x2358e8u: goto label_2358e8;
        case 0x2358ecu: goto label_2358ec;
        case 0x2358f0u: goto label_2358f0;
        case 0x2358f4u: goto label_2358f4;
        case 0x2358f8u: goto label_2358f8;
        case 0x2358fcu: goto label_2358fc;
        case 0x235900u: goto label_235900;
        case 0x235904u: goto label_235904;
        case 0x235908u: goto label_235908;
        case 0x23590cu: goto label_23590c;
        case 0x235910u: goto label_235910;
        case 0x235914u: goto label_235914;
        case 0x235918u: goto label_235918;
        case 0x23591cu: goto label_23591c;
        case 0x235920u: goto label_235920;
        case 0x235924u: goto label_235924;
        case 0x235928u: goto label_235928;
        case 0x23592cu: goto label_23592c;
        case 0x235930u: goto label_235930;
        case 0x235934u: goto label_235934;
        case 0x235938u: goto label_235938;
        case 0x23593cu: goto label_23593c;
        case 0x235940u: goto label_235940;
        case 0x235944u: goto label_235944;
        case 0x235948u: goto label_235948;
        case 0x23594cu: goto label_23594c;
        case 0x235950u: goto label_235950;
        case 0x235954u: goto label_235954;
        case 0x235958u: goto label_235958;
        case 0x23595cu: goto label_23595c;
        case 0x235960u: goto label_235960;
        case 0x235964u: goto label_235964;
        case 0x235968u: goto label_235968;
        case 0x23596cu: goto label_23596c;
        case 0x235970u: goto label_235970;
        case 0x235974u: goto label_235974;
        case 0x235978u: goto label_235978;
        case 0x23597cu: goto label_23597c;
        case 0x235980u: goto label_235980;
        case 0x235984u: goto label_235984;
        case 0x235988u: goto label_235988;
        case 0x23598cu: goto label_23598c;
        case 0x235990u: goto label_235990;
        case 0x235994u: goto label_235994;
        case 0x235998u: goto label_235998;
        case 0x23599cu: goto label_23599c;
        case 0x2359a0u: goto label_2359a0;
        case 0x2359a4u: goto label_2359a4;
        case 0x2359a8u: goto label_2359a8;
        case 0x2359acu: goto label_2359ac;
        case 0x2359b0u: goto label_2359b0;
        case 0x2359b4u: goto label_2359b4;
        case 0x2359b8u: goto label_2359b8;
        case 0x2359bcu: goto label_2359bc;
        case 0x2359c0u: goto label_2359c0;
        case 0x2359c4u: goto label_2359c4;
        case 0x2359c8u: goto label_2359c8;
        case 0x2359ccu: goto label_2359cc;
        case 0x2359d0u: goto label_2359d0;
        case 0x2359d4u: goto label_2359d4;
        case 0x2359d8u: goto label_2359d8;
        case 0x2359dcu: goto label_2359dc;
        case 0x2359e0u: goto label_2359e0;
        case 0x2359e4u: goto label_2359e4;
        case 0x2359e8u: goto label_2359e8;
        case 0x2359ecu: goto label_2359ec;
        case 0x2359f0u: goto label_2359f0;
        case 0x2359f4u: goto label_2359f4;
        case 0x2359f8u: goto label_2359f8;
        case 0x2359fcu: goto label_2359fc;
        case 0x235a00u: goto label_235a00;
        case 0x235a04u: goto label_235a04;
        case 0x235a08u: goto label_235a08;
        case 0x235a0cu: goto label_235a0c;
        case 0x235a10u: goto label_235a10;
        case 0x235a14u: goto label_235a14;
        case 0x235a18u: goto label_235a18;
        case 0x235a1cu: goto label_235a1c;
        case 0x235a20u: goto label_235a20;
        case 0x235a24u: goto label_235a24;
        case 0x235a28u: goto label_235a28;
        case 0x235a2cu: goto label_235a2c;
        case 0x235a30u: goto label_235a30;
        case 0x235a34u: goto label_235a34;
        case 0x235a38u: goto label_235a38;
        case 0x235a3cu: goto label_235a3c;
        case 0x235a40u: goto label_235a40;
        case 0x235a44u: goto label_235a44;
        case 0x235a48u: goto label_235a48;
        case 0x235a4cu: goto label_235a4c;
        case 0x235a50u: goto label_235a50;
        case 0x235a54u: goto label_235a54;
        case 0x235a58u: goto label_235a58;
        case 0x235a5cu: goto label_235a5c;
        case 0x235a60u: goto label_235a60;
        case 0x235a64u: goto label_235a64;
        case 0x235a68u: goto label_235a68;
        case 0x235a6cu: goto label_235a6c;
        case 0x235a70u: goto label_235a70;
        case 0x235a74u: goto label_235a74;
        case 0x235a78u: goto label_235a78;
        case 0x235a7cu: goto label_235a7c;
        case 0x235a80u: goto label_235a80;
        case 0x235a84u: goto label_235a84;
        case 0x235a88u: goto label_235a88;
        case 0x235a8cu: goto label_235a8c;
        case 0x235a90u: goto label_235a90;
        case 0x235a94u: goto label_235a94;
        case 0x235a98u: goto label_235a98;
        case 0x235a9cu: goto label_235a9c;
        case 0x235aa0u: goto label_235aa0;
        case 0x235aa4u: goto label_235aa4;
        case 0x235aa8u: goto label_235aa8;
        case 0x235aacu: goto label_235aac;
        case 0x235ab0u: goto label_235ab0;
        case 0x235ab4u: goto label_235ab4;
        case 0x235ab8u: goto label_235ab8;
        case 0x235abcu: goto label_235abc;
        case 0x235ac0u: goto label_235ac0;
        case 0x235ac4u: goto label_235ac4;
        case 0x235ac8u: goto label_235ac8;
        case 0x235accu: goto label_235acc;
        case 0x235ad0u: goto label_235ad0;
        case 0x235ad4u: goto label_235ad4;
        case 0x235ad8u: goto label_235ad8;
        case 0x235adcu: goto label_235adc;
        case 0x235ae0u: goto label_235ae0;
        case 0x235ae4u: goto label_235ae4;
        case 0x235ae8u: goto label_235ae8;
        case 0x235aecu: goto label_235aec;
        case 0x235af0u: goto label_235af0;
        case 0x235af4u: goto label_235af4;
        case 0x235af8u: goto label_235af8;
        case 0x235afcu: goto label_235afc;
        case 0x235b00u: goto label_235b00;
        case 0x235b04u: goto label_235b04;
        case 0x235b08u: goto label_235b08;
        case 0x235b0cu: goto label_235b0c;
        case 0x235b10u: goto label_235b10;
        case 0x235b14u: goto label_235b14;
        case 0x235b18u: goto label_235b18;
        case 0x235b1cu: goto label_235b1c;
        case 0x235b20u: goto label_235b20;
        case 0x235b24u: goto label_235b24;
        case 0x235b28u: goto label_235b28;
        case 0x235b2cu: goto label_235b2c;
        case 0x235b30u: goto label_235b30;
        case 0x235b34u: goto label_235b34;
        case 0x235b38u: goto label_235b38;
        case 0x235b3cu: goto label_235b3c;
        case 0x235b40u: goto label_235b40;
        case 0x235b44u: goto label_235b44;
        case 0x235b48u: goto label_235b48;
        case 0x235b4cu: goto label_235b4c;
        case 0x235b50u: goto label_235b50;
        case 0x235b54u: goto label_235b54;
        case 0x235b58u: goto label_235b58;
        case 0x235b5cu: goto label_235b5c;
        case 0x235b60u: goto label_235b60;
        case 0x235b64u: goto label_235b64;
        case 0x235b68u: goto label_235b68;
        case 0x235b6cu: goto label_235b6c;
        case 0x235b70u: goto label_235b70;
        case 0x235b74u: goto label_235b74;
        case 0x235b78u: goto label_235b78;
        case 0x235b7cu: goto label_235b7c;
        case 0x235b80u: goto label_235b80;
        case 0x235b84u: goto label_235b84;
        case 0x235b88u: goto label_235b88;
        case 0x235b8cu: goto label_235b8c;
        case 0x235b90u: goto label_235b90;
        case 0x235b94u: goto label_235b94;
        case 0x235b98u: goto label_235b98;
        case 0x235b9cu: goto label_235b9c;
        case 0x235ba0u: goto label_235ba0;
        case 0x235ba4u: goto label_235ba4;
        case 0x235ba8u: goto label_235ba8;
        case 0x235bacu: goto label_235bac;
        case 0x235bb0u: goto label_235bb0;
        case 0x235bb4u: goto label_235bb4;
        case 0x235bb8u: goto label_235bb8;
        case 0x235bbcu: goto label_235bbc;
        case 0x235bc0u: goto label_235bc0;
        case 0x235bc4u: goto label_235bc4;
        case 0x235bc8u: goto label_235bc8;
        case 0x235bccu: goto label_235bcc;
        case 0x235bd0u: goto label_235bd0;
        case 0x235bd4u: goto label_235bd4;
        case 0x235bd8u: goto label_235bd8;
        case 0x235bdcu: goto label_235bdc;
        case 0x235be0u: goto label_235be0;
        case 0x235be4u: goto label_235be4;
        case 0x235be8u: goto label_235be8;
        case 0x235becu: goto label_235bec;
        case 0x235bf0u: goto label_235bf0;
        case 0x235bf4u: goto label_235bf4;
        case 0x235bf8u: goto label_235bf8;
        case 0x235bfcu: goto label_235bfc;
        case 0x235c00u: goto label_235c00;
        case 0x235c04u: goto label_235c04;
        case 0x235c08u: goto label_235c08;
        case 0x235c0cu: goto label_235c0c;
        case 0x235c10u: goto label_235c10;
        case 0x235c14u: goto label_235c14;
        case 0x235c18u: goto label_235c18;
        case 0x235c1cu: goto label_235c1c;
        case 0x235c20u: goto label_235c20;
        case 0x235c24u: goto label_235c24;
        case 0x235c28u: goto label_235c28;
        case 0x235c2cu: goto label_235c2c;
        case 0x235c30u: goto label_235c30;
        case 0x235c34u: goto label_235c34;
        case 0x235c38u: goto label_235c38;
        case 0x235c3cu: goto label_235c3c;
        case 0x235c40u: goto label_235c40;
        case 0x235c44u: goto label_235c44;
        case 0x235c48u: goto label_235c48;
        case 0x235c4cu: goto label_235c4c;
        case 0x235c50u: goto label_235c50;
        case 0x235c54u: goto label_235c54;
        case 0x235c58u: goto label_235c58;
        case 0x235c5cu: goto label_235c5c;
        case 0x235c60u: goto label_235c60;
        case 0x235c64u: goto label_235c64;
        case 0x235c68u: goto label_235c68;
        case 0x235c6cu: goto label_235c6c;
        case 0x235c70u: goto label_235c70;
        case 0x235c74u: goto label_235c74;
        case 0x235c78u: goto label_235c78;
        case 0x235c7cu: goto label_235c7c;
        case 0x235c80u: goto label_235c80;
        case 0x235c84u: goto label_235c84;
        case 0x235c88u: goto label_235c88;
        case 0x235c8cu: goto label_235c8c;
        case 0x235c90u: goto label_235c90;
        case 0x235c94u: goto label_235c94;
        case 0x235c98u: goto label_235c98;
        case 0x235c9cu: goto label_235c9c;
        case 0x235ca0u: goto label_235ca0;
        case 0x235ca4u: goto label_235ca4;
        case 0x235ca8u: goto label_235ca8;
        case 0x235cacu: goto label_235cac;
        case 0x235cb0u: goto label_235cb0;
        case 0x235cb4u: goto label_235cb4;
        case 0x235cb8u: goto label_235cb8;
        case 0x235cbcu: goto label_235cbc;
        case 0x235cc0u: goto label_235cc0;
        case 0x235cc4u: goto label_235cc4;
        case 0x235cc8u: goto label_235cc8;
        case 0x235cccu: goto label_235ccc;
        case 0x235cd0u: goto label_235cd0;
        case 0x235cd4u: goto label_235cd4;
        case 0x235cd8u: goto label_235cd8;
        case 0x235cdcu: goto label_235cdc;
        case 0x235ce0u: goto label_235ce0;
        case 0x235ce4u: goto label_235ce4;
        case 0x235ce8u: goto label_235ce8;
        case 0x235cecu: goto label_235cec;
        case 0x235cf0u: goto label_235cf0;
        case 0x235cf4u: goto label_235cf4;
        case 0x235cf8u: goto label_235cf8;
        case 0x235cfcu: goto label_235cfc;
        case 0x235d00u: goto label_235d00;
        case 0x235d04u: goto label_235d04;
        case 0x235d08u: goto label_235d08;
        case 0x235d0cu: goto label_235d0c;
        case 0x235d10u: goto label_235d10;
        case 0x235d14u: goto label_235d14;
        case 0x235d18u: goto label_235d18;
        case 0x235d1cu: goto label_235d1c;
        case 0x235d20u: goto label_235d20;
        case 0x235d24u: goto label_235d24;
        case 0x235d28u: goto label_235d28;
        case 0x235d2cu: goto label_235d2c;
        default: return;
    }

label_235560:
    // 0x235560: 0xac540008  sw          $s4, 0x8($v0)
    ctx->pc = 0x235560u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 20));
label_235564:
    // 0x235564: 0xc08d192  jal         func_234648
label_235568:
    if (ctx->pc == 0x235568u) {
        ctx->pc = 0x235568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235564u;
        // 0x235568: 0xac55000c  sw          $s5, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23556Cu;
        goto label_23556c;
    }
    ctx->pc = 0x235564u;
    SET_GPR_U32(ctx, 31, 0x23556Cu);
    ctx->pc = 0x235568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235564u;
    // 0x235568: 0xac55000c  sw          $s5, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234648u;
    { ctx->pc = 0x234648; return; }
    ctx->pc = 0x23556Cu;
label_23556c:
    // 0x23556c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23556cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235570:
    // 0x235570: 0xc069210  jal         func_1A4840
label_235574:
    if (ctx->pc == 0x235574u) {
        ctx->pc = 0x235574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235570u;
        // 0x235574: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235578u;
        goto label_235578;
    }
    ctx->pc = 0x235570u;
    SET_GPR_U32(ctx, 31, 0x235578u);
    ctx->pc = 0x235574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235570u;
    // 0x235574: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x235578u;
label_235578:
    // 0x235578: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x235578u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23557c:
    // 0x23557c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23557cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_235580:
    // 0x235580: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x235580u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_235584:
    // 0x235584: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x235584u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_235588:
    // 0x235588: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x235588u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_23558c:
    // 0x23558c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x23558cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_235590:
    // 0x235590: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x235590u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_235594:
    // 0x235594: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x235594u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_235598:
    // 0x235598: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x235598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_23559c:
    // 0x23559c: 0x3e00008  jr          $ra
label_2355a0:
    if (ctx->pc == 0x2355A0u) {
        ctx->pc = 0x2355A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23559Cu;
        // 0x2355a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2355A4u;
        goto label_2355a4;
    }
    ctx->pc = 0x23559Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2355A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23559Cu;
        // 0x2355a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23559Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2355A4u;
label_2355a4:
    // 0x2355a4: 0x0  nop
    ctx->pc = 0x2355a4u;
    // NOP
label_2355a8:
    // 0x2355a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2355a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2355ac:
    // 0x2355ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2355acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2355b0:
    // 0x2355b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2355b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2355b4:
    // 0x2355b4: 0x8f8482e4  lw          $a0, -0x7D1C($gp)
    ctx->pc = 0x2355b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
label_2355b8:
    // 0x2355b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2355b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2355bc:
    // 0x2355bc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2355bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2355c0:
    // 0x2355c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2355c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2355c4:
    // 0x2355c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2355c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2355c8:
    // 0x2355c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2355c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2355cc:
    // 0x2355cc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2355ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2355d0:
    // 0x2355d0: 0xc08dbf8  jal         func_236FE0
label_2355d4:
    if (ctx->pc == 0x2355D4u) {
        ctx->pc = 0x2355D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2355D0u;
        // 0x2355d4: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2355D8u;
        goto label_2355d8;
    }
    ctx->pc = 0x2355D0u;
    SET_GPR_U32(ctx, 31, 0x2355D8u);
    ctx->pc = 0x2355D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2355D0u;
    // 0x2355d4: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x2355D8u;
label_2355d8:
    // 0x2355d8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_2355dc:
    if (ctx->pc == 0x2355DCu) {
        ctx->pc = 0x2355DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2355D8u;
        // 0x2355dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2355E0u;
        goto label_2355e0;
    }
    ctx->pc = 0x2355D8u;
    {
        const bool branch_taken_0x2355d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2355DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2355D8u;
        // 0x2355dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2355d8) {
            ctx->pc = 0x235620u;
            goto label_235620;
        }
    }
    ctx->pc = 0x2355E0u;
label_2355e0:
    // 0x2355e0: 0xc08d17c  jal         func_2345F0
label_2355e4:
    if (ctx->pc == 0x2355E4u) {
        ctx->pc = 0x2355E8u;
        goto label_2355e8;
    }
    ctx->pc = 0x2355E0u;
    SET_GPR_U32(ctx, 31, 0x2355E8u);
    ctx->pc = 0x2345F0u;
    { ctx->pc = 0x2345f0; return; }
    ctx->pc = 0x2355E8u;
label_2355e8:
    // 0x2355e8: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x2355e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_2355ec:
    // 0x2355ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2355ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2355f0:
    // 0x2355f0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2355f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_2355f4:
    // 0x2355f4: 0x2442ad00  addiu       $v0, $v0, -0x5300
    ctx->pc = 0x2355f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946048));
label_2355f8:
    // 0x2355f8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2355f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2355fc:
    // 0x2355fc: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_235600:
    if (ctx->pc == 0x235600u) {
        ctx->pc = 0x235600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2355FCu;
        // 0x235600: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235604u;
        goto label_235604;
    }
    ctx->pc = 0x2355FCu;
    {
        const bool branch_taken_0x2355fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x235600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2355FCu;
        // 0x235600: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2355fc) {
            ctx->pc = 0x235614u;
            goto label_235614;
        }
    }
    ctx->pc = 0x235604u;
label_235604:
    // 0x235604: 0xac520004  sw          $s2, 0x4($v0)
    ctx->pc = 0x235604u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
label_235608:
    // 0x235608: 0xc08d192  jal         func_234648
label_23560c:
    if (ctx->pc == 0x23560Cu) {
        ctx->pc = 0x23560Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235608u;
        // 0x23560c: 0xac530000  sw          $s3, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235610u;
        goto label_235610;
    }
    ctx->pc = 0x235608u;
    SET_GPR_U32(ctx, 31, 0x235610u);
    ctx->pc = 0x23560Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235608u;
    // 0x23560c: 0xac530000  sw          $s3, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234648u;
    { ctx->pc = 0x234648; return; }
    ctx->pc = 0x235610u;
label_235610:
    // 0x235610: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x235610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235614:
    // 0x235614: 0xc069210  jal         func_1A4840
label_235618:
    if (ctx->pc == 0x235618u) {
        ctx->pc = 0x235618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235614u;
        // 0x235618: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23561Cu;
        goto label_23561c;
    }
    ctx->pc = 0x235614u;
    SET_GPR_U32(ctx, 31, 0x23561Cu);
    ctx->pc = 0x235618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235614u;
    // 0x235618: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x23561Cu;
label_23561c:
    // 0x23561c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23561cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235620:
    // 0x235620: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235620u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_235624:
    // 0x235624: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x235624u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_235628:
    // 0x235628: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x235628u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23562c:
    // 0x23562c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23562cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_235630:
    // 0x235630: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x235630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_235634:
    // 0x235634: 0x3e00008  jr          $ra
label_235638:
    if (ctx->pc == 0x235638u) {
        ctx->pc = 0x235638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235634u;
        // 0x235638: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23563Cu;
        goto label_23563c;
    }
    ctx->pc = 0x235634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235634u;
        // 0x235638: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23563Cu;
label_23563c:
    // 0x23563c: 0x0  nop
    ctx->pc = 0x23563cu;
    // NOP
label_235640:
    // 0x235640: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x235640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_235644:
    // 0x235644: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x235644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_235648:
    // 0x235648: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x235648u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23564c:
    // 0x23564c: 0x8f8482e4  lw          $a0, -0x7D1C($gp)
    ctx->pc = 0x23564cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
label_235650:
    // 0x235650: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x235650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_235654:
    // 0x235654: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x235654u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_235658:
    // 0x235658: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x235658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23565c:
    // 0x23565c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23565cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_235660:
    // 0x235660: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x235660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_235664:
    // 0x235664: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x235664u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_235668:
    // 0x235668: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x235668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23566c:
    // 0x23566c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23566cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_235670:
    // 0x235670: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x235670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_235674:
    // 0x235674: 0xc08dbf8  jal         func_236FE0
label_235678:
    if (ctx->pc == 0x235678u) {
        ctx->pc = 0x235678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235674u;
        // 0x235678: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23567Cu;
        goto label_23567c;
    }
    ctx->pc = 0x235674u;
    SET_GPR_U32(ctx, 31, 0x23567Cu);
    ctx->pc = 0x235678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235674u;
    // 0x235678: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x23567Cu;
label_23567c:
    // 0x23567c: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_235680:
    if (ctx->pc == 0x235680u) {
        ctx->pc = 0x235680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23567Cu;
        // 0x235680: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235684u;
        goto label_235684;
    }
    ctx->pc = 0x23567Cu;
    {
        const bool branch_taken_0x23567c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23567Cu;
        // 0x235680: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23567c) {
            ctx->pc = 0x235708u;
            goto label_235708;
        }
    }
    ctx->pc = 0x235684u;
label_235684:
    // 0x235684: 0xc08d17c  jal         func_2345F0
label_235688:
    if (ctx->pc == 0x235688u) {
        ctx->pc = 0x23568Cu;
        goto label_23568c;
    }
    ctx->pc = 0x235684u;
    SET_GPR_U32(ctx, 31, 0x23568Cu);
    ctx->pc = 0x2345F0u;
    { ctx->pc = 0x2345f0; return; }
    ctx->pc = 0x23568Cu;
label_23568c:
    // 0x23568c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23568cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235690:
    // 0x235690: 0x1600001a  bnez        $s0, . + 4 + (0x1A << 2)
label_235694:
    if (ctx->pc == 0x235694u) {
        ctx->pc = 0x235694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235690u;
        // 0x235694: 0x2e420040  sltiu       $v0, $s2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x235698u;
        goto label_235698;
    }
    ctx->pc = 0x235690u;
    {
        const bool branch_taken_0x235690 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x235694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235690u;
        // 0x235694: 0x2e420040  sltiu       $v0, $s2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x235690) {
            ctx->pc = 0x2356FCu;
            goto label_2356fc;
        }
    }
    ctx->pc = 0x235698u;
label_235698:
    // 0x235698: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_23569c:
    if (ctx->pc == 0x23569Cu) {
        ctx->pc = 0x2356A0u;
        goto label_2356a0;
    }
    ctx->pc = 0x235698u;
    {
        const bool branch_taken_0x235698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x235698) {
            ctx->pc = 0x2356A8u;
            goto label_2356a8;
        }
    }
    ctx->pc = 0x2356A0u;
label_2356a0:
    // 0x2356a0: 0x10000016  b           . + 4 + (0x16 << 2)
label_2356a4:
    if (ctx->pc == 0x2356A4u) {
        ctx->pc = 0x2356A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2356A0u;
        // 0x2356a4: 0x2410ff9d  addiu       $s0, $zero, -0x63 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967197));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2356A8u;
        goto label_2356a8;
    }
    ctx->pc = 0x2356A0u;
    {
        const bool branch_taken_0x2356a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2356A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2356A0u;
        // 0x2356a4: 0x2410ff9d  addiu       $s0, $zero, -0x63 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967197));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2356a0) {
            ctx->pc = 0x2356FCu;
            goto label_2356fc;
        }
    }
    ctx->pc = 0x2356A8u;
label_2356a8:
    // 0x2356a8: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
label_2356ac:
    if (ctx->pc == 0x2356ACu) {
        ctx->pc = 0x2356ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2356A8u;
        // 0x2356ac: 0x1288c0  sll         $s1, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2356B0u;
        goto label_2356b0;
    }
    ctx->pc = 0x2356A8u;
    {
        const bool branch_taken_0x2356a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2356ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2356A8u;
        // 0x2356ac: 0x1288c0  sll         $s1, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2356a8) {
            ctx->pc = 0x2356FCu;
            goto label_2356fc;
        }
    }
    ctx->pc = 0x2356B0u;
label_2356b0:
    // 0x2356b0: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x2356b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
label_2356b4:
    // 0x2356b4: 0x2610ad00  addiu       $s0, $s0, -0x5300
    ctx->pc = 0x2356b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946048));
label_2356b8:
    // 0x2356b8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2356b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2356bc:
    // 0x2356bc: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x2356bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
label_2356c0:
    // 0x2356c0: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2356c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2356c4:
    // 0x2356c4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2356c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2356c8:
    // 0x2356c8: 0xc08e93e  jal         func_23A4F8
label_2356cc:
    if (ctx->pc == 0x2356CCu) {
        ctx->pc = 0x2356CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2356C8u;
        // 0x2356cc: 0x26100204  addiu       $s0, $s0, 0x204 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 516));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2356D0u;
        goto label_2356d0;
    }
    ctx->pc = 0x2356C8u;
    SET_GPR_U32(ctx, 31, 0x2356D0u);
    ctx->pc = 0x2356CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2356C8u;
    // 0x2356cc: 0x26100204  addiu       $s0, $s0, 0x204 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 516));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x2356D0u;
label_2356d0:
    // 0x2356d0: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x2356d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_2356d4:
    // 0x2356d4: 0x24630518  addiu       $v1, $v1, 0x518
    ctx->pc = 0x2356d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1304));
label_2356d8:
    // 0x2356d8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2356d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2356dc:
    // 0x2356dc: 0xac750004  sw          $s5, 0x4($v1)
    ctx->pc = 0x2356dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 21));
label_2356e0:
    // 0x2356e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2356e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2356e4:
    // 0x2356e4: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2356e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_2356e8:
    // 0x2356e8: 0x26260004  addiu       $a2, $s1, 0x4
    ctx->pc = 0x2356e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2356ec:
    // 0x2356ec: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2356ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_2356f0:
    // 0x2356f0: 0xc08d192  jal         func_234648
label_2356f4:
    if (ctx->pc == 0x2356F4u) {
        ctx->pc = 0x2356F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2356F0u;
        // 0x2356f4: 0x2405002e  addiu       $a1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2356F8u;
        goto label_2356f8;
    }
    ctx->pc = 0x2356F0u;
    SET_GPR_U32(ctx, 31, 0x2356F8u);
    ctx->pc = 0x2356F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2356F0u;
    // 0x2356f4: 0x2405002e  addiu       $a1, $zero, 0x2E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234648u;
    { ctx->pc = 0x234648; return; }
    ctx->pc = 0x2356F8u;
label_2356f8:
    // 0x2356f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2356f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2356fc:
    // 0x2356fc: 0xc069210  jal         func_1A4840
label_235700:
    if (ctx->pc == 0x235700u) {
        ctx->pc = 0x235700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2356FCu;
        // 0x235700: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235704u;
        goto label_235704;
    }
    ctx->pc = 0x2356FCu;
    SET_GPR_U32(ctx, 31, 0x235704u);
    ctx->pc = 0x235700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2356FCu;
    // 0x235700: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x235704u;
label_235704:
    // 0x235704: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x235704u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235708:
    // 0x235708: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235708u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23570c:
    // 0x23570c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23570cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_235710:
    // 0x235710: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x235710u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_235714:
    // 0x235714: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x235714u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_235718:
    // 0x235718: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x235718u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23571c:
    // 0x23571c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x23571cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_235720:
    // 0x235720: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x235720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_235724:
    // 0x235724: 0x3e00008  jr          $ra
label_235728:
    if (ctx->pc == 0x235728u) {
        ctx->pc = 0x235728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235724u;
        // 0x235728: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23572Cu;
        goto label_23572c;
    }
    ctx->pc = 0x235724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235724u;
        // 0x235728: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23572Cu;
label_23572c:
    // 0x23572c: 0x0  nop
    ctx->pc = 0x23572cu;
    // NOP
label_235730:
    // 0x235730: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x235730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_235734:
    // 0x235734: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x235734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_235738:
    // 0x235738: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x235738u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23573c:
    // 0x23573c: 0x8f8482e4  lw          $a0, -0x7D1C($gp)
    ctx->pc = 0x23573cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
label_235740:
    // 0x235740: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x235740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_235744:
    // 0x235744: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x235744u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_235748:
    // 0x235748: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x235748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23574c:
    // 0x23574c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23574cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_235750:
    // 0x235750: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x235750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_235754:
    // 0x235754: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x235754u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_235758:
    // 0x235758: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x235758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_23575c:
    // 0x23575c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x23575cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_235760:
    // 0x235760: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x235760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_235764:
    // 0x235764: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x235764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_235768:
    // 0x235768: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x235768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_23576c:
    // 0x23576c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x23576cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_235770:
    // 0x235770: 0xc08dbf8  jal         func_236FE0
label_235774:
    if (ctx->pc == 0x235774u) {
        ctx->pc = 0x235774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235770u;
        // 0x235774: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235778u;
        goto label_235778;
    }
    ctx->pc = 0x235770u;
    SET_GPR_U32(ctx, 31, 0x235778u);
    ctx->pc = 0x235774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235770u;
    // 0x235774: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x235778u;
label_235778:
    // 0x235778: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
label_23577c:
    if (ctx->pc == 0x23577Cu) {
        ctx->pc = 0x23577Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235778u;
        // 0x23577c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235780u;
        goto label_235780;
    }
    ctx->pc = 0x235778u;
    {
        const bool branch_taken_0x235778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23577Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235778u;
        // 0x23577c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235778) {
            ctx->pc = 0x235848u;
            goto label_235848;
        }
    }
    ctx->pc = 0x235780u;
label_235780:
    // 0x235780: 0xc08d17c  jal         func_2345F0
label_235784:
    if (ctx->pc == 0x235784u) {
        ctx->pc = 0x235784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235780u;
        // 0x235784: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235788u;
        goto label_235788;
    }
    ctx->pc = 0x235780u;
    SET_GPR_U32(ctx, 31, 0x235788u);
    ctx->pc = 0x235784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235780u;
    // 0x235784: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2345F0u;
    { ctx->pc = 0x2345f0; return; }
    ctx->pc = 0x235788u;
label_235788:
    // 0x235788: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x235788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23578c:
    // 0x23578c: 0x1600002a  bnez        $s0, . + 4 + (0x2A << 2)
label_235790:
    if (ctx->pc == 0x235790u) {
        ctx->pc = 0x235790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23578Cu;
        // 0x235790: 0x2e620040  sltiu       $v0, $s3, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x235794u;
        goto label_235794;
    }
    ctx->pc = 0x23578Cu;
    {
        const bool branch_taken_0x23578c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x235790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23578Cu;
        // 0x235790: 0x2e620040  sltiu       $v0, $s3, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23578c) {
            ctx->pc = 0x235838u;
            goto label_235838;
        }
    }
    ctx->pc = 0x235794u;
label_235794:
    // 0x235794: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_235798:
    if (ctx->pc == 0x235798u) {
        ctx->pc = 0x23579Cu;
        goto label_23579c;
    }
    ctx->pc = 0x235794u;
    {
        const bool branch_taken_0x235794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x235794) {
            ctx->pc = 0x2357A8u;
            goto label_2357a8;
        }
    }
    ctx->pc = 0x23579Cu;
label_23579c:
    // 0x23579c: 0x10000026  b           . + 4 + (0x26 << 2)
label_2357a0:
    if (ctx->pc == 0x2357A0u) {
        ctx->pc = 0x2357A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23579Cu;
        // 0x2357a0: 0x2410ff9d  addiu       $s0, $zero, -0x63 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967197));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2357A4u;
        goto label_2357a4;
    }
    ctx->pc = 0x23579Cu;
    {
        const bool branch_taken_0x23579c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2357A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23579Cu;
        // 0x2357a0: 0x2410ff9d  addiu       $s0, $zero, -0x63 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967197));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23579c) {
            ctx->pc = 0x235838u;
            goto label_235838;
        }
    }
    ctx->pc = 0x2357A4u;
label_2357a4:
    // 0x2357a4: 0x0  nop
    ctx->pc = 0x2357a4u;
    // NOP
label_2357a8:
    // 0x2357a8: 0x12600023  beqz        $s3, . + 4 + (0x23 << 2)
label_2357ac:
    if (ctx->pc == 0x2357ACu) {
        ctx->pc = 0x2357ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2357A8u;
        // 0x2357ac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2357B0u;
        goto label_2357b0;
    }
    ctx->pc = 0x2357A8u;
    {
        const bool branch_taken_0x2357a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2357ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2357A8u;
        // 0x2357ac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2357a8) {
            ctx->pc = 0x235838u;
            goto label_235838;
        }
    }
    ctx->pc = 0x2357B0u;
label_2357b0:
    // 0x2357b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2357b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2357b4:
    // 0x2357b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2357b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2357b8:
    // 0x2357b8: 0xa61004  sllv        $v0, $a2, $a1
    ctx->pc = 0x2357b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
label_2357bc:
    // 0x2357bc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2357bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2357c0:
    // 0x2357c0: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x2357c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
label_2357c4:
    // 0x2357c4: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x2357c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2357c8:
    // 0x2357c8: 0x28a40018  slti        $a0, $a1, 0x18
    ctx->pc = 0x2357c8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)24) ? 1 : 0);
label_2357cc:
    // 0x2357cc: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_2357d0:
    if (ctx->pc == 0x2357D0u) {
        ctx->pc = 0x2357D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2357CCu;
        // 0x2357d0: 0x62900b  movn        $s2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2357D4u;
        goto label_2357d4;
    }
    ctx->pc = 0x2357CCu;
    {
        const bool branch_taken_0x2357cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2357D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2357CCu;
        // 0x2357d0: 0x62900b  movn        $s2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2357cc) {
            ctx->pc = 0x2357B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2357b8;
        }
    }
    ctx->pc = 0x2357D4u;
label_2357d4:
    // 0x2357d4: 0x2531818  mult        $v1, $s2, $s3
    ctx->pc = 0x2357d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2357d8:
    // 0x2357d8: 0x39080  sll         $s2, $v1, 2
    ctx->pc = 0x2357d8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2357dc:
    // 0x2357dc: 0x2e4201fc  sltiu       $v0, $s2, 0x1FC
    ctx->pc = 0x2357dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)508) ? 1 : 0);
label_2357e0:
    // 0x2357e0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_2357e4:
    if (ctx->pc == 0x2357E4u) {
        ctx->pc = 0x2357E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2357E0u;
        // 0x2357e4: 0x2410ff9d  addiu       $s0, $zero, -0x63 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967197));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2357E8u;
        goto label_2357e8;
    }
    ctx->pc = 0x2357E0u;
    {
        const bool branch_taken_0x2357e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2357E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2357E0u;
        // 0x2357e4: 0x2410ff9d  addiu       $s0, $zero, -0x63 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967197));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2357e0) {
            ctx->pc = 0x235838u;
            goto label_235838;
        }
    }
    ctx->pc = 0x2357E8u;
label_2357e8:
    // 0x2357e8: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x2357e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
label_2357ec:
    // 0x2357ec: 0x1388c0  sll         $s1, $s3, 3
    ctx->pc = 0x2357ecu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_2357f0:
    // 0x2357f0: 0x2610ad00  addiu       $s0, $s0, -0x5300
    ctx->pc = 0x2357f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946048));
label_2357f4:
    // 0x2357f4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2357f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2357f8:
    // 0x2357f8: 0xae140004  sw          $s4, 0x4($s0)
    ctx->pc = 0x2357f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
label_2357fc:
    // 0x2357fc: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2357fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_235800:
    // 0x235800: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x235800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
label_235804:
    // 0x235804: 0x26100204  addiu       $s0, $s0, 0x204
    ctx->pc = 0x235804u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 516));
label_235808:
    // 0x235808: 0xc08e93e  jal         func_23A4F8
label_23580c:
    if (ctx->pc == 0x23580Cu) {
        ctx->pc = 0x23580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235808u;
        // 0x23580c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235810u;
        goto label_235810;
    }
    ctx->pc = 0x235808u;
    SET_GPR_U32(ctx, 31, 0x235810u);
    ctx->pc = 0x23580Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235808u;
    // 0x23580c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x235810u;
label_235810:
    // 0x235810: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x235810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_235814:
    // 0x235814: 0x24630518  addiu       $v1, $v1, 0x518
    ctx->pc = 0x235814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1304));
label_235818:
    // 0x235818: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x235818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23581c:
    // 0x23581c: 0xac770004  sw          $s7, 0x4($v1)
    ctx->pc = 0x23581cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 23));
label_235820:
    // 0x235820: 0x26260008  addiu       $a2, $s1, 0x8
    ctx->pc = 0x235820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_235824:
    // 0x235824: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x235824u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_235828:
    // 0x235828: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x235828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_23582c:
    // 0x23582c: 0xc08d192  jal         func_234648
label_235830:
    if (ctx->pc == 0x235830u) {
        ctx->pc = 0x235830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23582Cu;
        // 0x235830: 0xac720008  sw          $s2, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235834u;
        goto label_235834;
    }
    ctx->pc = 0x23582Cu;
    SET_GPR_U32(ctx, 31, 0x235834u);
    ctx->pc = 0x235830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23582Cu;
    // 0x235830: 0xac720008  sw          $s2, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234648u;
    { ctx->pc = 0x234648; return; }
    ctx->pc = 0x235834u;
label_235834:
    // 0x235834: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x235834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235838:
    // 0x235838: 0xc069210  jal         func_1A4840
label_23583c:
    if (ctx->pc == 0x23583Cu) {
        ctx->pc = 0x23583Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235838u;
        // 0x23583c: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235840u;
        goto label_235840;
    }
    ctx->pc = 0x235838u;
    SET_GPR_U32(ctx, 31, 0x235840u);
    ctx->pc = 0x23583Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235838u;
    // 0x23583c: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x235840u;
label_235840:
    // 0x235840: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x235840u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235844:
    // 0x235844: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235844u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_235848:
    // 0x235848: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x235848u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23584c:
    // 0x23584c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23584cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_235850:
    // 0x235850: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x235850u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_235854:
    // 0x235854: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x235854u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_235858:
    // 0x235858: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x235858u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_23585c:
    // 0x23585c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x23585cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_235860:
    // 0x235860: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x235860u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_235864:
    // 0x235864: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x235864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_235868:
    // 0x235868: 0x3e00008  jr          $ra
label_23586c:
    if (ctx->pc == 0x23586Cu) {
        ctx->pc = 0x23586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235868u;
        // 0x23586c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235870u;
        goto label_235870;
    }
    ctx->pc = 0x235868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235868u;
        // 0x23586c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235870u;
label_235870:
    // 0x235870: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x235870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_235874:
    // 0x235874: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x235874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_235878:
    // 0x235878: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x235878u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23587c:
    // 0x23587c: 0x8f8482e4  lw          $a0, -0x7D1C($gp)
    ctx->pc = 0x23587cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
label_235880:
    // 0x235880: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x235880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_235884:
    // 0x235884: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x235884u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_235888:
    // 0x235888: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x235888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23588c:
    // 0x23588c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23588cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_235890:
    // 0x235890: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x235890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_235894:
    // 0x235894: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x235894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_235898:
    // 0x235898: 0xc08dbf8  jal         func_236FE0
label_23589c:
    if (ctx->pc == 0x23589Cu) {
        ctx->pc = 0x23589Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235898u;
        // 0x23589c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2358A0u;
        goto label_2358a0;
    }
    ctx->pc = 0x235898u;
    SET_GPR_U32(ctx, 31, 0x2358A0u);
    ctx->pc = 0x23589Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235898u;
    // 0x23589c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x2358A0u;
label_2358a0:
    // 0x2358a0: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_2358a4:
    if (ctx->pc == 0x2358A4u) {
        ctx->pc = 0x2358A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2358A0u;
        // 0x2358a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2358A8u;
        goto label_2358a8;
    }
    ctx->pc = 0x2358A0u;
    {
        const bool branch_taken_0x2358a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2358A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2358A0u;
        // 0x2358a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2358a0) {
            ctx->pc = 0x235914u;
            goto label_235914;
        }
    }
    ctx->pc = 0x2358A8u;
label_2358a8:
    // 0x2358a8: 0xc08d17c  jal         func_2345F0
label_2358ac:
    if (ctx->pc == 0x2358ACu) {
        ctx->pc = 0x2358B0u;
        goto label_2358b0;
    }
    ctx->pc = 0x2358A8u;
    SET_GPR_U32(ctx, 31, 0x2358B0u);
    ctx->pc = 0x2345F0u;
    { ctx->pc = 0x2345f0; return; }
    ctx->pc = 0x2358B0u;
label_2358b0:
    // 0x2358b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2358b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2358b4:
    // 0x2358b4: 0x16000014  bnez        $s0, . + 4 + (0x14 << 2)
label_2358b8:
    if (ctx->pc == 0x2358B8u) {
        ctx->pc = 0x2358B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2358B4u;
        // 0x2358b8: 0x2e220080  sltiu       $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2358BCu;
        goto label_2358bc;
    }
    ctx->pc = 0x2358B4u;
    {
        const bool branch_taken_0x2358b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2358B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2358B4u;
        // 0x2358b8: 0x2e220080  sltiu       $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2358b4) {
            ctx->pc = 0x235908u;
            goto label_235908;
        }
    }
    ctx->pc = 0x2358BCu;
label_2358bc:
    // 0x2358bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2358c0:
    if (ctx->pc == 0x2358C0u) {
        ctx->pc = 0x2358C4u;
        goto label_2358c4;
    }
    ctx->pc = 0x2358BCu;
    {
        const bool branch_taken_0x2358bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2358bc) {
            ctx->pc = 0x2358D0u;
            goto label_2358d0;
        }
    }
    ctx->pc = 0x2358C4u;
label_2358c4:
    // 0x2358c4: 0x10000010  b           . + 4 + (0x10 << 2)
label_2358c8:
    if (ctx->pc == 0x2358C8u) {
        ctx->pc = 0x2358C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2358C4u;
        // 0x2358c8: 0x2410ff9d  addiu       $s0, $zero, -0x63 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967197));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2358CCu;
        goto label_2358cc;
    }
    ctx->pc = 0x2358C4u;
    {
        const bool branch_taken_0x2358c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2358C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2358C4u;
        // 0x2358c8: 0x2410ff9d  addiu       $s0, $zero, -0x63 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967197));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2358c4) {
            ctx->pc = 0x235908u;
            goto label_235908;
        }
    }
    ctx->pc = 0x2358CCu;
label_2358cc:
    // 0x2358cc: 0x0  nop
    ctx->pc = 0x2358ccu;
    // NOP
label_2358d0:
    // 0x2358d0: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_2358d4:
    if (ctx->pc == 0x2358D4u) {
        ctx->pc = 0x2358D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2358D0u;
        // 0x2358d4: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2358D8u;
        goto label_2358d8;
    }
    ctx->pc = 0x2358D0u;
    {
        const bool branch_taken_0x2358d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2358D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2358D0u;
        // 0x2358d4: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2358d0) {
            ctx->pc = 0x235908u;
            goto label_235908;
        }
    }
    ctx->pc = 0x2358D8u;
label_2358d8:
    // 0x2358d8: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x2358d8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2358dc:
    // 0x2358dc: 0x2442ad00  addiu       $v0, $v0, -0x5300
    ctx->pc = 0x2358dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946048));
label_2358e0:
    // 0x2358e0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2358e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2358e4:
    // 0x2358e4: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x2358e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_2358e8:
    // 0x2358e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2358e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2358ec:
    // 0x2358ec: 0xc08e93e  jal         func_23A4F8
label_2358f0:
    if (ctx->pc == 0x2358F0u) {
        ctx->pc = 0x2358F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2358ECu;
        // 0x2358f0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2358F4u;
        goto label_2358f4;
    }
    ctx->pc = 0x2358ECu;
    SET_GPR_U32(ctx, 31, 0x2358F4u);
    ctx->pc = 0x2358F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2358ECu;
    // 0x2358f0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x2358F4u;
label_2358f4:
    // 0x2358f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2358f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2358f8:
    // 0x2358f8: 0x26060004  addiu       $a2, $s0, 0x4
    ctx->pc = 0x2358f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2358fc:
    // 0x2358fc: 0xc08d192  jal         func_234648
label_235900:
    if (ctx->pc == 0x235900u) {
        ctx->pc = 0x235900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2358FCu;
        // 0x235900: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235904u;
        goto label_235904;
    }
    ctx->pc = 0x2358FCu;
    SET_GPR_U32(ctx, 31, 0x235904u);
    ctx->pc = 0x235900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2358FCu;
    // 0x235900: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234648u;
    { ctx->pc = 0x234648; return; }
    ctx->pc = 0x235904u;
label_235904:
    // 0x235904: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x235904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235908:
    // 0x235908: 0xc069210  jal         func_1A4840
label_23590c:
    if (ctx->pc == 0x23590Cu) {
        ctx->pc = 0x23590Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235908u;
        // 0x23590c: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235910u;
        goto label_235910;
    }
    ctx->pc = 0x235908u;
    SET_GPR_U32(ctx, 31, 0x235910u);
    ctx->pc = 0x23590Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235908u;
    // 0x23590c: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x235910u;
label_235910:
    // 0x235910: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x235910u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235914:
    // 0x235914: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235914u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_235918:
    // 0x235918: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x235918u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23591c:
    // 0x23591c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23591cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_235920:
    // 0x235920: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x235920u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_235924:
    // 0x235924: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x235924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_235928:
    // 0x235928: 0x3e00008  jr          $ra
label_23592c:
    if (ctx->pc == 0x23592Cu) {
        ctx->pc = 0x23592Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235928u;
        // 0x23592c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235930u;
        goto label_235930;
    }
    ctx->pc = 0x235928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23592Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235928u;
        // 0x23592c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235930u;
label_235930:
    // 0x235930: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x235930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_235934:
    // 0x235934: 0xaf8282ec  sw          $v0, -0x7D14($gp)
    ctx->pc = 0x235934u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935276), GPR_U32(ctx, 2));
label_235938:
    // 0x235938: 0x3e00008  jr          $ra
label_23593c:
    if (ctx->pc == 0x23593Cu) {
        ctx->pc = 0x235940u;
        goto label_235940;
    }
    ctx->pc = 0x235938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235940u;
label_235940:
    // 0x235940: 0x8f828300  lw          $v0, -0x7D00($gp)
    ctx->pc = 0x235940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935296)));
label_235944:
    // 0x235944: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x235944u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_235948:
    // 0x235948: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x235948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23594c:
    // 0x23594c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23594cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_235950:
    // 0x235950: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x235950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_235954:
    // 0x235954: 0x3c110059  lui         $s1, 0x59
    ctx->pc = 0x235954u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
label_235958:
    // 0x235958: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_23595c:
    if (ctx->pc == 0x23595Cu) {
        ctx->pc = 0x23595Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235958u;
        // 0x23595c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235960u;
        goto label_235960;
    }
    ctx->pc = 0x235958u;
    {
        const bool branch_taken_0x235958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23595Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235958u;
        // 0x23595c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235958) {
            ctx->pc = 0x235970u;
            goto label_235970;
        }
    }
    ctx->pc = 0x235960u;
label_235960:
    // 0x235960: 0x10000007  b           . + 4 + (0x7 << 2)
label_235964:
    if (ctx->pc == 0x235964u) {
        ctx->pc = 0x235964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235960u;
        // 0x235964: 0x2402fff6  addiu       $v0, $zero, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235968u;
        goto label_235968;
    }
    ctx->pc = 0x235960u;
    {
        const bool branch_taken_0x235960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235960u;
        // 0x235964: 0x2402fff6  addiu       $v0, $zero, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235960) {
            ctx->pc = 0x235980u;
            goto label_235980;
        }
    }
    ctx->pc = 0x235968u;
label_235968:
    // 0x235968: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_23596c:
    if (ctx->pc == 0x23596Cu) {
        ctx->pc = 0x23596Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235968u;
        // 0x23596c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235970u;
        goto label_235970;
    }
    ctx->pc = 0x235968u;
    {
        const bool branch_taken_0x235968 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23596Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235968u;
        // 0x23596c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235968) {
            ctx->pc = 0x235980u;
            goto label_235980;
        }
    }
    ctx->pc = 0x235970u;
label_235970:
    // 0x235970: 0xc069ea6  jal         func_1A7A98
label_235974:
    if (ctx->pc == 0x235974u) {
        ctx->pc = 0x235974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235970u;
        // 0x235974: 0x2624b168  addiu       $a0, $s1, -0x4E98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294947176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235978u;
        goto label_235978;
    }
    ctx->pc = 0x235970u;
    SET_GPR_U32(ctx, 31, 0x235978u);
    ctx->pc = 0x235974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235970u;
    // 0x235974: 0x2624b168  addiu       $a0, $s1, -0x4E98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294947176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7A98u;
    { ctx->pc = 0x1a7a98; return; }
    ctx->pc = 0x235978u;
label_235978:
    // 0x235978: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_23597c:
    if (ctx->pc == 0x23597Cu) {
        ctx->pc = 0x23597Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235978u;
        // 0x23597c: 0x32030001  andi        $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x235980u;
        goto label_235980;
    }
    ctx->pc = 0x235978u;
    {
        const bool branch_taken_0x235978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23597Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235978u;
        // 0x23597c: 0x32030001  andi        $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x235978) {
            ctx->pc = 0x235968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_235968;
        }
    }
    ctx->pc = 0x235980u;
label_235980:
    // 0x235980: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235980u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_235984:
    // 0x235984: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x235984u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_235988:
    // 0x235988: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x235988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23598c:
    // 0x23598c: 0x3e00008  jr          $ra
label_235990:
    if (ctx->pc == 0x235990u) {
        ctx->pc = 0x235990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23598Cu;
        // 0x235990: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235994u;
        goto label_235994;
    }
    ctx->pc = 0x23598Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23598Cu;
        // 0x235990: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23598Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235994u;
label_235994:
    // 0x235994: 0x0  nop
    ctx->pc = 0x235994u;
    // NOP
label_235998:
    // 0x235998: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x235998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_23599c:
    // 0x23599c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x23599cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2359a0:
    // 0x2359a0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2359a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2359a4:
    // 0x2359a4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2359a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2359a8:
    // 0x2359a8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2359a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2359ac:
    // 0x2359ac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2359acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2359b0:
    // 0x2359b0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2359b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_2359b4:
    // 0x2359b4: 0xc08d650  jal         func_235940
label_2359b8:
    if (ctx->pc == 0x2359B8u) {
        ctx->pc = 0x2359B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2359B4u;
        // 0x2359b8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2359BCu;
        goto label_2359bc;
    }
    ctx->pc = 0x2359B4u;
    SET_GPR_U32(ctx, 31, 0x2359BCu);
    ctx->pc = 0x2359B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2359B4u;
    // 0x2359b8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235940u;
    goto label_235940;
    ctx->pc = 0x2359BCu;
label_2359bc:
    // 0x2359bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2359bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2359c0:
    // 0x2359c0: 0x32510003  andi        $s1, $s2, 0x3
    ctx->pc = 0x2359c0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
label_2359c4:
    // 0x2359c4: 0x3c070059  lui         $a3, 0x59
    ctx->pc = 0x2359c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)89 << 16));
label_2359c8:
    // 0x2359c8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2359c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2359cc:
    // 0x2359cc: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x2359ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2359d0:
    // 0x2359d0: 0x32520001  andi        $s2, $s2, 0x1
    ctx->pc = 0x2359d0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_2359d4:
    // 0x2359d4: 0x24f0b100  addiu       $s0, $a3, -0x4F00
    ctx->pc = 0x2359d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947072));
label_2359d8:
    // 0x2359d8: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_2359dc:
    if (ctx->pc == 0x2359DCu) {
        ctx->pc = 0x2359DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2359D8u;
        // 0x2359dc: 0x3a260001  xori        $a2, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2359E0u;
        goto label_2359e0;
    }
    ctx->pc = 0x2359D8u;
    {
        const bool branch_taken_0x2359d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2359DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2359D8u;
        // 0x2359dc: 0x3a260001  xori        $a2, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2359d8) {
            ctx->pc = 0x235A4Cu;
            goto label_235a4c;
        }
    }
    ctx->pc = 0x2359E0u;
label_2359e0:
    // 0x2359e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2359e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2359e4:
    // 0x2359e4: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x2359e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_2359e8:
    // 0x2359e8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2359e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2359ec:
    // 0x2359ec: 0xaf8282ec  sw          $v0, -0x7D14($gp)
    ctx->pc = 0x2359ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935276), GPR_U32(ctx, 2));
label_2359f0:
    // 0x2359f0: 0x2484b168  addiu       $a0, $a0, -0x4E98
    ctx->pc = 0x2359f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947176));
label_2359f4:
    // 0x2359f4: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x2359f4u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_2359f8:
    // 0x2359f8: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
label_2359fc:
    if (ctx->pc == 0x2359FCu) {
        ctx->pc = 0x2359FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2359F8u;
        // 0x2359fc: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235A00u;
        goto label_235a00;
    }
    ctx->pc = 0x2359F8u;
    {
        const bool branch_taken_0x2359f8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2359FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2359F8u;
        // 0x2359fc: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2359f8) {
            ctx->pc = 0x235A10u;
            goto label_235a10;
        }
    }
    ctx->pc = 0x235A00u;
label_235a00:
    // 0x235a00: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x235a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_235a04:
    // 0x235a04: 0x10000003  b           . + 4 + (0x3 << 2)
label_235a08:
    if (ctx->pc == 0x235A08u) {
        ctx->pc = 0x235A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235A04u;
        // 0x235a08: 0x244b5930  addiu       $t3, $v0, 0x5930 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 22832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235A0Cu;
        goto label_235a0c;
    }
    ctx->pc = 0x235A04u;
    {
        const bool branch_taken_0x235a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235A04u;
        // 0x235a08: 0x244b5930  addiu       $t3, $v0, 0x5930 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 22832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235a04) {
            ctx->pc = 0x235A14u;
            goto label_235a14;
        }
    }
    ctx->pc = 0x235A0Cu;
label_235a0c:
    // 0x235a0c: 0x0  nop
    ctx->pc = 0x235a0cu;
    // NOP
label_235a10:
    // 0x235a10: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x235a10u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_235a14:
    // 0x235a14: 0xc069e2a  jal         func_1A78A8
label_235a18:
    if (ctx->pc == 0x235A18u) {
        ctx->pc = 0x235A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235A14u;
        // 0x235a18: 0xafb00000  sw          $s0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235A1Cu;
        goto label_235a1c;
    }
    ctx->pc = 0x235A14u;
    SET_GPR_U32(ctx, 31, 0x235A1Cu);
    ctx->pc = 0x235A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235A14u;
    // 0x235a18: 0xafb00000  sw          $s0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x235A1Cu;
label_235a1c:
    // 0x235a1c: 0x2404ff9d  addiu       $a0, $zero, -0x63
    ctx->pc = 0x235a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967197));
label_235a20:
    // 0x235a20: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_235a24:
    if (ctx->pc == 0x235A24u) {
        ctx->pc = 0x235A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235A20u;
        // 0x235a24: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235A28u;
        goto label_235a28;
    }
    ctx->pc = 0x235A20u;
    {
        const bool branch_taken_0x235a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235A20u;
        // 0x235a24: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235a20) {
            ctx->pc = 0x235A40u;
            goto label_235a40;
        }
    }
    ctx->pc = 0x235A28u;
label_235a28:
    // 0x235a28: 0x56230009  bnel        $s1, $v1, . + 4 + (0x9 << 2)
label_235a2c:
    if (ctx->pc == 0x235A2Cu) {
        ctx->pc = 0x235A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235A28u;
        // 0x235a2c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235A30u;
        goto label_235a30;
    }
    ctx->pc = 0x235A28u;
    {
        const bool branch_taken_0x235a28 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x235a28) {
            ctx->pc = 0x235A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235A28u;
            // 0x235a2c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235A50u;
            goto label_235a50;
        }
    }
    ctx->pc = 0x235A30u;
label_235a30:
    // 0x235a30: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x235a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_235a34:
    // 0x235a34: 0xaf8282ec  sw          $v0, -0x7D14($gp)
    ctx->pc = 0x235a34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935276), GPR_U32(ctx, 2));
label_235a38:
    // 0x235a38: 0x10000003  b           . + 4 + (0x3 << 2)
label_235a3c:
    if (ctx->pc == 0x235A3Cu) {
        ctx->pc = 0x235A40u;
        goto label_235a40;
    }
    ctx->pc = 0x235A38u;
    {
        const bool branch_taken_0x235a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x235a38) {
            ctx->pc = 0x235A48u;
            goto label_235a48;
        }
    }
    ctx->pc = 0x235A40u;
label_235a40:
    // 0x235a40: 0xaf8482ec  sw          $a0, -0x7D14($gp)
    ctx->pc = 0x235a40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935276), GPR_U32(ctx, 4));
label_235a44:
    // 0x235a44: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x235a44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_235a48:
    // 0x235a48: 0x8f8282ec  lw          $v0, -0x7D14($gp)
    ctx->pc = 0x235a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935276)));
label_235a4c:
    // 0x235a4c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x235a4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_235a50:
    // 0x235a50: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x235a50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_235a54:
    // 0x235a54: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x235a54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_235a58:
    // 0x235a58: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x235a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_235a5c:
    // 0x235a5c: 0x3e00008  jr          $ra
label_235a60:
    if (ctx->pc == 0x235A60u) {
        ctx->pc = 0x235A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235A5Cu;
        // 0x235a60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235A64u;
        goto label_235a64;
    }
    ctx->pc = 0x235A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235A5Cu;
        // 0x235a60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235A64u;
label_235a64:
    // 0x235a64: 0x0  nop
    ctx->pc = 0x235a64u;
    // NOP
label_235a68:
    // 0x235a68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x235a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_235a6c:
    // 0x235a6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x235a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_235a70:
    // 0x235a70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x235a70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_235a74:
    // 0x235a74: 0x8f8482e8  lw          $a0, -0x7D18($gp)
    ctx->pc = 0x235a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935272)));
label_235a78:
    // 0x235a78: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x235a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_235a7c:
    // 0x235a7c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x235a7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_235a80:
    // 0x235a80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x235a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_235a84:
    // 0x235a84: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x235a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_235a88:
    // 0x235a88: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x235a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_235a8c:
    // 0x235a8c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x235a8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_235a90:
    // 0x235a90: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x235a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_235a94:
    // 0x235a94: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x235a94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_235a98:
    // 0x235a98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x235a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_235a9c:
    // 0x235a9c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x235a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_235aa0:
    // 0x235aa0: 0xc08dbf8  jal         func_236FE0
label_235aa4:
    if (ctx->pc == 0x235AA4u) {
        ctx->pc = 0x235AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235AA0u;
        // 0x235aa4: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235AA8u;
        goto label_235aa8;
    }
    ctx->pc = 0x235AA0u;
    SET_GPR_U32(ctx, 31, 0x235AA8u);
    ctx->pc = 0x235AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235AA0u;
    // 0x235aa4: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x235AA8u;
label_235aa8:
    // 0x235aa8: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_235aac:
    if (ctx->pc == 0x235AACu) {
        ctx->pc = 0x235AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235AA8u;
        // 0x235aac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235AB0u;
        goto label_235ab0;
    }
    ctx->pc = 0x235AA8u;
    {
        const bool branch_taken_0x235aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235AA8u;
        // 0x235aac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235aa8) {
            ctx->pc = 0x235B18u;
            goto label_235b18;
        }
    }
    ctx->pc = 0x235AB0u;
label_235ab0:
    // 0x235ab0: 0xc08d650  jal         func_235940
label_235ab4:
    if (ctx->pc == 0x235AB4u) {
        ctx->pc = 0x235AB8u;
        goto label_235ab8;
    }
    ctx->pc = 0x235AB0u;
    SET_GPR_U32(ctx, 31, 0x235AB8u);
    ctx->pc = 0x235940u;
    goto label_235940;
    ctx->pc = 0x235AB8u;
label_235ab8:
    // 0x235ab8: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x235ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_235abc:
    // 0x235abc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x235abcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235ac0:
    // 0x235ac0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x235ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_235ac4:
    // 0x235ac4: 0x2442ad00  addiu       $v0, $v0, -0x5300
    ctx->pc = 0x235ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946048));
label_235ac8:
    // 0x235ac8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x235ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_235acc:
    // 0x235acc: 0x1600000f  bnez        $s0, . + 4 + (0xF << 2)
label_235ad0:
    if (ctx->pc == 0x235AD0u) {
        ctx->pc = 0x235AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235ACCu;
        // 0x235ad0: 0x2445040c  addiu       $a1, $v0, 0x40C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1036));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235AD4u;
        goto label_235ad4;
    }
    ctx->pc = 0x235ACCu;
    {
        const bool branch_taken_0x235acc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x235AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235ACCu;
        // 0x235ad0: 0x2445040c  addiu       $a1, $v0, 0x40C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1036));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235acc) {
            ctx->pc = 0x235B0Cu;
            goto label_235b0c;
        }
    }
    ctx->pc = 0x235AD4u;
label_235ad4:
    // 0x235ad4: 0xac520400  sw          $s2, 0x400($v0)
    ctx->pc = 0x235ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1024), GPR_U32(ctx, 18));
label_235ad8:
    // 0x235ad8: 0x2410fffe  addiu       $s0, $zero, -0x2
    ctx->pc = 0x235ad8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_235adc:
    // 0x235adc: 0xac540404  sw          $s4, 0x404($v0)
    ctx->pc = 0x235adcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1028), GPR_U32(ctx, 20));
label_235ae0:
    // 0x235ae0: 0xc08dc08  jal         func_237020
label_235ae4:
    if (ctx->pc == 0x235AE4u) {
        ctx->pc = 0x235AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235AE0u;
        // 0x235ae4: 0xac550408  sw          $s5, 0x408($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1032), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235AE8u;
        goto label_235ae8;
    }
    ctx->pc = 0x235AE0u;
    SET_GPR_U32(ctx, 31, 0x235AE8u);
    ctx->pc = 0x235AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235AE0u;
    // 0x235ae4: 0xac550408  sw          $s5, 0x408($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 1032), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237020u;
    { ctx->pc = 0x237020; return; }
    ctx->pc = 0x235AE8u;
label_235ae8:
    // 0x235ae8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x235ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_235aec:
    // 0x235aec: 0x2652824  and         $a1, $s3, $a1
    ctx->pc = 0x235aecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & GPR_U64(ctx, 5));
label_235af0:
    // 0x235af0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x235af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_235af4:
    // 0x235af4: 0x34a50031  ori         $a1, $a1, 0x31
    ctx->pc = 0x235af4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49);
label_235af8:
    // 0x235af8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_235afc:
    if (ctx->pc == 0x235AFCu) {
        ctx->pc = 0x235AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235AF8u;
        // 0x235afc: 0x2446000c  addiu       $a2, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235B00u;
        goto label_235b00;
    }
    ctx->pc = 0x235AF8u;
    {
        const bool branch_taken_0x235af8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x235AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235AF8u;
        // 0x235afc: 0x2446000c  addiu       $a2, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235af8) {
            ctx->pc = 0x235B0Cu;
            goto label_235b0c;
        }
    }
    ctx->pc = 0x235B00u;
label_235b00:
    // 0x235b00: 0xc08d666  jal         func_235998
label_235b04:
    if (ctx->pc == 0x235B04u) {
        ctx->pc = 0x235B08u;
        goto label_235b08;
    }
    ctx->pc = 0x235B00u;
    SET_GPR_U32(ctx, 31, 0x235B08u);
    ctx->pc = 0x235998u;
    goto label_235998;
    ctx->pc = 0x235B08u;
label_235b08:
    // 0x235b08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x235b08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235b0c:
    // 0x235b0c: 0xc069210  jal         func_1A4840
label_235b10:
    if (ctx->pc == 0x235B10u) {
        ctx->pc = 0x235B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235B0Cu;
        // 0x235b10: 0x8f8482e8  lw          $a0, -0x7D18($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235B14u;
        goto label_235b14;
    }
    ctx->pc = 0x235B0Cu;
    SET_GPR_U32(ctx, 31, 0x235B14u);
    ctx->pc = 0x235B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235B0Cu;
    // 0x235b10: 0x8f8482e8  lw          $a0, -0x7D18($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x235B14u;
label_235b14:
    // 0x235b14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x235b14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235b18:
    // 0x235b18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235b18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_235b1c:
    // 0x235b1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x235b1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_235b20:
    // 0x235b20: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x235b20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_235b24:
    // 0x235b24: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x235b24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_235b28:
    // 0x235b28: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x235b28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_235b2c:
    // 0x235b2c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x235b2cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_235b30:
    // 0x235b30: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x235b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_235b34:
    // 0x235b34: 0x3e00008  jr          $ra
label_235b38:
    if (ctx->pc == 0x235B38u) {
        ctx->pc = 0x235B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235B34u;
        // 0x235b38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235B3Cu;
        goto label_235b3c;
    }
    ctx->pc = 0x235B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235B34u;
        // 0x235b38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235B34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235B3Cu;
label_235b3c:
    // 0x235b3c: 0x0  nop
    ctx->pc = 0x235b3cu;
    // NOP
label_235b40:
    // 0x235b40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x235b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_235b44:
    // 0x235b44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x235b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_235b48:
    // 0x235b48: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x235b48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_235b4c:
    // 0x235b4c: 0x8f8482e8  lw          $a0, -0x7D18($gp)
    ctx->pc = 0x235b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935272)));
label_235b50:
    // 0x235b50: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x235b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_235b54:
    // 0x235b54: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x235b54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_235b58:
    // 0x235b58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x235b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_235b5c:
    // 0x235b5c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x235b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_235b60:
    // 0x235b60: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x235b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_235b64:
    // 0x235b64: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x235b64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_235b68:
    // 0x235b68: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x235b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_235b6c:
    // 0x235b6c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x235b6cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_235b70:
    // 0x235b70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x235b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_235b74:
    // 0x235b74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x235b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_235b78:
    // 0x235b78: 0xc08dbf8  jal         func_236FE0
label_235b7c:
    if (ctx->pc == 0x235B7Cu) {
        ctx->pc = 0x235B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235B78u;
        // 0x235b7c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235B80u;
        goto label_235b80;
    }
    ctx->pc = 0x235B78u;
    SET_GPR_U32(ctx, 31, 0x235B80u);
    ctx->pc = 0x235B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235B78u;
    // 0x235b7c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x235B80u;
label_235b80:
    // 0x235b80: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_235b84:
    if (ctx->pc == 0x235B84u) {
        ctx->pc = 0x235B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235B80u;
        // 0x235b84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235B88u;
        goto label_235b88;
    }
    ctx->pc = 0x235B80u;
    {
        const bool branch_taken_0x235b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235B80u;
        // 0x235b84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235b80) {
            ctx->pc = 0x235BF0u;
            goto label_235bf0;
        }
    }
    ctx->pc = 0x235B88u;
label_235b88:
    // 0x235b88: 0xc08d650  jal         func_235940
label_235b8c:
    if (ctx->pc == 0x235B8Cu) {
        ctx->pc = 0x235B90u;
        goto label_235b90;
    }
    ctx->pc = 0x235B88u;
    SET_GPR_U32(ctx, 31, 0x235B90u);
    ctx->pc = 0x235940u;
    goto label_235940;
    ctx->pc = 0x235B90u;
label_235b90:
    // 0x235b90: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x235b90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_235b94:
    // 0x235b94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x235b94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235b98:
    // 0x235b98: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x235b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_235b9c:
    // 0x235b9c: 0x2442ad00  addiu       $v0, $v0, -0x5300
    ctx->pc = 0x235b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946048));
label_235ba0:
    // 0x235ba0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x235ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_235ba4:
    // 0x235ba4: 0x1600000f  bnez        $s0, . + 4 + (0xF << 2)
label_235ba8:
    if (ctx->pc == 0x235BA8u) {
        ctx->pc = 0x235BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235BA4u;
        // 0x235ba8: 0x2445040c  addiu       $a1, $v0, 0x40C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1036));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235BACu;
        goto label_235bac;
    }
    ctx->pc = 0x235BA4u;
    {
        const bool branch_taken_0x235ba4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x235BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235BA4u;
        // 0x235ba8: 0x2445040c  addiu       $a1, $v0, 0x40C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1036));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235ba4) {
            ctx->pc = 0x235BE4u;
            goto label_235be4;
        }
    }
    ctx->pc = 0x235BACu;
label_235bac:
    // 0x235bac: 0xac520400  sw          $s2, 0x400($v0)
    ctx->pc = 0x235bacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1024), GPR_U32(ctx, 18));
label_235bb0:
    // 0x235bb0: 0x2410fffe  addiu       $s0, $zero, -0x2
    ctx->pc = 0x235bb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_235bb4:
    // 0x235bb4: 0xac540404  sw          $s4, 0x404($v0)
    ctx->pc = 0x235bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1028), GPR_U32(ctx, 20));
label_235bb8:
    // 0x235bb8: 0xc08dc08  jal         func_237020
label_235bbc:
    if (ctx->pc == 0x235BBCu) {
        ctx->pc = 0x235BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235BB8u;
        // 0x235bbc: 0xac550408  sw          $s5, 0x408($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1032), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235BC0u;
        goto label_235bc0;
    }
    ctx->pc = 0x235BB8u;
    SET_GPR_U32(ctx, 31, 0x235BC0u);
    ctx->pc = 0x235BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235BB8u;
    // 0x235bbc: 0xac550408  sw          $s5, 0x408($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 1032), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237020u;
    { ctx->pc = 0x237020; return; }
    ctx->pc = 0x235BC0u;
label_235bc0:
    // 0x235bc0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x235bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_235bc4:
    // 0x235bc4: 0x2652824  and         $a1, $s3, $a1
    ctx->pc = 0x235bc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & GPR_U64(ctx, 5));
label_235bc8:
    // 0x235bc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x235bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_235bcc:
    // 0x235bcc: 0x34a50032  ori         $a1, $a1, 0x32
    ctx->pc = 0x235bccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)50);
label_235bd0:
    // 0x235bd0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_235bd4:
    if (ctx->pc == 0x235BD4u) {
        ctx->pc = 0x235BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235BD0u;
        // 0x235bd4: 0x2446000c  addiu       $a2, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235BD8u;
        goto label_235bd8;
    }
    ctx->pc = 0x235BD0u;
    {
        const bool branch_taken_0x235bd0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x235BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235BD0u;
        // 0x235bd4: 0x2446000c  addiu       $a2, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235bd0) {
            ctx->pc = 0x235BE4u;
            goto label_235be4;
        }
    }
    ctx->pc = 0x235BD8u;
label_235bd8:
    // 0x235bd8: 0xc08d666  jal         func_235998
label_235bdc:
    if (ctx->pc == 0x235BDCu) {
        ctx->pc = 0x235BE0u;
        goto label_235be0;
    }
    ctx->pc = 0x235BD8u;
    SET_GPR_U32(ctx, 31, 0x235BE0u);
    ctx->pc = 0x235998u;
    goto label_235998;
    ctx->pc = 0x235BE0u;
label_235be0:
    // 0x235be0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x235be0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235be4:
    // 0x235be4: 0xc069210  jal         func_1A4840
label_235be8:
    if (ctx->pc == 0x235BE8u) {
        ctx->pc = 0x235BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235BE4u;
        // 0x235be8: 0x8f8482e8  lw          $a0, -0x7D18($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235BECu;
        goto label_235bec;
    }
    ctx->pc = 0x235BE4u;
    SET_GPR_U32(ctx, 31, 0x235BECu);
    ctx->pc = 0x235BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235BE4u;
    // 0x235be8: 0x8f8482e8  lw          $a0, -0x7D18($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x235BECu;
label_235bec:
    // 0x235bec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x235becu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235bf0:
    // 0x235bf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235bf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_235bf4:
    // 0x235bf4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x235bf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_235bf8:
    // 0x235bf8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x235bf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_235bfc:
    // 0x235bfc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x235bfcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_235c00:
    // 0x235c00: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x235c00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_235c04:
    // 0x235c04: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x235c04u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_235c08:
    // 0x235c08: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x235c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_235c0c:
    // 0x235c0c: 0x3e00008  jr          $ra
label_235c10:
    if (ctx->pc == 0x235C10u) {
        ctx->pc = 0x235C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C0Cu;
        // 0x235c10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235C14u;
        goto label_235c14;
    }
    ctx->pc = 0x235C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C0Cu;
        // 0x235c10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235C14u;
label_235c14:
    // 0x235c14: 0x0  nop
    ctx->pc = 0x235c14u;
    // NOP
label_235c18:
    // 0x235c18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x235c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_235c1c:
    // 0x235c1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x235c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_235c20:
    // 0x235c20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x235c20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_235c24:
    // 0x235c24: 0x8f8482e8  lw          $a0, -0x7D18($gp)
    ctx->pc = 0x235c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935272)));
label_235c28:
    // 0x235c28: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x235c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_235c2c:
    // 0x235c2c: 0x30b300ff  andi        $s3, $a1, 0xFF
    ctx->pc = 0x235c2cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_235c30:
    // 0x235c30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x235c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_235c34:
    // 0x235c34: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x235c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_235c38:
    // 0x235c38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x235c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_235c3c:
    // 0x235c3c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x235c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_235c40:
    // 0x235c40: 0xc08dbf8  jal         func_236FE0
label_235c44:
    if (ctx->pc == 0x235C44u) {
        ctx->pc = 0x235C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C40u;
        // 0x235c44: 0x30d200ff  andi        $s2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x235C48u;
        goto label_235c48;
    }
    ctx->pc = 0x235C40u;
    SET_GPR_U32(ctx, 31, 0x235C48u);
    ctx->pc = 0x235C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235C40u;
    // 0x235c44: 0x30d200ff  andi        $s2, $a2, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x235C48u;
label_235c48:
    // 0x235c48: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_235c4c:
    if (ctx->pc == 0x235C4Cu) {
        ctx->pc = 0x235C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C48u;
        // 0x235c4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235C50u;
        goto label_235c50;
    }
    ctx->pc = 0x235C48u;
    {
        const bool branch_taken_0x235c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C48u;
        // 0x235c4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235c48) {
            ctx->pc = 0x235C90u;
            goto label_235c90;
        }
    }
    ctx->pc = 0x235C50u;
label_235c50:
    // 0x235c50: 0xc08d650  jal         func_235940
label_235c54:
    if (ctx->pc == 0x235C54u) {
        ctx->pc = 0x235C58u;
        goto label_235c58;
    }
    ctx->pc = 0x235C50u;
    SET_GPR_U32(ctx, 31, 0x235C58u);
    ctx->pc = 0x235940u;
    goto label_235940;
    ctx->pc = 0x235C58u;
label_235c58:
    // 0x235c58: 0x24050033  addiu       $a1, $zero, 0x33
    ctx->pc = 0x235c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_235c5c:
    // 0x235c5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x235c5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235c60:
    // 0x235c60: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x235c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_235c64:
    // 0x235c64: 0x2442ad00  addiu       $v0, $v0, -0x5300
    ctx->pc = 0x235c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946048));
label_235c68:
    // 0x235c68: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x235c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_235c6c:
    // 0x235c6c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_235c70:
    if (ctx->pc == 0x235C70u) {
        ctx->pc = 0x235C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C6Cu;
        // 0x235c70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235C74u;
        goto label_235c74;
    }
    ctx->pc = 0x235C6Cu;
    {
        const bool branch_taken_0x235c6c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x235C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C6Cu;
        // 0x235c70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235c6c) {
            ctx->pc = 0x235C84u;
            goto label_235c84;
        }
    }
    ctx->pc = 0x235C74u;
label_235c74:
    // 0x235c74: 0xac520404  sw          $s2, 0x404($v0)
    ctx->pc = 0x235c74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1028), GPR_U32(ctx, 18));
label_235c78:
    // 0x235c78: 0xc08d666  jal         func_235998
label_235c7c:
    if (ctx->pc == 0x235C7Cu) {
        ctx->pc = 0x235C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C78u;
        // 0x235c7c: 0xac530400  sw          $s3, 0x400($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1024), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235C80u;
        goto label_235c80;
    }
    ctx->pc = 0x235C78u;
    SET_GPR_U32(ctx, 31, 0x235C80u);
    ctx->pc = 0x235C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235C78u;
    // 0x235c7c: 0xac530400  sw          $s3, 0x400($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 1024), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235998u;
    goto label_235998;
    ctx->pc = 0x235C80u;
label_235c80:
    // 0x235c80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x235c80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235c84:
    // 0x235c84: 0xc069210  jal         func_1A4840
label_235c88:
    if (ctx->pc == 0x235C88u) {
        ctx->pc = 0x235C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C84u;
        // 0x235c88: 0x8f8482e8  lw          $a0, -0x7D18($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235C8Cu;
        goto label_235c8c;
    }
    ctx->pc = 0x235C84u;
    SET_GPR_U32(ctx, 31, 0x235C8Cu);
    ctx->pc = 0x235C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235C84u;
    // 0x235c88: 0x8f8482e8  lw          $a0, -0x7D18($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x235C8Cu;
label_235c8c:
    // 0x235c8c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x235c8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235c90:
    // 0x235c90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235c90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_235c94:
    // 0x235c94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x235c94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_235c98:
    // 0x235c98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x235c98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_235c9c:
    // 0x235c9c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x235c9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_235ca0:
    // 0x235ca0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x235ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_235ca4:
    // 0x235ca4: 0x3e00008  jr          $ra
label_235ca8:
    if (ctx->pc == 0x235CA8u) {
        ctx->pc = 0x235CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235CA4u;
        // 0x235ca8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235CACu;
        goto label_235cac;
    }
    ctx->pc = 0x235CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235CA4u;
        // 0x235ca8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235CACu;
label_235cac:
    // 0x235cac: 0x0  nop
    ctx->pc = 0x235cacu;
    // NOP
label_235cb0:
    // 0x235cb0: 0x8f8282ec  lw          $v0, -0x7D14($gp)
    ctx->pc = 0x235cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935276)));
label_235cb4:
    // 0x235cb4: 0x3e00008  jr          $ra
label_235cb8:
    if (ctx->pc == 0x235CB8u) {
        ctx->pc = 0x235CBCu;
        goto label_235cbc;
    }
    ctx->pc = 0x235CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235CBCu;
label_235cbc:
    // 0x235cbc: 0x0  nop
    ctx->pc = 0x235cbcu;
    // NOP
label_235cc0:
    // 0x235cc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x235cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_235cc4:
    // 0x235cc4: 0xaf8282f8  sw          $v0, -0x7D08($gp)
    ctx->pc = 0x235cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935288), GPR_U32(ctx, 2));
label_235cc8:
    // 0x235cc8: 0xaf8082fc  sw          $zero, -0x7D04($gp)
    ctx->pc = 0x235cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935292), GPR_U32(ctx, 0));
label_235ccc:
    // 0x235ccc: 0x3e00008  jr          $ra
label_235cd0:
    if (ctx->pc == 0x235CD0u) {
        ctx->pc = 0x235CD4u;
        goto label_235cd4;
    }
    ctx->pc = 0x235CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235CD4u;
label_235cd4:
    // 0x235cd4: 0x0  nop
    ctx->pc = 0x235cd4u;
    // NOP
label_235cd8:
    // 0x235cd8: 0x8f828300  lw          $v0, -0x7D00($gp)
    ctx->pc = 0x235cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935296)));
label_235cdc:
    // 0x235cdc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x235cdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_235ce0:
    // 0x235ce0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x235ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_235ce4:
    // 0x235ce4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x235ce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_235ce8:
    // 0x235ce8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x235ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_235cec:
    // 0x235cec: 0x3c110059  lui         $s1, 0x59
    ctx->pc = 0x235cecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
label_235cf0:
    // 0x235cf0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_235cf4:
    if (ctx->pc == 0x235CF4u) {
        ctx->pc = 0x235CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235CF0u;
        // 0x235cf4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235CF8u;
        goto label_235cf8;
    }
    ctx->pc = 0x235CF0u;
    {
        const bool branch_taken_0x235cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235CF0u;
        // 0x235cf4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235cf0) {
            ctx->pc = 0x235D08u;
            goto label_235d08;
        }
    }
    ctx->pc = 0x235CF8u;
label_235cf8:
    // 0x235cf8: 0x10000007  b           . + 4 + (0x7 << 2)
label_235cfc:
    if (ctx->pc == 0x235CFCu) {
        ctx->pc = 0x235CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235CF8u;
        // 0x235cfc: 0x2402fff6  addiu       $v0, $zero, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235D00u;
        goto label_235d00;
    }
    ctx->pc = 0x235CF8u;
    {
        const bool branch_taken_0x235cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235CF8u;
        // 0x235cfc: 0x2402fff6  addiu       $v0, $zero, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235cf8) {
            ctx->pc = 0x235D18u;
            goto label_235d18;
        }
    }
    ctx->pc = 0x235D00u;
label_235d00:
    // 0x235d00: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_235d04:
    if (ctx->pc == 0x235D04u) {
        ctx->pc = 0x235D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D00u;
        // 0x235d04: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235D08u;
        goto label_235d08;
    }
    ctx->pc = 0x235D00u;
    {
        const bool branch_taken_0x235d00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x235D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D00u;
        // 0x235d04: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235d00) {
            ctx->pc = 0x235D18u;
            goto label_235d18;
        }
    }
    ctx->pc = 0x235D08u;
label_235d08:
    // 0x235d08: 0xc069ea6  jal         func_1A7A98
label_235d0c:
    if (ctx->pc == 0x235D0Cu) {
        ctx->pc = 0x235D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D08u;
        // 0x235d0c: 0x2624b2c0  addiu       $a0, $s1, -0x4D40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294947520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235D10u;
        goto label_235d10;
    }
    ctx->pc = 0x235D08u;
    SET_GPR_U32(ctx, 31, 0x235D10u);
    ctx->pc = 0x235D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235D08u;
    // 0x235d0c: 0x2624b2c0  addiu       $a0, $s1, -0x4D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294947520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7A98u;
    { ctx->pc = 0x1a7a98; return; }
    ctx->pc = 0x235D10u;
label_235d10:
    // 0x235d10: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_235d14:
    if (ctx->pc == 0x235D14u) {
        ctx->pc = 0x235D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D10u;
        // 0x235d14: 0x32030001  andi        $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x235D18u;
        goto label_235d18;
    }
    ctx->pc = 0x235D10u;
    {
        const bool branch_taken_0x235d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D10u;
        // 0x235d14: 0x32030001  andi        $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x235d10) {
            ctx->pc = 0x235D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_235d00;
        }
    }
    ctx->pc = 0x235D18u;
label_235d18:
    // 0x235d18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235d18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_235d1c:
    // 0x235d1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x235d1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_235d20:
    // 0x235d20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x235d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_235d24:
    // 0x235d24: 0x3e00008  jr          $ra
label_235d28:
    if (ctx->pc == 0x235D28u) {
        ctx->pc = 0x235D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D24u;
        // 0x235d28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235D2Cu;
        goto label_235d2c;
    }
    ctx->pc = 0x235D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D24u;
        // 0x235d28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235D2Cu;
label_235d2c:
    // 0x235d2c: 0x0  nop
    ctx->pc = 0x235d2cu;
    // NOP
    ctx->pc = 0x235d30u;
    return;
}
