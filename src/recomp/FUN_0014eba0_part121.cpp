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


void FUN_0014eba0_part121(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x189520u: goto label_189520;
        case 0x189524u: goto label_189524;
        case 0x189528u: goto label_189528;
        case 0x18952cu: goto label_18952c;
        case 0x189530u: goto label_189530;
        case 0x189534u: goto label_189534;
        case 0x189538u: goto label_189538;
        case 0x18953cu: goto label_18953c;
        case 0x189540u: goto label_189540;
        case 0x189544u: goto label_189544;
        case 0x189548u: goto label_189548;
        case 0x18954cu: goto label_18954c;
        case 0x189550u: goto label_189550;
        case 0x189554u: goto label_189554;
        case 0x189558u: goto label_189558;
        case 0x18955cu: goto label_18955c;
        case 0x189560u: goto label_189560;
        case 0x189564u: goto label_189564;
        case 0x189568u: goto label_189568;
        case 0x18956cu: goto label_18956c;
        case 0x189570u: goto label_189570;
        case 0x189574u: goto label_189574;
        case 0x189578u: goto label_189578;
        case 0x18957cu: goto label_18957c;
        case 0x189580u: goto label_189580;
        case 0x189584u: goto label_189584;
        case 0x189588u: goto label_189588;
        case 0x18958cu: goto label_18958c;
        case 0x189590u: goto label_189590;
        case 0x189594u: goto label_189594;
        case 0x189598u: goto label_189598;
        case 0x18959cu: goto label_18959c;
        case 0x1895a0u: goto label_1895a0;
        case 0x1895a4u: goto label_1895a4;
        case 0x1895a8u: goto label_1895a8;
        case 0x1895acu: goto label_1895ac;
        case 0x1895b0u: goto label_1895b0;
        case 0x1895b4u: goto label_1895b4;
        case 0x1895b8u: goto label_1895b8;
        case 0x1895bcu: goto label_1895bc;
        case 0x1895c0u: goto label_1895c0;
        case 0x1895c4u: goto label_1895c4;
        case 0x1895c8u: goto label_1895c8;
        case 0x1895ccu: goto label_1895cc;
        case 0x1895d0u: goto label_1895d0;
        case 0x1895d4u: goto label_1895d4;
        case 0x1895d8u: goto label_1895d8;
        case 0x1895dcu: goto label_1895dc;
        case 0x1895e0u: goto label_1895e0;
        case 0x1895e4u: goto label_1895e4;
        case 0x1895e8u: goto label_1895e8;
        case 0x1895ecu: goto label_1895ec;
        case 0x1895f0u: goto label_1895f0;
        case 0x1895f4u: goto label_1895f4;
        case 0x1895f8u: goto label_1895f8;
        case 0x1895fcu: goto label_1895fc;
        case 0x189600u: goto label_189600;
        case 0x189604u: goto label_189604;
        case 0x189608u: goto label_189608;
        case 0x18960cu: goto label_18960c;
        case 0x189610u: goto label_189610;
        case 0x189614u: goto label_189614;
        case 0x189618u: goto label_189618;
        case 0x18961cu: goto label_18961c;
        case 0x189620u: goto label_189620;
        case 0x189624u: goto label_189624;
        case 0x189628u: goto label_189628;
        case 0x18962cu: goto label_18962c;
        case 0x189630u: goto label_189630;
        case 0x189634u: goto label_189634;
        case 0x189638u: goto label_189638;
        case 0x18963cu: goto label_18963c;
        case 0x189640u: goto label_189640;
        case 0x189644u: goto label_189644;
        case 0x189648u: goto label_189648;
        case 0x18964cu: goto label_18964c;
        case 0x189650u: goto label_189650;
        case 0x189654u: goto label_189654;
        case 0x189658u: goto label_189658;
        case 0x18965cu: goto label_18965c;
        case 0x189660u: goto label_189660;
        case 0x189664u: goto label_189664;
        case 0x189668u: goto label_189668;
        case 0x18966cu: goto label_18966c;
        case 0x189670u: goto label_189670;
        case 0x189674u: goto label_189674;
        case 0x189678u: goto label_189678;
        case 0x18967cu: goto label_18967c;
        case 0x189680u: goto label_189680;
        case 0x189684u: goto label_189684;
        case 0x189688u: goto label_189688;
        case 0x18968cu: goto label_18968c;
        case 0x189690u: goto label_189690;
        case 0x189694u: goto label_189694;
        case 0x189698u: goto label_189698;
        case 0x18969cu: goto label_18969c;
        case 0x1896a0u: goto label_1896a0;
        case 0x1896a4u: goto label_1896a4;
        case 0x1896a8u: goto label_1896a8;
        case 0x1896acu: goto label_1896ac;
        case 0x1896b0u: goto label_1896b0;
        case 0x1896b4u: goto label_1896b4;
        case 0x1896b8u: goto label_1896b8;
        case 0x1896bcu: goto label_1896bc;
        case 0x1896c0u: goto label_1896c0;
        case 0x1896c4u: goto label_1896c4;
        case 0x1896c8u: goto label_1896c8;
        case 0x1896ccu: goto label_1896cc;
        case 0x1896d0u: goto label_1896d0;
        case 0x1896d4u: goto label_1896d4;
        case 0x1896d8u: goto label_1896d8;
        case 0x1896dcu: goto label_1896dc;
        case 0x1896e0u: goto label_1896e0;
        case 0x1896e4u: goto label_1896e4;
        case 0x1896e8u: goto label_1896e8;
        case 0x1896ecu: goto label_1896ec;
        case 0x1896f0u: goto label_1896f0;
        case 0x1896f4u: goto label_1896f4;
        case 0x1896f8u: goto label_1896f8;
        case 0x1896fcu: goto label_1896fc;
        case 0x189700u: goto label_189700;
        case 0x189704u: goto label_189704;
        case 0x189708u: goto label_189708;
        case 0x18970cu: goto label_18970c;
        case 0x189710u: goto label_189710;
        case 0x189714u: goto label_189714;
        case 0x189718u: goto label_189718;
        case 0x18971cu: goto label_18971c;
        case 0x189720u: goto label_189720;
        case 0x189724u: goto label_189724;
        case 0x189728u: goto label_189728;
        case 0x18972cu: goto label_18972c;
        case 0x189730u: goto label_189730;
        case 0x189734u: goto label_189734;
        case 0x189738u: goto label_189738;
        case 0x18973cu: goto label_18973c;
        case 0x189740u: goto label_189740;
        case 0x189744u: goto label_189744;
        case 0x189748u: goto label_189748;
        case 0x18974cu: goto label_18974c;
        case 0x189750u: goto label_189750;
        case 0x189754u: goto label_189754;
        case 0x189758u: goto label_189758;
        case 0x18975cu: goto label_18975c;
        case 0x189760u: goto label_189760;
        case 0x189764u: goto label_189764;
        case 0x189768u: goto label_189768;
        case 0x18976cu: goto label_18976c;
        case 0x189770u: goto label_189770;
        case 0x189774u: goto label_189774;
        case 0x189778u: goto label_189778;
        case 0x18977cu: goto label_18977c;
        case 0x189780u: goto label_189780;
        case 0x189784u: goto label_189784;
        case 0x189788u: goto label_189788;
        case 0x18978cu: goto label_18978c;
        case 0x189790u: goto label_189790;
        case 0x189794u: goto label_189794;
        case 0x189798u: goto label_189798;
        case 0x18979cu: goto label_18979c;
        case 0x1897a0u: goto label_1897a0;
        case 0x1897a4u: goto label_1897a4;
        case 0x1897a8u: goto label_1897a8;
        case 0x1897acu: goto label_1897ac;
        case 0x1897b0u: goto label_1897b0;
        case 0x1897b4u: goto label_1897b4;
        case 0x1897b8u: goto label_1897b8;
        case 0x1897bcu: goto label_1897bc;
        case 0x1897c0u: goto label_1897c0;
        case 0x1897c4u: goto label_1897c4;
        case 0x1897c8u: goto label_1897c8;
        case 0x1897ccu: goto label_1897cc;
        case 0x1897d0u: goto label_1897d0;
        case 0x1897d4u: goto label_1897d4;
        case 0x1897d8u: goto label_1897d8;
        case 0x1897dcu: goto label_1897dc;
        case 0x1897e0u: goto label_1897e0;
        case 0x1897e4u: goto label_1897e4;
        case 0x1897e8u: goto label_1897e8;
        case 0x1897ecu: goto label_1897ec;
        case 0x1897f0u: goto label_1897f0;
        case 0x1897f4u: goto label_1897f4;
        case 0x1897f8u: goto label_1897f8;
        case 0x1897fcu: goto label_1897fc;
        case 0x189800u: goto label_189800;
        case 0x189804u: goto label_189804;
        case 0x189808u: goto label_189808;
        case 0x18980cu: goto label_18980c;
        case 0x189810u: goto label_189810;
        case 0x189814u: goto label_189814;
        case 0x189818u: goto label_189818;
        case 0x18981cu: goto label_18981c;
        case 0x189820u: goto label_189820;
        case 0x189824u: goto label_189824;
        case 0x189828u: goto label_189828;
        case 0x18982cu: goto label_18982c;
        case 0x189830u: goto label_189830;
        case 0x189834u: goto label_189834;
        case 0x189838u: goto label_189838;
        case 0x18983cu: goto label_18983c;
        case 0x189840u: goto label_189840;
        case 0x189844u: goto label_189844;
        case 0x189848u: goto label_189848;
        case 0x18984cu: goto label_18984c;
        case 0x189850u: goto label_189850;
        case 0x189854u: goto label_189854;
        case 0x189858u: goto label_189858;
        case 0x18985cu: goto label_18985c;
        case 0x189860u: goto label_189860;
        case 0x189864u: goto label_189864;
        case 0x189868u: goto label_189868;
        case 0x18986cu: goto label_18986c;
        case 0x189870u: goto label_189870;
        case 0x189874u: goto label_189874;
        case 0x189878u: goto label_189878;
        case 0x18987cu: goto label_18987c;
        case 0x189880u: goto label_189880;
        case 0x189884u: goto label_189884;
        case 0x189888u: goto label_189888;
        case 0x18988cu: goto label_18988c;
        case 0x189890u: goto label_189890;
        case 0x189894u: goto label_189894;
        case 0x189898u: goto label_189898;
        case 0x18989cu: goto label_18989c;
        case 0x1898a0u: goto label_1898a0;
        case 0x1898a4u: goto label_1898a4;
        case 0x1898a8u: goto label_1898a8;
        case 0x1898acu: goto label_1898ac;
        case 0x1898b0u: goto label_1898b0;
        case 0x1898b4u: goto label_1898b4;
        case 0x1898b8u: goto label_1898b8;
        case 0x1898bcu: goto label_1898bc;
        case 0x1898c0u: goto label_1898c0;
        case 0x1898c4u: goto label_1898c4;
        case 0x1898c8u: goto label_1898c8;
        case 0x1898ccu: goto label_1898cc;
        case 0x1898d0u: goto label_1898d0;
        case 0x1898d4u: goto label_1898d4;
        case 0x1898d8u: goto label_1898d8;
        case 0x1898dcu: goto label_1898dc;
        case 0x1898e0u: goto label_1898e0;
        case 0x1898e4u: goto label_1898e4;
        case 0x1898e8u: goto label_1898e8;
        case 0x1898ecu: goto label_1898ec;
        case 0x1898f0u: goto label_1898f0;
        case 0x1898f4u: goto label_1898f4;
        case 0x1898f8u: goto label_1898f8;
        case 0x1898fcu: goto label_1898fc;
        case 0x189900u: goto label_189900;
        case 0x189904u: goto label_189904;
        case 0x189908u: goto label_189908;
        case 0x18990cu: goto label_18990c;
        case 0x189910u: goto label_189910;
        case 0x189914u: goto label_189914;
        case 0x189918u: goto label_189918;
        case 0x18991cu: goto label_18991c;
        case 0x189920u: goto label_189920;
        case 0x189924u: goto label_189924;
        case 0x189928u: goto label_189928;
        case 0x18992cu: goto label_18992c;
        case 0x189930u: goto label_189930;
        case 0x189934u: goto label_189934;
        case 0x189938u: goto label_189938;
        case 0x18993cu: goto label_18993c;
        case 0x189940u: goto label_189940;
        case 0x189944u: goto label_189944;
        case 0x189948u: goto label_189948;
        case 0x18994cu: goto label_18994c;
        case 0x189950u: goto label_189950;
        case 0x189954u: goto label_189954;
        case 0x189958u: goto label_189958;
        case 0x18995cu: goto label_18995c;
        case 0x189960u: goto label_189960;
        case 0x189964u: goto label_189964;
        case 0x189968u: goto label_189968;
        case 0x18996cu: goto label_18996c;
        case 0x189970u: goto label_189970;
        case 0x189974u: goto label_189974;
        case 0x189978u: goto label_189978;
        case 0x18997cu: goto label_18997c;
        case 0x189980u: goto label_189980;
        case 0x189984u: goto label_189984;
        case 0x189988u: goto label_189988;
        case 0x18998cu: goto label_18998c;
        case 0x189990u: goto label_189990;
        case 0x189994u: goto label_189994;
        case 0x189998u: goto label_189998;
        case 0x18999cu: goto label_18999c;
        case 0x1899a0u: goto label_1899a0;
        case 0x1899a4u: goto label_1899a4;
        case 0x1899a8u: goto label_1899a8;
        case 0x1899acu: goto label_1899ac;
        case 0x1899b0u: goto label_1899b0;
        case 0x1899b4u: goto label_1899b4;
        case 0x1899b8u: goto label_1899b8;
        case 0x1899bcu: goto label_1899bc;
        case 0x1899c0u: goto label_1899c0;
        case 0x1899c4u: goto label_1899c4;
        case 0x1899c8u: goto label_1899c8;
        case 0x1899ccu: goto label_1899cc;
        case 0x1899d0u: goto label_1899d0;
        case 0x1899d4u: goto label_1899d4;
        case 0x1899d8u: goto label_1899d8;
        case 0x1899dcu: goto label_1899dc;
        case 0x1899e0u: goto label_1899e0;
        case 0x1899e4u: goto label_1899e4;
        case 0x1899e8u: goto label_1899e8;
        case 0x1899ecu: goto label_1899ec;
        case 0x1899f0u: goto label_1899f0;
        case 0x1899f4u: goto label_1899f4;
        case 0x1899f8u: goto label_1899f8;
        case 0x1899fcu: goto label_1899fc;
        case 0x189a00u: goto label_189a00;
        case 0x189a04u: goto label_189a04;
        case 0x189a08u: goto label_189a08;
        case 0x189a0cu: goto label_189a0c;
        case 0x189a10u: goto label_189a10;
        case 0x189a14u: goto label_189a14;
        case 0x189a18u: goto label_189a18;
        case 0x189a1cu: goto label_189a1c;
        case 0x189a20u: goto label_189a20;
        case 0x189a24u: goto label_189a24;
        case 0x189a28u: goto label_189a28;
        case 0x189a2cu: goto label_189a2c;
        case 0x189a30u: goto label_189a30;
        case 0x189a34u: goto label_189a34;
        case 0x189a38u: goto label_189a38;
        case 0x189a3cu: goto label_189a3c;
        case 0x189a40u: goto label_189a40;
        case 0x189a44u: goto label_189a44;
        case 0x189a48u: goto label_189a48;
        case 0x189a4cu: goto label_189a4c;
        case 0x189a50u: goto label_189a50;
        case 0x189a54u: goto label_189a54;
        case 0x189a58u: goto label_189a58;
        case 0x189a5cu: goto label_189a5c;
        case 0x189a60u: goto label_189a60;
        case 0x189a64u: goto label_189a64;
        case 0x189a68u: goto label_189a68;
        case 0x189a6cu: goto label_189a6c;
        case 0x189a70u: goto label_189a70;
        case 0x189a74u: goto label_189a74;
        case 0x189a78u: goto label_189a78;
        case 0x189a7cu: goto label_189a7c;
        case 0x189a80u: goto label_189a80;
        case 0x189a84u: goto label_189a84;
        case 0x189a88u: goto label_189a88;
        case 0x189a8cu: goto label_189a8c;
        case 0x189a90u: goto label_189a90;
        case 0x189a94u: goto label_189a94;
        case 0x189a98u: goto label_189a98;
        case 0x189a9cu: goto label_189a9c;
        case 0x189aa0u: goto label_189aa0;
        case 0x189aa4u: goto label_189aa4;
        case 0x189aa8u: goto label_189aa8;
        case 0x189aacu: goto label_189aac;
        case 0x189ab0u: goto label_189ab0;
        case 0x189ab4u: goto label_189ab4;
        case 0x189ab8u: goto label_189ab8;
        case 0x189abcu: goto label_189abc;
        case 0x189ac0u: goto label_189ac0;
        case 0x189ac4u: goto label_189ac4;
        case 0x189ac8u: goto label_189ac8;
        case 0x189accu: goto label_189acc;
        case 0x189ad0u: goto label_189ad0;
        case 0x189ad4u: goto label_189ad4;
        case 0x189ad8u: goto label_189ad8;
        case 0x189adcu: goto label_189adc;
        case 0x189ae0u: goto label_189ae0;
        case 0x189ae4u: goto label_189ae4;
        case 0x189ae8u: goto label_189ae8;
        case 0x189aecu: goto label_189aec;
        case 0x189af0u: goto label_189af0;
        case 0x189af4u: goto label_189af4;
        case 0x189af8u: goto label_189af8;
        case 0x189afcu: goto label_189afc;
        case 0x189b00u: goto label_189b00;
        case 0x189b04u: goto label_189b04;
        case 0x189b08u: goto label_189b08;
        case 0x189b0cu: goto label_189b0c;
        case 0x189b10u: goto label_189b10;
        case 0x189b14u: goto label_189b14;
        case 0x189b18u: goto label_189b18;
        case 0x189b1cu: goto label_189b1c;
        case 0x189b20u: goto label_189b20;
        case 0x189b24u: goto label_189b24;
        case 0x189b28u: goto label_189b28;
        case 0x189b2cu: goto label_189b2c;
        case 0x189b30u: goto label_189b30;
        case 0x189b34u: goto label_189b34;
        case 0x189b38u: goto label_189b38;
        case 0x189b3cu: goto label_189b3c;
        case 0x189b40u: goto label_189b40;
        case 0x189b44u: goto label_189b44;
        case 0x189b48u: goto label_189b48;
        case 0x189b4cu: goto label_189b4c;
        case 0x189b50u: goto label_189b50;
        case 0x189b54u: goto label_189b54;
        case 0x189b58u: goto label_189b58;
        case 0x189b5cu: goto label_189b5c;
        case 0x189b60u: goto label_189b60;
        case 0x189b64u: goto label_189b64;
        case 0x189b68u: goto label_189b68;
        case 0x189b6cu: goto label_189b6c;
        case 0x189b70u: goto label_189b70;
        case 0x189b74u: goto label_189b74;
        case 0x189b78u: goto label_189b78;
        case 0x189b7cu: goto label_189b7c;
        case 0x189b80u: goto label_189b80;
        case 0x189b84u: goto label_189b84;
        case 0x189b88u: goto label_189b88;
        case 0x189b8cu: goto label_189b8c;
        case 0x189b90u: goto label_189b90;
        case 0x189b94u: goto label_189b94;
        case 0x189b98u: goto label_189b98;
        case 0x189b9cu: goto label_189b9c;
        case 0x189ba0u: goto label_189ba0;
        case 0x189ba4u: goto label_189ba4;
        case 0x189ba8u: goto label_189ba8;
        case 0x189bacu: goto label_189bac;
        case 0x189bb0u: goto label_189bb0;
        case 0x189bb4u: goto label_189bb4;
        case 0x189bb8u: goto label_189bb8;
        case 0x189bbcu: goto label_189bbc;
        case 0x189bc0u: goto label_189bc0;
        case 0x189bc4u: goto label_189bc4;
        case 0x189bc8u: goto label_189bc8;
        case 0x189bccu: goto label_189bcc;
        case 0x189bd0u: goto label_189bd0;
        case 0x189bd4u: goto label_189bd4;
        case 0x189bd8u: goto label_189bd8;
        case 0x189bdcu: goto label_189bdc;
        case 0x189be0u: goto label_189be0;
        case 0x189be4u: goto label_189be4;
        case 0x189be8u: goto label_189be8;
        case 0x189becu: goto label_189bec;
        case 0x189bf0u: goto label_189bf0;
        case 0x189bf4u: goto label_189bf4;
        case 0x189bf8u: goto label_189bf8;
        case 0x189bfcu: goto label_189bfc;
        case 0x189c00u: goto label_189c00;
        case 0x189c04u: goto label_189c04;
        case 0x189c08u: goto label_189c08;
        case 0x189c0cu: goto label_189c0c;
        case 0x189c10u: goto label_189c10;
        case 0x189c14u: goto label_189c14;
        case 0x189c18u: goto label_189c18;
        case 0x189c1cu: goto label_189c1c;
        case 0x189c20u: goto label_189c20;
        case 0x189c24u: goto label_189c24;
        case 0x189c28u: goto label_189c28;
        case 0x189c2cu: goto label_189c2c;
        case 0x189c30u: goto label_189c30;
        case 0x189c34u: goto label_189c34;
        case 0x189c38u: goto label_189c38;
        case 0x189c3cu: goto label_189c3c;
        case 0x189c40u: goto label_189c40;
        case 0x189c44u: goto label_189c44;
        case 0x189c48u: goto label_189c48;
        case 0x189c4cu: goto label_189c4c;
        case 0x189c50u: goto label_189c50;
        case 0x189c54u: goto label_189c54;
        case 0x189c58u: goto label_189c58;
        case 0x189c5cu: goto label_189c5c;
        case 0x189c60u: goto label_189c60;
        case 0x189c64u: goto label_189c64;
        case 0x189c68u: goto label_189c68;
        case 0x189c6cu: goto label_189c6c;
        case 0x189c70u: goto label_189c70;
        case 0x189c74u: goto label_189c74;
        case 0x189c78u: goto label_189c78;
        case 0x189c7cu: goto label_189c7c;
        case 0x189c80u: goto label_189c80;
        case 0x189c84u: goto label_189c84;
        case 0x189c88u: goto label_189c88;
        case 0x189c8cu: goto label_189c8c;
        case 0x189c90u: goto label_189c90;
        case 0x189c94u: goto label_189c94;
        case 0x189c98u: goto label_189c98;
        case 0x189c9cu: goto label_189c9c;
        case 0x189ca0u: goto label_189ca0;
        case 0x189ca4u: goto label_189ca4;
        case 0x189ca8u: goto label_189ca8;
        case 0x189cacu: goto label_189cac;
        case 0x189cb0u: goto label_189cb0;
        case 0x189cb4u: goto label_189cb4;
        case 0x189cb8u: goto label_189cb8;
        case 0x189cbcu: goto label_189cbc;
        case 0x189cc0u: goto label_189cc0;
        case 0x189cc4u: goto label_189cc4;
        case 0x189cc8u: goto label_189cc8;
        case 0x189cccu: goto label_189ccc;
        case 0x189cd0u: goto label_189cd0;
        case 0x189cd4u: goto label_189cd4;
        case 0x189cd8u: goto label_189cd8;
        case 0x189cdcu: goto label_189cdc;
        case 0x189ce0u: goto label_189ce0;
        case 0x189ce4u: goto label_189ce4;
        case 0x189ce8u: goto label_189ce8;
        case 0x189cecu: goto label_189cec;
        default: return;
    }

label_189520:
    if (ctx->pc == 0x189520u) {
        ctx->pc = 0x189520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18951Cu;
        // 0x189520: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189524u;
        goto label_189524;
    }
    ctx->pc = 0x18951Cu;
    {
        const bool branch_taken_0x18951c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18951Cu;
        // 0x189520: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18951c) {
            ctx->pc = 0x189554u;
            goto label_189554;
        }
    }
    ctx->pc = 0x189524u;
label_189524:
    // 0x189524: 0x34425440  ori         $v0, $v0, 0x5440
    ctx->pc = 0x189524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21568);
label_189528:
    // 0x189528: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x189528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_18952c:
    // 0x18952c: 0x10000008  b           . + 4 + (0x8 << 2)
label_189530:
    if (ctx->pc == 0x189530u) {
        ctx->pc = 0x189534u;
        goto label_189534;
    }
    ctx->pc = 0x18952Cu;
    {
        const bool branch_taken_0x18952c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18952c) {
            ctx->pc = 0x189550u;
            goto label_189550;
        }
    }
    ctx->pc = 0x189534u;
label_189534:
    // 0x189534: 0x3c024a74  lui         $v0, 0x4A74
    ctx->pc = 0x189534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19060 << 16));
label_189538:
    // 0x189538: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x189538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
label_18953c:
    // 0x18953c: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x18953cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_189540:
    // 0x189540: 0x10000003  b           . + 4 + (0x3 << 2)
label_189544:
    if (ctx->pc == 0x189544u) {
        ctx->pc = 0x189548u;
        goto label_189548;
    }
    ctx->pc = 0x189540u;
    {
        const bool branch_taken_0x189540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189540) {
            ctx->pc = 0x189550u;
            goto label_189550;
        }
    }
    ctx->pc = 0x189548u;
label_189548:
    // 0x189548: 0x3442c800  ori         $v0, $v0, 0xC800
    ctx->pc = 0x189548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51200);
label_18954c:
    // 0x18954c: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x18954cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_189550:
    // 0x189550: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x189550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_189554:
    // 0x189554: 0xc062ee0  jal         func_18BB80
label_189558:
    if (ctx->pc == 0x189558u) {
        ctx->pc = 0x18955Cu;
        goto label_18955c;
    }
    ctx->pc = 0x189554u;
    SET_GPR_U32(ctx, 31, 0x18955Cu);
    ctx->pc = 0x18BB80u;
    { ctx->pc = 0x18bb80; return; }
    ctx->pc = 0x18955Cu;
label_18955c:
    // 0x18955c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_189560:
    if (ctx->pc == 0x189560u) {
        ctx->pc = 0x189564u;
        goto label_189564;
    }
    ctx->pc = 0x18955Cu;
    {
        const bool branch_taken_0x18955c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18955c) {
            ctx->pc = 0x189578u;
            goto label_189578;
        }
    }
    ctx->pc = 0x189564u;
label_189564:
    // 0x189564: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x189564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_189568:
    // 0x189568: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x189568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_18956c:
    // 0x18956c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18956cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_189570:
    // 0x189570: 0x0  nop
    ctx->pc = 0x189570u;
    // NOP
label_189574:
    // 0x189574: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x189574u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_189578:
    // 0x189578: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x189578u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18957c:
    // 0x18957c: 0x0  nop
    ctx->pc = 0x18957cu;
    // NOP
label_189580:
    // 0x189580: 0x4500004d  bc1f        . + 4 + (0x4D << 2)
label_189584:
    if (ctx->pc == 0x189584u) {
        ctx->pc = 0x189584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189580u;
        // 0x189584: 0x26640264  addiu       $a0, $s3, 0x264 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 612));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189588u;
        goto label_189588;
    }
    ctx->pc = 0x189580u;
    {
        const bool branch_taken_0x189580 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x189584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189580u;
        // 0x189584: 0x26640264  addiu       $a0, $s3, 0x264 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 612));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189580) {
            ctx->pc = 0x1896B8u;
            goto label_1896b8;
        }
    }
    ctx->pc = 0x189588u;
label_189588:
    // 0x189588: 0x26650150  addiu       $a1, $s3, 0x150
    ctx->pc = 0x189588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 336));
label_18958c:
    // 0x18958c: 0xc0439e8  jal         func_10E7A0
label_189590:
    if (ctx->pc == 0x189590u) {
        ctx->pc = 0x189590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18958Cu;
        // 0x189590: 0x26460150  addiu       $a2, $s2, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189594u;
        goto label_189594;
    }
    ctx->pc = 0x18958Cu;
    SET_GPR_U32(ctx, 31, 0x189594u);
    ctx->pc = 0x189590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18958Cu;
    // 0x189590: 0x26460150  addiu       $a2, $s2, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E7A0u, 0x18958Cu, 0x189594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189594u;
label_189594:
    // 0x189594: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_189598:
    if (ctx->pc == 0x189598u) {
        ctx->pc = 0x18959Cu;
        goto label_18959c;
    }
    ctx->pc = 0x189594u;
    {
        const bool branch_taken_0x189594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189594) {
            ctx->pc = 0x1895A0u;
            goto label_1895a0;
        }
    }
    ctx->pc = 0x18959Cu;
label_18959c:
    // 0x18959c: 0xae600264  sw          $zero, 0x264($s3)
    ctx->pc = 0x18959cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 612), GPR_U32(ctx, 0));
label_1895a0:
    // 0x1895a0: 0xc6600154  lwc1        $f0, 0x154($s3)
    ctx->pc = 0x1895a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1895a4:
    // 0x1895a4: 0x92630231  lbu         $v1, 0x231($s3)
    ctx->pc = 0x1895a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 561)));
label_1895a8:
    // 0x1895a8: 0xc6410154  lwc1        $f1, 0x154($s2)
    ctx->pc = 0x1895a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1895ac:
    // 0x1895ac: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1895acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1895b0:
    // 0x1895b0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1895b4:
    if (ctx->pc == 0x1895B4u) {
        ctx->pc = 0x1895B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1895B0u;
        // 0x1895b4: 0x46010541  sub.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1895B8u;
        goto label_1895b8;
    }
    ctx->pc = 0x1895B0u;
    {
        const bool branch_taken_0x1895b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1895B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1895B0u;
        // 0x1895b4: 0x46010541  sub.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1895b0) {
            ctx->pc = 0x1895C4u;
            goto label_1895c4;
        }
    }
    ctx->pc = 0x1895B8u;
label_1895b8:
    // 0x1895b8: 0xe6740260  swc1        $f20, 0x260($s3)
    ctx->pc = 0x1895b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 608), bits); }
label_1895bc:
    // 0x1895bc: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1895c0:
    if (ctx->pc == 0x1895C0u) {
        ctx->pc = 0x1895C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1895BCu;
        // 0x1895c0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1895C4u;
        goto label_1895c4;
    }
    ctx->pc = 0x1895BCu;
    {
        const bool branch_taken_0x1895bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1895C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1895BCu;
        // 0x1895c0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1895bc) {
            ctx->pc = 0x1896B8u;
            goto label_1896b8;
        }
    }
    ctx->pc = 0x1895C4u;
label_1895c4:
    // 0x1895c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1895c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1895c8:
    // 0x1895c8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1895cc:
    if (ctx->pc == 0x1895CCu) {
        ctx->pc = 0x1895CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1895C8u;
        // 0x1895cc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1895D0u;
        goto label_1895d0;
    }
    ctx->pc = 0x1895C8u;
    {
        const bool branch_taken_0x1895c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1895CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1895C8u;
        // 0x1895cc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1895c8) {
            ctx->pc = 0x1895D8u;
            goto label_1895d8;
        }
    }
    ctx->pc = 0x1895D0u;
label_1895d0:
    // 0x1895d0: 0x14620035  bne         $v1, $v0, . + 4 + (0x35 << 2)
label_1895d4:
    if (ctx->pc == 0x1895D4u) {
        ctx->pc = 0x1895D8u;
        goto label_1895d8;
    }
    ctx->pc = 0x1895D0u;
    {
        const bool branch_taken_0x1895d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1895d0) {
            ctx->pc = 0x1896A8u;
            goto label_1896a8;
        }
    }
    ctx->pc = 0x1895D8u;
label_1895d8:
    // 0x1895d8: 0xc6430150  lwc1        $f3, 0x150($s2)
    ctx->pc = 0x1895d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1895dc:
    // 0x1895dc: 0xc6620150  lwc1        $f2, 0x150($s3)
    ctx->pc = 0x1895dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1895e0:
    // 0x1895e0: 0x46021832  c.eq.s      $f3, $f2
    ctx->pc = 0x1895e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1895e4:
    // 0x1895e4: 0x0  nop
    ctx->pc = 0x1895e4u;
    // NOP
label_1895e8:
    // 0x1895e8: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_1895ec:
    if (ctx->pc == 0x1895ECu) {
        ctx->pc = 0x1895ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1895E8u;
        // 0x1895ec: 0x46021901  sub.s       $f4, $f3, $f2 (Delay Slot)
        ctx->f[4] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1895F0u;
        goto label_1895f0;
    }
    ctx->pc = 0x1895E8u;
    {
        const bool branch_taken_0x1895e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1895ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1895E8u;
        // 0x1895ec: 0x46021901  sub.s       $f4, $f3, $f2 (Delay Slot)
        ctx->f[4] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1895e8) {
            ctx->pc = 0x18961Cu;
            goto label_18961c;
        }
    }
    ctx->pc = 0x1895F0u;
label_1895f0:
    // 0x1895f0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1895f0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1895f4:
    // 0x1895f4: 0x0  nop
    ctx->pc = 0x1895f4u;
    // NOP
label_1895f8:
    // 0x1895f8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1895fc:
    if (ctx->pc == 0x1895FCu) {
        ctx->pc = 0x189600u;
        goto label_189600;
    }
    ctx->pc = 0x1895F8u;
    {
        const bool branch_taken_0x1895f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1895f8) {
            ctx->pc = 0x189618u;
            goto label_189618;
        }
    }
    ctx->pc = 0x189600u;
label_189600:
    // 0x189600: 0xc6410158  lwc1        $f1, 0x158($s2)
    ctx->pc = 0x189600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_189604:
    // 0x189604: 0xc6600158  lwc1        $f0, 0x158($s3)
    ctx->pc = 0x189604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_189608:
    // 0x189608: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x189608u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18960c:
    // 0x18960c: 0x0  nop
    ctx->pc = 0x18960cu;
    // NOP
label_189610:
    // 0x189610: 0x45010011  bc1t        . + 4 + (0x11 << 2)
label_189614:
    if (ctx->pc == 0x189614u) {
        ctx->pc = 0x189614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189610u;
        // 0x189614: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189618u;
        goto label_189618;
    }
    ctx->pc = 0x189610u;
    {
        const bool branch_taken_0x189610 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x189614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189610u;
        // 0x189614: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189610) {
            ctx->pc = 0x189658u;
            goto label_189658;
        }
    }
    ctx->pc = 0x189618u;
label_189618:
    // 0x189618: 0x46021901  sub.s       $f4, $f3, $f2
    ctx->pc = 0x189618u;
    ctx->f[4] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_18961c:
    // 0x18961c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18961cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_189620:
    // 0x189620: 0xc6430158  lwc1        $f3, 0x158($s2)
    ctx->pc = 0x189620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_189624:
    // 0x189624: 0xc6620158  lwc1        $f2, 0x158($s3)
    ctx->pc = 0x189624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_189628:
    // 0x189628: 0xc6410154  lwc1        $f1, 0x154($s2)
    ctx->pc = 0x189628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18962c:
    // 0x18962c: 0xc6600154  lwc1        $f0, 0x154($s3)
    ctx->pc = 0x18962cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_189630:
    // 0x189630: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x189630u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_189634:
    // 0x189634: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x189634u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_189638:
    // 0x189638: 0x4604209c  madd.s      $f2, $f4, $f4
    ctx->pc = 0x189638u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_18963c:
    // 0x18963c: 0x46020344  c1          0x20344
    ctx->pc = 0x18963cu;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_189640:
    // 0x189640: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x189640u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_189644:
    // 0x189644: 0x0  nop
    ctx->pc = 0x189644u;
    // NOP
label_189648:
    // 0x189648: 0x0  nop
    ctx->pc = 0x189648u;
    // NOP
label_18964c:
    // 0x18964c: 0xc06d51e  jal         func_1B5478
label_189650:
    if (ctx->pc == 0x189650u) {
        ctx->pc = 0x189650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18964Cu;
        // 0x189650: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x189654u;
        goto label_189654;
    }
    ctx->pc = 0x18964Cu;
    SET_GPR_U32(ctx, 31, 0x189654u);
    ctx->pc = 0x189650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18964Cu;
    // 0x189650: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x189654u;
label_189654:
    // 0x189654: 0xe6600268  swc1        $f0, 0x268($s3)
    ctx->pc = 0x189654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 616), bits); }
label_189658:
    // 0x189658: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_18965c:
    if (ctx->pc == 0x18965Cu) {
        ctx->pc = 0x18965Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189658u;
        // 0x18965c: 0x4615a802  mul.s       $f0, $f21, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x189660u;
        goto label_189660;
    }
    ctx->pc = 0x189658u;
    {
        const bool branch_taken_0x189658 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18965Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189658u;
        // 0x18965c: 0x4615a802  mul.s       $f0, $f21, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x189658) {
            ctx->pc = 0x189674u;
            goto label_189674;
        }
    }
    ctx->pc = 0x189660u;
label_189660:
    // 0x189660: 0xae600268  sw          $zero, 0x268($s3)
    ctx->pc = 0x189660u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 616), GPR_U32(ctx, 0));
label_189664:
    // 0x189664: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x189664u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_189668:
    // 0x189668: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x189668u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_18966c:
    // 0x18966c: 0x10000012  b           . + 4 + (0x12 << 2)
label_189670:
    if (ctx->pc == 0x189670u) {
        ctx->pc = 0x189670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18966Cu;
        // 0x189670: 0xe6600260  swc1        $f0, 0x260($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 608), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x189674u;
        goto label_189674;
    }
    ctx->pc = 0x18966Cu;
    {
        const bool branch_taken_0x18966c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18966Cu;
        // 0x189670: 0xe6600260  swc1        $f0, 0x260($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 608), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18966c) {
            ctx->pc = 0x1896B8u;
            goto label_1896b8;
        }
    }
    ctx->pc = 0x189674u;
label_189674:
    // 0x189674: 0xc6610268  lwc1        $f1, 0x268($s3)
    ctx->pc = 0x189674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_189678:
    // 0x189678: 0x3c02bf5f  lui         $v0, 0xBF5F
    ctx->pc = 0x189678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48991 << 16));
label_18967c:
    // 0x18967c: 0x344266f3  ori         $v0, $v0, 0x66F3
    ctx->pc = 0x18967cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26355);
label_189680:
    // 0x189680: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x189680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_189684:
    // 0x189684: 0x0  nop
    ctx->pc = 0x189684u;
    // NOP
label_189688:
    // 0x189688: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x189688u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18968c:
    // 0x18968c: 0x0  nop
    ctx->pc = 0x18968cu;
    // NOP
label_189690:
    // 0x189690: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_189694:
    if (ctx->pc == 0x189694u) {
        ctx->pc = 0x189694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189690u;
        // 0x189694: 0x4615a802  mul.s       $f0, $f21, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x189698u;
        goto label_189698;
    }
    ctx->pc = 0x189690u;
    {
        const bool branch_taken_0x189690 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x189694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189690u;
        // 0x189694: 0x4615a802  mul.s       $f0, $f21, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x189690) {
            ctx->pc = 0x1896B8u;
            goto label_1896b8;
        }
    }
    ctx->pc = 0x189698u;
label_189698:
    // 0x189698: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x189698u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18969c:
    // 0x18969c: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x18969cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1896a0:
    // 0x1896a0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1896a4:
    if (ctx->pc == 0x1896A4u) {
        ctx->pc = 0x1896A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1896A0u;
        // 0x1896a4: 0xe6600260  swc1        $f0, 0x260($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 608), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1896A8u;
        goto label_1896a8;
    }
    ctx->pc = 0x1896A0u;
    {
        const bool branch_taken_0x1896a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1896A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1896A0u;
        // 0x1896a4: 0xe6600260  swc1        $f0, 0x260($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 608), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1896a0) {
            ctx->pc = 0x1896B8u;
            goto label_1896b8;
        }
    }
    ctx->pc = 0x1896A8u;
label_1896a8:
    // 0x1896a8: 0x4615a802  mul.s       $f0, $f21, $f21
    ctx->pc = 0x1896a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
label_1896ac:
    // 0x1896ac: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1896acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1896b0:
    // 0x1896b0: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x1896b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1896b4:
    // 0x1896b4: 0xe6600260  swc1        $f0, 0x260($s3)
    ctx->pc = 0x1896b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 608), bits); }
label_1896b8:
    // 0x1896b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1896b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1896bc:
    // 0x1896bc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1896bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1896c0:
    // 0x1896c0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1896c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1896c4:
    // 0x1896c4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1896c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1896c8:
    // 0x1896c8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1896c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1896cc:
    // 0x1896cc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1896ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1896d0:
    // 0x1896d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1896d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1896d4:
    // 0x1896d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1896d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1896d8:
    // 0x1896d8: 0x3e00008  jr          $ra
label_1896dc:
    if (ctx->pc == 0x1896DCu) {
        ctx->pc = 0x1896DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1896D8u;
        // 0x1896dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1896E0u;
        goto label_1896e0;
    }
    ctx->pc = 0x1896D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1896DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1896D8u;
        // 0x1896dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1896D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1896E0u;
label_1896e0:
    // 0x1896e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1896e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1896e4:
    // 0x1896e4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1896e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1896e8:
    // 0x1896e8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1896e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1896ec:
    // 0x1896ec: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1896ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1896f0:
    // 0x1896f0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1896f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1896f4:
    // 0x1896f4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1896f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1896f8:
    // 0x1896f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1896f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1896fc:
    // 0x1896fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1896fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_189700:
    // 0x189700: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x189700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_189704:
    // 0x189704: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x189704u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_189708:
    // 0x189708: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x189708u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_18970c:
    // 0x18970c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18970cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_189710:
    // 0x189710: 0x90850238  lbu         $a1, 0x238($a0)
    ctx->pc = 0x189710u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 568)));
label_189714:
    // 0x189714: 0x8f8384e0  lw          $v1, -0x7B20($gp)
    ctx->pc = 0x189714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_189718:
    // 0x189718: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x189718u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_18971c:
    // 0x18971c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18971cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_189720:
    // 0x189720: 0x24630024  addiu       $v1, $v1, 0x24
    ctx->pc = 0x189720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
label_189724:
    // 0x189724: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x189724u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_189728:
    // 0x189728: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x189728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18972c:
    // 0x18972c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18972cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_189730:
    // 0x189730: 0x90630013  lbu         $v1, 0x13($v1)
    ctx->pc = 0x189730u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 19)));
label_189734:
    // 0x189734: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_189738:
    if (ctx->pc == 0x189738u) {
        ctx->pc = 0x189738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189734u;
        // 0x189738: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18973Cu;
        goto label_18973c;
    }
    ctx->pc = 0x189734u;
    {
        const bool branch_taken_0x189734 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x189738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189734u;
        // 0x189738: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x189734) {
            ctx->pc = 0x189744u;
            goto label_189744;
        }
    }
    ctx->pc = 0x18973Cu;
label_18973c:
    // 0x18973c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_189740:
    if (ctx->pc == 0x189740u) {
        ctx->pc = 0x189740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18973Cu;
        // 0x189740: 0x64130002  daddiu      $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x189744u;
        goto label_189744;
    }
    ctx->pc = 0x18973Cu;
    {
        const bool branch_taken_0x18973c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18973Cu;
        // 0x189740: 0x64130002  daddiu      $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18973c) {
            ctx->pc = 0x1897B0u;
            goto label_1897b0;
        }
    }
    ctx->pc = 0x189744u;
label_189744:
    // 0x189744: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x189744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_189748:
    // 0x189748: 0x3c021062  lui         $v0, 0x1062
    ctx->pc = 0x189748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4194 << 16));
label_18974c:
    // 0x18974c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x18974cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_189750:
    // 0x189750: 0x34454dd3  ori         $a1, $v0, 0x4DD3
    ctx->pc = 0x189750u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19923);
label_189754:
    // 0x189754: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x189754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_189758:
    // 0x189758: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x189758u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_18975c:
    // 0x18975c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x18975cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_189760:
    // 0x189760: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x189760u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_189764:
    // 0x189764: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x189764u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_189768:
    // 0x189768: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x189768u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_18976c:
    // 0x18976c: 0x0  nop
    ctx->pc = 0x18976cu;
    // NOP
label_189770:
    // 0x189770: 0x1810  mfhi        $v1
    ctx->pc = 0x189770u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_189774:
    // 0x189774: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x189774u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_189778:
    // 0x189778: 0x0  nop
    ctx->pc = 0x189778u;
    // NOP
label_18977c:
    // 0x18977c: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x18977cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_189780:
    // 0x189780: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x189780u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
label_189784:
    // 0x189784: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x189784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_189788:
    // 0x189788: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x189788u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_18978c:
    // 0x18978c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x18978cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_189790:
    // 0x189790: 0x1010  mfhi        $v0
    ctx->pc = 0x189790u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_189794:
    // 0x189794: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x189794u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_189798:
    // 0x189798: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x189798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18979c:
    // 0x18979c: 0xc0449b8  jal         func_1126E0
label_1897a0:
    if (ctx->pc == 0x1897A0u) {
        ctx->pc = 0x1897A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18979Cu;
        // 0x1897a0: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1897A4u;
        goto label_1897a4;
    }
    ctx->pc = 0x18979Cu;
    SET_GPR_U32(ctx, 31, 0x1897A4u);
    ctx->pc = 0x1897A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18979Cu;
    // 0x1897a0: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1126E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1126E0u, 0x18979Cu, 0x1897A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1897A4u;
label_1897a4:
    // 0x1897a4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1897a8:
    if (ctx->pc == 0x1897A8u) {
        ctx->pc = 0x1897A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1897A4u;
        // 0x1897a8: 0x64130002  daddiu      $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1897ACu;
        goto label_1897ac;
    }
    ctx->pc = 0x1897A4u;
    {
        const bool branch_taken_0x1897a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1897A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1897A4u;
        // 0x1897a8: 0x64130002  daddiu      $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1897a4) {
            ctx->pc = 0x1897B0u;
            goto label_1897b0;
        }
    }
    ctx->pc = 0x1897ACu;
label_1897ac:
    // 0x1897ac: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x1897acu;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1897b0:
    // 0x1897b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1897b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1897b4:
    // 0x1897b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1897b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1897b8:
    // 0x1897b8: 0xc062adc  jal         func_18AB70
label_1897bc:
    if (ctx->pc == 0x1897BCu) {
        ctx->pc = 0x1897BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1897B8u;
        // 0x1897bc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1897C0u;
        goto label_1897c0;
    }
    ctx->pc = 0x1897B8u;
    SET_GPR_U32(ctx, 31, 0x1897C0u);
    ctx->pc = 0x1897BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1897B8u;
    // 0x1897bc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AB70u;
    { ctx->pc = 0x18ab70; return; }
    ctx->pc = 0x1897C0u;
label_1897c0:
    // 0x1897c0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1897c4:
    if (ctx->pc == 0x1897C4u) {
        ctx->pc = 0x1897C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1897C0u;
        // 0x1897c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1897C8u;
        goto label_1897c8;
    }
    ctx->pc = 0x1897C0u;
    {
        const bool branch_taken_0x1897c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1897C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1897C0u;
        // 0x1897c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1897c0) {
            ctx->pc = 0x1897DCu;
            goto label_1897dc;
        }
    }
    ctx->pc = 0x1897C8u;
label_1897c8:
    // 0x1897c8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1897c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1897cc:
    // 0x1897cc: 0xc06261c  jal         func_189870
label_1897d0:
    if (ctx->pc == 0x1897D0u) {
        ctx->pc = 0x1897D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1897CCu;
        // 0x1897d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1897D4u;
        goto label_1897d4;
    }
    ctx->pc = 0x1897CCu;
    SET_GPR_U32(ctx, 31, 0x1897D4u);
    ctx->pc = 0x1897D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1897CCu;
    // 0x1897d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189870u;
    goto label_189870;
    ctx->pc = 0x1897D4u;
label_1897d4:
    // 0x1897d4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1897d8:
    if (ctx->pc == 0x1897D8u) {
        ctx->pc = 0x1897DCu;
        goto label_1897dc;
    }
    ctx->pc = 0x1897D4u;
    {
        const bool branch_taken_0x1897d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1897d4) {
            ctx->pc = 0x1897E0u;
            goto label_1897e0;
        }
    }
    ctx->pc = 0x1897DCu;
label_1897dc:
    // 0x1897dc: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1897dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1897e0:
    // 0x1897e0: 0x1280001a  beqz        $s4, . + 4 + (0x1A << 2)
label_1897e4:
    if (ctx->pc == 0x1897E4u) {
        ctx->pc = 0x1897E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1897E0u;
        // 0x1897e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1897E8u;
        goto label_1897e8;
    }
    ctx->pc = 0x1897E0u;
    {
        const bool branch_taken_0x1897e0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1897E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1897E0u;
        // 0x1897e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1897e0) {
            ctx->pc = 0x18984Cu;
            goto label_18984c;
        }
    }
    ctx->pc = 0x1897E8u;
label_1897e8:
    // 0x1897e8: 0x92430231  lbu         $v1, 0x231($s2)
    ctx->pc = 0x1897e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 561)));
label_1897ec:
    // 0x1897ec: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1897ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1897f0:
    // 0x1897f0: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_1897f4:
    if (ctx->pc == 0x1897F4u) {
        ctx->pc = 0x1897F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1897F0u;
        // 0x1897f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1897F8u;
        goto label_1897f8;
    }
    ctx->pc = 0x1897F0u;
    {
        const bool branch_taken_0x1897f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1897F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1897F0u;
        // 0x1897f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1897f0) {
            ctx->pc = 0x189834u;
            goto label_189834;
        }
    }
    ctx->pc = 0x1897F8u;
label_1897f8:
    // 0x1897f8: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x1897f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_1897fc:
    // 0x1897fc: 0x8442003c  lh          $v0, 0x3C($v0)
    ctx->pc = 0x1897fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 60)));
label_189800:
    // 0x189800: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
label_189804:
    if (ctx->pc == 0x189804u) {
        ctx->pc = 0x189804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189800u;
        // 0x189804: 0x28410007  slti        $at, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x189808u;
        goto label_189808;
    }
    ctx->pc = 0x189800u;
    {
        const bool branch_taken_0x189800 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x189804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189800u;
        // 0x189804: 0x28410007  slti        $at, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x189800) {
            ctx->pc = 0x189828u;
            goto label_189828;
        }
    }
    ctx->pc = 0x189808u;
label_189808:
    // 0x189808: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_18980c:
    if (ctx->pc == 0x18980Cu) {
        ctx->pc = 0x18980Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189808u;
        // 0x18980c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189810u;
        goto label_189810;
    }
    ctx->pc = 0x189808u;
    {
        const bool branch_taken_0x189808 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18980Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189808u;
        // 0x18980c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189808) {
            ctx->pc = 0x189828u;
            goto label_189828;
        }
    }
    ctx->pc = 0x189810u;
label_189810:
    // 0x189810: 0xc062e34  jal         func_18B8D0
label_189814:
    if (ctx->pc == 0x189814u) {
        ctx->pc = 0x189814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189810u;
        // 0x189814: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x189818u;
        goto label_189818;
    }
    ctx->pc = 0x189810u;
    SET_GPR_U32(ctx, 31, 0x189818u);
    ctx->pc = 0x189814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189810u;
    // 0x189814: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B8D0u;
    { ctx->pc = 0x18b8d0; return; }
    ctx->pc = 0x189818u;
label_189818:
    // 0x189818: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_18981c:
    if (ctx->pc == 0x18981Cu) {
        ctx->pc = 0x189820u;
        goto label_189820;
    }
    ctx->pc = 0x189818u;
    {
        const bool branch_taken_0x189818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189818) {
            ctx->pc = 0x189848u;
            goto label_189848;
        }
    }
    ctx->pc = 0x189820u;
label_189820:
    // 0x189820: 0x10000009  b           . + 4 + (0x9 << 2)
label_189824:
    if (ctx->pc == 0x189824u) {
        ctx->pc = 0x189824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189820u;
        // 0x189824: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189828u;
        goto label_189828;
    }
    ctx->pc = 0x189820u;
    {
        const bool branch_taken_0x189820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189820u;
        // 0x189824: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189820) {
            ctx->pc = 0x189848u;
            goto label_189848;
        }
    }
    ctx->pc = 0x189828u;
label_189828:
    // 0x189828: 0xa640019e  sh          $zero, 0x19E($s2)
    ctx->pc = 0x189828u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 414), (uint16_t)GPR_U32(ctx, 0));
label_18982c:
    // 0x18982c: 0x10000006  b           . + 4 + (0x6 << 2)
label_189830:
    if (ctx->pc == 0x189830u) {
        ctx->pc = 0x189830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18982Cu;
        // 0x189830: 0xa640019c  sh          $zero, 0x19C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 412), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189834u;
        goto label_189834;
    }
    ctx->pc = 0x18982Cu;
    {
        const bool branch_taken_0x18982c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18982Cu;
        // 0x189830: 0xa640019c  sh          $zero, 0x19C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 412), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18982c) {
            ctx->pc = 0x189848u;
            goto label_189848;
        }
    }
    ctx->pc = 0x189834u;
label_189834:
    // 0x189834: 0xc062e34  jal         func_18B8D0
label_189838:
    if (ctx->pc == 0x189838u) {
        ctx->pc = 0x189838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189834u;
        // 0x189838: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18983Cu;
        goto label_18983c;
    }
    ctx->pc = 0x189834u;
    SET_GPR_U32(ctx, 31, 0x18983Cu);
    ctx->pc = 0x189838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189834u;
    // 0x189838: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B8D0u;
    { ctx->pc = 0x18b8d0; return; }
    ctx->pc = 0x18983Cu;
label_18983c:
    // 0x18983c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_189840:
    if (ctx->pc == 0x189840u) {
        ctx->pc = 0x189844u;
        goto label_189844;
    }
    ctx->pc = 0x18983Cu;
    {
        const bool branch_taken_0x18983c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18983c) {
            ctx->pc = 0x189848u;
            goto label_189848;
        }
    }
    ctx->pc = 0x189844u;
label_189844:
    // 0x189844: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x189844u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_189848:
    // 0x189848: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x189848u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18984c:
    // 0x18984c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x18984cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_189850:
    // 0x189850: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x189850u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_189854:
    // 0x189854: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x189854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_189858:
    // 0x189858: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x189858u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_18985c:
    // 0x18985c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x18985cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_189860:
    // 0x189860: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x189860u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_189864:
    // 0x189864: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x189864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_189868:
    // 0x189868: 0x3e00008  jr          $ra
label_18986c:
    if (ctx->pc == 0x18986Cu) {
        ctx->pc = 0x18986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189868u;
        // 0x18986c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189870u;
        goto label_189870;
    }
    ctx->pc = 0x189868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189868u;
        // 0x18986c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189870u;
label_189870:
    // 0x189870: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x189870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_189874:
    // 0x189874: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x189874u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_189878:
    // 0x189878: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x189878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_18987c:
    // 0x18987c: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x18987cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_189880:
    // 0x189880: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x189880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_189884:
    // 0x189884: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x189884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_189888:
    // 0x189888: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x189888u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18988c:
    // 0x18988c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18988cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_189890:
    // 0x189890: 0x90830237  lbu         $v1, 0x237($a0)
    ctx->pc = 0x189890u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 567)));
label_189894:
    // 0x189894: 0x106b0010  beq         $v1, $t3, . + 4 + (0x10 << 2)
label_189898:
    if (ctx->pc == 0x189898u) {
        ctx->pc = 0x189898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189894u;
        // 0x189898: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18989Cu;
        goto label_18989c;
    }
    ctx->pc = 0x189894u;
    {
        const bool branch_taken_0x189894 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 11));
        ctx->pc = 0x189898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189894u;
        // 0x189898: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189894) {
            ctx->pc = 0x1898D8u;
            goto label_1898d8;
        }
    }
    ctx->pc = 0x18989Cu;
label_18989c:
    // 0x18989c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18989cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1898a0:
    // 0x1898a0: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_1898a4:
    if (ctx->pc == 0x1898A4u) {
        ctx->pc = 0x1898A8u;
        goto label_1898a8;
    }
    ctx->pc = 0x1898A0u;
    {
        const bool branch_taken_0x1898a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1898a0) {
            ctx->pc = 0x1898D8u;
            goto label_1898d8;
        }
    }
    ctx->pc = 0x1898A8u;
label_1898a8:
    // 0x1898a8: 0x92450238  lbu         $a1, 0x238($s2)
    ctx->pc = 0x1898a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 568)));
label_1898ac:
    // 0x1898ac: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1898acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1898b0:
    // 0x1898b0: 0x8f8384e0  lw          $v1, -0x7B20($gp)
    ctx->pc = 0x1898b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_1898b4:
    // 0x1898b4: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1898b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1898b8:
    // 0x1898b8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1898b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1898bc:
    // 0x1898bc: 0x24630024  addiu       $v1, $v1, 0x24
    ctx->pc = 0x1898bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
label_1898c0:
    // 0x1898c0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1898c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1898c4:
    // 0x1898c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1898c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1898c8:
    // 0x1898c8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1898c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1898cc:
    // 0x1898cc: 0x90830013  lbu         $v1, 0x13($a0)
    ctx->pc = 0x1898ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 19)));
label_1898d0:
    // 0x1898d0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1898d4:
    if (ctx->pc == 0x1898D4u) {
        ctx->pc = 0x1898D8u;
        goto label_1898d8;
    }
    ctx->pc = 0x1898D0u;
    {
        const bool branch_taken_0x1898d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1898d0) {
            ctx->pc = 0x1898E0u;
            goto label_1898e0;
        }
    }
    ctx->pc = 0x1898D8u;
label_1898d8:
    // 0x1898d8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1898dc:
    if (ctx->pc == 0x1898DCu) {
        ctx->pc = 0x1898DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1898D8u;
        // 0x1898dc: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1898E0u;
        goto label_1898e0;
    }
    ctx->pc = 0x1898D8u;
    {
        const bool branch_taken_0x1898d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1898DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1898D8u;
        // 0x1898dc: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1898d8) {
            ctx->pc = 0x1898F8u;
            goto label_1898f8;
        }
    }
    ctx->pc = 0x1898E0u;
label_1898e0:
    // 0x1898e0: 0x90820015  lbu         $v0, 0x15($a0)
    ctx->pc = 0x1898e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 21)));
label_1898e4:
    // 0x1898e4: 0x144b0003  bne         $v0, $t3, . + 4 + (0x3 << 2)
label_1898e8:
    if (ctx->pc == 0x1898E8u) {
        ctx->pc = 0x1898ECu;
        goto label_1898ec;
    }
    ctx->pc = 0x1898E4u;
    {
        const bool branch_taken_0x1898e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 11));
        if (branch_taken_0x1898e4) {
            ctx->pc = 0x1898F4u;
            goto label_1898f4;
        }
    }
    ctx->pc = 0x1898ECu;
label_1898ec:
    // 0x1898ec: 0x10000003  b           . + 4 + (0x3 << 2)
label_1898f0:
    if (ctx->pc == 0x1898F0u) {
        ctx->pc = 0x1898F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1898ECu;
        // 0x1898f0: 0x9247023f  lbu         $a3, 0x23F($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 575)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1898F4u;
        goto label_1898f4;
    }
    ctx->pc = 0x1898ECu;
    {
        const bool branch_taken_0x1898ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1898F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1898ECu;
        // 0x1898f0: 0x9247023f  lbu         $a3, 0x23F($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 575)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1898ec) {
            ctx->pc = 0x1898FCu;
            goto label_1898fc;
        }
    }
    ctx->pc = 0x1898F4u;
label_1898f4:
    // 0x1898f4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1898f4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1898f8:
    // 0x1898f8: 0x9247023f  lbu         $a3, 0x23F($s2)
    ctx->pc = 0x1898f8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 575)));
label_1898fc:
    // 0x1898fc: 0x26440150  addiu       $a0, $s2, 0x150
    ctx->pc = 0x1898fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
label_189900:
    // 0x189900: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x189900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_189904:
    // 0x189904: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x189904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_189908:
    // 0x189908: 0x26480226  addiu       $t0, $s2, 0x226
    ctx->pc = 0x189908u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 550));
label_18990c:
    // 0x18990c: 0xc06e764  jal         func_1B9D90
label_189910:
    if (ctx->pc == 0x189910u) {
        ctx->pc = 0x189910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18990Cu;
        // 0x189910: 0x26490228  addiu       $t1, $s2, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189914u;
        goto label_189914;
    }
    ctx->pc = 0x18990Cu;
    SET_GPR_U32(ctx, 31, 0x189914u);
    ctx->pc = 0x189910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18990Cu;
    // 0x189910: 0x26490228  addiu       $t1, $s2, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D90u;
    { ctx->pc = 0x1b9d90; return; }
    ctx->pc = 0x189914u;
label_189914:
    // 0x189914: 0x92440231  lbu         $a0, 0x231($s2)
    ctx->pc = 0x189914u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 561)));
label_189918:
    // 0x189918: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x189918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_18991c:
    // 0x18991c: 0x14830031  bne         $a0, $v1, . + 4 + (0x31 << 2)
label_189920:
    if (ctx->pc == 0x189920u) {
        ctx->pc = 0x189920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18991Cu;
        // 0x189920: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189924u;
        goto label_189924;
    }
    ctx->pc = 0x18991Cu;
    {
        const bool branch_taken_0x18991c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x189920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18991Cu;
        // 0x189920: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18991c) {
            ctx->pc = 0x1899E4u;
            goto label_1899e4;
        }
    }
    ctx->pc = 0x189924u;
label_189924:
    // 0x189924: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x189924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_189928:
    // 0x189928: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x189928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_18992c:
    // 0x18992c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x18992cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_189930:
    // 0x189930: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x189930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_189934:
    // 0x189934: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
label_189938:
    if (ctx->pc == 0x189938u) {
        ctx->pc = 0x18993Cu;
        goto label_18993c;
    }
    ctx->pc = 0x189934u;
    {
        const bool branch_taken_0x189934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x189934) {
            ctx->pc = 0x1899E4u;
            goto label_1899e4;
        }
    }
    ctx->pc = 0x18993Cu;
label_18993c:
    // 0x18993c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x18993cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_189940:
    // 0x189940: 0x3c0268db  lui         $v0, 0x68DB
    ctx->pc = 0x189940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26843 << 16));
label_189944:
    // 0x189944: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x189944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_189948:
    // 0x189948: 0x34458bad  ori         $a1, $v0, 0x8BAD
    ctx->pc = 0x189948u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35757);
label_18994c:
    // 0x18994c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x18994cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_189950:
    // 0x189950: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x189950u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_189954:
    // 0x189954: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x189954u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_189958:
    // 0x189958: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x189958u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_18995c:
    // 0x18995c: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x18995cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_189960:
    // 0x189960: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x189960u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_189964:
    // 0x189964: 0x0  nop
    ctx->pc = 0x189964u;
    // NOP
label_189968:
    // 0x189968: 0x1810  mfhi        $v1
    ctx->pc = 0x189968u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_18996c:
    // 0x18996c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18996cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_189970:
    // 0x189970: 0x0  nop
    ctx->pc = 0x189970u;
    // NOP
label_189974:
    // 0x189974: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x189974u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_189978:
    // 0x189978: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x189978u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
label_18997c:
    // 0x18997c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x18997cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_189980:
    // 0x189980: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x189980u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_189984:
    // 0x189984: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x189984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_189988:
    // 0x189988: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x189988u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_18998c:
    // 0x18998c: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x18998cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_189990:
    // 0x189990: 0x1010  mfhi        $v0
    ctx->pc = 0x189990u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_189994:
    // 0x189994: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x189994u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
label_189998:
    // 0x189998: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x189998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18999c:
    // 0x18999c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18999cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1899a0:
    // 0x1899a0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1899a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1899a4:
    // 0x1899a4: 0xc04494c  jal         func_112530
label_1899a8:
    if (ctx->pc == 0x1899A8u) {
        ctx->pc = 0x1899A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1899A4u;
        // 0x1899a8: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1899ACu;
        goto label_1899ac;
    }
    ctx->pc = 0x1899A4u;
    SET_GPR_U32(ctx, 31, 0x1899ACu);
    ctx->pc = 0x1899A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1899A4u;
    // 0x1899a8: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112530u, 0x1899A4u, 0x1899ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1899ACu;
label_1899ac:
    // 0x1899ac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1899b0:
    if (ctx->pc == 0x1899B0u) {
        ctx->pc = 0x1899B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1899ACu;
        // 0x1899b0: 0x26440150  addiu       $a0, $s2, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1899B4u;
        goto label_1899b4;
    }
    ctx->pc = 0x1899ACu;
    {
        const bool branch_taken_0x1899ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1899B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1899ACu;
        // 0x1899b0: 0x26440150  addiu       $a0, $s2, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1899ac) {
            ctx->pc = 0x1899CCu;
            goto label_1899cc;
        }
    }
    ctx->pc = 0x1899B4u;
label_1899b4:
    // 0x1899b4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1899b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1899b8:
    // 0x1899b8: 0xc042484  jal         func_109210
label_1899bc:
    if (ctx->pc == 0x1899BCu) {
        ctx->pc = 0x1899BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1899B8u;
        // 0x1899bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1899C0u;
        goto label_1899c0;
    }
    ctx->pc = 0x1899B8u;
    SET_GPR_U32(ctx, 31, 0x1899C0u);
    ctx->pc = 0x1899BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1899B8u;
    // 0x1899bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109210u, 0x1899B8u, 0x1899C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1899C0u;
label_1899c0:
    // 0x1899c0: 0x30430008  andi        $v1, $v0, 0x8
    ctx->pc = 0x1899c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_1899c4:
    // 0x1899c4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1899c8:
    if (ctx->pc == 0x1899C8u) {
        ctx->pc = 0x1899CCu;
        goto label_1899cc;
    }
    ctx->pc = 0x1899C4u;
    {
        const bool branch_taken_0x1899c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1899c4) {
            ctx->pc = 0x1899E4u;
            goto label_1899e4;
        }
    }
    ctx->pc = 0x1899CCu;
label_1899cc:
    // 0x1899cc: 0xa640019c  sh          $zero, 0x19C($s2)
    ctx->pc = 0x1899ccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 412), (uint16_t)GPR_U32(ctx, 0));
label_1899d0:
    // 0x1899d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1899d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1899d4:
    // 0x1899d4: 0xa640019e  sh          $zero, 0x19E($s2)
    ctx->pc = 0x1899d4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 414), (uint16_t)GPR_U32(ctx, 0));
label_1899d8:
    // 0x1899d8: 0x8e430194  lw          $v1, 0x194($s2)
    ctx->pc = 0x1899d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_1899dc:
    // 0x1899dc: 0x34638020  ori         $v1, $v1, 0x8020
    ctx->pc = 0x1899dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32800);
label_1899e0:
    // 0x1899e0: 0xae430194  sw          $v1, 0x194($s2)
    ctx->pc = 0x1899e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 3));
label_1899e4:
    // 0x1899e4: 0x12000050  beqz        $s0, . + 4 + (0x50 << 2)
label_1899e8:
    if (ctx->pc == 0x1899E8u) {
        ctx->pc = 0x1899E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1899E4u;
        // 0x1899e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1899ECu;
        goto label_1899ec;
    }
    ctx->pc = 0x1899E4u;
    {
        const bool branch_taken_0x1899e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1899E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1899E4u;
        // 0x1899e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1899e4) {
            ctx->pc = 0x189B28u;
            goto label_189b28;
        }
    }
    ctx->pc = 0x1899ECu;
label_1899ec:
    // 0x1899ec: 0xc0626d0  jal         func_189B40
label_1899f0:
    if (ctx->pc == 0x1899F0u) {
        ctx->pc = 0x1899F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1899ECu;
        // 0x1899f0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1899F4u;
        goto label_1899f4;
    }
    ctx->pc = 0x1899ECu;
    SET_GPR_U32(ctx, 31, 0x1899F4u);
    ctx->pc = 0x1899F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1899ECu;
    // 0x1899f0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189B40u;
    goto label_189b40;
    ctx->pc = 0x1899F4u;
label_1899f4:
    // 0x1899f4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1899f8:
    if (ctx->pc == 0x1899F8u) {
        ctx->pc = 0x1899F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1899F4u;
        // 0x1899f8: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1899FCu;
        goto label_1899fc;
    }
    ctx->pc = 0x1899F4u;
    {
        const bool branch_taken_0x1899f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1899F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1899F4u;
        // 0x1899f8: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1899f4) {
            ctx->pc = 0x189A18u;
            goto label_189a18;
        }
    }
    ctx->pc = 0x1899FCu;
label_1899fc:
    // 0x1899fc: 0x8e420194  lw          $v0, 0x194($s2)
    ctx->pc = 0x1899fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_189a00:
    // 0x189a00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x189a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_189a04:
    // 0x189a04: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x189a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_189a08:
    // 0x189a08: 0xc062948  jal         func_18A520
label_189a0c:
    if (ctx->pc == 0x189A0Cu) {
        ctx->pc = 0x189A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A08u;
        // 0x189a0c: 0xae420194  sw          $v0, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189A10u;
        goto label_189a10;
    }
    ctx->pc = 0x189A08u;
    SET_GPR_U32(ctx, 31, 0x189A10u);
    ctx->pc = 0x189A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189A08u;
    // 0x189a0c: 0xae420194  sw          $v0, 0x194($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A520u;
    { ctx->pc = 0x18a520; return; }
    ctx->pc = 0x189A10u;
label_189a10:
    // 0x189a10: 0x10000046  b           . + 4 + (0x46 << 2)
label_189a14:
    if (ctx->pc == 0x189A14u) {
        ctx->pc = 0x189A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A10u;
        // 0x189a14: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189A18u;
        goto label_189a18;
    }
    ctx->pc = 0x189A10u;
    {
        const bool branch_taken_0x189a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A10u;
        // 0x189a14: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189a10) {
            ctx->pc = 0x189B2Cu;
            goto label_189b2c;
        }
    }
    ctx->pc = 0x189A18u;
label_189a18:
    // 0x189a18: 0x26450150  addiu       $a1, $s2, 0x150
    ctx->pc = 0x189a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
label_189a1c:
    // 0x189a1c: 0xc0439e8  jal         func_10E7A0
label_189a20:
    if (ctx->pc == 0x189A20u) {
        ctx->pc = 0x189A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A1Cu;
        // 0x189a20: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189A24u;
        goto label_189a24;
    }
    ctx->pc = 0x189A1Cu;
    SET_GPR_U32(ctx, 31, 0x189A24u);
    ctx->pc = 0x189A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189A1Cu;
    // 0x189a20: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E7A0u, 0x189A1Cu, 0x189A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189A24u;
label_189a24:
    // 0x189a24: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_189a28:
    if (ctx->pc == 0x189A28u) {
        ctx->pc = 0x189A2Cu;
        goto label_189a2c;
    }
    ctx->pc = 0x189A24u;
    {
        const bool branch_taken_0x189a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189a24) {
            ctx->pc = 0x189A34u;
            goto label_189a34;
        }
    }
    ctx->pc = 0x189A2Cu;
label_189a2c:
    // 0x189a2c: 0x10000020  b           . + 4 + (0x20 << 2)
label_189a30:
    if (ctx->pc == 0x189A30u) {
        ctx->pc = 0x189A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A2Cu;
        // 0x189a30: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189A34u;
        goto label_189a34;
    }
    ctx->pc = 0x189A2Cu;
    {
        const bool branch_taken_0x189a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A2Cu;
        // 0x189a30: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189a2c) {
            ctx->pc = 0x189AB0u;
            goto label_189ab0;
        }
    }
    ctx->pc = 0x189A34u;
label_189a34:
    // 0x189a34: 0xc6420044  lwc1        $f2, 0x44($s2)
    ctx->pc = 0x189a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_189a38:
    // 0x189a38: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x189a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_189a3c:
    // 0x189a3c: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x189a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_189a40:
    // 0x189a40: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x189a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_189a44:
    // 0x189a44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x189a44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_189a48:
    // 0x189a48: 0x0  nop
    ctx->pc = 0x189a48u;
    // NOP
label_189a4c:
    // 0x189a4c: 0x46020b01  sub.s       $f12, $f1, $f2
    ctx->pc = 0x189a4cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_189a50:
    // 0x189a50: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x189a50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_189a54:
    // 0x189a54: 0x0  nop
    ctx->pc = 0x189a54u;
    // NOP
label_189a58:
    // 0x189a58: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_189a5c:
    if (ctx->pc == 0x189A5Cu) {
        ctx->pc = 0x189A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A58u;
        // 0x189a5c: 0xe7ac005c  swc1        $f12, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x189A60u;
        goto label_189a60;
    }
    ctx->pc = 0x189A58u;
    {
        const bool branch_taken_0x189a58 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x189A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A58u;
        // 0x189a5c: 0xe7ac005c  swc1        $f12, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x189a58) {
            ctx->pc = 0x189A74u;
            goto label_189a74;
        }
    }
    ctx->pc = 0x189A60u;
label_189a60:
    // 0x189a60: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x189a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_189a64:
    // 0x189a64: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x189a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_189a68:
    // 0x189a68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x189a68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_189a6c:
    // 0x189a6c: 0x1000000d  b           . + 4 + (0xD << 2)
label_189a70:
    if (ctx->pc == 0x189A70u) {
        ctx->pc = 0x189A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A6Cu;
        // 0x189a70: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x189A74u;
        goto label_189a74;
    }
    ctx->pc = 0x189A6Cu;
    {
        const bool branch_taken_0x189a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A6Cu;
        // 0x189a70: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x189a6c) {
            ctx->pc = 0x189AA4u;
            goto label_189aa4;
        }
    }
    ctx->pc = 0x189A74u;
label_189a74:
    // 0x189a74: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x189a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_189a78:
    // 0x189a78: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x189a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_189a7c:
    // 0x189a7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x189a7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_189a80:
    // 0x189a80: 0x0  nop
    ctx->pc = 0x189a80u;
    // NOP
label_189a84:
    // 0x189a84: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x189a84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_189a88:
    // 0x189a88: 0x0  nop
    ctx->pc = 0x189a88u;
    // NOP
label_189a8c:
    // 0x189a8c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_189a90:
    if (ctx->pc == 0x189A90u) {
        ctx->pc = 0x189A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A8Cu;
        // 0x189a90: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189A94u;
        goto label_189a94;
    }
    ctx->pc = 0x189A8Cu;
    {
        const bool branch_taken_0x189a8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x189A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A8Cu;
        // 0x189a90: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189a8c) {
            ctx->pc = 0x189AA4u;
            goto label_189aa4;
        }
    }
    ctx->pc = 0x189A94u;
label_189a94:
    // 0x189a94: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x189a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_189a98:
    // 0x189a98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x189a98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_189a9c:
    // 0x189a9c: 0x10000001  b           . + 4 + (0x1 << 2)
label_189aa0:
    if (ctx->pc == 0x189AA0u) {
        ctx->pc = 0x189AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A9Cu;
        // 0x189aa0: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x189AA4u;
        goto label_189aa4;
    }
    ctx->pc = 0x189A9Cu;
    {
        const bool branch_taken_0x189a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A9Cu;
        // 0x189aa0: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x189a9c) {
            ctx->pc = 0x189AA4u;
            goto label_189aa4;
        }
    }
    ctx->pc = 0x189AA4u;
label_189aa4:
    // 0x189aa4: 0xc06d448  jal         func_1B5120
label_189aa8:
    if (ctx->pc == 0x189AA8u) {
        ctx->pc = 0x189AACu;
        goto label_189aac;
    }
    ctx->pc = 0x189AA4u;
    SET_GPR_U32(ctx, 31, 0x189AACu);
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x189AACu;
label_189aac:
    // 0x189aac: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x189aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_189ab0:
    // 0x189ab0: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x189ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_189ab4:
    // 0x189ab4: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x189ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
label_189ab8:
    // 0x189ab8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x189ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_189abc:
    // 0x189abc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x189abcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_189ac0:
    // 0x189ac0: 0x0  nop
    ctx->pc = 0x189ac0u;
    // NOP
label_189ac4:
    // 0x189ac4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x189ac4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_189ac8:
    // 0x189ac8: 0x0  nop
    ctx->pc = 0x189ac8u;
    // NOP
label_189acc:
    // 0x189acc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_189ad0:
    if (ctx->pc == 0x189AD0u) {
        ctx->pc = 0x189AD4u;
        goto label_189ad4;
    }
    ctx->pc = 0x189ACCu;
    {
        const bool branch_taken_0x189acc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x189acc) {
            ctx->pc = 0x189AE8u;
            goto label_189ae8;
        }
    }
    ctx->pc = 0x189AD4u;
label_189ad4:
    // 0x189ad4: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x189ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_189ad8:
    // 0x189ad8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x189ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_189adc:
    // 0x189adc: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x189adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_189ae0:
    // 0x189ae0: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_189ae4:
    if (ctx->pc == 0x189AE4u) {
        ctx->pc = 0x189AE8u;
        goto label_189ae8;
    }
    ctx->pc = 0x189AE0u;
    {
        const bool branch_taken_0x189ae0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x189ae0) {
            ctx->pc = 0x189B20u;
            goto label_189b20;
        }
    }
    ctx->pc = 0x189AE8u;
label_189ae8:
    // 0x189ae8: 0xc6410150  lwc1        $f1, 0x150($s2)
    ctx->pc = 0x189ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_189aec:
    // 0x189aec: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x189aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_189af0:
    // 0x189af0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x189af0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_189af4:
    // 0x189af4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x189af4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_189af8:
    // 0x189af8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x189af8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_189afc:
    // 0x189afc: 0x0  nop
    ctx->pc = 0x189afcu;
    // NOP
label_189b00:
    // 0x189b00: 0xa643019c  sh          $v1, 0x19C($s2)
    ctx->pc = 0x189b00u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 412), (uint16_t)GPR_U32(ctx, 3));
label_189b04:
    // 0x189b04: 0xc6410158  lwc1        $f1, 0x158($s2)
    ctx->pc = 0x189b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_189b08:
    // 0x189b08: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x189b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_189b0c:
    // 0x189b0c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x189b0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_189b10:
    // 0x189b10: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x189b10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_189b14:
    // 0x189b14: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x189b14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_189b18:
    // 0x189b18: 0x10000003  b           . + 4 + (0x3 << 2)
label_189b1c:
    if (ctx->pc == 0x189B1Cu) {
        ctx->pc = 0x189B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189B18u;
        // 0x189b1c: 0xa643019e  sh          $v1, 0x19E($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189B20u;
        goto label_189b20;
    }
    ctx->pc = 0x189B18u;
    {
        const bool branch_taken_0x189b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189B18u;
        // 0x189b1c: 0xa643019e  sh          $v1, 0x19E($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189b18) {
            ctx->pc = 0x189B28u;
            goto label_189b28;
        }
    }
    ctx->pc = 0x189B20u;
label_189b20:
    // 0x189b20: 0xa640019e  sh          $zero, 0x19E($s2)
    ctx->pc = 0x189b20u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 414), (uint16_t)GPR_U32(ctx, 0));
label_189b24:
    // 0x189b24: 0xa640019c  sh          $zero, 0x19C($s2)
    ctx->pc = 0x189b24u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 412), (uint16_t)GPR_U32(ctx, 0));
label_189b28:
    // 0x189b28: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x189b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_189b2c:
    // 0x189b2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x189b2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_189b30:
    // 0x189b30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x189b30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_189b34:
    // 0x189b34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x189b34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_189b38:
    // 0x189b38: 0x3e00008  jr          $ra
label_189b3c:
    if (ctx->pc == 0x189B3Cu) {
        ctx->pc = 0x189B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189B38u;
        // 0x189b3c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189B40u;
        goto label_189b40;
    }
    ctx->pc = 0x189B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189B38u;
        // 0x189b3c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189B40u;
label_189b40:
    // 0x189b40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x189b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_189b44:
    // 0x189b44: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x189b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_189b48:
    // 0x189b48: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x189b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_189b4c:
    // 0x189b4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x189b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_189b50:
    // 0x189b50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x189b50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_189b54:
    // 0x189b54: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x189b54u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_189b58:
    // 0x189b58: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x189b58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_189b5c:
    // 0x189b5c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x189b5cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_189b60:
    // 0x189b60: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x189b60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_189b64:
    // 0x189b64: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x189b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_189b68:
    // 0x189b68: 0xc4800158  lwc1        $f0, 0x158($a0)
    ctx->pc = 0x189b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_189b6c:
    // 0x189b6c: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x189b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_189b70:
    // 0x189b70: 0xc4820150  lwc1        $f2, 0x150($a0)
    ctx->pc = 0x189b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_189b74:
    // 0x189b74: 0x46000d41  sub.s       $f21, $f1, $f0
    ctx->pc = 0x189b74u;
    ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_189b78:
    // 0x189b78: 0x46021d01  sub.s       $f20, $f3, $f2
    ctx->pc = 0x189b78u;
    ctx->f[20] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_189b7c:
    // 0x189b7c: 0xc06d448  jal         func_1B5120
label_189b80:
    if (ctx->pc == 0x189B80u) {
        ctx->pc = 0x189B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189B7Cu;
        // 0x189b80: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x189B84u;
        goto label_189b84;
    }
    ctx->pc = 0x189B7Cu;
    SET_GPR_U32(ctx, 31, 0x189B84u);
    ctx->pc = 0x189B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189B7Cu;
    // 0x189b80: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x189B84u;
label_189b84:
    // 0x189b84: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x189b84u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_189b88:
    // 0x189b88: 0xc06d448  jal         func_1B5120
label_189b8c:
    if (ctx->pc == 0x189B8Cu) {
        ctx->pc = 0x189B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189B88u;
        // 0x189b8c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x189B90u;
        goto label_189b90;
    }
    ctx->pc = 0x189B88u;
    SET_GPR_U32(ctx, 31, 0x189B90u);
    ctx->pc = 0x189B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189B88u;
    // 0x189b8c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x189B90u;
label_189b90:
    // 0x189b90: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x189b90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_189b94:
    // 0x189b94: 0x0  nop
    ctx->pc = 0x189b94u;
    // NOP
label_189b98:
    // 0x189b98: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_189b9c:
    if (ctx->pc == 0x189B9Cu) {
        ctx->pc = 0x189B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189B98u;
        // 0x189b9c: 0x46160040  add.s       $f1, $f0, $f22 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x189BA0u;
        goto label_189ba0;
    }
    ctx->pc = 0x189B98u;
    {
        const bool branch_taken_0x189b98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x189B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189B98u;
        // 0x189b9c: 0x46160040  add.s       $f1, $f0, $f22 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x189b98) {
            ctx->pc = 0x189BC4u;
            goto label_189bc4;
        }
    }
    ctx->pc = 0x189BA0u;
label_189ba0:
    // 0x189ba0: 0x46160080  add.s       $f2, $f0, $f22
    ctx->pc = 0x189ba0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_189ba4:
    // 0x189ba4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x189ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_189ba8:
    // 0x189ba8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x189ba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_189bac:
    // 0x189bac: 0x0  nop
    ctx->pc = 0x189bacu;
    // NOP
label_189bb0:
    // 0x189bb0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x189bb0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_189bb4:
    // 0x189bb4: 0x0  nop
    ctx->pc = 0x189bb4u;
    // NOP
label_189bb8:
    // 0x189bb8: 0x0  nop
    ctx->pc = 0x189bb8u;
    // NOP
label_189bbc:
    // 0x189bbc: 0x10000006  b           . + 4 + (0x6 << 2)
label_189bc0:
    if (ctx->pc == 0x189BC0u) {
        ctx->pc = 0x189BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189BBCu;
        // 0x189bc0: 0x46001101  sub.s       $f4, $f2, $f0 (Delay Slot)
        ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x189BC4u;
        goto label_189bc4;
    }
    ctx->pc = 0x189BBCu;
    {
        const bool branch_taken_0x189bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189BBCu;
        // 0x189bc0: 0x46001101  sub.s       $f4, $f2, $f0 (Delay Slot)
        ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x189bbc) {
            ctx->pc = 0x189BD8u;
            goto label_189bd8;
        }
    }
    ctx->pc = 0x189BC4u;
label_189bc4:
    // 0x189bc4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x189bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_189bc8:
    // 0x189bc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x189bc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_189bcc:
    // 0x189bcc: 0x0  nop
    ctx->pc = 0x189bccu;
    // NOP
label_189bd0:
    // 0x189bd0: 0x4600b003  div.s       $f0, $f22, $f0
    ctx->pc = 0x189bd0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[0] = ctx->f[22] / ctx->f[0];
label_189bd4:
    // 0x189bd4: 0x46000901  sub.s       $f4, $f1, $f0
    ctx->pc = 0x189bd4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_189bd8:
    // 0x189bd8: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x189bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_189bdc:
    // 0x189bdc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x189bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_189be0:
    // 0x189be0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x189be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_189be4:
    // 0x189be4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_189be8:
    if (ctx->pc == 0x189BE8u) {
        ctx->pc = 0x189BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189BE4u;
        // 0x189be8: 0x3c024348  lui         $v0, 0x4348 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189BECu;
        goto label_189bec;
    }
    ctx->pc = 0x189BE4u;
    {
        const bool branch_taken_0x189be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189BE4u;
        // 0x189be8: 0x3c024348  lui         $v0, 0x4348 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189be4) {
            ctx->pc = 0x189BFCu;
            goto label_189bfc;
        }
    }
    ctx->pc = 0x189BECu;
label_189bec:
    // 0x189bec: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x189becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_189bf0:
    // 0x189bf0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x189bf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_189bf4:
    // 0x189bf4: 0x10000002  b           . + 4 + (0x2 << 2)
label_189bf8:
    if (ctx->pc == 0x189BF8u) {
        ctx->pc = 0x189BFCu;
        goto label_189bfc;
    }
    ctx->pc = 0x189BF4u;
    {
        const bool branch_taken_0x189bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189bf4) {
            ctx->pc = 0x189C00u;
            goto label_189c00;
        }
    }
    ctx->pc = 0x189BFCu;
label_189bfc:
    // 0x189bfc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x189bfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_189c00:
    // 0x189c00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x189c00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_189c04:
    // 0x189c04: 0x0  nop
    ctx->pc = 0x189c04u;
    // NOP
label_189c08:
    // 0x189c08: 0x46040032  c.eq.s      $f0, $f4
    ctx->pc = 0x189c08u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_189c0c:
    // 0x189c0c: 0x0  nop
    ctx->pc = 0x189c0cu;
    // NOP
label_189c10:
    // 0x189c10: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_189c14:
    if (ctx->pc == 0x189C14u) {
        ctx->pc = 0x189C18u;
        goto label_189c18;
    }
    ctx->pc = 0x189C10u;
    {
        const bool branch_taken_0x189c10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x189c10) {
            ctx->pc = 0x189C2Cu;
            goto label_189c2c;
        }
    }
    ctx->pc = 0x189C18u;
label_189c18:
    // 0x189c18: 0xc6200150  lwc1        $f0, 0x150($s1)
    ctx->pc = 0x189c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_189c1c:
    // 0x189c1c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x189c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_189c20:
    // 0x189c20: 0xc6200158  lwc1        $f0, 0x158($s1)
    ctx->pc = 0x189c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_189c24:
    // 0x189c24: 0x10000013  b           . + 4 + (0x13 << 2)
label_189c28:
    if (ctx->pc == 0x189C28u) {
        ctx->pc = 0x189C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C24u;
        // 0x189c28: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x189C2Cu;
        goto label_189c2c;
    }
    ctx->pc = 0x189C24u;
    {
        const bool branch_taken_0x189c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C24u;
        // 0x189c28: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x189c24) {
            ctx->pc = 0x189C74u;
            goto label_189c74;
        }
    }
    ctx->pc = 0x189C2Cu;
label_189c2c:
    // 0x189c2c: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x189c2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_189c30:
    // 0x189c30: 0x0  nop
    ctx->pc = 0x189c30u;
    // NOP
label_189c34:
    // 0x189c34: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_189c38:
    if (ctx->pc == 0x189C38u) {
        ctx->pc = 0x189C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C34u;
        // 0x189c38: 0x4603a042  mul.s       $f1, $f20, $f3 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x189C3Cu;
        goto label_189c3c;
    }
    ctx->pc = 0x189C34u;
    {
        const bool branch_taken_0x189c34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x189C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C34u;
        // 0x189c38: 0x4603a042  mul.s       $f1, $f20, $f3 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x189c34) {
            ctx->pc = 0x189C50u;
            goto label_189c50;
        }
    }
    ctx->pc = 0x189C3Cu;
label_189c3c:
    // 0x189c3c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x189c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_189c40:
    // 0x189c40: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x189c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_189c44:
    // 0x189c44: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x189c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_189c48:
    // 0x189c48: 0x1000000a  b           . + 4 + (0xA << 2)
label_189c4c:
    if (ctx->pc == 0x189C4Cu) {
        ctx->pc = 0x189C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C48u;
        // 0x189c4c: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x189C50u;
        goto label_189c50;
    }
    ctx->pc = 0x189C48u;
    {
        const bool branch_taken_0x189c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C48u;
        // 0x189c4c: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x189c48) {
            ctx->pc = 0x189C74u;
            goto label_189c74;
        }
    }
    ctx->pc = 0x189C50u;
label_189c50:
    // 0x189c50: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x189c50u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[4];
label_189c54:
    // 0x189c54: 0x4603a802  mul.s       $f0, $f21, $f3
    ctx->pc = 0x189c54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[3]);
label_189c58:
    // 0x189c58: 0xc6220150  lwc1        $f2, 0x150($s1)
    ctx->pc = 0x189c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_189c5c:
    // 0x189c5c: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x189c5cu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
label_189c60:
    // 0x189c60: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x189c60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_189c64:
    // 0x189c64: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x189c64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_189c68:
    // 0x189c68: 0xc6210158  lwc1        $f1, 0x158($s1)
    ctx->pc = 0x189c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_189c6c:
    // 0x189c6c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x189c6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_189c70:
    // 0x189c70: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x189c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_189c74:
    // 0x189c74: 0x92230231  lbu         $v1, 0x231($s1)
    ctx->pc = 0x189c74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 561)));
label_189c78:
    // 0x189c78: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x189c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_189c7c:
    // 0x189c7c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_189c80:
    if (ctx->pc == 0x189C80u) {
        ctx->pc = 0x189C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C7Cu;
        // 0x189c80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189C84u;
        goto label_189c84;
    }
    ctx->pc = 0x189C7Cu;
    {
        const bool branch_taken_0x189c7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x189C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C7Cu;
        // 0x189c80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189c7c) {
            ctx->pc = 0x189C9Cu;
            goto label_189c9c;
        }
    }
    ctx->pc = 0x189C84u;
label_189c84:
    // 0x189c84: 0x92220246  lbu         $v0, 0x246($s1)
    ctx->pc = 0x189c84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 582)));
label_189c88:
    // 0x189c88: 0x28420007  slti        $v0, $v0, 0x7
    ctx->pc = 0x189c88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
label_189c8c:
    // 0x189c8c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_189c90:
    if (ctx->pc == 0x189C90u) {
        ctx->pc = 0x189C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C8Cu;
        // 0x189c90: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189C94u;
        goto label_189c94;
    }
    ctx->pc = 0x189C8Cu;
    {
        const bool branch_taken_0x189c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C8Cu;
        // 0x189c90: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189c8c) {
            ctx->pc = 0x189C9Cu;
            goto label_189c9c;
        }
    }
    ctx->pc = 0x189C94u;
label_189c94:
    // 0x189c94: 0x10000001  b           . + 4 + (0x1 << 2)
label_189c98:
    if (ctx->pc == 0x189C98u) {
        ctx->pc = 0x189C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C94u;
        // 0x189c98: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189C9Cu;
        goto label_189c9c;
    }
    ctx->pc = 0x189C94u;
    {
        const bool branch_taken_0x189c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C94u;
        // 0x189c98: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189c94) {
            ctx->pc = 0x189C9Cu;
            goto label_189c9c;
        }
    }
    ctx->pc = 0x189C9Cu;
label_189c9c:
    // 0x189c9c: 0x26240150  addiu       $a0, $s1, 0x150
    ctx->pc = 0x189c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
label_189ca0:
    // 0x189ca0: 0xc04259c  jal         func_109670
label_189ca4:
    if (ctx->pc == 0x189CA4u) {
        ctx->pc = 0x189CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189CA0u;
        // 0x189ca4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189CA8u;
        goto label_189ca8;
    }
    ctx->pc = 0x189CA0u;
    SET_GPR_U32(ctx, 31, 0x189CA8u);
    ctx->pc = 0x189CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189CA0u;
    // 0x189ca4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109670u, 0x189CA0u, 0x189CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189CA8u;
label_189ca8:
    // 0x189ca8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x189ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_189cac:
    // 0x189cac: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x189cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_189cb0:
    // 0x189cb0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x189cb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_189cb4:
    // 0x189cb4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x189cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_189cb8:
    // 0x189cb8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x189cb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_189cbc:
    // 0x189cbc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x189cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_189cc0:
    // 0x189cc0: 0x3e00008  jr          $ra
label_189cc4:
    if (ctx->pc == 0x189CC4u) {
        ctx->pc = 0x189CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189CC0u;
        // 0x189cc4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189CC8u;
        goto label_189cc8;
    }
    ctx->pc = 0x189CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189CC0u;
        // 0x189cc4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189CC8u;
label_189cc8:
    // 0x189cc8: 0x0  nop
    ctx->pc = 0x189cc8u;
    // NOP
label_189ccc:
    // 0x189ccc: 0x0  nop
    ctx->pc = 0x189cccu;
    // NOP
label_189cd0:
    // 0x189cd0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x189cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_189cd4:
    // 0x189cd4: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x189cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_189cd8:
    // 0x189cd8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x189cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_189cdc:
    // 0x189cdc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x189cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_189ce0:
    // 0x189ce0: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x189ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_189ce4:
    // 0x189ce4: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x189ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_189ce8:
    // 0x189ce8: 0x241e0009  addiu       $fp, $zero, 0x9
    ctx->pc = 0x189ce8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_189cec:
    // 0x189cec: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x189cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    ctx->pc = 0x189cf0u;
    return;
}
