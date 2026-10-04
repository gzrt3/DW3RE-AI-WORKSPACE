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

// Function: entry_00254d38
// Address: 0x254d38 - 0x27d478
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void entry_00254d38_part39(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x267618u: goto label_267618;
        case 0x26761cu: goto label_26761c;
        case 0x267620u: goto label_267620;
        case 0x267624u: goto label_267624;
        case 0x267628u: goto label_267628;
        case 0x26762cu: goto label_26762c;
        case 0x267630u: goto label_267630;
        case 0x267634u: goto label_267634;
        case 0x267638u: goto label_267638;
        case 0x26763cu: goto label_26763c;
        case 0x267640u: goto label_267640;
        case 0x267644u: goto label_267644;
        case 0x267648u: goto label_267648;
        case 0x26764cu: goto label_26764c;
        case 0x267650u: goto label_267650;
        case 0x267654u: goto label_267654;
        case 0x267658u: goto label_267658;
        case 0x26765cu: goto label_26765c;
        case 0x267660u: goto label_267660;
        case 0x267664u: goto label_267664;
        case 0x267668u: goto label_267668;
        case 0x26766cu: goto label_26766c;
        case 0x267670u: goto label_267670;
        case 0x267674u: goto label_267674;
        case 0x267678u: goto label_267678;
        case 0x26767cu: goto label_26767c;
        case 0x267680u: goto label_267680;
        case 0x267684u: goto label_267684;
        case 0x267688u: goto label_267688;
        case 0x26768cu: goto label_26768c;
        case 0x267690u: goto label_267690;
        case 0x267694u: goto label_267694;
        case 0x267698u: goto label_267698;
        case 0x26769cu: goto label_26769c;
        case 0x2676a0u: goto label_2676a0;
        case 0x2676a4u: goto label_2676a4;
        case 0x2676a8u: goto label_2676a8;
        case 0x2676acu: goto label_2676ac;
        case 0x2676b0u: goto label_2676b0;
        case 0x2676b4u: goto label_2676b4;
        case 0x2676b8u: goto label_2676b8;
        case 0x2676bcu: goto label_2676bc;
        case 0x2676c0u: goto label_2676c0;
        case 0x2676c4u: goto label_2676c4;
        case 0x2676c8u: goto label_2676c8;
        case 0x2676ccu: goto label_2676cc;
        case 0x2676d0u: goto label_2676d0;
        case 0x2676d4u: goto label_2676d4;
        case 0x2676d8u: goto label_2676d8;
        case 0x2676dcu: goto label_2676dc;
        case 0x2676e0u: goto label_2676e0;
        case 0x2676e4u: goto label_2676e4;
        case 0x2676e8u: goto label_2676e8;
        case 0x2676ecu: goto label_2676ec;
        case 0x2676f0u: goto label_2676f0;
        case 0x2676f4u: goto label_2676f4;
        case 0x2676f8u: goto label_2676f8;
        case 0x2676fcu: goto label_2676fc;
        case 0x267700u: goto label_267700;
        case 0x267704u: goto label_267704;
        case 0x267708u: goto label_267708;
        case 0x26770cu: goto label_26770c;
        case 0x267710u: goto label_267710;
        case 0x267714u: goto label_267714;
        case 0x267718u: goto label_267718;
        case 0x26771cu: goto label_26771c;
        case 0x267720u: goto label_267720;
        case 0x267724u: goto label_267724;
        case 0x267728u: goto label_267728;
        case 0x26772cu: goto label_26772c;
        case 0x267730u: goto label_267730;
        case 0x267734u: goto label_267734;
        case 0x267738u: goto label_267738;
        case 0x26773cu: goto label_26773c;
        case 0x267740u: goto label_267740;
        case 0x267744u: goto label_267744;
        case 0x267748u: goto label_267748;
        case 0x26774cu: goto label_26774c;
        case 0x267750u: goto label_267750;
        case 0x267754u: goto label_267754;
        case 0x267758u: goto label_267758;
        case 0x26775cu: goto label_26775c;
        case 0x267760u: goto label_267760;
        case 0x267764u: goto label_267764;
        case 0x267768u: goto label_267768;
        case 0x26776cu: goto label_26776c;
        case 0x267770u: goto label_267770;
        case 0x267774u: goto label_267774;
        case 0x267778u: goto label_267778;
        case 0x26777cu: goto label_26777c;
        case 0x267780u: goto label_267780;
        case 0x267784u: goto label_267784;
        case 0x267788u: goto label_267788;
        case 0x26778cu: goto label_26778c;
        case 0x267790u: goto label_267790;
        case 0x267794u: goto label_267794;
        case 0x267798u: goto label_267798;
        case 0x26779cu: goto label_26779c;
        case 0x2677a0u: goto label_2677a0;
        case 0x2677a4u: goto label_2677a4;
        case 0x2677a8u: goto label_2677a8;
        case 0x2677acu: goto label_2677ac;
        case 0x2677b0u: goto label_2677b0;
        case 0x2677b4u: goto label_2677b4;
        case 0x2677b8u: goto label_2677b8;
        case 0x2677bcu: goto label_2677bc;
        case 0x2677c0u: goto label_2677c0;
        case 0x2677c4u: goto label_2677c4;
        case 0x2677c8u: goto label_2677c8;
        case 0x2677ccu: goto label_2677cc;
        case 0x2677d0u: goto label_2677d0;
        case 0x2677d4u: goto label_2677d4;
        case 0x2677d8u: goto label_2677d8;
        case 0x2677dcu: goto label_2677dc;
        case 0x2677e0u: goto label_2677e0;
        case 0x2677e4u: goto label_2677e4;
        case 0x2677e8u: goto label_2677e8;
        case 0x2677ecu: goto label_2677ec;
        case 0x2677f0u: goto label_2677f0;
        case 0x2677f4u: goto label_2677f4;
        case 0x2677f8u: goto label_2677f8;
        case 0x2677fcu: goto label_2677fc;
        case 0x267800u: goto label_267800;
        case 0x267804u: goto label_267804;
        case 0x267808u: goto label_267808;
        case 0x26780cu: goto label_26780c;
        case 0x267810u: goto label_267810;
        case 0x267814u: goto label_267814;
        case 0x267818u: goto label_267818;
        case 0x26781cu: goto label_26781c;
        case 0x267820u: goto label_267820;
        case 0x267824u: goto label_267824;
        case 0x267828u: goto label_267828;
        case 0x26782cu: goto label_26782c;
        case 0x267830u: goto label_267830;
        case 0x267834u: goto label_267834;
        case 0x267838u: goto label_267838;
        case 0x26783cu: goto label_26783c;
        case 0x267840u: goto label_267840;
        case 0x267844u: goto label_267844;
        case 0x267848u: goto label_267848;
        case 0x26784cu: goto label_26784c;
        case 0x267850u: goto label_267850;
        case 0x267854u: goto label_267854;
        case 0x267858u: goto label_267858;
        case 0x26785cu: goto label_26785c;
        case 0x267860u: goto label_267860;
        case 0x267864u: goto label_267864;
        case 0x267868u: goto label_267868;
        case 0x26786cu: goto label_26786c;
        case 0x267870u: goto label_267870;
        case 0x267874u: goto label_267874;
        case 0x267878u: goto label_267878;
        case 0x26787cu: goto label_26787c;
        case 0x267880u: goto label_267880;
        case 0x267884u: goto label_267884;
        case 0x267888u: goto label_267888;
        case 0x26788cu: goto label_26788c;
        case 0x267890u: goto label_267890;
        case 0x267894u: goto label_267894;
        case 0x267898u: goto label_267898;
        case 0x26789cu: goto label_26789c;
        case 0x2678a0u: goto label_2678a0;
        case 0x2678a4u: goto label_2678a4;
        case 0x2678a8u: goto label_2678a8;
        case 0x2678acu: goto label_2678ac;
        case 0x2678b0u: goto label_2678b0;
        case 0x2678b4u: goto label_2678b4;
        case 0x2678b8u: goto label_2678b8;
        case 0x2678bcu: goto label_2678bc;
        case 0x2678c0u: goto label_2678c0;
        case 0x2678c4u: goto label_2678c4;
        case 0x2678c8u: goto label_2678c8;
        case 0x2678ccu: goto label_2678cc;
        case 0x2678d0u: goto label_2678d0;
        case 0x2678d4u: goto label_2678d4;
        case 0x2678d8u: goto label_2678d8;
        case 0x2678dcu: goto label_2678dc;
        case 0x2678e0u: goto label_2678e0;
        case 0x2678e4u: goto label_2678e4;
        case 0x2678e8u: goto label_2678e8;
        case 0x2678ecu: goto label_2678ec;
        case 0x2678f0u: goto label_2678f0;
        case 0x2678f4u: goto label_2678f4;
        case 0x2678f8u: goto label_2678f8;
        case 0x2678fcu: goto label_2678fc;
        case 0x267900u: goto label_267900;
        case 0x267904u: goto label_267904;
        case 0x267908u: goto label_267908;
        case 0x26790cu: goto label_26790c;
        case 0x267910u: goto label_267910;
        case 0x267914u: goto label_267914;
        case 0x267918u: goto label_267918;
        case 0x26791cu: goto label_26791c;
        case 0x267920u: goto label_267920;
        case 0x267924u: goto label_267924;
        case 0x267928u: goto label_267928;
        case 0x26792cu: goto label_26792c;
        case 0x267930u: goto label_267930;
        case 0x267934u: goto label_267934;
        case 0x267938u: goto label_267938;
        case 0x26793cu: goto label_26793c;
        case 0x267940u: goto label_267940;
        case 0x267944u: goto label_267944;
        case 0x267948u: goto label_267948;
        case 0x26794cu: goto label_26794c;
        case 0x267950u: goto label_267950;
        case 0x267954u: goto label_267954;
        case 0x267958u: goto label_267958;
        case 0x26795cu: goto label_26795c;
        case 0x267960u: goto label_267960;
        case 0x267964u: goto label_267964;
        case 0x267968u: goto label_267968;
        case 0x26796cu: goto label_26796c;
        case 0x267970u: goto label_267970;
        case 0x267974u: goto label_267974;
        case 0x267978u: goto label_267978;
        case 0x26797cu: goto label_26797c;
        case 0x267980u: goto label_267980;
        case 0x267984u: goto label_267984;
        case 0x267988u: goto label_267988;
        case 0x26798cu: goto label_26798c;
        case 0x267990u: goto label_267990;
        case 0x267994u: goto label_267994;
        case 0x267998u: goto label_267998;
        case 0x26799cu: goto label_26799c;
        case 0x2679a0u: goto label_2679a0;
        case 0x2679a4u: goto label_2679a4;
        case 0x2679a8u: goto label_2679a8;
        case 0x2679acu: goto label_2679ac;
        case 0x2679b0u: goto label_2679b0;
        case 0x2679b4u: goto label_2679b4;
        case 0x2679b8u: goto label_2679b8;
        case 0x2679bcu: goto label_2679bc;
        case 0x2679c0u: goto label_2679c0;
        case 0x2679c4u: goto label_2679c4;
        case 0x2679c8u: goto label_2679c8;
        case 0x2679ccu: goto label_2679cc;
        case 0x2679d0u: goto label_2679d0;
        case 0x2679d4u: goto label_2679d4;
        case 0x2679d8u: goto label_2679d8;
        case 0x2679dcu: goto label_2679dc;
        case 0x2679e0u: goto label_2679e0;
        case 0x2679e4u: goto label_2679e4;
        case 0x2679e8u: goto label_2679e8;
        case 0x2679ecu: goto label_2679ec;
        case 0x2679f0u: goto label_2679f0;
        case 0x2679f4u: goto label_2679f4;
        case 0x2679f8u: goto label_2679f8;
        case 0x2679fcu: goto label_2679fc;
        case 0x267a00u: goto label_267a00;
        case 0x267a04u: goto label_267a04;
        case 0x267a08u: goto label_267a08;
        case 0x267a0cu: goto label_267a0c;
        case 0x267a10u: goto label_267a10;
        case 0x267a14u: goto label_267a14;
        case 0x267a18u: goto label_267a18;
        case 0x267a1cu: goto label_267a1c;
        case 0x267a20u: goto label_267a20;
        case 0x267a24u: goto label_267a24;
        case 0x267a28u: goto label_267a28;
        case 0x267a2cu: goto label_267a2c;
        case 0x267a30u: goto label_267a30;
        case 0x267a34u: goto label_267a34;
        case 0x267a38u: goto label_267a38;
        case 0x267a3cu: goto label_267a3c;
        case 0x267a40u: goto label_267a40;
        case 0x267a44u: goto label_267a44;
        case 0x267a48u: goto label_267a48;
        case 0x267a4cu: goto label_267a4c;
        case 0x267a50u: goto label_267a50;
        case 0x267a54u: goto label_267a54;
        case 0x267a58u: goto label_267a58;
        case 0x267a5cu: goto label_267a5c;
        case 0x267a60u: goto label_267a60;
        case 0x267a64u: goto label_267a64;
        case 0x267a68u: goto label_267a68;
        case 0x267a6cu: goto label_267a6c;
        case 0x267a70u: goto label_267a70;
        case 0x267a74u: goto label_267a74;
        case 0x267a78u: goto label_267a78;
        case 0x267a7cu: goto label_267a7c;
        case 0x267a80u: goto label_267a80;
        case 0x267a84u: goto label_267a84;
        case 0x267a88u: goto label_267a88;
        case 0x267a8cu: goto label_267a8c;
        case 0x267a90u: goto label_267a90;
        case 0x267a94u: goto label_267a94;
        case 0x267a98u: goto label_267a98;
        case 0x267a9cu: goto label_267a9c;
        case 0x267aa0u: goto label_267aa0;
        case 0x267aa4u: goto label_267aa4;
        case 0x267aa8u: goto label_267aa8;
        case 0x267aacu: goto label_267aac;
        case 0x267ab0u: goto label_267ab0;
        case 0x267ab4u: goto label_267ab4;
        case 0x267ab8u: goto label_267ab8;
        case 0x267abcu: goto label_267abc;
        case 0x267ac0u: goto label_267ac0;
        case 0x267ac4u: goto label_267ac4;
        case 0x267ac8u: goto label_267ac8;
        case 0x267accu: goto label_267acc;
        case 0x267ad0u: goto label_267ad0;
        case 0x267ad4u: goto label_267ad4;
        case 0x267ad8u: goto label_267ad8;
        case 0x267adcu: goto label_267adc;
        case 0x267ae0u: goto label_267ae0;
        case 0x267ae4u: goto label_267ae4;
        case 0x267ae8u: goto label_267ae8;
        case 0x267aecu: goto label_267aec;
        case 0x267af0u: goto label_267af0;
        case 0x267af4u: goto label_267af4;
        case 0x267af8u: goto label_267af8;
        case 0x267afcu: goto label_267afc;
        case 0x267b00u: goto label_267b00;
        case 0x267b04u: goto label_267b04;
        case 0x267b08u: goto label_267b08;
        case 0x267b0cu: goto label_267b0c;
        case 0x267b10u: goto label_267b10;
        case 0x267b14u: goto label_267b14;
        case 0x267b18u: goto label_267b18;
        case 0x267b1cu: goto label_267b1c;
        case 0x267b20u: goto label_267b20;
        case 0x267b24u: goto label_267b24;
        case 0x267b28u: goto label_267b28;
        case 0x267b2cu: goto label_267b2c;
        case 0x267b30u: goto label_267b30;
        case 0x267b34u: goto label_267b34;
        case 0x267b38u: goto label_267b38;
        case 0x267b3cu: goto label_267b3c;
        case 0x267b40u: goto label_267b40;
        case 0x267b44u: goto label_267b44;
        case 0x267b48u: goto label_267b48;
        case 0x267b4cu: goto label_267b4c;
        case 0x267b50u: goto label_267b50;
        case 0x267b54u: goto label_267b54;
        case 0x267b58u: goto label_267b58;
        case 0x267b5cu: goto label_267b5c;
        case 0x267b60u: goto label_267b60;
        case 0x267b64u: goto label_267b64;
        case 0x267b68u: goto label_267b68;
        case 0x267b6cu: goto label_267b6c;
        case 0x267b70u: goto label_267b70;
        case 0x267b74u: goto label_267b74;
        case 0x267b78u: goto label_267b78;
        case 0x267b7cu: goto label_267b7c;
        case 0x267b80u: goto label_267b80;
        case 0x267b84u: goto label_267b84;
        case 0x267b88u: goto label_267b88;
        case 0x267b8cu: goto label_267b8c;
        case 0x267b90u: goto label_267b90;
        case 0x267b94u: goto label_267b94;
        case 0x267b98u: goto label_267b98;
        case 0x267b9cu: goto label_267b9c;
        case 0x267ba0u: goto label_267ba0;
        case 0x267ba4u: goto label_267ba4;
        case 0x267ba8u: goto label_267ba8;
        case 0x267bacu: goto label_267bac;
        case 0x267bb0u: goto label_267bb0;
        case 0x267bb4u: goto label_267bb4;
        case 0x267bb8u: goto label_267bb8;
        case 0x267bbcu: goto label_267bbc;
        case 0x267bc0u: goto label_267bc0;
        case 0x267bc4u: goto label_267bc4;
        case 0x267bc8u: goto label_267bc8;
        case 0x267bccu: goto label_267bcc;
        case 0x267bd0u: goto label_267bd0;
        case 0x267bd4u: goto label_267bd4;
        case 0x267bd8u: goto label_267bd8;
        case 0x267bdcu: goto label_267bdc;
        case 0x267be0u: goto label_267be0;
        case 0x267be4u: goto label_267be4;
        case 0x267be8u: goto label_267be8;
        case 0x267becu: goto label_267bec;
        case 0x267bf0u: goto label_267bf0;
        case 0x267bf4u: goto label_267bf4;
        case 0x267bf8u: goto label_267bf8;
        case 0x267bfcu: goto label_267bfc;
        case 0x267c00u: goto label_267c00;
        case 0x267c04u: goto label_267c04;
        case 0x267c08u: goto label_267c08;
        case 0x267c0cu: goto label_267c0c;
        case 0x267c10u: goto label_267c10;
        case 0x267c14u: goto label_267c14;
        case 0x267c18u: goto label_267c18;
        case 0x267c1cu: goto label_267c1c;
        case 0x267c20u: goto label_267c20;
        case 0x267c24u: goto label_267c24;
        case 0x267c28u: goto label_267c28;
        case 0x267c2cu: goto label_267c2c;
        case 0x267c30u: goto label_267c30;
        case 0x267c34u: goto label_267c34;
        case 0x267c38u: goto label_267c38;
        case 0x267c3cu: goto label_267c3c;
        case 0x267c40u: goto label_267c40;
        case 0x267c44u: goto label_267c44;
        case 0x267c48u: goto label_267c48;
        case 0x267c4cu: goto label_267c4c;
        case 0x267c50u: goto label_267c50;
        case 0x267c54u: goto label_267c54;
        case 0x267c58u: goto label_267c58;
        case 0x267c5cu: goto label_267c5c;
        case 0x267c60u: goto label_267c60;
        case 0x267c64u: goto label_267c64;
        case 0x267c68u: goto label_267c68;
        case 0x267c6cu: goto label_267c6c;
        case 0x267c70u: goto label_267c70;
        case 0x267c74u: goto label_267c74;
        case 0x267c78u: goto label_267c78;
        case 0x267c7cu: goto label_267c7c;
        case 0x267c80u: goto label_267c80;
        case 0x267c84u: goto label_267c84;
        case 0x267c88u: goto label_267c88;
        case 0x267c8cu: goto label_267c8c;
        case 0x267c90u: goto label_267c90;
        case 0x267c94u: goto label_267c94;
        case 0x267c98u: goto label_267c98;
        case 0x267c9cu: goto label_267c9c;
        case 0x267ca0u: goto label_267ca0;
        case 0x267ca4u: goto label_267ca4;
        case 0x267ca8u: goto label_267ca8;
        case 0x267cacu: goto label_267cac;
        case 0x267cb0u: goto label_267cb0;
        case 0x267cb4u: goto label_267cb4;
        case 0x267cb8u: goto label_267cb8;
        case 0x267cbcu: goto label_267cbc;
        case 0x267cc0u: goto label_267cc0;
        case 0x267cc4u: goto label_267cc4;
        case 0x267cc8u: goto label_267cc8;
        case 0x267cccu: goto label_267ccc;
        case 0x267cd0u: goto label_267cd0;
        case 0x267cd4u: goto label_267cd4;
        case 0x267cd8u: goto label_267cd8;
        case 0x267cdcu: goto label_267cdc;
        case 0x267ce0u: goto label_267ce0;
        case 0x267ce4u: goto label_267ce4;
        case 0x267ce8u: goto label_267ce8;
        case 0x267cecu: goto label_267cec;
        case 0x267cf0u: goto label_267cf0;
        case 0x267cf4u: goto label_267cf4;
        case 0x267cf8u: goto label_267cf8;
        case 0x267cfcu: goto label_267cfc;
        case 0x267d00u: goto label_267d00;
        case 0x267d04u: goto label_267d04;
        case 0x267d08u: goto label_267d08;
        case 0x267d0cu: goto label_267d0c;
        case 0x267d10u: goto label_267d10;
        case 0x267d14u: goto label_267d14;
        case 0x267d18u: goto label_267d18;
        case 0x267d1cu: goto label_267d1c;
        case 0x267d20u: goto label_267d20;
        case 0x267d24u: goto label_267d24;
        case 0x267d28u: goto label_267d28;
        case 0x267d2cu: goto label_267d2c;
        case 0x267d30u: goto label_267d30;
        case 0x267d34u: goto label_267d34;
        case 0x267d38u: goto label_267d38;
        case 0x267d3cu: goto label_267d3c;
        case 0x267d40u: goto label_267d40;
        case 0x267d44u: goto label_267d44;
        case 0x267d48u: goto label_267d48;
        case 0x267d4cu: goto label_267d4c;
        case 0x267d50u: goto label_267d50;
        case 0x267d54u: goto label_267d54;
        case 0x267d58u: goto label_267d58;
        case 0x267d5cu: goto label_267d5c;
        case 0x267d60u: goto label_267d60;
        case 0x267d64u: goto label_267d64;
        case 0x267d68u: goto label_267d68;
        case 0x267d6cu: goto label_267d6c;
        case 0x267d70u: goto label_267d70;
        case 0x267d74u: goto label_267d74;
        case 0x267d78u: goto label_267d78;
        case 0x267d7cu: goto label_267d7c;
        case 0x267d80u: goto label_267d80;
        case 0x267d84u: goto label_267d84;
        case 0x267d88u: goto label_267d88;
        case 0x267d8cu: goto label_267d8c;
        case 0x267d90u: goto label_267d90;
        case 0x267d94u: goto label_267d94;
        case 0x267d98u: goto label_267d98;
        case 0x267d9cu: goto label_267d9c;
        case 0x267da0u: goto label_267da0;
        case 0x267da4u: goto label_267da4;
        case 0x267da8u: goto label_267da8;
        case 0x267dacu: goto label_267dac;
        case 0x267db0u: goto label_267db0;
        case 0x267db4u: goto label_267db4;
        case 0x267db8u: goto label_267db8;
        case 0x267dbcu: goto label_267dbc;
        case 0x267dc0u: goto label_267dc0;
        case 0x267dc4u: goto label_267dc4;
        case 0x267dc8u: goto label_267dc8;
        case 0x267dccu: goto label_267dcc;
        case 0x267dd0u: goto label_267dd0;
        case 0x267dd4u: goto label_267dd4;
        case 0x267dd8u: goto label_267dd8;
        case 0x267ddcu: goto label_267ddc;
        case 0x267de0u: goto label_267de0;
        case 0x267de4u: goto label_267de4;
        default: return;
    }

label_267618:
    // 0x267618: 0x0  nop
    ctx->pc = 0x267618u;
    // NOP
label_26761c:
    // 0x26761c: 0x0  nop
    ctx->pc = 0x26761cu;
    // NOP
label_267620:
    // 0x267620: 0x116a0  .word       0x000116A0                   # add         $v0, $zero, $at # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267620u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_267624:
    // 0x267624: 0x9ce0  .word       0x00009CE0                   # add         $s3, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267624u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_267628:
    // 0x267628: 0x0  nop
    ctx->pc = 0x267628u;
    // NOP
label_26762c:
    // 0x26762c: 0x0  nop
    ctx->pc = 0x26762cu;
    // NOP
label_267630:
    // 0x267630: 0x116b4  teq         $zero, $at, 90
    ctx->pc = 0x267630u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_267634:
    // 0x267634: 0x7dc0  sll         $t7, $zero, 23
    ctx->pc = 0x267634u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_267638:
    // 0x267638: 0x0  nop
    ctx->pc = 0x267638u;
    // NOP
label_26763c:
    // 0x26763c: 0x0  nop
    ctx->pc = 0x26763cu;
    // NOP
label_267640:
    // 0x267640: 0x116c4  .word       0x000116C4                   # sllv        $v0, $at, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267640u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_267644:
    // 0x267644: 0x7290  .word       0x00007290                   # mfhi        $t6 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267644u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_267648:
    // 0x267648: 0x0  nop
    ctx->pc = 0x267648u;
    // NOP
label_26764c:
    // 0x26764c: 0x0  nop
    ctx->pc = 0x26764cu;
    // NOP
label_267650:
    // 0x267650: 0x116d3  .word       0x000116D3                   # mtlo        $zero # 000116C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267650u;
    ctx->lo = GPR_U64(ctx, 0);
label_267654:
    // 0x267654: 0x7dd0  .word       0x00007DD0                   # mfhi        $t7 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267654u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_267658:
    // 0x267658: 0x0  nop
    ctx->pc = 0x267658u;
    // NOP
label_26765c:
    // 0x26765c: 0x0  nop
    ctx->pc = 0x26765cu;
    // NOP
label_267660:
    // 0x267660: 0x116e3  .word       0x000116E3                   # negu        $v0, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267660u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_267664:
    // 0x267664: 0x96c0  sll         $s2, $zero, 27
    ctx->pc = 0x267664u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_267668:
    // 0x267668: 0x0  nop
    ctx->pc = 0x267668u;
    // NOP
label_26766c:
    // 0x26766c: 0x0  nop
    ctx->pc = 0x26766cu;
    // NOP
label_267670:
    // 0x267670: 0x116f6  tne         $zero, $at, 91
    ctx->pc = 0x267670u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_267674:
    // 0x267674: 0x5b50  .word       0x00005B50                   # mfhi        $t3 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267674u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_267678:
    // 0x267678: 0x0  nop
    ctx->pc = 0x267678u;
    // NOP
label_26767c:
    // 0x26767c: 0x0  nop
    ctx->pc = 0x26767cu;
    // NOP
label_267680:
    // 0x267680: 0x11702  srl         $v0, $at, 28
    ctx->pc = 0x267680u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 1), 28));
label_267684:
    // 0x267684: 0x8100  sll         $s0, $zero, 4
    ctx->pc = 0x267684u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_267688:
    // 0x267688: 0x0  nop
    ctx->pc = 0x267688u;
    // NOP
label_26768c:
    // 0x26768c: 0x0  nop
    ctx->pc = 0x26768cu;
    // NOP
label_267690:
    // 0x267690: 0x11713  .word       0x00011713                   # mtlo        $zero # 00011700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267690u;
    ctx->lo = GPR_U64(ctx, 0);
label_267694:
    // 0x267694: 0x67a0  .word       0x000067A0                   # add         $t4, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267694u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_267698:
    // 0x267698: 0x0  nop
    ctx->pc = 0x267698u;
    // NOP
label_26769c:
    // 0x26769c: 0x0  nop
    ctx->pc = 0x26769cu;
    // NOP
label_2676a0:
    // 0x2676a0: 0x11720  .word       0x00011720                   # add         $v0, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2676a0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_2676a4:
    // 0x2676a4: 0x68e0  .word       0x000068E0                   # add         $t5, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2676a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_2676a8:
    // 0x2676a8: 0x0  nop
    ctx->pc = 0x2676a8u;
    // NOP
label_2676ac:
    // 0x2676ac: 0x0  nop
    ctx->pc = 0x2676acu;
    // NOP
label_2676b0:
    // 0x2676b0: 0x1172e  .word       0x0001172E                   # dsub        $v0, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2676b0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, r); }
label_2676b4:
    // 0x2676b4: 0x5bd0  .word       0x00005BD0                   # mfhi        $t3 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2676b4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_2676b8:
    // 0x2676b8: 0x0  nop
    ctx->pc = 0x2676b8u;
    // NOP
label_2676bc:
    // 0x2676bc: 0x0  nop
    ctx->pc = 0x2676bcu;
    // NOP
label_2676c0:
    // 0x2676c0: 0x1173a  dsrl        $v0, $at, 28
    ctx->pc = 0x2676c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) >> 28);
label_2676c4:
    // 0x2676c4: 0x7ff0  tge         $zero, $zero, 511
    ctx->pc = 0x2676c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2676c8:
    // 0x2676c8: 0x0  nop
    ctx->pc = 0x2676c8u;
    // NOP
label_2676cc:
    // 0x2676cc: 0x0  nop
    ctx->pc = 0x2676ccu;
    // NOP
label_2676d0:
    // 0x2676d0: 0x1174a  .word       0x0001174A                   # movz        $v0, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2676d0u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_2676d4:
    // 0x2676d4: 0x6f80  sll         $t5, $zero, 30
    ctx->pc = 0x2676d4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_2676d8:
    // 0x2676d8: 0x0  nop
    ctx->pc = 0x2676d8u;
    // NOP
label_2676dc:
    // 0x2676dc: 0x0  nop
    ctx->pc = 0x2676dcu;
    // NOP
label_2676e0:
    // 0x2676e0: 0x11758  .word       0x00011758                   # mult        $v0, $zero, $at # 00000740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2676e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2676e4:
    // 0x2676e4: 0x74f0  tge         $zero, $zero, 467
    ctx->pc = 0x2676e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2676e8:
    // 0x2676e8: 0x0  nop
    ctx->pc = 0x2676e8u;
    // NOP
label_2676ec:
    // 0x2676ec: 0x0  nop
    ctx->pc = 0x2676ecu;
    // NOP
label_2676f0:
    // 0x2676f0: 0x11767  .word       0x00011767                   # nor         $v0, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2676f0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_2676f4:
    // 0x2676f4: 0x80a0  .word       0x000080A0                   # add         $s0, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2676f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2676f8:
    // 0x2676f8: 0x0  nop
    ctx->pc = 0x2676f8u;
    // NOP
label_2676fc:
    // 0x2676fc: 0x0  nop
    ctx->pc = 0x2676fcu;
    // NOP
label_267700:
    // 0x267700: 0x11778  dsll        $v0, $at, 29
    ctx->pc = 0x267700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) << 29);
label_267704:
    // 0x267704: 0x59c0  sll         $t3, $zero, 7
    ctx->pc = 0x267704u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_267708:
    // 0x267708: 0x0  nop
    ctx->pc = 0x267708u;
    // NOP
label_26770c:
    // 0x26770c: 0x0  nop
    ctx->pc = 0x26770cu;
    // NOP
label_267710:
    // 0x267710: 0x11784  .word       0x00011784                   # sllv        $v0, $at, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267710u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_267714:
    // 0x267714: 0x3e90  .word       0x00003E90                   # mfhi        $a3 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267714u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_267718:
    // 0x267718: 0x0  nop
    ctx->pc = 0x267718u;
    // NOP
label_26771c:
    // 0x26771c: 0x0  nop
    ctx->pc = 0x26771cu;
    // NOP
label_267720:
    // 0x267720: 0x1178c  .word       0x0001178C                   # syscall     94 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267720u;
    ctx->pc = 0x267724u;
runtime->handleSyscall(rdram, ctx, 0x45Eu);
label_267724:
    // 0x267724: 0x9260  .word       0x00009260                   # add         $s2, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267724u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_267728:
    // 0x267728: 0x0  nop
    ctx->pc = 0x267728u;
    // NOP
label_26772c:
    // 0x26772c: 0x0  nop
    ctx->pc = 0x26772cu;
    // NOP
label_267730:
    // 0x267730: 0x1179f  .word       0x0001179F                   # ddivu       $v0, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267730u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x267730 raw=0x0001179F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267734:
    // 0x267734: 0xab70  tge         $zero, $zero, 685
    ctx->pc = 0x267734u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267738:
    // 0x267738: 0x0  nop
    ctx->pc = 0x267738u;
    // NOP
label_26773c:
    // 0x26773c: 0x0  nop
    ctx->pc = 0x26773cu;
    // NOP
label_267740:
    // 0x267740: 0x117b5  .word       0x000117B5                   # INVALID     $zero, $at, 0x17B5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267740u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x267740 raw=0x000117B5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267744:
    // 0x267744: 0x7600  sll         $t6, $zero, 24
    ctx->pc = 0x267744u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_267748:
    // 0x267748: 0x0  nop
    ctx->pc = 0x267748u;
    // NOP
label_26774c:
    // 0x26774c: 0x0  nop
    ctx->pc = 0x26774cu;
    // NOP
label_267750:
    // 0x267750: 0x117c4  .word       0x000117C4                   # sllv        $v0, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_267754:
    // 0x267754: 0x9bd0  .word       0x00009BD0                   # mfhi        $s3 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267754u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_267758:
    // 0x267758: 0x0  nop
    ctx->pc = 0x267758u;
    // NOP
label_26775c:
    // 0x26775c: 0x0  nop
    ctx->pc = 0x26775cu;
    // NOP
label_267760:
    // 0x267760: 0x117d8  .word       0x000117D8                   # mult        $v0, $zero, $at # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x267760u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_267764:
    // 0x267764: 0x97f0  tge         $zero, $zero, 607
    ctx->pc = 0x267764u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267768:
    // 0x267768: 0x0  nop
    ctx->pc = 0x267768u;
    // NOP
label_26776c:
    // 0x26776c: 0x0  nop
    ctx->pc = 0x26776cu;
    // NOP
label_267770:
    // 0x267770: 0x117eb  .word       0x000117EB                   # sltu        $v0, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267770u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_267774:
    // 0x267774: 0x9790  .word       0x00009790                   # mfhi        $s2 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267774u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_267778:
    // 0x267778: 0x0  nop
    ctx->pc = 0x267778u;
    // NOP
label_26777c:
    // 0x26777c: 0x0  nop
    ctx->pc = 0x26777cu;
    // NOP
label_267780:
    // 0x267780: 0x117fe  dsrl32      $v0, $at, 31
    ctx->pc = 0x267780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) >> (32 + 31));
label_267784:
    // 0x267784: 0xf270  tge         $zero, $zero, 969
    ctx->pc = 0x267784u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267788:
    // 0x267788: 0x0  nop
    ctx->pc = 0x267788u;
    // NOP
label_26778c:
    // 0x26778c: 0x0  nop
    ctx->pc = 0x26778cu;
    // NOP
label_267790:
    // 0x267790: 0x1181d  .word       0x0001181D                   # dmultu      $zero, $at # 00001800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267790u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x267790 raw=0x0001181D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267794:
    // 0x267794: 0xa300  sll         $s4, $zero, 12
    ctx->pc = 0x267794u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_267798:
    // 0x267798: 0x0  nop
    ctx->pc = 0x267798u;
    // NOP
label_26779c:
    // 0x26779c: 0x0  nop
    ctx->pc = 0x26779cu;
    // NOP
label_2677a0:
    // 0x2677a0: 0x11832  tlt         $zero, $at, 96
    ctx->pc = 0x2677a0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2677a4:
    // 0x2677a4: 0xadd0  .word       0x0000ADD0                   # mfhi        $s5 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2677a4u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_2677a8:
    // 0x2677a8: 0x0  nop
    ctx->pc = 0x2677a8u;
    // NOP
label_2677ac:
    // 0x2677ac: 0x0  nop
    ctx->pc = 0x2677acu;
    // NOP
label_2677b0:
    // 0x2677b0: 0x11848  .word       0x00011848                   # jr          $zero # 00011840 <InstrIdType: CPU_SPECIAL>
label_2677b4:
    if (ctx->pc == 0x2677B4u) {
        ctx->pc = 0x2677B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2677B0u;
        // 0x2677b4: 0x8550  .word       0x00008550                   # mfhi        $s0 # 00000540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 16, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2677B8u;
        goto label_2677b8;
    }
    ctx->pc = 0x2677B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2677B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2677B0u;
        // 0x2677b4: 0x8550  .word       0x00008550                   # mfhi        $s0 # 00000540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 16, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2677B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2677B8u;
label_2677b8:
    // 0x2677b8: 0x0  nop
    ctx->pc = 0x2677b8u;
    // NOP
label_2677bc:
    // 0x2677bc: 0x0  nop
    ctx->pc = 0x2677bcu;
    // NOP
label_2677c0:
    // 0x2677c0: 0x11859  .word       0x00011859                   # multu       $zero, $at # 00001840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2677c0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2677c4:
    // 0x2677c4: 0xb4b0  tge         $zero, $zero, 722
    ctx->pc = 0x2677c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2677c8:
    // 0x2677c8: 0x0  nop
    ctx->pc = 0x2677c8u;
    // NOP
label_2677cc:
    // 0x2677cc: 0x0  nop
    ctx->pc = 0x2677ccu;
    // NOP
label_2677d0:
    // 0x2677d0: 0x11870  tge         $zero, $at, 97
    ctx->pc = 0x2677d0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2677d4:
    // 0x2677d4: 0xde70  tge         $zero, $zero, 889
    ctx->pc = 0x2677d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2677d8:
    // 0x2677d8: 0x0  nop
    ctx->pc = 0x2677d8u;
    // NOP
label_2677dc:
    // 0x2677dc: 0x0  nop
    ctx->pc = 0x2677dcu;
    // NOP
label_2677e0:
    // 0x2677e0: 0x1188c  .word       0x0001188C                   # syscall     98 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2677e0u;
    ctx->pc = 0x2677E4u;
runtime->handleSyscall(rdram, ctx, 0x462u);
label_2677e4:
    // 0x2677e4: 0x83f0  tge         $zero, $zero, 527
    ctx->pc = 0x2677e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2677e8:
    // 0x2677e8: 0x0  nop
    ctx->pc = 0x2677e8u;
    // NOP
label_2677ec:
    // 0x2677ec: 0x0  nop
    ctx->pc = 0x2677ecu;
    // NOP
label_2677f0:
    // 0x2677f0: 0x1189d  .word       0x0001189D                   # dmultu      $zero, $at # 00001880 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2677f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2677F0 raw=0x0001189D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2677f4:
    // 0x2677f4: 0xcb30  tge         $zero, $zero, 812
    ctx->pc = 0x2677f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2677f8:
    // 0x2677f8: 0x0  nop
    ctx->pc = 0x2677f8u;
    // NOP
label_2677fc:
    // 0x2677fc: 0x0  nop
    ctx->pc = 0x2677fcu;
    // NOP
label_267800:
    // 0x267800: 0x118b7  .word       0x000118B7                   # INVALID     $zero, $at, 0x18B7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267800u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x267800 raw=0x000118B7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267804:
    // 0x267804: 0x9f20  .word       0x00009F20                   # add         $s3, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267804u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_267808:
    // 0x267808: 0x0  nop
    ctx->pc = 0x267808u;
    // NOP
label_26780c:
    // 0x26780c: 0x0  nop
    ctx->pc = 0x26780cu;
    // NOP
label_267810:
    // 0x267810: 0x118cb  .word       0x000118CB                   # movn        $v1, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267810u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_267814:
    // 0x267814: 0xc3b0  tge         $zero, $zero, 782
    ctx->pc = 0x267814u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267818:
    // 0x267818: 0x0  nop
    ctx->pc = 0x267818u;
    // NOP
label_26781c:
    // 0x26781c: 0x0  nop
    ctx->pc = 0x26781cu;
    // NOP
label_267820:
    // 0x267820: 0x118e4  .word       0x000118E4                   # and         $v1, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_267824:
    // 0x267824: 0x6c00  sll         $t5, $zero, 16
    ctx->pc = 0x267824u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_267828:
    // 0x267828: 0x0  nop
    ctx->pc = 0x267828u;
    // NOP
label_26782c:
    // 0x26782c: 0x0  nop
    ctx->pc = 0x26782cu;
    // NOP
label_267830:
    // 0x267830: 0x118f2  tlt         $zero, $at, 99
    ctx->pc = 0x267830u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_267834:
    // 0x267834: 0xf060  .word       0x0000F060                   # add         $fp, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267834u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_267838:
    // 0x267838: 0x0  nop
    ctx->pc = 0x267838u;
    // NOP
label_26783c:
    // 0x26783c: 0x0  nop
    ctx->pc = 0x26783cu;
    // NOP
label_267840:
    // 0x267840: 0x11911  .word       0x00011911                   # mthi        $zero # 00011900 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267840u;
    ctx->hi = GPR_U64(ctx, 0);
label_267844:
    // 0x267844: 0xb800  sll         $s7, $zero, 0
    ctx->pc = 0x267844u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_267848:
    // 0x267848: 0x0  nop
    ctx->pc = 0x267848u;
    // NOP
label_26784c:
    // 0x26784c: 0x0  nop
    ctx->pc = 0x26784cu;
    // NOP
label_267850:
    // 0x267850: 0x11928  .word       0x00011928                   # mfsa        $v1 # 00010100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x267850u;
    SET_GPR_U32(ctx, 3, ctx->sa);
label_267854:
    // 0x267854: 0x9ae0  .word       0x00009AE0                   # add         $s3, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267854u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_267858:
    // 0x267858: 0x0  nop
    ctx->pc = 0x267858u;
    // NOP
label_26785c:
    // 0x26785c: 0x0  nop
    ctx->pc = 0x26785cu;
    // NOP
label_267860:
    // 0x267860: 0x1193c  dsll32      $v1, $at, 4
    ctx->pc = 0x267860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 1) << (32 + 4));
label_267864:
    // 0x267864: 0x71c0  sll         $t6, $zero, 7
    ctx->pc = 0x267864u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_267868:
    // 0x267868: 0x0  nop
    ctx->pc = 0x267868u;
    // NOP
label_26786c:
    // 0x26786c: 0x0  nop
    ctx->pc = 0x26786cu;
    // NOP
label_267870:
    // 0x267870: 0x1194b  .word       0x0001194B                   # movn        $v1, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267870u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_267874:
    // 0x267874: 0x77a0  .word       0x000077A0                   # add         $t6, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267874u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_267878:
    // 0x267878: 0x0  nop
    ctx->pc = 0x267878u;
    // NOP
label_26787c:
    // 0x26787c: 0x0  nop
    ctx->pc = 0x26787cu;
    // NOP
label_267880:
    // 0x267880: 0x1195a  .word       0x0001195A                   # div         $v1, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267880u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_267884:
    // 0x267884: 0xf180  sll         $fp, $zero, 6
    ctx->pc = 0x267884u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_267888:
    // 0x267888: 0x0  nop
    ctx->pc = 0x267888u;
    // NOP
label_26788c:
    // 0x26788c: 0x0  nop
    ctx->pc = 0x26788cu;
    // NOP
label_267890:
    // 0x267890: 0x11979  .word       0x00011979                   # INVALID     $zero, $at, 0x1979 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267890u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x267890 raw=0x00011979"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267894:
    // 0x267894: 0x97d0  .word       0x000097D0                   # mfhi        $s2 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267894u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_267898:
    // 0x267898: 0x0  nop
    ctx->pc = 0x267898u;
    // NOP
label_26789c:
    // 0x26789c: 0x0  nop
    ctx->pc = 0x26789cu;
    // NOP
label_2678a0:
    // 0x2678a0: 0x1198c  .word       0x0001198C                   # syscall     102 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2678a0u;
    ctx->pc = 0x2678A4u;
runtime->handleSyscall(rdram, ctx, 0x466u);
label_2678a4:
    // 0x2678a4: 0x7510  .word       0x00007510                   # mfhi        $t6 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2678a4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_2678a8:
    // 0x2678a8: 0x0  nop
    ctx->pc = 0x2678a8u;
    // NOP
label_2678ac:
    // 0x2678ac: 0x0  nop
    ctx->pc = 0x2678acu;
    // NOP
label_2678b0:
    // 0x2678b0: 0x1199b  .word       0x0001199B                   # divu        $v1, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2678b0u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2678b4:
    // 0x2678b4: 0xa670  tge         $zero, $zero, 665
    ctx->pc = 0x2678b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2678b8:
    // 0x2678b8: 0x0  nop
    ctx->pc = 0x2678b8u;
    // NOP
label_2678bc:
    // 0x2678bc: 0x0  nop
    ctx->pc = 0x2678bcu;
    // NOP
label_2678c0:
    // 0x2678c0: 0x119b0  tge         $zero, $at, 102
    ctx->pc = 0x2678c0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2678c4:
    // 0x2678c4: 0x9770  tge         $zero, $zero, 605
    ctx->pc = 0x2678c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2678c8:
    // 0x2678c8: 0x0  nop
    ctx->pc = 0x2678c8u;
    // NOP
label_2678cc:
    // 0x2678cc: 0x0  nop
    ctx->pc = 0x2678ccu;
    // NOP
label_2678d0:
    // 0x2678d0: 0x119c3  sra         $v1, $at, 7
    ctx->pc = 0x2678d0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 1), 7));
label_2678d4:
    // 0x2678d4: 0xa8e0  .word       0x0000A8E0                   # add         $s5, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2678d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_2678d8:
    // 0x2678d8: 0x0  nop
    ctx->pc = 0x2678d8u;
    // NOP
label_2678dc:
    // 0x2678dc: 0x0  nop
    ctx->pc = 0x2678dcu;
    // NOP
label_2678e0:
    // 0x2678e0: 0x119d9  .word       0x000119D9                   # multu       $zero, $at # 000019C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2678e0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2678e4:
    // 0x2678e4: 0x8570  tge         $zero, $zero, 533
    ctx->pc = 0x2678e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2678e8:
    // 0x2678e8: 0x0  nop
    ctx->pc = 0x2678e8u;
    // NOP
label_2678ec:
    // 0x2678ec: 0x0  nop
    ctx->pc = 0x2678ecu;
    // NOP
label_2678f0:
    // 0x2678f0: 0x119ea  .word       0x000119EA                   # slt         $v1, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2678f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_2678f4:
    // 0x2678f4: 0xdd90  .word       0x0000DD90                   # mfhi        $k1 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2678f4u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_2678f8:
    // 0x2678f8: 0x0  nop
    ctx->pc = 0x2678f8u;
    // NOP
label_2678fc:
    // 0x2678fc: 0x0  nop
    ctx->pc = 0x2678fcu;
    // NOP
label_267900:
    // 0x267900: 0x11a06  .word       0x00011A06                   # srlv        $v1, $at, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267900u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_267904:
    // 0x267904: 0xa150  .word       0x0000A150                   # mfhi        $s4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267904u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_267908:
    // 0x267908: 0x0  nop
    ctx->pc = 0x267908u;
    // NOP
label_26790c:
    // 0x26790c: 0x0  nop
    ctx->pc = 0x26790cu;
    // NOP
label_267910:
    // 0x267910: 0x11a1b  .word       0x00011A1B                   # divu        $v1, $zero, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267910u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_267914:
    // 0x267914: 0xa150  .word       0x0000A150                   # mfhi        $s4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267914u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_267918:
    // 0x267918: 0x0  nop
    ctx->pc = 0x267918u;
    // NOP
label_26791c:
    // 0x26791c: 0x0  nop
    ctx->pc = 0x26791cu;
    // NOP
label_267920:
    // 0x267920: 0x11a30  tge         $zero, $at, 104
    ctx->pc = 0x267920u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_267924:
    // 0x267924: 0x8620  .word       0x00008620                   # add         $s0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267924u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_267928:
    // 0x267928: 0x0  nop
    ctx->pc = 0x267928u;
    // NOP
label_26792c:
    // 0x26792c: 0x0  nop
    ctx->pc = 0x26792cu;
    // NOP
label_267930:
    // 0x267930: 0x11a41  .word       0x00011A41                   # INVALID     $zero, $at, 0x1A41 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267930u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x267930 raw=0x00011A41"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267934:
    // 0x267934: 0x8050  .word       0x00008050                   # mfhi        $s0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267934u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_267938:
    // 0x267938: 0x0  nop
    ctx->pc = 0x267938u;
    // NOP
label_26793c:
    // 0x26793c: 0x0  nop
    ctx->pc = 0x26793cu;
    // NOP
label_267940:
    // 0x267940: 0x11a52  .word       0x00011A52                   # mflo        $v1 # 00010240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267940u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_267944:
    // 0x267944: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x267944u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_267948:
    // 0x267948: 0x0  nop
    ctx->pc = 0x267948u;
    // NOP
label_26794c:
    // 0x26794c: 0x0  nop
    ctx->pc = 0x26794cu;
    // NOP
label_267950:
    // 0x267950: 0x11a5f  .word       0x00011A5F                   # ddivu       $v1, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267950u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x267950 raw=0x00011A5F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267954:
    // 0x267954: 0xad90  .word       0x0000AD90                   # mfhi        $s5 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267954u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_267958:
    // 0x267958: 0x0  nop
    ctx->pc = 0x267958u;
    // NOP
label_26795c:
    // 0x26795c: 0x0  nop
    ctx->pc = 0x26795cu;
    // NOP
label_267960:
    // 0x267960: 0x11a75  .word       0x00011A75                   # INVALID     $zero, $at, 0x1A75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267960u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x267960 raw=0x00011A75"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267964:
    // 0x267964: 0xc8b0  tge         $zero, $zero, 802
    ctx->pc = 0x267964u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267968:
    // 0x267968: 0x0  nop
    ctx->pc = 0x267968u;
    // NOP
label_26796c:
    // 0x26796c: 0x0  nop
    ctx->pc = 0x26796cu;
    // NOP
label_267970:
    // 0x267970: 0x11a8f  .word       0x00011A8F                   # sync # 00011800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267970u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_267974:
    // 0x267974: 0xb140  sll         $s6, $zero, 5
    ctx->pc = 0x267974u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_267978:
    // 0x267978: 0x0  nop
    ctx->pc = 0x267978u;
    // NOP
label_26797c:
    // 0x26797c: 0x0  nop
    ctx->pc = 0x26797cu;
    // NOP
label_267980:
    // 0x267980: 0x11aa6  .word       0x00011AA6                   # xor         $v1, $zero, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_267984:
    // 0x267984: 0x9f20  .word       0x00009F20                   # add         $s3, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267984u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_267988:
    // 0x267988: 0x0  nop
    ctx->pc = 0x267988u;
    // NOP
label_26798c:
    // 0x26798c: 0x0  nop
    ctx->pc = 0x26798cu;
    // NOP
label_267990:
    // 0x267990: 0x11aba  dsrl        $v1, $at, 10
    ctx->pc = 0x267990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 1) >> 10);
label_267994:
    // 0x267994: 0xa090  .word       0x0000A090                   # mfhi        $s4 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267994u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_267998:
    // 0x267998: 0x0  nop
    ctx->pc = 0x267998u;
    // NOP
label_26799c:
    // 0x26799c: 0x0  nop
    ctx->pc = 0x26799cu;
    // NOP
label_2679a0:
    // 0x2679a0: 0x11acf  .word       0x00011ACF                   # sync # 00011800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2679a0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2679a4:
    // 0x2679a4: 0xab80  sll         $s5, $zero, 14
    ctx->pc = 0x2679a4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_2679a8:
    // 0x2679a8: 0x0  nop
    ctx->pc = 0x2679a8u;
    // NOP
label_2679ac:
    // 0x2679ac: 0x0  nop
    ctx->pc = 0x2679acu;
    // NOP
label_2679b0:
    // 0x2679b0: 0x11ae5  .word       0x00011AE5                   # or          $v1, $zero, $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2679b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_2679b4:
    // 0x2679b4: 0x5410  .word       0x00005410                   # mfhi        $t2 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2679b4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_2679b8:
    // 0x2679b8: 0x0  nop
    ctx->pc = 0x2679b8u;
    // NOP
label_2679bc:
    // 0x2679bc: 0x0  nop
    ctx->pc = 0x2679bcu;
    // NOP
label_2679c0:
    // 0x2679c0: 0x11af0  tge         $zero, $at, 107
    ctx->pc = 0x2679c0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2679c4:
    // 0x2679c4: 0x3530  tge         $zero, $zero, 212
    ctx->pc = 0x2679c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2679c8:
    // 0x2679c8: 0x0  nop
    ctx->pc = 0x2679c8u;
    // NOP
label_2679cc:
    // 0x2679cc: 0x0  nop
    ctx->pc = 0x2679ccu;
    // NOP
label_2679d0:
    // 0x2679d0: 0x11af7  .word       0x00011AF7                   # INVALID     $zero, $at, 0x1AF7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2679d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2679D0 raw=0x00011AF7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2679d4:
    // 0x2679d4: 0x8e20  .word       0x00008E20                   # add         $s1, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2679d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2679d8:
    // 0x2679d8: 0x0  nop
    ctx->pc = 0x2679d8u;
    // NOP
label_2679dc:
    // 0x2679dc: 0x0  nop
    ctx->pc = 0x2679dcu;
    // NOP
label_2679e0:
    // 0x2679e0: 0x11b09  .word       0x00011B09                   # jalr        $v1, $zero # 00010300 <InstrIdType: CPU_SPECIAL>
label_2679e4:
    if (ctx->pc == 0x2679E4u) {
        ctx->pc = 0x2679E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2679E0u;
        // 0x2679e4: 0xb9c0  sll         $s7, $zero, 7 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2679E8u;
        goto label_2679e8;
    }
    ctx->pc = 0x2679E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 3, 0x2679E8u);
        ctx->pc = 0x2679E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2679E0u;
        // 0x2679e4: 0xb9c0  sll         $s7, $zero, 7 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2679E0u, 0x2679E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2679E8u;
label_2679e8:
    // 0x2679e8: 0x0  nop
    ctx->pc = 0x2679e8u;
    // NOP
label_2679ec:
    // 0x2679ec: 0x0  nop
    ctx->pc = 0x2679ecu;
    // NOP
label_2679f0:
    // 0x2679f0: 0x11b21  .word       0x00011B21                   # addu        $v1, $zero, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2679f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_2679f4:
    // 0x2679f4: 0x51d0  .word       0x000051D0                   # mfhi        $t2 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2679f4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_2679f8:
    // 0x2679f8: 0x0  nop
    ctx->pc = 0x2679f8u;
    // NOP
label_2679fc:
    // 0x2679fc: 0x0  nop
    ctx->pc = 0x2679fcu;
    // NOP
label_267a00:
    // 0x267a00: 0x11b2c  .word       0x00011B2C                   # dadd        $v1, $zero, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267a00u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, r); }
label_267a04:
    // 0x267a04: 0xe270  tge         $zero, $zero, 905
    ctx->pc = 0x267a04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267a08:
    // 0x267a08: 0x0  nop
    ctx->pc = 0x267a08u;
    // NOP
label_267a0c:
    // 0x267a0c: 0x0  nop
    ctx->pc = 0x267a0cu;
    // NOP
label_267a10:
    // 0x267a10: 0x11b49  .word       0x00011B49                   # jalr        $v1, $zero # 00010340 <InstrIdType: CPU_SPECIAL>
label_267a14:
    if (ctx->pc == 0x267A14u) {
        ctx->pc = 0x267A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A10u;
        // 0x267a14: 0x8fd0  .word       0x00008FD0                   # mfhi        $s1 # 000007C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 17, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x267A18u;
        goto label_267a18;
    }
    ctx->pc = 0x267A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 3, 0x267A18u);
        ctx->pc = 0x267A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A10u;
        // 0x267a14: 0x8fd0  .word       0x00008FD0                   # mfhi        $s1 # 000007C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 17, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267A10u, 0x267A18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x267A18u;
label_267a18:
    // 0x267a18: 0x0  nop
    ctx->pc = 0x267a18u;
    // NOP
label_267a1c:
    // 0x267a1c: 0x0  nop
    ctx->pc = 0x267a1cu;
    // NOP
label_267a20:
    // 0x267a20: 0x11b5b  .word       0x00011B5B                   # divu        $v1, $zero, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267a20u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_267a24:
    // 0x267a24: 0x9cd0  .word       0x00009CD0                   # mfhi        $s3 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267a24u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_267a28:
    // 0x267a28: 0x0  nop
    ctx->pc = 0x267a28u;
    // NOP
label_267a2c:
    // 0x267a2c: 0x0  nop
    ctx->pc = 0x267a2cu;
    // NOP
label_267a30:
    // 0x267a30: 0x11b6f  .word       0x00011B6F                   # dsubu       $v1, $zero, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_267a34:
    // 0x267a34: 0x83d0  .word       0x000083D0                   # mfhi        $s0 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267a34u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_267a38:
    // 0x267a38: 0x0  nop
    ctx->pc = 0x267a38u;
    // NOP
label_267a3c:
    // 0x267a3c: 0x0  nop
    ctx->pc = 0x267a3cu;
    // NOP
label_267a40:
    // 0x267a40: 0x11b80  sll         $v1, $at, 14
    ctx->pc = 0x267a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 14));
label_267a44:
    // 0x267a44: 0x8f90  .word       0x00008F90                   # mfhi        $s1 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267a44u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_267a48:
    // 0x267a48: 0x0  nop
    ctx->pc = 0x267a48u;
    // NOP
label_267a4c:
    // 0x267a4c: 0x0  nop
    ctx->pc = 0x267a4cu;
    // NOP
label_267a50:
    // 0x267a50: 0x11b92  .word       0x00011B92                   # mflo        $v1 # 00010380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267a50u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_267a54:
    // 0x267a54: 0x5200  sll         $t2, $zero, 8
    ctx->pc = 0x267a54u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_267a58:
    // 0x267a58: 0x0  nop
    ctx->pc = 0x267a58u;
    // NOP
label_267a5c:
    // 0x267a5c: 0x0  nop
    ctx->pc = 0x267a5cu;
    // NOP
label_267a60:
    // 0x267a60: 0x11b9d  .word       0x00011B9D                   # dmultu      $zero, $at # 00001B80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267a60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x267A60 raw=0x00011B9D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267a64:
    // 0x267a64: 0xb390  .word       0x0000B390                   # mfhi        $s6 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267a64u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_267a68:
    // 0x267a68: 0x0  nop
    ctx->pc = 0x267a68u;
    // NOP
label_267a6c:
    // 0x267a6c: 0x0  nop
    ctx->pc = 0x267a6cu;
    // NOP
label_267a70:
    // 0x267a70: 0x11bb4  teq         $zero, $at, 110
    ctx->pc = 0x267a70u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_267a74:
    // 0x267a74: 0x4290  .word       0x00004290                   # mfhi        $t0 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267a74u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_267a78:
    // 0x267a78: 0x0  nop
    ctx->pc = 0x267a78u;
    // NOP
label_267a7c:
    // 0x267a7c: 0x0  nop
    ctx->pc = 0x267a7cu;
    // NOP
label_267a80:
    // 0x267a80: 0x11bbd  .word       0x00011BBD                   # INVALID     $zero, $at, 0x1BBD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267a80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x267A80 raw=0x00011BBD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267a84:
    // 0x267a84: 0x74c0  sll         $t6, $zero, 19
    ctx->pc = 0x267a84u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_267a88:
    // 0x267a88: 0x0  nop
    ctx->pc = 0x267a88u;
    // NOP
label_267a8c:
    // 0x267a8c: 0x0  nop
    ctx->pc = 0x267a8cu;
    // NOP
label_267a90:
    // 0x267a90: 0x11bcc  .word       0x00011BCC                   # syscall     111 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267a90u;
    ctx->pc = 0x267A94u;
runtime->handleSyscall(rdram, ctx, 0x46Fu);
label_267a94:
    // 0x267a94: 0xab70  tge         $zero, $zero, 685
    ctx->pc = 0x267a94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267a98:
    // 0x267a98: 0x0  nop
    ctx->pc = 0x267a98u;
    // NOP
label_267a9c:
    // 0x267a9c: 0x0  nop
    ctx->pc = 0x267a9cu;
    // NOP
label_267aa0:
    // 0x267aa0: 0x11be2  .word       0x00011BE2                   # neg         $v1, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267aa0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
label_267aa4:
    // 0x267aa4: 0x7410  .word       0x00007410                   # mfhi        $t6 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267aa4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_267aa8:
    // 0x267aa8: 0x0  nop
    ctx->pc = 0x267aa8u;
    // NOP
label_267aac:
    // 0x267aac: 0x0  nop
    ctx->pc = 0x267aacu;
    // NOP
label_267ab0:
    // 0x267ab0: 0x11bf1  tgeu        $zero, $at, 111
    ctx->pc = 0x267ab0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_267ab4:
    // 0x267ab4: 0x99e0  .word       0x000099E0                   # add         $s3, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267ab4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_267ab8:
    // 0x267ab8: 0x0  nop
    ctx->pc = 0x267ab8u;
    // NOP
label_267abc:
    // 0x267abc: 0x0  nop
    ctx->pc = 0x267abcu;
    // NOP
label_267ac0:
    // 0x267ac0: 0x11c05  .word       0x00011C05                   # INVALID     $zero, $at, 0x1C05 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267ac0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x267AC0 raw=0x00011C05"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267ac4:
    // 0x267ac4: 0x6880  sll         $t5, $zero, 2
    ctx->pc = 0x267ac4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_267ac8:
    // 0x267ac8: 0x0  nop
    ctx->pc = 0x267ac8u;
    // NOP
label_267acc:
    // 0x267acc: 0x0  nop
    ctx->pc = 0x267accu;
    // NOP
label_267ad0:
    // 0x267ad0: 0x11c13  .word       0x00011C13                   # mtlo        $zero # 00011C00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267ad0u;
    ctx->lo = GPR_U64(ctx, 0);
label_267ad4:
    // 0x267ad4: 0xa680  sll         $s4, $zero, 26
    ctx->pc = 0x267ad4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_267ad8:
    // 0x267ad8: 0x0  nop
    ctx->pc = 0x267ad8u;
    // NOP
label_267adc:
    // 0x267adc: 0x0  nop
    ctx->pc = 0x267adcu;
    // NOP
label_267ae0:
    // 0x267ae0: 0x11c28  .word       0x00011C28                   # mfsa        $v1 # 00010400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x267ae0u;
    SET_GPR_U32(ctx, 3, ctx->sa);
label_267ae4:
    // 0x267ae4: 0x5680  sll         $t2, $zero, 26
    ctx->pc = 0x267ae4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_267ae8:
    // 0x267ae8: 0x0  nop
    ctx->pc = 0x267ae8u;
    // NOP
label_267aec:
    // 0x267aec: 0x0  nop
    ctx->pc = 0x267aecu;
    // NOP
label_267af0:
    // 0x267af0: 0x11c33  tltu        $zero, $at, 112
    ctx->pc = 0x267af0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_267af4:
    // 0x267af4: 0x3a10  .word       0x00003A10                   # mfhi        $a3 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267af4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_267af8:
    // 0x267af8: 0x0  nop
    ctx->pc = 0x267af8u;
    // NOP
label_267afc:
    // 0x267afc: 0x0  nop
    ctx->pc = 0x267afcu;
    // NOP
label_267b00:
    // 0x267b00: 0x11c3b  dsra        $v1, $at, 16
    ctx->pc = 0x267b00u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 1) >> 16);
label_267b04:
    // 0x267b04: 0x6500  sll         $t4, $zero, 20
    ctx->pc = 0x267b04u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_267b08:
    // 0x267b08: 0x0  nop
    ctx->pc = 0x267b08u;
    // NOP
label_267b0c:
    // 0x267b0c: 0x0  nop
    ctx->pc = 0x267b0cu;
    // NOP
label_267b10:
    // 0x267b10: 0x11c48  .word       0x00011C48                   # jr          $zero # 00011C40 <InstrIdType: CPU_SPECIAL>
label_267b14:
    if (ctx->pc == 0x267B14u) {
        ctx->pc = 0x267B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267B10u;
        // 0x267b14: 0x6700  sll         $t4, $zero, 28 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267B18u;
        goto label_267b18;
    }
    ctx->pc = 0x267B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x267B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267B10u;
        // 0x267b14: 0x6700  sll         $t4, $zero, 28 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267B10u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x267B18u;
label_267b18:
    // 0x267b18: 0x0  nop
    ctx->pc = 0x267b18u;
    // NOP
label_267b1c:
    // 0x267b1c: 0x0  nop
    ctx->pc = 0x267b1cu;
    // NOP
label_267b20:
    // 0x267b20: 0x11c55  .word       0x00011C55                   # INVALID     $zero, $at, 0x1C55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267b20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x267B20 raw=0x00011C55"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267b24:
    // 0x267b24: 0x6700  sll         $t4, $zero, 28
    ctx->pc = 0x267b24u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_267b28:
    // 0x267b28: 0x0  nop
    ctx->pc = 0x267b28u;
    // NOP
label_267b2c:
    // 0x267b2c: 0x0  nop
    ctx->pc = 0x267b2cu;
    // NOP
label_267b30:
    // 0x267b30: 0x11c62  .word       0x00011C62                   # neg         $v1, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267b30u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
label_267b34:
    // 0x267b34: 0x5510  .word       0x00005510                   # mfhi        $t2 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267b34u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_267b38:
    // 0x267b38: 0x0  nop
    ctx->pc = 0x267b38u;
    // NOP
label_267b3c:
    // 0x267b3c: 0x0  nop
    ctx->pc = 0x267b3cu;
    // NOP
label_267b40:
    // 0x267b40: 0x11c6d  .word       0x00011C6D                   # daddu       $v1, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267b40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_267b44:
    // 0x267b44: 0xb0f0  tge         $zero, $zero, 707
    ctx->pc = 0x267b44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267b48:
    // 0x267b48: 0x0  nop
    ctx->pc = 0x267b48u;
    // NOP
label_267b4c:
    // 0x267b4c: 0x0  nop
    ctx->pc = 0x267b4cu;
    // NOP
label_267b50:
    // 0x267b50: 0x11c84  .word       0x00011C84                   # sllv        $v1, $at, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267b50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_267b54:
    // 0x267b54: 0x7220  .word       0x00007220                   # add         $t6, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267b54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_267b58:
    // 0x267b58: 0x0  nop
    ctx->pc = 0x267b58u;
    // NOP
label_267b5c:
    // 0x267b5c: 0x0  nop
    ctx->pc = 0x267b5cu;
    // NOP
label_267b60:
    // 0x267b60: 0x11c93  .word       0x00011C93                   # mtlo        $zero # 00011C80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267b60u;
    ctx->lo = GPR_U64(ctx, 0);
label_267b64:
    // 0x267b64: 0x71b0  tge         $zero, $zero, 454
    ctx->pc = 0x267b64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267b68:
    // 0x267b68: 0x0  nop
    ctx->pc = 0x267b68u;
    // NOP
label_267b6c:
    // 0x267b6c: 0x0  nop
    ctx->pc = 0x267b6cu;
    // NOP
label_267b70:
    // 0x267b70: 0x11ca2  .word       0x00011CA2                   # neg         $v1, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267b70u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
label_267b74:
    // 0x267b74: 0x7820  add         $t7, $zero, $zero
    ctx->pc = 0x267b74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_267b78:
    // 0x267b78: 0x0  nop
    ctx->pc = 0x267b78u;
    // NOP
label_267b7c:
    // 0x267b7c: 0x0  nop
    ctx->pc = 0x267b7cu;
    // NOP
label_267b80:
    // 0x267b80: 0x11cb2  tlt         $zero, $at, 114
    ctx->pc = 0x267b80u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_267b84:
    // 0x267b84: 0x7e00  sll         $t7, $zero, 24
    ctx->pc = 0x267b84u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_267b88:
    // 0x267b88: 0x0  nop
    ctx->pc = 0x267b88u;
    // NOP
label_267b8c:
    // 0x267b8c: 0x0  nop
    ctx->pc = 0x267b8cu;
    // NOP
label_267b90:
    // 0x267b90: 0x11cc2  srl         $v1, $at, 19
    ctx->pc = 0x267b90u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 1), 19));
label_267b94:
    // 0x267b94: 0x53e0  .word       0x000053E0                   # add         $t2, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267b94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_267b98:
    // 0x267b98: 0x0  nop
    ctx->pc = 0x267b98u;
    // NOP
label_267b9c:
    // 0x267b9c: 0x0  nop
    ctx->pc = 0x267b9cu;
    // NOP
label_267ba0:
    // 0x267ba0: 0x11ccd  break       1, 115
    ctx->pc = 0x267ba0u;
    runtime->handleBreak(rdram, ctx);
label_267ba4:
    // 0x267ba4: 0x3f10  .word       0x00003F10                   # mfhi        $a3 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267ba4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_267ba8:
    // 0x267ba8: 0x0  nop
    ctx->pc = 0x267ba8u;
    // NOP
label_267bac:
    // 0x267bac: 0x0  nop
    ctx->pc = 0x267bacu;
    // NOP
label_267bb0:
    // 0x267bb0: 0x11cd5  .word       0x00011CD5                   # INVALID     $zero, $at, 0x1CD5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267bb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x267BB0 raw=0x00011CD5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267bb4:
    // 0x267bb4: 0x4310  .word       0x00004310                   # mfhi        $t0 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267bb4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_267bb8:
    // 0x267bb8: 0x0  nop
    ctx->pc = 0x267bb8u;
    // NOP
label_267bbc:
    // 0x267bbc: 0x0  nop
    ctx->pc = 0x267bbcu;
    // NOP
label_267bc0:
    // 0x267bc0: 0x11cde  .word       0x00011CDE                   # ddiv        $v1, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267bc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x267BC0 raw=0x00011CDE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267bc4:
    // 0x267bc4: 0x5da0  .word       0x00005DA0                   # add         $t3, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267bc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_267bc8:
    // 0x267bc8: 0x0  nop
    ctx->pc = 0x267bc8u;
    // NOP
label_267bcc:
    // 0x267bcc: 0x0  nop
    ctx->pc = 0x267bccu;
    // NOP
label_267bd0:
    // 0x267bd0: 0x11cea  .word       0x00011CEA                   # slt         $v1, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267bd0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_267bd4:
    // 0x267bd4: 0xa5b0  tge         $zero, $zero, 662
    ctx->pc = 0x267bd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267bd8:
    // 0x267bd8: 0x0  nop
    ctx->pc = 0x267bd8u;
    // NOP
label_267bdc:
    // 0x267bdc: 0x0  nop
    ctx->pc = 0x267bdcu;
    // NOP
label_267be0:
    // 0x267be0: 0x11cff  dsra32      $v1, $at, 19
    ctx->pc = 0x267be0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 1) >> (32 + 19));
label_267be4:
    // 0x267be4: 0x3eb0  tge         $zero, $zero, 250
    ctx->pc = 0x267be4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267be8:
    // 0x267be8: 0x0  nop
    ctx->pc = 0x267be8u;
    // NOP
label_267bec:
    // 0x267bec: 0x0  nop
    ctx->pc = 0x267becu;
    // NOP
label_267bf0:
    // 0x267bf0: 0x11d07  .word       0x00011D07                   # srav        $v1, $at, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267bf0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_267bf4:
    // 0x267bf4: 0x2ac0  sll         $a1, $zero, 11
    ctx->pc = 0x267bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_267bf8:
    // 0x267bf8: 0x0  nop
    ctx->pc = 0x267bf8u;
    // NOP
label_267bfc:
    // 0x267bfc: 0x0  nop
    ctx->pc = 0x267bfcu;
    // NOP
label_267c00:
    // 0x267c00: 0x11d0d  break       1, 116
    ctx->pc = 0x267c00u;
    runtime->handleBreak(rdram, ctx);
label_267c04:
    // 0x267c04: 0x5b60  .word       0x00005B60                   # add         $t3, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267c04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_267c08:
    // 0x267c08: 0x0  nop
    ctx->pc = 0x267c08u;
    // NOP
label_267c0c:
    // 0x267c0c: 0x0  nop
    ctx->pc = 0x267c0cu;
    // NOP
label_267c10:
    // 0x267c10: 0x11d19  .word       0x00011D19                   # multu       $zero, $at # 00001D00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267c10u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_267c14:
    // 0x267c14: 0x6b50  .word       0x00006B50                   # mfhi        $t5 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267c14u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_267c18:
    // 0x267c18: 0x0  nop
    ctx->pc = 0x267c18u;
    // NOP
label_267c1c:
    // 0x267c1c: 0x0  nop
    ctx->pc = 0x267c1cu;
    // NOP
label_267c20:
    // 0x267c20: 0x11d27  .word       0x00011D27                   # nor         $v1, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267c20u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_267c24:
    // 0x267c24: 0x61e0  .word       0x000061E0                   # add         $t4, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267c24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_267c28:
    // 0x267c28: 0x0  nop
    ctx->pc = 0x267c28u;
    // NOP
label_267c2c:
    // 0x267c2c: 0x0  nop
    ctx->pc = 0x267c2cu;
    // NOP
label_267c30:
    // 0x267c30: 0x11d34  teq         $zero, $at, 116
    ctx->pc = 0x267c30u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_267c34:
    // 0x267c34: 0x56c0  sll         $t2, $zero, 27
    ctx->pc = 0x267c34u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_267c38:
    // 0x267c38: 0x0  nop
    ctx->pc = 0x267c38u;
    // NOP
label_267c3c:
    // 0x267c3c: 0x0  nop
    ctx->pc = 0x267c3cu;
    // NOP
label_267c40:
    // 0x267c40: 0x11d3f  dsra32      $v1, $at, 20
    ctx->pc = 0x267c40u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 1) >> (32 + 20));
label_267c44:
    // 0x267c44: 0x48c0  sll         $t1, $zero, 3
    ctx->pc = 0x267c44u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_267c48:
    // 0x267c48: 0x0  nop
    ctx->pc = 0x267c48u;
    // NOP
label_267c4c:
    // 0x267c4c: 0x0  nop
    ctx->pc = 0x267c4cu;
    // NOP
label_267c50:
    // 0x267c50: 0x11d49  .word       0x00011D49                   # jalr        $v1, $zero # 00010540 <InstrIdType: CPU_SPECIAL>
label_267c54:
    if (ctx->pc == 0x267C54u) {
        ctx->pc = 0x267C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C50u;
        // 0x267c54: 0x4160  .word       0x00004160                   # add         $t0, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x267C58u;
        goto label_267c58;
    }
    ctx->pc = 0x267C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 3, 0x267C58u);
        ctx->pc = 0x267C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C50u;
        // 0x267c54: 0x4160  .word       0x00004160                   # add         $t0, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267C50u, 0x267C58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x267C58u;
label_267c58:
    // 0x267c58: 0x0  nop
    ctx->pc = 0x267c58u;
    // NOP
label_267c5c:
    // 0x267c5c: 0x0  nop
    ctx->pc = 0x267c5cu;
    // NOP
label_267c60:
    // 0x267c60: 0x11d52  .word       0x00011D52                   # mflo        $v1 # 00010540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267c60u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_267c64:
    // 0x267c64: 0x4cc0  sll         $t1, $zero, 19
    ctx->pc = 0x267c64u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_267c68:
    // 0x267c68: 0x0  nop
    ctx->pc = 0x267c68u;
    // NOP
label_267c6c:
    // 0x267c6c: 0x0  nop
    ctx->pc = 0x267c6cu;
    // NOP
label_267c70:
    // 0x267c70: 0x11d5c  .word       0x00011D5C                   # dmult       $zero, $at # 00001D40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267c70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x267C70 raw=0x00011D5C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267c74:
    // 0x267c74: 0x4c90  .word       0x00004C90                   # mfhi        $t1 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267c74u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_267c78:
    // 0x267c78: 0x0  nop
    ctx->pc = 0x267c78u;
    // NOP
label_267c7c:
    // 0x267c7c: 0x0  nop
    ctx->pc = 0x267c7cu;
    // NOP
label_267c80:
    // 0x267c80: 0x11d66  .word       0x00011D66                   # xor         $v1, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_267c84:
    // 0x267c84: 0x5ff0  tge         $zero, $zero, 383
    ctx->pc = 0x267c84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267c88:
    // 0x267c88: 0x0  nop
    ctx->pc = 0x267c88u;
    // NOP
label_267c8c:
    // 0x267c8c: 0x0  nop
    ctx->pc = 0x267c8cu;
    // NOP
label_267c90:
    // 0x267c90: 0x11d72  tlt         $zero, $at, 117
    ctx->pc = 0x267c90u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_267c94:
    // 0x267c94: 0x6f50  .word       0x00006F50                   # mfhi        $t5 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267c94u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_267c98:
    // 0x267c98: 0x0  nop
    ctx->pc = 0x267c98u;
    // NOP
label_267c9c:
    // 0x267c9c: 0x0  nop
    ctx->pc = 0x267c9cu;
    // NOP
label_267ca0:
    // 0x267ca0: 0x11d80  sll         $v1, $at, 22
    ctx->pc = 0x267ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 22));
label_267ca4:
    // 0x267ca4: 0x9510  .word       0x00009510                   # mfhi        $s2 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267ca4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_267ca8:
    // 0x267ca8: 0x0  nop
    ctx->pc = 0x267ca8u;
    // NOP
label_267cac:
    // 0x267cac: 0x0  nop
    ctx->pc = 0x267cacu;
    // NOP
label_267cb0:
    // 0x267cb0: 0x11d93  .word       0x00011D93                   # mtlo        $zero # 00011D80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267cb0u;
    ctx->lo = GPR_U64(ctx, 0);
label_267cb4:
    // 0x267cb4: 0xc590  .word       0x0000C590                   # mfhi        $t8 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267cb4u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_267cb8:
    // 0x267cb8: 0x0  nop
    ctx->pc = 0x267cb8u;
    // NOP
label_267cbc:
    // 0x267cbc: 0x0  nop
    ctx->pc = 0x267cbcu;
    // NOP
label_267cc0:
    // 0x267cc0: 0x11dac  .word       0x00011DAC                   # dadd        $v1, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267cc0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, r); }
label_267cc4:
    // 0x267cc4: 0x4d10  .word       0x00004D10                   # mfhi        $t1 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267cc4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_267cc8:
    // 0x267cc8: 0x0  nop
    ctx->pc = 0x267cc8u;
    // NOP
label_267ccc:
    // 0x267ccc: 0x0  nop
    ctx->pc = 0x267cccu;
    // NOP
label_267cd0:
    // 0x267cd0: 0x11db6  tne         $zero, $at, 118
    ctx->pc = 0x267cd0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_267cd4:
    // 0x267cd4: 0x6c80  sll         $t5, $zero, 18
    ctx->pc = 0x267cd4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_267cd8:
    // 0x267cd8: 0x0  nop
    ctx->pc = 0x267cd8u;
    // NOP
label_267cdc:
    // 0x267cdc: 0x0  nop
    ctx->pc = 0x267cdcu;
    // NOP
label_267ce0:
    // 0x267ce0: 0x11dc4  .word       0x00011DC4                   # sllv        $v1, $at, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_267ce4:
    // 0x267ce4: 0x9b70  tge         $zero, $zero, 621
    ctx->pc = 0x267ce4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267ce8:
    // 0x267ce8: 0x0  nop
    ctx->pc = 0x267ce8u;
    // NOP
label_267cec:
    // 0x267cec: 0x0  nop
    ctx->pc = 0x267cecu;
    // NOP
label_267cf0:
    // 0x267cf0: 0x11dd8  .word       0x00011DD8                   # mult        $v1, $zero, $at # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x267cf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_267cf4:
    // 0x267cf4: 0x73b0  tge         $zero, $zero, 462
    ctx->pc = 0x267cf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267cf8:
    // 0x267cf8: 0x0  nop
    ctx->pc = 0x267cf8u;
    // NOP
label_267cfc:
    // 0x267cfc: 0x0  nop
    ctx->pc = 0x267cfcu;
    // NOP
label_267d00:
    // 0x267d00: 0x11de7  .word       0x00011DE7                   # nor         $v1, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267d00u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_267d04:
    // 0x267d04: 0xbe70  tge         $zero, $zero, 761
    ctx->pc = 0x267d04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267d08:
    // 0x267d08: 0x0  nop
    ctx->pc = 0x267d08u;
    // NOP
label_267d0c:
    // 0x267d0c: 0x0  nop
    ctx->pc = 0x267d0cu;
    // NOP
label_267d10:
    // 0x267d10: 0x11dff  dsra32      $v1, $at, 23
    ctx->pc = 0x267d10u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 1) >> (32 + 23));
label_267d14:
    // 0x267d14: 0x68e0  .word       0x000068E0                   # add         $t5, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267d14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_267d18:
    // 0x267d18: 0x0  nop
    ctx->pc = 0x267d18u;
    // NOP
label_267d1c:
    // 0x267d1c: 0x0  nop
    ctx->pc = 0x267d1cu;
    // NOP
label_267d20:
    // 0x267d20: 0x11e0d  break       1, 120
    ctx->pc = 0x267d20u;
    runtime->handleBreak(rdram, ctx);
label_267d24:
    // 0x267d24: 0x45b0  tge         $zero, $zero, 278
    ctx->pc = 0x267d24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267d28:
    // 0x267d28: 0x0  nop
    ctx->pc = 0x267d28u;
    // NOP
label_267d2c:
    // 0x267d2c: 0x0  nop
    ctx->pc = 0x267d2cu;
    // NOP
label_267d30:
    // 0x267d30: 0x11e16  .word       0x00011E16                   # dsrlv       $v1, $at, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_267d34:
    // 0x267d34: 0x4c90  .word       0x00004C90                   # mfhi        $t1 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267d34u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_267d38:
    // 0x267d38: 0x0  nop
    ctx->pc = 0x267d38u;
    // NOP
label_267d3c:
    // 0x267d3c: 0x0  nop
    ctx->pc = 0x267d3cu;
    // NOP
label_267d40:
    // 0x267d40: 0x11e20  .word       0x00011E20                   # add         $v1, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267d40u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_267d44:
    // 0x267d44: 0xe060  .word       0x0000E060                   # add         $gp, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267d44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_267d48:
    // 0x267d48: 0x0  nop
    ctx->pc = 0x267d48u;
    // NOP
label_267d4c:
    // 0x267d4c: 0x0  nop
    ctx->pc = 0x267d4cu;
    // NOP
label_267d50:
    // 0x267d50: 0x11e3d  .word       0x00011E3D                   # INVALID     $zero, $at, 0x1E3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267d50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x267D50 raw=0x00011E3D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267d54:
    // 0x267d54: 0x5830  tge         $zero, $zero, 352
    ctx->pc = 0x267d54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267d58:
    // 0x267d58: 0x0  nop
    ctx->pc = 0x267d58u;
    // NOP
label_267d5c:
    // 0x267d5c: 0x0  nop
    ctx->pc = 0x267d5cu;
    // NOP
label_267d60:
    // 0x267d60: 0x11e49  .word       0x00011E49                   # jalr        $v1, $zero # 00010640 <InstrIdType: CPU_SPECIAL>
label_267d64:
    if (ctx->pc == 0x267D64u) {
        ctx->pc = 0x267D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267D60u;
        // 0x267d64: 0x6d10  .word       0x00006D10                   # mfhi        $t5 # 00000500 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 13, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x267D68u;
        goto label_267d68;
    }
    ctx->pc = 0x267D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 3, 0x267D68u);
        ctx->pc = 0x267D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267D60u;
        // 0x267d64: 0x6d10  .word       0x00006D10                   # mfhi        $t5 # 00000500 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 13, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267D60u, 0x267D68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x267D68u;
label_267d68:
    // 0x267d68: 0x0  nop
    ctx->pc = 0x267d68u;
    // NOP
label_267d6c:
    // 0x267d6c: 0x0  nop
    ctx->pc = 0x267d6cu;
    // NOP
label_267d70:
    // 0x267d70: 0x11e57  .word       0x00011E57                   # dsrav       $v1, $at, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267d70u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_267d74:
    // 0x267d74: 0xa1b0  tge         $zero, $zero, 646
    ctx->pc = 0x267d74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267d78:
    // 0x267d78: 0x0  nop
    ctx->pc = 0x267d78u;
    // NOP
label_267d7c:
    // 0x267d7c: 0x0  nop
    ctx->pc = 0x267d7cu;
    // NOP
label_267d80:
    // 0x267d80: 0x11e6c  .word       0x00011E6C                   # dadd        $v1, $zero, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267d80u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, r); }
label_267d84:
    // 0x267d84: 0x54c0  sll         $t2, $zero, 19
    ctx->pc = 0x267d84u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_267d88:
    // 0x267d88: 0x0  nop
    ctx->pc = 0x267d88u;
    // NOP
label_267d8c:
    // 0x267d8c: 0x0  nop
    ctx->pc = 0x267d8cu;
    // NOP
label_267d90:
    // 0x267d90: 0x11e77  .word       0x00011E77                   # INVALID     $zero, $at, 0x1E77 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267d90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x267D90 raw=0x00011E77"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267d94:
    // 0x267d94: 0x9e20  .word       0x00009E20                   # add         $s3, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267d94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_267d98:
    // 0x267d98: 0x0  nop
    ctx->pc = 0x267d98u;
    // NOP
label_267d9c:
    // 0x267d9c: 0x0  nop
    ctx->pc = 0x267d9cu;
    // NOP
label_267da0:
    // 0x267da0: 0x11e8b  .word       0x00011E8B                   # movn        $v1, $zero, $at # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267da0u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_267da4:
    // 0x267da4: 0x8150  .word       0x00008150                   # mfhi        $s0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267da4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_267da8:
    // 0x267da8: 0x0  nop
    ctx->pc = 0x267da8u;
    // NOP
label_267dac:
    // 0x267dac: 0x0  nop
    ctx->pc = 0x267dacu;
    // NOP
label_267db0:
    // 0x267db0: 0x11e9c  .word       0x00011E9C                   # dmult       $zero, $at # 00001E80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267db0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x267DB0 raw=0x00011E9C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267db4:
    // 0x267db4: 0x9ef0  tge         $zero, $zero, 635
    ctx->pc = 0x267db4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267db8:
    // 0x267db8: 0x0  nop
    ctx->pc = 0x267db8u;
    // NOP
label_267dbc:
    // 0x267dbc: 0x0  nop
    ctx->pc = 0x267dbcu;
    // NOP
label_267dc0:
    // 0x267dc0: 0x11eb0  tge         $zero, $at, 122
    ctx->pc = 0x267dc0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_267dc4:
    // 0x267dc4: 0x5ec0  sll         $t3, $zero, 27
    ctx->pc = 0x267dc4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_267dc8:
    // 0x267dc8: 0x0  nop
    ctx->pc = 0x267dc8u;
    // NOP
label_267dcc:
    // 0x267dcc: 0x0  nop
    ctx->pc = 0x267dccu;
    // NOP
label_267dd0:
    // 0x267dd0: 0x11ebc  dsll32      $v1, $at, 26
    ctx->pc = 0x267dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 1) << (32 + 26));
label_267dd4:
    // 0x267dd4: 0x8750  .word       0x00008750                   # mfhi        $s0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267dd4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_267dd8:
    // 0x267dd8: 0x0  nop
    ctx->pc = 0x267dd8u;
    // NOP
label_267ddc:
    // 0x267ddc: 0x0  nop
    ctx->pc = 0x267ddcu;
    // NOP
label_267de0:
    // 0x267de0: 0x11ecd  break       1, 123
    ctx->pc = 0x267de0u;
    runtime->handleBreak(rdram, ctx);
label_267de4:
    // 0x267de4: 0x6220  .word       0x00006220                   # add         $t4, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267de4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
    ctx->pc = 0x267de8u;
    return;
}
