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


void FUN_0019b618_part169(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1ed698u: goto label_1ed698;
        case 0x1ed69cu: goto label_1ed69c;
        case 0x1ed6a0u: goto label_1ed6a0;
        case 0x1ed6a4u: goto label_1ed6a4;
        case 0x1ed6a8u: goto label_1ed6a8;
        case 0x1ed6acu: goto label_1ed6ac;
        case 0x1ed6b0u: goto label_1ed6b0;
        case 0x1ed6b4u: goto label_1ed6b4;
        case 0x1ed6b8u: goto label_1ed6b8;
        case 0x1ed6bcu: goto label_1ed6bc;
        case 0x1ed6c0u: goto label_1ed6c0;
        case 0x1ed6c4u: goto label_1ed6c4;
        case 0x1ed6c8u: goto label_1ed6c8;
        case 0x1ed6ccu: goto label_1ed6cc;
        case 0x1ed6d0u: goto label_1ed6d0;
        case 0x1ed6d4u: goto label_1ed6d4;
        case 0x1ed6d8u: goto label_1ed6d8;
        case 0x1ed6dcu: goto label_1ed6dc;
        case 0x1ed6e0u: goto label_1ed6e0;
        case 0x1ed6e4u: goto label_1ed6e4;
        case 0x1ed6e8u: goto label_1ed6e8;
        case 0x1ed6ecu: goto label_1ed6ec;
        case 0x1ed6f0u: goto label_1ed6f0;
        case 0x1ed6f4u: goto label_1ed6f4;
        case 0x1ed6f8u: goto label_1ed6f8;
        case 0x1ed6fcu: goto label_1ed6fc;
        case 0x1ed700u: goto label_1ed700;
        case 0x1ed704u: goto label_1ed704;
        case 0x1ed708u: goto label_1ed708;
        case 0x1ed70cu: goto label_1ed70c;
        case 0x1ed710u: goto label_1ed710;
        case 0x1ed714u: goto label_1ed714;
        case 0x1ed718u: goto label_1ed718;
        case 0x1ed71cu: goto label_1ed71c;
        case 0x1ed720u: goto label_1ed720;
        case 0x1ed724u: goto label_1ed724;
        case 0x1ed728u: goto label_1ed728;
        case 0x1ed72cu: goto label_1ed72c;
        case 0x1ed730u: goto label_1ed730;
        case 0x1ed734u: goto label_1ed734;
        case 0x1ed738u: goto label_1ed738;
        case 0x1ed73cu: goto label_1ed73c;
        case 0x1ed740u: goto label_1ed740;
        case 0x1ed744u: goto label_1ed744;
        case 0x1ed748u: goto label_1ed748;
        case 0x1ed74cu: goto label_1ed74c;
        case 0x1ed750u: goto label_1ed750;
        case 0x1ed754u: goto label_1ed754;
        case 0x1ed758u: goto label_1ed758;
        case 0x1ed75cu: goto label_1ed75c;
        case 0x1ed760u: goto label_1ed760;
        case 0x1ed764u: goto label_1ed764;
        case 0x1ed768u: goto label_1ed768;
        case 0x1ed76cu: goto label_1ed76c;
        case 0x1ed770u: goto label_1ed770;
        case 0x1ed774u: goto label_1ed774;
        case 0x1ed778u: goto label_1ed778;
        case 0x1ed77cu: goto label_1ed77c;
        case 0x1ed780u: goto label_1ed780;
        case 0x1ed784u: goto label_1ed784;
        case 0x1ed788u: goto label_1ed788;
        case 0x1ed78cu: goto label_1ed78c;
        case 0x1ed790u: goto label_1ed790;
        case 0x1ed794u: goto label_1ed794;
        case 0x1ed798u: goto label_1ed798;
        case 0x1ed79cu: goto label_1ed79c;
        case 0x1ed7a0u: goto label_1ed7a0;
        case 0x1ed7a4u: goto label_1ed7a4;
        case 0x1ed7a8u: goto label_1ed7a8;
        case 0x1ed7acu: goto label_1ed7ac;
        case 0x1ed7b0u: goto label_1ed7b0;
        case 0x1ed7b4u: goto label_1ed7b4;
        case 0x1ed7b8u: goto label_1ed7b8;
        case 0x1ed7bcu: goto label_1ed7bc;
        case 0x1ed7c0u: goto label_1ed7c0;
        case 0x1ed7c4u: goto label_1ed7c4;
        case 0x1ed7c8u: goto label_1ed7c8;
        case 0x1ed7ccu: goto label_1ed7cc;
        case 0x1ed7d0u: goto label_1ed7d0;
        case 0x1ed7d4u: goto label_1ed7d4;
        case 0x1ed7d8u: goto label_1ed7d8;
        case 0x1ed7dcu: goto label_1ed7dc;
        case 0x1ed7e0u: goto label_1ed7e0;
        case 0x1ed7e4u: goto label_1ed7e4;
        case 0x1ed7e8u: goto label_1ed7e8;
        case 0x1ed7ecu: goto label_1ed7ec;
        case 0x1ed7f0u: goto label_1ed7f0;
        case 0x1ed7f4u: goto label_1ed7f4;
        case 0x1ed7f8u: goto label_1ed7f8;
        case 0x1ed7fcu: goto label_1ed7fc;
        case 0x1ed800u: goto label_1ed800;
        case 0x1ed804u: goto label_1ed804;
        case 0x1ed808u: goto label_1ed808;
        case 0x1ed80cu: goto label_1ed80c;
        case 0x1ed810u: goto label_1ed810;
        case 0x1ed814u: goto label_1ed814;
        case 0x1ed818u: goto label_1ed818;
        case 0x1ed81cu: goto label_1ed81c;
        case 0x1ed820u: goto label_1ed820;
        case 0x1ed824u: goto label_1ed824;
        case 0x1ed828u: goto label_1ed828;
        case 0x1ed82cu: goto label_1ed82c;
        case 0x1ed830u: goto label_1ed830;
        case 0x1ed834u: goto label_1ed834;
        case 0x1ed838u: goto label_1ed838;
        case 0x1ed83cu: goto label_1ed83c;
        case 0x1ed840u: goto label_1ed840;
        case 0x1ed844u: goto label_1ed844;
        case 0x1ed848u: goto label_1ed848;
        case 0x1ed84cu: goto label_1ed84c;
        case 0x1ed850u: goto label_1ed850;
        case 0x1ed854u: goto label_1ed854;
        case 0x1ed858u: goto label_1ed858;
        case 0x1ed85cu: goto label_1ed85c;
        case 0x1ed860u: goto label_1ed860;
        case 0x1ed864u: goto label_1ed864;
        case 0x1ed868u: goto label_1ed868;
        case 0x1ed86cu: goto label_1ed86c;
        case 0x1ed870u: goto label_1ed870;
        case 0x1ed874u: goto label_1ed874;
        case 0x1ed878u: goto label_1ed878;
        case 0x1ed87cu: goto label_1ed87c;
        case 0x1ed880u: goto label_1ed880;
        case 0x1ed884u: goto label_1ed884;
        case 0x1ed888u: goto label_1ed888;
        case 0x1ed88cu: goto label_1ed88c;
        case 0x1ed890u: goto label_1ed890;
        case 0x1ed894u: goto label_1ed894;
        case 0x1ed898u: goto label_1ed898;
        case 0x1ed89cu: goto label_1ed89c;
        case 0x1ed8a0u: goto label_1ed8a0;
        case 0x1ed8a4u: goto label_1ed8a4;
        case 0x1ed8a8u: goto label_1ed8a8;
        case 0x1ed8acu: goto label_1ed8ac;
        case 0x1ed8b0u: goto label_1ed8b0;
        case 0x1ed8b4u: goto label_1ed8b4;
        case 0x1ed8b8u: goto label_1ed8b8;
        case 0x1ed8bcu: goto label_1ed8bc;
        case 0x1ed8c0u: goto label_1ed8c0;
        case 0x1ed8c4u: goto label_1ed8c4;
        case 0x1ed8c8u: goto label_1ed8c8;
        case 0x1ed8ccu: goto label_1ed8cc;
        case 0x1ed8d0u: goto label_1ed8d0;
        case 0x1ed8d4u: goto label_1ed8d4;
        case 0x1ed8d8u: goto label_1ed8d8;
        case 0x1ed8dcu: goto label_1ed8dc;
        case 0x1ed8e0u: goto label_1ed8e0;
        case 0x1ed8e4u: goto label_1ed8e4;
        case 0x1ed8e8u: goto label_1ed8e8;
        case 0x1ed8ecu: goto label_1ed8ec;
        case 0x1ed8f0u: goto label_1ed8f0;
        case 0x1ed8f4u: goto label_1ed8f4;
        case 0x1ed8f8u: goto label_1ed8f8;
        case 0x1ed8fcu: goto label_1ed8fc;
        case 0x1ed900u: goto label_1ed900;
        case 0x1ed904u: goto label_1ed904;
        case 0x1ed908u: goto label_1ed908;
        case 0x1ed90cu: goto label_1ed90c;
        case 0x1ed910u: goto label_1ed910;
        case 0x1ed914u: goto label_1ed914;
        case 0x1ed918u: goto label_1ed918;
        case 0x1ed91cu: goto label_1ed91c;
        case 0x1ed920u: goto label_1ed920;
        case 0x1ed924u: goto label_1ed924;
        case 0x1ed928u: goto label_1ed928;
        case 0x1ed92cu: goto label_1ed92c;
        case 0x1ed930u: goto label_1ed930;
        case 0x1ed934u: goto label_1ed934;
        case 0x1ed938u: goto label_1ed938;
        case 0x1ed93cu: goto label_1ed93c;
        case 0x1ed940u: goto label_1ed940;
        case 0x1ed944u: goto label_1ed944;
        case 0x1ed948u: goto label_1ed948;
        case 0x1ed94cu: goto label_1ed94c;
        case 0x1ed950u: goto label_1ed950;
        case 0x1ed954u: goto label_1ed954;
        case 0x1ed958u: goto label_1ed958;
        case 0x1ed95cu: goto label_1ed95c;
        case 0x1ed960u: goto label_1ed960;
        case 0x1ed964u: goto label_1ed964;
        case 0x1ed968u: goto label_1ed968;
        case 0x1ed96cu: goto label_1ed96c;
        case 0x1ed970u: goto label_1ed970;
        case 0x1ed974u: goto label_1ed974;
        case 0x1ed978u: goto label_1ed978;
        case 0x1ed97cu: goto label_1ed97c;
        case 0x1ed980u: goto label_1ed980;
        case 0x1ed984u: goto label_1ed984;
        case 0x1ed988u: goto label_1ed988;
        case 0x1ed98cu: goto label_1ed98c;
        case 0x1ed990u: goto label_1ed990;
        case 0x1ed994u: goto label_1ed994;
        case 0x1ed998u: goto label_1ed998;
        case 0x1ed99cu: goto label_1ed99c;
        case 0x1ed9a0u: goto label_1ed9a0;
        case 0x1ed9a4u: goto label_1ed9a4;
        case 0x1ed9a8u: goto label_1ed9a8;
        case 0x1ed9acu: goto label_1ed9ac;
        case 0x1ed9b0u: goto label_1ed9b0;
        case 0x1ed9b4u: goto label_1ed9b4;
        case 0x1ed9b8u: goto label_1ed9b8;
        case 0x1ed9bcu: goto label_1ed9bc;
        case 0x1ed9c0u: goto label_1ed9c0;
        case 0x1ed9c4u: goto label_1ed9c4;
        case 0x1ed9c8u: goto label_1ed9c8;
        case 0x1ed9ccu: goto label_1ed9cc;
        case 0x1ed9d0u: goto label_1ed9d0;
        case 0x1ed9d4u: goto label_1ed9d4;
        case 0x1ed9d8u: goto label_1ed9d8;
        case 0x1ed9dcu: goto label_1ed9dc;
        case 0x1ed9e0u: goto label_1ed9e0;
        case 0x1ed9e4u: goto label_1ed9e4;
        case 0x1ed9e8u: goto label_1ed9e8;
        case 0x1ed9ecu: goto label_1ed9ec;
        case 0x1ed9f0u: goto label_1ed9f0;
        case 0x1ed9f4u: goto label_1ed9f4;
        case 0x1ed9f8u: goto label_1ed9f8;
        case 0x1ed9fcu: goto label_1ed9fc;
        case 0x1eda00u: goto label_1eda00;
        case 0x1eda04u: goto label_1eda04;
        case 0x1eda08u: goto label_1eda08;
        case 0x1eda0cu: goto label_1eda0c;
        case 0x1eda10u: goto label_1eda10;
        case 0x1eda14u: goto label_1eda14;
        case 0x1eda18u: goto label_1eda18;
        case 0x1eda1cu: goto label_1eda1c;
        case 0x1eda20u: goto label_1eda20;
        case 0x1eda24u: goto label_1eda24;
        case 0x1eda28u: goto label_1eda28;
        case 0x1eda2cu: goto label_1eda2c;
        case 0x1eda30u: goto label_1eda30;
        case 0x1eda34u: goto label_1eda34;
        case 0x1eda38u: goto label_1eda38;
        case 0x1eda3cu: goto label_1eda3c;
        case 0x1eda40u: goto label_1eda40;
        case 0x1eda44u: goto label_1eda44;
        case 0x1eda48u: goto label_1eda48;
        case 0x1eda4cu: goto label_1eda4c;
        case 0x1eda50u: goto label_1eda50;
        case 0x1eda54u: goto label_1eda54;
        case 0x1eda58u: goto label_1eda58;
        case 0x1eda5cu: goto label_1eda5c;
        case 0x1eda60u: goto label_1eda60;
        case 0x1eda64u: goto label_1eda64;
        case 0x1eda68u: goto label_1eda68;
        case 0x1eda6cu: goto label_1eda6c;
        case 0x1eda70u: goto label_1eda70;
        case 0x1eda74u: goto label_1eda74;
        case 0x1eda78u: goto label_1eda78;
        case 0x1eda7cu: goto label_1eda7c;
        case 0x1eda80u: goto label_1eda80;
        case 0x1eda84u: goto label_1eda84;
        case 0x1eda88u: goto label_1eda88;
        case 0x1eda8cu: goto label_1eda8c;
        case 0x1eda90u: goto label_1eda90;
        case 0x1eda94u: goto label_1eda94;
        case 0x1eda98u: goto label_1eda98;
        case 0x1eda9cu: goto label_1eda9c;
        case 0x1edaa0u: goto label_1edaa0;
        case 0x1edaa4u: goto label_1edaa4;
        case 0x1edaa8u: goto label_1edaa8;
        case 0x1edaacu: goto label_1edaac;
        case 0x1edab0u: goto label_1edab0;
        case 0x1edab4u: goto label_1edab4;
        case 0x1edab8u: goto label_1edab8;
        case 0x1edabcu: goto label_1edabc;
        case 0x1edac0u: goto label_1edac0;
        case 0x1edac4u: goto label_1edac4;
        case 0x1edac8u: goto label_1edac8;
        case 0x1edaccu: goto label_1edacc;
        case 0x1edad0u: goto label_1edad0;
        case 0x1edad4u: goto label_1edad4;
        case 0x1edad8u: goto label_1edad8;
        case 0x1edadcu: goto label_1edadc;
        case 0x1edae0u: goto label_1edae0;
        case 0x1edae4u: goto label_1edae4;
        case 0x1edae8u: goto label_1edae8;
        case 0x1edaecu: goto label_1edaec;
        case 0x1edaf0u: goto label_1edaf0;
        case 0x1edaf4u: goto label_1edaf4;
        case 0x1edaf8u: goto label_1edaf8;
        case 0x1edafcu: goto label_1edafc;
        case 0x1edb00u: goto label_1edb00;
        case 0x1edb04u: goto label_1edb04;
        case 0x1edb08u: goto label_1edb08;
        case 0x1edb0cu: goto label_1edb0c;
        case 0x1edb10u: goto label_1edb10;
        case 0x1edb14u: goto label_1edb14;
        case 0x1edb18u: goto label_1edb18;
        case 0x1edb1cu: goto label_1edb1c;
        case 0x1edb20u: goto label_1edb20;
        case 0x1edb24u: goto label_1edb24;
        case 0x1edb28u: goto label_1edb28;
        case 0x1edb2cu: goto label_1edb2c;
        case 0x1edb30u: goto label_1edb30;
        case 0x1edb34u: goto label_1edb34;
        case 0x1edb38u: goto label_1edb38;
        case 0x1edb3cu: goto label_1edb3c;
        case 0x1edb40u: goto label_1edb40;
        case 0x1edb44u: goto label_1edb44;
        case 0x1edb48u: goto label_1edb48;
        case 0x1edb4cu: goto label_1edb4c;
        case 0x1edb50u: goto label_1edb50;
        case 0x1edb54u: goto label_1edb54;
        case 0x1edb58u: goto label_1edb58;
        case 0x1edb5cu: goto label_1edb5c;
        case 0x1edb60u: goto label_1edb60;
        case 0x1edb64u: goto label_1edb64;
        case 0x1edb68u: goto label_1edb68;
        case 0x1edb6cu: goto label_1edb6c;
        case 0x1edb70u: goto label_1edb70;
        case 0x1edb74u: goto label_1edb74;
        case 0x1edb78u: goto label_1edb78;
        case 0x1edb7cu: goto label_1edb7c;
        case 0x1edb80u: goto label_1edb80;
        case 0x1edb84u: goto label_1edb84;
        case 0x1edb88u: goto label_1edb88;
        case 0x1edb8cu: goto label_1edb8c;
        case 0x1edb90u: goto label_1edb90;
        case 0x1edb94u: goto label_1edb94;
        case 0x1edb98u: goto label_1edb98;
        case 0x1edb9cu: goto label_1edb9c;
        case 0x1edba0u: goto label_1edba0;
        case 0x1edba4u: goto label_1edba4;
        case 0x1edba8u: goto label_1edba8;
        case 0x1edbacu: goto label_1edbac;
        case 0x1edbb0u: goto label_1edbb0;
        case 0x1edbb4u: goto label_1edbb4;
        case 0x1edbb8u: goto label_1edbb8;
        case 0x1edbbcu: goto label_1edbbc;
        case 0x1edbc0u: goto label_1edbc0;
        case 0x1edbc4u: goto label_1edbc4;
        case 0x1edbc8u: goto label_1edbc8;
        case 0x1edbccu: goto label_1edbcc;
        case 0x1edbd0u: goto label_1edbd0;
        case 0x1edbd4u: goto label_1edbd4;
        case 0x1edbd8u: goto label_1edbd8;
        case 0x1edbdcu: goto label_1edbdc;
        case 0x1edbe0u: goto label_1edbe0;
        case 0x1edbe4u: goto label_1edbe4;
        case 0x1edbe8u: goto label_1edbe8;
        case 0x1edbecu: goto label_1edbec;
        case 0x1edbf0u: goto label_1edbf0;
        case 0x1edbf4u: goto label_1edbf4;
        case 0x1edbf8u: goto label_1edbf8;
        case 0x1edbfcu: goto label_1edbfc;
        case 0x1edc00u: goto label_1edc00;
        case 0x1edc04u: goto label_1edc04;
        case 0x1edc08u: goto label_1edc08;
        case 0x1edc0cu: goto label_1edc0c;
        case 0x1edc10u: goto label_1edc10;
        case 0x1edc14u: goto label_1edc14;
        case 0x1edc18u: goto label_1edc18;
        case 0x1edc1cu: goto label_1edc1c;
        case 0x1edc20u: goto label_1edc20;
        case 0x1edc24u: goto label_1edc24;
        case 0x1edc28u: goto label_1edc28;
        case 0x1edc2cu: goto label_1edc2c;
        case 0x1edc30u: goto label_1edc30;
        case 0x1edc34u: goto label_1edc34;
        case 0x1edc38u: goto label_1edc38;
        case 0x1edc3cu: goto label_1edc3c;
        case 0x1edc40u: goto label_1edc40;
        case 0x1edc44u: goto label_1edc44;
        case 0x1edc48u: goto label_1edc48;
        case 0x1edc4cu: goto label_1edc4c;
        case 0x1edc50u: goto label_1edc50;
        case 0x1edc54u: goto label_1edc54;
        case 0x1edc58u: goto label_1edc58;
        case 0x1edc5cu: goto label_1edc5c;
        case 0x1edc60u: goto label_1edc60;
        case 0x1edc64u: goto label_1edc64;
        case 0x1edc68u: goto label_1edc68;
        case 0x1edc6cu: goto label_1edc6c;
        case 0x1edc70u: goto label_1edc70;
        case 0x1edc74u: goto label_1edc74;
        case 0x1edc78u: goto label_1edc78;
        case 0x1edc7cu: goto label_1edc7c;
        case 0x1edc80u: goto label_1edc80;
        case 0x1edc84u: goto label_1edc84;
        case 0x1edc88u: goto label_1edc88;
        case 0x1edc8cu: goto label_1edc8c;
        case 0x1edc90u: goto label_1edc90;
        case 0x1edc94u: goto label_1edc94;
        case 0x1edc98u: goto label_1edc98;
        case 0x1edc9cu: goto label_1edc9c;
        case 0x1edca0u: goto label_1edca0;
        case 0x1edca4u: goto label_1edca4;
        case 0x1edca8u: goto label_1edca8;
        case 0x1edcacu: goto label_1edcac;
        case 0x1edcb0u: goto label_1edcb0;
        case 0x1edcb4u: goto label_1edcb4;
        case 0x1edcb8u: goto label_1edcb8;
        case 0x1edcbcu: goto label_1edcbc;
        case 0x1edcc0u: goto label_1edcc0;
        case 0x1edcc4u: goto label_1edcc4;
        case 0x1edcc8u: goto label_1edcc8;
        case 0x1edcccu: goto label_1edccc;
        case 0x1edcd0u: goto label_1edcd0;
        case 0x1edcd4u: goto label_1edcd4;
        case 0x1edcd8u: goto label_1edcd8;
        case 0x1edcdcu: goto label_1edcdc;
        case 0x1edce0u: goto label_1edce0;
        case 0x1edce4u: goto label_1edce4;
        case 0x1edce8u: goto label_1edce8;
        case 0x1edcecu: goto label_1edcec;
        case 0x1edcf0u: goto label_1edcf0;
        case 0x1edcf4u: goto label_1edcf4;
        case 0x1edcf8u: goto label_1edcf8;
        case 0x1edcfcu: goto label_1edcfc;
        case 0x1edd00u: goto label_1edd00;
        case 0x1edd04u: goto label_1edd04;
        case 0x1edd08u: goto label_1edd08;
        case 0x1edd0cu: goto label_1edd0c;
        case 0x1edd10u: goto label_1edd10;
        case 0x1edd14u: goto label_1edd14;
        case 0x1edd18u: goto label_1edd18;
        case 0x1edd1cu: goto label_1edd1c;
        case 0x1edd20u: goto label_1edd20;
        case 0x1edd24u: goto label_1edd24;
        case 0x1edd28u: goto label_1edd28;
        case 0x1edd2cu: goto label_1edd2c;
        case 0x1edd30u: goto label_1edd30;
        case 0x1edd34u: goto label_1edd34;
        case 0x1edd38u: goto label_1edd38;
        case 0x1edd3cu: goto label_1edd3c;
        case 0x1edd40u: goto label_1edd40;
        case 0x1edd44u: goto label_1edd44;
        case 0x1edd48u: goto label_1edd48;
        case 0x1edd4cu: goto label_1edd4c;
        case 0x1edd50u: goto label_1edd50;
        case 0x1edd54u: goto label_1edd54;
        case 0x1edd58u: goto label_1edd58;
        case 0x1edd5cu: goto label_1edd5c;
        case 0x1edd60u: goto label_1edd60;
        case 0x1edd64u: goto label_1edd64;
        case 0x1edd68u: goto label_1edd68;
        case 0x1edd6cu: goto label_1edd6c;
        case 0x1edd70u: goto label_1edd70;
        case 0x1edd74u: goto label_1edd74;
        case 0x1edd78u: goto label_1edd78;
        case 0x1edd7cu: goto label_1edd7c;
        case 0x1edd80u: goto label_1edd80;
        case 0x1edd84u: goto label_1edd84;
        case 0x1edd88u: goto label_1edd88;
        case 0x1edd8cu: goto label_1edd8c;
        case 0x1edd90u: goto label_1edd90;
        case 0x1edd94u: goto label_1edd94;
        case 0x1edd98u: goto label_1edd98;
        case 0x1edd9cu: goto label_1edd9c;
        case 0x1edda0u: goto label_1edda0;
        case 0x1edda4u: goto label_1edda4;
        case 0x1edda8u: goto label_1edda8;
        case 0x1eddacu: goto label_1eddac;
        case 0x1eddb0u: goto label_1eddb0;
        case 0x1eddb4u: goto label_1eddb4;
        case 0x1eddb8u: goto label_1eddb8;
        case 0x1eddbcu: goto label_1eddbc;
        case 0x1eddc0u: goto label_1eddc0;
        case 0x1eddc4u: goto label_1eddc4;
        case 0x1eddc8u: goto label_1eddc8;
        case 0x1eddccu: goto label_1eddcc;
        case 0x1eddd0u: goto label_1eddd0;
        case 0x1eddd4u: goto label_1eddd4;
        case 0x1eddd8u: goto label_1eddd8;
        case 0x1edddcu: goto label_1edddc;
        case 0x1edde0u: goto label_1edde0;
        case 0x1edde4u: goto label_1edde4;
        case 0x1edde8u: goto label_1edde8;
        case 0x1eddecu: goto label_1eddec;
        case 0x1eddf0u: goto label_1eddf0;
        case 0x1eddf4u: goto label_1eddf4;
        case 0x1eddf8u: goto label_1eddf8;
        case 0x1eddfcu: goto label_1eddfc;
        case 0x1ede00u: goto label_1ede00;
        case 0x1ede04u: goto label_1ede04;
        case 0x1ede08u: goto label_1ede08;
        case 0x1ede0cu: goto label_1ede0c;
        case 0x1ede10u: goto label_1ede10;
        case 0x1ede14u: goto label_1ede14;
        case 0x1ede18u: goto label_1ede18;
        case 0x1ede1cu: goto label_1ede1c;
        case 0x1ede20u: goto label_1ede20;
        case 0x1ede24u: goto label_1ede24;
        case 0x1ede28u: goto label_1ede28;
        case 0x1ede2cu: goto label_1ede2c;
        case 0x1ede30u: goto label_1ede30;
        case 0x1ede34u: goto label_1ede34;
        case 0x1ede38u: goto label_1ede38;
        case 0x1ede3cu: goto label_1ede3c;
        case 0x1ede40u: goto label_1ede40;
        case 0x1ede44u: goto label_1ede44;
        case 0x1ede48u: goto label_1ede48;
        case 0x1ede4cu: goto label_1ede4c;
        case 0x1ede50u: goto label_1ede50;
        case 0x1ede54u: goto label_1ede54;
        case 0x1ede58u: goto label_1ede58;
        case 0x1ede5cu: goto label_1ede5c;
        case 0x1ede60u: goto label_1ede60;
        case 0x1ede64u: goto label_1ede64;
        default: return;
    }

label_1ed698:
    // 0x1ed698: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1ed698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ed69c:
    // 0x1ed69c: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
label_1ed6a0:
    if (ctx->pc == 0x1ED6A0u) {
        ctx->pc = 0x1ED6A4u;
        goto label_1ed6a4;
    }
    ctx->pc = 0x1ED69Cu;
    {
        const bool branch_taken_0x1ed69c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ed69c) {
            ctx->pc = 0x1ED6B4u;
            goto label_1ed6b4;
        }
    }
    ctx->pc = 0x1ED6A4u;
label_1ed6a4:
    // 0x1ed6a4: 0xc07b8a0  jal         func_1EE280
label_1ed6a8:
    if (ctx->pc == 0x1ED6A8u) {
        ctx->pc = 0x1ED6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED6A4u;
        // 0x1ed6a8: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED6ACu;
        goto label_1ed6ac;
    }
    ctx->pc = 0x1ED6A4u;
    SET_GPR_U32(ctx, 31, 0x1ED6ACu);
    ctx->pc = 0x1ED6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED6A4u;
    // 0x1ed6a8: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE280u;
    { ctx->pc = 0x1ee280; return; }
    ctx->pc = 0x1ED6ACu;
label_1ed6ac:
    // 0x1ed6ac: 0x10000036  b           . + 4 + (0x36 << 2)
label_1ed6b0:
    if (ctx->pc == 0x1ED6B0u) {
        ctx->pc = 0x1ED6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED6ACu;
        // 0x1ed6b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED6B4u;
        goto label_1ed6b4;
    }
    ctx->pc = 0x1ED6ACu;
    {
        const bool branch_taken_0x1ed6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED6ACu;
        // 0x1ed6b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed6ac) {
            ctx->pc = 0x1ED788u;
            goto label_1ed788;
        }
    }
    ctx->pc = 0x1ED6B4u;
label_1ed6b4:
    // 0x1ed6b4: 0x0  nop
    ctx->pc = 0x1ed6b4u;
    // NOP
label_1ed6b8:
    // 0x1ed6b8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1ed6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1ed6bc:
    // 0x1ed6bc: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
label_1ed6c0:
    if (ctx->pc == 0x1ED6C0u) {
        ctx->pc = 0x1ED6C4u;
        goto label_1ed6c4;
    }
    ctx->pc = 0x1ED6BCu;
    {
        const bool branch_taken_0x1ed6bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ed6bc) {
            ctx->pc = 0x1ED6D4u;
            goto label_1ed6d4;
        }
    }
    ctx->pc = 0x1ED6C4u;
label_1ed6c4:
    // 0x1ed6c4: 0xc07b8ec  jal         func_1EE3B0
label_1ed6c8:
    if (ctx->pc == 0x1ED6C8u) {
        ctx->pc = 0x1ED6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED6C4u;
        // 0x1ed6c8: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED6CCu;
        goto label_1ed6cc;
    }
    ctx->pc = 0x1ED6C4u;
    SET_GPR_U32(ctx, 31, 0x1ED6CCu);
    ctx->pc = 0x1ED6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED6C4u;
    // 0x1ed6c8: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE3B0u;
    { ctx->pc = 0x1ee3b0; return; }
    ctx->pc = 0x1ED6CCu;
label_1ed6cc:
    // 0x1ed6cc: 0x1000002e  b           . + 4 + (0x2E << 2)
label_1ed6d0:
    if (ctx->pc == 0x1ED6D0u) {
        ctx->pc = 0x1ED6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED6CCu;
        // 0x1ed6d0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED6D4u;
        goto label_1ed6d4;
    }
    ctx->pc = 0x1ED6CCu;
    {
        const bool branch_taken_0x1ed6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED6CCu;
        // 0x1ed6d0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed6cc) {
            ctx->pc = 0x1ED788u;
            goto label_1ed788;
        }
    }
    ctx->pc = 0x1ED6D4u;
label_1ed6d4:
    // 0x1ed6d4: 0x0  nop
    ctx->pc = 0x1ed6d4u;
    // NOP
label_1ed6d8:
    // 0x1ed6d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ed6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ed6dc:
    // 0x1ed6dc: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
label_1ed6e0:
    if (ctx->pc == 0x1ED6E0u) {
        ctx->pc = 0x1ED6E4u;
        goto label_1ed6e4;
    }
    ctx->pc = 0x1ED6DCu;
    {
        const bool branch_taken_0x1ed6dc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ed6dc) {
            ctx->pc = 0x1ED6F4u;
            goto label_1ed6f4;
        }
    }
    ctx->pc = 0x1ED6E4u;
label_1ed6e4:
    // 0x1ed6e4: 0xc07caf0  jal         func_1F2BC0
label_1ed6e8:
    if (ctx->pc == 0x1ED6E8u) {
        ctx->pc = 0x1ED6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED6E4u;
        // 0x1ed6e8: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED6ECu;
        goto label_1ed6ec;
    }
    ctx->pc = 0x1ED6E4u;
    SET_GPR_U32(ctx, 31, 0x1ED6ECu);
    ctx->pc = 0x1ED6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED6E4u;
    // 0x1ed6e8: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2BC0u;
    { ctx->pc = 0x1f2bc0; return; }
    ctx->pc = 0x1ED6ECu;
label_1ed6ec:
    // 0x1ed6ec: 0x10000026  b           . + 4 + (0x26 << 2)
label_1ed6f0:
    if (ctx->pc == 0x1ED6F0u) {
        ctx->pc = 0x1ED6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED6ECu;
        // 0x1ed6f0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED6F4u;
        goto label_1ed6f4;
    }
    ctx->pc = 0x1ED6ECu;
    {
        const bool branch_taken_0x1ed6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED6ECu;
        // 0x1ed6f0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed6ec) {
            ctx->pc = 0x1ED788u;
            goto label_1ed788;
        }
    }
    ctx->pc = 0x1ED6F4u;
label_1ed6f4:
    // 0x1ed6f4: 0x0  nop
    ctx->pc = 0x1ed6f4u;
    // NOP
label_1ed6f8:
    // 0x1ed6f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ed6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ed6fc:
    // 0x1ed6fc: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
label_1ed700:
    if (ctx->pc == 0x1ED700u) {
        ctx->pc = 0x1ED704u;
        goto label_1ed704;
    }
    ctx->pc = 0x1ED6FCu;
    {
        const bool branch_taken_0x1ed6fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ed6fc) {
            ctx->pc = 0x1ED714u;
            goto label_1ed714;
        }
    }
    ctx->pc = 0x1ED704u;
label_1ed704:
    // 0x1ed704: 0xc07c2a0  jal         func_1F0A80
label_1ed708:
    if (ctx->pc == 0x1ED708u) {
        ctx->pc = 0x1ED708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED704u;
        // 0x1ed708: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED70Cu;
        goto label_1ed70c;
    }
    ctx->pc = 0x1ED704u;
    SET_GPR_U32(ctx, 31, 0x1ED70Cu);
    ctx->pc = 0x1ED708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED704u;
    // 0x1ed708: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0A80u;
    { ctx->pc = 0x1f0a80; return; }
    ctx->pc = 0x1ED70Cu;
label_1ed70c:
    // 0x1ed70c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1ed710:
    if (ctx->pc == 0x1ED710u) {
        ctx->pc = 0x1ED710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED70Cu;
        // 0x1ed710: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED714u;
        goto label_1ed714;
    }
    ctx->pc = 0x1ED70Cu;
    {
        const bool branch_taken_0x1ed70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED70Cu;
        // 0x1ed710: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed70c) {
            ctx->pc = 0x1ED788u;
            goto label_1ed788;
        }
    }
    ctx->pc = 0x1ED714u;
label_1ed714:
    // 0x1ed714: 0x0  nop
    ctx->pc = 0x1ed714u;
    // NOP
label_1ed718:
    // 0x1ed718: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1ed718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1ed71c:
    // 0x1ed71c: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
label_1ed720:
    if (ctx->pc == 0x1ED720u) {
        ctx->pc = 0x1ED724u;
        goto label_1ed724;
    }
    ctx->pc = 0x1ED71Cu;
    {
        const bool branch_taken_0x1ed71c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ed71c) {
            ctx->pc = 0x1ED734u;
            goto label_1ed734;
        }
    }
    ctx->pc = 0x1ED724u;
label_1ed724:
    // 0x1ed724: 0xc07d49c  jal         func_1F5270
label_1ed728:
    if (ctx->pc == 0x1ED728u) {
        ctx->pc = 0x1ED728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED724u;
        // 0x1ed728: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED72Cu;
        goto label_1ed72c;
    }
    ctx->pc = 0x1ED724u;
    SET_GPR_U32(ctx, 31, 0x1ED72Cu);
    ctx->pc = 0x1ED728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED724u;
    // 0x1ed728: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5270u;
    { ctx->pc = 0x1f5270; return; }
    ctx->pc = 0x1ED72Cu;
label_1ed72c:
    // 0x1ed72c: 0x10000016  b           . + 4 + (0x16 << 2)
label_1ed730:
    if (ctx->pc == 0x1ED730u) {
        ctx->pc = 0x1ED730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED72Cu;
        // 0x1ed730: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED734u;
        goto label_1ed734;
    }
    ctx->pc = 0x1ED72Cu;
    {
        const bool branch_taken_0x1ed72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED72Cu;
        // 0x1ed730: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed72c) {
            ctx->pc = 0x1ED788u;
            goto label_1ed788;
        }
    }
    ctx->pc = 0x1ED734u;
label_1ed734:
    // 0x1ed734: 0x0  nop
    ctx->pc = 0x1ed734u;
    // NOP
label_1ed738:
    // 0x1ed738: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ed738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ed73c:
    // 0x1ed73c: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
label_1ed740:
    if (ctx->pc == 0x1ED740u) {
        ctx->pc = 0x1ED744u;
        goto label_1ed744;
    }
    ctx->pc = 0x1ED73Cu;
    {
        const bool branch_taken_0x1ed73c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ed73c) {
            ctx->pc = 0x1ED754u;
            goto label_1ed754;
        }
    }
    ctx->pc = 0x1ED744u;
label_1ed744:
    // 0x1ed744: 0xc07d7c0  jal         func_1F5F00
label_1ed748:
    if (ctx->pc == 0x1ED748u) {
        ctx->pc = 0x1ED748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED744u;
        // 0x1ed748: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED74Cu;
        goto label_1ed74c;
    }
    ctx->pc = 0x1ED744u;
    SET_GPR_U32(ctx, 31, 0x1ED74Cu);
    ctx->pc = 0x1ED748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED744u;
    // 0x1ed748: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5F00u;
    { ctx->pc = 0x1f5f00; return; }
    ctx->pc = 0x1ED74Cu;
label_1ed74c:
    // 0x1ed74c: 0x1000000e  b           . + 4 + (0xE << 2)
label_1ed750:
    if (ctx->pc == 0x1ED750u) {
        ctx->pc = 0x1ED750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED74Cu;
        // 0x1ed750: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED754u;
        goto label_1ed754;
    }
    ctx->pc = 0x1ED74Cu;
    {
        const bool branch_taken_0x1ed74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED74Cu;
        // 0x1ed750: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed74c) {
            ctx->pc = 0x1ED788u;
            goto label_1ed788;
        }
    }
    ctx->pc = 0x1ED754u;
label_1ed754:
    // 0x1ed754: 0x0  nop
    ctx->pc = 0x1ed754u;
    // NOP
label_1ed758:
    // 0x1ed758: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
label_1ed75c:
    if (ctx->pc == 0x1ED75Cu) {
        ctx->pc = 0x1ED760u;
        goto label_1ed760;
    }
    ctx->pc = 0x1ED758u;
    {
        const bool branch_taken_0x1ed758 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed758) {
            ctx->pc = 0x1ED770u;
            goto label_1ed770;
        }
    }
    ctx->pc = 0x1ED760u;
label_1ed760:
    // 0x1ed760: 0xc07dc90  jal         func_1F7240
label_1ed764:
    if (ctx->pc == 0x1ED764u) {
        ctx->pc = 0x1ED764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED760u;
        // 0x1ed764: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED768u;
        goto label_1ed768;
    }
    ctx->pc = 0x1ED760u;
    SET_GPR_U32(ctx, 31, 0x1ED768u);
    ctx->pc = 0x1ED764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED760u;
    // 0x1ed764: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7240u;
    { ctx->pc = 0x1f7240; return; }
    ctx->pc = 0x1ED768u;
label_1ed768:
    // 0x1ed768: 0x10000007  b           . + 4 + (0x7 << 2)
label_1ed76c:
    if (ctx->pc == 0x1ED76Cu) {
        ctx->pc = 0x1ED76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED768u;
        // 0x1ed76c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED770u;
        goto label_1ed770;
    }
    ctx->pc = 0x1ED768u;
    {
        const bool branch_taken_0x1ed768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED768u;
        // 0x1ed76c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed768) {
            ctx->pc = 0x1ED788u;
            goto label_1ed788;
        }
    }
    ctx->pc = 0x1ED770u;
label_1ed770:
    // 0x1ed770: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1ed770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1ed774:
    // 0x1ed774: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
label_1ed778:
    if (ctx->pc == 0x1ED778u) {
        ctx->pc = 0x1ED77Cu;
        goto label_1ed77c;
    }
    ctx->pc = 0x1ED774u;
    {
        const bool branch_taken_0x1ed774 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ed774) {
            ctx->pc = 0x1ED788u;
            goto label_1ed788;
        }
    }
    ctx->pc = 0x1ED77Cu;
label_1ed77c:
    // 0x1ed77c: 0xc07f298  jal         func_1FCA60
label_1ed780:
    if (ctx->pc == 0x1ED780u) {
        ctx->pc = 0x1ED780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED77Cu;
        // 0x1ed780: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED784u;
        goto label_1ed784;
    }
    ctx->pc = 0x1ED77Cu;
    SET_GPR_U32(ctx, 31, 0x1ED784u);
    ctx->pc = 0x1ED780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED77Cu;
    // 0x1ed780: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FCA60u;
    { ctx->pc = 0x1fca60; return; }
    ctx->pc = 0x1ED784u;
label_1ed784:
    // 0x1ed784: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ed784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ed788:
    // 0x1ed788: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1ed788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1ed78c:
    // 0x1ed78c: 0x16020018  bne         $s0, $v0, . + 4 + (0x18 << 2)
label_1ed790:
    if (ctx->pc == 0x1ED790u) {
        ctx->pc = 0x1ED794u;
        goto label_1ed794;
    }
    ctx->pc = 0x1ED78Cu;
    {
        const bool branch_taken_0x1ed78c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ed78c) {
            ctx->pc = 0x1ED7F0u;
            goto label_1ed7f0;
        }
    }
    ctx->pc = 0x1ED794u;
label_1ed794:
    // 0x1ed794: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x1ed794u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1ed798:
    // 0x1ed798: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1ed798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1ed79c:
    // 0x1ed79c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1ed79cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1ed7a0:
    // 0x1ed7a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ed7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ed7a4:
    // 0x1ed7a4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ed7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ed7a8:
    // 0x1ed7a8: 0xc07b6c0  jal         func_1EDB00
label_1ed7ac:
    if (ctx->pc == 0x1ED7ACu) {
        ctx->pc = 0x1ED7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED7A8u;
        // 0x1ed7ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED7B0u;
        goto label_1ed7b0;
    }
    ctx->pc = 0x1ED7A8u;
    SET_GPR_U32(ctx, 31, 0x1ED7B0u);
    ctx->pc = 0x1ED7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED7A8u;
    // 0x1ed7ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDB00u;
    goto label_1edb00;
    ctx->pc = 0x1ED7B0u;
label_1ed7b0:
    // 0x1ed7b0: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_1ed7b4:
    if (ctx->pc == 0x1ED7B4u) {
        ctx->pc = 0x1ED7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED7B0u;
        // 0x1ed7b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED7B8u;
        goto label_1ed7b8;
    }
    ctx->pc = 0x1ED7B0u;
    {
        const bool branch_taken_0x1ed7b0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED7B0u;
        // 0x1ed7b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed7b0) {
            ctx->pc = 0x1ED7C0u;
            goto label_1ed7c0;
        }
    }
    ctx->pc = 0x1ED7B8u;
label_1ed7b8:
    // 0x1ed7b8: 0x16820005  bne         $s4, $v0, . + 4 + (0x5 << 2)
label_1ed7bc:
    if (ctx->pc == 0x1ED7BCu) {
        ctx->pc = 0x1ED7C0u;
        goto label_1ed7c0;
    }
    ctx->pc = 0x1ED7B8u;
    {
        const bool branch_taken_0x1ed7b8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ed7b8) {
            ctx->pc = 0x1ED7D0u;
            goto label_1ed7d0;
        }
    }
    ctx->pc = 0x1ED7C0u;
label_1ed7c0:
    // 0x1ed7c0: 0xc078050  jal         func_1E0140
label_1ed7c4:
    if (ctx->pc == 0x1ED7C4u) {
        ctx->pc = 0x1ED7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED7C0u;
        // 0x1ed7c4: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED7C8u;
        goto label_1ed7c8;
    }
    ctx->pc = 0x1ED7C0u;
    SET_GPR_U32(ctx, 31, 0x1ED7C8u);
    ctx->pc = 0x1ED7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED7C0u;
    // 0x1ed7c4: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x1ED7C8u;
label_1ed7c8:
    // 0x1ed7c8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ed7cc:
    if (ctx->pc == 0x1ED7CCu) {
        ctx->pc = 0x1ED7D0u;
        goto label_1ed7d0;
    }
    ctx->pc = 0x1ED7C8u;
    {
        const bool branch_taken_0x1ed7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed7c8) {
            ctx->pc = 0x1ED7D8u;
            goto label_1ed7d8;
        }
    }
    ctx->pc = 0x1ED7D0u;
label_1ed7d0:
    // 0x1ed7d0: 0xc078050  jal         func_1E0140
label_1ed7d4:
    if (ctx->pc == 0x1ED7D4u) {
        ctx->pc = 0x1ED7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED7D0u;
        // 0x1ed7d4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED7D8u;
        goto label_1ed7d8;
    }
    ctx->pc = 0x1ED7D0u;
    SET_GPR_U32(ctx, 31, 0x1ED7D8u);
    ctx->pc = 0x1ED7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED7D0u;
    // 0x1ed7d4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x1ED7D8u;
label_1ed7d8:
    // 0x1ed7d8: 0xc078070  jal         func_1E01C0
label_1ed7dc:
    if (ctx->pc == 0x1ED7DCu) {
        ctx->pc = 0x1ED7E0u;
        goto label_1ed7e0;
    }
    ctx->pc = 0x1ED7D8u;
    SET_GPR_U32(ctx, 31, 0x1ED7E0u);
    ctx->pc = 0x1E01C0u;
    { ctx->pc = 0x1e01c0; return; }
    ctx->pc = 0x1ED7E0u;
label_1ed7e0:
    // 0x1ed7e0: 0xc07b48c  jal         func_1ED230
label_1ed7e4:
    if (ctx->pc == 0x1ED7E4u) {
        ctx->pc = 0x1ED7E8u;
        goto label_1ed7e8;
    }
    ctx->pc = 0x1ED7E0u;
    SET_GPR_U32(ctx, 31, 0x1ED7E8u);
    ctx->pc = 0x1ED230u;
    { ctx->pc = 0x1ed230; return; }
    ctx->pc = 0x1ED7E8u;
label_1ed7e8:
    // 0x1ed7e8: 0x1000ff3c  b           . + 4 + (-0xC4 << 2)
label_1ed7ec:
    if (ctx->pc == 0x1ED7ECu) {
        ctx->pc = 0x1ED7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED7E8u;
        // 0x1ed7ec: 0x8f828f44  lw          $v0, -0x70BC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED7F0u;
        goto label_1ed7f0;
    }
    ctx->pc = 0x1ED7E8u;
    {
        const bool branch_taken_0x1ed7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED7E8u;
        // 0x1ed7ec: 0x8f828f44  lw          $v0, -0x70BC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed7e8) {
            ctx->pc = 0x1ED4DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1ed4dc; return; }
        }
    }
    ctx->pc = 0x1ED7F0u;
label_1ed7f0:
    // 0x1ed7f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ed7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ed7f4:
    // 0x1ed7f4: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
label_1ed7f8:
    if (ctx->pc == 0x1ED7F8u) {
        ctx->pc = 0x1ED7FCu;
        goto label_1ed7fc;
    }
    ctx->pc = 0x1ED7F4u;
    {
        const bool branch_taken_0x1ed7f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ed7f4) {
            ctx->pc = 0x1ED808u;
            goto label_1ed808;
        }
    }
    ctx->pc = 0x1ED7FCu;
label_1ed7fc:
    // 0x1ed7fc: 0xc07b864  jal         func_1EE190
label_1ed800:
    if (ctx->pc == 0x1ED800u) {
        ctx->pc = 0x1ED804u;
        goto label_1ed804;
    }
    ctx->pc = 0x1ED7FCu;
    SET_GPR_U32(ctx, 31, 0x1ED804u);
    ctx->pc = 0x1EE190u;
    { ctx->pc = 0x1ee190; return; }
    ctx->pc = 0x1ED804u;
label_1ed804:
    // 0x1ed804: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ed804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ed808:
    // 0x1ed808: 0xc078078  jal         func_1E01E0
label_1ed80c:
    if (ctx->pc == 0x1ED80Cu) {
        ctx->pc = 0x1ED810u;
        goto label_1ed810;
    }
    ctx->pc = 0x1ED808u;
    SET_GPR_U32(ctx, 31, 0x1ED810u);
    ctx->pc = 0x1E01E0u;
    { ctx->pc = 0x1e01e0; return; }
    ctx->pc = 0x1ED810u;
label_1ed810:
    // 0x1ed810: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1ed810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ed814:
    // 0x1ed814: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ed814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ed818:
    // 0x1ed818: 0xc04e188  jal         func_138620
label_1ed81c:
    if (ctx->pc == 0x1ED81Cu) {
        ctx->pc = 0x1ED81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED818u;
        // 0x1ed81c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED820u;
        goto label_1ed820;
    }
    ctx->pc = 0x1ED818u;
    SET_GPR_U32(ctx, 31, 0x1ED820u);
    ctx->pc = 0x1ED81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED818u;
    // 0x1ed81c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138620u, 0x1ED818u, 0x1ED820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED820u;
label_1ed820:
    // 0x1ed820: 0xc04e198  jal         func_138660
label_1ed824:
    if (ctx->pc == 0x1ED824u) {
        ctx->pc = 0x1ED828u;
        goto label_1ed828;
    }
    ctx->pc = 0x1ED820u;
    SET_GPR_U32(ctx, 31, 0x1ED828u);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x1ED820u, 0x1ED828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED828u;
label_1ed828:
    // 0x1ed828: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1ed82c:
    if (ctx->pc == 0x1ED82Cu) {
        ctx->pc = 0x1ED830u;
        goto label_1ed830;
    }
    ctx->pc = 0x1ED828u;
    {
        const bool branch_taken_0x1ed828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed828) {
            ctx->pc = 0x1ED858u;
            goto label_1ed858;
        }
    }
    ctx->pc = 0x1ED830u;
label_1ed830:
    // 0x1ed830: 0xc07b48c  jal         func_1ED230
label_1ed834:
    if (ctx->pc == 0x1ED834u) {
        ctx->pc = 0x1ED838u;
        goto label_1ed838;
    }
    ctx->pc = 0x1ED830u;
    SET_GPR_U32(ctx, 31, 0x1ED838u);
    ctx->pc = 0x1ED230u;
    { ctx->pc = 0x1ed230; return; }
    ctx->pc = 0x1ED838u;
label_1ed838:
    // 0x1ed838: 0xc04e198  jal         func_138660
label_1ed83c:
    if (ctx->pc == 0x1ED83Cu) {
        ctx->pc = 0x1ED840u;
        goto label_1ed840;
    }
    ctx->pc = 0x1ED838u;
    SET_GPR_U32(ctx, 31, 0x1ED840u);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x1ED838u, 0x1ED840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED840u;
label_1ed840:
    // 0x1ed840: 0x0  nop
    ctx->pc = 0x1ed840u;
    // NOP
label_1ed844:
    // 0x1ed844: 0x0  nop
    ctx->pc = 0x1ed844u;
    // NOP
label_1ed848:
    // 0x1ed848: 0x0  nop
    ctx->pc = 0x1ed848u;
    // NOP
label_1ed84c:
    // 0x1ed84c: 0x0  nop
    ctx->pc = 0x1ed84cu;
    // NOP
label_1ed850:
    // 0x1ed850: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
label_1ed854:
    if (ctx->pc == 0x1ED854u) {
        ctx->pc = 0x1ED858u;
        goto label_1ed858;
    }
    ctx->pc = 0x1ED850u;
    {
        const bool branch_taken_0x1ed850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed850) {
            ctx->pc = 0x1ED830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ed830;
        }
    }
    ctx->pc = 0x1ED858u;
label_1ed858:
    // 0x1ed858: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ed858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ed85c:
    // 0x1ed85c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1ed85cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1ed860:
    // 0x1ed860: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1ed860u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ed864:
    // 0x1ed864: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ed864u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ed868:
    // 0x1ed868: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ed868u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ed86c:
    // 0x1ed86c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ed86cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ed870:
    // 0x1ed870: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ed870u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ed874:
    // 0x1ed874: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ed874u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ed878:
    // 0x1ed878: 0x3e00008  jr          $ra
label_1ed87c:
    if (ctx->pc == 0x1ED87Cu) {
        ctx->pc = 0x1ED87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED878u;
        // 0x1ed87c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED880u;
        goto label_1ed880;
    }
    ctx->pc = 0x1ED878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED878u;
        // 0x1ed87c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED880u;
label_1ed880:
    // 0x1ed880: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ed880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1ed884:
    // 0x1ed884: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ed884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ed888:
    // 0x1ed888: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1ed888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1ed88c:
    // 0x1ed88c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ed88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1ed890:
    // 0x1ed890: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ed890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1ed894:
    // 0x1ed894: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1ed894u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ed898:
    // 0x1ed898: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ed898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1ed89c:
    // 0x1ed89c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ed89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ed8a0:
    // 0x1ed8a0: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x1ed8a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ed8a4:
    // 0x1ed8a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ed8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ed8a8:
    // 0x1ed8a8: 0x8f848f3c  lw          $a0, -0x70C4($gp)
    ctx->pc = 0x1ed8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938428)));
label_1ed8ac:
    // 0x1ed8ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ed8acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ed8b0:
    // 0x1ed8b0: 0xafa50068  sw          $a1, 0x68($sp)
    ctx->pc = 0x1ed8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 5));
label_1ed8b4:
    // 0x1ed8b4: 0x64900a  movz        $s2, $v1, $a0
    ctx->pc = 0x1ed8b4u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_1ed8b8:
    // 0x1ed8b8: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x1ed8b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_1ed8bc:
    // 0x1ed8bc: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
label_1ed8c0:
    if (ctx->pc == 0x1ED8C0u) {
        ctx->pc = 0x1ED8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED8BCu;
        // 0x1ed8c0: 0xafa6006c  sw          $a2, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED8C4u;
        goto label_1ed8c4;
    }
    ctx->pc = 0x1ED8BCu;
    {
        const bool branch_taken_0x1ed8bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED8BCu;
        // 0x1ed8c0: 0xafa6006c  sw          $a2, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed8bc) {
            ctx->pc = 0x1ED958u;
            goto label_1ed958;
        }
    }
    ctx->pc = 0x1ED8C4u;
label_1ed8c4:
    // 0x1ed8c4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ed8c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ed8c8:
    // 0x1ed8c8: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1ed8cc:
    if (ctx->pc == 0x1ED8CCu) {
        ctx->pc = 0x1ED8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED8C8u;
        // 0x1ed8cc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED8D0u;
        goto label_1ed8d0;
    }
    ctx->pc = 0x1ED8C8u;
    {
        const bool branch_taken_0x1ed8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED8C8u;
        // 0x1ed8cc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed8c8) {
            ctx->pc = 0x1ED934u;
            goto label_1ed934;
        }
    }
    ctx->pc = 0x1ED8D0u;
label_1ed8d0:
    // 0x1ed8d0: 0x27a20068  addiu       $v0, $sp, 0x68
    ctx->pc = 0x1ed8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_1ed8d4:
    // 0x1ed8d4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1ed8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1ed8d8:
    // 0x1ed8d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ed8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ed8dc:
    // 0x1ed8dc: 0x1622000f  bne         $s1, $v0, . + 4 + (0xF << 2)
label_1ed8e0:
    if (ctx->pc == 0x1ED8E0u) {
        ctx->pc = 0x1ED8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED8DCu;
        // 0x1ed8e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED8E4u;
        goto label_1ed8e4;
    }
    ctx->pc = 0x1ED8DCu;
    {
        const bool branch_taken_0x1ed8dc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ED8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED8DCu;
        // 0x1ed8e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed8dc) {
            ctx->pc = 0x1ED91Cu;
            goto label_1ed91c;
        }
    }
    ctx->pc = 0x1ED8E4u;
label_1ed8e4:
    // 0x1ed8e4: 0x2061004  sllv        $v0, $a2, $s0
    ctx->pc = 0x1ed8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 16) & 0x1F));
label_1ed8e8:
    // 0x1ed8e8: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x1ed8e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
label_1ed8ec:
    // 0x1ed8ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1ed8f0:
    if (ctx->pc == 0x1ED8F0u) {
        ctx->pc = 0x1ED8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED8ECu;
        // 0x1ed8f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED8F4u;
        goto label_1ed8f4;
    }
    ctx->pc = 0x1ED8ECu;
    {
        const bool branch_taken_0x1ed8ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED8ECu;
        // 0x1ed8f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed8ec) {
            ctx->pc = 0x1ED908u;
            goto label_1ed908;
        }
    }
    ctx->pc = 0x1ED8F4u;
label_1ed8f4:
    // 0x1ed8f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ed8f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ed8f8:
    // 0x1ed8f8: 0xc07bad8  jal         func_1EEB60
label_1ed8fc:
    if (ctx->pc == 0x1ED8FCu) {
        ctx->pc = 0x1ED8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED8F8u;
        // 0x1ed8fc: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED900u;
        goto label_1ed900;
    }
    ctx->pc = 0x1ED8F8u;
    SET_GPR_U32(ctx, 31, 0x1ED900u);
    ctx->pc = 0x1ED8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED8F8u;
    // 0x1ed8fc: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EEB60u;
    { ctx->pc = 0x1eeb60; return; }
    ctx->pc = 0x1ED900u;
label_1ed900:
    // 0x1ed900: 0x1000000b  b           . + 4 + (0xB << 2)
label_1ed904:
    if (ctx->pc == 0x1ED904u) {
        ctx->pc = 0x1ED908u;
        goto label_1ed908;
    }
    ctx->pc = 0x1ED900u;
    {
        const bool branch_taken_0x1ed900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed900) {
            ctx->pc = 0x1ED930u;
            goto label_1ed930;
        }
    }
    ctx->pc = 0x1ED908u;
label_1ed908:
    // 0x1ed908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ed908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ed90c:
    // 0x1ed90c: 0xc07bad8  jal         func_1EEB60
label_1ed910:
    if (ctx->pc == 0x1ED910u) {
        ctx->pc = 0x1ED910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED90Cu;
        // 0x1ed910: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED914u;
        goto label_1ed914;
    }
    ctx->pc = 0x1ED90Cu;
    SET_GPR_U32(ctx, 31, 0x1ED914u);
    ctx->pc = 0x1ED910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED90Cu;
    // 0x1ed910: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EEB60u;
    { ctx->pc = 0x1eeb60; return; }
    ctx->pc = 0x1ED914u;
label_1ed914:
    // 0x1ed914: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ed918:
    if (ctx->pc == 0x1ED918u) {
        ctx->pc = 0x1ED91Cu;
        goto label_1ed91c;
    }
    ctx->pc = 0x1ED914u;
    {
        const bool branch_taken_0x1ed914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed914) {
            ctx->pc = 0x1ED930u;
            goto label_1ed930;
        }
    }
    ctx->pc = 0x1ED91Cu;
label_1ed91c:
    // 0x1ed91c: 0x0  nop
    ctx->pc = 0x1ed91cu;
    // NOP
label_1ed920:
    // 0x1ed920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ed920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ed924:
    // 0x1ed924: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ed924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ed928:
    // 0x1ed928: 0xc07bad8  jal         func_1EEB60
label_1ed92c:
    if (ctx->pc == 0x1ED92Cu) {
        ctx->pc = 0x1ED92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED928u;
        // 0x1ed92c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED930u;
        goto label_1ed930;
    }
    ctx->pc = 0x1ED928u;
    SET_GPR_U32(ctx, 31, 0x1ED930u);
    ctx->pc = 0x1ED92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED928u;
    // 0x1ed92c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EEB60u;
    { ctx->pc = 0x1eeb60; return; }
    ctx->pc = 0x1ED930u;
label_1ed930:
    // 0x1ed930: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ed930u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1ed934:
    // 0x1ed934: 0x0  nop
    ctx->pc = 0x1ed934u;
    // NOP
label_1ed938:
    // 0x1ed938: 0x8f838f48  lw          $v1, -0x70B8($gp)
    ctx->pc = 0x1ed938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938440)));
label_1ed93c:
    // 0x1ed93c: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x1ed93cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1ed940:
    // 0x1ed940: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
label_1ed944:
    if (ctx->pc == 0x1ED944u) {
        ctx->pc = 0x1ED948u;
        goto label_1ed948;
    }
    ctx->pc = 0x1ED940u;
    {
        const bool branch_taken_0x1ed940 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed940) {
            ctx->pc = 0x1ED8D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ed8d0;
        }
    }
    ctx->pc = 0x1ED948u;
label_1ed948:
    // 0x1ed948: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ed948u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1ed94c:
    // 0x1ed94c: 0x212182a  slt         $v1, $s0, $s2
    ctx->pc = 0x1ed94cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_1ed950:
    // 0x1ed950: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
label_1ed954:
    if (ctx->pc == 0x1ED954u) {
        ctx->pc = 0x1ED954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED950u;
        // 0x1ed954: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED958u;
        goto label_1ed958;
    }
    ctx->pc = 0x1ED950u;
    {
        const bool branch_taken_0x1ed950 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED950u;
        // 0x1ed954: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed950) {
            ctx->pc = 0x1ED8C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ed8c8;
        }
    }
    ctx->pc = 0x1ED958u;
label_1ed958:
    // 0x1ed958: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1ed958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1ed95c:
    // 0x1ed95c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ed95cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ed960:
    // 0x1ed960: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ed960u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ed964:
    // 0x1ed964: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ed964u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ed968:
    // 0x1ed968: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ed968u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ed96c:
    // 0x1ed96c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ed96cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ed970:
    // 0x1ed970: 0x3e00008  jr          $ra
label_1ed974:
    if (ctx->pc == 0x1ED974u) {
        ctx->pc = 0x1ED974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED970u;
        // 0x1ed974: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED978u;
        goto label_1ed978;
    }
    ctx->pc = 0x1ED970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED970u;
        // 0x1ed974: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED978u;
label_1ed978:
    // 0x1ed978: 0x0  nop
    ctx->pc = 0x1ed978u;
    // NOP
label_1ed97c:
    // 0x1ed97c: 0x0  nop
    ctx->pc = 0x1ed97cu;
    // NOP
label_1ed980:
    // 0x1ed980: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ed980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1ed984:
    // 0x1ed984: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ed984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1ed988:
    // 0x1ed988: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ed988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1ed98c:
    // 0x1ed98c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ed98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ed990:
    // 0x1ed990: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ed990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ed994:
    // 0x1ed994: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ed994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ed998:
    // 0x1ed998: 0xc085acc  jal         func_216B30
label_1ed99c:
    if (ctx->pc == 0x1ED99Cu) {
        ctx->pc = 0x1ED99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED998u;
        // 0x1ed99c: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED9A0u;
        goto label_1ed9a0;
    }
    ctx->pc = 0x1ED998u;
    SET_GPR_U32(ctx, 31, 0x1ED9A0u);
    ctx->pc = 0x1ED99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED998u;
    // 0x1ed99c: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216B30u;
    { ctx->pc = 0x216b30; return; }
    ctx->pc = 0x1ED9A0u;
label_1ed9a0:
    // 0x1ed9a0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1ed9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ed9a4:
    // 0x1ed9a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ed9a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ed9a8:
    // 0x1ed9a8: 0xc04e188  jal         func_138620
label_1ed9ac:
    if (ctx->pc == 0x1ED9ACu) {
        ctx->pc = 0x1ED9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED9A8u;
        // 0x1ed9ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED9B0u;
        goto label_1ed9b0;
    }
    ctx->pc = 0x1ED9A8u;
    SET_GPR_U32(ctx, 31, 0x1ED9B0u);
    ctx->pc = 0x1ED9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED9A8u;
    // 0x1ed9ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138620u, 0x1ED9A8u, 0x1ED9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED9B0u;
label_1ed9b0:
    // 0x1ed9b0: 0xc04e198  jal         func_138660
label_1ed9b4:
    if (ctx->pc == 0x1ED9B4u) {
        ctx->pc = 0x1ED9B8u;
        goto label_1ed9b8;
    }
    ctx->pc = 0x1ED9B0u;
    SET_GPR_U32(ctx, 31, 0x1ED9B8u);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x1ED9B0u, 0x1ED9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED9B8u;
label_1ed9b8:
    // 0x1ed9b8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1ed9bc:
    if (ctx->pc == 0x1ED9BCu) {
        ctx->pc = 0x1ED9C0u;
        goto label_1ed9c0;
    }
    ctx->pc = 0x1ED9B8u;
    {
        const bool branch_taken_0x1ed9b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed9b8) {
            ctx->pc = 0x1ED9E8u;
            goto label_1ed9e8;
        }
    }
    ctx->pc = 0x1ED9C0u;
label_1ed9c0:
    // 0x1ed9c0: 0xc07b48c  jal         func_1ED230
label_1ed9c4:
    if (ctx->pc == 0x1ED9C4u) {
        ctx->pc = 0x1ED9C8u;
        goto label_1ed9c8;
    }
    ctx->pc = 0x1ED9C0u;
    SET_GPR_U32(ctx, 31, 0x1ED9C8u);
    ctx->pc = 0x1ED230u;
    { ctx->pc = 0x1ed230; return; }
    ctx->pc = 0x1ED9C8u;
label_1ed9c8:
    // 0x1ed9c8: 0xc04e198  jal         func_138660
label_1ed9cc:
    if (ctx->pc == 0x1ED9CCu) {
        ctx->pc = 0x1ED9D0u;
        goto label_1ed9d0;
    }
    ctx->pc = 0x1ED9C8u;
    SET_GPR_U32(ctx, 31, 0x1ED9D0u);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x1ED9C8u, 0x1ED9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED9D0u;
label_1ed9d0:
    // 0x1ed9d0: 0x0  nop
    ctx->pc = 0x1ed9d0u;
    // NOP
label_1ed9d4:
    // 0x1ed9d4: 0x0  nop
    ctx->pc = 0x1ed9d4u;
    // NOP
label_1ed9d8:
    // 0x1ed9d8: 0x0  nop
    ctx->pc = 0x1ed9d8u;
    // NOP
label_1ed9dc:
    // 0x1ed9dc: 0x0  nop
    ctx->pc = 0x1ed9dcu;
    // NOP
label_1ed9e0:
    // 0x1ed9e0: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
label_1ed9e4:
    if (ctx->pc == 0x1ED9E4u) {
        ctx->pc = 0x1ED9E8u;
        goto label_1ed9e8;
    }
    ctx->pc = 0x1ED9E0u;
    {
        const bool branch_taken_0x1ed9e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed9e0) {
            ctx->pc = 0x1ED9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ed9c0;
        }
    }
    ctx->pc = 0x1ED9E8u;
label_1ed9e8:
    // 0x1ed9e8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1ed9ec:
    if (ctx->pc == 0x1ED9ECu) {
        ctx->pc = 0x1ED9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED9E8u;
        // 0x1ed9ec: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED9F0u;
        goto label_1ed9f0;
    }
    ctx->pc = 0x1ED9E8u;
    {
        const bool branch_taken_0x1ed9e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED9E8u;
        // 0x1ed9ec: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed9e8) {
            ctx->pc = 0x1ED9FCu;
            goto label_1ed9fc;
        }
    }
    ctx->pc = 0x1ED9F0u;
label_1ed9f0:
    // 0x1ed9f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ed9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ed9f4:
    // 0x1ed9f4: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
label_1ed9f8:
    if (ctx->pc == 0x1ED9F8u) {
        ctx->pc = 0x1ED9FCu;
        goto label_1ed9fc;
    }
    ctx->pc = 0x1ED9F4u;
    {
        const bool branch_taken_0x1ed9f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ed9f4) {
            ctx->pc = 0x1EDA0Cu;
            goto label_1eda0c;
        }
    }
    ctx->pc = 0x1ED9FCu;
label_1ed9fc:
    // 0x1ed9fc: 0xc078050  jal         func_1E0140
label_1eda00:
    if (ctx->pc == 0x1EDA00u) {
        ctx->pc = 0x1EDA04u;
        goto label_1eda04;
    }
    ctx->pc = 0x1ED9FCu;
    SET_GPR_U32(ctx, 31, 0x1EDA04u);
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x1EDA04u;
label_1eda04:
    // 0x1eda04: 0x10000003  b           . + 4 + (0x3 << 2)
label_1eda08:
    if (ctx->pc == 0x1EDA08u) {
        ctx->pc = 0x1EDA0Cu;
        goto label_1eda0c;
    }
    ctx->pc = 0x1EDA04u;
    {
        const bool branch_taken_0x1eda04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eda04) {
            ctx->pc = 0x1EDA14u;
            goto label_1eda14;
        }
    }
    ctx->pc = 0x1EDA0Cu;
label_1eda0c:
    // 0x1eda0c: 0xc078050  jal         func_1E0140
label_1eda10:
    if (ctx->pc == 0x1EDA10u) {
        ctx->pc = 0x1EDA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA0Cu;
        // 0x1eda10: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDA14u;
        goto label_1eda14;
    }
    ctx->pc = 0x1EDA0Cu;
    SET_GPR_U32(ctx, 31, 0x1EDA14u);
    ctx->pc = 0x1EDA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDA0Cu;
    // 0x1eda10: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x1EDA14u;
label_1eda14:
    // 0x1eda14: 0xc078070  jal         func_1E01C0
label_1eda18:
    if (ctx->pc == 0x1EDA18u) {
        ctx->pc = 0x1EDA1Cu;
        goto label_1eda1c;
    }
    ctx->pc = 0x1EDA14u;
    SET_GPR_U32(ctx, 31, 0x1EDA1Cu);
    ctx->pc = 0x1E01C0u;
    { ctx->pc = 0x1e01c0; return; }
    ctx->pc = 0x1EDA1Cu;
label_1eda1c:
    // 0x1eda1c: 0xc07be9c  jal         func_1EFA70
label_1eda20:
    if (ctx->pc == 0x1EDA20u) {
        ctx->pc = 0x1EDA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA1Cu;
        // 0x1eda20: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDA24u;
        goto label_1eda24;
    }
    ctx->pc = 0x1EDA1Cu;
    SET_GPR_U32(ctx, 31, 0x1EDA24u);
    ctx->pc = 0x1EDA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDA1Cu;
    // 0x1eda20: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFA70u;
    { ctx->pc = 0x1efa70; return; }
    ctx->pc = 0x1EDA24u;
label_1eda24:
    // 0x1eda24: 0xc07bd90  jal         func_1EF640
label_1eda28:
    if (ctx->pc == 0x1EDA28u) {
        ctx->pc = 0x1EDA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA24u;
        // 0x1eda28: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDA2Cu;
        goto label_1eda2c;
    }
    ctx->pc = 0x1EDA24u;
    SET_GPR_U32(ctx, 31, 0x1EDA2Cu);
    ctx->pc = 0x1EDA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDA24u;
    // 0x1eda28: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF640u;
    { ctx->pc = 0x1ef640; return; }
    ctx->pc = 0x1EDA2Cu;
label_1eda2c:
    // 0x1eda2c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1eda2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eda30:
    // 0x1eda30: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
label_1eda34:
    if (ctx->pc == 0x1EDA34u) {
        ctx->pc = 0x1EDA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA30u;
        // 0x1eda34: 0x32020003  andi        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDA38u;
        goto label_1eda38;
    }
    ctx->pc = 0x1EDA30u;
    {
        const bool branch_taken_0x1eda30 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1EDA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA30u;
        // 0x1eda34: 0x32020003  andi        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eda30) {
            ctx->pc = 0x1EDA44u;
            goto label_1eda44;
        }
    }
    ctx->pc = 0x1EDA38u;
label_1eda38:
    // 0x1eda38: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1eda3c:
    if (ctx->pc == 0x1EDA3Cu) {
        ctx->pc = 0x1EDA40u;
        goto label_1eda40;
    }
    ctx->pc = 0x1EDA38u;
    {
        const bool branch_taken_0x1eda38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eda38) {
            ctx->pc = 0x1EDA44u;
            goto label_1eda44;
        }
    }
    ctx->pc = 0x1EDA40u;
label_1eda40:
    // 0x1eda40: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1eda40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_1eda44:
    // 0x1eda44: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1eda48:
    if (ctx->pc == 0x1EDA48u) {
        ctx->pc = 0x1EDA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA44u;
        // 0x1eda48: 0x102083  sra         $a0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDA4Cu;
        goto label_1eda4c;
    }
    ctx->pc = 0x1EDA44u;
    {
        const bool branch_taken_0x1eda44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EDA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA44u;
        // 0x1eda48: 0x102083  sra         $a0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eda44) {
            ctx->pc = 0x1EDA70u;
            goto label_1eda70;
        }
    }
    ctx->pc = 0x1EDA4Cu;
label_1eda4c:
    // 0x1eda4c: 0x6010002  bgez        $s0, . + 4 + (0x2 << 2)
label_1eda50:
    if (ctx->pc == 0x1EDA50u) {
        ctx->pc = 0x1EDA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA4Cu;
        // 0x1eda50: 0x26020003  addiu       $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDA54u;
        goto label_1eda54;
    }
    ctx->pc = 0x1EDA4Cu;
    {
        const bool branch_taken_0x1eda4c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1EDA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA4Cu;
        // 0x1eda50: 0x26020003  addiu       $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eda4c) {
            ctx->pc = 0x1EDA58u;
            goto label_1eda58;
        }
    }
    ctx->pc = 0x1EDA54u;
label_1eda54:
    // 0x1eda54: 0x22083  sra         $a0, $v0, 2
    ctx->pc = 0x1eda54u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 2));
label_1eda58:
    // 0x1eda58: 0x8f828f48  lw          $v0, -0x70B8($gp)
    ctx->pc = 0x1eda58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938440)));
label_1eda5c:
    // 0x1eda5c: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x1eda5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1eda60:
    // 0x1eda60: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1eda64:
    if (ctx->pc == 0x1EDA64u) {
        ctx->pc = 0x1EDA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA60u;
        // 0x1eda64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDA68u;
        goto label_1eda68;
    }
    ctx->pc = 0x1EDA60u;
    {
        const bool branch_taken_0x1eda60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA60u;
        // 0x1eda64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eda60) {
            ctx->pc = 0x1EDA70u;
            goto label_1eda70;
        }
    }
    ctx->pc = 0x1EDA68u;
label_1eda68:
    // 0x1eda68: 0xc07baec  jal         func_1EEBB0
label_1eda6c:
    if (ctx->pc == 0x1EDA6Cu) {
        ctx->pc = 0x1EDA70u;
        goto label_1eda70;
    }
    ctx->pc = 0x1EDA68u;
    SET_GPR_U32(ctx, 31, 0x1EDA70u);
    ctx->pc = 0x1EEBB0u;
    { ctx->pc = 0x1eebb0; return; }
    ctx->pc = 0x1EDA70u;
label_1eda70:
    // 0x1eda70: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1eda70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eda74:
    // 0x1eda74: 0x1000000b  b           . + 4 + (0xB << 2)
label_1eda78:
    if (ctx->pc == 0x1EDA78u) {
        ctx->pc = 0x1EDA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA74u;
        // 0x1eda78: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDA7Cu;
        goto label_1eda7c;
    }
    ctx->pc = 0x1EDA74u;
    {
        const bool branch_taken_0x1eda74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA74u;
        // 0x1eda78: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eda74) {
            ctx->pc = 0x1EDAA4u;
            goto label_1edaa4;
        }
    }
    ctx->pc = 0x1EDA7Cu;
label_1eda7c:
    // 0x1eda7c: 0x0  nop
    ctx->pc = 0x1eda7cu;
    // NOP
label_1eda80:
    // 0x1eda80: 0xc07baf8  jal         func_1EEBE0
label_1eda84:
    if (ctx->pc == 0x1EDA84u) {
        ctx->pc = 0x1EDA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA80u;
        // 0x1eda84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDA88u;
        goto label_1eda88;
    }
    ctx->pc = 0x1EDA80u;
    SET_GPR_U32(ctx, 31, 0x1EDA88u);
    ctx->pc = 0x1EDA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDA80u;
    // 0x1eda84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EEBE0u;
    { ctx->pc = 0x1eebe0; return; }
    ctx->pc = 0x1EDA88u;
label_1eda88:
    // 0x1eda88: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1eda88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1eda8c:
    // 0x1eda8c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_1eda90:
    if (ctx->pc == 0x1EDA90u) {
        ctx->pc = 0x1EDA94u;
        goto label_1eda94;
    }
    ctx->pc = 0x1EDA8Cu;
    {
        const bool branch_taken_0x1eda8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1eda8c) {
            ctx->pc = 0x1EDA9Cu;
            goto label_1eda9c;
        }
    }
    ctx->pc = 0x1EDA94u;
label_1eda94:
    // 0x1eda94: 0x10000008  b           . + 4 + (0x8 << 2)
label_1eda98:
    if (ctx->pc == 0x1EDA98u) {
        ctx->pc = 0x1EDA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA94u;
        // 0x1eda98: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDA9Cu;
        goto label_1eda9c;
    }
    ctx->pc = 0x1EDA94u;
    {
        const bool branch_taken_0x1eda94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA94u;
        // 0x1eda98: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eda94) {
            ctx->pc = 0x1EDAB8u;
            goto label_1edab8;
        }
    }
    ctx->pc = 0x1EDA9Cu;
label_1eda9c:
    // 0x1eda9c: 0x0  nop
    ctx->pc = 0x1eda9cu;
    // NOP
label_1edaa0:
    // 0x1edaa0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1edaa0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1edaa4:
    // 0x1edaa4: 0x0  nop
    ctx->pc = 0x1edaa4u;
    // NOP
label_1edaa8:
    // 0x1edaa8: 0x8f828f48  lw          $v0, -0x70B8($gp)
    ctx->pc = 0x1edaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938440)));
label_1edaac:
    // 0x1edaac: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1edaacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1edab0:
    // 0x1edab0: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_1edab4:
    if (ctx->pc == 0x1EDAB4u) {
        ctx->pc = 0x1EDAB8u;
        goto label_1edab8;
    }
    ctx->pc = 0x1EDAB0u;
    {
        const bool branch_taken_0x1edab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1edab0) {
            ctx->pc = 0x1EDA7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eda7c;
        }
    }
    ctx->pc = 0x1EDAB8u;
label_1edab8:
    // 0x1edab8: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_1edabc:
    if (ctx->pc == 0x1EDABCu) {
        ctx->pc = 0x1EDAC0u;
        goto label_1edac0;
    }
    ctx->pc = 0x1EDAB8u;
    {
        const bool branch_taken_0x1edab8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edab8) {
            ctx->pc = 0x1EDAD0u;
            goto label_1edad0;
        }
    }
    ctx->pc = 0x1EDAC0u;
label_1edac0:
    // 0x1edac0: 0xc085904  jal         func_216410
label_1edac4:
    if (ctx->pc == 0x1EDAC4u) {
        ctx->pc = 0x1EDAC8u;
        goto label_1edac8;
    }
    ctx->pc = 0x1EDAC0u;
    SET_GPR_U32(ctx, 31, 0x1EDAC8u);
    ctx->pc = 0x216410u;
    { ctx->pc = 0x216410; return; }
    ctx->pc = 0x1EDAC8u;
label_1edac8:
    // 0x1edac8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1edacc:
    if (ctx->pc == 0x1EDACCu) {
        ctx->pc = 0x1EDAD0u;
        goto label_1edad0;
    }
    ctx->pc = 0x1EDAC8u;
    {
        const bool branch_taken_0x1edac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edac8) {
            ctx->pc = 0x1EDAE0u;
            goto label_1edae0;
        }
    }
    ctx->pc = 0x1EDAD0u;
label_1edad0:
    // 0x1edad0: 0xc07b48c  jal         func_1ED230
label_1edad4:
    if (ctx->pc == 0x1EDAD4u) {
        ctx->pc = 0x1EDAD8u;
        goto label_1edad8;
    }
    ctx->pc = 0x1EDAD0u;
    SET_GPR_U32(ctx, 31, 0x1EDAD8u);
    ctx->pc = 0x1ED230u;
    { ctx->pc = 0x1ed230; return; }
    ctx->pc = 0x1EDAD8u;
label_1edad8:
    // 0x1edad8: 0x1000ffd5  b           . + 4 + (-0x2B << 2)
label_1edadc:
    if (ctx->pc == 0x1EDADCu) {
        ctx->pc = 0x1EDADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDAD8u;
        // 0x1edadc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDAE0u;
        goto label_1edae0;
    }
    ctx->pc = 0x1EDAD8u;
    {
        const bool branch_taken_0x1edad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDAD8u;
        // 0x1edadc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edad8) {
            ctx->pc = 0x1EDA30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eda30;
        }
    }
    ctx->pc = 0x1EDAE0u;
label_1edae0:
    // 0x1edae0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1edae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1edae4:
    // 0x1edae4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1edae4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1edae8:
    // 0x1edae8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1edae8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1edaec:
    // 0x1edaec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1edaecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1edaf0:
    // 0x1edaf0: 0x3e00008  jr          $ra
label_1edaf4:
    if (ctx->pc == 0x1EDAF4u) {
        ctx->pc = 0x1EDAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDAF0u;
        // 0x1edaf4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDAF8u;
        goto label_1edaf8;
    }
    ctx->pc = 0x1EDAF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDAF0u;
        // 0x1edaf4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDAF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EDAF8u;
label_1edaf8:
    // 0x1edaf8: 0x0  nop
    ctx->pc = 0x1edaf8u;
    // NOP
label_1edafc:
    // 0x1edafc: 0x0  nop
    ctx->pc = 0x1edafcu;
    // NOP
label_1edb00:
    // 0x1edb00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1edb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1edb04:
    // 0x1edb04: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x1edb04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_1edb08:
    // 0x1edb08: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1edb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1edb0c:
    // 0x1edb0c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1edb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1edb10:
    // 0x1edb10: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1edb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1edb14:
    // 0x1edb14: 0x244229e0  addiu       $v0, $v0, 0x29E0
    ctx->pc = 0x1edb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10720));
label_1edb18:
    // 0x1edb18: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1edb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1edb1c:
    // 0x1edb1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1edb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1edb20:
    // 0x1edb20: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1edb20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1edb24:
    // 0x1edb24: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1edb24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1edb28:
    // 0x1edb28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1edb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1edb2c:
    // 0x1edb2c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1edb2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1edb30:
    // 0x1edb30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1edb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1edb34:
    // 0x1edb34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1edb34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1edb38:
    // 0x1edb38: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x1edb38u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1edb3c:
    // 0x1edb3c: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
label_1edb40:
    if (ctx->pc == 0x1EDB40u) {
        ctx->pc = 0x1EDB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB3Cu;
        // 0x1edb40: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDB44u;
        goto label_1edb44;
    }
    ctx->pc = 0x1EDB3Cu;
    {
        const bool branch_taken_0x1edb3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB3Cu;
        // 0x1edb40: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edb3c) {
            ctx->pc = 0x1EDBBCu;
            goto label_1edbbc;
        }
    }
    ctx->pc = 0x1EDB44u;
label_1edb44:
    // 0x1edb44: 0xc07be9c  jal         func_1EFA70
label_1edb48:
    if (ctx->pc == 0x1EDB48u) {
        ctx->pc = 0x1EDB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB44u;
        // 0x1edb48: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDB4Cu;
        goto label_1edb4c;
    }
    ctx->pc = 0x1EDB44u;
    SET_GPR_U32(ctx, 31, 0x1EDB4Cu);
    ctx->pc = 0x1EDB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDB44u;
    // 0x1edb48: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFA70u;
    { ctx->pc = 0x1efa70; return; }
    ctx->pc = 0x1EDB4Cu;
label_1edb4c:
    // 0x1edb4c: 0xc07bd90  jal         func_1EF640
label_1edb50:
    if (ctx->pc == 0x1EDB50u) {
        ctx->pc = 0x1EDB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB4Cu;
        // 0x1edb50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDB54u;
        goto label_1edb54;
    }
    ctx->pc = 0x1EDB4Cu;
    SET_GPR_U32(ctx, 31, 0x1EDB54u);
    ctx->pc = 0x1EDB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDB4Cu;
    // 0x1edb50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF640u;
    { ctx->pc = 0x1ef640; return; }
    ctx->pc = 0x1EDB54u;
label_1edb54:
    // 0x1edb54: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_1edb58:
    if (ctx->pc == 0x1EDB58u) {
        ctx->pc = 0x1EDB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB54u;
        // 0x1edb58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDB5Cu;
        goto label_1edb5c;
    }
    ctx->pc = 0x1EDB54u;
    {
        const bool branch_taken_0x1edb54 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB54u;
        // 0x1edb58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edb54) {
            ctx->pc = 0x1EDB68u;
            goto label_1edb68;
        }
    }
    ctx->pc = 0x1EDB5Cu;
label_1edb5c:
    // 0x1edb5c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1edb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1edb60:
    // 0x1edb60: 0x16830009  bne         $s4, $v1, . + 4 + (0x9 << 2)
label_1edb64:
    if (ctx->pc == 0x1EDB64u) {
        ctx->pc = 0x1EDB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB60u;
        // 0x1edb64: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDB68u;
        goto label_1edb68;
    }
    ctx->pc = 0x1EDB60u;
    {
        const bool branch_taken_0x1edb60 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EDB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB60u;
        // 0x1edb64: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edb60) {
            ctx->pc = 0x1EDB88u;
            goto label_1edb88;
        }
    }
    ctx->pc = 0x1EDB68u;
label_1edb68:
    // 0x1edb68: 0xc07bfb4  jal         func_1EFED0
label_1edb6c:
    if (ctx->pc == 0x1EDB6Cu) {
        ctx->pc = 0x1EDB70u;
        goto label_1edb70;
    }
    ctx->pc = 0x1EDB68u;
    SET_GPR_U32(ctx, 31, 0x1EDB70u);
    ctx->pc = 0x1EFED0u;
    { ctx->pc = 0x1efed0; return; }
    ctx->pc = 0x1EDB70u;
label_1edb70:
    // 0x1edb70: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1edb70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1edb74:
    // 0x1edb74: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1edb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1edb78:
    // 0x1edb78: 0xc085c34  jal         func_2170D0
label_1edb7c:
    if (ctx->pc == 0x1EDB7Cu) {
        ctx->pc = 0x1EDB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB78u;
        // 0x1edb7c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDB80u;
        goto label_1edb80;
    }
    ctx->pc = 0x1EDB78u;
    SET_GPR_U32(ctx, 31, 0x1EDB80u);
    ctx->pc = 0x1EDB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDB78u;
    // 0x1edb7c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2170D0u;
    { ctx->pc = 0x2170d0; return; }
    ctx->pc = 0x1EDB80u;
label_1edb80:
    // 0x1edb80: 0x1000002b  b           . + 4 + (0x2B << 2)
label_1edb84:
    if (ctx->pc == 0x1EDB84u) {
        ctx->pc = 0x1EDB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB80u;
        // 0x1edb84: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDB88u;
        goto label_1edb88;
    }
    ctx->pc = 0x1EDB80u;
    {
        const bool branch_taken_0x1edb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB80u;
        // 0x1edb84: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edb80) {
            ctx->pc = 0x1EDC30u;
            goto label_1edc30;
        }
    }
    ctx->pc = 0x1EDB88u;
label_1edb88:
    // 0x1edb88: 0x16830005  bne         $s4, $v1, . + 4 + (0x5 << 2)
label_1edb8c:
    if (ctx->pc == 0x1EDB8Cu) {
        ctx->pc = 0x1EDB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB88u;
        // 0x1edb8c: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDB90u;
        goto label_1edb90;
    }
    ctx->pc = 0x1EDB88u;
    {
        const bool branch_taken_0x1edb88 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EDB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB88u;
        // 0x1edb8c: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edb88) {
            ctx->pc = 0x1EDBA0u;
            goto label_1edba0;
        }
    }
    ctx->pc = 0x1EDB90u;
label_1edb90:
    // 0x1edb90: 0xc085b30  jal         func_216CC0
label_1edb94:
    if (ctx->pc == 0x1EDB94u) {
        ctx->pc = 0x1EDB98u;
        goto label_1edb98;
    }
    ctx->pc = 0x1EDB90u;
    SET_GPR_U32(ctx, 31, 0x1EDB98u);
    ctx->pc = 0x216CC0u;
    { ctx->pc = 0x216cc0; return; }
    ctx->pc = 0x1EDB98u;
label_1edb98:
    // 0x1edb98: 0x10000024  b           . + 4 + (0x24 << 2)
label_1edb9c:
    if (ctx->pc == 0x1EDB9Cu) {
        ctx->pc = 0x1EDBA0u;
        goto label_1edba0;
    }
    ctx->pc = 0x1EDB98u;
    {
        const bool branch_taken_0x1edb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edb98) {
            ctx->pc = 0x1EDC2Cu;
            goto label_1edc2c;
        }
    }
    ctx->pc = 0x1EDBA0u;
label_1edba0:
    // 0x1edba0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1edba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1edba4:
    // 0x1edba4: 0x16830021  bne         $s4, $v1, . + 4 + (0x21 << 2)
label_1edba8:
    if (ctx->pc == 0x1EDBA8u) {
        ctx->pc = 0x1EDBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDBA4u;
        // 0x1edba8: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDBACu;
        goto label_1edbac;
    }
    ctx->pc = 0x1EDBA4u;
    {
        const bool branch_taken_0x1edba4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EDBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDBA4u;
        // 0x1edba8: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edba4) {
            ctx->pc = 0x1EDC2Cu;
            goto label_1edc2c;
        }
    }
    ctx->pc = 0x1EDBACu;
label_1edbac:
    // 0x1edbac: 0xc085b6c  jal         func_216DB0
label_1edbb0:
    if (ctx->pc == 0x1EDBB0u) {
        ctx->pc = 0x1EDBB4u;
        goto label_1edbb4;
    }
    ctx->pc = 0x1EDBACu;
    SET_GPR_U32(ctx, 31, 0x1EDBB4u);
    ctx->pc = 0x216DB0u;
    { ctx->pc = 0x216db0; return; }
    ctx->pc = 0x1EDBB4u;
label_1edbb4:
    // 0x1edbb4: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1edbb8:
    if (ctx->pc == 0x1EDBB8u) {
        ctx->pc = 0x1EDBBCu;
        goto label_1edbbc;
    }
    ctx->pc = 0x1EDBB4u;
    {
        const bool branch_taken_0x1edbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edbb4) {
            ctx->pc = 0x1EDC2Cu;
            goto label_1edc2c;
        }
    }
    ctx->pc = 0x1EDBBCu;
label_1edbbc:
    // 0x1edbbc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1edbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1edbc0:
    // 0x1edbc0: 0x1285000e  beq         $s4, $a1, . + 4 + (0xE << 2)
label_1edbc4:
    if (ctx->pc == 0x1EDBC4u) {
        ctx->pc = 0x1EDBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDBC0u;
        // 0x1edbc4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDBC8u;
        goto label_1edbc8;
    }
    ctx->pc = 0x1EDBC0u;
    {
        const bool branch_taken_0x1edbc0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 5));
        ctx->pc = 0x1EDBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDBC0u;
        // 0x1edbc4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edbc0) {
            ctx->pc = 0x1EDBFCu;
            goto label_1edbfc;
        }
    }
    ctx->pc = 0x1EDBC8u;
label_1edbc8:
    // 0x1edbc8: 0x1282000c  beq         $s4, $v0, . + 4 + (0xC << 2)
label_1edbcc:
    if (ctx->pc == 0x1EDBCCu) {
        ctx->pc = 0x1EDBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDBC8u;
        // 0x1edbcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDBD0u;
        goto label_1edbd0;
    }
    ctx->pc = 0x1EDBC8u;
    {
        const bool branch_taken_0x1edbc8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EDBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDBC8u;
        // 0x1edbcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edbc8) {
            ctx->pc = 0x1EDBFCu;
            goto label_1edbfc;
        }
    }
    ctx->pc = 0x1EDBD0u;
label_1edbd0:
    // 0x1edbd0: 0xc07baec  jal         func_1EEBB0
label_1edbd4:
    if (ctx->pc == 0x1EDBD4u) {
        ctx->pc = 0x1EDBD8u;
        goto label_1edbd8;
    }
    ctx->pc = 0x1EDBD0u;
    SET_GPR_U32(ctx, 31, 0x1EDBD8u);
    ctx->pc = 0x1EEBB0u;
    { ctx->pc = 0x1eebb0; return; }
    ctx->pc = 0x1EDBD8u;
label_1edbd8:
    // 0x1edbd8: 0xc07baf8  jal         func_1EEBE0
label_1edbdc:
    if (ctx->pc == 0x1EDBDCu) {
        ctx->pc = 0x1EDBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDBD8u;
        // 0x1edbdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDBE0u;
        goto label_1edbe0;
    }
    ctx->pc = 0x1EDBD8u;
    SET_GPR_U32(ctx, 31, 0x1EDBE0u);
    ctx->pc = 0x1EDBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDBD8u;
    // 0x1edbdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EEBE0u;
    { ctx->pc = 0x1eebe0; return; }
    ctx->pc = 0x1EDBE0u;
label_1edbe0:
    // 0x1edbe0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1edbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1edbe4:
    // 0x1edbe4: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_1edbe8:
    if (ctx->pc == 0x1EDBE8u) {
        ctx->pc = 0x1EDBECu;
        goto label_1edbec;
    }
    ctx->pc = 0x1EDBE4u;
    {
        const bool branch_taken_0x1edbe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1edbe4) {
            ctx->pc = 0x1EDBFCu;
            goto label_1edbfc;
        }
    }
    ctx->pc = 0x1EDBECu;
label_1edbec:
    // 0x1edbec: 0xc07b48c  jal         func_1ED230
label_1edbf0:
    if (ctx->pc == 0x1EDBF0u) {
        ctx->pc = 0x1EDBF4u;
        goto label_1edbf4;
    }
    ctx->pc = 0x1EDBECu;
    SET_GPR_U32(ctx, 31, 0x1EDBF4u);
    ctx->pc = 0x1ED230u;
    { ctx->pc = 0x1ed230; return; }
    ctx->pc = 0x1EDBF4u;
label_1edbf4:
    // 0x1edbf4: 0x1000fff8  b           . + 4 + (-0x8 << 2)
label_1edbf8:
    if (ctx->pc == 0x1EDBF8u) {
        ctx->pc = 0x1EDBFCu;
        goto label_1edbfc;
    }
    ctx->pc = 0x1EDBF4u;
    {
        const bool branch_taken_0x1edbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edbf4) {
            ctx->pc = 0x1EDBD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1edbd8;
        }
    }
    ctx->pc = 0x1EDBFCu;
label_1edbfc:
    // 0x1edbfc: 0x0  nop
    ctx->pc = 0x1edbfcu;
    // NOP
label_1edc00:
    // 0x1edc00: 0xc07be9c  jal         func_1EFA70
label_1edc04:
    if (ctx->pc == 0x1EDC04u) {
        ctx->pc = 0x1EDC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC00u;
        // 0x1edc04: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDC08u;
        goto label_1edc08;
    }
    ctx->pc = 0x1EDC00u;
    SET_GPR_U32(ctx, 31, 0x1EDC08u);
    ctx->pc = 0x1EDC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDC00u;
    // 0x1edc04: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFA70u;
    { ctx->pc = 0x1efa70; return; }
    ctx->pc = 0x1EDC08u;
label_1edc08:
    // 0x1edc08: 0xc07bd90  jal         func_1EF640
label_1edc0c:
    if (ctx->pc == 0x1EDC0Cu) {
        ctx->pc = 0x1EDC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC08u;
        // 0x1edc0c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDC10u;
        goto label_1edc10;
    }
    ctx->pc = 0x1EDC08u;
    SET_GPR_U32(ctx, 31, 0x1EDC10u);
    ctx->pc = 0x1EDC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDC08u;
    // 0x1edc0c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF640u;
    { ctx->pc = 0x1ef640; return; }
    ctx->pc = 0x1EDC10u;
label_1edc10:
    // 0x1edc10: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_1edc14:
    if (ctx->pc == 0x1EDC14u) {
        ctx->pc = 0x1EDC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC10u;
        // 0x1edc14: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDC18u;
        goto label_1edc18;
    }
    ctx->pc = 0x1EDC10u;
    {
        const bool branch_taken_0x1edc10 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC10u;
        // 0x1edc14: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edc10) {
            ctx->pc = 0x1EDC24u;
            goto label_1edc24;
        }
    }
    ctx->pc = 0x1EDC18u;
label_1edc18:
    // 0x1edc18: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1edc18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1edc1c:
    // 0x1edc1c: 0x16830003  bne         $s4, $v1, . + 4 + (0x3 << 2)
label_1edc20:
    if (ctx->pc == 0x1EDC20u) {
        ctx->pc = 0x1EDC24u;
        goto label_1edc24;
    }
    ctx->pc = 0x1EDC1Cu;
    {
        const bool branch_taken_0x1edc1c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        if (branch_taken_0x1edc1c) {
            ctx->pc = 0x1EDC2Cu;
            goto label_1edc2c;
        }
    }
    ctx->pc = 0x1EDC24u;
label_1edc24:
    // 0x1edc24: 0xc07bfb4  jal         func_1EFED0
label_1edc28:
    if (ctx->pc == 0x1EDC28u) {
        ctx->pc = 0x1EDC2Cu;
        goto label_1edc2c;
    }
    ctx->pc = 0x1EDC24u;
    SET_GPR_U32(ctx, 31, 0x1EDC2Cu);
    ctx->pc = 0x1EFED0u;
    { ctx->pc = 0x1efed0; return; }
    ctx->pc = 0x1EDC2Cu;
label_1edc2c:
    // 0x1edc2c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1edc2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1edc30:
    // 0x1edc30: 0x6610004  bgez        $s3, . + 4 + (0x4 << 2)
label_1edc34:
    if (ctx->pc == 0x1EDC34u) {
        ctx->pc = 0x1EDC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC30u;
        // 0x1edc34: 0x32630003  andi        $v1, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDC38u;
        goto label_1edc38;
    }
    ctx->pc = 0x1EDC30u;
    {
        const bool branch_taken_0x1edc30 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x1EDC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC30u;
        // 0x1edc34: 0x32630003  andi        $v1, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edc30) {
            ctx->pc = 0x1EDC44u;
            goto label_1edc44;
        }
    }
    ctx->pc = 0x1EDC38u;
label_1edc38:
    // 0x1edc38: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1edc3c:
    if (ctx->pc == 0x1EDC3Cu) {
        ctx->pc = 0x1EDC40u;
        goto label_1edc40;
    }
    ctx->pc = 0x1EDC38u;
    {
        const bool branch_taken_0x1edc38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edc38) {
            ctx->pc = 0x1EDC44u;
            goto label_1edc44;
        }
    }
    ctx->pc = 0x1EDC40u;
label_1edc40:
    // 0x1edc40: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x1edc40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_1edc44:
    // 0x1edc44: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
label_1edc48:
    if (ctx->pc == 0x1EDC48u) {
        ctx->pc = 0x1EDC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC44u;
        // 0x1edc48: 0x132083  sra         $a0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDC4Cu;
        goto label_1edc4c;
    }
    ctx->pc = 0x1EDC44u;
    {
        const bool branch_taken_0x1edc44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EDC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC44u;
        // 0x1edc48: 0x132083  sra         $a0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edc44) {
            ctx->pc = 0x1EDC90u;
            goto label_1edc90;
        }
    }
    ctx->pc = 0x1EDC4Cu;
label_1edc4c:
    // 0x1edc4c: 0x6610002  bgez        $s3, . + 4 + (0x2 << 2)
label_1edc50:
    if (ctx->pc == 0x1EDC50u) {
        ctx->pc = 0x1EDC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC4Cu;
        // 0x1edc50: 0x26630003  addiu       $v1, $s3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDC54u;
        goto label_1edc54;
    }
    ctx->pc = 0x1EDC4Cu;
    {
        const bool branch_taken_0x1edc4c = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x1EDC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC4Cu;
        // 0x1edc50: 0x26630003  addiu       $v1, $s3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edc4c) {
            ctx->pc = 0x1EDC58u;
            goto label_1edc58;
        }
    }
    ctx->pc = 0x1EDC54u;
label_1edc54:
    // 0x1edc54: 0x32083  sra         $a0, $v1, 2
    ctx->pc = 0x1edc54u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
label_1edc58:
    // 0x1edc58: 0x8f838f48  lw          $v1, -0x70B8($gp)
    ctx->pc = 0x1edc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938440)));
label_1edc5c:
    // 0x1edc5c: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1edc5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1edc60:
    // 0x1edc60: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_1edc64:
    if (ctx->pc == 0x1EDC64u) {
        ctx->pc = 0x1EDC68u;
        goto label_1edc68;
    }
    ctx->pc = 0x1EDC60u;
    {
        const bool branch_taken_0x1edc60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edc60) {
            ctx->pc = 0x1EDC90u;
            goto label_1edc90;
        }
    }
    ctx->pc = 0x1EDC68u;
label_1edc68:
    // 0x1edc68: 0x10900009  beq         $a0, $s0, . + 4 + (0x9 << 2)
label_1edc6c:
    if (ctx->pc == 0x1EDC6Cu) {
        ctx->pc = 0x1EDC70u;
        goto label_1edc70;
    }
    ctx->pc = 0x1EDC68u;
    {
        const bool branch_taken_0x1edc68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        if (branch_taken_0x1edc68) {
            ctx->pc = 0x1EDC90u;
            goto label_1edc90;
        }
    }
    ctx->pc = 0x1EDC70u;
label_1edc70:
    // 0x1edc70: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_1edc74:
    if (ctx->pc == 0x1EDC74u) {
        ctx->pc = 0x1EDC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC70u;
        // 0x1edc74: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDC78u;
        goto label_1edc78;
    }
    ctx->pc = 0x1EDC70u;
    {
        const bool branch_taken_0x1edc70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC70u;
        // 0x1edc74: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edc70) {
            ctx->pc = 0x1EDC88u;
            goto label_1edc88;
        }
    }
    ctx->pc = 0x1EDC78u;
label_1edc78:
    // 0x1edc78: 0xc07baec  jal         func_1EEBB0
label_1edc7c:
    if (ctx->pc == 0x1EDC7Cu) {
        ctx->pc = 0x1EDC80u;
        goto label_1edc80;
    }
    ctx->pc = 0x1EDC78u;
    SET_GPR_U32(ctx, 31, 0x1EDC80u);
    ctx->pc = 0x1EEBB0u;
    { ctx->pc = 0x1eebb0; return; }
    ctx->pc = 0x1EDC80u;
label_1edc80:
    // 0x1edc80: 0x10000003  b           . + 4 + (0x3 << 2)
label_1edc84:
    if (ctx->pc == 0x1EDC84u) {
        ctx->pc = 0x1EDC88u;
        goto label_1edc88;
    }
    ctx->pc = 0x1EDC80u;
    {
        const bool branch_taken_0x1edc80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edc80) {
            ctx->pc = 0x1EDC90u;
            goto label_1edc90;
        }
    }
    ctx->pc = 0x1EDC88u;
label_1edc88:
    // 0x1edc88: 0xc07baec  jal         func_1EEBB0
label_1edc8c:
    if (ctx->pc == 0x1EDC8Cu) {
        ctx->pc = 0x1EDC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC88u;
        // 0x1edc8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDC90u;
        goto label_1edc90;
    }
    ctx->pc = 0x1EDC88u;
    SET_GPR_U32(ctx, 31, 0x1EDC90u);
    ctx->pc = 0x1EDC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDC88u;
    // 0x1edc8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EEBB0u;
    { ctx->pc = 0x1eebb0; return; }
    ctx->pc = 0x1EDC90u;
label_1edc90:
    // 0x1edc90: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1edc90u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1edc94:
    // 0x1edc94: 0x10000015  b           . + 4 + (0x15 << 2)
label_1edc98:
    if (ctx->pc == 0x1EDC98u) {
        ctx->pc = 0x1EDC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC94u;
        // 0x1edc98: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDC9Cu;
        goto label_1edc9c;
    }
    ctx->pc = 0x1EDC94u;
    {
        const bool branch_taken_0x1edc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC94u;
        // 0x1edc98: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edc94) {
            ctx->pc = 0x1EDCECu;
            goto label_1edcec;
        }
    }
    ctx->pc = 0x1EDC9Cu;
label_1edc9c:
    // 0x1edc9c: 0x0  nop
    ctx->pc = 0x1edc9cu;
    // NOP
label_1edca0:
    // 0x1edca0: 0x12500010  beq         $s2, $s0, . + 4 + (0x10 << 2)
label_1edca4:
    if (ctx->pc == 0x1EDCA4u) {
        ctx->pc = 0x1EDCA8u;
        goto label_1edca8;
    }
    ctx->pc = 0x1EDCA0u;
    {
        const bool branch_taken_0x1edca0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 16));
        if (branch_taken_0x1edca0) {
            ctx->pc = 0x1EDCE4u;
            goto label_1edce4;
        }
    }
    ctx->pc = 0x1EDCA8u;
label_1edca8:
    // 0x1edca8: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_1edcac:
    if (ctx->pc == 0x1EDCACu) {
        ctx->pc = 0x1EDCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDCA8u;
        // 0x1edcac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDCB0u;
        goto label_1edcb0;
    }
    ctx->pc = 0x1EDCA8u;
    {
        const bool branch_taken_0x1edca8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDCA8u;
        // 0x1edcac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edca8) {
            ctx->pc = 0x1EDCC8u;
            goto label_1edcc8;
        }
    }
    ctx->pc = 0x1EDCB0u;
label_1edcb0:
    // 0x1edcb0: 0xc07baf8  jal         func_1EEBE0
label_1edcb4:
    if (ctx->pc == 0x1EDCB4u) {
        ctx->pc = 0x1EDCB8u;
        goto label_1edcb8;
    }
    ctx->pc = 0x1EDCB0u;
    SET_GPR_U32(ctx, 31, 0x1EDCB8u);
    ctx->pc = 0x1EEBE0u;
    { ctx->pc = 0x1eebe0; return; }
    ctx->pc = 0x1EDCB8u;
label_1edcb8:
    // 0x1edcb8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1edcbc:
    if (ctx->pc == 0x1EDCBCu) {
        ctx->pc = 0x1EDCC0u;
        goto label_1edcc0;
    }
    ctx->pc = 0x1EDCB8u;
    {
        const bool branch_taken_0x1edcb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edcb8) {
            ctx->pc = 0x1EDCE4u;
            goto label_1edce4;
        }
    }
    ctx->pc = 0x1EDCC0u;
label_1edcc0:
    // 0x1edcc0: 0x1000000f  b           . + 4 + (0xF << 2)
label_1edcc4:
    if (ctx->pc == 0x1EDCC4u) {
        ctx->pc = 0x1EDCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDCC0u;
        // 0x1edcc4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDCC8u;
        goto label_1edcc8;
    }
    ctx->pc = 0x1EDCC0u;
    {
        const bool branch_taken_0x1edcc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDCC0u;
        // 0x1edcc4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edcc0) {
            ctx->pc = 0x1EDD00u;
            goto label_1edd00;
        }
    }
    ctx->pc = 0x1EDCC8u;
label_1edcc8:
    // 0x1edcc8: 0xc07baf8  jal         func_1EEBE0
label_1edccc:
    if (ctx->pc == 0x1EDCCCu) {
        ctx->pc = 0x1EDCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDCC8u;
        // 0x1edccc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDCD0u;
        goto label_1edcd0;
    }
    ctx->pc = 0x1EDCC8u;
    SET_GPR_U32(ctx, 31, 0x1EDCD0u);
    ctx->pc = 0x1EDCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDCC8u;
    // 0x1edccc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EEBE0u;
    { ctx->pc = 0x1eebe0; return; }
    ctx->pc = 0x1EDCD0u;
label_1edcd0:
    // 0x1edcd0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1edcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1edcd4:
    // 0x1edcd4: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_1edcd8:
    if (ctx->pc == 0x1EDCD8u) {
        ctx->pc = 0x1EDCDCu;
        goto label_1edcdc;
    }
    ctx->pc = 0x1EDCD4u;
    {
        const bool branch_taken_0x1edcd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1edcd4) {
            ctx->pc = 0x1EDCE4u;
            goto label_1edce4;
        }
    }
    ctx->pc = 0x1EDCDCu;
label_1edcdc:
    // 0x1edcdc: 0x10000008  b           . + 4 + (0x8 << 2)
label_1edce0:
    if (ctx->pc == 0x1EDCE0u) {
        ctx->pc = 0x1EDCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDCDCu;
        // 0x1edce0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDCE4u;
        goto label_1edce4;
    }
    ctx->pc = 0x1EDCDCu;
    {
        const bool branch_taken_0x1edcdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDCDCu;
        // 0x1edce0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edcdc) {
            ctx->pc = 0x1EDD00u;
            goto label_1edd00;
        }
    }
    ctx->pc = 0x1EDCE4u;
label_1edce4:
    // 0x1edce4: 0x0  nop
    ctx->pc = 0x1edce4u;
    // NOP
label_1edce8:
    // 0x1edce8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1edce8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1edcec:
    // 0x1edcec: 0x0  nop
    ctx->pc = 0x1edcecu;
    // NOP
label_1edcf0:
    // 0x1edcf0: 0x8f838f48  lw          $v1, -0x70B8($gp)
    ctx->pc = 0x1edcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938440)));
label_1edcf4:
    // 0x1edcf4: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x1edcf4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1edcf8:
    // 0x1edcf8: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
label_1edcfc:
    if (ctx->pc == 0x1EDCFCu) {
        ctx->pc = 0x1EDD00u;
        goto label_1edd00;
    }
    ctx->pc = 0x1EDCF8u;
    {
        const bool branch_taken_0x1edcf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1edcf8) {
            ctx->pc = 0x1EDC9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1edc9c;
        }
    }
    ctx->pc = 0x1EDD00u;
label_1edd00:
    // 0x1edd00: 0x16a00005  bnez        $s5, . + 4 + (0x5 << 2)
label_1edd04:
    if (ctx->pc == 0x1EDD04u) {
        ctx->pc = 0x1EDD08u;
        goto label_1edd08;
    }
    ctx->pc = 0x1EDD00u;
    {
        const bool branch_taken_0x1edd00 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x1edd00) {
            ctx->pc = 0x1EDD18u;
            goto label_1edd18;
        }
    }
    ctx->pc = 0x1EDD08u;
label_1edd08:
    // 0x1edd08: 0xc07b48c  jal         func_1ED230
label_1edd0c:
    if (ctx->pc == 0x1EDD0Cu) {
        ctx->pc = 0x1EDD10u;
        goto label_1edd10;
    }
    ctx->pc = 0x1EDD08u;
    SET_GPR_U32(ctx, 31, 0x1EDD10u);
    ctx->pc = 0x1ED230u;
    { ctx->pc = 0x1ed230; return; }
    ctx->pc = 0x1EDD10u;
label_1edd10:
    // 0x1edd10: 0x1000ffc7  b           . + 4 + (-0x39 << 2)
label_1edd14:
    if (ctx->pc == 0x1EDD14u) {
        ctx->pc = 0x1EDD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD10u;
        // 0x1edd14: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDD18u;
        goto label_1edd18;
    }
    ctx->pc = 0x1EDD10u;
    {
        const bool branch_taken_0x1edd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD10u;
        // 0x1edd14: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edd10) {
            ctx->pc = 0x1EDC30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1edc30;
        }
    }
    ctx->pc = 0x1EDD18u;
label_1edd18:
    // 0x1edd18: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
label_1edd1c:
    if (ctx->pc == 0x1EDD1Cu) {
        ctx->pc = 0x1EDD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD18u;
        // 0x1edd1c: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDD20u;
        goto label_1edd20;
    }
    ctx->pc = 0x1EDD18u;
    {
        const bool branch_taken_0x1edd18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD18u;
        // 0x1edd1c: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edd18) {
            ctx->pc = 0x1EDD60u;
            goto label_1edd60;
        }
    }
    ctx->pc = 0x1EDD20u;
label_1edd20:
    // 0x1edd20: 0x12830026  beq         $s4, $v1, . + 4 + (0x26 << 2)
label_1edd24:
    if (ctx->pc == 0x1EDD24u) {
        ctx->pc = 0x1EDD28u;
        goto label_1edd28;
    }
    ctx->pc = 0x1EDD20u;
    {
        const bool branch_taken_0x1edd20 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x1edd20) {
            ctx->pc = 0x1EDDBCu;
            goto label_1eddbc;
        }
    }
    ctx->pc = 0x1EDD28u;
label_1edd28:
    // 0x1edd28: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1edd28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1edd2c:
    // 0x1edd2c: 0x12830023  beq         $s4, $v1, . + 4 + (0x23 << 2)
label_1edd30:
    if (ctx->pc == 0x1EDD30u) {
        ctx->pc = 0x1EDD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD2Cu;
        // 0x1edd30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDD34u;
        goto label_1edd34;
    }
    ctx->pc = 0x1EDD2Cu;
    {
        const bool branch_taken_0x1edd2c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        ctx->pc = 0x1EDD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD2Cu;
        // 0x1edd30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edd2c) {
            ctx->pc = 0x1EDDBCu;
            goto label_1eddbc;
        }
    }
    ctx->pc = 0x1EDD34u;
label_1edd34:
    // 0x1edd34: 0xc07baec  jal         func_1EEBB0
label_1edd38:
    if (ctx->pc == 0x1EDD38u) {
        ctx->pc = 0x1EDD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD34u;
        // 0x1edd38: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDD3Cu;
        goto label_1edd3c;
    }
    ctx->pc = 0x1EDD34u;
    SET_GPR_U32(ctx, 31, 0x1EDD3Cu);
    ctx->pc = 0x1EDD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDD34u;
    // 0x1edd38: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EEBB0u;
    { ctx->pc = 0x1eebb0; return; }
    ctx->pc = 0x1EDD3Cu;
label_1edd3c:
    // 0x1edd3c: 0xc07baf8  jal         func_1EEBE0
label_1edd40:
    if (ctx->pc == 0x1EDD40u) {
        ctx->pc = 0x1EDD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD3Cu;
        // 0x1edd40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDD44u;
        goto label_1edd44;
    }
    ctx->pc = 0x1EDD3Cu;
    SET_GPR_U32(ctx, 31, 0x1EDD44u);
    ctx->pc = 0x1EDD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDD3Cu;
    // 0x1edd40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EEBE0u;
    { ctx->pc = 0x1eebe0; return; }
    ctx->pc = 0x1EDD44u;
label_1edd44:
    // 0x1edd44: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1edd44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1edd48:
    // 0x1edd48: 0x1043001c  beq         $v0, $v1, . + 4 + (0x1C << 2)
label_1edd4c:
    if (ctx->pc == 0x1EDD4Cu) {
        ctx->pc = 0x1EDD50u;
        goto label_1edd50;
    }
    ctx->pc = 0x1EDD48u;
    {
        const bool branch_taken_0x1edd48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1edd48) {
            ctx->pc = 0x1EDDBCu;
            goto label_1eddbc;
        }
    }
    ctx->pc = 0x1EDD50u;
label_1edd50:
    // 0x1edd50: 0xc07b48c  jal         func_1ED230
label_1edd54:
    if (ctx->pc == 0x1EDD54u) {
        ctx->pc = 0x1EDD58u;
        goto label_1edd58;
    }
    ctx->pc = 0x1EDD50u;
    SET_GPR_U32(ctx, 31, 0x1EDD58u);
    ctx->pc = 0x1ED230u;
    { ctx->pc = 0x1ed230; return; }
    ctx->pc = 0x1EDD58u;
label_1edd58:
    // 0x1edd58: 0x1000fff8  b           . + 4 + (-0x8 << 2)
label_1edd5c:
    if (ctx->pc == 0x1EDD5Cu) {
        ctx->pc = 0x1EDD60u;
        goto label_1edd60;
    }
    ctx->pc = 0x1EDD58u;
    {
        const bool branch_taken_0x1edd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edd58) {
            ctx->pc = 0x1EDD3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1edd3c;
        }
    }
    ctx->pc = 0x1EDD60u;
label_1edd60:
    // 0x1edd60: 0x2e810003  sltiu       $at, $s4, 0x3
    ctx->pc = 0x1edd60u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_1edd64:
    // 0x1edd64: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
label_1edd68:
    if (ctx->pc == 0x1EDD68u) {
        ctx->pc = 0x1EDD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD64u;
        // 0x1edd68: 0x2683fffa  addiu       $v1, $s4, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967290));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDD6Cu;
        goto label_1edd6c;
    }
    ctx->pc = 0x1EDD64u;
    {
        const bool branch_taken_0x1edd64 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EDD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD64u;
        // 0x1edd68: 0x2683fffa  addiu       $v1, $s4, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edd64) {
            ctx->pc = 0x1EDD84u;
            goto label_1edd84;
        }
    }
    ctx->pc = 0x1EDD6Cu;
label_1edd6c:
    // 0x1edd6c: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x1edd6cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1edd70:
    // 0x1edd70: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_1edd74:
    if (ctx->pc == 0x1EDD74u) {
        ctx->pc = 0x1EDD78u;
        goto label_1edd78;
    }
    ctx->pc = 0x1EDD70u;
    {
        const bool branch_taken_0x1edd70 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1edd70) {
            ctx->pc = 0x1EDD84u;
            goto label_1edd84;
        }
    }
    ctx->pc = 0x1EDD78u;
label_1edd78:
    // 0x1edd78: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1edd78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1edd7c:
    // 0x1edd7c: 0x1683000f  bne         $s4, $v1, . + 4 + (0xF << 2)
label_1edd80:
    if (ctx->pc == 0x1EDD80u) {
        ctx->pc = 0x1EDD84u;
        goto label_1edd84;
    }
    ctx->pc = 0x1EDD7Cu;
    {
        const bool branch_taken_0x1edd7c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        if (branch_taken_0x1edd7c) {
            ctx->pc = 0x1EDDBCu;
            goto label_1eddbc;
        }
    }
    ctx->pc = 0x1EDD84u;
label_1edd84:
    // 0x1edd84: 0xc085904  jal         func_216410
label_1edd88:
    if (ctx->pc == 0x1EDD88u) {
        ctx->pc = 0x1EDD8Cu;
        goto label_1edd8c;
    }
    ctx->pc = 0x1EDD84u;
    SET_GPR_U32(ctx, 31, 0x1EDD8Cu);
    ctx->pc = 0x216410u;
    { ctx->pc = 0x216410; return; }
    ctx->pc = 0x1EDD8Cu;
label_1edd8c:
    // 0x1edd8c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1edd90:
    if (ctx->pc == 0x1EDD90u) {
        ctx->pc = 0x1EDD94u;
        goto label_1edd94;
    }
    ctx->pc = 0x1EDD8Cu;
    {
        const bool branch_taken_0x1edd8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edd8c) {
            ctx->pc = 0x1EDDBCu;
            goto label_1eddbc;
        }
    }
    ctx->pc = 0x1EDD94u;
label_1edd94:
    // 0x1edd94: 0xc07b48c  jal         func_1ED230
label_1edd98:
    if (ctx->pc == 0x1EDD98u) {
        ctx->pc = 0x1EDD9Cu;
        goto label_1edd9c;
    }
    ctx->pc = 0x1EDD94u;
    SET_GPR_U32(ctx, 31, 0x1EDD9Cu);
    ctx->pc = 0x1ED230u;
    { ctx->pc = 0x1ed230; return; }
    ctx->pc = 0x1EDD9Cu;
label_1edd9c:
    // 0x1edd9c: 0xc085904  jal         func_216410
label_1edda0:
    if (ctx->pc == 0x1EDDA0u) {
        ctx->pc = 0x1EDDA4u;
        goto label_1edda4;
    }
    ctx->pc = 0x1EDD9Cu;
    SET_GPR_U32(ctx, 31, 0x1EDDA4u);
    ctx->pc = 0x216410u;
    { ctx->pc = 0x216410; return; }
    ctx->pc = 0x1EDDA4u;
label_1edda4:
    // 0x1edda4: 0x0  nop
    ctx->pc = 0x1edda4u;
    // NOP
label_1edda8:
    // 0x1edda8: 0x0  nop
    ctx->pc = 0x1edda8u;
    // NOP
label_1eddac:
    // 0x1eddac: 0x0  nop
    ctx->pc = 0x1eddacu;
    // NOP
label_1eddb0:
    // 0x1eddb0: 0x0  nop
    ctx->pc = 0x1eddb0u;
    // NOP
label_1eddb4:
    // 0x1eddb4: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1eddb8:
    if (ctx->pc == 0x1EDDB8u) {
        ctx->pc = 0x1EDDBCu;
        goto label_1eddbc;
    }
    ctx->pc = 0x1EDDB4u;
    {
        const bool branch_taken_0x1eddb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eddb4) {
            ctx->pc = 0x1EDD94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1edd94;
        }
    }
    ctx->pc = 0x1EDDBCu;
label_1eddbc:
    // 0x1eddbc: 0x0  nop
    ctx->pc = 0x1eddbcu;
    // NOP
label_1eddc0:
    // 0x1eddc0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1eddc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1eddc4:
    // 0x1eddc4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1eddc4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1eddc8:
    // 0x1eddc8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1eddc8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1eddcc:
    // 0x1eddcc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1eddccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1eddd0:
    // 0x1eddd0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1eddd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1eddd4:
    // 0x1eddd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1eddd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1eddd8:
    // 0x1eddd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1eddd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1edddc:
    // 0x1edddc: 0x3e00008  jr          $ra
label_1edde0:
    if (ctx->pc == 0x1EDDE0u) {
        ctx->pc = 0x1EDDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDDDCu;
        // 0x1edde0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDDE4u;
        goto label_1edde4;
    }
    ctx->pc = 0x1EDDDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDDDCu;
        // 0x1edde0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDDDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EDDE4u;
label_1edde4:
    // 0x1edde4: 0x0  nop
    ctx->pc = 0x1edde4u;
    // NOP
label_1edde8:
    // 0x1edde8: 0x0  nop
    ctx->pc = 0x1edde8u;
    // NOP
label_1eddec:
    // 0x1eddec: 0x0  nop
    ctx->pc = 0x1eddecu;
    // NOP
label_1eddf0:
    // 0x1eddf0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1eddf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1eddf4:
    // 0x1eddf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eddf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eddf8:
    // 0x1eddf8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1eddf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1eddfc:
    // 0x1eddfc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1eddfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1ede00:
    // 0x1ede00: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1ede00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1ede04:
    // 0x1ede04: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x1ede04u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ede08:
    // 0x1ede08: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1ede08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1ede0c:
    // 0x1ede0c: 0x2417000a  addiu       $s7, $zero, 0xA
    ctx->pc = 0x1ede0cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1ede10:
    // 0x1ede10: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1ede10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1ede14:
    // 0x1ede14: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x1ede14u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ede18:
    // 0x1ede18: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ede18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1ede1c:
    // 0x1ede1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ede1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1ede20:
    // 0x1ede20: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1ede20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ede24:
    // 0x1ede24: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ede24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1ede28:
    // 0x1ede28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ede28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ede2c:
    // 0x1ede2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ede2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ede30:
    // 0x1ede30: 0x8f838f3c  lw          $v1, -0x70C4($gp)
    ctx->pc = 0x1ede30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938428)));
label_1ede34:
    // 0x1ede34: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ede34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ede38:
    // 0x1ede38: 0xafa700b8  sw          $a3, 0xB8($sp)
    ctx->pc = 0x1ede38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 7));
label_1ede3c:
    // 0x1ede3c: 0xafa800bc  sw          $t0, 0xBC($sp)
    ctx->pc = 0x1ede3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 8));
label_1ede40:
    // 0x1ede40: 0x43b00a  movz        $s6, $v0, $v1
    ctx->pc = 0x1ede40u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 2));
label_1ede44:
    // 0x1ede44: 0x16082a  slt         $at, $zero, $s6
    ctx->pc = 0x1ede44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_1ede48:
    // 0x1ede48: 0x1020009a  beqz        $at, . + 4 + (0x9A << 2)
label_1ede4c:
    if (ctx->pc == 0x1EDE4Cu) {
        ctx->pc = 0x1EDE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDE48u;
        // 0x1ede4c: 0xafa500ac  sw          $a1, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDE50u;
        goto label_1ede50;
    }
    ctx->pc = 0x1EDE48u;
    {
        const bool branch_taken_0x1ede48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDE48u;
        // 0x1ede4c: 0xafa500ac  sw          $a1, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ede48) {
            ctx->pc = 0x1EE0B4u;
            { ctx->pc = 0x1ee0b4; return; }
        }
    }
    ctx->pc = 0x1EDE50u;
label_1ede50:
    // 0x1ede50: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ede50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ede54:
    // 0x1ede54: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ede54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ede58:
    // 0x1ede58: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x1ede58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1ede5c:
    // 0x1ede5c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1ede5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1ede60:
    // 0x1ede60: 0x519821  addu        $s3, $v0, $s1
    ctx->pc = 0x1ede60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1ede64:
    // 0x1ede64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ede64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1ede68u;
    return;
}
