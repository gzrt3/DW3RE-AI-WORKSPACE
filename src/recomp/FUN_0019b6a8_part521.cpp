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

// Function: FUN_0019b6a8
// Address: 0x19b6a8 - 0x29b6b0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b6a8_part521(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x299528u: goto label_299528;
        case 0x29952cu: goto label_29952c;
        case 0x299530u: goto label_299530;
        case 0x299534u: goto label_299534;
        case 0x299538u: goto label_299538;
        case 0x29953cu: goto label_29953c;
        case 0x299540u: goto label_299540;
        case 0x299544u: goto label_299544;
        case 0x299548u: goto label_299548;
        case 0x29954cu: goto label_29954c;
        case 0x299550u: goto label_299550;
        case 0x299554u: goto label_299554;
        case 0x299558u: goto label_299558;
        case 0x29955cu: goto label_29955c;
        case 0x299560u: goto label_299560;
        case 0x299564u: goto label_299564;
        case 0x299568u: goto label_299568;
        case 0x29956cu: goto label_29956c;
        case 0x299570u: goto label_299570;
        case 0x299574u: goto label_299574;
        case 0x299578u: goto label_299578;
        case 0x29957cu: goto label_29957c;
        case 0x299580u: goto label_299580;
        case 0x299584u: goto label_299584;
        case 0x299588u: goto label_299588;
        case 0x29958cu: goto label_29958c;
        case 0x299590u: goto label_299590;
        case 0x299594u: goto label_299594;
        case 0x299598u: goto label_299598;
        case 0x29959cu: goto label_29959c;
        case 0x2995a0u: goto label_2995a0;
        case 0x2995a4u: goto label_2995a4;
        case 0x2995a8u: goto label_2995a8;
        case 0x2995acu: goto label_2995ac;
        case 0x2995b0u: goto label_2995b0;
        case 0x2995b4u: goto label_2995b4;
        case 0x2995b8u: goto label_2995b8;
        case 0x2995bcu: goto label_2995bc;
        case 0x2995c0u: goto label_2995c0;
        case 0x2995c4u: goto label_2995c4;
        case 0x2995c8u: goto label_2995c8;
        case 0x2995ccu: goto label_2995cc;
        case 0x2995d0u: goto label_2995d0;
        case 0x2995d4u: goto label_2995d4;
        case 0x2995d8u: goto label_2995d8;
        case 0x2995dcu: goto label_2995dc;
        case 0x2995e0u: goto label_2995e0;
        case 0x2995e4u: goto label_2995e4;
        case 0x2995e8u: goto label_2995e8;
        case 0x2995ecu: goto label_2995ec;
        case 0x2995f0u: goto label_2995f0;
        case 0x2995f4u: goto label_2995f4;
        case 0x2995f8u: goto label_2995f8;
        case 0x2995fcu: goto label_2995fc;
        case 0x299600u: goto label_299600;
        case 0x299604u: goto label_299604;
        case 0x299608u: goto label_299608;
        case 0x29960cu: goto label_29960c;
        case 0x299610u: goto label_299610;
        case 0x299614u: goto label_299614;
        case 0x299618u: goto label_299618;
        case 0x29961cu: goto label_29961c;
        case 0x299620u: goto label_299620;
        case 0x299624u: goto label_299624;
        case 0x299628u: goto label_299628;
        case 0x29962cu: goto label_29962c;
        case 0x299630u: goto label_299630;
        case 0x299634u: goto label_299634;
        case 0x299638u: goto label_299638;
        case 0x29963cu: goto label_29963c;
        case 0x299640u: goto label_299640;
        case 0x299644u: goto label_299644;
        case 0x299648u: goto label_299648;
        case 0x29964cu: goto label_29964c;
        case 0x299650u: goto label_299650;
        case 0x299654u: goto label_299654;
        case 0x299658u: goto label_299658;
        case 0x29965cu: goto label_29965c;
        case 0x299660u: goto label_299660;
        case 0x299664u: goto label_299664;
        case 0x299668u: goto label_299668;
        case 0x29966cu: goto label_29966c;
        case 0x299670u: goto label_299670;
        case 0x299674u: goto label_299674;
        case 0x299678u: goto label_299678;
        case 0x29967cu: goto label_29967c;
        case 0x299680u: goto label_299680;
        case 0x299684u: goto label_299684;
        case 0x299688u: goto label_299688;
        case 0x29968cu: goto label_29968c;
        case 0x299690u: goto label_299690;
        case 0x299694u: goto label_299694;
        case 0x299698u: goto label_299698;
        case 0x29969cu: goto label_29969c;
        case 0x2996a0u: goto label_2996a0;
        case 0x2996a4u: goto label_2996a4;
        case 0x2996a8u: goto label_2996a8;
        case 0x2996acu: goto label_2996ac;
        case 0x2996b0u: goto label_2996b0;
        case 0x2996b4u: goto label_2996b4;
        case 0x2996b8u: goto label_2996b8;
        case 0x2996bcu: goto label_2996bc;
        case 0x2996c0u: goto label_2996c0;
        case 0x2996c4u: goto label_2996c4;
        case 0x2996c8u: goto label_2996c8;
        case 0x2996ccu: goto label_2996cc;
        case 0x2996d0u: goto label_2996d0;
        case 0x2996d4u: goto label_2996d4;
        case 0x2996d8u: goto label_2996d8;
        case 0x2996dcu: goto label_2996dc;
        case 0x2996e0u: goto label_2996e0;
        case 0x2996e4u: goto label_2996e4;
        case 0x2996e8u: goto label_2996e8;
        case 0x2996ecu: goto label_2996ec;
        case 0x2996f0u: goto label_2996f0;
        case 0x2996f4u: goto label_2996f4;
        case 0x2996f8u: goto label_2996f8;
        case 0x2996fcu: goto label_2996fc;
        case 0x299700u: goto label_299700;
        case 0x299704u: goto label_299704;
        case 0x299708u: goto label_299708;
        case 0x29970cu: goto label_29970c;
        case 0x299710u: goto label_299710;
        case 0x299714u: goto label_299714;
        case 0x299718u: goto label_299718;
        case 0x29971cu: goto label_29971c;
        case 0x299720u: goto label_299720;
        case 0x299724u: goto label_299724;
        case 0x299728u: goto label_299728;
        case 0x29972cu: goto label_29972c;
        case 0x299730u: goto label_299730;
        case 0x299734u: goto label_299734;
        case 0x299738u: goto label_299738;
        case 0x29973cu: goto label_29973c;
        case 0x299740u: goto label_299740;
        case 0x299744u: goto label_299744;
        case 0x299748u: goto label_299748;
        case 0x29974cu: goto label_29974c;
        case 0x299750u: goto label_299750;
        case 0x299754u: goto label_299754;
        case 0x299758u: goto label_299758;
        case 0x29975cu: goto label_29975c;
        case 0x299760u: goto label_299760;
        case 0x299764u: goto label_299764;
        case 0x299768u: goto label_299768;
        case 0x29976cu: goto label_29976c;
        case 0x299770u: goto label_299770;
        case 0x299774u: goto label_299774;
        case 0x299778u: goto label_299778;
        case 0x29977cu: goto label_29977c;
        case 0x299780u: goto label_299780;
        case 0x299784u: goto label_299784;
        case 0x299788u: goto label_299788;
        case 0x29978cu: goto label_29978c;
        case 0x299790u: goto label_299790;
        case 0x299794u: goto label_299794;
        case 0x299798u: goto label_299798;
        case 0x29979cu: goto label_29979c;
        case 0x2997a0u: goto label_2997a0;
        case 0x2997a4u: goto label_2997a4;
        case 0x2997a8u: goto label_2997a8;
        case 0x2997acu: goto label_2997ac;
        case 0x2997b0u: goto label_2997b0;
        case 0x2997b4u: goto label_2997b4;
        case 0x2997b8u: goto label_2997b8;
        case 0x2997bcu: goto label_2997bc;
        case 0x2997c0u: goto label_2997c0;
        case 0x2997c4u: goto label_2997c4;
        case 0x2997c8u: goto label_2997c8;
        case 0x2997ccu: goto label_2997cc;
        case 0x2997d0u: goto label_2997d0;
        case 0x2997d4u: goto label_2997d4;
        case 0x2997d8u: goto label_2997d8;
        case 0x2997dcu: goto label_2997dc;
        case 0x2997e0u: goto label_2997e0;
        case 0x2997e4u: goto label_2997e4;
        case 0x2997e8u: goto label_2997e8;
        case 0x2997ecu: goto label_2997ec;
        case 0x2997f0u: goto label_2997f0;
        case 0x2997f4u: goto label_2997f4;
        case 0x2997f8u: goto label_2997f8;
        case 0x2997fcu: goto label_2997fc;
        case 0x299800u: goto label_299800;
        case 0x299804u: goto label_299804;
        case 0x299808u: goto label_299808;
        case 0x29980cu: goto label_29980c;
        case 0x299810u: goto label_299810;
        case 0x299814u: goto label_299814;
        case 0x299818u: goto label_299818;
        case 0x29981cu: goto label_29981c;
        case 0x299820u: goto label_299820;
        case 0x299824u: goto label_299824;
        case 0x299828u: goto label_299828;
        case 0x29982cu: goto label_29982c;
        case 0x299830u: goto label_299830;
        case 0x299834u: goto label_299834;
        case 0x299838u: goto label_299838;
        case 0x29983cu: goto label_29983c;
        case 0x299840u: goto label_299840;
        case 0x299844u: goto label_299844;
        case 0x299848u: goto label_299848;
        case 0x29984cu: goto label_29984c;
        case 0x299850u: goto label_299850;
        case 0x299854u: goto label_299854;
        case 0x299858u: goto label_299858;
        case 0x29985cu: goto label_29985c;
        case 0x299860u: goto label_299860;
        case 0x299864u: goto label_299864;
        case 0x299868u: goto label_299868;
        case 0x29986cu: goto label_29986c;
        case 0x299870u: goto label_299870;
        case 0x299874u: goto label_299874;
        case 0x299878u: goto label_299878;
        case 0x29987cu: goto label_29987c;
        case 0x299880u: goto label_299880;
        case 0x299884u: goto label_299884;
        case 0x299888u: goto label_299888;
        case 0x29988cu: goto label_29988c;
        case 0x299890u: goto label_299890;
        case 0x299894u: goto label_299894;
        case 0x299898u: goto label_299898;
        case 0x29989cu: goto label_29989c;
        case 0x2998a0u: goto label_2998a0;
        case 0x2998a4u: goto label_2998a4;
        case 0x2998a8u: goto label_2998a8;
        case 0x2998acu: goto label_2998ac;
        case 0x2998b0u: goto label_2998b0;
        case 0x2998b4u: goto label_2998b4;
        case 0x2998b8u: goto label_2998b8;
        case 0x2998bcu: goto label_2998bc;
        case 0x2998c0u: goto label_2998c0;
        case 0x2998c4u: goto label_2998c4;
        case 0x2998c8u: goto label_2998c8;
        case 0x2998ccu: goto label_2998cc;
        case 0x2998d0u: goto label_2998d0;
        case 0x2998d4u: goto label_2998d4;
        case 0x2998d8u: goto label_2998d8;
        case 0x2998dcu: goto label_2998dc;
        case 0x2998e0u: goto label_2998e0;
        case 0x2998e4u: goto label_2998e4;
        case 0x2998e8u: goto label_2998e8;
        case 0x2998ecu: goto label_2998ec;
        case 0x2998f0u: goto label_2998f0;
        case 0x2998f4u: goto label_2998f4;
        case 0x2998f8u: goto label_2998f8;
        case 0x2998fcu: goto label_2998fc;
        case 0x299900u: goto label_299900;
        case 0x299904u: goto label_299904;
        case 0x299908u: goto label_299908;
        case 0x29990cu: goto label_29990c;
        case 0x299910u: goto label_299910;
        case 0x299914u: goto label_299914;
        case 0x299918u: goto label_299918;
        case 0x29991cu: goto label_29991c;
        case 0x299920u: goto label_299920;
        case 0x299924u: goto label_299924;
        case 0x299928u: goto label_299928;
        case 0x29992cu: goto label_29992c;
        case 0x299930u: goto label_299930;
        case 0x299934u: goto label_299934;
        case 0x299938u: goto label_299938;
        case 0x29993cu: goto label_29993c;
        case 0x299940u: goto label_299940;
        case 0x299944u: goto label_299944;
        case 0x299948u: goto label_299948;
        case 0x29994cu: goto label_29994c;
        case 0x299950u: goto label_299950;
        case 0x299954u: goto label_299954;
        case 0x299958u: goto label_299958;
        case 0x29995cu: goto label_29995c;
        case 0x299960u: goto label_299960;
        case 0x299964u: goto label_299964;
        case 0x299968u: goto label_299968;
        case 0x29996cu: goto label_29996c;
        case 0x299970u: goto label_299970;
        case 0x299974u: goto label_299974;
        case 0x299978u: goto label_299978;
        case 0x29997cu: goto label_29997c;
        case 0x299980u: goto label_299980;
        case 0x299984u: goto label_299984;
        case 0x299988u: goto label_299988;
        case 0x29998cu: goto label_29998c;
        case 0x299990u: goto label_299990;
        case 0x299994u: goto label_299994;
        case 0x299998u: goto label_299998;
        case 0x29999cu: goto label_29999c;
        case 0x2999a0u: goto label_2999a0;
        case 0x2999a4u: goto label_2999a4;
        case 0x2999a8u: goto label_2999a8;
        case 0x2999acu: goto label_2999ac;
        case 0x2999b0u: goto label_2999b0;
        case 0x2999b4u: goto label_2999b4;
        case 0x2999b8u: goto label_2999b8;
        case 0x2999bcu: goto label_2999bc;
        case 0x2999c0u: goto label_2999c0;
        case 0x2999c4u: goto label_2999c4;
        case 0x2999c8u: goto label_2999c8;
        case 0x2999ccu: goto label_2999cc;
        case 0x2999d0u: goto label_2999d0;
        case 0x2999d4u: goto label_2999d4;
        case 0x2999d8u: goto label_2999d8;
        case 0x2999dcu: goto label_2999dc;
        case 0x2999e0u: goto label_2999e0;
        case 0x2999e4u: goto label_2999e4;
        case 0x2999e8u: goto label_2999e8;
        case 0x2999ecu: goto label_2999ec;
        case 0x2999f0u: goto label_2999f0;
        case 0x2999f4u: goto label_2999f4;
        case 0x2999f8u: goto label_2999f8;
        case 0x2999fcu: goto label_2999fc;
        case 0x299a00u: goto label_299a00;
        case 0x299a04u: goto label_299a04;
        case 0x299a08u: goto label_299a08;
        case 0x299a0cu: goto label_299a0c;
        case 0x299a10u: goto label_299a10;
        case 0x299a14u: goto label_299a14;
        case 0x299a18u: goto label_299a18;
        case 0x299a1cu: goto label_299a1c;
        case 0x299a20u: goto label_299a20;
        case 0x299a24u: goto label_299a24;
        case 0x299a28u: goto label_299a28;
        case 0x299a2cu: goto label_299a2c;
        case 0x299a30u: goto label_299a30;
        case 0x299a34u: goto label_299a34;
        case 0x299a38u: goto label_299a38;
        case 0x299a3cu: goto label_299a3c;
        case 0x299a40u: goto label_299a40;
        case 0x299a44u: goto label_299a44;
        case 0x299a48u: goto label_299a48;
        case 0x299a4cu: goto label_299a4c;
        case 0x299a50u: goto label_299a50;
        case 0x299a54u: goto label_299a54;
        case 0x299a58u: goto label_299a58;
        case 0x299a5cu: goto label_299a5c;
        case 0x299a60u: goto label_299a60;
        case 0x299a64u: goto label_299a64;
        case 0x299a68u: goto label_299a68;
        case 0x299a6cu: goto label_299a6c;
        case 0x299a70u: goto label_299a70;
        case 0x299a74u: goto label_299a74;
        case 0x299a78u: goto label_299a78;
        case 0x299a7cu: goto label_299a7c;
        case 0x299a80u: goto label_299a80;
        case 0x299a84u: goto label_299a84;
        case 0x299a88u: goto label_299a88;
        case 0x299a8cu: goto label_299a8c;
        case 0x299a90u: goto label_299a90;
        case 0x299a94u: goto label_299a94;
        case 0x299a98u: goto label_299a98;
        case 0x299a9cu: goto label_299a9c;
        case 0x299aa0u: goto label_299aa0;
        case 0x299aa4u: goto label_299aa4;
        case 0x299aa8u: goto label_299aa8;
        case 0x299aacu: goto label_299aac;
        case 0x299ab0u: goto label_299ab0;
        case 0x299ab4u: goto label_299ab4;
        case 0x299ab8u: goto label_299ab8;
        case 0x299abcu: goto label_299abc;
        case 0x299ac0u: goto label_299ac0;
        case 0x299ac4u: goto label_299ac4;
        case 0x299ac8u: goto label_299ac8;
        case 0x299accu: goto label_299acc;
        case 0x299ad0u: goto label_299ad0;
        case 0x299ad4u: goto label_299ad4;
        case 0x299ad8u: goto label_299ad8;
        case 0x299adcu: goto label_299adc;
        case 0x299ae0u: goto label_299ae0;
        case 0x299ae4u: goto label_299ae4;
        case 0x299ae8u: goto label_299ae8;
        case 0x299aecu: goto label_299aec;
        case 0x299af0u: goto label_299af0;
        case 0x299af4u: goto label_299af4;
        case 0x299af8u: goto label_299af8;
        case 0x299afcu: goto label_299afc;
        case 0x299b00u: goto label_299b00;
        case 0x299b04u: goto label_299b04;
        case 0x299b08u: goto label_299b08;
        case 0x299b0cu: goto label_299b0c;
        case 0x299b10u: goto label_299b10;
        case 0x299b14u: goto label_299b14;
        case 0x299b18u: goto label_299b18;
        case 0x299b1cu: goto label_299b1c;
        case 0x299b20u: goto label_299b20;
        case 0x299b24u: goto label_299b24;
        case 0x299b28u: goto label_299b28;
        case 0x299b2cu: goto label_299b2c;
        case 0x299b30u: goto label_299b30;
        case 0x299b34u: goto label_299b34;
        case 0x299b38u: goto label_299b38;
        case 0x299b3cu: goto label_299b3c;
        case 0x299b40u: goto label_299b40;
        case 0x299b44u: goto label_299b44;
        case 0x299b48u: goto label_299b48;
        case 0x299b4cu: goto label_299b4c;
        case 0x299b50u: goto label_299b50;
        case 0x299b54u: goto label_299b54;
        case 0x299b58u: goto label_299b58;
        case 0x299b5cu: goto label_299b5c;
        case 0x299b60u: goto label_299b60;
        case 0x299b64u: goto label_299b64;
        case 0x299b68u: goto label_299b68;
        case 0x299b6cu: goto label_299b6c;
        case 0x299b70u: goto label_299b70;
        case 0x299b74u: goto label_299b74;
        case 0x299b78u: goto label_299b78;
        case 0x299b7cu: goto label_299b7c;
        case 0x299b80u: goto label_299b80;
        case 0x299b84u: goto label_299b84;
        case 0x299b88u: goto label_299b88;
        case 0x299b8cu: goto label_299b8c;
        case 0x299b90u: goto label_299b90;
        case 0x299b94u: goto label_299b94;
        case 0x299b98u: goto label_299b98;
        case 0x299b9cu: goto label_299b9c;
        case 0x299ba0u: goto label_299ba0;
        case 0x299ba4u: goto label_299ba4;
        case 0x299ba8u: goto label_299ba8;
        case 0x299bacu: goto label_299bac;
        case 0x299bb0u: goto label_299bb0;
        case 0x299bb4u: goto label_299bb4;
        case 0x299bb8u: goto label_299bb8;
        case 0x299bbcu: goto label_299bbc;
        case 0x299bc0u: goto label_299bc0;
        case 0x299bc4u: goto label_299bc4;
        case 0x299bc8u: goto label_299bc8;
        case 0x299bccu: goto label_299bcc;
        case 0x299bd0u: goto label_299bd0;
        case 0x299bd4u: goto label_299bd4;
        case 0x299bd8u: goto label_299bd8;
        case 0x299bdcu: goto label_299bdc;
        case 0x299be0u: goto label_299be0;
        case 0x299be4u: goto label_299be4;
        case 0x299be8u: goto label_299be8;
        case 0x299becu: goto label_299bec;
        case 0x299bf0u: goto label_299bf0;
        case 0x299bf4u: goto label_299bf4;
        case 0x299bf8u: goto label_299bf8;
        case 0x299bfcu: goto label_299bfc;
        case 0x299c00u: goto label_299c00;
        case 0x299c04u: goto label_299c04;
        case 0x299c08u: goto label_299c08;
        case 0x299c0cu: goto label_299c0c;
        case 0x299c10u: goto label_299c10;
        case 0x299c14u: goto label_299c14;
        case 0x299c18u: goto label_299c18;
        case 0x299c1cu: goto label_299c1c;
        case 0x299c20u: goto label_299c20;
        case 0x299c24u: goto label_299c24;
        case 0x299c28u: goto label_299c28;
        case 0x299c2cu: goto label_299c2c;
        case 0x299c30u: goto label_299c30;
        case 0x299c34u: goto label_299c34;
        case 0x299c38u: goto label_299c38;
        case 0x299c3cu: goto label_299c3c;
        case 0x299c40u: goto label_299c40;
        case 0x299c44u: goto label_299c44;
        case 0x299c48u: goto label_299c48;
        case 0x299c4cu: goto label_299c4c;
        case 0x299c50u: goto label_299c50;
        case 0x299c54u: goto label_299c54;
        case 0x299c58u: goto label_299c58;
        case 0x299c5cu: goto label_299c5c;
        case 0x299c60u: goto label_299c60;
        case 0x299c64u: goto label_299c64;
        case 0x299c68u: goto label_299c68;
        case 0x299c6cu: goto label_299c6c;
        case 0x299c70u: goto label_299c70;
        case 0x299c74u: goto label_299c74;
        case 0x299c78u: goto label_299c78;
        case 0x299c7cu: goto label_299c7c;
        case 0x299c80u: goto label_299c80;
        case 0x299c84u: goto label_299c84;
        case 0x299c88u: goto label_299c88;
        case 0x299c8cu: goto label_299c8c;
        case 0x299c90u: goto label_299c90;
        case 0x299c94u: goto label_299c94;
        case 0x299c98u: goto label_299c98;
        case 0x299c9cu: goto label_299c9c;
        case 0x299ca0u: goto label_299ca0;
        case 0x299ca4u: goto label_299ca4;
        case 0x299ca8u: goto label_299ca8;
        case 0x299cacu: goto label_299cac;
        case 0x299cb0u: goto label_299cb0;
        case 0x299cb4u: goto label_299cb4;
        case 0x299cb8u: goto label_299cb8;
        case 0x299cbcu: goto label_299cbc;
        case 0x299cc0u: goto label_299cc0;
        case 0x299cc4u: goto label_299cc4;
        case 0x299cc8u: goto label_299cc8;
        case 0x299cccu: goto label_299ccc;
        case 0x299cd0u: goto label_299cd0;
        case 0x299cd4u: goto label_299cd4;
        case 0x299cd8u: goto label_299cd8;
        case 0x299cdcu: goto label_299cdc;
        case 0x299ce0u: goto label_299ce0;
        case 0x299ce4u: goto label_299ce4;
        case 0x299ce8u: goto label_299ce8;
        case 0x299cecu: goto label_299cec;
        case 0x299cf0u: goto label_299cf0;
        case 0x299cf4u: goto label_299cf4;
        default: return;
    }

label_299528:
    // 0x299528: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299528u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_29952c:
    // 0x29952c: 0x0  nop
    ctx->pc = 0x29952cu;
    // NOP
label_299530:
    // 0x299530: 0x27705  .word       0x00027705                   # INVALID     $zero, $v0, 0x7705 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299530u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x299530 raw=0x00027705"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_299534:
    // 0x299534: 0xd  break       0
    ctx->pc = 0x299534u;
    runtime->handleBreak(rdram, ctx);
label_299538:
    // 0x299538: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299538u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_29953c:
    // 0x29953c: 0x0  nop
    ctx->pc = 0x29953cu;
    // NOP
label_299540:
    // 0x299540: 0x27712  .word       0x00027712                   # mflo        $t6 # 00020700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299540u;
    SET_GPR_U64(ctx, 14, ctx->lo);
label_299544:
    // 0x299544: 0xd  break       0
    ctx->pc = 0x299544u;
    runtime->handleBreak(rdram, ctx);
label_299548:
    // 0x299548: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299548u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_29954c:
    // 0x29954c: 0x0  nop
    ctx->pc = 0x29954cu;
    // NOP
label_299550:
    // 0x299550: 0x2771f  .word       0x0002771F                   # ddivu       $t6, $zero, $v0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299550u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x299550 raw=0x0002771F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_299554:
    // 0x299554: 0xd  break       0
    ctx->pc = 0x299554u;
    runtime->handleBreak(rdram, ctx);
label_299558:
    // 0x299558: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299558u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_29955c:
    // 0x29955c: 0x0  nop
    ctx->pc = 0x29955cu;
    // NOP
label_299560:
    // 0x299560: 0x2772c  .word       0x0002772C                   # dadd        $t6, $zero, $v0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299560u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 2); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_299564:
    // 0x299564: 0xd  break       0
    ctx->pc = 0x299564u;
    runtime->handleBreak(rdram, ctx);
label_299568:
    // 0x299568: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299568u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_29956c:
    // 0x29956c: 0x0  nop
    ctx->pc = 0x29956cu;
    // NOP
label_299570:
    // 0x299570: 0x27739  .word       0x00027739                   # INVALID     $zero, $v0, 0x7739 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299570u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x299570 raw=0x00027739"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_299574:
    // 0x299574: 0xd  break       0
    ctx->pc = 0x299574u;
    runtime->handleBreak(rdram, ctx);
label_299578:
    // 0x299578: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299578u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_29957c:
    // 0x29957c: 0x0  nop
    ctx->pc = 0x29957cu;
    // NOP
label_299580:
    // 0x299580: 0x27746  .word       0x00027746                   # srlv        $t6, $v0, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299580u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_299584:
    // 0x299584: 0xd  break       0
    ctx->pc = 0x299584u;
    runtime->handleBreak(rdram, ctx);
label_299588:
    // 0x299588: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299588u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_29958c:
    // 0x29958c: 0x0  nop
    ctx->pc = 0x29958cu;
    // NOP
label_299590:
    // 0x299590: 0x27753  .word       0x00027753                   # mtlo        $zero # 00027740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299590u;
    ctx->lo = GPR_U64(ctx, 0);
label_299594:
    // 0x299594: 0xd  break       0
    ctx->pc = 0x299594u;
    runtime->handleBreak(rdram, ctx);
label_299598:
    // 0x299598: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299598u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_29959c:
    // 0x29959c: 0x0  nop
    ctx->pc = 0x29959cu;
    // NOP
label_2995a0:
    // 0x2995a0: 0x27760  .word       0x00027760                   # add         $t6, $zero, $v0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2995a0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_2995a4:
    // 0x2995a4: 0xd  break       0
    ctx->pc = 0x2995a4u;
    runtime->handleBreak(rdram, ctx);
label_2995a8:
    // 0x2995a8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x2995a8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_2995ac:
    // 0x2995ac: 0x0  nop
    ctx->pc = 0x2995acu;
    // NOP
label_2995b0:
    // 0x2995b0: 0x2776d  .word       0x0002776D                   # daddu       $t6, $zero, $v0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2995b0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 2));
label_2995b4:
    // 0x2995b4: 0xd  break       0
    ctx->pc = 0x2995b4u;
    runtime->handleBreak(rdram, ctx);
label_2995b8:
    // 0x2995b8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x2995b8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_2995bc:
    // 0x2995bc: 0x0  nop
    ctx->pc = 0x2995bcu;
    // NOP
label_2995c0:
    // 0x2995c0: 0x2777a  dsrl        $t6, $v0, 29
    ctx->pc = 0x2995c0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) >> 29);
label_2995c4:
    // 0x2995c4: 0xd  break       0
    ctx->pc = 0x2995c4u;
    runtime->handleBreak(rdram, ctx);
label_2995c8:
    // 0x2995c8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x2995c8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_2995cc:
    // 0x2995cc: 0x0  nop
    ctx->pc = 0x2995ccu;
    // NOP
label_2995d0:
    // 0x2995d0: 0x27787  .word       0x00027787                   # srav        $t6, $v0, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2995d0u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_2995d4:
    // 0x2995d4: 0xd  break       0
    ctx->pc = 0x2995d4u;
    runtime->handleBreak(rdram, ctx);
label_2995d8:
    // 0x2995d8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x2995d8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_2995dc:
    // 0x2995dc: 0x0  nop
    ctx->pc = 0x2995dcu;
    // NOP
label_2995e0:
    // 0x2995e0: 0x27794  .word       0x00027794                   # dsllv       $t6, $v0, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2995e0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) << (GPR_U32(ctx, 0) & 0x3F));
label_2995e4:
    // 0x2995e4: 0xd  break       0
    ctx->pc = 0x2995e4u;
    runtime->handleBreak(rdram, ctx);
label_2995e8:
    // 0x2995e8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x2995e8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_2995ec:
    // 0x2995ec: 0x0  nop
    ctx->pc = 0x2995ecu;
    // NOP
label_2995f0:
    // 0x2995f0: 0x277a1  .word       0x000277A1                   # addu        $t6, $zero, $v0 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2995f0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_2995f4:
    // 0x2995f4: 0xd  break       0
    ctx->pc = 0x2995f4u;
    runtime->handleBreak(rdram, ctx);
label_2995f8:
    // 0x2995f8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x2995f8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_2995fc:
    // 0x2995fc: 0x0  nop
    ctx->pc = 0x2995fcu;
    // NOP
label_299600:
    // 0x299600: 0x277ae  .word       0x000277AE                   # dsub        $t6, $zero, $v0 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299600u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 2); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_299604:
    // 0x299604: 0xd  break       0
    ctx->pc = 0x299604u;
    runtime->handleBreak(rdram, ctx);
label_299608:
    // 0x299608: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299608u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_29960c:
    // 0x29960c: 0x0  nop
    ctx->pc = 0x29960cu;
    // NOP
label_299610:
    // 0x299610: 0x277bb  dsra        $t6, $v0, 30
    ctx->pc = 0x299610u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 2) >> 30);
label_299614:
    // 0x299614: 0xd  break       0
    ctx->pc = 0x299614u;
    runtime->handleBreak(rdram, ctx);
label_299618:
    // 0x299618: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299618u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_29961c:
    // 0x29961c: 0x0  nop
    ctx->pc = 0x29961cu;
    // NOP
label_299620:
    // 0x299620: 0x277c8  .word       0x000277C8                   # jr          $zero # 000277C0 <InstrIdType: CPU_SPECIAL>
label_299624:
    if (ctx->pc == 0x299624u) {
        ctx->pc = 0x299624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299620u;
        // 0x299624: 0xd  break       0 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x299628u;
        goto label_299628;
    }
    ctx->pc = 0x299620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x299624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299620u;
        // 0x299624: 0xd  break       0 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299620u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x299628u;
label_299628:
    // 0x299628: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299628u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_29962c:
    // 0x29962c: 0x0  nop
    ctx->pc = 0x29962cu;
    // NOP
label_299630:
    // 0x299630: 0x277d5  .word       0x000277D5                   # INVALID     $zero, $v0, 0x77D5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299630u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x299630 raw=0x000277D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_299634:
    // 0x299634: 0xd  break       0
    ctx->pc = 0x299634u;
    runtime->handleBreak(rdram, ctx);
label_299638:
    // 0x299638: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299638u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_29963c:
    // 0x29963c: 0x0  nop
    ctx->pc = 0x29963cu;
    // NOP
label_299640:
    // 0x299640: 0x277e2  .word       0x000277E2                   # neg         $t6, $v0 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299640u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 2), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_299644:
    // 0x299644: 0xd  break       0
    ctx->pc = 0x299644u;
    runtime->handleBreak(rdram, ctx);
label_299648:
    // 0x299648: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299648u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_29964c:
    // 0x29964c: 0x0  nop
    ctx->pc = 0x29964cu;
    // NOP
label_299650:
    // 0x299650: 0x277ef  .word       0x000277EF                   # dsubu       $t6, $zero, $v0 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299650u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
label_299654:
    // 0x299654: 0xd  break       0
    ctx->pc = 0x299654u;
    runtime->handleBreak(rdram, ctx);
label_299658:
    // 0x299658: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299658u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_29965c:
    // 0x29965c: 0x0  nop
    ctx->pc = 0x29965cu;
    // NOP
label_299660:
    // 0x299660: 0x277fc  dsll32      $t6, $v0, 31
    ctx->pc = 0x299660u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) << (32 + 31));
label_299664:
    // 0x299664: 0xd  break       0
    ctx->pc = 0x299664u;
    runtime->handleBreak(rdram, ctx);
label_299668:
    // 0x299668: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299668u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_29966c:
    // 0x29966c: 0x0  nop
    ctx->pc = 0x29966cu;
    // NOP
label_299670:
    // 0x299670: 0x27809  .word       0x00027809                   # jalr        $t7, $zero # 00020000 <InstrIdType: CPU_SPECIAL>
label_299674:
    if (ctx->pc == 0x299674u) {
        ctx->pc = 0x299674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299670u;
        // 0x299674: 0xd  break       0 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x299678u;
        goto label_299678;
    }
    ctx->pc = 0x299670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 15, 0x299678u);
        ctx->pc = 0x299674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299670u;
        // 0x299674: 0xd  break       0 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299670u, 0x299678u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x299678u;
label_299678:
    // 0x299678: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299678u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_29967c:
    // 0x29967c: 0x0  nop
    ctx->pc = 0x29967cu;
    // NOP
label_299680:
    // 0x299680: 0x27816  dsrlv       $t7, $v0, $zero
    ctx->pc = 0x299680u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 0) & 0x3F));
label_299684:
    // 0x299684: 0xd  break       0
    ctx->pc = 0x299684u;
    runtime->handleBreak(rdram, ctx);
label_299688:
    // 0x299688: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299688u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_29968c:
    // 0x29968c: 0x0  nop
    ctx->pc = 0x29968cu;
    // NOP
label_299690:
    // 0x299690: 0x27823  negu        $t7, $v0
    ctx->pc = 0x299690u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_299694:
    // 0x299694: 0xd  break       0
    ctx->pc = 0x299694u;
    runtime->handleBreak(rdram, ctx);
label_299698:
    // 0x299698: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299698u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_29969c:
    // 0x29969c: 0x0  nop
    ctx->pc = 0x29969cu;
    // NOP
label_2996a0:
    // 0x2996a0: 0x27830  tge         $zero, $v0, 480
    ctx->pc = 0x2996a0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_2996a4:
    // 0x2996a4: 0xd  break       0
    ctx->pc = 0x2996a4u;
    runtime->handleBreak(rdram, ctx);
label_2996a8:
    // 0x2996a8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x2996a8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_2996ac:
    // 0x2996ac: 0x0  nop
    ctx->pc = 0x2996acu;
    // NOP
label_2996b0:
    // 0x2996b0: 0x2783d  .word       0x0002783D                   # INVALID     $zero, $v0, 0x783D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2996b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2996B0 raw=0x0002783D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2996b4:
    // 0x2996b4: 0xd  break       0
    ctx->pc = 0x2996b4u;
    runtime->handleBreak(rdram, ctx);
label_2996b8:
    // 0x2996b8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x2996b8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_2996bc:
    // 0x2996bc: 0x0  nop
    ctx->pc = 0x2996bcu;
    // NOP
label_2996c0:
    // 0x2996c0: 0x2784a  .word       0x0002784A                   # movz        $t7, $zero, $v0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2996c0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 0));
label_2996c4:
    // 0x2996c4: 0xd  break       0
    ctx->pc = 0x2996c4u;
    runtime->handleBreak(rdram, ctx);
label_2996c8:
    // 0x2996c8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x2996c8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_2996cc:
    // 0x2996cc: 0x0  nop
    ctx->pc = 0x2996ccu;
    // NOP
label_2996d0:
    // 0x2996d0: 0x27857  .word       0x00027857                   # dsrav       $t7, $v0, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2996d0u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 2) >> (GPR_U32(ctx, 0) & 0x3F));
label_2996d4:
    // 0x2996d4: 0xd  break       0
    ctx->pc = 0x2996d4u;
    runtime->handleBreak(rdram, ctx);
label_2996d8:
    // 0x2996d8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x2996d8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_2996dc:
    // 0x2996dc: 0x0  nop
    ctx->pc = 0x2996dcu;
    // NOP
label_2996e0:
    // 0x2996e0: 0x27864  .word       0x00027864                   # and         $t7, $zero, $v0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2996e0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) & GPR_U64(ctx, 2));
label_2996e4:
    // 0x2996e4: 0xd  break       0
    ctx->pc = 0x2996e4u;
    runtime->handleBreak(rdram, ctx);
label_2996e8:
    // 0x2996e8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x2996e8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_2996ec:
    // 0x2996ec: 0x0  nop
    ctx->pc = 0x2996ecu;
    // NOP
label_2996f0:
    // 0x2996f0: 0x27871  tgeu        $zero, $v0, 481
    ctx->pc = 0x2996f0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_2996f4:
    // 0x2996f4: 0xd  break       0
    ctx->pc = 0x2996f4u;
    runtime->handleBreak(rdram, ctx);
label_2996f8:
    // 0x2996f8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x2996f8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_2996fc:
    // 0x2996fc: 0x0  nop
    ctx->pc = 0x2996fcu;
    // NOP
label_299700:
    // 0x299700: 0x2787e  dsrl32      $t7, $v0, 1
    ctx->pc = 0x299700u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 1));
label_299704:
    // 0x299704: 0xd  break       0
    ctx->pc = 0x299704u;
    runtime->handleBreak(rdram, ctx);
label_299708:
    // 0x299708: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299708u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_29970c:
    // 0x29970c: 0x0  nop
    ctx->pc = 0x29970cu;
    // NOP
label_299710:
    // 0x299710: 0x2788b  .word       0x0002788B                   # movn        $t7, $zero, $v0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299710u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 0));
label_299714:
    // 0x299714: 0xd  break       0
    ctx->pc = 0x299714u;
    runtime->handleBreak(rdram, ctx);
label_299718:
    // 0x299718: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299718u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_29971c:
    // 0x29971c: 0x0  nop
    ctx->pc = 0x29971cu;
    // NOP
label_299720:
    // 0x299720: 0x27898  .word       0x00027898                   # mult        $t7, $zero, $v0 # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x299720u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_299724:
    // 0x299724: 0xd  break       0
    ctx->pc = 0x299724u;
    runtime->handleBreak(rdram, ctx);
label_299728:
    // 0x299728: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299728u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_29972c:
    // 0x29972c: 0x0  nop
    ctx->pc = 0x29972cu;
    // NOP
label_299730:
    // 0x299730: 0x278a5  .word       0x000278A5                   # or          $t7, $zero, $v0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299730u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | GPR_U64(ctx, 2));
label_299734:
    // 0x299734: 0xd  break       0
    ctx->pc = 0x299734u;
    runtime->handleBreak(rdram, ctx);
label_299738:
    // 0x299738: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299738u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_29973c:
    // 0x29973c: 0x0  nop
    ctx->pc = 0x29973cu;
    // NOP
label_299740:
    // 0x299740: 0x278b2  tlt         $zero, $v0, 482
    ctx->pc = 0x299740u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_299744:
    // 0x299744: 0xd  break       0
    ctx->pc = 0x299744u;
    runtime->handleBreak(rdram, ctx);
label_299748:
    // 0x299748: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299748u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_29974c:
    // 0x29974c: 0x0  nop
    ctx->pc = 0x29974cu;
    // NOP
label_299750:
    // 0x299750: 0x278bf  dsra32      $t7, $v0, 2
    ctx->pc = 0x299750u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 2) >> (32 + 2));
label_299754:
    // 0x299754: 0xd  break       0
    ctx->pc = 0x299754u;
    runtime->handleBreak(rdram, ctx);
label_299758:
    // 0x299758: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299758u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_29975c:
    // 0x29975c: 0x0  nop
    ctx->pc = 0x29975cu;
    // NOP
label_299760:
    // 0x299760: 0x278cc  .word       0x000278CC                   # syscall     483 # 00020000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299760u;
    ctx->pc = 0x299764u;
runtime->handleSyscall(rdram, ctx, 0x9E3u);
label_299764:
    // 0x299764: 0xd  break       0
    ctx->pc = 0x299764u;
    runtime->handleBreak(rdram, ctx);
label_299768:
    // 0x299768: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299768u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_29976c:
    // 0x29976c: 0x0  nop
    ctx->pc = 0x29976cu;
    // NOP
label_299770:
    // 0x299770: 0x278d9  .word       0x000278D9                   # multu       $zero, $v0 # 000078C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299770u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_299774:
    // 0x299774: 0xd  break       0
    ctx->pc = 0x299774u;
    runtime->handleBreak(rdram, ctx);
label_299778:
    // 0x299778: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299778u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_29977c:
    // 0x29977c: 0x0  nop
    ctx->pc = 0x29977cu;
    // NOP
label_299780:
    // 0x299780: 0x278e6  .word       0x000278E6                   # xor         $t7, $zero, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299780u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 2));
label_299784:
    // 0x299784: 0xd  break       0
    ctx->pc = 0x299784u;
    runtime->handleBreak(rdram, ctx);
label_299788:
    // 0x299788: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299788u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_29978c:
    // 0x29978c: 0x0  nop
    ctx->pc = 0x29978cu;
    // NOP
label_299790:
    // 0x299790: 0x278f3  tltu        $zero, $v0, 483
    ctx->pc = 0x299790u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_299794:
    // 0x299794: 0xd  break       0
    ctx->pc = 0x299794u;
    runtime->handleBreak(rdram, ctx);
label_299798:
    // 0x299798: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299798u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_29979c:
    // 0x29979c: 0x0  nop
    ctx->pc = 0x29979cu;
    // NOP
label_2997a0:
    // 0x2997a0: 0x27900  sll         $t7, $v0, 4
    ctx->pc = 0x2997a0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2997a4:
    // 0x2997a4: 0xd  break       0
    ctx->pc = 0x2997a4u;
    runtime->handleBreak(rdram, ctx);
label_2997a8:
    // 0x2997a8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x2997a8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_2997ac:
    // 0x2997ac: 0x0  nop
    ctx->pc = 0x2997acu;
    // NOP
label_2997b0:
    // 0x2997b0: 0x2790d  break       2, 484
    ctx->pc = 0x2997b0u;
    runtime->handleBreak(rdram, ctx);
label_2997b4:
    // 0x2997b4: 0xd  break       0
    ctx->pc = 0x2997b4u;
    runtime->handleBreak(rdram, ctx);
label_2997b8:
    // 0x2997b8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x2997b8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_2997bc:
    // 0x2997bc: 0x0  nop
    ctx->pc = 0x2997bcu;
    // NOP
label_2997c0:
    // 0x2997c0: 0x2791a  .word       0x0002791A                   # div         $t7, $zero, $v0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2997c0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2997c4:
    // 0x2997c4: 0xd  break       0
    ctx->pc = 0x2997c4u;
    runtime->handleBreak(rdram, ctx);
label_2997c8:
    // 0x2997c8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x2997c8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_2997cc:
    // 0x2997cc: 0x0  nop
    ctx->pc = 0x2997ccu;
    // NOP
label_2997d0:
    // 0x2997d0: 0x27927  .word       0x00027927                   # nor         $t7, $zero, $v0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2997d0u;
    SET_GPR_U64(ctx, 15, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_2997d4:
    // 0x2997d4: 0xd  break       0
    ctx->pc = 0x2997d4u;
    runtime->handleBreak(rdram, ctx);
label_2997d8:
    // 0x2997d8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x2997d8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_2997dc:
    // 0x2997dc: 0x0  nop
    ctx->pc = 0x2997dcu;
    // NOP
label_2997e0:
    // 0x2997e0: 0x27934  teq         $zero, $v0, 484
    ctx->pc = 0x2997e0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_2997e4:
    // 0x2997e4: 0xd  break       0
    ctx->pc = 0x2997e4u;
    runtime->handleBreak(rdram, ctx);
label_2997e8:
    // 0x2997e8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x2997e8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_2997ec:
    // 0x2997ec: 0x0  nop
    ctx->pc = 0x2997ecu;
    // NOP
label_2997f0:
    // 0x2997f0: 0x27941  .word       0x00027941                   # INVALID     $zero, $v0, 0x7941 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2997f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2997F0 raw=0x00027941"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2997f4:
    // 0x2997f4: 0xd  break       0
    ctx->pc = 0x2997f4u;
    runtime->handleBreak(rdram, ctx);
label_2997f8:
    // 0x2997f8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x2997f8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_2997fc:
    // 0x2997fc: 0x0  nop
    ctx->pc = 0x2997fcu;
    // NOP
label_299800:
    // 0x299800: 0x2794e  .word       0x0002794E                   # INVALID     $zero, $v0, 0x794E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299800u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x299800 raw=0x0002794E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_299804:
    // 0x299804: 0xd  break       0
    ctx->pc = 0x299804u;
    runtime->handleBreak(rdram, ctx);
label_299808:
    // 0x299808: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299808u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_29980c:
    // 0x29980c: 0x0  nop
    ctx->pc = 0x29980cu;
    // NOP
label_299810:
    // 0x299810: 0x2795b  .word       0x0002795B                   # divu        $t7, $zero, $v0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299810u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_299814:
    // 0x299814: 0xd  break       0
    ctx->pc = 0x299814u;
    runtime->handleBreak(rdram, ctx);
label_299818:
    // 0x299818: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299818u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_29981c:
    // 0x29981c: 0x0  nop
    ctx->pc = 0x29981cu;
    // NOP
label_299820:
    // 0x299820: 0x27968  .word       0x00027968                   # mfsa        $t7 # 00020140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x299820u;
    SET_GPR_U32(ctx, 15, ctx->sa);
label_299824:
    // 0x299824: 0xd  break       0
    ctx->pc = 0x299824u;
    runtime->handleBreak(rdram, ctx);
label_299828:
    // 0x299828: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299828u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_29982c:
    // 0x29982c: 0x0  nop
    ctx->pc = 0x29982cu;
    // NOP
label_299830:
    // 0x299830: 0x27975  .word       0x00027975                   # INVALID     $zero, $v0, 0x7975 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299830u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x299830 raw=0x00027975"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_299834:
    // 0x299834: 0xd  break       0
    ctx->pc = 0x299834u;
    runtime->handleBreak(rdram, ctx);
label_299838:
    // 0x299838: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299838u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_29983c:
    // 0x29983c: 0x0  nop
    ctx->pc = 0x29983cu;
    // NOP
label_299840:
    // 0x299840: 0x27982  srl         $t7, $v0, 6
    ctx->pc = 0x299840u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
label_299844:
    // 0x299844: 0xd  break       0
    ctx->pc = 0x299844u;
    runtime->handleBreak(rdram, ctx);
label_299848:
    // 0x299848: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299848u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_29984c:
    // 0x29984c: 0x0  nop
    ctx->pc = 0x29984cu;
    // NOP
label_299850:
    // 0x299850: 0x2798f  .word       0x0002798F                   # sync # 00027800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299850u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_299854:
    // 0x299854: 0xd  break       0
    ctx->pc = 0x299854u;
    runtime->handleBreak(rdram, ctx);
label_299858:
    // 0x299858: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299858u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_29985c:
    // 0x29985c: 0x0  nop
    ctx->pc = 0x29985cu;
    // NOP
label_299860:
    // 0x299860: 0x2799c  .word       0x0002799C                   # dmult       $zero, $v0 # 00007980 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299860u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x299860 raw=0x0002799C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_299864:
    // 0x299864: 0xd  break       0
    ctx->pc = 0x299864u;
    runtime->handleBreak(rdram, ctx);
label_299868:
    // 0x299868: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299868u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_29986c:
    // 0x29986c: 0x0  nop
    ctx->pc = 0x29986cu;
    // NOP
label_299870:
    // 0x299870: 0x279a9  .word       0x000279A9                   # mtsa        $zero # 00027980 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x299870u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_299874:
    // 0x299874: 0xd  break       0
    ctx->pc = 0x299874u;
    runtime->handleBreak(rdram, ctx);
label_299878:
    // 0x299878: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299878u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_29987c:
    // 0x29987c: 0x0  nop
    ctx->pc = 0x29987cu;
    // NOP
label_299880:
    // 0x299880: 0x279b6  tne         $zero, $v0, 486
    ctx->pc = 0x299880u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_299884:
    // 0x299884: 0xd  break       0
    ctx->pc = 0x299884u;
    runtime->handleBreak(rdram, ctx);
label_299888:
    // 0x299888: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299888u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_29988c:
    // 0x29988c: 0x0  nop
    ctx->pc = 0x29988cu;
    // NOP
label_299890:
    // 0x299890: 0x279c3  sra         $t7, $v0, 7
    ctx->pc = 0x299890u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 2), 7));
label_299894:
    // 0x299894: 0xd  break       0
    ctx->pc = 0x299894u;
    runtime->handleBreak(rdram, ctx);
label_299898:
    // 0x299898: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299898u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_29989c:
    // 0x29989c: 0x0  nop
    ctx->pc = 0x29989cu;
    // NOP
label_2998a0:
    // 0x2998a0: 0x279d0  .word       0x000279D0                   # mfhi        $t7 # 000201C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2998a0u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_2998a4:
    // 0x2998a4: 0xd  break       0
    ctx->pc = 0x2998a4u;
    runtime->handleBreak(rdram, ctx);
label_2998a8:
    // 0x2998a8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x2998a8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_2998ac:
    // 0x2998ac: 0x0  nop
    ctx->pc = 0x2998acu;
    // NOP
label_2998b0:
    // 0x2998b0: 0x279dd  .word       0x000279DD                   # dmultu      $zero, $v0 # 000079C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2998b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2998B0 raw=0x000279DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2998b4:
    // 0x2998b4: 0xd  break       0
    ctx->pc = 0x2998b4u;
    runtime->handleBreak(rdram, ctx);
label_2998b8:
    // 0x2998b8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x2998b8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_2998bc:
    // 0x2998bc: 0x0  nop
    ctx->pc = 0x2998bcu;
    // NOP
label_2998c0:
    // 0x2998c0: 0x279ea  .word       0x000279EA                   # slt         $t7, $zero, $v0 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2998c0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2998c4:
    // 0x2998c4: 0xd  break       0
    ctx->pc = 0x2998c4u;
    runtime->handleBreak(rdram, ctx);
label_2998c8:
    // 0x2998c8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x2998c8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_2998cc:
    // 0x2998cc: 0x0  nop
    ctx->pc = 0x2998ccu;
    // NOP
label_2998d0:
    // 0x2998d0: 0x279f7  .word       0x000279F7                   # INVALID     $zero, $v0, 0x79F7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2998d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2998D0 raw=0x000279F7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2998d4:
    // 0x2998d4: 0xd  break       0
    ctx->pc = 0x2998d4u;
    runtime->handleBreak(rdram, ctx);
label_2998d8:
    // 0x2998d8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x2998d8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_2998dc:
    // 0x2998dc: 0x0  nop
    ctx->pc = 0x2998dcu;
    // NOP
label_2998e0:
    // 0x2998e0: 0x27a04  .word       0x00027A04                   # sllv        $t7, $v0, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2998e0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_2998e4:
    // 0x2998e4: 0xd  break       0
    ctx->pc = 0x2998e4u;
    runtime->handleBreak(rdram, ctx);
label_2998e8:
    // 0x2998e8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x2998e8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_2998ec:
    // 0x2998ec: 0x0  nop
    ctx->pc = 0x2998ecu;
    // NOP
label_2998f0:
    // 0x2998f0: 0x27a11  .word       0x00027A11                   # mthi        $zero # 00027A00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2998f0u;
    ctx->hi = GPR_U64(ctx, 0);
label_2998f4:
    // 0x2998f4: 0xd  break       0
    ctx->pc = 0x2998f4u;
    runtime->handleBreak(rdram, ctx);
label_2998f8:
    // 0x2998f8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x2998f8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_2998fc:
    // 0x2998fc: 0x0  nop
    ctx->pc = 0x2998fcu;
    // NOP
label_299900:
    // 0x299900: 0x27a1e  .word       0x00027A1E                   # ddiv        $t7, $zero, $v0 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299900u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x299900 raw=0x00027A1E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_299904:
    // 0x299904: 0xd  break       0
    ctx->pc = 0x299904u;
    runtime->handleBreak(rdram, ctx);
label_299908:
    // 0x299908: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299908u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_29990c:
    // 0x29990c: 0x0  nop
    ctx->pc = 0x29990cu;
    // NOP
label_299910:
    // 0x299910: 0x27a2b  .word       0x00027A2B                   # sltu        $t7, $zero, $v0 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299910u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_299914:
    // 0x299914: 0xd  break       0
    ctx->pc = 0x299914u;
    runtime->handleBreak(rdram, ctx);
label_299918:
    // 0x299918: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299918u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_29991c:
    // 0x29991c: 0x0  nop
    ctx->pc = 0x29991cu;
    // NOP
label_299920:
    // 0x299920: 0x27a38  dsll        $t7, $v0, 8
    ctx->pc = 0x299920u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) << 8);
label_299924:
    // 0x299924: 0xd  break       0
    ctx->pc = 0x299924u;
    runtime->handleBreak(rdram, ctx);
label_299928:
    // 0x299928: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299928u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_29992c:
    // 0x29992c: 0x0  nop
    ctx->pc = 0x29992cu;
    // NOP
label_299930:
    // 0x299930: 0x27a45  .word       0x00027A45                   # INVALID     $zero, $v0, 0x7A45 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299930u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x299930 raw=0x00027A45"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_299934:
    // 0x299934: 0xd  break       0
    ctx->pc = 0x299934u;
    runtime->handleBreak(rdram, ctx);
label_299938:
    // 0x299938: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299938u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_29993c:
    // 0x29993c: 0x0  nop
    ctx->pc = 0x29993cu;
    // NOP
label_299940:
    // 0x299940: 0x27a52  .word       0x00027A52                   # mflo        $t7 # 00020240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299940u;
    SET_GPR_U64(ctx, 15, ctx->lo);
label_299944:
    // 0x299944: 0xd  break       0
    ctx->pc = 0x299944u;
    runtime->handleBreak(rdram, ctx);
label_299948:
    // 0x299948: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299948u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_29994c:
    // 0x29994c: 0x0  nop
    ctx->pc = 0x29994cu;
    // NOP
label_299950:
    // 0x299950: 0x27a5f  .word       0x00027A5F                   # ddivu       $t7, $zero, $v0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299950u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x299950 raw=0x00027A5F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_299954:
    // 0x299954: 0xd  break       0
    ctx->pc = 0x299954u;
    runtime->handleBreak(rdram, ctx);
label_299958:
    // 0x299958: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299958u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_29995c:
    // 0x29995c: 0x0  nop
    ctx->pc = 0x29995cu;
    // NOP
label_299960:
    // 0x299960: 0x27a6c  .word       0x00027A6C                   # dadd        $t7, $zero, $v0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299960u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 2); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, r); }
label_299964:
    // 0x299964: 0xd  break       0
    ctx->pc = 0x299964u;
    runtime->handleBreak(rdram, ctx);
label_299968:
    // 0x299968: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299968u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_29996c:
    // 0x29996c: 0x0  nop
    ctx->pc = 0x29996cu;
    // NOP
label_299970:
    // 0x299970: 0x27a79  .word       0x00027A79                   # INVALID     $zero, $v0, 0x7A79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299970u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x299970 raw=0x00027A79"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_299974:
    // 0x299974: 0xd  break       0
    ctx->pc = 0x299974u;
    runtime->handleBreak(rdram, ctx);
label_299978:
    // 0x299978: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299978u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_29997c:
    // 0x29997c: 0x0  nop
    ctx->pc = 0x29997cu;
    // NOP
label_299980:
    // 0x299980: 0x27a86  .word       0x00027A86                   # srlv        $t7, $v0, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299980u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_299984:
    // 0x299984: 0xd  break       0
    ctx->pc = 0x299984u;
    runtime->handleBreak(rdram, ctx);
label_299988:
    // 0x299988: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299988u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_29998c:
    // 0x29998c: 0x0  nop
    ctx->pc = 0x29998cu;
    // NOP
label_299990:
    // 0x299990: 0x27a93  .word       0x00027A93                   # mtlo        $zero # 00027A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299990u;
    ctx->lo = GPR_U64(ctx, 0);
label_299994:
    // 0x299994: 0xd  break       0
    ctx->pc = 0x299994u;
    runtime->handleBreak(rdram, ctx);
label_299998:
    // 0x299998: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299998u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_29999c:
    // 0x29999c: 0x0  nop
    ctx->pc = 0x29999cu;
    // NOP
label_2999a0:
    // 0x2999a0: 0x27aa0  .word       0x00027AA0                   # add         $t7, $zero, $v0 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2999a0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_2999a4:
    // 0x2999a4: 0xd  break       0
    ctx->pc = 0x2999a4u;
    runtime->handleBreak(rdram, ctx);
label_2999a8:
    // 0x2999a8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x2999a8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_2999ac:
    // 0x2999ac: 0x0  nop
    ctx->pc = 0x2999acu;
    // NOP
label_2999b0:
    // 0x2999b0: 0x27aad  .word       0x00027AAD                   # daddu       $t7, $zero, $v0 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2999b0u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 2));
label_2999b4:
    // 0x2999b4: 0xd  break       0
    ctx->pc = 0x2999b4u;
    runtime->handleBreak(rdram, ctx);
label_2999b8:
    // 0x2999b8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x2999b8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_2999bc:
    // 0x2999bc: 0x0  nop
    ctx->pc = 0x2999bcu;
    // NOP
label_2999c0:
    // 0x2999c0: 0x27aba  dsrl        $t7, $v0, 10
    ctx->pc = 0x2999c0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> 10);
label_2999c4:
    // 0x2999c4: 0xd  break       0
    ctx->pc = 0x2999c4u;
    runtime->handleBreak(rdram, ctx);
label_2999c8:
    // 0x2999c8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x2999c8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_2999cc:
    // 0x2999cc: 0x0  nop
    ctx->pc = 0x2999ccu;
    // NOP
label_2999d0:
    // 0x2999d0: 0x27ac7  .word       0x00027AC7                   # srav        $t7, $v0, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2999d0u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_2999d4:
    // 0x2999d4: 0xd  break       0
    ctx->pc = 0x2999d4u;
    runtime->handleBreak(rdram, ctx);
label_2999d8:
    // 0x2999d8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x2999d8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_2999dc:
    // 0x2999dc: 0x0  nop
    ctx->pc = 0x2999dcu;
    // NOP
label_2999e0:
    // 0x2999e0: 0x27ad4  .word       0x00027AD4                   # dsllv       $t7, $v0, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2999e0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) << (GPR_U32(ctx, 0) & 0x3F));
label_2999e4:
    // 0x2999e4: 0xd  break       0
    ctx->pc = 0x2999e4u;
    runtime->handleBreak(rdram, ctx);
label_2999e8:
    // 0x2999e8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x2999e8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_2999ec:
    // 0x2999ec: 0x0  nop
    ctx->pc = 0x2999ecu;
    // NOP
label_2999f0:
    // 0x2999f0: 0x27ae1  .word       0x00027AE1                   # addu        $t7, $zero, $v0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2999f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_2999f4:
    // 0x2999f4: 0xd  break       0
    ctx->pc = 0x2999f4u;
    runtime->handleBreak(rdram, ctx);
label_2999f8:
    // 0x2999f8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x2999f8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_2999fc:
    // 0x2999fc: 0x0  nop
    ctx->pc = 0x2999fcu;
    // NOP
label_299a00:
    // 0x299a00: 0x27aee  .word       0x00027AEE                   # dsub        $t7, $zero, $v0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299a00u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 2); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, r); }
label_299a04:
    // 0x299a04: 0xd  break       0
    ctx->pc = 0x299a04u;
    runtime->handleBreak(rdram, ctx);
label_299a08:
    // 0x299a08: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299a08u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299a0c:
    // 0x299a0c: 0x0  nop
    ctx->pc = 0x299a0cu;
    // NOP
label_299a10:
    // 0x299a10: 0x27afb  dsra        $t7, $v0, 11
    ctx->pc = 0x299a10u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 2) >> 11);
label_299a14:
    // 0x299a14: 0xd  break       0
    ctx->pc = 0x299a14u;
    runtime->handleBreak(rdram, ctx);
label_299a18:
    // 0x299a18: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299a18u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299a1c:
    // 0x299a1c: 0x0  nop
    ctx->pc = 0x299a1cu;
    // NOP
label_299a20:
    // 0x299a20: 0x27b08  .word       0x00027B08                   # jr          $zero # 00027B00 <InstrIdType: CPU_SPECIAL>
label_299a24:
    if (ctx->pc == 0x299A24u) {
        ctx->pc = 0x299A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299A20u;
        // 0x299a24: 0xd  break       0 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x299A28u;
        goto label_299a28;
    }
    ctx->pc = 0x299A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x299A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299A20u;
        // 0x299a24: 0xd  break       0 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299A20u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x299A28u;
label_299a28:
    // 0x299a28: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299a28u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299a2c:
    // 0x299a2c: 0x0  nop
    ctx->pc = 0x299a2cu;
    // NOP
label_299a30:
    // 0x299a30: 0x27b15  .word       0x00027B15                   # INVALID     $zero, $v0, 0x7B15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299a30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x299A30 raw=0x00027B15"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_299a34:
    // 0x299a34: 0xd  break       0
    ctx->pc = 0x299a34u;
    runtime->handleBreak(rdram, ctx);
label_299a38:
    // 0x299a38: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299a38u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299a3c:
    // 0x299a3c: 0x0  nop
    ctx->pc = 0x299a3cu;
    // NOP
label_299a40:
    // 0x299a40: 0x27b22  .word       0x00027B22                   # neg         $t7, $v0 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299a40u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 2), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_299a44:
    // 0x299a44: 0xd  break       0
    ctx->pc = 0x299a44u;
    runtime->handleBreak(rdram, ctx);
label_299a48:
    // 0x299a48: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299a48u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299a4c:
    // 0x299a4c: 0x0  nop
    ctx->pc = 0x299a4cu;
    // NOP
label_299a50:
    // 0x299a50: 0x27b2f  .word       0x00027B2F                   # dsubu       $t7, $zero, $v0 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299a50u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
label_299a54:
    // 0x299a54: 0xd  break       0
    ctx->pc = 0x299a54u;
    runtime->handleBreak(rdram, ctx);
label_299a58:
    // 0x299a58: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299a58u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299a5c:
    // 0x299a5c: 0x0  nop
    ctx->pc = 0x299a5cu;
    // NOP
label_299a60:
    // 0x299a60: 0x27b3c  dsll32      $t7, $v0, 12
    ctx->pc = 0x299a60u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) << (32 + 12));
label_299a64:
    // 0x299a64: 0xd  break       0
    ctx->pc = 0x299a64u;
    runtime->handleBreak(rdram, ctx);
label_299a68:
    // 0x299a68: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299a68u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299a6c:
    // 0x299a6c: 0x0  nop
    ctx->pc = 0x299a6cu;
    // NOP
label_299a70:
    // 0x299a70: 0x27b49  .word       0x00027B49                   # jalr        $t7, $zero # 00020340 <InstrIdType: CPU_SPECIAL>
label_299a74:
    if (ctx->pc == 0x299A74u) {
        ctx->pc = 0x299A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299A70u;
        // 0x299a74: 0xd  break       0 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x299A78u;
        goto label_299a78;
    }
    ctx->pc = 0x299A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 15, 0x299A78u);
        ctx->pc = 0x299A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299A70u;
        // 0x299a74: 0xd  break       0 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299A70u, 0x299A78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x299A78u;
label_299a78:
    // 0x299a78: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299a78u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299a7c:
    // 0x299a7c: 0x0  nop
    ctx->pc = 0x299a7cu;
    // NOP
label_299a80:
    // 0x299a80: 0x27b56  .word       0x00027B56                   # dsrlv       $t7, $v0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299a80u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 0) & 0x3F));
label_299a84:
    // 0x299a84: 0xd  break       0
    ctx->pc = 0x299a84u;
    runtime->handleBreak(rdram, ctx);
label_299a88:
    // 0x299a88: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299a88u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299a8c:
    // 0x299a8c: 0x0  nop
    ctx->pc = 0x299a8cu;
    // NOP
label_299a90:
    // 0x299a90: 0x27b63  .word       0x00027B63                   # negu        $t7, $v0 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299a90u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_299a94:
    // 0x299a94: 0xd  break       0
    ctx->pc = 0x299a94u;
    runtime->handleBreak(rdram, ctx);
label_299a98:
    // 0x299a98: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299a98u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299a9c:
    // 0x299a9c: 0x0  nop
    ctx->pc = 0x299a9cu;
    // NOP
label_299aa0:
    // 0x299aa0: 0x27b70  tge         $zero, $v0, 493
    ctx->pc = 0x299aa0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_299aa4:
    // 0x299aa4: 0xd  break       0
    ctx->pc = 0x299aa4u;
    runtime->handleBreak(rdram, ctx);
label_299aa8:
    // 0x299aa8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299aa8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299aac:
    // 0x299aac: 0x0  nop
    ctx->pc = 0x299aacu;
    // NOP
label_299ab0:
    // 0x299ab0: 0x27b7d  .word       0x00027B7D                   # INVALID     $zero, $v0, 0x7B7D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299ab0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x299AB0 raw=0x00027B7D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_299ab4:
    // 0x299ab4: 0xd  break       0
    ctx->pc = 0x299ab4u;
    runtime->handleBreak(rdram, ctx);
label_299ab8:
    // 0x299ab8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299ab8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299abc:
    // 0x299abc: 0x0  nop
    ctx->pc = 0x299abcu;
    // NOP
label_299ac0:
    // 0x299ac0: 0x27b8a  .word       0x00027B8A                   # movz        $t7, $zero, $v0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299ac0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 0));
label_299ac4:
    // 0x299ac4: 0xd  break       0
    ctx->pc = 0x299ac4u;
    runtime->handleBreak(rdram, ctx);
label_299ac8:
    // 0x299ac8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299ac8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299acc:
    // 0x299acc: 0x0  nop
    ctx->pc = 0x299accu;
    // NOP
label_299ad0:
    // 0x299ad0: 0x27b97  .word       0x00027B97                   # dsrav       $t7, $v0, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299ad0u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 2) >> (GPR_U32(ctx, 0) & 0x3F));
label_299ad4:
    // 0x299ad4: 0xd  break       0
    ctx->pc = 0x299ad4u;
    runtime->handleBreak(rdram, ctx);
label_299ad8:
    // 0x299ad8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299ad8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299adc:
    // 0x299adc: 0x0  nop
    ctx->pc = 0x299adcu;
    // NOP
label_299ae0:
    // 0x299ae0: 0x27ba4  .word       0x00027BA4                   # and         $t7, $zero, $v0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299ae0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) & GPR_U64(ctx, 2));
label_299ae4:
    // 0x299ae4: 0xd  break       0
    ctx->pc = 0x299ae4u;
    runtime->handleBreak(rdram, ctx);
label_299ae8:
    // 0x299ae8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299ae8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299aec:
    // 0x299aec: 0x0  nop
    ctx->pc = 0x299aecu;
    // NOP
label_299af0:
    // 0x299af0: 0x27bb1  tgeu        $zero, $v0, 494
    ctx->pc = 0x299af0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_299af4:
    // 0x299af4: 0xd  break       0
    ctx->pc = 0x299af4u;
    runtime->handleBreak(rdram, ctx);
label_299af8:
    // 0x299af8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299af8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299afc:
    // 0x299afc: 0x0  nop
    ctx->pc = 0x299afcu;
    // NOP
label_299b00:
    // 0x299b00: 0x27bbe  dsrl32      $t7, $v0, 14
    ctx->pc = 0x299b00u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 14));
label_299b04:
    // 0x299b04: 0xd  break       0
    ctx->pc = 0x299b04u;
    runtime->handleBreak(rdram, ctx);
label_299b08:
    // 0x299b08: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299b08u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299b0c:
    // 0x299b0c: 0x0  nop
    ctx->pc = 0x299b0cu;
    // NOP
label_299b10:
    // 0x299b10: 0x27bcb  .word       0x00027BCB                   # movn        $t7, $zero, $v0 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299b10u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 0));
label_299b14:
    // 0x299b14: 0xd  break       0
    ctx->pc = 0x299b14u;
    runtime->handleBreak(rdram, ctx);
label_299b18:
    // 0x299b18: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299b18u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299b1c:
    // 0x299b1c: 0x0  nop
    ctx->pc = 0x299b1cu;
    // NOP
label_299b20:
    // 0x299b20: 0x27bd8  .word       0x00027BD8                   # mult        $t7, $zero, $v0 # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x299b20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_299b24:
    // 0x299b24: 0xd  break       0
    ctx->pc = 0x299b24u;
    runtime->handleBreak(rdram, ctx);
label_299b28:
    // 0x299b28: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299b28u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299b2c:
    // 0x299b2c: 0x0  nop
    ctx->pc = 0x299b2cu;
    // NOP
label_299b30:
    // 0x299b30: 0x27be5  .word       0x00027BE5                   # or          $t7, $zero, $v0 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299b30u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | GPR_U64(ctx, 2));
label_299b34:
    // 0x299b34: 0xd  break       0
    ctx->pc = 0x299b34u;
    runtime->handleBreak(rdram, ctx);
label_299b38:
    // 0x299b38: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299b38u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299b3c:
    // 0x299b3c: 0x0  nop
    ctx->pc = 0x299b3cu;
    // NOP
label_299b40:
    // 0x299b40: 0x27bf2  tlt         $zero, $v0, 495
    ctx->pc = 0x299b40u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_299b44:
    // 0x299b44: 0xd  break       0
    ctx->pc = 0x299b44u;
    runtime->handleBreak(rdram, ctx);
label_299b48:
    // 0x299b48: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299b48u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299b4c:
    // 0x299b4c: 0x0  nop
    ctx->pc = 0x299b4cu;
    // NOP
label_299b50:
    // 0x299b50: 0x27bff  dsra32      $t7, $v0, 15
    ctx->pc = 0x299b50u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 2) >> (32 + 15));
label_299b54:
    // 0x299b54: 0xd  break       0
    ctx->pc = 0x299b54u;
    runtime->handleBreak(rdram, ctx);
label_299b58:
    // 0x299b58: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299b58u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299b5c:
    // 0x299b5c: 0x0  nop
    ctx->pc = 0x299b5cu;
    // NOP
label_299b60:
    // 0x299b60: 0x27c0c  .word       0x00027C0C                   # syscall     496 # 00020000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299b60u;
    ctx->pc = 0x299B64u;
runtime->handleSyscall(rdram, ctx, 0x9F0u);
label_299b64:
    // 0x299b64: 0xd  break       0
    ctx->pc = 0x299b64u;
    runtime->handleBreak(rdram, ctx);
label_299b68:
    // 0x299b68: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299b68u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299b6c:
    // 0x299b6c: 0x0  nop
    ctx->pc = 0x299b6cu;
    // NOP
label_299b70:
    // 0x299b70: 0x27c19  .word       0x00027C19                   # multu       $zero, $v0 # 00007C00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299b70u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_299b74:
    // 0x299b74: 0xd  break       0
    ctx->pc = 0x299b74u;
    runtime->handleBreak(rdram, ctx);
label_299b78:
    // 0x299b78: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299b78u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299b7c:
    // 0x299b7c: 0x0  nop
    ctx->pc = 0x299b7cu;
    // NOP
label_299b80:
    // 0x299b80: 0x27c26  .word       0x00027C26                   # xor         $t7, $zero, $v0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299b80u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 2));
label_299b84:
    // 0x299b84: 0xd  break       0
    ctx->pc = 0x299b84u;
    runtime->handleBreak(rdram, ctx);
label_299b88:
    // 0x299b88: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299b88u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299b8c:
    // 0x299b8c: 0x0  nop
    ctx->pc = 0x299b8cu;
    // NOP
label_299b90:
    // 0x299b90: 0x27c33  tltu        $zero, $v0, 496
    ctx->pc = 0x299b90u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_299b94:
    // 0x299b94: 0xd  break       0
    ctx->pc = 0x299b94u;
    runtime->handleBreak(rdram, ctx);
label_299b98:
    // 0x299b98: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299b98u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299b9c:
    // 0x299b9c: 0x0  nop
    ctx->pc = 0x299b9cu;
    // NOP
label_299ba0:
    // 0x299ba0: 0x27c40  sll         $t7, $v0, 17
    ctx->pc = 0x299ba0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
label_299ba4:
    // 0x299ba4: 0xd  break       0
    ctx->pc = 0x299ba4u;
    runtime->handleBreak(rdram, ctx);
label_299ba8:
    // 0x299ba8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299ba8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299bac:
    // 0x299bac: 0x0  nop
    ctx->pc = 0x299bacu;
    // NOP
label_299bb0:
    // 0x299bb0: 0x27c4d  break       2, 497
    ctx->pc = 0x299bb0u;
    runtime->handleBreak(rdram, ctx);
label_299bb4:
    // 0x299bb4: 0xd  break       0
    ctx->pc = 0x299bb4u;
    runtime->handleBreak(rdram, ctx);
label_299bb8:
    // 0x299bb8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299bb8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299bbc:
    // 0x299bbc: 0x0  nop
    ctx->pc = 0x299bbcu;
    // NOP
label_299bc0:
    // 0x299bc0: 0x27c5a  .word       0x00027C5A                   # div         $t7, $zero, $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299bc0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_299bc4:
    // 0x299bc4: 0xd  break       0
    ctx->pc = 0x299bc4u;
    runtime->handleBreak(rdram, ctx);
label_299bc8:
    // 0x299bc8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299bc8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299bcc:
    // 0x299bcc: 0x0  nop
    ctx->pc = 0x299bccu;
    // NOP
label_299bd0:
    // 0x299bd0: 0x27c67  .word       0x00027C67                   # nor         $t7, $zero, $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299bd0u;
    SET_GPR_U64(ctx, 15, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_299bd4:
    // 0x299bd4: 0xd  break       0
    ctx->pc = 0x299bd4u;
    runtime->handleBreak(rdram, ctx);
label_299bd8:
    // 0x299bd8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299bd8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299bdc:
    // 0x299bdc: 0x0  nop
    ctx->pc = 0x299bdcu;
    // NOP
label_299be0:
    // 0x299be0: 0x27c74  teq         $zero, $v0, 497
    ctx->pc = 0x299be0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_299be4:
    // 0x299be4: 0xd  break       0
    ctx->pc = 0x299be4u;
    runtime->handleBreak(rdram, ctx);
label_299be8:
    // 0x299be8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299be8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299bec:
    // 0x299bec: 0x0  nop
    ctx->pc = 0x299becu;
    // NOP
label_299bf0:
    // 0x299bf0: 0x27c81  .word       0x00027C81                   # INVALID     $zero, $v0, 0x7C81 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299bf0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x299BF0 raw=0x00027C81"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_299bf4:
    // 0x299bf4: 0xd  break       0
    ctx->pc = 0x299bf4u;
    runtime->handleBreak(rdram, ctx);
label_299bf8:
    // 0x299bf8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299bf8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299bfc:
    // 0x299bfc: 0x0  nop
    ctx->pc = 0x299bfcu;
    // NOP
label_299c00:
    // 0x299c00: 0x27c8e  .word       0x00027C8E                   # INVALID     $zero, $v0, 0x7C8E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299c00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x299C00 raw=0x00027C8E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_299c04:
    // 0x299c04: 0xd  break       0
    ctx->pc = 0x299c04u;
    runtime->handleBreak(rdram, ctx);
label_299c08:
    // 0x299c08: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299c08u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299c0c:
    // 0x299c0c: 0x0  nop
    ctx->pc = 0x299c0cu;
    // NOP
label_299c10:
    // 0x299c10: 0x27c9b  .word       0x00027C9B                   # divu        $t7, $zero, $v0 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299c10u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_299c14:
    // 0x299c14: 0xd  break       0
    ctx->pc = 0x299c14u;
    runtime->handleBreak(rdram, ctx);
label_299c18:
    // 0x299c18: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299c18u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299c1c:
    // 0x299c1c: 0x0  nop
    ctx->pc = 0x299c1cu;
    // NOP
label_299c20:
    // 0x299c20: 0x27ca8  .word       0x00027CA8                   # mfsa        $t7 # 00020480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x299c20u;
    SET_GPR_U32(ctx, 15, ctx->sa);
label_299c24:
    // 0x299c24: 0xd  break       0
    ctx->pc = 0x299c24u;
    runtime->handleBreak(rdram, ctx);
label_299c28:
    // 0x299c28: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299c28u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299c2c:
    // 0x299c2c: 0x0  nop
    ctx->pc = 0x299c2cu;
    // NOP
label_299c30:
    // 0x299c30: 0x27cb5  .word       0x00027CB5                   # INVALID     $zero, $v0, 0x7CB5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299c30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x299C30 raw=0x00027CB5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_299c34:
    // 0x299c34: 0xd  break       0
    ctx->pc = 0x299c34u;
    runtime->handleBreak(rdram, ctx);
label_299c38:
    // 0x299c38: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299c38u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299c3c:
    // 0x299c3c: 0x0  nop
    ctx->pc = 0x299c3cu;
    // NOP
label_299c40:
    // 0x299c40: 0x27cc2  srl         $t7, $v0, 19
    ctx->pc = 0x299c40u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 2), 19));
label_299c44:
    // 0x299c44: 0xd  break       0
    ctx->pc = 0x299c44u;
    runtime->handleBreak(rdram, ctx);
label_299c48:
    // 0x299c48: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299c48u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299c4c:
    // 0x299c4c: 0x0  nop
    ctx->pc = 0x299c4cu;
    // NOP
label_299c50:
    // 0x299c50: 0x27ccf  .word       0x00027CCF                   # sync.p # 00027800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299c50u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_299c54:
    // 0x299c54: 0xd  break       0
    ctx->pc = 0x299c54u;
    runtime->handleBreak(rdram, ctx);
label_299c58:
    // 0x299c58: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299c58u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299c5c:
    // 0x299c5c: 0x0  nop
    ctx->pc = 0x299c5cu;
    // NOP
label_299c60:
    // 0x299c60: 0x27cdc  .word       0x00027CDC                   # dmult       $zero, $v0 # 00007CC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299c60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x299C60 raw=0x00027CDC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_299c64:
    // 0x299c64: 0xd  break       0
    ctx->pc = 0x299c64u;
    runtime->handleBreak(rdram, ctx);
label_299c68:
    // 0x299c68: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299c68u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299c6c:
    // 0x299c6c: 0x0  nop
    ctx->pc = 0x299c6cu;
    // NOP
label_299c70:
    // 0x299c70: 0x27ce9  .word       0x00027CE9                   # mtsa        $zero # 00027CC0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x299c70u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_299c74:
    // 0x299c74: 0xd  break       0
    ctx->pc = 0x299c74u;
    runtime->handleBreak(rdram, ctx);
label_299c78:
    // 0x299c78: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299c78u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299c7c:
    // 0x299c7c: 0x0  nop
    ctx->pc = 0x299c7cu;
    // NOP
label_299c80:
    // 0x299c80: 0x27cf6  tne         $zero, $v0, 499
    ctx->pc = 0x299c80u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_299c84:
    // 0x299c84: 0xd  break       0
    ctx->pc = 0x299c84u;
    runtime->handleBreak(rdram, ctx);
label_299c88:
    // 0x299c88: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299c88u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299c8c:
    // 0x299c8c: 0x0  nop
    ctx->pc = 0x299c8cu;
    // NOP
label_299c90:
    // 0x299c90: 0x27d03  sra         $t7, $v0, 20
    ctx->pc = 0x299c90u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 2), 20));
label_299c94:
    // 0x299c94: 0xd  break       0
    ctx->pc = 0x299c94u;
    runtime->handleBreak(rdram, ctx);
label_299c98:
    // 0x299c98: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299c98u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299c9c:
    // 0x299c9c: 0x0  nop
    ctx->pc = 0x299c9cu;
    // NOP
label_299ca0:
    // 0x299ca0: 0x27d10  .word       0x00027D10                   # mfhi        $t7 # 00020500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299ca0u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_299ca4:
    // 0x299ca4: 0xd  break       0
    ctx->pc = 0x299ca4u;
    runtime->handleBreak(rdram, ctx);
label_299ca8:
    // 0x299ca8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299ca8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299cac:
    // 0x299cac: 0x0  nop
    ctx->pc = 0x299cacu;
    // NOP
label_299cb0:
    // 0x299cb0: 0x27d1d  .word       0x00027D1D                   # dmultu      $zero, $v0 # 00007D00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299cb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x299CB0 raw=0x00027D1D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_299cb4:
    // 0x299cb4: 0xd  break       0
    ctx->pc = 0x299cb4u;
    runtime->handleBreak(rdram, ctx);
label_299cb8:
    // 0x299cb8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299cb8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299cbc:
    // 0x299cbc: 0x0  nop
    ctx->pc = 0x299cbcu;
    // NOP
label_299cc0:
    // 0x299cc0: 0x27d2a  .word       0x00027D2A                   # slt         $t7, $zero, $v0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299cc0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_299cc4:
    // 0x299cc4: 0xd  break       0
    ctx->pc = 0x299cc4u;
    runtime->handleBreak(rdram, ctx);
label_299cc8:
    // 0x299cc8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299cc8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299ccc:
    // 0x299ccc: 0x0  nop
    ctx->pc = 0x299cccu;
    // NOP
label_299cd0:
    // 0x299cd0: 0x27d37  .word       0x00027D37                   # INVALID     $zero, $v0, 0x7D37 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299cd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x299CD0 raw=0x00027D37"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_299cd4:
    // 0x299cd4: 0xd  break       0
    ctx->pc = 0x299cd4u;
    runtime->handleBreak(rdram, ctx);
label_299cd8:
    // 0x299cd8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299cd8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299cdc:
    // 0x299cdc: 0x0  nop
    ctx->pc = 0x299cdcu;
    // NOP
label_299ce0:
    // 0x299ce0: 0x27d44  .word       0x00027D44                   # sllv        $t7, $v0, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299ce0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_299ce4:
    // 0x299ce4: 0xd  break       0
    ctx->pc = 0x299ce4u;
    runtime->handleBreak(rdram, ctx);
label_299ce8:
    // 0x299ce8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299ce8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299cec:
    // 0x299cec: 0x0  nop
    ctx->pc = 0x299cecu;
    // NOP
label_299cf0:
    // 0x299cf0: 0x27d51  .word       0x00027D51                   # mthi        $zero # 00027D40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299cf0u;
    ctx->hi = GPR_U64(ctx, 0);
label_299cf4:
    // 0x299cf4: 0xd  break       0
    ctx->pc = 0x299cf4u;
    runtime->handleBreak(rdram, ctx);
    ctx->pc = 0x299cf8u;
    return;
}
