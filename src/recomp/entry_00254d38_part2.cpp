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


void entry_00254d38_part2(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x255508u: goto label_255508;
        case 0x25550cu: goto label_25550c;
        case 0x255510u: goto label_255510;
        case 0x255514u: goto label_255514;
        case 0x255518u: goto label_255518;
        case 0x25551cu: goto label_25551c;
        case 0x255520u: goto label_255520;
        case 0x255524u: goto label_255524;
        case 0x255528u: goto label_255528;
        case 0x25552cu: goto label_25552c;
        case 0x255530u: goto label_255530;
        case 0x255534u: goto label_255534;
        case 0x255538u: goto label_255538;
        case 0x25553cu: goto label_25553c;
        case 0x255540u: goto label_255540;
        case 0x255544u: goto label_255544;
        case 0x255548u: goto label_255548;
        case 0x25554cu: goto label_25554c;
        case 0x255550u: goto label_255550;
        case 0x255554u: goto label_255554;
        case 0x255558u: goto label_255558;
        case 0x25555cu: goto label_25555c;
        case 0x255560u: goto label_255560;
        case 0x255564u: goto label_255564;
        case 0x255568u: goto label_255568;
        case 0x25556cu: goto label_25556c;
        case 0x255570u: goto label_255570;
        case 0x255574u: goto label_255574;
        case 0x255578u: goto label_255578;
        case 0x25557cu: goto label_25557c;
        case 0x255580u: goto label_255580;
        case 0x255584u: goto label_255584;
        case 0x255588u: goto label_255588;
        case 0x25558cu: goto label_25558c;
        case 0x255590u: goto label_255590;
        case 0x255594u: goto label_255594;
        case 0x255598u: goto label_255598;
        case 0x25559cu: goto label_25559c;
        case 0x2555a0u: goto label_2555a0;
        case 0x2555a4u: goto label_2555a4;
        case 0x2555a8u: goto label_2555a8;
        case 0x2555acu: goto label_2555ac;
        case 0x2555b0u: goto label_2555b0;
        case 0x2555b4u: goto label_2555b4;
        case 0x2555b8u: goto label_2555b8;
        case 0x2555bcu: goto label_2555bc;
        case 0x2555c0u: goto label_2555c0;
        case 0x2555c4u: goto label_2555c4;
        case 0x2555c8u: goto label_2555c8;
        case 0x2555ccu: goto label_2555cc;
        case 0x2555d0u: goto label_2555d0;
        case 0x2555d4u: goto label_2555d4;
        case 0x2555d8u: goto label_2555d8;
        case 0x2555dcu: goto label_2555dc;
        case 0x2555e0u: goto label_2555e0;
        case 0x2555e4u: goto label_2555e4;
        case 0x2555e8u: goto label_2555e8;
        case 0x2555ecu: goto label_2555ec;
        case 0x2555f0u: goto label_2555f0;
        case 0x2555f4u: goto label_2555f4;
        case 0x2555f8u: goto label_2555f8;
        case 0x2555fcu: goto label_2555fc;
        case 0x255600u: goto label_255600;
        case 0x255604u: goto label_255604;
        case 0x255608u: goto label_255608;
        case 0x25560cu: goto label_25560c;
        case 0x255610u: goto label_255610;
        case 0x255614u: goto label_255614;
        case 0x255618u: goto label_255618;
        case 0x25561cu: goto label_25561c;
        case 0x255620u: goto label_255620;
        case 0x255624u: goto label_255624;
        case 0x255628u: goto label_255628;
        case 0x25562cu: goto label_25562c;
        case 0x255630u: goto label_255630;
        case 0x255634u: goto label_255634;
        case 0x255638u: goto label_255638;
        case 0x25563cu: goto label_25563c;
        case 0x255640u: goto label_255640;
        case 0x255644u: goto label_255644;
        case 0x255648u: goto label_255648;
        case 0x25564cu: goto label_25564c;
        case 0x255650u: goto label_255650;
        case 0x255654u: goto label_255654;
        case 0x255658u: goto label_255658;
        case 0x25565cu: goto label_25565c;
        case 0x255660u: goto label_255660;
        case 0x255664u: goto label_255664;
        case 0x255668u: goto label_255668;
        case 0x25566cu: goto label_25566c;
        case 0x255670u: goto label_255670;
        case 0x255674u: goto label_255674;
        case 0x255678u: goto label_255678;
        case 0x25567cu: goto label_25567c;
        case 0x255680u: goto label_255680;
        case 0x255684u: goto label_255684;
        case 0x255688u: goto label_255688;
        case 0x25568cu: goto label_25568c;
        case 0x255690u: goto label_255690;
        case 0x255694u: goto label_255694;
        case 0x255698u: goto label_255698;
        case 0x25569cu: goto label_25569c;
        case 0x2556a0u: goto label_2556a0;
        case 0x2556a4u: goto label_2556a4;
        case 0x2556a8u: goto label_2556a8;
        case 0x2556acu: goto label_2556ac;
        case 0x2556b0u: goto label_2556b0;
        case 0x2556b4u: goto label_2556b4;
        case 0x2556b8u: goto label_2556b8;
        case 0x2556bcu: goto label_2556bc;
        case 0x2556c0u: goto label_2556c0;
        case 0x2556c4u: goto label_2556c4;
        case 0x2556c8u: goto label_2556c8;
        case 0x2556ccu: goto label_2556cc;
        case 0x2556d0u: goto label_2556d0;
        case 0x2556d4u: goto label_2556d4;
        case 0x2556d8u: goto label_2556d8;
        case 0x2556dcu: goto label_2556dc;
        case 0x2556e0u: goto label_2556e0;
        case 0x2556e4u: goto label_2556e4;
        case 0x2556e8u: goto label_2556e8;
        case 0x2556ecu: goto label_2556ec;
        case 0x2556f0u: goto label_2556f0;
        case 0x2556f4u: goto label_2556f4;
        case 0x2556f8u: goto label_2556f8;
        case 0x2556fcu: goto label_2556fc;
        case 0x255700u: goto label_255700;
        case 0x255704u: goto label_255704;
        case 0x255708u: goto label_255708;
        case 0x25570cu: goto label_25570c;
        case 0x255710u: goto label_255710;
        case 0x255714u: goto label_255714;
        case 0x255718u: goto label_255718;
        case 0x25571cu: goto label_25571c;
        case 0x255720u: goto label_255720;
        case 0x255724u: goto label_255724;
        case 0x255728u: goto label_255728;
        case 0x25572cu: goto label_25572c;
        case 0x255730u: goto label_255730;
        case 0x255734u: goto label_255734;
        case 0x255738u: goto label_255738;
        case 0x25573cu: goto label_25573c;
        case 0x255740u: goto label_255740;
        case 0x255744u: goto label_255744;
        case 0x255748u: goto label_255748;
        case 0x25574cu: goto label_25574c;
        case 0x255750u: goto label_255750;
        case 0x255754u: goto label_255754;
        case 0x255758u: goto label_255758;
        case 0x25575cu: goto label_25575c;
        case 0x255760u: goto label_255760;
        case 0x255764u: goto label_255764;
        case 0x255768u: goto label_255768;
        case 0x25576cu: goto label_25576c;
        case 0x255770u: goto label_255770;
        case 0x255774u: goto label_255774;
        case 0x255778u: goto label_255778;
        case 0x25577cu: goto label_25577c;
        case 0x255780u: goto label_255780;
        case 0x255784u: goto label_255784;
        case 0x255788u: goto label_255788;
        case 0x25578cu: goto label_25578c;
        case 0x255790u: goto label_255790;
        case 0x255794u: goto label_255794;
        case 0x255798u: goto label_255798;
        case 0x25579cu: goto label_25579c;
        case 0x2557a0u: goto label_2557a0;
        case 0x2557a4u: goto label_2557a4;
        case 0x2557a8u: goto label_2557a8;
        case 0x2557acu: goto label_2557ac;
        case 0x2557b0u: goto label_2557b0;
        case 0x2557b4u: goto label_2557b4;
        case 0x2557b8u: goto label_2557b8;
        case 0x2557bcu: goto label_2557bc;
        case 0x2557c0u: goto label_2557c0;
        case 0x2557c4u: goto label_2557c4;
        case 0x2557c8u: goto label_2557c8;
        case 0x2557ccu: goto label_2557cc;
        case 0x2557d0u: goto label_2557d0;
        case 0x2557d4u: goto label_2557d4;
        case 0x2557d8u: goto label_2557d8;
        case 0x2557dcu: goto label_2557dc;
        case 0x2557e0u: goto label_2557e0;
        case 0x2557e4u: goto label_2557e4;
        case 0x2557e8u: goto label_2557e8;
        case 0x2557ecu: goto label_2557ec;
        case 0x2557f0u: goto label_2557f0;
        case 0x2557f4u: goto label_2557f4;
        case 0x2557f8u: goto label_2557f8;
        case 0x2557fcu: goto label_2557fc;
        case 0x255800u: goto label_255800;
        case 0x255804u: goto label_255804;
        case 0x255808u: goto label_255808;
        case 0x25580cu: goto label_25580c;
        case 0x255810u: goto label_255810;
        case 0x255814u: goto label_255814;
        case 0x255818u: goto label_255818;
        case 0x25581cu: goto label_25581c;
        case 0x255820u: goto label_255820;
        case 0x255824u: goto label_255824;
        case 0x255828u: goto label_255828;
        case 0x25582cu: goto label_25582c;
        case 0x255830u: goto label_255830;
        case 0x255834u: goto label_255834;
        case 0x255838u: goto label_255838;
        case 0x25583cu: goto label_25583c;
        case 0x255840u: goto label_255840;
        case 0x255844u: goto label_255844;
        case 0x255848u: goto label_255848;
        case 0x25584cu: goto label_25584c;
        case 0x255850u: goto label_255850;
        case 0x255854u: goto label_255854;
        case 0x255858u: goto label_255858;
        case 0x25585cu: goto label_25585c;
        case 0x255860u: goto label_255860;
        case 0x255864u: goto label_255864;
        case 0x255868u: goto label_255868;
        case 0x25586cu: goto label_25586c;
        case 0x255870u: goto label_255870;
        case 0x255874u: goto label_255874;
        case 0x255878u: goto label_255878;
        case 0x25587cu: goto label_25587c;
        case 0x255880u: goto label_255880;
        case 0x255884u: goto label_255884;
        case 0x255888u: goto label_255888;
        case 0x25588cu: goto label_25588c;
        case 0x255890u: goto label_255890;
        case 0x255894u: goto label_255894;
        case 0x255898u: goto label_255898;
        case 0x25589cu: goto label_25589c;
        case 0x2558a0u: goto label_2558a0;
        case 0x2558a4u: goto label_2558a4;
        case 0x2558a8u: goto label_2558a8;
        case 0x2558acu: goto label_2558ac;
        case 0x2558b0u: goto label_2558b0;
        case 0x2558b4u: goto label_2558b4;
        case 0x2558b8u: goto label_2558b8;
        case 0x2558bcu: goto label_2558bc;
        case 0x2558c0u: goto label_2558c0;
        case 0x2558c4u: goto label_2558c4;
        case 0x2558c8u: goto label_2558c8;
        case 0x2558ccu: goto label_2558cc;
        case 0x2558d0u: goto label_2558d0;
        case 0x2558d4u: goto label_2558d4;
        case 0x2558d8u: goto label_2558d8;
        case 0x2558dcu: goto label_2558dc;
        case 0x2558e0u: goto label_2558e0;
        case 0x2558e4u: goto label_2558e4;
        case 0x2558e8u: goto label_2558e8;
        case 0x2558ecu: goto label_2558ec;
        case 0x2558f0u: goto label_2558f0;
        case 0x2558f4u: goto label_2558f4;
        case 0x2558f8u: goto label_2558f8;
        case 0x2558fcu: goto label_2558fc;
        case 0x255900u: goto label_255900;
        case 0x255904u: goto label_255904;
        case 0x255908u: goto label_255908;
        case 0x25590cu: goto label_25590c;
        case 0x255910u: goto label_255910;
        case 0x255914u: goto label_255914;
        case 0x255918u: goto label_255918;
        case 0x25591cu: goto label_25591c;
        case 0x255920u: goto label_255920;
        case 0x255924u: goto label_255924;
        case 0x255928u: goto label_255928;
        case 0x25592cu: goto label_25592c;
        case 0x255930u: goto label_255930;
        case 0x255934u: goto label_255934;
        case 0x255938u: goto label_255938;
        case 0x25593cu: goto label_25593c;
        case 0x255940u: goto label_255940;
        case 0x255944u: goto label_255944;
        case 0x255948u: goto label_255948;
        case 0x25594cu: goto label_25594c;
        case 0x255950u: goto label_255950;
        case 0x255954u: goto label_255954;
        case 0x255958u: goto label_255958;
        case 0x25595cu: goto label_25595c;
        case 0x255960u: goto label_255960;
        case 0x255964u: goto label_255964;
        case 0x255968u: goto label_255968;
        case 0x25596cu: goto label_25596c;
        case 0x255970u: goto label_255970;
        case 0x255974u: goto label_255974;
        case 0x255978u: goto label_255978;
        case 0x25597cu: goto label_25597c;
        case 0x255980u: goto label_255980;
        case 0x255984u: goto label_255984;
        case 0x255988u: goto label_255988;
        case 0x25598cu: goto label_25598c;
        case 0x255990u: goto label_255990;
        case 0x255994u: goto label_255994;
        case 0x255998u: goto label_255998;
        case 0x25599cu: goto label_25599c;
        case 0x2559a0u: goto label_2559a0;
        case 0x2559a4u: goto label_2559a4;
        case 0x2559a8u: goto label_2559a8;
        case 0x2559acu: goto label_2559ac;
        case 0x2559b0u: goto label_2559b0;
        case 0x2559b4u: goto label_2559b4;
        case 0x2559b8u: goto label_2559b8;
        case 0x2559bcu: goto label_2559bc;
        case 0x2559c0u: goto label_2559c0;
        case 0x2559c4u: goto label_2559c4;
        case 0x2559c8u: goto label_2559c8;
        case 0x2559ccu: goto label_2559cc;
        case 0x2559d0u: goto label_2559d0;
        case 0x2559d4u: goto label_2559d4;
        case 0x2559d8u: goto label_2559d8;
        case 0x2559dcu: goto label_2559dc;
        case 0x2559e0u: goto label_2559e0;
        case 0x2559e4u: goto label_2559e4;
        case 0x2559e8u: goto label_2559e8;
        case 0x2559ecu: goto label_2559ec;
        case 0x2559f0u: goto label_2559f0;
        case 0x2559f4u: goto label_2559f4;
        case 0x2559f8u: goto label_2559f8;
        case 0x2559fcu: goto label_2559fc;
        case 0x255a00u: goto label_255a00;
        case 0x255a04u: goto label_255a04;
        case 0x255a08u: goto label_255a08;
        case 0x255a0cu: goto label_255a0c;
        case 0x255a10u: goto label_255a10;
        case 0x255a14u: goto label_255a14;
        case 0x255a18u: goto label_255a18;
        case 0x255a1cu: goto label_255a1c;
        case 0x255a20u: goto label_255a20;
        case 0x255a24u: goto label_255a24;
        case 0x255a28u: goto label_255a28;
        case 0x255a2cu: goto label_255a2c;
        case 0x255a30u: goto label_255a30;
        case 0x255a34u: goto label_255a34;
        case 0x255a38u: goto label_255a38;
        case 0x255a3cu: goto label_255a3c;
        case 0x255a40u: goto label_255a40;
        case 0x255a44u: goto label_255a44;
        case 0x255a48u: goto label_255a48;
        case 0x255a4cu: goto label_255a4c;
        case 0x255a50u: goto label_255a50;
        case 0x255a54u: goto label_255a54;
        case 0x255a58u: goto label_255a58;
        case 0x255a5cu: goto label_255a5c;
        case 0x255a60u: goto label_255a60;
        case 0x255a64u: goto label_255a64;
        case 0x255a68u: goto label_255a68;
        case 0x255a6cu: goto label_255a6c;
        case 0x255a70u: goto label_255a70;
        case 0x255a74u: goto label_255a74;
        case 0x255a78u: goto label_255a78;
        case 0x255a7cu: goto label_255a7c;
        case 0x255a80u: goto label_255a80;
        case 0x255a84u: goto label_255a84;
        case 0x255a88u: goto label_255a88;
        case 0x255a8cu: goto label_255a8c;
        case 0x255a90u: goto label_255a90;
        case 0x255a94u: goto label_255a94;
        case 0x255a98u: goto label_255a98;
        case 0x255a9cu: goto label_255a9c;
        case 0x255aa0u: goto label_255aa0;
        case 0x255aa4u: goto label_255aa4;
        case 0x255aa8u: goto label_255aa8;
        case 0x255aacu: goto label_255aac;
        case 0x255ab0u: goto label_255ab0;
        case 0x255ab4u: goto label_255ab4;
        case 0x255ab8u: goto label_255ab8;
        case 0x255abcu: goto label_255abc;
        case 0x255ac0u: goto label_255ac0;
        case 0x255ac4u: goto label_255ac4;
        case 0x255ac8u: goto label_255ac8;
        case 0x255accu: goto label_255acc;
        case 0x255ad0u: goto label_255ad0;
        case 0x255ad4u: goto label_255ad4;
        case 0x255ad8u: goto label_255ad8;
        case 0x255adcu: goto label_255adc;
        case 0x255ae0u: goto label_255ae0;
        case 0x255ae4u: goto label_255ae4;
        case 0x255ae8u: goto label_255ae8;
        case 0x255aecu: goto label_255aec;
        case 0x255af0u: goto label_255af0;
        case 0x255af4u: goto label_255af4;
        case 0x255af8u: goto label_255af8;
        case 0x255afcu: goto label_255afc;
        case 0x255b00u: goto label_255b00;
        case 0x255b04u: goto label_255b04;
        case 0x255b08u: goto label_255b08;
        case 0x255b0cu: goto label_255b0c;
        case 0x255b10u: goto label_255b10;
        case 0x255b14u: goto label_255b14;
        case 0x255b18u: goto label_255b18;
        case 0x255b1cu: goto label_255b1c;
        case 0x255b20u: goto label_255b20;
        case 0x255b24u: goto label_255b24;
        case 0x255b28u: goto label_255b28;
        case 0x255b2cu: goto label_255b2c;
        case 0x255b30u: goto label_255b30;
        case 0x255b34u: goto label_255b34;
        case 0x255b38u: goto label_255b38;
        case 0x255b3cu: goto label_255b3c;
        case 0x255b40u: goto label_255b40;
        case 0x255b44u: goto label_255b44;
        case 0x255b48u: goto label_255b48;
        case 0x255b4cu: goto label_255b4c;
        case 0x255b50u: goto label_255b50;
        case 0x255b54u: goto label_255b54;
        case 0x255b58u: goto label_255b58;
        case 0x255b5cu: goto label_255b5c;
        case 0x255b60u: goto label_255b60;
        case 0x255b64u: goto label_255b64;
        case 0x255b68u: goto label_255b68;
        case 0x255b6cu: goto label_255b6c;
        case 0x255b70u: goto label_255b70;
        case 0x255b74u: goto label_255b74;
        case 0x255b78u: goto label_255b78;
        case 0x255b7cu: goto label_255b7c;
        case 0x255b80u: goto label_255b80;
        case 0x255b84u: goto label_255b84;
        case 0x255b88u: goto label_255b88;
        case 0x255b8cu: goto label_255b8c;
        case 0x255b90u: goto label_255b90;
        case 0x255b94u: goto label_255b94;
        case 0x255b98u: goto label_255b98;
        case 0x255b9cu: goto label_255b9c;
        case 0x255ba0u: goto label_255ba0;
        case 0x255ba4u: goto label_255ba4;
        case 0x255ba8u: goto label_255ba8;
        case 0x255bacu: goto label_255bac;
        case 0x255bb0u: goto label_255bb0;
        case 0x255bb4u: goto label_255bb4;
        case 0x255bb8u: goto label_255bb8;
        case 0x255bbcu: goto label_255bbc;
        case 0x255bc0u: goto label_255bc0;
        case 0x255bc4u: goto label_255bc4;
        case 0x255bc8u: goto label_255bc8;
        case 0x255bccu: goto label_255bcc;
        case 0x255bd0u: goto label_255bd0;
        case 0x255bd4u: goto label_255bd4;
        case 0x255bd8u: goto label_255bd8;
        case 0x255bdcu: goto label_255bdc;
        case 0x255be0u: goto label_255be0;
        case 0x255be4u: goto label_255be4;
        case 0x255be8u: goto label_255be8;
        case 0x255becu: goto label_255bec;
        case 0x255bf0u: goto label_255bf0;
        case 0x255bf4u: goto label_255bf4;
        case 0x255bf8u: goto label_255bf8;
        case 0x255bfcu: goto label_255bfc;
        case 0x255c00u: goto label_255c00;
        case 0x255c04u: goto label_255c04;
        case 0x255c08u: goto label_255c08;
        case 0x255c0cu: goto label_255c0c;
        case 0x255c10u: goto label_255c10;
        case 0x255c14u: goto label_255c14;
        case 0x255c18u: goto label_255c18;
        case 0x255c1cu: goto label_255c1c;
        case 0x255c20u: goto label_255c20;
        case 0x255c24u: goto label_255c24;
        case 0x255c28u: goto label_255c28;
        case 0x255c2cu: goto label_255c2c;
        case 0x255c30u: goto label_255c30;
        case 0x255c34u: goto label_255c34;
        case 0x255c38u: goto label_255c38;
        case 0x255c3cu: goto label_255c3c;
        case 0x255c40u: goto label_255c40;
        case 0x255c44u: goto label_255c44;
        case 0x255c48u: goto label_255c48;
        case 0x255c4cu: goto label_255c4c;
        case 0x255c50u: goto label_255c50;
        case 0x255c54u: goto label_255c54;
        case 0x255c58u: goto label_255c58;
        case 0x255c5cu: goto label_255c5c;
        case 0x255c60u: goto label_255c60;
        case 0x255c64u: goto label_255c64;
        case 0x255c68u: goto label_255c68;
        case 0x255c6cu: goto label_255c6c;
        case 0x255c70u: goto label_255c70;
        case 0x255c74u: goto label_255c74;
        case 0x255c78u: goto label_255c78;
        case 0x255c7cu: goto label_255c7c;
        case 0x255c80u: goto label_255c80;
        case 0x255c84u: goto label_255c84;
        case 0x255c88u: goto label_255c88;
        case 0x255c8cu: goto label_255c8c;
        case 0x255c90u: goto label_255c90;
        case 0x255c94u: goto label_255c94;
        case 0x255c98u: goto label_255c98;
        case 0x255c9cu: goto label_255c9c;
        case 0x255ca0u: goto label_255ca0;
        case 0x255ca4u: goto label_255ca4;
        case 0x255ca8u: goto label_255ca8;
        case 0x255cacu: goto label_255cac;
        case 0x255cb0u: goto label_255cb0;
        case 0x255cb4u: goto label_255cb4;
        case 0x255cb8u: goto label_255cb8;
        case 0x255cbcu: goto label_255cbc;
        case 0x255cc0u: goto label_255cc0;
        case 0x255cc4u: goto label_255cc4;
        case 0x255cc8u: goto label_255cc8;
        case 0x255cccu: goto label_255ccc;
        case 0x255cd0u: goto label_255cd0;
        case 0x255cd4u: goto label_255cd4;
        default: return;
    }

label_255508:
    // 0x255508: 0x2040605  .word       0x02040605                   # INVALID     $s0, $a0, 0x605 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255508u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x255508 raw=0x02040605"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25550c:
    // 0x25550c: 0x4020401  bltzl       $zero, . + 4 + (0x401 << 2)
label_255510:
    if (ctx->pc == 0x255510u) {
        ctx->pc = 0x255510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25550Cu;
        // 0x255510: 0x4030305  bgezl       $zero, . + 4 + (0x305 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x256128 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x255514u;
        goto label_255514;
    }
    ctx->pc = 0x25550Cu;
    {
        const bool branch_taken_0x25550c = (GPR_S32(ctx, 0) < 0);
        if (branch_taken_0x25550c) {
            ctx->pc = 0x255510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25550Cu;
            // 0x255510: 0x4030305  bgezl       $zero, . + 4 + (0x305 << 2) (Delay Slot)
            // REGIMM branch instruction to 0x256128 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x256514u;
            { ctx->pc = 0x256514; return; }
        }
    }
    ctx->pc = 0x255514u;
label_255514:
    // 0x255514: 0x60305  .word       0x00060305                   # INVALID     $zero, $a2, 0x305 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255514u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x255514 raw=0x00060305"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255518:
    // 0x255518: 0x5040405  .word       0x05040405                   # INVALID     $t0, $a0, 0x405 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x255518u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x255518 raw=0x05040405");
 /* MITIGATED */
label_25551c:
    // 0x25551c: 0x1060506  .word       0x01060506                   # srlv        $zero, $a2, $t0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25551cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 8) & 0x1F));
label_255520:
    // 0x255520: 0x102  srl         $zero, $zero, 4
    ctx->pc = 0x255520u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 4));
label_255524:
    // 0x255524: 0x0  nop
    ctx->pc = 0x255524u;
    // NOP
label_255528:
    // 0x255528: 0x0  nop
    ctx->pc = 0x255528u;
    // NOP
label_25552c:
    // 0x25552c: 0x0  nop
    ctx->pc = 0x25552cu;
    // NOP
label_255530:
    // 0x255530: 0x11000000  beqz        $t0, . + 4 + (0x0 << 2)
label_255534:
    if (ctx->pc == 0x255534u) {
        ctx->pc = 0x255538u;
        goto label_255538;
    }
    ctx->pc = 0x255530u;
    {
        const bool branch_taken_0x255530 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x255530) {
            ctx->pc = 0x255534u;
            goto label_255534;
        }
    }
    ctx->pc = 0x255538u;
label_255538:
    // 0x255538: 0x0  nop
    ctx->pc = 0x255538u;
    // NOP
label_25553c:
    // 0x25553c: 0x50000003  beql        $zero, $zero, . + 4 + (0x3 << 2)
label_255540:
    if (ctx->pc == 0x255540u) {
        ctx->pc = 0x255540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25553Cu;
        // 0x255540: 0x8002  srl         $s0, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255544u;
        goto label_255544;
    }
    ctx->pc = 0x25553Cu;
    {
        const bool branch_taken_0x25553c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25553c) {
            ctx->pc = 0x255540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25553Cu;
            // 0x255540: 0x8002  srl         $s0, $zero, 0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25554Cu;
            goto label_25554c;
        }
    }
    ctx->pc = 0x255544u;
label_255544:
    // 0x255544: 0x10000000  b           . + 4 + (0x0 << 2)
label_255548:
    if (ctx->pc == 0x255548u) {
        ctx->pc = 0x255548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255544u;
        // 0x255548: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x255548 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x25554Cu;
        goto label_25554c;
    }
    ctx->pc = 0x255544u;
    {
        const bool branch_taken_0x255544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255544u;
        // 0x255548: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x255548 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x255544) {
            ctx->pc = 0x255548u;
            goto label_255548;
        }
    }
    ctx->pc = 0x25554Cu;
label_25554c:
    // 0x25554c: 0x0  nop
    ctx->pc = 0x25554cu;
    // NOP
label_255550:
    // 0x255550: 0x8080  sll         $s0, $zero, 2
    ctx->pc = 0x255550u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_255554:
    // 0x255554: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x255554u;
    
label_255558:
    // 0x255558: 0x3b  dsra        $zero, $zero, 0
    ctx->pc = 0x255558u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 0);
label_25555c:
    // 0x25555c: 0x0  nop
    ctx->pc = 0x25555cu;
    // NOP
label_255560:
    // 0x255560: 0x61  .word       0x00000061                   # addu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255560u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_255564:
    // 0x255564: 0x0  nop
    ctx->pc = 0x255564u;
    // NOP
label_255568:
    // 0x255568: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255568u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x255568 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25556c:
    // 0x25556c: 0x0  nop
    ctx->pc = 0x25556cu;
    // NOP
label_255570:
    // 0x255570: 0x0  nop
    ctx->pc = 0x255570u;
    // NOP
label_255574:
    // 0x255574: 0x0  nop
    ctx->pc = 0x255574u;
    // NOP
label_255578:
    // 0x255578: 0x0  nop
    ctx->pc = 0x255578u;
    // NOP
label_25557c:
    // 0x25557c: 0x6c010001  ldr         $at, 0x1($zero)
    ctx->pc = 0x25557cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_255580:
    // 0x255580: 0x0  nop
    ctx->pc = 0x255580u;
    // NOP
label_255584:
    // 0x255584: 0x0  nop
    ctx->pc = 0x255584u;
    // NOP
label_255588:
    // 0x255588: 0x0  nop
    ctx->pc = 0x255588u;
    // NOP
label_25558c:
    // 0x25558c: 0x0  nop
    ctx->pc = 0x25558cu;
    // NOP
label_255590:
    // 0x255590: 0x0  nop
    ctx->pc = 0x255590u;
    // NOP
label_255594:
    // 0x255594: 0x0  nop
    ctx->pc = 0x255594u;
    // NOP
label_255598:
    // 0x255598: 0x0  nop
    ctx->pc = 0x255598u;
    // NOP
label_25559c:
    // 0x25559c: 0x6c010001  ldr         $at, 0x1($zero)
    ctx->pc = 0x25559cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2555a0:
    // 0x2555a0: 0x0  nop
    ctx->pc = 0x2555a0u;
    // NOP
label_2555a4:
    // 0x2555a4: 0x0  nop
    ctx->pc = 0x2555a4u;
    // NOP
label_2555a8:
    // 0x2555a8: 0x0  nop
    ctx->pc = 0x2555a8u;
    // NOP
label_2555ac:
    // 0x2555ac: 0x0  nop
    ctx->pc = 0x2555acu;
    // NOP
label_2555b0:
    // 0x2555b0: 0x43400000  .word       0x43400000                   # INVALID     $k0, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2555b0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x2555B0 raw=0x43400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2555b4:
    // 0x2555b4: 0x42c00000  .word       0x42C00000                   # INVALID     $s6, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2555b4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x2555B4 raw=0x42C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2555b8:
    // 0x2555b8: 0x42c00000  .word       0x42C00000                   # INVALID     $s6, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2555b8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x2555B8 raw=0x42C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2555bc:
    // 0x2555bc: 0x0  nop
    ctx->pc = 0x2555bcu;
    // NOP
label_2555c0:
    // 0x2555c0: 0x42c00000  .word       0x42C00000                   # INVALID     $s6, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2555c0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x2555C0 raw=0x42C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2555c4:
    // 0x2555c4: 0x43400000  .word       0x43400000                   # INVALID     $k0, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2555c4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x2555C4 raw=0x43400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2555c8:
    // 0x2555c8: 0x42c00000  .word       0x42C00000                   # INVALID     $s6, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2555c8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x2555C8 raw=0x42C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2555cc:
    // 0x2555cc: 0x0  nop
    ctx->pc = 0x2555ccu;
    // NOP
label_2555d0:
    // 0x2555d0: 0x43400000  .word       0x43400000                   # INVALID     $k0, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2555d0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x2555D0 raw=0x43400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2555d4:
    // 0x2555d4: 0x43400000  .word       0x43400000                   # INVALID     $k0, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2555d4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x2555D4 raw=0x43400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2555d8:
    // 0x2555d8: 0x42c00000  .word       0x42C00000                   # INVALID     $s6, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2555d8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x2555D8 raw=0x42C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2555dc:
    // 0x2555dc: 0x0  nop
    ctx->pc = 0x2555dcu;
    // NOP
label_2555e0:
    // 0x2555e0: 0x42cccccd  .word       0x42CCCCCD                   # INVALID     $s6, $t4, -0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2555e0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x2555E0 raw=0x42CCCCCD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2555e4:
    // 0x2555e4: 0x42cccccd  .word       0x42CCCCCD                   # INVALID     $s6, $t4, -0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2555e4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x2555E4 raw=0x42CCCCCD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2555e8:
    // 0x2555e8: 0x42cccccd  .word       0x42CCCCCD                   # INVALID     $s6, $t4, -0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2555e8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x2555E8 raw=0x42CCCCCD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2555ec:
    // 0x2555ec: 0x0  nop
    ctx->pc = 0x2555ecu;
    // NOP
label_2555f0:
    // 0x2555f0: 0xc  syscall     0
    ctx->pc = 0x2555f0u;
    ctx->pc = 0x2555F4u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2555f4:
    // 0x2555f4: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2555f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2555F4 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2555f8:
    // 0x2555f8: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x2555f8u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2555fc:
    // 0x2555fc: 0x0  nop
    ctx->pc = 0x2555fcu;
    // NOP
label_255600:
    // 0x255600: 0x11000000  beqz        $t0, . + 4 + (0x0 << 2)
label_255604:
    if (ctx->pc == 0x255604u) {
        ctx->pc = 0x255608u;
        goto label_255608;
    }
    ctx->pc = 0x255600u;
    {
        const bool branch_taken_0x255600 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x255600) {
            ctx->pc = 0x255604u;
            goto label_255604;
        }
    }
    ctx->pc = 0x255608u;
label_255608:
    // 0x255608: 0x0  nop
    ctx->pc = 0x255608u;
    // NOP
label_25560c:
    // 0x25560c: 0x50000003  beql        $zero, $zero, . + 4 + (0x3 << 2)
label_255610:
    if (ctx->pc == 0x255610u) {
        ctx->pc = 0x255610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25560Cu;
        // 0x255610: 0x8002  srl         $s0, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255614u;
        goto label_255614;
    }
    ctx->pc = 0x25560Cu;
    {
        const bool branch_taken_0x25560c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25560c) {
            ctx->pc = 0x255610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25560Cu;
            // 0x255610: 0x8002  srl         $s0, $zero, 0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25561Cu;
            goto label_25561c;
        }
    }
    ctx->pc = 0x255614u;
label_255614:
    // 0x255614: 0x10000000  b           . + 4 + (0x0 << 2)
label_255618:
    if (ctx->pc == 0x255618u) {
        ctx->pc = 0x255618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255614u;
        // 0x255618: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x255618 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x25561Cu;
        goto label_25561c;
    }
    ctx->pc = 0x255614u;
    {
        const bool branch_taken_0x255614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255614u;
        // 0x255618: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x255618 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x255614) {
            ctx->pc = 0x255618u;
            goto label_255618;
        }
    }
    ctx->pc = 0x25561Cu;
label_25561c:
    // 0x25561c: 0x0  nop
    ctx->pc = 0x25561cu;
    // NOP
label_255620:
    // 0x255620: 0x44  .word       0x00000044                   # sllv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255620u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_255624:
    // 0x255624: 0x0  nop
    ctx->pc = 0x255624u;
    // NOP
label_255628:
    // 0x255628: 0x43  sra         $zero, $zero, 1
    ctx->pc = 0x255628u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 1));
label_25562c:
    // 0x25562c: 0x0  nop
    ctx->pc = 0x25562cu;
    // NOP
label_255630:
    // 0x255630: 0x51ff9  .word       0x00051FF9                   # INVALID     $zero, $a1, 0x1FF9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255630u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x255630 raw=0x00051FF9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255634:
    // 0x255634: 0x0  nop
    ctx->pc = 0x255634u;
    // NOP
label_255638:
    // 0x255638: 0x48  .word       0x00000048                   # jr          $zero # 00000040 <InstrIdType: CPU_SPECIAL>
label_25563c:
    if (ctx->pc == 0x25563Cu) {
        ctx->pc = 0x255640u;
        goto label_255640;
    }
    ctx->pc = 0x255638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255638u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x255640u;
label_255640:
    // 0x255640: 0xa0a0a0a0  sb          $zero, -0x5F60($a1)
    ctx->pc = 0x255640u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294942880), (uint8_t)GPR_U32(ctx, 0));
label_255644:
    // 0x255644: 0x6464825a  daddiu      $a0, $v1, -0x7DA6
    ctx->pc = 0x255644u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)4294935130);
label_255648:
    // 0x255648: 0xa0a05064  sb          $zero, 0x5064($a1)
    ctx->pc = 0x255648u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 20580), (uint8_t)GPR_U32(ctx, 0));
label_25564c:
    // 0x25564c: 0xa0a0a03c  sb          $zero, -0x5FC4($a1)
    ctx->pc = 0x25564cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294942780), (uint8_t)GPR_U32(ctx, 0));
label_255650:
    // 0x255650: 0x5082a0a0  beql        $a0, $v0, . + 4 + (-0x5F60 << 2)
label_255654:
    if (ctx->pc == 0x255654u) {
        ctx->pc = 0x255654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255650u;
        // 0x255654: 0xa0a05a5a  sb          $zero, 0x5A5A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 23130), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255658u;
        goto label_255658;
    }
    ctx->pc = 0x255650u;
    {
        const bool branch_taken_0x255650 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x255650) {
            ctx->pc = 0x255654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255650u;
            // 0x255654: 0xa0a05a5a  sb          $zero, 0x5A5A($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 23130), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D8D4u;
            return;
        }
    }
    ctx->pc = 0x255658u;
label_255658:
    // 0x255658: 0xa03c6464  sb          $gp, 0x6464($at)
    ctx->pc = 0x255658u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 25700), (uint8_t)GPR_U32(ctx, 28));
label_25565c:
    // 0x25565c: 0xa0a0a0a0  sb          $zero, -0x5F60($a1)
    ctx->pc = 0x25565cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294942880), (uint8_t)GPR_U32(ctx, 0));
label_255660:
    // 0x255660: 0x825a785a  lb          $k0, 0x785A($s2)
    ctx->pc = 0x255660u;
    SET_GPR_S32(ctx, 26, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 30810)));
label_255664:
    // 0x255664: 0xa0a0a0a0  sb          $zero, -0x5F60($a1)
    ctx->pc = 0x255664u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294942880), (uint8_t)GPR_U32(ctx, 0));
label_255668:
    // 0x255668: 0x50505050  beql        $v0, $s0, . + 4 + (0x5050 << 2)
label_25566c:
    if (ctx->pc == 0x25566Cu) {
        ctx->pc = 0x25566Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255668u;
        // 0x25566c: 0x5064  .word       0x00005064                   # and         $t2, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255670u;
        goto label_255670;
    }
    ctx->pc = 0x255668u;
    {
        const bool branch_taken_0x255668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x255668) {
            ctx->pc = 0x25566Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255668u;
            // 0x25566c: 0x5064  .word       0x00005064                   # and         $t2, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2697ACu;
            { ctx->pc = 0x2697ac; return; }
        }
    }
    ctx->pc = 0x255670u;
label_255670:
    // 0x255670: 0x40333333  .word       0x40333333                   # dmfc0       $s3, Wired # 00000333 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255670u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x255670 raw=0x40333333"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255674:
    // 0x255674: 0x3fb33333  .word       0x3FB33333                   # lui         $s3, 0x3333 # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255674u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13107 << 16));
label_255678:
    // 0x255678: 0x40333333  .word       0x40333333                   # dmfc0       $s3, Wired # 00000333 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255678u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x255678 raw=0x40333333"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25567c:
    // 0x25567c: 0x3fb33333  .word       0x3FB33333                   # lui         $s3, 0x3333 # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x25567cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13107 << 16));
label_255680:
    // 0x255680: 0x3ad1b718  xori        $s1, $s6, 0xB718
    ctx->pc = 0x255680u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 22) ^ (uint64_t)(uint16_t)46872);
label_255684:
    // 0x255684: 0x3a51b718  xori        $s1, $s2, 0xB718
    ctx->pc = 0x255684u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)46872);
label_255688:
    // 0x255688: 0x3c51b718  .word       0x3C51B718                   # lui         $s1, 0xB718 # 00400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255688u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)46872 << 16));
label_25568c:
    // 0x25568c: 0x3bd1b718  xori        $s1, $fp, 0xB718
    ctx->pc = 0x25568cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 30) ^ (uint64_t)(uint16_t)46872);
label_255690:
    // 0x255690: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255690u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x255690 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255694:
    // 0x255694: 0x43000000  .word       0x43000000                   # INVALID     $t8, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255694u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x255694 raw=0x43000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255698:
    // 0x255698: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255698u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x255698 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25569c:
    // 0x25569c: 0x450b4000  .word       0x450B4000                   # INVALID     $t0, $t3, 0x4000 # 00000000 <InstrIdType: CPU_COP1_BC1>
    ctx->pc = 0x25569cu;
    // FPU branch instruction - handled elsewhere
label_2556a0:
    // 0x2556a0: 0x44f4b000  .word       0x44F4B000                   # INVALID     $a3, $s4, -0x5000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2556a0u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x7, function 0x0 at 0x2556A0 raw=0x44F4B000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2556a4:
    // 0x2556a4: 0x450f4000  .word       0x450F4000                   # INVALID     $t0, $t7, 0x4000 # 00000000 <InstrIdType: CPU_COP1_BC1>
    ctx->pc = 0x2556a4u;
    // FPU branch instruction - handled elsewhere
label_2556a8:
    // 0x2556a8: 0x44f8b000  .word       0x44F8B000                   # INVALID     $a3, $t8, -0x5000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2556a8u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x7, function 0x0 at 0x2556A8 raw=0x44F8B000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2556ac:
    // 0x2556ac: 0x40333333  .word       0x40333333                   # dmfc0       $s3, Wired # 00000333 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2556acu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x2556AC raw=0x40333333"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2556b0:
    // 0x2556b0: 0x3fb33333  .word       0x3FB33333                   # lui         $s3, 0x3333 # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2556b0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13107 << 16));
label_2556b4:
    // 0x2556b4: 0x40333333  .word       0x40333333                   # dmfc0       $s3, Wired # 00000333 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2556b4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x2556B4 raw=0x40333333"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2556b8:
    // 0x2556b8: 0x3fb33333  .word       0x3FB33333                   # lui         $s3, 0x3333 # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2556b8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13107 << 16));
label_2556bc:
    // 0x2556bc: 0x3ad1b718  xori        $s1, $s6, 0xB718
    ctx->pc = 0x2556bcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 22) ^ (uint64_t)(uint16_t)46872);
label_2556c0:
    // 0x2556c0: 0x3a51b718  xori        $s1, $s2, 0xB718
    ctx->pc = 0x2556c0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)46872);
label_2556c4:
    // 0x2556c4: 0x3c51b718  .word       0x3C51B718                   # lui         $s1, 0xB718 # 00400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2556c4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)46872 << 16));
label_2556c8:
    // 0x2556c8: 0x3bd1b718  xori        $s1, $fp, 0xB718
    ctx->pc = 0x2556c8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 30) ^ (uint64_t)(uint16_t)46872);
label_2556cc:
    // 0x2556cc: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2556ccu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x2556CC raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2556d0:
    // 0x2556d0: 0x43000000  .word       0x43000000                   # INVALID     $t8, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2556d0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x2556D0 raw=0x43000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2556d4:
    // 0x2556d4: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2556d4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x2556D4 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2556d8:
    // 0x2556d8: 0x450b4000  .word       0x450B4000                   # INVALID     $t0, $t3, 0x4000 # 00000000 <InstrIdType: CPU_COP1_BC1>
    ctx->pc = 0x2556d8u;
    // FPU branch instruction - handled elsewhere
label_2556dc:
    // 0x2556dc: 0x45015800  bc1t        . + 4 + (0x5800 << 2)
label_2556e0:
    if (ctx->pc == 0x2556E0u) {
        ctx->pc = 0x2556E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2556DCu;
        // 0x2556e0: 0x450f4000  .word       0x450F4000                   # INVALID     $t0, $t7, 0x4000 # 00000000 <InstrIdType: CPU_COP1_BC1> (Delay Slot)
        // FPU branch instruction - handled elsewhere
        ctx->in_delay_slot = false;
        ctx->pc = 0x2556E4u;
        goto label_2556e4;
    }
    ctx->pc = 0x2556DCu;
    {
        const bool branch_taken_0x2556dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2556E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2556DCu;
        // 0x2556e0: 0x450f4000  .word       0x450F4000                   # INVALID     $t0, $t7, 0x4000 # 00000000 <InstrIdType: CPU_COP1_BC1> (Delay Slot)
        // FPU branch instruction - handled elsewhere
        ctx->in_delay_slot = false;
        if (branch_taken_0x2556dc) {
            ctx->pc = 0x26B6E0u;
            { ctx->pc = 0x26b6e0; return; }
        }
    }
    ctx->pc = 0x2556E4u;
label_2556e4:
    // 0x2556e4: 0x45035800  bc1tl       . + 4 + (0x5800 << 2)
label_2556e8:
    if (ctx->pc == 0x2556E8u) {
        ctx->pc = 0x2556E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2556E4u;
        // 0x2556e8: 0x40600000  .word       0x40600000                   # INVALID     $v1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0x3 at 0x2556E8 raw=0x40600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2556ECu;
        goto label_2556ec;
    }
    ctx->pc = 0x2556E4u;
    {
        const bool branch_taken_0x2556e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2556e4) {
            ctx->pc = 0x2556E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2556E4u;
            // 0x2556e8: 0x40600000  .word       0x40600000                   # INVALID     $v1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //             throw std::runtime_error("Unhandled COP0 instruction format: 0x3 at 0x2556E8 raw=0x40600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B6E8u;
            { ctx->pc = 0x26b6e8; return; }
        }
    }
    ctx->pc = 0x2556ECu;
label_2556ec:
    // 0x2556ec: 0x3fe00000  .word       0x3FE00000                   # lui         $zero, 0x0 # 03E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2556ecu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2556f0:
    // 0x2556f0: 0x40600000  .word       0x40600000                   # INVALID     $v1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2556f0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x3 at 0x2556F0 raw=0x40600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2556f4:
    // 0x2556f4: 0x3fe00000  .word       0x3FE00000                   # lui         $zero, 0x0 # 03E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2556f4u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2556f8:
    // 0x2556f8: 0x3b03126f  xori        $v1, $t8, 0x126F
    ctx->pc = 0x2556f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 24) ^ (uint64_t)(uint16_t)4719);
label_2556fc:
    // 0x2556fc: 0x3a83126f  xori        $v1, $s4, 0x126F
    ctx->pc = 0x2556fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)4719);
label_255700:
    // 0x255700: 0x3c83126f  .word       0x3C83126F                   # lui         $v1, 0x126F # 00800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4719 << 16));
label_255704:
    // 0x255704: 0x3c03126f  lui         $v1, 0x126F
    ctx->pc = 0x255704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4719 << 16));
label_255708:
    // 0x255708: 0x42a00000  .word       0x42A00000                   # INVALID     $s5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255708u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x255708 raw=0x42A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25570c:
    // 0x25570c: 0x43200000  .word       0x43200000                   # INVALID     $t9, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x25570cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x25570C raw=0x43200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255710:
    // 0x255710: 0x42a00000  .word       0x42A00000                   # INVALID     $s5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255710u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x255710 raw=0x42A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255714:
    // 0x255714: 0x45094000  .word       0x45094000                   # INVALID     $t0, $t1, 0x4000 # 00000000 <InstrIdType: CPU_COP1_BC1>
    ctx->pc = 0x255714u;
    // FPU branch instruction - handled elsewhere
label_255718:
    // 0x255718: 0x44f66000  .word       0x44F66000                   # INVALID     $a3, $s6, 0x6000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x255718u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x7, function 0x0 at 0x255718 raw=0x44F66000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25571c:
    // 0x25571c: 0x450e4000  .word       0x450E4000                   # INVALID     $t0, $t6, 0x4000 # 00000000 <InstrIdType: CPU_COP1_BC1>
    ctx->pc = 0x25571cu;
    // FPU branch instruction - handled elsewhere
label_255720:
    // 0x255720: 0x44fb6000  .word       0x44FB6000                   # INVALID     $a3, $k1, 0x6000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x255720u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x7, function 0x0 at 0x255720 raw=0x44FB6000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255724:
    // 0x255724: 0x0  nop
    ctx->pc = 0x255724u;
    // NOP
label_255728:
    // 0x255728: 0x0  nop
    ctx->pc = 0x255728u;
    // NOP
label_25572c:
    // 0x25572c: 0x0  nop
    ctx->pc = 0x25572cu;
    // NOP
label_255730:
    // 0x255730: 0x0  nop
    ctx->pc = 0x255730u;
    // NOP
label_255734:
    // 0x255734: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x255734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255738:
    // 0x255738: 0x0  nop
    ctx->pc = 0x255738u;
    // NOP
label_25573c:
    // 0x25573c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x25573cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255740:
    // 0x255740: 0xc0c00000  ll          $zero, 0x0($a2)
    ctx->pc = 0x255740u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255744:
    // 0x255744: 0x41100000  .word       0x41100000                   # INVALID     $t0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_BC0>
    ctx->pc = 0x255744u;
    // BC0 (Condition: 0x10) - Handled by branch logic
label_255748:
    // 0x255748: 0x0  nop
    ctx->pc = 0x255748u;
    // NOP
label_25574c:
    // 0x25574c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x25574cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255750:
    // 0x255750: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x255750u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x255750 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255754:
    // 0x255754: 0x41100000  .word       0x41100000                   # INVALID     $t0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_BC0>
    ctx->pc = 0x255754u;
    // BC0 (Condition: 0x10) - Handled by branch logic
label_255758:
    // 0x255758: 0x0  nop
    ctx->pc = 0x255758u;
    // NOP
label_25575c:
    // 0x25575c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x25575cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255760:
    // 0x255760: 0x0  nop
    ctx->pc = 0x255760u;
    // NOP
label_255764:
    // 0x255764: 0xc0c00000  ll          $zero, 0x0($a2)
    ctx->pc = 0x255764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255768:
    // 0x255768: 0x0  nop
    ctx->pc = 0x255768u;
    // NOP
label_25576c:
    // 0x25576c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x25576cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255770:
    // 0x255770: 0xbf99999a  cache       0x19, -0x6666($gp)
    ctx->pc = 0x255770u;
    // CACHE instruction (ignored)
label_255774:
    // 0x255774: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x255774u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x255774 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255778:
    // 0x255778: 0x0  nop
    ctx->pc = 0x255778u;
    // NOP
label_25577c:
    // 0x25577c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x25577cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255780:
    // 0x255780: 0x3f99999a  .word       0x3F99999A                   # lui         $t9, 0x999A # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255780u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_255784:
    // 0x255784: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x255784u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x255784 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255788:
    // 0x255788: 0x0  nop
    ctx->pc = 0x255788u;
    // NOP
label_25578c:
    // 0x25578c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x25578cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255790:
    // 0x255790: 0x590  .word       0x00000590                   # mfhi        $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255790u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_255794:
    // 0x255794: 0x591  .word       0x00000591                   # mthi        $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255794u;
    ctx->hi = GPR_U64(ctx, 0);
label_255798:
    // 0x255798: 0x592  .word       0x00000592                   # mflo        $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255798u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_25579c:
    // 0x25579c: 0x593  .word       0x00000593                   # mtlo        $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25579cu;
    ctx->lo = GPR_U64(ctx, 0);
label_2557a0:
    // 0x2557a0: 0x594  .word       0x00000594                   # dsllv       $zero, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2557a0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2557a4:
    // 0x2557a4: 0x595  .word       0x00000595                   # INVALID     $zero, $zero, 0x595 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2557a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2557A4 raw=0x00000595"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2557a8:
    // 0x2557a8: 0x596  .word       0x00000596                   # dsrlv       $zero, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2557a8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2557ac:
    // 0x2557ac: 0x597  .word       0x00000597                   # dsrav       $zero, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2557acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2557b0:
    // 0x2557b0: 0x598  .word       0x00000598                   # mult        $zero, $zero, $zero # 00000580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2557b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2557b4:
    // 0x2557b4: 0x599  .word       0x00000599                   # multu       $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2557b4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2557b8:
    // 0x2557b8: 0x59a  .word       0x0000059A                   # div         $zero, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2557b8u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2557bc:
    // 0x2557bc: 0x59b  .word       0x0000059B                   # divu        $zero, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2557bcu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2557c0:
    // 0x2557c0: 0x59c  .word       0x0000059C                   # dmult       $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2557c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2557C0 raw=0x0000059C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2557c4:
    // 0x2557c4: 0x59d  .word       0x0000059D                   # dmultu      $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2557c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2557C4 raw=0x0000059D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2557c8:
    // 0x2557c8: 0x59e  .word       0x0000059E                   # ddiv        $zero, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2557c8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2557C8 raw=0x0000059E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2557cc:
    // 0x2557cc: 0x59f  .word       0x0000059F                   # ddivu       $zero, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2557ccu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2557CC raw=0x0000059F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2557d0:
    // 0x2557d0: 0x5a0  .word       0x000005A0                   # add         $zero, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2557d0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2557d4:
    // 0x2557d4: 0x5a1  .word       0x000005A1                   # addu        $zero, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2557d4u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2557d8:
    // 0x2557d8: 0x5a2  .word       0x000005A2                   # neg         $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2557d8u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_2557dc:
    // 0x2557dc: 0x5a3  .word       0x000005A3                   # negu        $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2557dcu;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2557e0:
    // 0x2557e0: 0x5a4  .word       0x000005A4                   # and         $zero, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2557e0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2557e4:
    // 0x2557e4: 0x5a5  .word       0x000005A5                   # move        $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2557e4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2557e8:
    // 0x2557e8: 0x5a6  .word       0x000005A6                   # xor         $zero, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2557e8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2557ec:
    // 0x2557ec: 0x5a7  .word       0x000005A7                   # not         $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2557ecu;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2557f0:
    // 0x2557f0: 0x40933333  .word       0x40933333                   # mtc0        $s3, Wired # 00000333 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2557f0u;
    ctx->cop0_wired = GPR_U32(ctx, 19) & 0x3F; ctx->cop0_random = 47;
label_2557f4:
    // 0x2557f4: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x2557f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2557f8:
    // 0x2557f8: 0x400ccccd  .word       0x400CCCCD                   # mfc0        $t4, Reserved25 # 000004CD <InstrIdType: R5900_COP0>
    ctx->pc = 0x2557f8u;
    SET_GPR_S32(ctx, 12, (int32_t)ctx->cop0_perf);
label_2557fc:
    // 0x2557fc: 0x0  nop
    ctx->pc = 0x2557fcu;
    // NOP
label_255800:
    // 0x255800: 0x40f33333  .word       0x40F33333                   # INVALID     $a3, $s3, 0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255800u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x7 at 0x255800 raw=0x40F33333"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255804:
    // 0x255804: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x255804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255808:
    // 0x255808: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x255808u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_25580c:
    // 0x25580c: 0x0  nop
    ctx->pc = 0x25580cu;
    // NOP
label_255810:
    // 0x255810: 0xc0866666  ll          $a2, 0x6666($a0)
    ctx->pc = 0x255810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 26214); SET_GPR_S32(ctx, 6, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255814:
    // 0x255814: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x255814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255818:
    // 0x255818: 0xc0333333  ll          $s3, 0x3333($at)
    ctx->pc = 0x255818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 13107); SET_GPR_S32(ctx, 19, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_25581c:
    // 0x25581c: 0x0  nop
    ctx->pc = 0x25581cu;
    // NOP
label_255820:
    // 0x255820: 0xc0f9999a  ll          $t9, -0x6666($a3)
    ctx->pc = 0x255820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 4294941082); SET_GPR_S32(ctx, 25, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255824:
    // 0x255824: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x255824u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255828:
    // 0x255828: 0x40333333  .word       0x40333333                   # dmfc0       $s3, Wired # 00000333 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255828u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x255828 raw=0x40333333"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25582c:
    // 0x25582c: 0x0  nop
    ctx->pc = 0x25582cu;
    // NOP
label_255830:
    // 0x255830: 0x400ccccd  .word       0x400CCCCD                   # mfc0        $t4, Reserved25 # 000004CD <InstrIdType: R5900_COP0>
    ctx->pc = 0x255830u;
    SET_GPR_S32(ctx, 12, (int32_t)ctx->cop0_perf);
label_255834:
    // 0x255834: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x255834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255838:
    // 0x255838: 0x40e00000  .word       0x40E00000                   # INVALID     $a3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255838u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x7 at 0x255838 raw=0x40E00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25583c:
    // 0x25583c: 0x0  nop
    ctx->pc = 0x25583cu;
    // NOP
label_255840:
    // 0x255840: 0x41bc0000  .word       0x41BC0000                   # INVALID     $t5, $gp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255840u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x255840 raw=0x41BC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255844:
    // 0x255844: 0x41a4cccd  .word       0x41A4CCCD                   # INVALID     $t5, $a0, -0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255844u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x255844 raw=0x41A4CCCD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255848:
    // 0x255848: 0x41333333  .word       0x41333333                   # INVALID     $t1, $s3, 0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255848u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x255848 raw=0x41333333"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25584c:
    // 0x25584c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x25584cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255850:
    // 0x255850: 0x421a0000  .word       0x421A0000                   # INVALID     $s0, $k0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x255850u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x255850 raw=0x421A0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255854:
    // 0x255854: 0x4114cccd  .word       0x4114CCCD                   # INVALID     $t0, $s4, -0x3333 # 00000000 <InstrIdType: CPU_COP0_BC0>
    ctx->pc = 0x255854u;
    // BC0 (Condition: 0x14) - Handled by branch logic
label_255858:
    // 0x255858: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255858u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x255858 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25585c:
    // 0x25585c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x25585cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255860:
    // 0x255860: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x255860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255864:
    // 0x255864: 0x4039999a  .word       0x4039999A                   # dmfc0       $t9, WatchHi # 0000019A <InstrIdType: R5900_COP0>
    ctx->pc = 0x255864u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x255864 raw=0x4039999A"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255868:
    // 0x255868: 0xc1666666  ll          $a2, 0x6666($t3)
    ctx->pc = 0x255868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26214); SET_GPR_S32(ctx, 6, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_25586c:
    // 0x25586c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x25586cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255870:
    // 0x255870: 0xc21e0000  ll          $fp, 0x0($s0)
    ctx->pc = 0x255870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); SET_GPR_S32(ctx, 30, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255874:
    // 0x255874: 0x3fa66666  .word       0x3FA66666                   # lui         $a2, 0x6666 # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255874u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26214 << 16));
label_255878:
    // 0x255878: 0x4169999a  .word       0x4169999A                   # INVALID     $t3, $t1, -0x6666 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255878u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x255878 raw=0x4169999A"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25587c:
    // 0x25587c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x25587cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255880:
    // 0x255880: 0x413ccccd  .word       0x413CCCCD                   # INVALID     $t1, $gp, -0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255880u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x255880 raw=0x413CCCCD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255884:
    // 0x255884: 0xc0d00000  ll          $s0, 0x0($a2)
    ctx->pc = 0x255884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255888:
    // 0x255888: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x255888u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x255888 raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25588c:
    // 0x25588c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x25588cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255890:
    // 0x255890: 0xbd56774f  cache       0x16, 0x774F($t2)
    ctx->pc = 0x255890u;
    // CACHE instruction (ignored)
label_255894:
    // 0x255894: 0x0  nop
    ctx->pc = 0x255894u;
    // NOP
label_255898:
    // 0x255898: 0x3debe9a4  .word       0x3DEBE9A4                   # lui         $t3, 0xE9A4 # 01E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255898u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)59812 << 16));
label_25589c:
    // 0x25589c: 0x0  nop
    ctx->pc = 0x25589cu;
    // NOP
label_2558a0:
    // 0x2558a0: 0xbdd6774f  cache       0x16, 0x774F($t6)
    ctx->pc = 0x2558a0u;
    // CACHE instruction (ignored)
label_2558a4:
    // 0x2558a4: 0x0  nop
    ctx->pc = 0x2558a4u;
    // NOP
label_2558a8:
    // 0x2558a8: 0x3e4bbe24  .word       0x3E4BBE24                   # lui         $t3, 0xBE24 # 02400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2558a8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)48676 << 16));
label_2558ac:
    // 0x2558ac: 0x0  nop
    ctx->pc = 0x2558acu;
    // NOP
label_2558b0:
    // 0x2558b0: 0x3d962051  .word       0x3D962051                   # lui         $s6, 0x2051 # 01800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2558b0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)8273 << 16));
label_2558b4:
    // 0x2558b4: 0x0  nop
    ctx->pc = 0x2558b4u;
    // NOP
label_2558b8:
    // 0x2558b8: 0xbdd6774f  cache       0x16, 0x774F($t6)
    ctx->pc = 0x2558b8u;
    // CACHE instruction (ignored)
label_2558bc:
    // 0x2558bc: 0x0  nop
    ctx->pc = 0x2558bcu;
    // NOP
label_2558c0:
    // 0x2558c0: 0xbd962051  cache       0x16, 0x2051($t4)
    ctx->pc = 0x2558c0u;
    // CACHE instruction (ignored)
label_2558c4:
    // 0x2558c4: 0x0  nop
    ctx->pc = 0x2558c4u;
    // NOP
label_2558c8:
    // 0x2558c8: 0xbe4bbe24  cache       0x0B, -0x41DC($s2)
    ctx->pc = 0x2558c8u;
    // CACHE instruction (ignored)
label_2558cc:
    // 0x2558cc: 0x0  nop
    ctx->pc = 0x2558ccu;
    // NOP
label_2558d0:
    // 0x2558d0: 0xbe364bd0  cache       0x16, 0x4BD0($s1)
    ctx->pc = 0x2558d0u;
    // CACHE instruction (ignored)
label_2558d4:
    // 0x2558d4: 0x0  nop
    ctx->pc = 0x2558d4u;
    // NOP
label_2558d8:
    // 0x2558d8: 0x3d56774f  .word       0x3D56774F                   # lui         $s6, 0x774F # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2558d8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)30543 << 16));
label_2558dc:
    // 0x2558dc: 0x0  nop
    ctx->pc = 0x2558dcu;
    // NOP
label_2558e0:
    // 0x2558e0: 0x0  nop
    ctx->pc = 0x2558e0u;
    // NOP
label_2558e4:
    // 0x2558e4: 0xc11b3333  ll          $k1, 0x3333($t0)
    ctx->pc = 0x2558e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 13107); SET_GPR_S32(ctx, 27, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2558e8:
    // 0x2558e8: 0xbff33333  cache       0x13, 0x3333($ra)
    ctx->pc = 0x2558e8u;
    // CACHE instruction (ignored)
label_2558ec:
    // 0x2558ec: 0x0  nop
    ctx->pc = 0x2558ecu;
    // NOP
label_2558f0:
    // 0x2558f0: 0x3e99999a  .word       0x3E99999A                   # lui         $t9, 0x999A # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2558f0u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_2558f4:
    // 0x2558f4: 0xc0b33333  ll          $s3, 0x3333($a1)
    ctx->pc = 0x2558f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 13107); SET_GPR_S32(ctx, 19, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2558f8:
    // 0x2558f8: 0xc0200000  ll          $zero, 0x0($at)
    ctx->pc = 0x2558f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2558fc:
    // 0x2558fc: 0x0  nop
    ctx->pc = 0x2558fcu;
    // NOP
label_255900:
    // 0x255900: 0x3fb33333  .word       0x3FB33333                   # lui         $s3, 0x3333 # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255900u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13107 << 16));
label_255904:
    // 0x255904: 0xc0666666  ll          $a2, 0x6666($v1)
    ctx->pc = 0x255904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26214); SET_GPR_S32(ctx, 6, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255908:
    // 0x255908: 0xc0133333  ll          $s3, 0x3333($zero)
    ctx->pc = 0x255908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 13107); SET_GPR_S32(ctx, 19, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_25590c:
    // 0x25590c: 0x0  nop
    ctx->pc = 0x25590cu;
    // NOP
label_255910:
    // 0x255910: 0xbf99999a  cache       0x19, -0x6666($gp)
    ctx->pc = 0x255910u;
    // CACHE instruction (ignored)
label_255914:
    // 0x255914: 0xc09ccccd  ll          $gp, -0x3333($a0)
    ctx->pc = 0x255914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294954189); SET_GPR_S32(ctx, 28, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255918:
    // 0x255918: 0xc0200000  ll          $zero, 0x0($at)
    ctx->pc = 0x255918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_25591c:
    // 0x25591c: 0x0  nop
    ctx->pc = 0x25591cu;
    // NOP
label_255920:
    // 0x255920: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x255920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255924:
    // 0x255924: 0xc0accccd  ll          $t4, -0x3333($a1)
    ctx->pc = 0x255924u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4294954189); SET_GPR_S32(ctx, 12, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255928:
    // 0x255928: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x255928u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_25592c:
    // 0x25592c: 0x0  nop
    ctx->pc = 0x25592cu;
    // NOP
label_255930:
    // 0x255930: 0xc0200000  ll          $zero, 0x0($at)
    ctx->pc = 0x255930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255934:
    // 0x255934: 0xc02ccccd  ll          $t4, -0x3333($at)
    ctx->pc = 0x255934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 4294954189); SET_GPR_S32(ctx, 12, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255938:
    // 0x255938: 0xbe99999a  cache       0x19, -0x6666($s4)
    ctx->pc = 0x255938u;
    // CACHE instruction (ignored)
label_25593c:
    // 0x25593c: 0x0  nop
    ctx->pc = 0x25593cu;
    // NOP
label_255940:
    // 0x255940: 0xc0133333  ll          $s3, 0x3333($zero)
    ctx->pc = 0x255940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 13107); SET_GPR_S32(ctx, 19, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255944:
    // 0x255944: 0xc0accccd  ll          $t4, -0x3333($a1)
    ctx->pc = 0x255944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4294954189); SET_GPR_S32(ctx, 12, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255948:
    // 0x255948: 0xc0066666  ll          $a2, 0x6666($zero)
    ctx->pc = 0x255948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 26214); SET_GPR_S32(ctx, 6, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_25594c:
    // 0x25594c: 0x0  nop
    ctx->pc = 0x25594cu;
    // NOP
label_255950:
    // 0x255950: 0x40200000  dmfc0       $zero, Index
    ctx->pc = 0x255950u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x255950 raw=0x40200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255954:
    // 0x255954: 0xc0cccccd  ll          $t4, -0x3333($a2)
    ctx->pc = 0x255954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 4294954189); SET_GPR_S32(ctx, 12, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255958:
    // 0x255958: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255958u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_25595c:
    // 0x25595c: 0x0  nop
    ctx->pc = 0x25595cu;
    // NOP
label_255960:
    // 0x255960: 0x40200000  dmfc0       $zero, Index
    ctx->pc = 0x255960u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x255960 raw=0x40200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255964:
    // 0x255964: 0xc02ccccd  ll          $t4, -0x3333($at)
    ctx->pc = 0x255964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 4294954189); SET_GPR_S32(ctx, 12, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255968:
    // 0x255968: 0x0  nop
    ctx->pc = 0x255968u;
    // NOP
label_25596c:
    // 0x25596c: 0x0  nop
    ctx->pc = 0x25596cu;
    // NOP
label_255970:
    // 0x255970: 0x40133333  .word       0x40133333                   # mfc0        $s3, Wired # 00000333 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255970u;
    SET_GPR_S32(ctx, 19, (int32_t)ctx->cop0_wired);
label_255974:
    // 0x255974: 0xc0f66666  ll          $s6, 0x6666($a3)
    ctx->pc = 0x255974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 26214); SET_GPR_S32(ctx, 22, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255978:
    // 0x255978: 0xbf000000  cache       0x00, 0x0($t8)
    ctx->pc = 0x255978u;
    // CACHE instruction (ignored)
label_25597c:
    // 0x25597c: 0x0  nop
    ctx->pc = 0x25597cu;
    // NOP
label_255980:
    // 0x255980: 0x3dcccccd  .word       0x3DCCCCCD                   # lui         $t4, 0xCCCD # 01C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255980u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_255984:
    // 0x255984: 0xc09ccccd  ll          $gp, -0x3333($a0)
    ctx->pc = 0x255984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294954189); SET_GPR_S32(ctx, 28, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255988:
    // 0x255988: 0x40200000  dmfc0       $zero, Index
    ctx->pc = 0x255988u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x255988 raw=0x40200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25598c:
    // 0x25598c: 0x0  nop
    ctx->pc = 0x25598cu;
    // NOP
label_255990:
    // 0x255990: 0x0  nop
    ctx->pc = 0x255990u;
    // NOP
label_255994:
    // 0x255994: 0xbf000000  cache       0x00, 0x0($t8)
    ctx->pc = 0x255994u;
    // CACHE instruction (ignored)
label_255998:
    // 0x255998: 0x40200000  dmfc0       $zero, Index
    ctx->pc = 0x255998u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x255998 raw=0x40200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25599c:
    // 0x25599c: 0x0  nop
    ctx->pc = 0x25599cu;
    // NOP
label_2559a0:
    // 0x2559a0: 0x3ff33333  .word       0x3FF33333                   # lui         $s3, 0x3333 # 03E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2559a0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13107 << 16));
label_2559a4:
    // 0x2559a4: 0xc09ccccd  ll          $gp, -0x3333($a0)
    ctx->pc = 0x2559a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294954189); SET_GPR_S32(ctx, 28, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2559a8:
    // 0x2559a8: 0x4019999a  .word       0x4019999A                   # mfc0        $t9, WatchHi # 0000019A <InstrIdType: R5900_COP0>
    ctx->pc = 0x2559a8u;
    SET_GPR_S32(ctx, 25, 0);  // Unimplemented COP0 register 19
label_2559ac:
    // 0x2559ac: 0x0  nop
    ctx->pc = 0x2559acu;
    // NOP
label_2559b0:
    // 0x2559b0: 0xbecccccd  cache       0x0C, -0x3333($s6)
    ctx->pc = 0x2559b0u;
    // CACHE instruction (ignored)
label_2559b4:
    // 0x2559b4: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x2559b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2559b8:
    // 0x2559b8: 0x0  nop
    ctx->pc = 0x2559b8u;
    // NOP
label_2559bc:
    // 0x2559bc: 0x0  nop
    ctx->pc = 0x2559bcu;
    // NOP
label_2559c0:
    // 0x2559c0: 0xc0133333  ll          $s3, 0x3333($zero)
    ctx->pc = 0x2559c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 13107); SET_GPR_S32(ctx, 19, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2559c4:
    // 0x2559c4: 0xc119999a  ll          $t9, -0x6666($t0)
    ctx->pc = 0x2559c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 4294941082); SET_GPR_S32(ctx, 25, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2559c8:
    // 0x2559c8: 0x0  nop
    ctx->pc = 0x2559c8u;
    // NOP
label_2559cc:
    // 0x2559cc: 0x0  nop
    ctx->pc = 0x2559ccu;
    // NOP
label_2559d0:
    // 0x2559d0: 0x0  nop
    ctx->pc = 0x2559d0u;
    // NOP
label_2559d4:
    // 0x2559d4: 0xc11b3333  ll          $k1, 0x3333($t0)
    ctx->pc = 0x2559d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 13107); SET_GPR_S32(ctx, 27, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2559d8:
    // 0x2559d8: 0x3fc00000  .word       0x3FC00000                   # lui         $zero, 0x0 # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2559d8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2559dc:
    // 0x2559dc: 0x0  nop
    ctx->pc = 0x2559dcu;
    // NOP
label_2559e0:
    // 0x2559e0: 0x3dab92a6  .word       0x3DAB92A6                   # lui         $t3, 0x92A6 # 01A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2559e0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)37542 << 16));
label_2559e4:
    // 0x2559e4: 0x0  nop
    ctx->pc = 0x2559e4u;
    // NOP
label_2559e8:
    // 0x2559e8: 0x0  nop
    ctx->pc = 0x2559e8u;
    // NOP
label_2559ec:
    // 0x2559ec: 0x0  nop
    ctx->pc = 0x2559ecu;
    // NOP
label_2559f0:
    // 0x2559f0: 0x3e00adfd  .word       0x3E00ADFD                   # lui         $zero, 0xADFD # 02000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2559f0u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)44541 << 16));
label_2559f4:
    // 0x2559f4: 0x0  nop
    ctx->pc = 0x2559f4u;
    // NOP
label_2559f8:
    // 0x2559f8: 0x0  nop
    ctx->pc = 0x2559f8u;
    // NOP
label_2559fc:
    // 0x2559fc: 0x0  nop
    ctx->pc = 0x2559fcu;
    // NOP
label_255a00:
    // 0x255a00: 0x3e00adfd  .word       0x3E00ADFD                   # lui         $zero, 0xADFD # 02000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255a00u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)44541 << 16));
label_255a04:
    // 0x255a04: 0x0  nop
    ctx->pc = 0x255a04u;
    // NOP
label_255a08:
    // 0x255a08: 0x3d962051  .word       0x3D962051                   # lui         $s6, 0x2051 # 01800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255a08u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)8273 << 16));
label_255a0c:
    // 0x255a0c: 0x0  nop
    ctx->pc = 0x255a0cu;
    // NOP
label_255a10:
    // 0x255a10: 0x3e00adfd  .word       0x3E00ADFD                   # lui         $zero, 0xADFD # 02000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255a10u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)44541 << 16));
label_255a14:
    // 0x255a14: 0x0  nop
    ctx->pc = 0x255a14u;
    // NOP
label_255a18:
    // 0x255a18: 0xbd80adfd  cache       0x00, -0x5203($t4)
    ctx->pc = 0x255a18u;
    // CACHE instruction (ignored)
label_255a1c:
    // 0x255a1c: 0x0  nop
    ctx->pc = 0x255a1cu;
    // NOP
label_255a20:
    // 0x255a20: 0xbdd6774f  cache       0x16, 0x774F($t6)
    ctx->pc = 0x255a20u;
    // CACHE instruction (ignored)
label_255a24:
    // 0x255a24: 0x0  nop
    ctx->pc = 0x255a24u;
    // NOP
label_255a28:
    // 0x255a28: 0xbdd6774f  cache       0x16, 0x774F($t6)
    ctx->pc = 0x255a28u;
    // CACHE instruction (ignored)
label_255a2c:
    // 0x255a2c: 0x0  nop
    ctx->pc = 0x255a2cu;
    // NOP
label_255a30:
    // 0x255a30: 0x0  nop
    ctx->pc = 0x255a30u;
    // NOP
label_255a34:
    // 0x255a34: 0x0  nop
    ctx->pc = 0x255a34u;
    // NOP
label_255a38:
    // 0x255a38: 0xbe00adfd  cache       0x00, -0x5203($s0)
    ctx->pc = 0x255a38u;
    // CACHE instruction (ignored)
label_255a3c:
    // 0x255a3c: 0x0  nop
    ctx->pc = 0x255a3cu;
    // NOP
label_255a40:
    // 0x255a40: 0x3dd6774f  .word       0x3DD6774F                   # lui         $s6, 0x774F # 01C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255a40u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)30543 << 16));
label_255a44:
    // 0x255a44: 0x0  nop
    ctx->pc = 0x255a44u;
    // NOP
label_255a48:
    // 0x255a48: 0xbdebe9a4  cache       0x0B, -0x165C($t7)
    ctx->pc = 0x255a48u;
    // CACHE instruction (ignored)
label_255a4c:
    // 0x255a4c: 0x0  nop
    ctx->pc = 0x255a4cu;
    // NOP
label_255a50:
    // 0x255a50: 0xbd56774f  cache       0x16, 0x774F($t2)
    ctx->pc = 0x255a50u;
    // CACHE instruction (ignored)
label_255a54:
    // 0x255a54: 0x0  nop
    ctx->pc = 0x255a54u;
    // NOP
label_255a58:
    // 0x255a58: 0x3dc104fa  .word       0x3DC104FA                   # lui         $at, 0x4FA # 01C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1274 << 16));
label_255a5c:
    // 0x255a5c: 0x0  nop
    ctx->pc = 0x255a5cu;
    // NOP
label_255a60:
    // 0x255a60: 0x0  nop
    ctx->pc = 0x255a60u;
    // NOP
label_255a64:
    // 0x255a64: 0x0  nop
    ctx->pc = 0x255a64u;
    // NOP
label_255a68:
    // 0x255a68: 0x3e00adfd  .word       0x3E00ADFD                   # lui         $zero, 0xADFD # 02000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255a68u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)44541 << 16));
label_255a6c:
    // 0x255a6c: 0x0  nop
    ctx->pc = 0x255a6cu;
    // NOP
label_255a70:
    // 0x255a70: 0x0  nop
    ctx->pc = 0x255a70u;
    // NOP
label_255a74:
    // 0x255a74: 0x0  nop
    ctx->pc = 0x255a74u;
    // NOP
label_255a78:
    // 0x255a78: 0x3debe9a4  .word       0x3DEBE9A4                   # lui         $t3, 0xE9A4 # 01E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255a78u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)59812 << 16));
label_255a7c:
    // 0x255a7c: 0x0  nop
    ctx->pc = 0x255a7cu;
    // NOP
label_255a80:
    // 0x255a80: 0xbe00adfd  cache       0x00, -0x5203($s0)
    ctx->pc = 0x255a80u;
    // CACHE instruction (ignored)
label_255a84:
    // 0x255a84: 0x0  nop
    ctx->pc = 0x255a84u;
    // NOP
label_255a88:
    // 0x255a88: 0x0  nop
    ctx->pc = 0x255a88u;
    // NOP
label_255a8c:
    // 0x255a8c: 0x0  nop
    ctx->pc = 0x255a8cu;
    // NOP
label_255a90:
    // 0x255a90: 0xbe00adfd  cache       0x00, -0x5203($s0)
    ctx->pc = 0x255a90u;
    // CACHE instruction (ignored)
label_255a94:
    // 0x255a94: 0x0  nop
    ctx->pc = 0x255a94u;
    // NOP
label_255a98:
    // 0x255a98: 0x0  nop
    ctx->pc = 0x255a98u;
    // NOP
label_255a9c:
    // 0x255a9c: 0x0  nop
    ctx->pc = 0x255a9cu;
    // NOP
label_255aa0:
    // 0x255aa0: 0xbe00adfd  cache       0x00, -0x5203($s0)
    ctx->pc = 0x255aa0u;
    // CACHE instruction (ignored)
label_255aa4:
    // 0x255aa4: 0x0  nop
    ctx->pc = 0x255aa4u;
    // NOP
label_255aa8:
    // 0x255aa8: 0x3dc104fa  .word       0x3DC104FA                   # lui         $at, 0x4FA # 01C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1274 << 16));
label_255aac:
    // 0x255aac: 0x0  nop
    ctx->pc = 0x255aacu;
    // NOP
label_255ab0:
    // 0x255ab0: 0x0  nop
    ctx->pc = 0x255ab0u;
    // NOP
label_255ab4:
    // 0x255ab4: 0x0  nop
    ctx->pc = 0x255ab4u;
    // NOP
label_255ab8:
    // 0x255ab8: 0x0  nop
    ctx->pc = 0x255ab8u;
    // NOP
label_255abc:
    // 0x255abc: 0x0  nop
    ctx->pc = 0x255abcu;
    // NOP
label_255ac0:
    // 0x255ac0: 0x0  nop
    ctx->pc = 0x255ac0u;
    // NOP
label_255ac4:
    // 0x255ac4: 0x0  nop
    ctx->pc = 0x255ac4u;
    // NOP
label_255ac8:
    // 0x255ac8: 0xbdebe9a4  cache       0x0B, -0x165C($t7)
    ctx->pc = 0x255ac8u;
    // CACHE instruction (ignored)
label_255acc:
    // 0x255acc: 0x0  nop
    ctx->pc = 0x255accu;
    // NOP
label_255ad0:
    // 0x255ad0: 0xbd962051  cache       0x16, 0x2051($t4)
    ctx->pc = 0x255ad0u;
    // CACHE instruction (ignored)
label_255ad4:
    // 0x255ad4: 0x0  nop
    ctx->pc = 0x255ad4u;
    // NOP
label_255ad8:
    // 0x255ad8: 0x0  nop
    ctx->pc = 0x255ad8u;
    // NOP
label_255adc:
    // 0x255adc: 0x0  nop
    ctx->pc = 0x255adcu;
    // NOP
label_255ae0:
    // 0x255ae0: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x255ae0u;
    // CACHE instruction (ignored)
label_255ae4:
    // 0x255ae4: 0xc2c20000  ll          $v0, 0x0($s6)
    ctx->pc = 0x255ae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); SET_GPR_S32(ctx, 2, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255ae8:
    // 0x255ae8: 0xc218cccd  ll          $t8, -0x3333($s0)
    ctx->pc = 0x255ae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4294954189); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255aec:
    // 0x255aec: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255aecu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255af0:
    // 0x255af0: 0x40d66666  .word       0x40D66666                   # ctc0        $s6, Status # 00000666 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255af0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x255AF0 raw=0x40D66666"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255af4:
    // 0x255af4: 0xc2626666  ll          $v0, 0x6666($s3)
    ctx->pc = 0x255af4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26214); SET_GPR_S32(ctx, 2, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255af8:
    // 0x255af8: 0xc2480000  ll          $t0, 0x0($s2)
    ctx->pc = 0x255af8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255afc:
    // 0x255afc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255afcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255b00:
    // 0x255b00: 0x41eccccd  .word       0x41ECCCCD                   # INVALID     $t7, $t4, -0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255b00u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x255B00 raw=0x41ECCCCD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255b04:
    // 0x255b04: 0xc2106666  ll          $s0, 0x6666($s0)
    ctx->pc = 0x255b04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 26214); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255b08:
    // 0x255b08: 0xc23d3333  ll          $sp, 0x3333($s1)
    ctx->pc = 0x255b08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 13107); SET_GPR_S32(ctx, 29, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255b0c:
    // 0x255b0c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255b0cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255b10:
    // 0x255b10: 0xc1cc0000  ll          $t4, 0x0($t6)
    ctx->pc = 0x255b10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); SET_GPR_S32(ctx, 12, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255b14:
    // 0x255b14: 0xc2440000  ll          $a0, 0x0($s2)
    ctx->pc = 0x255b14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); SET_GPR_S32(ctx, 4, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255b18:
    // 0x255b18: 0xc2480000  ll          $t0, 0x0($s2)
    ctx->pc = 0x255b18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255b1c:
    // 0x255b1c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255b1cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255b20:
    // 0x255b20: 0xc2266666  ll          $a2, 0x6666($s1)
    ctx->pc = 0x255b20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 26214); SET_GPR_S32(ctx, 6, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255b24:
    // 0x255b24: 0xc25acccd  ll          $k0, -0x3333($s2)
    ctx->pc = 0x255b24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 4294954189); SET_GPR_S32(ctx, 26, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255b28:
    // 0x255b28: 0x42213333  .word       0x42213333                   # INVALID     $s1, $at, 0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255b28u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x255B28 raw=0x42213333"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255b2c:
    // 0x255b2c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255b2cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255b30:
    // 0x255b30: 0xc2480000  ll          $t0, 0x0($s2)
    ctx->pc = 0x255b30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255b34:
    // 0x255b34: 0xc1d9999a  ll          $t9, -0x6666($t6)
    ctx->pc = 0x255b34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294941082); SET_GPR_S32(ctx, 25, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255b38:
    // 0x255b38: 0xc0cccccd  ll          $t4, -0x3333($a2)
    ctx->pc = 0x255b38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 4294954189); SET_GPR_S32(ctx, 12, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255b3c:
    // 0x255b3c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255b3cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255b40:
    // 0x255b40: 0xc23d3333  ll          $sp, 0x3333($s1)
    ctx->pc = 0x255b40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 13107); SET_GPR_S32(ctx, 29, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255b44:
    // 0x255b44: 0xc258cccd  ll          $t8, -0x3333($s2)
    ctx->pc = 0x255b44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 4294954189); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255b48:
    // 0x255b48: 0xc2286666  ll          $t0, 0x6666($s1)
    ctx->pc = 0x255b48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 26214); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255b4c:
    // 0x255b4c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255b4cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255b50:
    // 0x255b50: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255b50u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x255B50 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255b54:
    // 0x255b54: 0xc280999a  ll          $zero, -0x6666($s4)
    ctx->pc = 0x255b54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4294941082); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255b58:
    // 0x255b58: 0x41a40000  .word       0x41A40000                   # INVALID     $t5, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255b58u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x255B58 raw=0x41A40000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255b5c:
    // 0x255b5c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255b5cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255b60:
    // 0x255b60: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255b60u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x255B60 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255b64:
    // 0x255b64: 0xc1df3333  ll          $ra, 0x3333($t6)
    ctx->pc = 0x255b64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 13107); SET_GPR_S32(ctx, 31, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255b68:
    // 0x255b68: 0x3fd9999a  .word       0x3FD9999A                   # lui         $t9, 0x999A # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255b68u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_255b6c:
    // 0x255b6c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255b6cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255b70:
    // 0x255b70: 0x423e6666  .word       0x423E6666                   # INVALID     $s1, $fp, 0x6666 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255b70u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x255B70 raw=0x423E6666"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255b74:
    // 0x255b74: 0xc29a6666  ll          $k0, 0x6666($s4)
    ctx->pc = 0x255b74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 26214); SET_GPR_S32(ctx, 26, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255b78:
    // 0x255b78: 0xc1266666  ll          $a2, 0x6666($t1)
    ctx->pc = 0x255b78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 26214); SET_GPR_S32(ctx, 6, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255b7c:
    // 0x255b7c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255b7cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255b80:
    // 0x255b80: 0x40133333  .word       0x40133333                   # mfc0        $s3, Wired # 00000333 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255b80u;
    SET_GPR_S32(ctx, 19, (int32_t)ctx->cop0_wired);
label_255b84:
    // 0x255b84: 0xc2440000  ll          $a0, 0x0($s2)
    ctx->pc = 0x255b84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); SET_GPR_S32(ctx, 4, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255b88:
    // 0x255b88: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255b88u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x255B88 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255b8c:
    // 0x255b8c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255b8cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255b90:
    // 0x255b90: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x255b90u;
    // CACHE instruction (ignored)
label_255b94:
    // 0x255b94: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x255b94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255b98:
    // 0x255b98: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255b98u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x255B98 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255b9c:
    // 0x255b9c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255b9cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255ba0:
    // 0x255ba0: 0x421a0000  .word       0x421A0000                   # INVALID     $s0, $k0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x255ba0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x255BA0 raw=0x421A0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255ba4:
    // 0x255ba4: 0xc2466666  ll          $a2, 0x6666($s2)
    ctx->pc = 0x255ba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 26214); SET_GPR_S32(ctx, 6, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255ba8:
    // 0x255ba8: 0x4240cccd  .word       0x4240CCCD                   # INVALID     $s2, $zero, -0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255ba8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x255BA8 raw=0x4240CCCD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255bac:
    // 0x255bac: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255bacu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255bb0:
    // 0x255bb0: 0xc1033333  ll          $v1, 0x3333($t0)
    ctx->pc = 0x255bb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 13107); SET_GPR_S32(ctx, 3, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255bb4:
    // 0x255bb4: 0xc2c80000  ll          $t0, 0x0($s6)
    ctx->pc = 0x255bb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255bb8:
    // 0x255bb8: 0x0  nop
    ctx->pc = 0x255bb8u;
    // NOP
label_255bbc:
    // 0x255bbc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255bbcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255bc0:
    // 0x255bc0: 0xc23acccd  ll          $k0, -0x3333($s1)
    ctx->pc = 0x255bc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 4294954189); SET_GPR_S32(ctx, 26, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255bc4:
    // 0x255bc4: 0xc2c00000  ll          $zero, 0x0($s6)
    ctx->pc = 0x255bc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255bc8:
    // 0x255bc8: 0x0  nop
    ctx->pc = 0x255bc8u;
    // NOP
label_255bcc:
    // 0x255bcc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255bccu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255bd0:
    // 0x255bd0: 0xbecccccd  cache       0x0C, -0x3333($s6)
    ctx->pc = 0x255bd0u;
    // CACHE instruction (ignored)
label_255bd4:
    // 0x255bd4: 0xc2c33333  ll          $v1, 0x3333($s6)
    ctx->pc = 0x255bd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 13107); SET_GPR_S32(ctx, 3, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255bd8:
    // 0x255bd8: 0x41f4cccd  .word       0x41F4CCCD                   # INVALID     $t7, $s4, -0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255bd8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x255BD8 raw=0x41F4CCCD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255bdc:
    // 0x255bdc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255bdcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255be0:
    // 0x255be0: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x255be0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255be4:
    // 0x255be4: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x255be4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255be8:
    // 0x255be8: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x255be8u;
    // CACHE instruction (ignored)
label_255bec:
    // 0x255bec: 0x0  nop
    ctx->pc = 0x255becu;
    // NOP
label_255bf0:
    // 0x255bf0: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x255bf0u;
    // CACHE instruction (ignored)
label_255bf4:
    // 0x255bf4: 0xc1000000  ll          $zero, 0x0($t0)
    ctx->pc = 0x255bf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255bf8:
    // 0x255bf8: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x255bf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255bfc:
    // 0x255bfc: 0x0  nop
    ctx->pc = 0x255bfcu;
    // NOP
label_255c00:
    // 0x255c00: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255c00u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255c04:
    // 0x255c04: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x255c04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255c08:
    // 0x255c08: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x255c08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255c0c:
    // 0x255c0c: 0x0  nop
    ctx->pc = 0x255c0cu;
    // NOP
label_255c10:
    // 0x255c10: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x255c10u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_255c14:
    // 0x255c14: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x255c14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255c18:
    // 0x255c18: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x255c18u;
    // CACHE instruction (ignored)
label_255c1c:
    // 0x255c1c: 0x0  nop
    ctx->pc = 0x255c1cu;
    // NOP
label_255c20:
    // 0x255c20: 0x40400000  cfc0        $zero, Index
    ctx->pc = 0x255c20u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x255C20 raw=0x40400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255c24:
    // 0x255c24: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x255c24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255c28:
    // 0x255c28: 0x3f000000  .word       0x3F000000                   # lui         $zero, 0x0 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255c28u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255c2c:
    // 0x255c2c: 0x0  nop
    ctx->pc = 0x255c2cu;
    // NOP
label_255c30:
    // 0x255c30: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255c30u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255c34:
    // 0x255c34: 0xc0c00000  ll          $zero, 0x0($a2)
    ctx->pc = 0x255c34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255c38:
    // 0x255c38: 0x40400000  cfc0        $zero, Index
    ctx->pc = 0x255c38u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x255C38 raw=0x40400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255c3c:
    // 0x255c3c: 0x0  nop
    ctx->pc = 0x255c3cu;
    // NOP
label_255c40:
    // 0x255c40: 0xc0200000  ll          $zero, 0x0($at)
    ctx->pc = 0x255c40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255c44:
    // 0x255c44: 0xc1000000  ll          $zero, 0x0($t0)
    ctx->pc = 0x255c44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255c48:
    // 0x255c48: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x255c48u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_255c4c:
    // 0x255c4c: 0x0  nop
    ctx->pc = 0x255c4cu;
    // NOP
label_255c50:
    // 0x255c50: 0xbf000000  cache       0x00, 0x0($t8)
    ctx->pc = 0x255c50u;
    // CACHE instruction (ignored)
label_255c54:
    // 0x255c54: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x255c54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255c58:
    // 0x255c58: 0x40200000  dmfc0       $zero, Index
    ctx->pc = 0x255c58u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x255C58 raw=0x40200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255c5c:
    // 0x255c5c: 0x0  nop
    ctx->pc = 0x255c5cu;
    // NOP
label_255c60:
    // 0x255c60: 0xc1f00000  ll          $s0, 0x0($t7)
    ctx->pc = 0x255c60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255c64:
    // 0x255c64: 0xc2340000  ll          $s4, 0x0($s1)
    ctx->pc = 0x255c64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); SET_GPR_S32(ctx, 20, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255c68:
    // 0x255c68: 0xc12ccccd  ll          $t4, -0x3333($t1)
    ctx->pc = 0x255c68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 4294954189); SET_GPR_S32(ctx, 12, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255c6c:
    // 0x255c6c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255c6cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255c70:
    // 0x255c70: 0xc14b3333  ll          $t3, 0x3333($t2)
    ctx->pc = 0x255c70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 13107); SET_GPR_S32(ctx, 11, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255c74:
    // 0x255c74: 0xc2a76666  ll          $a3, 0x6666($s5)
    ctx->pc = 0x255c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 26214); SET_GPR_S32(ctx, 7, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255c78:
    // 0x255c78: 0xc1cf3333  ll          $t7, 0x3333($t6)
    ctx->pc = 0x255c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 13107); SET_GPR_S32(ctx, 15, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255c7c:
    // 0x255c7c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255c7cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255c80:
    // 0x255c80: 0x410ccccd  .word       0x410CCCCD                   # INVALID     $t0, $t4, -0x3333 # 00000000 <InstrIdType: CPU_COP0_BC0>
    ctx->pc = 0x255c80u;
    // BC0 (Condition: 0xC) - Handled by branch logic
label_255c84:
    // 0x255c84: 0xc1f33333  ll          $s3, 0x3333($t7)
    ctx->pc = 0x255c84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 13107); SET_GPR_S32(ctx, 19, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255c88:
    // 0x255c88: 0xc1e0cccd  ll          $zero, -0x3333($t7)
    ctx->pc = 0x255c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 4294954189); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255c8c:
    // 0x255c8c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255c8cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255c90:
    // 0x255c90: 0x41d4cccd  .word       0x41D4CCCD                   # INVALID     $t6, $s4, -0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255c90u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x255C90 raw=0x41D4CCCD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255c94:
    // 0x255c94: 0xc2b53333  ll          $s5, 0x3333($s5)
    ctx->pc = 0x255c94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 13107); SET_GPR_S32(ctx, 21, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255c98:
    // 0x255c98: 0xc09ccccd  ll          $gp, -0x3333($a0)
    ctx->pc = 0x255c98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294954189); SET_GPR_S32(ctx, 28, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255c9c:
    // 0x255c9c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255c9cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255ca0:
    // 0x255ca0: 0x41b9999a  .word       0x41B9999A                   # INVALID     $t5, $t9, -0x6666 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255ca0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x255CA0 raw=0x41B9999A"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255ca4:
    // 0x255ca4: 0xc18c0000  ll          $t4, 0x0($t4)
    ctx->pc = 0x255ca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 12, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255ca8:
    // 0x255ca8: 0x4039999a  .word       0x4039999A                   # dmfc0       $t9, WatchHi # 0000019A <InstrIdType: R5900_COP0>
    ctx->pc = 0x255ca8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x255CA8 raw=0x4039999A"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255cac:
    // 0x255cac: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255cacu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255cb0:
    // 0x255cb0: 0x41e26666  .word       0x41E26666                   # INVALID     $t7, $v0, 0x6666 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255cb0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x255CB0 raw=0x41E26666"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255cb4:
    // 0x255cb4: 0xc2746666  ll          $s4, 0x6666($s3)
    ctx->pc = 0x255cb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26214); SET_GPR_S32(ctx, 20, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255cb8:
    // 0x255cb8: 0x40d9999a  .word       0x40D9999A                   # ctc0        $t9, WatchHi # 0000019A <InstrIdType: R5900_COP0>
    ctx->pc = 0x255cb8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x255CB8 raw=0x40D9999A"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255cbc:
    // 0x255cbc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255cbcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255cc0:
    // 0x255cc0: 0xc181999a  ll          $at, -0x6666($t4)
    ctx->pc = 0x255cc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 4294941082); SET_GPR_S32(ctx, 1, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255cc4:
    // 0x255cc4: 0xc29e999a  ll          $fp, -0x6666($s4)
    ctx->pc = 0x255cc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4294941082); SET_GPR_S32(ctx, 30, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255cc8:
    // 0x255cc8: 0x41ae6666  .word       0x41AE6666                   # INVALID     $t5, $t6, 0x6666 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255cc8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x255CC8 raw=0x41AE6666"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255ccc:
    // 0x255ccc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255cccu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255cd0:
    // 0x255cd0: 0xc0c00000  ll          $zero, 0x0($a2)
    ctx->pc = 0x255cd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255cd4:
    // 0x255cd4: 0xc1d0cccd  ll          $s0, -0x3333($t6)
    ctx->pc = 0x255cd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294954189); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    ctx->pc = 0x255cd8u;
    return;
}
