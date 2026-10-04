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


void FUN_0019b6a8_part34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1ab878u: goto label_1ab878;
        case 0x1ab87cu: goto label_1ab87c;
        case 0x1ab880u: goto label_1ab880;
        case 0x1ab884u: goto label_1ab884;
        case 0x1ab888u: goto label_1ab888;
        case 0x1ab88cu: goto label_1ab88c;
        case 0x1ab890u: goto label_1ab890;
        case 0x1ab894u: goto label_1ab894;
        case 0x1ab898u: goto label_1ab898;
        case 0x1ab89cu: goto label_1ab89c;
        case 0x1ab8a0u: goto label_1ab8a0;
        case 0x1ab8a4u: goto label_1ab8a4;
        case 0x1ab8a8u: goto label_1ab8a8;
        case 0x1ab8acu: goto label_1ab8ac;
        case 0x1ab8b0u: goto label_1ab8b0;
        case 0x1ab8b4u: goto label_1ab8b4;
        case 0x1ab8b8u: goto label_1ab8b8;
        case 0x1ab8bcu: goto label_1ab8bc;
        case 0x1ab8c0u: goto label_1ab8c0;
        case 0x1ab8c4u: goto label_1ab8c4;
        case 0x1ab8c8u: goto label_1ab8c8;
        case 0x1ab8ccu: goto label_1ab8cc;
        case 0x1ab8d0u: goto label_1ab8d0;
        case 0x1ab8d4u: goto label_1ab8d4;
        case 0x1ab8d8u: goto label_1ab8d8;
        case 0x1ab8dcu: goto label_1ab8dc;
        case 0x1ab8e0u: goto label_1ab8e0;
        case 0x1ab8e4u: goto label_1ab8e4;
        case 0x1ab8e8u: goto label_1ab8e8;
        case 0x1ab8ecu: goto label_1ab8ec;
        case 0x1ab8f0u: goto label_1ab8f0;
        case 0x1ab8f4u: goto label_1ab8f4;
        case 0x1ab8f8u: goto label_1ab8f8;
        case 0x1ab8fcu: goto label_1ab8fc;
        case 0x1ab900u: goto label_1ab900;
        case 0x1ab904u: goto label_1ab904;
        case 0x1ab908u: goto label_1ab908;
        case 0x1ab90cu: goto label_1ab90c;
        case 0x1ab910u: goto label_1ab910;
        case 0x1ab914u: goto label_1ab914;
        case 0x1ab918u: goto label_1ab918;
        case 0x1ab91cu: goto label_1ab91c;
        case 0x1ab920u: goto label_1ab920;
        case 0x1ab924u: goto label_1ab924;
        case 0x1ab928u: goto label_1ab928;
        case 0x1ab92cu: goto label_1ab92c;
        case 0x1ab930u: goto label_1ab930;
        case 0x1ab934u: goto label_1ab934;
        case 0x1ab938u: goto label_1ab938;
        case 0x1ab93cu: goto label_1ab93c;
        case 0x1ab940u: goto label_1ab940;
        case 0x1ab944u: goto label_1ab944;
        case 0x1ab948u: goto label_1ab948;
        case 0x1ab94cu: goto label_1ab94c;
        case 0x1ab950u: goto label_1ab950;
        case 0x1ab954u: goto label_1ab954;
        case 0x1ab958u: goto label_1ab958;
        case 0x1ab95cu: goto label_1ab95c;
        case 0x1ab960u: goto label_1ab960;
        case 0x1ab964u: goto label_1ab964;
        case 0x1ab968u: goto label_1ab968;
        case 0x1ab96cu: goto label_1ab96c;
        case 0x1ab970u: goto label_1ab970;
        case 0x1ab974u: goto label_1ab974;
        case 0x1ab978u: goto label_1ab978;
        case 0x1ab97cu: goto label_1ab97c;
        case 0x1ab980u: goto label_1ab980;
        case 0x1ab984u: goto label_1ab984;
        case 0x1ab988u: goto label_1ab988;
        case 0x1ab98cu: goto label_1ab98c;
        case 0x1ab990u: goto label_1ab990;
        case 0x1ab994u: goto label_1ab994;
        case 0x1ab998u: goto label_1ab998;
        case 0x1ab99cu: goto label_1ab99c;
        case 0x1ab9a0u: goto label_1ab9a0;
        case 0x1ab9a4u: goto label_1ab9a4;
        case 0x1ab9a8u: goto label_1ab9a8;
        case 0x1ab9acu: goto label_1ab9ac;
        case 0x1ab9b0u: goto label_1ab9b0;
        case 0x1ab9b4u: goto label_1ab9b4;
        case 0x1ab9b8u: goto label_1ab9b8;
        case 0x1ab9bcu: goto label_1ab9bc;
        case 0x1ab9c0u: goto label_1ab9c0;
        case 0x1ab9c4u: goto label_1ab9c4;
        case 0x1ab9c8u: goto label_1ab9c8;
        case 0x1ab9ccu: goto label_1ab9cc;
        case 0x1ab9d0u: goto label_1ab9d0;
        case 0x1ab9d4u: goto label_1ab9d4;
        case 0x1ab9d8u: goto label_1ab9d8;
        case 0x1ab9dcu: goto label_1ab9dc;
        case 0x1ab9e0u: goto label_1ab9e0;
        case 0x1ab9e4u: goto label_1ab9e4;
        case 0x1ab9e8u: goto label_1ab9e8;
        case 0x1ab9ecu: goto label_1ab9ec;
        case 0x1ab9f0u: goto label_1ab9f0;
        case 0x1ab9f4u: goto label_1ab9f4;
        case 0x1ab9f8u: goto label_1ab9f8;
        case 0x1ab9fcu: goto label_1ab9fc;
        case 0x1aba00u: goto label_1aba00;
        case 0x1aba04u: goto label_1aba04;
        case 0x1aba08u: goto label_1aba08;
        case 0x1aba0cu: goto label_1aba0c;
        case 0x1aba10u: goto label_1aba10;
        case 0x1aba14u: goto label_1aba14;
        case 0x1aba18u: goto label_1aba18;
        case 0x1aba1cu: goto label_1aba1c;
        case 0x1aba20u: goto label_1aba20;
        case 0x1aba24u: goto label_1aba24;
        case 0x1aba28u: goto label_1aba28;
        case 0x1aba2cu: goto label_1aba2c;
        case 0x1aba30u: goto label_1aba30;
        case 0x1aba34u: goto label_1aba34;
        case 0x1aba38u: goto label_1aba38;
        case 0x1aba3cu: goto label_1aba3c;
        case 0x1aba40u: goto label_1aba40;
        case 0x1aba44u: goto label_1aba44;
        case 0x1aba48u: goto label_1aba48;
        case 0x1aba4cu: goto label_1aba4c;
        case 0x1aba50u: goto label_1aba50;
        case 0x1aba54u: goto label_1aba54;
        case 0x1aba58u: goto label_1aba58;
        case 0x1aba5cu: goto label_1aba5c;
        case 0x1aba60u: goto label_1aba60;
        case 0x1aba64u: goto label_1aba64;
        case 0x1aba68u: goto label_1aba68;
        case 0x1aba6cu: goto label_1aba6c;
        case 0x1aba70u: goto label_1aba70;
        case 0x1aba74u: goto label_1aba74;
        case 0x1aba78u: goto label_1aba78;
        case 0x1aba7cu: goto label_1aba7c;
        case 0x1aba80u: goto label_1aba80;
        case 0x1aba84u: goto label_1aba84;
        case 0x1aba88u: goto label_1aba88;
        case 0x1aba8cu: goto label_1aba8c;
        case 0x1aba90u: goto label_1aba90;
        case 0x1aba94u: goto label_1aba94;
        case 0x1aba98u: goto label_1aba98;
        case 0x1aba9cu: goto label_1aba9c;
        case 0x1abaa0u: goto label_1abaa0;
        case 0x1abaa4u: goto label_1abaa4;
        case 0x1abaa8u: goto label_1abaa8;
        case 0x1abaacu: goto label_1abaac;
        case 0x1abab0u: goto label_1abab0;
        case 0x1abab4u: goto label_1abab4;
        case 0x1abab8u: goto label_1abab8;
        case 0x1ababcu: goto label_1ababc;
        case 0x1abac0u: goto label_1abac0;
        case 0x1abac4u: goto label_1abac4;
        case 0x1abac8u: goto label_1abac8;
        case 0x1abaccu: goto label_1abacc;
        case 0x1abad0u: goto label_1abad0;
        case 0x1abad4u: goto label_1abad4;
        case 0x1abad8u: goto label_1abad8;
        case 0x1abadcu: goto label_1abadc;
        case 0x1abae0u: goto label_1abae0;
        case 0x1abae4u: goto label_1abae4;
        case 0x1abae8u: goto label_1abae8;
        case 0x1abaecu: goto label_1abaec;
        case 0x1abaf0u: goto label_1abaf0;
        case 0x1abaf4u: goto label_1abaf4;
        case 0x1abaf8u: goto label_1abaf8;
        case 0x1abafcu: goto label_1abafc;
        case 0x1abb00u: goto label_1abb00;
        case 0x1abb04u: goto label_1abb04;
        case 0x1abb08u: goto label_1abb08;
        case 0x1abb0cu: goto label_1abb0c;
        case 0x1abb10u: goto label_1abb10;
        case 0x1abb14u: goto label_1abb14;
        case 0x1abb18u: goto label_1abb18;
        case 0x1abb1cu: goto label_1abb1c;
        case 0x1abb20u: goto label_1abb20;
        case 0x1abb24u: goto label_1abb24;
        case 0x1abb28u: goto label_1abb28;
        case 0x1abb2cu: goto label_1abb2c;
        case 0x1abb30u: goto label_1abb30;
        case 0x1abb34u: goto label_1abb34;
        case 0x1abb38u: goto label_1abb38;
        case 0x1abb3cu: goto label_1abb3c;
        case 0x1abb40u: goto label_1abb40;
        case 0x1abb44u: goto label_1abb44;
        case 0x1abb48u: goto label_1abb48;
        case 0x1abb4cu: goto label_1abb4c;
        case 0x1abb50u: goto label_1abb50;
        case 0x1abb54u: goto label_1abb54;
        case 0x1abb58u: goto label_1abb58;
        case 0x1abb5cu: goto label_1abb5c;
        case 0x1abb60u: goto label_1abb60;
        case 0x1abb64u: goto label_1abb64;
        case 0x1abb68u: goto label_1abb68;
        case 0x1abb6cu: goto label_1abb6c;
        case 0x1abb70u: goto label_1abb70;
        case 0x1abb74u: goto label_1abb74;
        case 0x1abb78u: goto label_1abb78;
        case 0x1abb7cu: goto label_1abb7c;
        case 0x1abb80u: goto label_1abb80;
        case 0x1abb84u: goto label_1abb84;
        case 0x1abb88u: goto label_1abb88;
        case 0x1abb8cu: goto label_1abb8c;
        case 0x1abb90u: goto label_1abb90;
        case 0x1abb94u: goto label_1abb94;
        case 0x1abb98u: goto label_1abb98;
        case 0x1abb9cu: goto label_1abb9c;
        case 0x1abba0u: goto label_1abba0;
        case 0x1abba4u: goto label_1abba4;
        case 0x1abba8u: goto label_1abba8;
        case 0x1abbacu: goto label_1abbac;
        case 0x1abbb0u: goto label_1abbb0;
        case 0x1abbb4u: goto label_1abbb4;
        case 0x1abbb8u: goto label_1abbb8;
        case 0x1abbbcu: goto label_1abbbc;
        case 0x1abbc0u: goto label_1abbc0;
        case 0x1abbc4u: goto label_1abbc4;
        case 0x1abbc8u: goto label_1abbc8;
        case 0x1abbccu: goto label_1abbcc;
        case 0x1abbd0u: goto label_1abbd0;
        case 0x1abbd4u: goto label_1abbd4;
        case 0x1abbd8u: goto label_1abbd8;
        case 0x1abbdcu: goto label_1abbdc;
        case 0x1abbe0u: goto label_1abbe0;
        case 0x1abbe4u: goto label_1abbe4;
        case 0x1abbe8u: goto label_1abbe8;
        case 0x1abbecu: goto label_1abbec;
        case 0x1abbf0u: goto label_1abbf0;
        case 0x1abbf4u: goto label_1abbf4;
        case 0x1abbf8u: goto label_1abbf8;
        case 0x1abbfcu: goto label_1abbfc;
        case 0x1abc00u: goto label_1abc00;
        case 0x1abc04u: goto label_1abc04;
        case 0x1abc08u: goto label_1abc08;
        case 0x1abc0cu: goto label_1abc0c;
        case 0x1abc10u: goto label_1abc10;
        case 0x1abc14u: goto label_1abc14;
        case 0x1abc18u: goto label_1abc18;
        case 0x1abc1cu: goto label_1abc1c;
        case 0x1abc20u: goto label_1abc20;
        case 0x1abc24u: goto label_1abc24;
        case 0x1abc28u: goto label_1abc28;
        case 0x1abc2cu: goto label_1abc2c;
        case 0x1abc30u: goto label_1abc30;
        case 0x1abc34u: goto label_1abc34;
        case 0x1abc38u: goto label_1abc38;
        case 0x1abc3cu: goto label_1abc3c;
        case 0x1abc40u: goto label_1abc40;
        case 0x1abc44u: goto label_1abc44;
        case 0x1abc48u: goto label_1abc48;
        case 0x1abc4cu: goto label_1abc4c;
        case 0x1abc50u: goto label_1abc50;
        case 0x1abc54u: goto label_1abc54;
        case 0x1abc58u: goto label_1abc58;
        case 0x1abc5cu: goto label_1abc5c;
        case 0x1abc60u: goto label_1abc60;
        case 0x1abc64u: goto label_1abc64;
        case 0x1abc68u: goto label_1abc68;
        case 0x1abc6cu: goto label_1abc6c;
        case 0x1abc70u: goto label_1abc70;
        case 0x1abc74u: goto label_1abc74;
        case 0x1abc78u: goto label_1abc78;
        case 0x1abc7cu: goto label_1abc7c;
        case 0x1abc80u: goto label_1abc80;
        case 0x1abc84u: goto label_1abc84;
        case 0x1abc88u: goto label_1abc88;
        case 0x1abc8cu: goto label_1abc8c;
        case 0x1abc90u: goto label_1abc90;
        case 0x1abc94u: goto label_1abc94;
        case 0x1abc98u: goto label_1abc98;
        case 0x1abc9cu: goto label_1abc9c;
        case 0x1abca0u: goto label_1abca0;
        case 0x1abca4u: goto label_1abca4;
        case 0x1abca8u: goto label_1abca8;
        case 0x1abcacu: goto label_1abcac;
        case 0x1abcb0u: goto label_1abcb0;
        case 0x1abcb4u: goto label_1abcb4;
        case 0x1abcb8u: goto label_1abcb8;
        case 0x1abcbcu: goto label_1abcbc;
        case 0x1abcc0u: goto label_1abcc0;
        case 0x1abcc4u: goto label_1abcc4;
        case 0x1abcc8u: goto label_1abcc8;
        case 0x1abcccu: goto label_1abccc;
        case 0x1abcd0u: goto label_1abcd0;
        case 0x1abcd4u: goto label_1abcd4;
        case 0x1abcd8u: goto label_1abcd8;
        case 0x1abcdcu: goto label_1abcdc;
        case 0x1abce0u: goto label_1abce0;
        case 0x1abce4u: goto label_1abce4;
        case 0x1abce8u: goto label_1abce8;
        case 0x1abcecu: goto label_1abcec;
        case 0x1abcf0u: goto label_1abcf0;
        case 0x1abcf4u: goto label_1abcf4;
        case 0x1abcf8u: goto label_1abcf8;
        case 0x1abcfcu: goto label_1abcfc;
        case 0x1abd00u: goto label_1abd00;
        case 0x1abd04u: goto label_1abd04;
        case 0x1abd08u: goto label_1abd08;
        case 0x1abd0cu: goto label_1abd0c;
        case 0x1abd10u: goto label_1abd10;
        case 0x1abd14u: goto label_1abd14;
        case 0x1abd18u: goto label_1abd18;
        case 0x1abd1cu: goto label_1abd1c;
        case 0x1abd20u: goto label_1abd20;
        case 0x1abd24u: goto label_1abd24;
        case 0x1abd28u: goto label_1abd28;
        case 0x1abd2cu: goto label_1abd2c;
        case 0x1abd30u: goto label_1abd30;
        case 0x1abd34u: goto label_1abd34;
        case 0x1abd38u: goto label_1abd38;
        case 0x1abd3cu: goto label_1abd3c;
        case 0x1abd40u: goto label_1abd40;
        case 0x1abd44u: goto label_1abd44;
        case 0x1abd48u: goto label_1abd48;
        case 0x1abd4cu: goto label_1abd4c;
        case 0x1abd50u: goto label_1abd50;
        case 0x1abd54u: goto label_1abd54;
        case 0x1abd58u: goto label_1abd58;
        case 0x1abd5cu: goto label_1abd5c;
        case 0x1abd60u: goto label_1abd60;
        case 0x1abd64u: goto label_1abd64;
        case 0x1abd68u: goto label_1abd68;
        case 0x1abd6cu: goto label_1abd6c;
        case 0x1abd70u: goto label_1abd70;
        case 0x1abd74u: goto label_1abd74;
        case 0x1abd78u: goto label_1abd78;
        case 0x1abd7cu: goto label_1abd7c;
        case 0x1abd80u: goto label_1abd80;
        case 0x1abd84u: goto label_1abd84;
        case 0x1abd88u: goto label_1abd88;
        case 0x1abd8cu: goto label_1abd8c;
        case 0x1abd90u: goto label_1abd90;
        case 0x1abd94u: goto label_1abd94;
        case 0x1abd98u: goto label_1abd98;
        case 0x1abd9cu: goto label_1abd9c;
        case 0x1abda0u: goto label_1abda0;
        case 0x1abda4u: goto label_1abda4;
        case 0x1abda8u: goto label_1abda8;
        case 0x1abdacu: goto label_1abdac;
        case 0x1abdb0u: goto label_1abdb0;
        case 0x1abdb4u: goto label_1abdb4;
        case 0x1abdb8u: goto label_1abdb8;
        case 0x1abdbcu: goto label_1abdbc;
        case 0x1abdc0u: goto label_1abdc0;
        case 0x1abdc4u: goto label_1abdc4;
        case 0x1abdc8u: goto label_1abdc8;
        case 0x1abdccu: goto label_1abdcc;
        case 0x1abdd0u: goto label_1abdd0;
        case 0x1abdd4u: goto label_1abdd4;
        case 0x1abdd8u: goto label_1abdd8;
        case 0x1abddcu: goto label_1abddc;
        case 0x1abde0u: goto label_1abde0;
        case 0x1abde4u: goto label_1abde4;
        case 0x1abde8u: goto label_1abde8;
        case 0x1abdecu: goto label_1abdec;
        case 0x1abdf0u: goto label_1abdf0;
        case 0x1abdf4u: goto label_1abdf4;
        case 0x1abdf8u: goto label_1abdf8;
        case 0x1abdfcu: goto label_1abdfc;
        case 0x1abe00u: goto label_1abe00;
        case 0x1abe04u: goto label_1abe04;
        case 0x1abe08u: goto label_1abe08;
        case 0x1abe0cu: goto label_1abe0c;
        case 0x1abe10u: goto label_1abe10;
        case 0x1abe14u: goto label_1abe14;
        case 0x1abe18u: goto label_1abe18;
        case 0x1abe1cu: goto label_1abe1c;
        case 0x1abe20u: goto label_1abe20;
        case 0x1abe24u: goto label_1abe24;
        case 0x1abe28u: goto label_1abe28;
        case 0x1abe2cu: goto label_1abe2c;
        case 0x1abe30u: goto label_1abe30;
        case 0x1abe34u: goto label_1abe34;
        case 0x1abe38u: goto label_1abe38;
        case 0x1abe3cu: goto label_1abe3c;
        case 0x1abe40u: goto label_1abe40;
        case 0x1abe44u: goto label_1abe44;
        case 0x1abe48u: goto label_1abe48;
        case 0x1abe4cu: goto label_1abe4c;
        case 0x1abe50u: goto label_1abe50;
        case 0x1abe54u: goto label_1abe54;
        case 0x1abe58u: goto label_1abe58;
        case 0x1abe5cu: goto label_1abe5c;
        case 0x1abe60u: goto label_1abe60;
        case 0x1abe64u: goto label_1abe64;
        case 0x1abe68u: goto label_1abe68;
        case 0x1abe6cu: goto label_1abe6c;
        case 0x1abe70u: goto label_1abe70;
        case 0x1abe74u: goto label_1abe74;
        case 0x1abe78u: goto label_1abe78;
        case 0x1abe7cu: goto label_1abe7c;
        case 0x1abe80u: goto label_1abe80;
        case 0x1abe84u: goto label_1abe84;
        case 0x1abe88u: goto label_1abe88;
        case 0x1abe8cu: goto label_1abe8c;
        case 0x1abe90u: goto label_1abe90;
        case 0x1abe94u: goto label_1abe94;
        case 0x1abe98u: goto label_1abe98;
        case 0x1abe9cu: goto label_1abe9c;
        case 0x1abea0u: goto label_1abea0;
        case 0x1abea4u: goto label_1abea4;
        case 0x1abea8u: goto label_1abea8;
        case 0x1abeacu: goto label_1abeac;
        case 0x1abeb0u: goto label_1abeb0;
        case 0x1abeb4u: goto label_1abeb4;
        case 0x1abeb8u: goto label_1abeb8;
        case 0x1abebcu: goto label_1abebc;
        case 0x1abec0u: goto label_1abec0;
        case 0x1abec4u: goto label_1abec4;
        case 0x1abec8u: goto label_1abec8;
        case 0x1abeccu: goto label_1abecc;
        case 0x1abed0u: goto label_1abed0;
        case 0x1abed4u: goto label_1abed4;
        case 0x1abed8u: goto label_1abed8;
        case 0x1abedcu: goto label_1abedc;
        case 0x1abee0u: goto label_1abee0;
        case 0x1abee4u: goto label_1abee4;
        case 0x1abee8u: goto label_1abee8;
        case 0x1abeecu: goto label_1abeec;
        case 0x1abef0u: goto label_1abef0;
        case 0x1abef4u: goto label_1abef4;
        case 0x1abef8u: goto label_1abef8;
        case 0x1abefcu: goto label_1abefc;
        case 0x1abf00u: goto label_1abf00;
        case 0x1abf04u: goto label_1abf04;
        case 0x1abf08u: goto label_1abf08;
        case 0x1abf0cu: goto label_1abf0c;
        case 0x1abf10u: goto label_1abf10;
        case 0x1abf14u: goto label_1abf14;
        case 0x1abf18u: goto label_1abf18;
        case 0x1abf1cu: goto label_1abf1c;
        case 0x1abf20u: goto label_1abf20;
        case 0x1abf24u: goto label_1abf24;
        case 0x1abf28u: goto label_1abf28;
        case 0x1abf2cu: goto label_1abf2c;
        case 0x1abf30u: goto label_1abf30;
        case 0x1abf34u: goto label_1abf34;
        case 0x1abf38u: goto label_1abf38;
        case 0x1abf3cu: goto label_1abf3c;
        case 0x1abf40u: goto label_1abf40;
        case 0x1abf44u: goto label_1abf44;
        case 0x1abf48u: goto label_1abf48;
        case 0x1abf4cu: goto label_1abf4c;
        case 0x1abf50u: goto label_1abf50;
        case 0x1abf54u: goto label_1abf54;
        case 0x1abf58u: goto label_1abf58;
        case 0x1abf5cu: goto label_1abf5c;
        case 0x1abf60u: goto label_1abf60;
        case 0x1abf64u: goto label_1abf64;
        case 0x1abf68u: goto label_1abf68;
        case 0x1abf6cu: goto label_1abf6c;
        case 0x1abf70u: goto label_1abf70;
        case 0x1abf74u: goto label_1abf74;
        case 0x1abf78u: goto label_1abf78;
        case 0x1abf7cu: goto label_1abf7c;
        case 0x1abf80u: goto label_1abf80;
        case 0x1abf84u: goto label_1abf84;
        case 0x1abf88u: goto label_1abf88;
        case 0x1abf8cu: goto label_1abf8c;
        case 0x1abf90u: goto label_1abf90;
        case 0x1abf94u: goto label_1abf94;
        case 0x1abf98u: goto label_1abf98;
        case 0x1abf9cu: goto label_1abf9c;
        case 0x1abfa0u: goto label_1abfa0;
        case 0x1abfa4u: goto label_1abfa4;
        case 0x1abfa8u: goto label_1abfa8;
        case 0x1abfacu: goto label_1abfac;
        case 0x1abfb0u: goto label_1abfb0;
        case 0x1abfb4u: goto label_1abfb4;
        case 0x1abfb8u: goto label_1abfb8;
        case 0x1abfbcu: goto label_1abfbc;
        case 0x1abfc0u: goto label_1abfc0;
        case 0x1abfc4u: goto label_1abfc4;
        case 0x1abfc8u: goto label_1abfc8;
        case 0x1abfccu: goto label_1abfcc;
        case 0x1abfd0u: goto label_1abfd0;
        case 0x1abfd4u: goto label_1abfd4;
        case 0x1abfd8u: goto label_1abfd8;
        case 0x1abfdcu: goto label_1abfdc;
        case 0x1abfe0u: goto label_1abfe0;
        case 0x1abfe4u: goto label_1abfe4;
        case 0x1abfe8u: goto label_1abfe8;
        case 0x1abfecu: goto label_1abfec;
        case 0x1abff0u: goto label_1abff0;
        case 0x1abff4u: goto label_1abff4;
        case 0x1abff8u: goto label_1abff8;
        case 0x1abffcu: goto label_1abffc;
        case 0x1ac000u: goto label_1ac000;
        case 0x1ac004u: goto label_1ac004;
        case 0x1ac008u: goto label_1ac008;
        case 0x1ac00cu: goto label_1ac00c;
        case 0x1ac010u: goto label_1ac010;
        case 0x1ac014u: goto label_1ac014;
        case 0x1ac018u: goto label_1ac018;
        case 0x1ac01cu: goto label_1ac01c;
        case 0x1ac020u: goto label_1ac020;
        case 0x1ac024u: goto label_1ac024;
        case 0x1ac028u: goto label_1ac028;
        case 0x1ac02cu: goto label_1ac02c;
        case 0x1ac030u: goto label_1ac030;
        case 0x1ac034u: goto label_1ac034;
        case 0x1ac038u: goto label_1ac038;
        case 0x1ac03cu: goto label_1ac03c;
        case 0x1ac040u: goto label_1ac040;
        case 0x1ac044u: goto label_1ac044;
        default: return;
    }

label_1ab878:
    if (ctx->pc == 0x1AB878u) {
        ctx->pc = 0x1AB878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB874u;
        // 0x1ab878: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB87Cu;
        goto label_1ab87c;
    }
    ctx->pc = 0x1AB874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB874u;
        // 0x1ab878: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB87Cu;
label_1ab87c:
    // 0x1ab87c: 0x0  nop
    ctx->pc = 0x1ab87cu;
    // NOP
label_1ab880:
    // 0x1ab880: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1ab880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1ab884:
    // 0x1ab884: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ab884u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ab888:
    // 0x1ab888: 0x8c435c10  lw          $v1, 0x5C10($v0)
    ctx->pc = 0x1ab888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23568)));
label_1ab88c:
    // 0x1ab88c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1ab88cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ab890:
    // 0x1ab890: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ab890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1ab894:
    // 0x1ab894: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1ab898:
    if (ctx->pc == 0x1AB898u) {
        ctx->pc = 0x1AB898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB894u;
        // 0x1ab898: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB89Cu;
        goto label_1ab89c;
    }
    ctx->pc = 0x1AB894u;
    {
        const bool branch_taken_0x1ab894 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1AB898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB894u;
        // 0x1ab898: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab894) {
            ctx->pc = 0x1AB8A4u;
            goto label_1ab8a4;
        }
    }
    ctx->pc = 0x1AB89Cu;
label_1ab89c:
    // 0x1ab89c: 0x10000030  b           . + 4 + (0x30 << 2)
label_1ab8a0:
    if (ctx->pc == 0x1AB8A0u) {
        ctx->pc = 0x1AB8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB89Cu;
        // 0x1ab8a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB8A4u;
        goto label_1ab8a4;
    }
    ctx->pc = 0x1AB89Cu;
    {
        const bool branch_taken_0x1ab89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB89Cu;
        // 0x1ab8a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab89c) {
            ctx->pc = 0x1AB960u;
            goto label_1ab960;
        }
    }
    ctx->pc = 0x1AB8A4u;
label_1ab8a4:
    // 0x1ab8a4: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1ab8a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1ab8a8:
    // 0x1ab8a8: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x1ab8a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_1ab8ac:
    // 0x1ab8ac: 0x24e34680  addiu       $v1, $a3, 0x4680
    ctx->pc = 0x1ab8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 18048));
label_1ab8b0:
    // 0x1ab8b0: 0xa0620004  sb          $v0, 0x4($v1)
    ctx->pc = 0x1ab8b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 2));
label_1ab8b4:
    // 0x1ab8b4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1ab8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_1ab8b8:
    // 0x1ab8b8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1ab8bc:
    if (ctx->pc == 0x1AB8BCu) {
        ctx->pc = 0x1AB8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB8B8u;
        // 0x1ab8bc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB8C0u;
        goto label_1ab8c0;
    }
    ctx->pc = 0x1AB8B8u;
    {
        const bool branch_taken_0x1ab8b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB8B8u;
        // 0x1ab8bc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab8b8) {
            ctx->pc = 0x1AB900u;
            goto label_1ab900;
        }
    }
    ctx->pc = 0x1AB8C0u;
label_1ab8c0:
    // 0x1ab8c0: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1ab8c0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
label_1ab8c4:
    // 0x1ab8c4: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1ab8c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
label_1ab8c8:
    // 0x1ab8c8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1ab8c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ab8cc:
    // 0x1ab8cc: 0x0  nop
    ctx->pc = 0x1ab8ccu;
    // NOP
label_1ab8d0:
    // 0x1ab8d0: 0x290200fc  slti        $v0, $t0, 0xFC
    ctx->pc = 0x1ab8d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)252) ? 1 : 0);
label_1ab8d4:
    // 0x1ab8d4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1ab8d8:
    if (ctx->pc == 0x1AB8D8u) {
        ctx->pc = 0x1AB8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB8D4u;
        // 0x1ab8d8: 0xc81021  addu        $v0, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB8DCu;
        goto label_1ab8dc;
    }
    ctx->pc = 0x1AB8D4u;
    {
        const bool branch_taken_0x1ab8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB8D4u;
        // 0x1ab8d8: 0xc81021  addu        $v0, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab8d4) {
            ctx->pc = 0x1AB908u;
            goto label_1ab908;
        }
    }
    ctx->pc = 0x1AB8DCu;
label_1ab8dc:
    // 0x1ab8dc: 0x24e34680  addiu       $v1, $a3, 0x4680
    ctx->pc = 0x1ab8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 18048));
label_1ab8e0:
    // 0x1ab8e0: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x1ab8e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1ab8e4:
    // 0x1ab8e4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1ab8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1ab8e8:
    // 0x1ab8e8: 0xa0640004  sb          $a0, 0x4($v1)
    ctx->pc = 0x1ab8e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 4));
label_1ab8ec:
    // 0x1ab8ec: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1ab8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_1ab8f0:
    // 0x1ab8f0: 0x5480fff7  bnel        $a0, $zero, . + 4 + (-0x9 << 2)
label_1ab8f4:
    if (ctx->pc == 0x1AB8F4u) {
        ctx->pc = 0x1AB8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB8F0u;
        // 0x1ab8f4: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB8F8u;
        goto label_1ab8f8;
    }
    ctx->pc = 0x1AB8F0u;
    {
        const bool branch_taken_0x1ab8f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab8f0) {
            ctx->pc = 0x1AB8F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB8F0u;
            // 0x1ab8f4: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB8D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ab8d0;
        }
    }
    ctx->pc = 0x1AB8F8u;
label_1ab8f8:
    // 0x1ab8f8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1ab8fc:
    if (ctx->pc == 0x1AB8FCu) {
        ctx->pc = 0x1AB8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB8F8u;
        // 0x1ab8fc: 0x240200fc  addiu       $v0, $zero, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB900u;
        goto label_1ab900;
    }
    ctx->pc = 0x1AB8F8u;
    {
        const bool branch_taken_0x1ab8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB8F8u;
        // 0x1ab8fc: 0x240200fc  addiu       $v0, $zero, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab8f8) {
            ctx->pc = 0x1AB90Cu;
            goto label_1ab90c;
        }
    }
    ctx->pc = 0x1AB900u;
label_1ab900:
    // 0x1ab900: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1ab900u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
label_1ab904:
    // 0x1ab904: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1ab904u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
label_1ab908:
    // 0x1ab908: 0x240200fc  addiu       $v0, $zero, 0xFC
    ctx->pc = 0x1ab908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
label_1ab90c:
    // 0x1ab90c: 0x55020005  bnel        $t0, $v0, . + 4 + (0x5 << 2)
label_1ab910:
    if (ctx->pc == 0x1AB910u) {
        ctx->pc = 0x1AB910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB90Cu;
        // 0x1ab910: 0xace54680  sw          $a1, 0x4680($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 18048), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB914u;
        goto label_1ab914;
    }
    ctx->pc = 0x1AB90Cu;
    {
        const bool branch_taken_0x1ab90c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ab90c) {
            ctx->pc = 0x1AB910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB90Cu;
            // 0x1ab910: 0xace54680  sw          $a1, 0x4680($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 18048), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB924u;
            goto label_1ab924;
        }
    }
    ctx->pc = 0x1AB914u;
label_1ab914:
    // 0x1ab914: 0x24e24680  addiu       $v0, $a3, 0x4680
    ctx->pc = 0x1ab914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 18048));
label_1ab918:
    // 0x1ab918: 0x240800fb  addiu       $t0, $zero, 0xFB
    ctx->pc = 0x1ab918u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 251));
label_1ab91c:
    // 0x1ab91c: 0xa04000ff  sb          $zero, 0xFF($v0)
    ctx->pc = 0x1ab91cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 255), (uint8_t)GPR_U32(ctx, 0));
label_1ab920:
    // 0x1ab920: 0xace54680  sw          $a1, 0x4680($a3)
    ctx->pc = 0x1ab920u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 18048), GPR_U32(ctx, 5));
label_1ab924:
    // 0x1ab924: 0x24e24680  addiu       $v0, $a3, 0x4680
    ctx->pc = 0x1ab924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 18048));
label_1ab928:
    // 0x1ab928: 0x252445c0  addiu       $a0, $t1, 0x45C0
    ctx->pc = 0x1ab928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 17856));
label_1ab92c:
    // 0x1ab92c: 0xa04000ff  sb          $zero, 0xFF($v0)
    ctx->pc = 0x1ab92cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 255), (uint8_t)GPR_U32(ctx, 0));
label_1ab930:
    // 0x1ab930: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1ab930u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ab934:
    // 0x1ab934: 0x25080005  addiu       $t0, $t0, 0x5
    ctx->pc = 0x1ab934u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 5));
label_1ab938:
    // 0x1ab938: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ab938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1ab93c:
    // 0x1ab93c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ab93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ab940:
    // 0x1ab940: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ab940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab944:
    // 0x1ab944: 0x26094600  addiu       $t1, $s0, 0x4600
    ctx->pc = 0x1ab944u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 17920));
label_1ab948:
    // 0x1ab948: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1ab948u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ab94c:
    // 0x1ab94c: 0xc069e2a  jal         func_1A78A8
label_1ab950:
    if (ctx->pc == 0x1AB950u) {
        ctx->pc = 0x1AB950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB94Cu;
        // 0x1ab950: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB954u;
        goto label_1ab954;
    }
    ctx->pc = 0x1AB94Cu;
    SET_GPR_U32(ctx, 31, 0x1AB954u);
    ctx->pc = 0x1AB950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB94Cu;
    // 0x1ab950: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1AB954u;
label_1ab954:
    // 0x1ab954: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_1ab958:
    if (ctx->pc == 0x1AB958u) {
        ctx->pc = 0x1AB958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB954u;
        // 0x1ab958: 0x8e024600  lw          $v0, 0x4600($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17920)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB95Cu;
        goto label_1ab95c;
    }
    ctx->pc = 0x1AB954u;
    {
        const bool branch_taken_0x1ab954 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AB958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB954u;
        // 0x1ab958: 0x8e024600  lw          $v0, 0x4600($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17920)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab954) {
            ctx->pc = 0x1AB960u;
            goto label_1ab960;
        }
    }
    ctx->pc = 0x1AB95Cu;
label_1ab95c:
    // 0x1ab95c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ab95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ab960:
    // 0x1ab960: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ab960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ab964:
    // 0x1ab964: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ab964u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ab968:
    // 0x1ab968: 0x3e00008  jr          $ra
label_1ab96c:
    if (ctx->pc == 0x1AB96Cu) {
        ctx->pc = 0x1AB96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB968u;
        // 0x1ab96c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB970u;
        goto label_1ab970;
    }
    ctx->pc = 0x1AB968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB968u;
        // 0x1ab96c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB970u;
label_1ab970:
    // 0x1ab970: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1ab970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1ab974:
    // 0x1ab974: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ab974u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ab978:
    // 0x1ab978: 0x8c435c10  lw          $v1, 0x5C10($v0)
    ctx->pc = 0x1ab978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23568)));
label_1ab97c:
    // 0x1ab97c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ab97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1ab980:
    // 0x1ab980: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1ab984:
    if (ctx->pc == 0x1AB984u) {
        ctx->pc = 0x1AB984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB980u;
        // 0x1ab984: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB988u;
        goto label_1ab988;
    }
    ctx->pc = 0x1AB980u;
    {
        const bool branch_taken_0x1ab980 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1AB984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB980u;
        // 0x1ab984: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab980) {
            ctx->pc = 0x1AB990u;
            goto label_1ab990;
        }
    }
    ctx->pc = 0x1AB988u;
label_1ab988:
    // 0x1ab988: 0x10000011  b           . + 4 + (0x11 << 2)
label_1ab98c:
    if (ctx->pc == 0x1AB98Cu) {
        ctx->pc = 0x1AB98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB988u;
        // 0x1ab98c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB990u;
        goto label_1ab990;
    }
    ctx->pc = 0x1AB988u;
    {
        const bool branch_taken_0x1ab988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB988u;
        // 0x1ab98c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab988) {
            ctx->pc = 0x1AB9D0u;
            goto label_1ab9d0;
        }
    }
    ctx->pc = 0x1AB990u;
label_1ab990:
    // 0x1ab990: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ab990u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1ab994:
    // 0x1ab994: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1ab994u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
label_1ab998:
    // 0x1ab998: 0x248445c0  addiu       $a0, $a0, 0x45C0
    ctx->pc = 0x1ab998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17856));
label_1ab99c:
    // 0x1ab99c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ab99cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1ab9a0:
    // 0x1ab9a0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ab9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1ab9a4:
    // 0x1ab9a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ab9a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab9a8:
    // 0x1ab9a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ab9a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab9ac:
    // 0x1ab9ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ab9acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab9b0:
    // 0x1ab9b0: 0x26094600  addiu       $t1, $s0, 0x4600
    ctx->pc = 0x1ab9b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 17920));
label_1ab9b4:
    // 0x1ab9b4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1ab9b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ab9b8:
    // 0x1ab9b8: 0xc069e2a  jal         func_1A78A8
label_1ab9bc:
    if (ctx->pc == 0x1AB9BCu) {
        ctx->pc = 0x1AB9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB9B8u;
        // 0x1ab9bc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB9C0u;
        goto label_1ab9c0;
    }
    ctx->pc = 0x1AB9B8u;
    SET_GPR_U32(ctx, 31, 0x1AB9C0u);
    ctx->pc = 0x1AB9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB9B8u;
    // 0x1ab9bc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1AB9C0u;
label_1ab9c0:
    // 0x1ab9c0: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_1ab9c4:
    if (ctx->pc == 0x1AB9C4u) {
        ctx->pc = 0x1AB9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB9C0u;
        // 0x1ab9c4: 0x8e024600  lw          $v0, 0x4600($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17920)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB9C8u;
        goto label_1ab9c8;
    }
    ctx->pc = 0x1AB9C0u;
    {
        const bool branch_taken_0x1ab9c0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ab9c0) {
            ctx->pc = 0x1AB9C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB9C0u;
            // 0x1ab9c4: 0x8e024600  lw          $v0, 0x4600($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17920)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB9D0u;
            goto label_1ab9d0;
        }
    }
    ctx->pc = 0x1AB9C8u;
label_1ab9c8:
    // 0x1ab9c8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1ab9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1ab9cc:
    // 0x1ab9cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ab9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1ab9d0:
    // 0x1ab9d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ab9d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ab9d4:
    // 0x1ab9d4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ab9d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ab9d8:
    // 0x1ab9d8: 0x3e00008  jr          $ra
label_1ab9dc:
    if (ctx->pc == 0x1AB9DCu) {
        ctx->pc = 0x1AB9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB9D8u;
        // 0x1ab9dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB9E0u;
        goto label_1ab9e0;
    }
    ctx->pc = 0x1AB9D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB9D8u;
        // 0x1ab9dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB9D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB9E0u;
label_1ab9e0:
    // 0x1ab9e0: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1ab9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1ab9e4:
    // 0x1ab9e4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ab9e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ab9e8:
    // 0x1ab9e8: 0x8c435c10  lw          $v1, 0x5C10($v0)
    ctx->pc = 0x1ab9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23568)));
label_1ab9ec:
    // 0x1ab9ec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ab9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1ab9f0:
    // 0x1ab9f0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1ab9f4:
    if (ctx->pc == 0x1AB9F4u) {
        ctx->pc = 0x1AB9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB9F0u;
        // 0x1ab9f4: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB9F8u;
        goto label_1ab9f8;
    }
    ctx->pc = 0x1AB9F0u;
    {
        const bool branch_taken_0x1ab9f0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1AB9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB9F0u;
        // 0x1ab9f4: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab9f0) {
            ctx->pc = 0x1ABA00u;
            goto label_1aba00;
        }
    }
    ctx->pc = 0x1AB9F8u;
label_1ab9f8:
    // 0x1ab9f8: 0x10000011  b           . + 4 + (0x11 << 2)
label_1ab9fc:
    if (ctx->pc == 0x1AB9FCu) {
        ctx->pc = 0x1AB9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB9F8u;
        // 0x1ab9fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABA00u;
        goto label_1aba00;
    }
    ctx->pc = 0x1AB9F8u;
    {
        const bool branch_taken_0x1ab9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB9F8u;
        // 0x1ab9fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab9f8) {
            ctx->pc = 0x1ABA40u;
            goto label_1aba40;
        }
    }
    ctx->pc = 0x1ABA00u;
label_1aba00:
    // 0x1aba00: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1aba00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1aba04:
    // 0x1aba04: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1aba04u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
label_1aba08:
    // 0x1aba08: 0x248445c0  addiu       $a0, $a0, 0x45C0
    ctx->pc = 0x1aba08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17856));
label_1aba0c:
    // 0x1aba0c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1aba0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1aba10:
    // 0x1aba10: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1aba10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1aba14:
    // 0x1aba14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aba14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aba18:
    // 0x1aba18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1aba18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aba1c:
    // 0x1aba1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1aba1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aba20:
    // 0x1aba20: 0x26094600  addiu       $t1, $s0, 0x4600
    ctx->pc = 0x1aba20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 17920));
label_1aba24:
    // 0x1aba24: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1aba24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1aba28:
    // 0x1aba28: 0xc069e2a  jal         func_1A78A8
label_1aba2c:
    if (ctx->pc == 0x1ABA2Cu) {
        ctx->pc = 0x1ABA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABA28u;
        // 0x1aba2c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABA30u;
        goto label_1aba30;
    }
    ctx->pc = 0x1ABA28u;
    SET_GPR_U32(ctx, 31, 0x1ABA30u);
    ctx->pc = 0x1ABA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABA28u;
    // 0x1aba2c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1ABA30u;
label_1aba30:
    // 0x1aba30: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_1aba34:
    if (ctx->pc == 0x1ABA34u) {
        ctx->pc = 0x1ABA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABA30u;
        // 0x1aba34: 0x8e024600  lw          $v0, 0x4600($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17920)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABA38u;
        goto label_1aba38;
    }
    ctx->pc = 0x1ABA30u;
    {
        const bool branch_taken_0x1aba30 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1aba30) {
            ctx->pc = 0x1ABA34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ABA30u;
            // 0x1aba34: 0x8e024600  lw          $v0, 0x4600($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17920)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ABA40u;
            goto label_1aba40;
        }
    }
    ctx->pc = 0x1ABA38u;
label_1aba38:
    // 0x1aba38: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1aba38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1aba3c:
    // 0x1aba3c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1aba3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1aba40:
    // 0x1aba40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1aba40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1aba44:
    // 0x1aba44: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1aba44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1aba48:
    // 0x1aba48: 0x3e00008  jr          $ra
label_1aba4c:
    if (ctx->pc == 0x1ABA4Cu) {
        ctx->pc = 0x1ABA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABA48u;
        // 0x1aba4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABA50u;
        goto label_1aba50;
    }
    ctx->pc = 0x1ABA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABA48u;
        // 0x1aba4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABA48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABA50u;
label_1aba50:
    // 0x1aba50: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1aba50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1aba54:
    // 0x1aba54: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aba54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1aba58:
    // 0x1aba58: 0x8c435c10  lw          $v1, 0x5C10($v0)
    ctx->pc = 0x1aba58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23568)));
label_1aba5c:
    // 0x1aba5c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1aba5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1aba60:
    // 0x1aba60: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1aba64:
    if (ctx->pc == 0x1ABA64u) {
        ctx->pc = 0x1ABA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABA60u;
        // 0x1aba64: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABA68u;
        goto label_1aba68;
    }
    ctx->pc = 0x1ABA60u;
    {
        const bool branch_taken_0x1aba60 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1ABA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABA60u;
        // 0x1aba64: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aba60) {
            ctx->pc = 0x1ABA70u;
            goto label_1aba70;
        }
    }
    ctx->pc = 0x1ABA68u;
label_1aba68:
    // 0x1aba68: 0x10000011  b           . + 4 + (0x11 << 2)
label_1aba6c:
    if (ctx->pc == 0x1ABA6Cu) {
        ctx->pc = 0x1ABA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABA68u;
        // 0x1aba6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABA70u;
        goto label_1aba70;
    }
    ctx->pc = 0x1ABA68u;
    {
        const bool branch_taken_0x1aba68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABA68u;
        // 0x1aba6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aba68) {
            ctx->pc = 0x1ABAB0u;
            goto label_1abab0;
        }
    }
    ctx->pc = 0x1ABA70u;
label_1aba70:
    // 0x1aba70: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1aba70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1aba74:
    // 0x1aba74: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1aba74u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
label_1aba78:
    // 0x1aba78: 0x248445c0  addiu       $a0, $a0, 0x45C0
    ctx->pc = 0x1aba78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17856));
label_1aba7c:
    // 0x1aba7c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1aba7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1aba80:
    // 0x1aba80: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1aba80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1aba84:
    // 0x1aba84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aba84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aba88:
    // 0x1aba88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1aba88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aba8c:
    // 0x1aba8c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1aba8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aba90:
    // 0x1aba90: 0x26094600  addiu       $t1, $s0, 0x4600
    ctx->pc = 0x1aba90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 17920));
label_1aba94:
    // 0x1aba94: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1aba94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1aba98:
    // 0x1aba98: 0xc069e2a  jal         func_1A78A8
label_1aba9c:
    if (ctx->pc == 0x1ABA9Cu) {
        ctx->pc = 0x1ABA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABA98u;
        // 0x1aba9c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABAA0u;
        goto label_1abaa0;
    }
    ctx->pc = 0x1ABA98u;
    SET_GPR_U32(ctx, 31, 0x1ABAA0u);
    ctx->pc = 0x1ABA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABA98u;
    // 0x1aba9c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1ABAA0u;
label_1abaa0:
    // 0x1abaa0: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_1abaa4:
    if (ctx->pc == 0x1ABAA4u) {
        ctx->pc = 0x1ABAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABAA0u;
        // 0x1abaa4: 0x8e024600  lw          $v0, 0x4600($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17920)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABAA8u;
        goto label_1abaa8;
    }
    ctx->pc = 0x1ABAA0u;
    {
        const bool branch_taken_0x1abaa0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1abaa0) {
            ctx->pc = 0x1ABAA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ABAA0u;
            // 0x1abaa4: 0x8e024600  lw          $v0, 0x4600($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17920)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ABAB0u;
            goto label_1abab0;
        }
    }
    ctx->pc = 0x1ABAA8u;
label_1abaa8:
    // 0x1abaa8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1abaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1abaac:
    // 0x1abaac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1abaacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1abab0:
    // 0x1abab0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1abab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1abab4:
    // 0x1abab4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1abab4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1abab8:
    // 0x1abab8: 0x3e00008  jr          $ra
label_1ababc:
    if (ctx->pc == 0x1ABABCu) {
        ctx->pc = 0x1ABABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABAB8u;
        // 0x1ababc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABAC0u;
        goto label_1abac0;
    }
    ctx->pc = 0x1ABAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABAB8u;
        // 0x1ababc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABAB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABAC0u;
label_1abac0:
    // 0x1abac0: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1abac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1abac4:
    // 0x1abac4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1abac4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1abac8:
    // 0x1abac8: 0x8c625c10  lw          $v0, 0x5C10($v1)
    ctx->pc = 0x1abac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 23568)));
label_1abacc:
    // 0x1abacc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1abaccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1abad0:
    // 0x1abad0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1abad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1abad4:
    // 0x1abad4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1abad8:
    if (ctx->pc == 0x1ABAD8u) {
        ctx->pc = 0x1ABAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABAD4u;
        // 0x1abad8: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABADCu;
        goto label_1abadc;
    }
    ctx->pc = 0x1ABAD4u;
    {
        const bool branch_taken_0x1abad4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1ABAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABAD4u;
        // 0x1abad8: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abad4) {
            ctx->pc = 0x1ABAE4u;
            goto label_1abae4;
        }
    }
    ctx->pc = 0x1ABADCu;
label_1abadc:
    // 0x1abadc: 0x10000013  b           . + 4 + (0x13 << 2)
label_1abae0:
    if (ctx->pc == 0x1ABAE0u) {
        ctx->pc = 0x1ABAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABADCu;
        // 0x1abae0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABAE4u;
        goto label_1abae4;
    }
    ctx->pc = 0x1ABADCu;
    {
        const bool branch_taken_0x1abadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABADCu;
        // 0x1abae0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abadc) {
            ctx->pc = 0x1ABB2Cu;
            goto label_1abb2c;
        }
    }
    ctx->pc = 0x1ABAE4u;
label_1abae4:
    // 0x1abae4: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x1abae4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_1abae8:
    // 0x1abae8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1abae8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1abaec:
    // 0x1abaec: 0xace54640  sw          $a1, 0x4640($a3)
    ctx->pc = 0x1abaecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 17984), GPR_U32(ctx, 5));
label_1abaf0:
    // 0x1abaf0: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1abaf0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
label_1abaf4:
    // 0x1abaf4: 0x248445c0  addiu       $a0, $a0, 0x45C0
    ctx->pc = 0x1abaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17856));
label_1abaf8:
    // 0x1abaf8: 0x24e74640  addiu       $a3, $a3, 0x4640
    ctx->pc = 0x1abaf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17984));
label_1abafc:
    // 0x1abafc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1abafcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1abb00:
    // 0x1abb00: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1abb00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1abb04:
    // 0x1abb04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1abb04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1abb08:
    // 0x1abb08: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1abb08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1abb0c:
    // 0x1abb0c: 0x26094600  addiu       $t1, $s0, 0x4600
    ctx->pc = 0x1abb0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 17920));
label_1abb10:
    // 0x1abb10: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1abb10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1abb14:
    // 0x1abb14: 0xc069e2a  jal         func_1A78A8
label_1abb18:
    if (ctx->pc == 0x1ABB18u) {
        ctx->pc = 0x1ABB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABB14u;
        // 0x1abb18: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABB1Cu;
        goto label_1abb1c;
    }
    ctx->pc = 0x1ABB14u;
    SET_GPR_U32(ctx, 31, 0x1ABB1Cu);
    ctx->pc = 0x1ABB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABB14u;
    // 0x1abb18: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1ABB1Cu;
label_1abb1c:
    // 0x1abb1c: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_1abb20:
    if (ctx->pc == 0x1ABB20u) {
        ctx->pc = 0x1ABB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABB1Cu;
        // 0x1abb20: 0x8e024600  lw          $v0, 0x4600($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17920)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABB24u;
        goto label_1abb24;
    }
    ctx->pc = 0x1ABB1Cu;
    {
        const bool branch_taken_0x1abb1c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1abb1c) {
            ctx->pc = 0x1ABB20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ABB1Cu;
            // 0x1abb20: 0x8e024600  lw          $v0, 0x4600($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17920)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ABB2Cu;
            goto label_1abb2c;
        }
    }
    ctx->pc = 0x1ABB24u;
label_1abb24:
    // 0x1abb24: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1abb24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1abb28:
    // 0x1abb28: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1abb28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1abb2c:
    // 0x1abb2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1abb2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1abb30:
    // 0x1abb30: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1abb30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1abb34:
    // 0x1abb34: 0x3e00008  jr          $ra
label_1abb38:
    if (ctx->pc == 0x1ABB38u) {
        ctx->pc = 0x1ABB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABB34u;
        // 0x1abb38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABB3Cu;
        goto label_1abb3c;
    }
    ctx->pc = 0x1ABB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABB34u;
        // 0x1abb38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABB34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABB3Cu;
label_1abb3c:
    // 0x1abb3c: 0x0  nop
    ctx->pc = 0x1abb3cu;
    // NOP
label_1abb40:
    // 0x1abb40: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1abb40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1abb44:
    // 0x1abb44: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1abb44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1abb48:
    // 0x1abb48: 0x8c625c10  lw          $v0, 0x5C10($v1)
    ctx->pc = 0x1abb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 23568)));
label_1abb4c:
    // 0x1abb4c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1abb4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1abb50:
    // 0x1abb50: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1abb50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1abb54:
    // 0x1abb54: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1abb58:
    if (ctx->pc == 0x1ABB58u) {
        ctx->pc = 0x1ABB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABB54u;
        // 0x1abb58: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABB5Cu;
        goto label_1abb5c;
    }
    ctx->pc = 0x1ABB54u;
    {
        const bool branch_taken_0x1abb54 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1ABB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABB54u;
        // 0x1abb58: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abb54) {
            ctx->pc = 0x1ABB64u;
            goto label_1abb64;
        }
    }
    ctx->pc = 0x1ABB5Cu;
label_1abb5c:
    // 0x1abb5c: 0x10000013  b           . + 4 + (0x13 << 2)
label_1abb60:
    if (ctx->pc == 0x1ABB60u) {
        ctx->pc = 0x1ABB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABB5Cu;
        // 0x1abb60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABB64u;
        goto label_1abb64;
    }
    ctx->pc = 0x1ABB5Cu;
    {
        const bool branch_taken_0x1abb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABB5Cu;
        // 0x1abb60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abb5c) {
            ctx->pc = 0x1ABBACu;
            goto label_1abbac;
        }
    }
    ctx->pc = 0x1ABB64u;
label_1abb64:
    // 0x1abb64: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x1abb64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_1abb68:
    // 0x1abb68: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1abb68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1abb6c:
    // 0x1abb6c: 0xace54640  sw          $a1, 0x4640($a3)
    ctx->pc = 0x1abb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 17984), GPR_U32(ctx, 5));
label_1abb70:
    // 0x1abb70: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1abb70u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
label_1abb74:
    // 0x1abb74: 0x248445c0  addiu       $a0, $a0, 0x45C0
    ctx->pc = 0x1abb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17856));
label_1abb78:
    // 0x1abb78: 0x24e74640  addiu       $a3, $a3, 0x4640
    ctx->pc = 0x1abb78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17984));
label_1abb7c:
    // 0x1abb7c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1abb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1abb80:
    // 0x1abb80: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1abb80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1abb84:
    // 0x1abb84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1abb84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1abb88:
    // 0x1abb88: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1abb88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1abb8c:
    // 0x1abb8c: 0x26094600  addiu       $t1, $s0, 0x4600
    ctx->pc = 0x1abb8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 17920));
label_1abb90:
    // 0x1abb90: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1abb90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1abb94:
    // 0x1abb94: 0xc069e2a  jal         func_1A78A8
label_1abb98:
    if (ctx->pc == 0x1ABB98u) {
        ctx->pc = 0x1ABB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABB94u;
        // 0x1abb98: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABB9Cu;
        goto label_1abb9c;
    }
    ctx->pc = 0x1ABB94u;
    SET_GPR_U32(ctx, 31, 0x1ABB9Cu);
    ctx->pc = 0x1ABB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABB94u;
    // 0x1abb98: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1ABB9Cu;
label_1abb9c:
    // 0x1abb9c: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_1abba0:
    if (ctx->pc == 0x1ABBA0u) {
        ctx->pc = 0x1ABBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABB9Cu;
        // 0x1abba0: 0x8e024600  lw          $v0, 0x4600($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17920)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABBA4u;
        goto label_1abba4;
    }
    ctx->pc = 0x1ABB9Cu;
    {
        const bool branch_taken_0x1abb9c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1abb9c) {
            ctx->pc = 0x1ABBA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ABB9Cu;
            // 0x1abba0: 0x8e024600  lw          $v0, 0x4600($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17920)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ABBACu;
            goto label_1abbac;
        }
    }
    ctx->pc = 0x1ABBA4u;
label_1abba4:
    // 0x1abba4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1abba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1abba8:
    // 0x1abba8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1abba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1abbac:
    // 0x1abbac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1abbacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1abbb0:
    // 0x1abbb0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1abbb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1abbb4:
    // 0x1abbb4: 0x3e00008  jr          $ra
label_1abbb8:
    if (ctx->pc == 0x1ABBB8u) {
        ctx->pc = 0x1ABBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABBB4u;
        // 0x1abbb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABBBCu;
        goto label_1abbbc;
    }
    ctx->pc = 0x1ABBB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABBB4u;
        // 0x1abbb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABBB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABBBCu;
label_1abbbc:
    // 0x1abbbc: 0x0  nop
    ctx->pc = 0x1abbbcu;
    // NOP
label_1abbc0:
    // 0x1abbc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1abbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1abbc4:
    // 0x1abbc4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1abbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1abbc8:
    // 0x1abbc8: 0x3c120028  lui         $s2, 0x28
    ctx->pc = 0x1abbc8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)40 << 16));
label_1abbcc:
    // 0x1abbcc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1abbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1abbd0:
    // 0x1abbd0: 0x8e425c18  lw          $v0, 0x5C18($s2)
    ctx->pc = 0x1abbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 23576)));
label_1abbd4:
    // 0x1abbd4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1abbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1abbd8:
    // 0x1abbd8: 0x4410032  bgez        $v0, . + 4 + (0x32 << 2)
label_1abbdc:
    if (ctx->pc == 0x1ABBDCu) {
        ctx->pc = 0x1ABBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABBD8u;
        // 0x1abbdc: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABBE0u;
        goto label_1abbe0;
    }
    ctx->pc = 0x1ABBD8u;
    {
        const bool branch_taken_0x1abbd8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1ABBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABBD8u;
        // 0x1abbdc: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abbd8) {
            ctx->pc = 0x1ABCA4u;
            goto label_1abca4;
        }
    }
    ctx->pc = 0x1ABBE0u;
label_1abbe0:
    // 0x1abbe0: 0x3c110037  lui         $s1, 0x37
    ctx->pc = 0x1abbe0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
label_1abbe4:
    // 0x1abbe4: 0x26304980  addiu       $s0, $s1, 0x4980
    ctx->pc = 0x1abbe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 18816));
label_1abbe8:
    // 0x1abbe8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1abbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_1abbec:
    // 0x1abbec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1abbecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1abbf0:
    // 0x1abbf0: 0x34a50006  ori         $a1, $a1, 0x6
    ctx->pc = 0x1abbf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
label_1abbf4:
    // 0x1abbf4: 0xc069db6  jal         func_1A76D8
label_1abbf8:
    if (ctx->pc == 0x1ABBF8u) {
        ctx->pc = 0x1ABBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABBF4u;
        // 0x1abbf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABBFCu;
        goto label_1abbfc;
    }
    ctx->pc = 0x1ABBF4u;
    SET_GPR_U32(ctx, 31, 0x1ABBFCu);
    ctx->pc = 0x1ABBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABBF4u;
    // 0x1abbf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A76D8u;
    { ctx->pc = 0x1a76d8; return; }
    ctx->pc = 0x1ABBFCu;
label_1abbfc:
    // 0x1abbfc: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_1abc00:
    if (ctx->pc == 0x1ABC00u) {
        ctx->pc = 0x1ABC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABBFCu;
        // 0x1abc00: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABC04u;
        goto label_1abc04;
    }
    ctx->pc = 0x1ABBFCu;
    {
        const bool branch_taken_0x1abbfc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1abbfc) {
            ctx->pc = 0x1ABC00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ABBFCu;
            // 0x1abc00: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ABC0Cu;
            goto label_1abc0c;
        }
    }
    ctx->pc = 0x1ABC04u;
label_1abc04:
    // 0x1abc04: 0x10000028  b           . + 4 + (0x28 << 2)
label_1abc08:
    if (ctx->pc == 0x1ABC08u) {
        ctx->pc = 0x1ABC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABC04u;
        // 0x1abc08: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABC0Cu;
        goto label_1abc0c;
    }
    ctx->pc = 0x1ABC04u;
    {
        const bool branch_taken_0x1abc04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABC04u;
        // 0x1abc08: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abc04) {
            ctx->pc = 0x1ABCA8u;
            goto label_1abca8;
        }
    }
    ctx->pc = 0x1ABC0Cu;
label_1abc0c:
    // 0x1abc0c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1abc10:
    if (ctx->pc == 0x1ABC10u) {
        ctx->pc = 0x1ABC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABC0Cu;
        // 0x1abc10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABC14u;
        goto label_1abc14;
    }
    ctx->pc = 0x1ABC0Cu;
    {
        const bool branch_taken_0x1abc0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABC0Cu;
        // 0x1abc10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abc0c) {
            ctx->pc = 0x1ABC74u;
            goto label_1abc74;
        }
    }
    ctx->pc = 0x1ABC14u;
label_1abc14:
    // 0x1abc14: 0x3c110037  lui         $s1, 0x37
    ctx->pc = 0x1abc14u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
label_1abc18:
    // 0x1abc18: 0xae405c18  sw          $zero, 0x5C18($s2)
    ctx->pc = 0x1abc18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 23576), GPR_U32(ctx, 0));
label_1abc1c:
    // 0x1abc1c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1abc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1abc20:
    // 0x1abc20: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1abc20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1abc24:
    // 0x1abc24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1abc24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1abc28:
    // 0x1abc28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1abc28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1abc2c:
    // 0x1abc2c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1abc2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1abc30:
    // 0x1abc30: 0x26294780  addiu       $t1, $s1, 0x4780
    ctx->pc = 0x1abc30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 18304));
label_1abc34:
    // 0x1abc34: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1abc34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1abc38:
    // 0x1abc38: 0xc069e2a  jal         func_1A78A8
label_1abc3c:
    if (ctx->pc == 0x1ABC3Cu) {
        ctx->pc = 0x1ABC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABC38u;
        // 0x1abc3c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABC40u;
        goto label_1abc40;
    }
    ctx->pc = 0x1ABC38u;
    SET_GPR_U32(ctx, 31, 0x1ABC40u);
    ctx->pc = 0x1ABC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABC38u;
    // 0x1abc3c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1ABC40u;
label_1abc40:
    // 0x1abc40: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_1abc44:
    if (ctx->pc == 0x1ABC44u) {
        ctx->pc = 0x1ABC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABC40u;
        // 0x1abc44: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABC48u;
        goto label_1abc48;
    }
    ctx->pc = 0x1ABC40u;
    {
        const bool branch_taken_0x1abc40 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1ABC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABC40u;
        // 0x1abc44: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abc40) {
            ctx->pc = 0x1ABC54u;
            goto label_1abc54;
        }
    }
    ctx->pc = 0x1ABC48u;
label_1abc48:
    // 0x1abc48: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1abc48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_1abc4c:
    // 0x1abc4c: 0x10000016  b           . + 4 + (0x16 << 2)
label_1abc50:
    if (ctx->pc == 0x1ABC50u) {
        ctx->pc = 0x1ABC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABC4Cu;
        // 0x1abc50: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABC54u;
        goto label_1abc54;
    }
    ctx->pc = 0x1ABC4Cu;
    {
        const bool branch_taken_0x1abc4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABC4Cu;
        // 0x1abc50: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abc4c) {
            ctx->pc = 0x1ABCA8u;
            goto label_1abca8;
        }
    }
    ctx->pc = 0x1ABC54u;
label_1abc54:
    // 0x1abc54: 0x26274780  addiu       $a3, $s1, 0x4780
    ctx->pc = 0x1abc54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 18304));
label_1abc58:
    // 0x1abc58: 0x246649a8  addiu       $a2, $v1, 0x49A8
    ctx->pc = 0x1abc58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 18856));
label_1abc5c:
    // 0x1abc5c: 0x88e40003  lwl         $a0, 0x3($a3)
    ctx->pc = 0x1abc5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
label_1abc60:
    // 0x1abc60: 0x98e40000  lwr         $a0, 0x0($a3)
    ctx->pc = 0x1abc60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
label_1abc64:
    // 0x1abc64: 0xa8c40003  swl         $a0, 0x3($a2)
    ctx->pc = 0x1abc64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_1abc68:
    // 0x1abc68: 0xb8c40000  swr         $a0, 0x0($a2)
    ctx->pc = 0x1abc68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_1abc6c:
    // 0x1abc6c: 0x1000000e  b           . + 4 + (0xE << 2)
label_1abc70:
    if (ctx->pc == 0x1ABC70u) {
        ctx->pc = 0x1ABC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABC6Cu;
        // 0x1abc70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABC74u;
        goto label_1abc74;
    }
    ctx->pc = 0x1ABC6Cu;
    {
        const bool branch_taken_0x1abc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABC6Cu;
        // 0x1abc70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abc6c) {
            ctx->pc = 0x1ABCA8u;
            goto label_1abca8;
        }
    }
    ctx->pc = 0x1ABC74u;
label_1abc74:
    // 0x1abc74: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1abc74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_1abc78:
    // 0x1abc78: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1abc78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1abc7c:
    // 0x1abc7c: 0x0  nop
    ctx->pc = 0x1abc7cu;
    // NOP
label_1abc80:
    // 0x1abc80: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1abc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1abc84:
    // 0x1abc84: 0x0  nop
    ctx->pc = 0x1abc84u;
    // NOP
label_1abc88:
    // 0x1abc88: 0x0  nop
    ctx->pc = 0x1abc88u;
    // NOP
label_1abc8c:
    // 0x1abc8c: 0x0  nop
    ctx->pc = 0x1abc8cu;
    // NOP
label_1abc90:
    // 0x1abc90: 0x0  nop
    ctx->pc = 0x1abc90u;
    // NOP
label_1abc94:
    // 0x1abc94: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
label_1abc98:
    if (ctx->pc == 0x1ABC98u) {
        ctx->pc = 0x1ABC9Cu;
        goto label_1abc9c;
    }
    ctx->pc = 0x1ABC94u;
    {
        const bool branch_taken_0x1abc94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1abc94) {
            ctx->pc = 0x1ABC80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1abc80;
        }
    }
    ctx->pc = 0x1ABC9Cu;
label_1abc9c:
    // 0x1abc9c: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
label_1abca0:
    if (ctx->pc == 0x1ABCA0u) {
        ctx->pc = 0x1ABCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABC9Cu;
        // 0x1abca0: 0x26304980  addiu       $s0, $s1, 0x4980 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 18816));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABCA4u;
        goto label_1abca4;
    }
    ctx->pc = 0x1ABC9Cu;
    {
        const bool branch_taken_0x1abc9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABC9Cu;
        // 0x1abca0: 0x26304980  addiu       $s0, $s1, 0x4980 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 18816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abc9c) {
            ctx->pc = 0x1ABBE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1abbe8;
        }
    }
    ctx->pc = 0x1ABCA4u;
label_1abca4:
    // 0x1abca4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1abca4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1abca8:
    // 0x1abca8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1abca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1abcac:
    // 0x1abcac: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1abcacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1abcb0:
    // 0x1abcb0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1abcb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1abcb4:
    // 0x1abcb4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1abcb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1abcb8:
    // 0x1abcb8: 0x3e00008  jr          $ra
label_1abcbc:
    if (ctx->pc == 0x1ABCBCu) {
        ctx->pc = 0x1ABCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABCB8u;
        // 0x1abcbc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABCC0u;
        goto label_1abcc0;
    }
    ctx->pc = 0x1ABCB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABCB8u;
        // 0x1abcbc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABCB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABCC0u;
label_1abcc0:
    // 0x1abcc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1abcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1abcc4:
    // 0x1abcc4: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1abcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1abcc8:
    // 0x1abcc8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1abcc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_1abccc:
    // 0x1abccc: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1abcccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1abcd0:
    // 0x1abcd0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1abcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1abcd4:
    // 0x1abcd4: 0x24535b4c  addiu       $s3, $v0, 0x5B4C
    ctx->pc = 0x1abcd4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 23372));
label_1abcd8:
    // 0x1abcd8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1abcd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1abcdc:
    // 0x1abcdc: 0x247149a8  addiu       $s1, $v1, 0x49A8
    ctx->pc = 0x1abcdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 18856));
label_1abce0:
    // 0x1abce0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1abce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1abce4:
    // 0x1abce4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1abce4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1abce8:
    // 0x1abce8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1abce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1abcec:
    // 0x1abcec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1abcecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1abcf0:
    // 0x1abcf0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1abcf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1abcf4:
    // 0x1abcf4: 0xc08e918  jal         func_23A460
label_1abcf8:
    if (ctx->pc == 0x1ABCF8u) {
        ctx->pc = 0x1ABCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABCF4u;
        // 0x1abcf8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABCFCu;
        goto label_1abcfc;
    }
    ctx->pc = 0x1ABCF4u;
    SET_GPR_U32(ctx, 31, 0x1ABCFCu);
    ctx->pc = 0x1ABCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABCF4u;
    // 0x1abcf8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A460u;
    { ctx->pc = 0x23a460; return; }
    ctx->pc = 0x1ABCFCu;
label_1abcfc:
    // 0x1abcfc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1abd00:
    if (ctx->pc == 0x1ABD00u) {
        ctx->pc = 0x1ABD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABCFCu;
        // 0x1abd00: 0x3c100028  lui         $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABD04u;
        goto label_1abd04;
    }
    ctx->pc = 0x1ABCFCu;
    {
        const bool branch_taken_0x1abcfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABCFCu;
        // 0x1abd00: 0x3c100028  lui         $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abcfc) {
            ctx->pc = 0x1ABD2Cu;
            goto label_1abd2c;
        }
    }
    ctx->pc = 0x1ABD04u;
label_1abd04:
    // 0x1abd04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1abd04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1abd08:
    // 0x1abd08: 0x8e055c1c  lw          $a1, 0x5C1C($s0)
    ctx->pc = 0x1abd08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23580)));
label_1abd0c:
    // 0x1abd0c: 0xc08e918  jal         func_23A460
label_1abd10:
    if (ctx->pc == 0x1ABD10u) {
        ctx->pc = 0x1ABD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABD0Cu;
        // 0x1abd10: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABD14u;
        goto label_1abd14;
    }
    ctx->pc = 0x1ABD0Cu;
    SET_GPR_U32(ctx, 31, 0x1ABD14u);
    ctx->pc = 0x1ABD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABD0Cu;
    // 0x1abd10: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A460u;
    { ctx->pc = 0x23a460; return; }
    ctx->pc = 0x1ABD14u;
label_1abd14:
    // 0x1abd14: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1abd18:
    if (ctx->pc == 0x1ABD18u) {
        ctx->pc = 0x1ABD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABD14u;
        // 0x1abd18: 0x8e055c1c  lw          $a1, 0x5C1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23580)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABD1Cu;
        goto label_1abd1c;
    }
    ctx->pc = 0x1ABD14u;
    {
        const bool branch_taken_0x1abd14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABD14u;
        // 0x1abd18: 0x8e055c1c  lw          $a1, 0x5C1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abd14) {
            ctx->pc = 0x1ABD2Cu;
            goto label_1abd2c;
        }
    }
    ctx->pc = 0x1ABD1Cu;
label_1abd1c:
    // 0x1abd1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1abd1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1abd20:
    // 0x1abd20: 0xc08e918  jal         func_23A460
label_1abd24:
    if (ctx->pc == 0x1ABD24u) {
        ctx->pc = 0x1ABD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABD20u;
        // 0x1abd24: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABD28u;
        goto label_1abd28;
    }
    ctx->pc = 0x1ABD20u;
    SET_GPR_U32(ctx, 31, 0x1ABD28u);
    ctx->pc = 0x1ABD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABD20u;
    // 0x1abd24: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A460u;
    { ctx->pc = 0x23a460; return; }
    ctx->pc = 0x1ABD28u;
label_1abd28:
    // 0x1abd28: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x1abd28u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1abd2c:
    // 0x1abd2c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1abd2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1abd30:
    // 0x1abd30: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1abd30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1abd34:
    // 0x1abd34: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1abd34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1abd38:
    // 0x1abd38: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1abd38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1abd3c:
    // 0x1abd3c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1abd3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1abd40:
    // 0x1abd40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1abd40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1abd44:
    // 0x1abd44: 0x3e00008  jr          $ra
label_1abd48:
    if (ctx->pc == 0x1ABD48u) {
        ctx->pc = 0x1ABD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABD44u;
        // 0x1abd48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABD4Cu;
        goto label_1abd4c;
    }
    ctx->pc = 0x1ABD44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABD44u;
        // 0x1abd48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABD44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABD4Cu;
label_1abd4c:
    // 0x1abd4c: 0x0  nop
    ctx->pc = 0x1abd4cu;
    // NOP
label_1abd50:
    // 0x1abd50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1abd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1abd54:
    // 0x1abd54: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1abd54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1abd58:
    // 0x1abd58: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1abd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1abd5c:
    // 0x1abd5c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1abd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1abd60:
    // 0x1abd60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1abd60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1abd64:
    // 0x1abd64: 0x248449a8  addiu       $a0, $a0, 0x49A8
    ctx->pc = 0x1abd64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18856));
label_1abd68:
    // 0x1abd68: 0xac435c18  sw          $v1, 0x5C18($v0)
    ctx->pc = 0x1abd68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 23576), GPR_U32(ctx, 3));
label_1abd6c:
    // 0x1abd6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1abd6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1abd70:
    // 0x1abd70: 0xc08e9ac  jal         func_23A6B0
label_1abd74:
    if (ctx->pc == 0x1ABD74u) {
        ctx->pc = 0x1ABD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABD70u;
        // 0x1abd74: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABD78u;
        goto label_1abd78;
    }
    ctx->pc = 0x1ABD70u;
    SET_GPR_U32(ctx, 31, 0x1ABD78u);
    ctx->pc = 0x1ABD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABD70u;
    // 0x1abd74: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A6B0u;
    { ctx->pc = 0x23a6b0; return; }
    ctx->pc = 0x1ABD78u;
label_1abd78:
    // 0x1abd78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1abd78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1abd7c:
    // 0x1abd7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1abd7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1abd80:
    // 0x1abd80: 0x3e00008  jr          $ra
label_1abd84:
    if (ctx->pc == 0x1ABD84u) {
        ctx->pc = 0x1ABD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABD80u;
        // 0x1abd84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABD88u;
        goto label_1abd88;
    }
    ctx->pc = 0x1ABD80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABD80u;
        // 0x1abd84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABD80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABD88u;
label_1abd88:
    // 0x1abd88: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1abd88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1abd8c:
    // 0x1abd8c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1abd8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_1abd90:
    // 0x1abd90: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1abd90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_1abd94:
    // 0x1abd94: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1abd94u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1abd98:
    // 0x1abd98: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1abd98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1abd9c:
    // 0x1abd9c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1abd9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1abda0:
    // 0x1abda0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1abda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1abda4:
    // 0x1abda4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1abda4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1abda8:
    // 0x1abda8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1abda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1abdac:
    // 0x1abdac: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1abdacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1abdb0:
    // 0x1abdb0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1abdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_1abdb4:
    // 0x1abdb4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1abdb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_1abdb8:
    // 0x1abdb8: 0xc06aef0  jal         func_1ABBC0
label_1abdbc:
    if (ctx->pc == 0x1ABDBCu) {
        ctx->pc = 0x1ABDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABDB8u;
        // 0x1abdbc: 0xffb20030  sd          $s2, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABDC0u;
        goto label_1abdc0;
    }
    ctx->pc = 0x1ABDB8u;
    SET_GPR_U32(ctx, 31, 0x1ABDC0u);
    ctx->pc = 0x1ABDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABDB8u;
    // 0x1abdbc: 0xffb20030  sd          $s2, 0x30($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABBC0u;
    goto label_1abbc0;
    ctx->pc = 0x1ABDC0u;
label_1abdc0:
    // 0x1abdc0: 0x4400069  bltz        $v0, . + 4 + (0x69 << 2)
label_1abdc4:
    if (ctx->pc == 0x1ABDC4u) {
        ctx->pc = 0x1ABDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABDC0u;
        // 0x1abdc4: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABDC8u;
        goto label_1abdc8;
    }
    ctx->pc = 0x1ABDC0u;
    {
        const bool branch_taken_0x1abdc0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1ABDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABDC0u;
        // 0x1abdc4: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abdc0) {
            ctx->pc = 0x1ABF68u;
            goto label_1abf68;
        }
    }
    ctx->pc = 0x1ABDC8u;
label_1abdc8:
    // 0x1abdc8: 0xc06af30  jal         func_1ABCC0
label_1abdcc:
    if (ctx->pc == 0x1ABDCCu) {
        ctx->pc = 0x1ABDD0u;
        goto label_1abdd0;
    }
    ctx->pc = 0x1ABDC8u;
    SET_GPR_U32(ctx, 31, 0x1ABDD0u);
    ctx->pc = 0x1ABCC0u;
    goto label_1abcc0;
    ctx->pc = 0x1ABDD0u;
label_1abdd0:
    // 0x1abdd0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1abdd4:
    if (ctx->pc == 0x1ABDD4u) {
        ctx->pc = 0x1ABDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABDD0u;
        // 0x1abdd4: 0x3c140037  lui         $s4, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABDD8u;
        goto label_1abdd8;
    }
    ctx->pc = 0x1ABDD0u;
    {
        const bool branch_taken_0x1abdd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABDD0u;
        // 0x1abdd4: 0x3c140037  lui         $s4, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abdd0) {
            ctx->pc = 0x1ABDE4u;
            goto label_1abde4;
        }
    }
    ctx->pc = 0x1ABDD8u;
label_1abdd8:
    // 0x1abdd8: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1abdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_1abddc:
    // 0x1abddc: 0x10000062  b           . + 4 + (0x62 << 2)
label_1abde0:
    if (ctx->pc == 0x1ABDE0u) {
        ctx->pc = 0x1ABDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABDDCu;
        // 0x1abde0: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABDE4u;
        goto label_1abde4;
    }
    ctx->pc = 0x1ABDDCu;
    {
        const bool branch_taken_0x1abddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABDDCu;
        // 0x1abde0: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abddc) {
            ctx->pc = 0x1ABF68u;
            goto label_1abf68;
        }
    }
    ctx->pc = 0x1ABDE4u;
label_1abde4:
    // 0x1abde4: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x1abde4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1abde8:
    // 0x1abde8: 0x26924780  addiu       $s2, $s4, 0x4780
    ctx->pc = 0x1abde8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 18304));
label_1abdec:
    // 0x1abdec: 0x1200004a  beqz        $s0, . + 4 + (0x4A << 2)
label_1abdf0:
    if (ctx->pc == 0x1ABDF0u) {
        ctx->pc = 0x1ABDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABDECu;
        // 0x1abdf0: 0xae934780  sw          $s3, 0x4780($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 18304), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABDF4u;
        goto label_1abdf4;
    }
    ctx->pc = 0x1ABDECu;
    {
        const bool branch_taken_0x1abdec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABDECu;
        // 0x1abdf0: 0xae934780  sw          $s3, 0x4780($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 18304), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abdec) {
            ctx->pc = 0x1ABF18u;
            goto label_1abf18;
        }
    }
    ctx->pc = 0x1ABDF4u;
label_1abdf4:
    // 0x1abdf4: 0x2a2200fd  slti        $v0, $s1, 0xFD
    ctx->pc = 0x1abdf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)253) ? 1 : 0);
label_1abdf8:
    // 0x1abdf8: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
label_1abdfc:
    if (ctx->pc == 0x1ABDFCu) {
        ctx->pc = 0x1ABDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABDF8u;
        // 0x1abdfc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABE00u;
        goto label_1abe00;
    }
    ctx->pc = 0x1ABDF8u;
    {
        const bool branch_taken_0x1abdf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ABDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABDF8u;
        // 0x1abdfc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abdf8) {
            ctx->pc = 0x1ABF04u;
            goto label_1abf04;
        }
    }
    ctx->pc = 0x1ABE00u;
label_1abe00:
    // 0x1abe00: 0x26440104  addiu       $a0, $s2, 0x104
    ctx->pc = 0x1abe00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 260));
label_1abe04:
    // 0x1abe04: 0x2041025  or          $v0, $s0, $a0
    ctx->pc = 0x1abe04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
label_1abe08:
    // 0x1abe08: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1abe08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_1abe0c:
    // 0x1abe0c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_1abe10:
    if (ctx->pc == 0x1ABE10u) {
        ctx->pc = 0x1ABE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABE0Cu;
        // 0x1abe10: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABE14u;
        goto label_1abe14;
    }
    ctx->pc = 0x1ABE0Cu;
    {
        const bool branch_taken_0x1abe0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABE0Cu;
        // 0x1abe10: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abe0c) {
            ctx->pc = 0x1ABE78u;
            goto label_1abe78;
        }
    }
    ctx->pc = 0x1ABE14u;
label_1abe14:
    // 0x1abe14: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x1abe14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
label_1abe18:
    // 0x1abe18: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1abe18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1abe1c:
    // 0x1abe1c: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x1abe1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1abe20:
    // 0x1abe20: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x1abe20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1abe24:
    // 0x1abe24: 0x68e6000f  ldl         $a2, 0xF($a3)
    ctx->pc = 0x1abe24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1abe28:
    // 0x1abe28: 0x6ce60008  ldr         $a2, 0x8($a3)
    ctx->pc = 0x1abe28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1abe2c:
    // 0x1abe2c: 0x68e80017  ldl         $t0, 0x17($a3)
    ctx->pc = 0x1abe2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_1abe30:
    // 0x1abe30: 0x6ce80010  ldr         $t0, 0x10($a3)
    ctx->pc = 0x1abe30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1abe34:
    // 0x1abe34: 0x68e9001f  ldl         $t1, 0x1F($a3)
    ctx->pc = 0x1abe34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_1abe38:
    // 0x1abe38: 0x6ce90018  ldr         $t1, 0x18($a3)
    ctx->pc = 0x1abe38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_1abe3c:
    // 0x1abe3c: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x1abe3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1abe40:
    // 0x1abe40: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x1abe40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1abe44:
    // 0x1abe44: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x1abe44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1abe48:
    // 0x1abe48: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x1abe48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1abe4c:
    // 0x1abe4c: 0xb0880017  sdl         $t0, 0x17($a0)
    ctx->pc = 0x1abe4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1abe50:
    // 0x1abe50: 0xb4880010  sdr         $t0, 0x10($a0)
    ctx->pc = 0x1abe50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1abe54:
    // 0x1abe54: 0xb089001f  sdl         $t1, 0x1F($a0)
    ctx->pc = 0x1abe54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1abe58:
    // 0x1abe58: 0xb4890018  sdr         $t1, 0x18($a0)
    ctx->pc = 0x1abe58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1abe5c:
    // 0x1abe5c: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x1abe5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
label_1abe60:
    // 0x1abe60: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1abe60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_1abe64:
    // 0x1abe64: 0x0  nop
    ctx->pc = 0x1abe64u;
    // NOP
label_1abe68:
    // 0x1abe68: 0x14e2ffec  bne         $a3, $v0, . + 4 + (-0x14 << 2)
label_1abe6c:
    if (ctx->pc == 0x1ABE6Cu) {
        ctx->pc = 0x1ABE70u;
        goto label_1abe70;
    }
    ctx->pc = 0x1ABE68u;
    {
        const bool branch_taken_0x1abe68 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1abe68) {
            ctx->pc = 0x1ABE1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1abe1c;
        }
    }
    ctx->pc = 0x1ABE70u;
label_1abe70:
    // 0x1abe70: 0x10000010  b           . + 4 + (0x10 << 2)
label_1abe74:
    if (ctx->pc == 0x1ABE74u) {
        ctx->pc = 0x1ABE78u;
        goto label_1abe78;
    }
    ctx->pc = 0x1ABE70u;
    {
        const bool branch_taken_0x1abe70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abe70) {
            ctx->pc = 0x1ABEB4u;
            goto label_1abeb4;
        }
    }
    ctx->pc = 0x1ABE78u;
label_1abe78:
    // 0x1abe78: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x1abe78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
label_1abe7c:
    // 0x1abe7c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1abe7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1abe80:
    // 0x1abe80: 0xdcea0000  ld          $t2, 0x0($a3)
    ctx->pc = 0x1abe80u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_1abe84:
    // 0x1abe84: 0xdce30008  ld          $v1, 0x8($a3)
    ctx->pc = 0x1abe84u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 8)));
label_1abe88:
    // 0x1abe88: 0xdce60010  ld          $a2, 0x10($a3)
    ctx->pc = 0x1abe88u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 7), 16)));
label_1abe8c:
    // 0x1abe8c: 0xdce80018  ld          $t0, 0x18($a3)
    ctx->pc = 0x1abe8cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 7), 24)));
label_1abe90:
    // 0x1abe90: 0xfc8a0000  sd          $t2, 0x0($a0)
    ctx->pc = 0x1abe90u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 10));
label_1abe94:
    // 0x1abe94: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x1abe94u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
label_1abe98:
    // 0x1abe98: 0xfc860010  sd          $a2, 0x10($a0)
    ctx->pc = 0x1abe98u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 6));
label_1abe9c:
    // 0x1abe9c: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x1abe9cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
label_1abea0:
    // 0x1abea0: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x1abea0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
label_1abea4:
    // 0x1abea4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1abea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_1abea8:
    // 0x1abea8: 0x0  nop
    ctx->pc = 0x1abea8u;
    // NOP
label_1abeac:
    // 0x1abeac: 0x14e2fff4  bne         $a3, $v0, . + 4 + (-0xC << 2)
label_1abeb0:
    if (ctx->pc == 0x1ABEB0u) {
        ctx->pc = 0x1ABEB4u;
        goto label_1abeb4;
    }
    ctx->pc = 0x1ABEACu;
    {
        const bool branch_taken_0x1abeac = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1abeac) {
            ctx->pc = 0x1ABE80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1abe80;
        }
    }
    ctx->pc = 0x1ABEB4u;
label_1abeb4:
    // 0x1abeb4: 0x68e90007  ldl         $t1, 0x7($a3)
    ctx->pc = 0x1abeb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_1abeb8:
    // 0x1abeb8: 0x6ce90000  ldr         $t1, 0x0($a3)
    ctx->pc = 0x1abeb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_1abebc:
    // 0x1abebc: 0x68ea000f  ldl         $t2, 0xF($a3)
    ctx->pc = 0x1abebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_1abec0:
    // 0x1abec0: 0x6cea0008  ldr         $t2, 0x8($a3)
    ctx->pc = 0x1abec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_1abec4:
    // 0x1abec4: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x1abec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1abec8:
    // 0x1abec8: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x1abec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1abecc:
    // 0x1abecc: 0x88e8001b  lwl         $t0, 0x1B($a3)
    ctx->pc = 0x1abeccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
label_1abed0:
    // 0x1abed0: 0x98e80018  lwr         $t0, 0x18($a3)
    ctx->pc = 0x1abed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
label_1abed4:
    // 0x1abed4: 0xb0890007  sdl         $t1, 0x7($a0)
    ctx->pc = 0x1abed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1abed8:
    // 0x1abed8: 0xb4890000  sdr         $t1, 0x0($a0)
    ctx->pc = 0x1abed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1abedc:
    // 0x1abedc: 0xb08a000f  sdl         $t2, 0xF($a0)
    ctx->pc = 0x1abedcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1abee0:
    // 0x1abee0: 0xb48a0008  sdr         $t2, 0x8($a0)
    ctx->pc = 0x1abee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1abee4:
    // 0x1abee4: 0xb0860017  sdl         $a2, 0x17($a0)
    ctx->pc = 0x1abee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1abee8:
    // 0x1abee8: 0xb4860010  sdr         $a2, 0x10($a0)
    ctx->pc = 0x1abee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1abeec:
    // 0x1abeec: 0xa888001b  swl         $t0, 0x1B($a0)
    ctx->pc = 0x1abeecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_1abef0:
    // 0x1abef0: 0x26a34780  addiu       $v1, $s5, 0x4780
    ctx->pc = 0x1abef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 18304));
label_1abef4:
    // 0x1abef4: 0x240200fc  addiu       $v0, $zero, 0xFC
    ctx->pc = 0x1abef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
label_1abef8:
    // 0x1abef8: 0xb8880018  swr         $t0, 0x18($a0)
    ctx->pc = 0x1abef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_1abefc:
    // 0x1abefc: 0x10000008  b           . + 4 + (0x8 << 2)
label_1abf00:
    if (ctx->pc == 0x1ABF00u) {
        ctx->pc = 0x1ABF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABEFCu;
        // 0x1abf00: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABF04u;
        goto label_1abf04;
    }
    ctx->pc = 0x1ABEFCu;
    {
        const bool branch_taken_0x1abefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABEFCu;
        // 0x1abf00: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abefc) {
            ctx->pc = 0x1ABF20u;
            goto label_1abf20;
        }
    }
    ctx->pc = 0x1ABF04u;
label_1abf04:
    // 0x1abf04: 0x26440104  addiu       $a0, $s2, 0x104
    ctx->pc = 0x1abf04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 260));
label_1abf08:
    // 0x1abf08: 0xc08e93e  jal         func_23A4F8
label_1abf0c:
    if (ctx->pc == 0x1ABF0Cu) {
        ctx->pc = 0x1ABF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABF08u;
        // 0x1abf0c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABF10u;
        goto label_1abf10;
    }
    ctx->pc = 0x1ABF08u;
    SET_GPR_U32(ctx, 31, 0x1ABF10u);
    ctx->pc = 0x1ABF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABF08u;
    // 0x1abf0c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x1ABF10u;
label_1abf10:
    // 0x1abf10: 0x10000002  b           . + 4 + (0x2 << 2)
label_1abf14:
    if (ctx->pc == 0x1ABF14u) {
        ctx->pc = 0x1ABF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABF10u;
        // 0x1abf14: 0xae510004  sw          $s1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABF18u;
        goto label_1abf18;
    }
    ctx->pc = 0x1ABF10u;
    {
        const bool branch_taken_0x1abf10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABF10u;
        // 0x1abf14: 0xae510004  sw          $s1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abf10) {
            ctx->pc = 0x1ABF1Cu;
            goto label_1abf1c;
        }
    }
    ctx->pc = 0x1ABF18u;
label_1abf18:
    // 0x1abf18: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1abf18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_1abf1c:
    // 0x1abf1c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1abf1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1abf20:
    // 0x1abf20: 0x26b04780  addiu       $s0, $s5, 0x4780
    ctx->pc = 0x1abf20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 18304));
label_1abf24:
    // 0x1abf24: 0x24a44980  addiu       $a0, $a1, 0x4980
    ctx->pc = 0x1abf24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 18816));
label_1abf28:
    // 0x1abf28: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1abf28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1abf2c:
    // 0x1abf2c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1abf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1abf30:
    // 0x1abf30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1abf30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1abf34:
    // 0x1abf34: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1abf34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1abf38:
    // 0x1abf38: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x1abf38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_1abf3c:
    // 0x1abf3c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1abf3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1abf40:
    // 0x1abf40: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x1abf40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1abf44:
    // 0x1abf44: 0xc069e2a  jal         func_1A78A8
label_1abf48:
    if (ctx->pc == 0x1ABF48u) {
        ctx->pc = 0x1ABF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABF44u;
        // 0x1abf48: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABF4Cu;
        goto label_1abf4c;
    }
    ctx->pc = 0x1ABF44u;
    SET_GPR_U32(ctx, 31, 0x1ABF4Cu);
    ctx->pc = 0x1ABF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABF44u;
    // 0x1abf48: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1ABF4Cu;
label_1abf4c:
    // 0x1abf4c: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
label_1abf50:
    if (ctx->pc == 0x1ABF50u) {
        ctx->pc = 0x1ABF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABF4Cu;
        // 0x1abf50: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABF54u;
        goto label_1abf54;
    }
    ctx->pc = 0x1ABF4Cu;
    {
        const bool branch_taken_0x1abf4c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1abf4c) {
            ctx->pc = 0x1ABF50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ABF4Cu;
            // 0x1abf50: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ABF60u;
            goto label_1abf60;
        }
    }
    ctx->pc = 0x1ABF54u;
label_1abf54:
    // 0x1abf54: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1abf54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_1abf58:
    // 0x1abf58: 0x10000003  b           . + 4 + (0x3 << 2)
label_1abf5c:
    if (ctx->pc == 0x1ABF5Cu) {
        ctx->pc = 0x1ABF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABF58u;
        // 0x1abf5c: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABF60u;
        goto label_1abf60;
    }
    ctx->pc = 0x1ABF58u;
    {
        const bool branch_taken_0x1abf58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABF58u;
        // 0x1abf5c: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abf58) {
            ctx->pc = 0x1ABF68u;
            goto label_1abf68;
        }
    }
    ctx->pc = 0x1ABF60u;
label_1abf60:
    // 0x1abf60: 0x8e824780  lw          $v0, 0x4780($s4)
    ctx->pc = 0x1abf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18304)));
label_1abf64:
    // 0x1abf64: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x1abf64u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
label_1abf68:
    // 0x1abf68: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1abf68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1abf6c:
    // 0x1abf6c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1abf6cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1abf70:
    // 0x1abf70: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1abf70u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1abf74:
    // 0x1abf74: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1abf74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1abf78:
    // 0x1abf78: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1abf78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1abf7c:
    // 0x1abf7c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1abf7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1abf80:
    // 0x1abf80: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1abf80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1abf84:
    // 0x1abf84: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1abf84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1abf88:
    // 0x1abf88: 0x3e00008  jr          $ra
label_1abf8c:
    if (ctx->pc == 0x1ABF8Cu) {
        ctx->pc = 0x1ABF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABF88u;
        // 0x1abf8c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABF90u;
        goto label_1abf90;
    }
    ctx->pc = 0x1ABF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABF88u;
        // 0x1abf8c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABF88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABF90u;
label_1abf90:
    // 0x1abf90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1abf90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1abf94:
    // 0x1abf94: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1abf94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_1abf98:
    // 0x1abf98: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1abf98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_1abf9c:
    // 0x1abf9c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1abf9cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1abfa0:
    // 0x1abfa0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1abfa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1abfa4:
    // 0x1abfa4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1abfa4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1abfa8:
    // 0x1abfa8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1abfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1abfac:
    // 0x1abfac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1abfacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1abfb0:
    // 0x1abfb0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1abfb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1abfb4:
    // 0x1abfb4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1abfb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1abfb8:
    // 0x1abfb8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1abfb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_1abfbc:
    // 0x1abfbc: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1abfbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_1abfc0:
    // 0x1abfc0: 0xc06aef0  jal         func_1ABBC0
label_1abfc4:
    if (ctx->pc == 0x1ABFC4u) {
        ctx->pc = 0x1ABFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABFC0u;
        // 0x1abfc4: 0xffb20030  sd          $s2, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABFC8u;
        goto label_1abfc8;
    }
    ctx->pc = 0x1ABFC0u;
    SET_GPR_U32(ctx, 31, 0x1ABFC8u);
    ctx->pc = 0x1ABFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABFC0u;
    // 0x1abfc4: 0xffb20030  sd          $s2, 0x30($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABBC0u;
    goto label_1abbc0;
    ctx->pc = 0x1ABFC8u;
label_1abfc8:
    // 0x1abfc8: 0x4400069  bltz        $v0, . + 4 + (0x69 << 2)
label_1abfcc:
    if (ctx->pc == 0x1ABFCCu) {
        ctx->pc = 0x1ABFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABFC8u;
        // 0x1abfcc: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABFD0u;
        goto label_1abfd0;
    }
    ctx->pc = 0x1ABFC8u;
    {
        const bool branch_taken_0x1abfc8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1ABFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABFC8u;
        // 0x1abfcc: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abfc8) {
            ctx->pc = 0x1AC170u;
            { ctx->pc = 0x1ac170; return; }
        }
    }
    ctx->pc = 0x1ABFD0u;
label_1abfd0:
    // 0x1abfd0: 0xc06af30  jal         func_1ABCC0
label_1abfd4:
    if (ctx->pc == 0x1ABFD4u) {
        ctx->pc = 0x1ABFD8u;
        goto label_1abfd8;
    }
    ctx->pc = 0x1ABFD0u;
    SET_GPR_U32(ctx, 31, 0x1ABFD8u);
    ctx->pc = 0x1ABCC0u;
    goto label_1abcc0;
    ctx->pc = 0x1ABFD8u;
label_1abfd8:
    // 0x1abfd8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1abfdc:
    if (ctx->pc == 0x1ABFDCu) {
        ctx->pc = 0x1ABFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABFD8u;
        // 0x1abfdc: 0x3c140037  lui         $s4, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABFE0u;
        goto label_1abfe0;
    }
    ctx->pc = 0x1ABFD8u;
    {
        const bool branch_taken_0x1abfd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABFD8u;
        // 0x1abfdc: 0x3c140037  lui         $s4, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abfd8) {
            ctx->pc = 0x1ABFECu;
            goto label_1abfec;
        }
    }
    ctx->pc = 0x1ABFE0u;
label_1abfe0:
    // 0x1abfe0: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1abfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_1abfe4:
    // 0x1abfe4: 0x10000062  b           . + 4 + (0x62 << 2)
label_1abfe8:
    if (ctx->pc == 0x1ABFE8u) {
        ctx->pc = 0x1ABFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABFE4u;
        // 0x1abfe8: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABFECu;
        goto label_1abfec;
    }
    ctx->pc = 0x1ABFE4u;
    {
        const bool branch_taken_0x1abfe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABFE4u;
        // 0x1abfe8: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abfe4) {
            ctx->pc = 0x1AC170u;
            { ctx->pc = 0x1ac170; return; }
        }
    }
    ctx->pc = 0x1ABFECu;
label_1abfec:
    // 0x1abfec: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x1abfecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1abff0:
    // 0x1abff0: 0x26924780  addiu       $s2, $s4, 0x4780
    ctx->pc = 0x1abff0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 18304));
label_1abff4:
    // 0x1abff4: 0x1200004a  beqz        $s0, . + 4 + (0x4A << 2)
label_1abff8:
    if (ctx->pc == 0x1ABFF8u) {
        ctx->pc = 0x1ABFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABFF4u;
        // 0x1abff8: 0xae934780  sw          $s3, 0x4780($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 18304), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABFFCu;
        goto label_1abffc;
    }
    ctx->pc = 0x1ABFF4u;
    {
        const bool branch_taken_0x1abff4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABFF4u;
        // 0x1abff8: 0xae934780  sw          $s3, 0x4780($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 18304), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abff4) {
            ctx->pc = 0x1AC120u;
            { ctx->pc = 0x1ac120; return; }
        }
    }
    ctx->pc = 0x1ABFFCu;
label_1abffc:
    // 0x1abffc: 0x2a2200fd  slti        $v0, $s1, 0xFD
    ctx->pc = 0x1abffcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)253) ? 1 : 0);
label_1ac000:
    // 0x1ac000: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
label_1ac004:
    if (ctx->pc == 0x1AC004u) {
        ctx->pc = 0x1AC004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC000u;
        // 0x1ac004: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC008u;
        goto label_1ac008;
    }
    ctx->pc = 0x1AC000u;
    {
        const bool branch_taken_0x1ac000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC000u;
        // 0x1ac004: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac000) {
            ctx->pc = 0x1AC10Cu;
            { ctx->pc = 0x1ac10c; return; }
        }
    }
    ctx->pc = 0x1AC008u;
label_1ac008:
    // 0x1ac008: 0x26440104  addiu       $a0, $s2, 0x104
    ctx->pc = 0x1ac008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 260));
label_1ac00c:
    // 0x1ac00c: 0x2041025  or          $v0, $s0, $a0
    ctx->pc = 0x1ac00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
label_1ac010:
    // 0x1ac010: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1ac010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_1ac014:
    // 0x1ac014: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_1ac018:
    if (ctx->pc == 0x1AC018u) {
        ctx->pc = 0x1AC018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC014u;
        // 0x1ac018: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC01Cu;
        goto label_1ac01c;
    }
    ctx->pc = 0x1AC014u;
    {
        const bool branch_taken_0x1ac014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC014u;
        // 0x1ac018: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac014) {
            ctx->pc = 0x1AC080u;
            { ctx->pc = 0x1ac080; return; }
        }
    }
    ctx->pc = 0x1AC01Cu;
label_1ac01c:
    // 0x1ac01c: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x1ac01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
label_1ac020:
    // 0x1ac020: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1ac020u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1ac024:
    // 0x1ac024: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x1ac024u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1ac028:
    // 0x1ac028: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x1ac028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1ac02c:
    // 0x1ac02c: 0x68e6000f  ldl         $a2, 0xF($a3)
    ctx->pc = 0x1ac02cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1ac030:
    // 0x1ac030: 0x6ce60008  ldr         $a2, 0x8($a3)
    ctx->pc = 0x1ac030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1ac034:
    // 0x1ac034: 0x68e80017  ldl         $t0, 0x17($a3)
    ctx->pc = 0x1ac034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_1ac038:
    // 0x1ac038: 0x6ce80010  ldr         $t0, 0x10($a3)
    ctx->pc = 0x1ac038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1ac03c:
    // 0x1ac03c: 0x68e9001f  ldl         $t1, 0x1F($a3)
    ctx->pc = 0x1ac03cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_1ac040:
    // 0x1ac040: 0x6ce90018  ldr         $t1, 0x18($a3)
    ctx->pc = 0x1ac040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_1ac044:
    // 0x1ac044: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x1ac044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    ctx->pc = 0x1ac048u;
    return;
}
