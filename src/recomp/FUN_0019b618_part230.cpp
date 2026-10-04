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


void FUN_0019b618_part230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x20b328u: goto label_20b328;
        case 0x20b32cu: goto label_20b32c;
        case 0x20b330u: goto label_20b330;
        case 0x20b334u: goto label_20b334;
        case 0x20b338u: goto label_20b338;
        case 0x20b33cu: goto label_20b33c;
        case 0x20b340u: goto label_20b340;
        case 0x20b344u: goto label_20b344;
        case 0x20b348u: goto label_20b348;
        case 0x20b34cu: goto label_20b34c;
        case 0x20b350u: goto label_20b350;
        case 0x20b354u: goto label_20b354;
        case 0x20b358u: goto label_20b358;
        case 0x20b35cu: goto label_20b35c;
        case 0x20b360u: goto label_20b360;
        case 0x20b364u: goto label_20b364;
        case 0x20b368u: goto label_20b368;
        case 0x20b36cu: goto label_20b36c;
        case 0x20b370u: goto label_20b370;
        case 0x20b374u: goto label_20b374;
        case 0x20b378u: goto label_20b378;
        case 0x20b37cu: goto label_20b37c;
        case 0x20b380u: goto label_20b380;
        case 0x20b384u: goto label_20b384;
        case 0x20b388u: goto label_20b388;
        case 0x20b38cu: goto label_20b38c;
        case 0x20b390u: goto label_20b390;
        case 0x20b394u: goto label_20b394;
        case 0x20b398u: goto label_20b398;
        case 0x20b39cu: goto label_20b39c;
        case 0x20b3a0u: goto label_20b3a0;
        case 0x20b3a4u: goto label_20b3a4;
        case 0x20b3a8u: goto label_20b3a8;
        case 0x20b3acu: goto label_20b3ac;
        case 0x20b3b0u: goto label_20b3b0;
        case 0x20b3b4u: goto label_20b3b4;
        case 0x20b3b8u: goto label_20b3b8;
        case 0x20b3bcu: goto label_20b3bc;
        case 0x20b3c0u: goto label_20b3c0;
        case 0x20b3c4u: goto label_20b3c4;
        case 0x20b3c8u: goto label_20b3c8;
        case 0x20b3ccu: goto label_20b3cc;
        case 0x20b3d0u: goto label_20b3d0;
        case 0x20b3d4u: goto label_20b3d4;
        case 0x20b3d8u: goto label_20b3d8;
        case 0x20b3dcu: goto label_20b3dc;
        case 0x20b3e0u: goto label_20b3e0;
        case 0x20b3e4u: goto label_20b3e4;
        case 0x20b3e8u: goto label_20b3e8;
        case 0x20b3ecu: goto label_20b3ec;
        case 0x20b3f0u: goto label_20b3f0;
        case 0x20b3f4u: goto label_20b3f4;
        case 0x20b3f8u: goto label_20b3f8;
        case 0x20b3fcu: goto label_20b3fc;
        case 0x20b400u: goto label_20b400;
        case 0x20b404u: goto label_20b404;
        case 0x20b408u: goto label_20b408;
        case 0x20b40cu: goto label_20b40c;
        case 0x20b410u: goto label_20b410;
        case 0x20b414u: goto label_20b414;
        case 0x20b418u: goto label_20b418;
        case 0x20b41cu: goto label_20b41c;
        case 0x20b420u: goto label_20b420;
        case 0x20b424u: goto label_20b424;
        case 0x20b428u: goto label_20b428;
        case 0x20b42cu: goto label_20b42c;
        case 0x20b430u: goto label_20b430;
        case 0x20b434u: goto label_20b434;
        case 0x20b438u: goto label_20b438;
        case 0x20b43cu: goto label_20b43c;
        case 0x20b440u: goto label_20b440;
        case 0x20b444u: goto label_20b444;
        case 0x20b448u: goto label_20b448;
        case 0x20b44cu: goto label_20b44c;
        case 0x20b450u: goto label_20b450;
        case 0x20b454u: goto label_20b454;
        case 0x20b458u: goto label_20b458;
        case 0x20b45cu: goto label_20b45c;
        case 0x20b460u: goto label_20b460;
        case 0x20b464u: goto label_20b464;
        case 0x20b468u: goto label_20b468;
        case 0x20b46cu: goto label_20b46c;
        case 0x20b470u: goto label_20b470;
        case 0x20b474u: goto label_20b474;
        case 0x20b478u: goto label_20b478;
        case 0x20b47cu: goto label_20b47c;
        case 0x20b480u: goto label_20b480;
        case 0x20b484u: goto label_20b484;
        case 0x20b488u: goto label_20b488;
        case 0x20b48cu: goto label_20b48c;
        case 0x20b490u: goto label_20b490;
        case 0x20b494u: goto label_20b494;
        case 0x20b498u: goto label_20b498;
        case 0x20b49cu: goto label_20b49c;
        case 0x20b4a0u: goto label_20b4a0;
        case 0x20b4a4u: goto label_20b4a4;
        case 0x20b4a8u: goto label_20b4a8;
        case 0x20b4acu: goto label_20b4ac;
        case 0x20b4b0u: goto label_20b4b0;
        case 0x20b4b4u: goto label_20b4b4;
        case 0x20b4b8u: goto label_20b4b8;
        case 0x20b4bcu: goto label_20b4bc;
        case 0x20b4c0u: goto label_20b4c0;
        case 0x20b4c4u: goto label_20b4c4;
        case 0x20b4c8u: goto label_20b4c8;
        case 0x20b4ccu: goto label_20b4cc;
        case 0x20b4d0u: goto label_20b4d0;
        case 0x20b4d4u: goto label_20b4d4;
        case 0x20b4d8u: goto label_20b4d8;
        case 0x20b4dcu: goto label_20b4dc;
        case 0x20b4e0u: goto label_20b4e0;
        case 0x20b4e4u: goto label_20b4e4;
        case 0x20b4e8u: goto label_20b4e8;
        case 0x20b4ecu: goto label_20b4ec;
        case 0x20b4f0u: goto label_20b4f0;
        case 0x20b4f4u: goto label_20b4f4;
        case 0x20b4f8u: goto label_20b4f8;
        case 0x20b4fcu: goto label_20b4fc;
        case 0x20b500u: goto label_20b500;
        case 0x20b504u: goto label_20b504;
        case 0x20b508u: goto label_20b508;
        case 0x20b50cu: goto label_20b50c;
        case 0x20b510u: goto label_20b510;
        case 0x20b514u: goto label_20b514;
        case 0x20b518u: goto label_20b518;
        case 0x20b51cu: goto label_20b51c;
        case 0x20b520u: goto label_20b520;
        case 0x20b524u: goto label_20b524;
        case 0x20b528u: goto label_20b528;
        case 0x20b52cu: goto label_20b52c;
        case 0x20b530u: goto label_20b530;
        case 0x20b534u: goto label_20b534;
        case 0x20b538u: goto label_20b538;
        case 0x20b53cu: goto label_20b53c;
        case 0x20b540u: goto label_20b540;
        case 0x20b544u: goto label_20b544;
        case 0x20b548u: goto label_20b548;
        case 0x20b54cu: goto label_20b54c;
        case 0x20b550u: goto label_20b550;
        case 0x20b554u: goto label_20b554;
        case 0x20b558u: goto label_20b558;
        case 0x20b55cu: goto label_20b55c;
        case 0x20b560u: goto label_20b560;
        case 0x20b564u: goto label_20b564;
        case 0x20b568u: goto label_20b568;
        case 0x20b56cu: goto label_20b56c;
        case 0x20b570u: goto label_20b570;
        case 0x20b574u: goto label_20b574;
        case 0x20b578u: goto label_20b578;
        case 0x20b57cu: goto label_20b57c;
        case 0x20b580u: goto label_20b580;
        case 0x20b584u: goto label_20b584;
        case 0x20b588u: goto label_20b588;
        case 0x20b58cu: goto label_20b58c;
        case 0x20b590u: goto label_20b590;
        case 0x20b594u: goto label_20b594;
        case 0x20b598u: goto label_20b598;
        case 0x20b59cu: goto label_20b59c;
        case 0x20b5a0u: goto label_20b5a0;
        case 0x20b5a4u: goto label_20b5a4;
        case 0x20b5a8u: goto label_20b5a8;
        case 0x20b5acu: goto label_20b5ac;
        case 0x20b5b0u: goto label_20b5b0;
        case 0x20b5b4u: goto label_20b5b4;
        case 0x20b5b8u: goto label_20b5b8;
        case 0x20b5bcu: goto label_20b5bc;
        case 0x20b5c0u: goto label_20b5c0;
        case 0x20b5c4u: goto label_20b5c4;
        case 0x20b5c8u: goto label_20b5c8;
        case 0x20b5ccu: goto label_20b5cc;
        case 0x20b5d0u: goto label_20b5d0;
        case 0x20b5d4u: goto label_20b5d4;
        case 0x20b5d8u: goto label_20b5d8;
        case 0x20b5dcu: goto label_20b5dc;
        case 0x20b5e0u: goto label_20b5e0;
        case 0x20b5e4u: goto label_20b5e4;
        case 0x20b5e8u: goto label_20b5e8;
        case 0x20b5ecu: goto label_20b5ec;
        case 0x20b5f0u: goto label_20b5f0;
        case 0x20b5f4u: goto label_20b5f4;
        case 0x20b5f8u: goto label_20b5f8;
        case 0x20b5fcu: goto label_20b5fc;
        case 0x20b600u: goto label_20b600;
        case 0x20b604u: goto label_20b604;
        case 0x20b608u: goto label_20b608;
        case 0x20b60cu: goto label_20b60c;
        case 0x20b610u: goto label_20b610;
        case 0x20b614u: goto label_20b614;
        case 0x20b618u: goto label_20b618;
        case 0x20b61cu: goto label_20b61c;
        case 0x20b620u: goto label_20b620;
        case 0x20b624u: goto label_20b624;
        case 0x20b628u: goto label_20b628;
        case 0x20b62cu: goto label_20b62c;
        case 0x20b630u: goto label_20b630;
        case 0x20b634u: goto label_20b634;
        case 0x20b638u: goto label_20b638;
        case 0x20b63cu: goto label_20b63c;
        case 0x20b640u: goto label_20b640;
        case 0x20b644u: goto label_20b644;
        case 0x20b648u: goto label_20b648;
        case 0x20b64cu: goto label_20b64c;
        case 0x20b650u: goto label_20b650;
        case 0x20b654u: goto label_20b654;
        case 0x20b658u: goto label_20b658;
        case 0x20b65cu: goto label_20b65c;
        case 0x20b660u: goto label_20b660;
        case 0x20b664u: goto label_20b664;
        case 0x20b668u: goto label_20b668;
        case 0x20b66cu: goto label_20b66c;
        case 0x20b670u: goto label_20b670;
        case 0x20b674u: goto label_20b674;
        case 0x20b678u: goto label_20b678;
        case 0x20b67cu: goto label_20b67c;
        case 0x20b680u: goto label_20b680;
        case 0x20b684u: goto label_20b684;
        case 0x20b688u: goto label_20b688;
        case 0x20b68cu: goto label_20b68c;
        case 0x20b690u: goto label_20b690;
        case 0x20b694u: goto label_20b694;
        case 0x20b698u: goto label_20b698;
        case 0x20b69cu: goto label_20b69c;
        case 0x20b6a0u: goto label_20b6a0;
        case 0x20b6a4u: goto label_20b6a4;
        case 0x20b6a8u: goto label_20b6a8;
        case 0x20b6acu: goto label_20b6ac;
        case 0x20b6b0u: goto label_20b6b0;
        case 0x20b6b4u: goto label_20b6b4;
        case 0x20b6b8u: goto label_20b6b8;
        case 0x20b6bcu: goto label_20b6bc;
        case 0x20b6c0u: goto label_20b6c0;
        case 0x20b6c4u: goto label_20b6c4;
        case 0x20b6c8u: goto label_20b6c8;
        case 0x20b6ccu: goto label_20b6cc;
        case 0x20b6d0u: goto label_20b6d0;
        case 0x20b6d4u: goto label_20b6d4;
        case 0x20b6d8u: goto label_20b6d8;
        case 0x20b6dcu: goto label_20b6dc;
        case 0x20b6e0u: goto label_20b6e0;
        case 0x20b6e4u: goto label_20b6e4;
        case 0x20b6e8u: goto label_20b6e8;
        case 0x20b6ecu: goto label_20b6ec;
        case 0x20b6f0u: goto label_20b6f0;
        case 0x20b6f4u: goto label_20b6f4;
        case 0x20b6f8u: goto label_20b6f8;
        case 0x20b6fcu: goto label_20b6fc;
        case 0x20b700u: goto label_20b700;
        case 0x20b704u: goto label_20b704;
        case 0x20b708u: goto label_20b708;
        case 0x20b70cu: goto label_20b70c;
        case 0x20b710u: goto label_20b710;
        case 0x20b714u: goto label_20b714;
        case 0x20b718u: goto label_20b718;
        case 0x20b71cu: goto label_20b71c;
        case 0x20b720u: goto label_20b720;
        case 0x20b724u: goto label_20b724;
        case 0x20b728u: goto label_20b728;
        case 0x20b72cu: goto label_20b72c;
        case 0x20b730u: goto label_20b730;
        case 0x20b734u: goto label_20b734;
        case 0x20b738u: goto label_20b738;
        case 0x20b73cu: goto label_20b73c;
        case 0x20b740u: goto label_20b740;
        case 0x20b744u: goto label_20b744;
        case 0x20b748u: goto label_20b748;
        case 0x20b74cu: goto label_20b74c;
        case 0x20b750u: goto label_20b750;
        case 0x20b754u: goto label_20b754;
        case 0x20b758u: goto label_20b758;
        case 0x20b75cu: goto label_20b75c;
        case 0x20b760u: goto label_20b760;
        case 0x20b764u: goto label_20b764;
        case 0x20b768u: goto label_20b768;
        case 0x20b76cu: goto label_20b76c;
        case 0x20b770u: goto label_20b770;
        case 0x20b774u: goto label_20b774;
        case 0x20b778u: goto label_20b778;
        case 0x20b77cu: goto label_20b77c;
        case 0x20b780u: goto label_20b780;
        case 0x20b784u: goto label_20b784;
        case 0x20b788u: goto label_20b788;
        case 0x20b78cu: goto label_20b78c;
        case 0x20b790u: goto label_20b790;
        case 0x20b794u: goto label_20b794;
        case 0x20b798u: goto label_20b798;
        case 0x20b79cu: goto label_20b79c;
        case 0x20b7a0u: goto label_20b7a0;
        case 0x20b7a4u: goto label_20b7a4;
        case 0x20b7a8u: goto label_20b7a8;
        case 0x20b7acu: goto label_20b7ac;
        case 0x20b7b0u: goto label_20b7b0;
        case 0x20b7b4u: goto label_20b7b4;
        case 0x20b7b8u: goto label_20b7b8;
        case 0x20b7bcu: goto label_20b7bc;
        case 0x20b7c0u: goto label_20b7c0;
        case 0x20b7c4u: goto label_20b7c4;
        case 0x20b7c8u: goto label_20b7c8;
        case 0x20b7ccu: goto label_20b7cc;
        case 0x20b7d0u: goto label_20b7d0;
        case 0x20b7d4u: goto label_20b7d4;
        case 0x20b7d8u: goto label_20b7d8;
        case 0x20b7dcu: goto label_20b7dc;
        case 0x20b7e0u: goto label_20b7e0;
        case 0x20b7e4u: goto label_20b7e4;
        case 0x20b7e8u: goto label_20b7e8;
        case 0x20b7ecu: goto label_20b7ec;
        case 0x20b7f0u: goto label_20b7f0;
        case 0x20b7f4u: goto label_20b7f4;
        case 0x20b7f8u: goto label_20b7f8;
        case 0x20b7fcu: goto label_20b7fc;
        case 0x20b800u: goto label_20b800;
        case 0x20b804u: goto label_20b804;
        case 0x20b808u: goto label_20b808;
        case 0x20b80cu: goto label_20b80c;
        case 0x20b810u: goto label_20b810;
        case 0x20b814u: goto label_20b814;
        case 0x20b818u: goto label_20b818;
        case 0x20b81cu: goto label_20b81c;
        case 0x20b820u: goto label_20b820;
        case 0x20b824u: goto label_20b824;
        case 0x20b828u: goto label_20b828;
        case 0x20b82cu: goto label_20b82c;
        case 0x20b830u: goto label_20b830;
        case 0x20b834u: goto label_20b834;
        case 0x20b838u: goto label_20b838;
        case 0x20b83cu: goto label_20b83c;
        case 0x20b840u: goto label_20b840;
        case 0x20b844u: goto label_20b844;
        case 0x20b848u: goto label_20b848;
        case 0x20b84cu: goto label_20b84c;
        case 0x20b850u: goto label_20b850;
        case 0x20b854u: goto label_20b854;
        case 0x20b858u: goto label_20b858;
        case 0x20b85cu: goto label_20b85c;
        case 0x20b860u: goto label_20b860;
        case 0x20b864u: goto label_20b864;
        case 0x20b868u: goto label_20b868;
        case 0x20b86cu: goto label_20b86c;
        case 0x20b870u: goto label_20b870;
        case 0x20b874u: goto label_20b874;
        case 0x20b878u: goto label_20b878;
        case 0x20b87cu: goto label_20b87c;
        case 0x20b880u: goto label_20b880;
        case 0x20b884u: goto label_20b884;
        case 0x20b888u: goto label_20b888;
        case 0x20b88cu: goto label_20b88c;
        case 0x20b890u: goto label_20b890;
        case 0x20b894u: goto label_20b894;
        case 0x20b898u: goto label_20b898;
        case 0x20b89cu: goto label_20b89c;
        case 0x20b8a0u: goto label_20b8a0;
        case 0x20b8a4u: goto label_20b8a4;
        case 0x20b8a8u: goto label_20b8a8;
        case 0x20b8acu: goto label_20b8ac;
        case 0x20b8b0u: goto label_20b8b0;
        case 0x20b8b4u: goto label_20b8b4;
        case 0x20b8b8u: goto label_20b8b8;
        case 0x20b8bcu: goto label_20b8bc;
        case 0x20b8c0u: goto label_20b8c0;
        case 0x20b8c4u: goto label_20b8c4;
        case 0x20b8c8u: goto label_20b8c8;
        case 0x20b8ccu: goto label_20b8cc;
        case 0x20b8d0u: goto label_20b8d0;
        case 0x20b8d4u: goto label_20b8d4;
        case 0x20b8d8u: goto label_20b8d8;
        case 0x20b8dcu: goto label_20b8dc;
        case 0x20b8e0u: goto label_20b8e0;
        case 0x20b8e4u: goto label_20b8e4;
        case 0x20b8e8u: goto label_20b8e8;
        case 0x20b8ecu: goto label_20b8ec;
        case 0x20b8f0u: goto label_20b8f0;
        case 0x20b8f4u: goto label_20b8f4;
        case 0x20b8f8u: goto label_20b8f8;
        case 0x20b8fcu: goto label_20b8fc;
        case 0x20b900u: goto label_20b900;
        case 0x20b904u: goto label_20b904;
        case 0x20b908u: goto label_20b908;
        case 0x20b90cu: goto label_20b90c;
        case 0x20b910u: goto label_20b910;
        case 0x20b914u: goto label_20b914;
        case 0x20b918u: goto label_20b918;
        case 0x20b91cu: goto label_20b91c;
        case 0x20b920u: goto label_20b920;
        case 0x20b924u: goto label_20b924;
        case 0x20b928u: goto label_20b928;
        case 0x20b92cu: goto label_20b92c;
        case 0x20b930u: goto label_20b930;
        case 0x20b934u: goto label_20b934;
        case 0x20b938u: goto label_20b938;
        case 0x20b93cu: goto label_20b93c;
        case 0x20b940u: goto label_20b940;
        case 0x20b944u: goto label_20b944;
        case 0x20b948u: goto label_20b948;
        case 0x20b94cu: goto label_20b94c;
        case 0x20b950u: goto label_20b950;
        case 0x20b954u: goto label_20b954;
        case 0x20b958u: goto label_20b958;
        case 0x20b95cu: goto label_20b95c;
        case 0x20b960u: goto label_20b960;
        case 0x20b964u: goto label_20b964;
        case 0x20b968u: goto label_20b968;
        case 0x20b96cu: goto label_20b96c;
        case 0x20b970u: goto label_20b970;
        case 0x20b974u: goto label_20b974;
        case 0x20b978u: goto label_20b978;
        case 0x20b97cu: goto label_20b97c;
        case 0x20b980u: goto label_20b980;
        case 0x20b984u: goto label_20b984;
        case 0x20b988u: goto label_20b988;
        case 0x20b98cu: goto label_20b98c;
        case 0x20b990u: goto label_20b990;
        case 0x20b994u: goto label_20b994;
        case 0x20b998u: goto label_20b998;
        case 0x20b99cu: goto label_20b99c;
        case 0x20b9a0u: goto label_20b9a0;
        case 0x20b9a4u: goto label_20b9a4;
        case 0x20b9a8u: goto label_20b9a8;
        case 0x20b9acu: goto label_20b9ac;
        case 0x20b9b0u: goto label_20b9b0;
        case 0x20b9b4u: goto label_20b9b4;
        case 0x20b9b8u: goto label_20b9b8;
        case 0x20b9bcu: goto label_20b9bc;
        case 0x20b9c0u: goto label_20b9c0;
        case 0x20b9c4u: goto label_20b9c4;
        case 0x20b9c8u: goto label_20b9c8;
        case 0x20b9ccu: goto label_20b9cc;
        case 0x20b9d0u: goto label_20b9d0;
        case 0x20b9d4u: goto label_20b9d4;
        case 0x20b9d8u: goto label_20b9d8;
        case 0x20b9dcu: goto label_20b9dc;
        case 0x20b9e0u: goto label_20b9e0;
        case 0x20b9e4u: goto label_20b9e4;
        case 0x20b9e8u: goto label_20b9e8;
        case 0x20b9ecu: goto label_20b9ec;
        case 0x20b9f0u: goto label_20b9f0;
        case 0x20b9f4u: goto label_20b9f4;
        case 0x20b9f8u: goto label_20b9f8;
        case 0x20b9fcu: goto label_20b9fc;
        case 0x20ba00u: goto label_20ba00;
        case 0x20ba04u: goto label_20ba04;
        case 0x20ba08u: goto label_20ba08;
        case 0x20ba0cu: goto label_20ba0c;
        case 0x20ba10u: goto label_20ba10;
        case 0x20ba14u: goto label_20ba14;
        case 0x20ba18u: goto label_20ba18;
        case 0x20ba1cu: goto label_20ba1c;
        case 0x20ba20u: goto label_20ba20;
        case 0x20ba24u: goto label_20ba24;
        case 0x20ba28u: goto label_20ba28;
        case 0x20ba2cu: goto label_20ba2c;
        case 0x20ba30u: goto label_20ba30;
        case 0x20ba34u: goto label_20ba34;
        case 0x20ba38u: goto label_20ba38;
        case 0x20ba3cu: goto label_20ba3c;
        case 0x20ba40u: goto label_20ba40;
        case 0x20ba44u: goto label_20ba44;
        case 0x20ba48u: goto label_20ba48;
        case 0x20ba4cu: goto label_20ba4c;
        case 0x20ba50u: goto label_20ba50;
        case 0x20ba54u: goto label_20ba54;
        case 0x20ba58u: goto label_20ba58;
        case 0x20ba5cu: goto label_20ba5c;
        case 0x20ba60u: goto label_20ba60;
        case 0x20ba64u: goto label_20ba64;
        case 0x20ba68u: goto label_20ba68;
        case 0x20ba6cu: goto label_20ba6c;
        case 0x20ba70u: goto label_20ba70;
        case 0x20ba74u: goto label_20ba74;
        case 0x20ba78u: goto label_20ba78;
        case 0x20ba7cu: goto label_20ba7c;
        case 0x20ba80u: goto label_20ba80;
        case 0x20ba84u: goto label_20ba84;
        case 0x20ba88u: goto label_20ba88;
        case 0x20ba8cu: goto label_20ba8c;
        case 0x20ba90u: goto label_20ba90;
        case 0x20ba94u: goto label_20ba94;
        case 0x20ba98u: goto label_20ba98;
        case 0x20ba9cu: goto label_20ba9c;
        case 0x20baa0u: goto label_20baa0;
        case 0x20baa4u: goto label_20baa4;
        case 0x20baa8u: goto label_20baa8;
        case 0x20baacu: goto label_20baac;
        case 0x20bab0u: goto label_20bab0;
        case 0x20bab4u: goto label_20bab4;
        case 0x20bab8u: goto label_20bab8;
        case 0x20babcu: goto label_20babc;
        case 0x20bac0u: goto label_20bac0;
        case 0x20bac4u: goto label_20bac4;
        case 0x20bac8u: goto label_20bac8;
        case 0x20baccu: goto label_20bacc;
        case 0x20bad0u: goto label_20bad0;
        case 0x20bad4u: goto label_20bad4;
        case 0x20bad8u: goto label_20bad8;
        case 0x20badcu: goto label_20badc;
        case 0x20bae0u: goto label_20bae0;
        case 0x20bae4u: goto label_20bae4;
        case 0x20bae8u: goto label_20bae8;
        case 0x20baecu: goto label_20baec;
        case 0x20baf0u: goto label_20baf0;
        case 0x20baf4u: goto label_20baf4;
        default: return;
    }

label_20b328:
    // 0x20b328: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20b328u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b32c:
    // 0x20b32c: 0xc066c72  jal         func_19B1C8
label_20b330:
    if (ctx->pc == 0x20B330u) {
        ctx->pc = 0x20B330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B32Cu;
        // 0x20b330: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B334u;
        goto label_20b334;
    }
    ctx->pc = 0x20B32Cu;
    SET_GPR_U32(ctx, 31, 0x20B334u);
    ctx->pc = 0x20B330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B32Cu;
    // 0x20b330: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20B32Cu, 0x20B334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B334u;
label_20b334:
    // 0x20b334: 0x8f83910c  lw          $v1, -0x6EF4($gp)
    ctx->pc = 0x20b334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938892)));
label_20b338:
    // 0x20b338: 0x1473002c  bne         $v1, $s3, . + 4 + (0x2C << 2)
label_20b33c:
    if (ctx->pc == 0x20B33Cu) {
        ctx->pc = 0x20B340u;
        goto label_20b340;
    }
    ctx->pc = 0x20B338u;
    {
        const bool branch_taken_0x20b338 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x20b338) {
            ctx->pc = 0x20B3ECu;
            goto label_20b3ec;
        }
    }
    ctx->pc = 0x20B340u;
label_20b340:
    // 0x20b340: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x20b340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_20b344:
    // 0x20b344: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x20b344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_20b348:
    // 0x20b348: 0x8c243ffc  lw          $a0, 0x3FFC($at)
    ctx->pc = 0x20b348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_20b34c:
    // 0x20b34c: 0x2442fce0  addiu       $v0, $v0, -0x320
    ctx->pc = 0x20b34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966496));
label_20b350:
    // 0x20b350: 0x8f859114  lw          $a1, -0x6EEC($gp)
    ctx->pc = 0x20b350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938900)));
label_20b354:
    // 0x20b354: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x20b354u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_20b358:
    // 0x20b358: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x20b358u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20b35c:
    // 0x20b35c: 0x28a10020  slti        $at, $a1, 0x20
    ctx->pc = 0x20b35cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_20b360:
    // 0x20b360: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x20b360u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_20b364:
    // 0x20b364: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x20b364u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20b368:
    // 0x20b368: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20b368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_20b36c:
    // 0x20b36c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_20b370:
    if (ctx->pc == 0x20B370u) {
        ctx->pc = 0x20B370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B36Cu;
        // 0x20b370: 0x43a021  addu        $s4, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B374u;
        goto label_20b374;
    }
    ctx->pc = 0x20B36Cu;
    {
        const bool branch_taken_0x20b36c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B36Cu;
        // 0x20b370: 0x43a021  addu        $s4, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b36c) {
            ctx->pc = 0x20B390u;
            goto label_20b390;
        }
    }
    ctx->pc = 0x20B374u;
label_20b374:
    // 0x20b374: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x20b374u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_20b378:
    // 0x20b378: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_20b37c:
    if (ctx->pc == 0x20B37Cu) {
        ctx->pc = 0x20B37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B378u;
        // 0x20b37c: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B380u;
        goto label_20b380;
    }
    ctx->pc = 0x20B378u;
    {
        const bool branch_taken_0x20b378 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x20B37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B378u;
        // 0x20b37c: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b378) {
            ctx->pc = 0x20B388u;
            goto label_20b388;
        }
    }
    ctx->pc = 0x20B380u;
label_20b380:
    // 0x20b380: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x20b380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
label_20b384:
    // 0x20b384: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x20b384u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_20b388:
    // 0x20b388: 0x10000009  b           . + 4 + (0x9 << 2)
label_20b38c:
    if (ctx->pc == 0x20B38Cu) {
        ctx->pc = 0x20B38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B388u;
        // 0x20b38c: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B390u;
        goto label_20b390;
    }
    ctx->pc = 0x20B388u;
    {
        const bool branch_taken_0x20b388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B388u;
        // 0x20b38c: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b388) {
            ctx->pc = 0x20B3B0u;
            goto label_20b3b0;
        }
    }
    ctx->pc = 0x20B390u;
label_20b390:
    // 0x20b390: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x20b390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_20b394:
    // 0x20b394: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x20b394u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_20b398:
    // 0x20b398: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x20b398u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_20b39c:
    // 0x20b39c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_20b3a0:
    if (ctx->pc == 0x20B3A0u) {
        ctx->pc = 0x20B3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B39Cu;
        // 0x20b3a0: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B3A4u;
        goto label_20b3a4;
    }
    ctx->pc = 0x20B39Cu;
    {
        const bool branch_taken_0x20b39c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x20B3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B39Cu;
        // 0x20b3a0: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b39c) {
            ctx->pc = 0x20B3ACu;
            goto label_20b3ac;
        }
    }
    ctx->pc = 0x20B3A4u;
label_20b3a4:
    // 0x20b3a4: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x20b3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
label_20b3a8:
    // 0x20b3a8: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x20b3a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_20b3ac:
    // 0x20b3ac: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x20b3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_20b3b0:
    // 0x20b3b0: 0x304a00ff  andi        $t2, $v0, 0xFF
    ctx->pc = 0x20b3b0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_20b3b4:
    // 0x20b3b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20b3b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20b3b8:
    // 0x20b3b8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x20b3b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20b3bc:
    // 0x20b3bc: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x20b3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_20b3c0:
    // 0x20b3c0: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x20b3c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_20b3c4:
    // 0x20b3c4: 0x24080028  addiu       $t0, $zero, 0x28
    ctx->pc = 0x20b3c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_20b3c8:
    // 0x20b3c8: 0xc07c0d0  jal         func_1F0340
label_20b3cc:
    if (ctx->pc == 0x20B3CCu) {
        ctx->pc = 0x20B3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B3C8u;
        // 0x20b3cc: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B3D0u;
        goto label_20b3d0;
    }
    ctx->pc = 0x20B3C8u;
    SET_GPR_U32(ctx, 31, 0x20B3D0u);
    ctx->pc = 0x20B3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B3C8u;
    // 0x20b3cc: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0340u;
    { ctx->pc = 0x1f0340; return; }
    ctx->pc = 0x20B3D0u;
label_20b3d0:
    // 0x20b3d0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x20b3d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20b3d4:
    // 0x20b3d4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x20b3d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_20b3d8:
    // 0x20b3d8: 0x2406002d  addiu       $a2, $zero, 0x2D
    ctx->pc = 0x20b3d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_20b3dc:
    // 0x20b3dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20b3dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b3e0:
    // 0x20b3e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20b3e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b3e4:
    // 0x20b3e4: 0xc066c72  jal         func_19B1C8
label_20b3e8:
    if (ctx->pc == 0x20B3E8u) {
        ctx->pc = 0x20B3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B3E4u;
        // 0x20b3e8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B3ECu;
        goto label_20b3ec;
    }
    ctx->pc = 0x20B3E4u;
    SET_GPR_U32(ctx, 31, 0x20B3ECu);
    ctx->pc = 0x20B3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B3E4u;
    // 0x20b3e8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20B3E4u, 0x20B3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B3ECu;
label_20b3ec:
    // 0x20b3ec: 0x0  nop
    ctx->pc = 0x20b3ecu;
    // NOP
label_20b3f0:
    // 0x20b3f0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x20b3f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_20b3f4:
    // 0x20b3f4: 0x2a63001e  slti        $v1, $s3, 0x1E
    ctx->pc = 0x20b3f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)30) ? 1 : 0);
label_20b3f8:
    // 0x20b3f8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x20b3f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_20b3fc:
    // 0x20b3fc: 0x1460ff45  bnez        $v1, . + 4 + (-0xBB << 2)
label_20b400:
    if (ctx->pc == 0x20B400u) {
        ctx->pc = 0x20B400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B3FCu;
        // 0x20b400: 0x26b502a0  addiu       $s5, $s5, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B404u;
        goto label_20b404;
    }
    ctx->pc = 0x20B3FCu;
    {
        const bool branch_taken_0x20b3fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B3FCu;
        // 0x20b400: 0x26b502a0  addiu       $s5, $s5, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b3fc) {
            ctx->pc = 0x20B114u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x20b114; return; }
        }
    }
    ctx->pc = 0x20B404u;
label_20b404:
    // 0x20b404: 0x8f83910c  lw          $v1, -0x6EF4($gp)
    ctx->pc = 0x20b404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938892)));
label_20b408:
    // 0x20b408: 0x2861001e  slti        $at, $v1, 0x1E
    ctx->pc = 0x20b408u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30) ? 1 : 0);
label_20b40c:
    // 0x20b40c: 0x1020015d  beqz        $at, . + 4 + (0x15D << 2)
label_20b410:
    if (ctx->pc == 0x20B410u) {
        ctx->pc = 0x20B414u;
        goto label_20b414;
    }
    ctx->pc = 0x20B40Cu;
    {
        const bool branch_taken_0x20b40c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b40c) {
            ctx->pc = 0x20B984u;
            goto label_20b984;
        }
    }
    ctx->pc = 0x20B414u;
label_20b414:
    // 0x20b414: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x20b414u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20b418:
    // 0x20b418: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x20b418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
label_20b41c:
    // 0x20b41c: 0x2463fc60  addiu       $v1, $v1, -0x3A0
    ctx->pc = 0x20b41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966368));
label_20b420:
    // 0x20b420: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20b420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20b424:
    // 0x20b424: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x20b424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20b428:
    // 0x20b428: 0x4600156  bltz        $v1, . + 4 + (0x156 << 2)
label_20b42c:
    if (ctx->pc == 0x20B42Cu) {
        ctx->pc = 0x20B430u;
        goto label_20b430;
    }
    ctx->pc = 0x20B428u;
    {
        const bool branch_taken_0x20b428 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x20b428) {
            ctx->pc = 0x20B984u;
            goto label_20b984;
        }
    }
    ctx->pc = 0x20B430u;
label_20b430:
    // 0x20b430: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x20b430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_20b434:
    // 0x20b434: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x20b434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_20b438:
    // 0x20b438: 0x8c243ffc  lw          $a0, 0x3FFC($at)
    ctx->pc = 0x20b438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_20b43c:
    // 0x20b43c: 0x24420280  addiu       $v0, $v0, 0x280
    ctx->pc = 0x20b43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
label_20b440:
    // 0x20b440: 0x240500e8  addiu       $a1, $zero, 0xE8
    ctx->pc = 0x20b440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
label_20b444:
    // 0x20b444: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x20b444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_20b448:
    // 0x20b448: 0x240700a8  addiu       $a3, $zero, 0xA8
    ctx->pc = 0x20b448u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_20b44c:
    // 0x20b44c: 0x24080060  addiu       $t0, $zero, 0x60
    ctx->pc = 0x20b44cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_20b450:
    // 0x20b450: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x20b450u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_20b454:
    // 0x20b454: 0x240a0050  addiu       $t2, $zero, 0x50
    ctx->pc = 0x20b454u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_20b458:
    // 0x20b458: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x20b458u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_20b45c:
    // 0x20b45c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20b45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20b460:
    // 0x20b460: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x20b460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_20b464:
    // 0x20b464: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x20b464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20b468:
    // 0x20b468: 0xc07c17c  jal         func_1F05F0
label_20b46c:
    if (ctx->pc == 0x20B46Cu) {
        ctx->pc = 0x20B46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B468u;
        // 0x20b46c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B470u;
        goto label_20b470;
    }
    ctx->pc = 0x20B468u;
    SET_GPR_U32(ctx, 31, 0x20B470u);
    ctx->pc = 0x20B46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B468u;
    // 0x20b46c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F05F0u;
    { ctx->pc = 0x1f05f0; return; }
    ctx->pc = 0x20B470u;
label_20b470:
    // 0x20b470: 0x24027b00  addiu       $v0, $zero, 0x7B00
    ctx->pc = 0x20b470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31488));
label_20b474:
    // 0x20b474: 0x3404fe00  ori         $a0, $zero, 0xFE00
    ctx->pc = 0x20b474u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_20b478:
    // 0x20b478: 0xa6020400  sh          $v0, 0x400($s0)
    ctx->pc = 0x20b478u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1024), (uint16_t)GPR_U32(ctx, 2));
label_20b47c:
    // 0x20b47c: 0x24037f80  addiu       $v1, $zero, 0x7F80
    ctx->pc = 0x20b47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32640));
label_20b480:
    // 0x20b480: 0xa6020402  sh          $v0, 0x402($s0)
    ctx->pc = 0x20b480u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1026), (uint16_t)GPR_U32(ctx, 2));
label_20b484:
    // 0x20b484: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x20b484u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b488:
    // 0x20b488: 0xae040404  sw          $a0, 0x404($s0)
    ctx->pc = 0x20b488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1028), GPR_U32(ctx, 4));
label_20b48c:
    // 0x20b48c: 0x24027b80  addiu       $v0, $zero, 0x7B80
    ctx->pc = 0x20b48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31616));
label_20b490:
    // 0x20b490: 0xa6030410  sh          $v1, 0x410($s0)
    ctx->pc = 0x20b490u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1040), (uint16_t)GPR_U32(ctx, 3));
label_20b494:
    // 0x20b494: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20b494u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b498:
    // 0x20b498: 0xa6020412  sh          $v0, 0x412($s0)
    ctx->pc = 0x20b498u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1042), (uint16_t)GPR_U32(ctx, 2));
label_20b49c:
    // 0x20b49c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x20b49cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b4a0:
    // 0x20b4a0: 0xae040414  sw          $a0, 0x414($s0)
    ctx->pc = 0x20b4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1044), GPR_U32(ctx, 4));
label_20b4a4:
    // 0x20b4a4: 0x6610004  bgez        $s3, . + 4 + (0x4 << 2)
label_20b4a8:
    if (ctx->pc == 0x20B4A8u) {
        ctx->pc = 0x20B4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B4A4u;
        // 0x20b4a8: 0x32630001  andi        $v1, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B4ACu;
        goto label_20b4ac;
    }
    ctx->pc = 0x20B4A4u;
    {
        const bool branch_taken_0x20b4a4 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x20B4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B4A4u;
        // 0x20b4a8: 0x32630001  andi        $v1, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b4a4) {
            ctx->pc = 0x20B4B8u;
            goto label_20b4b8;
        }
    }
    ctx->pc = 0x20B4ACu;
label_20b4ac:
    // 0x20b4ac: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_20b4b0:
    if (ctx->pc == 0x20B4B0u) {
        ctx->pc = 0x20B4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B4ACu;
        // 0x20b4b0: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B4B4u;
        goto label_20b4b4;
    }
    ctx->pc = 0x20B4ACu;
    {
        const bool branch_taken_0x20b4ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B4ACu;
        // 0x20b4b0: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b4ac) {
            ctx->pc = 0x20B4BCu;
            goto label_20b4bc;
        }
    }
    ctx->pc = 0x20B4B4u;
label_20b4b4:
    // 0x20b4b4: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x20b4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_20b4b8:
    // 0x20b4b8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x20b4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20b4bc:
    // 0x20b4bc: 0x132043  sra         $a0, $s3, 1
    ctx->pc = 0x20b4bcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 19), 1));
label_20b4c0:
    // 0x20b4c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20b4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20b4c4:
    // 0x20b4c4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x20b4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_20b4c8:
    // 0x20b4c8: 0x6610003  bgez        $s3, . + 4 + (0x3 << 2)
label_20b4cc:
    if (ctx->pc == 0x20B4CCu) {
        ctx->pc = 0x20B4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B4C8u;
        // 0x20b4cc: 0x244700f0  addiu       $a3, $v0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B4D0u;
        goto label_20b4d0;
    }
    ctx->pc = 0x20B4C8u;
    {
        const bool branch_taken_0x20b4c8 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x20B4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B4C8u;
        // 0x20b4cc: 0x244700f0  addiu       $a3, $v0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b4c8) {
            ctx->pc = 0x20B4D8u;
            goto label_20b4d8;
        }
    }
    ctx->pc = 0x20B4D0u;
label_20b4d0:
    // 0x20b4d0: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x20b4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_20b4d4:
    // 0x20b4d4: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x20b4d4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_20b4d8:
    // 0x20b4d8: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x20b4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_20b4dc:
    // 0x20b4dc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x20b4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_20b4e0:
    // 0x20b4e0: 0x2442fbc0  addiu       $v0, $v0, -0x440
    ctx->pc = 0x20b4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966208));
label_20b4e4:
    // 0x20b4e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20b4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20b4e8:
    // 0x20b4e8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x20b4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_20b4ec:
    // 0x20b4ec: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x20b4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_20b4f0:
    // 0x20b4f0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20b4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20b4f4:
    // 0x20b4f4: 0x4a1000f  bgez        $a1, . + 4 + (0xF << 2)
label_20b4f8:
    if (ctx->pc == 0x20B4F8u) {
        ctx->pc = 0x20B4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B4F4u;
        // 0x20b4f8: 0x24680050  addiu       $t0, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B4FCu;
        goto label_20b4fc;
    }
    ctx->pc = 0x20B4F4u;
    {
        const bool branch_taken_0x20b4f4 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x20B4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B4F4u;
        // 0x20b4f8: 0x24680050  addiu       $t0, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b4f4) {
            ctx->pc = 0x20B534u;
            goto label_20b534;
        }
    }
    ctx->pc = 0x20B4FCu;
label_20b4fc:
    // 0x20b4fc: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x20b4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_20b500:
    // 0x20b500: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20b500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b504:
    // 0x20b504: 0x24630420  addiu       $v1, $v1, 0x420
    ctx->pc = 0x20b504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1056));
label_20b508:
    // 0x20b508: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x20b508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20b50c:
    // 0x20b50c: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x20b50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_20b510:
    // 0x20b510: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20b510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b514:
    // 0x20b514: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x20b514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_20b518:
    // 0x20b518: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x20b518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_20b51c:
    // 0x20b51c: 0x3409fe00  ori         $t1, $zero, 0xFE00
    ctx->pc = 0x20b51cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_20b520:
    // 0x20b520: 0x240a0050  addiu       $t2, $zero, 0x50
    ctx->pc = 0x20b520u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_20b524:
    // 0x20b524: 0xc054c60  jal         func_153180
label_20b528:
    if (ctx->pc == 0x20B528u) {
        ctx->pc = 0x20B528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B524u;
        // 0x20b528: 0x240b0018  addiu       $t3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B52Cu;
        goto label_20b52c;
    }
    ctx->pc = 0x20B524u;
    SET_GPR_U32(ctx, 31, 0x20B52Cu);
    ctx->pc = 0x20B528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B524u;
    // 0x20b528: 0x240b0018  addiu       $t3, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153180u, 0x20B524u, 0x20B52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B52Cu;
label_20b52c:
    // 0x20b52c: 0x1000000d  b           . + 4 + (0xD << 2)
label_20b530:
    if (ctx->pc == 0x20B530u) {
        ctx->pc = 0x20B534u;
        goto label_20b534;
    }
    ctx->pc = 0x20B52Cu;
    {
        const bool branch_taken_0x20b52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b52c) {
            ctx->pc = 0x20B564u;
            goto label_20b564;
        }
    }
    ctx->pc = 0x20B534u;
label_20b534:
    // 0x20b534: 0x0  nop
    ctx->pc = 0x20b534u;
    // NOP
label_20b538:
    // 0x20b538: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x20b538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_20b53c:
    // 0x20b53c: 0x24430420  addiu       $v1, $v0, 0x420
    ctx->pc = 0x20b53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1056));
label_20b540:
    // 0x20b540: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20b540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b544:
    // 0x20b544: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20b544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b548:
    // 0x20b548: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x20b548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_20b54c:
    // 0x20b54c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x20b54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_20b550:
    // 0x20b550: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x20b550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_20b554:
    // 0x20b554: 0x3409fe00  ori         $t1, $zero, 0xFE00
    ctx->pc = 0x20b554u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_20b558:
    // 0x20b558: 0x240a0050  addiu       $t2, $zero, 0x50
    ctx->pc = 0x20b558u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_20b55c:
    // 0x20b55c: 0xc054c60  jal         func_153180
label_20b560:
    if (ctx->pc == 0x20B560u) {
        ctx->pc = 0x20B560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B55Cu;
        // 0x20b560: 0x240b0018  addiu       $t3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B564u;
        goto label_20b564;
    }
    ctx->pc = 0x20B55Cu;
    SET_GPR_U32(ctx, 31, 0x20B564u);
    ctx->pc = 0x20B560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B55Cu;
    // 0x20b560: 0x240b0018  addiu       $t3, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153180u, 0x20B55Cu, 0x20B564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B564u;
label_20b564:
    // 0x20b564: 0x0  nop
    ctx->pc = 0x20b564u;
    // NOP
label_20b568:
    // 0x20b568: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x20b568u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_20b56c:
    // 0x20b56c: 0x2a620006  slti        $v0, $s3, 0x6
    ctx->pc = 0x20b56cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)6) ? 1 : 0);
label_20b570:
    // 0x20b570: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x20b570u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_20b574:
    // 0x20b574: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
label_20b578:
    if (ctx->pc == 0x20B578u) {
        ctx->pc = 0x20B578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B574u;
        // 0x20b578: 0x265200d0  addiu       $s2, $s2, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B57Cu;
        goto label_20b57c;
    }
    ctx->pc = 0x20B574u;
    {
        const bool branch_taken_0x20b574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B574u;
        // 0x20b578: 0x265200d0  addiu       $s2, $s2, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b574) {
            ctx->pc = 0x20B4A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20b4a4;
        }
    }
    ctx->pc = 0x20B57Cu;
label_20b57c:
    // 0x20b57c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x20b57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_20b580:
    // 0x20b580: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20b580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20b584:
    // 0x20b584: 0x24060090  addiu       $a2, $zero, 0x90
    ctx->pc = 0x20b584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_20b588:
    // 0x20b588: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20b588u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b58c:
    // 0x20b58c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20b58cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b590:
    // 0x20b590: 0xc066c72  jal         func_19B1C8
label_20b594:
    if (ctx->pc == 0x20B594u) {
        ctx->pc = 0x20B594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B590u;
        // 0x20b594: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B598u;
        goto label_20b598;
    }
    ctx->pc = 0x20B590u;
    SET_GPR_U32(ctx, 31, 0x20B598u);
    ctx->pc = 0x20B594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B590u;
    // 0x20b594: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20B590u, 0x20B598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B598u;
label_20b598:
    // 0x20b598: 0x100000fa  b           . + 4 + (0xFA << 2)
label_20b59c:
    if (ctx->pc == 0x20B59Cu) {
        ctx->pc = 0x20B5A0u;
        goto label_20b5a0;
    }
    ctx->pc = 0x20B598u;
    {
        const bool branch_taken_0x20b598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b598) {
            ctx->pc = 0x20B984u;
            goto label_20b984;
        }
    }
    ctx->pc = 0x20B5A0u;
label_20b5a0:
    // 0x20b5a0: 0x31023  negu        $v0, $v1
    ctx->pc = 0x20b5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_20b5a4:
    // 0x20b5a4: 0x3c090046  lui         $t1, 0x46
    ctx->pc = 0x20b5a4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)70 << 16));
label_20b5a8:
    // 0x20b5a8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x20b5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_20b5ac:
    // 0x20b5ac: 0x22240  sll         $a0, $v0, 9
    ctx->pc = 0x20b5acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
label_20b5b0:
    // 0x20b5b0: 0x34633ffc  ori         $v1, $v1, 0x3FFC
    ctx->pc = 0x20b5b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16380);
label_20b5b4:
    // 0x20b5b4: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x20b5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
label_20b5b8:
    // 0x20b5b8: 0x8c6a0000  lw          $t2, 0x0($v1)
    ctx->pc = 0x20b5b8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20b5bc:
    // 0x20b5bc: 0x42fc2  srl         $a1, $a0, 31
    ctx->pc = 0x20b5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_20b5c0:
    // 0x20b5c0: 0x25291e00  addiu       $t1, $t1, 0x1E00
    ctx->pc = 0x20b5c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 7680));
label_20b5c4:
    // 0x20b5c4: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x20b5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_20b5c8:
    // 0x20b5c8: 0x240700f0  addiu       $a3, $zero, 0xF0
    ctx->pc = 0x20b5c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_20b5cc:
    // 0x20b5cc: 0x2408012c  addiu       $t0, $zero, 0x12C
    ctx->pc = 0x20b5ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_20b5d0:
    // 0x20b5d0: 0x3443aaab  ori         $v1, $v0, 0xAAAB
    ctx->pc = 0x20b5d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_20b5d4:
    // 0x20b5d4: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x20b5d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_20b5d8:
    // 0x20b5d8: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x20b5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_20b5dc:
    // 0x20b5dc: 0x24426340  addiu       $v0, $v0, 0x6340
    ctx->pc = 0x20b5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25408));
label_20b5e0:
    // 0x20b5e0: 0xa1980  sll         $v1, $t2, 6
    ctx->pc = 0x20b5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 6));
label_20b5e4:
    // 0x20b5e4: 0xa2140  sll         $a0, $t2, 5
    ctx->pc = 0x20b5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
label_20b5e8:
    // 0x20b5e8: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x20b5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_20b5ec:
    // 0x20b5ec: 0x124b021  addu        $s6, $t1, $a0
    ctx->pc = 0x20b5ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_20b5f0:
    // 0x20b5f0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x20b5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_20b5f4:
    // 0x20b5f4: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x20b5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_20b5f8:
    // 0x20b5f8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20b5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_20b5fc:
    // 0x20b5fc: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x20b5fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20b600:
    // 0x20b600: 0x1010  mfhi        $v0
    ctx->pc = 0x20b600u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_20b604:
    // 0x20b604: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x20b604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_20b608:
    // 0x20b608: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x20b608u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_20b60c:
    // 0x20b60c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20b60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_20b610:
    // 0x20b610: 0x24570280  addiu       $s7, $v0, 0x280
    ctx->pc = 0x20b610u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
label_20b614:
    // 0x20b614: 0xc07c25c  jal         func_1F0970
label_20b618:
    if (ctx->pc == 0x20B618u) {
        ctx->pc = 0x20B618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B614u;
        // 0x20b618: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B61Cu;
        goto label_20b61c;
    }
    ctx->pc = 0x20B614u;
    SET_GPR_U32(ctx, 31, 0x20B61Cu);
    ctx->pc = 0x20B618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B614u;
    // 0x20b618: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0970u;
    { ctx->pc = 0x1f0970; return; }
    ctx->pc = 0x20B61Cu;
label_20b61c:
    // 0x20b61c: 0x171100  sll         $v0, $s7, 4
    ctx->pc = 0x20b61cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
label_20b620:
    // 0x20b620: 0x3c0b002d  lui         $t3, 0x2D
    ctx->pc = 0x20b620u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)45 << 16));
label_20b624:
    // 0x20b624: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x20b624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_20b628:
    // 0x20b628: 0x24037b60  addiu       $v1, $zero, 0x7B60
    ctx->pc = 0x20b628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31584));
label_20b62c:
    // 0x20b62c: 0xa6020630  sh          $v0, 0x630($s0)
    ctx->pc = 0x20b62cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1584), (uint16_t)GPR_U32(ctx, 2));
label_20b630:
    // 0x20b630: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x20b630u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_20b634:
    // 0x20b634: 0x26e20048  addiu       $v0, $s7, 0x48
    ctx->pc = 0x20b634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 72));
label_20b638:
    // 0x20b638: 0xa6030632  sh          $v1, 0x632($s0)
    ctx->pc = 0x20b638u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1586), (uint16_t)GPR_U32(ctx, 3));
label_20b63c:
    // 0x20b63c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x20b63cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_20b640:
    // 0x20b640: 0xae080634  sw          $t0, 0x634($s0)
    ctx->pc = 0x20b640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1588), GPR_U32(ctx, 8));
label_20b644:
    // 0x20b644: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x20b644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_20b648:
    // 0x20b648: 0x26e6004c  addiu       $a2, $s7, 0x4C
    ctx->pc = 0x20b648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 76));
label_20b64c:
    // 0x20b64c: 0xa6020640  sh          $v0, 0x640($s0)
    ctx->pc = 0x20b64cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1600), (uint16_t)GPR_U32(ctx, 2));
label_20b650:
    // 0x20b650: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x20b650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
label_20b654:
    // 0x20b654: 0x24027be0  addiu       $v0, $zero, 0x7BE0
    ctx->pc = 0x20b654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31712));
label_20b658:
    // 0x20b658: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x20b658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20b65c:
    // 0x20b65c: 0xa6020642  sh          $v0, 0x642($s0)
    ctx->pc = 0x20b65cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1602), (uint16_t)GPR_U32(ctx, 2));
label_20b660:
    // 0x20b660: 0x24070048  addiu       $a3, $zero, 0x48
    ctx->pc = 0x20b660u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_20b664:
    // 0x20b664: 0xae080644  sw          $t0, 0x644($s0)
    ctx->pc = 0x20b664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1604), GPR_U32(ctx, 8));
label_20b668:
    // 0x20b668: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x20b668u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20b66c:
    // 0x20b66c: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x20b66cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_20b670:
    // 0x20b670: 0xc0708ac  jal         func_1C22B0
label_20b674:
    if (ctx->pc == 0x20B674u) {
        ctx->pc = 0x20B674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B670u;
        // 0x20b674: 0x256be048  addiu       $t3, $t3, -0x1FB8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294959176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B678u;
        goto label_20b678;
    }
    ctx->pc = 0x20B670u;
    SET_GPR_U32(ctx, 31, 0x20B678u);
    ctx->pc = 0x20B674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B670u;
    // 0x20b674: 0x256be048  addiu       $t3, $t3, -0x1FB8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294959176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x20B678u;
label_20b678:
    // 0x20b678: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20b678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20b67c:
    // 0x20b67c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x20b67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_20b680:
    // 0x20b680: 0x24060083  addiu       $a2, $zero, 0x83
    ctx->pc = 0x20b680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
label_20b684:
    // 0x20b684: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20b684u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b688:
    // 0x20b688: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20b688u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b68c:
    // 0x20b68c: 0xc066c72  jal         func_19B1C8
label_20b690:
    if (ctx->pc == 0x20B690u) {
        ctx->pc = 0x20B690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B68Cu;
        // 0x20b690: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B694u;
        goto label_20b694;
    }
    ctx->pc = 0x20B68Cu;
    SET_GPR_U32(ctx, 31, 0x20B694u);
    ctx->pc = 0x20B690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B68Cu;
    // 0x20b690: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20B68Cu, 0x20B694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B694u;
label_20b694:
    // 0x20b694: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x20b694u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b698:
    // 0x20b698: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20b698u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b69c:
    // 0x20b69c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20b69cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b6a0:
    // 0x20b6a0: 0x0  nop
    ctx->pc = 0x20b6a0u;
    // NOP
label_20b6a4:
    // 0x20b6a4: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x20b6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
label_20b6a8:
    // 0x20b6a8: 0x2463fc60  addiu       $v1, $v1, -0x3A0
    ctx->pc = 0x20b6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966368));
label_20b6ac:
    // 0x20b6ac: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x20b6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_20b6b0:
    // 0x20b6b0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x20b6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20b6b4:
    // 0x20b6b4: 0x46000ad  bltz        $v1, . + 4 + (0xAD << 2)
label_20b6b8:
    if (ctx->pc == 0x20B6B8u) {
        ctx->pc = 0x20B6BCu;
        goto label_20b6bc;
    }
    ctx->pc = 0x20B6B4u;
    {
        const bool branch_taken_0x20b6b4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x20b6b4) {
            ctx->pc = 0x20B96Cu;
            goto label_20b96c;
        }
    }
    ctx->pc = 0x20B6BCu;
label_20b6bc:
    // 0x20b6bc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x20b6bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_20b6c0:
    // 0x20b6c0: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x20b6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_20b6c4:
    // 0x20b6c4: 0x8c263ffc  lw          $a2, 0x3FFC($at)
    ctx->pc = 0x20b6c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_20b6c8:
    // 0x20b6c8: 0x24421480  addiu       $v0, $v0, 0x1480
    ctx->pc = 0x20b6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5248));
label_20b6cc:
    // 0x20b6cc: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x20b6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_20b6d0:
    // 0x20b6d0: 0x8f82910c  lw          $v0, -0x6EF4($gp)
    ctx->pc = 0x20b6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938892)));
label_20b6d4:
    // 0x20b6d4: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x20b6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_20b6d8:
    // 0x20b6d8: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x20b6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_20b6dc:
    // 0x20b6dc: 0xa63023  subu        $a2, $a1, $a2
    ctx->pc = 0x20b6dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_20b6e0:
    // 0x20b6e0: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x20b6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_20b6e4:
    // 0x20b6e4: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x20b6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_20b6e8:
    // 0x20b6e8: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x20b6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_20b6ec:
    // 0x20b6ec: 0x14540003  bne         $v0, $s4, . + 4 + (0x3 << 2)
label_20b6f0:
    if (ctx->pc == 0x20B6F0u) {
        ctx->pc = 0x20B6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B6ECu;
        // 0x20b6f0: 0x65a821  addu        $s5, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B6F4u;
        goto label_20b6f4;
    }
    ctx->pc = 0x20B6ECu;
    {
        const bool branch_taken_0x20b6ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x20B6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B6ECu;
        // 0x20b6f0: 0x65a821  addu        $s5, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b6ec) {
            ctx->pc = 0x20B6FCu;
            goto label_20b6fc;
        }
    }
    ctx->pc = 0x20B6F4u;
label_20b6f4:
    // 0x20b6f4: 0x10000002  b           . + 4 + (0x2 << 2)
label_20b6f8:
    if (ctx->pc == 0x20B6F8u) {
        ctx->pc = 0x20B6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B6F4u;
        // 0x20b6f8: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B6FCu;
        goto label_20b6fc;
    }
    ctx->pc = 0x20B6F4u;
    {
        const bool branch_taken_0x20b6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B6F4u;
        // 0x20b6f8: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b6f4) {
            ctx->pc = 0x20B700u;
            goto label_20b700;
        }
    }
    ctx->pc = 0x20B6FCu;
label_20b6fc:
    // 0x20b6fc: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x20b6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_20b700:
    // 0x20b700: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x20b700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_20b704:
    // 0x20b704: 0x2442fbe0  addiu       $v0, $v0, -0x420
    ctx->pc = 0x20b704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966240));
label_20b708:
    // 0x20b708: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x20b708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_20b70c:
    // 0x20b70c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x20b70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20b710:
    // 0x20b710: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_20b714:
    if (ctx->pc == 0x20B714u) {
        ctx->pc = 0x20B718u;
        goto label_20b718;
    }
    ctx->pc = 0x20B710u;
    {
        const bool branch_taken_0x20b710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b710) {
            ctx->pc = 0x20B76Cu;
            goto label_20b76c;
        }
    }
    ctx->pc = 0x20B718u;
label_20b718:
    // 0x20b718: 0x8f839114  lw          $v1, -0x6EEC($gp)
    ctx->pc = 0x20b718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938900)));
label_20b71c:
    // 0x20b71c: 0x28610020  slti        $at, $v1, 0x20
    ctx->pc = 0x20b71cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
label_20b720:
    // 0x20b720: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_20b724:
    if (ctx->pc == 0x20B724u) {
        ctx->pc = 0x20B728u;
        goto label_20b728;
    }
    ctx->pc = 0x20B720u;
    {
        const bool branch_taken_0x20b720 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b720) {
            ctx->pc = 0x20B744u;
            goto label_20b744;
        }
    }
    ctx->pc = 0x20B728u;
label_20b728:
    // 0x20b728: 0x31180  sll         $v0, $v1, 6
    ctx->pc = 0x20b728u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_20b72c:
    // 0x20b72c: 0x441000d  bgez        $v0, . + 4 + (0xD << 2)
label_20b730:
    if (ctx->pc == 0x20B730u) {
        ctx->pc = 0x20B730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B72Cu;
        // 0x20b730: 0x21943  sra         $v1, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B734u;
        goto label_20b734;
    }
    ctx->pc = 0x20B72Cu;
    {
        const bool branch_taken_0x20b72c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20B730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B72Cu;
        // 0x20b730: 0x21943  sra         $v1, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b72c) {
            ctx->pc = 0x20B764u;
            goto label_20b764;
        }
    }
    ctx->pc = 0x20B734u;
label_20b734:
    // 0x20b734: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x20b734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
label_20b738:
    // 0x20b738: 0x21943  sra         $v1, $v0, 5
    ctx->pc = 0x20b738u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 5));
label_20b73c:
    // 0x20b73c: 0x10000009  b           . + 4 + (0x9 << 2)
label_20b740:
    if (ctx->pc == 0x20B740u) {
        ctx->pc = 0x20B744u;
        goto label_20b744;
    }
    ctx->pc = 0x20B73Cu;
    {
        const bool branch_taken_0x20b73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b73c) {
            ctx->pc = 0x20B764u;
            goto label_20b764;
        }
    }
    ctx->pc = 0x20B744u;
label_20b744:
    // 0x20b744: 0x0  nop
    ctx->pc = 0x20b744u;
    // NOP
label_20b748:
    // 0x20b748: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x20b748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_20b74c:
    // 0x20b74c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x20b74cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20b750:
    // 0x20b750: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x20b750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_20b754:
    // 0x20b754: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_20b758:
    if (ctx->pc == 0x20B758u) {
        ctx->pc = 0x20B758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B754u;
        // 0x20b758: 0x21943  sra         $v1, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B75Cu;
        goto label_20b75c;
    }
    ctx->pc = 0x20B754u;
    {
        const bool branch_taken_0x20b754 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20B758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B754u;
        // 0x20b758: 0x21943  sra         $v1, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b754) {
            ctx->pc = 0x20B764u;
            goto label_20b764;
        }
    }
    ctx->pc = 0x20B75Cu;
label_20b75c:
    // 0x20b75c: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x20b75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
label_20b760:
    // 0x20b760: 0x21943  sra         $v1, $v0, 5
    ctx->pc = 0x20b760u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 5));
label_20b764:
    // 0x20b764: 0x0  nop
    ctx->pc = 0x20b764u;
    // NOP
label_20b768:
    // 0x20b768: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x20b768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_20b76c:
    // 0x20b76c: 0x0  nop
    ctx->pc = 0x20b76cu;
    // NOP
label_20b770:
    // 0x20b770: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20b770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20b774:
    // 0x20b774: 0x282001a  div         $zero, $s4, $v0
    ctx->pc = 0x20b774u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 20);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_20b778:
    // 0x20b778: 0x144fc2  srl         $t1, $s4, 31
    ctx->pc = 0x20b778u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 20), 31));
label_20b77c:
    // 0x20b77c: 0x3403fe00  ori         $v1, $zero, 0xFE00
    ctx->pc = 0x20b77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_20b780:
    // 0x20b780: 0x3810  mfhi        $a3
    ctx->pc = 0x20b780u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_20b784:
    // 0x20b784: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x20b784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
label_20b788:
    // 0x20b788: 0x34465556  ori         $a2, $v0, 0x5556
    ctx->pc = 0x20b788u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
label_20b78c:
    // 0x20b78c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20b78cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_20b790:
    // 0x20b790: 0xd40018  mult        $zero, $a2, $s4
    ctx->pc = 0x20b790u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_20b794:
    // 0x20b794: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x20b794u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_20b798:
    // 0x20b798: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x20b798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_20b79c:
    // 0x20b79c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x20b79cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_20b7a0:
    // 0x20b7a0: 0x2e69021  addu        $s2, $s7, $a2
    ctx->pc = 0x20b7a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 6)));
label_20b7a4:
    // 0x20b7a4: 0x4010  mfhi        $t0
    ctx->pc = 0x20b7a4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_20b7a8:
    // 0x20b7a8: 0x123100  sll         $a2, $s2, 4
    ctx->pc = 0x20b7a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_20b7ac:
    // 0x20b7ac: 0x24c76c00  addiu       $a3, $a2, 0x6C00
    ctx->pc = 0x20b7acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 27648));
label_20b7b0:
    // 0x20b7b0: 0x26460050  addiu       $a2, $s2, 0x50
    ctx->pc = 0x20b7b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_20b7b4:
    // 0x20b7b4: 0xa6a70090  sh          $a3, 0x90($s5)
    ctx->pc = 0x20b7b4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 144), (uint16_t)GPR_U32(ctx, 7));
label_20b7b8:
    // 0x20b7b8: 0x1094821  addu        $t1, $t0, $t1
    ctx->pc = 0x20b7b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_20b7bc:
    // 0x20b7bc: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x20b7bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_20b7c0:
    // 0x20b7c0: 0x24c86c00  addiu       $t0, $a2, 0x6C00
    ctx->pc = 0x20b7c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 27648));
label_20b7c4:
    // 0x20b7c4: 0x93900  sll         $a3, $t1, 4
    ctx->pc = 0x20b7c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_20b7c8:
    // 0x20b7c8: 0x2646002d  addiu       $a2, $s2, 0x2D
    ctx->pc = 0x20b7c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 45));
label_20b7cc:
    // 0x20b7cc: 0xe93823  subu        $a3, $a3, $t1
    ctx->pc = 0x20b7ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_20b7d0:
    // 0x20b7d0: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x20b7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_20b7d4:
    // 0x20b7d4: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x20b7d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_20b7d8:
    // 0x20b7d8: 0x24c96c00  addiu       $t1, $a2, 0x6C00
    ctx->pc = 0x20b7d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 27648));
label_20b7dc:
    // 0x20b7dc: 0x24f30060  addiu       $s3, $a3, 0x60
    ctx->pc = 0x20b7dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
label_20b7e0:
    // 0x20b7e0: 0x2646003c  addiu       $a2, $s2, 0x3C
    ctx->pc = 0x20b7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
label_20b7e4:
    // 0x20b7e4: 0x1338c0  sll         $a3, $s3, 3
    ctx->pc = 0x20b7e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_20b7e8:
    // 0x20b7e8: 0x24ea7900  addiu       $t2, $a3, 0x7900
    ctx->pc = 0x20b7e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 30976));
label_20b7ec:
    // 0x20b7ec: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x20b7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_20b7f0:
    // 0x20b7f0: 0x24c76c00  addiu       $a3, $a2, 0x6C00
    ctx->pc = 0x20b7f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 27648));
label_20b7f4:
    // 0x20b7f4: 0xa6aa0092  sh          $t2, 0x92($s5)
    ctx->pc = 0x20b7f4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 146), (uint16_t)GPR_U32(ctx, 10));
label_20b7f8:
    // 0x20b7f8: 0x2666003c  addiu       $a2, $s3, 0x3C
    ctx->pc = 0x20b7f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 60));
label_20b7fc:
    // 0x20b7fc: 0xaea30094  sw          $v1, 0x94($s5)
    ctx->pc = 0x20b7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 148), GPR_U32(ctx, 3));
label_20b800:
    // 0x20b800: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x20b800u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_20b804:
    // 0x20b804: 0xa6a800a0  sh          $t0, 0xA0($s5)
    ctx->pc = 0x20b804u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 160), (uint16_t)GPR_U32(ctx, 8));
label_20b808:
    // 0x20b808: 0x24c67900  addiu       $a2, $a2, 0x7900
    ctx->pc = 0x20b808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30976));
label_20b80c:
    // 0x20b80c: 0xa6a600a2  sh          $a2, 0xA2($s5)
    ctx->pc = 0x20b80cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 162), (uint16_t)GPR_U32(ctx, 6));
label_20b810:
    // 0x20b810: 0xaea300a4  sw          $v1, 0xA4($s5)
    ctx->pc = 0x20b810u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 164), GPR_U32(ctx, 3));
label_20b814:
    // 0x20b814: 0x26660023  addiu       $a2, $s3, 0x23
    ctx->pc = 0x20b814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 35));
label_20b818:
    // 0x20b818: 0xa2a50080  sb          $a1, 0x80($s5)
    ctx->pc = 0x20b818u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 128), (uint8_t)GPR_U32(ctx, 5));
label_20b81c:
    // 0x20b81c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x20b81cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_20b820:
    // 0x20b820: 0xa2a50081  sb          $a1, 0x81($s5)
    ctx->pc = 0x20b820u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 129), (uint8_t)GPR_U32(ctx, 5));
label_20b824:
    // 0x20b824: 0x24c87900  addiu       $t0, $a2, 0x7900
    ctx->pc = 0x20b824u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 30976));
label_20b828:
    // 0x20b828: 0xa2a50082  sb          $a1, 0x82($s5)
    ctx->pc = 0x20b828u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 130), (uint8_t)GPR_U32(ctx, 5));
label_20b82c:
    // 0x20b82c: 0x26660028  addiu       $a2, $s3, 0x28
    ctx->pc = 0x20b82cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
label_20b830:
    // 0x20b830: 0x838a9108  lb          $t2, -0x6EF8($gp)
    ctx->pc = 0x20b830u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938888)));
label_20b834:
    // 0x20b834: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x20b834u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_20b838:
    // 0x20b838: 0x24c67900  addiu       $a2, $a2, 0x7900
    ctx->pc = 0x20b838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30976));
label_20b83c:
    // 0x20b83c: 0xa2aa0083  sb          $t2, 0x83($s5)
    ctx->pc = 0x20b83cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 131), (uint8_t)GPR_U32(ctx, 10));
label_20b840:
    // 0x20b840: 0xaea20084  sw          $v0, 0x84($s5)
    ctx->pc = 0x20b840u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 2));
label_20b844:
    // 0x20b844: 0xa6a90130  sh          $t1, 0x130($s5)
    ctx->pc = 0x20b844u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 304), (uint16_t)GPR_U32(ctx, 9));
label_20b848:
    // 0x20b848: 0xa6a80132  sh          $t0, 0x132($s5)
    ctx->pc = 0x20b848u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 306), (uint16_t)GPR_U32(ctx, 8));
label_20b84c:
    // 0x20b84c: 0xaea30134  sw          $v1, 0x134($s5)
    ctx->pc = 0x20b84cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 308), GPR_U32(ctx, 3));
label_20b850:
    // 0x20b850: 0xa6a70140  sh          $a3, 0x140($s5)
    ctx->pc = 0x20b850u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 320), (uint16_t)GPR_U32(ctx, 7));
label_20b854:
    // 0x20b854: 0xa6a60142  sh          $a2, 0x142($s5)
    ctx->pc = 0x20b854u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 322), (uint16_t)GPR_U32(ctx, 6));
label_20b858:
    // 0x20b858: 0xaea30144  sw          $v1, 0x144($s5)
    ctx->pc = 0x20b858u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 324), GPR_U32(ctx, 3));
label_20b85c:
    // 0x20b85c: 0xa2a50120  sb          $a1, 0x120($s5)
    ctx->pc = 0x20b85cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 288), (uint8_t)GPR_U32(ctx, 5));
label_20b860:
    // 0x20b860: 0xa2a50121  sb          $a1, 0x121($s5)
    ctx->pc = 0x20b860u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 289), (uint8_t)GPR_U32(ctx, 5));
label_20b864:
    // 0x20b864: 0xa2a50122  sb          $a1, 0x122($s5)
    ctx->pc = 0x20b864u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 290), (uint8_t)GPR_U32(ctx, 5));
label_20b868:
    // 0x20b868: 0xa2a00123  sb          $zero, 0x123($s5)
    ctx->pc = 0x20b868u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 291), (uint8_t)GPR_U32(ctx, 0));
label_20b86c:
    // 0x20b86c: 0xaea20124  sw          $v0, 0x124($s5)
    ctx->pc = 0x20b86cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 292), GPR_U32(ctx, 2));
label_20b870:
    // 0x20b870: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x20b870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20b874:
    // 0x20b874: 0x2881000f  slti        $at, $a0, 0xF
    ctx->pc = 0x20b874u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)15) ? 1 : 0);
label_20b878:
    // 0x20b878: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_20b87c:
    if (ctx->pc == 0x20B87Cu) {
        ctx->pc = 0x20B880u;
        goto label_20b880;
    }
    ctx->pc = 0x20B878u;
    {
        const bool branch_taken_0x20b878 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b878) {
            ctx->pc = 0x20B890u;
            goto label_20b890;
        }
    }
    ctx->pc = 0x20B880u;
label_20b880:
    // 0x20b880: 0xc070a34  jal         func_1C28D0
label_20b884:
    if (ctx->pc == 0x20B884u) {
        ctx->pc = 0x20B888u;
        goto label_20b888;
    }
    ctx->pc = 0x20B880u;
    SET_GPR_U32(ctx, 31, 0x20B888u);
    ctx->pc = 0x1C28D0u;
    { ctx->pc = 0x1c28d0; return; }
    ctx->pc = 0x20B888u;
label_20b888:
    // 0x20b888: 0x10000003  b           . + 4 + (0x3 << 2)
label_20b88c:
    if (ctx->pc == 0x20B88Cu) {
        ctx->pc = 0x20B890u;
        goto label_20b890;
    }
    ctx->pc = 0x20B888u;
    {
        const bool branch_taken_0x20b888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b888) {
            ctx->pc = 0x20B898u;
            goto label_20b898;
        }
    }
    ctx->pc = 0x20B890u;
label_20b890:
    // 0x20b890: 0xc070a34  jal         func_1C28D0
label_20b894:
    if (ctx->pc == 0x20B894u) {
        ctx->pc = 0x20B894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B890u;
        // 0x20b894: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B898u;
        goto label_20b898;
    }
    ctx->pc = 0x20B890u;
    SET_GPR_U32(ctx, 31, 0x20B898u);
    ctx->pc = 0x20B894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B890u;
    // 0x20b894: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28D0u;
    { ctx->pc = 0x1c28d0; return; }
    ctx->pc = 0x20B898u;
label_20b898:
    // 0x20b898: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x20b898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_20b89c:
    // 0x20b89c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x20b89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_20b8a0:
    // 0x20b8a0: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x20b8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_20b8a4:
    // 0x20b8a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20b8a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b8a8:
    // 0x20b8a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20b8a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b8ac:
    // 0x20b8ac: 0xc066c72  jal         func_19B1C8
label_20b8b0:
    if (ctx->pc == 0x20B8B0u) {
        ctx->pc = 0x20B8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B8ACu;
        // 0x20b8b0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B8B4u;
        goto label_20b8b4;
    }
    ctx->pc = 0x20B8ACu;
    SET_GPR_U32(ctx, 31, 0x20B8B4u);
    ctx->pc = 0x20B8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B8ACu;
    // 0x20b8b0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20B8ACu, 0x20B8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B8B4u;
label_20b8b4:
    // 0x20b8b4: 0x8f83910c  lw          $v1, -0x6EF4($gp)
    ctx->pc = 0x20b8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938892)));
label_20b8b8:
    // 0x20b8b8: 0x1474002c  bne         $v1, $s4, . + 4 + (0x2C << 2)
label_20b8bc:
    if (ctx->pc == 0x20B8BCu) {
        ctx->pc = 0x20B8C0u;
        goto label_20b8c0;
    }
    ctx->pc = 0x20B8B8u;
    {
        const bool branch_taken_0x20b8b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x20b8b8) {
            ctx->pc = 0x20B96Cu;
            goto label_20b96c;
        }
    }
    ctx->pc = 0x20B8C0u;
label_20b8c0:
    // 0x20b8c0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x20b8c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_20b8c4:
    // 0x20b8c4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x20b8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_20b8c8:
    // 0x20b8c8: 0x8c243ffc  lw          $a0, 0x3FFC($at)
    ctx->pc = 0x20b8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_20b8cc:
    // 0x20b8cc: 0x2442fce0  addiu       $v0, $v0, -0x320
    ctx->pc = 0x20b8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966496));
label_20b8d0:
    // 0x20b8d0: 0x8f859114  lw          $a1, -0x6EEC($gp)
    ctx->pc = 0x20b8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938900)));
label_20b8d4:
    // 0x20b8d4: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x20b8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_20b8d8:
    // 0x20b8d8: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x20b8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20b8dc:
    // 0x20b8dc: 0x28a10020  slti        $at, $a1, 0x20
    ctx->pc = 0x20b8dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_20b8e0:
    // 0x20b8e0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x20b8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_20b8e4:
    // 0x20b8e4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x20b8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20b8e8:
    // 0x20b8e8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20b8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_20b8ec:
    // 0x20b8ec: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_20b8f0:
    if (ctx->pc == 0x20B8F0u) {
        ctx->pc = 0x20B8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B8ECu;
        // 0x20b8f0: 0x43a821  addu        $s5, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B8F4u;
        goto label_20b8f4;
    }
    ctx->pc = 0x20B8ECu;
    {
        const bool branch_taken_0x20b8ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B8ECu;
        // 0x20b8f0: 0x43a821  addu        $s5, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b8ec) {
            ctx->pc = 0x20B910u;
            goto label_20b910;
        }
    }
    ctx->pc = 0x20B8F4u;
label_20b8f4:
    // 0x20b8f4: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x20b8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_20b8f8:
    // 0x20b8f8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_20b8fc:
    if (ctx->pc == 0x20B8FCu) {
        ctx->pc = 0x20B8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B8F8u;
        // 0x20b8fc: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B900u;
        goto label_20b900;
    }
    ctx->pc = 0x20B8F8u;
    {
        const bool branch_taken_0x20b8f8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x20B8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B8F8u;
        // 0x20b8fc: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b8f8) {
            ctx->pc = 0x20B908u;
            goto label_20b908;
        }
    }
    ctx->pc = 0x20B900u;
label_20b900:
    // 0x20b900: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x20b900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
label_20b904:
    // 0x20b904: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x20b904u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_20b908:
    // 0x20b908: 0x10000009  b           . + 4 + (0x9 << 2)
label_20b90c:
    if (ctx->pc == 0x20B90Cu) {
        ctx->pc = 0x20B90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B908u;
        // 0x20b90c: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B910u;
        goto label_20b910;
    }
    ctx->pc = 0x20B908u;
    {
        const bool branch_taken_0x20b908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B908u;
        // 0x20b90c: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b908) {
            ctx->pc = 0x20B930u;
            goto label_20b930;
        }
    }
    ctx->pc = 0x20B910u;
label_20b910:
    // 0x20b910: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x20b910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_20b914:
    // 0x20b914: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x20b914u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_20b918:
    // 0x20b918: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x20b918u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_20b91c:
    // 0x20b91c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_20b920:
    if (ctx->pc == 0x20B920u) {
        ctx->pc = 0x20B920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B91Cu;
        // 0x20b920: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B924u;
        goto label_20b924;
    }
    ctx->pc = 0x20B91Cu;
    {
        const bool branch_taken_0x20b91c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x20B920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B91Cu;
        // 0x20b920: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b91c) {
            ctx->pc = 0x20B92Cu;
            goto label_20b92c;
        }
    }
    ctx->pc = 0x20B924u;
label_20b924:
    // 0x20b924: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x20b924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
label_20b928:
    // 0x20b928: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x20b928u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_20b92c:
    // 0x20b92c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x20b92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_20b930:
    // 0x20b930: 0x304a00ff  andi        $t2, $v0, 0xFF
    ctx->pc = 0x20b930u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_20b934:
    // 0x20b934: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20b934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20b938:
    // 0x20b938: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x20b938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20b93c:
    // 0x20b93c: 0x26a40010  addiu       $a0, $s5, 0x10
    ctx->pc = 0x20b93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_20b940:
    // 0x20b940: 0x24070050  addiu       $a3, $zero, 0x50
    ctx->pc = 0x20b940u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_20b944:
    // 0x20b944: 0x2408003c  addiu       $t0, $zero, 0x3C
    ctx->pc = 0x20b944u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_20b948:
    // 0x20b948: 0xc07c0d0  jal         func_1F0340
label_20b94c:
    if (ctx->pc == 0x20B94Cu) {
        ctx->pc = 0x20B94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B948u;
        // 0x20b94c: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B950u;
        goto label_20b950;
    }
    ctx->pc = 0x20B948u;
    SET_GPR_U32(ctx, 31, 0x20B950u);
    ctx->pc = 0x20B94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B948u;
    // 0x20b94c: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0340u;
    { ctx->pc = 0x1f0340; return; }
    ctx->pc = 0x20B950u;
label_20b950:
    // 0x20b950: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x20b950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_20b954:
    // 0x20b954: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x20b954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_20b958:
    // 0x20b958: 0x2406002d  addiu       $a2, $zero, 0x2D
    ctx->pc = 0x20b958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_20b95c:
    // 0x20b95c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20b95cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b960:
    // 0x20b960: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20b960u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b964:
    // 0x20b964: 0xc066c72  jal         func_19B1C8
label_20b968:
    if (ctx->pc == 0x20B968u) {
        ctx->pc = 0x20B968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B964u;
        // 0x20b968: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B96Cu;
        goto label_20b96c;
    }
    ctx->pc = 0x20B964u;
    SET_GPR_U32(ctx, 31, 0x20B96Cu);
    ctx->pc = 0x20B968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B964u;
    // 0x20b968: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20B964u, 0x20B96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B96Cu;
label_20b96c:
    // 0x20b96c: 0x0  nop
    ctx->pc = 0x20b96cu;
    // NOP
label_20b970:
    // 0x20b970: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x20b970u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_20b974:
    // 0x20b974: 0x2a83000f  slti        $v1, $s4, 0xF
    ctx->pc = 0x20b974u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)15) ? 1 : 0);
label_20b978:
    // 0x20b978: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x20b978u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_20b97c:
    // 0x20b97c: 0x1460ff48  bnez        $v1, . + 4 + (-0xB8 << 2)
label_20b980:
    if (ctx->pc == 0x20B980u) {
        ctx->pc = 0x20B980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B97Cu;
        // 0x20b980: 0x263102a0  addiu       $s1, $s1, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B984u;
        goto label_20b984;
    }
    ctx->pc = 0x20B97Cu;
    {
        const bool branch_taken_0x20b97c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B97Cu;
        // 0x20b980: 0x263102a0  addiu       $s1, $s1, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b97c) {
            ctx->pc = 0x20B6A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B984u;
label_20b984:
    // 0x20b984: 0x0  nop
    ctx->pc = 0x20b984u;
    // NOP
label_20b988:
    // 0x20b988: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x20b988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_20b98c:
    // 0x20b98c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x20b98cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_20b990:
    // 0x20b990: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x20b990u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_20b994:
    // 0x20b994: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x20b994u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_20b998:
    // 0x20b998: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x20b998u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20b99c:
    // 0x20b99c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x20b99cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20b9a0:
    // 0x20b9a0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x20b9a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20b9a4:
    // 0x20b9a4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x20b9a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20b9a8:
    // 0x20b9a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20b9a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20b9ac:
    // 0x20b9ac: 0x3e00008  jr          $ra
label_20b9b0:
    if (ctx->pc == 0x20B9B0u) {
        ctx->pc = 0x20B9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B9ACu;
        // 0x20b9b0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B9B4u;
        goto label_20b9b4;
    }
    ctx->pc = 0x20B9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B9ACu;
        // 0x20b9b0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B9ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B9B4u;
label_20b9b4:
    // 0x20b9b4: 0x0  nop
    ctx->pc = 0x20b9b4u;
    // NOP
label_20b9b8:
    // 0x20b9b8: 0x0  nop
    ctx->pc = 0x20b9b8u;
    // NOP
label_20b9bc:
    // 0x20b9bc: 0x0  nop
    ctx->pc = 0x20b9bcu;
    // NOP
label_20b9c0:
    // 0x20b9c0: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x20b9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_20b9c4:
    // 0x20b9c4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x20b9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_20b9c8:
    // 0x20b9c8: 0x2442fc60  addiu       $v0, $v0, -0x3A0
    ctx->pc = 0x20b9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966368));
label_20b9cc:
    // 0x20b9cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20b9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20b9d0:
    // 0x20b9d0: 0x3e00008  jr          $ra
label_20b9d4:
    if (ctx->pc == 0x20B9D4u) {
        ctx->pc = 0x20B9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B9D0u;
        // 0x20b9d4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B9D8u;
        goto label_20b9d8;
    }
    ctx->pc = 0x20B9D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B9D0u;
        // 0x20b9d4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B9D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B9D8u;
label_20b9d8:
    // 0x20b9d8: 0x0  nop
    ctx->pc = 0x20b9d8u;
    // NOP
label_20b9dc:
    // 0x20b9dc: 0x0  nop
    ctx->pc = 0x20b9dcu;
    // NOP
label_20b9e0:
    // 0x20b9e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20b9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20b9e4:
    // 0x20b9e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20b9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_20b9e8:
    // 0x20b9e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20b9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20b9ec:
    // 0x20b9ec: 0xc082ee4  jal         func_20BB90
label_20b9f0:
    if (ctx->pc == 0x20B9F0u) {
        ctx->pc = 0x20B9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B9ECu;
        // 0x20b9f0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B9F4u;
        goto label_20b9f4;
    }
    ctx->pc = 0x20B9ECu;
    SET_GPR_U32(ctx, 31, 0x20B9F4u);
    ctx->pc = 0x20B9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B9ECu;
    // 0x20b9f0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20BB90u;
    { ctx->pc = 0x20bb90; return; }
    ctx->pc = 0x20B9F4u;
label_20b9f4:
    // 0x20b9f4: 0xc082fe4  jal         func_20BF90
label_20b9f8:
    if (ctx->pc == 0x20B9F8u) {
        ctx->pc = 0x20B9FCu;
        goto label_20b9fc;
    }
    ctx->pc = 0x20B9F4u;
    SET_GPR_U32(ctx, 31, 0x20B9FCu);
    ctx->pc = 0x20BF90u;
    { ctx->pc = 0x20bf90; return; }
    ctx->pc = 0x20B9FCu;
label_20b9fc:
    // 0x20b9fc: 0x8f829160  lw          $v0, -0x6EA0($gp)
    ctx->pc = 0x20b9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938976)));
label_20ba00:
    // 0x20ba00: 0xc060258  jal         func_180960
label_20ba04:
    if (ctx->pc == 0x20BA04u) {
        ctx->pc = 0x20BA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA00u;
        // 0x20ba04: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BA08u;
        goto label_20ba08;
    }
    ctx->pc = 0x20BA00u;
    SET_GPR_U32(ctx, 31, 0x20BA08u);
    ctx->pc = 0x20BA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BA00u;
    // 0x20ba04: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x20BA00u, 0x20BA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BA08u;
label_20ba08:
    // 0x20ba08: 0xc060258  jal         func_180960
label_20ba0c:
    if (ctx->pc == 0x20BA0Cu) {
        ctx->pc = 0x20BA10u;
        goto label_20ba10;
    }
    ctx->pc = 0x20BA08u;
    SET_GPR_U32(ctx, 31, 0x20BA10u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x20BA08u, 0x20BA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BA10u;
label_20ba10:
    // 0x20ba10: 0xc082e90  jal         func_20BA40
label_20ba14:
    if (ctx->pc == 0x20BA14u) {
        ctx->pc = 0x20BA18u;
        goto label_20ba18;
    }
    ctx->pc = 0x20BA10u;
    SET_GPR_U32(ctx, 31, 0x20BA18u);
    ctx->pc = 0x20BA40u;
    goto label_20ba40;
    ctx->pc = 0x20BA18u;
label_20ba18:
    // 0x20ba18: 0x8f849168  lw          $a0, -0x6E98($gp)
    ctx->pc = 0x20ba18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938984)));
label_20ba1c:
    // 0x20ba1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20ba1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ba20:
    // 0x20ba20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20ba20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20ba24:
    // 0x20ba24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20ba24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ba28:
    // 0x20ba28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20ba28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20ba2c:
    // 0x20ba2c: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x20ba2cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_20ba30:
    // 0x20ba30: 0x3e00008  jr          $ra
label_20ba34:
    if (ctx->pc == 0x20BA34u) {
        ctx->pc = 0x20BA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA30u;
        // 0x20ba34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BA38u;
        goto label_20ba38;
    }
    ctx->pc = 0x20BA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA30u;
        // 0x20ba34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BA30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20BA38u;
label_20ba38:
    // 0x20ba38: 0x0  nop
    ctx->pc = 0x20ba38u;
    // NOP
label_20ba3c:
    // 0x20ba3c: 0x0  nop
    ctx->pc = 0x20ba3cu;
    // NOP
label_20ba40:
    // 0x20ba40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x20ba40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_20ba44:
    // 0x20ba44: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x20ba44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_20ba48:
    // 0x20ba48: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x20ba48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_20ba4c:
    // 0x20ba4c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x20ba4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_20ba50:
    // 0x20ba50: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20ba50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_20ba54:
    // 0x20ba54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20ba54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_20ba58:
    // 0x20ba58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20ba58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20ba5c:
    // 0x20ba5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20ba5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20ba60:
    // 0x20ba60: 0x8f84915c  lw          $a0, -0x6EA4($gp)
    ctx->pc = 0x20ba60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938972)));
label_20ba64:
    // 0x20ba64: 0xc070ea8  jal         func_1C3AA0
label_20ba68:
    if (ctx->pc == 0x20BA68u) {
        ctx->pc = 0x20BA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA64u;
        // 0x20ba68: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BA6Cu;
        goto label_20ba6c;
    }
    ctx->pc = 0x20BA64u;
    SET_GPR_U32(ctx, 31, 0x20BA6Cu);
    ctx->pc = 0x20BA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BA64u;
    // 0x20ba68: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AA0u;
    { ctx->pc = 0x1c3aa0; return; }
    ctx->pc = 0x20BA6Cu;
label_20ba6c:
    // 0x20ba6c: 0x8f84915c  lw          $a0, -0x6EA4($gp)
    ctx->pc = 0x20ba6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938972)));
label_20ba70:
    // 0x20ba70: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x20ba70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_20ba74:
    // 0x20ba74: 0xc070ea8  jal         func_1C3AA0
label_20ba78:
    if (ctx->pc == 0x20BA78u) {
        ctx->pc = 0x20BA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA74u;
        // 0x20ba78: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BA7Cu;
        goto label_20ba7c;
    }
    ctx->pc = 0x20BA74u;
    SET_GPR_U32(ctx, 31, 0x20BA7Cu);
    ctx->pc = 0x20BA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BA74u;
    // 0x20ba78: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AA0u;
    { ctx->pc = 0x1c3aa0; return; }
    ctx->pc = 0x20BA7Cu;
label_20ba7c:
    // 0x20ba7c: 0xc070038  jal         func_1C00E0
label_20ba80:
    if (ctx->pc == 0x20BA80u) {
        ctx->pc = 0x20BA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA7Cu;
        // 0x20ba80: 0x8f84915c  lw          $a0, -0x6EA4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938972)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BA84u;
        goto label_20ba84;
    }
    ctx->pc = 0x20BA7Cu;
    SET_GPR_U32(ctx, 31, 0x20BA84u);
    ctx->pc = 0x20BA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BA7Cu;
    // 0x20ba80: 0x8f84915c  lw          $a0, -0x6EA4($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x20BA84u;
label_20ba84:
    // 0x20ba84: 0xc070038  jal         func_1C00E0
label_20ba88:
    if (ctx->pc == 0x20BA88u) {
        ctx->pc = 0x20BA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA84u;
        // 0x20ba88: 0x8f849158  lw          $a0, -0x6EA8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938968)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BA8Cu;
        goto label_20ba8c;
    }
    ctx->pc = 0x20BA84u;
    SET_GPR_U32(ctx, 31, 0x20BA8Cu);
    ctx->pc = 0x20BA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BA84u;
    // 0x20ba88: 0x8f849158  lw          $a0, -0x6EA8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938968)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x20BA8Cu;
label_20ba8c:
    // 0x20ba8c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20ba8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ba90:
    // 0x20ba90: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x20ba90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ba94:
    // 0x20ba94: 0x27829150  addiu       $v0, $gp, -0x6EB0
    ctx->pc = 0x20ba94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938960));
label_20ba98:
    // 0x20ba98: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x20ba98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_20ba9c:
    // 0x20ba9c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x20ba9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20baa0:
    // 0x20baa0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_20baa4:
    if (ctx->pc == 0x20BAA4u) {
        ctx->pc = 0x20BAA8u;
        goto label_20baa8;
    }
    ctx->pc = 0x20BAA0u;
    {
        const bool branch_taken_0x20baa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20baa0) {
            ctx->pc = 0x20BAB4u;
            goto label_20bab4;
        }
    }
    ctx->pc = 0x20BAA8u;
label_20baa8:
    // 0x20baa8: 0xc070038  jal         func_1C00E0
label_20baac:
    if (ctx->pc == 0x20BAACu) {
        ctx->pc = 0x20BAB0u;
        goto label_20bab0;
    }
    ctx->pc = 0x20BAA8u;
    SET_GPR_U32(ctx, 31, 0x20BAB0u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x20BAB0u;
label_20bab0:
    // 0x20bab0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x20bab0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_20bab4:
    // 0x20bab4: 0x0  nop
    ctx->pc = 0x20bab4u;
    // NOP
label_20bab8:
    // 0x20bab8: 0x27829148  addiu       $v0, $gp, -0x6EB8
    ctx->pc = 0x20bab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938952));
label_20babc:
    // 0x20babc: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x20babcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_20bac0:
    // 0x20bac0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x20bac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20bac4:
    // 0x20bac4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_20bac8:
    if (ctx->pc == 0x20BAC8u) {
        ctx->pc = 0x20BACCu;
        goto label_20bacc;
    }
    ctx->pc = 0x20BAC4u;
    {
        const bool branch_taken_0x20bac4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bac4) {
            ctx->pc = 0x20BAD8u;
            goto label_20bad8;
        }
    }
    ctx->pc = 0x20BACCu;
label_20bacc:
    // 0x20bacc: 0xc070038  jal         func_1C00E0
label_20bad0:
    if (ctx->pc == 0x20BAD0u) {
        ctx->pc = 0x20BAD4u;
        goto label_20bad4;
    }
    ctx->pc = 0x20BACCu;
    SET_GPR_U32(ctx, 31, 0x20BAD4u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x20BAD4u;
label_20bad4:
    // 0x20bad4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x20bad4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_20bad8:
    // 0x20bad8: 0x27829140  addiu       $v0, $gp, -0x6EC0
    ctx->pc = 0x20bad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938944));
label_20badc:
    // 0x20badc: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x20badcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_20bae0:
    // 0x20bae0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x20bae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20bae4:
    // 0x20bae4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_20bae8:
    if (ctx->pc == 0x20BAE8u) {
        ctx->pc = 0x20BAECu;
        goto label_20baec;
    }
    ctx->pc = 0x20BAE4u;
    {
        const bool branch_taken_0x20bae4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bae4) {
            ctx->pc = 0x20BAF8u;
            { ctx->pc = 0x20baf8; return; }
        }
    }
    ctx->pc = 0x20BAECu;
label_20baec:
    // 0x20baec: 0xc070038  jal         func_1C00E0
label_20baf0:
    if (ctx->pc == 0x20BAF0u) {
        ctx->pc = 0x20BAF4u;
        goto label_20baf4;
    }
    ctx->pc = 0x20BAECu;
    SET_GPR_U32(ctx, 31, 0x20BAF4u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x20BAF4u;
label_20baf4:
    // 0x20baf4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x20baf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x20baf8u;
    return;
}
