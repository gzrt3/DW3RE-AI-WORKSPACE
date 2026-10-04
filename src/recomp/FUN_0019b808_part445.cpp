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

// Function: FUN_0019b808
// Address: 0x19b808 - 0x29b810
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b808_part445(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2744c8u: goto label_2744c8;
        case 0x2744ccu: goto label_2744cc;
        case 0x2744d0u: goto label_2744d0;
        case 0x2744d4u: goto label_2744d4;
        case 0x2744d8u: goto label_2744d8;
        case 0x2744dcu: goto label_2744dc;
        case 0x2744e0u: goto label_2744e0;
        case 0x2744e4u: goto label_2744e4;
        case 0x2744e8u: goto label_2744e8;
        case 0x2744ecu: goto label_2744ec;
        case 0x2744f0u: goto label_2744f0;
        case 0x2744f4u: goto label_2744f4;
        case 0x2744f8u: goto label_2744f8;
        case 0x2744fcu: goto label_2744fc;
        case 0x274500u: goto label_274500;
        case 0x274504u: goto label_274504;
        case 0x274508u: goto label_274508;
        case 0x27450cu: goto label_27450c;
        case 0x274510u: goto label_274510;
        case 0x274514u: goto label_274514;
        case 0x274518u: goto label_274518;
        case 0x27451cu: goto label_27451c;
        case 0x274520u: goto label_274520;
        case 0x274524u: goto label_274524;
        case 0x274528u: goto label_274528;
        case 0x27452cu: goto label_27452c;
        case 0x274530u: goto label_274530;
        case 0x274534u: goto label_274534;
        case 0x274538u: goto label_274538;
        case 0x27453cu: goto label_27453c;
        case 0x274540u: goto label_274540;
        case 0x274544u: goto label_274544;
        case 0x274548u: goto label_274548;
        case 0x27454cu: goto label_27454c;
        case 0x274550u: goto label_274550;
        case 0x274554u: goto label_274554;
        case 0x274558u: goto label_274558;
        case 0x27455cu: goto label_27455c;
        case 0x274560u: goto label_274560;
        case 0x274564u: goto label_274564;
        case 0x274568u: goto label_274568;
        case 0x27456cu: goto label_27456c;
        case 0x274570u: goto label_274570;
        case 0x274574u: goto label_274574;
        case 0x274578u: goto label_274578;
        case 0x27457cu: goto label_27457c;
        case 0x274580u: goto label_274580;
        case 0x274584u: goto label_274584;
        case 0x274588u: goto label_274588;
        case 0x27458cu: goto label_27458c;
        case 0x274590u: goto label_274590;
        case 0x274594u: goto label_274594;
        case 0x274598u: goto label_274598;
        case 0x27459cu: goto label_27459c;
        case 0x2745a0u: goto label_2745a0;
        case 0x2745a4u: goto label_2745a4;
        case 0x2745a8u: goto label_2745a8;
        case 0x2745acu: goto label_2745ac;
        case 0x2745b0u: goto label_2745b0;
        case 0x2745b4u: goto label_2745b4;
        case 0x2745b8u: goto label_2745b8;
        case 0x2745bcu: goto label_2745bc;
        case 0x2745c0u: goto label_2745c0;
        case 0x2745c4u: goto label_2745c4;
        case 0x2745c8u: goto label_2745c8;
        case 0x2745ccu: goto label_2745cc;
        case 0x2745d0u: goto label_2745d0;
        case 0x2745d4u: goto label_2745d4;
        case 0x2745d8u: goto label_2745d8;
        case 0x2745dcu: goto label_2745dc;
        case 0x2745e0u: goto label_2745e0;
        case 0x2745e4u: goto label_2745e4;
        case 0x2745e8u: goto label_2745e8;
        case 0x2745ecu: goto label_2745ec;
        case 0x2745f0u: goto label_2745f0;
        case 0x2745f4u: goto label_2745f4;
        case 0x2745f8u: goto label_2745f8;
        case 0x2745fcu: goto label_2745fc;
        case 0x274600u: goto label_274600;
        case 0x274604u: goto label_274604;
        case 0x274608u: goto label_274608;
        case 0x27460cu: goto label_27460c;
        case 0x274610u: goto label_274610;
        case 0x274614u: goto label_274614;
        case 0x274618u: goto label_274618;
        case 0x27461cu: goto label_27461c;
        case 0x274620u: goto label_274620;
        case 0x274624u: goto label_274624;
        case 0x274628u: goto label_274628;
        case 0x27462cu: goto label_27462c;
        case 0x274630u: goto label_274630;
        case 0x274634u: goto label_274634;
        case 0x274638u: goto label_274638;
        case 0x27463cu: goto label_27463c;
        case 0x274640u: goto label_274640;
        case 0x274644u: goto label_274644;
        case 0x274648u: goto label_274648;
        case 0x27464cu: goto label_27464c;
        case 0x274650u: goto label_274650;
        case 0x274654u: goto label_274654;
        case 0x274658u: goto label_274658;
        case 0x27465cu: goto label_27465c;
        case 0x274660u: goto label_274660;
        case 0x274664u: goto label_274664;
        case 0x274668u: goto label_274668;
        case 0x27466cu: goto label_27466c;
        case 0x274670u: goto label_274670;
        case 0x274674u: goto label_274674;
        case 0x274678u: goto label_274678;
        case 0x27467cu: goto label_27467c;
        case 0x274680u: goto label_274680;
        case 0x274684u: goto label_274684;
        case 0x274688u: goto label_274688;
        case 0x27468cu: goto label_27468c;
        case 0x274690u: goto label_274690;
        case 0x274694u: goto label_274694;
        case 0x274698u: goto label_274698;
        case 0x27469cu: goto label_27469c;
        case 0x2746a0u: goto label_2746a0;
        case 0x2746a4u: goto label_2746a4;
        case 0x2746a8u: goto label_2746a8;
        case 0x2746acu: goto label_2746ac;
        case 0x2746b0u: goto label_2746b0;
        case 0x2746b4u: goto label_2746b4;
        case 0x2746b8u: goto label_2746b8;
        case 0x2746bcu: goto label_2746bc;
        case 0x2746c0u: goto label_2746c0;
        case 0x2746c4u: goto label_2746c4;
        case 0x2746c8u: goto label_2746c8;
        case 0x2746ccu: goto label_2746cc;
        case 0x2746d0u: goto label_2746d0;
        case 0x2746d4u: goto label_2746d4;
        case 0x2746d8u: goto label_2746d8;
        case 0x2746dcu: goto label_2746dc;
        case 0x2746e0u: goto label_2746e0;
        case 0x2746e4u: goto label_2746e4;
        case 0x2746e8u: goto label_2746e8;
        case 0x2746ecu: goto label_2746ec;
        case 0x2746f0u: goto label_2746f0;
        case 0x2746f4u: goto label_2746f4;
        case 0x2746f8u: goto label_2746f8;
        case 0x2746fcu: goto label_2746fc;
        case 0x274700u: goto label_274700;
        case 0x274704u: goto label_274704;
        case 0x274708u: goto label_274708;
        case 0x27470cu: goto label_27470c;
        case 0x274710u: goto label_274710;
        case 0x274714u: goto label_274714;
        case 0x274718u: goto label_274718;
        case 0x27471cu: goto label_27471c;
        case 0x274720u: goto label_274720;
        case 0x274724u: goto label_274724;
        case 0x274728u: goto label_274728;
        case 0x27472cu: goto label_27472c;
        case 0x274730u: goto label_274730;
        case 0x274734u: goto label_274734;
        case 0x274738u: goto label_274738;
        case 0x27473cu: goto label_27473c;
        case 0x274740u: goto label_274740;
        case 0x274744u: goto label_274744;
        case 0x274748u: goto label_274748;
        case 0x27474cu: goto label_27474c;
        case 0x274750u: goto label_274750;
        case 0x274754u: goto label_274754;
        case 0x274758u: goto label_274758;
        case 0x27475cu: goto label_27475c;
        case 0x274760u: goto label_274760;
        case 0x274764u: goto label_274764;
        case 0x274768u: goto label_274768;
        case 0x27476cu: goto label_27476c;
        case 0x274770u: goto label_274770;
        case 0x274774u: goto label_274774;
        case 0x274778u: goto label_274778;
        case 0x27477cu: goto label_27477c;
        case 0x274780u: goto label_274780;
        case 0x274784u: goto label_274784;
        case 0x274788u: goto label_274788;
        case 0x27478cu: goto label_27478c;
        case 0x274790u: goto label_274790;
        case 0x274794u: goto label_274794;
        case 0x274798u: goto label_274798;
        case 0x27479cu: goto label_27479c;
        case 0x2747a0u: goto label_2747a0;
        case 0x2747a4u: goto label_2747a4;
        case 0x2747a8u: goto label_2747a8;
        case 0x2747acu: goto label_2747ac;
        case 0x2747b0u: goto label_2747b0;
        case 0x2747b4u: goto label_2747b4;
        case 0x2747b8u: goto label_2747b8;
        case 0x2747bcu: goto label_2747bc;
        case 0x2747c0u: goto label_2747c0;
        case 0x2747c4u: goto label_2747c4;
        case 0x2747c8u: goto label_2747c8;
        case 0x2747ccu: goto label_2747cc;
        case 0x2747d0u: goto label_2747d0;
        case 0x2747d4u: goto label_2747d4;
        case 0x2747d8u: goto label_2747d8;
        case 0x2747dcu: goto label_2747dc;
        case 0x2747e0u: goto label_2747e0;
        case 0x2747e4u: goto label_2747e4;
        case 0x2747e8u: goto label_2747e8;
        case 0x2747ecu: goto label_2747ec;
        case 0x2747f0u: goto label_2747f0;
        case 0x2747f4u: goto label_2747f4;
        case 0x2747f8u: goto label_2747f8;
        case 0x2747fcu: goto label_2747fc;
        case 0x274800u: goto label_274800;
        case 0x274804u: goto label_274804;
        case 0x274808u: goto label_274808;
        case 0x27480cu: goto label_27480c;
        case 0x274810u: goto label_274810;
        case 0x274814u: goto label_274814;
        case 0x274818u: goto label_274818;
        case 0x27481cu: goto label_27481c;
        case 0x274820u: goto label_274820;
        case 0x274824u: goto label_274824;
        case 0x274828u: goto label_274828;
        case 0x27482cu: goto label_27482c;
        case 0x274830u: goto label_274830;
        case 0x274834u: goto label_274834;
        case 0x274838u: goto label_274838;
        case 0x27483cu: goto label_27483c;
        case 0x274840u: goto label_274840;
        case 0x274844u: goto label_274844;
        case 0x274848u: goto label_274848;
        case 0x27484cu: goto label_27484c;
        case 0x274850u: goto label_274850;
        case 0x274854u: goto label_274854;
        case 0x274858u: goto label_274858;
        case 0x27485cu: goto label_27485c;
        case 0x274860u: goto label_274860;
        case 0x274864u: goto label_274864;
        case 0x274868u: goto label_274868;
        case 0x27486cu: goto label_27486c;
        case 0x274870u: goto label_274870;
        case 0x274874u: goto label_274874;
        case 0x274878u: goto label_274878;
        case 0x27487cu: goto label_27487c;
        case 0x274880u: goto label_274880;
        case 0x274884u: goto label_274884;
        case 0x274888u: goto label_274888;
        case 0x27488cu: goto label_27488c;
        case 0x274890u: goto label_274890;
        case 0x274894u: goto label_274894;
        case 0x274898u: goto label_274898;
        case 0x27489cu: goto label_27489c;
        case 0x2748a0u: goto label_2748a0;
        case 0x2748a4u: goto label_2748a4;
        case 0x2748a8u: goto label_2748a8;
        case 0x2748acu: goto label_2748ac;
        case 0x2748b0u: goto label_2748b0;
        case 0x2748b4u: goto label_2748b4;
        case 0x2748b8u: goto label_2748b8;
        case 0x2748bcu: goto label_2748bc;
        case 0x2748c0u: goto label_2748c0;
        case 0x2748c4u: goto label_2748c4;
        case 0x2748c8u: goto label_2748c8;
        case 0x2748ccu: goto label_2748cc;
        case 0x2748d0u: goto label_2748d0;
        case 0x2748d4u: goto label_2748d4;
        case 0x2748d8u: goto label_2748d8;
        case 0x2748dcu: goto label_2748dc;
        case 0x2748e0u: goto label_2748e0;
        case 0x2748e4u: goto label_2748e4;
        case 0x2748e8u: goto label_2748e8;
        case 0x2748ecu: goto label_2748ec;
        case 0x2748f0u: goto label_2748f0;
        case 0x2748f4u: goto label_2748f4;
        case 0x2748f8u: goto label_2748f8;
        case 0x2748fcu: goto label_2748fc;
        case 0x274900u: goto label_274900;
        case 0x274904u: goto label_274904;
        case 0x274908u: goto label_274908;
        case 0x27490cu: goto label_27490c;
        case 0x274910u: goto label_274910;
        case 0x274914u: goto label_274914;
        case 0x274918u: goto label_274918;
        case 0x27491cu: goto label_27491c;
        case 0x274920u: goto label_274920;
        case 0x274924u: goto label_274924;
        case 0x274928u: goto label_274928;
        case 0x27492cu: goto label_27492c;
        case 0x274930u: goto label_274930;
        case 0x274934u: goto label_274934;
        case 0x274938u: goto label_274938;
        case 0x27493cu: goto label_27493c;
        case 0x274940u: goto label_274940;
        case 0x274944u: goto label_274944;
        case 0x274948u: goto label_274948;
        case 0x27494cu: goto label_27494c;
        case 0x274950u: goto label_274950;
        case 0x274954u: goto label_274954;
        case 0x274958u: goto label_274958;
        case 0x27495cu: goto label_27495c;
        case 0x274960u: goto label_274960;
        case 0x274964u: goto label_274964;
        case 0x274968u: goto label_274968;
        case 0x27496cu: goto label_27496c;
        case 0x274970u: goto label_274970;
        case 0x274974u: goto label_274974;
        case 0x274978u: goto label_274978;
        case 0x27497cu: goto label_27497c;
        case 0x274980u: goto label_274980;
        case 0x274984u: goto label_274984;
        case 0x274988u: goto label_274988;
        case 0x27498cu: goto label_27498c;
        case 0x274990u: goto label_274990;
        case 0x274994u: goto label_274994;
        case 0x274998u: goto label_274998;
        case 0x27499cu: goto label_27499c;
        case 0x2749a0u: goto label_2749a0;
        case 0x2749a4u: goto label_2749a4;
        case 0x2749a8u: goto label_2749a8;
        case 0x2749acu: goto label_2749ac;
        case 0x2749b0u: goto label_2749b0;
        case 0x2749b4u: goto label_2749b4;
        case 0x2749b8u: goto label_2749b8;
        case 0x2749bcu: goto label_2749bc;
        case 0x2749c0u: goto label_2749c0;
        case 0x2749c4u: goto label_2749c4;
        case 0x2749c8u: goto label_2749c8;
        case 0x2749ccu: goto label_2749cc;
        case 0x2749d0u: goto label_2749d0;
        case 0x2749d4u: goto label_2749d4;
        case 0x2749d8u: goto label_2749d8;
        case 0x2749dcu: goto label_2749dc;
        case 0x2749e0u: goto label_2749e0;
        case 0x2749e4u: goto label_2749e4;
        case 0x2749e8u: goto label_2749e8;
        case 0x2749ecu: goto label_2749ec;
        case 0x2749f0u: goto label_2749f0;
        case 0x2749f4u: goto label_2749f4;
        case 0x2749f8u: goto label_2749f8;
        case 0x2749fcu: goto label_2749fc;
        case 0x274a00u: goto label_274a00;
        case 0x274a04u: goto label_274a04;
        case 0x274a08u: goto label_274a08;
        case 0x274a0cu: goto label_274a0c;
        case 0x274a10u: goto label_274a10;
        case 0x274a14u: goto label_274a14;
        case 0x274a18u: goto label_274a18;
        case 0x274a1cu: goto label_274a1c;
        case 0x274a20u: goto label_274a20;
        case 0x274a24u: goto label_274a24;
        case 0x274a28u: goto label_274a28;
        case 0x274a2cu: goto label_274a2c;
        case 0x274a30u: goto label_274a30;
        case 0x274a34u: goto label_274a34;
        case 0x274a38u: goto label_274a38;
        case 0x274a3cu: goto label_274a3c;
        case 0x274a40u: goto label_274a40;
        case 0x274a44u: goto label_274a44;
        case 0x274a48u: goto label_274a48;
        case 0x274a4cu: goto label_274a4c;
        case 0x274a50u: goto label_274a50;
        case 0x274a54u: goto label_274a54;
        case 0x274a58u: goto label_274a58;
        case 0x274a5cu: goto label_274a5c;
        case 0x274a60u: goto label_274a60;
        case 0x274a64u: goto label_274a64;
        case 0x274a68u: goto label_274a68;
        case 0x274a6cu: goto label_274a6c;
        case 0x274a70u: goto label_274a70;
        case 0x274a74u: goto label_274a74;
        case 0x274a78u: goto label_274a78;
        case 0x274a7cu: goto label_274a7c;
        case 0x274a80u: goto label_274a80;
        case 0x274a84u: goto label_274a84;
        case 0x274a88u: goto label_274a88;
        case 0x274a8cu: goto label_274a8c;
        case 0x274a90u: goto label_274a90;
        case 0x274a94u: goto label_274a94;
        case 0x274a98u: goto label_274a98;
        case 0x274a9cu: goto label_274a9c;
        case 0x274aa0u: goto label_274aa0;
        case 0x274aa4u: goto label_274aa4;
        case 0x274aa8u: goto label_274aa8;
        case 0x274aacu: goto label_274aac;
        case 0x274ab0u: goto label_274ab0;
        case 0x274ab4u: goto label_274ab4;
        case 0x274ab8u: goto label_274ab8;
        case 0x274abcu: goto label_274abc;
        case 0x274ac0u: goto label_274ac0;
        case 0x274ac4u: goto label_274ac4;
        case 0x274ac8u: goto label_274ac8;
        case 0x274accu: goto label_274acc;
        case 0x274ad0u: goto label_274ad0;
        case 0x274ad4u: goto label_274ad4;
        case 0x274ad8u: goto label_274ad8;
        case 0x274adcu: goto label_274adc;
        case 0x274ae0u: goto label_274ae0;
        case 0x274ae4u: goto label_274ae4;
        case 0x274ae8u: goto label_274ae8;
        case 0x274aecu: goto label_274aec;
        case 0x274af0u: goto label_274af0;
        case 0x274af4u: goto label_274af4;
        case 0x274af8u: goto label_274af8;
        case 0x274afcu: goto label_274afc;
        case 0x274b00u: goto label_274b00;
        case 0x274b04u: goto label_274b04;
        case 0x274b08u: goto label_274b08;
        case 0x274b0cu: goto label_274b0c;
        case 0x274b10u: goto label_274b10;
        case 0x274b14u: goto label_274b14;
        case 0x274b18u: goto label_274b18;
        case 0x274b1cu: goto label_274b1c;
        case 0x274b20u: goto label_274b20;
        case 0x274b24u: goto label_274b24;
        case 0x274b28u: goto label_274b28;
        case 0x274b2cu: goto label_274b2c;
        case 0x274b30u: goto label_274b30;
        case 0x274b34u: goto label_274b34;
        case 0x274b38u: goto label_274b38;
        case 0x274b3cu: goto label_274b3c;
        case 0x274b40u: goto label_274b40;
        case 0x274b44u: goto label_274b44;
        case 0x274b48u: goto label_274b48;
        case 0x274b4cu: goto label_274b4c;
        case 0x274b50u: goto label_274b50;
        case 0x274b54u: goto label_274b54;
        case 0x274b58u: goto label_274b58;
        case 0x274b5cu: goto label_274b5c;
        case 0x274b60u: goto label_274b60;
        case 0x274b64u: goto label_274b64;
        case 0x274b68u: goto label_274b68;
        case 0x274b6cu: goto label_274b6c;
        case 0x274b70u: goto label_274b70;
        case 0x274b74u: goto label_274b74;
        case 0x274b78u: goto label_274b78;
        case 0x274b7cu: goto label_274b7c;
        case 0x274b80u: goto label_274b80;
        case 0x274b84u: goto label_274b84;
        case 0x274b88u: goto label_274b88;
        case 0x274b8cu: goto label_274b8c;
        case 0x274b90u: goto label_274b90;
        case 0x274b94u: goto label_274b94;
        case 0x274b98u: goto label_274b98;
        case 0x274b9cu: goto label_274b9c;
        case 0x274ba0u: goto label_274ba0;
        case 0x274ba4u: goto label_274ba4;
        case 0x274ba8u: goto label_274ba8;
        case 0x274bacu: goto label_274bac;
        case 0x274bb0u: goto label_274bb0;
        case 0x274bb4u: goto label_274bb4;
        case 0x274bb8u: goto label_274bb8;
        case 0x274bbcu: goto label_274bbc;
        case 0x274bc0u: goto label_274bc0;
        case 0x274bc4u: goto label_274bc4;
        case 0x274bc8u: goto label_274bc8;
        case 0x274bccu: goto label_274bcc;
        case 0x274bd0u: goto label_274bd0;
        case 0x274bd4u: goto label_274bd4;
        case 0x274bd8u: goto label_274bd8;
        case 0x274bdcu: goto label_274bdc;
        case 0x274be0u: goto label_274be0;
        case 0x274be4u: goto label_274be4;
        case 0x274be8u: goto label_274be8;
        case 0x274becu: goto label_274bec;
        case 0x274bf0u: goto label_274bf0;
        case 0x274bf4u: goto label_274bf4;
        case 0x274bf8u: goto label_274bf8;
        case 0x274bfcu: goto label_274bfc;
        case 0x274c00u: goto label_274c00;
        case 0x274c04u: goto label_274c04;
        case 0x274c08u: goto label_274c08;
        case 0x274c0cu: goto label_274c0c;
        case 0x274c10u: goto label_274c10;
        case 0x274c14u: goto label_274c14;
        case 0x274c18u: goto label_274c18;
        case 0x274c1cu: goto label_274c1c;
        case 0x274c20u: goto label_274c20;
        case 0x274c24u: goto label_274c24;
        case 0x274c28u: goto label_274c28;
        case 0x274c2cu: goto label_274c2c;
        case 0x274c30u: goto label_274c30;
        case 0x274c34u: goto label_274c34;
        case 0x274c38u: goto label_274c38;
        case 0x274c3cu: goto label_274c3c;
        case 0x274c40u: goto label_274c40;
        case 0x274c44u: goto label_274c44;
        case 0x274c48u: goto label_274c48;
        case 0x274c4cu: goto label_274c4c;
        case 0x274c50u: goto label_274c50;
        case 0x274c54u: goto label_274c54;
        case 0x274c58u: goto label_274c58;
        case 0x274c5cu: goto label_274c5c;
        case 0x274c60u: goto label_274c60;
        case 0x274c64u: goto label_274c64;
        case 0x274c68u: goto label_274c68;
        case 0x274c6cu: goto label_274c6c;
        case 0x274c70u: goto label_274c70;
        case 0x274c74u: goto label_274c74;
        case 0x274c78u: goto label_274c78;
        case 0x274c7cu: goto label_274c7c;
        case 0x274c80u: goto label_274c80;
        case 0x274c84u: goto label_274c84;
        case 0x274c88u: goto label_274c88;
        case 0x274c8cu: goto label_274c8c;
        case 0x274c90u: goto label_274c90;
        case 0x274c94u: goto label_274c94;
        default: return;
    }

label_2744c8:
    // 0x2744c8: 0x0  nop
    ctx->pc = 0x2744c8u;
    // NOP
label_2744cc:
    // 0x2744cc: 0x0  nop
    ctx->pc = 0x2744ccu;
    // NOP
label_2744d0:
    // 0x2744d0: 0xb4b3  tltu        $zero, $zero, 722
    ctx->pc = 0x2744d0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2744d4:
    // 0x2744d4: 0x4c60  .word       0x00004C60                   # add         $t1, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2744d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_2744d8:
    // 0x2744d8: 0x0  nop
    ctx->pc = 0x2744d8u;
    // NOP
label_2744dc:
    // 0x2744dc: 0x0  nop
    ctx->pc = 0x2744dcu;
    // NOP
label_2744e0:
    // 0x2744e0: 0xb4bd  .word       0x0000B4BD                   # INVALID     $zero, $zero, -0x4B43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2744e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2744E0 raw=0x0000B4BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2744e4:
    // 0x2744e4: 0x3580  sll         $a2, $zero, 22
    ctx->pc = 0x2744e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_2744e8:
    // 0x2744e8: 0x0  nop
    ctx->pc = 0x2744e8u;
    // NOP
label_2744ec:
    // 0x2744ec: 0x0  nop
    ctx->pc = 0x2744ecu;
    // NOP
label_2744f0:
    // 0x2744f0: 0xb4c4  .word       0x0000B4C4                   # sllv        $s6, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2744f0u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2744f4:
    // 0x2744f4: 0x5070  tge         $zero, $zero, 321
    ctx->pc = 0x2744f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2744f8:
    // 0x2744f8: 0x0  nop
    ctx->pc = 0x2744f8u;
    // NOP
label_2744fc:
    // 0x2744fc: 0x0  nop
    ctx->pc = 0x2744fcu;
    // NOP
label_274500:
    // 0x274500: 0xb4cf  .word       0x0000B4CF                   # sync.p # 0000B000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274500u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_274504:
    // 0x274504: 0x63c0  sll         $t4, $zero, 15
    ctx->pc = 0x274504u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_274508:
    // 0x274508: 0x0  nop
    ctx->pc = 0x274508u;
    // NOP
label_27450c:
    // 0x27450c: 0x0  nop
    ctx->pc = 0x27450cu;
    // NOP
label_274510:
    // 0x274510: 0xb4dc  .word       0x0000B4DC                   # dmult       $zero, $zero # 0000B4C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274510u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x274510 raw=0x0000B4DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_274514:
    // 0x274514: 0x3670  tge         $zero, $zero, 217
    ctx->pc = 0x274514u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274518:
    // 0x274518: 0x0  nop
    ctx->pc = 0x274518u;
    // NOP
label_27451c:
    // 0x27451c: 0x0  nop
    ctx->pc = 0x27451cu;
    // NOP
label_274520:
    // 0x274520: 0xb4e3  .word       0x0000B4E3                   # negu        $s6, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274520u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_274524:
    // 0x274524: 0x1e40  sll         $v1, $zero, 25
    ctx->pc = 0x274524u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_274528:
    // 0x274528: 0x0  nop
    ctx->pc = 0x274528u;
    // NOP
label_27452c:
    // 0x27452c: 0x0  nop
    ctx->pc = 0x27452cu;
    // NOP
label_274530:
    // 0x274530: 0xb4e7  .word       0x0000B4E7                   # not         $s6, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274530u;
    SET_GPR_U64(ctx, 22, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_274534:
    // 0x274534: 0x3b00  sll         $a3, $zero, 12
    ctx->pc = 0x274534u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_274538:
    // 0x274538: 0x0  nop
    ctx->pc = 0x274538u;
    // NOP
label_27453c:
    // 0x27453c: 0x0  nop
    ctx->pc = 0x27453cu;
    // NOP
label_274540:
    // 0x274540: 0xb4ef  .word       0x0000B4EF                   # dsubu       $s6, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274540u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_274544:
    // 0x274544: 0x61a0  .word       0x000061A0                   # add         $t4, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274544u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_274548:
    // 0x274548: 0x0  nop
    ctx->pc = 0x274548u;
    // NOP
label_27454c:
    // 0x27454c: 0x0  nop
    ctx->pc = 0x27454cu;
    // NOP
label_274550:
    // 0x274550: 0xb4fc  dsll32      $s6, $zero, 19
    ctx->pc = 0x274550u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) << (32 + 19));
label_274554:
    // 0x274554: 0x4640  sll         $t0, $zero, 25
    ctx->pc = 0x274554u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_274558:
    // 0x274558: 0x0  nop
    ctx->pc = 0x274558u;
    // NOP
label_27455c:
    // 0x27455c: 0x0  nop
    ctx->pc = 0x27455cu;
    // NOP
label_274560:
    // 0x274560: 0xb505  .word       0x0000B505                   # INVALID     $zero, $zero, -0x4AFB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274560u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x274560 raw=0x0000B505"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_274564:
    // 0x274564: 0x5170  tge         $zero, $zero, 325
    ctx->pc = 0x274564u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274568:
    // 0x274568: 0x0  nop
    ctx->pc = 0x274568u;
    // NOP
label_27456c:
    // 0x27456c: 0x0  nop
    ctx->pc = 0x27456cu;
    // NOP
label_274570:
    // 0x274570: 0xb510  .word       0x0000B510                   # mfhi        $s6 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274570u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_274574:
    // 0x274574: 0x4620  .word       0x00004620                   # add         $t0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274574u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_274578:
    // 0x274578: 0x0  nop
    ctx->pc = 0x274578u;
    // NOP
label_27457c:
    // 0x27457c: 0x0  nop
    ctx->pc = 0x27457cu;
    // NOP
label_274580:
    // 0x274580: 0xb519  .word       0x0000B519                   # multu       $zero, $zero # 0000B500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274580u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
label_274584:
    // 0x274584: 0x4450  .word       0x00004450                   # mfhi        $t0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274584u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_274588:
    // 0x274588: 0x0  nop
    ctx->pc = 0x274588u;
    // NOP
label_27458c:
    // 0x27458c: 0x0  nop
    ctx->pc = 0x27458cu;
    // NOP
label_274590:
    // 0x274590: 0xb522  .word       0x0000B522                   # neg         $s6, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274590u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 22, (int32_t)tmp); }
label_274594:
    // 0x274594: 0x7d10  .word       0x00007D10                   # mfhi        $t7 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274594u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_274598:
    // 0x274598: 0x0  nop
    ctx->pc = 0x274598u;
    // NOP
label_27459c:
    // 0x27459c: 0x0  nop
    ctx->pc = 0x27459cu;
    // NOP
label_2745a0:
    // 0x2745a0: 0xb532  tlt         $zero, $zero, 724
    ctx->pc = 0x2745a0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2745a4:
    // 0x2745a4: 0x4d10  .word       0x00004D10                   # mfhi        $t1 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2745a4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_2745a8:
    // 0x2745a8: 0x0  nop
    ctx->pc = 0x2745a8u;
    // NOP
label_2745ac:
    // 0x2745ac: 0x0  nop
    ctx->pc = 0x2745acu;
    // NOP
label_2745b0:
    // 0x2745b0: 0xb53c  dsll32      $s6, $zero, 20
    ctx->pc = 0x2745b0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) << (32 + 20));
label_2745b4:
    // 0x2745b4: 0x2830  tge         $zero, $zero, 160
    ctx->pc = 0x2745b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2745b8:
    // 0x2745b8: 0x0  nop
    ctx->pc = 0x2745b8u;
    // NOP
label_2745bc:
    // 0x2745bc: 0x0  nop
    ctx->pc = 0x2745bcu;
    // NOP
label_2745c0:
    // 0x2745c0: 0xb542  srl         $s6, $zero, 21
    ctx->pc = 0x2745c0u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 0), 21));
label_2745c4:
    // 0x2745c4: 0x2a90  .word       0x00002A90                   # mfhi        $a1 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2745c4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_2745c8:
    // 0x2745c8: 0x0  nop
    ctx->pc = 0x2745c8u;
    // NOP
label_2745cc:
    // 0x2745cc: 0x0  nop
    ctx->pc = 0x2745ccu;
    // NOP
label_2745d0:
    // 0x2745d0: 0xb548  .word       0x0000B548                   # jr          $zero # 0000B540 <InstrIdType: CPU_SPECIAL>
label_2745d4:
    if (ctx->pc == 0x2745D4u) {
        ctx->pc = 0x2745D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2745D0u;
        // 0x2745d4: 0xf590  .word       0x0000F590                   # mfhi        $fp # 00000580 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 30, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2745D8u;
        goto label_2745d8;
    }
    ctx->pc = 0x2745D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2745D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2745D0u;
        // 0x2745d4: 0xf590  .word       0x0000F590                   # mfhi        $fp # 00000580 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 30, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2745D0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2745D8u;
label_2745d8:
    // 0x2745d8: 0x0  nop
    ctx->pc = 0x2745d8u;
    // NOP
label_2745dc:
    // 0x2745dc: 0x0  nop
    ctx->pc = 0x2745dcu;
    // NOP
label_2745e0:
    // 0x2745e0: 0xb567  .word       0x0000B567                   # not         $s6, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2745e0u;
    SET_GPR_U64(ctx, 22, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2745e4:
    // 0x2745e4: 0x12bf0  tge         $zero, $at, 175
    ctx->pc = 0x2745e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2745e8:
    // 0x2745e8: 0x0  nop
    ctx->pc = 0x2745e8u;
    // NOP
label_2745ec:
    // 0x2745ec: 0x0  nop
    ctx->pc = 0x2745ecu;
    // NOP
label_2745f0:
    // 0x2745f0: 0xb58d  break       0, 726
    ctx->pc = 0x2745f0u;
    runtime->handleBreak(rdram, ctx);
label_2745f4:
    // 0x2745f4: 0x1d3d0  .word       0x0001D3D0                   # mfhi        $k0 # 000103C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2745f4u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_2745f8:
    // 0x2745f8: 0x0  nop
    ctx->pc = 0x2745f8u;
    // NOP
label_2745fc:
    // 0x2745fc: 0x0  nop
    ctx->pc = 0x2745fcu;
    // NOP
label_274600:
    // 0x274600: 0xb5c8  .word       0x0000B5C8                   # jr          $zero # 0000B5C0 <InstrIdType: CPU_SPECIAL>
label_274604:
    if (ctx->pc == 0x274604u) {
        ctx->pc = 0x274604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274600u;
        // 0x274604: 0xd600  sll         $k0, $zero, 24 (Delay Slot)
        SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274608u;
        goto label_274608;
    }
    ctx->pc = 0x274600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x274604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274600u;
        // 0x274604: 0xd600  sll         $k0, $zero, 24 (Delay Slot)
        SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274600u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x274608u;
label_274608:
    // 0x274608: 0x0  nop
    ctx->pc = 0x274608u;
    // NOP
label_27460c:
    // 0x27460c: 0x0  nop
    ctx->pc = 0x27460cu;
    // NOP
label_274610:
    // 0x274610: 0xb5e3  .word       0x0000B5E3                   # negu        $s6, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274610u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_274614:
    // 0x274614: 0xc9b0  tge         $zero, $zero, 806
    ctx->pc = 0x274614u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274618:
    // 0x274618: 0x0  nop
    ctx->pc = 0x274618u;
    // NOP
label_27461c:
    // 0x27461c: 0x0  nop
    ctx->pc = 0x27461cu;
    // NOP
label_274620:
    // 0x274620: 0xb5fd  .word       0x0000B5FD                   # INVALID     $zero, $zero, -0x4A03 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274620u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x274620 raw=0x0000B5FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_274624:
    // 0x274624: 0xbd60  .word       0x0000BD60                   # add         $s7, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274624u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_274628:
    // 0x274628: 0x0  nop
    ctx->pc = 0x274628u;
    // NOP
label_27462c:
    // 0x27462c: 0x0  nop
    ctx->pc = 0x27462cu;
    // NOP
label_274630:
    // 0x274630: 0xb615  .word       0x0000B615                   # INVALID     $zero, $zero, -0x49EB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274630u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x274630 raw=0x0000B615"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_274634:
    // 0x274634: 0x5a80  sll         $t3, $zero, 10
    ctx->pc = 0x274634u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_274638:
    // 0x274638: 0x0  nop
    ctx->pc = 0x274638u;
    // NOP
label_27463c:
    // 0x27463c: 0x0  nop
    ctx->pc = 0x27463cu;
    // NOP
label_274640:
    // 0x274640: 0xb621  .word       0x0000B621                   # addu        $s6, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274640u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_274644:
    // 0x274644: 0xc540  sll         $t8, $zero, 21
    ctx->pc = 0x274644u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_274648:
    // 0x274648: 0x0  nop
    ctx->pc = 0x274648u;
    // NOP
label_27464c:
    // 0x27464c: 0x0  nop
    ctx->pc = 0x27464cu;
    // NOP
label_274650:
    // 0x274650: 0xb63a  dsrl        $s6, $zero, 24
    ctx->pc = 0x274650u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) >> 24);
label_274654:
    // 0x274654: 0x6fe0  .word       0x00006FE0                   # add         $t5, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274654u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_274658:
    // 0x274658: 0x0  nop
    ctx->pc = 0x274658u;
    // NOP
label_27465c:
    // 0x27465c: 0x0  nop
    ctx->pc = 0x27465cu;
    // NOP
label_274660:
    // 0x274660: 0xb648  .word       0x0000B648                   # jr          $zero # 0000B640 <InstrIdType: CPU_SPECIAL>
label_274664:
    if (ctx->pc == 0x274664u) {
        ctx->pc = 0x274664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274660u;
        // 0x274664: 0x8850  .word       0x00008850                   # mfhi        $s1 # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 17, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x274668u;
        goto label_274668;
    }
    ctx->pc = 0x274660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x274664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274660u;
        // 0x274664: 0x8850  .word       0x00008850                   # mfhi        $s1 # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 17, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274660u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x274668u;
label_274668:
    // 0x274668: 0x0  nop
    ctx->pc = 0x274668u;
    // NOP
label_27466c:
    // 0x27466c: 0x0  nop
    ctx->pc = 0x27466cu;
    // NOP
label_274670:
    // 0x274670: 0xb65a  .word       0x0000B65A                   # div         $s6, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274670u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_274674:
    // 0x274674: 0xe620  .word       0x0000E620                   # add         $gp, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274674u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_274678:
    // 0x274678: 0x0  nop
    ctx->pc = 0x274678u;
    // NOP
label_27467c:
    // 0x27467c: 0x0  nop
    ctx->pc = 0x27467cu;
    // NOP
label_274680:
    // 0x274680: 0xb677  .word       0x0000B677                   # INVALID     $zero, $zero, -0x4989 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274680u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x274680 raw=0x0000B677"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_274684:
    // 0x274684: 0x6ea0  .word       0x00006EA0                   # add         $t5, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274684u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_274688:
    // 0x274688: 0x0  nop
    ctx->pc = 0x274688u;
    // NOP
label_27468c:
    // 0x27468c: 0x0  nop
    ctx->pc = 0x27468cu;
    // NOP
label_274690:
    // 0x274690: 0xb685  .word       0x0000B685                   # INVALID     $zero, $zero, -0x497B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274690u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x274690 raw=0x0000B685"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_274694:
    // 0x274694: 0x1490  .word       0x00001490                   # mfhi        $v0 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274694u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_274698:
    // 0x274698: 0x0  nop
    ctx->pc = 0x274698u;
    // NOP
label_27469c:
    // 0x27469c: 0x0  nop
    ctx->pc = 0x27469cu;
    // NOP
label_2746a0:
    // 0x2746a0: 0xb688  .word       0x0000B688                   # jr          $zero # 0000B680 <InstrIdType: CPU_SPECIAL>
label_2746a4:
    if (ctx->pc == 0x2746A4u) {
        ctx->pc = 0x2746A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2746A0u;
        // 0x2746a4: 0x7e80  sll         $t7, $zero, 26 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2746A8u;
        goto label_2746a8;
    }
    ctx->pc = 0x2746A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2746A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2746A0u;
        // 0x2746a4: 0x7e80  sll         $t7, $zero, 26 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2746A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2746A8u;
label_2746a8:
    // 0x2746a8: 0x0  nop
    ctx->pc = 0x2746a8u;
    // NOP
label_2746ac:
    // 0x2746ac: 0x0  nop
    ctx->pc = 0x2746acu;
    // NOP
label_2746b0:
    // 0x2746b0: 0xb698  .word       0x0000B698                   # mult        $s6, $zero, $zero # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2746b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
label_2746b4:
    // 0x2746b4: 0xb010  mfhi        $s6
    ctx->pc = 0x2746b4u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_2746b8:
    // 0x2746b8: 0x0  nop
    ctx->pc = 0x2746b8u;
    // NOP
label_2746bc:
    // 0x2746bc: 0x0  nop
    ctx->pc = 0x2746bcu;
    // NOP
label_2746c0:
    // 0x2746c0: 0xb6af  .word       0x0000B6AF                   # dsubu       $s6, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2746c0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2746c4:
    // 0x2746c4: 0x7630  tge         $zero, $zero, 472
    ctx->pc = 0x2746c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2746c8:
    // 0x2746c8: 0x0  nop
    ctx->pc = 0x2746c8u;
    // NOP
label_2746cc:
    // 0x2746cc: 0x0  nop
    ctx->pc = 0x2746ccu;
    // NOP
label_2746d0:
    // 0x2746d0: 0xb6be  dsrl32      $s6, $zero, 26
    ctx->pc = 0x2746d0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) >> (32 + 26));
label_2746d4:
    // 0x2746d4: 0xc380  sll         $t8, $zero, 14
    ctx->pc = 0x2746d4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_2746d8:
    // 0x2746d8: 0x0  nop
    ctx->pc = 0x2746d8u;
    // NOP
label_2746dc:
    // 0x2746dc: 0x0  nop
    ctx->pc = 0x2746dcu;
    // NOP
label_2746e0:
    // 0x2746e0: 0xb6d7  .word       0x0000B6D7                   # dsrav       $s6, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2746e0u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2746e4:
    // 0x2746e4: 0x6150  .word       0x00006150                   # mfhi        $t4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2746e4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_2746e8:
    // 0x2746e8: 0x0  nop
    ctx->pc = 0x2746e8u;
    // NOP
label_2746ec:
    // 0x2746ec: 0x0  nop
    ctx->pc = 0x2746ecu;
    // NOP
label_2746f0:
    // 0x2746f0: 0xb6e4  .word       0x0000B6E4                   # and         $s6, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2746f0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2746f4:
    // 0x2746f4: 0x57e0  .word       0x000057E0                   # add         $t2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2746f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_2746f8:
    // 0x2746f8: 0x0  nop
    ctx->pc = 0x2746f8u;
    // NOP
label_2746fc:
    // 0x2746fc: 0x0  nop
    ctx->pc = 0x2746fcu;
    // NOP
label_274700:
    // 0x274700: 0xb6ef  .word       0x0000B6EF                   # dsubu       $s6, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274700u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_274704:
    // 0x274704: 0x3df0  tge         $zero, $zero, 247
    ctx->pc = 0x274704u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274708:
    // 0x274708: 0x0  nop
    ctx->pc = 0x274708u;
    // NOP
label_27470c:
    // 0x27470c: 0x0  nop
    ctx->pc = 0x27470cu;
    // NOP
label_274710:
    // 0x274710: 0xb6f7  .word       0x0000B6F7                   # INVALID     $zero, $zero, -0x4909 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274710u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x274710 raw=0x0000B6F7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_274714:
    // 0x274714: 0xc2a0  .word       0x0000C2A0                   # add         $t8, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274714u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_274718:
    // 0x274718: 0x0  nop
    ctx->pc = 0x274718u;
    // NOP
label_27471c:
    // 0x27471c: 0x0  nop
    ctx->pc = 0x27471cu;
    // NOP
label_274720:
    // 0x274720: 0xb710  .word       0x0000B710                   # mfhi        $s6 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274720u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_274724:
    // 0x274724: 0x6350  .word       0x00006350                   # mfhi        $t4 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274724u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_274728:
    // 0x274728: 0x0  nop
    ctx->pc = 0x274728u;
    // NOP
label_27472c:
    // 0x27472c: 0x0  nop
    ctx->pc = 0x27472cu;
    // NOP
label_274730:
    // 0x274730: 0xb71d  .word       0x0000B71D                   # dmultu      $zero, $zero # 0000B700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274730u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x274730 raw=0x0000B71D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_274734:
    // 0x274734: 0x99a0  .word       0x000099A0                   # add         $s3, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274734u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_274738:
    // 0x274738: 0x0  nop
    ctx->pc = 0x274738u;
    // NOP
label_27473c:
    // 0x27473c: 0x0  nop
    ctx->pc = 0x27473cu;
    // NOP
label_274740:
    // 0x274740: 0xb731  tgeu        $zero, $zero, 732
    ctx->pc = 0x274740u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274744:
    // 0x274744: 0x34c0  sll         $a2, $zero, 19
    ctx->pc = 0x274744u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_274748:
    // 0x274748: 0x0  nop
    ctx->pc = 0x274748u;
    // NOP
label_27474c:
    // 0x27474c: 0x0  nop
    ctx->pc = 0x27474cu;
    // NOP
label_274750:
    // 0x274750: 0xb738  dsll        $s6, $zero, 28
    ctx->pc = 0x274750u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) << 28);
label_274754:
    // 0x274754: 0xc8c0  sll         $t9, $zero, 3
    ctx->pc = 0x274754u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_274758:
    // 0x274758: 0x0  nop
    ctx->pc = 0x274758u;
    // NOP
label_27475c:
    // 0x27475c: 0x0  nop
    ctx->pc = 0x27475cu;
    // NOP
label_274760:
    // 0x274760: 0xb752  .word       0x0000B752                   # mflo        $s6 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274760u;
    SET_GPR_U64(ctx, 22, ctx->lo);
label_274764:
    // 0x274764: 0x9170  tge         $zero, $zero, 581
    ctx->pc = 0x274764u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274768:
    // 0x274768: 0x0  nop
    ctx->pc = 0x274768u;
    // NOP
label_27476c:
    // 0x27476c: 0x0  nop
    ctx->pc = 0x27476cu;
    // NOP
label_274770:
    // 0x274770: 0xb765  .word       0x0000B765                   # move        $s6, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274770u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_274774:
    // 0x274774: 0x9e30  tge         $zero, $zero, 632
    ctx->pc = 0x274774u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274778:
    // 0x274778: 0x0  nop
    ctx->pc = 0x274778u;
    // NOP
label_27477c:
    // 0x27477c: 0x0  nop
    ctx->pc = 0x27477cu;
    // NOP
label_274780:
    // 0x274780: 0xb779  .word       0x0000B779                   # INVALID     $zero, $zero, -0x4887 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274780u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x274780 raw=0x0000B779"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_274784:
    // 0x274784: 0xee90  .word       0x0000EE90                   # mfhi        $sp # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274784u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_274788:
    // 0x274788: 0x0  nop
    ctx->pc = 0x274788u;
    // NOP
label_27478c:
    // 0x27478c: 0x0  nop
    ctx->pc = 0x27478cu;
    // NOP
label_274790:
    // 0x274790: 0xb797  .word       0x0000B797                   # dsrav       $s6, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274790u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_274794:
    // 0x274794: 0x6140  sll         $t4, $zero, 5
    ctx->pc = 0x274794u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_274798:
    // 0x274798: 0x0  nop
    ctx->pc = 0x274798u;
    // NOP
label_27479c:
    // 0x27479c: 0x0  nop
    ctx->pc = 0x27479cu;
    // NOP
label_2747a0:
    // 0x2747a0: 0xb7a4  .word       0x0000B7A4                   # and         $s6, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2747a0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2747a4:
    // 0x2747a4: 0x5fa0  .word       0x00005FA0                   # add         $t3, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2747a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2747a8:
    // 0x2747a8: 0x0  nop
    ctx->pc = 0x2747a8u;
    // NOP
label_2747ac:
    // 0x2747ac: 0x0  nop
    ctx->pc = 0x2747acu;
    // NOP
label_2747b0:
    // 0x2747b0: 0xb7b0  tge         $zero, $zero, 734
    ctx->pc = 0x2747b0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2747b4:
    // 0x2747b4: 0x6f50  .word       0x00006F50                   # mfhi        $t5 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2747b4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_2747b8:
    // 0x2747b8: 0x0  nop
    ctx->pc = 0x2747b8u;
    // NOP
label_2747bc:
    // 0x2747bc: 0x0  nop
    ctx->pc = 0x2747bcu;
    // NOP
label_2747c0:
    // 0x2747c0: 0xb7be  dsrl32      $s6, $zero, 30
    ctx->pc = 0x2747c0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) >> (32 + 30));
label_2747c4:
    // 0x2747c4: 0x6220  .word       0x00006220                   # add         $t4, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2747c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_2747c8:
    // 0x2747c8: 0x0  nop
    ctx->pc = 0x2747c8u;
    // NOP
label_2747cc:
    // 0x2747cc: 0x0  nop
    ctx->pc = 0x2747ccu;
    // NOP
label_2747d0:
    // 0x2747d0: 0xb7cb  .word       0x0000B7CB                   # movn        $s6, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2747d0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
label_2747d4:
    // 0x2747d4: 0x4f10  .word       0x00004F10                   # mfhi        $t1 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2747d4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_2747d8:
    // 0x2747d8: 0x0  nop
    ctx->pc = 0x2747d8u;
    // NOP
label_2747dc:
    // 0x2747dc: 0x0  nop
    ctx->pc = 0x2747dcu;
    // NOP
label_2747e0:
    // 0x2747e0: 0xb7d5  .word       0x0000B7D5                   # INVALID     $zero, $zero, -0x482B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2747e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2747E0 raw=0x0000B7D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2747e4:
    // 0x2747e4: 0xb750  .word       0x0000B750                   # mfhi        $s6 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2747e4u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_2747e8:
    // 0x2747e8: 0x0  nop
    ctx->pc = 0x2747e8u;
    // NOP
label_2747ec:
    // 0x2747ec: 0x0  nop
    ctx->pc = 0x2747ecu;
    // NOP
label_2747f0:
    // 0x2747f0: 0xb7ec  .word       0x0000B7EC                   # dadd        $s6, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2747f0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, r); }
label_2747f4:
    // 0x2747f4: 0x83e0  .word       0x000083E0                   # add         $s0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2747f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2747f8:
    // 0x2747f8: 0x0  nop
    ctx->pc = 0x2747f8u;
    // NOP
label_2747fc:
    // 0x2747fc: 0x0  nop
    ctx->pc = 0x2747fcu;
    // NOP
label_274800:
    // 0x274800: 0xb7fd  .word       0x0000B7FD                   # INVALID     $zero, $zero, -0x4803 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274800u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x274800 raw=0x0000B7FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_274804:
    // 0x274804: 0xcd90  .word       0x0000CD90                   # mfhi        $t9 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274804u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_274808:
    // 0x274808: 0x0  nop
    ctx->pc = 0x274808u;
    // NOP
label_27480c:
    // 0x27480c: 0x0  nop
    ctx->pc = 0x27480cu;
    // NOP
label_274810:
    // 0x274810: 0xb817  dsrav       $s7, $zero, $zero
    ctx->pc = 0x274810u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_274814:
    // 0x274814: 0x1c80  sll         $v1, $zero, 18
    ctx->pc = 0x274814u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_274818:
    // 0x274818: 0x0  nop
    ctx->pc = 0x274818u;
    // NOP
label_27481c:
    // 0x27481c: 0x0  nop
    ctx->pc = 0x27481cu;
    // NOP
label_274820:
    // 0x274820: 0xb81b  divu        $s7, $zero, $zero
    ctx->pc = 0x274820u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_274824:
    // 0x274824: 0x57e0  .word       0x000057E0                   # add         $t2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274824u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_274828:
    // 0x274828: 0x0  nop
    ctx->pc = 0x274828u;
    // NOP
label_27482c:
    // 0x27482c: 0x0  nop
    ctx->pc = 0x27482cu;
    // NOP
label_274830:
    // 0x274830: 0xb826  xor         $s7, $zero, $zero
    ctx->pc = 0x274830u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_274834:
    // 0x274834: 0x4670  tge         $zero, $zero, 281
    ctx->pc = 0x274834u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274838:
    // 0x274838: 0x0  nop
    ctx->pc = 0x274838u;
    // NOP
label_27483c:
    // 0x27483c: 0x0  nop
    ctx->pc = 0x27483cu;
    // NOP
label_274840:
    // 0x274840: 0xb82f  dsubu       $s7, $zero, $zero
    ctx->pc = 0x274840u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_274844:
    // 0x274844: 0x13de0  .word       0x00013DE0                   # add         $a3, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274844u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_274848:
    // 0x274848: 0x0  nop
    ctx->pc = 0x274848u;
    // NOP
label_27484c:
    // 0x27484c: 0x0  nop
    ctx->pc = 0x27484cu;
    // NOP
label_274850:
    // 0x274850: 0xb857  .word       0x0000B857                   # dsrav       $s7, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274850u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_274854:
    // 0x274854: 0x6220  .word       0x00006220                   # add         $t4, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274854u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_274858:
    // 0x274858: 0x0  nop
    ctx->pc = 0x274858u;
    // NOP
label_27485c:
    // 0x27485c: 0x0  nop
    ctx->pc = 0x27485cu;
    // NOP
label_274860:
    // 0x274860: 0xb864  .word       0x0000B864                   # and         $s7, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274860u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_274864:
    // 0x274864: 0x3600  sll         $a2, $zero, 24
    ctx->pc = 0x274864u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_274868:
    // 0x274868: 0x0  nop
    ctx->pc = 0x274868u;
    // NOP
label_27486c:
    // 0x27486c: 0x0  nop
    ctx->pc = 0x27486cu;
    // NOP
label_274870:
    // 0x274870: 0xb86b  .word       0x0000B86B                   # sltu        $s7, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274870u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_274874:
    // 0x274874: 0x3c10  .word       0x00003C10                   # mfhi        $a3 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274874u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_274878:
    // 0x274878: 0x0  nop
    ctx->pc = 0x274878u;
    // NOP
label_27487c:
    // 0x27487c: 0x0  nop
    ctx->pc = 0x27487cu;
    // NOP
label_274880:
    // 0x274880: 0xb873  tltu        $zero, $zero, 737
    ctx->pc = 0x274880u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274884:
    // 0x274884: 0x36c0  sll         $a2, $zero, 27
    ctx->pc = 0x274884u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_274888:
    // 0x274888: 0x0  nop
    ctx->pc = 0x274888u;
    // NOP
label_27488c:
    // 0x27488c: 0x0  nop
    ctx->pc = 0x27488cu;
    // NOP
label_274890:
    // 0x274890: 0xb87a  dsrl        $s7, $zero, 1
    ctx->pc = 0x274890u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) >> 1);
label_274894:
    // 0x274894: 0xff00  sll         $ra, $zero, 28
    ctx->pc = 0x274894u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_274898:
    // 0x274898: 0x0  nop
    ctx->pc = 0x274898u;
    // NOP
label_27489c:
    // 0x27489c: 0x0  nop
    ctx->pc = 0x27489cu;
    // NOP
label_2748a0:
    // 0x2748a0: 0xb89a  .word       0x0000B89A                   # div         $s7, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2748a0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2748a4:
    // 0x2748a4: 0x10ac0  sll         $at, $at, 11
    ctx->pc = 0x2748a4u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), 11));
label_2748a8:
    // 0x2748a8: 0x0  nop
    ctx->pc = 0x2748a8u;
    // NOP
label_2748ac:
    // 0x2748ac: 0x0  nop
    ctx->pc = 0x2748acu;
    // NOP
label_2748b0:
    // 0x2748b0: 0xb8bc  dsll32      $s7, $zero, 2
    ctx->pc = 0x2748b0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) << (32 + 2));
label_2748b4:
    // 0x2748b4: 0xa840  sll         $s5, $zero, 1
    ctx->pc = 0x2748b4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_2748b8:
    // 0x2748b8: 0x0  nop
    ctx->pc = 0x2748b8u;
    // NOP
label_2748bc:
    // 0x2748bc: 0x0  nop
    ctx->pc = 0x2748bcu;
    // NOP
label_2748c0:
    // 0x2748c0: 0xb8d2  .word       0x0000B8D2                   # mflo        $s7 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2748c0u;
    SET_GPR_U64(ctx, 23, ctx->lo);
label_2748c4:
    // 0x2748c4: 0xd580  sll         $k0, $zero, 22
    ctx->pc = 0x2748c4u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_2748c8:
    // 0x2748c8: 0x0  nop
    ctx->pc = 0x2748c8u;
    // NOP
label_2748cc:
    // 0x2748cc: 0x0  nop
    ctx->pc = 0x2748ccu;
    // NOP
label_2748d0:
    // 0x2748d0: 0xb8ed  .word       0x0000B8ED                   # daddu       $s7, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2748d0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2748d4:
    // 0x2748d4: 0x19c90  .word       0x00019C90                   # mfhi        $s3 # 00010480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2748d4u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_2748d8:
    // 0x2748d8: 0x0  nop
    ctx->pc = 0x2748d8u;
    // NOP
label_2748dc:
    // 0x2748dc: 0x0  nop
    ctx->pc = 0x2748dcu;
    // NOP
label_2748e0:
    // 0x2748e0: 0xb921  .word       0x0000B921                   # addu        $s7, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2748e0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2748e4:
    // 0x2748e4: 0x5520  .word       0x00005520                   # add         $t2, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2748e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_2748e8:
    // 0x2748e8: 0x0  nop
    ctx->pc = 0x2748e8u;
    // NOP
label_2748ec:
    // 0x2748ec: 0x0  nop
    ctx->pc = 0x2748ecu;
    // NOP
label_2748f0:
    // 0x2748f0: 0xb92c  .word       0x0000B92C                   # dadd        $s7, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2748f0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, r); }
label_2748f4:
    // 0x2748f4: 0x5840  sll         $t3, $zero, 1
    ctx->pc = 0x2748f4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_2748f8:
    // 0x2748f8: 0x0  nop
    ctx->pc = 0x2748f8u;
    // NOP
label_2748fc:
    // 0x2748fc: 0x0  nop
    ctx->pc = 0x2748fcu;
    // NOP
label_274900:
    // 0x274900: 0xb938  dsll        $s7, $zero, 4
    ctx->pc = 0x274900u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) << 4);
label_274904:
    // 0x274904: 0xdb50  .word       0x0000DB50                   # mfhi        $k1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274904u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_274908:
    // 0x274908: 0x0  nop
    ctx->pc = 0x274908u;
    // NOP
label_27490c:
    // 0x27490c: 0x0  nop
    ctx->pc = 0x27490cu;
    // NOP
label_274910:
    // 0x274910: 0xb954  .word       0x0000B954                   # dsllv       $s7, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274910u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_274914:
    // 0x274914: 0xb890  .word       0x0000B890                   # mfhi        $s7 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274914u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_274918:
    // 0x274918: 0x0  nop
    ctx->pc = 0x274918u;
    // NOP
label_27491c:
    // 0x27491c: 0x0  nop
    ctx->pc = 0x27491cu;
    // NOP
label_274920:
    // 0x274920: 0xb96c  .word       0x0000B96C                   # dadd        $s7, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274920u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, r); }
label_274924:
    // 0x274924: 0x2960  .word       0x00002960                   # add         $a1, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274924u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_274928:
    // 0x274928: 0x0  nop
    ctx->pc = 0x274928u;
    // NOP
label_27492c:
    // 0x27492c: 0x0  nop
    ctx->pc = 0x27492cu;
    // NOP
label_274930:
    // 0x274930: 0xb972  tlt         $zero, $zero, 741
    ctx->pc = 0x274930u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274934:
    // 0x274934: 0x7c00  sll         $t7, $zero, 16
    ctx->pc = 0x274934u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_274938:
    // 0x274938: 0x0  nop
    ctx->pc = 0x274938u;
    // NOP
label_27493c:
    // 0x27493c: 0x0  nop
    ctx->pc = 0x27493cu;
    // NOP
label_274940:
    // 0x274940: 0xb982  srl         $s7, $zero, 6
    ctx->pc = 0x274940u;
    SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 0), 6));
label_274944:
    // 0x274944: 0xd9a0  .word       0x0000D9A0                   # add         $k1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274944u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_274948:
    // 0x274948: 0x0  nop
    ctx->pc = 0x274948u;
    // NOP
label_27494c:
    // 0x27494c: 0x0  nop
    ctx->pc = 0x27494cu;
    // NOP
label_274950:
    // 0x274950: 0xb99e  .word       0x0000B99E                   # ddiv        $s7, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274950u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x274950 raw=0x0000B99E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_274954:
    // 0x274954: 0xe690  .word       0x0000E690                   # mfhi        $gp # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274954u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_274958:
    // 0x274958: 0x0  nop
    ctx->pc = 0x274958u;
    // NOP
label_27495c:
    // 0x27495c: 0x0  nop
    ctx->pc = 0x27495cu;
    // NOP
label_274960:
    // 0x274960: 0xb9bb  dsra        $s7, $zero, 6
    ctx->pc = 0x274960u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 0) >> 6);
label_274964:
    // 0x274964: 0xaf10  .word       0x0000AF10                   # mfhi        $s5 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274964u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_274968:
    // 0x274968: 0x0  nop
    ctx->pc = 0x274968u;
    // NOP
label_27496c:
    // 0x27496c: 0x0  nop
    ctx->pc = 0x27496cu;
    // NOP
label_274970:
    // 0x274970: 0xb9d1  .word       0x0000B9D1                   # mthi        $zero # 0000B9C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274970u;
    ctx->hi = GPR_U64(ctx, 0);
label_274974:
    // 0x274974: 0xd8d0  .word       0x0000D8D0                   # mfhi        $k1 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274974u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_274978:
    // 0x274978: 0x0  nop
    ctx->pc = 0x274978u;
    // NOP
label_27497c:
    // 0x27497c: 0x0  nop
    ctx->pc = 0x27497cu;
    // NOP
label_274980:
    // 0x274980: 0xb9ed  .word       0x0000B9ED                   # daddu       $s7, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274980u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_274984:
    // 0x274984: 0x6bd0  .word       0x00006BD0                   # mfhi        $t5 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274984u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_274988:
    // 0x274988: 0x0  nop
    ctx->pc = 0x274988u;
    // NOP
label_27498c:
    // 0x27498c: 0x0  nop
    ctx->pc = 0x27498cu;
    // NOP
label_274990:
    // 0x274990: 0xb9fb  dsra        $s7, $zero, 7
    ctx->pc = 0x274990u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 0) >> 7);
label_274994:
    // 0x274994: 0x3810  mfhi        $a3
    ctx->pc = 0x274994u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_274998:
    // 0x274998: 0x0  nop
    ctx->pc = 0x274998u;
    // NOP
label_27499c:
    // 0x27499c: 0x0  nop
    ctx->pc = 0x27499cu;
    // NOP
label_2749a0:
    // 0x2749a0: 0xba03  sra         $s7, $zero, 8
    ctx->pc = 0x2749a0u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 0), 8));
label_2749a4:
    // 0x2749a4: 0xd4c0  sll         $k0, $zero, 19
    ctx->pc = 0x2749a4u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_2749a8:
    // 0x2749a8: 0x0  nop
    ctx->pc = 0x2749a8u;
    // NOP
label_2749ac:
    // 0x2749ac: 0x0  nop
    ctx->pc = 0x2749acu;
    // NOP
label_2749b0:
    // 0x2749b0: 0xba1e  .word       0x0000BA1E                   # ddiv        $s7, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2749b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2749B0 raw=0x0000BA1E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2749b4:
    // 0x2749b4: 0xd50  .word       0x00000D50                   # mfhi        $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2749b4u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_2749b8:
    // 0x2749b8: 0x0  nop
    ctx->pc = 0x2749b8u;
    // NOP
label_2749bc:
    // 0x2749bc: 0x0  nop
    ctx->pc = 0x2749bcu;
    // NOP
label_2749c0:
    // 0x2749c0: 0xba20  .word       0x0000BA20                   # add         $s7, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2749c0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_2749c4:
    // 0x2749c4: 0x4930  tge         $zero, $zero, 292
    ctx->pc = 0x2749c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2749c8:
    // 0x2749c8: 0x0  nop
    ctx->pc = 0x2749c8u;
    // NOP
label_2749cc:
    // 0x2749cc: 0x0  nop
    ctx->pc = 0x2749ccu;
    // NOP
label_2749d0:
    // 0x2749d0: 0xba2a  .word       0x0000BA2A                   # slt         $s7, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2749d0u;
    SET_GPR_U64(ctx, 23, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2749d4:
    // 0x2749d4: 0x22c0  sll         $a0, $zero, 11
    ctx->pc = 0x2749d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_2749d8:
    // 0x2749d8: 0x0  nop
    ctx->pc = 0x2749d8u;
    // NOP
label_2749dc:
    // 0x2749dc: 0x0  nop
    ctx->pc = 0x2749dcu;
    // NOP
label_2749e0:
    // 0x2749e0: 0xba2f  .word       0x0000BA2F                   # dsubu       $s7, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2749e0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2749e4:
    // 0x2749e4: 0x49a0  .word       0x000049A0                   # add         $t1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2749e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_2749e8:
    // 0x2749e8: 0x0  nop
    ctx->pc = 0x2749e8u;
    // NOP
label_2749ec:
    // 0x2749ec: 0x0  nop
    ctx->pc = 0x2749ecu;
    // NOP
label_2749f0:
    // 0x2749f0: 0xba39  .word       0x0000BA39                   # INVALID     $zero, $zero, -0x45C7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2749f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2749F0 raw=0x0000BA39"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2749f4:
    // 0x2749f4: 0x81e0  .word       0x000081E0                   # add         $s0, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2749f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2749f8:
    // 0x2749f8: 0x0  nop
    ctx->pc = 0x2749f8u;
    // NOP
label_2749fc:
    // 0x2749fc: 0x0  nop
    ctx->pc = 0x2749fcu;
    // NOP
label_274a00:
    // 0x274a00: 0xba4a  .word       0x0000BA4A                   # movz        $s7, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274a00u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
label_274a04:
    // 0x274a04: 0x5350  .word       0x00005350                   # mfhi        $t2 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274a04u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_274a08:
    // 0x274a08: 0x0  nop
    ctx->pc = 0x274a08u;
    // NOP
label_274a0c:
    // 0x274a0c: 0x0  nop
    ctx->pc = 0x274a0cu;
    // NOP
label_274a10:
    // 0x274a10: 0xba55  .word       0x0000BA55                   # INVALID     $zero, $zero, -0x45AB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274a10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x274A10 raw=0x0000BA55"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_274a14:
    // 0x274a14: 0x4380  sll         $t0, $zero, 14
    ctx->pc = 0x274a14u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_274a18:
    // 0x274a18: 0x0  nop
    ctx->pc = 0x274a18u;
    // NOP
label_274a1c:
    // 0x274a1c: 0x0  nop
    ctx->pc = 0x274a1cu;
    // NOP
label_274a20:
    // 0x274a20: 0xba5e  .word       0x0000BA5E                   # ddiv        $s7, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274a20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x274A20 raw=0x0000BA5E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_274a24:
    // 0x274a24: 0x6560  .word       0x00006560                   # add         $t4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274a24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_274a28:
    // 0x274a28: 0x0  nop
    ctx->pc = 0x274a28u;
    // NOP
label_274a2c:
    // 0x274a2c: 0x0  nop
    ctx->pc = 0x274a2cu;
    // NOP
label_274a30:
    // 0x274a30: 0xba6b  .word       0x0000BA6B                   # sltu        $s7, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274a30u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_274a34:
    // 0x274a34: 0x2b00  sll         $a1, $zero, 12
    ctx->pc = 0x274a34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_274a38:
    // 0x274a38: 0x0  nop
    ctx->pc = 0x274a38u;
    // NOP
label_274a3c:
    // 0x274a3c: 0x0  nop
    ctx->pc = 0x274a3cu;
    // NOP
label_274a40:
    // 0x274a40: 0xba71  tgeu        $zero, $zero, 745
    ctx->pc = 0x274a40u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274a44:
    // 0x274a44: 0x5e30  tge         $zero, $zero, 376
    ctx->pc = 0x274a44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274a48:
    // 0x274a48: 0x0  nop
    ctx->pc = 0x274a48u;
    // NOP
label_274a4c:
    // 0x274a4c: 0x0  nop
    ctx->pc = 0x274a4cu;
    // NOP
label_274a50:
    // 0x274a50: 0xba7d  .word       0x0000BA7D                   # INVALID     $zero, $zero, -0x4583 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274a50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x274A50 raw=0x0000BA7D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_274a54:
    // 0x274a54: 0x22e0  .word       0x000022E0                   # add         $a0, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274a54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_274a58:
    // 0x274a58: 0x0  nop
    ctx->pc = 0x274a58u;
    // NOP
label_274a5c:
    // 0x274a5c: 0x0  nop
    ctx->pc = 0x274a5cu;
    // NOP
label_274a60:
    // 0x274a60: 0xba82  srl         $s7, $zero, 10
    ctx->pc = 0x274a60u;
    SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 0), 10));
label_274a64:
    // 0x274a64: 0x9d30  tge         $zero, $zero, 628
    ctx->pc = 0x274a64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274a68:
    // 0x274a68: 0x0  nop
    ctx->pc = 0x274a68u;
    // NOP
label_274a6c:
    // 0x274a6c: 0x0  nop
    ctx->pc = 0x274a6cu;
    // NOP
label_274a70:
    // 0x274a70: 0xba96  .word       0x0000BA96                   # dsrlv       $s7, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274a70u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_274a74:
    // 0x274a74: 0x4b80  sll         $t1, $zero, 14
    ctx->pc = 0x274a74u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_274a78:
    // 0x274a78: 0x0  nop
    ctx->pc = 0x274a78u;
    // NOP
label_274a7c:
    // 0x274a7c: 0x0  nop
    ctx->pc = 0x274a7cu;
    // NOP
label_274a80:
    // 0x274a80: 0xbaa0  .word       0x0000BAA0                   # add         $s7, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274a80u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_274a84:
    // 0x274a84: 0x2d60  .word       0x00002D60                   # add         $a1, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274a84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_274a88:
    // 0x274a88: 0x0  nop
    ctx->pc = 0x274a88u;
    // NOP
label_274a8c:
    // 0x274a8c: 0x0  nop
    ctx->pc = 0x274a8cu;
    // NOP
label_274a90:
    // 0x274a90: 0xbaa6  .word       0x0000BAA6                   # xor         $s7, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274a90u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_274a94:
    // 0x274a94: 0x8830  tge         $zero, $zero, 544
    ctx->pc = 0x274a94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274a98:
    // 0x274a98: 0x0  nop
    ctx->pc = 0x274a98u;
    // NOP
label_274a9c:
    // 0x274a9c: 0x0  nop
    ctx->pc = 0x274a9cu;
    // NOP
label_274aa0:
    // 0x274aa0: 0xbab8  dsll        $s7, $zero, 10
    ctx->pc = 0x274aa0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) << 10);
label_274aa4:
    // 0x274aa4: 0x3190  .word       0x00003190                   # mfhi        $a2 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274aa4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_274aa8:
    // 0x274aa8: 0x0  nop
    ctx->pc = 0x274aa8u;
    // NOP
label_274aac:
    // 0x274aac: 0x0  nop
    ctx->pc = 0x274aacu;
    // NOP
label_274ab0:
    // 0x274ab0: 0xbabf  dsra32      $s7, $zero, 10
    ctx->pc = 0x274ab0u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 0) >> (32 + 10));
label_274ab4:
    // 0x274ab4: 0xafe0  .word       0x0000AFE0                   # add         $s5, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274ab4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_274ab8:
    // 0x274ab8: 0x0  nop
    ctx->pc = 0x274ab8u;
    // NOP
label_274abc:
    // 0x274abc: 0x0  nop
    ctx->pc = 0x274abcu;
    // NOP
label_274ac0:
    // 0x274ac0: 0xbad5  .word       0x0000BAD5                   # INVALID     $zero, $zero, -0x452B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274ac0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x274AC0 raw=0x0000BAD5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_274ac4:
    // 0x274ac4: 0x5500  sll         $t2, $zero, 20
    ctx->pc = 0x274ac4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_274ac8:
    // 0x274ac8: 0x0  nop
    ctx->pc = 0x274ac8u;
    // NOP
label_274acc:
    // 0x274acc: 0x0  nop
    ctx->pc = 0x274accu;
    // NOP
label_274ad0:
    // 0x274ad0: 0xbae0  .word       0x0000BAE0                   # add         $s7, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274ad0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_274ad4:
    // 0x274ad4: 0xa1c0  sll         $s4, $zero, 7
    ctx->pc = 0x274ad4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_274ad8:
    // 0x274ad8: 0x0  nop
    ctx->pc = 0x274ad8u;
    // NOP
label_274adc:
    // 0x274adc: 0x0  nop
    ctx->pc = 0x274adcu;
    // NOP
label_274ae0:
    // 0x274ae0: 0xbaf5  .word       0x0000BAF5                   # INVALID     $zero, $zero, -0x450B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274ae0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x274AE0 raw=0x0000BAF5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_274ae4:
    // 0x274ae4: 0xa7e0  .word       0x0000A7E0                   # add         $s4, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274ae4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_274ae8:
    // 0x274ae8: 0x0  nop
    ctx->pc = 0x274ae8u;
    // NOP
label_274aec:
    // 0x274aec: 0x0  nop
    ctx->pc = 0x274aecu;
    // NOP
label_274af0:
    // 0x274af0: 0xbb0a  .word       0x0000BB0A                   # movz        $s7, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274af0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
label_274af4:
    // 0x274af4: 0x4b80  sll         $t1, $zero, 14
    ctx->pc = 0x274af4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_274af8:
    // 0x274af8: 0x0  nop
    ctx->pc = 0x274af8u;
    // NOP
label_274afc:
    // 0x274afc: 0x0  nop
    ctx->pc = 0x274afcu;
    // NOP
label_274b00:
    // 0x274b00: 0xbb14  .word       0x0000BB14                   # dsllv       $s7, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274b00u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_274b04:
    // 0x274b04: 0xc9b0  tge         $zero, $zero, 806
    ctx->pc = 0x274b04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274b08:
    // 0x274b08: 0x0  nop
    ctx->pc = 0x274b08u;
    // NOP
label_274b0c:
    // 0x274b0c: 0x0  nop
    ctx->pc = 0x274b0cu;
    // NOP
label_274b10:
    // 0x274b10: 0xbb2e  .word       0x0000BB2E                   # dsub        $s7, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274b10u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, r); }
label_274b14:
    // 0x274b14: 0x6e90  .word       0x00006E90                   # mfhi        $t5 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274b14u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_274b18:
    // 0x274b18: 0x0  nop
    ctx->pc = 0x274b18u;
    // NOP
label_274b1c:
    // 0x274b1c: 0x0  nop
    ctx->pc = 0x274b1cu;
    // NOP
label_274b20:
    // 0x274b20: 0xbb3c  dsll32      $s7, $zero, 12
    ctx->pc = 0x274b20u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) << (32 + 12));
label_274b24:
    // 0x274b24: 0xb3f0  tge         $zero, $zero, 719
    ctx->pc = 0x274b24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274b28:
    // 0x274b28: 0x0  nop
    ctx->pc = 0x274b28u;
    // NOP
label_274b2c:
    // 0x274b2c: 0x0  nop
    ctx->pc = 0x274b2cu;
    // NOP
label_274b30:
    // 0x274b30: 0xbb53  .word       0x0000BB53                   # mtlo        $zero # 0000BB40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274b30u;
    ctx->lo = GPR_U64(ctx, 0);
label_274b34:
    // 0x274b34: 0x6750  .word       0x00006750                   # mfhi        $t4 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274b34u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_274b38:
    // 0x274b38: 0x0  nop
    ctx->pc = 0x274b38u;
    // NOP
label_274b3c:
    // 0x274b3c: 0x0  nop
    ctx->pc = 0x274b3cu;
    // NOP
label_274b40:
    // 0x274b40: 0xbb60  .word       0x0000BB60                   # add         $s7, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274b40u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_274b44:
    // 0x274b44: 0x6520  .word       0x00006520                   # add         $t4, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274b44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_274b48:
    // 0x274b48: 0x0  nop
    ctx->pc = 0x274b48u;
    // NOP
label_274b4c:
    // 0x274b4c: 0x0  nop
    ctx->pc = 0x274b4cu;
    // NOP
label_274b50:
    // 0x274b50: 0xbb6d  .word       0x0000BB6D                   # daddu       $s7, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274b50u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_274b54:
    // 0x274b54: 0x4490  .word       0x00004490                   # mfhi        $t0 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274b54u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_274b58:
    // 0x274b58: 0x0  nop
    ctx->pc = 0x274b58u;
    // NOP
label_274b5c:
    // 0x274b5c: 0x0  nop
    ctx->pc = 0x274b5cu;
    // NOP
label_274b60:
    // 0x274b60: 0xbb76  tne         $zero, $zero, 749
    ctx->pc = 0x274b60u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274b64:
    // 0x274b64: 0x37a0  .word       0x000037A0                   # add         $a2, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274b64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_274b68:
    // 0x274b68: 0x0  nop
    ctx->pc = 0x274b68u;
    // NOP
label_274b6c:
    // 0x274b6c: 0x0  nop
    ctx->pc = 0x274b6cu;
    // NOP
label_274b70:
    // 0x274b70: 0xbb7d  .word       0x0000BB7D                   # INVALID     $zero, $zero, -0x4483 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274b70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x274B70 raw=0x0000BB7D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_274b74:
    // 0x274b74: 0xc5b0  tge         $zero, $zero, 790
    ctx->pc = 0x274b74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274b78:
    // 0x274b78: 0x0  nop
    ctx->pc = 0x274b78u;
    // NOP
label_274b7c:
    // 0x274b7c: 0x0  nop
    ctx->pc = 0x274b7cu;
    // NOP
label_274b80:
    // 0x274b80: 0xbb96  .word       0x0000BB96                   # dsrlv       $s7, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274b80u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_274b84:
    // 0x274b84: 0x57b0  tge         $zero, $zero, 350
    ctx->pc = 0x274b84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274b88:
    // 0x274b88: 0x0  nop
    ctx->pc = 0x274b88u;
    // NOP
label_274b8c:
    // 0x274b8c: 0x0  nop
    ctx->pc = 0x274b8cu;
    // NOP
label_274b90:
    // 0x274b90: 0xbba1  .word       0x0000BBA1                   # addu        $s7, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274b90u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_274b94:
    // 0x274b94: 0x1e30  tge         $zero, $zero, 120
    ctx->pc = 0x274b94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274b98:
    // 0x274b98: 0x0  nop
    ctx->pc = 0x274b98u;
    // NOP
label_274b9c:
    // 0x274b9c: 0x0  nop
    ctx->pc = 0x274b9cu;
    // NOP
label_274ba0:
    // 0x274ba0: 0xbba5  .word       0x0000BBA5                   # move        $s7, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274ba0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_274ba4:
    // 0x274ba4: 0x10680  sll         $zero, $at, 26
    ctx->pc = 0x274ba4u;
    
label_274ba8:
    // 0x274ba8: 0x0  nop
    ctx->pc = 0x274ba8u;
    // NOP
label_274bac:
    // 0x274bac: 0x0  nop
    ctx->pc = 0x274bacu;
    // NOP
label_274bb0:
    // 0x274bb0: 0xbbc6  .word       0x0000BBC6                   # srlv        $s7, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274bb0u;
    SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_274bb4:
    // 0x274bb4: 0x95b0  tge         $zero, $zero, 598
    ctx->pc = 0x274bb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274bb8:
    // 0x274bb8: 0x0  nop
    ctx->pc = 0x274bb8u;
    // NOP
label_274bbc:
    // 0x274bbc: 0x0  nop
    ctx->pc = 0x274bbcu;
    // NOP
label_274bc0:
    // 0x274bc0: 0xbbd9  .word       0x0000BBD9                   # multu       $zero, $zero # 0000BBC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274bc0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
label_274bc4:
    // 0x274bc4: 0xe960  .word       0x0000E960                   # add         $sp, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274bc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_274bc8:
    // 0x274bc8: 0x0  nop
    ctx->pc = 0x274bc8u;
    // NOP
label_274bcc:
    // 0x274bcc: 0x0  nop
    ctx->pc = 0x274bccu;
    // NOP
label_274bd0:
    // 0x274bd0: 0xbbf7  .word       0x0000BBF7                   # INVALID     $zero, $zero, -0x4409 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274bd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x274BD0 raw=0x0000BBF7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_274bd4:
    // 0x274bd4: 0x4950  .word       0x00004950                   # mfhi        $t1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274bd4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_274bd8:
    // 0x274bd8: 0x0  nop
    ctx->pc = 0x274bd8u;
    // NOP
label_274bdc:
    // 0x274bdc: 0x0  nop
    ctx->pc = 0x274bdcu;
    // NOP
label_274be0:
    // 0x274be0: 0xbc01  .word       0x0000BC01                   # INVALID     $zero, $zero, -0x43FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274be0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x274BE0 raw=0x0000BC01"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_274be4:
    // 0x274be4: 0xaa10  .word       0x0000AA10                   # mfhi        $s5 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274be4u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_274be8:
    // 0x274be8: 0x0  nop
    ctx->pc = 0x274be8u;
    // NOP
label_274bec:
    // 0x274bec: 0x0  nop
    ctx->pc = 0x274becu;
    // NOP
label_274bf0:
    // 0x274bf0: 0xbc17  .word       0x0000BC17                   # dsrav       $s7, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274bf0u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_274bf4:
    // 0x274bf4: 0xad40  sll         $s5, $zero, 21
    ctx->pc = 0x274bf4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_274bf8:
    // 0x274bf8: 0x0  nop
    ctx->pc = 0x274bf8u;
    // NOP
label_274bfc:
    // 0x274bfc: 0x0  nop
    ctx->pc = 0x274bfcu;
    // NOP
label_274c00:
    // 0x274c00: 0xbc2d  .word       0x0000BC2D                   # daddu       $s7, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274c00u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_274c04:
    // 0x274c04: 0x27f0  tge         $zero, $zero, 159
    ctx->pc = 0x274c04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274c08:
    // 0x274c08: 0x0  nop
    ctx->pc = 0x274c08u;
    // NOP
label_274c0c:
    // 0x274c0c: 0x0  nop
    ctx->pc = 0x274c0cu;
    // NOP
label_274c10:
    // 0x274c10: 0xbc32  tlt         $zero, $zero, 752
    ctx->pc = 0x274c10u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274c14:
    // 0x274c14: 0x21c0  sll         $a0, $zero, 7
    ctx->pc = 0x274c14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_274c18:
    // 0x274c18: 0x0  nop
    ctx->pc = 0x274c18u;
    // NOP
label_274c1c:
    // 0x274c1c: 0x0  nop
    ctx->pc = 0x274c1cu;
    // NOP
label_274c20:
    // 0x274c20: 0xbc37  .word       0x0000BC37                   # INVALID     $zero, $zero, -0x43C9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274c20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x274C20 raw=0x0000BC37"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_274c24:
    // 0x274c24: 0x19850  .word       0x00019850                   # mfhi        $s3 # 00010040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274c24u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_274c28:
    // 0x274c28: 0x0  nop
    ctx->pc = 0x274c28u;
    // NOP
label_274c2c:
    // 0x274c2c: 0x0  nop
    ctx->pc = 0x274c2cu;
    // NOP
label_274c30:
    // 0x274c30: 0xbc6b  .word       0x0000BC6B                   # sltu        $s7, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274c30u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_274c34:
    // 0x274c34: 0x5670  tge         $zero, $zero, 345
    ctx->pc = 0x274c34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274c38:
    // 0x274c38: 0x0  nop
    ctx->pc = 0x274c38u;
    // NOP
label_274c3c:
    // 0x274c3c: 0x0  nop
    ctx->pc = 0x274c3cu;
    // NOP
label_274c40:
    // 0x274c40: 0xbc76  tne         $zero, $zero, 753
    ctx->pc = 0x274c40u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274c44:
    // 0x274c44: 0x10ac0  sll         $at, $at, 11
    ctx->pc = 0x274c44u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), 11));
label_274c48:
    // 0x274c48: 0x0  nop
    ctx->pc = 0x274c48u;
    // NOP
label_274c4c:
    // 0x274c4c: 0x0  nop
    ctx->pc = 0x274c4cu;
    // NOP
label_274c50:
    // 0x274c50: 0xbc98  .word       0x0000BC98                   # mult        $s7, $zero, $zero # 00000480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x274c50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
label_274c54:
    // 0x274c54: 0xac70  tge         $zero, $zero, 689
    ctx->pc = 0x274c54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274c58:
    // 0x274c58: 0x0  nop
    ctx->pc = 0x274c58u;
    // NOP
label_274c5c:
    // 0x274c5c: 0x0  nop
    ctx->pc = 0x274c5cu;
    // NOP
label_274c60:
    // 0x274c60: 0xbcae  .word       0x0000BCAE                   # dsub        $s7, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274c60u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, r); }
label_274c64:
    // 0x274c64: 0x5850  .word       0x00005850                   # mfhi        $t3 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274c64u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_274c68:
    // 0x274c68: 0x0  nop
    ctx->pc = 0x274c68u;
    // NOP
label_274c6c:
    // 0x274c6c: 0x0  nop
    ctx->pc = 0x274c6cu;
    // NOP
label_274c70:
    // 0x274c70: 0xbcba  dsrl        $s7, $zero, 18
    ctx->pc = 0x274c70u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) >> 18);
label_274c74:
    // 0x274c74: 0x5d50  .word       0x00005D50                   # mfhi        $t3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274c74u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_274c78:
    // 0x274c78: 0x0  nop
    ctx->pc = 0x274c78u;
    // NOP
label_274c7c:
    // 0x274c7c: 0x0  nop
    ctx->pc = 0x274c7cu;
    // NOP
label_274c80:
    // 0x274c80: 0xbcc6  .word       0x0000BCC6                   # srlv        $s7, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274c80u;
    SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_274c84:
    // 0x274c84: 0x5150  .word       0x00005150                   # mfhi        $t2 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274c84u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_274c88:
    // 0x274c88: 0x0  nop
    ctx->pc = 0x274c88u;
    // NOP
label_274c8c:
    // 0x274c8c: 0x0  nop
    ctx->pc = 0x274c8cu;
    // NOP
label_274c90:
    // 0x274c90: 0xbcd1  .word       0x0000BCD1                   # mthi        $zero # 0000BCC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274c90u;
    ctx->hi = GPR_U64(ctx, 0);
label_274c94:
    // 0x274c94: 0xb950  .word       0x0000B950                   # mfhi        $s7 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274c94u;
    SET_GPR_U64(ctx, 23, ctx->hi);
    ctx->pc = 0x274c98u;
    return;
}
