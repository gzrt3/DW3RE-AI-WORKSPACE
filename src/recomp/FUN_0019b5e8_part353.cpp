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

// Function: FUN_0019b5e8
// Address: 0x19b5e8 - 0x29b5f4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b5e8_part353(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2473e8u: goto label_2473e8;
        case 0x2473ecu: goto label_2473ec;
        case 0x2473f0u: goto label_2473f0;
        case 0x2473f4u: goto label_2473f4;
        case 0x2473f8u: goto label_2473f8;
        case 0x2473fcu: goto label_2473fc;
        case 0x247400u: goto label_247400;
        case 0x247404u: goto label_247404;
        case 0x247408u: goto label_247408;
        case 0x24740cu: goto label_24740c;
        case 0x247410u: goto label_247410;
        case 0x247414u: goto label_247414;
        case 0x247418u: goto label_247418;
        case 0x24741cu: goto label_24741c;
        case 0x247420u: goto label_247420;
        case 0x247424u: goto label_247424;
        case 0x247428u: goto label_247428;
        case 0x24742cu: goto label_24742c;
        case 0x247430u: goto label_247430;
        case 0x247434u: goto label_247434;
        case 0x247438u: goto label_247438;
        case 0x24743cu: goto label_24743c;
        case 0x247440u: goto label_247440;
        case 0x247444u: goto label_247444;
        case 0x247448u: goto label_247448;
        case 0x24744cu: goto label_24744c;
        case 0x247450u: goto label_247450;
        case 0x247454u: goto label_247454;
        case 0x247458u: goto label_247458;
        case 0x24745cu: goto label_24745c;
        case 0x247460u: goto label_247460;
        case 0x247464u: goto label_247464;
        case 0x247468u: goto label_247468;
        case 0x24746cu: goto label_24746c;
        case 0x247470u: goto label_247470;
        case 0x247474u: goto label_247474;
        case 0x247478u: goto label_247478;
        case 0x24747cu: goto label_24747c;
        case 0x247480u: goto label_247480;
        case 0x247484u: goto label_247484;
        case 0x247488u: goto label_247488;
        case 0x24748cu: goto label_24748c;
        case 0x247490u: goto label_247490;
        case 0x247494u: goto label_247494;
        case 0x247498u: goto label_247498;
        case 0x24749cu: goto label_24749c;
        case 0x2474a0u: goto label_2474a0;
        case 0x2474a4u: goto label_2474a4;
        case 0x2474a8u: goto label_2474a8;
        case 0x2474acu: goto label_2474ac;
        case 0x2474b0u: goto label_2474b0;
        case 0x2474b4u: goto label_2474b4;
        case 0x2474b8u: goto label_2474b8;
        case 0x2474bcu: goto label_2474bc;
        case 0x2474c0u: goto label_2474c0;
        case 0x2474c4u: goto label_2474c4;
        case 0x2474c8u: goto label_2474c8;
        case 0x2474ccu: goto label_2474cc;
        case 0x2474d0u: goto label_2474d0;
        case 0x2474d4u: goto label_2474d4;
        case 0x2474d8u: goto label_2474d8;
        case 0x2474dcu: goto label_2474dc;
        case 0x2474e0u: goto label_2474e0;
        case 0x2474e4u: goto label_2474e4;
        case 0x2474e8u: goto label_2474e8;
        case 0x2474ecu: goto label_2474ec;
        case 0x2474f0u: goto label_2474f0;
        case 0x2474f4u: goto label_2474f4;
        case 0x2474f8u: goto label_2474f8;
        case 0x2474fcu: goto label_2474fc;
        case 0x247500u: goto label_247500;
        case 0x247504u: goto label_247504;
        case 0x247508u: goto label_247508;
        case 0x24750cu: goto label_24750c;
        case 0x247510u: goto label_247510;
        case 0x247514u: goto label_247514;
        case 0x247518u: goto label_247518;
        case 0x24751cu: goto label_24751c;
        case 0x247520u: goto label_247520;
        case 0x247524u: goto label_247524;
        case 0x247528u: goto label_247528;
        case 0x24752cu: goto label_24752c;
        case 0x247530u: goto label_247530;
        case 0x247534u: goto label_247534;
        case 0x247538u: goto label_247538;
        case 0x24753cu: goto label_24753c;
        case 0x247540u: goto label_247540;
        case 0x247544u: goto label_247544;
        case 0x247548u: goto label_247548;
        case 0x24754cu: goto label_24754c;
        case 0x247550u: goto label_247550;
        case 0x247554u: goto label_247554;
        case 0x247558u: goto label_247558;
        case 0x24755cu: goto label_24755c;
        case 0x247560u: goto label_247560;
        case 0x247564u: goto label_247564;
        case 0x247568u: goto label_247568;
        case 0x24756cu: goto label_24756c;
        case 0x247570u: goto label_247570;
        case 0x247574u: goto label_247574;
        case 0x247578u: goto label_247578;
        case 0x24757cu: goto label_24757c;
        case 0x247580u: goto label_247580;
        case 0x247584u: goto label_247584;
        case 0x247588u: goto label_247588;
        case 0x24758cu: goto label_24758c;
        case 0x247590u: goto label_247590;
        case 0x247594u: goto label_247594;
        case 0x247598u: goto label_247598;
        case 0x24759cu: goto label_24759c;
        case 0x2475a0u: goto label_2475a0;
        case 0x2475a4u: goto label_2475a4;
        case 0x2475a8u: goto label_2475a8;
        case 0x2475acu: goto label_2475ac;
        case 0x2475b0u: goto label_2475b0;
        case 0x2475b4u: goto label_2475b4;
        case 0x2475b8u: goto label_2475b8;
        case 0x2475bcu: goto label_2475bc;
        case 0x2475c0u: goto label_2475c0;
        case 0x2475c4u: goto label_2475c4;
        case 0x2475c8u: goto label_2475c8;
        case 0x2475ccu: goto label_2475cc;
        case 0x2475d0u: goto label_2475d0;
        case 0x2475d4u: goto label_2475d4;
        case 0x2475d8u: goto label_2475d8;
        case 0x2475dcu: goto label_2475dc;
        case 0x2475e0u: goto label_2475e0;
        case 0x2475e4u: goto label_2475e4;
        case 0x2475e8u: goto label_2475e8;
        case 0x2475ecu: goto label_2475ec;
        case 0x2475f0u: goto label_2475f0;
        case 0x2475f4u: goto label_2475f4;
        case 0x2475f8u: goto label_2475f8;
        case 0x2475fcu: goto label_2475fc;
        case 0x247600u: goto label_247600;
        case 0x247604u: goto label_247604;
        case 0x247608u: goto label_247608;
        case 0x24760cu: goto label_24760c;
        case 0x247610u: goto label_247610;
        case 0x247614u: goto label_247614;
        case 0x247618u: goto label_247618;
        case 0x24761cu: goto label_24761c;
        case 0x247620u: goto label_247620;
        case 0x247624u: goto label_247624;
        case 0x247628u: goto label_247628;
        case 0x24762cu: goto label_24762c;
        case 0x247630u: goto label_247630;
        case 0x247634u: goto label_247634;
        case 0x247638u: goto label_247638;
        case 0x24763cu: goto label_24763c;
        case 0x247640u: goto label_247640;
        case 0x247644u: goto label_247644;
        case 0x247648u: goto label_247648;
        case 0x24764cu: goto label_24764c;
        case 0x247650u: goto label_247650;
        case 0x247654u: goto label_247654;
        case 0x247658u: goto label_247658;
        case 0x24765cu: goto label_24765c;
        case 0x247660u: goto label_247660;
        case 0x247664u: goto label_247664;
        case 0x247668u: goto label_247668;
        case 0x24766cu: goto label_24766c;
        case 0x247670u: goto label_247670;
        case 0x247674u: goto label_247674;
        case 0x247678u: goto label_247678;
        case 0x24767cu: goto label_24767c;
        case 0x247680u: goto label_247680;
        case 0x247684u: goto label_247684;
        case 0x247688u: goto label_247688;
        case 0x24768cu: goto label_24768c;
        case 0x247690u: goto label_247690;
        case 0x247694u: goto label_247694;
        case 0x247698u: goto label_247698;
        case 0x24769cu: goto label_24769c;
        case 0x2476a0u: goto label_2476a0;
        case 0x2476a4u: goto label_2476a4;
        case 0x2476a8u: goto label_2476a8;
        case 0x2476acu: goto label_2476ac;
        case 0x2476b0u: goto label_2476b0;
        case 0x2476b4u: goto label_2476b4;
        case 0x2476b8u: goto label_2476b8;
        case 0x2476bcu: goto label_2476bc;
        case 0x2476c0u: goto label_2476c0;
        case 0x2476c4u: goto label_2476c4;
        case 0x2476c8u: goto label_2476c8;
        case 0x2476ccu: goto label_2476cc;
        case 0x2476d0u: goto label_2476d0;
        case 0x2476d4u: goto label_2476d4;
        case 0x2476d8u: goto label_2476d8;
        case 0x2476dcu: goto label_2476dc;
        case 0x2476e0u: goto label_2476e0;
        case 0x2476e4u: goto label_2476e4;
        case 0x2476e8u: goto label_2476e8;
        case 0x2476ecu: goto label_2476ec;
        case 0x2476f0u: goto label_2476f0;
        case 0x2476f4u: goto label_2476f4;
        case 0x2476f8u: goto label_2476f8;
        case 0x2476fcu: goto label_2476fc;
        case 0x247700u: goto label_247700;
        case 0x247704u: goto label_247704;
        case 0x247708u: goto label_247708;
        case 0x24770cu: goto label_24770c;
        case 0x247710u: goto label_247710;
        case 0x247714u: goto label_247714;
        case 0x247718u: goto label_247718;
        case 0x24771cu: goto label_24771c;
        case 0x247720u: goto label_247720;
        case 0x247724u: goto label_247724;
        case 0x247728u: goto label_247728;
        case 0x24772cu: goto label_24772c;
        case 0x247730u: goto label_247730;
        case 0x247734u: goto label_247734;
        case 0x247738u: goto label_247738;
        case 0x24773cu: goto label_24773c;
        case 0x247740u: goto label_247740;
        case 0x247744u: goto label_247744;
        case 0x247748u: goto label_247748;
        case 0x24774cu: goto label_24774c;
        case 0x247750u: goto label_247750;
        case 0x247754u: goto label_247754;
        case 0x247758u: goto label_247758;
        case 0x24775cu: goto label_24775c;
        case 0x247760u: goto label_247760;
        case 0x247764u: goto label_247764;
        case 0x247768u: goto label_247768;
        case 0x24776cu: goto label_24776c;
        case 0x247770u: goto label_247770;
        case 0x247774u: goto label_247774;
        case 0x247778u: goto label_247778;
        case 0x24777cu: goto label_24777c;
        case 0x247780u: goto label_247780;
        case 0x247784u: goto label_247784;
        case 0x247788u: goto label_247788;
        case 0x24778cu: goto label_24778c;
        case 0x247790u: goto label_247790;
        case 0x247794u: goto label_247794;
        case 0x247798u: goto label_247798;
        case 0x24779cu: goto label_24779c;
        case 0x2477a0u: goto label_2477a0;
        case 0x2477a4u: goto label_2477a4;
        case 0x2477a8u: goto label_2477a8;
        case 0x2477acu: goto label_2477ac;
        case 0x2477b0u: goto label_2477b0;
        case 0x2477b4u: goto label_2477b4;
        case 0x2477b8u: goto label_2477b8;
        case 0x2477bcu: goto label_2477bc;
        case 0x2477c0u: goto label_2477c0;
        case 0x2477c4u: goto label_2477c4;
        case 0x2477c8u: goto label_2477c8;
        case 0x2477ccu: goto label_2477cc;
        case 0x2477d0u: goto label_2477d0;
        case 0x2477d4u: goto label_2477d4;
        case 0x2477d8u: goto label_2477d8;
        case 0x2477dcu: goto label_2477dc;
        case 0x2477e0u: goto label_2477e0;
        case 0x2477e4u: goto label_2477e4;
        case 0x2477e8u: goto label_2477e8;
        case 0x2477ecu: goto label_2477ec;
        case 0x2477f0u: goto label_2477f0;
        case 0x2477f4u: goto label_2477f4;
        case 0x2477f8u: goto label_2477f8;
        case 0x2477fcu: goto label_2477fc;
        case 0x247800u: goto label_247800;
        case 0x247804u: goto label_247804;
        case 0x247808u: goto label_247808;
        case 0x24780cu: goto label_24780c;
        case 0x247810u: goto label_247810;
        case 0x247814u: goto label_247814;
        case 0x247818u: goto label_247818;
        case 0x24781cu: goto label_24781c;
        case 0x247820u: goto label_247820;
        case 0x247824u: goto label_247824;
        case 0x247828u: goto label_247828;
        case 0x24782cu: goto label_24782c;
        case 0x247830u: goto label_247830;
        case 0x247834u: goto label_247834;
        case 0x247838u: goto label_247838;
        case 0x24783cu: goto label_24783c;
        case 0x247840u: goto label_247840;
        case 0x247844u: goto label_247844;
        case 0x247848u: goto label_247848;
        case 0x24784cu: goto label_24784c;
        case 0x247850u: goto label_247850;
        case 0x247854u: goto label_247854;
        case 0x247858u: goto label_247858;
        case 0x24785cu: goto label_24785c;
        case 0x247860u: goto label_247860;
        case 0x247864u: goto label_247864;
        case 0x247868u: goto label_247868;
        case 0x24786cu: goto label_24786c;
        case 0x247870u: goto label_247870;
        case 0x247874u: goto label_247874;
        case 0x247878u: goto label_247878;
        case 0x24787cu: goto label_24787c;
        case 0x247880u: goto label_247880;
        case 0x247884u: goto label_247884;
        case 0x247888u: goto label_247888;
        case 0x24788cu: goto label_24788c;
        case 0x247890u: goto label_247890;
        case 0x247894u: goto label_247894;
        case 0x247898u: goto label_247898;
        case 0x24789cu: goto label_24789c;
        case 0x2478a0u: goto label_2478a0;
        case 0x2478a4u: goto label_2478a4;
        case 0x2478a8u: goto label_2478a8;
        case 0x2478acu: goto label_2478ac;
        case 0x2478b0u: goto label_2478b0;
        case 0x2478b4u: goto label_2478b4;
        case 0x2478b8u: goto label_2478b8;
        case 0x2478bcu: goto label_2478bc;
        case 0x2478c0u: goto label_2478c0;
        case 0x2478c4u: goto label_2478c4;
        case 0x2478c8u: goto label_2478c8;
        case 0x2478ccu: goto label_2478cc;
        case 0x2478d0u: goto label_2478d0;
        case 0x2478d4u: goto label_2478d4;
        case 0x2478d8u: goto label_2478d8;
        case 0x2478dcu: goto label_2478dc;
        case 0x2478e0u: goto label_2478e0;
        case 0x2478e4u: goto label_2478e4;
        case 0x2478e8u: goto label_2478e8;
        case 0x2478ecu: goto label_2478ec;
        case 0x2478f0u: goto label_2478f0;
        case 0x2478f4u: goto label_2478f4;
        case 0x2478f8u: goto label_2478f8;
        case 0x2478fcu: goto label_2478fc;
        case 0x247900u: goto label_247900;
        case 0x247904u: goto label_247904;
        case 0x247908u: goto label_247908;
        case 0x24790cu: goto label_24790c;
        case 0x247910u: goto label_247910;
        case 0x247914u: goto label_247914;
        case 0x247918u: goto label_247918;
        case 0x24791cu: goto label_24791c;
        case 0x247920u: goto label_247920;
        case 0x247924u: goto label_247924;
        case 0x247928u: goto label_247928;
        case 0x24792cu: goto label_24792c;
        case 0x247930u: goto label_247930;
        case 0x247934u: goto label_247934;
        case 0x247938u: goto label_247938;
        case 0x24793cu: goto label_24793c;
        case 0x247940u: goto label_247940;
        case 0x247944u: goto label_247944;
        case 0x247948u: goto label_247948;
        case 0x24794cu: goto label_24794c;
        case 0x247950u: goto label_247950;
        case 0x247954u: goto label_247954;
        case 0x247958u: goto label_247958;
        case 0x24795cu: goto label_24795c;
        case 0x247960u: goto label_247960;
        case 0x247964u: goto label_247964;
        case 0x247968u: goto label_247968;
        case 0x24796cu: goto label_24796c;
        case 0x247970u: goto label_247970;
        case 0x247974u: goto label_247974;
        case 0x247978u: goto label_247978;
        case 0x24797cu: goto label_24797c;
        case 0x247980u: goto label_247980;
        case 0x247984u: goto label_247984;
        case 0x247988u: goto label_247988;
        case 0x24798cu: goto label_24798c;
        case 0x247990u: goto label_247990;
        case 0x247994u: goto label_247994;
        case 0x247998u: goto label_247998;
        case 0x24799cu: goto label_24799c;
        case 0x2479a0u: goto label_2479a0;
        case 0x2479a4u: goto label_2479a4;
        case 0x2479a8u: goto label_2479a8;
        case 0x2479acu: goto label_2479ac;
        case 0x2479b0u: goto label_2479b0;
        case 0x2479b4u: goto label_2479b4;
        case 0x2479b8u: goto label_2479b8;
        case 0x2479bcu: goto label_2479bc;
        case 0x2479c0u: goto label_2479c0;
        case 0x2479c4u: goto label_2479c4;
        case 0x2479c8u: goto label_2479c8;
        case 0x2479ccu: goto label_2479cc;
        case 0x2479d0u: goto label_2479d0;
        case 0x2479d4u: goto label_2479d4;
        case 0x2479d8u: goto label_2479d8;
        case 0x2479dcu: goto label_2479dc;
        case 0x2479e0u: goto label_2479e0;
        case 0x2479e4u: goto label_2479e4;
        case 0x2479e8u: goto label_2479e8;
        case 0x2479ecu: goto label_2479ec;
        case 0x2479f0u: goto label_2479f0;
        case 0x2479f4u: goto label_2479f4;
        case 0x2479f8u: goto label_2479f8;
        case 0x2479fcu: goto label_2479fc;
        case 0x247a00u: goto label_247a00;
        case 0x247a04u: goto label_247a04;
        case 0x247a08u: goto label_247a08;
        case 0x247a0cu: goto label_247a0c;
        case 0x247a10u: goto label_247a10;
        case 0x247a14u: goto label_247a14;
        case 0x247a18u: goto label_247a18;
        case 0x247a1cu: goto label_247a1c;
        case 0x247a20u: goto label_247a20;
        case 0x247a24u: goto label_247a24;
        case 0x247a28u: goto label_247a28;
        case 0x247a2cu: goto label_247a2c;
        case 0x247a30u: goto label_247a30;
        case 0x247a34u: goto label_247a34;
        case 0x247a38u: goto label_247a38;
        case 0x247a3cu: goto label_247a3c;
        case 0x247a40u: goto label_247a40;
        case 0x247a44u: goto label_247a44;
        case 0x247a48u: goto label_247a48;
        case 0x247a4cu: goto label_247a4c;
        case 0x247a50u: goto label_247a50;
        case 0x247a54u: goto label_247a54;
        case 0x247a58u: goto label_247a58;
        case 0x247a5cu: goto label_247a5c;
        case 0x247a60u: goto label_247a60;
        case 0x247a64u: goto label_247a64;
        case 0x247a68u: goto label_247a68;
        case 0x247a6cu: goto label_247a6c;
        case 0x247a70u: goto label_247a70;
        case 0x247a74u: goto label_247a74;
        case 0x247a78u: goto label_247a78;
        case 0x247a7cu: goto label_247a7c;
        case 0x247a80u: goto label_247a80;
        case 0x247a84u: goto label_247a84;
        case 0x247a88u: goto label_247a88;
        case 0x247a8cu: goto label_247a8c;
        case 0x247a90u: goto label_247a90;
        case 0x247a94u: goto label_247a94;
        case 0x247a98u: goto label_247a98;
        case 0x247a9cu: goto label_247a9c;
        case 0x247aa0u: goto label_247aa0;
        case 0x247aa4u: goto label_247aa4;
        case 0x247aa8u: goto label_247aa8;
        case 0x247aacu: goto label_247aac;
        case 0x247ab0u: goto label_247ab0;
        case 0x247ab4u: goto label_247ab4;
        case 0x247ab8u: goto label_247ab8;
        case 0x247abcu: goto label_247abc;
        case 0x247ac0u: goto label_247ac0;
        case 0x247ac4u: goto label_247ac4;
        case 0x247ac8u: goto label_247ac8;
        case 0x247accu: goto label_247acc;
        case 0x247ad0u: goto label_247ad0;
        case 0x247ad4u: goto label_247ad4;
        case 0x247ad8u: goto label_247ad8;
        case 0x247adcu: goto label_247adc;
        case 0x247ae0u: goto label_247ae0;
        case 0x247ae4u: goto label_247ae4;
        case 0x247ae8u: goto label_247ae8;
        case 0x247aecu: goto label_247aec;
        case 0x247af0u: goto label_247af0;
        case 0x247af4u: goto label_247af4;
        case 0x247af8u: goto label_247af8;
        case 0x247afcu: goto label_247afc;
        case 0x247b00u: goto label_247b00;
        case 0x247b04u: goto label_247b04;
        case 0x247b08u: goto label_247b08;
        case 0x247b0cu: goto label_247b0c;
        case 0x247b10u: goto label_247b10;
        case 0x247b14u: goto label_247b14;
        case 0x247b18u: goto label_247b18;
        case 0x247b1cu: goto label_247b1c;
        case 0x247b20u: goto label_247b20;
        case 0x247b24u: goto label_247b24;
        case 0x247b28u: goto label_247b28;
        case 0x247b2cu: goto label_247b2c;
        case 0x247b30u: goto label_247b30;
        case 0x247b34u: goto label_247b34;
        case 0x247b38u: goto label_247b38;
        case 0x247b3cu: goto label_247b3c;
        case 0x247b40u: goto label_247b40;
        case 0x247b44u: goto label_247b44;
        case 0x247b48u: goto label_247b48;
        case 0x247b4cu: goto label_247b4c;
        case 0x247b50u: goto label_247b50;
        case 0x247b54u: goto label_247b54;
        case 0x247b58u: goto label_247b58;
        case 0x247b5cu: goto label_247b5c;
        case 0x247b60u: goto label_247b60;
        case 0x247b64u: goto label_247b64;
        case 0x247b68u: goto label_247b68;
        case 0x247b6cu: goto label_247b6c;
        case 0x247b70u: goto label_247b70;
        case 0x247b74u: goto label_247b74;
        case 0x247b78u: goto label_247b78;
        case 0x247b7cu: goto label_247b7c;
        case 0x247b80u: goto label_247b80;
        case 0x247b84u: goto label_247b84;
        case 0x247b88u: goto label_247b88;
        case 0x247b8cu: goto label_247b8c;
        case 0x247b90u: goto label_247b90;
        case 0x247b94u: goto label_247b94;
        case 0x247b98u: goto label_247b98;
        case 0x247b9cu: goto label_247b9c;
        case 0x247ba0u: goto label_247ba0;
        case 0x247ba4u: goto label_247ba4;
        case 0x247ba8u: goto label_247ba8;
        case 0x247bacu: goto label_247bac;
        case 0x247bb0u: goto label_247bb0;
        case 0x247bb4u: goto label_247bb4;
        default: return;
    }

label_2473e8:
    // 0x2473e8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2473e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2473ec:
    // 0x2473ec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2473ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2473f0:
    // 0x2473f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2473f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2473f4:
    // 0x2473f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2473f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2473f8:
    // 0x2473f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2473f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2473fc:
    // 0x2473fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2473fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_247400:
    // 0x247400: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x247400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_247404:
    // 0x247404: 0x3e00008  jr          $ra
label_247408:
    if (ctx->pc == 0x247408u) {
        ctx->pc = 0x247408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247404u;
        // 0x247408: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24740Cu;
        goto label_24740c;
    }
    ctx->pc = 0x247404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247404u;
        // 0x247408: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24740Cu;
label_24740c:
    // 0x24740c: 0x0  nop
    ctx->pc = 0x24740cu;
    // NOP
label_247410:
    // 0x247410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x247410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_247414:
    // 0x247414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x247414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_247418:
    // 0x247418: 0x27aa0010  addiu       $t2, $sp, 0x10
    ctx->pc = 0x247418u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_24741c:
    // 0x24741c: 0x7d400000  sq          $zero, 0x0($t2)
    ctx->pc = 0x24741cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 0));
label_247420:
    // 0x247420: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x247420u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_247424:
    // 0x247424: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x247424u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247428:
    // 0x247428: 0x2488006c  addiu       $t0, $a0, 0x6C
    ctx->pc = 0x247428u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
label_24742c:
    // 0x24742c: 0x24870068  addiu       $a3, $a0, 0x68
    ctx->pc = 0x24742cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
label_247430:
    // 0x247430: 0x10000011  b           . + 4 + (0x11 << 2)
label_247434:
    if (ctx->pc == 0x247434u) {
        ctx->pc = 0x247434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247430u;
        // 0x247434: 0x24a5eb20  addiu       $a1, $a1, -0x14E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247438u;
        goto label_247438;
    }
    ctx->pc = 0x247430u;
    {
        const bool branch_taken_0x247430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247430u;
        // 0x247434: 0x24a5eb20  addiu       $a1, $a1, -0x14E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247430) {
            ctx->pc = 0x247478u;
            goto label_247478;
        }
    }
    ctx->pc = 0x247438u;
label_247438:
    // 0x247438: 0x1021821  addu        $v1, $t0, $v0
    ctx->pc = 0x247438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_24743c:
    // 0x24743c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x24743cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_247440:
    // 0x247440: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x247440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_247444:
    // 0x247444: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x247444u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_247448:
    // 0x247448: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x247448u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_24744c:
    // 0x24744c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x24744cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_247450:
    // 0x247450: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x247450u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_247454:
    // 0x247454: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x247454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_247458:
    // 0x247458: 0x0  nop
    ctx->pc = 0x247458u;
    // NOP
label_24745c:
    // 0x24745c: 0xd9410000  lqc2        $vf1, 0x0($t2)
    ctx->pc = 0x24745cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
label_247460:
    // 0x247460: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x247460u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_247464:
    // 0x247464: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x247464u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_247468:
    // 0x247468: 0x4bc102bc  vadda.xyz   $ACC, $vf1, $vf0
    ctx->pc = 0x247468u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[1]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_24746c:
    // 0x24746c: 0x4bc31048  vmaddx.xyz  $vf1, $vf2, $vf3x
    ctx->pc = 0x24746cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_247470:
    // 0x247470: 0xf9410000  sqc2        $vf1, 0x0($t2)
    ctx->pc = 0x247470u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_247474:
    // 0x247474: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x247474u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_247478:
    // 0x247478: 0x2d220080  sltiu       $v0, $t1, 0x80
    ctx->pc = 0x247478u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_24747c:
    // 0x24747c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_247480:
    if (ctx->pc == 0x247480u) {
        ctx->pc = 0x247480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24747Cu;
        // 0x247480: 0x91140  sll         $v0, $t1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247484u;
        goto label_247484;
    }
    ctx->pc = 0x24747Cu;
    {
        const bool branch_taken_0x24747c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x247480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24747Cu;
        // 0x247480: 0x91140  sll         $v0, $t1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24747c) {
            ctx->pc = 0x247438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_247438;
        }
    }
    ctx->pc = 0x247484u;
label_247484:
    // 0x247484: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x247484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247488:
    // 0x247488: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x247488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
label_24748c:
    // 0x24748c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x24748cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_247490:
    // 0x247490: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x247490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_247494:
    // 0x247494: 0x0  nop
    ctx->pc = 0x247494u;
    // NOP
label_247498:
    // 0x247498: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x247498u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24749c:
    // 0x24749c: 0x0  nop
    ctx->pc = 0x24749cu;
    // NOP
label_2474a0:
    // 0x2474a0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2474a4:
    if (ctx->pc == 0x2474A4u) {
        ctx->pc = 0x2474A8u;
        goto label_2474a8;
    }
    ctx->pc = 0x2474A0u;
    {
        const bool branch_taken_0x2474a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2474a0) {
            ctx->pc = 0x2474ACu;
            goto label_2474ac;
        }
    }
    ctx->pc = 0x2474A8u;
label_2474a8:
    // 0x2474a8: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2474a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2474ac:
    // 0x2474ac: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2474acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2474b0:
    // 0x2474b0: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x2474b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
label_2474b4:
    // 0x2474b4: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2474b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_2474b8:
    // 0x2474b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2474b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2474bc:
    // 0x2474bc: 0x0  nop
    ctx->pc = 0x2474bcu;
    // NOP
label_2474c0:
    // 0x2474c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2474c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2474c4:
    // 0x2474c4: 0x0  nop
    ctx->pc = 0x2474c4u;
    // NOP
label_2474c8:
    // 0x2474c8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2474cc:
    if (ctx->pc == 0x2474CCu) {
        ctx->pc = 0x2474D0u;
        goto label_2474d0;
    }
    ctx->pc = 0x2474C8u;
    {
        const bool branch_taken_0x2474c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2474c8) {
            ctx->pc = 0x2474D4u;
            goto label_2474d4;
        }
    }
    ctx->pc = 0x2474D0u;
label_2474d0:
    // 0x2474d0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2474d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2474d4:
    // 0x2474d4: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2474d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2474d8:
    // 0x2474d8: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x2474d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
label_2474dc:
    // 0x2474dc: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2474dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_2474e0:
    // 0x2474e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2474e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2474e4:
    // 0x2474e4: 0x0  nop
    ctx->pc = 0x2474e4u;
    // NOP
label_2474e8:
    // 0x2474e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2474e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2474ec:
    // 0x2474ec: 0x0  nop
    ctx->pc = 0x2474ecu;
    // NOP
label_2474f0:
    // 0x2474f0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2474f4:
    if (ctx->pc == 0x2474F4u) {
        ctx->pc = 0x2474F8u;
        goto label_2474f8;
    }
    ctx->pc = 0x2474F0u;
    {
        const bool branch_taken_0x2474f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2474f0) {
            ctx->pc = 0x2474FCu;
            goto label_2474fc;
        }
    }
    ctx->pc = 0x2474F8u;
label_2474f8:
    // 0x2474f8: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2474f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2474fc:
    // 0x2474fc: 0x8c821080  lw          $v0, 0x1080($a0)
    ctx->pc = 0x2474fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4224)));
label_247500:
    // 0x247500: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x247500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_247504:
    // 0x247504: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x247504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_247508:
    // 0x247508: 0xc18d844  jal         func_636110
label_24750c:
    if (ctx->pc == 0x24750Cu) {
        ctx->pc = 0x24750Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247508u;
        // 0x24750c: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247510u;
        goto label_247510;
    }
    ctx->pc = 0x247508u;
    SET_GPR_U32(ctx, 31, 0x247510u);
    ctx->pc = 0x24750Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247508u;
    // 0x24750c: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x636110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x636110u, 0x247508u, 0x247510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247510u;
label_247510:
    // 0x247510: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x247510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_247514:
    // 0x247514: 0x3e00008  jr          $ra
label_247518:
    if (ctx->pc == 0x247518u) {
        ctx->pc = 0x247518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247514u;
        // 0x247518: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24751Cu;
        goto label_24751c;
    }
    ctx->pc = 0x247514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247514u;
        // 0x247518: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24751Cu;
label_24751c:
    // 0x24751c: 0x0  nop
    ctx->pc = 0x24751cu;
    // NOP
label_247520:
    // 0x247520: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x247520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_247524:
    // 0x247524: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x247524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_247528:
    // 0x247528: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x247528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_24752c:
    // 0x24752c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24752cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_247530:
    // 0x247530: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x247530u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_247534:
    // 0x247534: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x247534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_247538:
    // 0x247538: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x247538u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24753c:
    // 0x24753c: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x24753cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
label_247540:
    // 0x247540: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x247540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_247544:
    // 0x247544: 0xc4801084  lwc1        $f0, 0x1084($a0)
    ctx->pc = 0x247544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247548:
    // 0x247548: 0xc18f7ac  jal         func_63DEB0
label_24754c:
    if (ctx->pc == 0x24754Cu) {
        ctx->pc = 0x24754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247548u;
        // 0x24754c: 0xe4a0001c  swc1        $f0, 0x1C($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x247550u;
        goto label_247550;
    }
    ctx->pc = 0x247548u;
    SET_GPR_U32(ctx, 31, 0x247550u);
    ctx->pc = 0x24754Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247548u;
    // 0x24754c: 0xe4a0001c  swc1        $f0, 0x1C($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x63DEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x63DEB0u, 0x247548u, 0x247550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247550u;
label_247550:
    // 0x247550: 0x8e4b1088  lw          $t3, 0x1088($s2)
    ctx->pc = 0x247550u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4232)));
label_247554:
    // 0x247554: 0x3c08002d  lui         $t0, 0x2D
    ctx->pc = 0x247554u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)45 << 16));
label_247558:
    // 0x247558: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x247558u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_24755c:
    // 0x24755c: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x24755cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_247560:
    // 0x247560: 0x264a108c  addiu       $t2, $s2, 0x108C
    ctx->pc = 0x247560u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 4236));
label_247564:
    // 0x247564: 0x264910b4  addiu       $t1, $s2, 0x10B4
    ctx->pc = 0x247564u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 4276));
label_247568:
    // 0x247568: 0x2508eb44  addiu       $t0, $t0, -0x14BC
    ctx->pc = 0x247568u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294961988));
label_24756c:
    // 0x24756c: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x24756cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_247570:
    // 0x247570: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x247570u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_247574:
    // 0x247574: 0x24a5eb30  addiu       $a1, $a1, -0x14D0
    ctx->pc = 0x247574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961968));
label_247578:
    // 0x247578: 0x2484eb34  addiu       $a0, $a0, -0x14CC
    ctx->pc = 0x247578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961972));
label_24757c:
    // 0x24757c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24757cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_247580:
    // 0x247580: 0x4b001b  divu        $zero, $v0, $t3
    ctx->pc = 0x247580u;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_247584:
    // 0x247584: 0x0  nop
    ctx->pc = 0x247584u;
    // NOP
label_247588:
    // 0x247588: 0x0  nop
    ctx->pc = 0x247588u;
    // NOP
label_24758c:
    // 0x24758c: 0x5810  mfhi        $t3
    ctx->pc = 0x24758cu;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_247590:
    // 0x247590: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x247590u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_247594:
    // 0x247594: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x247594u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_247598:
    // 0x247598: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x247598u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_24759c:
    // 0x24759c: 0xae2a0018  sw          $t2, 0x18($s1)
    ctx->pc = 0x24759cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 10));
label_2475a0:
    // 0x2475a0: 0x8e2a0018  lw          $t2, 0x18($s1)
    ctx->pc = 0x2475a0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2475a4:
    // 0x2475a4: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x2475a4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_2475a8:
    // 0x2475a8: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x2475a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_2475ac:
    // 0x2475ac: 0x8d290000  lw          $t1, 0x0($t1)
    ctx->pc = 0x2475acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_2475b0:
    // 0x2475b0: 0xae290014  sw          $t1, 0x14($s1)
    ctx->pc = 0x2475b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 9));
label_2475b4:
    // 0x2475b4: 0x8e290014  lw          $t1, 0x14($s1)
    ctx->pc = 0x2475b4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2475b8:
    // 0x2475b8: 0xae09008c  sw          $t1, 0x8C($s0)
    ctx->pc = 0x2475b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 9));
label_2475bc:
    // 0x2475bc: 0x8e2a0018  lw          $t2, 0x18($s1)
    ctx->pc = 0x2475bcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2475c0:
    // 0x2475c0: 0xa4840  sll         $t1, $t2, 1
    ctx->pc = 0x2475c0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_2475c4:
    // 0x2475c4: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x2475c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_2475c8:
    // 0x2475c8: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x2475c8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_2475cc:
    // 0x2475cc: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x2475ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_2475d0:
    // 0x2475d0: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x2475d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_2475d4:
    // 0x2475d4: 0xae080090  sw          $t0, 0x90($s0)
    ctx->pc = 0x2475d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 8));
label_2475d8:
    // 0x2475d8: 0xa2070034  sb          $a3, 0x34($s0)
    ctx->pc = 0x2475d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 52), (uint8_t)GPR_U32(ctx, 7));
label_2475dc:
    // 0x2475dc: 0xa2070004  sb          $a3, 0x4($s0)
    ctx->pc = 0x2475dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 7));
label_2475e0:
    // 0x2475e0: 0xa2070035  sb          $a3, 0x35($s0)
    ctx->pc = 0x2475e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 53), (uint8_t)GPR_U32(ctx, 7));
label_2475e4:
    // 0x2475e4: 0xa2070005  sb          $a3, 0x5($s0)
    ctx->pc = 0x2475e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 7));
label_2475e8:
    // 0x2475e8: 0xa2070036  sb          $a3, 0x36($s0)
    ctx->pc = 0x2475e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 54), (uint8_t)GPR_U32(ctx, 7));
label_2475ec:
    // 0x2475ec: 0xa2070006  sb          $a3, 0x6($s0)
    ctx->pc = 0x2475ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 7));
label_2475f0:
    // 0x2475f0: 0xa2070037  sb          $a3, 0x37($s0)
    ctx->pc = 0x2475f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 55), (uint8_t)GPR_U32(ctx, 7));
label_2475f4:
    // 0x2475f4: 0xa2070007  sb          $a3, 0x7($s0)
    ctx->pc = 0x2475f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 7));
label_2475f8:
    // 0x2475f8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2475f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_2475fc:
    // 0x2475fc: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2475fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_247600:
    // 0x247600: 0xae06001c  sw          $a2, 0x1C($s0)
    ctx->pc = 0x247600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 6));
label_247604:
    // 0x247604: 0xae060018  sw          $a2, 0x18($s0)
    ctx->pc = 0x247604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 6));
label_247608:
    // 0x247608: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x247608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24760c:
    // 0x24760c: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x24760cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
label_247610:
    // 0x247610: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x247610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247614:
    // 0x247614: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x247614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
label_247618:
    // 0x247618: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x247618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24761c:
    // 0x24761c: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x24761cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
label_247620:
    // 0x247620: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x247620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247624:
    // 0x247624: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x247624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
label_247628:
    // 0x247628: 0x8e270018  lw          $a3, 0x18($s1)
    ctx->pc = 0x247628u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_24762c:
    // 0x24762c: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x24762cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_247630:
    // 0x247630: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x247630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_247634:
    // 0x247634: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x247634u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_247638:
    // 0x247638: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x247638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_24763c:
    // 0x24763c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x24763cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247640:
    // 0x247640: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x247640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
label_247644:
    // 0x247644: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x247644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_247648:
    // 0x247648: 0x8e260018  lw          $a2, 0x18($s1)
    ctx->pc = 0x247648u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_24764c:
    // 0x24764c: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x24764cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_247650:
    // 0x247650: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x247650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_247654:
    // 0x247654: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x247654u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_247658:
    // 0x247658: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x247658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_24765c:
    // 0x24765c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x24765cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247660:
    // 0x247660: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x247660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
label_247664:
    // 0x247664: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x247664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_247668:
    // 0x247668: 0xae03009c  sw          $v1, 0x9C($s0)
    ctx->pc = 0x247668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 3));
label_24766c:
    // 0x24766c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x24766cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_247670:
    // 0x247670: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x247670u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_247674:
    // 0x247674: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x247674u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_247678:
    // 0x247678: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x247678u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24767c:
    // 0x24767c: 0x3e00008  jr          $ra
label_247680:
    if (ctx->pc == 0x247680u) {
        ctx->pc = 0x247680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24767Cu;
        // 0x247680: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247684u;
        goto label_247684;
    }
    ctx->pc = 0x24767Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24767Cu;
        // 0x247680: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24767Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247684u;
label_247684:
    // 0x247684: 0x0  nop
    ctx->pc = 0x247684u;
    // NOP
label_247688:
    // 0x247688: 0x0  nop
    ctx->pc = 0x247688u;
    // NOP
label_24768c:
    // 0x24768c: 0x0  nop
    ctx->pc = 0x24768cu;
    // NOP
label_247690:
    // 0x247690: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x247690u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_247694:
    // 0x247694: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x247694u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_247698:
    // 0x247698: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x247698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24769c:
    // 0x24769c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24769cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2476a0:
    // 0x2476a0: 0xc18dba0  jal         func_636E80
label_2476a4:
    if (ctx->pc == 0x2476A4u) {
        ctx->pc = 0x2476A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2476A0u;
        // 0x2476a4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2476A8u;
        goto label_2476a8;
    }
    ctx->pc = 0x2476A0u;
    SET_GPR_U32(ctx, 31, 0x2476A8u);
    ctx->pc = 0x2476A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2476A0u;
    // 0x2476a4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x636E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x636E80u, 0x2476A0u, 0x2476A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2476A8u;
label_2476a8:
    // 0x2476a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2476a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2476ac:
    // 0x2476ac: 0x3e00008  jr          $ra
label_2476b0:
    if (ctx->pc == 0x2476B0u) {
        ctx->pc = 0x2476B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2476ACu;
        // 0x2476b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2476B4u;
        goto label_2476b4;
    }
    ctx->pc = 0x2476ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2476B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2476ACu;
        // 0x2476b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2476ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2476B4u;
label_2476b4:
    // 0x2476b4: 0x0  nop
    ctx->pc = 0x2476b4u;
    // NOP
label_2476b8:
    // 0x2476b8: 0x0  nop
    ctx->pc = 0x2476b8u;
    // NOP
label_2476bc:
    // 0x2476bc: 0x0  nop
    ctx->pc = 0x2476bcu;
    // NOP
label_2476c0:
    // 0x2476c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2476c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2476c4:
    // 0x2476c4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2476c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2476c8:
    // 0x2476c8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2476c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2476cc:
    // 0x2476cc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2476ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2476d0:
    // 0x2476d0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2476d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2476d4:
    // 0x2476d4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2476d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2476d8:
    // 0x2476d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2476d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2476dc:
    // 0x2476dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2476dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2476e0:
    // 0x2476e0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2476e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2476e4:
    // 0x2476e4: 0xc4800044  lwc1        $f0, 0x44($a0)
    ctx->pc = 0x2476e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2476e8:
    // 0x2476e8: 0xc4c10030  lwc1        $f1, 0x30($a2)
    ctx->pc = 0x2476e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2476ec:
    // 0x2476ec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2476ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2476f0:
    // 0x2476f0: 0x0  nop
    ctx->pc = 0x2476f0u;
    // NOP
label_2476f4:
    // 0x2476f4: 0x45000081  bc1f        . + 4 + (0x81 << 2)
label_2476f8:
    if (ctx->pc == 0x2476F8u) {
        ctx->pc = 0x2476F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2476F4u;
        // 0x2476f8: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2476FCu;
        goto label_2476fc;
    }
    ctx->pc = 0x2476F4u;
    {
        const bool branch_taken_0x2476f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2476F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2476F4u;
        // 0x2476f8: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2476f4) {
            ctx->pc = 0x2478FCu;
            goto label_2478fc;
        }
    }
    ctx->pc = 0x2476FCu;
label_2476fc:
    // 0x2476fc: 0xc6800048  lwc1        $f0, 0x48($s4)
    ctx->pc = 0x2476fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247700:
    // 0x247700: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x247700u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_247704:
    // 0x247704: 0x0  nop
    ctx->pc = 0x247704u;
    // NOP
label_247708:
    // 0x247708: 0x4500007c  bc1f        . + 4 + (0x7C << 2)
label_24770c:
    if (ctx->pc == 0x24770Cu) {
        ctx->pc = 0x247710u;
        goto label_247710;
    }
    ctx->pc = 0x247708u;
    {
        const bool branch_taken_0x247708 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x247708) {
            ctx->pc = 0x2478FCu;
            goto label_2478fc;
        }
    }
    ctx->pc = 0x247710u;
label_247710:
    // 0x247710: 0xc6800040  lwc1        $f0, 0x40($s4)
    ctx->pc = 0x247710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247714:
    // 0x247714: 0x460c0502  mul.s       $f20, $f0, $f12
    ctx->pc = 0x247714u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_247718:
    // 0x247718: 0xc06d452  jal         func_1B5148
label_24771c:
    if (ctx->pc == 0x24771Cu) {
        ctx->pc = 0x24771Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247718u;
        // 0x24771c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x247720u;
        goto label_247720;
    }
    ctx->pc = 0x247718u;
    SET_GPR_U32(ctx, 31, 0x247720u);
    ctx->pc = 0x24771Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247718u;
    // 0x24771c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5148u;
    { ctx->pc = 0x1b5148; return; }
    ctx->pc = 0x247720u;
label_247720:
    // 0x247720: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x247720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_247724:
    // 0x247724: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x247724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_247728:
    // 0x247728: 0x0  nop
    ctx->pc = 0x247728u;
    // NOP
label_24772c:
    // 0x24772c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x24772cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_247730:
    // 0x247730: 0x0  nop
    ctx->pc = 0x247730u;
    // NOP
label_247734:
    // 0x247734: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_247738:
    if (ctx->pc == 0x247738u) {
        ctx->pc = 0x24773Cu;
        goto label_24773c;
    }
    ctx->pc = 0x247734u;
    {
        const bool branch_taken_0x247734 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x247734) {
            ctx->pc = 0x24774Cu;
            goto label_24774c;
        }
    }
    ctx->pc = 0x24773Cu;
label_24773c:
    // 0x24773c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24773cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_247740:
    // 0x247740: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x247740u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_247744:
    // 0x247744: 0x10000007  b           . + 4 + (0x7 << 2)
label_247748:
    if (ctx->pc == 0x247748u) {
        ctx->pc = 0x24774Cu;
        goto label_24774c;
    }
    ctx->pc = 0x247744u;
    {
        const bool branch_taken_0x247744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x247744) {
            ctx->pc = 0x247764u;
            goto label_247764;
        }
    }
    ctx->pc = 0x24774Cu;
label_24774c:
    // 0x24774c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x24774cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_247750:
    // 0x247750: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x247750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_247754:
    // 0x247754: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x247754u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_247758:
    // 0x247758: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x247758u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_24775c:
    // 0x24775c: 0x0  nop
    ctx->pc = 0x24775cu;
    // NOP
label_247760:
    // 0x247760: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x247760u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_247764:
    // 0x247764: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
label_247768:
    if (ctx->pc == 0x247768u) {
        ctx->pc = 0x247768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247764u;
        // 0x247768: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24776Cu;
        goto label_24776c;
    }
    ctx->pc = 0x247764u;
    {
        const bool branch_taken_0x247764 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x247768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247764u;
        // 0x247768: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247764) {
            ctx->pc = 0x247778u;
            goto label_247778;
        }
    }
    ctx->pc = 0x24776Cu;
label_24776c:
    // 0x24776c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x24776cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_247770:
    // 0x247770: 0x10000007  b           . + 4 + (0x7 << 2)
label_247774:
    if (ctx->pc == 0x247774u) {
        ctx->pc = 0x247774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247770u;
        // 0x247774: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x247778u;
        goto label_247778;
    }
    ctx->pc = 0x247770u;
    {
        const bool branch_taken_0x247770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247770u;
        // 0x247774: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x247770) {
            ctx->pc = 0x247790u;
            goto label_247790;
        }
    }
    ctx->pc = 0x247778u;
label_247778:
    // 0x247778: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x247778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_24777c:
    // 0x24777c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x24777cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_247780:
    // 0x247780: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x247780u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_247784:
    // 0x247784: 0x0  nop
    ctx->pc = 0x247784u;
    // NOP
label_247788:
    // 0x247788: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x247788u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_24778c:
    // 0x24778c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x24778cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_247790:
    // 0x247790: 0xc18f7b4  jal         func_63DED0
label_247794:
    if (ctx->pc == 0x247794u) {
        ctx->pc = 0x247794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247790u;
        // 0x247794: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x247798u;
        goto label_247798;
    }
    ctx->pc = 0x247790u;
    SET_GPR_U32(ctx, 31, 0x247798u);
    ctx->pc = 0x247794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247790u;
    // 0x247794: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x63DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x63DED0u, 0x247790u, 0x247798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247798u;
label_247798:
    // 0x247798: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x247798u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24779c:
    // 0x24779c: 0x0  nop
    ctx->pc = 0x24779cu;
    // NOP
label_2477a0:
    // 0x2477a0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2477a4:
    if (ctx->pc == 0x2477A4u) {
        ctx->pc = 0x2477A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2477A0u;
        // 0x2477a4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2477A8u;
        goto label_2477a8;
    }
    ctx->pc = 0x2477A0u;
    {
        const bool branch_taken_0x2477a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2477A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2477A0u;
        // 0x2477a4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2477a0) {
            ctx->pc = 0x2477ACu;
            goto label_2477ac;
        }
    }
    ctx->pc = 0x2477A8u;
label_2477a8:
    // 0x2477a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2477a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2477ac:
    // 0x2477ac: 0x10000050  b           . + 4 + (0x50 << 2)
label_2477b0:
    if (ctx->pc == 0x2477B0u) {
        ctx->pc = 0x2477B4u;
        goto label_2477b4;
    }
    ctx->pc = 0x2477ACu;
    {
        const bool branch_taken_0x2477ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2477ac) {
            ctx->pc = 0x2478F0u;
            goto label_2478f0;
        }
    }
    ctx->pc = 0x2477B4u;
label_2477b4:
    // 0x2477b4: 0xc18f7b4  jal         func_63DED0
label_2477b8:
    if (ctx->pc == 0x2477B8u) {
        ctx->pc = 0x2477BCu;
        goto label_2477bc;
    }
    ctx->pc = 0x2477B4u;
    SET_GPR_U32(ctx, 31, 0x2477BCu);
    ctx->pc = 0x63DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x63DED0u, 0x2477B4u, 0x2477BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2477BCu;
label_2477bc:
    // 0x2477bc: 0xc18f7b4  jal         func_63DED0
label_2477c0:
    if (ctx->pc == 0x2477C0u) {
        ctx->pc = 0x2477C4u;
        goto label_2477c4;
    }
    ctx->pc = 0x2477BCu;
    SET_GPR_U32(ctx, 31, 0x2477C4u);
    ctx->pc = 0x63DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x63DED0u, 0x2477BCu, 0x2477C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2477C4u;
label_2477c4:
    // 0x2477c4: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x2477c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_2477c8:
    // 0x2477c8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2477c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_2477cc:
    // 0x2477cc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2477ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_2477d0:
    // 0x2477d0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2477d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2477d4:
    // 0x2477d4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2477d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2477d8:
    // 0x2477d8: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x2477d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_2477dc:
    // 0x2477dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2477dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2477e0:
    // 0x2477e0: 0x27a50088  addiu       $a1, $sp, 0x88
    ctx->pc = 0x2477e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_2477e4:
    // 0x2477e4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2477e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2477e8:
    // 0x2477e8: 0xc18d9e8  jal         func_6367A0
label_2477ec:
    if (ctx->pc == 0x2477ECu) {
        ctx->pc = 0x2477ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2477E8u;
        // 0x2477ec: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2477F0u;
        goto label_2477f0;
    }
    ctx->pc = 0x2477E8u;
    SET_GPR_U32(ctx, 31, 0x2477F0u);
    ctx->pc = 0x2477ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2477E8u;
    // 0x2477ec: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x6367A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x6367A0u, 0x2477E8u, 0x2477F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2477F0u;
label_2477f0:
    // 0x2477f0: 0xc18f7b4  jal         func_63DED0
label_2477f4:
    if (ctx->pc == 0x2477F4u) {
        ctx->pc = 0x2477F8u;
        goto label_2477f8;
    }
    ctx->pc = 0x2477F0u;
    SET_GPR_U32(ctx, 31, 0x2477F8u);
    ctx->pc = 0x63DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x63DED0u, 0x2477F0u, 0x2477F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2477F8u;
label_2477f8:
    // 0x2477f8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2477f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_2477fc:
    // 0x2477fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2477fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_247800:
    // 0x247800: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x247800u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_247804:
    // 0x247804: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x247804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_247808:
    // 0x247808: 0x0  nop
    ctx->pc = 0x247808u;
    // NOP
label_24780c:
    // 0x24780c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x24780cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_247810:
    // 0x247810: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x247810u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_247814:
    // 0x247814: 0xc18f7b4  jal         func_63DED0
label_247818:
    if (ctx->pc == 0x247818u) {
        ctx->pc = 0x247818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247814u;
        // 0x247818: 0xe7a00070  swc1        $f0, 0x70($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24781Cu;
        goto label_24781c;
    }
    ctx->pc = 0x247814u;
    SET_GPR_U32(ctx, 31, 0x24781Cu);
    ctx->pc = 0x247818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247814u;
    // 0x247818: 0xe7a00070  swc1        $f0, 0x70($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x63DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x63DED0u, 0x247814u, 0x24781Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24781Cu;
label_24781c:
    // 0x24781c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x24781cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_247820:
    // 0x247820: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x247820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_247824:
    // 0x247824: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x247824u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_247828:
    // 0x247828: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x247828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_24782c:
    // 0x24782c: 0x0  nop
    ctx->pc = 0x24782cu;
    // NOP
label_247830:
    // 0x247830: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x247830u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_247834:
    // 0x247834: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x247834u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_247838:
    // 0x247838: 0xc18f7b4  jal         func_63DED0
label_24783c:
    if (ctx->pc == 0x24783Cu) {
        ctx->pc = 0x24783Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247838u;
        // 0x24783c: 0xe7a00074  swc1        $f0, 0x74($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x247840u;
        goto label_247840;
    }
    ctx->pc = 0x247838u;
    SET_GPR_U32(ctx, 31, 0x247840u);
    ctx->pc = 0x24783Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247838u;
    // 0x24783c: 0xe7a00074  swc1        $f0, 0x74($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x63DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x63DED0u, 0x247838u, 0x247840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247840u;
label_247840:
    // 0x247840: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x247840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_247844:
    // 0x247844: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x247844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_247848:
    // 0x247848: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x247848u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_24784c:
    // 0x24784c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x24784cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_247850:
    // 0x247850: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x247850u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_247854:
    // 0x247854: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x247854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_247858:
    // 0x247858: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x247858u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_24785c:
    // 0x24785c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x24785cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_247860:
    // 0x247860: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x247860u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_247864:
    // 0x247864: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x247864u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_247868:
    // 0x247868: 0xc066d7a  jal         func_19B5E8
label_24786c:
    if (ctx->pc == 0x24786Cu) {
        ctx->pc = 0x24786Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247868u;
        // 0x24786c: 0xe7a00078  swc1        $f0, 0x78($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x247870u;
        goto label_247870;
    }
    ctx->pc = 0x247868u;
    SET_GPR_U32(ctx, 31, 0x247870u);
    ctx->pc = 0x24786Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247868u;
    // 0x24786c: 0xe7a00078  swc1        $f0, 0x78($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x247870u;
label_247870:
    // 0x247870: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x247870u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_247874:
    // 0x247874: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x247874u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_247878:
    // 0x247878: 0x320f809  jalr        $t9
label_24787c:
    if (ctx->pc == 0x24787Cu) {
        ctx->pc = 0x24787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247878u;
        // 0x24787c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247880u;
        goto label_247880;
    }
    ctx->pc = 0x247878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x247880u);
        ctx->pc = 0x24787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247878u;
        // 0x24787c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247878u, 0x247880u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x247880u;
label_247880:
    // 0x247880: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x247880u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_247884:
    // 0x247884: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x247884u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_247888:
    // 0x247888: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x247888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24788c:
    // 0x24788c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x24788cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_247890:
    // 0x247890: 0x320f809  jalr        $t9
label_247894:
    if (ctx->pc == 0x247894u) {
        ctx->pc = 0x247894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247890u;
        // 0x247894: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247898u;
        goto label_247898;
    }
    ctx->pc = 0x247890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x247898u);
        ctx->pc = 0x247894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247890u;
        // 0x247894: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247890u, 0x247898u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x247898u;
label_247898:
    // 0x247898: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x247898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_24789c:
    // 0x24789c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x24789cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2478a0:
    // 0x2478a0: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x2478a0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_2478a4:
    // 0x2478a4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2478a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2478a8:
    // 0x2478a8: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x2478a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_2478ac:
    // 0x2478ac: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_2478b0:
    if (ctx->pc == 0x2478B0u) {
        ctx->pc = 0x2478B4u;
        goto label_2478b4;
    }
    ctx->pc = 0x2478ACu;
    {
        const bool branch_taken_0x2478ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2478ac) {
            ctx->pc = 0x2478BCu;
            goto label_2478bc;
        }
    }
    ctx->pc = 0x2478B4u;
label_2478b4:
    // 0x2478b4: 0xc6800034  lwc1        $f0, 0x34($s4)
    ctx->pc = 0x2478b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2478b8:
    // 0x2478b8: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x2478b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_2478bc:
    // 0x2478bc: 0x0  nop
    ctx->pc = 0x2478bcu;
    // NOP
label_2478c0:
    // 0x2478c0: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x2478c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_2478c4:
    // 0x2478c4: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x2478c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
label_2478c8:
    // 0x2478c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2478c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2478cc:
    // 0x2478cc: 0x2463eb38  addiu       $v1, $v1, -0x14C8
    ctx->pc = 0x2478ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961976));
label_2478d0:
    // 0x2478d0: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2478d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2478d4:
    // 0x2478d4: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x2478d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_2478d8:
    // 0x2478d8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2478d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2478dc:
    // 0x2478dc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2478dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_2478e0:
    // 0x2478e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2478e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2478e4:
    // 0x2478e4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2478e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2478e8:
    // 0x2478e8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2478e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2478ec:
    // 0x2478ec: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x2478ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_2478f0:
    // 0x2478f0: 0x230182b  sltu        $v1, $s1, $s0
    ctx->pc = 0x2478f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2478f4:
    // 0x2478f4: 0x1460ffaf  bnez        $v1, . + 4 + (-0x51 << 2)
label_2478f8:
    if (ctx->pc == 0x2478F8u) {
        ctx->pc = 0x2478FCu;
        goto label_2478fc;
    }
    ctx->pc = 0x2478F4u;
    {
        const bool branch_taken_0x2478f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2478f4) {
            ctx->pc = 0x2477B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2477b4;
        }
    }
    ctx->pc = 0x2478FCu;
label_2478fc:
    // 0x2478fc: 0x0  nop
    ctx->pc = 0x2478fcu;
    // NOP
label_247900:
    // 0x247900: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x247900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_247904:
    // 0x247904: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x247904u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_247908:
    // 0x247908: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x247908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_24790c:
    // 0x24790c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x24790cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_247910:
    // 0x247910: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x247910u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_247914:
    // 0x247914: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x247914u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_247918:
    // 0x247918: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x247918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24791c:
    // 0x24791c: 0x3e00008  jr          $ra
label_247920:
    if (ctx->pc == 0x247920u) {
        ctx->pc = 0x247920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24791Cu;
        // 0x247920: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247924u;
        goto label_247924;
    }
    ctx->pc = 0x24791Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24791Cu;
        // 0x247920: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24791Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247924u;
label_247924:
    // 0x247924: 0x0  nop
    ctx->pc = 0x247924u;
    // NOP
label_247928:
    // 0x247928: 0x0  nop
    ctx->pc = 0x247928u;
    // NOP
label_24792c:
    // 0x24792c: 0x0  nop
    ctx->pc = 0x24792cu;
    // NOP
label_247930:
    // 0x247930: 0x8c830098  lw          $v1, 0x98($a0)
    ctx->pc = 0x247930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
label_247934:
    // 0x247934: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x247934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_247938:
    // 0x247938: 0x2442eb3c  addiu       $v0, $v0, -0x14C4
    ctx->pc = 0x247938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961980));
label_24793c:
    // 0x24793c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x24793cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_247940:
    // 0x247940: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x247940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_247944:
    // 0x247944: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x247944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_247948:
    // 0x247948: 0xac830098  sw          $v1, 0x98($a0)
    ctx->pc = 0x247948u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 3));
label_24794c:
    // 0x24794c: 0x8c870088  lw          $a3, 0x88($a0)
    ctx->pc = 0x24794cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_247950:
    // 0x247950: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x247950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247954:
    // 0x247954: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x247954u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_247958:
    // 0x247958: 0xe4e00010  swc1        $f0, 0x10($a3)
    ctx->pc = 0x247958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
label_24795c:
    // 0x24795c: 0x8ce50018  lw          $a1, 0x18($a3)
    ctx->pc = 0x24795cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_247960:
    // 0x247960: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x247960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247964:
    // 0x247964: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x247964u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_247968:
    // 0x247968: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x247968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_24796c:
    // 0x24796c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x24796cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_247970:
    // 0x247970: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x247970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_247974:
    // 0x247974: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x247974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_247978:
    // 0x247978: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x247978u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24797c:
    // 0x24797c: 0x0  nop
    ctx->pc = 0x24797cu;
    // NOP
label_247980:
    // 0x247980: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_247984:
    if (ctx->pc == 0x247984u) {
        ctx->pc = 0x247988u;
        goto label_247988;
    }
    ctx->pc = 0x247980u;
    {
        const bool branch_taken_0x247980 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x247980) {
            ctx->pc = 0x247994u;
            goto label_247994;
        }
    }
    ctx->pc = 0x247988u;
label_247988:
    // 0x247988: 0xace0001c  sw          $zero, 0x1C($a3)
    ctx->pc = 0x247988u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
label_24798c:
    // 0x24798c: 0x10000039  b           . + 4 + (0x39 << 2)
label_247990:
    if (ctx->pc == 0x247990u) {
        ctx->pc = 0x247990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24798Cu;
        // 0x247990: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247994u;
        goto label_247994;
    }
    ctx->pc = 0x24798Cu;
    {
        const bool branch_taken_0x24798c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24798Cu;
        // 0x247990: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24798c) {
            ctx->pc = 0x247A74u;
            goto label_247a74;
        }
    }
    ctx->pc = 0x247994u;
label_247994:
    // 0x247994: 0xc4e2001c  lwc1        $f2, 0x1C($a3)
    ctx->pc = 0x247994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_247998:
    // 0x247998: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x247998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_24799c:
    // 0x24799c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24799cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2479a0:
    // 0x2479a0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2479a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2479a4:
    // 0x2479a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2479a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2479a8:
    // 0x2479a8: 0x0  nop
    ctx->pc = 0x2479a8u;
    // NOP
label_2479ac:
    // 0x2479ac: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2479acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_2479b0:
    // 0x2479b0: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x2479b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_2479b4:
    // 0x2479b4: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x2479b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
label_2479b8:
    // 0x2479b8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2479b8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_2479bc:
    // 0x2479bc: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2479bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_2479c0:
    // 0x2479c0: 0xe4e0001c  swc1        $f0, 0x1C($a3)
    ctx->pc = 0x2479c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 28), bits); }
label_2479c4:
    // 0x2479c4: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x2479c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_2479c8:
    // 0x2479c8: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2479c8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_2479cc:
    // 0x2479cc: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x2479ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
label_2479d0:
    // 0x2479d0: 0x2463eb40  addiu       $v1, $v1, -0x14C0
    ctx->pc = 0x2479d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961984));
label_2479d4:
    // 0x2479d4: 0x8ce60018  lw          $a2, 0x18($a3)
    ctx->pc = 0x2479d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_2479d8:
    // 0x2479d8: 0xc4e10010  lwc1        $f1, 0x10($a3)
    ctx->pc = 0x2479d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2479dc:
    // 0x2479dc: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x2479dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_2479e0:
    // 0x2479e0: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x2479e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_2479e4:
    // 0x2479e4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2479e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_2479e8:
    // 0x2479e8: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2479e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_2479ec:
    // 0x2479ec: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2479ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2479f0:
    // 0x2479f0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2479f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2479f4:
    // 0x2479f4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2479f8:
    if (ctx->pc == 0x2479F8u) {
        ctx->pc = 0x2479F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2479F4u;
        // 0x2479f8: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2479FCu;
        goto label_2479fc;
    }
    ctx->pc = 0x2479F4u;
    {
        const bool branch_taken_0x2479f4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2479F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2479F4u;
        // 0x2479f8: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2479f4) {
            ctx->pc = 0x247A08u;
            goto label_247a08;
        }
    }
    ctx->pc = 0x2479FCu;
label_2479fc:
    // 0x2479fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2479fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_247a00:
    // 0x247a00: 0x10000008  b           . + 4 + (0x8 << 2)
label_247a04:
    if (ctx->pc == 0x247A04u) {
        ctx->pc = 0x247A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247A00u;
        // 0x247a04: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x247A08u;
        goto label_247a08;
    }
    ctx->pc = 0x247A00u;
    {
        const bool branch_taken_0x247a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247A00u;
        // 0x247a04: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x247a00) {
            ctx->pc = 0x247A24u;
            goto label_247a24;
        }
    }
    ctx->pc = 0x247A08u;
label_247a08:
    // 0x247a08: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x247a08u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_247a0c:
    // 0x247a0c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x247a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_247a10:
    // 0x247a10: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x247a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_247a14:
    // 0x247a14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x247a14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_247a18:
    // 0x247a18: 0x0  nop
    ctx->pc = 0x247a18u;
    // NOP
label_247a1c:
    // 0x247a1c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x247a1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_247a20:
    // 0x247a20: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x247a20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_247a24:
    // 0x247a24: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x247a24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_247a28:
    // 0x247a28: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x247a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_247a2c:
    // 0x247a2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247a2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_247a30:
    // 0x247a30: 0x0  nop
    ctx->pc = 0x247a30u;
    // NOP
label_247a34:
    // 0x247a34: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x247a34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_247a38:
    // 0x247a38: 0x0  nop
    ctx->pc = 0x247a38u;
    // NOP
label_247a3c:
    // 0x247a3c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_247a40:
    if (ctx->pc == 0x247A40u) {
        ctx->pc = 0x247A44u;
        goto label_247a44;
    }
    ctx->pc = 0x247A3Cu;
    {
        const bool branch_taken_0x247a3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x247a3c) {
            ctx->pc = 0x247A54u;
            goto label_247a54;
        }
    }
    ctx->pc = 0x247A44u;
label_247a44:
    // 0x247a44: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x247a44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_247a48:
    // 0x247a48: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x247a48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_247a4c:
    // 0x247a4c: 0x10000008  b           . + 4 + (0x8 << 2)
label_247a50:
    if (ctx->pc == 0x247A50u) {
        ctx->pc = 0x247A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247A4Cu;
        // 0x247a50: 0xac83008c  sw          $v1, 0x8C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247A54u;
        goto label_247a54;
    }
    ctx->pc = 0x247A4Cu;
    {
        const bool branch_taken_0x247a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247A4Cu;
        // 0x247a50: 0xac83008c  sw          $v1, 0x8C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247a4c) {
            ctx->pc = 0x247A70u;
            goto label_247a70;
        }
    }
    ctx->pc = 0x247A54u;
label_247a54:
    // 0x247a54: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x247a54u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_247a58:
    // 0x247a58: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x247a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_247a5c:
    // 0x247a5c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x247a5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_247a60:
    // 0x247a60: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x247a60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_247a64:
    // 0x247a64: 0x0  nop
    ctx->pc = 0x247a64u;
    // NOP
label_247a68:
    // 0x247a68: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x247a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_247a6c:
    // 0x247a6c: 0xac83008c  sw          $v1, 0x8C($a0)
    ctx->pc = 0x247a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 3));
label_247a70:
    // 0x247a70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x247a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_247a74:
    // 0x247a74: 0x3e00008  jr          $ra
label_247a78:
    if (ctx->pc == 0x247A78u) {
        ctx->pc = 0x247A7Cu;
        goto label_247a7c;
    }
    ctx->pc = 0x247A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247A7Cu;
label_247a7c:
    // 0x247a7c: 0x0  nop
    ctx->pc = 0x247a7cu;
    // NOP
label_247a80:
    // 0x247a80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x247a80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247a84:
    // 0x247a84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x247a84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247a88:
    // 0x247a88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x247a88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247a8c:
    // 0x247a8c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x247a8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247a90:
    // 0x247a90: 0x3c05005a  lui         $a1, 0x5A
    ctx->pc = 0x247a90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)90 << 16));
label_247a94:
    // 0x247a94: 0x24a559a0  addiu       $a1, $a1, 0x59A0
    ctx->pc = 0x247a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22944));
label_247a98:
    // 0x247a98: 0xa71821  addu        $v1, $a1, $a3
    ctx->pc = 0x247a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_247a9c:
    // 0x247a9c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x247a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_247aa0:
    // 0x247aa0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_247aa4:
    if (ctx->pc == 0x247AA4u) {
        ctx->pc = 0x247AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247AA0u;
        // 0x247aa4: 0x881821  addu        $v1, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247AA8u;
        goto label_247aa8;
    }
    ctx->pc = 0x247AA0u;
    {
        const bool branch_taken_0x247aa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x247AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247AA0u;
        // 0x247aa4: 0x881821  addu        $v1, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247aa0) {
            ctx->pc = 0x247AB4u;
            goto label_247ab4;
        }
    }
    ctx->pc = 0x247AA8u;
label_247aa8:
    // 0x247aa8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x247aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_247aac:
    // 0x247aac: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x247aacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_247ab0:
    // 0x247ab0: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x247ab0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_247ab4:
    // 0x247ab4: 0x0  nop
    ctx->pc = 0x247ab4u;
    // NOP
label_247ab8:
    // 0x247ab8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x247ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_247abc:
    // 0x247abc: 0x2cc3000a  sltiu       $v1, $a2, 0xA
    ctx->pc = 0x247abcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_247ac0:
    // 0x247ac0: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_247ac4:
    if (ctx->pc == 0x247AC4u) {
        ctx->pc = 0x247AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247AC0u;
        // 0x247ac4: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247AC8u;
        goto label_247ac8;
    }
    ctx->pc = 0x247AC0u;
    {
        const bool branch_taken_0x247ac0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x247AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247AC0u;
        // 0x247ac4: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247ac0) {
            ctx->pc = 0x247A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_247a98;
        }
    }
    ctx->pc = 0x247AC8u;
label_247ac8:
    // 0x247ac8: 0x3e00008  jr          $ra
label_247acc:
    if (ctx->pc == 0x247ACCu) {
        ctx->pc = 0x247AD0u;
        goto label_247ad0;
    }
    ctx->pc = 0x247AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247AD0u;
label_247ad0:
    // 0x247ad0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x247ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_247ad4:
    // 0x247ad4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x247ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_247ad8:
    // 0x247ad8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x247ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_247adc:
    // 0x247adc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x247adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_247ae0:
    // 0x247ae0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x247ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_247ae4:
    // 0x247ae4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x247ae4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_247ae8:
    // 0x247ae8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x247ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_247aec:
    // 0x247aec: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x247aecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_247af0:
    // 0x247af0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x247af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_247af4:
    // 0x247af4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x247af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247af8:
    // 0x247af8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x247af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_247afc:
    // 0x247afc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x247afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247b00:
    // 0x247b00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x247b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_247b04:
    // 0x247b04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x247b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_247b08:
    // 0x247b08: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x247b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
label_247b0c:
    // 0x247b0c: 0x246359a0  addiu       $v1, $v1, 0x59A0
    ctx->pc = 0x247b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22944));
label_247b10:
    // 0x247b10: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x247b10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_247b14:
    // 0x247b14: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x247b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_247b18:
    // 0x247b18: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x247b18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_247b1c:
    // 0x247b1c: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x247b1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_247b20:
    // 0x247b20: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x247b20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_247b24:
    // 0x247b24: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x247b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_247b28:
    // 0x247b28: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x247b28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
label_247b2c:
    // 0x247b2c: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x247b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
label_247b30:
    // 0x247b30: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x247b30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
label_247b34:
    // 0x247b34: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x247b34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
label_247b38:
    // 0x247b38: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x247b38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
label_247b3c:
    // 0x247b3c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_247b40:
    if (ctx->pc == 0x247B40u) {
        ctx->pc = 0x247B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247B3Cu;
        // 0x247b40: 0xacc0001c  sw          $zero, 0x1C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247B44u;
        goto label_247b44;
    }
    ctx->pc = 0x247B3Cu;
    {
        const bool branch_taken_0x247b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x247B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247B3Cu;
        // 0x247b40: 0xacc0001c  sw          $zero, 0x1C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247b3c) {
            ctx->pc = 0x247B10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_247b10;
        }
    }
    ctx->pc = 0x247B44u;
label_247b44:
    // 0x247b44: 0x2c81000a  sltiu       $at, $a0, 0xA
    ctx->pc = 0x247b44u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_247b48:
    // 0x247b48: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_247b4c:
    if (ctx->pc == 0x247B4Cu) {
        ctx->pc = 0x247B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247B48u;
        // 0x247b4c: 0x42880  sll         $a1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247B50u;
        goto label_247b50;
    }
    ctx->pc = 0x247B48u;
    {
        const bool branch_taken_0x247b48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x247B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247B48u;
        // 0x247b4c: 0x42880  sll         $a1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247b48) {
            ctx->pc = 0x247B78u;
            goto label_247b78;
        }
    }
    ctx->pc = 0x247B50u;
label_247b50:
    // 0x247b50: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x247b50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
label_247b54:
    // 0x247b54: 0x246359a0  addiu       $v1, $v1, 0x59A0
    ctx->pc = 0x247b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22944));
label_247b58:
    // 0x247b58: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x247b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_247b5c:
    // 0x247b5c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x247b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_247b60:
    // 0x247b60: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x247b60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_247b64:
    // 0x247b64: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x247b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_247b68:
    // 0x247b68: 0x2c82000a  sltiu       $v0, $a0, 0xA
    ctx->pc = 0x247b68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_247b6c:
    // 0x247b6c: 0x0  nop
    ctx->pc = 0x247b6cu;
    // NOP
label_247b70:
    // 0x247b70: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_247b74:
    if (ctx->pc == 0x247B74u) {
        ctx->pc = 0x247B78u;
        goto label_247b78;
    }
    ctx->pc = 0x247B70u;
    {
        const bool branch_taken_0x247b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x247b70) {
            ctx->pc = 0x247B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_247b58;
        }
    }
    ctx->pc = 0x247B78u;
label_247b78:
    // 0x247b78: 0xc1752f8  jal         func_5D4BE0
label_247b7c:
    if (ctx->pc == 0x247B7Cu) {
        ctx->pc = 0x247B80u;
        goto label_247b80;
    }
    ctx->pc = 0x247B78u;
    SET_GPR_U32(ctx, 31, 0x247B80u);
    ctx->pc = 0x5D4BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5D4BE0u, 0x247B78u, 0x247B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247B80u;
label_247b80:
    // 0x247b80: 0xc1780ec  jal         func_5E03B0
label_247b84:
    if (ctx->pc == 0x247B84u) {
        ctx->pc = 0x247B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247B80u;
        // 0x247b84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247B88u;
        goto label_247b88;
    }
    ctx->pc = 0x247B80u;
    SET_GPR_U32(ctx, 31, 0x247B88u);
    ctx->pc = 0x247B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247B80u;
    // 0x247b84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5E03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5E03B0u, 0x247B80u, 0x247B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247B88u;
label_247b88:
    // 0x247b88: 0x16082b  sltu        $at, $zero, $s6
    ctx->pc = 0x247b88u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_247b8c:
    // 0x247b8c: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
label_247b90:
    if (ctx->pc == 0x247B90u) {
        ctx->pc = 0x247B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247B8Cu;
        // 0x247b90: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247B94u;
        goto label_247b94;
    }
    ctx->pc = 0x247B8Cu;
    {
        const bool branch_taken_0x247b8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x247B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247B8Cu;
        // 0x247b90: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247b8c) {
            ctx->pc = 0x247BF0u;
            { ctx->pc = 0x247bf0; return; }
        }
    }
    ctx->pc = 0x247B94u;
label_247b94:
    // 0x247b94: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x247b94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247b98:
    // 0x247b98: 0x2b11821  addu        $v1, $s5, $s1
    ctx->pc = 0x247b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
label_247b9c:
    // 0x247b9c: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x247b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_247ba0:
    // 0x247ba0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x247ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_247ba4:
    // 0x247ba4: 0x2442eb20  addiu       $v0, $v0, -0x14E0
    ctx->pc = 0x247ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961952));
label_247ba8:
    // 0x247ba8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x247ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_247bac:
    // 0x247bac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x247bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_247bb0:
    // 0x247bb0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x247bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_247bb4:
    // 0x247bb4: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x247bb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x247bb8u;
    return;
}
