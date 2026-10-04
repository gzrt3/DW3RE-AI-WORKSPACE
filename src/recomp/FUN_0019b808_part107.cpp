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


void FUN_0019b808_part107(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1cf428u: goto label_1cf428;
        case 0x1cf42cu: goto label_1cf42c;
        case 0x1cf430u: goto label_1cf430;
        case 0x1cf434u: goto label_1cf434;
        case 0x1cf438u: goto label_1cf438;
        case 0x1cf43cu: goto label_1cf43c;
        case 0x1cf440u: goto label_1cf440;
        case 0x1cf444u: goto label_1cf444;
        case 0x1cf448u: goto label_1cf448;
        case 0x1cf44cu: goto label_1cf44c;
        case 0x1cf450u: goto label_1cf450;
        case 0x1cf454u: goto label_1cf454;
        case 0x1cf458u: goto label_1cf458;
        case 0x1cf45cu: goto label_1cf45c;
        case 0x1cf460u: goto label_1cf460;
        case 0x1cf464u: goto label_1cf464;
        case 0x1cf468u: goto label_1cf468;
        case 0x1cf46cu: goto label_1cf46c;
        case 0x1cf470u: goto label_1cf470;
        case 0x1cf474u: goto label_1cf474;
        case 0x1cf478u: goto label_1cf478;
        case 0x1cf47cu: goto label_1cf47c;
        case 0x1cf480u: goto label_1cf480;
        case 0x1cf484u: goto label_1cf484;
        case 0x1cf488u: goto label_1cf488;
        case 0x1cf48cu: goto label_1cf48c;
        case 0x1cf490u: goto label_1cf490;
        case 0x1cf494u: goto label_1cf494;
        case 0x1cf498u: goto label_1cf498;
        case 0x1cf49cu: goto label_1cf49c;
        case 0x1cf4a0u: goto label_1cf4a0;
        case 0x1cf4a4u: goto label_1cf4a4;
        case 0x1cf4a8u: goto label_1cf4a8;
        case 0x1cf4acu: goto label_1cf4ac;
        case 0x1cf4b0u: goto label_1cf4b0;
        case 0x1cf4b4u: goto label_1cf4b4;
        case 0x1cf4b8u: goto label_1cf4b8;
        case 0x1cf4bcu: goto label_1cf4bc;
        case 0x1cf4c0u: goto label_1cf4c0;
        case 0x1cf4c4u: goto label_1cf4c4;
        case 0x1cf4c8u: goto label_1cf4c8;
        case 0x1cf4ccu: goto label_1cf4cc;
        case 0x1cf4d0u: goto label_1cf4d0;
        case 0x1cf4d4u: goto label_1cf4d4;
        case 0x1cf4d8u: goto label_1cf4d8;
        case 0x1cf4dcu: goto label_1cf4dc;
        case 0x1cf4e0u: goto label_1cf4e0;
        case 0x1cf4e4u: goto label_1cf4e4;
        case 0x1cf4e8u: goto label_1cf4e8;
        case 0x1cf4ecu: goto label_1cf4ec;
        case 0x1cf4f0u: goto label_1cf4f0;
        case 0x1cf4f4u: goto label_1cf4f4;
        case 0x1cf4f8u: goto label_1cf4f8;
        case 0x1cf4fcu: goto label_1cf4fc;
        case 0x1cf500u: goto label_1cf500;
        case 0x1cf504u: goto label_1cf504;
        case 0x1cf508u: goto label_1cf508;
        case 0x1cf50cu: goto label_1cf50c;
        case 0x1cf510u: goto label_1cf510;
        case 0x1cf514u: goto label_1cf514;
        case 0x1cf518u: goto label_1cf518;
        case 0x1cf51cu: goto label_1cf51c;
        case 0x1cf520u: goto label_1cf520;
        case 0x1cf524u: goto label_1cf524;
        case 0x1cf528u: goto label_1cf528;
        case 0x1cf52cu: goto label_1cf52c;
        case 0x1cf530u: goto label_1cf530;
        case 0x1cf534u: goto label_1cf534;
        case 0x1cf538u: goto label_1cf538;
        case 0x1cf53cu: goto label_1cf53c;
        case 0x1cf540u: goto label_1cf540;
        case 0x1cf544u: goto label_1cf544;
        case 0x1cf548u: goto label_1cf548;
        case 0x1cf54cu: goto label_1cf54c;
        case 0x1cf550u: goto label_1cf550;
        case 0x1cf554u: goto label_1cf554;
        case 0x1cf558u: goto label_1cf558;
        case 0x1cf55cu: goto label_1cf55c;
        case 0x1cf560u: goto label_1cf560;
        case 0x1cf564u: goto label_1cf564;
        case 0x1cf568u: goto label_1cf568;
        case 0x1cf56cu: goto label_1cf56c;
        case 0x1cf570u: goto label_1cf570;
        case 0x1cf574u: goto label_1cf574;
        case 0x1cf578u: goto label_1cf578;
        case 0x1cf57cu: goto label_1cf57c;
        case 0x1cf580u: goto label_1cf580;
        case 0x1cf584u: goto label_1cf584;
        case 0x1cf588u: goto label_1cf588;
        case 0x1cf58cu: goto label_1cf58c;
        case 0x1cf590u: goto label_1cf590;
        case 0x1cf594u: goto label_1cf594;
        case 0x1cf598u: goto label_1cf598;
        case 0x1cf59cu: goto label_1cf59c;
        case 0x1cf5a0u: goto label_1cf5a0;
        case 0x1cf5a4u: goto label_1cf5a4;
        case 0x1cf5a8u: goto label_1cf5a8;
        case 0x1cf5acu: goto label_1cf5ac;
        case 0x1cf5b0u: goto label_1cf5b0;
        case 0x1cf5b4u: goto label_1cf5b4;
        case 0x1cf5b8u: goto label_1cf5b8;
        case 0x1cf5bcu: goto label_1cf5bc;
        case 0x1cf5c0u: goto label_1cf5c0;
        case 0x1cf5c4u: goto label_1cf5c4;
        case 0x1cf5c8u: goto label_1cf5c8;
        case 0x1cf5ccu: goto label_1cf5cc;
        case 0x1cf5d0u: goto label_1cf5d0;
        case 0x1cf5d4u: goto label_1cf5d4;
        case 0x1cf5d8u: goto label_1cf5d8;
        case 0x1cf5dcu: goto label_1cf5dc;
        case 0x1cf5e0u: goto label_1cf5e0;
        case 0x1cf5e4u: goto label_1cf5e4;
        case 0x1cf5e8u: goto label_1cf5e8;
        case 0x1cf5ecu: goto label_1cf5ec;
        case 0x1cf5f0u: goto label_1cf5f0;
        case 0x1cf5f4u: goto label_1cf5f4;
        case 0x1cf5f8u: goto label_1cf5f8;
        case 0x1cf5fcu: goto label_1cf5fc;
        case 0x1cf600u: goto label_1cf600;
        case 0x1cf604u: goto label_1cf604;
        case 0x1cf608u: goto label_1cf608;
        case 0x1cf60cu: goto label_1cf60c;
        case 0x1cf610u: goto label_1cf610;
        case 0x1cf614u: goto label_1cf614;
        case 0x1cf618u: goto label_1cf618;
        case 0x1cf61cu: goto label_1cf61c;
        case 0x1cf620u: goto label_1cf620;
        case 0x1cf624u: goto label_1cf624;
        case 0x1cf628u: goto label_1cf628;
        case 0x1cf62cu: goto label_1cf62c;
        case 0x1cf630u: goto label_1cf630;
        case 0x1cf634u: goto label_1cf634;
        case 0x1cf638u: goto label_1cf638;
        case 0x1cf63cu: goto label_1cf63c;
        case 0x1cf640u: goto label_1cf640;
        case 0x1cf644u: goto label_1cf644;
        case 0x1cf648u: goto label_1cf648;
        case 0x1cf64cu: goto label_1cf64c;
        case 0x1cf650u: goto label_1cf650;
        case 0x1cf654u: goto label_1cf654;
        case 0x1cf658u: goto label_1cf658;
        case 0x1cf65cu: goto label_1cf65c;
        case 0x1cf660u: goto label_1cf660;
        case 0x1cf664u: goto label_1cf664;
        case 0x1cf668u: goto label_1cf668;
        case 0x1cf66cu: goto label_1cf66c;
        case 0x1cf670u: goto label_1cf670;
        case 0x1cf674u: goto label_1cf674;
        case 0x1cf678u: goto label_1cf678;
        case 0x1cf67cu: goto label_1cf67c;
        case 0x1cf680u: goto label_1cf680;
        case 0x1cf684u: goto label_1cf684;
        case 0x1cf688u: goto label_1cf688;
        case 0x1cf68cu: goto label_1cf68c;
        case 0x1cf690u: goto label_1cf690;
        case 0x1cf694u: goto label_1cf694;
        case 0x1cf698u: goto label_1cf698;
        case 0x1cf69cu: goto label_1cf69c;
        case 0x1cf6a0u: goto label_1cf6a0;
        case 0x1cf6a4u: goto label_1cf6a4;
        case 0x1cf6a8u: goto label_1cf6a8;
        case 0x1cf6acu: goto label_1cf6ac;
        case 0x1cf6b0u: goto label_1cf6b0;
        case 0x1cf6b4u: goto label_1cf6b4;
        case 0x1cf6b8u: goto label_1cf6b8;
        case 0x1cf6bcu: goto label_1cf6bc;
        case 0x1cf6c0u: goto label_1cf6c0;
        case 0x1cf6c4u: goto label_1cf6c4;
        case 0x1cf6c8u: goto label_1cf6c8;
        case 0x1cf6ccu: goto label_1cf6cc;
        case 0x1cf6d0u: goto label_1cf6d0;
        case 0x1cf6d4u: goto label_1cf6d4;
        case 0x1cf6d8u: goto label_1cf6d8;
        case 0x1cf6dcu: goto label_1cf6dc;
        case 0x1cf6e0u: goto label_1cf6e0;
        case 0x1cf6e4u: goto label_1cf6e4;
        case 0x1cf6e8u: goto label_1cf6e8;
        case 0x1cf6ecu: goto label_1cf6ec;
        case 0x1cf6f0u: goto label_1cf6f0;
        case 0x1cf6f4u: goto label_1cf6f4;
        case 0x1cf6f8u: goto label_1cf6f8;
        case 0x1cf6fcu: goto label_1cf6fc;
        case 0x1cf700u: goto label_1cf700;
        case 0x1cf704u: goto label_1cf704;
        case 0x1cf708u: goto label_1cf708;
        case 0x1cf70cu: goto label_1cf70c;
        case 0x1cf710u: goto label_1cf710;
        case 0x1cf714u: goto label_1cf714;
        case 0x1cf718u: goto label_1cf718;
        case 0x1cf71cu: goto label_1cf71c;
        case 0x1cf720u: goto label_1cf720;
        case 0x1cf724u: goto label_1cf724;
        case 0x1cf728u: goto label_1cf728;
        case 0x1cf72cu: goto label_1cf72c;
        case 0x1cf730u: goto label_1cf730;
        case 0x1cf734u: goto label_1cf734;
        case 0x1cf738u: goto label_1cf738;
        case 0x1cf73cu: goto label_1cf73c;
        case 0x1cf740u: goto label_1cf740;
        case 0x1cf744u: goto label_1cf744;
        case 0x1cf748u: goto label_1cf748;
        case 0x1cf74cu: goto label_1cf74c;
        case 0x1cf750u: goto label_1cf750;
        case 0x1cf754u: goto label_1cf754;
        case 0x1cf758u: goto label_1cf758;
        case 0x1cf75cu: goto label_1cf75c;
        case 0x1cf760u: goto label_1cf760;
        case 0x1cf764u: goto label_1cf764;
        case 0x1cf768u: goto label_1cf768;
        case 0x1cf76cu: goto label_1cf76c;
        case 0x1cf770u: goto label_1cf770;
        case 0x1cf774u: goto label_1cf774;
        case 0x1cf778u: goto label_1cf778;
        case 0x1cf77cu: goto label_1cf77c;
        case 0x1cf780u: goto label_1cf780;
        case 0x1cf784u: goto label_1cf784;
        case 0x1cf788u: goto label_1cf788;
        case 0x1cf78cu: goto label_1cf78c;
        case 0x1cf790u: goto label_1cf790;
        case 0x1cf794u: goto label_1cf794;
        case 0x1cf798u: goto label_1cf798;
        case 0x1cf79cu: goto label_1cf79c;
        case 0x1cf7a0u: goto label_1cf7a0;
        case 0x1cf7a4u: goto label_1cf7a4;
        case 0x1cf7a8u: goto label_1cf7a8;
        case 0x1cf7acu: goto label_1cf7ac;
        case 0x1cf7b0u: goto label_1cf7b0;
        case 0x1cf7b4u: goto label_1cf7b4;
        case 0x1cf7b8u: goto label_1cf7b8;
        case 0x1cf7bcu: goto label_1cf7bc;
        case 0x1cf7c0u: goto label_1cf7c0;
        case 0x1cf7c4u: goto label_1cf7c4;
        case 0x1cf7c8u: goto label_1cf7c8;
        case 0x1cf7ccu: goto label_1cf7cc;
        case 0x1cf7d0u: goto label_1cf7d0;
        case 0x1cf7d4u: goto label_1cf7d4;
        case 0x1cf7d8u: goto label_1cf7d8;
        case 0x1cf7dcu: goto label_1cf7dc;
        case 0x1cf7e0u: goto label_1cf7e0;
        case 0x1cf7e4u: goto label_1cf7e4;
        case 0x1cf7e8u: goto label_1cf7e8;
        case 0x1cf7ecu: goto label_1cf7ec;
        case 0x1cf7f0u: goto label_1cf7f0;
        case 0x1cf7f4u: goto label_1cf7f4;
        case 0x1cf7f8u: goto label_1cf7f8;
        case 0x1cf7fcu: goto label_1cf7fc;
        case 0x1cf800u: goto label_1cf800;
        case 0x1cf804u: goto label_1cf804;
        case 0x1cf808u: goto label_1cf808;
        case 0x1cf80cu: goto label_1cf80c;
        case 0x1cf810u: goto label_1cf810;
        case 0x1cf814u: goto label_1cf814;
        case 0x1cf818u: goto label_1cf818;
        case 0x1cf81cu: goto label_1cf81c;
        case 0x1cf820u: goto label_1cf820;
        case 0x1cf824u: goto label_1cf824;
        case 0x1cf828u: goto label_1cf828;
        case 0x1cf82cu: goto label_1cf82c;
        case 0x1cf830u: goto label_1cf830;
        case 0x1cf834u: goto label_1cf834;
        case 0x1cf838u: goto label_1cf838;
        case 0x1cf83cu: goto label_1cf83c;
        case 0x1cf840u: goto label_1cf840;
        case 0x1cf844u: goto label_1cf844;
        case 0x1cf848u: goto label_1cf848;
        case 0x1cf84cu: goto label_1cf84c;
        case 0x1cf850u: goto label_1cf850;
        case 0x1cf854u: goto label_1cf854;
        case 0x1cf858u: goto label_1cf858;
        case 0x1cf85cu: goto label_1cf85c;
        case 0x1cf860u: goto label_1cf860;
        case 0x1cf864u: goto label_1cf864;
        case 0x1cf868u: goto label_1cf868;
        case 0x1cf86cu: goto label_1cf86c;
        case 0x1cf870u: goto label_1cf870;
        case 0x1cf874u: goto label_1cf874;
        case 0x1cf878u: goto label_1cf878;
        case 0x1cf87cu: goto label_1cf87c;
        case 0x1cf880u: goto label_1cf880;
        case 0x1cf884u: goto label_1cf884;
        case 0x1cf888u: goto label_1cf888;
        case 0x1cf88cu: goto label_1cf88c;
        case 0x1cf890u: goto label_1cf890;
        case 0x1cf894u: goto label_1cf894;
        case 0x1cf898u: goto label_1cf898;
        case 0x1cf89cu: goto label_1cf89c;
        case 0x1cf8a0u: goto label_1cf8a0;
        case 0x1cf8a4u: goto label_1cf8a4;
        case 0x1cf8a8u: goto label_1cf8a8;
        case 0x1cf8acu: goto label_1cf8ac;
        case 0x1cf8b0u: goto label_1cf8b0;
        case 0x1cf8b4u: goto label_1cf8b4;
        case 0x1cf8b8u: goto label_1cf8b8;
        case 0x1cf8bcu: goto label_1cf8bc;
        case 0x1cf8c0u: goto label_1cf8c0;
        case 0x1cf8c4u: goto label_1cf8c4;
        case 0x1cf8c8u: goto label_1cf8c8;
        case 0x1cf8ccu: goto label_1cf8cc;
        case 0x1cf8d0u: goto label_1cf8d0;
        case 0x1cf8d4u: goto label_1cf8d4;
        case 0x1cf8d8u: goto label_1cf8d8;
        case 0x1cf8dcu: goto label_1cf8dc;
        case 0x1cf8e0u: goto label_1cf8e0;
        case 0x1cf8e4u: goto label_1cf8e4;
        case 0x1cf8e8u: goto label_1cf8e8;
        case 0x1cf8ecu: goto label_1cf8ec;
        case 0x1cf8f0u: goto label_1cf8f0;
        case 0x1cf8f4u: goto label_1cf8f4;
        case 0x1cf8f8u: goto label_1cf8f8;
        case 0x1cf8fcu: goto label_1cf8fc;
        case 0x1cf900u: goto label_1cf900;
        case 0x1cf904u: goto label_1cf904;
        case 0x1cf908u: goto label_1cf908;
        case 0x1cf90cu: goto label_1cf90c;
        case 0x1cf910u: goto label_1cf910;
        case 0x1cf914u: goto label_1cf914;
        case 0x1cf918u: goto label_1cf918;
        case 0x1cf91cu: goto label_1cf91c;
        case 0x1cf920u: goto label_1cf920;
        case 0x1cf924u: goto label_1cf924;
        case 0x1cf928u: goto label_1cf928;
        case 0x1cf92cu: goto label_1cf92c;
        case 0x1cf930u: goto label_1cf930;
        case 0x1cf934u: goto label_1cf934;
        case 0x1cf938u: goto label_1cf938;
        case 0x1cf93cu: goto label_1cf93c;
        case 0x1cf940u: goto label_1cf940;
        case 0x1cf944u: goto label_1cf944;
        case 0x1cf948u: goto label_1cf948;
        case 0x1cf94cu: goto label_1cf94c;
        case 0x1cf950u: goto label_1cf950;
        case 0x1cf954u: goto label_1cf954;
        case 0x1cf958u: goto label_1cf958;
        case 0x1cf95cu: goto label_1cf95c;
        case 0x1cf960u: goto label_1cf960;
        case 0x1cf964u: goto label_1cf964;
        case 0x1cf968u: goto label_1cf968;
        case 0x1cf96cu: goto label_1cf96c;
        case 0x1cf970u: goto label_1cf970;
        case 0x1cf974u: goto label_1cf974;
        case 0x1cf978u: goto label_1cf978;
        case 0x1cf97cu: goto label_1cf97c;
        case 0x1cf980u: goto label_1cf980;
        case 0x1cf984u: goto label_1cf984;
        case 0x1cf988u: goto label_1cf988;
        case 0x1cf98cu: goto label_1cf98c;
        case 0x1cf990u: goto label_1cf990;
        case 0x1cf994u: goto label_1cf994;
        case 0x1cf998u: goto label_1cf998;
        case 0x1cf99cu: goto label_1cf99c;
        case 0x1cf9a0u: goto label_1cf9a0;
        case 0x1cf9a4u: goto label_1cf9a4;
        case 0x1cf9a8u: goto label_1cf9a8;
        case 0x1cf9acu: goto label_1cf9ac;
        case 0x1cf9b0u: goto label_1cf9b0;
        case 0x1cf9b4u: goto label_1cf9b4;
        case 0x1cf9b8u: goto label_1cf9b8;
        case 0x1cf9bcu: goto label_1cf9bc;
        case 0x1cf9c0u: goto label_1cf9c0;
        case 0x1cf9c4u: goto label_1cf9c4;
        case 0x1cf9c8u: goto label_1cf9c8;
        case 0x1cf9ccu: goto label_1cf9cc;
        case 0x1cf9d0u: goto label_1cf9d0;
        case 0x1cf9d4u: goto label_1cf9d4;
        case 0x1cf9d8u: goto label_1cf9d8;
        case 0x1cf9dcu: goto label_1cf9dc;
        case 0x1cf9e0u: goto label_1cf9e0;
        case 0x1cf9e4u: goto label_1cf9e4;
        case 0x1cf9e8u: goto label_1cf9e8;
        case 0x1cf9ecu: goto label_1cf9ec;
        case 0x1cf9f0u: goto label_1cf9f0;
        case 0x1cf9f4u: goto label_1cf9f4;
        case 0x1cf9f8u: goto label_1cf9f8;
        case 0x1cf9fcu: goto label_1cf9fc;
        case 0x1cfa00u: goto label_1cfa00;
        case 0x1cfa04u: goto label_1cfa04;
        case 0x1cfa08u: goto label_1cfa08;
        case 0x1cfa0cu: goto label_1cfa0c;
        case 0x1cfa10u: goto label_1cfa10;
        case 0x1cfa14u: goto label_1cfa14;
        case 0x1cfa18u: goto label_1cfa18;
        case 0x1cfa1cu: goto label_1cfa1c;
        case 0x1cfa20u: goto label_1cfa20;
        case 0x1cfa24u: goto label_1cfa24;
        case 0x1cfa28u: goto label_1cfa28;
        case 0x1cfa2cu: goto label_1cfa2c;
        case 0x1cfa30u: goto label_1cfa30;
        case 0x1cfa34u: goto label_1cfa34;
        case 0x1cfa38u: goto label_1cfa38;
        case 0x1cfa3cu: goto label_1cfa3c;
        case 0x1cfa40u: goto label_1cfa40;
        case 0x1cfa44u: goto label_1cfa44;
        case 0x1cfa48u: goto label_1cfa48;
        case 0x1cfa4cu: goto label_1cfa4c;
        case 0x1cfa50u: goto label_1cfa50;
        case 0x1cfa54u: goto label_1cfa54;
        case 0x1cfa58u: goto label_1cfa58;
        case 0x1cfa5cu: goto label_1cfa5c;
        case 0x1cfa60u: goto label_1cfa60;
        case 0x1cfa64u: goto label_1cfa64;
        case 0x1cfa68u: goto label_1cfa68;
        case 0x1cfa6cu: goto label_1cfa6c;
        case 0x1cfa70u: goto label_1cfa70;
        case 0x1cfa74u: goto label_1cfa74;
        case 0x1cfa78u: goto label_1cfa78;
        case 0x1cfa7cu: goto label_1cfa7c;
        case 0x1cfa80u: goto label_1cfa80;
        case 0x1cfa84u: goto label_1cfa84;
        case 0x1cfa88u: goto label_1cfa88;
        case 0x1cfa8cu: goto label_1cfa8c;
        case 0x1cfa90u: goto label_1cfa90;
        case 0x1cfa94u: goto label_1cfa94;
        case 0x1cfa98u: goto label_1cfa98;
        case 0x1cfa9cu: goto label_1cfa9c;
        case 0x1cfaa0u: goto label_1cfaa0;
        case 0x1cfaa4u: goto label_1cfaa4;
        case 0x1cfaa8u: goto label_1cfaa8;
        case 0x1cfaacu: goto label_1cfaac;
        case 0x1cfab0u: goto label_1cfab0;
        case 0x1cfab4u: goto label_1cfab4;
        case 0x1cfab8u: goto label_1cfab8;
        case 0x1cfabcu: goto label_1cfabc;
        case 0x1cfac0u: goto label_1cfac0;
        case 0x1cfac4u: goto label_1cfac4;
        case 0x1cfac8u: goto label_1cfac8;
        case 0x1cfaccu: goto label_1cfacc;
        case 0x1cfad0u: goto label_1cfad0;
        case 0x1cfad4u: goto label_1cfad4;
        case 0x1cfad8u: goto label_1cfad8;
        case 0x1cfadcu: goto label_1cfadc;
        case 0x1cfae0u: goto label_1cfae0;
        case 0x1cfae4u: goto label_1cfae4;
        case 0x1cfae8u: goto label_1cfae8;
        case 0x1cfaecu: goto label_1cfaec;
        case 0x1cfaf0u: goto label_1cfaf0;
        case 0x1cfaf4u: goto label_1cfaf4;
        case 0x1cfaf8u: goto label_1cfaf8;
        case 0x1cfafcu: goto label_1cfafc;
        case 0x1cfb00u: goto label_1cfb00;
        case 0x1cfb04u: goto label_1cfb04;
        case 0x1cfb08u: goto label_1cfb08;
        case 0x1cfb0cu: goto label_1cfb0c;
        case 0x1cfb10u: goto label_1cfb10;
        case 0x1cfb14u: goto label_1cfb14;
        case 0x1cfb18u: goto label_1cfb18;
        case 0x1cfb1cu: goto label_1cfb1c;
        case 0x1cfb20u: goto label_1cfb20;
        case 0x1cfb24u: goto label_1cfb24;
        case 0x1cfb28u: goto label_1cfb28;
        case 0x1cfb2cu: goto label_1cfb2c;
        case 0x1cfb30u: goto label_1cfb30;
        case 0x1cfb34u: goto label_1cfb34;
        case 0x1cfb38u: goto label_1cfb38;
        case 0x1cfb3cu: goto label_1cfb3c;
        case 0x1cfb40u: goto label_1cfb40;
        case 0x1cfb44u: goto label_1cfb44;
        case 0x1cfb48u: goto label_1cfb48;
        case 0x1cfb4cu: goto label_1cfb4c;
        case 0x1cfb50u: goto label_1cfb50;
        case 0x1cfb54u: goto label_1cfb54;
        case 0x1cfb58u: goto label_1cfb58;
        case 0x1cfb5cu: goto label_1cfb5c;
        case 0x1cfb60u: goto label_1cfb60;
        case 0x1cfb64u: goto label_1cfb64;
        case 0x1cfb68u: goto label_1cfb68;
        case 0x1cfb6cu: goto label_1cfb6c;
        case 0x1cfb70u: goto label_1cfb70;
        case 0x1cfb74u: goto label_1cfb74;
        case 0x1cfb78u: goto label_1cfb78;
        case 0x1cfb7cu: goto label_1cfb7c;
        case 0x1cfb80u: goto label_1cfb80;
        case 0x1cfb84u: goto label_1cfb84;
        case 0x1cfb88u: goto label_1cfb88;
        case 0x1cfb8cu: goto label_1cfb8c;
        case 0x1cfb90u: goto label_1cfb90;
        case 0x1cfb94u: goto label_1cfb94;
        case 0x1cfb98u: goto label_1cfb98;
        case 0x1cfb9cu: goto label_1cfb9c;
        case 0x1cfba0u: goto label_1cfba0;
        case 0x1cfba4u: goto label_1cfba4;
        case 0x1cfba8u: goto label_1cfba8;
        case 0x1cfbacu: goto label_1cfbac;
        case 0x1cfbb0u: goto label_1cfbb0;
        case 0x1cfbb4u: goto label_1cfbb4;
        case 0x1cfbb8u: goto label_1cfbb8;
        case 0x1cfbbcu: goto label_1cfbbc;
        case 0x1cfbc0u: goto label_1cfbc0;
        case 0x1cfbc4u: goto label_1cfbc4;
        case 0x1cfbc8u: goto label_1cfbc8;
        case 0x1cfbccu: goto label_1cfbcc;
        case 0x1cfbd0u: goto label_1cfbd0;
        case 0x1cfbd4u: goto label_1cfbd4;
        case 0x1cfbd8u: goto label_1cfbd8;
        case 0x1cfbdcu: goto label_1cfbdc;
        case 0x1cfbe0u: goto label_1cfbe0;
        case 0x1cfbe4u: goto label_1cfbe4;
        case 0x1cfbe8u: goto label_1cfbe8;
        case 0x1cfbecu: goto label_1cfbec;
        case 0x1cfbf0u: goto label_1cfbf0;
        case 0x1cfbf4u: goto label_1cfbf4;
        default: return;
    }

label_1cf428:
    // 0x1cf428: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1cf428u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_1cf42c:
    // 0x1cf42c: 0x2475001c  addiu       $s5, $v1, 0x1C
    ctx->pc = 0x1cf42cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
label_1cf430:
    // 0x1cf430: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x1cf430u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1cf434:
    // 0x1cf434: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_1cf438:
    if (ctx->pc == 0x1CF438u) {
        ctx->pc = 0x1CF438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF434u;
        // 0x1cf438: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF43Cu;
        goto label_1cf43c;
    }
    ctx->pc = 0x1CF434u;
    {
        const bool branch_taken_0x1cf434 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1CF438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF434u;
        // 0x1cf438: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf434) {
            ctx->pc = 0x1CF444u;
            goto label_1cf444;
        }
    }
    ctx->pc = 0x1CF43Cu;
label_1cf43c:
    // 0x1cf43c: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x1cf43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
label_1cf440:
    // 0x1cf440: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1cf440u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_1cf444:
    // 0x1cf444: 0x24770078  addiu       $s7, $v1, 0x78
    ctx->pc = 0x1cf444u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_1cf448:
    // 0x1cf448: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1cf448u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1cf44c:
    // 0x1cf44c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1cf44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cf450:
    // 0x1cf450: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1cf450u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1cf454:
    // 0x1cf454: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1cf454u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cf458:
    // 0x1cf458: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1cf458u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1cf45c:
    // 0x1cf45c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1cf460:
    if (ctx->pc == 0x1CF460u) {
        ctx->pc = 0x1CF460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF45Cu;
        // 0x1cf460: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF464u;
        goto label_1cf464;
    }
    ctx->pc = 0x1CF45Cu;
    {
        const bool branch_taken_0x1cf45c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1CF460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF45Cu;
        // 0x1cf460: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf45c) {
            ctx->pc = 0x1CF46Cu;
            goto label_1cf46c;
        }
    }
    ctx->pc = 0x1CF464u;
label_1cf464:
    // 0x1cf464: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1cf464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_1cf468:
    // 0x1cf468: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1cf468u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1cf46c:
    // 0x1cf46c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1cf470:
    if (ctx->pc == 0x1CF470u) {
        ctx->pc = 0x1CF470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF46Cu;
        // 0x1cf470: 0x24560014  addiu       $s6, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF474u;
        goto label_1cf474;
    }
    ctx->pc = 0x1CF46Cu;
    {
        const bool branch_taken_0x1cf46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF46Cu;
        // 0x1cf470: 0x24560014  addiu       $s6, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf46c) {
            ctx->pc = 0x1CF4E0u;
            goto label_1cf4e0;
        }
    }
    ctx->pc = 0x1CF474u;
label_1cf474:
    // 0x1cf474: 0x0  nop
    ctx->pc = 0x1cf474u;
    // NOP
label_1cf478:
    // 0x1cf478: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1cf478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cf47c:
    // 0x1cf47c: 0x16030018  bne         $s0, $v1, . + 4 + (0x18 << 2)
label_1cf480:
    if (ctx->pc == 0x1CF480u) {
        ctx->pc = 0x1CF480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF47Cu;
        // 0x1cf480: 0x220c0  sll         $a0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF484u;
        goto label_1cf484;
    }
    ctx->pc = 0x1CF47Cu;
    {
        const bool branch_taken_0x1cf47c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CF480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF47Cu;
        // 0x1cf480: 0x220c0  sll         $a0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf47c) {
            ctx->pc = 0x1CF4E0u;
            goto label_1cf4e0;
        }
    }
    ctx->pc = 0x1CF484u;
label_1cf484:
    // 0x1cf484: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_1cf488:
    if (ctx->pc == 0x1CF488u) {
        ctx->pc = 0x1CF488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF484u;
        // 0x1cf488: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF48Cu;
        goto label_1cf48c;
    }
    ctx->pc = 0x1CF484u;
    {
        const bool branch_taken_0x1cf484 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1CF488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF484u;
        // 0x1cf488: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf484) {
            ctx->pc = 0x1CF494u;
            goto label_1cf494;
        }
    }
    ctx->pc = 0x1CF48Cu;
label_1cf48c:
    // 0x1cf48c: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x1cf48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
label_1cf490:
    // 0x1cf490: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1cf490u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_1cf494:
    // 0x1cf494: 0x24750078  addiu       $s5, $v1, 0x78
    ctx->pc = 0x1cf494u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_1cf498:
    // 0x1cf498: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1cf498u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1cf49c:
    // 0x1cf49c: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1cf49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cf4a0:
    // 0x1cf4a0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1cf4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1cf4a4:
    // 0x1cf4a4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1cf4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1cf4a8:
    // 0x1cf4a8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1cf4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1cf4ac:
    // 0x1cf4ac: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_1cf4b0:
    if (ctx->pc == 0x1CF4B0u) {
        ctx->pc = 0x1CF4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF4ACu;
        // 0x1cf4b0: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF4B4u;
        goto label_1cf4b4;
    }
    ctx->pc = 0x1CF4ACu;
    {
        const bool branch_taken_0x1cf4ac = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1CF4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF4ACu;
        // 0x1cf4b0: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf4ac) {
            ctx->pc = 0x1CF4BCu;
            goto label_1cf4bc;
        }
    }
    ctx->pc = 0x1CF4B4u;
label_1cf4b4:
    // 0x1cf4b4: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x1cf4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
label_1cf4b8:
    // 0x1cf4b8: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1cf4b8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_1cf4bc:
    // 0x1cf4bc: 0x24770014  addiu       $s7, $v1, 0x14
    ctx->pc = 0x1cf4bcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
label_1cf4c0:
    // 0x1cf4c0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1cf4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1cf4c4:
    // 0x1cf4c4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1cf4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cf4c8:
    // 0x1cf4c8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1cf4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1cf4cc:
    // 0x1cf4cc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1cf4d0:
    if (ctx->pc == 0x1CF4D0u) {
        ctx->pc = 0x1CF4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF4CCu;
        // 0x1cf4d0: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF4D4u;
        goto label_1cf4d4;
    }
    ctx->pc = 0x1CF4CCu;
    {
        const bool branch_taken_0x1cf4cc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1CF4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF4CCu;
        // 0x1cf4d0: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf4cc) {
            ctx->pc = 0x1CF4DCu;
            goto label_1cf4dc;
        }
    }
    ctx->pc = 0x1CF4D4u;
label_1cf4d4:
    // 0x1cf4d4: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1cf4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_1cf4d8:
    // 0x1cf4d8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1cf4d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1cf4dc:
    // 0x1cf4dc: 0x24560048  addiu       $s6, $v0, 0x48
    ctx->pc = 0x1cf4dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_1cf4e0:
    // 0x1cf4e0: 0xa2950070  sb          $s5, 0x70($s4)
    ctx->pc = 0x1cf4e0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 112), (uint8_t)GPR_U32(ctx, 21));
label_1cf4e4:
    // 0x1cf4e4: 0xa2970071  sb          $s7, 0x71($s4)
    ctx->pc = 0x1cf4e4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 113), (uint8_t)GPR_U32(ctx, 23));
label_1cf4e8:
    // 0x1cf4e8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1cf4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1cf4ec:
    // 0x1cf4ec: 0xa2960072  sb          $s6, 0x72($s4)
    ctx->pc = 0x1cf4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 114), (uint8_t)GPR_U32(ctx, 22));
label_1cf4f0:
    // 0x1cf4f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cf4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cf4f4:
    // 0x1cf4f4: 0xa2830073  sb          $v1, 0x73($s4)
    ctx->pc = 0x1cf4f4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 115), (uint8_t)GPR_U32(ctx, 3));
label_1cf4f8:
    // 0x1cf4f8: 0x26040005  addiu       $a0, $s0, 0x5
    ctx->pc = 0x1cf4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
label_1cf4fc:
    // 0x1cf4fc: 0xae820074  sw          $v0, 0x74($s4)
    ctx->pc = 0x1cf4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 116), GPR_U32(ctx, 2));
label_1cf500:
    // 0x1cf500: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1cf500u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1cf504:
    // 0x1cf504: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1cf504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1cf508:
    // 0x1cf508: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1cf508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1cf50c:
    // 0x1cf50c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cf50cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1cf510:
    // 0x1cf510: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1cf510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1cf514:
    // 0x1cf514: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1cf514u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1cf518:
    // 0x1cf518: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x1cf518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_1cf51c:
    // 0x1cf51c: 0x84830090  lh          $v1, 0x90($a0)
    ctx->pc = 0x1cf51cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 144)));
label_1cf520:
    // 0x1cf520: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1cf520u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1cf524:
    // 0x1cf524: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1cf524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1cf528:
    // 0x1cf528: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1cf528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cf52c:
    // 0x1cf52c: 0xa48200d8  sh          $v0, 0xD8($a0)
    ctx->pc = 0x1cf52cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 216), (uint16_t)GPR_U32(ctx, 2));
label_1cf530:
    // 0x1cf530: 0xa48200a8  sh          $v0, 0xA8($a0)
    ctx->pc = 0x1cf530u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 168), (uint16_t)GPR_U32(ctx, 2));
label_1cf534:
    // 0x1cf534: 0x0  nop
    ctx->pc = 0x1cf534u;
    // NOP
label_1cf538:
    // 0x1cf538: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cf538u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1cf53c:
    // 0x1cf53c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x1cf53cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_1cf540:
    // 0x1cf540: 0x1440ff5b  bnez        $v0, . + 4 + (-0xA5 << 2)
label_1cf544:
    if (ctx->pc == 0x1CF544u) {
        ctx->pc = 0x1CF544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF540u;
        // 0x1cf544: 0x27de0004  addiu       $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF548u;
        goto label_1cf548;
    }
    ctx->pc = 0x1CF540u;
    {
        const bool branch_taken_0x1cf540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF540u;
        // 0x1cf544: 0x27de0004  addiu       $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf540) {
            ctx->pc = 0x1CF2B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1cf2b0; return; }
        }
    }
    ctx->pc = 0x1CF548u;
label_1cf548:
    // 0x1cf548: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1cf548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_1cf54c:
    // 0x1cf54c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1cf550:
    if (ctx->pc == 0x1CF550u) {
        ctx->pc = 0x1CF550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF54Cu;
        // 0x1cf550: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF554u;
        goto label_1cf554;
    }
    ctx->pc = 0x1CF54Cu;
    {
        const bool branch_taken_0x1cf54c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF54Cu;
        // 0x1cf550: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf54c) {
            ctx->pc = 0x1CF564u;
            goto label_1cf564;
        }
    }
    ctx->pc = 0x1CF554u;
label_1cf554:
    // 0x1cf554: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1cf554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cf558:
    // 0x1cf558: 0xc070e2c  jal         func_1C38B0
label_1cf55c:
    if (ctx->pc == 0x1CF55Cu) {
        ctx->pc = 0x1CF55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF558u;
        // 0x1cf55c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF560u;
        goto label_1cf560;
    }
    ctx->pc = 0x1CF558u;
    SET_GPR_U32(ctx, 31, 0x1CF560u);
    ctx->pc = 0x1CF55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF558u;
    // 0x1cf55c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1CF560u;
label_1cf560:
    // 0x1cf560: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1cf560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1cf564:
    // 0x1cf564: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1cf564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_1cf568:
    // 0x1cf568: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1cf568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1cf56c:
    // 0x1cf56c: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x1cf56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_1cf570:
    // 0x1cf570: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1cf570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cf574:
    // 0x1cf574: 0x2406013a  addiu       $a2, $zero, 0x13A
    ctx->pc = 0x1cf574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 314));
label_1cf578:
    // 0x1cf578: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cf578u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf57c:
    // 0x1cf57c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cf57cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf580:
    // 0x1cf580: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cf580u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf584:
    // 0x1cf584: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1cf584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1cf588:
    // 0x1cf588: 0xc066c72  jal         func_19B1C8
label_1cf58c:
    if (ctx->pc == 0x1CF58Cu) {
        ctx->pc = 0x1CF58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF588u;
        // 0x1cf58c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF590u;
        goto label_1cf590;
    }
    ctx->pc = 0x1CF588u;
    SET_GPR_U32(ctx, 31, 0x1CF590u);
    ctx->pc = 0x1CF58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF588u;
    // 0x1cf58c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1CF588u, 0x1CF590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF590u;
label_1cf590:
    // 0x1cf590: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1cf590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1cf594:
    // 0x1cf594: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1cf594u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1cf598:
    // 0x1cf598: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1cf598u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1cf59c:
    // 0x1cf59c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1cf59cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1cf5a0:
    // 0x1cf5a0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1cf5a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1cf5a4:
    // 0x1cf5a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1cf5a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1cf5a8:
    // 0x1cf5a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1cf5a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1cf5ac:
    // 0x1cf5ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cf5acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cf5b0:
    // 0x1cf5b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cf5b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cf5b4:
    // 0x1cf5b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cf5b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1cf5b8:
    // 0x1cf5b8: 0x3e00008  jr          $ra
label_1cf5bc:
    if (ctx->pc == 0x1CF5BCu) {
        ctx->pc = 0x1CF5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF5B8u;
        // 0x1cf5bc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF5C0u;
        goto label_1cf5c0;
    }
    ctx->pc = 0x1CF5B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF5B8u;
        // 0x1cf5bc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF5B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF5C0u;
label_1cf5c0:
    // 0x1cf5c0: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x1cf5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1cf5c4:
    // 0x1cf5c4: 0x3c06004b  lui         $a2, 0x4B
    ctx->pc = 0x1cf5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)75 << 16));
label_1cf5c8:
    // 0x1cf5c8: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x1cf5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1cf5cc:
    // 0x1cf5cc: 0x24c603c0  addiu       $a2, $a2, 0x3C0
    ctx->pc = 0x1cf5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 960));
label_1cf5d0:
    // 0x1cf5d0: 0x54100  sll         $t0, $a1, 4
    ctx->pc = 0x1cf5d0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1cf5d4:
    // 0x1cf5d4: 0x3c05004b  lui         $a1, 0x4B
    ctx->pc = 0x1cf5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)75 << 16));
label_1cf5d8:
    // 0x1cf5d8: 0xc83821  addu        $a3, $a2, $t0
    ctx->pc = 0x1cf5d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_1cf5dc:
    // 0x1cf5dc: 0x24a503c4  addiu       $a1, $a1, 0x3C4
    ctx->pc = 0x1cf5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 964));
label_1cf5e0:
    // 0x1cf5e0: 0xa83021  addu        $a2, $a1, $t0
    ctx->pc = 0x1cf5e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_1cf5e4:
    // 0x1cf5e4: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x1cf5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1cf5e8:
    // 0x1cf5e8: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x1cf5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1cf5ec:
    // 0x1cf5ec: 0x43880  sll         $a3, $a0, 2
    ctx->pc = 0x1cf5ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1cf5f0:
    // 0x1cf5f0: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x1cf5f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_1cf5f4:
    // 0x1cf5f4: 0x74100  sll         $t0, $a3, 4
    ctx->pc = 0x1cf5f4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1cf5f8:
    // 0x1cf5f8: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x1cf5f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
label_1cf5fc:
    // 0x1cf5fc: 0x1042023  subu        $a0, $t0, $a0
    ctx->pc = 0x1cf5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_1cf600:
    // 0x1cf600: 0x24e77a80  addiu       $a3, $a3, 0x7A80
    ctx->pc = 0x1cf600u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 31360));
label_1cf604:
    // 0x1cf604: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x1cf604u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
label_1cf608:
    // 0x1cf608: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x1cf608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_1cf60c:
    // 0x1cf60c: 0x84a70220  lh          $a3, 0x220($a1)
    ctx->pc = 0x1cf60cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 544)));
label_1cf610:
    // 0x1cf610: 0x28e10002  slti        $at, $a3, 0x2
    ctx->pc = 0x1cf610u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
label_1cf614:
    // 0x1cf614: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1cf618:
    if (ctx->pc == 0x1CF618u) {
        ctx->pc = 0x1CF618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF614u;
        // 0x1cf618: 0x24842740  addiu       $a0, $a0, 0x2740 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF61Cu;
        goto label_1cf61c;
    }
    ctx->pc = 0x1CF614u;
    {
        const bool branch_taken_0x1cf614 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF614u;
        // 0x1cf618: 0x24842740  addiu       $a0, $a0, 0x2740 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf614) {
            ctx->pc = 0x1CF624u;
            goto label_1cf624;
        }
    }
    ctx->pc = 0x1CF61Cu;
label_1cf61c:
    // 0x1cf61c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1cf620:
    if (ctx->pc == 0x1CF620u) {
        ctx->pc = 0x1CF620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF61Cu;
        // 0x1cf620: 0xac870004  sw          $a3, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF624u;
        goto label_1cf624;
    }
    ctx->pc = 0x1CF61Cu;
    {
        const bool branch_taken_0x1cf61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF61Cu;
        // 0x1cf620: 0xac870004  sw          $a3, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf61c) {
            ctx->pc = 0x1CF62Cu;
            goto label_1cf62c;
        }
    }
    ctx->pc = 0x1CF624u;
label_1cf624:
    // 0x1cf624: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cf624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf628:
    // 0x1cf628: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x1cf628u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
label_1cf62c:
    // 0x1cf62c: 0x84a7021c  lh          $a3, 0x21C($a1)
    ctx->pc = 0x1cf62cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 540)));
label_1cf630:
    // 0x1cf630: 0x8c890004  lw          $t1, 0x4($a0)
    ctx->pc = 0x1cf630u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1cf634:
    // 0x1cf634: 0x127082a  slt         $at, $t1, $a3
    ctx->pc = 0x1cf634u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_1cf638:
    // 0x1cf638: 0xe1480a  movz        $t1, $a3, $at
    ctx->pc = 0x1cf638u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 7));
label_1cf63c:
    // 0x1cf63c: 0x9082a  slt         $at, $zero, $t1
    ctx->pc = 0x1cf63cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_1cf640:
    // 0x1cf640: 0x1480a  movz        $t1, $zero, $at
    ctx->pc = 0x1cf640u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_1cf644:
    // 0x1cf644: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1cf644u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1cf648:
    // 0x1cf648: 0x10e9000a  beq         $a3, $t1, . + 4 + (0xA << 2)
label_1cf64c:
    if (ctx->pc == 0x1CF64Cu) {
        ctx->pc = 0x1CF650u;
        goto label_1cf650;
    }
    ctx->pc = 0x1CF648u;
    {
        const bool branch_taken_0x1cf648 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        if (branch_taken_0x1cf648) {
            ctx->pc = 0x1CF674u;
            goto label_1cf674;
        }
    }
    ctx->pc = 0x1CF650u;
label_1cf650:
    // 0x1cf650: 0xe94023  subu        $t0, $a3, $t1
    ctx->pc = 0x1cf650u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_1cf654:
    // 0x1cf654: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1cf654u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1cf658:
    // 0x1cf658: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x1cf658u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_1cf65c:
    // 0x1cf65c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1cf65cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1cf660:
    // 0x1cf660: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x1cf660u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
label_1cf664:
    // 0x1cf664: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1cf664u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1cf668:
    // 0x1cf668: 0x7082a  slt         $at, $zero, $a3
    ctx->pc = 0x1cf668u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_1cf66c:
    // 0x1cf66c: 0x1380a  movz        $a3, $zero, $at
    ctx->pc = 0x1cf66cu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_1cf670:
    // 0x1cf670: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x1cf670u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
label_1cf674:
    // 0x1cf674: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1cf674u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1cf678:
    // 0x1cf678: 0x18e00003  blez        $a3, . + 4 + (0x3 << 2)
label_1cf67c:
    if (ctx->pc == 0x1CF67Cu) {
        ctx->pc = 0x1CF680u;
        goto label_1cf680;
    }
    ctx->pc = 0x1CF678u;
    {
        const bool branch_taken_0x1cf678 = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x1cf678) {
            ctx->pc = 0x1CF688u;
            goto label_1cf688;
        }
    }
    ctx->pc = 0x1CF680u;
label_1cf680:
    // 0x1cf680: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1cf680u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_1cf684:
    // 0x1cf684: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x1cf684u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
label_1cf688:
    // 0x1cf688: 0xac890008  sw          $t1, 0x8($a0)
    ctx->pc = 0x1cf688u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 9));
label_1cf68c:
    // 0x1cf68c: 0x84a70252  lh          $a3, 0x252($a1)
    ctx->pc = 0x1cf68cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 594)));
label_1cf690:
    // 0x1cf690: 0x28e10002  slti        $at, $a3, 0x2
    ctx->pc = 0x1cf690u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
label_1cf694:
    // 0x1cf694: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1cf698:
    if (ctx->pc == 0x1CF698u) {
        ctx->pc = 0x1CF69Cu;
        goto label_1cf69c;
    }
    ctx->pc = 0x1CF694u;
    {
        const bool branch_taken_0x1cf694 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf694) {
            ctx->pc = 0x1CF6A4u;
            goto label_1cf6a4;
        }
    }
    ctx->pc = 0x1CF69Cu;
label_1cf69c:
    // 0x1cf69c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1cf6a0:
    if (ctx->pc == 0x1CF6A0u) {
        ctx->pc = 0x1CF6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF69Cu;
        // 0x1cf6a0: 0xac870010  sw          $a3, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF6A4u;
        goto label_1cf6a4;
    }
    ctx->pc = 0x1CF69Cu;
    {
        const bool branch_taken_0x1cf69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF69Cu;
        // 0x1cf6a0: 0xac870010  sw          $a3, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf69c) {
            ctx->pc = 0x1CF6ACu;
            goto label_1cf6ac;
        }
    }
    ctx->pc = 0x1CF6A4u;
label_1cf6a4:
    // 0x1cf6a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cf6a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf6a8:
    // 0x1cf6a8: 0xac870010  sw          $a3, 0x10($a0)
    ctx->pc = 0x1cf6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
label_1cf6ac:
    // 0x1cf6ac: 0x84a70222  lh          $a3, 0x222($a1)
    ctx->pc = 0x1cf6acu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 546)));
label_1cf6b0:
    // 0x1cf6b0: 0x8c880010  lw          $t0, 0x10($a0)
    ctx->pc = 0x1cf6b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1cf6b4:
    // 0x1cf6b4: 0x107082a  slt         $at, $t0, $a3
    ctx->pc = 0x1cf6b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_1cf6b8:
    // 0x1cf6b8: 0xe1400a  movz        $t0, $a3, $at
    ctx->pc = 0x1cf6b8u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 7));
label_1cf6bc:
    // 0x1cf6bc: 0xac880014  sw          $t0, 0x14($a0)
    ctx->pc = 0x1cf6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 8));
label_1cf6c0:
    // 0x1cf6c0: 0x8c870014  lw          $a3, 0x14($a0)
    ctx->pc = 0x1cf6c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1cf6c4:
    // 0x1cf6c4: 0x7082a  slt         $at, $zero, $a3
    ctx->pc = 0x1cf6c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_1cf6c8:
    // 0x1cf6c8: 0x1380a  movz        $a3, $zero, $at
    ctx->pc = 0x1cf6c8u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_1cf6cc:
    // 0x1cf6cc: 0xac870014  sw          $a3, 0x14($a0)
    ctx->pc = 0x1cf6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 7));
label_1cf6d0:
    // 0x1cf6d0: 0x8c880014  lw          $t0, 0x14($a0)
    ctx->pc = 0x1cf6d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1cf6d4:
    // 0x1cf6d4: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x1cf6d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1cf6d8:
    // 0x1cf6d8: 0x15070005  bne         $t0, $a3, . + 4 + (0x5 << 2)
label_1cf6dc:
    if (ctx->pc == 0x1CF6DCu) {
        ctx->pc = 0x1CF6E0u;
        goto label_1cf6e0;
    }
    ctx->pc = 0x1CF6D8u;
    {
        const bool branch_taken_0x1cf6d8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        if (branch_taken_0x1cf6d8) {
            ctx->pc = 0x1CF6F0u;
            goto label_1cf6f0;
        }
    }
    ctx->pc = 0x1CF6E0u;
label_1cf6e0:
    // 0x1cf6e0: 0x8c870018  lw          $a3, 0x18($a0)
    ctx->pc = 0x1cf6e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_1cf6e4:
    // 0x1cf6e4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1cf6e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1cf6e8:
    // 0x1cf6e8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1cf6ec:
    if (ctx->pc == 0x1CF6ECu) {
        ctx->pc = 0x1CF6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF6E8u;
        // 0x1cf6ec: 0xac870018  sw          $a3, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF6F0u;
        goto label_1cf6f0;
    }
    ctx->pc = 0x1CF6E8u;
    {
        const bool branch_taken_0x1cf6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF6E8u;
        // 0x1cf6ec: 0xac870018  sw          $a3, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf6e8) {
            ctx->pc = 0x1CF6F4u;
            goto label_1cf6f4;
        }
    }
    ctx->pc = 0x1CF6F0u;
label_1cf6f0:
    // 0x1cf6f0: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1cf6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_1cf6f4:
    // 0x1cf6f4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1cf6f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1cf6f8:
    // 0x1cf6f8: 0x90274af6  lbu         $a3, 0x4AF6($at)
    ctx->pc = 0x1cf6f8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_1cf6fc:
    // 0x1cf6fc: 0x28e10029  slti        $at, $a3, 0x29
    ctx->pc = 0x1cf6fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)41) ? 1 : 0);
label_1cf700:
    // 0x1cf700: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
label_1cf704:
    if (ctx->pc == 0x1CF704u) {
        ctx->pc = 0x1CF708u;
        goto label_1cf708;
    }
    ctx->pc = 0x1CF700u;
    {
        const bool branch_taken_0x1cf700 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf700) {
            ctx->pc = 0x1CF748u;
            goto label_1cf748;
        }
    }
    ctx->pc = 0x1CF708u;
label_1cf708:
    // 0x1cf708: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1cf708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1cf70c:
    // 0x1cf70c: 0x8c274948  lw          $a3, 0x4948($at)
    ctx->pc = 0x1cf70cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18760)));
label_1cf710:
    // 0x1cf710: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
label_1cf714:
    if (ctx->pc == 0x1CF714u) {
        ctx->pc = 0x1CF718u;
        goto label_1cf718;
    }
    ctx->pc = 0x1CF710u;
    {
        const bool branch_taken_0x1cf710 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf710) {
            ctx->pc = 0x1CF748u;
            goto label_1cf748;
        }
    }
    ctx->pc = 0x1CF718u;
label_1cf718:
    // 0x1cf718: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1cf718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1cf71c:
    // 0x1cf71c: 0x90274998  lbu         $a3, 0x4998($at)
    ctx->pc = 0x1cf71cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18840)));
label_1cf720:
    // 0x1cf720: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
label_1cf724:
    if (ctx->pc == 0x1CF724u) {
        ctx->pc = 0x1CF728u;
        goto label_1cf728;
    }
    ctx->pc = 0x1CF720u;
    {
        const bool branch_taken_0x1cf720 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf720) {
            ctx->pc = 0x1CF748u;
            goto label_1cf748;
        }
    }
    ctx->pc = 0x1CF728u;
label_1cf728:
    // 0x1cf728: 0x8c880010  lw          $t0, 0x10($a0)
    ctx->pc = 0x1cf728u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1cf72c:
    // 0x1cf72c: 0x8c870014  lw          $a3, 0x14($a0)
    ctx->pc = 0x1cf72cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1cf730:
    // 0x1cf730: 0x15070005  bne         $t0, $a3, . + 4 + (0x5 << 2)
label_1cf734:
    if (ctx->pc == 0x1CF734u) {
        ctx->pc = 0x1CF738u;
        goto label_1cf738;
    }
    ctx->pc = 0x1CF730u;
    {
        const bool branch_taken_0x1cf730 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        if (branch_taken_0x1cf730) {
            ctx->pc = 0x1CF748u;
            goto label_1cf748;
        }
    }
    ctx->pc = 0x1CF738u;
label_1cf738:
    // 0x1cf738: 0x8c870038  lw          $a3, 0x38($a0)
    ctx->pc = 0x1cf738u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_1cf73c:
    // 0x1cf73c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1cf73cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1cf740:
    // 0x1cf740: 0x10000002  b           . + 4 + (0x2 << 2)
label_1cf744:
    if (ctx->pc == 0x1CF744u) {
        ctx->pc = 0x1CF744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF740u;
        // 0x1cf744: 0xac870038  sw          $a3, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF748u;
        goto label_1cf748;
    }
    ctx->pc = 0x1CF740u;
    {
        const bool branch_taken_0x1cf740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF740u;
        // 0x1cf744: 0xac870038  sw          $a3, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf740) {
            ctx->pc = 0x1CF74Cu;
            goto label_1cf74c;
        }
    }
    ctx->pc = 0x1CF748u;
label_1cf748:
    // 0x1cf748: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x1cf748u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
label_1cf74c:
    // 0x1cf74c: 0x84a70250  lh          $a3, 0x250($a1)
    ctx->pc = 0x1cf74cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 592)));
label_1cf750:
    // 0x1cf750: 0x28e10064  slti        $at, $a3, 0x64
    ctx->pc = 0x1cf750u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)100) ? 1 : 0);
label_1cf754:
    // 0x1cf754: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1cf758:
    if (ctx->pc == 0x1CF758u) {
        ctx->pc = 0x1CF75Cu;
        goto label_1cf75c;
    }
    ctx->pc = 0x1CF754u;
    {
        const bool branch_taken_0x1cf754 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf754) {
            ctx->pc = 0x1CF760u;
            goto label_1cf760;
        }
    }
    ctx->pc = 0x1CF75Cu;
label_1cf75c:
    // 0x1cf75c: 0x24070063  addiu       $a3, $zero, 0x63
    ctx->pc = 0x1cf75cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_1cf760:
    // 0x1cf760: 0xac87001c  sw          $a3, 0x1C($a0)
    ctx->pc = 0x1cf760u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 7));
label_1cf764:
    // 0x1cf764: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1cf764u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf768:
    // 0x1cf768: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1cf768u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf76c:
    // 0x1cf76c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1cf76cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf770:
    // 0x1cf770: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cf770u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cf774:
    // 0x1cf774: 0x15600003  bnez        $t3, . + 4 + (0x3 << 2)
label_1cf778:
    if (ctx->pc == 0x1CF778u) {
        ctx->pc = 0x1CF77Cu;
        goto label_1cf77c;
    }
    ctx->pc = 0x1CF774u;
    {
        const bool branch_taken_0x1cf774 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf774) {
            ctx->pc = 0x1CF784u;
            goto label_1cf784;
        }
    }
    ctx->pc = 0x1CF77Cu;
label_1cf77c:
    // 0x1cf77c: 0x10000009  b           . + 4 + (0x9 << 2)
label_1cf780:
    if (ctx->pc == 0x1CF780u) {
        ctx->pc = 0x1CF780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF77Cu;
        // 0x1cf780: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF784u;
        goto label_1cf784;
    }
    ctx->pc = 0x1CF77Cu;
    {
        const bool branch_taken_0x1cf77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF77Cu;
        // 0x1cf780: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf77c) {
            ctx->pc = 0x1CF7A4u;
            goto label_1cf7a4;
        }
    }
    ctx->pc = 0x1CF784u;
label_1cf784:
    // 0x1cf784: 0x0  nop
    ctx->pc = 0x1cf784u;
    // NOP
label_1cf788:
    // 0x1cf788: 0x156a0003  bne         $t3, $t2, . + 4 + (0x3 << 2)
label_1cf78c:
    if (ctx->pc == 0x1CF78Cu) {
        ctx->pc = 0x1CF790u;
        goto label_1cf790;
    }
    ctx->pc = 0x1CF788u;
    {
        const bool branch_taken_0x1cf788 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 10));
        if (branch_taken_0x1cf788) {
            ctx->pc = 0x1CF798u;
            goto label_1cf798;
        }
    }
    ctx->pc = 0x1CF790u;
label_1cf790:
    // 0x1cf790: 0x10000004  b           . + 4 + (0x4 << 2)
label_1cf794:
    if (ctx->pc == 0x1CF794u) {
        ctx->pc = 0x1CF794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF790u;
        // 0x1cf794: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF798u;
        goto label_1cf798;
    }
    ctx->pc = 0x1CF790u;
    {
        const bool branch_taken_0x1cf790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF790u;
        // 0x1cf794: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf790) {
            ctx->pc = 0x1CF7A4u;
            goto label_1cf7a4;
        }
    }
    ctx->pc = 0x1CF798u;
label_1cf798:
    // 0x1cf798: 0x15690002  bne         $t3, $t1, . + 4 + (0x2 << 2)
label_1cf79c:
    if (ctx->pc == 0x1CF79Cu) {
        ctx->pc = 0x1CF7A0u;
        goto label_1cf7a0;
    }
    ctx->pc = 0x1CF798u;
    {
        const bool branch_taken_0x1cf798 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 9));
        if (branch_taken_0x1cf798) {
            ctx->pc = 0x1CF7A4u;
            goto label_1cf7a4;
        }
    }
    ctx->pc = 0x1CF7A0u;
label_1cf7a0:
    // 0x1cf7a0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1cf7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1cf7a4:
    // 0x1cf7a4: 0x0  nop
    ctx->pc = 0x1cf7a4u;
    // NOP
label_1cf7a8:
    // 0x1cf7a8: 0x8cc70198  lw          $a3, 0x198($a2)
    ctx->pc = 0x1cf7a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 408)));
label_1cf7ac:
    // 0x1cf7ac: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x1cf7acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
label_1cf7b0:
    // 0x1cf7b0: 0x10e00023  beqz        $a3, . + 4 + (0x23 << 2)
label_1cf7b4:
    if (ctx->pc == 0x1CF7B4u) {
        ctx->pc = 0x1CF7B8u;
        goto label_1cf7b8;
    }
    ctx->pc = 0x1CF7B0u;
    {
        const bool branch_taken_0x1cf7b0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf7b0) {
            ctx->pc = 0x1CF840u;
            goto label_1cf840;
        }
    }
    ctx->pc = 0x1CF7B8u;
label_1cf7b8:
    // 0x1cf7b8: 0xac3821  addu        $a3, $a1, $t4
    ctx->pc = 0x1cf7b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
label_1cf7bc:
    // 0x1cf7bc: 0x84ed0202  lh          $t5, 0x202($a3)
    ctx->pc = 0x1cf7bcu;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 514)));
label_1cf7c0:
    // 0x1cf7c0: 0x29a10002  slti        $at, $t5, 0x2
    ctx->pc = 0x1cf7c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)2) ? 1 : 0);
label_1cf7c4:
    // 0x1cf7c4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1cf7c8:
    if (ctx->pc == 0x1CF7C8u) {
        ctx->pc = 0x1CF7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF7C4u;
        // 0x1cf7c8: 0x24e80200  addiu       $t0, $a3, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF7CCu;
        goto label_1cf7cc;
    }
    ctx->pc = 0x1CF7C4u;
    {
        const bool branch_taken_0x1cf7c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF7C4u;
        // 0x1cf7c8: 0x24e80200  addiu       $t0, $a3, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf7c4) {
            ctx->pc = 0x1CF7D4u;
            goto label_1cf7d4;
        }
    }
    ctx->pc = 0x1CF7CCu;
label_1cf7cc:
    // 0x1cf7cc: 0x10000003  b           . + 4 + (0x3 << 2)
label_1cf7d0:
    if (ctx->pc == 0x1CF7D0u) {
        ctx->pc = 0x1CF7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF7CCu;
        // 0x1cf7d0: 0x850e0000  lh          $t6, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF7D4u;
        goto label_1cf7d4;
    }
    ctx->pc = 0x1CF7CCu;
    {
        const bool branch_taken_0x1cf7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF7CCu;
        // 0x1cf7d0: 0x850e0000  lh          $t6, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf7cc) {
            ctx->pc = 0x1CF7DCu;
            goto label_1cf7dc;
        }
    }
    ctx->pc = 0x1CF7D4u;
label_1cf7d4:
    // 0x1cf7d4: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x1cf7d4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf7d8:
    // 0x1cf7d8: 0x850e0000  lh          $t6, 0x0($t0)
    ctx->pc = 0x1cf7d8u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_1cf7dc:
    // 0x1cf7dc: 0x1ae082a  slt         $at, $t5, $t6
    ctx->pc = 0x1cf7dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
label_1cf7e0:
    // 0x1cf7e0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1cf7e4:
    if (ctx->pc == 0x1CF7E4u) {
        ctx->pc = 0x1CF7E8u;
        goto label_1cf7e8;
    }
    ctx->pc = 0x1CF7E0u;
    {
        const bool branch_taken_0x1cf7e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf7e0) {
            ctx->pc = 0x1CF7ECu;
            goto label_1cf7ec;
        }
    }
    ctx->pc = 0x1CF7E8u;
label_1cf7e8:
    // 0x1cf7e8: 0x1a0702d  daddu       $t6, $t5, $zero
    ctx->pc = 0x1cf7e8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_1cf7ec:
    // 0x1cf7ec: 0xe082a  slt         $at, $zero, $t6
    ctx->pc = 0x1cf7ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
label_1cf7f0:
    // 0x1cf7f0: 0x1700a  movz        $t6, $zero, $at
    ctx->pc = 0x1cf7f0u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 0));
label_1cf7f4:
    // 0x1cf7f4: 0xe3900  sll         $a3, $t6, 4
    ctx->pc = 0x1cf7f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
label_1cf7f8:
    // 0x1cf7f8: 0x8c7821  addu        $t7, $a0, $t4
    ctx->pc = 0x1cf7f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
label_1cf7fc:
    // 0x1cf7fc: 0xee4023  subu        $t0, $a3, $t6
    ctx->pc = 0x1cf7fcu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 14)));
label_1cf800:
    // 0x1cf800: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x1cf800u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1cf804:
    // 0x1cf804: 0xe3840  sll         $a3, $t6, 1
    ctx->pc = 0x1cf804u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
label_1cf808:
    // 0x1cf808: 0x10d001a  div         $zero, $t0, $t5
    ctx->pc = 0x1cf808u;
    { int32_t divisor = GPR_S32(ctx, 13);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1cf80c:
    // 0x1cf80c: 0xee3821  addu        $a3, $a3, $t6
    ctx->pc = 0x1cf80cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 14)));
label_1cf810:
    // 0x1cf810: 0xed082a  slt         $at, $a3, $t5
    ctx->pc = 0x1cf810u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
label_1cf814:
    // 0x1cf814: 0x4012  mflo        $t0
    ctx->pc = 0x1cf814u;
    SET_GPR_U64(ctx, 8, ctx->lo);
label_1cf818:
    // 0x1cf818: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_1cf81c:
    if (ctx->pc == 0x1CF81Cu) {
        ctx->pc = 0x1CF81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF818u;
        // 0x1cf81c: 0xade80020  sw          $t0, 0x20($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 32), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF820u;
        goto label_1cf820;
    }
    ctx->pc = 0x1CF818u;
    {
        const bool branch_taken_0x1cf818 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF818u;
        // 0x1cf81c: 0xade80020  sw          $t0, 0x20($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 32), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf818) {
            ctx->pc = 0x1CF830u;
            goto label_1cf830;
        }
    }
    ctx->pc = 0x1CF820u;
label_1cf820:
    // 0x1cf820: 0x8de7002c  lw          $a3, 0x2C($t7)
    ctx->pc = 0x1cf820u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 44)));
label_1cf824:
    // 0x1cf824: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1cf824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_1cf828:
    // 0x1cf828: 0x10000008  b           . + 4 + (0x8 << 2)
label_1cf82c:
    if (ctx->pc == 0x1CF82Cu) {
        ctx->pc = 0x1CF82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF828u;
        // 0x1cf82c: 0xade7002c  sw          $a3, 0x2C($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 44), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF830u;
        goto label_1cf830;
    }
    ctx->pc = 0x1CF828u;
    {
        const bool branch_taken_0x1cf828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF828u;
        // 0x1cf82c: 0xade7002c  sw          $a3, 0x2C($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 44), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf828) {
            ctx->pc = 0x1CF84Cu;
            goto label_1cf84c;
        }
    }
    ctx->pc = 0x1CF830u;
label_1cf830:
    // 0x1cf830: 0x8de7002c  lw          $a3, 0x2C($t7)
    ctx->pc = 0x1cf830u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 44)));
label_1cf834:
    // 0x1cf834: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1cf834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1cf838:
    // 0x1cf838: 0x10000004  b           . + 4 + (0x4 << 2)
label_1cf83c:
    if (ctx->pc == 0x1CF83Cu) {
        ctx->pc = 0x1CF83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF838u;
        // 0x1cf83c: 0xade7002c  sw          $a3, 0x2C($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 44), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF840u;
        goto label_1cf840;
    }
    ctx->pc = 0x1CF838u;
    {
        const bool branch_taken_0x1cf838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF838u;
        // 0x1cf83c: 0xade7002c  sw          $a3, 0x2C($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 44), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf838) {
            ctx->pc = 0x1CF84Cu;
            goto label_1cf84c;
        }
    }
    ctx->pc = 0x1CF840u;
label_1cf840:
    // 0x1cf840: 0x8c3821  addu        $a3, $a0, $t4
    ctx->pc = 0x1cf840u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
label_1cf844:
    // 0x1cf844: 0xace00020  sw          $zero, 0x20($a3)
    ctx->pc = 0x1cf844u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 0));
label_1cf848:
    // 0x1cf848: 0xace0002c  sw          $zero, 0x2C($a3)
    ctx->pc = 0x1cf848u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 0));
label_1cf84c:
    // 0x1cf84c: 0x0  nop
    ctx->pc = 0x1cf84cu;
    // NOP
label_1cf850:
    // 0x1cf850: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1cf850u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_1cf854:
    // 0x1cf854: 0x29670003  slti        $a3, $t3, 0x3
    ctx->pc = 0x1cf854u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)3) ? 1 : 0);
label_1cf858:
    // 0x1cf858: 0x14e0ffc6  bnez        $a3, . + 4 + (-0x3A << 2)
label_1cf85c:
    if (ctx->pc == 0x1CF85Cu) {
        ctx->pc = 0x1CF85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF858u;
        // 0x1cf85c: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF860u;
        goto label_1cf860;
    }
    ctx->pc = 0x1CF858u;
    {
        const bool branch_taken_0x1cf858 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF858u;
        // 0x1cf85c: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf858) {
            ctx->pc = 0x1CF774u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf774;
        }
    }
    ctx->pc = 0x1CF860u;
label_1cf860:
    // 0x1cf860: 0x8cc60198  lw          $a2, 0x198($a2)
    ctx->pc = 0x1cf860u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 408)));
label_1cf864:
    // 0x1cf864: 0x30c30004  andi        $v1, $a2, 0x4
    ctx->pc = 0x1cf864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
label_1cf868:
    // 0x1cf868: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
label_1cf86c:
    if (ctx->pc == 0x1CF86Cu) {
        ctx->pc = 0x1CF870u;
        goto label_1cf870;
    }
    ctx->pc = 0x1CF868u;
    {
        const bool branch_taken_0x1cf868 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf868) {
            ctx->pc = 0x1CF900u;
            goto label_1cf900;
        }
    }
    ctx->pc = 0x1CF870u;
label_1cf870:
    // 0x1cf870: 0x30c32000  andi        $v1, $a2, 0x2000
    ctx->pc = 0x1cf870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8192);
label_1cf874:
    // 0x1cf874: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_1cf878:
    if (ctx->pc == 0x1CF878u) {
        ctx->pc = 0x1CF87Cu;
        goto label_1cf87c;
    }
    ctx->pc = 0x1CF874u;
    {
        const bool branch_taken_0x1cf874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf874) {
            ctx->pc = 0x1CF900u;
            goto label_1cf900;
        }
    }
    ctx->pc = 0x1CF87Cu;
label_1cf87c:
    // 0x1cf87c: 0x84a6027e  lh          $a2, 0x27E($a1)
    ctx->pc = 0x1cf87cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 638)));
label_1cf880:
    // 0x1cf880: 0x28c10002  slti        $at, $a2, 0x2
    ctx->pc = 0x1cf880u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_1cf884:
    // 0x1cf884: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1cf888:
    if (ctx->pc == 0x1CF888u) {
        ctx->pc = 0x1CF888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF884u;
        // 0x1cf888: 0x24a3027c  addiu       $v1, $a1, 0x27C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 636));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF88Cu;
        goto label_1cf88c;
    }
    ctx->pc = 0x1CF884u;
    {
        const bool branch_taken_0x1cf884 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF884u;
        // 0x1cf888: 0x24a3027c  addiu       $v1, $a1, 0x27C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 636));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf884) {
            ctx->pc = 0x1CF894u;
            goto label_1cf894;
        }
    }
    ctx->pc = 0x1CF88Cu;
label_1cf88c:
    // 0x1cf88c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1cf890:
    if (ctx->pc == 0x1CF890u) {
        ctx->pc = 0x1CF890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF88Cu;
        // 0x1cf890: 0x84670000  lh          $a3, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF894u;
        goto label_1cf894;
    }
    ctx->pc = 0x1CF88Cu;
    {
        const bool branch_taken_0x1cf88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF88Cu;
        // 0x1cf890: 0x84670000  lh          $a3, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf88c) {
            ctx->pc = 0x1CF89Cu;
            goto label_1cf89c;
        }
    }
    ctx->pc = 0x1CF894u;
label_1cf894:
    // 0x1cf894: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cf894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf898:
    // 0x1cf898: 0x84670000  lh          $a3, 0x0($v1)
    ctx->pc = 0x1cf898u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1cf89c:
    // 0x1cf89c: 0xc7082a  slt         $at, $a2, $a3
    ctx->pc = 0x1cf89cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_1cf8a0:
    // 0x1cf8a0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1cf8a4:
    if (ctx->pc == 0x1CF8A4u) {
        ctx->pc = 0x1CF8A8u;
        goto label_1cf8a8;
    }
    ctx->pc = 0x1CF8A0u;
    {
        const bool branch_taken_0x1cf8a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf8a0) {
            ctx->pc = 0x1CF8ACu;
            goto label_1cf8ac;
        }
    }
    ctx->pc = 0x1CF8A8u;
label_1cf8a8:
    // 0x1cf8a8: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1cf8a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1cf8ac:
    // 0x1cf8ac: 0x7082a  slt         $at, $zero, $a3
    ctx->pc = 0x1cf8acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_1cf8b0:
    // 0x1cf8b0: 0x1380a  movz        $a3, $zero, $at
    ctx->pc = 0x1cf8b0u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_1cf8b4:
    // 0x1cf8b4: 0x72900  sll         $a1, $a3, 4
    ctx->pc = 0x1cf8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1cf8b8:
    // 0x1cf8b8: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x1cf8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_1cf8bc:
    // 0x1cf8bc: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x1cf8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1cf8c0:
    // 0x1cf8c0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1cf8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1cf8c4:
    // 0x1cf8c4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1cf8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1cf8c8:
    // 0x1cf8c8: 0x66082a  slt         $at, $v1, $a2
    ctx->pc = 0x1cf8c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1cf8cc:
    // 0x1cf8cc: 0xa6001a  div         $zero, $a1, $a2
    ctx->pc = 0x1cf8ccu;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1cf8d0:
    // 0x1cf8d0: 0x0  nop
    ctx->pc = 0x1cf8d0u;
    // NOP
label_1cf8d4:
    // 0x1cf8d4: 0x0  nop
    ctx->pc = 0x1cf8d4u;
    // NOP
label_1cf8d8:
    // 0x1cf8d8: 0x2812  mflo        $a1
    ctx->pc = 0x1cf8d8u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_1cf8dc:
    // 0x1cf8dc: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_1cf8e0:
    if (ctx->pc == 0x1CF8E0u) {
        ctx->pc = 0x1CF8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF8DCu;
        // 0x1cf8e0: 0xac850020  sw          $a1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF8E4u;
        goto label_1cf8e4;
    }
    ctx->pc = 0x1CF8DCu;
    {
        const bool branch_taken_0x1cf8dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF8DCu;
        // 0x1cf8e0: 0xac850020  sw          $a1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf8dc) {
            ctx->pc = 0x1CF8F4u;
            goto label_1cf8f4;
        }
    }
    ctx->pc = 0x1CF8E4u;
label_1cf8e4:
    // 0x1cf8e4: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x1cf8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_1cf8e8:
    // 0x1cf8e8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1cf8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_1cf8ec:
    // 0x1cf8ec: 0x10000004  b           . + 4 + (0x4 << 2)
label_1cf8f0:
    if (ctx->pc == 0x1CF8F0u) {
        ctx->pc = 0x1CF8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF8ECu;
        // 0x1cf8f0: 0xac83002c  sw          $v1, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF8F4u;
        goto label_1cf8f4;
    }
    ctx->pc = 0x1CF8ECu;
    {
        const bool branch_taken_0x1cf8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF8ECu;
        // 0x1cf8f0: 0xac83002c  sw          $v1, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf8ec) {
            ctx->pc = 0x1CF900u;
            goto label_1cf900;
        }
    }
    ctx->pc = 0x1CF8F4u;
label_1cf8f4:
    // 0x1cf8f4: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x1cf8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_1cf8f8:
    // 0x1cf8f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cf8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1cf8fc:
    // 0x1cf8fc: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x1cf8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
label_1cf900:
    // 0x1cf900: 0x3e00008  jr          $ra
label_1cf904:
    if (ctx->pc == 0x1CF904u) {
        ctx->pc = 0x1CF908u;
        goto label_1cf908;
    }
    ctx->pc = 0x1CF900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF908u;
label_1cf908:
    // 0x1cf908: 0x0  nop
    ctx->pc = 0x1cf908u;
    // NOP
label_1cf90c:
    // 0x1cf90c: 0x0  nop
    ctx->pc = 0x1cf90cu;
    // NOP
label_1cf910:
    // 0x1cf910: 0x3e00008  jr          $ra
label_1cf914:
    if (ctx->pc == 0x1CF914u) {
        ctx->pc = 0x1CF918u;
        goto label_1cf918;
    }
    ctx->pc = 0x1CF910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF918u;
label_1cf918:
    // 0x1cf918: 0x0  nop
    ctx->pc = 0x1cf918u;
    // NOP
label_1cf91c:
    // 0x1cf91c: 0x0  nop
    ctx->pc = 0x1cf91cu;
    // NOP
label_1cf920:
    // 0x1cf920: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cf920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1cf924:
    // 0x1cf924: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cf924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1cf928:
    // 0x1cf928: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cf928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1cf92c:
    // 0x1cf92c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_1cf930:
    if (ctx->pc == 0x1CF930u) {
        ctx->pc = 0x1CF930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF92Cu;
        // 0x1cf930: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF934u;
        goto label_1cf934;
    }
    ctx->pc = 0x1CF92Cu;
    {
        const bool branch_taken_0x1cf92c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF92Cu;
        // 0x1cf930: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf92c) {
            ctx->pc = 0x1CF96Cu;
            goto label_1cf96c;
        }
    }
    ctx->pc = 0x1CF934u;
label_1cf934:
    // 0x1cf934: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cf934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf938:
    // 0x1cf938: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1cf938u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf93c:
    // 0x1cf93c: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1cf93cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1cf940:
    // 0x1cf940: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cf940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cf944:
    // 0x1cf944: 0x24427a80  addiu       $v0, $v0, 0x7A80
    ctx->pc = 0x1cf944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31360));
label_1cf948:
    // 0x1cf948: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cf948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf94c:
    // 0x1cf94c: 0xc073e68  jal         func_1CF9A0
label_1cf950:
    if (ctx->pc == 0x1CF950u) {
        ctx->pc = 0x1CF950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF94Cu;
        // 0x1cf950: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF954u;
        goto label_1cf954;
    }
    ctx->pc = 0x1CF94Cu;
    SET_GPR_U32(ctx, 31, 0x1CF954u);
    ctx->pc = 0x1CF950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF94Cu;
    // 0x1cf950: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF9A0u;
    goto label_1cf9a0;
    ctx->pc = 0x1CF954u;
label_1cf954:
    // 0x1cf954: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cf954u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1cf958:
    // 0x1cf958: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1cf958u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1cf95c:
    // 0x1cf95c: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_1cf960:
    if (ctx->pc == 0x1CF960u) {
        ctx->pc = 0x1CF960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF95Cu;
        // 0x1cf960: 0x26312780  addiu       $s1, $s1, 0x2780 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 10112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF964u;
        goto label_1cf964;
    }
    ctx->pc = 0x1CF95Cu;
    {
        const bool branch_taken_0x1cf95c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF95Cu;
        // 0x1cf960: 0x26312780  addiu       $s1, $s1, 0x2780 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 10112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf95c) {
            ctx->pc = 0x1CF93Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf93c;
        }
    }
    ctx->pc = 0x1CF964u;
label_1cf964:
    // 0x1cf964: 0x10000007  b           . + 4 + (0x7 << 2)
label_1cf968:
    if (ctx->pc == 0x1CF968u) {
        ctx->pc = 0x1CF968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF964u;
        // 0x1cf968: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF96Cu;
        goto label_1cf96c;
    }
    ctx->pc = 0x1CF964u;
    {
        const bool branch_taken_0x1cf964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF964u;
        // 0x1cf968: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf964) {
            ctx->pc = 0x1CF984u;
            goto label_1cf984;
        }
    }
    ctx->pc = 0x1CF96Cu;
label_1cf96c:
    // 0x1cf96c: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x1cf96cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
label_1cf970:
    // 0x1cf970: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cf970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf974:
    // 0x1cf974: 0x24847a80  addiu       $a0, $a0, 0x7A80
    ctx->pc = 0x1cf974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31360));
label_1cf978:
    // 0x1cf978: 0xc073e68  jal         func_1CF9A0
label_1cf97c:
    if (ctx->pc == 0x1CF97Cu) {
        ctx->pc = 0x1CF97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF978u;
        // 0x1cf97c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF980u;
        goto label_1cf980;
    }
    ctx->pc = 0x1CF978u;
    SET_GPR_U32(ctx, 31, 0x1CF980u);
    ctx->pc = 0x1CF97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF978u;
    // 0x1cf97c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF9A0u;
    goto label_1cf9a0;
    ctx->pc = 0x1CF980u;
label_1cf980:
    // 0x1cf980: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cf980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1cf984:
    // 0x1cf984: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cf984u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cf988:
    // 0x1cf988: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cf988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1cf98c:
    // 0x1cf98c: 0x3e00008  jr          $ra
label_1cf990:
    if (ctx->pc == 0x1CF990u) {
        ctx->pc = 0x1CF990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF98Cu;
        // 0x1cf990: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF994u;
        goto label_1cf994;
    }
    ctx->pc = 0x1CF98Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF98Cu;
        // 0x1cf990: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF98Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF994u;
label_1cf994:
    // 0x1cf994: 0x0  nop
    ctx->pc = 0x1cf994u;
    // NOP
label_1cf998:
    // 0x1cf998: 0x0  nop
    ctx->pc = 0x1cf998u;
    // NOP
label_1cf99c:
    // 0x1cf99c: 0x0  nop
    ctx->pc = 0x1cf99cu;
    // NOP
label_1cf9a0:
    // 0x1cf9a0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x1cf9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_1cf9a4:
    // 0x1cf9a4: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1cf9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1cf9a8:
    // 0x1cf9a8: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1cf9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_1cf9ac:
    // 0x1cf9ac: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1cf9acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1cf9b0:
    // 0x1cf9b0: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x1cf9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
label_1cf9b4:
    // 0x1cf9b4: 0x244203c0  addiu       $v0, $v0, 0x3C0
    ctx->pc = 0x1cf9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 960));
label_1cf9b8:
    // 0x1cf9b8: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x1cf9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_1cf9bc:
    // 0x1cf9bc: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x1cf9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_1cf9c0:
    // 0x1cf9c0: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1cf9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_1cf9c4:
    // 0x1cf9c4: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1cf9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_1cf9c8:
    // 0x1cf9c8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1cf9c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cf9cc:
    // 0x1cf9cc: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1cf9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_1cf9d0:
    // 0x1cf9d0: 0x751823  subu        $v1, $v1, $s5
    ctx->pc = 0x1cf9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_1cf9d4:
    // 0x1cf9d4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1cf9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_1cf9d8:
    // 0x1cf9d8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1cf9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1cf9dc:
    // 0x1cf9dc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1cf9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1cf9e0:
    // 0x1cf9e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cf9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cf9e4:
    // 0x1cf9e4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1cf9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1cf9e8:
    // 0x1cf9e8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1cf9e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1cf9ec:
    // 0x1cf9ec: 0xafa4016c  sw          $a0, 0x16C($sp)
    ctx->pc = 0x1cf9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 4));
label_1cf9f0:
    // 0x1cf9f0: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x1cf9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_1cf9f4:
    // 0x1cf9f4: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x1cf9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
label_1cf9f8:
    // 0x1cf9f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cf9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cf9fc:
    // 0x1cf9fc: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x1cf9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
label_1cfa00:
    // 0x1cfa00: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1cfa00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1cfa04:
    // 0x1cfa04: 0x90420242  lbu         $v0, 0x242($v0)
    ctx->pc = 0x1cfa04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 578)));
label_1cfa08:
    // 0x1cfa08: 0xac822740  sw          $v0, 0x2740($a0)
    ctx->pc = 0x1cfa08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10048), GPR_U32(ctx, 2));
label_1cfa0c:
    // 0x1cfa0c: 0xac802744  sw          $zero, 0x2744($a0)
    ctx->pc = 0x1cfa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10052), GPR_U32(ctx, 0));
label_1cfa10:
    // 0x1cfa10: 0xac802748  sw          $zero, 0x2748($a0)
    ctx->pc = 0x1cfa10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10056), GPR_U32(ctx, 0));
label_1cfa14:
    // 0x1cfa14: 0xac80274c  sw          $zero, 0x274C($a0)
    ctx->pc = 0x1cfa14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10060), GPR_U32(ctx, 0));
label_1cfa18:
    // 0x1cfa18: 0xac802750  sw          $zero, 0x2750($a0)
    ctx->pc = 0x1cfa18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10064), GPR_U32(ctx, 0));
label_1cfa1c:
    // 0x1cfa1c: 0xac802754  sw          $zero, 0x2754($a0)
    ctx->pc = 0x1cfa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10068), GPR_U32(ctx, 0));
label_1cfa20:
    // 0x1cfa20: 0xac802758  sw          $zero, 0x2758($a0)
    ctx->pc = 0x1cfa20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10072), GPR_U32(ctx, 0));
label_1cfa24:
    // 0x1cfa24: 0xac80275c  sw          $zero, 0x275C($a0)
    ctx->pc = 0x1cfa24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10076), GPR_U32(ctx, 0));
label_1cfa28:
    // 0x1cfa28: 0xac802760  sw          $zero, 0x2760($a0)
    ctx->pc = 0x1cfa28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10080), GPR_U32(ctx, 0));
label_1cfa2c:
    // 0x1cfa2c: 0xac80276c  sw          $zero, 0x276C($a0)
    ctx->pc = 0x1cfa2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10092), GPR_U32(ctx, 0));
label_1cfa30:
    // 0x1cfa30: 0xac802764  sw          $zero, 0x2764($a0)
    ctx->pc = 0x1cfa30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10084), GPR_U32(ctx, 0));
label_1cfa34:
    // 0x1cfa34: 0xac802770  sw          $zero, 0x2770($a0)
    ctx->pc = 0x1cfa34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10096), GPR_U32(ctx, 0));
label_1cfa38:
    // 0x1cfa38: 0xac802768  sw          $zero, 0x2768($a0)
    ctx->pc = 0x1cfa38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10088), GPR_U32(ctx, 0));
label_1cfa3c:
    // 0x1cfa3c: 0xac802774  sw          $zero, 0x2774($a0)
    ctx->pc = 0x1cfa3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10100), GPR_U32(ctx, 0));
label_1cfa40:
    // 0x1cfa40: 0xac802778  sw          $zero, 0x2778($a0)
    ctx->pc = 0x1cfa40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10104), GPR_U32(ctx, 0));
label_1cfa44:
    // 0x1cfa44: 0x8fa3016c  lw          $v1, 0x16C($sp)
    ctx->pc = 0x1cfa44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_1cfa48:
    // 0x1cfa48: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1cfa48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_1cfa4c:
    // 0x1cfa4c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1cfa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cfa50:
    // 0x1cfa50: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x1cfa50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_1cfa54:
    // 0x1cfa54: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1cfa54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1cfa58:
    // 0x1cfa58: 0xc05e234  jal         func_1788D0
label_1cfa5c:
    if (ctx->pc == 0x1CFA5Cu) {
        ctx->pc = 0x1CFA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFA58u;
        // 0x1cfa5c: 0x24050139  addiu       $a1, $zero, 0x139 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 313));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFA60u;
        goto label_1cfa60;
    }
    ctx->pc = 0x1CFA58u;
    SET_GPR_U32(ctx, 31, 0x1CFA60u);
    ctx->pc = 0x1CFA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFA58u;
    // 0x1cfa5c: 0x24050139  addiu       $a1, $zero, 0x139 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 313));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1CFA58u, 0x1CFA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFA60u;
label_1cfa60:
    // 0x1cfa60: 0xc070834  jal         func_1C20D0
label_1cfa64:
    if (ctx->pc == 0x1CFA64u) {
        ctx->pc = 0x1CFA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFA60u;
        // 0x1cfa64: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFA68u;
        goto label_1cfa68;
    }
    ctx->pc = 0x1CFA60u;
    SET_GPR_U32(ctx, 31, 0x1CFA68u);
    ctx->pc = 0x1CFA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFA60u;
    // 0x1cfa64: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1CFA68u;
label_1cfa68:
    // 0x1cfa68: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1cfa68u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cfa6c:
    // 0x1cfa6c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1cfa6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cfa70:
    // 0x1cfa70: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1cfa70u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cfa74:
    // 0x1cfa74: 0x0  nop
    ctx->pc = 0x1cfa74u;
    // NOP
label_1cfa78:
    // 0x1cfa78: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1cfa78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1cfa7c:
    // 0x1cfa7c: 0x2e410002  sltiu       $at, $s2, 0x2
    ctx->pc = 0x1cfa7cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1cfa80:
    // 0x1cfa80: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1cfa80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_1cfa84:
    // 0x1cfa84: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_1cfa88:
    if (ctx->pc == 0x1CFA88u) {
        ctx->pc = 0x1CFA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFA84u;
        // 0x1cfa88: 0x24530010  addiu       $s3, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFA8Cu;
        goto label_1cfa8c;
    }
    ctx->pc = 0x1CFA84u;
    {
        const bool branch_taken_0x1cfa84 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFA84u;
        // 0x1cfa88: 0x24530010  addiu       $s3, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfa84) {
            ctx->pc = 0x1CFA98u;
            goto label_1cfa98;
        }
    }
    ctx->pc = 0x1CFA8Cu;
label_1cfa8c:
    // 0x1cfa8c: 0x2a410003  slti        $at, $s2, 0x3
    ctx->pc = 0x1cfa8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
label_1cfa90:
    // 0x1cfa90: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
label_1cfa94:
    if (ctx->pc == 0x1CFA94u) {
        ctx->pc = 0x1CFA98u;
        goto label_1cfa98;
    }
    ctx->pc = 0x1CFA90u;
    {
        const bool branch_taken_0x1cfa90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfa90) {
            ctx->pc = 0x1CFAD8u;
            goto label_1cfad8;
        }
    }
    ctx->pc = 0x1CFA98u;
label_1cfa98:
    // 0x1cfa98: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
label_1cfa9c:
    if (ctx->pc == 0x1CFA9Cu) {
        ctx->pc = 0x1CFA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFA98u;
        // 0x1cfa9c: 0x1510c0  sll         $v0, $s5, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFAA0u;
        goto label_1cfaa0;
    }
    ctx->pc = 0x1CFA98u;
    {
        const bool branch_taken_0x1cfa98 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFA98u;
        // 0x1cfa9c: 0x1510c0  sll         $v0, $s5, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfa98) {
            ctx->pc = 0x1CFAB8u;
            goto label_1cfab8;
        }
    }
    ctx->pc = 0x1CFAA0u;
label_1cfaa0:
    // 0x1cfaa0: 0x2410002c  addiu       $s0, $zero, 0x2C
    ctx->pc = 0x1cfaa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_1cfaa4:
    // 0x1cfaa4: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x1cfaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1cfaa8:
    // 0x1cfaa8: 0x64170006  daddiu      $s7, $zero, 0x6
    ctx->pc = 0x1cfaa8u;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)6);
label_1cfaac:
    // 0x1cfaac: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1cfaacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1cfab0:
    // 0x1cfab0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1cfab4:
    if (ctx->pc == 0x1CFAB4u) {
        ctx->pc = 0x1CFAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFAB0u;
        // 0x1cfab4: 0x245100b9  addiu       $s1, $v0, 0xB9 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 185));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFAB8u;
        goto label_1cfab8;
    }
    ctx->pc = 0x1CFAB0u;
    {
        const bool branch_taken_0x1cfab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFAB0u;
        // 0x1cfab4: 0x245100b9  addiu       $s1, $v0, 0xB9 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 185));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfab0) {
            ctx->pc = 0x1CFAC4u;
            goto label_1cfac4;
        }
    }
    ctx->pc = 0x1CFAB8u;
label_1cfab8:
    // 0x1cfab8: 0x24100054  addiu       $s0, $zero, 0x54
    ctx->pc = 0x1cfab8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1cfabc:
    // 0x1cfabc: 0x2411017f  addiu       $s1, $zero, 0x17F
    ctx->pc = 0x1cfabcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 383));
label_1cfac0:
    // 0x1cfac0: 0x6417000b  daddiu      $s7, $zero, 0xB
    ctx->pc = 0x1cfac0u;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)11);
label_1cfac4:
    // 0x1cfac4: 0x0  nop
    ctx->pc = 0x1cfac4u;
    // NOP
label_1cfac8:
    // 0x1cfac8: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1cfac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1cfacc:
    // 0x1cfacc: 0x8c229f1c  lw          $v0, -0x60E4($at)
    ctx->pc = 0x1cfaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942492)));
label_1cfad0:
    // 0x1cfad0: 0x1000003d  b           . + 4 + (0x3D << 2)
label_1cfad4:
    if (ctx->pc == 0x1CFAD4u) {
        ctx->pc = 0x1CFAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFAD0u;
        // 0x1cfad4: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFAD8u;
        goto label_1cfad8;
    }
    ctx->pc = 0x1CFAD0u;
    {
        const bool branch_taken_0x1cfad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFAD0u;
        // 0x1cfad4: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfad0) {
            ctx->pc = 0x1CFBC8u;
            goto label_1cfbc8;
        }
    }
    ctx->pc = 0x1CFAD8u;
label_1cfad8:
    // 0x1cfad8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1cfad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cfadc:
    // 0x1cfadc: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
label_1cfae0:
    if (ctx->pc == 0x1CFAE0u) {
        ctx->pc = 0x1CFAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFADCu;
        // 0x1cfae0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFAE4u;
        goto label_1cfae4;
    }
    ctx->pc = 0x1CFADCu;
    {
        const bool branch_taken_0x1cfadc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CFAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFADCu;
        // 0x1cfae0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfadc) {
            ctx->pc = 0x1CFAECu;
            goto label_1cfaec;
        }
    }
    ctx->pc = 0x1CFAE4u;
label_1cfae4:
    // 0x1cfae4: 0x16420012  bne         $s2, $v0, . + 4 + (0x12 << 2)
label_1cfae8:
    if (ctx->pc == 0x1CFAE8u) {
        ctx->pc = 0x1CFAECu;
        goto label_1cfaec;
    }
    ctx->pc = 0x1CFAE4u;
    {
        const bool branch_taken_0x1cfae4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cfae4) {
            ctx->pc = 0x1CFB30u;
            goto label_1cfb30;
        }
    }
    ctx->pc = 0x1CFAECu;
label_1cfaec:
    // 0x1cfaec: 0x0  nop
    ctx->pc = 0x1cfaecu;
    // NOP
label_1cfaf0:
    // 0x1cfaf0: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
label_1cfaf4:
    if (ctx->pc == 0x1CFAF4u) {
        ctx->pc = 0x1CFAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFAF0u;
        // 0x1cfaf4: 0x1510c0  sll         $v0, $s5, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFAF8u;
        goto label_1cfaf8;
    }
    ctx->pc = 0x1CFAF0u;
    {
        const bool branch_taken_0x1cfaf0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFAF0u;
        // 0x1cfaf4: 0x1510c0  sll         $v0, $s5, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfaf0) {
            ctx->pc = 0x1CFB10u;
            goto label_1cfb10;
        }
    }
    ctx->pc = 0x1CFAF8u;
label_1cfaf8:
    // 0x1cfaf8: 0x2410002c  addiu       $s0, $zero, 0x2C
    ctx->pc = 0x1cfaf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_1cfafc:
    // 0x1cfafc: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x1cfafcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1cfb00:
    // 0x1cfb00: 0x64170004  daddiu      $s7, $zero, 0x4
    ctx->pc = 0x1cfb00u;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
label_1cfb04:
    // 0x1cfb04: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1cfb04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1cfb08:
    // 0x1cfb08: 0x10000004  b           . + 4 + (0x4 << 2)
label_1cfb0c:
    if (ctx->pc == 0x1CFB0Cu) {
        ctx->pc = 0x1CFB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFB08u;
        // 0x1cfb0c: 0x245100c3  addiu       $s1, $v0, 0xC3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 195));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFB10u;
        goto label_1cfb10;
    }
    ctx->pc = 0x1CFB08u;
    {
        const bool branch_taken_0x1cfb08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFB08u;
        // 0x1cfb0c: 0x245100c3  addiu       $s1, $v0, 0xC3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfb08) {
            ctx->pc = 0x1CFB1Cu;
            goto label_1cfb1c;
        }
    }
    ctx->pc = 0x1CFB10u;
label_1cfb10:
    // 0x1cfb10: 0x24100054  addiu       $s0, $zero, 0x54
    ctx->pc = 0x1cfb10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1cfb14:
    // 0x1cfb14: 0x2411018f  addiu       $s1, $zero, 0x18F
    ctx->pc = 0x1cfb14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 399));
label_1cfb18:
    // 0x1cfb18: 0x64170005  daddiu      $s7, $zero, 0x5
    ctx->pc = 0x1cfb18u;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)5);
label_1cfb1c:
    // 0x1cfb1c: 0x0  nop
    ctx->pc = 0x1cfb1cu;
    // NOP
label_1cfb20:
    // 0x1cfb20: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1cfb20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1cfb24:
    // 0x1cfb24: 0x8c229f14  lw          $v0, -0x60EC($at)
    ctx->pc = 0x1cfb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942484)));
label_1cfb28:
    // 0x1cfb28: 0x10000027  b           . + 4 + (0x27 << 2)
label_1cfb2c:
    if (ctx->pc == 0x1CFB2Cu) {
        ctx->pc = 0x1CFB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFB28u;
        // 0x1cfb2c: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFB30u;
        goto label_1cfb30;
    }
    ctx->pc = 0x1CFB28u;
    {
        const bool branch_taken_0x1cfb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFB28u;
        // 0x1cfb2c: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfb28) {
            ctx->pc = 0x1CFBC8u;
            goto label_1cfbc8;
        }
    }
    ctx->pc = 0x1CFB30u;
label_1cfb30:
    // 0x1cfb30: 0x2642fffb  addiu       $v0, $s2, -0x5
    ctx->pc = 0x1cfb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967291));
label_1cfb34:
    // 0x1cfb34: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x1cfb34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1cfb38:
    // 0x1cfb38: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1cfb3c:
    if (ctx->pc == 0x1CFB3Cu) {
        ctx->pc = 0x1CFB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFB38u;
        // 0x1cfb3c: 0x2a410008  slti        $at, $s2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFB40u;
        goto label_1cfb40;
    }
    ctx->pc = 0x1CFB38u;
    {
        const bool branch_taken_0x1cfb38 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFB38u;
        // 0x1cfb3c: 0x2a410008  slti        $at, $s2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfb38) {
            ctx->pc = 0x1CFB48u;
            goto label_1cfb48;
        }
    }
    ctx->pc = 0x1CFB40u;
label_1cfb40:
    // 0x1cfb40: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
label_1cfb44:
    if (ctx->pc == 0x1CFB44u) {
        ctx->pc = 0x1CFB48u;
        goto label_1cfb48;
    }
    ctx->pc = 0x1CFB40u;
    {
        const bool branch_taken_0x1cfb40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfb40) {
            ctx->pc = 0x1CFBC8u;
            goto label_1cfbc8;
        }
    }
    ctx->pc = 0x1CFB48u;
label_1cfb48:
    // 0x1cfb48: 0x1280000f  beqz        $s4, . + 4 + (0xF << 2)
label_1cfb4c:
    if (ctx->pc == 0x1CFB4Cu) {
        ctx->pc = 0x1CFB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFB48u;
        // 0x1cfb4c: 0x26450007  addiu       $a1, $s2, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFB50u;
        goto label_1cfb50;
    }
    ctx->pc = 0x1CFB48u;
    {
        const bool branch_taken_0x1cfb48 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFB48u;
        // 0x1cfb4c: 0x26450007  addiu       $a1, $s2, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfb48) {
            ctx->pc = 0x1CFB88u;
            goto label_1cfb88;
        }
    }
    ctx->pc = 0x1CFB50u;
label_1cfb50:
    // 0x1cfb50: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1cfb50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1cfb54:
    // 0x1cfb54: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1cfb54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1cfb58:
    // 0x1cfb58: 0x2442a1b0  addiu       $v0, $v0, -0x5E50
    ctx->pc = 0x1cfb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943152));
label_1cfb5c:
    // 0x1cfb5c: 0x64170004  daddiu      $s7, $zero, 0x4
    ctx->pc = 0x1cfb5cu;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
label_1cfb60:
    // 0x1cfb60: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1cfb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cfb64:
    // 0x1cfb64: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1cfb64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1cfb68:
    // 0x1cfb68: 0x1510c0  sll         $v0, $s5, 3
    ctx->pc = 0x1cfb68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_1cfb6c:
    // 0x1cfb6c: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x1cfb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1cfb70:
    // 0x1cfb70: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1cfb70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1cfb74:
    // 0x1cfb74: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1cfb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1cfb78:
    // 0x1cfb78: 0x24900004  addiu       $s0, $a0, 0x4
    ctx->pc = 0x1cfb78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_1cfb7c:
    // 0x1cfb7c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1cfb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_1cfb80:
    // 0x1cfb80: 0x1000000a  b           . + 4 + (0xA << 2)
label_1cfb84:
    if (ctx->pc == 0x1CFB84u) {
        ctx->pc = 0x1CFB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFB80u;
        // 0x1cfb84: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFB88u;
        goto label_1cfb88;
    }
    ctx->pc = 0x1CFB80u;
    {
        const bool branch_taken_0x1cfb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFB80u;
        // 0x1cfb84: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfb80) {
            ctx->pc = 0x1CFBACu;
            goto label_1cfbac;
        }
    }
    ctx->pc = 0x1CFB88u;
label_1cfb88:
    // 0x1cfb88: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1cfb88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1cfb8c:
    // 0x1cfb8c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1cfb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1cfb90:
    // 0x1cfb90: 0x2442a040  addiu       $v0, $v0, -0x5FC0
    ctx->pc = 0x1cfb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942784));
label_1cfb94:
    // 0x1cfb94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cfb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cfb98:
    // 0x1cfb98: 0x64170004  daddiu      $s7, $zero, 0x4
    ctx->pc = 0x1cfb98u;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
label_1cfb9c:
    // 0x1cfb9c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cfba0:
    // 0x1cfba0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1cfba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1cfba4:
    // 0x1cfba4: 0x24700004  addiu       $s0, $v1, 0x4
    ctx->pc = 0x1cfba4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_1cfba8:
    // 0x1cfba8: 0x24510002  addiu       $s1, $v0, 0x2
    ctx->pc = 0x1cfba8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_1cfbac:
    // 0x1cfbac: 0x0  nop
    ctx->pc = 0x1cfbacu;
    // NOP
label_1cfbb0:
    // 0x1cfbb0: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1cfbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1cfbb4:
    // 0x1cfbb4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1cfbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1cfbb8:
    // 0x1cfbb8: 0x24429f10  addiu       $v0, $v0, -0x60F0
    ctx->pc = 0x1cfbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942480));
label_1cfbbc:
    // 0x1cfbbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cfbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cfbc0:
    // 0x1cfbc0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cfbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cfbc4:
    // 0x1cfbc4: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x1cfbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_1cfbc8:
    // 0x1cfbc8: 0x240200b0  addiu       $v0, $zero, 0xB0
    ctx->pc = 0x1cfbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_1cfbcc:
    // 0x1cfbcc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1cfbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1cfbd0:
    // 0x1cfbd0: 0x32eaffff  andi        $t2, $s7, 0xFFFF
    ctx->pc = 0x1cfbd0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
label_1cfbd4:
    // 0x1cfbd4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1cfbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1cfbd8:
    // 0x1cfbd8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cfbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1cfbdc:
    // 0x1cfbdc: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1cfbdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1cfbe0:
    // 0x1cfbe0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1cfbe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1cfbe4:
    // 0x1cfbe4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1cfbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1cfbe8:
    // 0x1cfbe8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cfbe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cfbec:
    // 0x1cfbec: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1cfbecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_1cfbf0:
    // 0x1cfbf0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1cfbf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cfbf4:
    // 0x1cfbf4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1cfbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x1cfbf8u;
    return;
}
