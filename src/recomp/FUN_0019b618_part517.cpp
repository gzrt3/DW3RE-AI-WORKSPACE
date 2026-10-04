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


void FUN_0019b618_part517(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x297558u: goto label_297558;
        case 0x29755cu: goto label_29755c;
        case 0x297560u: goto label_297560;
        case 0x297564u: goto label_297564;
        case 0x297568u: goto label_297568;
        case 0x29756cu: goto label_29756c;
        case 0x297570u: goto label_297570;
        case 0x297574u: goto label_297574;
        case 0x297578u: goto label_297578;
        case 0x29757cu: goto label_29757c;
        case 0x297580u: goto label_297580;
        case 0x297584u: goto label_297584;
        case 0x297588u: goto label_297588;
        case 0x29758cu: goto label_29758c;
        case 0x297590u: goto label_297590;
        case 0x297594u: goto label_297594;
        case 0x297598u: goto label_297598;
        case 0x29759cu: goto label_29759c;
        case 0x2975a0u: goto label_2975a0;
        case 0x2975a4u: goto label_2975a4;
        case 0x2975a8u: goto label_2975a8;
        case 0x2975acu: goto label_2975ac;
        case 0x2975b0u: goto label_2975b0;
        case 0x2975b4u: goto label_2975b4;
        case 0x2975b8u: goto label_2975b8;
        case 0x2975bcu: goto label_2975bc;
        case 0x2975c0u: goto label_2975c0;
        case 0x2975c4u: goto label_2975c4;
        case 0x2975c8u: goto label_2975c8;
        case 0x2975ccu: goto label_2975cc;
        case 0x2975d0u: goto label_2975d0;
        case 0x2975d4u: goto label_2975d4;
        case 0x2975d8u: goto label_2975d8;
        case 0x2975dcu: goto label_2975dc;
        case 0x2975e0u: goto label_2975e0;
        case 0x2975e4u: goto label_2975e4;
        case 0x2975e8u: goto label_2975e8;
        case 0x2975ecu: goto label_2975ec;
        case 0x2975f0u: goto label_2975f0;
        case 0x2975f4u: goto label_2975f4;
        case 0x2975f8u: goto label_2975f8;
        case 0x2975fcu: goto label_2975fc;
        case 0x297600u: goto label_297600;
        case 0x297604u: goto label_297604;
        case 0x297608u: goto label_297608;
        case 0x29760cu: goto label_29760c;
        case 0x297610u: goto label_297610;
        case 0x297614u: goto label_297614;
        case 0x297618u: goto label_297618;
        case 0x29761cu: goto label_29761c;
        case 0x297620u: goto label_297620;
        case 0x297624u: goto label_297624;
        case 0x297628u: goto label_297628;
        case 0x29762cu: goto label_29762c;
        case 0x297630u: goto label_297630;
        case 0x297634u: goto label_297634;
        case 0x297638u: goto label_297638;
        case 0x29763cu: goto label_29763c;
        case 0x297640u: goto label_297640;
        case 0x297644u: goto label_297644;
        case 0x297648u: goto label_297648;
        case 0x29764cu: goto label_29764c;
        case 0x297650u: goto label_297650;
        case 0x297654u: goto label_297654;
        case 0x297658u: goto label_297658;
        case 0x29765cu: goto label_29765c;
        case 0x297660u: goto label_297660;
        case 0x297664u: goto label_297664;
        case 0x297668u: goto label_297668;
        case 0x29766cu: goto label_29766c;
        case 0x297670u: goto label_297670;
        case 0x297674u: goto label_297674;
        case 0x297678u: goto label_297678;
        case 0x29767cu: goto label_29767c;
        case 0x297680u: goto label_297680;
        case 0x297684u: goto label_297684;
        case 0x297688u: goto label_297688;
        case 0x29768cu: goto label_29768c;
        case 0x297690u: goto label_297690;
        case 0x297694u: goto label_297694;
        case 0x297698u: goto label_297698;
        case 0x29769cu: goto label_29769c;
        case 0x2976a0u: goto label_2976a0;
        case 0x2976a4u: goto label_2976a4;
        case 0x2976a8u: goto label_2976a8;
        case 0x2976acu: goto label_2976ac;
        case 0x2976b0u: goto label_2976b0;
        case 0x2976b4u: goto label_2976b4;
        case 0x2976b8u: goto label_2976b8;
        case 0x2976bcu: goto label_2976bc;
        case 0x2976c0u: goto label_2976c0;
        case 0x2976c4u: goto label_2976c4;
        case 0x2976c8u: goto label_2976c8;
        case 0x2976ccu: goto label_2976cc;
        case 0x2976d0u: goto label_2976d0;
        case 0x2976d4u: goto label_2976d4;
        case 0x2976d8u: goto label_2976d8;
        case 0x2976dcu: goto label_2976dc;
        case 0x2976e0u: goto label_2976e0;
        case 0x2976e4u: goto label_2976e4;
        case 0x2976e8u: goto label_2976e8;
        case 0x2976ecu: goto label_2976ec;
        case 0x2976f0u: goto label_2976f0;
        case 0x2976f4u: goto label_2976f4;
        case 0x2976f8u: goto label_2976f8;
        case 0x2976fcu: goto label_2976fc;
        case 0x297700u: goto label_297700;
        case 0x297704u: goto label_297704;
        case 0x297708u: goto label_297708;
        case 0x29770cu: goto label_29770c;
        case 0x297710u: goto label_297710;
        case 0x297714u: goto label_297714;
        case 0x297718u: goto label_297718;
        case 0x29771cu: goto label_29771c;
        case 0x297720u: goto label_297720;
        case 0x297724u: goto label_297724;
        case 0x297728u: goto label_297728;
        case 0x29772cu: goto label_29772c;
        case 0x297730u: goto label_297730;
        case 0x297734u: goto label_297734;
        case 0x297738u: goto label_297738;
        case 0x29773cu: goto label_29773c;
        case 0x297740u: goto label_297740;
        case 0x297744u: goto label_297744;
        case 0x297748u: goto label_297748;
        case 0x29774cu: goto label_29774c;
        case 0x297750u: goto label_297750;
        case 0x297754u: goto label_297754;
        case 0x297758u: goto label_297758;
        case 0x29775cu: goto label_29775c;
        case 0x297760u: goto label_297760;
        case 0x297764u: goto label_297764;
        case 0x297768u: goto label_297768;
        case 0x29776cu: goto label_29776c;
        case 0x297770u: goto label_297770;
        case 0x297774u: goto label_297774;
        case 0x297778u: goto label_297778;
        case 0x29777cu: goto label_29777c;
        case 0x297780u: goto label_297780;
        case 0x297784u: goto label_297784;
        case 0x297788u: goto label_297788;
        case 0x29778cu: goto label_29778c;
        case 0x297790u: goto label_297790;
        case 0x297794u: goto label_297794;
        case 0x297798u: goto label_297798;
        case 0x29779cu: goto label_29779c;
        case 0x2977a0u: goto label_2977a0;
        case 0x2977a4u: goto label_2977a4;
        case 0x2977a8u: goto label_2977a8;
        case 0x2977acu: goto label_2977ac;
        case 0x2977b0u: goto label_2977b0;
        case 0x2977b4u: goto label_2977b4;
        case 0x2977b8u: goto label_2977b8;
        case 0x2977bcu: goto label_2977bc;
        case 0x2977c0u: goto label_2977c0;
        case 0x2977c4u: goto label_2977c4;
        case 0x2977c8u: goto label_2977c8;
        case 0x2977ccu: goto label_2977cc;
        case 0x2977d0u: goto label_2977d0;
        case 0x2977d4u: goto label_2977d4;
        case 0x2977d8u: goto label_2977d8;
        case 0x2977dcu: goto label_2977dc;
        case 0x2977e0u: goto label_2977e0;
        case 0x2977e4u: goto label_2977e4;
        case 0x2977e8u: goto label_2977e8;
        case 0x2977ecu: goto label_2977ec;
        case 0x2977f0u: goto label_2977f0;
        case 0x2977f4u: goto label_2977f4;
        case 0x2977f8u: goto label_2977f8;
        case 0x2977fcu: goto label_2977fc;
        case 0x297800u: goto label_297800;
        case 0x297804u: goto label_297804;
        case 0x297808u: goto label_297808;
        case 0x29780cu: goto label_29780c;
        case 0x297810u: goto label_297810;
        case 0x297814u: goto label_297814;
        case 0x297818u: goto label_297818;
        case 0x29781cu: goto label_29781c;
        case 0x297820u: goto label_297820;
        case 0x297824u: goto label_297824;
        case 0x297828u: goto label_297828;
        case 0x29782cu: goto label_29782c;
        case 0x297830u: goto label_297830;
        case 0x297834u: goto label_297834;
        case 0x297838u: goto label_297838;
        case 0x29783cu: goto label_29783c;
        case 0x297840u: goto label_297840;
        case 0x297844u: goto label_297844;
        case 0x297848u: goto label_297848;
        case 0x29784cu: goto label_29784c;
        case 0x297850u: goto label_297850;
        case 0x297854u: goto label_297854;
        case 0x297858u: goto label_297858;
        case 0x29785cu: goto label_29785c;
        case 0x297860u: goto label_297860;
        case 0x297864u: goto label_297864;
        case 0x297868u: goto label_297868;
        case 0x29786cu: goto label_29786c;
        case 0x297870u: goto label_297870;
        case 0x297874u: goto label_297874;
        case 0x297878u: goto label_297878;
        case 0x29787cu: goto label_29787c;
        case 0x297880u: goto label_297880;
        case 0x297884u: goto label_297884;
        case 0x297888u: goto label_297888;
        case 0x29788cu: goto label_29788c;
        case 0x297890u: goto label_297890;
        case 0x297894u: goto label_297894;
        case 0x297898u: goto label_297898;
        case 0x29789cu: goto label_29789c;
        case 0x2978a0u: goto label_2978a0;
        case 0x2978a4u: goto label_2978a4;
        case 0x2978a8u: goto label_2978a8;
        case 0x2978acu: goto label_2978ac;
        case 0x2978b0u: goto label_2978b0;
        case 0x2978b4u: goto label_2978b4;
        case 0x2978b8u: goto label_2978b8;
        case 0x2978bcu: goto label_2978bc;
        case 0x2978c0u: goto label_2978c0;
        case 0x2978c4u: goto label_2978c4;
        case 0x2978c8u: goto label_2978c8;
        case 0x2978ccu: goto label_2978cc;
        case 0x2978d0u: goto label_2978d0;
        case 0x2978d4u: goto label_2978d4;
        case 0x2978d8u: goto label_2978d8;
        case 0x2978dcu: goto label_2978dc;
        case 0x2978e0u: goto label_2978e0;
        case 0x2978e4u: goto label_2978e4;
        case 0x2978e8u: goto label_2978e8;
        case 0x2978ecu: goto label_2978ec;
        case 0x2978f0u: goto label_2978f0;
        case 0x2978f4u: goto label_2978f4;
        case 0x2978f8u: goto label_2978f8;
        case 0x2978fcu: goto label_2978fc;
        case 0x297900u: goto label_297900;
        case 0x297904u: goto label_297904;
        case 0x297908u: goto label_297908;
        case 0x29790cu: goto label_29790c;
        case 0x297910u: goto label_297910;
        case 0x297914u: goto label_297914;
        case 0x297918u: goto label_297918;
        case 0x29791cu: goto label_29791c;
        case 0x297920u: goto label_297920;
        case 0x297924u: goto label_297924;
        case 0x297928u: goto label_297928;
        case 0x29792cu: goto label_29792c;
        case 0x297930u: goto label_297930;
        case 0x297934u: goto label_297934;
        case 0x297938u: goto label_297938;
        case 0x29793cu: goto label_29793c;
        case 0x297940u: goto label_297940;
        case 0x297944u: goto label_297944;
        case 0x297948u: goto label_297948;
        case 0x29794cu: goto label_29794c;
        case 0x297950u: goto label_297950;
        case 0x297954u: goto label_297954;
        case 0x297958u: goto label_297958;
        case 0x29795cu: goto label_29795c;
        case 0x297960u: goto label_297960;
        case 0x297964u: goto label_297964;
        case 0x297968u: goto label_297968;
        case 0x29796cu: goto label_29796c;
        case 0x297970u: goto label_297970;
        case 0x297974u: goto label_297974;
        case 0x297978u: goto label_297978;
        case 0x29797cu: goto label_29797c;
        case 0x297980u: goto label_297980;
        case 0x297984u: goto label_297984;
        case 0x297988u: goto label_297988;
        case 0x29798cu: goto label_29798c;
        case 0x297990u: goto label_297990;
        case 0x297994u: goto label_297994;
        case 0x297998u: goto label_297998;
        case 0x29799cu: goto label_29799c;
        case 0x2979a0u: goto label_2979a0;
        case 0x2979a4u: goto label_2979a4;
        case 0x2979a8u: goto label_2979a8;
        case 0x2979acu: goto label_2979ac;
        case 0x2979b0u: goto label_2979b0;
        case 0x2979b4u: goto label_2979b4;
        case 0x2979b8u: goto label_2979b8;
        case 0x2979bcu: goto label_2979bc;
        case 0x2979c0u: goto label_2979c0;
        case 0x2979c4u: goto label_2979c4;
        case 0x2979c8u: goto label_2979c8;
        case 0x2979ccu: goto label_2979cc;
        case 0x2979d0u: goto label_2979d0;
        case 0x2979d4u: goto label_2979d4;
        case 0x2979d8u: goto label_2979d8;
        case 0x2979dcu: goto label_2979dc;
        case 0x2979e0u: goto label_2979e0;
        case 0x2979e4u: goto label_2979e4;
        case 0x2979e8u: goto label_2979e8;
        case 0x2979ecu: goto label_2979ec;
        case 0x2979f0u: goto label_2979f0;
        case 0x2979f4u: goto label_2979f4;
        case 0x2979f8u: goto label_2979f8;
        case 0x2979fcu: goto label_2979fc;
        case 0x297a00u: goto label_297a00;
        case 0x297a04u: goto label_297a04;
        case 0x297a08u: goto label_297a08;
        case 0x297a0cu: goto label_297a0c;
        case 0x297a10u: goto label_297a10;
        case 0x297a14u: goto label_297a14;
        case 0x297a18u: goto label_297a18;
        case 0x297a1cu: goto label_297a1c;
        case 0x297a20u: goto label_297a20;
        case 0x297a24u: goto label_297a24;
        case 0x297a28u: goto label_297a28;
        case 0x297a2cu: goto label_297a2c;
        case 0x297a30u: goto label_297a30;
        case 0x297a34u: goto label_297a34;
        case 0x297a38u: goto label_297a38;
        case 0x297a3cu: goto label_297a3c;
        case 0x297a40u: goto label_297a40;
        case 0x297a44u: goto label_297a44;
        case 0x297a48u: goto label_297a48;
        case 0x297a4cu: goto label_297a4c;
        case 0x297a50u: goto label_297a50;
        case 0x297a54u: goto label_297a54;
        case 0x297a58u: goto label_297a58;
        case 0x297a5cu: goto label_297a5c;
        case 0x297a60u: goto label_297a60;
        case 0x297a64u: goto label_297a64;
        case 0x297a68u: goto label_297a68;
        case 0x297a6cu: goto label_297a6c;
        case 0x297a70u: goto label_297a70;
        case 0x297a74u: goto label_297a74;
        case 0x297a78u: goto label_297a78;
        case 0x297a7cu: goto label_297a7c;
        case 0x297a80u: goto label_297a80;
        case 0x297a84u: goto label_297a84;
        case 0x297a88u: goto label_297a88;
        case 0x297a8cu: goto label_297a8c;
        case 0x297a90u: goto label_297a90;
        case 0x297a94u: goto label_297a94;
        case 0x297a98u: goto label_297a98;
        case 0x297a9cu: goto label_297a9c;
        case 0x297aa0u: goto label_297aa0;
        case 0x297aa4u: goto label_297aa4;
        case 0x297aa8u: goto label_297aa8;
        case 0x297aacu: goto label_297aac;
        case 0x297ab0u: goto label_297ab0;
        case 0x297ab4u: goto label_297ab4;
        case 0x297ab8u: goto label_297ab8;
        case 0x297abcu: goto label_297abc;
        case 0x297ac0u: goto label_297ac0;
        case 0x297ac4u: goto label_297ac4;
        case 0x297ac8u: goto label_297ac8;
        case 0x297accu: goto label_297acc;
        case 0x297ad0u: goto label_297ad0;
        case 0x297ad4u: goto label_297ad4;
        case 0x297ad8u: goto label_297ad8;
        case 0x297adcu: goto label_297adc;
        case 0x297ae0u: goto label_297ae0;
        case 0x297ae4u: goto label_297ae4;
        case 0x297ae8u: goto label_297ae8;
        case 0x297aecu: goto label_297aec;
        case 0x297af0u: goto label_297af0;
        case 0x297af4u: goto label_297af4;
        case 0x297af8u: goto label_297af8;
        case 0x297afcu: goto label_297afc;
        case 0x297b00u: goto label_297b00;
        case 0x297b04u: goto label_297b04;
        case 0x297b08u: goto label_297b08;
        case 0x297b0cu: goto label_297b0c;
        case 0x297b10u: goto label_297b10;
        case 0x297b14u: goto label_297b14;
        case 0x297b18u: goto label_297b18;
        case 0x297b1cu: goto label_297b1c;
        case 0x297b20u: goto label_297b20;
        case 0x297b24u: goto label_297b24;
        case 0x297b28u: goto label_297b28;
        case 0x297b2cu: goto label_297b2c;
        case 0x297b30u: goto label_297b30;
        case 0x297b34u: goto label_297b34;
        case 0x297b38u: goto label_297b38;
        case 0x297b3cu: goto label_297b3c;
        case 0x297b40u: goto label_297b40;
        case 0x297b44u: goto label_297b44;
        case 0x297b48u: goto label_297b48;
        case 0x297b4cu: goto label_297b4c;
        case 0x297b50u: goto label_297b50;
        case 0x297b54u: goto label_297b54;
        case 0x297b58u: goto label_297b58;
        case 0x297b5cu: goto label_297b5c;
        case 0x297b60u: goto label_297b60;
        case 0x297b64u: goto label_297b64;
        case 0x297b68u: goto label_297b68;
        case 0x297b6cu: goto label_297b6c;
        case 0x297b70u: goto label_297b70;
        case 0x297b74u: goto label_297b74;
        case 0x297b78u: goto label_297b78;
        case 0x297b7cu: goto label_297b7c;
        case 0x297b80u: goto label_297b80;
        case 0x297b84u: goto label_297b84;
        case 0x297b88u: goto label_297b88;
        case 0x297b8cu: goto label_297b8c;
        case 0x297b90u: goto label_297b90;
        case 0x297b94u: goto label_297b94;
        case 0x297b98u: goto label_297b98;
        case 0x297b9cu: goto label_297b9c;
        case 0x297ba0u: goto label_297ba0;
        case 0x297ba4u: goto label_297ba4;
        case 0x297ba8u: goto label_297ba8;
        case 0x297bacu: goto label_297bac;
        case 0x297bb0u: goto label_297bb0;
        case 0x297bb4u: goto label_297bb4;
        case 0x297bb8u: goto label_297bb8;
        case 0x297bbcu: goto label_297bbc;
        case 0x297bc0u: goto label_297bc0;
        case 0x297bc4u: goto label_297bc4;
        case 0x297bc8u: goto label_297bc8;
        case 0x297bccu: goto label_297bcc;
        case 0x297bd0u: goto label_297bd0;
        case 0x297bd4u: goto label_297bd4;
        case 0x297bd8u: goto label_297bd8;
        case 0x297bdcu: goto label_297bdc;
        case 0x297be0u: goto label_297be0;
        case 0x297be4u: goto label_297be4;
        case 0x297be8u: goto label_297be8;
        case 0x297becu: goto label_297bec;
        case 0x297bf0u: goto label_297bf0;
        case 0x297bf4u: goto label_297bf4;
        case 0x297bf8u: goto label_297bf8;
        case 0x297bfcu: goto label_297bfc;
        case 0x297c00u: goto label_297c00;
        case 0x297c04u: goto label_297c04;
        case 0x297c08u: goto label_297c08;
        case 0x297c0cu: goto label_297c0c;
        case 0x297c10u: goto label_297c10;
        case 0x297c14u: goto label_297c14;
        case 0x297c18u: goto label_297c18;
        case 0x297c1cu: goto label_297c1c;
        case 0x297c20u: goto label_297c20;
        case 0x297c24u: goto label_297c24;
        case 0x297c28u: goto label_297c28;
        case 0x297c2cu: goto label_297c2c;
        case 0x297c30u: goto label_297c30;
        case 0x297c34u: goto label_297c34;
        case 0x297c38u: goto label_297c38;
        case 0x297c3cu: goto label_297c3c;
        case 0x297c40u: goto label_297c40;
        case 0x297c44u: goto label_297c44;
        case 0x297c48u: goto label_297c48;
        case 0x297c4cu: goto label_297c4c;
        case 0x297c50u: goto label_297c50;
        case 0x297c54u: goto label_297c54;
        case 0x297c58u: goto label_297c58;
        case 0x297c5cu: goto label_297c5c;
        case 0x297c60u: goto label_297c60;
        case 0x297c64u: goto label_297c64;
        case 0x297c68u: goto label_297c68;
        case 0x297c6cu: goto label_297c6c;
        case 0x297c70u: goto label_297c70;
        case 0x297c74u: goto label_297c74;
        case 0x297c78u: goto label_297c78;
        case 0x297c7cu: goto label_297c7c;
        case 0x297c80u: goto label_297c80;
        case 0x297c84u: goto label_297c84;
        case 0x297c88u: goto label_297c88;
        case 0x297c8cu: goto label_297c8c;
        case 0x297c90u: goto label_297c90;
        case 0x297c94u: goto label_297c94;
        case 0x297c98u: goto label_297c98;
        case 0x297c9cu: goto label_297c9c;
        case 0x297ca0u: goto label_297ca0;
        case 0x297ca4u: goto label_297ca4;
        case 0x297ca8u: goto label_297ca8;
        case 0x297cacu: goto label_297cac;
        case 0x297cb0u: goto label_297cb0;
        case 0x297cb4u: goto label_297cb4;
        case 0x297cb8u: goto label_297cb8;
        case 0x297cbcu: goto label_297cbc;
        case 0x297cc0u: goto label_297cc0;
        case 0x297cc4u: goto label_297cc4;
        case 0x297cc8u: goto label_297cc8;
        case 0x297cccu: goto label_297ccc;
        case 0x297cd0u: goto label_297cd0;
        case 0x297cd4u: goto label_297cd4;
        case 0x297cd8u: goto label_297cd8;
        case 0x297cdcu: goto label_297cdc;
        case 0x297ce0u: goto label_297ce0;
        case 0x297ce4u: goto label_297ce4;
        case 0x297ce8u: goto label_297ce8;
        case 0x297cecu: goto label_297cec;
        case 0x297cf0u: goto label_297cf0;
        case 0x297cf4u: goto label_297cf4;
        case 0x297cf8u: goto label_297cf8;
        case 0x297cfcu: goto label_297cfc;
        case 0x297d00u: goto label_297d00;
        case 0x297d04u: goto label_297d04;
        case 0x297d08u: goto label_297d08;
        case 0x297d0cu: goto label_297d0c;
        case 0x297d10u: goto label_297d10;
        case 0x297d14u: goto label_297d14;
        case 0x297d18u: goto label_297d18;
        case 0x297d1cu: goto label_297d1c;
        case 0x297d20u: goto label_297d20;
        case 0x297d24u: goto label_297d24;
        default: return;
    }

label_297558:
    // 0x297558: 0x58e50  .word       0x00058E50                   # mfhi        $s1 # 00050640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297558u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_29755c:
    // 0x29755c: 0x0  nop
    ctx->pc = 0x29755cu;
    // NOP
label_297560:
    // 0x297560: 0x200c9  .word       0x000200C9                   # jalr        $zero, $zero # 000200C0 <InstrIdType: CPU_SPECIAL>
label_297564:
    if (ctx->pc == 0x297564u) {
        ctx->pc = 0x297564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297560u;
        // 0x297564: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297564 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x297568u;
        goto label_297568;
    }
    ctx->pc = 0x297560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x297564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297560u;
        // 0x297564: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297564 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297560u, 0x297568u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x297568u;
label_297568:
    // 0x297568: 0x6d0  .word       0x000006D0                   # mfhi        $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297568u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29756c:
    // 0x29756c: 0x0  nop
    ctx->pc = 0x29756cu;
    // NOP
label_297570:
    // 0x297570: 0x200ca  .word       0x000200CA                   # movz        $zero, $zero, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297570u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_297574:
    // 0x297574: 0xd1  .word       0x000000D1                   # mthi        $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297574u;
    ctx->hi = GPR_U64(ctx, 0);
label_297578:
    // 0x297578: 0x687d0  .word       0x000687D0                   # mfhi        $s0 # 000607C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297578u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_29757c:
    // 0x29757c: 0x0  nop
    ctx->pc = 0x29757cu;
    // NOP
label_297580:
    // 0x297580: 0x2019b  .word       0x0002019B                   # divu        $zero, $zero, $v0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297580u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_297584:
    // 0x297584: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297584u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297584 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297588:
    // 0x297588: 0x650  .word       0x00000650                   # mfhi        $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297588u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29758c:
    // 0x29758c: 0x0  nop
    ctx->pc = 0x29758cu;
    // NOP
label_297590:
    // 0x297590: 0x2019c  .word       0x0002019C                   # dmult       $zero, $v0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297590u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x297590 raw=0x0002019C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297594:
    // 0x297594: 0x98  .word       0x00000098                   # mult        $zero, $zero, $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x297594u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_297598:
    // 0x297598: 0x4ba00  sll         $s7, $a0, 8
    ctx->pc = 0x297598u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_29759c:
    // 0x29759c: 0x0  nop
    ctx->pc = 0x29759cu;
    // NOP
label_2975a0:
    // 0x2975a0: 0x20234  teq         $zero, $v0, 8
    ctx->pc = 0x2975a0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_2975a4:
    // 0x2975a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2975a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2975A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2975a8:
    // 0x2975a8: 0x6f0  tge         $zero, $zero, 27
    ctx->pc = 0x2975a8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2975ac:
    // 0x2975ac: 0x0  nop
    ctx->pc = 0x2975acu;
    // NOP
label_2975b0:
    // 0x2975b0: 0x20235  .word       0x00020235                   # INVALID     $zero, $v0, 0x235 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2975b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2975B0 raw=0x00020235"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2975b4:
    // 0x2975b4: 0x7b  dsra        $zero, $zero, 1
    ctx->pc = 0x2975b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 1);
label_2975b8:
    // 0x2975b8: 0x3d680  sll         $k0, $v1, 26
    ctx->pc = 0x2975b8u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 3), 26));
label_2975bc:
    // 0x2975bc: 0x0  nop
    ctx->pc = 0x2975bcu;
    // NOP
label_2975c0:
    // 0x2975c0: 0x202b0  tge         $zero, $v0, 10
    ctx->pc = 0x2975c0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_2975c4:
    // 0x2975c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2975c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2975C4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2975c8:
    // 0x2975c8: 0x6b0  tge         $zero, $zero, 26
    ctx->pc = 0x2975c8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2975cc:
    // 0x2975cc: 0x0  nop
    ctx->pc = 0x2975ccu;
    // NOP
label_2975d0:
    // 0x2975d0: 0x202b1  tgeu        $zero, $v0, 10
    ctx->pc = 0x2975d0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_2975d4:
    // 0x2975d4: 0x20d  break       0, 8
    ctx->pc = 0x2975d4u;
    runtime->handleBreak(rdram, ctx);
label_2975d8:
    // 0x2975d8: 0x106260  .word       0x00106260                   # add         $t4, $zero, $s0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2975d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_2975dc:
    // 0x2975dc: 0x0  nop
    ctx->pc = 0x2975dcu;
    // NOP
label_2975e0:
    // 0x2975e0: 0x204be  dsrl32      $zero, $v0, 18
    ctx->pc = 0x2975e0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 2) >> (32 + 18));
label_2975e4:
    // 0x2975e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2975e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2975E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2975e8:
    // 0x2975e8: 0x730  tge         $zero, $zero, 28
    ctx->pc = 0x2975e8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2975ec:
    // 0x2975ec: 0x0  nop
    ctx->pc = 0x2975ecu;
    // NOP
label_2975f0:
    // 0x2975f0: 0x204bf  dsra32      $zero, $v0, 18
    ctx->pc = 0x2975f0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 2) >> (32 + 18));
label_2975f4:
    // 0x2975f4: 0x20d  break       0, 8
    ctx->pc = 0x2975f4u;
    runtime->handleBreak(rdram, ctx);
label_2975f8:
    // 0x2975f8: 0x106260  .word       0x00106260                   # add         $t4, $zero, $s0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2975f8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_2975fc:
    // 0x2975fc: 0x0  nop
    ctx->pc = 0x2975fcu;
    // NOP
label_297600:
    // 0x297600: 0x206cc  .word       0x000206CC                   # syscall     27 # 00020000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297600u;
    ctx->pc = 0x297604u;
runtime->handleSyscall(rdram, ctx, 0x81Bu);
label_297604:
    // 0x297604: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297604u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297604 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297608:
    // 0x297608: 0x730  tge         $zero, $zero, 28
    ctx->pc = 0x297608u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29760c:
    // 0x29760c: 0x0  nop
    ctx->pc = 0x29760cu;
    // NOP
label_297610:
    // 0x297610: 0x206cd  break       2, 27
    ctx->pc = 0x297610u;
    runtime->handleBreak(rdram, ctx);
label_297614:
    // 0x297614: 0x218  .word       0x00000218                   # mult        $zero, $zero, $zero # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x297614u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_297618:
    // 0x297618: 0x10bad0  .word       0x0010BAD0                   # mfhi        $s7 # 001002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297618u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_29761c:
    // 0x29761c: 0x0  nop
    ctx->pc = 0x29761cu;
    // NOP
label_297620:
    // 0x297620: 0x208e5  .word       0x000208E5                   # or          $at, $zero, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297620u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | GPR_U64(ctx, 2));
label_297624:
    // 0x297624: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297624u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297624 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297628:
    // 0x297628: 0x6b0  tge         $zero, $zero, 26
    ctx->pc = 0x297628u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29762c:
    // 0x29762c: 0x0  nop
    ctx->pc = 0x29762cu;
    // NOP
label_297630:
    // 0x297630: 0x208e6  .word       0x000208E6                   # xor         $at, $zero, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297630u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 2));
label_297634:
    // 0x297634: 0xdd  .word       0x000000DD                   # dmultu      $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297634u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x297634 raw=0x000000DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297638:
    // 0x297638: 0x6e240  sll         $gp, $a2, 9
    ctx->pc = 0x297638u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 6), 9));
label_29763c:
    // 0x29763c: 0x0  nop
    ctx->pc = 0x29763cu;
    // NOP
label_297640:
    // 0x297640: 0x209c3  sra         $at, $v0, 7
    ctx->pc = 0x297640u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 2), 7));
label_297644:
    // 0x297644: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297644u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297644 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297648:
    // 0x297648: 0x750  .word       0x00000750                   # mfhi        $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297648u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29764c:
    // 0x29764c: 0x0  nop
    ctx->pc = 0x29764cu;
    // NOP
label_297650:
    // 0x297650: 0x209c4  .word       0x000209C4                   # sllv        $at, $v0, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297650u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_297654:
    // 0x297654: 0xc6  .word       0x000000C6                   # srlv        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297654u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297658:
    // 0x297658: 0x62fe0  .word       0x00062FE0                   # add         $a1, $zero, $a2 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297658u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_29765c:
    // 0x29765c: 0x0  nop
    ctx->pc = 0x29765cu;
    // NOP
label_297660:
    // 0x297660: 0x20a8a  .word       0x00020A8A                   # movz        $at, $zero, $v0 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297660u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_297664:
    // 0x297664: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297664u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297664 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297668:
    // 0x297668: 0x6b0  tge         $zero, $zero, 26
    ctx->pc = 0x297668u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29766c:
    // 0x29766c: 0x0  nop
    ctx->pc = 0x29766cu;
    // NOP
label_297670:
    // 0x297670: 0x20a8b  .word       0x00020A8B                   # movn        $at, $zero, $v0 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297670u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_297674:
    // 0x297674: 0x182  srl         $zero, $zero, 6
    ctx->pc = 0x297674u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 6));
label_297678:
    // 0x297678: 0xc0a80  sll         $at, $t4, 10
    ctx->pc = 0x297678u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 12), 10));
label_29767c:
    // 0x29767c: 0x0  nop
    ctx->pc = 0x29767cu;
    // NOP
label_297680:
    // 0x297680: 0x20c0d  break       2, 48
    ctx->pc = 0x297680u;
    runtime->handleBreak(rdram, ctx);
label_297684:
    // 0x297684: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297684u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297684 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297688:
    // 0x297688: 0x6f0  tge         $zero, $zero, 27
    ctx->pc = 0x297688u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29768c:
    // 0x29768c: 0x0  nop
    ctx->pc = 0x29768cu;
    // NOP
label_297690:
    // 0x297690: 0x20c0e  .word       0x00020C0E                   # INVALID     $zero, $v0, 0xC0E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297690u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x297690 raw=0x00020C0E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297694:
    // 0x297694: 0x1aa  .word       0x000001AA                   # slt         $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297694u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_297698:
    // 0x297698: 0xd49b0  tge         $zero, $t5, 294
    ctx->pc = 0x297698u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_29769c:
    // 0x29769c: 0x0  nop
    ctx->pc = 0x29769cu;
    // NOP
label_2976a0:
    // 0x2976a0: 0x20db8  dsll        $at, $v0, 22
    ctx->pc = 0x2976a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 2) << 22);
label_2976a4:
    // 0x2976a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2976a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2976A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2976a8:
    // 0x2976a8: 0x750  .word       0x00000750                   # mfhi        $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2976a8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2976ac:
    // 0x2976ac: 0x0  nop
    ctx->pc = 0x2976acu;
    // NOP
label_2976b0:
    // 0x2976b0: 0x20db9  .word       0x00020DB9                   # INVALID     $zero, $v0, 0xDB9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2976b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2976B0 raw=0x00020DB9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2976b4:
    // 0x2976b4: 0xb0  tge         $zero, $zero, 2
    ctx->pc = 0x2976b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2976b8:
    // 0x2976b8: 0x57d90  .word       0x00057D90                   # mfhi        $t7 # 00050580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2976b8u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_2976bc:
    // 0x2976bc: 0x0  nop
    ctx->pc = 0x2976bcu;
    // NOP
label_2976c0:
    // 0x2976c0: 0x20e69  .word       0x00020E69                   # mtsa        $zero # 00020E40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2976c0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2976c4:
    // 0x2976c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2976c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2976C4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2976c8:
    // 0x2976c8: 0x6f0  tge         $zero, $zero, 27
    ctx->pc = 0x2976c8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2976cc:
    // 0x2976cc: 0x0  nop
    ctx->pc = 0x2976ccu;
    // NOP
label_2976d0:
    // 0x2976d0: 0x20e6a  .word       0x00020E6A                   # slt         $at, $zero, $v0 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2976d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2976d4:
    // 0x2976d4: 0x9c  .word       0x0000009C                   # dmult       $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2976d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2976D4 raw=0x0000009C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2976d8:
    // 0x2976d8: 0x4dab0  tge         $zero, $a0, 874
    ctx->pc = 0x2976d8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_2976dc:
    // 0x2976dc: 0x0  nop
    ctx->pc = 0x2976dcu;
    // NOP
label_2976e0:
    // 0x2976e0: 0x20f06  .word       0x00020F06                   # srlv        $at, $v0, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2976e0u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_2976e4:
    // 0x2976e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2976e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2976E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2976e8:
    // 0x2976e8: 0x750  .word       0x00000750                   # mfhi        $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2976e8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2976ec:
    // 0x2976ec: 0x0  nop
    ctx->pc = 0x2976ecu;
    // NOP
label_2976f0:
    // 0x2976f0: 0x20f07  .word       0x00020F07                   # srav        $at, $v0, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2976f0u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_2976f4:
    // 0x2976f4: 0xe7  .word       0x000000E7                   # not         $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2976f4u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2976f8:
    // 0x2976f8: 0x732c0  sll         $a2, $a3, 11
    ctx->pc = 0x2976f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 11));
label_2976fc:
    // 0x2976fc: 0x0  nop
    ctx->pc = 0x2976fcu;
    // NOP
label_297700:
    // 0x297700: 0x20fee  .word       0x00020FEE                   # dsub        $at, $zero, $v0 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297700u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 2); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_297704:
    // 0x297704: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297704u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297704 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297708:
    // 0x297708: 0x750  .word       0x00000750                   # mfhi        $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297708u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29770c:
    // 0x29770c: 0x0  nop
    ctx->pc = 0x29770cu;
    // NOP
label_297710:
    // 0x297710: 0x20fef  .word       0x00020FEF                   # dsubu       $at, $zero, $v0 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297710u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
label_297714:
    // 0x297714: 0xd8  .word       0x000000D8                   # mult        $zero, $zero, $zero # 000000C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x297714u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_297718:
    // 0x297718: 0x6bc60  .word       0x0006BC60                   # add         $s7, $zero, $a2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297718u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_29771c:
    // 0x29771c: 0x0  nop
    ctx->pc = 0x29771cu;
    // NOP
label_297720:
    // 0x297720: 0x210c7  .word       0x000210C7                   # srav        $v0, $v0, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297720u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_297724:
    // 0x297724: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297724u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297724 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297728:
    // 0x297728: 0x6b0  tge         $zero, $zero, 26
    ctx->pc = 0x297728u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29772c:
    // 0x29772c: 0x0  nop
    ctx->pc = 0x29772cu;
    // NOP
label_297730:
    // 0x297730: 0x210c8  .word       0x000210C8                   # jr          $zero # 000210C0 <InstrIdType: CPU_SPECIAL>
label_297734:
    if (ctx->pc == 0x297734u) {
        ctx->pc = 0x297734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297730u;
        // 0x297734: 0xbc  dsll32      $zero, $zero, 2 (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297738u;
        goto label_297738;
    }
    ctx->pc = 0x297730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x297734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297730u;
        // 0x297734: 0xbc  dsll32      $zero, $zero, 2 (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297730u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x297738u;
label_297738:
    // 0x297738: 0x5da60  .word       0x0005DA60                   # add         $k1, $zero, $a1 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297738u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_29773c:
    // 0x29773c: 0x0  nop
    ctx->pc = 0x29773cu;
    // NOP
label_297740:
    // 0x297740: 0x21184  .word       0x00021184                   # sllv        $v0, $v0, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_297744:
    // 0x297744: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297744u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297744 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297748:
    // 0x297748: 0x5d0  .word       0x000005D0                   # mfhi        $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297748u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29774c:
    // 0x29774c: 0x0  nop
    ctx->pc = 0x29774cu;
    // NOP
label_297750:
    // 0x297750: 0x21185  .word       0x00021185                   # INVALID     $zero, $v0, 0x1185 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297750u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x297750 raw=0x00021185"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297754:
    // 0x297754: 0xa0  .word       0x000000A0                   # add         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297754u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_297758:
    // 0x297758: 0x4fe50  .word       0x0004FE50                   # mfhi        $ra # 00040640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297758u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_29775c:
    // 0x29775c: 0x0  nop
    ctx->pc = 0x29775cu;
    // NOP
label_297760:
    // 0x297760: 0x21225  .word       0x00021225                   # or          $v0, $zero, $v0 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | GPR_U64(ctx, 2));
label_297764:
    // 0x297764: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297764u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297764 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297768:
    // 0x297768: 0x630  tge         $zero, $zero, 24
    ctx->pc = 0x297768u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29776c:
    // 0x29776c: 0x0  nop
    ctx->pc = 0x29776cu;
    // NOP
label_297770:
    // 0x297770: 0x21226  .word       0x00021226                   # xor         $v0, $zero, $v0 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 2));
label_297774:
    // 0x297774: 0xbf  dsra32      $zero, $zero, 2
    ctx->pc = 0x297774u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 2));
label_297778:
    // 0x297778: 0x5f150  .word       0x0005F150                   # mfhi        $fp # 00050140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297778u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_29777c:
    // 0x29777c: 0x0  nop
    ctx->pc = 0x29777cu;
    // NOP
label_297780:
    // 0x297780: 0x212e5  .word       0x000212E5                   # or          $v0, $zero, $v0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | GPR_U64(ctx, 2));
label_297784:
    // 0x297784: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297784u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297784 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297788:
    // 0x297788: 0x5b0  tge         $zero, $zero, 22
    ctx->pc = 0x297788u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29778c:
    // 0x29778c: 0x0  nop
    ctx->pc = 0x29778cu;
    // NOP
label_297790:
    // 0x297790: 0x212e6  .word       0x000212E6                   # xor         $v0, $zero, $v0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 2));
label_297794:
    // 0x297794: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297794u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297794 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297798:
    // 0x297798: 0x2bb  dsra        $zero, $zero, 10
    ctx->pc = 0x297798u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 10);
label_29779c:
    // 0x29779c: 0x0  nop
    ctx->pc = 0x29779cu;
    // NOP
label_2977a0:
    // 0x2977a0: 0x212e7  .word       0x000212E7                   # nor         $v0, $zero, $v0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2977a0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_2977a4:
    // 0x2977a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2977a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2977A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2977a8:
    // 0x2977a8: 0x307  .word       0x00000307                   # srav        $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2977a8u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2977ac:
    // 0x2977ac: 0x0  nop
    ctx->pc = 0x2977acu;
    // NOP
label_2977b0:
    // 0x2977b0: 0x212e8  .word       0x000212E8                   # mfsa        $v0 # 000202C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2977b0u;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_2977b4:
    // 0x2977b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2977b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2977B4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2977b8:
    // 0x2977b8: 0x32b  .word       0x0000032B                   # sltu        $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2977b8u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_2977bc:
    // 0x2977bc: 0x0  nop
    ctx->pc = 0x2977bcu;
    // NOP
label_2977c0:
    // 0x2977c0: 0x212e9  .word       0x000212E9                   # mtsa        $zero # 000212C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2977c0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2977c4:
    // 0x2977c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2977c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2977C4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2977c8:
    // 0x2977c8: 0x339  .word       0x00000339                   # INVALID     $zero, $zero, 0x339 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2977c8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2977C8 raw=0x00000339"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2977cc:
    // 0x2977cc: 0x0  nop
    ctx->pc = 0x2977ccu;
    // NOP
label_2977d0:
    // 0x2977d0: 0x212ea  .word       0x000212EA                   # slt         $v0, $zero, $v0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2977d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2977d4:
    // 0x2977d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2977d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2977D4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2977d8:
    // 0x2977d8: 0x344  .word       0x00000344                   # sllv        $zero, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2977d8u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2977dc:
    // 0x2977dc: 0x0  nop
    ctx->pc = 0x2977dcu;
    // NOP
label_2977e0:
    // 0x2977e0: 0x212eb  .word       0x000212EB                   # sltu        $v0, $zero, $v0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2977e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2977e4:
    // 0x2977e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2977e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2977E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2977e8:
    // 0x2977e8: 0x2f1  tgeu        $zero, $zero, 11
    ctx->pc = 0x2977e8u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2977ec:
    // 0x2977ec: 0x0  nop
    ctx->pc = 0x2977ecu;
    // NOP
label_2977f0:
    // 0x2977f0: 0x212ec  .word       0x000212EC                   # dadd        $v0, $zero, $v0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2977f0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 2); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, r); }
label_2977f4:
    // 0x2977f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2977f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2977F4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2977f8:
    // 0x2977f8: 0x2d9  .word       0x000002D9                   # multu       $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2977f8u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2977fc:
    // 0x2977fc: 0x0  nop
    ctx->pc = 0x2977fcu;
    // NOP
label_297800:
    // 0x297800: 0x212ed  .word       0x000212ED                   # daddu       $v0, $zero, $v0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297800u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 2));
label_297804:
    // 0x297804: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297804u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297804 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297808:
    // 0x297808: 0x2cc  syscall     11
    ctx->pc = 0x297808u;
    ctx->pc = 0x29780Cu;
runtime->handleSyscall(rdram, ctx, 0xBu);
label_29780c:
    // 0x29780c: 0x0  nop
    ctx->pc = 0x29780cu;
    // NOP
label_297810:
    // 0x297810: 0x212ee  .word       0x000212EE                   # dsub        $v0, $zero, $v0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297810u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 2); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, r); }
label_297814:
    // 0x297814: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297814u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297814 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297818:
    // 0x297818: 0x2b4  teq         $zero, $zero, 10
    ctx->pc = 0x297818u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29781c:
    // 0x29781c: 0x0  nop
    ctx->pc = 0x29781cu;
    // NOP
label_297820:
    // 0x297820: 0x212ef  .word       0x000212EF                   # dsubu       $v0, $zero, $v0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
label_297824:
    // 0x297824: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297824u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297824 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297828:
    // 0x297828: 0x385  .word       0x00000385                   # INVALID     $zero, $zero, 0x385 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297828u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x297828 raw=0x00000385"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29782c:
    // 0x29782c: 0x0  nop
    ctx->pc = 0x29782cu;
    // NOP
label_297830:
    // 0x297830: 0x212f0  tge         $zero, $v0, 75
    ctx->pc = 0x297830u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_297834:
    // 0x297834: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297834u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297834 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297838:
    // 0x297838: 0x345  .word       0x00000345                   # INVALID     $zero, $zero, 0x345 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297838u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x297838 raw=0x00000345"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29783c:
    // 0x29783c: 0x0  nop
    ctx->pc = 0x29783cu;
    // NOP
label_297840:
    // 0x297840: 0x212f1  tgeu        $zero, $v0, 75
    ctx->pc = 0x297840u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_297844:
    // 0x297844: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297844u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297844 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297848:
    // 0x297848: 0x338  dsll        $zero, $zero, 12
    ctx->pc = 0x297848u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 12);
label_29784c:
    // 0x29784c: 0x0  nop
    ctx->pc = 0x29784cu;
    // NOP
label_297850:
    // 0x297850: 0x212f2  tlt         $zero, $v0, 75
    ctx->pc = 0x297850u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_297854:
    // 0x297854: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297854u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297854 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297858:
    // 0x297858: 0x333  tltu        $zero, $zero, 12
    ctx->pc = 0x297858u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29785c:
    // 0x29785c: 0x0  nop
    ctx->pc = 0x29785cu;
    // NOP
label_297860:
    // 0x297860: 0x212f3  tltu        $zero, $v0, 75
    ctx->pc = 0x297860u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_297864:
    // 0x297864: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297864u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297864 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297868:
    // 0x297868: 0x28f  sync
    ctx->pc = 0x297868u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_29786c:
    // 0x29786c: 0x0  nop
    ctx->pc = 0x29786cu;
    // NOP
label_297870:
    // 0x297870: 0x212f4  teq         $zero, $v0, 75
    ctx->pc = 0x297870u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_297874:
    // 0x297874: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297874u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297874 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297878:
    // 0x297878: 0x32a  .word       0x0000032A                   # slt         $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297878u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_29787c:
    // 0x29787c: 0x0  nop
    ctx->pc = 0x29787cu;
    // NOP
label_297880:
    // 0x297880: 0x212f5  .word       0x000212F5                   # INVALID     $zero, $v0, 0x12F5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297880u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x297880 raw=0x000212F5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297884:
    // 0x297884: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297884u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297884 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297888:
    // 0x297888: 0x2f7  .word       0x000002F7                   # INVALID     $zero, $zero, 0x2F7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297888u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x297888 raw=0x000002F7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29788c:
    // 0x29788c: 0x0  nop
    ctx->pc = 0x29788cu;
    // NOP
label_297890:
    // 0x297890: 0x212f6  tne         $zero, $v0, 75
    ctx->pc = 0x297890u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_297894:
    // 0x297894: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297894u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297894 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297898:
    // 0x297898: 0x2f8  dsll        $zero, $zero, 11
    ctx->pc = 0x297898u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 11);
label_29789c:
    // 0x29789c: 0x0  nop
    ctx->pc = 0x29789cu;
    // NOP
label_2978a0:
    // 0x2978a0: 0x212f7  .word       0x000212F7                   # INVALID     $zero, $v0, 0x12F7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2978a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2978A0 raw=0x000212F7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2978a4:
    // 0x2978a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2978a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2978A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2978a8:
    // 0x2978a8: 0x3a5  .word       0x000003A5                   # move        $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2978a8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2978ac:
    // 0x2978ac: 0x0  nop
    ctx->pc = 0x2978acu;
    // NOP
label_2978b0:
    // 0x2978b0: 0x212f8  dsll        $v0, $v0, 11
    ctx->pc = 0x2978b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 11);
label_2978b4:
    // 0x2978b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2978b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2978B4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2978b8:
    // 0x2978b8: 0x326  .word       0x00000326                   # xor         $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2978b8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2978bc:
    // 0x2978bc: 0x0  nop
    ctx->pc = 0x2978bcu;
    // NOP
label_2978c0:
    // 0x2978c0: 0x212f9  .word       0x000212F9                   # INVALID     $zero, $v0, 0x12F9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2978c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2978C0 raw=0x000212F9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2978c4:
    // 0x2978c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2978c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2978C4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2978c8:
    // 0x2978c8: 0x2f0  tge         $zero, $zero, 11
    ctx->pc = 0x2978c8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2978cc:
    // 0x2978cc: 0x0  nop
    ctx->pc = 0x2978ccu;
    // NOP
label_2978d0:
    // 0x2978d0: 0x212fa  dsrl        $v0, $v0, 11
    ctx->pc = 0x2978d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 11);
label_2978d4:
    // 0x2978d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2978d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2978D4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2978d8:
    // 0x2978d8: 0x2bf  dsra32      $zero, $zero, 10
    ctx->pc = 0x2978d8u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 10));
label_2978dc:
    // 0x2978dc: 0x0  nop
    ctx->pc = 0x2978dcu;
    // NOP
label_2978e0:
    // 0x2978e0: 0x212fb  dsra        $v0, $v0, 11
    ctx->pc = 0x2978e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 11);
label_2978e4:
    // 0x2978e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2978e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2978E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2978e8:
    // 0x2978e8: 0x284  .word       0x00000284                   # sllv        $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2978e8u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2978ec:
    // 0x2978ec: 0x0  nop
    ctx->pc = 0x2978ecu;
    // NOP
label_2978f0:
    // 0x2978f0: 0x212fc  dsll32      $v0, $v0, 11
    ctx->pc = 0x2978f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 11));
label_2978f4:
    // 0x2978f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2978f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2978F4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2978f8:
    // 0x2978f8: 0x29d  .word       0x0000029D                   # dmultu      $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2978f8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2978F8 raw=0x0000029D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2978fc:
    // 0x2978fc: 0x0  nop
    ctx->pc = 0x2978fcu;
    // NOP
label_297900:
    // 0x297900: 0x212fd  .word       0x000212FD                   # INVALID     $zero, $v0, 0x12FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297900u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x297900 raw=0x000212FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297904:
    // 0x297904: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297904u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297904 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297908:
    // 0x297908: 0x308  .word       0x00000308                   # jr          $zero # 00000300 <InstrIdType: CPU_SPECIAL>
label_29790c:
    if (ctx->pc == 0x29790Cu) {
        ctx->pc = 0x297910u;
        goto label_297910;
    }
    ctx->pc = 0x297908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297908u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x297910u;
label_297910:
    // 0x297910: 0x212fe  dsrl32      $v0, $v0, 11
    ctx->pc = 0x297910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 11));
label_297914:
    // 0x297914: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297914u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297914 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297918:
    // 0x297918: 0x29e  .word       0x0000029E                   # ddiv        $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297918u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x297918 raw=0x0000029E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29791c:
    // 0x29791c: 0x0  nop
    ctx->pc = 0x29791cu;
    // NOP
label_297920:
    // 0x297920: 0x212ff  dsra32      $v0, $v0, 11
    ctx->pc = 0x297920u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 11));
label_297924:
    // 0x297924: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297924u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297924 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297928:
    // 0x297928: 0x274  teq         $zero, $zero, 9
    ctx->pc = 0x297928u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29792c:
    // 0x29792c: 0x0  nop
    ctx->pc = 0x29792cu;
    // NOP
label_297930:
    // 0x297930: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x297930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
label_297934:
    // 0x297934: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297934u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297934 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297938:
    // 0x297938: 0x2a2  .word       0x000002A2                   # neg         $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297938u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_29793c:
    // 0x29793c: 0x0  nop
    ctx->pc = 0x29793cu;
    // NOP
label_297940:
    // 0x297940: 0x21301  .word       0x00021301                   # INVALID     $zero, $v0, 0x1301 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297940u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297940 raw=0x00021301"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297944:
    // 0x297944: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297944u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297944 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297948:
    // 0x297948: 0x328  .word       0x00000328                   # mfsa        $zero # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x297948u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_29794c:
    // 0x29794c: 0x0  nop
    ctx->pc = 0x29794cu;
    // NOP
label_297950:
    // 0x297950: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x297950u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_297954:
    // 0x297954: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297954u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297954 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297958:
    // 0x297958: 0x289  .word       0x00000289                   # jalr        $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
label_29795c:
    if (ctx->pc == 0x29795Cu) {
        ctx->pc = 0x297960u;
        goto label_297960;
    }
    ctx->pc = 0x297958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297958u, 0x297960u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x297960u;
label_297960:
    // 0x297960: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x297960u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
label_297964:
    // 0x297964: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297964u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297964 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297968:
    // 0x297968: 0x296  .word       0x00000296                   # dsrlv       $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297968u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29796c:
    // 0x29796c: 0x0  nop
    ctx->pc = 0x29796cu;
    // NOP
label_297970:
    // 0x297970: 0x21304  .word       0x00021304                   # sllv        $v0, $v0, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297970u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_297974:
    // 0x297974: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297974u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297974 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297978:
    // 0x297978: 0x289  .word       0x00000289                   # jalr        $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
label_29797c:
    if (ctx->pc == 0x29797Cu) {
        ctx->pc = 0x297980u;
        goto label_297980;
    }
    ctx->pc = 0x297978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297978u, 0x297980u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x297980u;
label_297980:
    // 0x297980: 0x21305  .word       0x00021305                   # INVALID     $zero, $v0, 0x1305 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297980u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x297980 raw=0x00021305"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297984:
    // 0x297984: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297984u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297984 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297988:
    // 0x297988: 0x326  .word       0x00000326                   # xor         $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297988u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_29798c:
    // 0x29798c: 0x0  nop
    ctx->pc = 0x29798cu;
    // NOP
label_297990:
    // 0x297990: 0x21306  .word       0x00021306                   # srlv        $v0, $v0, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297990u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_297994:
    // 0x297994: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297994u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297994 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297998:
    // 0x297998: 0x33b  dsra        $zero, $zero, 12
    ctx->pc = 0x297998u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 12);
label_29799c:
    // 0x29799c: 0x0  nop
    ctx->pc = 0x29799cu;
    // NOP
label_2979a0:
    // 0x2979a0: 0x21307  .word       0x00021307                   # srav        $v0, $v0, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2979a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_2979a4:
    // 0x2979a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2979a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2979A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2979a8:
    // 0x2979a8: 0x1dd  .word       0x000001DD                   # dmultu      $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2979a8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2979A8 raw=0x000001DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2979ac:
    // 0x2979ac: 0x0  nop
    ctx->pc = 0x2979acu;
    // NOP
label_2979b0:
    // 0x2979b0: 0x21308  .word       0x00021308                   # jr          $zero # 00021300 <InstrIdType: CPU_SPECIAL>
label_2979b4:
    if (ctx->pc == 0x2979B4u) {
        ctx->pc = 0x2979B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2979B0u;
        // 0x2979b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2979B4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2979B8u;
        goto label_2979b8;
    }
    ctx->pc = 0x2979B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2979B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2979B0u;
        // 0x2979b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2979B4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2979B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2979B8u;
label_2979b8:
    // 0x2979b8: 0x288  .word       0x00000288                   # jr          $zero # 00000280 <InstrIdType: CPU_SPECIAL>
label_2979bc:
    if (ctx->pc == 0x2979BCu) {
        ctx->pc = 0x2979C0u;
        goto label_2979c0;
    }
    ctx->pc = 0x2979B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2979B8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2979C0u;
label_2979c0:
    // 0x2979c0: 0x21309  .word       0x00021309                   # jalr        $v0, $zero # 00020300 <InstrIdType: CPU_SPECIAL>
label_2979c4:
    if (ctx->pc == 0x2979C4u) {
        ctx->pc = 0x2979C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2979C0u;
        // 0x2979c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2979C4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2979C8u;
        goto label_2979c8;
    }
    ctx->pc = 0x2979C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 2, 0x2979C8u);
        ctx->pc = 0x2979C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2979C0u;
        // 0x2979c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2979C4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2979C0u, 0x2979C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2979C8u;
label_2979c8:
    // 0x2979c8: 0x307  .word       0x00000307                   # srav        $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2979c8u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2979cc:
    // 0x2979cc: 0x0  nop
    ctx->pc = 0x2979ccu;
    // NOP
label_2979d0:
    // 0x2979d0: 0x2130a  .word       0x0002130A                   # movz        $v0, $zero, $v0 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2979d0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_2979d4:
    // 0x2979d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2979d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2979D4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2979d8:
    // 0x2979d8: 0x35e  .word       0x0000035E                   # ddiv        $zero, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2979d8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2979D8 raw=0x0000035E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2979dc:
    // 0x2979dc: 0x0  nop
    ctx->pc = 0x2979dcu;
    // NOP
label_2979e0:
    // 0x2979e0: 0x2130b  .word       0x0002130B                   # movn        $v0, $zero, $v0 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2979e0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_2979e4:
    // 0x2979e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2979e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2979E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2979e8:
    // 0x2979e8: 0x26b  .word       0x0000026B                   # sltu        $zero, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2979e8u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_2979ec:
    // 0x2979ec: 0x0  nop
    ctx->pc = 0x2979ecu;
    // NOP
label_2979f0:
    // 0x2979f0: 0x2130c  .word       0x0002130C                   # syscall     76 # 00020000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2979f0u;
    ctx->pc = 0x2979F4u;
runtime->handleSyscall(rdram, ctx, 0x84Cu);
label_2979f4:
    // 0x2979f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2979f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2979F4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2979f8:
    // 0x2979f8: 0x25d  .word       0x0000025D                   # dmultu      $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2979f8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2979F8 raw=0x0000025D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2979fc:
    // 0x2979fc: 0x0  nop
    ctx->pc = 0x2979fcu;
    // NOP
label_297a00:
    // 0x297a00: 0x2130d  break       2, 76
    ctx->pc = 0x297a00u;
    runtime->handleBreak(rdram, ctx);
label_297a04:
    // 0x297a04: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297a04u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297A04 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297a08:
    // 0x297a08: 0x30e  .word       0x0000030E                   # INVALID     $zero, $zero, 0x30E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297a08u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x297A08 raw=0x0000030E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297a0c:
    // 0x297a0c: 0x0  nop
    ctx->pc = 0x297a0cu;
    // NOP
label_297a10:
    // 0x297a10: 0x2130e  .word       0x0002130E                   # INVALID     $zero, $v0, 0x130E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297a10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x297A10 raw=0x0002130E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297a14:
    // 0x297a14: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297a14u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297A14 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297a18:
    // 0x297a18: 0x33a  dsrl        $zero, $zero, 12
    ctx->pc = 0x297a18u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 12);
label_297a1c:
    // 0x297a1c: 0x0  nop
    ctx->pc = 0x297a1cu;
    // NOP
label_297a20:
    // 0x297a20: 0x2130f  .word       0x0002130F                   # sync # 00021000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297a20u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_297a24:
    // 0x297a24: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297a24u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297A24 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297a28:
    // 0x297a28: 0x30d  break       0, 12
    ctx->pc = 0x297a28u;
    runtime->handleBreak(rdram, ctx);
label_297a2c:
    // 0x297a2c: 0x0  nop
    ctx->pc = 0x297a2cu;
    // NOP
label_297a30:
    // 0x297a30: 0x21310  .word       0x00021310                   # mfhi        $v0 # 00020300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297a30u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_297a34:
    // 0x297a34: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297a34u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297A34 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297a38:
    // 0x297a38: 0x336  tne         $zero, $zero, 12
    ctx->pc = 0x297a38u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_297a3c:
    // 0x297a3c: 0x0  nop
    ctx->pc = 0x297a3cu;
    // NOP
label_297a40:
    // 0x297a40: 0x21311  .word       0x00021311                   # mthi        $zero # 00021300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297a40u;
    ctx->hi = GPR_U64(ctx, 0);
label_297a44:
    // 0x297a44: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297a44u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297A44 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297a48:
    // 0x297a48: 0x286  .word       0x00000286                   # srlv        $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297a48u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297a4c:
    // 0x297a4c: 0x0  nop
    ctx->pc = 0x297a4cu;
    // NOP
label_297a50:
    // 0x297a50: 0x21312  .word       0x00021312                   # mflo        $v0 # 00020300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297a50u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_297a54:
    // 0x297a54: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297a54u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297A54 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297a58:
    // 0x297a58: 0x282  srl         $zero, $zero, 10
    ctx->pc = 0x297a58u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 10));
label_297a5c:
    // 0x297a5c: 0x0  nop
    ctx->pc = 0x297a5cu;
    // NOP
label_297a60:
    // 0x297a60: 0x21313  .word       0x00021313                   # mtlo        $zero # 00021300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297a60u;
    ctx->lo = GPR_U64(ctx, 0);
label_297a64:
    // 0x297a64: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297a64u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297A64 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297a68:
    // 0x297a68: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x297a68u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_297a6c:
    // 0x297a6c: 0x0  nop
    ctx->pc = 0x297a6cu;
    // NOP
label_297a70:
    // 0x297a70: 0x21314  .word       0x00021314                   # dsllv       $v0, $v0, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 0) & 0x3F));
label_297a74:
    // 0x297a74: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297a74u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297A74 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297a78:
    // 0x297a78: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x297a78u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_297a7c:
    // 0x297a7c: 0x0  nop
    ctx->pc = 0x297a7cu;
    // NOP
label_297a80:
    // 0x297a80: 0x21315  .word       0x00021315                   # INVALID     $zero, $v0, 0x1315 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297a80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x297A80 raw=0x00021315"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297a84:
    // 0x297a84: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x297a84u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297a88:
    // 0x297a88: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297a88u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_297a8c:
    // 0x297a8c: 0x0  nop
    ctx->pc = 0x297a8cu;
    // NOP
label_297a90:
    // 0x297a90: 0x21319  .word       0x00021319                   # multu       $zero, $v0 # 00001300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297a90u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_297a94:
    // 0x297a94: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x297a94u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297a98:
    // 0x297a98: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297a98u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_297a9c:
    // 0x297a9c: 0x0  nop
    ctx->pc = 0x297a9cu;
    // NOP
label_297aa0:
    // 0x297aa0: 0x2131d  .word       0x0002131D                   # dmultu      $zero, $v0 # 00001300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297aa0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x297AA0 raw=0x0002131D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297aa4:
    // 0x297aa4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297aa4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297AA4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297aa8:
    // 0x297aa8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x297aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_297aac:
    // 0x297aac: 0x0  nop
    ctx->pc = 0x297aacu;
    // NOP
label_297ab0:
    // 0x297ab0: 0x2131e  .word       0x0002131E                   # ddiv        $v0, $zero, $v0 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297ab0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x297AB0 raw=0x0002131E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297ab4:
    // 0x297ab4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297ab4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297AB4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297ab8:
    // 0x297ab8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x297ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_297abc:
    // 0x297abc: 0x0  nop
    ctx->pc = 0x297abcu;
    // NOP
label_297ac0:
    // 0x297ac0: 0x2131f  .word       0x0002131F                   # ddivu       $v0, $zero, $v0 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297ac0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x297AC0 raw=0x0002131F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297ac4:
    // 0x297ac4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x297ac4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297ac8:
    // 0x297ac8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297ac8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_297acc:
    // 0x297acc: 0x0  nop
    ctx->pc = 0x297accu;
    // NOP
label_297ad0:
    // 0x297ad0: 0x21323  .word       0x00021323                   # negu        $v0, $v0 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_297ad4:
    // 0x297ad4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x297ad4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297ad8:
    // 0x297ad8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297ad8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_297adc:
    // 0x297adc: 0x0  nop
    ctx->pc = 0x297adcu;
    // NOP
label_297ae0:
    // 0x297ae0: 0x21327  .word       0x00021327                   # nor         $v0, $zero, $v0 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297ae0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_297ae4:
    // 0x297ae4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297ae4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297AE4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297ae8:
    // 0x297ae8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x297ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_297aec:
    // 0x297aec: 0x0  nop
    ctx->pc = 0x297aecu;
    // NOP
label_297af0:
    // 0x297af0: 0x21328  .word       0x00021328                   # mfsa        $v0 # 00020300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x297af0u;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_297af4:
    // 0x297af4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297af4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297AF4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297af8:
    // 0x297af8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x297af8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_297afc:
    // 0x297afc: 0x0  nop
    ctx->pc = 0x297afcu;
    // NOP
label_297b00:
    // 0x297b00: 0x21329  .word       0x00021329                   # mtsa        $zero # 00021300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x297b00u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_297b04:
    // 0x297b04: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x297b04u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297b08:
    // 0x297b08: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297b08u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_297b0c:
    // 0x297b0c: 0x0  nop
    ctx->pc = 0x297b0cu;
    // NOP
label_297b10:
    // 0x297b10: 0x2132d  .word       0x0002132D                   # daddu       $v0, $zero, $v0 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297b10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 2));
label_297b14:
    // 0x297b14: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x297b14u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297b18:
    // 0x297b18: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297b18u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_297b1c:
    // 0x297b1c: 0x0  nop
    ctx->pc = 0x297b1cu;
    // NOP
label_297b20:
    // 0x297b20: 0x21331  tgeu        $zero, $v0, 76
    ctx->pc = 0x297b20u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_297b24:
    // 0x297b24: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297b24u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297B24 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297b28:
    // 0x297b28: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x297b28u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_297b2c:
    // 0x297b2c: 0x0  nop
    ctx->pc = 0x297b2cu;
    // NOP
label_297b30:
    // 0x297b30: 0x21332  tlt         $zero, $v0, 76
    ctx->pc = 0x297b30u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_297b34:
    // 0x297b34: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297b34u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297B34 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297b38:
    // 0x297b38: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x297b38u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_297b3c:
    // 0x297b3c: 0x0  nop
    ctx->pc = 0x297b3cu;
    // NOP
label_297b40:
    // 0x297b40: 0x21333  tltu        $zero, $v0, 76
    ctx->pc = 0x297b40u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_297b44:
    // 0x297b44: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x297b44u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297b48:
    // 0x297b48: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297b48u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_297b4c:
    // 0x297b4c: 0x0  nop
    ctx->pc = 0x297b4cu;
    // NOP
label_297b50:
    // 0x297b50: 0x21337  .word       0x00021337                   # INVALID     $zero, $v0, 0x1337 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297b50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x297B50 raw=0x00021337"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297b54:
    // 0x297b54: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x297b54u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297b58:
    // 0x297b58: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297b58u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_297b5c:
    // 0x297b5c: 0x0  nop
    ctx->pc = 0x297b5cu;
    // NOP
label_297b60:
    // 0x297b60: 0x2133b  dsra        $v0, $v0, 12
    ctx->pc = 0x297b60u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 12);
label_297b64:
    // 0x297b64: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297b64u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297B64 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297b68:
    // 0x297b68: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x297b68u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_297b6c:
    // 0x297b6c: 0x0  nop
    ctx->pc = 0x297b6cu;
    // NOP
label_297b70:
    // 0x297b70: 0x2133c  dsll32      $v0, $v0, 12
    ctx->pc = 0x297b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 12));
label_297b74:
    // 0x297b74: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297b74u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297B74 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297b78:
    // 0x297b78: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x297b78u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_297b7c:
    // 0x297b7c: 0x0  nop
    ctx->pc = 0x297b7cu;
    // NOP
label_297b80:
    // 0x297b80: 0x2133d  .word       0x0002133D                   # INVALID     $zero, $v0, 0x133D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297b80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x297B80 raw=0x0002133D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297b84:
    // 0x297b84: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x297b84u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297b88:
    // 0x297b88: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297b88u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_297b8c:
    // 0x297b8c: 0x0  nop
    ctx->pc = 0x297b8cu;
    // NOP
label_297b90:
    // 0x297b90: 0x21341  .word       0x00021341                   # INVALID     $zero, $v0, 0x1341 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297b90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297B90 raw=0x00021341"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297b94:
    // 0x297b94: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x297b94u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297b98:
    // 0x297b98: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297b98u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_297b9c:
    // 0x297b9c: 0x0  nop
    ctx->pc = 0x297b9cu;
    // NOP
label_297ba0:
    // 0x297ba0: 0x21345  .word       0x00021345                   # INVALID     $zero, $v0, 0x1345 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297ba0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x297BA0 raw=0x00021345"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297ba4:
    // 0x297ba4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297ba4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297BA4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297ba8:
    // 0x297ba8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x297ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_297bac:
    // 0x297bac: 0x0  nop
    ctx->pc = 0x297bacu;
    // NOP
label_297bb0:
    // 0x297bb0: 0x21346  .word       0x00021346                   # srlv        $v0, $v0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_297bb4:
    // 0x297bb4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297bb4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297BB4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297bb8:
    // 0x297bb8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x297bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_297bbc:
    // 0x297bbc: 0x0  nop
    ctx->pc = 0x297bbcu;
    // NOP
label_297bc0:
    // 0x297bc0: 0x21347  .word       0x00021347                   # srav        $v0, $v0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297bc0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_297bc4:
    // 0x297bc4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x297bc4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297bc8:
    // 0x297bc8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297bc8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_297bcc:
    // 0x297bcc: 0x0  nop
    ctx->pc = 0x297bccu;
    // NOP
label_297bd0:
    // 0x297bd0: 0x2134b  .word       0x0002134B                   # movn        $v0, $zero, $v0 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297bd0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_297bd4:
    // 0x297bd4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x297bd4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297bd8:
    // 0x297bd8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297bd8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_297bdc:
    // 0x297bdc: 0x0  nop
    ctx->pc = 0x297bdcu;
    // NOP
label_297be0:
    // 0x297be0: 0x2134f  .word       0x0002134F                   # sync # 00021000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297be0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_297be4:
    // 0x297be4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297be4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297BE4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297be8:
    // 0x297be8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x297be8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_297bec:
    // 0x297bec: 0x0  nop
    ctx->pc = 0x297becu;
    // NOP
label_297bf0:
    // 0x297bf0: 0x21350  .word       0x00021350                   # mfhi        $v0 # 00020340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297bf0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_297bf4:
    // 0x297bf4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297bf4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297BF4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297bf8:
    // 0x297bf8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x297bf8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_297bfc:
    // 0x297bfc: 0x0  nop
    ctx->pc = 0x297bfcu;
    // NOP
label_297c00:
    // 0x297c00: 0x21351  .word       0x00021351                   # mthi        $zero # 00021340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297c00u;
    ctx->hi = GPR_U64(ctx, 0);
label_297c04:
    // 0x297c04: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x297c04u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297c08:
    // 0x297c08: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297c08u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_297c0c:
    // 0x297c0c: 0x0  nop
    ctx->pc = 0x297c0cu;
    // NOP
label_297c10:
    // 0x297c10: 0x21355  .word       0x00021355                   # INVALID     $zero, $v0, 0x1355 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297c10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x297C10 raw=0x00021355"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297c14:
    // 0x297c14: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x297c14u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297c18:
    // 0x297c18: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297c18u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_297c1c:
    // 0x297c1c: 0x0  nop
    ctx->pc = 0x297c1cu;
    // NOP
label_297c20:
    // 0x297c20: 0x21359  .word       0x00021359                   # multu       $zero, $v0 # 00001340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297c20u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_297c24:
    // 0x297c24: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297c24u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297C24 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297c28:
    // 0x297c28: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x297c28u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_297c2c:
    // 0x297c2c: 0x0  nop
    ctx->pc = 0x297c2cu;
    // NOP
label_297c30:
    // 0x297c30: 0x2135a  .word       0x0002135A                   # div         $v0, $zero, $v0 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297c30u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_297c34:
    // 0x297c34: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297c34u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297C34 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297c38:
    // 0x297c38: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x297c38u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_297c3c:
    // 0x297c3c: 0x0  nop
    ctx->pc = 0x297c3cu;
    // NOP
label_297c40:
    // 0x297c40: 0x2135b  .word       0x0002135B                   # divu        $v0, $zero, $v0 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297c40u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_297c44:
    // 0x297c44: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x297c44u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297c48:
    // 0x297c48: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297c48u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_297c4c:
    // 0x297c4c: 0x0  nop
    ctx->pc = 0x297c4cu;
    // NOP
label_297c50:
    // 0x297c50: 0x2135f  .word       0x0002135F                   # ddivu       $v0, $zero, $v0 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297c50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x297C50 raw=0x0002135F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297c54:
    // 0x297c54: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x297c54u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297c58:
    // 0x297c58: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297c58u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_297c5c:
    // 0x297c5c: 0x0  nop
    ctx->pc = 0x297c5cu;
    // NOP
label_297c60:
    // 0x297c60: 0x21363  .word       0x00021363                   # negu        $v0, $v0 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297c60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_297c64:
    // 0x297c64: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297c64u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297C64 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297c68:
    // 0x297c68: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x297c68u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_297c6c:
    // 0x297c6c: 0x0  nop
    ctx->pc = 0x297c6cu;
    // NOP
label_297c70:
    // 0x297c70: 0x21364  .word       0x00021364                   # and         $v0, $zero, $v0 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & GPR_U64(ctx, 2));
label_297c74:
    // 0x297c74: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297c74u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297C74 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297c78:
    // 0x297c78: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x297c78u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_297c7c:
    // 0x297c7c: 0x0  nop
    ctx->pc = 0x297c7cu;
    // NOP
label_297c80:
    // 0x297c80: 0x21365  .word       0x00021365                   # or          $v0, $zero, $v0 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | GPR_U64(ctx, 2));
label_297c84:
    // 0x297c84: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x297c84u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297c88:
    // 0x297c88: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297c88u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_297c8c:
    // 0x297c8c: 0x0  nop
    ctx->pc = 0x297c8cu;
    // NOP
label_297c90:
    // 0x297c90: 0x21369  .word       0x00021369                   # mtsa        $zero # 00021340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x297c90u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_297c94:
    // 0x297c94: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x297c94u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297c98:
    // 0x297c98: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297c98u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_297c9c:
    // 0x297c9c: 0x0  nop
    ctx->pc = 0x297c9cu;
    // NOP
label_297ca0:
    // 0x297ca0: 0x2136d  .word       0x0002136D                   # daddu       $v0, $zero, $v0 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297ca0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 2));
label_297ca4:
    // 0x297ca4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297ca4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297CA4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297ca8:
    // 0x297ca8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x297ca8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_297cac:
    // 0x297cac: 0x0  nop
    ctx->pc = 0x297cacu;
    // NOP
label_297cb0:
    // 0x297cb0: 0x2136e  .word       0x0002136E                   # dsub        $v0, $zero, $v0 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297cb0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 2); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, r); }
label_297cb4:
    // 0x297cb4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297cb4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297CB4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297cb8:
    // 0x297cb8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x297cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_297cbc:
    // 0x297cbc: 0x0  nop
    ctx->pc = 0x297cbcu;
    // NOP
label_297cc0:
    // 0x297cc0: 0x2136f  .word       0x0002136F                   # dsubu       $v0, $zero, $v0 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
label_297cc4:
    // 0x297cc4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x297cc4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297cc8:
    // 0x297cc8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297cc8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_297ccc:
    // 0x297ccc: 0x0  nop
    ctx->pc = 0x297cccu;
    // NOP
label_297cd0:
    // 0x297cd0: 0x21373  tltu        $zero, $v0, 77
    ctx->pc = 0x297cd0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_297cd4:
    // 0x297cd4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x297cd4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297cd8:
    // 0x297cd8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297cd8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_297cdc:
    // 0x297cdc: 0x0  nop
    ctx->pc = 0x297cdcu;
    // NOP
label_297ce0:
    // 0x297ce0: 0x21377  .word       0x00021377                   # INVALID     $zero, $v0, 0x1377 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297ce0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x297CE0 raw=0x00021377"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297ce4:
    // 0x297ce4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297ce4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297CE4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297ce8:
    // 0x297ce8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x297ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_297cec:
    // 0x297cec: 0x0  nop
    ctx->pc = 0x297cecu;
    // NOP
label_297cf0:
    // 0x297cf0: 0x21378  dsll        $v0, $v0, 13
    ctx->pc = 0x297cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 13);
label_297cf4:
    // 0x297cf4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297cf4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297CF4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297cf8:
    // 0x297cf8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x297cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_297cfc:
    // 0x297cfc: 0x0  nop
    ctx->pc = 0x297cfcu;
    // NOP
label_297d00:
    // 0x297d00: 0x21379  .word       0x00021379                   # INVALID     $zero, $v0, 0x1379 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297d00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x297D00 raw=0x00021379"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297d04:
    // 0x297d04: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x297d04u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297d08:
    // 0x297d08: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297d08u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_297d0c:
    // 0x297d0c: 0x0  nop
    ctx->pc = 0x297d0cu;
    // NOP
label_297d10:
    // 0x297d10: 0x2137d  .word       0x0002137D                   # INVALID     $zero, $v0, 0x137D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297d10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x297D10 raw=0x0002137D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297d14:
    // 0x297d14: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x297d14u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297d18:
    // 0x297d18: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297d18u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_297d1c:
    // 0x297d1c: 0x0  nop
    ctx->pc = 0x297d1cu;
    // NOP
label_297d20:
    // 0x297d20: 0x21381  .word       0x00021381                   # INVALID     $zero, $v0, 0x1381 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297d20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297D20 raw=0x00021381"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297d24:
    // 0x297d24: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297d24u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297D24 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
    ctx->pc = 0x297d28u;
    return;
}
