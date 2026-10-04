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

// Function: FUN_0019b6a8
// Address: 0x19b6a8 - 0x29b6b0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b6a8_part347(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2445c8u: goto label_2445c8;
        case 0x2445ccu: goto label_2445cc;
        case 0x2445d0u: goto label_2445d0;
        case 0x2445d4u: goto label_2445d4;
        case 0x2445d8u: goto label_2445d8;
        case 0x2445dcu: goto label_2445dc;
        case 0x2445e0u: goto label_2445e0;
        case 0x2445e4u: goto label_2445e4;
        case 0x2445e8u: goto label_2445e8;
        case 0x2445ecu: goto label_2445ec;
        case 0x2445f0u: goto label_2445f0;
        case 0x2445f4u: goto label_2445f4;
        case 0x2445f8u: goto label_2445f8;
        case 0x2445fcu: goto label_2445fc;
        case 0x244600u: goto label_244600;
        case 0x244604u: goto label_244604;
        case 0x244608u: goto label_244608;
        case 0x24460cu: goto label_24460c;
        case 0x244610u: goto label_244610;
        case 0x244614u: goto label_244614;
        case 0x244618u: goto label_244618;
        case 0x24461cu: goto label_24461c;
        case 0x244620u: goto label_244620;
        case 0x244624u: goto label_244624;
        case 0x244628u: goto label_244628;
        case 0x24462cu: goto label_24462c;
        case 0x244630u: goto label_244630;
        case 0x244634u: goto label_244634;
        case 0x244638u: goto label_244638;
        case 0x24463cu: goto label_24463c;
        case 0x244640u: goto label_244640;
        case 0x244644u: goto label_244644;
        case 0x244648u: goto label_244648;
        case 0x24464cu: goto label_24464c;
        case 0x244650u: goto label_244650;
        case 0x244654u: goto label_244654;
        case 0x244658u: goto label_244658;
        case 0x24465cu: goto label_24465c;
        case 0x244660u: goto label_244660;
        case 0x244664u: goto label_244664;
        case 0x244668u: goto label_244668;
        case 0x24466cu: goto label_24466c;
        case 0x244670u: goto label_244670;
        case 0x244674u: goto label_244674;
        case 0x244678u: goto label_244678;
        case 0x24467cu: goto label_24467c;
        case 0x244680u: goto label_244680;
        case 0x244684u: goto label_244684;
        case 0x244688u: goto label_244688;
        case 0x24468cu: goto label_24468c;
        case 0x244690u: goto label_244690;
        case 0x244694u: goto label_244694;
        case 0x244698u: goto label_244698;
        case 0x24469cu: goto label_24469c;
        case 0x2446a0u: goto label_2446a0;
        case 0x2446a4u: goto label_2446a4;
        case 0x2446a8u: goto label_2446a8;
        case 0x2446acu: goto label_2446ac;
        case 0x2446b0u: goto label_2446b0;
        case 0x2446b4u: goto label_2446b4;
        case 0x2446b8u: goto label_2446b8;
        case 0x2446bcu: goto label_2446bc;
        case 0x2446c0u: goto label_2446c0;
        case 0x2446c4u: goto label_2446c4;
        case 0x2446c8u: goto label_2446c8;
        case 0x2446ccu: goto label_2446cc;
        case 0x2446d0u: goto label_2446d0;
        case 0x2446d4u: goto label_2446d4;
        case 0x2446d8u: goto label_2446d8;
        case 0x2446dcu: goto label_2446dc;
        case 0x2446e0u: goto label_2446e0;
        case 0x2446e4u: goto label_2446e4;
        case 0x2446e8u: goto label_2446e8;
        case 0x2446ecu: goto label_2446ec;
        case 0x2446f0u: goto label_2446f0;
        case 0x2446f4u: goto label_2446f4;
        case 0x2446f8u: goto label_2446f8;
        case 0x2446fcu: goto label_2446fc;
        case 0x244700u: goto label_244700;
        case 0x244704u: goto label_244704;
        case 0x244708u: goto label_244708;
        case 0x24470cu: goto label_24470c;
        case 0x244710u: goto label_244710;
        case 0x244714u: goto label_244714;
        case 0x244718u: goto label_244718;
        case 0x24471cu: goto label_24471c;
        case 0x244720u: goto label_244720;
        case 0x244724u: goto label_244724;
        case 0x244728u: goto label_244728;
        case 0x24472cu: goto label_24472c;
        case 0x244730u: goto label_244730;
        case 0x244734u: goto label_244734;
        case 0x244738u: goto label_244738;
        case 0x24473cu: goto label_24473c;
        case 0x244740u: goto label_244740;
        case 0x244744u: goto label_244744;
        case 0x244748u: goto label_244748;
        case 0x24474cu: goto label_24474c;
        case 0x244750u: goto label_244750;
        case 0x244754u: goto label_244754;
        case 0x244758u: goto label_244758;
        case 0x24475cu: goto label_24475c;
        case 0x244760u: goto label_244760;
        case 0x244764u: goto label_244764;
        case 0x244768u: goto label_244768;
        case 0x24476cu: goto label_24476c;
        case 0x244770u: goto label_244770;
        case 0x244774u: goto label_244774;
        case 0x244778u: goto label_244778;
        case 0x24477cu: goto label_24477c;
        case 0x244780u: goto label_244780;
        case 0x244784u: goto label_244784;
        case 0x244788u: goto label_244788;
        case 0x24478cu: goto label_24478c;
        case 0x244790u: goto label_244790;
        case 0x244794u: goto label_244794;
        case 0x244798u: goto label_244798;
        case 0x24479cu: goto label_24479c;
        case 0x2447a0u: goto label_2447a0;
        case 0x2447a4u: goto label_2447a4;
        case 0x2447a8u: goto label_2447a8;
        case 0x2447acu: goto label_2447ac;
        case 0x2447b0u: goto label_2447b0;
        case 0x2447b4u: goto label_2447b4;
        case 0x2447b8u: goto label_2447b8;
        case 0x2447bcu: goto label_2447bc;
        case 0x2447c0u: goto label_2447c0;
        case 0x2447c4u: goto label_2447c4;
        case 0x2447c8u: goto label_2447c8;
        case 0x2447ccu: goto label_2447cc;
        case 0x2447d0u: goto label_2447d0;
        case 0x2447d4u: goto label_2447d4;
        case 0x2447d8u: goto label_2447d8;
        case 0x2447dcu: goto label_2447dc;
        case 0x2447e0u: goto label_2447e0;
        case 0x2447e4u: goto label_2447e4;
        case 0x2447e8u: goto label_2447e8;
        case 0x2447ecu: goto label_2447ec;
        case 0x2447f0u: goto label_2447f0;
        case 0x2447f4u: goto label_2447f4;
        case 0x2447f8u: goto label_2447f8;
        case 0x2447fcu: goto label_2447fc;
        case 0x244800u: goto label_244800;
        case 0x244804u: goto label_244804;
        case 0x244808u: goto label_244808;
        case 0x24480cu: goto label_24480c;
        case 0x244810u: goto label_244810;
        case 0x244814u: goto label_244814;
        case 0x244818u: goto label_244818;
        case 0x24481cu: goto label_24481c;
        case 0x244820u: goto label_244820;
        case 0x244824u: goto label_244824;
        case 0x244828u: goto label_244828;
        case 0x24482cu: goto label_24482c;
        case 0x244830u: goto label_244830;
        case 0x244834u: goto label_244834;
        case 0x244838u: goto label_244838;
        case 0x24483cu: goto label_24483c;
        case 0x244840u: goto label_244840;
        case 0x244844u: goto label_244844;
        case 0x244848u: goto label_244848;
        case 0x24484cu: goto label_24484c;
        case 0x244850u: goto label_244850;
        case 0x244854u: goto label_244854;
        case 0x244858u: goto label_244858;
        case 0x24485cu: goto label_24485c;
        case 0x244860u: goto label_244860;
        case 0x244864u: goto label_244864;
        case 0x244868u: goto label_244868;
        case 0x24486cu: goto label_24486c;
        case 0x244870u: goto label_244870;
        case 0x244874u: goto label_244874;
        case 0x244878u: goto label_244878;
        case 0x24487cu: goto label_24487c;
        case 0x244880u: goto label_244880;
        case 0x244884u: goto label_244884;
        case 0x244888u: goto label_244888;
        case 0x24488cu: goto label_24488c;
        case 0x244890u: goto label_244890;
        case 0x244894u: goto label_244894;
        case 0x244898u: goto label_244898;
        case 0x24489cu: goto label_24489c;
        case 0x2448a0u: goto label_2448a0;
        case 0x2448a4u: goto label_2448a4;
        case 0x2448a8u: goto label_2448a8;
        case 0x2448acu: goto label_2448ac;
        case 0x2448b0u: goto label_2448b0;
        case 0x2448b4u: goto label_2448b4;
        case 0x2448b8u: goto label_2448b8;
        case 0x2448bcu: goto label_2448bc;
        case 0x2448c0u: goto label_2448c0;
        case 0x2448c4u: goto label_2448c4;
        case 0x2448c8u: goto label_2448c8;
        case 0x2448ccu: goto label_2448cc;
        case 0x2448d0u: goto label_2448d0;
        case 0x2448d4u: goto label_2448d4;
        case 0x2448d8u: goto label_2448d8;
        case 0x2448dcu: goto label_2448dc;
        case 0x2448e0u: goto label_2448e0;
        case 0x2448e4u: goto label_2448e4;
        case 0x2448e8u: goto label_2448e8;
        case 0x2448ecu: goto label_2448ec;
        case 0x2448f0u: goto label_2448f0;
        case 0x2448f4u: goto label_2448f4;
        case 0x2448f8u: goto label_2448f8;
        case 0x2448fcu: goto label_2448fc;
        case 0x244900u: goto label_244900;
        case 0x244904u: goto label_244904;
        case 0x244908u: goto label_244908;
        case 0x24490cu: goto label_24490c;
        case 0x244910u: goto label_244910;
        case 0x244914u: goto label_244914;
        case 0x244918u: goto label_244918;
        case 0x24491cu: goto label_24491c;
        case 0x244920u: goto label_244920;
        case 0x244924u: goto label_244924;
        case 0x244928u: goto label_244928;
        case 0x24492cu: goto label_24492c;
        case 0x244930u: goto label_244930;
        case 0x244934u: goto label_244934;
        case 0x244938u: goto label_244938;
        case 0x24493cu: goto label_24493c;
        case 0x244940u: goto label_244940;
        case 0x244944u: goto label_244944;
        case 0x244948u: goto label_244948;
        case 0x24494cu: goto label_24494c;
        case 0x244950u: goto label_244950;
        case 0x244954u: goto label_244954;
        case 0x244958u: goto label_244958;
        case 0x24495cu: goto label_24495c;
        case 0x244960u: goto label_244960;
        case 0x244964u: goto label_244964;
        case 0x244968u: goto label_244968;
        case 0x24496cu: goto label_24496c;
        case 0x244970u: goto label_244970;
        case 0x244974u: goto label_244974;
        case 0x244978u: goto label_244978;
        case 0x24497cu: goto label_24497c;
        case 0x244980u: goto label_244980;
        case 0x244984u: goto label_244984;
        case 0x244988u: goto label_244988;
        case 0x24498cu: goto label_24498c;
        case 0x244990u: goto label_244990;
        case 0x244994u: goto label_244994;
        case 0x244998u: goto label_244998;
        case 0x24499cu: goto label_24499c;
        case 0x2449a0u: goto label_2449a0;
        case 0x2449a4u: goto label_2449a4;
        case 0x2449a8u: goto label_2449a8;
        case 0x2449acu: goto label_2449ac;
        case 0x2449b0u: goto label_2449b0;
        case 0x2449b4u: goto label_2449b4;
        case 0x2449b8u: goto label_2449b8;
        case 0x2449bcu: goto label_2449bc;
        case 0x2449c0u: goto label_2449c0;
        case 0x2449c4u: goto label_2449c4;
        case 0x2449c8u: goto label_2449c8;
        case 0x2449ccu: goto label_2449cc;
        case 0x2449d0u: goto label_2449d0;
        case 0x2449d4u: goto label_2449d4;
        case 0x2449d8u: goto label_2449d8;
        case 0x2449dcu: goto label_2449dc;
        case 0x2449e0u: goto label_2449e0;
        case 0x2449e4u: goto label_2449e4;
        case 0x2449e8u: goto label_2449e8;
        case 0x2449ecu: goto label_2449ec;
        case 0x2449f0u: goto label_2449f0;
        case 0x2449f4u: goto label_2449f4;
        case 0x2449f8u: goto label_2449f8;
        case 0x2449fcu: goto label_2449fc;
        case 0x244a00u: goto label_244a00;
        case 0x244a04u: goto label_244a04;
        case 0x244a08u: goto label_244a08;
        case 0x244a0cu: goto label_244a0c;
        case 0x244a10u: goto label_244a10;
        case 0x244a14u: goto label_244a14;
        case 0x244a18u: goto label_244a18;
        case 0x244a1cu: goto label_244a1c;
        case 0x244a20u: goto label_244a20;
        case 0x244a24u: goto label_244a24;
        case 0x244a28u: goto label_244a28;
        case 0x244a2cu: goto label_244a2c;
        case 0x244a30u: goto label_244a30;
        case 0x244a34u: goto label_244a34;
        case 0x244a38u: goto label_244a38;
        case 0x244a3cu: goto label_244a3c;
        case 0x244a40u: goto label_244a40;
        case 0x244a44u: goto label_244a44;
        case 0x244a48u: goto label_244a48;
        case 0x244a4cu: goto label_244a4c;
        case 0x244a50u: goto label_244a50;
        case 0x244a54u: goto label_244a54;
        case 0x244a58u: goto label_244a58;
        case 0x244a5cu: goto label_244a5c;
        case 0x244a60u: goto label_244a60;
        case 0x244a64u: goto label_244a64;
        case 0x244a68u: goto label_244a68;
        case 0x244a6cu: goto label_244a6c;
        case 0x244a70u: goto label_244a70;
        case 0x244a74u: goto label_244a74;
        case 0x244a78u: goto label_244a78;
        case 0x244a7cu: goto label_244a7c;
        case 0x244a80u: goto label_244a80;
        case 0x244a84u: goto label_244a84;
        case 0x244a88u: goto label_244a88;
        case 0x244a8cu: goto label_244a8c;
        case 0x244a90u: goto label_244a90;
        case 0x244a94u: goto label_244a94;
        case 0x244a98u: goto label_244a98;
        case 0x244a9cu: goto label_244a9c;
        case 0x244aa0u: goto label_244aa0;
        case 0x244aa4u: goto label_244aa4;
        case 0x244aa8u: goto label_244aa8;
        case 0x244aacu: goto label_244aac;
        case 0x244ab0u: goto label_244ab0;
        case 0x244ab4u: goto label_244ab4;
        case 0x244ab8u: goto label_244ab8;
        case 0x244abcu: goto label_244abc;
        case 0x244ac0u: goto label_244ac0;
        case 0x244ac4u: goto label_244ac4;
        case 0x244ac8u: goto label_244ac8;
        case 0x244accu: goto label_244acc;
        case 0x244ad0u: goto label_244ad0;
        case 0x244ad4u: goto label_244ad4;
        case 0x244ad8u: goto label_244ad8;
        case 0x244adcu: goto label_244adc;
        case 0x244ae0u: goto label_244ae0;
        case 0x244ae4u: goto label_244ae4;
        case 0x244ae8u: goto label_244ae8;
        case 0x244aecu: goto label_244aec;
        case 0x244af0u: goto label_244af0;
        case 0x244af4u: goto label_244af4;
        case 0x244af8u: goto label_244af8;
        case 0x244afcu: goto label_244afc;
        case 0x244b00u: goto label_244b00;
        case 0x244b04u: goto label_244b04;
        case 0x244b08u: goto label_244b08;
        case 0x244b0cu: goto label_244b0c;
        case 0x244b10u: goto label_244b10;
        case 0x244b14u: goto label_244b14;
        case 0x244b18u: goto label_244b18;
        case 0x244b1cu: goto label_244b1c;
        case 0x244b20u: goto label_244b20;
        case 0x244b24u: goto label_244b24;
        case 0x244b28u: goto label_244b28;
        case 0x244b2cu: goto label_244b2c;
        case 0x244b30u: goto label_244b30;
        case 0x244b34u: goto label_244b34;
        case 0x244b38u: goto label_244b38;
        case 0x244b3cu: goto label_244b3c;
        case 0x244b40u: goto label_244b40;
        case 0x244b44u: goto label_244b44;
        case 0x244b48u: goto label_244b48;
        case 0x244b4cu: goto label_244b4c;
        case 0x244b50u: goto label_244b50;
        case 0x244b54u: goto label_244b54;
        case 0x244b58u: goto label_244b58;
        case 0x244b5cu: goto label_244b5c;
        case 0x244b60u: goto label_244b60;
        case 0x244b64u: goto label_244b64;
        case 0x244b68u: goto label_244b68;
        case 0x244b6cu: goto label_244b6c;
        case 0x244b70u: goto label_244b70;
        case 0x244b74u: goto label_244b74;
        case 0x244b78u: goto label_244b78;
        case 0x244b7cu: goto label_244b7c;
        case 0x244b80u: goto label_244b80;
        case 0x244b84u: goto label_244b84;
        case 0x244b88u: goto label_244b88;
        case 0x244b8cu: goto label_244b8c;
        case 0x244b90u: goto label_244b90;
        case 0x244b94u: goto label_244b94;
        case 0x244b98u: goto label_244b98;
        case 0x244b9cu: goto label_244b9c;
        case 0x244ba0u: goto label_244ba0;
        case 0x244ba4u: goto label_244ba4;
        case 0x244ba8u: goto label_244ba8;
        case 0x244bacu: goto label_244bac;
        case 0x244bb0u: goto label_244bb0;
        case 0x244bb4u: goto label_244bb4;
        case 0x244bb8u: goto label_244bb8;
        case 0x244bbcu: goto label_244bbc;
        case 0x244bc0u: goto label_244bc0;
        case 0x244bc4u: goto label_244bc4;
        case 0x244bc8u: goto label_244bc8;
        case 0x244bccu: goto label_244bcc;
        case 0x244bd0u: goto label_244bd0;
        case 0x244bd4u: goto label_244bd4;
        case 0x244bd8u: goto label_244bd8;
        case 0x244bdcu: goto label_244bdc;
        case 0x244be0u: goto label_244be0;
        case 0x244be4u: goto label_244be4;
        case 0x244be8u: goto label_244be8;
        case 0x244becu: goto label_244bec;
        case 0x244bf0u: goto label_244bf0;
        case 0x244bf4u: goto label_244bf4;
        case 0x244bf8u: goto label_244bf8;
        case 0x244bfcu: goto label_244bfc;
        case 0x244c00u: goto label_244c00;
        case 0x244c04u: goto label_244c04;
        case 0x244c08u: goto label_244c08;
        case 0x244c0cu: goto label_244c0c;
        case 0x244c10u: goto label_244c10;
        case 0x244c14u: goto label_244c14;
        case 0x244c18u: goto label_244c18;
        case 0x244c1cu: goto label_244c1c;
        case 0x244c20u: goto label_244c20;
        case 0x244c24u: goto label_244c24;
        case 0x244c28u: goto label_244c28;
        case 0x244c2cu: goto label_244c2c;
        case 0x244c30u: goto label_244c30;
        case 0x244c34u: goto label_244c34;
        case 0x244c38u: goto label_244c38;
        case 0x244c3cu: goto label_244c3c;
        case 0x244c40u: goto label_244c40;
        case 0x244c44u: goto label_244c44;
        case 0x244c48u: goto label_244c48;
        case 0x244c4cu: goto label_244c4c;
        case 0x244c50u: goto label_244c50;
        case 0x244c54u: goto label_244c54;
        case 0x244c58u: goto label_244c58;
        case 0x244c5cu: goto label_244c5c;
        case 0x244c60u: goto label_244c60;
        case 0x244c64u: goto label_244c64;
        case 0x244c68u: goto label_244c68;
        case 0x244c6cu: goto label_244c6c;
        case 0x244c70u: goto label_244c70;
        case 0x244c74u: goto label_244c74;
        case 0x244c78u: goto label_244c78;
        case 0x244c7cu: goto label_244c7c;
        case 0x244c80u: goto label_244c80;
        case 0x244c84u: goto label_244c84;
        case 0x244c88u: goto label_244c88;
        case 0x244c8cu: goto label_244c8c;
        case 0x244c90u: goto label_244c90;
        case 0x244c94u: goto label_244c94;
        case 0x244c98u: goto label_244c98;
        case 0x244c9cu: goto label_244c9c;
        case 0x244ca0u: goto label_244ca0;
        case 0x244ca4u: goto label_244ca4;
        case 0x244ca8u: goto label_244ca8;
        case 0x244cacu: goto label_244cac;
        case 0x244cb0u: goto label_244cb0;
        case 0x244cb4u: goto label_244cb4;
        case 0x244cb8u: goto label_244cb8;
        case 0x244cbcu: goto label_244cbc;
        case 0x244cc0u: goto label_244cc0;
        case 0x244cc4u: goto label_244cc4;
        case 0x244cc8u: goto label_244cc8;
        case 0x244cccu: goto label_244ccc;
        case 0x244cd0u: goto label_244cd0;
        case 0x244cd4u: goto label_244cd4;
        case 0x244cd8u: goto label_244cd8;
        case 0x244cdcu: goto label_244cdc;
        case 0x244ce0u: goto label_244ce0;
        case 0x244ce4u: goto label_244ce4;
        case 0x244ce8u: goto label_244ce8;
        case 0x244cecu: goto label_244cec;
        case 0x244cf0u: goto label_244cf0;
        case 0x244cf4u: goto label_244cf4;
        case 0x244cf8u: goto label_244cf8;
        case 0x244cfcu: goto label_244cfc;
        case 0x244d00u: goto label_244d00;
        case 0x244d04u: goto label_244d04;
        case 0x244d08u: goto label_244d08;
        case 0x244d0cu: goto label_244d0c;
        case 0x244d10u: goto label_244d10;
        case 0x244d14u: goto label_244d14;
        case 0x244d18u: goto label_244d18;
        case 0x244d1cu: goto label_244d1c;
        case 0x244d20u: goto label_244d20;
        case 0x244d24u: goto label_244d24;
        case 0x244d28u: goto label_244d28;
        case 0x244d2cu: goto label_244d2c;
        case 0x244d30u: goto label_244d30;
        case 0x244d34u: goto label_244d34;
        case 0x244d38u: goto label_244d38;
        case 0x244d3cu: goto label_244d3c;
        case 0x244d40u: goto label_244d40;
        case 0x244d44u: goto label_244d44;
        case 0x244d48u: goto label_244d48;
        case 0x244d4cu: goto label_244d4c;
        case 0x244d50u: goto label_244d50;
        case 0x244d54u: goto label_244d54;
        case 0x244d58u: goto label_244d58;
        case 0x244d5cu: goto label_244d5c;
        case 0x244d60u: goto label_244d60;
        case 0x244d64u: goto label_244d64;
        case 0x244d68u: goto label_244d68;
        case 0x244d6cu: goto label_244d6c;
        case 0x244d70u: goto label_244d70;
        case 0x244d74u: goto label_244d74;
        case 0x244d78u: goto label_244d78;
        case 0x244d7cu: goto label_244d7c;
        case 0x244d80u: goto label_244d80;
        case 0x244d84u: goto label_244d84;
        case 0x244d88u: goto label_244d88;
        case 0x244d8cu: goto label_244d8c;
        case 0x244d90u: goto label_244d90;
        case 0x244d94u: goto label_244d94;
        default: return;
    }

label_2445c8:
    if (ctx->pc == 0x2445C8u) {
        ctx->pc = 0x2445CCu;
        goto label_2445cc;
    }
    ctx->pc = 0x2445C4u;
    {
        const bool branch_taken_0x2445c4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x2445c4) {
            ctx->pc = 0x2445D4u;
            goto label_2445d4;
        }
    }
    ctx->pc = 0x2445CCu;
label_2445cc:
    // 0x2445cc: 0x10000011  b           . + 4 + (0x11 << 2)
label_2445d0:
    if (ctx->pc == 0x2445D0u) {
        ctx->pc = 0x2445D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2445CCu;
        // 0x2445d0: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2445D4u;
        goto label_2445d4;
    }
    ctx->pc = 0x2445CCu;
    {
        const bool branch_taken_0x2445cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2445D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2445CCu;
        // 0x2445d0: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2445cc) {
            ctx->pc = 0x244614u;
            goto label_244614;
        }
    }
    ctx->pc = 0x2445D4u;
label_2445d4:
    // 0x2445d4: 0x90650008  lbu         $a1, 0x8($v1)
    ctx->pc = 0x2445d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
label_2445d8:
    // 0x2445d8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2445d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2445dc:
    // 0x2445dc: 0x5200a  movz        $a0, $zero, $a1
    ctx->pc = 0x2445dcu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_2445e0:
    // 0x2445e0: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x2445e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_2445e4:
    // 0x2445e4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2445e4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_2445e8:
    // 0x2445e8: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x2445e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_2445ec:
    // 0x2445ec: 0x44c3c  dsll32      $t1, $a0, 16
    ctx->pc = 0x2445ecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) << (32 + 16));
label_2445f0:
    // 0x2445f0: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x2445f0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
label_2445f4:
    // 0x2445f4: 0x29210064  slti        $at, $t1, 0x64
    ctx->pc = 0x2445f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)100) ? 1 : 0);
label_2445f8:
    // 0x2445f8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2445fc:
    if (ctx->pc == 0x2445FCu) {
        ctx->pc = 0x244600u;
        goto label_244600;
    }
    ctx->pc = 0x2445F8u;
    {
        const bool branch_taken_0x2445f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2445f8) {
            ctx->pc = 0x244608u;
            goto label_244608;
        }
    }
    ctx->pc = 0x244600u;
label_244600:
    // 0x244600: 0x10000003  b           . + 4 + (0x3 << 2)
label_244604:
    if (ctx->pc == 0x244604u) {
        ctx->pc = 0x244604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244600u;
        // 0x244604: 0x9243c  dsll32      $a0, $t1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) << (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244608u;
        goto label_244608;
    }
    ctx->pc = 0x244600u;
    {
        const bool branch_taken_0x244600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244600u;
        // 0x244604: 0x9243c  dsll32      $a0, $t1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244600) {
            ctx->pc = 0x244610u;
            goto label_244610;
        }
    }
    ctx->pc = 0x244608u;
label_244608:
    // 0x244608: 0x24090064  addiu       $t1, $zero, 0x64
    ctx->pc = 0x244608u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_24460c:
    // 0x24460c: 0x9243c  dsll32      $a0, $t1, 16
    ctx->pc = 0x24460cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) << (32 + 16));
label_244610:
    // 0x244610: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x244610u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_244614:
    // 0x244614: 0x43c3c  dsll32      $a3, $a0, 16
    ctx->pc = 0x244614u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << (32 + 16));
label_244618:
    // 0x244618: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x244618u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
label_24461c:
    // 0x24461c: 0x28e1001e  slti        $at, $a3, 0x1E
    ctx->pc = 0x24461cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)30) ? 1 : 0);
label_244620:
    // 0x244620: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_244624:
    if (ctx->pc == 0x244624u) {
        ctx->pc = 0x244628u;
        goto label_244628;
    }
    ctx->pc = 0x244620u;
    {
        const bool branch_taken_0x244620 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x244620) {
            ctx->pc = 0x244634u;
            goto label_244634;
        }
    }
    ctx->pc = 0x244628u;
label_244628:
    // 0x244628: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x244628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_24462c:
    // 0x24462c: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_244630:
    if (ctx->pc == 0x244630u) {
        ctx->pc = 0x244634u;
        goto label_244634;
    }
    ctx->pc = 0x24462Cu;
    {
        const bool branch_taken_0x24462c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24462c) {
            ctx->pc = 0x24467Cu;
            goto label_24467c;
        }
    }
    ctx->pc = 0x244634u;
label_244634:
    // 0x244634: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x244634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_244638:
    // 0x244638: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x244638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_24463c:
    // 0x24463c: 0x3488869f  ori         $t0, $a0, 0x869F
    ctx->pc = 0x24463cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34463);
label_244640:
    // 0x244640: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x244640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_244644:
    // 0x244644: 0x8c24ccf4  lw          $a0, -0x330C($at)
    ctx->pc = 0x244644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954228)));
label_244648:
    // 0x244648: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x244648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_24464c:
    // 0x24464c: 0x53042  srl         $a2, $a1, 1
    ctx->pc = 0x24464cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
label_244650:
    // 0x244650: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x244650u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_244654:
    // 0x244654: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x244654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_244658:
    // 0x244658: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x244658u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_24465c:
    // 0x24465c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x24465cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_244660:
    // 0x244660: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x244660u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_244664:
    // 0x244664: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x244664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_244668:
    // 0x244668: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x244668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_24466c:
    // 0x24466c: 0x88082a  slt         $at, $a0, $t0
    ctx->pc = 0x24466cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_244670:
    // 0x244670: 0x101200a  movz        $a0, $t0, $at
    ctx->pc = 0x244670u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 8));
label_244674:
    // 0x244674: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x244674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_244678:
    // 0x244678: 0xac24ccf4  sw          $a0, -0x330C($at)
    ctx->pc = 0x244678u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954228), GPR_U32(ctx, 4));
label_24467c:
    // 0x24467c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x24467cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_244680:
    // 0x244680: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x244680u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_244684:
    // 0x244684: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x244684u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
label_244688:
    // 0x244688: 0xa460000c  sh          $zero, 0xC($v1)
    ctx->pc = 0x244688u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 0));
label_24468c:
    // 0x24468c: 0xa460000e  sh          $zero, 0xE($v1)
    ctx->pc = 0x24468cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 0));
label_244690:
    // 0x244690: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x244690u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_244694:
    // 0x244694: 0xa0600006  sb          $zero, 0x6($v1)
    ctx->pc = 0x244694u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
label_244698:
    // 0x244698: 0xa0600005  sb          $zero, 0x5($v1)
    ctx->pc = 0x244698u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 0));
label_24469c:
    // 0x24469c: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x24469cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2446a0:
    // 0x2446a0: 0x2881005c  slti        $at, $a0, 0x5C
    ctx->pc = 0x2446a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)92) ? 1 : 0);
label_2446a4:
    // 0x2446a4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_2446a8:
    if (ctx->pc == 0x2446A8u) {
        ctx->pc = 0x2446ACu;
        goto label_2446ac;
    }
    ctx->pc = 0x2446A4u;
    {
        const bool branch_taken_0x2446a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2446a4) {
            ctx->pc = 0x2446C8u;
            goto label_2446c8;
        }
    }
    ctx->pc = 0x2446ACu;
label_2446ac:
    // 0x2446ac: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x2446acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2446b0:
    // 0x2446b0: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x2446b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_2446b4:
    // 0x2446b4: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x2446b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_2446b8:
    // 0x2446b8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2446b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2446bc:
    // 0x2446bc: 0x14a40002  bne         $a1, $a0, . + 4 + (0x2 << 2)
label_2446c0:
    if (ctx->pc == 0x2446C0u) {
        ctx->pc = 0x2446C4u;
        goto label_2446c4;
    }
    ctx->pc = 0x2446BCu;
    {
        const bool branch_taken_0x2446bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x2446bc) {
            ctx->pc = 0x2446C8u;
            goto label_2446c8;
        }
    }
    ctx->pc = 0x2446C4u;
label_2446c4:
    // 0x2446c4: 0xa0600006  sb          $zero, 0x6($v1)
    ctx->pc = 0x2446c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
label_2446c8:
    // 0x2446c8: 0x90640002  lbu         $a0, 0x2($v1)
    ctx->pc = 0x2446c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2446cc:
    // 0x2446cc: 0x28810050  slti        $at, $a0, 0x50
    ctx->pc = 0x2446ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)80) ? 1 : 0);
label_2446d0:
    // 0x2446d0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2446d4:
    if (ctx->pc == 0x2446D4u) {
        ctx->pc = 0x2446D8u;
        goto label_2446d8;
    }
    ctx->pc = 0x2446D0u;
    {
        const bool branch_taken_0x2446d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2446d0) {
            ctx->pc = 0x2446E0u;
            goto label_2446e0;
        }
    }
    ctx->pc = 0x2446D8u;
label_2446d8:
    // 0x2446d8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2446d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2446dc:
    // 0x2446dc: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2446dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_2446e0:
    // 0x2446e0: 0x90640004  lbu         $a0, 0x4($v1)
    ctx->pc = 0x2446e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_2446e4:
    // 0x2446e4: 0x28810041  slti        $at, $a0, 0x41
    ctx->pc = 0x2446e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)65) ? 1 : 0);
label_2446e8:
    // 0x2446e8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2446ec:
    if (ctx->pc == 0x2446ECu) {
        ctx->pc = 0x2446F0u;
        goto label_2446f0;
    }
    ctx->pc = 0x2446E8u;
    {
        const bool branch_taken_0x2446e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2446e8) {
            ctx->pc = 0x2446F8u;
            goto label_2446f8;
        }
    }
    ctx->pc = 0x2446F0u;
label_2446f0:
    // 0x2446f0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2446f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2446f4:
    // 0x2446f4: 0xa0640004  sb          $a0, 0x4($v1)
    ctx->pc = 0x2446f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 4));
label_2446f8:
    // 0x2446f8: 0x3e00008  jr          $ra
label_2446fc:
    if (ctx->pc == 0x2446FCu) {
        ctx->pc = 0x244700u;
        goto label_244700;
    }
    ctx->pc = 0x2446F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2446F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244700u;
label_244700:
    // 0x244700: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x244700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_244704:
    // 0x244704: 0x7082a  slt         $at, $zero, $a3
    ctx->pc = 0x244704u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_244708:
    // 0x244708: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x244708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_24470c:
    // 0x24470c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x24470cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_244710:
    // 0x244710: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x244710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_244714:
    // 0x244714: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x244714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_244718:
    // 0x244718: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x244718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_24471c:
    // 0x24471c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24471cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_244720:
    // 0x244720: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x244720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_244724:
    // 0x244724: 0x1020009c  beqz        $at, . + 4 + (0x9C << 2)
label_244728:
    if (ctx->pc == 0x244728u) {
        ctx->pc = 0x244728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244724u;
        // 0x244728: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24472Cu;
        goto label_24472c;
    }
    ctx->pc = 0x244724u;
    {
        const bool branch_taken_0x244724 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x244728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244724u;
        // 0x244728: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244724) {
            ctx->pc = 0x244998u;
            goto label_244998;
        }
    }
    ctx->pc = 0x24472Cu;
label_24472c:
    // 0x24472c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x24472cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244730:
    // 0x244730: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x244730u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244734:
    // 0x244734: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x244734u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244738:
    // 0x244738: 0x478c0  sll         $t7, $a0, 3
    ctx->pc = 0x244738u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_24473c:
    // 0x24473c: 0x1486823  subu        $t5, $t2, $t0
    ctx->pc = 0x24473cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
label_244740:
    // 0x244740: 0x1e42023  subu        $a0, $t7, $a0
    ctx->pc = 0x244740u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
label_244744:
    // 0x244744: 0x2559fff6  addiu       $t9, $t2, -0xA
    ctx->pc = 0x244744u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967286));
label_244748:
    // 0x244748: 0x3c0a6666  lui         $t2, 0x6666
    ctx->pc = 0x244748u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)26214 << 16));
label_24474c:
    // 0x24474c: 0xd69c0  sll         $t5, $t5, 7
    ctx->pc = 0x24474cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 7));
label_244750:
    // 0x244750: 0x47940  sll         $t7, $a0, 5
    ctx->pc = 0x244750u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_244754:
    // 0x244754: 0x240e00b0  addiu       $t6, $zero, 0xB0
    ctx->pc = 0x244754u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_244758:
    // 0x244758: 0x24180076  addiu       $t8, $zero, 0x76
    ctx->pc = 0x244758u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_24475c:
    // 0x24475c: 0xd27c2  srl         $a0, $t5, 31
    ctx->pc = 0x24475cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 13), 31));
label_244760:
    // 0x244760: 0x354a6667  ori         $t2, $t2, 0x6667
    ctx->pc = 0x244760u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)26215);
label_244764:
    // 0x244764: 0x119082a  slt         $at, $t0, $t9
    ctx->pc = 0x244764u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
label_244768:
    // 0x244768: 0x1020007a  beqz        $at, . + 4 + (0x7A << 2)
label_24476c:
    if (ctx->pc == 0x24476Cu) {
        ctx->pc = 0x24476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244768u;
        // 0x24476c: 0x103a823  subu        $s5, $t0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244770u;
        goto label_244770;
    }
    ctx->pc = 0x244768u;
    {
        const bool branch_taken_0x244768 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244768u;
        // 0x24476c: 0x103a823  subu        $s5, $t0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244768) {
            ctx->pc = 0x244954u;
            goto label_244954;
        }
    }
    ctx->pc = 0x244770u;
label_244770:
    // 0x244770: 0x6a10006  bgez        $s5, . + 4 + (0x6 << 2)
label_244774:
    if (ctx->pc == 0x244774u) {
        ctx->pc = 0x244774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244770u;
        // 0x244774: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244778u;
        goto label_244778;
    }
    ctx->pc = 0x244770u;
    {
        const bool branch_taken_0x244770 = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x244774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244770u;
        // 0x244774: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244770) {
            ctx->pc = 0x24478Cu;
            goto label_24478c;
        }
    }
    ctx->pc = 0x244778u;
label_244778:
    // 0x244778: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x244778u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24477c:
    // 0x24477c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x24477cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244780:
    // 0x244780: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x244780u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244784:
    // 0x244784: 0x10000063  b           . + 4 + (0x63 << 2)
label_244788:
    if (ctx->pc == 0x244788u) {
        ctx->pc = 0x244788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244784u;
        // 0x244788: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24478Cu;
        goto label_24478c;
    }
    ctx->pc = 0x244784u;
    {
        const bool branch_taken_0x244784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244784u;
        // 0x244788: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244784) {
            ctx->pc = 0x244914u;
            goto label_244914;
        }
    }
    ctx->pc = 0x24478Cu;
label_24478c:
    // 0x24478c: 0x0  nop
    ctx->pc = 0x24478cu;
    // NOP
label_244790:
    // 0x244790: 0x2a9082a  slt         $at, $s5, $t1
    ctx->pc = 0x244790u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_244794:
    // 0x244794: 0x10200053  beqz        $at, . + 4 + (0x53 << 2)
label_244798:
    if (ctx->pc == 0x244798u) {
        ctx->pc = 0x24479Cu;
        goto label_24479c;
    }
    ctx->pc = 0x244794u;
    {
        const bool branch_taken_0x244794 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x244794) {
            ctx->pc = 0x2448E4u;
            goto label_2448e4;
        }
    }
    ctx->pc = 0x24479Cu;
label_24479c:
    // 0x24479c: 0x10a00026  beqz        $a1, . + 4 + (0x26 << 2)
label_2447a0:
    if (ctx->pc == 0x2447A0u) {
        ctx->pc = 0x2447A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24479Cu;
        // 0x2447a0: 0x1358823  subu        $s1, $t1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2447A4u;
        goto label_2447a4;
    }
    ctx->pc = 0x24479Cu;
    {
        const bool branch_taken_0x24479c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2447A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24479Cu;
        // 0x2447a0: 0x1358823  subu        $s1, $t1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24479c) {
            ctx->pc = 0x244838u;
            goto label_244838;
        }
    }
    ctx->pc = 0x2447A4u;
label_2447a4:
    // 0x2447a4: 0x119100  sll         $s2, $s1, 4
    ctx->pc = 0x2447a4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_2447a8:
    // 0x2447a8: 0x249001a  div         $zero, $s2, $t1
    ctx->pc = 0x2447a8u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2447ac:
    // 0x2447ac: 0x0  nop
    ctx->pc = 0x2447acu;
    // NOP
label_2447b0:
    // 0x2447b0: 0x0  nop
    ctx->pc = 0x2447b0u;
    // NOP
label_2447b4:
    // 0x2447b4: 0x9812  mflo        $s3
    ctx->pc = 0x2447b4u;
    SET_GPR_U64(ctx, 19, ctx->lo);
label_2447b8:
    // 0x2447b8: 0x6610003  bgez        $s3, . + 4 + (0x3 << 2)
label_2447bc:
    if (ctx->pc == 0x2447BCu) {
        ctx->pc = 0x2447BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2447B8u;
        // 0x2447bc: 0x139043  sra         $s2, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2447C0u;
        goto label_2447c0;
    }
    ctx->pc = 0x2447B8u;
    {
        const bool branch_taken_0x2447b8 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x2447BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2447B8u;
        // 0x2447bc: 0x139043  sra         $s2, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2447b8) {
            ctx->pc = 0x2447C8u;
            goto label_2447c8;
        }
    }
    ctx->pc = 0x2447C0u;
label_2447c0:
    // 0x2447c0: 0x26720001  addiu       $s2, $s3, 0x1
    ctx->pc = 0x2447c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2447c4:
    // 0x2447c4: 0x129043  sra         $s2, $s2, 1
    ctx->pc = 0x2447c4u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 1));
label_2447c8:
    // 0x2447c8: 0x26530010  addiu       $s3, $s2, 0x10
    ctx->pc = 0x2447c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_2447cc:
    // 0x2447cc: 0x119080  sll         $s2, $s1, 2
    ctx->pc = 0x2447ccu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2447d0:
    // 0x2447d0: 0x2518821  addu        $s1, $s2, $s1
    ctx->pc = 0x2447d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_2447d4:
    // 0x2447d4: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x2447d4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2447d8:
    // 0x2447d8: 0x229001a  div         $zero, $s1, $t1
    ctx->pc = 0x2447d8u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2447dc:
    // 0x2447dc: 0x0  nop
    ctx->pc = 0x2447dcu;
    // NOP
label_2447e0:
    // 0x2447e0: 0x0  nop
    ctx->pc = 0x2447e0u;
    // NOP
label_2447e4:
    // 0x2447e4: 0x9012  mflo        $s2
    ctx->pc = 0x2447e4u;
    SET_GPR_U64(ctx, 18, ctx->lo);
label_2447e8:
    // 0x2447e8: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
label_2447ec:
    if (ctx->pc == 0x2447ECu) {
        ctx->pc = 0x2447ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2447E8u;
        // 0x2447ec: 0x128843  sra         $s1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2447F0u;
        goto label_2447f0;
    }
    ctx->pc = 0x2447E8u;
    {
        const bool branch_taken_0x2447e8 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x2447ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2447E8u;
        // 0x2447ec: 0x128843  sra         $s1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2447e8) {
            ctx->pc = 0x2447F8u;
            goto label_2447f8;
        }
    }
    ctx->pc = 0x2447F0u;
label_2447f0:
    // 0x2447f0: 0x26510001  addiu       $s1, $s2, 0x1
    ctx->pc = 0x2447f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2447f4:
    // 0x2447f4: 0x118843  sra         $s1, $s1, 1
    ctx->pc = 0x2447f4u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
label_2447f8:
    // 0x2447f8: 0x26340014  addiu       $s4, $s1, 0x14
    ctx->pc = 0x2447f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_2447fc:
    // 0x2447fc: 0x2671fff0  addiu       $s1, $s3, -0x10
    ctx->pc = 0x2447fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967280));
label_244800:
    // 0x244800: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
label_244804:
    if (ctx->pc == 0x244804u) {
        ctx->pc = 0x244804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244800u;
        // 0x244804: 0x119043  sra         $s2, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244808u;
        goto label_244808;
    }
    ctx->pc = 0x244800u;
    {
        const bool branch_taken_0x244800 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x244804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244800u;
        // 0x244804: 0x119043  sra         $s2, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244800) {
            ctx->pc = 0x244810u;
            goto label_244810;
        }
    }
    ctx->pc = 0x244808u;
label_244808:
    // 0x244808: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x244808u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_24480c:
    // 0x24480c: 0x119043  sra         $s2, $s1, 1
    ctx->pc = 0x24480cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 17), 1));
label_244810:
    // 0x244810: 0x25710028  addiu       $s1, $t3, 0x28
    ctx->pc = 0x244810u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 11), 40));
label_244814:
    // 0x244814: 0x2696ffec  addiu       $s6, $s4, -0x14
    ctx->pc = 0x244814u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967276));
label_244818:
    // 0x244818: 0x2328823  subu        $s1, $s1, $s2
    ctx->pc = 0x244818u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_24481c:
    // 0x24481c: 0x6c10003  bgez        $s6, . + 4 + (0x3 << 2)
label_244820:
    if (ctx->pc == 0x244820u) {
        ctx->pc = 0x244820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24481Cu;
        // 0x244820: 0x169043  sra         $s2, $s6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244824u;
        goto label_244824;
    }
    ctx->pc = 0x24481Cu;
    {
        const bool branch_taken_0x24481c = (GPR_S32(ctx, 22) >= 0);
        ctx->pc = 0x244820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24481Cu;
        // 0x244820: 0x169043  sra         $s2, $s6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24481c) {
            ctx->pc = 0x24482Cu;
            goto label_24482c;
        }
    }
    ctx->pc = 0x244824u;
label_244824:
    // 0x244824: 0x26d20001  addiu       $s2, $s6, 0x1
    ctx->pc = 0x244824u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_244828:
    // 0x244828: 0x129043  sra         $s2, $s2, 1
    ctx->pc = 0x244828u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 1));
label_24482c:
    // 0x24482c: 0x3129023  subu        $s2, $t8, $s2
    ctx->pc = 0x24482cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 18)));
label_244830:
    // 0x244830: 0x10000025  b           . + 4 + (0x25 << 2)
label_244834:
    if (ctx->pc == 0x244834u) {
        ctx->pc = 0x244834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244830u;
        // 0x244834: 0x24f9021  addu        $s2, $s2, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244838u;
        goto label_244838;
    }
    ctx->pc = 0x244830u;
    {
        const bool branch_taken_0x244830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244830u;
        // 0x244834: 0x24f9021  addu        $s2, $s2, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244830) {
            ctx->pc = 0x2448C8u;
            goto label_2448c8;
        }
    }
    ctx->pc = 0x244838u;
label_244838:
    // 0x244838: 0x1358823  subu        $s1, $t1, $s5
    ctx->pc = 0x244838u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 21)));
label_24483c:
    // 0x24483c: 0x119040  sll         $s2, $s1, 1
    ctx->pc = 0x24483cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_244840:
    // 0x244840: 0x2519021  addu        $s2, $s2, $s1
    ctx->pc = 0x244840u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_244844:
    // 0x244844: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x244844u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_244848:
    // 0x244848: 0x249001a  div         $zero, $s2, $t1
    ctx->pc = 0x244848u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_24484c:
    // 0x24484c: 0x0  nop
    ctx->pc = 0x24484cu;
    // NOP
label_244850:
    // 0x244850: 0x0  nop
    ctx->pc = 0x244850u;
    // NOP
label_244854:
    // 0x244854: 0x9812  mflo        $s3
    ctx->pc = 0x244854u;
    SET_GPR_U64(ctx, 19, ctx->lo);
label_244858:
    // 0x244858: 0x6610003  bgez        $s3, . + 4 + (0x3 << 2)
label_24485c:
    if (ctx->pc == 0x24485Cu) {
        ctx->pc = 0x24485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244858u;
        // 0x24485c: 0x139043  sra         $s2, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244860u;
        goto label_244860;
    }
    ctx->pc = 0x244858u;
    {
        const bool branch_taken_0x244858 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x24485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244858u;
        // 0x24485c: 0x139043  sra         $s2, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244858) {
            ctx->pc = 0x244868u;
            goto label_244868;
        }
    }
    ctx->pc = 0x244860u;
label_244860:
    // 0x244860: 0x26720001  addiu       $s2, $s3, 0x1
    ctx->pc = 0x244860u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_244864:
    // 0x244864: 0x129043  sra         $s2, $s2, 1
    ctx->pc = 0x244864u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 1));
label_244868:
    // 0x244868: 0x118940  sll         $s1, $s1, 5
    ctx->pc = 0x244868u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
label_24486c:
    // 0x24486c: 0x26530018  addiu       $s3, $s2, 0x18
    ctx->pc = 0x24486cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_244870:
    // 0x244870: 0x229001a  div         $zero, $s1, $t1
    ctx->pc = 0x244870u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_244874:
    // 0x244874: 0x0  nop
    ctx->pc = 0x244874u;
    // NOP
label_244878:
    // 0x244878: 0x0  nop
    ctx->pc = 0x244878u;
    // NOP
label_24487c:
    // 0x24487c: 0x9012  mflo        $s2
    ctx->pc = 0x24487cu;
    SET_GPR_U64(ctx, 18, ctx->lo);
label_244880:
    // 0x244880: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
label_244884:
    if (ctx->pc == 0x244884u) {
        ctx->pc = 0x244884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244880u;
        // 0x244884: 0x128843  sra         $s1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244888u;
        goto label_244888;
    }
    ctx->pc = 0x244880u;
    {
        const bool branch_taken_0x244880 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x244884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244880u;
        // 0x244884: 0x128843  sra         $s1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244880) {
            ctx->pc = 0x244890u;
            goto label_244890;
        }
    }
    ctx->pc = 0x244888u;
label_244888:
    // 0x244888: 0x26510001  addiu       $s1, $s2, 0x1
    ctx->pc = 0x244888u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_24488c:
    // 0x24488c: 0x118843  sra         $s1, $s1, 1
    ctx->pc = 0x24488cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
label_244890:
    // 0x244890: 0x26340020  addiu       $s4, $s1, 0x20
    ctx->pc = 0x244890u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_244894:
    // 0x244894: 0x2671ffe8  addiu       $s1, $s3, -0x18
    ctx->pc = 0x244894u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967272));
label_244898:
    // 0x244898: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
label_24489c:
    if (ctx->pc == 0x24489Cu) {
        ctx->pc = 0x24489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244898u;
        // 0x24489c: 0x119043  sra         $s2, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2448A0u;
        goto label_2448a0;
    }
    ctx->pc = 0x244898u;
    {
        const bool branch_taken_0x244898 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x24489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244898u;
        // 0x24489c: 0x119043  sra         $s2, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244898) {
            ctx->pc = 0x2448A8u;
            goto label_2448a8;
        }
    }
    ctx->pc = 0x2448A0u;
label_2448a0:
    // 0x2448a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2448a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2448a4:
    // 0x2448a4: 0x119043  sra         $s2, $s1, 1
    ctx->pc = 0x2448a4u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 17), 1));
label_2448a8:
    // 0x2448a8: 0x25910028  addiu       $s1, $t4, 0x28
    ctx->pc = 0x2448a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 12), 40));
label_2448ac:
    // 0x2448ac: 0x2696ffe0  addiu       $s6, $s4, -0x20
    ctx->pc = 0x2448acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967264));
label_2448b0:
    // 0x2448b0: 0x2328823  subu        $s1, $s1, $s2
    ctx->pc = 0x2448b0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_2448b4:
    // 0x2448b4: 0x6c10003  bgez        $s6, . + 4 + (0x3 << 2)
label_2448b8:
    if (ctx->pc == 0x2448B8u) {
        ctx->pc = 0x2448B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2448B4u;
        // 0x2448b8: 0x169043  sra         $s2, $s6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2448BCu;
        goto label_2448bc;
    }
    ctx->pc = 0x2448B4u;
    {
        const bool branch_taken_0x2448b4 = (GPR_S32(ctx, 22) >= 0);
        ctx->pc = 0x2448B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2448B4u;
        // 0x2448b8: 0x169043  sra         $s2, $s6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2448b4) {
            ctx->pc = 0x2448C4u;
            goto label_2448c4;
        }
    }
    ctx->pc = 0x2448BCu;
label_2448bc:
    // 0x2448bc: 0x26d20001  addiu       $s2, $s6, 0x1
    ctx->pc = 0x2448bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2448c0:
    // 0x2448c0: 0x129043  sra         $s2, $s2, 1
    ctx->pc = 0x2448c0u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 1));
label_2448c4:
    // 0x2448c4: 0x1d29023  subu        $s2, $t6, $s2
    ctx->pc = 0x2448c4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 18)));
label_2448c8:
    // 0x2448c8: 0x15a9c0  sll         $s5, $s5, 7
    ctx->pc = 0x2448c8u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 21), 7));
label_2448cc:
    // 0x2448cc: 0x2a9001a  div         $zero, $s5, $t1
    ctx->pc = 0x2448ccu;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 21);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2448d0:
    // 0x2448d0: 0x0  nop
    ctx->pc = 0x2448d0u;
    // NOP
label_2448d4:
    // 0x2448d4: 0x0  nop
    ctx->pc = 0x2448d4u;
    // NOP
label_2448d8:
    // 0x2448d8: 0xa812  mflo        $s5
    ctx->pc = 0x2448d8u;
    SET_GPR_U64(ctx, 21, ctx->lo);
label_2448dc:
    // 0x2448dc: 0x1000000d  b           . + 4 + (0xD << 2)
label_2448e0:
    if (ctx->pc == 0x2448E0u) {
        ctx->pc = 0x2448E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2448DCu;
        // 0x2448e0: 0x32b500ff  andi        $s5, $s5, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2448E4u;
        goto label_2448e4;
    }
    ctx->pc = 0x2448DCu;
    {
        const bool branch_taken_0x2448dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2448E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2448DCu;
        // 0x2448e0: 0x32b500ff  andi        $s5, $s5, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2448dc) {
            ctx->pc = 0x244914u;
            goto label_244914;
        }
    }
    ctx->pc = 0x2448E4u;
label_2448e4:
    // 0x2448e4: 0x0  nop
    ctx->pc = 0x2448e4u;
    // NOP
label_2448e8:
    // 0x2448e8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_2448ec:
    if (ctx->pc == 0x2448ECu) {
        ctx->pc = 0x2448ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2448E8u;
        // 0x2448ec: 0x24130010  addiu       $s3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2448F0u;
        goto label_2448f0;
    }
    ctx->pc = 0x2448E8u;
    {
        const bool branch_taken_0x2448e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2448ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2448E8u;
        // 0x2448ec: 0x24130010  addiu       $s3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2448e8) {
            ctx->pc = 0x244900u;
            goto label_244900;
        }
    }
    ctx->pc = 0x2448F0u;
label_2448f0:
    // 0x2448f0: 0x24140014  addiu       $s4, $zero, 0x14
    ctx->pc = 0x2448f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2448f4:
    // 0x2448f4: 0x25710028  addiu       $s1, $t3, 0x28
    ctx->pc = 0x2448f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 11), 40));
label_2448f8:
    // 0x2448f8: 0x10000005  b           . + 4 + (0x5 << 2)
label_2448fc:
    if (ctx->pc == 0x2448FCu) {
        ctx->pc = 0x2448FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2448F8u;
        // 0x2448fc: 0x25f20076  addiu       $s2, $t7, 0x76 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 15), 118));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244900u;
        goto label_244900;
    }
    ctx->pc = 0x2448F8u;
    {
        const bool branch_taken_0x2448f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2448FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2448F8u;
        // 0x2448fc: 0x25f20076  addiu       $s2, $t7, 0x76 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 15), 118));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2448f8) {
            ctx->pc = 0x244910u;
            goto label_244910;
        }
    }
    ctx->pc = 0x244900u;
label_244900:
    // 0x244900: 0x24130018  addiu       $s3, $zero, 0x18
    ctx->pc = 0x244900u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_244904:
    // 0x244904: 0x24140020  addiu       $s4, $zero, 0x20
    ctx->pc = 0x244904u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_244908:
    // 0x244908: 0x25910028  addiu       $s1, $t4, 0x28
    ctx->pc = 0x244908u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 12), 40));
label_24490c:
    // 0x24490c: 0x241200b0  addiu       $s2, $zero, 0xB0
    ctx->pc = 0x24490cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_244910:
    // 0x244910: 0x64150080  daddiu      $s5, $zero, 0x80
    ctx->pc = 0x244910u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
label_244914:
    // 0x244914: 0x0  nop
    ctx->pc = 0x244914u;
    // NOP
label_244918:
    // 0x244918: 0x11b100  sll         $s6, $s1, 4
    ctx->pc = 0x244918u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_24491c:
    // 0x24491c: 0x2339821  addu        $s3, $s1, $s3
    ctx->pc = 0x24491cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_244920:
    // 0x244920: 0x26d66c00  addiu       $s6, $s6, 0x6C00
    ctx->pc = 0x244920u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 27648));
label_244924:
    // 0x244924: 0x138900  sll         $s1, $s3, 4
    ctx->pc = 0x244924u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_244928:
    // 0x244928: 0xa4d60080  sh          $s6, 0x80($a2)
    ctx->pc = 0x244928u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 128), (uint16_t)GPR_U32(ctx, 22));
label_24492c:
    // 0x24492c: 0x26336c00  addiu       $s3, $s1, 0x6C00
    ctx->pc = 0x24492cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 27648));
label_244930:
    // 0x244930: 0x2548821  addu        $s1, $s2, $s4
    ctx->pc = 0x244930u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_244934:
    // 0x244934: 0xa4d30090  sh          $s3, 0x90($a2)
    ctx->pc = 0x244934u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 144), (uint16_t)GPR_U32(ctx, 19));
label_244938:
    // 0x244938: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x244938u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_24493c:
    // 0x24493c: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x24493cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_244940:
    // 0x244940: 0x26527900  addiu       $s2, $s2, 0x7900
    ctx->pc = 0x244940u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 30976));
label_244944:
    // 0x244944: 0x26317900  addiu       $s1, $s1, 0x7900
    ctx->pc = 0x244944u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 30976));
label_244948:
    // 0x244948: 0xa4d20082  sh          $s2, 0x82($a2)
    ctx->pc = 0x244948u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 130), (uint16_t)GPR_U32(ctx, 18));
label_24494c:
    // 0x24494c: 0x10000009  b           . + 4 + (0x9 << 2)
label_244950:
    if (ctx->pc == 0x244950u) {
        ctx->pc = 0x244950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24494Cu;
        // 0x244950: 0xa4d10092  sh          $s1, 0x92($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 146), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244954u;
        goto label_244954;
    }
    ctx->pc = 0x24494Cu;
    {
        const bool branch_taken_0x24494c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24494Cu;
        // 0x244950: 0xa4d10092  sh          $s1, 0x92($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 146), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24494c) {
            ctx->pc = 0x244974u;
            goto label_244974;
        }
    }
    ctx->pc = 0x244954u;
label_244954:
    // 0x244954: 0x0  nop
    ctx->pc = 0x244954u;
    // NOP
label_244958:
    // 0x244958: 0x14d0018  mult        $zero, $t2, $t5
    ctx->pc = 0x244958u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_24495c:
    // 0x24495c: 0x0  nop
    ctx->pc = 0x24495cu;
    // NOP
label_244960:
    // 0x244960: 0x0  nop
    ctx->pc = 0x244960u;
    // NOP
label_244964:
    // 0x244964: 0x8810  mfhi        $s1
    ctx->pc = 0x244964u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_244968:
    // 0x244968: 0x118883  sra         $s1, $s1, 2
    ctx->pc = 0x244968u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 2));
label_24496c:
    // 0x24496c: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x24496cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_244970:
    // 0x244970: 0x323500ff  andi        $s5, $s1, 0xFF
    ctx->pc = 0x244970u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_244974:
    // 0x244974: 0x0  nop
    ctx->pc = 0x244974u;
    // NOP
label_244978:
    // 0x244978: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x244978u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_24497c:
    // 0x24497c: 0xa0d50073  sb          $s5, 0x73($a2)
    ctx->pc = 0x24497cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 115), (uint8_t)GPR_U32(ctx, 21));
label_244980:
    // 0x244980: 0x207882a  slt         $s1, $s0, $a3
    ctx->pc = 0x244980u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_244984:
    // 0x244984: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x244984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_244988:
    // 0x244988: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x244988u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
label_24498c:
    // 0x24498c: 0x258c0018  addiu       $t4, $t4, 0x18
    ctx->pc = 0x24498cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 24));
label_244990:
    // 0x244990: 0x1620ff74  bnez        $s1, . + 4 + (-0x8C << 2)
label_244994:
    if (ctx->pc == 0x244994u) {
        ctx->pc = 0x244994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244990u;
        // 0x244994: 0x24c600a0  addiu       $a2, $a2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244998u;
        goto label_244998;
    }
    ctx->pc = 0x244990u;
    {
        const bool branch_taken_0x244990 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x244994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244990u;
        // 0x244994: 0x24c600a0  addiu       $a2, $a2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244990) {
            ctx->pc = 0x244764u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_244764;
        }
    }
    ctx->pc = 0x244998u;
label_244998:
    // 0x244998: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x244998u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_24499c:
    // 0x24499c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x24499cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2449a0:
    // 0x2449a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2449a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2449a4:
    // 0x2449a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2449a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2449a8:
    // 0x2449a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2449a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2449ac:
    // 0x2449ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2449acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2449b0:
    // 0x2449b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2449b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2449b4:
    // 0x2449b4: 0x3e00008  jr          $ra
label_2449b8:
    if (ctx->pc == 0x2449B8u) {
        ctx->pc = 0x2449B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2449B4u;
        // 0x2449b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2449BCu;
        goto label_2449bc;
    }
    ctx->pc = 0x2449B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2449B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2449B4u;
        // 0x2449b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2449B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2449BCu;
label_2449bc:
    // 0x2449bc: 0x0  nop
    ctx->pc = 0x2449bcu;
    // NOP
label_2449c0:
    // 0x2449c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2449c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2449c4:
    // 0x2449c4: 0x8082a  slt         $at, $zero, $t0
    ctx->pc = 0x2449c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_2449c8:
    // 0x2449c8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2449c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2449cc:
    // 0x2449cc: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x2449ccu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2449d0:
    // 0x2449d0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2449d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2449d4:
    // 0x2449d4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2449d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2449d8:
    // 0x2449d8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2449d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2449dc:
    // 0x2449dc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2449dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2449e0:
    // 0x2449e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2449e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2449e4:
    // 0x2449e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2449e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2449e8:
    // 0x2449e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2449e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2449ec:
    // 0x2449ec: 0x102000a1  beqz        $at, . + 4 + (0xA1 << 2)
label_2449f0:
    if (ctx->pc == 0x2449F0u) {
        ctx->pc = 0x2449F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2449ECu;
        // 0x2449f0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2449F4u;
        goto label_2449f4;
    }
    ctx->pc = 0x2449ECu;
    {
        const bool branch_taken_0x2449ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2449F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2449ECu;
        // 0x2449f0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2449ec) {
            ctx->pc = 0x244C74u;
            goto label_244c74;
        }
    }
    ctx->pc = 0x2449F4u;
label_2449f4:
    // 0x2449f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2449f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2449f8:
    // 0x2449f8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2449f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2449fc:
    // 0x2449fc: 0x1697823  subu        $t7, $t3, $t1
    ctx->pc = 0x2449fcu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
label_244a00:
    // 0x244a00: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x244a00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_244a04:
    // 0x244a04: 0xfa9c0  sll         $s5, $t7, 7
    ctx->pc = 0x244a04u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 15), 7));
label_244a08:
    // 0x244a08: 0x76100  sll         $t4, $a3, 4
    ctx->pc = 0x244a08u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_244a0c:
    // 0x244a0c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x244a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_244a10:
    // 0x244a10: 0x480c0  sll         $s0, $a0, 3
    ctx->pc = 0x244a10u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_244a14:
    // 0x244a14: 0x258d0028  addiu       $t5, $t4, 0x28
    ctx->pc = 0x244a14u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), 40));
label_244a18:
    // 0x244a18: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x244a18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_244a1c:
    // 0x244a1c: 0x2042023  subu        $a0, $s0, $a0
    ctx->pc = 0x244a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_244a20:
    // 0x244a20: 0x3c0f6666  lui         $t7, 0x6666
    ctx->pc = 0x244a20u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)26214 << 16));
label_244a24:
    // 0x244a24: 0x241e00b0  addiu       $fp, $zero, 0xB0
    ctx->pc = 0x244a24u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_244a28:
    // 0x244a28: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x244a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_244a2c:
    // 0x244a2c: 0x240c0076  addiu       $t4, $zero, 0x76
    ctx->pc = 0x244a2cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_244a30:
    // 0x244a30: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x244a30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_244a34:
    // 0x244a34: 0x256bfff6  addiu       $t3, $t3, -0xA
    ctx->pc = 0x244a34u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967286));
label_244a38:
    // 0x244a38: 0x159fc2  srl         $s3, $s5, 31
    ctx->pc = 0x244a38u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 21), 31));
label_244a3c:
    // 0x244a3c: 0x35f46667  ori         $s4, $t7, 0x6667
    ctx->pc = 0x244a3cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)26215);
label_244a40:
    // 0x244a40: 0x12b082a  slt         $at, $t1, $t3
    ctx->pc = 0x244a40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
label_244a44:
    // 0x244a44: 0x1020007b  beqz        $at, . + 4 + (0x7B << 2)
label_244a48:
    if (ctx->pc == 0x244A48u) {
        ctx->pc = 0x244A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244A44u;
        // 0x244a48: 0x1c77821  addu        $t7, $t6, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244A4Cu;
        goto label_244a4c;
    }
    ctx->pc = 0x244A44u;
    {
        const bool branch_taken_0x244a44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x244A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244A44u;
        // 0x244a48: 0x1c77821  addu        $t7, $t6, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244a44) {
            ctx->pc = 0x244C34u;
            goto label_244c34;
        }
    }
    ctx->pc = 0x244A4Cu;
label_244a4c:
    // 0x244a4c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x244a4cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
label_244a50:
    // 0x244a50: 0x12f8023  subu        $s0, $t1, $t7
    ctx->pc = 0x244a50u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 15)));
label_244a54:
    // 0x244a54: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
label_244a58:
    if (ctx->pc == 0x244A58u) {
        ctx->pc = 0x244A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244A54u;
        // 0x244a58: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244A5Cu;
        goto label_244a5c;
    }
    ctx->pc = 0x244A54u;
    {
        const bool branch_taken_0x244a54 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x244A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244A54u;
        // 0x244a58: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244a54) {
            ctx->pc = 0x244A70u;
            goto label_244a70;
        }
    }
    ctx->pc = 0x244A5Cu;
label_244a5c:
    // 0x244a5c: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x244a5cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244a60:
    // 0x244a60: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x244a60u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244a64:
    // 0x244a64: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x244a64u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244a68:
    // 0x244a68: 0x10000062  b           . + 4 + (0x62 << 2)
label_244a6c:
    if (ctx->pc == 0x244A6Cu) {
        ctx->pc = 0x244A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244A68u;
        // 0x244a6c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244A70u;
        goto label_244a70;
    }
    ctx->pc = 0x244A68u;
    {
        const bool branch_taken_0x244a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244A68u;
        // 0x244a6c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244a68) {
            ctx->pc = 0x244BF4u;
            goto label_244bf4;
        }
    }
    ctx->pc = 0x244A70u;
label_244a70:
    // 0x244a70: 0x20a082a  slt         $at, $s0, $t2
    ctx->pc = 0x244a70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_244a74:
    // 0x244a74: 0x10200053  beqz        $at, . + 4 + (0x53 << 2)
label_244a78:
    if (ctx->pc == 0x244A78u) {
        ctx->pc = 0x244A7Cu;
        goto label_244a7c;
    }
    ctx->pc = 0x244A74u;
    {
        const bool branch_taken_0x244a74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x244a74) {
            ctx->pc = 0x244BC4u;
            goto label_244bc4;
        }
    }
    ctx->pc = 0x244A7Cu;
label_244a7c:
    // 0x244a7c: 0x10a00028  beqz        $a1, . + 4 + (0x28 << 2)
label_244a80:
    if (ctx->pc == 0x244A80u) {
        ctx->pc = 0x244A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244A7Cu;
        // 0x244a80: 0x1507823  subu        $t7, $t2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244A84u;
        goto label_244a84;
    }
    ctx->pc = 0x244A7Cu;
    {
        const bool branch_taken_0x244a7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x244A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244A7Cu;
        // 0x244a80: 0x1507823  subu        $t7, $t2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244a7c) {
            ctx->pc = 0x244B20u;
            goto label_244b20;
        }
    }
    ctx->pc = 0x244A84u;
label_244a84:
    // 0x244a84: 0xfb040  sll         $s6, $t7, 1
    ctx->pc = 0x244a84u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 15), 1));
label_244a88:
    // 0x244a88: 0x2cfb021  addu        $s6, $s6, $t7
    ctx->pc = 0x244a88u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 15)));
label_244a8c:
    // 0x244a8c: 0x16b080  sll         $s6, $s6, 2
    ctx->pc = 0x244a8cu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_244a90:
    // 0x244a90: 0x2ca001a  div         $zero, $s6, $t2
    ctx->pc = 0x244a90u;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 22);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_244a94:
    // 0x244a94: 0x0  nop
    ctx->pc = 0x244a94u;
    // NOP
label_244a98:
    // 0x244a98: 0x0  nop
    ctx->pc = 0x244a98u;
    // NOP
label_244a9c:
    // 0x244a9c: 0xb812  mflo        $s7
    ctx->pc = 0x244a9cu;
    SET_GPR_U64(ctx, 23, ctx->lo);
label_244aa0:
    // 0x244aa0: 0x6e10003  bgez        $s7, . + 4 + (0x3 << 2)
label_244aa4:
    if (ctx->pc == 0x244AA4u) {
        ctx->pc = 0x244AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244AA0u;
        // 0x244aa4: 0x17b043  sra         $s6, $s7, 1 (Delay Slot)
        SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244AA8u;
        goto label_244aa8;
    }
    ctx->pc = 0x244AA0u;
    {
        const bool branch_taken_0x244aa0 = (GPR_S32(ctx, 23) >= 0);
        ctx->pc = 0x244AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244AA0u;
        // 0x244aa4: 0x17b043  sra         $s6, $s7, 1 (Delay Slot)
        SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244aa0) {
            ctx->pc = 0x244AB0u;
            goto label_244ab0;
        }
    }
    ctx->pc = 0x244AA8u;
label_244aa8:
    // 0x244aa8: 0x26f60001  addiu       $s6, $s7, 0x1
    ctx->pc = 0x244aa8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_244aac:
    // 0x244aac: 0x16b043  sra         $s6, $s6, 1
    ctx->pc = 0x244aacu;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 22), 1));
label_244ab0:
    // 0x244ab0: 0x26d8000c  addiu       $t8, $s6, 0xC
    ctx->pc = 0x244ab0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
label_244ab4:
    // 0x244ab4: 0xfb080  sll         $s6, $t7, 2
    ctx->pc = 0x244ab4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
label_244ab8:
    // 0x244ab8: 0x2cf7821  addu        $t7, $s6, $t7
    ctx->pc = 0x244ab8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 15)));
label_244abc:
    // 0x244abc: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x244abcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
label_244ac0:
    // 0x244ac0: 0x1ea001a  div         $zero, $t7, $t2
    ctx->pc = 0x244ac0u;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 15);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_244ac4:
    // 0x244ac4: 0x0  nop
    ctx->pc = 0x244ac4u;
    // NOP
label_244ac8:
    // 0x244ac8: 0x0  nop
    ctx->pc = 0x244ac8u;
    // NOP
label_244acc:
    // 0x244acc: 0xb012  mflo        $s6
    ctx->pc = 0x244accu;
    SET_GPR_U64(ctx, 22, ctx->lo);
label_244ad0:
    // 0x244ad0: 0x6c10003  bgez        $s6, . + 4 + (0x3 << 2)
label_244ad4:
    if (ctx->pc == 0x244AD4u) {
        ctx->pc = 0x244AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244AD0u;
        // 0x244ad4: 0x167843  sra         $t7, $s6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244AD8u;
        goto label_244ad8;
    }
    ctx->pc = 0x244AD0u;
    {
        const bool branch_taken_0x244ad0 = (GPR_S32(ctx, 22) >= 0);
        ctx->pc = 0x244AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244AD0u;
        // 0x244ad4: 0x167843  sra         $t7, $s6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244ad0) {
            ctx->pc = 0x244AE0u;
            goto label_244ae0;
        }
    }
    ctx->pc = 0x244AD8u;
label_244ad8:
    // 0x244ad8: 0x26cf0001  addiu       $t7, $s6, 0x1
    ctx->pc = 0x244ad8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_244adc:
    // 0x244adc: 0xf7843  sra         $t7, $t7, 1
    ctx->pc = 0x244adcu;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 1));
label_244ae0:
    // 0x244ae0: 0x25f90014  addiu       $t9, $t7, 0x14
    ctx->pc = 0x244ae0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 15), 20));
label_244ae4:
    // 0x244ae4: 0x2716fff4  addiu       $s6, $t8, -0xC
    ctx->pc = 0x244ae4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 24), 4294967284));
label_244ae8:
    // 0x244ae8: 0x1b1b821  addu        $s7, $t5, $s1
    ctx->pc = 0x244ae8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 17)));
label_244aec:
    // 0x244aec: 0x6c10003  bgez        $s6, . + 4 + (0x3 << 2)
label_244af0:
    if (ctx->pc == 0x244AF0u) {
        ctx->pc = 0x244AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244AECu;
        // 0x244af0: 0x167843  sra         $t7, $s6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244AF4u;
        goto label_244af4;
    }
    ctx->pc = 0x244AECu;
    {
        const bool branch_taken_0x244aec = (GPR_S32(ctx, 22) >= 0);
        ctx->pc = 0x244AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244AECu;
        // 0x244af0: 0x167843  sra         $t7, $s6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244aec) {
            ctx->pc = 0x244AFCu;
            goto label_244afc;
        }
    }
    ctx->pc = 0x244AF4u;
label_244af4:
    // 0x244af4: 0x26cf0001  addiu       $t7, $s6, 0x1
    ctx->pc = 0x244af4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_244af8:
    // 0x244af8: 0xf7843  sra         $t7, $t7, 1
    ctx->pc = 0x244af8u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 1));
label_244afc:
    // 0x244afc: 0x2ef7823  subu        $t7, $s7, $t7
    ctx->pc = 0x244afcu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 15)));
label_244b00:
    // 0x244b00: 0x2737ffec  addiu       $s7, $t9, -0x14
    ctx->pc = 0x244b00u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967276));
label_244b04:
    // 0x244b04: 0x6e10003  bgez        $s7, . + 4 + (0x3 << 2)
label_244b08:
    if (ctx->pc == 0x244B08u) {
        ctx->pc = 0x244B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B04u;
        // 0x244b08: 0x17b043  sra         $s6, $s7, 1 (Delay Slot)
        SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244B0Cu;
        goto label_244b0c;
    }
    ctx->pc = 0x244B04u;
    {
        const bool branch_taken_0x244b04 = (GPR_S32(ctx, 23) >= 0);
        ctx->pc = 0x244B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B04u;
        // 0x244b08: 0x17b043  sra         $s6, $s7, 1 (Delay Slot)
        SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244b04) {
            ctx->pc = 0x244B14u;
            goto label_244b14;
        }
    }
    ctx->pc = 0x244B0Cu;
label_244b0c:
    // 0x244b0c: 0x26f60001  addiu       $s6, $s7, 0x1
    ctx->pc = 0x244b0cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_244b10:
    // 0x244b10: 0x16b043  sra         $s6, $s6, 1
    ctx->pc = 0x244b10u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 22), 1));
label_244b14:
    // 0x244b14: 0x196b023  subu        $s6, $t4, $s6
    ctx->pc = 0x244b14u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 22)));
label_244b18:
    // 0x244b18: 0x10000023  b           . + 4 + (0x23 << 2)
label_244b1c:
    if (ctx->pc == 0x244B1Cu) {
        ctx->pc = 0x244B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B18u;
        // 0x244b1c: 0x2c4b021  addu        $s6, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244B20u;
        goto label_244b20;
    }
    ctx->pc = 0x244B18u;
    {
        const bool branch_taken_0x244b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B18u;
        // 0x244b1c: 0x2c4b021  addu        $s6, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244b18) {
            ctx->pc = 0x244BA8u;
            goto label_244ba8;
        }
    }
    ctx->pc = 0x244B20u;
label_244b20:
    // 0x244b20: 0x1507823  subu        $t7, $t2, $s0
    ctx->pc = 0x244b20u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 16)));
label_244b24:
    // 0x244b24: 0xfb100  sll         $s6, $t7, 4
    ctx->pc = 0x244b24u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
label_244b28:
    // 0x244b28: 0x2ca001a  div         $zero, $s6, $t2
    ctx->pc = 0x244b28u;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 22);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_244b2c:
    // 0x244b2c: 0x0  nop
    ctx->pc = 0x244b2cu;
    // NOP
label_244b30:
    // 0x244b30: 0x0  nop
    ctx->pc = 0x244b30u;
    // NOP
label_244b34:
    // 0x244b34: 0xb812  mflo        $s7
    ctx->pc = 0x244b34u;
    SET_GPR_U64(ctx, 23, ctx->lo);
label_244b38:
    // 0x244b38: 0x6e10003  bgez        $s7, . + 4 + (0x3 << 2)
label_244b3c:
    if (ctx->pc == 0x244B3Cu) {
        ctx->pc = 0x244B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B38u;
        // 0x244b3c: 0x17b043  sra         $s6, $s7, 1 (Delay Slot)
        SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244B40u;
        goto label_244b40;
    }
    ctx->pc = 0x244B38u;
    {
        const bool branch_taken_0x244b38 = (GPR_S32(ctx, 23) >= 0);
        ctx->pc = 0x244B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B38u;
        // 0x244b3c: 0x17b043  sra         $s6, $s7, 1 (Delay Slot)
        SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244b38) {
            ctx->pc = 0x244B48u;
            goto label_244b48;
        }
    }
    ctx->pc = 0x244B40u;
label_244b40:
    // 0x244b40: 0x26f60001  addiu       $s6, $s7, 0x1
    ctx->pc = 0x244b40u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_244b44:
    // 0x244b44: 0x16b043  sra         $s6, $s6, 1
    ctx->pc = 0x244b44u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 22), 1));
label_244b48:
    // 0x244b48: 0xf7940  sll         $t7, $t7, 5
    ctx->pc = 0x244b48u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 5));
label_244b4c:
    // 0x244b4c: 0x26d80010  addiu       $t8, $s6, 0x10
    ctx->pc = 0x244b4cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
label_244b50:
    // 0x244b50: 0x1ea001a  div         $zero, $t7, $t2
    ctx->pc = 0x244b50u;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 15);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_244b54:
    // 0x244b54: 0x0  nop
    ctx->pc = 0x244b54u;
    // NOP
label_244b58:
    // 0x244b58: 0x0  nop
    ctx->pc = 0x244b58u;
    // NOP
label_244b5c:
    // 0x244b5c: 0xb012  mflo        $s6
    ctx->pc = 0x244b5cu;
    SET_GPR_U64(ctx, 22, ctx->lo);
label_244b60:
    // 0x244b60: 0x6c10003  bgez        $s6, . + 4 + (0x3 << 2)
label_244b64:
    if (ctx->pc == 0x244B64u) {
        ctx->pc = 0x244B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B60u;
        // 0x244b64: 0x167843  sra         $t7, $s6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244B68u;
        goto label_244b68;
    }
    ctx->pc = 0x244B60u;
    {
        const bool branch_taken_0x244b60 = (GPR_S32(ctx, 22) >= 0);
        ctx->pc = 0x244B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B60u;
        // 0x244b64: 0x167843  sra         $t7, $s6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244b60) {
            ctx->pc = 0x244B70u;
            goto label_244b70;
        }
    }
    ctx->pc = 0x244B68u;
label_244b68:
    // 0x244b68: 0x26cf0001  addiu       $t7, $s6, 0x1
    ctx->pc = 0x244b68u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_244b6c:
    // 0x244b6c: 0xf7843  sra         $t7, $t7, 1
    ctx->pc = 0x244b6cu;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 1));
label_244b70:
    // 0x244b70: 0x25f90020  addiu       $t9, $t7, 0x20
    ctx->pc = 0x244b70u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 15), 32));
label_244b74:
    // 0x244b74: 0x2716fff0  addiu       $s6, $t8, -0x10
    ctx->pc = 0x244b74u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 24), 4294967280));
label_244b78:
    // 0x244b78: 0x72b821  addu        $s7, $v1, $s2
    ctx->pc = 0x244b78u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_244b7c:
    // 0x244b7c: 0x6c10003  bgez        $s6, . + 4 + (0x3 << 2)
label_244b80:
    if (ctx->pc == 0x244B80u) {
        ctx->pc = 0x244B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B7Cu;
        // 0x244b80: 0x167843  sra         $t7, $s6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244B84u;
        goto label_244b84;
    }
    ctx->pc = 0x244B7Cu;
    {
        const bool branch_taken_0x244b7c = (GPR_S32(ctx, 22) >= 0);
        ctx->pc = 0x244B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B7Cu;
        // 0x244b80: 0x167843  sra         $t7, $s6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244b7c) {
            ctx->pc = 0x244B8Cu;
            goto label_244b8c;
        }
    }
    ctx->pc = 0x244B84u;
label_244b84:
    // 0x244b84: 0x26cf0001  addiu       $t7, $s6, 0x1
    ctx->pc = 0x244b84u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_244b88:
    // 0x244b88: 0xf7843  sra         $t7, $t7, 1
    ctx->pc = 0x244b88u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 1));
label_244b8c:
    // 0x244b8c: 0x2ef7823  subu        $t7, $s7, $t7
    ctx->pc = 0x244b8cu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 15)));
label_244b90:
    // 0x244b90: 0x2737ffe0  addiu       $s7, $t9, -0x20
    ctx->pc = 0x244b90u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967264));
label_244b94:
    // 0x244b94: 0x6e10003  bgez        $s7, . + 4 + (0x3 << 2)
label_244b98:
    if (ctx->pc == 0x244B98u) {
        ctx->pc = 0x244B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B94u;
        // 0x244b98: 0x17b043  sra         $s6, $s7, 1 (Delay Slot)
        SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244B9Cu;
        goto label_244b9c;
    }
    ctx->pc = 0x244B94u;
    {
        const bool branch_taken_0x244b94 = (GPR_S32(ctx, 23) >= 0);
        ctx->pc = 0x244B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B94u;
        // 0x244b98: 0x17b043  sra         $s6, $s7, 1 (Delay Slot)
        SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244b94) {
            ctx->pc = 0x244BA4u;
            goto label_244ba4;
        }
    }
    ctx->pc = 0x244B9Cu;
label_244b9c:
    // 0x244b9c: 0x26f60001  addiu       $s6, $s7, 0x1
    ctx->pc = 0x244b9cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_244ba0:
    // 0x244ba0: 0x16b043  sra         $s6, $s6, 1
    ctx->pc = 0x244ba0u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 22), 1));
label_244ba4:
    // 0x244ba4: 0x3d6b023  subu        $s6, $fp, $s6
    ctx->pc = 0x244ba4u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 22)));
label_244ba8:
    // 0x244ba8: 0x1081c0  sll         $s0, $s0, 7
    ctx->pc = 0x244ba8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
label_244bac:
    // 0x244bac: 0x20a001a  div         $zero, $s0, $t2
    ctx->pc = 0x244bacu;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_244bb0:
    // 0x244bb0: 0x0  nop
    ctx->pc = 0x244bb0u;
    // NOP
label_244bb4:
    // 0x244bb4: 0x0  nop
    ctx->pc = 0x244bb4u;
    // NOP
label_244bb8:
    // 0x244bb8: 0x8012  mflo        $s0
    ctx->pc = 0x244bb8u;
    SET_GPR_U64(ctx, 16, ctx->lo);
label_244bbc:
    // 0x244bbc: 0x1000000d  b           . + 4 + (0xD << 2)
label_244bc0:
    if (ctx->pc == 0x244BC0u) {
        ctx->pc = 0x244BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244BBCu;
        // 0x244bc0: 0x321000ff  andi        $s0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x244BC4u;
        goto label_244bc4;
    }
    ctx->pc = 0x244BBCu;
    {
        const bool branch_taken_0x244bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244BBCu;
        // 0x244bc0: 0x321000ff  andi        $s0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x244bbc) {
            ctx->pc = 0x244BF4u;
            goto label_244bf4;
        }
    }
    ctx->pc = 0x244BC4u;
label_244bc4:
    // 0x244bc4: 0x0  nop
    ctx->pc = 0x244bc4u;
    // NOP
label_244bc8:
    // 0x244bc8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_244bcc:
    if (ctx->pc == 0x244BCCu) {
        ctx->pc = 0x244BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244BC8u;
        // 0x244bcc: 0x2418000c  addiu       $t8, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244BD0u;
        goto label_244bd0;
    }
    ctx->pc = 0x244BC8u;
    {
        const bool branch_taken_0x244bc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x244BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244BC8u;
        // 0x244bcc: 0x2418000c  addiu       $t8, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244bc8) {
            ctx->pc = 0x244BE0u;
            goto label_244be0;
        }
    }
    ctx->pc = 0x244BD0u;
label_244bd0:
    // 0x244bd0: 0x24190014  addiu       $t9, $zero, 0x14
    ctx->pc = 0x244bd0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_244bd4:
    // 0x244bd4: 0x1b17821  addu        $t7, $t5, $s1
    ctx->pc = 0x244bd4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 17)));
label_244bd8:
    // 0x244bd8: 0x10000005  b           . + 4 + (0x5 << 2)
label_244bdc:
    if (ctx->pc == 0x244BDCu) {
        ctx->pc = 0x244BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244BD8u;
        // 0x244bdc: 0x24960076  addiu       $s6, $a0, 0x76 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 118));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244BE0u;
        goto label_244be0;
    }
    ctx->pc = 0x244BD8u;
    {
        const bool branch_taken_0x244bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244BD8u;
        // 0x244bdc: 0x24960076  addiu       $s6, $a0, 0x76 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 118));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244bd8) {
            ctx->pc = 0x244BF0u;
            goto label_244bf0;
        }
    }
    ctx->pc = 0x244BE0u;
label_244be0:
    // 0x244be0: 0x24180010  addiu       $t8, $zero, 0x10
    ctx->pc = 0x244be0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_244be4:
    // 0x244be4: 0x24190020  addiu       $t9, $zero, 0x20
    ctx->pc = 0x244be4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_244be8:
    // 0x244be8: 0x727821  addu        $t7, $v1, $s2
    ctx->pc = 0x244be8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_244bec:
    // 0x244bec: 0x241600b0  addiu       $s6, $zero, 0xB0
    ctx->pc = 0x244becu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_244bf0:
    // 0x244bf0: 0x64100080  daddiu      $s0, $zero, 0x80
    ctx->pc = 0x244bf0u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
label_244bf4:
    // 0x244bf4: 0x0  nop
    ctx->pc = 0x244bf4u;
    // NOP
label_244bf8:
    // 0x244bf8: 0x1f8b821  addu        $s7, $t7, $t8
    ctx->pc = 0x244bf8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 24)));
label_244bfc:
    // 0x244bfc: 0xf7900  sll         $t7, $t7, 4
    ctx->pc = 0x244bfcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
label_244c00:
    // 0x244c00: 0x17b900  sll         $s7, $s7, 4
    ctx->pc = 0x244c00u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
label_244c04:
    // 0x244c04: 0x25ef6c00  addiu       $t7, $t7, 0x6C00
    ctx->pc = 0x244c04u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 27648));
label_244c08:
    // 0x244c08: 0x26f76c00  addiu       $s7, $s7, 0x6C00
    ctx->pc = 0x244c08u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 27648));
label_244c0c:
    // 0x244c0c: 0xa4cf0080  sh          $t7, 0x80($a2)
    ctx->pc = 0x244c0cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 128), (uint16_t)GPR_U32(ctx, 15));
label_244c10:
    // 0x244c10: 0x2d97821  addu        $t7, $s6, $t9
    ctx->pc = 0x244c10u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 25)));
label_244c14:
    // 0x244c14: 0xa4d70090  sh          $s7, 0x90($a2)
    ctx->pc = 0x244c14u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 144), (uint16_t)GPR_U32(ctx, 23));
label_244c18:
    // 0x244c18: 0x16b0c0  sll         $s6, $s6, 3
    ctx->pc = 0x244c18u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
label_244c1c:
    // 0x244c1c: 0xf78c0  sll         $t7, $t7, 3
    ctx->pc = 0x244c1cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 3));
label_244c20:
    // 0x244c20: 0x26d67900  addiu       $s6, $s6, 0x7900
    ctx->pc = 0x244c20u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 30976));
label_244c24:
    // 0x244c24: 0x25ef7900  addiu       $t7, $t7, 0x7900
    ctx->pc = 0x244c24u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 30976));
label_244c28:
    // 0x244c28: 0xa4d60082  sh          $s6, 0x82($a2)
    ctx->pc = 0x244c28u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 130), (uint16_t)GPR_U32(ctx, 22));
label_244c2c:
    // 0x244c2c: 0x10000009  b           . + 4 + (0x9 << 2)
label_244c30:
    if (ctx->pc == 0x244C30u) {
        ctx->pc = 0x244C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244C2Cu;
        // 0x244c30: 0xa4cf0092  sh          $t7, 0x92($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 146), (uint16_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244C34u;
        goto label_244c34;
    }
    ctx->pc = 0x244C2Cu;
    {
        const bool branch_taken_0x244c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244C2Cu;
        // 0x244c30: 0xa4cf0092  sh          $t7, 0x92($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 146), (uint16_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244c2c) {
            ctx->pc = 0x244C54u;
            goto label_244c54;
        }
    }
    ctx->pc = 0x244C34u;
label_244c34:
    // 0x244c34: 0x0  nop
    ctx->pc = 0x244c34u;
    // NOP
label_244c38:
    // 0x244c38: 0x2950018  mult        $zero, $s4, $s5
    ctx->pc = 0x244c38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_244c3c:
    // 0x244c3c: 0x0  nop
    ctx->pc = 0x244c3cu;
    // NOP
label_244c40:
    // 0x244c40: 0x0  nop
    ctx->pc = 0x244c40u;
    // NOP
label_244c44:
    // 0x244c44: 0x7810  mfhi        $t7
    ctx->pc = 0x244c44u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_244c48:
    // 0x244c48: 0xf7883  sra         $t7, $t7, 2
    ctx->pc = 0x244c48u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 2));
label_244c4c:
    // 0x244c4c: 0x1f37821  addu        $t7, $t7, $s3
    ctx->pc = 0x244c4cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 19)));
label_244c50:
    // 0x244c50: 0x31f000ff  andi        $s0, $t7, 0xFF
    ctx->pc = 0x244c50u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)255);
label_244c54:
    // 0x244c54: 0x0  nop
    ctx->pc = 0x244c54u;
    // NOP
label_244c58:
    // 0x244c58: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x244c58u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
label_244c5c:
    // 0x244c5c: 0xa0d00073  sb          $s0, 0x73($a2)
    ctx->pc = 0x244c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 115), (uint8_t)GPR_U32(ctx, 16));
label_244c60:
    // 0x244c60: 0x1c8782a  slt         $t7, $t6, $t0
    ctx->pc = 0x244c60u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_244c64:
    // 0x244c64: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x244c64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_244c68:
    // 0x244c68: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x244c68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_244c6c:
    // 0x244c6c: 0x15e0ff74  bnez        $t7, . + 4 + (-0x8C << 2)
label_244c70:
    if (ctx->pc == 0x244C70u) {
        ctx->pc = 0x244C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244C6Cu;
        // 0x244c70: 0x24c600a0  addiu       $a2, $a2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244C74u;
        goto label_244c74;
    }
    ctx->pc = 0x244C6Cu;
    {
        const bool branch_taken_0x244c6c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x244C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244C6Cu;
        // 0x244c70: 0x24c600a0  addiu       $a2, $a2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244c6c) {
            ctx->pc = 0x244A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_244a40;
        }
    }
    ctx->pc = 0x244C74u;
label_244c74:
    // 0x244c74: 0x0  nop
    ctx->pc = 0x244c74u;
    // NOP
label_244c78:
    // 0x244c78: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x244c78u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_244c7c:
    // 0x244c7c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x244c7cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_244c80:
    // 0x244c80: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x244c80u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_244c84:
    // 0x244c84: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x244c84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_244c88:
    // 0x244c88: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x244c88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_244c8c:
    // 0x244c8c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x244c8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_244c90:
    // 0x244c90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x244c90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_244c94:
    // 0x244c94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x244c94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_244c98:
    // 0x244c98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x244c98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_244c9c:
    // 0x244c9c: 0x3e00008  jr          $ra
label_244ca0:
    if (ctx->pc == 0x244CA0u) {
        ctx->pc = 0x244CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244C9Cu;
        // 0x244ca0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244CA4u;
        goto label_244ca4;
    }
    ctx->pc = 0x244C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244C9Cu;
        // 0x244ca0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244CA4u;
label_244ca4:
    // 0x244ca4: 0x0  nop
    ctx->pc = 0x244ca4u;
    // NOP
label_244ca8:
    // 0x244ca8: 0x0  nop
    ctx->pc = 0x244ca8u;
    // NOP
label_244cac:
    // 0x244cac: 0x0  nop
    ctx->pc = 0x244cacu;
    // NOP
label_244cb0:
    // 0x244cb0: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x244cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_244cb4:
    // 0x244cb4: 0x685021  addu        $t2, $v1, $t0
    ctx->pc = 0x244cb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_244cb8:
    // 0x244cb8: 0x5410003  bgez        $t2, . + 4 + (0x3 << 2)
label_244cbc:
    if (ctx->pc == 0x244CBCu) {
        ctx->pc = 0x244CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244CB8u;
        // 0x244cbc: 0xa4843  sra         $t1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244CC0u;
        goto label_244cc0;
    }
    ctx->pc = 0x244CB8u;
    {
        const bool branch_taken_0x244cb8 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x244CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244CB8u;
        // 0x244cbc: 0xa4843  sra         $t1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244cb8) {
            ctx->pc = 0x244CC8u;
            goto label_244cc8;
        }
    }
    ctx->pc = 0x244CC0u;
label_244cc0:
    // 0x244cc0: 0x25430001  addiu       $v1, $t2, 0x1
    ctx->pc = 0x244cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_244cc4:
    // 0x244cc4: 0x34843  sra         $t1, $v1, 1
    ctx->pc = 0x244cc4u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 3), 1));
label_244cc8:
    // 0x244cc8: 0xe9082a  slt         $at, $a3, $t1
    ctx->pc = 0x244cc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_244ccc:
    // 0x244ccc: 0x1020005e  beqz        $at, . + 4 + (0x5E << 2)
label_244cd0:
    if (ctx->pc == 0x244CD0u) {
        ctx->pc = 0x244CD4u;
        goto label_244cd4;
    }
    ctx->pc = 0x244CCCu;
    {
        const bool branch_taken_0x244ccc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x244ccc) {
            ctx->pc = 0x244E48u;
            { ctx->pc = 0x244e48; return; }
        }
    }
    ctx->pc = 0x244CD4u;
label_244cd4:
    // 0x244cd4: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_244cd8:
    if (ctx->pc == 0x244CD8u) {
        ctx->pc = 0x244CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244CD4u;
        // 0x244cd8: 0x254a0080  addiu       $t2, $t2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244CDCu;
        goto label_244cdc;
    }
    ctx->pc = 0x244CD4u;
    {
        const bool branch_taken_0x244cd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x244CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244CD4u;
        // 0x244cd8: 0x254a0080  addiu       $t2, $t2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244cd4) {
            ctx->pc = 0x244D00u;
            goto label_244d00;
        }
    }
    ctx->pc = 0x244CDCu;
label_244cdc:
    // 0x244cdc: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x244cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
label_244ce0:
    // 0x244ce0: 0xa5840  sll         $t3, $t2, 1
    ctx->pc = 0x244ce0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_244ce4:
    // 0x244ce4: 0x34635556  ori         $v1, $v1, 0x5556
    ctx->pc = 0x244ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
label_244ce8:
    // 0x244ce8: 0xb57c2  srl         $t2, $t3, 31
    ctx->pc = 0x244ce8u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 11), 31));
label_244cec:
    // 0x244cec: 0x6b0018  mult        $zero, $v1, $t3
    ctx->pc = 0x244cecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_244cf0:
    // 0x244cf0: 0x0  nop
    ctx->pc = 0x244cf0u;
    // NOP
label_244cf4:
    // 0x244cf4: 0x0  nop
    ctx->pc = 0x244cf4u;
    // NOP
label_244cf8:
    // 0x244cf8: 0x1810  mfhi        $v1
    ctx->pc = 0x244cf8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_244cfc:
    // 0x244cfc: 0x6a5021  addu        $t2, $v1, $t2
    ctx->pc = 0x244cfcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_244d00:
    // 0x244d00: 0xe8082a  slt         $at, $a3, $t0
    ctx->pc = 0x244d00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_244d04:
    // 0x244d04: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
label_244d08:
    if (ctx->pc == 0x244D08u) {
        ctx->pc = 0x244D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D04u;
        // 0x244d08: 0xe81823  subu        $v1, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244D0Cu;
        goto label_244d0c;
    }
    ctx->pc = 0x244D04u;
    {
        const bool branch_taken_0x244d04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x244D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D04u;
        // 0x244d08: 0xe81823  subu        $v1, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244d04) {
            ctx->pc = 0x244D80u;
            goto label_244d80;
        }
    }
    ctx->pc = 0x244D0Cu;
label_244d0c:
    // 0x244d0c: 0x1474818  mult        $t1, $t2, $a3
    ctx->pc = 0x244d0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_244d10:
    // 0x244d10: 0x128001a  div         $zero, $t1, $t0
    ctx->pc = 0x244d10u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_244d14:
    // 0x244d14: 0x0  nop
    ctx->pc = 0x244d14u;
    // NOP
label_244d18:
    // 0x244d18: 0x0  nop
    ctx->pc = 0x244d18u;
    // NOP
label_244d1c:
    // 0x244d1c: 0x5812  mflo        $t3
    ctx->pc = 0x244d1cu;
    SET_GPR_U64(ctx, 11, ctx->lo);
label_244d20:
    // 0x244d20: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_244d24:
    if (ctx->pc == 0x244D24u) {
        ctx->pc = 0x244D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D20u;
        // 0x244d24: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244D28u;
        goto label_244d28;
    }
    ctx->pc = 0x244D20u;
    {
        const bool branch_taken_0x244d20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x244D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D20u;
        // 0x244d24: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244d20) {
            ctx->pc = 0x244D54u;
            goto label_244d54;
        }
    }
    ctx->pc = 0x244D28u;
label_244d28:
    // 0x244d28: 0x448c0  sll         $t1, $a0, 3
    ctx->pc = 0x244d28u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_244d2c:
    // 0x244d2c: 0xb2843  sra         $a1, $t3, 1
    ctx->pc = 0x244d2cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 11), 1));
label_244d30:
    // 0x244d30: 0x1242023  subu        $a0, $t1, $a0
    ctx->pc = 0x244d30u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_244d34:
    // 0x244d34: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x244d34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_244d38:
    // 0x244d38: 0x5610003  bgez        $t3, . + 4 + (0x3 << 2)
label_244d3c:
    if (ctx->pc == 0x244D3Cu) {
        ctx->pc = 0x244D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D38u;
        // 0x244d3c: 0x248a0078  addiu       $t2, $a0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244D40u;
        goto label_244d40;
    }
    ctx->pc = 0x244D38u;
    {
        const bool branch_taken_0x244d38 = (GPR_S32(ctx, 11) >= 0);
        ctx->pc = 0x244D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D38u;
        // 0x244d3c: 0x248a0078  addiu       $t2, $a0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244d38) {
            ctx->pc = 0x244D48u;
            goto label_244d48;
        }
    }
    ctx->pc = 0x244D40u;
label_244d40:
    // 0x244d40: 0x25640001  addiu       $a0, $t3, 0x1
    ctx->pc = 0x244d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_244d44:
    // 0x244d44: 0x42843  sra         $a1, $a0, 1
    ctx->pc = 0x244d44u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 1));
label_244d48:
    // 0x244d48: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x244d48u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_244d4c:
    // 0x244d4c: 0x10000003  b           . + 4 + (0x3 << 2)
label_244d50:
    if (ctx->pc == 0x244D50u) {
        ctx->pc = 0x244D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D4Cu;
        // 0x244d50: 0x240c0010  addiu       $t4, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244D54u;
        goto label_244d54;
    }
    ctx->pc = 0x244D4Cu;
    {
        const bool branch_taken_0x244d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D4Cu;
        // 0x244d50: 0x240c0010  addiu       $t4, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244d4c) {
            ctx->pc = 0x244D5Cu;
            goto label_244d5c;
        }
    }
    ctx->pc = 0x244D54u;
label_244d54:
    // 0x244d54: 0x240a00b4  addiu       $t2, $zero, 0xB4
    ctx->pc = 0x244d54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_244d58:
    // 0x244d58: 0x240c0018  addiu       $t4, $zero, 0x18
    ctx->pc = 0x244d58u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_244d5c:
    // 0x244d5c: 0x1072023  subu        $a0, $t0, $a3
    ctx->pc = 0x244d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_244d60:
    // 0x244d60: 0x64090080  daddiu      $t1, $zero, 0x80
    ctx->pc = 0x244d60u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
label_244d64:
    // 0x244d64: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x244d64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
label_244d68:
    // 0x244d68: 0x88001a  div         $zero, $a0, $t0
    ctx->pc = 0x244d68u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_244d6c:
    // 0x244d6c: 0x0  nop
    ctx->pc = 0x244d6cu;
    // NOP
label_244d70:
    // 0x244d70: 0x0  nop
    ctx->pc = 0x244d70u;
    // NOP
label_244d74:
    // 0x244d74: 0x2012  mflo        $a0
    ctx->pc = 0x244d74u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_244d78:
    // 0x244d78: 0x10000020  b           . + 4 + (0x20 << 2)
label_244d7c:
    if (ctx->pc == 0x244D7Cu) {
        ctx->pc = 0x244D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D78u;
        // 0x244d7c: 0x308800ff  andi        $t0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x244D80u;
        goto label_244d80;
    }
    ctx->pc = 0x244D78u;
    {
        const bool branch_taken_0x244d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D78u;
        // 0x244d7c: 0x308800ff  andi        $t0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x244d78) {
            ctx->pc = 0x244DFCu;
            { ctx->pc = 0x244dfc; return; }
        }
    }
    ctx->pc = 0x244D80u;
label_244d80:
    // 0x244d80: 0x1286823  subu        $t5, $t1, $t0
    ctx->pc = 0x244d80u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_244d84:
    // 0x244d84: 0x1431818  mult        $v1, $t2, $v1
    ctx->pc = 0x244d84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_244d88:
    // 0x244d88: 0x6d001a  div         $zero, $v1, $t5
    ctx->pc = 0x244d88u;
    { int32_t divisor = GPR_S32(ctx, 13);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_244d8c:
    // 0x244d8c: 0x0  nop
    ctx->pc = 0x244d8cu;
    // NOP
label_244d90:
    // 0x244d90: 0x0  nop
    ctx->pc = 0x244d90u;
    // NOP
label_244d94:
    // 0x244d94: 0x1812  mflo        $v1
    ctx->pc = 0x244d94u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    ctx->pc = 0x244d98u;
    return;
}
