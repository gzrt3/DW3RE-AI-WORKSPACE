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


void FUN_0017d410_part40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1904c0u: goto label_1904c0;
        case 0x1904c4u: goto label_1904c4;
        case 0x1904c8u: goto label_1904c8;
        case 0x1904ccu: goto label_1904cc;
        case 0x1904d0u: goto label_1904d0;
        case 0x1904d4u: goto label_1904d4;
        case 0x1904d8u: goto label_1904d8;
        case 0x1904dcu: goto label_1904dc;
        case 0x1904e0u: goto label_1904e0;
        case 0x1904e4u: goto label_1904e4;
        case 0x1904e8u: goto label_1904e8;
        case 0x1904ecu: goto label_1904ec;
        case 0x1904f0u: goto label_1904f0;
        case 0x1904f4u: goto label_1904f4;
        case 0x1904f8u: goto label_1904f8;
        case 0x1904fcu: goto label_1904fc;
        case 0x190500u: goto label_190500;
        case 0x190504u: goto label_190504;
        case 0x190508u: goto label_190508;
        case 0x19050cu: goto label_19050c;
        case 0x190510u: goto label_190510;
        case 0x190514u: goto label_190514;
        case 0x190518u: goto label_190518;
        case 0x19051cu: goto label_19051c;
        case 0x190520u: goto label_190520;
        case 0x190524u: goto label_190524;
        case 0x190528u: goto label_190528;
        case 0x19052cu: goto label_19052c;
        case 0x190530u: goto label_190530;
        case 0x190534u: goto label_190534;
        case 0x190538u: goto label_190538;
        case 0x19053cu: goto label_19053c;
        case 0x190540u: goto label_190540;
        case 0x190544u: goto label_190544;
        case 0x190548u: goto label_190548;
        case 0x19054cu: goto label_19054c;
        case 0x190550u: goto label_190550;
        case 0x190554u: goto label_190554;
        case 0x190558u: goto label_190558;
        case 0x19055cu: goto label_19055c;
        case 0x190560u: goto label_190560;
        case 0x190564u: goto label_190564;
        case 0x190568u: goto label_190568;
        case 0x19056cu: goto label_19056c;
        case 0x190570u: goto label_190570;
        case 0x190574u: goto label_190574;
        case 0x190578u: goto label_190578;
        case 0x19057cu: goto label_19057c;
        case 0x190580u: goto label_190580;
        case 0x190584u: goto label_190584;
        case 0x190588u: goto label_190588;
        case 0x19058cu: goto label_19058c;
        case 0x190590u: goto label_190590;
        case 0x190594u: goto label_190594;
        case 0x190598u: goto label_190598;
        case 0x19059cu: goto label_19059c;
        case 0x1905a0u: goto label_1905a0;
        case 0x1905a4u: goto label_1905a4;
        case 0x1905a8u: goto label_1905a8;
        case 0x1905acu: goto label_1905ac;
        case 0x1905b0u: goto label_1905b0;
        case 0x1905b4u: goto label_1905b4;
        case 0x1905b8u: goto label_1905b8;
        case 0x1905bcu: goto label_1905bc;
        case 0x1905c0u: goto label_1905c0;
        case 0x1905c4u: goto label_1905c4;
        case 0x1905c8u: goto label_1905c8;
        case 0x1905ccu: goto label_1905cc;
        case 0x1905d0u: goto label_1905d0;
        case 0x1905d4u: goto label_1905d4;
        case 0x1905d8u: goto label_1905d8;
        case 0x1905dcu: goto label_1905dc;
        case 0x1905e0u: goto label_1905e0;
        case 0x1905e4u: goto label_1905e4;
        case 0x1905e8u: goto label_1905e8;
        case 0x1905ecu: goto label_1905ec;
        case 0x1905f0u: goto label_1905f0;
        case 0x1905f4u: goto label_1905f4;
        case 0x1905f8u: goto label_1905f8;
        case 0x1905fcu: goto label_1905fc;
        case 0x190600u: goto label_190600;
        case 0x190604u: goto label_190604;
        case 0x190608u: goto label_190608;
        case 0x19060cu: goto label_19060c;
        case 0x190610u: goto label_190610;
        case 0x190614u: goto label_190614;
        case 0x190618u: goto label_190618;
        case 0x19061cu: goto label_19061c;
        case 0x190620u: goto label_190620;
        case 0x190624u: goto label_190624;
        case 0x190628u: goto label_190628;
        case 0x19062cu: goto label_19062c;
        case 0x190630u: goto label_190630;
        case 0x190634u: goto label_190634;
        case 0x190638u: goto label_190638;
        case 0x19063cu: goto label_19063c;
        case 0x190640u: goto label_190640;
        case 0x190644u: goto label_190644;
        case 0x190648u: goto label_190648;
        case 0x19064cu: goto label_19064c;
        case 0x190650u: goto label_190650;
        case 0x190654u: goto label_190654;
        case 0x190658u: goto label_190658;
        case 0x19065cu: goto label_19065c;
        case 0x190660u: goto label_190660;
        case 0x190664u: goto label_190664;
        case 0x190668u: goto label_190668;
        case 0x19066cu: goto label_19066c;
        case 0x190670u: goto label_190670;
        case 0x190674u: goto label_190674;
        case 0x190678u: goto label_190678;
        case 0x19067cu: goto label_19067c;
        case 0x190680u: goto label_190680;
        case 0x190684u: goto label_190684;
        case 0x190688u: goto label_190688;
        case 0x19068cu: goto label_19068c;
        case 0x190690u: goto label_190690;
        case 0x190694u: goto label_190694;
        case 0x190698u: goto label_190698;
        case 0x19069cu: goto label_19069c;
        case 0x1906a0u: goto label_1906a0;
        case 0x1906a4u: goto label_1906a4;
        case 0x1906a8u: goto label_1906a8;
        case 0x1906acu: goto label_1906ac;
        case 0x1906b0u: goto label_1906b0;
        case 0x1906b4u: goto label_1906b4;
        case 0x1906b8u: goto label_1906b8;
        case 0x1906bcu: goto label_1906bc;
        case 0x1906c0u: goto label_1906c0;
        case 0x1906c4u: goto label_1906c4;
        case 0x1906c8u: goto label_1906c8;
        case 0x1906ccu: goto label_1906cc;
        case 0x1906d0u: goto label_1906d0;
        case 0x1906d4u: goto label_1906d4;
        case 0x1906d8u: goto label_1906d8;
        case 0x1906dcu: goto label_1906dc;
        case 0x1906e0u: goto label_1906e0;
        case 0x1906e4u: goto label_1906e4;
        case 0x1906e8u: goto label_1906e8;
        case 0x1906ecu: goto label_1906ec;
        case 0x1906f0u: goto label_1906f0;
        case 0x1906f4u: goto label_1906f4;
        case 0x1906f8u: goto label_1906f8;
        case 0x1906fcu: goto label_1906fc;
        case 0x190700u: goto label_190700;
        case 0x190704u: goto label_190704;
        case 0x190708u: goto label_190708;
        case 0x19070cu: goto label_19070c;
        case 0x190710u: goto label_190710;
        case 0x190714u: goto label_190714;
        case 0x190718u: goto label_190718;
        case 0x19071cu: goto label_19071c;
        case 0x190720u: goto label_190720;
        case 0x190724u: goto label_190724;
        case 0x190728u: goto label_190728;
        case 0x19072cu: goto label_19072c;
        case 0x190730u: goto label_190730;
        case 0x190734u: goto label_190734;
        case 0x190738u: goto label_190738;
        case 0x19073cu: goto label_19073c;
        case 0x190740u: goto label_190740;
        case 0x190744u: goto label_190744;
        case 0x190748u: goto label_190748;
        case 0x19074cu: goto label_19074c;
        case 0x190750u: goto label_190750;
        case 0x190754u: goto label_190754;
        case 0x190758u: goto label_190758;
        case 0x19075cu: goto label_19075c;
        case 0x190760u: goto label_190760;
        case 0x190764u: goto label_190764;
        case 0x190768u: goto label_190768;
        case 0x19076cu: goto label_19076c;
        case 0x190770u: goto label_190770;
        case 0x190774u: goto label_190774;
        case 0x190778u: goto label_190778;
        case 0x19077cu: goto label_19077c;
        case 0x190780u: goto label_190780;
        case 0x190784u: goto label_190784;
        case 0x190788u: goto label_190788;
        case 0x19078cu: goto label_19078c;
        case 0x190790u: goto label_190790;
        case 0x190794u: goto label_190794;
        case 0x190798u: goto label_190798;
        case 0x19079cu: goto label_19079c;
        case 0x1907a0u: goto label_1907a0;
        case 0x1907a4u: goto label_1907a4;
        case 0x1907a8u: goto label_1907a8;
        case 0x1907acu: goto label_1907ac;
        case 0x1907b0u: goto label_1907b0;
        case 0x1907b4u: goto label_1907b4;
        case 0x1907b8u: goto label_1907b8;
        case 0x1907bcu: goto label_1907bc;
        case 0x1907c0u: goto label_1907c0;
        case 0x1907c4u: goto label_1907c4;
        case 0x1907c8u: goto label_1907c8;
        case 0x1907ccu: goto label_1907cc;
        case 0x1907d0u: goto label_1907d0;
        case 0x1907d4u: goto label_1907d4;
        case 0x1907d8u: goto label_1907d8;
        case 0x1907dcu: goto label_1907dc;
        case 0x1907e0u: goto label_1907e0;
        case 0x1907e4u: goto label_1907e4;
        case 0x1907e8u: goto label_1907e8;
        case 0x1907ecu: goto label_1907ec;
        case 0x1907f0u: goto label_1907f0;
        case 0x1907f4u: goto label_1907f4;
        case 0x1907f8u: goto label_1907f8;
        case 0x1907fcu: goto label_1907fc;
        case 0x190800u: goto label_190800;
        case 0x190804u: goto label_190804;
        case 0x190808u: goto label_190808;
        case 0x19080cu: goto label_19080c;
        case 0x190810u: goto label_190810;
        case 0x190814u: goto label_190814;
        case 0x190818u: goto label_190818;
        case 0x19081cu: goto label_19081c;
        case 0x190820u: goto label_190820;
        case 0x190824u: goto label_190824;
        case 0x190828u: goto label_190828;
        case 0x19082cu: goto label_19082c;
        case 0x190830u: goto label_190830;
        case 0x190834u: goto label_190834;
        case 0x190838u: goto label_190838;
        case 0x19083cu: goto label_19083c;
        case 0x190840u: goto label_190840;
        case 0x190844u: goto label_190844;
        case 0x190848u: goto label_190848;
        case 0x19084cu: goto label_19084c;
        case 0x190850u: goto label_190850;
        case 0x190854u: goto label_190854;
        case 0x190858u: goto label_190858;
        case 0x19085cu: goto label_19085c;
        case 0x190860u: goto label_190860;
        case 0x190864u: goto label_190864;
        case 0x190868u: goto label_190868;
        case 0x19086cu: goto label_19086c;
        case 0x190870u: goto label_190870;
        case 0x190874u: goto label_190874;
        case 0x190878u: goto label_190878;
        case 0x19087cu: goto label_19087c;
        case 0x190880u: goto label_190880;
        case 0x190884u: goto label_190884;
        case 0x190888u: goto label_190888;
        case 0x19088cu: goto label_19088c;
        case 0x190890u: goto label_190890;
        case 0x190894u: goto label_190894;
        case 0x190898u: goto label_190898;
        case 0x19089cu: goto label_19089c;
        case 0x1908a0u: goto label_1908a0;
        case 0x1908a4u: goto label_1908a4;
        case 0x1908a8u: goto label_1908a8;
        case 0x1908acu: goto label_1908ac;
        case 0x1908b0u: goto label_1908b0;
        case 0x1908b4u: goto label_1908b4;
        case 0x1908b8u: goto label_1908b8;
        case 0x1908bcu: goto label_1908bc;
        case 0x1908c0u: goto label_1908c0;
        case 0x1908c4u: goto label_1908c4;
        case 0x1908c8u: goto label_1908c8;
        case 0x1908ccu: goto label_1908cc;
        case 0x1908d0u: goto label_1908d0;
        case 0x1908d4u: goto label_1908d4;
        case 0x1908d8u: goto label_1908d8;
        case 0x1908dcu: goto label_1908dc;
        case 0x1908e0u: goto label_1908e0;
        case 0x1908e4u: goto label_1908e4;
        case 0x1908e8u: goto label_1908e8;
        case 0x1908ecu: goto label_1908ec;
        case 0x1908f0u: goto label_1908f0;
        case 0x1908f4u: goto label_1908f4;
        case 0x1908f8u: goto label_1908f8;
        case 0x1908fcu: goto label_1908fc;
        case 0x190900u: goto label_190900;
        case 0x190904u: goto label_190904;
        case 0x190908u: goto label_190908;
        case 0x19090cu: goto label_19090c;
        case 0x190910u: goto label_190910;
        case 0x190914u: goto label_190914;
        case 0x190918u: goto label_190918;
        case 0x19091cu: goto label_19091c;
        case 0x190920u: goto label_190920;
        case 0x190924u: goto label_190924;
        case 0x190928u: goto label_190928;
        case 0x19092cu: goto label_19092c;
        case 0x190930u: goto label_190930;
        case 0x190934u: goto label_190934;
        case 0x190938u: goto label_190938;
        case 0x19093cu: goto label_19093c;
        case 0x190940u: goto label_190940;
        case 0x190944u: goto label_190944;
        case 0x190948u: goto label_190948;
        case 0x19094cu: goto label_19094c;
        case 0x190950u: goto label_190950;
        case 0x190954u: goto label_190954;
        case 0x190958u: goto label_190958;
        case 0x19095cu: goto label_19095c;
        case 0x190960u: goto label_190960;
        case 0x190964u: goto label_190964;
        case 0x190968u: goto label_190968;
        case 0x19096cu: goto label_19096c;
        case 0x190970u: goto label_190970;
        case 0x190974u: goto label_190974;
        case 0x190978u: goto label_190978;
        case 0x19097cu: goto label_19097c;
        case 0x190980u: goto label_190980;
        case 0x190984u: goto label_190984;
        case 0x190988u: goto label_190988;
        case 0x19098cu: goto label_19098c;
        case 0x190990u: goto label_190990;
        case 0x190994u: goto label_190994;
        case 0x190998u: goto label_190998;
        case 0x19099cu: goto label_19099c;
        case 0x1909a0u: goto label_1909a0;
        case 0x1909a4u: goto label_1909a4;
        case 0x1909a8u: goto label_1909a8;
        case 0x1909acu: goto label_1909ac;
        case 0x1909b0u: goto label_1909b0;
        case 0x1909b4u: goto label_1909b4;
        case 0x1909b8u: goto label_1909b8;
        case 0x1909bcu: goto label_1909bc;
        case 0x1909c0u: goto label_1909c0;
        case 0x1909c4u: goto label_1909c4;
        case 0x1909c8u: goto label_1909c8;
        case 0x1909ccu: goto label_1909cc;
        case 0x1909d0u: goto label_1909d0;
        case 0x1909d4u: goto label_1909d4;
        case 0x1909d8u: goto label_1909d8;
        case 0x1909dcu: goto label_1909dc;
        case 0x1909e0u: goto label_1909e0;
        case 0x1909e4u: goto label_1909e4;
        case 0x1909e8u: goto label_1909e8;
        case 0x1909ecu: goto label_1909ec;
        case 0x1909f0u: goto label_1909f0;
        case 0x1909f4u: goto label_1909f4;
        case 0x1909f8u: goto label_1909f8;
        case 0x1909fcu: goto label_1909fc;
        case 0x190a00u: goto label_190a00;
        case 0x190a04u: goto label_190a04;
        case 0x190a08u: goto label_190a08;
        case 0x190a0cu: goto label_190a0c;
        case 0x190a10u: goto label_190a10;
        case 0x190a14u: goto label_190a14;
        case 0x190a18u: goto label_190a18;
        case 0x190a1cu: goto label_190a1c;
        case 0x190a20u: goto label_190a20;
        case 0x190a24u: goto label_190a24;
        case 0x190a28u: goto label_190a28;
        case 0x190a2cu: goto label_190a2c;
        case 0x190a30u: goto label_190a30;
        case 0x190a34u: goto label_190a34;
        case 0x190a38u: goto label_190a38;
        case 0x190a3cu: goto label_190a3c;
        case 0x190a40u: goto label_190a40;
        case 0x190a44u: goto label_190a44;
        case 0x190a48u: goto label_190a48;
        case 0x190a4cu: goto label_190a4c;
        case 0x190a50u: goto label_190a50;
        case 0x190a54u: goto label_190a54;
        case 0x190a58u: goto label_190a58;
        case 0x190a5cu: goto label_190a5c;
        case 0x190a60u: goto label_190a60;
        case 0x190a64u: goto label_190a64;
        case 0x190a68u: goto label_190a68;
        case 0x190a6cu: goto label_190a6c;
        case 0x190a70u: goto label_190a70;
        case 0x190a74u: goto label_190a74;
        case 0x190a78u: goto label_190a78;
        case 0x190a7cu: goto label_190a7c;
        case 0x190a80u: goto label_190a80;
        case 0x190a84u: goto label_190a84;
        case 0x190a88u: goto label_190a88;
        case 0x190a8cu: goto label_190a8c;
        case 0x190a90u: goto label_190a90;
        case 0x190a94u: goto label_190a94;
        case 0x190a98u: goto label_190a98;
        case 0x190a9cu: goto label_190a9c;
        case 0x190aa0u: goto label_190aa0;
        case 0x190aa4u: goto label_190aa4;
        case 0x190aa8u: goto label_190aa8;
        case 0x190aacu: goto label_190aac;
        case 0x190ab0u: goto label_190ab0;
        case 0x190ab4u: goto label_190ab4;
        case 0x190ab8u: goto label_190ab8;
        case 0x190abcu: goto label_190abc;
        case 0x190ac0u: goto label_190ac0;
        case 0x190ac4u: goto label_190ac4;
        case 0x190ac8u: goto label_190ac8;
        case 0x190accu: goto label_190acc;
        case 0x190ad0u: goto label_190ad0;
        case 0x190ad4u: goto label_190ad4;
        case 0x190ad8u: goto label_190ad8;
        case 0x190adcu: goto label_190adc;
        case 0x190ae0u: goto label_190ae0;
        case 0x190ae4u: goto label_190ae4;
        case 0x190ae8u: goto label_190ae8;
        case 0x190aecu: goto label_190aec;
        case 0x190af0u: goto label_190af0;
        case 0x190af4u: goto label_190af4;
        case 0x190af8u: goto label_190af8;
        case 0x190afcu: goto label_190afc;
        case 0x190b00u: goto label_190b00;
        case 0x190b04u: goto label_190b04;
        case 0x190b08u: goto label_190b08;
        case 0x190b0cu: goto label_190b0c;
        case 0x190b10u: goto label_190b10;
        case 0x190b14u: goto label_190b14;
        case 0x190b18u: goto label_190b18;
        case 0x190b1cu: goto label_190b1c;
        case 0x190b20u: goto label_190b20;
        case 0x190b24u: goto label_190b24;
        case 0x190b28u: goto label_190b28;
        case 0x190b2cu: goto label_190b2c;
        case 0x190b30u: goto label_190b30;
        case 0x190b34u: goto label_190b34;
        case 0x190b38u: goto label_190b38;
        case 0x190b3cu: goto label_190b3c;
        case 0x190b40u: goto label_190b40;
        case 0x190b44u: goto label_190b44;
        case 0x190b48u: goto label_190b48;
        case 0x190b4cu: goto label_190b4c;
        case 0x190b50u: goto label_190b50;
        case 0x190b54u: goto label_190b54;
        case 0x190b58u: goto label_190b58;
        case 0x190b5cu: goto label_190b5c;
        case 0x190b60u: goto label_190b60;
        case 0x190b64u: goto label_190b64;
        case 0x190b68u: goto label_190b68;
        case 0x190b6cu: goto label_190b6c;
        case 0x190b70u: goto label_190b70;
        case 0x190b74u: goto label_190b74;
        case 0x190b78u: goto label_190b78;
        case 0x190b7cu: goto label_190b7c;
        case 0x190b80u: goto label_190b80;
        case 0x190b84u: goto label_190b84;
        case 0x190b88u: goto label_190b88;
        case 0x190b8cu: goto label_190b8c;
        case 0x190b90u: goto label_190b90;
        case 0x190b94u: goto label_190b94;
        case 0x190b98u: goto label_190b98;
        case 0x190b9cu: goto label_190b9c;
        case 0x190ba0u: goto label_190ba0;
        case 0x190ba4u: goto label_190ba4;
        case 0x190ba8u: goto label_190ba8;
        case 0x190bacu: goto label_190bac;
        case 0x190bb0u: goto label_190bb0;
        case 0x190bb4u: goto label_190bb4;
        case 0x190bb8u: goto label_190bb8;
        case 0x190bbcu: goto label_190bbc;
        case 0x190bc0u: goto label_190bc0;
        case 0x190bc4u: goto label_190bc4;
        case 0x190bc8u: goto label_190bc8;
        case 0x190bccu: goto label_190bcc;
        case 0x190bd0u: goto label_190bd0;
        case 0x190bd4u: goto label_190bd4;
        case 0x190bd8u: goto label_190bd8;
        case 0x190bdcu: goto label_190bdc;
        case 0x190be0u: goto label_190be0;
        case 0x190be4u: goto label_190be4;
        case 0x190be8u: goto label_190be8;
        case 0x190becu: goto label_190bec;
        case 0x190bf0u: goto label_190bf0;
        case 0x190bf4u: goto label_190bf4;
        case 0x190bf8u: goto label_190bf8;
        case 0x190bfcu: goto label_190bfc;
        case 0x190c00u: goto label_190c00;
        case 0x190c04u: goto label_190c04;
        case 0x190c08u: goto label_190c08;
        case 0x190c0cu: goto label_190c0c;
        case 0x190c10u: goto label_190c10;
        case 0x190c14u: goto label_190c14;
        case 0x190c18u: goto label_190c18;
        case 0x190c1cu: goto label_190c1c;
        case 0x190c20u: goto label_190c20;
        case 0x190c24u: goto label_190c24;
        case 0x190c28u: goto label_190c28;
        case 0x190c2cu: goto label_190c2c;
        case 0x190c30u: goto label_190c30;
        case 0x190c34u: goto label_190c34;
        case 0x190c38u: goto label_190c38;
        case 0x190c3cu: goto label_190c3c;
        case 0x190c40u: goto label_190c40;
        case 0x190c44u: goto label_190c44;
        case 0x190c48u: goto label_190c48;
        case 0x190c4cu: goto label_190c4c;
        case 0x190c50u: goto label_190c50;
        case 0x190c54u: goto label_190c54;
        case 0x190c58u: goto label_190c58;
        case 0x190c5cu: goto label_190c5c;
        case 0x190c60u: goto label_190c60;
        case 0x190c64u: goto label_190c64;
        case 0x190c68u: goto label_190c68;
        case 0x190c6cu: goto label_190c6c;
        case 0x190c70u: goto label_190c70;
        case 0x190c74u: goto label_190c74;
        case 0x190c78u: goto label_190c78;
        case 0x190c7cu: goto label_190c7c;
        case 0x190c80u: goto label_190c80;
        case 0x190c84u: goto label_190c84;
        case 0x190c88u: goto label_190c88;
        case 0x190c8cu: goto label_190c8c;
        default: return;
    }

label_1904c0:
    // 0x1904c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1904c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1904c4:
    // 0x1904c4: 0x0  nop
    ctx->pc = 0x1904c4u;
    // NOP
label_1904c8:
    // 0x1904c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1904c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1904cc:
    // 0x1904cc: 0x0  nop
    ctx->pc = 0x1904ccu;
    // NOP
label_1904d0:
    // 0x1904d0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1904d4:
    if (ctx->pc == 0x1904D4u) {
        ctx->pc = 0x1904D8u;
        goto label_1904d8;
    }
    ctx->pc = 0x1904D0u;
    {
        const bool branch_taken_0x1904d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1904d0) {
            ctx->pc = 0x1904ECu;
            goto label_1904ec;
        }
    }
    ctx->pc = 0x1904D8u;
label_1904d8:
    // 0x1904d8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1904d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1904dc:
    // 0x1904dc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1904dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1904e0:
    // 0x1904e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1904e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1904e4:
    // 0x1904e4: 0x0  nop
    ctx->pc = 0x1904e4u;
    // NOP
label_1904e8:
    // 0x1904e8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1904e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1904ec:
    // 0x1904ec: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1904ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1904f0:
    // 0x1904f0: 0x27a30270  addiu       $v1, $sp, 0x270
    ctx->pc = 0x1904f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_1904f4:
    // 0x1904f4: 0xe6610020  swc1        $f1, 0x20($s3)
    ctx->pc = 0x1904f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
label_1904f8:
    // 0x1904f8: 0x24422f90  addiu       $v0, $v0, 0x2F90
    ctx->pc = 0x1904f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
label_1904fc:
    // 0x1904fc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1904fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_190500:
    // 0x190500: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x190500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_190504:
    // 0x190504: 0xc066e44  jal         func_19B910
label_190508:
    if (ctx->pc == 0x190508u) {
        ctx->pc = 0x190508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190504u;
        // 0x190508: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19050Cu;
        goto label_19050c;
    }
    ctx->pc = 0x190504u;
    SET_GPR_U32(ctx, 31, 0x19050Cu);
    ctx->pc = 0x190508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190504u;
    // 0x190508: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x19050Cu;
label_19050c:
    // 0x19050c: 0xc66c0028  lwc1        $f12, 0x28($s3)
    ctx->pc = 0x19050cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_190510:
    // 0x190510: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x190510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_190514:
    // 0x190514: 0xc066e6c  jal         func_19B9B0
label_190518:
    if (ctx->pc == 0x190518u) {
        ctx->pc = 0x190518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190514u;
        // 0x190518: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19051Cu;
        goto label_19051c;
    }
    ctx->pc = 0x190514u;
    SET_GPR_U32(ctx, 31, 0x19051Cu);
    ctx->pc = 0x190518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190514u;
    // 0x190518: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    { ctx->pc = 0x19b9b0; return; }
    ctx->pc = 0x19051Cu;
label_19051c:
    // 0x19051c: 0xc66c0020  lwc1        $f12, 0x20($s3)
    ctx->pc = 0x19051cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_190520:
    // 0x190520: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x190520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_190524:
    // 0x190524: 0xc066e96  jal         func_19BA58
label_190528:
    if (ctx->pc == 0x190528u) {
        ctx->pc = 0x190528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190524u;
        // 0x190528: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19052Cu;
        goto label_19052c;
    }
    ctx->pc = 0x190524u;
    SET_GPR_U32(ctx, 31, 0x19052Cu);
    ctx->pc = 0x190528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190524u;
    // 0x190528: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x19052Cu;
label_19052c:
    // 0x19052c: 0xc66c0024  lwc1        $f12, 0x24($s3)
    ctx->pc = 0x19052cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_190530:
    // 0x190530: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x190530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_190534:
    // 0x190534: 0xc066ec0  jal         func_19BB00
label_190538:
    if (ctx->pc == 0x190538u) {
        ctx->pc = 0x190538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190534u;
        // 0x190538: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19053Cu;
        goto label_19053c;
    }
    ctx->pc = 0x190534u;
    SET_GPR_U32(ctx, 31, 0x19053Cu);
    ctx->pc = 0x190538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190534u;
    // 0x190538: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x19053Cu;
label_19053c:
    // 0x19053c: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x19053cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_190540:
    // 0x190540: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x190540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_190544:
    // 0x190544: 0xc066d7a  jal         func_19B5E8
label_190548:
    if (ctx->pc == 0x190548u) {
        ctx->pc = 0x190548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190544u;
        // 0x190548: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19054Cu;
        goto label_19054c;
    }
    ctx->pc = 0x190544u;
    SET_GPR_U32(ctx, 31, 0x19054Cu);
    ctx->pc = 0x190548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190544u;
    // 0x190548: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x19054Cu;
label_19054c:
    // 0x19054c: 0x26640040  addiu       $a0, $s3, 0x40
    ctx->pc = 0x19054cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_190550:
    // 0x190550: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x190550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_190554:
    // 0x190554: 0xc066e02  jal         func_19B808
label_190558:
    if (ctx->pc == 0x190558u) {
        ctx->pc = 0x190558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190554u;
        // 0x190558: 0x27a60270  addiu       $a2, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19055Cu;
        goto label_19055c;
    }
    ctx->pc = 0x190554u;
    SET_GPR_U32(ctx, 31, 0x19055Cu);
    ctx->pc = 0x190558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190554u;
    // 0x190558: 0x27a60270  addiu       $a2, $sp, 0x270 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x19055Cu;
label_19055c:
    // 0x19055c: 0x26620030  addiu       $v0, $s3, 0x30
    ctx->pc = 0x19055cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_190560:
    // 0x190560: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x190560u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_190564:
    // 0x190564: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x190564u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_190568:
    // 0x190568: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x190568u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_19056c:
    // 0x19056c: 0x4a0002ff  vnop
    ctx->pc = 0x19056cu;
    // NOP operation, no action needed for VU0
label_190570:
    // 0x190570: 0x4a0002ff  vnop
    ctx->pc = 0x190570u;
    // NOP operation, no action needed for VU0
label_190574:
    // 0x190574: 0x4a0002ff  vnop
    ctx->pc = 0x190574u;
    // NOP operation, no action needed for VU0
label_190578:
    // 0x190578: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x190578u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_19057c:
    // 0x19057c: 0x4a0002ff  vnop
    ctx->pc = 0x19057cu;
    // NOP operation, no action needed for VU0
label_190580:
    // 0x190580: 0x4a0002ff  vnop
    ctx->pc = 0x190580u;
    // NOP operation, no action needed for VU0
label_190584:
    // 0x190584: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x190584u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_190588:
    // 0x190588: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x190588u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_19058c:
    // 0x19058c: 0x4a0002ff  vnop
    ctx->pc = 0x19058cu;
    // NOP operation, no action needed for VU0
label_190590:
    // 0x190590: 0x4a0002ff  vnop
    ctx->pc = 0x190590u;
    // NOP operation, no action needed for VU0
label_190594:
    // 0x190594: 0x4a0002ff  vnop
    ctx->pc = 0x190594u;
    // NOP operation, no action needed for VU0
label_190598:
    // 0x190598: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x190598u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_19059c:
    // 0x19059c: 0x4a0003bf  vwaitq
    ctx->pc = 0x19059cu;
    // VWAITQ (Q already resolved in this runtime)
label_1905a0:
    // 0x1905a0: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x1905a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_1905a4:
    // 0x1905a4: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x1905a4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1905a8:
    // 0x1905a8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1905a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_1905ac:
    // 0x1905ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1905acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1905b0:
    // 0x1905b0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1905b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1905b4:
    // 0x1905b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1905b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1905b8:
    // 0x1905b8: 0x0  nop
    ctx->pc = 0x1905b8u;
    // NOP
label_1905bc:
    // 0x1905bc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1905c0:
    if (ctx->pc == 0x1905C0u) {
        ctx->pc = 0x1905C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1905BCu;
        // 0x1905c0: 0x3c024226  lui         $v0, 0x4226 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16934 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1905C4u;
        goto label_1905c4;
    }
    ctx->pc = 0x1905BCu;
    {
        const bool branch_taken_0x1905bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1905C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1905BCu;
        // 0x1905c0: 0x3c024226  lui         $v0, 0x4226 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16934 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1905bc) {
            ctx->pc = 0x1905E0u;
            goto label_1905e0;
        }
    }
    ctx->pc = 0x1905C4u;
label_1905c4:
    // 0x1905c4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1905c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1905c8:
    // 0x1905c8: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x1905c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_1905cc:
    // 0x1905cc: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1905ccu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
label_1905d0:
    // 0x1905d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1905d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1905d4:
    // 0x1905d4: 0x0  nop
    ctx->pc = 0x1905d4u;
    // NOP
label_1905d8:
    // 0x1905d8: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x1905d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1905dc:
    // 0x1905dc: 0x3c024226  lui         $v0, 0x4226
    ctx->pc = 0x1905dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16934 << 16));
label_1905e0:
    // 0x1905e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1905e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1905e4:
    // 0x1905e4: 0x344227f0  ori         $v0, $v0, 0x27F0
    ctx->pc = 0x1905e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10224);
label_1905e8:
    // 0x1905e8: 0x26640070  addiu       $a0, $s3, 0x70
    ctx->pc = 0x1905e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_1905ec:
    // 0x1905ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1905ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1905f0:
    // 0x1905f0: 0x0  nop
    ctx->pc = 0x1905f0u;
    // NOP
label_1905f4:
    // 0x1905f4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1905f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1905f8:
    // 0x1905f8: 0xc066e26  jal         func_19B898
label_1905fc:
    if (ctx->pc == 0x1905FCu) {
        ctx->pc = 0x1905FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1905F8u;
        // 0x1905fc: 0xe6600098  swc1        $f0, 0x98($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 152), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x190600u;
        goto label_190600;
    }
    ctx->pc = 0x1905F8u;
    SET_GPR_U32(ctx, 31, 0x190600u);
    ctx->pc = 0x1905FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1905F8u;
    // 0x1905fc: 0xe6600098  swc1        $f0, 0x98($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 152), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x190600u;
label_190600:
    // 0x190600: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x190600u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_190604:
    // 0x190604: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x190604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_190608:
    // 0x190608: 0xc7bb001c  lwc1        $f27, 0x1C($sp)
    ctx->pc = 0x190608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_19060c:
    // 0x19060c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x19060cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_190610:
    // 0x190610: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x190610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_190614:
    // 0x190614: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x190614u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_190618:
    // 0x190618: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x190618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_19061c:
    // 0x19061c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x19061cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_190620:
    // 0x190620: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x190620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_190624:
    // 0x190624: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x190624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_190628:
    // 0x190628: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x190628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_19062c:
    // 0x19062c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x19062cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_190630:
    // 0x190630: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x190630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_190634:
    // 0x190634: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x190634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_190638:
    // 0x190638: 0x3e00008  jr          $ra
label_19063c:
    if (ctx->pc == 0x19063Cu) {
        ctx->pc = 0x19063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190638u;
        // 0x19063c: 0x27bd02a0  addiu       $sp, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190640u;
        goto label_190640;
    }
    ctx->pc = 0x190638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190638u;
        // 0x19063c: 0x27bd02a0  addiu       $sp, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190640u;
label_190640:
    // 0x190640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x190640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_190644:
    // 0x190644: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_190648:
    // 0x190648: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x190648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_19064c:
    // 0x19064c: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x19064cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_190650:
    // 0x190650: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_190654:
    if (ctx->pc == 0x190654u) {
        ctx->pc = 0x190654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190650u;
        // 0x190654: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190658u;
        goto label_190658;
    }
    ctx->pc = 0x190650u;
    {
        const bool branch_taken_0x190650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190650u;
        // 0x190654: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190650) {
            ctx->pc = 0x190670u;
            goto label_190670;
        }
    }
    ctx->pc = 0x190658u;
label_190658:
    // 0x190658: 0xc0641a4  jal         func_190690
label_19065c:
    if (ctx->pc == 0x19065Cu) {
        ctx->pc = 0x19065Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190658u;
        // 0x19065c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190660u;
        goto label_190660;
    }
    ctx->pc = 0x190658u;
    SET_GPR_U32(ctx, 31, 0x190660u);
    ctx->pc = 0x19065Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190658u;
    // 0x19065c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190690u;
    goto label_190690;
    ctx->pc = 0x190660u;
label_190660:
    // 0x190660: 0xc0641a4  jal         func_190690
label_190664:
    if (ctx->pc == 0x190664u) {
        ctx->pc = 0x190664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190660u;
        // 0x190664: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190668u;
        goto label_190668;
    }
    ctx->pc = 0x190660u;
    SET_GPR_U32(ctx, 31, 0x190668u);
    ctx->pc = 0x190664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190660u;
    // 0x190664: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190690u;
    goto label_190690;
    ctx->pc = 0x190668u;
label_190668:
    // 0x190668: 0x10000004  b           . + 4 + (0x4 << 2)
label_19066c:
    if (ctx->pc == 0x19066Cu) {
        ctx->pc = 0x19066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190668u;
        // 0x19066c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190670u;
        goto label_190670;
    }
    ctx->pc = 0x190668u;
    {
        const bool branch_taken_0x190668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190668u;
        // 0x19066c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190668) {
            ctx->pc = 0x19067Cu;
            goto label_19067c;
        }
    }
    ctx->pc = 0x190670u;
label_190670:
    // 0x190670: 0xc0641a4  jal         func_190690
label_190674:
    if (ctx->pc == 0x190674u) {
        ctx->pc = 0x190678u;
        goto label_190678;
    }
    ctx->pc = 0x190670u;
    SET_GPR_U32(ctx, 31, 0x190678u);
    ctx->pc = 0x190690u;
    goto label_190690;
    ctx->pc = 0x190678u;
label_190678:
    // 0x190678: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19067c:
    // 0x19067c: 0x3e00008  jr          $ra
label_190680:
    if (ctx->pc == 0x190680u) {
        ctx->pc = 0x190680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19067Cu;
        // 0x190680: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190684u;
        goto label_190684;
    }
    ctx->pc = 0x19067Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19067Cu;
        // 0x190680: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19067Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190684u;
label_190684:
    // 0x190684: 0x0  nop
    ctx->pc = 0x190684u;
    // NOP
label_190688:
    // 0x190688: 0x0  nop
    ctx->pc = 0x190688u;
    // NOP
label_19068c:
    // 0x19068c: 0x0  nop
    ctx->pc = 0x19068cu;
    // NOP
label_190690:
    // 0x190690: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x190690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_190694:
    // 0x190694: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x190694u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_190698:
    // 0x190698: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x190698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_19069c:
    // 0x19069c: 0x278381e8  addiu       $v1, $gp, -0x7E18
    ctx->pc = 0x19069cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935016));
label_1906a0:
    // 0x1906a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1906a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1906a4:
    // 0x1906a4: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1906a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1906a8:
    // 0x1906a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1906a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1906ac:
    // 0x1906ac: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1906acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1906b0:
    // 0x1906b0: 0x1060005c  beqz        $v1, . + 4 + (0x5C << 2)
label_1906b4:
    if (ctx->pc == 0x1906B4u) {
        ctx->pc = 0x1906B8u;
        goto label_1906b8;
    }
    ctx->pc = 0x1906B0u;
    {
        const bool branch_taken_0x1906b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1906b0) {
            ctx->pc = 0x190824u;
            goto label_190824;
        }
    }
    ctx->pc = 0x1906B8u;
label_1906b8:
    // 0x1906b8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1906b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1906bc:
    // 0x1906bc: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1906bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1906c0:
    // 0x1906c0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1906c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_1906c4:
    // 0x1906c4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1906c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1906c8:
    // 0x1906c8: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1906c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1906cc:
    // 0x1906cc: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1906ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1906d0:
    // 0x1906d0: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1906d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1906d4:
    // 0x1906d4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1906d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1906d8:
    // 0x1906d8: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x1906d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
label_1906dc:
    // 0x1906dc: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x1906dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1906e0:
    // 0x1906e0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1906e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1906e4:
    // 0x1906e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1906e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1906e8:
    // 0x1906e8: 0x24429d40  addiu       $v0, $v0, -0x62C0
    ctx->pc = 0x1906e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942016));
label_1906ec:
    // 0x1906ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1906ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1906f0:
    // 0x1906f0: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1906f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1906f4:
    // 0x1906f4: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1906f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1906f8:
    // 0x1906f8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1906f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1906fc:
    // 0x1906fc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1906fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_190700:
    // 0x190700: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x190700u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_190704:
    // 0x190704: 0xc066e26  jal         func_19B898
label_190708:
    if (ctx->pc == 0x190708u) {
        ctx->pc = 0x190708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190704u;
        // 0x190708: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19070Cu;
        goto label_19070c;
    }
    ctx->pc = 0x190704u;
    SET_GPR_U32(ctx, 31, 0x19070Cu);
    ctx->pc = 0x190708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190704u;
    // 0x190708: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x19070Cu;
label_19070c:
    // 0x19070c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x19070cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_190710:
    // 0x190710: 0xc066e26  jal         func_19B898
label_190714:
    if (ctx->pc == 0x190714u) {
        ctx->pc = 0x190714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190710u;
        // 0x190714: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190718u;
        goto label_190718;
    }
    ctx->pc = 0x190710u;
    SET_GPR_U32(ctx, 31, 0x190718u);
    ctx->pc = 0x190714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190710u;
    // 0x190714: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x190718u;
label_190718:
    // 0x190718: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x190718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_19071c:
    // 0x19071c: 0xc066e26  jal         func_19B898
label_190720:
    if (ctx->pc == 0x190720u) {
        ctx->pc = 0x190720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19071Cu;
        // 0x190720: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190724u;
        goto label_190724;
    }
    ctx->pc = 0x19071Cu;
    SET_GPR_U32(ctx, 31, 0x190724u);
    ctx->pc = 0x190720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19071Cu;
    // 0x190720: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x190724u;
label_190724:
    // 0x190724: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x190724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_190728:
    // 0x190728: 0xc066e26  jal         func_19B898
label_19072c:
    if (ctx->pc == 0x19072Cu) {
        ctx->pc = 0x19072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190728u;
        // 0x19072c: 0x26250030  addiu       $a1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190730u;
        goto label_190730;
    }
    ctx->pc = 0x190728u;
    SET_GPR_U32(ctx, 31, 0x190730u);
    ctx->pc = 0x19072Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190728u;
    // 0x19072c: 0x26250030  addiu       $a1, $s1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x190730u;
label_190730:
    // 0x190730: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x190730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_190734:
    // 0x190734: 0xc066e26  jal         func_19B898
label_190738:
    if (ctx->pc == 0x190738u) {
        ctx->pc = 0x190738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190734u;
        // 0x190738: 0x26250040  addiu       $a1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19073Cu;
        goto label_19073c;
    }
    ctx->pc = 0x190734u;
    SET_GPR_U32(ctx, 31, 0x19073Cu);
    ctx->pc = 0x190738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190734u;
    // 0x190738: 0x26250040  addiu       $a1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x19073Cu;
label_19073c:
    // 0x19073c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x19073cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_190740:
    // 0x190740: 0xc066e26  jal         func_19B898
label_190744:
    if (ctx->pc == 0x190744u) {
        ctx->pc = 0x190744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190740u;
        // 0x190744: 0x26250050  addiu       $a1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190748u;
        goto label_190748;
    }
    ctx->pc = 0x190740u;
    SET_GPR_U32(ctx, 31, 0x190748u);
    ctx->pc = 0x190744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190740u;
    // 0x190744: 0x26250050  addiu       $a1, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x190748u;
label_190748:
    // 0x190748: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x190748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_19074c:
    // 0x19074c: 0xc066e26  jal         func_19B898
label_190750:
    if (ctx->pc == 0x190750u) {
        ctx->pc = 0x190750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19074Cu;
        // 0x190750: 0x26250060  addiu       $a1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190754u;
        goto label_190754;
    }
    ctx->pc = 0x19074Cu;
    SET_GPR_U32(ctx, 31, 0x190754u);
    ctx->pc = 0x190750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19074Cu;
    // 0x190750: 0x26250060  addiu       $a1, $s1, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x190754u;
label_190754:
    // 0x190754: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x190754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_190758:
    // 0x190758: 0xc066e26  jal         func_19B898
label_19075c:
    if (ctx->pc == 0x19075Cu) {
        ctx->pc = 0x19075Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190758u;
        // 0x19075c: 0x26250070  addiu       $a1, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190760u;
        goto label_190760;
    }
    ctx->pc = 0x190758u;
    SET_GPR_U32(ctx, 31, 0x190760u);
    ctx->pc = 0x19075Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190758u;
    // 0x19075c: 0x26250070  addiu       $a1, $s1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x190760u;
label_190760:
    // 0x190760: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x190760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_190764:
    // 0x190764: 0xc066e26  jal         func_19B898
label_190768:
    if (ctx->pc == 0x190768u) {
        ctx->pc = 0x190768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190764u;
        // 0x190768: 0x26250080  addiu       $a1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19076Cu;
        goto label_19076c;
    }
    ctx->pc = 0x190764u;
    SET_GPR_U32(ctx, 31, 0x19076Cu);
    ctx->pc = 0x190768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190764u;
    // 0x190768: 0x26250080  addiu       $a1, $s1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x19076Cu;
label_19076c:
    // 0x19076c: 0xc6200090  lwc1        $f0, 0x90($s1)
    ctx->pc = 0x19076cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190770:
    // 0x190770: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x190770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
label_190774:
    // 0x190774: 0xc6200094  lwc1        $f0, 0x94($s1)
    ctx->pc = 0x190774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190778:
    // 0x190778: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x190778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
label_19077c:
    // 0x19077c: 0xc6200098  lwc1        $f0, 0x98($s1)
    ctx->pc = 0x19077cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190780:
    // 0x190780: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x190780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
label_190784:
    // 0x190784: 0xc620009c  lwc1        $f0, 0x9C($s1)
    ctx->pc = 0x190784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190788:
    // 0x190788: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x190788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
label_19078c:
    // 0x19078c: 0x8e2300a0  lw          $v1, 0xA0($s1)
    ctx->pc = 0x19078cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_190790:
    // 0x190790: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x190790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
label_190794:
    // 0x190794: 0x8e2300a4  lw          $v1, 0xA4($s1)
    ctx->pc = 0x190794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
label_190798:
    // 0x190798: 0xae0300a4  sw          $v1, 0xA4($s0)
    ctx->pc = 0x190798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
label_19079c:
    // 0x19079c: 0x8e2300a8  lw          $v1, 0xA8($s1)
    ctx->pc = 0x19079cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
label_1907a0:
    // 0x1907a0: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x1907a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
label_1907a4:
    // 0x1907a4: 0x8e2300ac  lw          $v1, 0xAC($s1)
    ctx->pc = 0x1907a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
label_1907a8:
    // 0x1907a8: 0xae0300ac  sw          $v1, 0xAC($s0)
    ctx->pc = 0x1907a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 3));
label_1907ac:
    // 0x1907ac: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x1907acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_1907b0:
    // 0x1907b0: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x1907b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
label_1907b4:
    // 0x1907b4: 0xc62000b4  lwc1        $f0, 0xB4($s1)
    ctx->pc = 0x1907b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1907b8:
    // 0x1907b8: 0xe60000b4  swc1        $f0, 0xB4($s0)
    ctx->pc = 0x1907b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
label_1907bc:
    // 0x1907bc: 0xc62000b8  lwc1        $f0, 0xB8($s1)
    ctx->pc = 0x1907bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1907c0:
    // 0x1907c0: 0xe60000b8  swc1        $f0, 0xB8($s0)
    ctx->pc = 0x1907c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 184), bits); }
label_1907c4:
    // 0x1907c4: 0xc62000bc  lwc1        $f0, 0xBC($s1)
    ctx->pc = 0x1907c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1907c8:
    // 0x1907c8: 0xe60000bc  swc1        $f0, 0xBC($s0)
    ctx->pc = 0x1907c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
label_1907cc:
    // 0x1907cc: 0xc62000c0  lwc1        $f0, 0xC0($s1)
    ctx->pc = 0x1907ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1907d0:
    // 0x1907d0: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x1907d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
label_1907d4:
    // 0x1907d4: 0xc62000c4  lwc1        $f0, 0xC4($s1)
    ctx->pc = 0x1907d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1907d8:
    // 0x1907d8: 0xe60000c4  swc1        $f0, 0xC4($s0)
    ctx->pc = 0x1907d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
label_1907dc:
    // 0x1907dc: 0xc62000c8  lwc1        $f0, 0xC8($s1)
    ctx->pc = 0x1907dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1907e0:
    // 0x1907e0: 0xe60000c8  swc1        $f0, 0xC8($s0)
    ctx->pc = 0x1907e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 200), bits); }
label_1907e4:
    // 0x1907e4: 0x8e2300cc  lw          $v1, 0xCC($s1)
    ctx->pc = 0x1907e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_1907e8:
    // 0x1907e8: 0xae0300cc  sw          $v1, 0xCC($s0)
    ctx->pc = 0x1907e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 3));
label_1907ec:
    // 0x1907ec: 0x8e2300d0  lw          $v1, 0xD0($s1)
    ctx->pc = 0x1907ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_1907f0:
    // 0x1907f0: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x1907f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
label_1907f4:
    // 0x1907f4: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x1907f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_1907f8:
    // 0x1907f8: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1907f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
label_1907fc:
    // 0x1907fc: 0x8e2300d8  lw          $v1, 0xD8($s1)
    ctx->pc = 0x1907fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_190800:
    // 0x190800: 0xae0300d8  sw          $v1, 0xD8($s0)
    ctx->pc = 0x190800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 3));
label_190804:
    // 0x190804: 0x8e2300dc  lw          $v1, 0xDC($s1)
    ctx->pc = 0x190804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_190808:
    // 0x190808: 0xae0300dc  sw          $v1, 0xDC($s0)
    ctx->pc = 0x190808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 3));
label_19080c:
    // 0x19080c: 0x8e2300e0  lw          $v1, 0xE0($s1)
    ctx->pc = 0x19080cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_190810:
    // 0x190810: 0xae0300e0  sw          $v1, 0xE0($s0)
    ctx->pc = 0x190810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
label_190814:
    // 0x190814: 0x962300e4  lhu         $v1, 0xE4($s1)
    ctx->pc = 0x190814u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 228)));
label_190818:
    // 0x190818: 0xa60300e4  sh          $v1, 0xE4($s0)
    ctx->pc = 0x190818u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 228), (uint16_t)GPR_U32(ctx, 3));
label_19081c:
    // 0x19081c: 0x8e2300e8  lw          $v1, 0xE8($s1)
    ctx->pc = 0x19081cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
label_190820:
    // 0x190820: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x190820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
label_190824:
    // 0x190824: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x190824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_190828:
    // 0x190828: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x190828u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19082c:
    // 0x19082c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19082cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_190830:
    // 0x190830: 0x3e00008  jr          $ra
label_190834:
    if (ctx->pc == 0x190834u) {
        ctx->pc = 0x190834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190830u;
        // 0x190834: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190838u;
        goto label_190838;
    }
    ctx->pc = 0x190830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190830u;
        // 0x190834: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190838u;
label_190838:
    // 0x190838: 0x0  nop
    ctx->pc = 0x190838u;
    // NOP
label_19083c:
    // 0x19083c: 0x0  nop
    ctx->pc = 0x19083cu;
    // NOP
label_190840:
    // 0x190840: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x190840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_190844:
    // 0x190844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_190848:
    // 0x190848: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x190848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_19084c:
    // 0x19084c: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x19084cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_190850:
    // 0x190850: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_190854:
    if (ctx->pc == 0x190854u) {
        ctx->pc = 0x190854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190850u;
        // 0x190854: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190858u;
        goto label_190858;
    }
    ctx->pc = 0x190850u;
    {
        const bool branch_taken_0x190850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190850u;
        // 0x190854: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190850) {
            ctx->pc = 0x190870u;
            goto label_190870;
        }
    }
    ctx->pc = 0x190858u;
label_190858:
    // 0x190858: 0xc064224  jal         func_190890
label_19085c:
    if (ctx->pc == 0x19085Cu) {
        ctx->pc = 0x19085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190858u;
        // 0x19085c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190860u;
        goto label_190860;
    }
    ctx->pc = 0x190858u;
    SET_GPR_U32(ctx, 31, 0x190860u);
    ctx->pc = 0x19085Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190858u;
    // 0x19085c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190890u;
    goto label_190890;
    ctx->pc = 0x190860u;
label_190860:
    // 0x190860: 0xc064224  jal         func_190890
label_190864:
    if (ctx->pc == 0x190864u) {
        ctx->pc = 0x190864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190860u;
        // 0x190864: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190868u;
        goto label_190868;
    }
    ctx->pc = 0x190860u;
    SET_GPR_U32(ctx, 31, 0x190868u);
    ctx->pc = 0x190864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190860u;
    // 0x190864: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190890u;
    goto label_190890;
    ctx->pc = 0x190868u;
label_190868:
    // 0x190868: 0x10000004  b           . + 4 + (0x4 << 2)
label_19086c:
    if (ctx->pc == 0x19086Cu) {
        ctx->pc = 0x19086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190868u;
        // 0x19086c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190870u;
        goto label_190870;
    }
    ctx->pc = 0x190868u;
    {
        const bool branch_taken_0x190868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190868u;
        // 0x19086c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190868) {
            ctx->pc = 0x19087Cu;
            goto label_19087c;
        }
    }
    ctx->pc = 0x190870u;
label_190870:
    // 0x190870: 0xc064224  jal         func_190890
label_190874:
    if (ctx->pc == 0x190874u) {
        ctx->pc = 0x190878u;
        goto label_190878;
    }
    ctx->pc = 0x190870u;
    SET_GPR_U32(ctx, 31, 0x190878u);
    ctx->pc = 0x190890u;
    goto label_190890;
    ctx->pc = 0x190878u;
label_190878:
    // 0x190878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19087c:
    // 0x19087c: 0x3e00008  jr          $ra
label_190880:
    if (ctx->pc == 0x190880u) {
        ctx->pc = 0x190880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19087Cu;
        // 0x190880: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190884u;
        goto label_190884;
    }
    ctx->pc = 0x19087Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19087Cu;
        // 0x190880: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19087Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190884u;
label_190884:
    // 0x190884: 0x0  nop
    ctx->pc = 0x190884u;
    // NOP
label_190888:
    // 0x190888: 0x0  nop
    ctx->pc = 0x190888u;
    // NOP
label_19088c:
    // 0x19088c: 0x0  nop
    ctx->pc = 0x19088cu;
    // NOP
label_190890:
    // 0x190890: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x190890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_190894:
    // 0x190894: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x190894u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_190898:
    // 0x190898: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x190898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_19089c:
    // 0x19089c: 0x278281e8  addiu       $v0, $gp, -0x7E18
    ctx->pc = 0x19089cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935016));
label_1908a0:
    // 0x1908a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1908a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1908a4:
    // 0x1908a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1908a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1908a8:
    // 0x1908a8: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x1908a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1908ac:
    // 0x1908ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1908acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1908b0:
    // 0x1908b0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1908b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1908b4:
    // 0x1908b4: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x1908b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_1908b8:
    // 0x1908b8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1908bc:
    if (ctx->pc == 0x1908BCu) {
        ctx->pc = 0x1908BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1908B8u;
        // 0x1908bc: 0x41100  sll         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1908C0u;
        goto label_1908c0;
    }
    ctx->pc = 0x1908B8u;
    {
        const bool branch_taken_0x1908b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1908BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1908B8u;
        // 0x1908bc: 0x41100  sll         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1908b8) {
            ctx->pc = 0x1908CCu;
            goto label_1908cc;
        }
    }
    ctx->pc = 0x1908C0u;
label_1908c0:
    // 0x1908c0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1908c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1908c4:
    // 0x1908c4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1908c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1908c8:
    // 0x1908c8: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1908c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1908cc:
    // 0x1908cc: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x1908ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_1908d0:
    // 0x1908d0: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x1908d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1908d4:
    // 0x1908d4: 0x24a52cc0  addiu       $a1, $a1, 0x2CC0
    ctx->pc = 0x1908d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11456));
label_1908d8:
    // 0x1908d8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1908d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1908dc:
    // 0x1908dc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1908dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1908e0:
    // 0x1908e0: 0xa48021  addu        $s0, $a1, $a0
    ctx->pc = 0x1908e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1908e4:
    // 0x1908e4: 0x24429d40  addiu       $v0, $v0, -0x62C0
    ctx->pc = 0x1908e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942016));
label_1908e8:
    // 0x1908e8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1908e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1908ec:
    // 0x1908ec: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1908ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_1908f0:
    // 0x1908f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1908f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1908f4:
    // 0x1908f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1908f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1908f8:
    // 0x1908f8: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1908f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1908fc:
    // 0x1908fc: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1908fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_190900:
    // 0x190900: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x190900u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_190904:
    // 0x190904: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x190904u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_190908:
    // 0x190908: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x190908u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19090c:
    // 0x19090c: 0xc066e26  jal         func_19B898
label_190910:
    if (ctx->pc == 0x190910u) {
        ctx->pc = 0x190910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19090Cu;
        // 0x190910: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190914u;
        goto label_190914;
    }
    ctx->pc = 0x19090Cu;
    SET_GPR_U32(ctx, 31, 0x190914u);
    ctx->pc = 0x190910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19090Cu;
    // 0x190910: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x190914u;
label_190914:
    // 0x190914: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x190914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_190918:
    // 0x190918: 0xc066e26  jal         func_19B898
label_19091c:
    if (ctx->pc == 0x19091Cu) {
        ctx->pc = 0x19091Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190918u;
        // 0x19091c: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190920u;
        goto label_190920;
    }
    ctx->pc = 0x190918u;
    SET_GPR_U32(ctx, 31, 0x190920u);
    ctx->pc = 0x19091Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190918u;
    // 0x19091c: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x190920u;
label_190920:
    // 0x190920: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x190920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_190924:
    // 0x190924: 0xc066e26  jal         func_19B898
label_190928:
    if (ctx->pc == 0x190928u) {
        ctx->pc = 0x190928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190924u;
        // 0x190928: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19092Cu;
        goto label_19092c;
    }
    ctx->pc = 0x190924u;
    SET_GPR_U32(ctx, 31, 0x19092Cu);
    ctx->pc = 0x190928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190924u;
    // 0x190928: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x19092Cu;
label_19092c:
    // 0x19092c: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x19092cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_190930:
    // 0x190930: 0xc066e26  jal         func_19B898
label_190934:
    if (ctx->pc == 0x190934u) {
        ctx->pc = 0x190934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190930u;
        // 0x190934: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190938u;
        goto label_190938;
    }
    ctx->pc = 0x190930u;
    SET_GPR_U32(ctx, 31, 0x190938u);
    ctx->pc = 0x190934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190930u;
    // 0x190934: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x190938u;
label_190938:
    // 0x190938: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x190938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_19093c:
    // 0x19093c: 0xc066e26  jal         func_19B898
label_190940:
    if (ctx->pc == 0x190940u) {
        ctx->pc = 0x190940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19093Cu;
        // 0x190940: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190944u;
        goto label_190944;
    }
    ctx->pc = 0x19093Cu;
    SET_GPR_U32(ctx, 31, 0x190944u);
    ctx->pc = 0x190940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19093Cu;
    // 0x190940: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x190944u;
label_190944:
    // 0x190944: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x190944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_190948:
    // 0x190948: 0xc066e26  jal         func_19B898
label_19094c:
    if (ctx->pc == 0x19094Cu) {
        ctx->pc = 0x19094Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190948u;
        // 0x19094c: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190950u;
        goto label_190950;
    }
    ctx->pc = 0x190948u;
    SET_GPR_U32(ctx, 31, 0x190950u);
    ctx->pc = 0x19094Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190948u;
    // 0x19094c: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x190950u;
label_190950:
    // 0x190950: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x190950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_190954:
    // 0x190954: 0xc066e26  jal         func_19B898
label_190958:
    if (ctx->pc == 0x190958u) {
        ctx->pc = 0x190958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190954u;
        // 0x190958: 0x26050060  addiu       $a1, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19095Cu;
        goto label_19095c;
    }
    ctx->pc = 0x190954u;
    SET_GPR_U32(ctx, 31, 0x19095Cu);
    ctx->pc = 0x190958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190954u;
    // 0x190958: 0x26050060  addiu       $a1, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x19095Cu;
label_19095c:
    // 0x19095c: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x19095cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_190960:
    // 0x190960: 0xc066e26  jal         func_19B898
label_190964:
    if (ctx->pc == 0x190964u) {
        ctx->pc = 0x190964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190960u;
        // 0x190964: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190968u;
        goto label_190968;
    }
    ctx->pc = 0x190960u;
    SET_GPR_U32(ctx, 31, 0x190968u);
    ctx->pc = 0x190964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190960u;
    // 0x190964: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x190968u;
label_190968:
    // 0x190968: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x190968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_19096c:
    // 0x19096c: 0xc066e26  jal         func_19B898
label_190970:
    if (ctx->pc == 0x190970u) {
        ctx->pc = 0x190970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19096Cu;
        // 0x190970: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190974u;
        goto label_190974;
    }
    ctx->pc = 0x19096Cu;
    SET_GPR_U32(ctx, 31, 0x190974u);
    ctx->pc = 0x190970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19096Cu;
    // 0x190970: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x190974u;
label_190974:
    // 0x190974: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x190974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190978:
    // 0x190978: 0xe6200090  swc1        $f0, 0x90($s1)
    ctx->pc = 0x190978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
label_19097c:
    // 0x19097c: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x19097cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190980:
    // 0x190980: 0xe6200094  swc1        $f0, 0x94($s1)
    ctx->pc = 0x190980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
label_190984:
    // 0x190984: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x190984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190988:
    // 0x190988: 0xe6200098  swc1        $f0, 0x98($s1)
    ctx->pc = 0x190988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
label_19098c:
    // 0x19098c: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x19098cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190990:
    // 0x190990: 0xe620009c  swc1        $f0, 0x9C($s1)
    ctx->pc = 0x190990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 156), bits); }
label_190994:
    // 0x190994: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x190994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_190998:
    // 0x190998: 0xae2300a0  sw          $v1, 0xA0($s1)
    ctx->pc = 0x190998u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 3));
label_19099c:
    // 0x19099c: 0x8e0300a4  lw          $v1, 0xA4($s0)
    ctx->pc = 0x19099cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_1909a0:
    // 0x1909a0: 0xae2300a4  sw          $v1, 0xA4($s1)
    ctx->pc = 0x1909a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 3));
label_1909a4:
    // 0x1909a4: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x1909a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_1909a8:
    // 0x1909a8: 0xae2300a8  sw          $v1, 0xA8($s1)
    ctx->pc = 0x1909a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 3));
label_1909ac:
    // 0x1909ac: 0x8e0300ac  lw          $v1, 0xAC($s0)
    ctx->pc = 0x1909acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
label_1909b0:
    // 0x1909b0: 0xae2300ac  sw          $v1, 0xAC($s1)
    ctx->pc = 0x1909b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 3));
label_1909b4:
    // 0x1909b4: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x1909b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_1909b8:
    // 0x1909b8: 0xae2300b0  sw          $v1, 0xB0($s1)
    ctx->pc = 0x1909b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 3));
label_1909bc:
    // 0x1909bc: 0xc60000b4  lwc1        $f0, 0xB4($s0)
    ctx->pc = 0x1909bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1909c0:
    // 0x1909c0: 0xe62000b4  swc1        $f0, 0xB4($s1)
    ctx->pc = 0x1909c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 180), bits); }
label_1909c4:
    // 0x1909c4: 0xc60000b8  lwc1        $f0, 0xB8($s0)
    ctx->pc = 0x1909c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1909c8:
    // 0x1909c8: 0xe62000b8  swc1        $f0, 0xB8($s1)
    ctx->pc = 0x1909c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 184), bits); }
label_1909cc:
    // 0x1909cc: 0xc60000bc  lwc1        $f0, 0xBC($s0)
    ctx->pc = 0x1909ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1909d0:
    // 0x1909d0: 0xe62000bc  swc1        $f0, 0xBC($s1)
    ctx->pc = 0x1909d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 188), bits); }
label_1909d4:
    // 0x1909d4: 0xc60000c0  lwc1        $f0, 0xC0($s0)
    ctx->pc = 0x1909d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1909d8:
    // 0x1909d8: 0xe62000c0  swc1        $f0, 0xC0($s1)
    ctx->pc = 0x1909d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
label_1909dc:
    // 0x1909dc: 0xc60000c4  lwc1        $f0, 0xC4($s0)
    ctx->pc = 0x1909dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1909e0:
    // 0x1909e0: 0xe62000c4  swc1        $f0, 0xC4($s1)
    ctx->pc = 0x1909e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 196), bits); }
label_1909e4:
    // 0x1909e4: 0xc60000c8  lwc1        $f0, 0xC8($s0)
    ctx->pc = 0x1909e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1909e8:
    // 0x1909e8: 0xe62000c8  swc1        $f0, 0xC8($s1)
    ctx->pc = 0x1909e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 200), bits); }
label_1909ec:
    // 0x1909ec: 0x8e0300cc  lw          $v1, 0xCC($s0)
    ctx->pc = 0x1909ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_1909f0:
    // 0x1909f0: 0xae2300cc  sw          $v1, 0xCC($s1)
    ctx->pc = 0x1909f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 3));
label_1909f4:
    // 0x1909f4: 0x8e0300d0  lw          $v1, 0xD0($s0)
    ctx->pc = 0x1909f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_1909f8:
    // 0x1909f8: 0xae2300d0  sw          $v1, 0xD0($s1)
    ctx->pc = 0x1909f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 3));
label_1909fc:
    // 0x1909fc: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x1909fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_190a00:
    // 0x190a00: 0xae2300d4  sw          $v1, 0xD4($s1)
    ctx->pc = 0x190a00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 3));
label_190a04:
    // 0x190a04: 0x8e0300d8  lw          $v1, 0xD8($s0)
    ctx->pc = 0x190a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_190a08:
    // 0x190a08: 0xae2300d8  sw          $v1, 0xD8($s1)
    ctx->pc = 0x190a08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 3));
label_190a0c:
    // 0x190a0c: 0x8e0300dc  lw          $v1, 0xDC($s0)
    ctx->pc = 0x190a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_190a10:
    // 0x190a10: 0xae2300dc  sw          $v1, 0xDC($s1)
    ctx->pc = 0x190a10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 3));
label_190a14:
    // 0x190a14: 0x8e0300e0  lw          $v1, 0xE0($s0)
    ctx->pc = 0x190a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_190a18:
    // 0x190a18: 0xae2300e0  sw          $v1, 0xE0($s1)
    ctx->pc = 0x190a18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 3));
label_190a1c:
    // 0x190a1c: 0x960300e4  lhu         $v1, 0xE4($s0)
    ctx->pc = 0x190a1cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 228)));
label_190a20:
    // 0x190a20: 0xa62300e4  sh          $v1, 0xE4($s1)
    ctx->pc = 0x190a20u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 228), (uint16_t)GPR_U32(ctx, 3));
label_190a24:
    // 0x190a24: 0x8e0300e8  lw          $v1, 0xE8($s0)
    ctx->pc = 0x190a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
label_190a28:
    // 0x190a28: 0xae2300e8  sw          $v1, 0xE8($s1)
    ctx->pc = 0x190a28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 3));
label_190a2c:
    // 0x190a2c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x190a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_190a30:
    // 0x190a30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x190a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_190a34:
    // 0x190a34: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x190a34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_190a38:
    // 0x190a38: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x190a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_190a3c:
    // 0x190a3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x190a3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_190a40:
    // 0x190a40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x190a40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_190a44:
    // 0x190a44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x190a44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_190a48:
    // 0x190a48: 0x3e00008  jr          $ra
label_190a4c:
    if (ctx->pc == 0x190A4Cu) {
        ctx->pc = 0x190A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A48u;
        // 0x190a4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190A50u;
        goto label_190a50;
    }
    ctx->pc = 0x190A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A48u;
        // 0x190a4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190A50u;
label_190a50:
    // 0x190a50: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x190a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_190a54:
    // 0x190a54: 0x3c023da3  lui         $v0, 0x3DA3
    ctx->pc = 0x190a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15779 << 16));
label_190a58:
    // 0x190a58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x190a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_190a5c:
    // 0x190a5c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x190a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_190a60:
    // 0x190a60: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x190a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_190a64:
    // 0x190a64: 0x3c03424c  lui         $v1, 0x424C
    ctx->pc = 0x190a64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16972 << 16));
label_190a68:
    // 0x190a68: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x190a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_190a6c:
    // 0x190a6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x190a6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_190a70:
    // 0x190a70: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x190a70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_190a74:
    // 0x190a74: 0x3463cccc  ori         $v1, $v1, 0xCCCC
    ctx->pc = 0x190a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52428);
label_190a78:
    // 0x190a78: 0xc48000c4  lwc1        $f0, 0xC4($a0)
    ctx->pc = 0x190a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190a7c:
    // 0x190a7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x190a7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_190a80:
    // 0x190a80: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x190a80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_190a84:
    // 0x190a84: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x190a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_190a88:
    // 0x190a88: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x190a88u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_190a8c:
    // 0x190a8c: 0xc066e14  jal         func_19B850
label_190a90:
    if (ctx->pc == 0x190A90u) {
        ctx->pc = 0x190A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A8Cu;
        // 0x190a90: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190A94u;
        goto label_190a94;
    }
    ctx->pc = 0x190A8Cu;
    SET_GPR_U32(ctx, 31, 0x190A94u);
    ctx->pc = 0x190A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190A8Cu;
    // 0x190a90: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x190A94u;
label_190a94:
    // 0x190a94: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x190a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_190a98:
    // 0x190a98: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x190a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_190a9c:
    // 0x190a9c: 0xc066e02  jal         func_19B808
label_190aa0:
    if (ctx->pc == 0x190AA0u) {
        ctx->pc = 0x190AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A9Cu;
        // 0x190aa0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190AA4u;
        goto label_190aa4;
    }
    ctx->pc = 0x190A9Cu;
    SET_GPR_U32(ctx, 31, 0x190AA4u);
    ctx->pc = 0x190AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190A9Cu;
    // 0x190aa0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x190AA4u;
label_190aa4:
    // 0x190aa4: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x190aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_190aa8:
    // 0x190aa8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x190aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_190aac:
    // 0x190aac: 0x24a52cc0  addiu       $a1, $a1, 0x2CC0
    ctx->pc = 0x190aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11456));
label_190ab0:
    // 0x190ab0: 0xc066d98  jal         func_19B660
label_190ab4:
    if (ctx->pc == 0x190AB4u) {
        ctx->pc = 0x190AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190AB0u;
        // 0x190ab4: 0x24a60010  addiu       $a2, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190AB8u;
        goto label_190ab8;
    }
    ctx->pc = 0x190AB0u;
    SET_GPR_U32(ctx, 31, 0x190AB8u);
    ctx->pc = 0x190AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190AB0u;
    // 0x190ab4: 0x24a60010  addiu       $a2, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B660u;
    { ctx->pc = 0x19b660; return; }
    ctx->pc = 0x190AB8u;
label_190ab8:
    // 0x190ab8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x190ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_190abc:
    // 0x190abc: 0xc066daa  jal         func_19B6A8
label_190ac0:
    if (ctx->pc == 0x190AC0u) {
        ctx->pc = 0x190AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190ABCu;
        // 0x190ac0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190AC4u;
        goto label_190ac4;
    }
    ctx->pc = 0x190ABCu;
    SET_GPR_U32(ctx, 31, 0x190AC4u);
    ctx->pc = 0x190AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190ABCu;
    // 0x190ac0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    { ctx->pc = 0x19b6a8; return; }
    ctx->pc = 0x190AC4u;
label_190ac4:
    // 0x190ac4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x190ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_190ac8:
    // 0x190ac8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x190ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_190acc:
    // 0x190acc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x190accu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_190ad0:
    // 0x190ad0: 0xc066e14  jal         func_19B850
label_190ad4:
    if (ctx->pc == 0x190AD4u) {
        ctx->pc = 0x190AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190AD0u;
        // 0x190ad4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190AD8u;
        goto label_190ad8;
    }
    ctx->pc = 0x190AD0u;
    SET_GPR_U32(ctx, 31, 0x190AD8u);
    ctx->pc = 0x190AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190AD0u;
    // 0x190ad4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x190AD8u;
label_190ad8:
    // 0x190ad8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x190ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_190adc:
    // 0x190adc: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x190adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_190ae0:
    // 0x190ae0: 0xc066e14  jal         func_19B850
label_190ae4:
    if (ctx->pc == 0x190AE4u) {
        ctx->pc = 0x190AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190AE0u;
        // 0x190ae4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x190AE8u;
        goto label_190ae8;
    }
    ctx->pc = 0x190AE0u;
    SET_GPR_U32(ctx, 31, 0x190AE8u);
    ctx->pc = 0x190AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190AE0u;
    // 0x190ae4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x190AE8u;
label_190ae8:
    // 0x190ae8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x190ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_190aec:
    // 0x190aec: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x190aecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_190af0:
    // 0x190af0: 0xc066e02  jal         func_19B808
label_190af4:
    if (ctx->pc == 0x190AF4u) {
        ctx->pc = 0x190AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190AF0u;
        // 0x190af4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190AF8u;
        goto label_190af8;
    }
    ctx->pc = 0x190AF0u;
    SET_GPR_U32(ctx, 31, 0x190AF8u);
    ctx->pc = 0x190AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190AF0u;
    // 0x190af4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x190AF8u;
label_190af8:
    // 0x190af8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x190af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_190afc:
    // 0x190afc: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x190afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_190b00:
    // 0x190b00: 0xc066e14  jal         func_19B850
label_190b04:
    if (ctx->pc == 0x190B04u) {
        ctx->pc = 0x190B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190B00u;
        // 0x190b04: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x190B08u;
        goto label_190b08;
    }
    ctx->pc = 0x190B00u;
    SET_GPR_U32(ctx, 31, 0x190B08u);
    ctx->pc = 0x190B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190B00u;
    // 0x190b04: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x190B08u;
label_190b08:
    // 0x190b08: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x190b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_190b0c:
    // 0x190b0c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x190b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_190b10:
    // 0x190b10: 0xc066e02  jal         func_19B808
label_190b14:
    if (ctx->pc == 0x190B14u) {
        ctx->pc = 0x190B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190B10u;
        // 0x190b14: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190B18u;
        goto label_190b18;
    }
    ctx->pc = 0x190B10u;
    SET_GPR_U32(ctx, 31, 0x190B18u);
    ctx->pc = 0x190B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190B10u;
    // 0x190b14: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x190B18u;
label_190b18:
    // 0x190b18: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x190b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_190b1c:
    // 0x190b1c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x190b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_190b20:
    // 0x190b20: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x190b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_190b24:
    // 0x190b24: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x190b24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_190b28:
    // 0x190b28: 0xc064978  jal         func_1925E0
label_190b2c:
    if (ctx->pc == 0x190B2Cu) {
        ctx->pc = 0x190B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190B28u;
        // 0x190b2c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190B30u;
        goto label_190b30;
    }
    ctx->pc = 0x190B28u;
    SET_GPR_U32(ctx, 31, 0x190B30u);
    ctx->pc = 0x190B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190B28u;
    // 0x190b2c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1925E0u;
    { ctx->pc = 0x1925e0; return; }
    ctx->pc = 0x190B30u;
label_190b30:
    // 0x190b30: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x190b30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_190b34:
    // 0x190b34: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x190b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_190b38:
    // 0x190b38: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x190b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_190b3c:
    // 0x190b3c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x190b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_190b40:
    // 0x190b40: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x190b40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_190b44:
    // 0x190b44: 0xc064978  jal         func_1925E0
label_190b48:
    if (ctx->pc == 0x190B48u) {
        ctx->pc = 0x190B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190B44u;
        // 0x190b48: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190B4Cu;
        goto label_190b4c;
    }
    ctx->pc = 0x190B44u;
    SET_GPR_U32(ctx, 31, 0x190B4Cu);
    ctx->pc = 0x190B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190B44u;
    // 0x190b48: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1925E0u;
    { ctx->pc = 0x1925e0; return; }
    ctx->pc = 0x190B4Cu;
label_190b4c:
    // 0x190b4c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_190b50:
    if (ctx->pc == 0x190B50u) {
        ctx->pc = 0x190B54u;
        goto label_190b54;
    }
    ctx->pc = 0x190B4Cu;
    {
        const bool branch_taken_0x190b4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x190b4c) {
            ctx->pc = 0x190B5Cu;
            goto label_190b5c;
        }
    }
    ctx->pc = 0x190B54u;
label_190b54:
    // 0x190b54: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
label_190b58:
    if (ctx->pc == 0x190B58u) {
        ctx->pc = 0x190B5Cu;
        goto label_190b5c;
    }
    ctx->pc = 0x190B54u;
    {
        const bool branch_taken_0x190b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190b54) {
            ctx->pc = 0x190C6Cu;
            goto label_190c6c;
        }
    }
    ctx->pc = 0x190B5Cu;
label_190b5c:
    // 0x190b5c: 0x12200022  beqz        $s1, . + 4 + (0x22 << 2)
label_190b60:
    if (ctx->pc == 0x190B60u) {
        ctx->pc = 0x190B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190B5Cu;
        // 0x190b60: 0x27a30040  addiu       $v1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190B64u;
        goto label_190b64;
    }
    ctx->pc = 0x190B5Cu;
    {
        const bool branch_taken_0x190b5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x190B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190B5Cu;
        // 0x190b60: 0x27a30040  addiu       $v1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190b5c) {
            ctx->pc = 0x190BE8u;
            goto label_190be8;
        }
    }
    ctx->pc = 0x190B64u;
label_190b64:
    // 0x190b64: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x190b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_190b68:
    // 0x190b68: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x190b68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_190b6c:
    // 0x190b6c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x190b6cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_190b70:
    // 0x190b70: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x190b70u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_190b74:
    // 0x190b74: 0x4a0002ff  vnop
    ctx->pc = 0x190b74u;
    // NOP operation, no action needed for VU0
label_190b78:
    // 0x190b78: 0x4a0002ff  vnop
    ctx->pc = 0x190b78u;
    // NOP operation, no action needed for VU0
label_190b7c:
    // 0x190b7c: 0x4a0002ff  vnop
    ctx->pc = 0x190b7cu;
    // NOP operation, no action needed for VU0
label_190b80:
    // 0x190b80: 0x4b03f959  vmuly.x     $vf5, $vf31, $vf3y
    ctx->pc = 0x190b80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_190b84:
    // 0x190b84: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x190b84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_190b88:
    // 0x190b88: 0x4a0002ff  vnop
    ctx->pc = 0x190b88u;
    // NOP operation, no action needed for VU0
label_190b8c:
    // 0x190b8c: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x190b8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_190b90:
    // 0x190b90: 0x4b0328bd  vmadday.x   $ACC, $vf5, $vf3y
    ctx->pc = 0x190b90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_190b94:
    // 0x190b94: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x190b94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_190b98:
    // 0x190b98: 0x4a0002ff  vnop
    ctx->pc = 0x190b98u;
    // NOP operation, no action needed for VU0
label_190b9c:
    // 0x190b9c: 0x4a0002ff  vnop
    ctx->pc = 0x190b9cu;
    // NOP operation, no action needed for VU0
label_190ba0:
    // 0x190ba0: 0x4a0002ff  vnop
    ctx->pc = 0x190ba0u;
    // NOP operation, no action needed for VU0
label_190ba4:
    // 0x190ba4: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x190ba4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_190ba8:
    // 0x190ba8: 0x4a0003bf  vwaitq
    ctx->pc = 0x190ba8u;
    // VWAITQ (Q already resolved in this runtime)
label_190bac:
    // 0x190bac: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x190bacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_190bb0:
    // 0x190bb0: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x190bb0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_190bb4:
    // 0x190bb4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x190bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_190bb8:
    // 0x190bb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190bb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_190bbc:
    // 0x190bbc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x190bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_190bc0:
    // 0x190bc0: 0x4601a041  sub.s       $f1, $f20, $f1
    ctx->pc = 0x190bc0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_190bc4:
    // 0x190bc4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x190bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_190bc8:
    // 0x190bc8: 0xc066e14  jal         func_19B850
label_190bcc:
    if (ctx->pc == 0x190BCCu) {
        ctx->pc = 0x190BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190BC8u;
        // 0x190bcc: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x190BD0u;
        goto label_190bd0;
    }
    ctx->pc = 0x190BC8u;
    SET_GPR_U32(ctx, 31, 0x190BD0u);
    ctx->pc = 0x190BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190BC8u;
    // 0x190bcc: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x190BD0u;
label_190bd0:
    // 0x190bd0: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x190bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_190bd4:
    // 0x190bd4: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x190bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_190bd8:
    // 0x190bd8: 0xc066e02  jal         func_19B808
label_190bdc:
    if (ctx->pc == 0x190BDCu) {
        ctx->pc = 0x190BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190BD8u;
        // 0x190bdc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190BE0u;
        goto label_190be0;
    }
    ctx->pc = 0x190BD8u;
    SET_GPR_U32(ctx, 31, 0x190BE0u);
    ctx->pc = 0x190BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190BD8u;
    // 0x190bdc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x190BE0u;
label_190be0:
    // 0x190be0: 0x10000023  b           . + 4 + (0x23 << 2)
label_190be4:
    if (ctx->pc == 0x190BE4u) {
        ctx->pc = 0x190BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190BE0u;
        // 0x190be4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190BE8u;
        goto label_190be8;
    }
    ctx->pc = 0x190BE0u;
    {
        const bool branch_taken_0x190be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190BE0u;
        // 0x190be4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190be0) {
            ctx->pc = 0x190C70u;
            goto label_190c70;
        }
    }
    ctx->pc = 0x190BE8u;
label_190be8:
    // 0x190be8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_190bec:
    if (ctx->pc == 0x190BECu) {
        ctx->pc = 0x190BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190BE8u;
        // 0x190bec: 0x27a30040  addiu       $v1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190BF0u;
        goto label_190bf0;
    }
    ctx->pc = 0x190BE8u;
    {
        const bool branch_taken_0x190be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190BE8u;
        // 0x190bec: 0x27a30040  addiu       $v1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190be8) {
            ctx->pc = 0x190C6Cu;
            goto label_190c6c;
        }
    }
    ctx->pc = 0x190BF0u;
label_190bf0:
    // 0x190bf0: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x190bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_190bf4:
    // 0x190bf4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x190bf4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_190bf8:
    // 0x190bf8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x190bf8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_190bfc:
    // 0x190bfc: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x190bfcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_190c00:
    // 0x190c00: 0x4a0002ff  vnop
    ctx->pc = 0x190c00u;
    // NOP operation, no action needed for VU0
label_190c04:
    // 0x190c04: 0x4a0002ff  vnop
    ctx->pc = 0x190c04u;
    // NOP operation, no action needed for VU0
label_190c08:
    // 0x190c08: 0x4a0002ff  vnop
    ctx->pc = 0x190c08u;
    // NOP operation, no action needed for VU0
label_190c0c:
    // 0x190c0c: 0x4b03f959  vmuly.x     $vf5, $vf31, $vf3y
    ctx->pc = 0x190c0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_190c10:
    // 0x190c10: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x190c10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_190c14:
    // 0x190c14: 0x4a0002ff  vnop
    ctx->pc = 0x190c14u;
    // NOP operation, no action needed for VU0
label_190c18:
    // 0x190c18: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x190c18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_190c1c:
    // 0x190c1c: 0x4b0328bd  vmadday.x   $ACC, $vf5, $vf3y
    ctx->pc = 0x190c1cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_190c20:
    // 0x190c20: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x190c20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_190c24:
    // 0x190c24: 0x4a0002ff  vnop
    ctx->pc = 0x190c24u;
    // NOP operation, no action needed for VU0
label_190c28:
    // 0x190c28: 0x4a0002ff  vnop
    ctx->pc = 0x190c28u;
    // NOP operation, no action needed for VU0
label_190c2c:
    // 0x190c2c: 0x4a0002ff  vnop
    ctx->pc = 0x190c2cu;
    // NOP operation, no action needed for VU0
label_190c30:
    // 0x190c30: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x190c30u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_190c34:
    // 0x190c34: 0x4a0003bf  vwaitq
    ctx->pc = 0x190c34u;
    // VWAITQ (Q already resolved in this runtime)
label_190c38:
    // 0x190c38: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x190c38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_190c3c:
    // 0x190c3c: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x190c3cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_190c40:
    // 0x190c40: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x190c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_190c44:
    // 0x190c44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190c44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_190c48:
    // 0x190c48: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x190c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_190c4c:
    // 0x190c4c: 0x4601a041  sub.s       $f1, $f20, $f1
    ctx->pc = 0x190c4cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_190c50:
    // 0x190c50: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x190c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_190c54:
    // 0x190c54: 0xc066e14  jal         func_19B850
label_190c58:
    if (ctx->pc == 0x190C58u) {
        ctx->pc = 0x190C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190C54u;
        // 0x190c58: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x190C5Cu;
        goto label_190c5c;
    }
    ctx->pc = 0x190C54u;
    SET_GPR_U32(ctx, 31, 0x190C5Cu);
    ctx->pc = 0x190C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190C54u;
    // 0x190c58: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x190C5Cu;
label_190c5c:
    // 0x190c5c: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x190c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_190c60:
    // 0x190c60: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x190c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_190c64:
    // 0x190c64: 0xc066e02  jal         func_19B808
label_190c68:
    if (ctx->pc == 0x190C68u) {
        ctx->pc = 0x190C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190C64u;
        // 0x190c68: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190C6Cu;
        goto label_190c6c;
    }
    ctx->pc = 0x190C64u;
    SET_GPR_U32(ctx, 31, 0x190C6Cu);
    ctx->pc = 0x190C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190C64u;
    // 0x190c68: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x190C6Cu;
label_190c6c:
    // 0x190c6c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x190c6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_190c70:
    // 0x190c70: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x190c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_190c74:
    // 0x190c74: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x190c74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_190c78:
    // 0x190c78: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x190c78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_190c7c:
    // 0x190c7c: 0x3e00008  jr          $ra
label_190c80:
    if (ctx->pc == 0x190C80u) {
        ctx->pc = 0x190C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190C7Cu;
        // 0x190c80: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190C84u;
        goto label_190c84;
    }
    ctx->pc = 0x190C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190C7Cu;
        // 0x190c80: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190C84u;
label_190c84:
    // 0x190c84: 0x0  nop
    ctx->pc = 0x190c84u;
    // NOP
label_190c88:
    // 0x190c88: 0x0  nop
    ctx->pc = 0x190c88u;
    // NOP
label_190c8c:
    // 0x190c8c: 0x0  nop
    ctx->pc = 0x190c8cu;
    // NOP
    ctx->pc = 0x190c90u;
    return;
}
