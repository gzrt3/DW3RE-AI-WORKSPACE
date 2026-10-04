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


void FUN_0014eba0_part258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1cc370u: goto label_1cc370;
        case 0x1cc374u: goto label_1cc374;
        case 0x1cc378u: goto label_1cc378;
        case 0x1cc37cu: goto label_1cc37c;
        case 0x1cc380u: goto label_1cc380;
        case 0x1cc384u: goto label_1cc384;
        case 0x1cc388u: goto label_1cc388;
        case 0x1cc38cu: goto label_1cc38c;
        case 0x1cc390u: goto label_1cc390;
        case 0x1cc394u: goto label_1cc394;
        case 0x1cc398u: goto label_1cc398;
        case 0x1cc39cu: goto label_1cc39c;
        case 0x1cc3a0u: goto label_1cc3a0;
        case 0x1cc3a4u: goto label_1cc3a4;
        case 0x1cc3a8u: goto label_1cc3a8;
        case 0x1cc3acu: goto label_1cc3ac;
        case 0x1cc3b0u: goto label_1cc3b0;
        case 0x1cc3b4u: goto label_1cc3b4;
        case 0x1cc3b8u: goto label_1cc3b8;
        case 0x1cc3bcu: goto label_1cc3bc;
        case 0x1cc3c0u: goto label_1cc3c0;
        case 0x1cc3c4u: goto label_1cc3c4;
        case 0x1cc3c8u: goto label_1cc3c8;
        case 0x1cc3ccu: goto label_1cc3cc;
        case 0x1cc3d0u: goto label_1cc3d0;
        case 0x1cc3d4u: goto label_1cc3d4;
        case 0x1cc3d8u: goto label_1cc3d8;
        case 0x1cc3dcu: goto label_1cc3dc;
        case 0x1cc3e0u: goto label_1cc3e0;
        case 0x1cc3e4u: goto label_1cc3e4;
        case 0x1cc3e8u: goto label_1cc3e8;
        case 0x1cc3ecu: goto label_1cc3ec;
        case 0x1cc3f0u: goto label_1cc3f0;
        case 0x1cc3f4u: goto label_1cc3f4;
        case 0x1cc3f8u: goto label_1cc3f8;
        case 0x1cc3fcu: goto label_1cc3fc;
        case 0x1cc400u: goto label_1cc400;
        case 0x1cc404u: goto label_1cc404;
        case 0x1cc408u: goto label_1cc408;
        case 0x1cc40cu: goto label_1cc40c;
        case 0x1cc410u: goto label_1cc410;
        case 0x1cc414u: goto label_1cc414;
        case 0x1cc418u: goto label_1cc418;
        case 0x1cc41cu: goto label_1cc41c;
        case 0x1cc420u: goto label_1cc420;
        case 0x1cc424u: goto label_1cc424;
        case 0x1cc428u: goto label_1cc428;
        case 0x1cc42cu: goto label_1cc42c;
        case 0x1cc430u: goto label_1cc430;
        case 0x1cc434u: goto label_1cc434;
        case 0x1cc438u: goto label_1cc438;
        case 0x1cc43cu: goto label_1cc43c;
        case 0x1cc440u: goto label_1cc440;
        case 0x1cc444u: goto label_1cc444;
        case 0x1cc448u: goto label_1cc448;
        case 0x1cc44cu: goto label_1cc44c;
        case 0x1cc450u: goto label_1cc450;
        case 0x1cc454u: goto label_1cc454;
        case 0x1cc458u: goto label_1cc458;
        case 0x1cc45cu: goto label_1cc45c;
        case 0x1cc460u: goto label_1cc460;
        case 0x1cc464u: goto label_1cc464;
        case 0x1cc468u: goto label_1cc468;
        case 0x1cc46cu: goto label_1cc46c;
        case 0x1cc470u: goto label_1cc470;
        case 0x1cc474u: goto label_1cc474;
        case 0x1cc478u: goto label_1cc478;
        case 0x1cc47cu: goto label_1cc47c;
        case 0x1cc480u: goto label_1cc480;
        case 0x1cc484u: goto label_1cc484;
        case 0x1cc488u: goto label_1cc488;
        case 0x1cc48cu: goto label_1cc48c;
        case 0x1cc490u: goto label_1cc490;
        case 0x1cc494u: goto label_1cc494;
        case 0x1cc498u: goto label_1cc498;
        case 0x1cc49cu: goto label_1cc49c;
        case 0x1cc4a0u: goto label_1cc4a0;
        case 0x1cc4a4u: goto label_1cc4a4;
        case 0x1cc4a8u: goto label_1cc4a8;
        case 0x1cc4acu: goto label_1cc4ac;
        case 0x1cc4b0u: goto label_1cc4b0;
        case 0x1cc4b4u: goto label_1cc4b4;
        case 0x1cc4b8u: goto label_1cc4b8;
        case 0x1cc4bcu: goto label_1cc4bc;
        case 0x1cc4c0u: goto label_1cc4c0;
        case 0x1cc4c4u: goto label_1cc4c4;
        case 0x1cc4c8u: goto label_1cc4c8;
        case 0x1cc4ccu: goto label_1cc4cc;
        case 0x1cc4d0u: goto label_1cc4d0;
        case 0x1cc4d4u: goto label_1cc4d4;
        case 0x1cc4d8u: goto label_1cc4d8;
        case 0x1cc4dcu: goto label_1cc4dc;
        case 0x1cc4e0u: goto label_1cc4e0;
        case 0x1cc4e4u: goto label_1cc4e4;
        case 0x1cc4e8u: goto label_1cc4e8;
        case 0x1cc4ecu: goto label_1cc4ec;
        case 0x1cc4f0u: goto label_1cc4f0;
        case 0x1cc4f4u: goto label_1cc4f4;
        case 0x1cc4f8u: goto label_1cc4f8;
        case 0x1cc4fcu: goto label_1cc4fc;
        case 0x1cc500u: goto label_1cc500;
        case 0x1cc504u: goto label_1cc504;
        case 0x1cc508u: goto label_1cc508;
        case 0x1cc50cu: goto label_1cc50c;
        case 0x1cc510u: goto label_1cc510;
        case 0x1cc514u: goto label_1cc514;
        case 0x1cc518u: goto label_1cc518;
        case 0x1cc51cu: goto label_1cc51c;
        case 0x1cc520u: goto label_1cc520;
        case 0x1cc524u: goto label_1cc524;
        case 0x1cc528u: goto label_1cc528;
        case 0x1cc52cu: goto label_1cc52c;
        case 0x1cc530u: goto label_1cc530;
        case 0x1cc534u: goto label_1cc534;
        case 0x1cc538u: goto label_1cc538;
        case 0x1cc53cu: goto label_1cc53c;
        case 0x1cc540u: goto label_1cc540;
        case 0x1cc544u: goto label_1cc544;
        case 0x1cc548u: goto label_1cc548;
        case 0x1cc54cu: goto label_1cc54c;
        case 0x1cc550u: goto label_1cc550;
        case 0x1cc554u: goto label_1cc554;
        case 0x1cc558u: goto label_1cc558;
        case 0x1cc55cu: goto label_1cc55c;
        case 0x1cc560u: goto label_1cc560;
        case 0x1cc564u: goto label_1cc564;
        case 0x1cc568u: goto label_1cc568;
        case 0x1cc56cu: goto label_1cc56c;
        case 0x1cc570u: goto label_1cc570;
        case 0x1cc574u: goto label_1cc574;
        case 0x1cc578u: goto label_1cc578;
        case 0x1cc57cu: goto label_1cc57c;
        case 0x1cc580u: goto label_1cc580;
        case 0x1cc584u: goto label_1cc584;
        case 0x1cc588u: goto label_1cc588;
        case 0x1cc58cu: goto label_1cc58c;
        case 0x1cc590u: goto label_1cc590;
        case 0x1cc594u: goto label_1cc594;
        case 0x1cc598u: goto label_1cc598;
        case 0x1cc59cu: goto label_1cc59c;
        case 0x1cc5a0u: goto label_1cc5a0;
        case 0x1cc5a4u: goto label_1cc5a4;
        case 0x1cc5a8u: goto label_1cc5a8;
        case 0x1cc5acu: goto label_1cc5ac;
        case 0x1cc5b0u: goto label_1cc5b0;
        case 0x1cc5b4u: goto label_1cc5b4;
        case 0x1cc5b8u: goto label_1cc5b8;
        case 0x1cc5bcu: goto label_1cc5bc;
        case 0x1cc5c0u: goto label_1cc5c0;
        case 0x1cc5c4u: goto label_1cc5c4;
        case 0x1cc5c8u: goto label_1cc5c8;
        case 0x1cc5ccu: goto label_1cc5cc;
        case 0x1cc5d0u: goto label_1cc5d0;
        case 0x1cc5d4u: goto label_1cc5d4;
        case 0x1cc5d8u: goto label_1cc5d8;
        case 0x1cc5dcu: goto label_1cc5dc;
        case 0x1cc5e0u: goto label_1cc5e0;
        case 0x1cc5e4u: goto label_1cc5e4;
        case 0x1cc5e8u: goto label_1cc5e8;
        case 0x1cc5ecu: goto label_1cc5ec;
        case 0x1cc5f0u: goto label_1cc5f0;
        case 0x1cc5f4u: goto label_1cc5f4;
        case 0x1cc5f8u: goto label_1cc5f8;
        case 0x1cc5fcu: goto label_1cc5fc;
        case 0x1cc600u: goto label_1cc600;
        case 0x1cc604u: goto label_1cc604;
        case 0x1cc608u: goto label_1cc608;
        case 0x1cc60cu: goto label_1cc60c;
        case 0x1cc610u: goto label_1cc610;
        case 0x1cc614u: goto label_1cc614;
        case 0x1cc618u: goto label_1cc618;
        case 0x1cc61cu: goto label_1cc61c;
        case 0x1cc620u: goto label_1cc620;
        case 0x1cc624u: goto label_1cc624;
        case 0x1cc628u: goto label_1cc628;
        case 0x1cc62cu: goto label_1cc62c;
        case 0x1cc630u: goto label_1cc630;
        case 0x1cc634u: goto label_1cc634;
        case 0x1cc638u: goto label_1cc638;
        case 0x1cc63cu: goto label_1cc63c;
        case 0x1cc640u: goto label_1cc640;
        case 0x1cc644u: goto label_1cc644;
        case 0x1cc648u: goto label_1cc648;
        case 0x1cc64cu: goto label_1cc64c;
        case 0x1cc650u: goto label_1cc650;
        case 0x1cc654u: goto label_1cc654;
        case 0x1cc658u: goto label_1cc658;
        case 0x1cc65cu: goto label_1cc65c;
        case 0x1cc660u: goto label_1cc660;
        case 0x1cc664u: goto label_1cc664;
        case 0x1cc668u: goto label_1cc668;
        case 0x1cc66cu: goto label_1cc66c;
        case 0x1cc670u: goto label_1cc670;
        case 0x1cc674u: goto label_1cc674;
        case 0x1cc678u: goto label_1cc678;
        case 0x1cc67cu: goto label_1cc67c;
        case 0x1cc680u: goto label_1cc680;
        case 0x1cc684u: goto label_1cc684;
        case 0x1cc688u: goto label_1cc688;
        case 0x1cc68cu: goto label_1cc68c;
        case 0x1cc690u: goto label_1cc690;
        case 0x1cc694u: goto label_1cc694;
        case 0x1cc698u: goto label_1cc698;
        case 0x1cc69cu: goto label_1cc69c;
        case 0x1cc6a0u: goto label_1cc6a0;
        case 0x1cc6a4u: goto label_1cc6a4;
        case 0x1cc6a8u: goto label_1cc6a8;
        case 0x1cc6acu: goto label_1cc6ac;
        case 0x1cc6b0u: goto label_1cc6b0;
        case 0x1cc6b4u: goto label_1cc6b4;
        case 0x1cc6b8u: goto label_1cc6b8;
        case 0x1cc6bcu: goto label_1cc6bc;
        case 0x1cc6c0u: goto label_1cc6c0;
        case 0x1cc6c4u: goto label_1cc6c4;
        case 0x1cc6c8u: goto label_1cc6c8;
        case 0x1cc6ccu: goto label_1cc6cc;
        case 0x1cc6d0u: goto label_1cc6d0;
        case 0x1cc6d4u: goto label_1cc6d4;
        case 0x1cc6d8u: goto label_1cc6d8;
        case 0x1cc6dcu: goto label_1cc6dc;
        case 0x1cc6e0u: goto label_1cc6e0;
        case 0x1cc6e4u: goto label_1cc6e4;
        case 0x1cc6e8u: goto label_1cc6e8;
        case 0x1cc6ecu: goto label_1cc6ec;
        case 0x1cc6f0u: goto label_1cc6f0;
        case 0x1cc6f4u: goto label_1cc6f4;
        case 0x1cc6f8u: goto label_1cc6f8;
        case 0x1cc6fcu: goto label_1cc6fc;
        case 0x1cc700u: goto label_1cc700;
        case 0x1cc704u: goto label_1cc704;
        case 0x1cc708u: goto label_1cc708;
        case 0x1cc70cu: goto label_1cc70c;
        case 0x1cc710u: goto label_1cc710;
        case 0x1cc714u: goto label_1cc714;
        case 0x1cc718u: goto label_1cc718;
        case 0x1cc71cu: goto label_1cc71c;
        case 0x1cc720u: goto label_1cc720;
        case 0x1cc724u: goto label_1cc724;
        case 0x1cc728u: goto label_1cc728;
        case 0x1cc72cu: goto label_1cc72c;
        case 0x1cc730u: goto label_1cc730;
        case 0x1cc734u: goto label_1cc734;
        case 0x1cc738u: goto label_1cc738;
        case 0x1cc73cu: goto label_1cc73c;
        case 0x1cc740u: goto label_1cc740;
        case 0x1cc744u: goto label_1cc744;
        case 0x1cc748u: goto label_1cc748;
        case 0x1cc74cu: goto label_1cc74c;
        case 0x1cc750u: goto label_1cc750;
        case 0x1cc754u: goto label_1cc754;
        case 0x1cc758u: goto label_1cc758;
        case 0x1cc75cu: goto label_1cc75c;
        case 0x1cc760u: goto label_1cc760;
        case 0x1cc764u: goto label_1cc764;
        case 0x1cc768u: goto label_1cc768;
        case 0x1cc76cu: goto label_1cc76c;
        case 0x1cc770u: goto label_1cc770;
        case 0x1cc774u: goto label_1cc774;
        case 0x1cc778u: goto label_1cc778;
        case 0x1cc77cu: goto label_1cc77c;
        case 0x1cc780u: goto label_1cc780;
        case 0x1cc784u: goto label_1cc784;
        case 0x1cc788u: goto label_1cc788;
        case 0x1cc78cu: goto label_1cc78c;
        case 0x1cc790u: goto label_1cc790;
        case 0x1cc794u: goto label_1cc794;
        case 0x1cc798u: goto label_1cc798;
        case 0x1cc79cu: goto label_1cc79c;
        case 0x1cc7a0u: goto label_1cc7a0;
        case 0x1cc7a4u: goto label_1cc7a4;
        case 0x1cc7a8u: goto label_1cc7a8;
        case 0x1cc7acu: goto label_1cc7ac;
        case 0x1cc7b0u: goto label_1cc7b0;
        case 0x1cc7b4u: goto label_1cc7b4;
        case 0x1cc7b8u: goto label_1cc7b8;
        case 0x1cc7bcu: goto label_1cc7bc;
        case 0x1cc7c0u: goto label_1cc7c0;
        case 0x1cc7c4u: goto label_1cc7c4;
        case 0x1cc7c8u: goto label_1cc7c8;
        case 0x1cc7ccu: goto label_1cc7cc;
        case 0x1cc7d0u: goto label_1cc7d0;
        case 0x1cc7d4u: goto label_1cc7d4;
        case 0x1cc7d8u: goto label_1cc7d8;
        case 0x1cc7dcu: goto label_1cc7dc;
        case 0x1cc7e0u: goto label_1cc7e0;
        case 0x1cc7e4u: goto label_1cc7e4;
        case 0x1cc7e8u: goto label_1cc7e8;
        case 0x1cc7ecu: goto label_1cc7ec;
        case 0x1cc7f0u: goto label_1cc7f0;
        case 0x1cc7f4u: goto label_1cc7f4;
        case 0x1cc7f8u: goto label_1cc7f8;
        case 0x1cc7fcu: goto label_1cc7fc;
        case 0x1cc800u: goto label_1cc800;
        case 0x1cc804u: goto label_1cc804;
        case 0x1cc808u: goto label_1cc808;
        case 0x1cc80cu: goto label_1cc80c;
        case 0x1cc810u: goto label_1cc810;
        case 0x1cc814u: goto label_1cc814;
        case 0x1cc818u: goto label_1cc818;
        case 0x1cc81cu: goto label_1cc81c;
        case 0x1cc820u: goto label_1cc820;
        case 0x1cc824u: goto label_1cc824;
        case 0x1cc828u: goto label_1cc828;
        case 0x1cc82cu: goto label_1cc82c;
        case 0x1cc830u: goto label_1cc830;
        case 0x1cc834u: goto label_1cc834;
        case 0x1cc838u: goto label_1cc838;
        case 0x1cc83cu: goto label_1cc83c;
        case 0x1cc840u: goto label_1cc840;
        case 0x1cc844u: goto label_1cc844;
        case 0x1cc848u: goto label_1cc848;
        case 0x1cc84cu: goto label_1cc84c;
        case 0x1cc850u: goto label_1cc850;
        case 0x1cc854u: goto label_1cc854;
        case 0x1cc858u: goto label_1cc858;
        case 0x1cc85cu: goto label_1cc85c;
        case 0x1cc860u: goto label_1cc860;
        case 0x1cc864u: goto label_1cc864;
        case 0x1cc868u: goto label_1cc868;
        case 0x1cc86cu: goto label_1cc86c;
        case 0x1cc870u: goto label_1cc870;
        case 0x1cc874u: goto label_1cc874;
        case 0x1cc878u: goto label_1cc878;
        case 0x1cc87cu: goto label_1cc87c;
        case 0x1cc880u: goto label_1cc880;
        case 0x1cc884u: goto label_1cc884;
        case 0x1cc888u: goto label_1cc888;
        case 0x1cc88cu: goto label_1cc88c;
        case 0x1cc890u: goto label_1cc890;
        case 0x1cc894u: goto label_1cc894;
        case 0x1cc898u: goto label_1cc898;
        case 0x1cc89cu: goto label_1cc89c;
        case 0x1cc8a0u: goto label_1cc8a0;
        case 0x1cc8a4u: goto label_1cc8a4;
        case 0x1cc8a8u: goto label_1cc8a8;
        case 0x1cc8acu: goto label_1cc8ac;
        case 0x1cc8b0u: goto label_1cc8b0;
        case 0x1cc8b4u: goto label_1cc8b4;
        case 0x1cc8b8u: goto label_1cc8b8;
        case 0x1cc8bcu: goto label_1cc8bc;
        case 0x1cc8c0u: goto label_1cc8c0;
        case 0x1cc8c4u: goto label_1cc8c4;
        case 0x1cc8c8u: goto label_1cc8c8;
        case 0x1cc8ccu: goto label_1cc8cc;
        case 0x1cc8d0u: goto label_1cc8d0;
        case 0x1cc8d4u: goto label_1cc8d4;
        case 0x1cc8d8u: goto label_1cc8d8;
        case 0x1cc8dcu: goto label_1cc8dc;
        case 0x1cc8e0u: goto label_1cc8e0;
        case 0x1cc8e4u: goto label_1cc8e4;
        case 0x1cc8e8u: goto label_1cc8e8;
        case 0x1cc8ecu: goto label_1cc8ec;
        case 0x1cc8f0u: goto label_1cc8f0;
        case 0x1cc8f4u: goto label_1cc8f4;
        case 0x1cc8f8u: goto label_1cc8f8;
        case 0x1cc8fcu: goto label_1cc8fc;
        case 0x1cc900u: goto label_1cc900;
        case 0x1cc904u: goto label_1cc904;
        case 0x1cc908u: goto label_1cc908;
        case 0x1cc90cu: goto label_1cc90c;
        case 0x1cc910u: goto label_1cc910;
        case 0x1cc914u: goto label_1cc914;
        case 0x1cc918u: goto label_1cc918;
        case 0x1cc91cu: goto label_1cc91c;
        case 0x1cc920u: goto label_1cc920;
        case 0x1cc924u: goto label_1cc924;
        case 0x1cc928u: goto label_1cc928;
        case 0x1cc92cu: goto label_1cc92c;
        case 0x1cc930u: goto label_1cc930;
        case 0x1cc934u: goto label_1cc934;
        case 0x1cc938u: goto label_1cc938;
        case 0x1cc93cu: goto label_1cc93c;
        case 0x1cc940u: goto label_1cc940;
        case 0x1cc944u: goto label_1cc944;
        case 0x1cc948u: goto label_1cc948;
        case 0x1cc94cu: goto label_1cc94c;
        case 0x1cc950u: goto label_1cc950;
        case 0x1cc954u: goto label_1cc954;
        case 0x1cc958u: goto label_1cc958;
        case 0x1cc95cu: goto label_1cc95c;
        case 0x1cc960u: goto label_1cc960;
        case 0x1cc964u: goto label_1cc964;
        case 0x1cc968u: goto label_1cc968;
        case 0x1cc96cu: goto label_1cc96c;
        case 0x1cc970u: goto label_1cc970;
        case 0x1cc974u: goto label_1cc974;
        case 0x1cc978u: goto label_1cc978;
        case 0x1cc97cu: goto label_1cc97c;
        case 0x1cc980u: goto label_1cc980;
        case 0x1cc984u: goto label_1cc984;
        case 0x1cc988u: goto label_1cc988;
        case 0x1cc98cu: goto label_1cc98c;
        case 0x1cc990u: goto label_1cc990;
        case 0x1cc994u: goto label_1cc994;
        case 0x1cc998u: goto label_1cc998;
        case 0x1cc99cu: goto label_1cc99c;
        case 0x1cc9a0u: goto label_1cc9a0;
        case 0x1cc9a4u: goto label_1cc9a4;
        case 0x1cc9a8u: goto label_1cc9a8;
        case 0x1cc9acu: goto label_1cc9ac;
        case 0x1cc9b0u: goto label_1cc9b0;
        case 0x1cc9b4u: goto label_1cc9b4;
        case 0x1cc9b8u: goto label_1cc9b8;
        case 0x1cc9bcu: goto label_1cc9bc;
        case 0x1cc9c0u: goto label_1cc9c0;
        case 0x1cc9c4u: goto label_1cc9c4;
        case 0x1cc9c8u: goto label_1cc9c8;
        case 0x1cc9ccu: goto label_1cc9cc;
        case 0x1cc9d0u: goto label_1cc9d0;
        case 0x1cc9d4u: goto label_1cc9d4;
        case 0x1cc9d8u: goto label_1cc9d8;
        case 0x1cc9dcu: goto label_1cc9dc;
        case 0x1cc9e0u: goto label_1cc9e0;
        case 0x1cc9e4u: goto label_1cc9e4;
        case 0x1cc9e8u: goto label_1cc9e8;
        case 0x1cc9ecu: goto label_1cc9ec;
        case 0x1cc9f0u: goto label_1cc9f0;
        case 0x1cc9f4u: goto label_1cc9f4;
        case 0x1cc9f8u: goto label_1cc9f8;
        case 0x1cc9fcu: goto label_1cc9fc;
        case 0x1cca00u: goto label_1cca00;
        case 0x1cca04u: goto label_1cca04;
        case 0x1cca08u: goto label_1cca08;
        case 0x1cca0cu: goto label_1cca0c;
        case 0x1cca10u: goto label_1cca10;
        case 0x1cca14u: goto label_1cca14;
        case 0x1cca18u: goto label_1cca18;
        case 0x1cca1cu: goto label_1cca1c;
        case 0x1cca20u: goto label_1cca20;
        case 0x1cca24u: goto label_1cca24;
        case 0x1cca28u: goto label_1cca28;
        case 0x1cca2cu: goto label_1cca2c;
        case 0x1cca30u: goto label_1cca30;
        case 0x1cca34u: goto label_1cca34;
        case 0x1cca38u: goto label_1cca38;
        case 0x1cca3cu: goto label_1cca3c;
        case 0x1cca40u: goto label_1cca40;
        case 0x1cca44u: goto label_1cca44;
        case 0x1cca48u: goto label_1cca48;
        case 0x1cca4cu: goto label_1cca4c;
        case 0x1cca50u: goto label_1cca50;
        case 0x1cca54u: goto label_1cca54;
        case 0x1cca58u: goto label_1cca58;
        case 0x1cca5cu: goto label_1cca5c;
        case 0x1cca60u: goto label_1cca60;
        case 0x1cca64u: goto label_1cca64;
        case 0x1cca68u: goto label_1cca68;
        case 0x1cca6cu: goto label_1cca6c;
        case 0x1cca70u: goto label_1cca70;
        case 0x1cca74u: goto label_1cca74;
        case 0x1cca78u: goto label_1cca78;
        case 0x1cca7cu: goto label_1cca7c;
        case 0x1cca80u: goto label_1cca80;
        case 0x1cca84u: goto label_1cca84;
        case 0x1cca88u: goto label_1cca88;
        case 0x1cca8cu: goto label_1cca8c;
        case 0x1cca90u: goto label_1cca90;
        case 0x1cca94u: goto label_1cca94;
        case 0x1cca98u: goto label_1cca98;
        case 0x1cca9cu: goto label_1cca9c;
        case 0x1ccaa0u: goto label_1ccaa0;
        case 0x1ccaa4u: goto label_1ccaa4;
        case 0x1ccaa8u: goto label_1ccaa8;
        case 0x1ccaacu: goto label_1ccaac;
        case 0x1ccab0u: goto label_1ccab0;
        case 0x1ccab4u: goto label_1ccab4;
        case 0x1ccab8u: goto label_1ccab8;
        case 0x1ccabcu: goto label_1ccabc;
        case 0x1ccac0u: goto label_1ccac0;
        case 0x1ccac4u: goto label_1ccac4;
        case 0x1ccac8u: goto label_1ccac8;
        case 0x1ccaccu: goto label_1ccacc;
        case 0x1ccad0u: goto label_1ccad0;
        case 0x1ccad4u: goto label_1ccad4;
        case 0x1ccad8u: goto label_1ccad8;
        case 0x1ccadcu: goto label_1ccadc;
        case 0x1ccae0u: goto label_1ccae0;
        case 0x1ccae4u: goto label_1ccae4;
        case 0x1ccae8u: goto label_1ccae8;
        case 0x1ccaecu: goto label_1ccaec;
        case 0x1ccaf0u: goto label_1ccaf0;
        case 0x1ccaf4u: goto label_1ccaf4;
        case 0x1ccaf8u: goto label_1ccaf8;
        case 0x1ccafcu: goto label_1ccafc;
        case 0x1ccb00u: goto label_1ccb00;
        case 0x1ccb04u: goto label_1ccb04;
        case 0x1ccb08u: goto label_1ccb08;
        case 0x1ccb0cu: goto label_1ccb0c;
        case 0x1ccb10u: goto label_1ccb10;
        case 0x1ccb14u: goto label_1ccb14;
        case 0x1ccb18u: goto label_1ccb18;
        case 0x1ccb1cu: goto label_1ccb1c;
        case 0x1ccb20u: goto label_1ccb20;
        case 0x1ccb24u: goto label_1ccb24;
        case 0x1ccb28u: goto label_1ccb28;
        case 0x1ccb2cu: goto label_1ccb2c;
        case 0x1ccb30u: goto label_1ccb30;
        case 0x1ccb34u: goto label_1ccb34;
        case 0x1ccb38u: goto label_1ccb38;
        case 0x1ccb3cu: goto label_1ccb3c;
        default: return;
    }

label_1cc370:
    // 0x1cc370: 0x27186c00  addiu       $t8, $t8, 0x6C00
    ctx->pc = 0x1cc370u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 27648));
label_1cc374:
    // 0x1cc374: 0xa5b80080  sh          $t8, 0x80($t5)
    ctx->pc = 0x1cc374u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 128), (uint16_t)GPR_U32(ctx, 24));
label_1cc378:
    // 0x1cc378: 0x10000006  b           . + 4 + (0x6 << 2)
label_1cc37c:
    if (ctx->pc == 0x1CC37Cu) {
        ctx->pc = 0x1CC37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC378u;
        // 0x1cc37c: 0xa5b60090  sh          $s6, 0x90($t5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 13), 144), (uint16_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC380u;
        goto label_1cc380;
    }
    ctx->pc = 0x1CC378u;
    {
        const bool branch_taken_0x1cc378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC378u;
        // 0x1cc37c: 0xa5b60090  sh          $s6, 0x90($t5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 13), 144), (uint16_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc378) {
            ctx->pc = 0x1CC394u;
            goto label_1cc394;
        }
    }
    ctx->pc = 0x1CC380u;
label_1cc380:
    // 0x1cc380: 0x1f9c023  subu        $t8, $t7, $t9
    ctx->pc = 0x1cc380u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 25)));
label_1cc384:
    // 0x1cc384: 0x18c100  sll         $t8, $t8, 4
    ctx->pc = 0x1cc384u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), 4));
label_1cc388:
    // 0x1cc388: 0x27186c00  addiu       $t8, $t8, 0x6C00
    ctx->pc = 0x1cc388u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 27648));
label_1cc38c:
    // 0x1cc38c: 0xa5b80080  sh          $t8, 0x80($t5)
    ctx->pc = 0x1cc38cu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 128), (uint16_t)GPR_U32(ctx, 24));
label_1cc390:
    // 0x1cc390: 0xa5b50090  sh          $s5, 0x90($t5)
    ctx->pc = 0x1cc390u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 144), (uint16_t)GPR_U32(ctx, 21));
label_1cc394:
    // 0x1cc394: 0x0  nop
    ctx->pc = 0x1cc394u;
    // NOP
label_1cc398:
    // 0x1cc398: 0x24f80001  addiu       $t8, $a3, 0x1
    ctx->pc = 0x1cc398u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1cc39c:
    // 0x1cc39c: 0xa5b40078  sh          $s4, 0x78($t5)
    ctx->pc = 0x1cc39cu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 120), (uint16_t)GPR_U32(ctx, 20));
label_1cc3a0:
    // 0x1cc3a0: 0x158c818  mult        $t9, $t2, $t8
    ctx->pc = 0x1cc3a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
label_1cc3a4:
    // 0x1cc3a4: 0xa5b3007a  sh          $s3, 0x7A($t5)
    ctx->pc = 0x1cc3a4u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 122), (uint16_t)GPR_U32(ctx, 19));
label_1cc3a8:
    // 0x1cc3a8: 0xa5b20088  sh          $s2, 0x88($t5)
    ctx->pc = 0x1cc3a8u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 136), (uint16_t)GPR_U32(ctx, 18));
label_1cc3ac:
    // 0x1cc3ac: 0xa5b1008a  sh          $s1, 0x8A($t5)
    ctx->pc = 0x1cc3acu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 138), (uint16_t)GPR_U32(ctx, 17));
label_1cc3b0:
    // 0x1cc3b0: 0xfdb00040  sd          $s0, 0x40($t5)
    ctx->pc = 0x1cc3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 64), GPR_U64(ctx, 16));
label_1cc3b4:
    // 0x1cc3b4: 0x7210003  bgez        $t9, . + 4 + (0x3 << 2)
label_1cc3b8:
    if (ctx->pc == 0x1CC3B8u) {
        ctx->pc = 0x1CC3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC3B4u;
        // 0x1cc3b8: 0x19c083  sra         $t8, $t9, 2 (Delay Slot)
        SET_GPR_S32(ctx, 24, SRA32(GPR_S32(ctx, 25), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC3BCu;
        goto label_1cc3bc;
    }
    ctx->pc = 0x1CC3B4u;
    {
        const bool branch_taken_0x1cc3b4 = (GPR_S32(ctx, 25) >= 0);
        ctx->pc = 0x1CC3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC3B4u;
        // 0x1cc3b8: 0x19c083  sra         $t8, $t9, 2 (Delay Slot)
        SET_GPR_S32(ctx, 24, SRA32(GPR_S32(ctx, 25), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc3b4) {
            ctx->pc = 0x1CC3C4u;
            goto label_1cc3c4;
        }
    }
    ctx->pc = 0x1CC3BCu;
label_1cc3bc:
    // 0x1cc3bc: 0x27380003  addiu       $t8, $t9, 0x3
    ctx->pc = 0x1cc3bcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 25), 3));
label_1cc3c0:
    // 0x1cc3c0: 0x18c083  sra         $t8, $t8, 2
    ctx->pc = 0x1cc3c0u;
    SET_GPR_S32(ctx, 24, SRA32(GPR_S32(ctx, 24), 2));
label_1cc3c4:
    // 0x1cc3c4: 0xa1b80073  sb          $t8, 0x73($t5)
    ctx->pc = 0x1cc3c4u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 115), (uint8_t)GPR_U32(ctx, 24));
label_1cc3c8:
    // 0x1cc3c8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1cc3c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1cc3cc:
    // 0x1cc3cc: 0x28ed0004  slti        $t5, $a3, 0x4
    ctx->pc = 0x1cc3ccu;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
label_1cc3d0:
    // 0x1cc3d0: 0x15a0ffc4  bnez        $t5, . + 4 + (-0x3C << 2)
label_1cc3d4:
    if (ctx->pc == 0x1CC3D4u) {
        ctx->pc = 0x1CC3D8u;
        goto label_1cc3d8;
    }
    ctx->pc = 0x1CC3D0u;
    {
        const bool branch_taken_0x1cc3d0 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cc3d0) {
            ctx->pc = 0x1CC2E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1cc2e4; return; }
        }
    }
    ctx->pc = 0x1CC3D8u;
label_1cc3d8:
    // 0x1cc3d8: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x1cc3d8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1cc3dc:
    // 0x1cc3dc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1cc3dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1cc3e0:
    // 0x1cc3e0: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x1cc3e0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_1cc3e4:
    // 0x1cc3e4: 0x26f70013  addiu       $s7, $s7, 0x13
    ctx->pc = 0x1cc3e4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 19));
label_1cc3e8:
    // 0x1cc3e8: 0x25ce001a  addiu       $t6, $t6, 0x1A
    ctx->pc = 0x1cc3e8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 26));
label_1cc3ec:
    // 0x1cc3ec: 0x880018  mult        $zero, $a0, $t0
    ctx->pc = 0x1cc3ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1cc3f0:
    // 0x1cc3f0: 0x0  nop
    ctx->pc = 0x1cc3f0u;
    // NOP
label_1cc3f4:
    // 0x1cc3f4: 0x0  nop
    ctx->pc = 0x1cc3f4u;
    // NOP
label_1cc3f8:
    // 0x1cc3f8: 0x3810  mfhi        $a3
    ctx->pc = 0x1cc3f8u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_1cc3fc:
    // 0x1cc3fc: 0x847c2  srl         $t0, $t0, 31
    ctx->pc = 0x1cc3fcu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_1cc400:
    // 0x1cc400: 0x28c40003  slti        $a0, $a2, 0x3
    ctx->pc = 0x1cc400u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
label_1cc404:
    // 0x1cc404: 0x73883  sra         $a3, $a3, 2
    ctx->pc = 0x1cc404u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 2));
label_1cc408:
    // 0x1cc408: 0x1480ff85  bnez        $a0, . + 4 + (-0x7B << 2)
label_1cc40c:
    if (ctx->pc == 0x1CC40Cu) {
        ctx->pc = 0x1CC40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC408u;
        // 0x1cc40c: 0xe84021  addu        $t0, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC410u;
        goto label_1cc410;
    }
    ctx->pc = 0x1CC408u;
    {
        const bool branch_taken_0x1cc408 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC408u;
        // 0x1cc40c: 0xe84021  addu        $t0, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc408) {
            ctx->pc = 0x1CC220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1cc220; return; }
        }
    }
    ctx->pc = 0x1CC410u;
label_1cc410:
    // 0x1cc410: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1cc410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1cc414:
    // 0x1cc414: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cc414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cc418:
    // 0x1cc418: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x1cc418u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_1cc41c:
    // 0x1cc41c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_1cc420:
    if (ctx->pc == 0x1CC420u) {
        ctx->pc = 0x1CC424u;
        goto label_1cc424;
    }
    ctx->pc = 0x1CC41Cu;
    {
        const bool branch_taken_0x1cc41c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc41c) {
            ctx->pc = 0x1CC440u;
            goto label_1cc440;
        }
    }
    ctx->pc = 0x1CC424u;
label_1cc424:
    // 0x1cc424: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1cc424u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1cc428:
    // 0x1cc428: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1cc42c:
    if (ctx->pc == 0x1CC42Cu) {
        ctx->pc = 0x1CC42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC428u;
        // 0x1cc42c: 0x230c3  sra         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC430u;
        goto label_1cc430;
    }
    ctx->pc = 0x1CC428u;
    {
        const bool branch_taken_0x1cc428 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1CC42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC428u;
        // 0x1cc42c: 0x230c3  sra         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc428) {
            ctx->pc = 0x1CC438u;
            goto label_1cc438;
        }
    }
    ctx->pc = 0x1CC430u;
label_1cc430:
    // 0x1cc430: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x1cc430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_1cc434:
    // 0x1cc434: 0x230c3  sra         $a2, $v0, 3
    ctx->pc = 0x1cc434u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 3));
label_1cc438:
    // 0x1cc438: 0x10000011  b           . + 4 + (0x11 << 2)
label_1cc43c:
    if (ctx->pc == 0x1CC43Cu) {
        ctx->pc = 0x1CC43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC438u;
        // 0x1cc43c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC440u;
        goto label_1cc440;
    }
    ctx->pc = 0x1CC438u;
    {
        const bool branch_taken_0x1cc438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC438u;
        // 0x1cc43c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc438) {
            ctx->pc = 0x1CC480u;
            goto label_1cc480;
        }
    }
    ctx->pc = 0x1CC440u;
label_1cc440:
    // 0x1cc440: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1cc440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1cc444:
    // 0x1cc444: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1cc444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1cc448:
    // 0x1cc448: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
label_1cc44c:
    if (ctx->pc == 0x1CC44Cu) {
        ctx->pc = 0x1CC44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC448u;
        // 0x1cc44c: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC450u;
        goto label_1cc450;
    }
    ctx->pc = 0x1CC448u;
    {
        const bool branch_taken_0x1cc448 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1CC44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC448u;
        // 0x1cc44c: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc448) {
            ctx->pc = 0x1CC47Cu;
            goto label_1cc47c;
        }
    }
    ctx->pc = 0x1CC450u;
label_1cc450:
    // 0x1cc450: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1cc450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1cc454:
    // 0x1cc454: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x1cc454u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1cc458:
    // 0x1cc458: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1cc458u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cc45c:
    // 0x1cc45c: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1cc45cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1cc460:
    // 0x1cc460: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1cc464:
    if (ctx->pc == 0x1CC464u) {
        ctx->pc = 0x1CC464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC460u;
        // 0x1cc464: 0x23103  sra         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC468u;
        goto label_1cc468;
    }
    ctx->pc = 0x1CC460u;
    {
        const bool branch_taken_0x1cc460 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1CC464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC460u;
        // 0x1cc464: 0x23103  sra         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc460) {
            ctx->pc = 0x1CC470u;
            goto label_1cc470;
        }
    }
    ctx->pc = 0x1CC468u;
label_1cc468:
    // 0x1cc468: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1cc468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_1cc46c:
    // 0x1cc46c: 0x23103  sra         $a2, $v0, 4
    ctx->pc = 0x1cc46cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
label_1cc470:
    // 0x1cc470: 0x10000003  b           . + 4 + (0x3 << 2)
label_1cc474:
    if (ctx->pc == 0x1CC474u) {
        ctx->pc = 0x1CC474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC470u;
        // 0x1cc474: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC478u;
        goto label_1cc478;
    }
    ctx->pc = 0x1CC470u;
    {
        const bool branch_taken_0x1cc470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC470u;
        // 0x1cc474: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc470) {
            ctx->pc = 0x1CC480u;
            goto label_1cc480;
        }
    }
    ctx->pc = 0x1CC478u;
label_1cc478:
    // 0x1cc478: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1cc478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1cc47c:
    // 0x1cc47c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cc47cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc480:
    // 0x1cc480: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cc480u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc484:
    // 0x1cc484: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1cc484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1cc488:
    // 0x1cc488: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1cc488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cc48c:
    // 0x1cc48c: 0x240e0072  addiu       $t6, $zero, 0x72
    ctx->pc = 0x1cc48cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
label_1cc490:
    // 0x1cc490: 0x240d7b20  addiu       $t5, $zero, 0x7B20
    ctx->pc = 0x1cc490u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 31520));
label_1cc494:
    // 0x1cc494: 0x24020059  addiu       $v0, $zero, 0x59
    ctx->pc = 0x1cc494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
label_1cc498:
    // 0x1cc498: 0x240f7790  addiu       $t7, $zero, 0x7790
    ctx->pc = 0x1cc498u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 30608));
label_1cc49c:
    // 0x1cc49c: 0x250a000c  addiu       $t2, $t0, 0xC
    ctx->pc = 0x1cc49cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
label_1cc4a0:
    // 0x1cc4a0: 0xa4880  sll         $t1, $t2, 2
    ctx->pc = 0x1cc4a0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_1cc4a4:
    // 0x1cc4a4: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x1cc4a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_1cc4a8:
    // 0x1cc4a8: 0x95140  sll         $t2, $t1, 5
    ctx->pc = 0x1cc4a8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
label_1cc4ac:
    // 0x1cc4ac: 0x8fa900c0  lw          $t1, 0xC0($sp)
    ctx->pc = 0x1cc4acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1cc4b0:
    // 0x1cc4b0: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x1cc4b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_1cc4b4:
    // 0x1cc4b4: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
label_1cc4b8:
    if (ctx->pc == 0x1CC4B8u) {
        ctx->pc = 0x1CC4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4B4u;
        // 0x1cc4b8: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC4BCu;
        goto label_1cc4bc;
    }
    ctx->pc = 0x1CC4B4u;
    {
        const bool branch_taken_0x1cc4b4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4B4u;
        // 0x1cc4b8: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc4b4) {
            ctx->pc = 0x1CC4D0u;
            goto label_1cc4d0;
        }
    }
    ctx->pc = 0x1CC4BCu;
label_1cc4bc:
    // 0x1cc4bc: 0x11040004  beq         $t0, $a0, . + 4 + (0x4 << 2)
label_1cc4c0:
    if (ctx->pc == 0x1CC4C0u) {
        ctx->pc = 0x1CC4C4u;
        goto label_1cc4c4;
    }
    ctx->pc = 0x1CC4BCu;
    {
        const bool branch_taken_0x1cc4bc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 4));
        if (branch_taken_0x1cc4bc) {
            ctx->pc = 0x1CC4D0u;
            goto label_1cc4d0;
        }
    }
    ctx->pc = 0x1CC4C4u;
label_1cc4c4:
    // 0x1cc4c4: 0xa5200090  sh          $zero, 0x90($t1)
    ctx->pc = 0x1cc4c4u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 144), (uint16_t)GPR_U32(ctx, 0));
label_1cc4c8:
    // 0x1cc4c8: 0x10000022  b           . + 4 + (0x22 << 2)
label_1cc4cc:
    if (ctx->pc == 0x1CC4CCu) {
        ctx->pc = 0x1CC4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4C8u;
        // 0x1cc4cc: 0xa5200080  sh          $zero, 0x80($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 128), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC4D0u;
        goto label_1cc4d0;
    }
    ctx->pc = 0x1CC4C8u;
    {
        const bool branch_taken_0x1cc4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4C8u;
        // 0x1cc4cc: 0xa5200080  sh          $zero, 0x80($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 128), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc4c8) {
            ctx->pc = 0x1CC554u;
            goto label_1cc554;
        }
    }
    ctx->pc = 0x1CC4D0u;
label_1cc4d0:
    // 0x1cc4d0: 0x14e0000b  bnez        $a3, . + 4 + (0xB << 2)
label_1cc4d4:
    if (ctx->pc == 0x1CC4D4u) {
        ctx->pc = 0x1CC4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4D0u;
        // 0x1cc4d4: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC4D8u;
        goto label_1cc4d8;
    }
    ctx->pc = 0x1CC4D0u;
    {
        const bool branch_taken_0x1cc4d0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4D0u;
        // 0x1cc4d4: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc4d0) {
            ctx->pc = 0x1CC500u;
            goto label_1cc500;
        }
    }
    ctx->pc = 0x1CC4D8u;
label_1cc4d8:
    // 0x1cc4d8: 0x685023  subu        $t2, $v1, $t0
    ctx->pc = 0x1cc4d8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1cc4dc:
    // 0x1cc4dc: 0xa5140  sll         $t2, $t2, 5
    ctx->pc = 0x1cc4dcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
label_1cc4e0:
    // 0x1cc4e0: 0x16a5018  mult        $t2, $t3, $t2
    ctx->pc = 0x1cc4e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_1cc4e4:
    // 0x1cc4e4: 0x5410006  bgez        $t2, . + 4 + (0x6 << 2)
label_1cc4e8:
    if (ctx->pc == 0x1CC4E8u) {
        ctx->pc = 0x1CC4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4E4u;
        // 0x1cc4e8: 0xa6103  sra         $t4, $t2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC4ECu;
        goto label_1cc4ec;
    }
    ctx->pc = 0x1CC4E4u;
    {
        const bool branch_taken_0x1cc4e4 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x1CC4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4E4u;
        // 0x1cc4e8: 0xa6103  sra         $t4, $t2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc4e4) {
            ctx->pc = 0x1CC500u;
            goto label_1cc500;
        }
    }
    ctx->pc = 0x1CC4ECu;
label_1cc4ec:
    // 0x1cc4ec: 0x254a000f  addiu       $t2, $t2, 0xF
    ctx->pc = 0x1cc4ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 15));
label_1cc4f0:
    // 0x1cc4f0: 0xa6103  sra         $t4, $t2, 4
    ctx->pc = 0x1cc4f0u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 10), 4));
label_1cc4f4:
    // 0x1cc4f4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1cc4f8:
    if (ctx->pc == 0x1CC4F8u) {
        ctx->pc = 0x1CC4FCu;
        goto label_1cc4fc;
    }
    ctx->pc = 0x1CC4F4u;
    {
        const bool branch_taken_0x1cc4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc4f4) {
            ctx->pc = 0x1CC500u;
            goto label_1cc500;
        }
    }
    ctx->pc = 0x1CC4FCu;
label_1cc4fc:
    // 0x1cc4fc: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1cc4fcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc500:
    // 0x1cc500: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_1cc504:
    if (ctx->pc == 0x1CC504u) {
        ctx->pc = 0x1CC508u;
        goto label_1cc508;
    }
    ctx->pc = 0x1CC500u;
    {
        const bool branch_taken_0x1cc500 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc500) {
            ctx->pc = 0x1CC520u;
            goto label_1cc520;
        }
    }
    ctx->pc = 0x1CC508u;
label_1cc508:
    // 0x1cc508: 0x4c5023  subu        $t2, $v0, $t4
    ctx->pc = 0x1cc508u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
label_1cc50c:
    // 0x1cc50c: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x1cc50cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_1cc510:
    // 0x1cc510: 0x254a6c00  addiu       $t2, $t2, 0x6C00
    ctx->pc = 0x1cc510u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 27648));
label_1cc514:
    // 0x1cc514: 0xa52a0080  sh          $t2, 0x80($t1)
    ctx->pc = 0x1cc514u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 128), (uint16_t)GPR_U32(ctx, 10));
label_1cc518:
    // 0x1cc518: 0x10000006  b           . + 4 + (0x6 << 2)
label_1cc51c:
    if (ctx->pc == 0x1CC51Cu) {
        ctx->pc = 0x1CC51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC518u;
        // 0x1cc51c: 0xa52f0090  sh          $t7, 0x90($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 144), (uint16_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC520u;
        goto label_1cc520;
    }
    ctx->pc = 0x1CC518u;
    {
        const bool branch_taken_0x1cc518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC518u;
        // 0x1cc51c: 0xa52f0090  sh          $t7, 0x90($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 144), (uint16_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc518) {
            ctx->pc = 0x1CC534u;
            goto label_1cc534;
        }
    }
    ctx->pc = 0x1CC520u;
label_1cc520:
    // 0x1cc520: 0x1cc5023  subu        $t2, $t6, $t4
    ctx->pc = 0x1cc520u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
label_1cc524:
    // 0x1cc524: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x1cc524u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_1cc528:
    // 0x1cc528: 0x254a6c00  addiu       $t2, $t2, 0x6C00
    ctx->pc = 0x1cc528u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 27648));
label_1cc52c:
    // 0x1cc52c: 0xa52a0080  sh          $t2, 0x80($t1)
    ctx->pc = 0x1cc52cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 128), (uint16_t)GPR_U32(ctx, 10));
label_1cc530:
    // 0x1cc530: 0xa52d0090  sh          $t5, 0x90($t1)
    ctx->pc = 0x1cc530u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 144), (uint16_t)GPR_U32(ctx, 13));
label_1cc534:
    // 0x1cc534: 0x0  nop
    ctx->pc = 0x1cc534u;
    // NOP
label_1cc538:
    // 0x1cc538: 0x250a0001  addiu       $t2, $t0, 0x1
    ctx->pc = 0x1cc538u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1cc53c:
    // 0x1cc53c: 0xca6018  mult        $t4, $a2, $t2
    ctx->pc = 0x1cc53cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_1cc540:
    // 0x1cc540: 0x5810003  bgez        $t4, . + 4 + (0x3 << 2)
label_1cc544:
    if (ctx->pc == 0x1CC544u) {
        ctx->pc = 0x1CC544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC540u;
        // 0x1cc544: 0xc5083  sra         $t2, $t4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 12), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC548u;
        goto label_1cc548;
    }
    ctx->pc = 0x1CC540u;
    {
        const bool branch_taken_0x1cc540 = (GPR_S32(ctx, 12) >= 0);
        ctx->pc = 0x1CC544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC540u;
        // 0x1cc544: 0xc5083  sra         $t2, $t4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 12), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc540) {
            ctx->pc = 0x1CC550u;
            goto label_1cc550;
        }
    }
    ctx->pc = 0x1CC548u;
label_1cc548:
    // 0x1cc548: 0x258a0003  addiu       $t2, $t4, 0x3
    ctx->pc = 0x1cc548u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), 3));
label_1cc54c:
    // 0x1cc54c: 0xa5083  sra         $t2, $t2, 2
    ctx->pc = 0x1cc54cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 2));
label_1cc550:
    // 0x1cc550: 0xa12a0073  sb          $t2, 0x73($t1)
    ctx->pc = 0x1cc550u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 115), (uint8_t)GPR_U32(ctx, 10));
label_1cc554:
    // 0x1cc554: 0x0  nop
    ctx->pc = 0x1cc554u;
    // NOP
label_1cc558:
    // 0x1cc558: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1cc558u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1cc55c:
    // 0x1cc55c: 0x29090004  slti        $t1, $t0, 0x4
    ctx->pc = 0x1cc55cu;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4) ? 1 : 0);
label_1cc560:
    // 0x1cc560: 0x1520ffcf  bnez        $t1, . + 4 + (-0x31 << 2)
label_1cc564:
    if (ctx->pc == 0x1CC564u) {
        ctx->pc = 0x1CC564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC560u;
        // 0x1cc564: 0x250a000c  addiu       $t2, $t0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC568u;
        goto label_1cc568;
    }
    ctx->pc = 0x1CC560u;
    {
        const bool branch_taken_0x1cc560 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC560u;
        // 0x1cc564: 0x250a000c  addiu       $t2, $t0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc560) {
            ctx->pc = 0x1CC4A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc4a0;
        }
    }
    ctx->pc = 0x1CC568u;
label_1cc568:
    // 0x1cc568: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1cc568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1cc56c:
    // 0x1cc56c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1cc56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_1cc570:
    // 0x1cc570: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1cc570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1cc574:
    // 0x1cc574: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x1cc574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_1cc578:
    // 0x1cc578: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x1cc578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1cc57c:
    // 0x1cc57c: 0x240600a1  addiu       $a2, $zero, 0xA1
    ctx->pc = 0x1cc57cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
label_1cc580:
    // 0x1cc580: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cc580u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc584:
    // 0x1cc584: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cc584u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc588:
    // 0x1cc588: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cc588u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc58c:
    // 0x1cc58c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1cc58cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1cc590:
    // 0x1cc590: 0xc066c72  jal         func_19B1C8
label_1cc594:
    if (ctx->pc == 0x1CC594u) {
        ctx->pc = 0x1CC594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC590u;
        // 0x1cc594: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC598u;
        goto label_1cc598;
    }
    ctx->pc = 0x1CC590u;
    SET_GPR_U32(ctx, 31, 0x1CC598u);
    ctx->pc = 0x1CC594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC590u;
    // 0x1cc594: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1CC598u;
label_1cc598:
    // 0x1cc598: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1cc598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1cc59c:
    // 0x1cc59c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1cc59cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1cc5a0:
    // 0x1cc5a0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1cc5a0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1cc5a4:
    // 0x1cc5a4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1cc5a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1cc5a8:
    // 0x1cc5a8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1cc5a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1cc5ac:
    // 0x1cc5ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1cc5acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1cc5b0:
    // 0x1cc5b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1cc5b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1cc5b4:
    // 0x1cc5b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cc5b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc5b8:
    // 0x1cc5b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cc5b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cc5bc:
    // 0x1cc5bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cc5bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1cc5c0:
    // 0x1cc5c0: 0x3e00008  jr          $ra
label_1cc5c4:
    if (ctx->pc == 0x1CC5C4u) {
        ctx->pc = 0x1CC5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC5C0u;
        // 0x1cc5c4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC5C8u;
        goto label_1cc5c8;
    }
    ctx->pc = 0x1CC5C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC5C0u;
        // 0x1cc5c4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC5C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC5C8u;
label_1cc5c8:
    // 0x1cc5c8: 0x0  nop
    ctx->pc = 0x1cc5c8u;
    // NOP
label_1cc5cc:
    // 0x1cc5cc: 0x0  nop
    ctx->pc = 0x1cc5ccu;
    // NOP
label_1cc5d0:
    // 0x1cc5d0: 0x24031430  addiu       $v1, $zero, 0x1430
    ctx->pc = 0x1cc5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5168));
label_1cc5d4:
    // 0x1cc5d4: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x1cc5d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1cc5d8:
    // 0x1cc5d8: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x1cc5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_1cc5dc:
    // 0x1cc5dc: 0x246351c0  addiu       $v1, $v1, 0x51C0
    ctx->pc = 0x1cc5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20928));
label_1cc5e0:
    // 0x1cc5e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1cc5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1cc5e4:
    // 0x1cc5e4: 0x24641420  addiu       $a0, $v1, 0x1420
    ctx->pc = 0x1cc5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5152));
label_1cc5e8:
    // 0x1cc5e8: 0x8c631420  lw          $v1, 0x1420($v1)
    ctx->pc = 0x1cc5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5152)));
label_1cc5ec:
    // 0x1cc5ec: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
label_1cc5f0:
    if (ctx->pc == 0x1CC5F0u) {
        ctx->pc = 0x1CC5F4u;
        goto label_1cc5f4;
    }
    ctx->pc = 0x1CC5ECu;
    {
        const bool branch_taken_0x1cc5ec = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1cc5ec) {
            ctx->pc = 0x1CC624u;
            goto label_1cc624;
        }
    }
    ctx->pc = 0x1CC5F4u;
label_1cc5f4:
    // 0x1cc5f4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1cc5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1cc5f8:
    // 0x1cc5f8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1cc5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1cc5fc:
    // 0x1cc5fc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1cc5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1cc600:
    // 0x1cc600: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
label_1cc604:
    if (ctx->pc == 0x1CC604u) {
        ctx->pc = 0x1CC608u;
        goto label_1cc608;
    }
    ctx->pc = 0x1CC600u;
    {
        const bool branch_taken_0x1cc600 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1cc600) {
            ctx->pc = 0x1CC610u;
            goto label_1cc610;
        }
    }
    ctx->pc = 0x1CC608u;
label_1cc608:
    // 0x1cc608: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1cc608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1cc60c:
    // 0x1cc60c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1cc60cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_1cc610:
    // 0x1cc610: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1cc610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cc614:
    // 0x1cc614: 0x28610008  slti        $at, $v1, 0x8
    ctx->pc = 0x1cc614u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_1cc618:
    // 0x1cc618: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1cc61c:
    if (ctx->pc == 0x1CC61Cu) {
        ctx->pc = 0x1CC61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC618u;
        // 0x1cc61c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC620u;
        goto label_1cc620;
    }
    ctx->pc = 0x1CC618u;
    {
        const bool branch_taken_0x1cc618 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC618u;
        // 0x1cc61c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc618) {
            ctx->pc = 0x1CC624u;
            goto label_1cc624;
        }
    }
    ctx->pc = 0x1CC620u;
label_1cc620:
    // 0x1cc620: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x1cc620u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_1cc624:
    // 0x1cc624: 0x3e00008  jr          $ra
label_1cc628:
    if (ctx->pc == 0x1CC628u) {
        ctx->pc = 0x1CC62Cu;
        goto label_1cc62c;
    }
    ctx->pc = 0x1CC624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC62Cu;
label_1cc62c:
    // 0x1cc62c: 0x0  nop
    ctx->pc = 0x1cc62cu;
    // NOP
label_1cc630:
    // 0x1cc630: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1cc630u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1cc634:
    // 0x1cc634: 0x642823  subu        $a1, $v1, $a0
    ctx->pc = 0x1cc634u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1cc638:
    // 0x1cc638: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1cc638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1cc63c:
    // 0x1cc63c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1cc63cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1cc640:
    // 0x1cc640: 0x246303b4  addiu       $v1, $v1, 0x3B4
    ctx->pc = 0x1cc640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 948));
label_1cc644:
    // 0x1cc644: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1cc644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1cc648:
    // 0x1cc648: 0x84660000  lh          $a2, 0x0($v1)
    ctx->pc = 0x1cc648u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1cc64c:
    // 0x1cc64c: 0x28c30005  slti        $v1, $a2, 0x5
    ctx->pc = 0x1cc64cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
label_1cc650:
    // 0x1cc650: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
label_1cc654:
    if (ctx->pc == 0x1CC654u) {
        ctx->pc = 0x1CC654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC650u;
        // 0x1cc654: 0x24051430  addiu       $a1, $zero, 0x1430 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC658u;
        goto label_1cc658;
    }
    ctx->pc = 0x1CC650u;
    {
        const bool branch_taken_0x1cc650 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC650u;
        // 0x1cc654: 0x24051430  addiu       $a1, $zero, 0x1430 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc650) {
            ctx->pc = 0x1CC69Cu;
            goto label_1cc69c;
        }
    }
    ctx->pc = 0x1CC658u;
label_1cc658:
    // 0x1cc658: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x1cc658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_1cc65c:
    // 0x1cc65c: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x1cc65cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1cc660:
    // 0x1cc660: 0x246351c0  addiu       $v1, $v1, 0x51C0
    ctx->pc = 0x1cc660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20928));
label_1cc664:
    // 0x1cc664: 0x28c103e8  slti        $at, $a2, 0x3E8
    ctx->pc = 0x1cc664u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1000) ? 1 : 0);
label_1cc668:
    // 0x1cc668: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1cc668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1cc66c:
    // 0x1cc66c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1cc670:
    if (ctx->pc == 0x1CC670u) {
        ctx->pc = 0x1CC670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC66Cu;
        // 0x1cc670: 0x24641420  addiu       $a0, $v1, 0x1420 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC674u;
        goto label_1cc674;
    }
    ctx->pc = 0x1CC66Cu;
    {
        const bool branch_taken_0x1cc66c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC66Cu;
        // 0x1cc670: 0x24641420  addiu       $a0, $v1, 0x1420 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc66c) {
            ctx->pc = 0x1CC678u;
            goto label_1cc678;
        }
    }
    ctx->pc = 0x1CC674u;
label_1cc674:
    // 0x1cc674: 0x240603e7  addiu       $a2, $zero, 0x3E7
    ctx->pc = 0x1cc674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_1cc678:
    // 0x1cc678: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x1cc678u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_1cc67c:
    // 0x1cc67c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1cc67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1cc680:
    // 0x1cc680: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1cc684:
    if (ctx->pc == 0x1CC684u) {
        ctx->pc = 0x1CC684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC680u;
        // 0x1cc684: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC688u;
        goto label_1cc688;
    }
    ctx->pc = 0x1CC680u;
    {
        const bool branch_taken_0x1cc680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC680u;
        // 0x1cc684: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc680) {
            ctx->pc = 0x1CC698u;
            goto label_1cc698;
        }
    }
    ctx->pc = 0x1CC688u;
label_1cc688:
    // 0x1cc688: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1cc688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1cc68c:
    // 0x1cc68c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1cc68cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_1cc690:
    // 0x1cc690: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1cc690u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_1cc694:
    // 0x1cc694: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1cc694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1cc698:
    // 0x1cc698: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1cc698u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1cc69c:
    // 0x1cc69c: 0x3e00008  jr          $ra
label_1cc6a0:
    if (ctx->pc == 0x1CC6A0u) {
        ctx->pc = 0x1CC6A4u;
        goto label_1cc6a4;
    }
    ctx->pc = 0x1CC69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC69Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC6A4u;
label_1cc6a4:
    // 0x1cc6a4: 0x0  nop
    ctx->pc = 0x1cc6a4u;
    // NOP
label_1cc6a8:
    // 0x1cc6a8: 0x0  nop
    ctx->pc = 0x1cc6a8u;
    // NOP
label_1cc6ac:
    // 0x1cc6ac: 0x0  nop
    ctx->pc = 0x1cc6acu;
    // NOP
label_1cc6b0:
    // 0x1cc6b0: 0x3e00008  jr          $ra
label_1cc6b4:
    if (ctx->pc == 0x1CC6B4u) {
        ctx->pc = 0x1CC6B8u;
        goto label_1cc6b8;
    }
    ctx->pc = 0x1CC6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC6B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC6B8u;
label_1cc6b8:
    // 0x1cc6b8: 0x0  nop
    ctx->pc = 0x1cc6b8u;
    // NOP
label_1cc6bc:
    // 0x1cc6bc: 0x0  nop
    ctx->pc = 0x1cc6bcu;
    // NOP
label_1cc6c0:
    // 0x1cc6c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cc6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1cc6c4:
    // 0x1cc6c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cc6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1cc6c8:
    // 0x1cc6c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cc6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1cc6cc:
    // 0x1cc6cc: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_1cc6d0:
    if (ctx->pc == 0x1CC6D0u) {
        ctx->pc = 0x1CC6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6CCu;
        // 0x1cc6d0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC6D4u;
        goto label_1cc6d4;
    }
    ctx->pc = 0x1CC6CCu;
    {
        const bool branch_taken_0x1cc6cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6CCu;
        // 0x1cc6d0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc6cc) {
            ctx->pc = 0x1CC70Cu;
            goto label_1cc70c;
        }
    }
    ctx->pc = 0x1CC6D4u;
label_1cc6d4:
    // 0x1cc6d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cc6d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc6d8:
    // 0x1cc6d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1cc6d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc6dc:
    // 0x1cc6dc: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1cc6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1cc6e0:
    // 0x1cc6e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cc6e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cc6e4:
    // 0x1cc6e4: 0x244251c0  addiu       $v0, $v0, 0x51C0
    ctx->pc = 0x1cc6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20928));
label_1cc6e8:
    // 0x1cc6e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cc6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc6ec:
    // 0x1cc6ec: 0xc0731d0  jal         func_1CC740
label_1cc6f0:
    if (ctx->pc == 0x1CC6F0u) {
        ctx->pc = 0x1CC6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6ECu;
        // 0x1cc6f0: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC6F4u;
        goto label_1cc6f4;
    }
    ctx->pc = 0x1CC6ECu;
    SET_GPR_U32(ctx, 31, 0x1CC6F4u);
    ctx->pc = 0x1CC6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC6ECu;
    // 0x1cc6f0: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC740u;
    goto label_1cc740;
    ctx->pc = 0x1CC6F4u;
label_1cc6f4:
    // 0x1cc6f4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cc6f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1cc6f8:
    // 0x1cc6f8: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1cc6f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1cc6fc:
    // 0x1cc6fc: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_1cc700:
    if (ctx->pc == 0x1CC700u) {
        ctx->pc = 0x1CC700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6FCu;
        // 0x1cc700: 0x26311430  addiu       $s1, $s1, 0x1430 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 5168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC704u;
        goto label_1cc704;
    }
    ctx->pc = 0x1CC6FCu;
    {
        const bool branch_taken_0x1cc6fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6FCu;
        // 0x1cc700: 0x26311430  addiu       $s1, $s1, 0x1430 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 5168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc6fc) {
            ctx->pc = 0x1CC6DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc6dc;
        }
    }
    ctx->pc = 0x1CC704u;
label_1cc704:
    // 0x1cc704: 0x10000007  b           . + 4 + (0x7 << 2)
label_1cc708:
    if (ctx->pc == 0x1CC708u) {
        ctx->pc = 0x1CC708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC704u;
        // 0x1cc708: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC70Cu;
        goto label_1cc70c;
    }
    ctx->pc = 0x1CC704u;
    {
        const bool branch_taken_0x1cc704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC704u;
        // 0x1cc708: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc704) {
            ctx->pc = 0x1CC724u;
            goto label_1cc724;
        }
    }
    ctx->pc = 0x1CC70Cu;
label_1cc70c:
    // 0x1cc70c: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x1cc70cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
label_1cc710:
    // 0x1cc710: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cc710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc714:
    // 0x1cc714: 0x248451c0  addiu       $a0, $a0, 0x51C0
    ctx->pc = 0x1cc714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20928));
label_1cc718:
    // 0x1cc718: 0xc0731d0  jal         func_1CC740
label_1cc71c:
    if (ctx->pc == 0x1CC71Cu) {
        ctx->pc = 0x1CC71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC718u;
        // 0x1cc71c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC720u;
        goto label_1cc720;
    }
    ctx->pc = 0x1CC718u;
    SET_GPR_U32(ctx, 31, 0x1CC720u);
    ctx->pc = 0x1CC71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC718u;
    // 0x1cc71c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC740u;
    goto label_1cc740;
    ctx->pc = 0x1CC720u;
label_1cc720:
    // 0x1cc720: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cc720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc724:
    // 0x1cc724: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cc724u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cc728:
    // 0x1cc728: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cc728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1cc72c:
    // 0x1cc72c: 0x3e00008  jr          $ra
label_1cc730:
    if (ctx->pc == 0x1CC730u) {
        ctx->pc = 0x1CC730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC72Cu;
        // 0x1cc730: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC734u;
        goto label_1cc734;
    }
    ctx->pc = 0x1CC72Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC72Cu;
        // 0x1cc730: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC72Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC734u;
label_1cc734:
    // 0x1cc734: 0x0  nop
    ctx->pc = 0x1cc734u;
    // NOP
label_1cc738:
    // 0x1cc738: 0x0  nop
    ctx->pc = 0x1cc738u;
    // NOP
label_1cc73c:
    // 0x1cc73c: 0x0  nop
    ctx->pc = 0x1cc73cu;
    // NOP
label_1cc740:
    // 0x1cc740: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1cc740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1cc744:
    // 0x1cc744: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cc744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc748:
    // 0x1cc748: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1cc748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_1cc74c:
    // 0x1cc74c: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x1cc74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
label_1cc750:
    // 0x1cc750: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x1cc750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_1cc754:
    // 0x1cc754: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x1cc754u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cc758:
    // 0x1cc758: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x1cc758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_1cc75c:
    // 0x1cc75c: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1cc75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_1cc760:
    // 0x1cc760: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1cc760u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc764:
    // 0x1cc764: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1cc764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_1cc768:
    // 0x1cc768: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1cc768u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cc76c:
    // 0x1cc76c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1cc76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_1cc770:
    // 0x1cc770: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1cc770u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1cc774:
    // 0x1cc774: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1cc774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_1cc778:
    // 0x1cc778: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1cc778u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc77c:
    // 0x1cc77c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1cc77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1cc780:
    // 0x1cc780: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1cc780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1cc784:
    // 0x1cc784: 0xac801420  sw          $zero, 0x1420($a0)
    ctx->pc = 0x1cc784u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5152), GPR_U32(ctx, 0));
label_1cc788:
    // 0x1cc788: 0xac801424  sw          $zero, 0x1424($a0)
    ctx->pc = 0x1cc788u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5156), GPR_U32(ctx, 0));
label_1cc78c:
    // 0x1cc78c: 0xac801428  sw          $zero, 0x1428($a0)
    ctx->pc = 0x1cc78cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5160), GPR_U32(ctx, 0));
label_1cc790:
    // 0x1cc790: 0xac82142c  sw          $v0, 0x142C($a0)
    ctx->pc = 0x1cc790u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5164), GPR_U32(ctx, 2));
label_1cc794:
    // 0x1cc794: 0x3d3b821  addu        $s7, $fp, $s3
    ctx->pc = 0x1cc794u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 19)));
label_1cc798:
    // 0x1cc798: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x1cc798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_1cc79c:
    // 0x1cc79c: 0xc05e234  jal         func_1788D0
label_1cc7a0:
    if (ctx->pc == 0x1CC7A0u) {
        ctx->pc = 0x1CC7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC79Cu;
        // 0x1cc7a0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC7A4u;
        goto label_1cc7a4;
    }
    ctx->pc = 0x1CC79Cu;
    SET_GPR_U32(ctx, 31, 0x1CC7A4u);
    ctx->pc = 0x1CC7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC79Cu;
    // 0x1cc7a0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    { ctx->pc = 0x1788d0; return; }
    ctx->pc = 0x1CC7A4u;
label_1cc7a4:
    // 0x1cc7a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cc7a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc7a8:
    // 0x1cc7a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1cc7a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc7ac:
    // 0x1cc7ac: 0x0  nop
    ctx->pc = 0x1cc7acu;
    // NOP
label_1cc7b0:
    // 0x1cc7b0: 0x2f21021  addu        $v0, $s7, $s2
    ctx->pc = 0x1cc7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
label_1cc7b4:
    // 0x1cc7b4: 0x2a01000c  slti        $at, $s0, 0xC
    ctx->pc = 0x1cc7b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
label_1cc7b8:
    // 0x1cc7b8: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
label_1cc7bc:
    if (ctx->pc == 0x1CC7BCu) {
        ctx->pc = 0x1CC7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC7B8u;
        // 0x1cc7bc: 0x24510010  addiu       $s1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC7C0u;
        goto label_1cc7c0;
    }
    ctx->pc = 0x1CC7B8u;
    {
        const bool branch_taken_0x1cc7b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC7B8u;
        // 0x1cc7bc: 0x24510010  addiu       $s1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc7b8) {
            ctx->pc = 0x1CC880u;
            goto label_1cc880;
        }
    }
    ctx->pc = 0x1CC7C0u;
label_1cc7c0:
    // 0x1cc7c0: 0xc070834  jal         func_1C20D0
label_1cc7c4:
    if (ctx->pc == 0x1CC7C4u) {
        ctx->pc = 0x1CC7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC7C0u;
        // 0x1cc7c4: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC7C8u;
        goto label_1cc7c8;
    }
    ctx->pc = 0x1CC7C0u;
    SET_GPR_U32(ctx, 31, 0x1CC7C8u);
    ctx->pc = 0x1CC7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC7C0u;
    // 0x1cc7c4: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1CC7C8u;
label_1cc7c8:
    // 0x1cc7c8: 0x12800018  beqz        $s4, . + 4 + (0x18 << 2)
label_1cc7cc:
    if (ctx->pc == 0x1CC7CCu) {
        ctx->pc = 0x1CC7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC7C8u;
        // 0x1cc7cc: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC7D0u;
        goto label_1cc7d0;
    }
    ctx->pc = 0x1CC7C8u;
    {
        const bool branch_taken_0x1cc7c8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC7C8u;
        // 0x1cc7cc: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc7c8) {
            ctx->pc = 0x1CC82Cu;
            goto label_1cc82c;
        }
    }
    ctx->pc = 0x1CC7D0u;
label_1cc7d0:
    // 0x1cc7d0: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1cc7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1cc7d4:
    // 0x1cc7d4: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x1cc7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_1cc7d8:
    // 0x1cc7d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cc7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cc7dc:
    // 0x1cc7dc: 0xffa50008  sd          $a1, 0x8($sp)
    ctx->pc = 0x1cc7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 5));
label_1cc7e0:
    // 0x1cc7e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1cc7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cc7e4:
    // 0x1cc7e4: 0xffa50010  sd          $a1, 0x10($sp)
    ctx->pc = 0x1cc7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 5));
label_1cc7e8:
    // 0x1cc7e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cc7e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc7ec:
    // 0x1cc7ec: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x1cc7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_1cc7f0:
    // 0x1cc7f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cc7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc7f4:
    // 0x1cc7f4: 0x1518c0  sll         $v1, $s5, 3
    ctx->pc = 0x1cc7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_1cc7f8:
    // 0x1cc7f8: 0xffa50020  sd          $a1, 0x20($sp)
    ctx->pc = 0x1cc7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 5));
label_1cc7fc:
    // 0x1cc7fc: 0x751823  subu        $v1, $v1, $s5
    ctx->pc = 0x1cc7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_1cc800:
    // 0x1cc800: 0xffa50028  sd          $a1, 0x28($sp)
    ctx->pc = 0x1cc800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 5));
label_1cc804:
    // 0x1cc804: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1cc804u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1cc808:
    // 0x1cc808: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cc808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cc80c:
    // 0x1cc80c: 0x24670050  addiu       $a3, $v1, 0x50
    ctx->pc = 0x1cc80cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
label_1cc810:
    // 0x1cc810: 0x3408ffe0  ori         $t0, $zero, 0xFFE0
    ctx->pc = 0x1cc810u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
label_1cc814:
    // 0x1cc814: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cc814u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc818:
    // 0x1cc818: 0x240a0030  addiu       $t2, $zero, 0x30
    ctx->pc = 0x1cc818u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1cc81c:
    // 0x1cc81c: 0xc05dd88  jal         func_177620
label_1cc820:
    if (ctx->pc == 0x1CC820u) {
        ctx->pc = 0x1CC820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC81Cu;
        // 0x1cc820: 0x240b0190  addiu       $t3, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC824u;
        goto label_1cc824;
    }
    ctx->pc = 0x1CC81Cu;
    SET_GPR_U32(ctx, 31, 0x1CC824u);
    ctx->pc = 0x1CC820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC81Cu;
    // 0x1cc820: 0x240b0190  addiu       $t3, $zero, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177620u;
    { ctx->pc = 0x177620; return; }
    ctx->pc = 0x1CC824u;
label_1cc824:
    // 0x1cc824: 0x10000044  b           . + 4 + (0x44 << 2)
label_1cc828:
    if (ctx->pc == 0x1CC828u) {
        ctx->pc = 0x1CC82Cu;
        goto label_1cc82c;
    }
    ctx->pc = 0x1CC824u;
    {
        const bool branch_taken_0x1cc824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc824) {
            ctx->pc = 0x1CC938u;
            goto label_1cc938;
        }
    }
    ctx->pc = 0x1CC82Cu;
label_1cc82c:
    // 0x1cc82c: 0x0  nop
    ctx->pc = 0x1cc82cu;
    // NOP
label_1cc830:
    // 0x1cc830: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x1cc830u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1cc834:
    // 0x1cc834: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1cc834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1cc838:
    // 0x1cc838: 0xffaa0000  sd          $t2, 0x0($sp)
    ctx->pc = 0x1cc838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 10));
label_1cc83c:
    // 0x1cc83c: 0xffa50008  sd          $a1, 0x8($sp)
    ctx->pc = 0x1cc83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 5));
label_1cc840:
    // 0x1cc840: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1cc840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cc844:
    // 0x1cc844: 0xffa50010  sd          $a1, 0x10($sp)
    ctx->pc = 0x1cc844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 5));
label_1cc848:
    // 0x1cc848: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cc848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc84c:
    // 0x1cc84c: 0xffa60018  sd          $a2, 0x18($sp)
    ctx->pc = 0x1cc84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 6));
label_1cc850:
    // 0x1cc850: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cc850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cc854:
    // 0x1cc854: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x1cc854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
label_1cc858:
    // 0x1cc858: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cc858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cc85c:
    // 0x1cc85c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cc85cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc860:
    // 0x1cc860: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x1cc860u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1cc864:
    // 0x1cc864: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x1cc864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
label_1cc868:
    // 0x1cc868: 0x3408ffe0  ori         $t0, $zero, 0xFFE0
    ctx->pc = 0x1cc868u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
label_1cc86c:
    // 0x1cc86c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cc86cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc870:
    // 0x1cc870: 0xc05dd88  jal         func_177620
label_1cc874:
    if (ctx->pc == 0x1CC874u) {
        ctx->pc = 0x1CC874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC870u;
        // 0x1cc874: 0x240b0190  addiu       $t3, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC878u;
        goto label_1cc878;
    }
    ctx->pc = 0x1CC870u;
    SET_GPR_U32(ctx, 31, 0x1CC878u);
    ctx->pc = 0x1CC874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC870u;
    // 0x1cc874: 0x240b0190  addiu       $t3, $zero, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177620u;
    { ctx->pc = 0x177620; return; }
    ctx->pc = 0x1CC878u;
label_1cc878:
    // 0x1cc878: 0x1000002f  b           . + 4 + (0x2F << 2)
label_1cc87c:
    if (ctx->pc == 0x1CC87Cu) {
        ctx->pc = 0x1CC880u;
        goto label_1cc880;
    }
    ctx->pc = 0x1CC878u;
    {
        const bool branch_taken_0x1cc878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc878) {
            ctx->pc = 0x1CC938u;
            goto label_1cc938;
        }
    }
    ctx->pc = 0x1CC880u;
label_1cc880:
    // 0x1cc880: 0xc070834  jal         func_1C20D0
label_1cc884:
    if (ctx->pc == 0x1CC884u) {
        ctx->pc = 0x1CC884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC880u;
        // 0x1cc884: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC888u;
        goto label_1cc888;
    }
    ctx->pc = 0x1CC880u;
    SET_GPR_U32(ctx, 31, 0x1CC888u);
    ctx->pc = 0x1CC884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC880u;
    // 0x1cc884: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1CC888u;
label_1cc888:
    // 0x1cc888: 0x12800018  beqz        $s4, . + 4 + (0x18 << 2)
label_1cc88c:
    if (ctx->pc == 0x1CC88Cu) {
        ctx->pc = 0x1CC88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC888u;
        // 0x1cc88c: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC890u;
        goto label_1cc890;
    }
    ctx->pc = 0x1CC888u;
    {
        const bool branch_taken_0x1cc888 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC888u;
        // 0x1cc88c: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc888) {
            ctx->pc = 0x1CC8ECu;
            goto label_1cc8ec;
        }
    }
    ctx->pc = 0x1CC890u;
label_1cc890:
    // 0x1cc890: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1cc890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1cc894:
    // 0x1cc894: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x1cc894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_1cc898:
    // 0x1cc898: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cc898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cc89c:
    // 0x1cc89c: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1cc89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1cc8a0:
    // 0x1cc8a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cc8a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc8a4:
    // 0x1cc8a4: 0xffa50010  sd          $a1, 0x10($sp)
    ctx->pc = 0x1cc8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 5));
label_1cc8a8:
    // 0x1cc8a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1cc8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cc8ac:
    // 0x1cc8ac: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x1cc8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_1cc8b0:
    // 0x1cc8b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cc8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc8b4:
    // 0x1cc8b4: 0x1518c0  sll         $v1, $s5, 3
    ctx->pc = 0x1cc8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_1cc8b8:
    // 0x1cc8b8: 0xffa50020  sd          $a1, 0x20($sp)
    ctx->pc = 0x1cc8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 5));
label_1cc8bc:
    // 0x1cc8bc: 0x751823  subu        $v1, $v1, $s5
    ctx->pc = 0x1cc8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_1cc8c0:
    // 0x1cc8c0: 0xffa50028  sd          $a1, 0x28($sp)
    ctx->pc = 0x1cc8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 5));
label_1cc8c4:
    // 0x1cc8c4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1cc8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1cc8c8:
    // 0x1cc8c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cc8c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cc8cc:
    // 0x1cc8cc: 0x24670050  addiu       $a3, $v1, 0x50
    ctx->pc = 0x1cc8ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
label_1cc8d0:
    // 0x1cc8d0: 0x3408ffe0  ori         $t0, $zero, 0xFFE0
    ctx->pc = 0x1cc8d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
label_1cc8d4:
    // 0x1cc8d4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cc8d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc8d8:
    // 0x1cc8d8: 0x240a0030  addiu       $t2, $zero, 0x30
    ctx->pc = 0x1cc8d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1cc8dc:
    // 0x1cc8dc: 0xc05dd88  jal         func_177620
label_1cc8e0:
    if (ctx->pc == 0x1CC8E0u) {
        ctx->pc = 0x1CC8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC8DCu;
        // 0x1cc8e0: 0x240b02d0  addiu       $t3, $zero, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC8E4u;
        goto label_1cc8e4;
    }
    ctx->pc = 0x1CC8DCu;
    SET_GPR_U32(ctx, 31, 0x1CC8E4u);
    ctx->pc = 0x1CC8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC8DCu;
    // 0x1cc8e0: 0x240b02d0  addiu       $t3, $zero, 0x2D0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177620u;
    { ctx->pc = 0x177620; return; }
    ctx->pc = 0x1CC8E4u;
label_1cc8e4:
    // 0x1cc8e4: 0x10000014  b           . + 4 + (0x14 << 2)
label_1cc8e8:
    if (ctx->pc == 0x1CC8E8u) {
        ctx->pc = 0x1CC8ECu;
        goto label_1cc8ec;
    }
    ctx->pc = 0x1CC8E4u;
    {
        const bool branch_taken_0x1cc8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc8e4) {
            ctx->pc = 0x1CC938u;
            goto label_1cc938;
        }
    }
    ctx->pc = 0x1CC8ECu;
label_1cc8ec:
    // 0x1cc8ec: 0x0  nop
    ctx->pc = 0x1cc8ecu;
    // NOP
label_1cc8f0:
    // 0x1cc8f0: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x1cc8f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1cc8f4:
    // 0x1cc8f4: 0xffaa0000  sd          $t2, 0x0($sp)
    ctx->pc = 0x1cc8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 10));
label_1cc8f8:
    // 0x1cc8f8: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1cc8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1cc8fc:
    // 0x1cc8fc: 0xffaa0008  sd          $t2, 0x8($sp)
    ctx->pc = 0x1cc8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 10));
label_1cc900:
    // 0x1cc900: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1cc900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cc904:
    // 0x1cc904: 0xffa50010  sd          $a1, 0x10($sp)
    ctx->pc = 0x1cc904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 5));
label_1cc908:
    // 0x1cc908: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cc908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc90c:
    // 0x1cc90c: 0xffa60018  sd          $a2, 0x18($sp)
    ctx->pc = 0x1cc90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 6));
label_1cc910:
    // 0x1cc910: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cc910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cc914:
    // 0x1cc914: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x1cc914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
label_1cc918:
    // 0x1cc918: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cc918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cc91c:
    // 0x1cc91c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cc91cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc920:
    // 0x1cc920: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x1cc920u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1cc924:
    // 0x1cc924: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x1cc924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
label_1cc928:
    // 0x1cc928: 0x3408ffe0  ori         $t0, $zero, 0xFFE0
    ctx->pc = 0x1cc928u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
label_1cc92c:
    // 0x1cc92c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cc92cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc930:
    // 0x1cc930: 0xc05dd88  jal         func_177620
label_1cc934:
    if (ctx->pc == 0x1CC934u) {
        ctx->pc = 0x1CC934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC930u;
        // 0x1cc934: 0x240b02d0  addiu       $t3, $zero, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC938u;
        goto label_1cc938;
    }
    ctx->pc = 0x1CC930u;
    SET_GPR_U32(ctx, 31, 0x1CC938u);
    ctx->pc = 0x1CC934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC930u;
    // 0x1cc934: 0x240b02d0  addiu       $t3, $zero, 0x2D0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177620u;
    { ctx->pc = 0x177620; return; }
    ctx->pc = 0x1CC938u;
label_1cc938:
    // 0x1cc938: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cc938u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1cc93c:
    // 0x1cc93c: 0x2a030010  slti        $v1, $s0, 0x10
    ctx->pc = 0x1cc93cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
label_1cc940:
    // 0x1cc940: 0x1460ff9a  bnez        $v1, . + 4 + (-0x66 << 2)
label_1cc944:
    if (ctx->pc == 0x1CC944u) {
        ctx->pc = 0x1CC944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC940u;
        // 0x1cc944: 0x265200a0  addiu       $s2, $s2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC948u;
        goto label_1cc948;
    }
    ctx->pc = 0x1CC940u;
    {
        const bool branch_taken_0x1cc940 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC940u;
        // 0x1cc944: 0x265200a0  addiu       $s2, $s2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc940) {
            ctx->pc = 0x1CC7ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc7ac;
        }
    }
    ctx->pc = 0x1CC948u;
label_1cc948:
    // 0x1cc948: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1cc948u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1cc94c:
    // 0x1cc94c: 0x2ac30002  slti        $v1, $s6, 0x2
    ctx->pc = 0x1cc94cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
label_1cc950:
    // 0x1cc950: 0x1460ff90  bnez        $v1, . + 4 + (-0x70 << 2)
label_1cc954:
    if (ctx->pc == 0x1CC954u) {
        ctx->pc = 0x1CC954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC950u;
        // 0x1cc954: 0x26730a10  addiu       $s3, $s3, 0xA10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC958u;
        goto label_1cc958;
    }
    ctx->pc = 0x1CC950u;
    {
        const bool branch_taken_0x1cc950 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC950u;
        // 0x1cc954: 0x26730a10  addiu       $s3, $s3, 0xA10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc950) {
            ctx->pc = 0x1CC794u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc794;
        }
    }
    ctx->pc = 0x1CC958u;
label_1cc958:
    // 0x1cc958: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1cc958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_1cc95c:
    // 0x1cc95c: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x1cc95cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1cc960:
    // 0x1cc960: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x1cc960u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1cc964:
    // 0x1cc964: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x1cc964u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1cc968:
    // 0x1cc968: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1cc968u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1cc96c:
    // 0x1cc96c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1cc96cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1cc970:
    // 0x1cc970: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1cc970u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1cc974:
    // 0x1cc974: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1cc974u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1cc978:
    // 0x1cc978: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1cc978u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1cc97c:
    // 0x1cc97c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1cc97cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1cc980:
    // 0x1cc980: 0x3e00008  jr          $ra
label_1cc984:
    if (ctx->pc == 0x1CC984u) {
        ctx->pc = 0x1CC984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC980u;
        // 0x1cc984: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC988u;
        goto label_1cc988;
    }
    ctx->pc = 0x1CC980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC980u;
        // 0x1cc984: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC988u;
label_1cc988:
    // 0x1cc988: 0x0  nop
    ctx->pc = 0x1cc988u;
    // NOP
label_1cc98c:
    // 0x1cc98c: 0x0  nop
    ctx->pc = 0x1cc98cu;
    // NOP
label_1cc990:
    // 0x1cc990: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cc990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1cc994:
    // 0x1cc994: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1cc994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1cc998:
    // 0x1cc998: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1cc998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1cc99c:
    // 0x1cc99c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1cc99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1cc9a0:
    // 0x1cc9a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1cc9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1cc9a4:
    // 0x1cc9a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cc9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1cc9a8:
    // 0x1cc9a8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1cc9a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cc9ac:
    // 0x1cc9ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cc9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1cc9b0:
    // 0x1cc9b0: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x1cc9b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_1cc9b4:
    // 0x1cc9b4: 0x1483001c  bne         $a0, $v1, . + 4 + (0x1C << 2)
label_1cc9b8:
    if (ctx->pc == 0x1CC9B8u) {
        ctx->pc = 0x1CC9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC9B4u;
        // 0x1cc9b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC9BCu;
        goto label_1cc9bc;
    }
    ctx->pc = 0x1CC9B4u;
    {
        const bool branch_taken_0x1cc9b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CC9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC9B4u;
        // 0x1cc9b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc9b4) {
            ctx->pc = 0x1CCA28u;
            goto label_1cca28;
        }
    }
    ctx->pc = 0x1CC9BCu;
label_1cc9bc:
    // 0x1cc9bc: 0xc0590dc  jal         func_164370
label_1cc9c0:
    if (ctx->pc == 0x1CC9C0u) {
        ctx->pc = 0x1CC9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC9BCu;
        // 0x1cc9c0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC9C4u;
        goto label_1cc9c4;
    }
    ctx->pc = 0x1CC9BCu;
    SET_GPR_U32(ctx, 31, 0x1CC9C4u);
    ctx->pc = 0x1CC9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC9BCu;
    // 0x1cc9c0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    { ctx->pc = 0x164370; return; }
    ctx->pc = 0x1CC9C4u;
label_1cc9c4:
    // 0x1cc9c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cc9c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cc9c8:
    // 0x1cc9c8: 0x120000d6  beqz        $s0, . + 4 + (0xD6 << 2)
label_1cc9cc:
    if (ctx->pc == 0x1CC9CCu) {
        ctx->pc = 0x1CC9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC9C8u;
        // 0x1cc9cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC9D0u;
        goto label_1cc9d0;
    }
    ctx->pc = 0x1CC9C8u;
    {
        const bool branch_taken_0x1cc9c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC9C8u;
        // 0x1cc9cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc9c8) {
            ctx->pc = 0x1CCD24u;
            { ctx->pc = 0x1ccd24; return; }
        }
    }
    ctx->pc = 0x1CC9D0u;
label_1cc9d0:
    // 0x1cc9d0: 0xc066e26  jal         func_19B898
label_1cc9d4:
    if (ctx->pc == 0x1CC9D4u) {
        ctx->pc = 0x1CC9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC9D0u;
        // 0x1cc9d4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC9D8u;
        goto label_1cc9d8;
    }
    ctx->pc = 0x1CC9D0u;
    SET_GPR_U32(ctx, 31, 0x1CC9D8u);
    ctx->pc = 0x1CC9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC9D0u;
    // 0x1cc9d4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1CC9D8u;
label_1cc9d8:
    // 0x1cc9d8: 0xc08f0cc  jal         func_23C330
label_1cc9dc:
    if (ctx->pc == 0x1CC9DCu) {
        ctx->pc = 0x1CC9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC9D8u;
        // 0x1cc9dc: 0xae11005c  sw          $s1, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC9E0u;
        goto label_1cc9e0;
    }
    ctx->pc = 0x1CC9D8u;
    SET_GPR_U32(ctx, 31, 0x1CC9E0u);
    ctx->pc = 0x1CC9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC9D8u;
    // 0x1cc9dc: 0xae11005c  sw          $s1, 0x5C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1CC9E0u;
label_1cc9e0:
    // 0x1cc9e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cc9e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cc9e4:
    // 0x1cc9e4: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x1cc9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_1cc9e8:
    // 0x1cc9e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cc9e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cc9ec:
    // 0x1cc9ec: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x1cc9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
label_1cc9f0:
    // 0x1cc9f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1cc9f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1cc9f4:
    // 0x1cc9f4: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x1cc9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
label_1cc9f8:
    // 0x1cc9f8: 0x2463cf00  addiu       $v1, $v1, -0x3100
    ctx->pc = 0x1cc9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954752));
label_1cc9fc:
    // 0x1cc9fc: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1cc9fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1cca00:
    // 0x1cca00: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1cca00u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cca04:
    // 0x1cca04: 0x0  nop
    ctx->pc = 0x1cca04u;
    // NOP
label_1cca08:
    // 0x1cca08: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1cca08u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1cca0c:
    // 0x1cca0c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cca0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1cca10:
    // 0x1cca10: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1cca10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1cca14:
    // 0x1cca14: 0x0  nop
    ctx->pc = 0x1cca14u;
    // NOP
label_1cca18:
    // 0x1cca18: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1cca18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1cca1c:
    // 0x1cca1c: 0xa6040012  sh          $a0, 0x12($s0)
    ctx->pc = 0x1cca1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 4));
label_1cca20:
    // 0x1cca20: 0x100000c0  b           . + 4 + (0xC0 << 2)
label_1cca24:
    if (ctx->pc == 0x1CCA24u) {
        ctx->pc = 0x1CCA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA20u;
        // 0x1cca24: 0xae03001c  sw          $v1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCA28u;
        goto label_1cca28;
    }
    ctx->pc = 0x1CCA20u;
    {
        const bool branch_taken_0x1cca20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA20u;
        // 0x1cca24: 0xae03001c  sw          $v1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cca20) {
            ctx->pc = 0x1CCD24u;
            { ctx->pc = 0x1ccd24; return; }
        }
    }
    ctx->pc = 0x1CCA28u;
label_1cca28:
    // 0x1cca28: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x1cca28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1cca2c:
    // 0x1cca2c: 0x1483008d  bne         $a0, $v1, . + 4 + (0x8D << 2)
label_1cca30:
    if (ctx->pc == 0x1CCA30u) {
        ctx->pc = 0x1CCA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA2Cu;
        // 0x1cca30: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCA34u;
        goto label_1cca34;
    }
    ctx->pc = 0x1CCA2Cu;
    {
        const bool branch_taken_0x1cca2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CCA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA2Cu;
        // 0x1cca30: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cca2c) {
            ctx->pc = 0x1CCC64u;
            { ctx->pc = 0x1ccc64; return; }
        }
    }
    ctx->pc = 0x1CCA34u;
label_1cca34:
    // 0x1cca34: 0x3c02c496  lui         $v0, 0xC496
    ctx->pc = 0x1cca34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50326 << 16));
label_1cca38:
    // 0x1cca38: 0x3c0346cf  lui         $v1, 0x46CF
    ctx->pc = 0x1cca38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18127 << 16));
label_1cca3c:
    // 0x1cca3c: 0x3442e000  ori         $v0, $v0, 0xE000
    ctx->pc = 0x1cca3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
label_1cca40:
    // 0x1cca40: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1cca40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1cca44:
    // 0x1cca44: 0xac227a54  sw          $v0, 0x7A54($at)
    ctx->pc = 0x1cca44u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31316), GPR_U32(ctx, 2));
label_1cca48:
    // 0x1cca48: 0x34640800  ori         $a0, $v1, 0x800
    ctx->pc = 0x1cca48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
label_1cca4c:
    // 0x1cca4c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1cca4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1cca50:
    // 0x1cca50: 0x3c02470c  lui         $v0, 0x470C
    ctx->pc = 0x1cca50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18188 << 16));
label_1cca54:
    // 0x1cca54: 0xac247a50  sw          $a0, 0x7A50($at)
    ctx->pc = 0x1cca54u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31312), GPR_U32(ctx, 4));
label_1cca58:
    // 0x1cca58: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x1cca58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
label_1cca5c:
    // 0x1cca5c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1cca5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1cca60:
    // 0x1cca60: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1cca60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1cca64:
    // 0x1cca64: 0xac227a58  sw          $v0, 0x7A58($at)
    ctx->pc = 0x1cca64u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31320), GPR_U32(ctx, 2));
label_1cca68:
    // 0x1cca68: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1cca68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1cca6c:
    // 0x1cca6c: 0x3c02c497  lui         $v0, 0xC497
    ctx->pc = 0x1cca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50327 << 16));
label_1cca70:
    // 0x1cca70: 0xac247a40  sw          $a0, 0x7A40($at)
    ctx->pc = 0x1cca70u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31296), GPR_U32(ctx, 4));
label_1cca74:
    // 0x1cca74: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x1cca74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
label_1cca78:
    // 0x1cca78: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1cca78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1cca7c:
    // 0x1cca7c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1cca7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cca80:
    // 0x1cca80: 0xac237a5c  sw          $v1, 0x7A5C($at)
    ctx->pc = 0x1cca80u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31324), GPR_U32(ctx, 3));
label_1cca84:
    // 0x1cca84: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1cca84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1cca88:
    // 0x1cca88: 0xac227a44  sw          $v0, 0x7A44($at)
    ctx->pc = 0x1cca88u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31300), GPR_U32(ctx, 2));
label_1cca8c:
    // 0x1cca8c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1cca8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1cca90:
    // 0x1cca90: 0x3c02470a  lui         $v0, 0x470A
    ctx->pc = 0x1cca90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18186 << 16));
label_1cca94:
    // 0x1cca94: 0xac237a4c  sw          $v1, 0x7A4C($at)
    ctx->pc = 0x1cca94u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31308), GPR_U32(ctx, 3));
label_1cca98:
    // 0x1cca98: 0x3442ba00  ori         $v0, $v0, 0xBA00
    ctx->pc = 0x1cca98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47616);
label_1cca9c:
    // 0x1cca9c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1cca9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1ccaa0:
    // 0x1ccaa0: 0xc0590dc  jal         func_164370
label_1ccaa4:
    if (ctx->pc == 0x1CCAA4u) {
        ctx->pc = 0x1CCAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCAA0u;
        // 0x1ccaa4: 0xac227a48  sw          $v0, 0x7A48($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 31304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCAA8u;
        goto label_1ccaa8;
    }
    ctx->pc = 0x1CCAA0u;
    SET_GPR_U32(ctx, 31, 0x1CCAA8u);
    ctx->pc = 0x1CCAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCAA0u;
    // 0x1ccaa4: 0xac227a48  sw          $v0, 0x7A48($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 31304), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    { ctx->pc = 0x164370; return; }
    ctx->pc = 0x1CCAA8u;
label_1ccaa8:
    // 0x1ccaa8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ccaa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ccaac:
    // 0x1ccaac: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
label_1ccab0:
    if (ctx->pc == 0x1CCAB0u) {
        ctx->pc = 0x1CCAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCAACu;
        // 0x1ccab0: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCAB4u;
        goto label_1ccab4;
    }
    ctx->pc = 0x1CCAACu;
    {
        const bool branch_taken_0x1ccaac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCAACu;
        // 0x1ccab0: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccaac) {
            ctx->pc = 0x1CCB4Cu;
            { ctx->pc = 0x1ccb4c; return; }
        }
    }
    ctx->pc = 0x1CCAB4u;
label_1ccab4:
    // 0x1ccab4: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x1ccab4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
label_1ccab8:
    // 0x1ccab8: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x1ccab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_1ccabc:
    // 0x1ccabc: 0x24a57a40  addiu       $a1, $a1, 0x7A40
    ctx->pc = 0x1ccabcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31296));
label_1ccac0:
    // 0x1ccac0: 0xc066e08  jal         func_19B820
label_1ccac4:
    if (ctx->pc == 0x1CCAC4u) {
        ctx->pc = 0x1CCAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCAC0u;
        // 0x1ccac4: 0x24c67a50  addiu       $a2, $a2, 0x7A50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCAC8u;
        goto label_1ccac8;
    }
    ctx->pc = 0x1CCAC0u;
    SET_GPR_U32(ctx, 31, 0x1CCAC8u);
    ctx->pc = 0x1CCAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCAC0u;
    // 0x1ccac4: 0x24c67a50  addiu       $a2, $a2, 0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x1CCAC8u;
label_1ccac8:
    // 0x1ccac8: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x1ccac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_1ccacc:
    // 0x1ccacc: 0xc066daa  jal         func_19B6A8
label_1ccad0:
    if (ctx->pc == 0x1CCAD0u) {
        ctx->pc = 0x1CCAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCACCu;
        // 0x1ccad0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCAD4u;
        goto label_1ccad4;
    }
    ctx->pc = 0x1CCACCu;
    SET_GPR_U32(ctx, 31, 0x1CCAD4u);
    ctx->pc = 0x1CCAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCACCu;
    // 0x1ccad0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    { ctx->pc = 0x19b6a8; return; }
    ctx->pc = 0x1CCAD4u;
label_1ccad4:
    // 0x1ccad4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x1ccad4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_1ccad8:
    // 0x1ccad8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1ccad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1ccadc:
    // 0x1ccadc: 0xc066e26  jal         func_19B898
label_1ccae0:
    if (ctx->pc == 0x1CCAE0u) {
        ctx->pc = 0x1CCAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCADCu;
        // 0x1ccae0: 0x24a57a50  addiu       $a1, $a1, 0x7A50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCAE4u;
        goto label_1ccae4;
    }
    ctx->pc = 0x1CCADCu;
    SET_GPR_U32(ctx, 31, 0x1CCAE4u);
    ctx->pc = 0x1CCAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCADCu;
    // 0x1ccae0: 0x24a57a50  addiu       $a1, $a1, 0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1CCAE4u;
label_1ccae4:
    // 0x1ccae4: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x1ccae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
label_1ccae8:
    // 0x1ccae8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x1ccae8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_1ccaec:
    // 0x1ccaec: 0x24847a40  addiu       $a0, $a0, 0x7A40
    ctx->pc = 0x1ccaecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31296));
label_1ccaf0:
    // 0x1ccaf0: 0xc0646f8  jal         func_191BE0
label_1ccaf4:
    if (ctx->pc == 0x1CCAF4u) {
        ctx->pc = 0x1CCAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCAF0u;
        // 0x1ccaf4: 0x24a57a50  addiu       $a1, $a1, 0x7A50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCAF8u;
        goto label_1ccaf8;
    }
    ctx->pc = 0x1CCAF0u;
    SET_GPR_U32(ctx, 31, 0x1CCAF8u);
    ctx->pc = 0x1CCAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCAF0u;
    // 0x1ccaf4: 0x24a57a50  addiu       $a1, $a1, 0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191BE0u;
    { ctx->pc = 0x191be0; return; }
    ctx->pc = 0x1CCAF8u;
label_1ccaf8:
    // 0x1ccaf8: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x1ccaf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
label_1ccafc:
    // 0x1ccafc: 0xc08f0cc  jal         func_23C330
label_1ccb00:
    if (ctx->pc == 0x1CCB00u) {
        ctx->pc = 0x1CCB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCAFCu;
        // 0x1ccb00: 0xae11005c  sw          $s1, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCB04u;
        goto label_1ccb04;
    }
    ctx->pc = 0x1CCAFCu;
    SET_GPR_U32(ctx, 31, 0x1CCB04u);
    ctx->pc = 0x1CCB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCAFCu;
    // 0x1ccb00: 0xae11005c  sw          $s1, 0x5C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1CCB04u;
label_1ccb04:
    // 0x1ccb04: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ccb04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ccb08:
    // 0x1ccb08: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1ccb08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_1ccb0c:
    // 0x1ccb0c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ccb0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ccb10:
    // 0x1ccb10: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ccb10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1ccb14:
    // 0x1ccb14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ccb14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ccb18:
    // 0x1ccb18: 0x0  nop
    ctx->pc = 0x1ccb18u;
    // NOP
label_1ccb1c:
    // 0x1ccb1c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1ccb1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ccb20:
    // 0x1ccb20: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1ccb20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
label_1ccb24:
    // 0x1ccb24: 0x2442cd40  addiu       $v0, $v0, -0x32C0
    ctx->pc = 0x1ccb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954304));
label_1ccb28:
    // 0x1ccb28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ccb28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ccb2c:
    // 0x1ccb2c: 0x0  nop
    ctx->pc = 0x1ccb2cu;
    // NOP
label_1ccb30:
    // 0x1ccb30: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1ccb30u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1ccb34:
    // 0x1ccb34: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ccb34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ccb38:
    // 0x1ccb38: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1ccb38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1ccb3c:
    // 0x1ccb3c: 0x0  nop
    ctx->pc = 0x1ccb3cu;
    // NOP
    ctx->pc = 0x1ccb40u;
    return;
}
