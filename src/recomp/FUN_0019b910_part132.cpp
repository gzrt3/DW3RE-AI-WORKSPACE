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

// Function: FUN_0019b910
// Address: 0x19b910 - 0x29b9f0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b910_part132(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1db880u: goto label_1db880;
        case 0x1db884u: goto label_1db884;
        case 0x1db888u: goto label_1db888;
        case 0x1db88cu: goto label_1db88c;
        case 0x1db890u: goto label_1db890;
        case 0x1db894u: goto label_1db894;
        case 0x1db898u: goto label_1db898;
        case 0x1db89cu: goto label_1db89c;
        case 0x1db8a0u: goto label_1db8a0;
        case 0x1db8a4u: goto label_1db8a4;
        case 0x1db8a8u: goto label_1db8a8;
        case 0x1db8acu: goto label_1db8ac;
        case 0x1db8b0u: goto label_1db8b0;
        case 0x1db8b4u: goto label_1db8b4;
        case 0x1db8b8u: goto label_1db8b8;
        case 0x1db8bcu: goto label_1db8bc;
        case 0x1db8c0u: goto label_1db8c0;
        case 0x1db8c4u: goto label_1db8c4;
        case 0x1db8c8u: goto label_1db8c8;
        case 0x1db8ccu: goto label_1db8cc;
        case 0x1db8d0u: goto label_1db8d0;
        case 0x1db8d4u: goto label_1db8d4;
        case 0x1db8d8u: goto label_1db8d8;
        case 0x1db8dcu: goto label_1db8dc;
        case 0x1db8e0u: goto label_1db8e0;
        case 0x1db8e4u: goto label_1db8e4;
        case 0x1db8e8u: goto label_1db8e8;
        case 0x1db8ecu: goto label_1db8ec;
        case 0x1db8f0u: goto label_1db8f0;
        case 0x1db8f4u: goto label_1db8f4;
        case 0x1db8f8u: goto label_1db8f8;
        case 0x1db8fcu: goto label_1db8fc;
        case 0x1db900u: goto label_1db900;
        case 0x1db904u: goto label_1db904;
        case 0x1db908u: goto label_1db908;
        case 0x1db90cu: goto label_1db90c;
        case 0x1db910u: goto label_1db910;
        case 0x1db914u: goto label_1db914;
        case 0x1db918u: goto label_1db918;
        case 0x1db91cu: goto label_1db91c;
        case 0x1db920u: goto label_1db920;
        case 0x1db924u: goto label_1db924;
        case 0x1db928u: goto label_1db928;
        case 0x1db92cu: goto label_1db92c;
        case 0x1db930u: goto label_1db930;
        case 0x1db934u: goto label_1db934;
        case 0x1db938u: goto label_1db938;
        case 0x1db93cu: goto label_1db93c;
        case 0x1db940u: goto label_1db940;
        case 0x1db944u: goto label_1db944;
        case 0x1db948u: goto label_1db948;
        case 0x1db94cu: goto label_1db94c;
        case 0x1db950u: goto label_1db950;
        case 0x1db954u: goto label_1db954;
        case 0x1db958u: goto label_1db958;
        case 0x1db95cu: goto label_1db95c;
        case 0x1db960u: goto label_1db960;
        case 0x1db964u: goto label_1db964;
        case 0x1db968u: goto label_1db968;
        case 0x1db96cu: goto label_1db96c;
        case 0x1db970u: goto label_1db970;
        case 0x1db974u: goto label_1db974;
        case 0x1db978u: goto label_1db978;
        case 0x1db97cu: goto label_1db97c;
        case 0x1db980u: goto label_1db980;
        case 0x1db984u: goto label_1db984;
        case 0x1db988u: goto label_1db988;
        case 0x1db98cu: goto label_1db98c;
        case 0x1db990u: goto label_1db990;
        case 0x1db994u: goto label_1db994;
        case 0x1db998u: goto label_1db998;
        case 0x1db99cu: goto label_1db99c;
        case 0x1db9a0u: goto label_1db9a0;
        case 0x1db9a4u: goto label_1db9a4;
        case 0x1db9a8u: goto label_1db9a8;
        case 0x1db9acu: goto label_1db9ac;
        case 0x1db9b0u: goto label_1db9b0;
        case 0x1db9b4u: goto label_1db9b4;
        case 0x1db9b8u: goto label_1db9b8;
        case 0x1db9bcu: goto label_1db9bc;
        case 0x1db9c0u: goto label_1db9c0;
        case 0x1db9c4u: goto label_1db9c4;
        case 0x1db9c8u: goto label_1db9c8;
        case 0x1db9ccu: goto label_1db9cc;
        case 0x1db9d0u: goto label_1db9d0;
        case 0x1db9d4u: goto label_1db9d4;
        case 0x1db9d8u: goto label_1db9d8;
        case 0x1db9dcu: goto label_1db9dc;
        case 0x1db9e0u: goto label_1db9e0;
        case 0x1db9e4u: goto label_1db9e4;
        case 0x1db9e8u: goto label_1db9e8;
        case 0x1db9ecu: goto label_1db9ec;
        case 0x1db9f0u: goto label_1db9f0;
        case 0x1db9f4u: goto label_1db9f4;
        case 0x1db9f8u: goto label_1db9f8;
        case 0x1db9fcu: goto label_1db9fc;
        case 0x1dba00u: goto label_1dba00;
        case 0x1dba04u: goto label_1dba04;
        case 0x1dba08u: goto label_1dba08;
        case 0x1dba0cu: goto label_1dba0c;
        case 0x1dba10u: goto label_1dba10;
        case 0x1dba14u: goto label_1dba14;
        case 0x1dba18u: goto label_1dba18;
        case 0x1dba1cu: goto label_1dba1c;
        case 0x1dba20u: goto label_1dba20;
        case 0x1dba24u: goto label_1dba24;
        case 0x1dba28u: goto label_1dba28;
        case 0x1dba2cu: goto label_1dba2c;
        case 0x1dba30u: goto label_1dba30;
        case 0x1dba34u: goto label_1dba34;
        case 0x1dba38u: goto label_1dba38;
        case 0x1dba3cu: goto label_1dba3c;
        case 0x1dba40u: goto label_1dba40;
        case 0x1dba44u: goto label_1dba44;
        case 0x1dba48u: goto label_1dba48;
        case 0x1dba4cu: goto label_1dba4c;
        case 0x1dba50u: goto label_1dba50;
        case 0x1dba54u: goto label_1dba54;
        case 0x1dba58u: goto label_1dba58;
        case 0x1dba5cu: goto label_1dba5c;
        case 0x1dba60u: goto label_1dba60;
        case 0x1dba64u: goto label_1dba64;
        case 0x1dba68u: goto label_1dba68;
        case 0x1dba6cu: goto label_1dba6c;
        case 0x1dba70u: goto label_1dba70;
        case 0x1dba74u: goto label_1dba74;
        case 0x1dba78u: goto label_1dba78;
        case 0x1dba7cu: goto label_1dba7c;
        case 0x1dba80u: goto label_1dba80;
        case 0x1dba84u: goto label_1dba84;
        case 0x1dba88u: goto label_1dba88;
        case 0x1dba8cu: goto label_1dba8c;
        case 0x1dba90u: goto label_1dba90;
        case 0x1dba94u: goto label_1dba94;
        case 0x1dba98u: goto label_1dba98;
        case 0x1dba9cu: goto label_1dba9c;
        case 0x1dbaa0u: goto label_1dbaa0;
        case 0x1dbaa4u: goto label_1dbaa4;
        case 0x1dbaa8u: goto label_1dbaa8;
        case 0x1dbaacu: goto label_1dbaac;
        case 0x1dbab0u: goto label_1dbab0;
        case 0x1dbab4u: goto label_1dbab4;
        case 0x1dbab8u: goto label_1dbab8;
        case 0x1dbabcu: goto label_1dbabc;
        case 0x1dbac0u: goto label_1dbac0;
        case 0x1dbac4u: goto label_1dbac4;
        case 0x1dbac8u: goto label_1dbac8;
        case 0x1dbaccu: goto label_1dbacc;
        case 0x1dbad0u: goto label_1dbad0;
        case 0x1dbad4u: goto label_1dbad4;
        case 0x1dbad8u: goto label_1dbad8;
        case 0x1dbadcu: goto label_1dbadc;
        case 0x1dbae0u: goto label_1dbae0;
        case 0x1dbae4u: goto label_1dbae4;
        case 0x1dbae8u: goto label_1dbae8;
        case 0x1dbaecu: goto label_1dbaec;
        case 0x1dbaf0u: goto label_1dbaf0;
        case 0x1dbaf4u: goto label_1dbaf4;
        case 0x1dbaf8u: goto label_1dbaf8;
        case 0x1dbafcu: goto label_1dbafc;
        case 0x1dbb00u: goto label_1dbb00;
        case 0x1dbb04u: goto label_1dbb04;
        case 0x1dbb08u: goto label_1dbb08;
        case 0x1dbb0cu: goto label_1dbb0c;
        case 0x1dbb10u: goto label_1dbb10;
        case 0x1dbb14u: goto label_1dbb14;
        case 0x1dbb18u: goto label_1dbb18;
        case 0x1dbb1cu: goto label_1dbb1c;
        case 0x1dbb20u: goto label_1dbb20;
        case 0x1dbb24u: goto label_1dbb24;
        case 0x1dbb28u: goto label_1dbb28;
        case 0x1dbb2cu: goto label_1dbb2c;
        case 0x1dbb30u: goto label_1dbb30;
        case 0x1dbb34u: goto label_1dbb34;
        case 0x1dbb38u: goto label_1dbb38;
        case 0x1dbb3cu: goto label_1dbb3c;
        case 0x1dbb40u: goto label_1dbb40;
        case 0x1dbb44u: goto label_1dbb44;
        case 0x1dbb48u: goto label_1dbb48;
        case 0x1dbb4cu: goto label_1dbb4c;
        case 0x1dbb50u: goto label_1dbb50;
        case 0x1dbb54u: goto label_1dbb54;
        case 0x1dbb58u: goto label_1dbb58;
        case 0x1dbb5cu: goto label_1dbb5c;
        case 0x1dbb60u: goto label_1dbb60;
        case 0x1dbb64u: goto label_1dbb64;
        case 0x1dbb68u: goto label_1dbb68;
        case 0x1dbb6cu: goto label_1dbb6c;
        case 0x1dbb70u: goto label_1dbb70;
        case 0x1dbb74u: goto label_1dbb74;
        case 0x1dbb78u: goto label_1dbb78;
        case 0x1dbb7cu: goto label_1dbb7c;
        case 0x1dbb80u: goto label_1dbb80;
        case 0x1dbb84u: goto label_1dbb84;
        case 0x1dbb88u: goto label_1dbb88;
        case 0x1dbb8cu: goto label_1dbb8c;
        case 0x1dbb90u: goto label_1dbb90;
        case 0x1dbb94u: goto label_1dbb94;
        case 0x1dbb98u: goto label_1dbb98;
        case 0x1dbb9cu: goto label_1dbb9c;
        case 0x1dbba0u: goto label_1dbba0;
        case 0x1dbba4u: goto label_1dbba4;
        case 0x1dbba8u: goto label_1dbba8;
        case 0x1dbbacu: goto label_1dbbac;
        case 0x1dbbb0u: goto label_1dbbb0;
        case 0x1dbbb4u: goto label_1dbbb4;
        case 0x1dbbb8u: goto label_1dbbb8;
        case 0x1dbbbcu: goto label_1dbbbc;
        case 0x1dbbc0u: goto label_1dbbc0;
        case 0x1dbbc4u: goto label_1dbbc4;
        case 0x1dbbc8u: goto label_1dbbc8;
        case 0x1dbbccu: goto label_1dbbcc;
        case 0x1dbbd0u: goto label_1dbbd0;
        case 0x1dbbd4u: goto label_1dbbd4;
        case 0x1dbbd8u: goto label_1dbbd8;
        case 0x1dbbdcu: goto label_1dbbdc;
        case 0x1dbbe0u: goto label_1dbbe0;
        case 0x1dbbe4u: goto label_1dbbe4;
        case 0x1dbbe8u: goto label_1dbbe8;
        case 0x1dbbecu: goto label_1dbbec;
        case 0x1dbbf0u: goto label_1dbbf0;
        case 0x1dbbf4u: goto label_1dbbf4;
        case 0x1dbbf8u: goto label_1dbbf8;
        case 0x1dbbfcu: goto label_1dbbfc;
        case 0x1dbc00u: goto label_1dbc00;
        case 0x1dbc04u: goto label_1dbc04;
        case 0x1dbc08u: goto label_1dbc08;
        case 0x1dbc0cu: goto label_1dbc0c;
        case 0x1dbc10u: goto label_1dbc10;
        case 0x1dbc14u: goto label_1dbc14;
        case 0x1dbc18u: goto label_1dbc18;
        case 0x1dbc1cu: goto label_1dbc1c;
        case 0x1dbc20u: goto label_1dbc20;
        case 0x1dbc24u: goto label_1dbc24;
        case 0x1dbc28u: goto label_1dbc28;
        case 0x1dbc2cu: goto label_1dbc2c;
        case 0x1dbc30u: goto label_1dbc30;
        case 0x1dbc34u: goto label_1dbc34;
        case 0x1dbc38u: goto label_1dbc38;
        case 0x1dbc3cu: goto label_1dbc3c;
        case 0x1dbc40u: goto label_1dbc40;
        case 0x1dbc44u: goto label_1dbc44;
        case 0x1dbc48u: goto label_1dbc48;
        case 0x1dbc4cu: goto label_1dbc4c;
        case 0x1dbc50u: goto label_1dbc50;
        case 0x1dbc54u: goto label_1dbc54;
        case 0x1dbc58u: goto label_1dbc58;
        case 0x1dbc5cu: goto label_1dbc5c;
        case 0x1dbc60u: goto label_1dbc60;
        case 0x1dbc64u: goto label_1dbc64;
        case 0x1dbc68u: goto label_1dbc68;
        case 0x1dbc6cu: goto label_1dbc6c;
        case 0x1dbc70u: goto label_1dbc70;
        case 0x1dbc74u: goto label_1dbc74;
        case 0x1dbc78u: goto label_1dbc78;
        case 0x1dbc7cu: goto label_1dbc7c;
        case 0x1dbc80u: goto label_1dbc80;
        case 0x1dbc84u: goto label_1dbc84;
        case 0x1dbc88u: goto label_1dbc88;
        case 0x1dbc8cu: goto label_1dbc8c;
        case 0x1dbc90u: goto label_1dbc90;
        case 0x1dbc94u: goto label_1dbc94;
        case 0x1dbc98u: goto label_1dbc98;
        case 0x1dbc9cu: goto label_1dbc9c;
        case 0x1dbca0u: goto label_1dbca0;
        case 0x1dbca4u: goto label_1dbca4;
        case 0x1dbca8u: goto label_1dbca8;
        case 0x1dbcacu: goto label_1dbcac;
        case 0x1dbcb0u: goto label_1dbcb0;
        case 0x1dbcb4u: goto label_1dbcb4;
        case 0x1dbcb8u: goto label_1dbcb8;
        case 0x1dbcbcu: goto label_1dbcbc;
        case 0x1dbcc0u: goto label_1dbcc0;
        case 0x1dbcc4u: goto label_1dbcc4;
        case 0x1dbcc8u: goto label_1dbcc8;
        case 0x1dbcccu: goto label_1dbccc;
        case 0x1dbcd0u: goto label_1dbcd0;
        case 0x1dbcd4u: goto label_1dbcd4;
        case 0x1dbcd8u: goto label_1dbcd8;
        case 0x1dbcdcu: goto label_1dbcdc;
        case 0x1dbce0u: goto label_1dbce0;
        case 0x1dbce4u: goto label_1dbce4;
        case 0x1dbce8u: goto label_1dbce8;
        case 0x1dbcecu: goto label_1dbcec;
        case 0x1dbcf0u: goto label_1dbcf0;
        case 0x1dbcf4u: goto label_1dbcf4;
        case 0x1dbcf8u: goto label_1dbcf8;
        case 0x1dbcfcu: goto label_1dbcfc;
        case 0x1dbd00u: goto label_1dbd00;
        case 0x1dbd04u: goto label_1dbd04;
        case 0x1dbd08u: goto label_1dbd08;
        case 0x1dbd0cu: goto label_1dbd0c;
        case 0x1dbd10u: goto label_1dbd10;
        case 0x1dbd14u: goto label_1dbd14;
        case 0x1dbd18u: goto label_1dbd18;
        case 0x1dbd1cu: goto label_1dbd1c;
        case 0x1dbd20u: goto label_1dbd20;
        case 0x1dbd24u: goto label_1dbd24;
        case 0x1dbd28u: goto label_1dbd28;
        case 0x1dbd2cu: goto label_1dbd2c;
        case 0x1dbd30u: goto label_1dbd30;
        case 0x1dbd34u: goto label_1dbd34;
        case 0x1dbd38u: goto label_1dbd38;
        case 0x1dbd3cu: goto label_1dbd3c;
        case 0x1dbd40u: goto label_1dbd40;
        case 0x1dbd44u: goto label_1dbd44;
        case 0x1dbd48u: goto label_1dbd48;
        case 0x1dbd4cu: goto label_1dbd4c;
        case 0x1dbd50u: goto label_1dbd50;
        case 0x1dbd54u: goto label_1dbd54;
        case 0x1dbd58u: goto label_1dbd58;
        case 0x1dbd5cu: goto label_1dbd5c;
        case 0x1dbd60u: goto label_1dbd60;
        case 0x1dbd64u: goto label_1dbd64;
        case 0x1dbd68u: goto label_1dbd68;
        case 0x1dbd6cu: goto label_1dbd6c;
        case 0x1dbd70u: goto label_1dbd70;
        case 0x1dbd74u: goto label_1dbd74;
        case 0x1dbd78u: goto label_1dbd78;
        case 0x1dbd7cu: goto label_1dbd7c;
        case 0x1dbd80u: goto label_1dbd80;
        case 0x1dbd84u: goto label_1dbd84;
        case 0x1dbd88u: goto label_1dbd88;
        case 0x1dbd8cu: goto label_1dbd8c;
        case 0x1dbd90u: goto label_1dbd90;
        case 0x1dbd94u: goto label_1dbd94;
        case 0x1dbd98u: goto label_1dbd98;
        case 0x1dbd9cu: goto label_1dbd9c;
        case 0x1dbda0u: goto label_1dbda0;
        case 0x1dbda4u: goto label_1dbda4;
        case 0x1dbda8u: goto label_1dbda8;
        case 0x1dbdacu: goto label_1dbdac;
        case 0x1dbdb0u: goto label_1dbdb0;
        case 0x1dbdb4u: goto label_1dbdb4;
        case 0x1dbdb8u: goto label_1dbdb8;
        case 0x1dbdbcu: goto label_1dbdbc;
        case 0x1dbdc0u: goto label_1dbdc0;
        case 0x1dbdc4u: goto label_1dbdc4;
        case 0x1dbdc8u: goto label_1dbdc8;
        case 0x1dbdccu: goto label_1dbdcc;
        case 0x1dbdd0u: goto label_1dbdd0;
        case 0x1dbdd4u: goto label_1dbdd4;
        case 0x1dbdd8u: goto label_1dbdd8;
        case 0x1dbddcu: goto label_1dbddc;
        case 0x1dbde0u: goto label_1dbde0;
        case 0x1dbde4u: goto label_1dbde4;
        case 0x1dbde8u: goto label_1dbde8;
        case 0x1dbdecu: goto label_1dbdec;
        case 0x1dbdf0u: goto label_1dbdf0;
        case 0x1dbdf4u: goto label_1dbdf4;
        case 0x1dbdf8u: goto label_1dbdf8;
        case 0x1dbdfcu: goto label_1dbdfc;
        case 0x1dbe00u: goto label_1dbe00;
        case 0x1dbe04u: goto label_1dbe04;
        case 0x1dbe08u: goto label_1dbe08;
        case 0x1dbe0cu: goto label_1dbe0c;
        case 0x1dbe10u: goto label_1dbe10;
        case 0x1dbe14u: goto label_1dbe14;
        case 0x1dbe18u: goto label_1dbe18;
        case 0x1dbe1cu: goto label_1dbe1c;
        case 0x1dbe20u: goto label_1dbe20;
        case 0x1dbe24u: goto label_1dbe24;
        case 0x1dbe28u: goto label_1dbe28;
        case 0x1dbe2cu: goto label_1dbe2c;
        case 0x1dbe30u: goto label_1dbe30;
        case 0x1dbe34u: goto label_1dbe34;
        case 0x1dbe38u: goto label_1dbe38;
        case 0x1dbe3cu: goto label_1dbe3c;
        case 0x1dbe40u: goto label_1dbe40;
        case 0x1dbe44u: goto label_1dbe44;
        case 0x1dbe48u: goto label_1dbe48;
        case 0x1dbe4cu: goto label_1dbe4c;
        case 0x1dbe50u: goto label_1dbe50;
        case 0x1dbe54u: goto label_1dbe54;
        case 0x1dbe58u: goto label_1dbe58;
        case 0x1dbe5cu: goto label_1dbe5c;
        case 0x1dbe60u: goto label_1dbe60;
        case 0x1dbe64u: goto label_1dbe64;
        case 0x1dbe68u: goto label_1dbe68;
        case 0x1dbe6cu: goto label_1dbe6c;
        case 0x1dbe70u: goto label_1dbe70;
        case 0x1dbe74u: goto label_1dbe74;
        case 0x1dbe78u: goto label_1dbe78;
        case 0x1dbe7cu: goto label_1dbe7c;
        case 0x1dbe80u: goto label_1dbe80;
        case 0x1dbe84u: goto label_1dbe84;
        case 0x1dbe88u: goto label_1dbe88;
        case 0x1dbe8cu: goto label_1dbe8c;
        case 0x1dbe90u: goto label_1dbe90;
        case 0x1dbe94u: goto label_1dbe94;
        case 0x1dbe98u: goto label_1dbe98;
        case 0x1dbe9cu: goto label_1dbe9c;
        case 0x1dbea0u: goto label_1dbea0;
        case 0x1dbea4u: goto label_1dbea4;
        case 0x1dbea8u: goto label_1dbea8;
        case 0x1dbeacu: goto label_1dbeac;
        case 0x1dbeb0u: goto label_1dbeb0;
        case 0x1dbeb4u: goto label_1dbeb4;
        case 0x1dbeb8u: goto label_1dbeb8;
        case 0x1dbebcu: goto label_1dbebc;
        case 0x1dbec0u: goto label_1dbec0;
        case 0x1dbec4u: goto label_1dbec4;
        case 0x1dbec8u: goto label_1dbec8;
        case 0x1dbeccu: goto label_1dbecc;
        case 0x1dbed0u: goto label_1dbed0;
        case 0x1dbed4u: goto label_1dbed4;
        case 0x1dbed8u: goto label_1dbed8;
        case 0x1dbedcu: goto label_1dbedc;
        case 0x1dbee0u: goto label_1dbee0;
        case 0x1dbee4u: goto label_1dbee4;
        case 0x1dbee8u: goto label_1dbee8;
        case 0x1dbeecu: goto label_1dbeec;
        case 0x1dbef0u: goto label_1dbef0;
        case 0x1dbef4u: goto label_1dbef4;
        case 0x1dbef8u: goto label_1dbef8;
        case 0x1dbefcu: goto label_1dbefc;
        case 0x1dbf00u: goto label_1dbf00;
        case 0x1dbf04u: goto label_1dbf04;
        case 0x1dbf08u: goto label_1dbf08;
        case 0x1dbf0cu: goto label_1dbf0c;
        case 0x1dbf10u: goto label_1dbf10;
        case 0x1dbf14u: goto label_1dbf14;
        case 0x1dbf18u: goto label_1dbf18;
        case 0x1dbf1cu: goto label_1dbf1c;
        case 0x1dbf20u: goto label_1dbf20;
        case 0x1dbf24u: goto label_1dbf24;
        case 0x1dbf28u: goto label_1dbf28;
        case 0x1dbf2cu: goto label_1dbf2c;
        case 0x1dbf30u: goto label_1dbf30;
        case 0x1dbf34u: goto label_1dbf34;
        case 0x1dbf38u: goto label_1dbf38;
        case 0x1dbf3cu: goto label_1dbf3c;
        case 0x1dbf40u: goto label_1dbf40;
        case 0x1dbf44u: goto label_1dbf44;
        case 0x1dbf48u: goto label_1dbf48;
        case 0x1dbf4cu: goto label_1dbf4c;
        case 0x1dbf50u: goto label_1dbf50;
        case 0x1dbf54u: goto label_1dbf54;
        case 0x1dbf58u: goto label_1dbf58;
        case 0x1dbf5cu: goto label_1dbf5c;
        case 0x1dbf60u: goto label_1dbf60;
        case 0x1dbf64u: goto label_1dbf64;
        case 0x1dbf68u: goto label_1dbf68;
        case 0x1dbf6cu: goto label_1dbf6c;
        case 0x1dbf70u: goto label_1dbf70;
        case 0x1dbf74u: goto label_1dbf74;
        case 0x1dbf78u: goto label_1dbf78;
        case 0x1dbf7cu: goto label_1dbf7c;
        case 0x1dbf80u: goto label_1dbf80;
        case 0x1dbf84u: goto label_1dbf84;
        case 0x1dbf88u: goto label_1dbf88;
        case 0x1dbf8cu: goto label_1dbf8c;
        case 0x1dbf90u: goto label_1dbf90;
        case 0x1dbf94u: goto label_1dbf94;
        case 0x1dbf98u: goto label_1dbf98;
        case 0x1dbf9cu: goto label_1dbf9c;
        case 0x1dbfa0u: goto label_1dbfa0;
        case 0x1dbfa4u: goto label_1dbfa4;
        case 0x1dbfa8u: goto label_1dbfa8;
        case 0x1dbfacu: goto label_1dbfac;
        case 0x1dbfb0u: goto label_1dbfb0;
        case 0x1dbfb4u: goto label_1dbfb4;
        case 0x1dbfb8u: goto label_1dbfb8;
        case 0x1dbfbcu: goto label_1dbfbc;
        case 0x1dbfc0u: goto label_1dbfc0;
        case 0x1dbfc4u: goto label_1dbfc4;
        case 0x1dbfc8u: goto label_1dbfc8;
        case 0x1dbfccu: goto label_1dbfcc;
        case 0x1dbfd0u: goto label_1dbfd0;
        case 0x1dbfd4u: goto label_1dbfd4;
        case 0x1dbfd8u: goto label_1dbfd8;
        case 0x1dbfdcu: goto label_1dbfdc;
        case 0x1dbfe0u: goto label_1dbfe0;
        case 0x1dbfe4u: goto label_1dbfe4;
        case 0x1dbfe8u: goto label_1dbfe8;
        case 0x1dbfecu: goto label_1dbfec;
        case 0x1dbff0u: goto label_1dbff0;
        case 0x1dbff4u: goto label_1dbff4;
        case 0x1dbff8u: goto label_1dbff8;
        case 0x1dbffcu: goto label_1dbffc;
        case 0x1dc000u: goto label_1dc000;
        case 0x1dc004u: goto label_1dc004;
        case 0x1dc008u: goto label_1dc008;
        case 0x1dc00cu: goto label_1dc00c;
        case 0x1dc010u: goto label_1dc010;
        case 0x1dc014u: goto label_1dc014;
        case 0x1dc018u: goto label_1dc018;
        case 0x1dc01cu: goto label_1dc01c;
        case 0x1dc020u: goto label_1dc020;
        case 0x1dc024u: goto label_1dc024;
        case 0x1dc028u: goto label_1dc028;
        case 0x1dc02cu: goto label_1dc02c;
        case 0x1dc030u: goto label_1dc030;
        case 0x1dc034u: goto label_1dc034;
        case 0x1dc038u: goto label_1dc038;
        case 0x1dc03cu: goto label_1dc03c;
        case 0x1dc040u: goto label_1dc040;
        case 0x1dc044u: goto label_1dc044;
        case 0x1dc048u: goto label_1dc048;
        case 0x1dc04cu: goto label_1dc04c;
        default: return;
    }

label_1db880:
    // 0x1db880: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1db880u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1db884:
    // 0x1db884: 0x10000015  b           . + 4 + (0x15 << 2)
label_1db888:
    if (ctx->pc == 0x1DB888u) {
        ctx->pc = 0x1DB888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB884u;
        // 0x1db888: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB88Cu;
        goto label_1db88c;
    }
    ctx->pc = 0x1DB884u;
    {
        const bool branch_taken_0x1db884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB884u;
        // 0x1db888: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db884) {
            ctx->pc = 0x1DB8DCu;
            goto label_1db8dc;
        }
    }
    ctx->pc = 0x1DB88Cu;
label_1db88c:
    // 0x1db88c: 0x0  nop
    ctx->pc = 0x1db88cu;
    // NOP
label_1db890:
    // 0x1db890: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1db890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1db894:
    // 0x1db894: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
label_1db898:
    if (ctx->pc == 0x1DB898u) {
        ctx->pc = 0x1DB89Cu;
        goto label_1db89c;
    }
    ctx->pc = 0x1DB894u;
    {
        const bool branch_taken_0x1db894 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1db894) {
            ctx->pc = 0x1DB8B8u;
            goto label_1db8b8;
        }
    }
    ctx->pc = 0x1DB89Cu;
label_1db89c:
    // 0x1db89c: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1db89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1db8a0:
    // 0x1db8a0: 0x28420030  slti        $v0, $v0, 0x30
    ctx->pc = 0x1db8a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
label_1db8a4:
    // 0x1db8a4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1db8a8:
    if (ctx->pc == 0x1DB8A8u) {
        ctx->pc = 0x1DB8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB8A4u;
        // 0x1db8a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB8ACu;
        goto label_1db8ac;
    }
    ctx->pc = 0x1DB8A4u;
    {
        const bool branch_taken_0x1db8a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB8A4u;
        // 0x1db8a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db8a4) {
            ctx->pc = 0x1DB8DCu;
            goto label_1db8dc;
        }
    }
    ctx->pc = 0x1DB8ACu;
label_1db8ac:
    // 0x1db8ac: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1db8acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1db8b0:
    // 0x1db8b0: 0x1000000a  b           . + 4 + (0xA << 2)
label_1db8b4:
    if (ctx->pc == 0x1DB8B4u) {
        ctx->pc = 0x1DB8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB8B0u;
        // 0x1db8b4: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB8B8u;
        goto label_1db8b8;
    }
    ctx->pc = 0x1DB8B0u;
    {
        const bool branch_taken_0x1db8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB8B0u;
        // 0x1db8b4: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db8b0) {
            ctx->pc = 0x1DB8DCu;
            goto label_1db8dc;
        }
    }
    ctx->pc = 0x1DB8B8u;
label_1db8b8:
    // 0x1db8b8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1db8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1db8bc:
    // 0x1db8bc: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
label_1db8c0:
    if (ctx->pc == 0x1DB8C0u) {
        ctx->pc = 0x1DB8C4u;
        goto label_1db8c4;
    }
    ctx->pc = 0x1DB8BCu;
    {
        const bool branch_taken_0x1db8bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1db8bc) {
            ctx->pc = 0x1DB8DCu;
            goto label_1db8dc;
        }
    }
    ctx->pc = 0x1DB8C4u;
label_1db8c4:
    // 0x1db8c4: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1db8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1db8c8:
    // 0x1db8c8: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x1db8c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_1db8cc:
    // 0x1db8cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1db8d0:
    if (ctx->pc == 0x1DB8D0u) {
        ctx->pc = 0x1DB8D4u;
        goto label_1db8d4;
    }
    ctx->pc = 0x1DB8CCu;
    {
        const bool branch_taken_0x1db8cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db8cc) {
            ctx->pc = 0x1DB8DCu;
            goto label_1db8dc;
        }
    }
    ctx->pc = 0x1DB8D4u;
label_1db8d4:
    // 0x1db8d4: 0xaf838ca0  sw          $v1, -0x7360($gp)
    ctx->pc = 0x1db8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 3));
label_1db8d8:
    // 0x1db8d8: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1db8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1db8dc:
    // 0x1db8dc: 0x0  nop
    ctx->pc = 0x1db8dcu;
    // NOP
label_1db8e0:
    // 0x1db8e0: 0xc07a9d8  jal         func_1EA760
label_1db8e4:
    if (ctx->pc == 0x1DB8E4u) {
        ctx->pc = 0x1DB8E8u;
        goto label_1db8e8;
    }
    ctx->pc = 0x1DB8E0u;
    SET_GPR_U32(ctx, 31, 0x1DB8E8u);
    ctx->pc = 0x1EA760u;
    { ctx->pc = 0x1ea760; return; }
    ctx->pc = 0x1DB8E8u;
label_1db8e8:
    // 0x1db8e8: 0xc04e168  jal         func_1385A0
label_1db8ec:
    if (ctx->pc == 0x1DB8ECu) {
        ctx->pc = 0x1DB8F0u;
        goto label_1db8f0;
    }
    ctx->pc = 0x1DB8E8u;
    SET_GPR_U32(ctx, 31, 0x1DB8F0u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x1DB8E8u, 0x1DB8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB8F0u;
label_1db8f0:
    // 0x1db8f0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1db8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_1db8f4:
    // 0x1db8f4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1db8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1db8f8:
    // 0x1db8f8: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x1db8f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_1db8fc:
    // 0x1db8fc: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1db8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1db900:
    // 0x1db900: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1db900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1db904:
    // 0x1db904: 0x27828ce0  addiu       $v0, $gp, -0x7320
    ctx->pc = 0x1db904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937824));
label_1db908:
    // 0x1db908: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1db908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1db90c:
    // 0x1db90c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1db90cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db910:
    // 0x1db910: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1db910u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db914:
    // 0x1db914: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1db914u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1db918:
    // 0x1db918: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1db918u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1db91c:
    // 0x1db91c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1db91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1db920:
    // 0x1db920: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1db920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1db924:
    // 0x1db924: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1db924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1db928:
    // 0x1db928: 0xc066c72  jal         func_19B1C8
label_1db92c:
    if (ctx->pc == 0x1DB92Cu) {
        ctx->pc = 0x1DB92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB928u;
        // 0x1db92c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB930u;
        goto label_1db930;
    }
    ctx->pc = 0x1DB928u;
    SET_GPR_U32(ctx, 31, 0x1DB930u);
    ctx->pc = 0x1DB92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB928u;
    // 0x1db92c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1DB928u, 0x1DB930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB930u;
label_1db930:
    // 0x1db930: 0xc077e84  jal         func_1DFA10
label_1db934:
    if (ctx->pc == 0x1DB934u) {
        ctx->pc = 0x1DB938u;
        goto label_1db938;
    }
    ctx->pc = 0x1DB930u;
    SET_GPR_U32(ctx, 31, 0x1DB938u);
    ctx->pc = 0x1DFA10u;
    { ctx->pc = 0x1dfa10; return; }
    ctx->pc = 0x1DB938u;
label_1db938:
    // 0x1db938: 0xc077d90  jal         func_1DF640
label_1db93c:
    if (ctx->pc == 0x1DB93Cu) {
        ctx->pc = 0x1DB940u;
        goto label_1db940;
    }
    ctx->pc = 0x1DB938u;
    SET_GPR_U32(ctx, 31, 0x1DB940u);
    ctx->pc = 0x1DF640u;
    { ctx->pc = 0x1df640; return; }
    ctx->pc = 0x1DB940u;
label_1db940:
    // 0x1db940: 0xc077ab4  jal         func_1DEAD0
label_1db944:
    if (ctx->pc == 0x1DB944u) {
        ctx->pc = 0x1DB948u;
        goto label_1db948;
    }
    ctx->pc = 0x1DB940u;
    SET_GPR_U32(ctx, 31, 0x1DB948u);
    ctx->pc = 0x1DEAD0u;
    { ctx->pc = 0x1dead0; return; }
    ctx->pc = 0x1DB948u;
label_1db948:
    // 0x1db948: 0xc077880  jal         func_1DE200
label_1db94c:
    if (ctx->pc == 0x1DB94Cu) {
        ctx->pc = 0x1DB950u;
        goto label_1db950;
    }
    ctx->pc = 0x1DB948u;
    SET_GPR_U32(ctx, 31, 0x1DB950u);
    ctx->pc = 0x1DE200u;
    { ctx->pc = 0x1de200; return; }
    ctx->pc = 0x1DB950u;
label_1db950:
    // 0x1db950: 0x8f828c8c  lw          $v0, -0x7374($gp)
    ctx->pc = 0x1db950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937740)));
label_1db954:
    // 0x1db954: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_1db958:
    if (ctx->pc == 0x1DB958u) {
        ctx->pc = 0x1DB958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB954u;
        // 0x1db958: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB95Cu;
        goto label_1db95c;
    }
    ctx->pc = 0x1DB954u;
    {
        const bool branch_taken_0x1db954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB954u;
        // 0x1db958: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db954) {
            ctx->pc = 0x1DBA28u;
            goto label_1dba28;
        }
    }
    ctx->pc = 0x1DB95Cu;
label_1db95c:
    // 0x1db95c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1db95cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1db960:
    // 0x1db960: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1db960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1db964:
    // 0x1db964: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1db964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1db968:
    // 0x1db968: 0x27828c90  addiu       $v0, $gp, -0x7370
    ctx->pc = 0x1db968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937744));
label_1db96c:
    // 0x1db96c: 0x2406027a  addiu       $a2, $zero, 0x27A
    ctx->pc = 0x1db96cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 634));
label_1db970:
    // 0x1db970: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1db970u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db974:
    // 0x1db974: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1db974u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db978:
    // 0x1db978: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1db978u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db97c:
    // 0x1db97c: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1db97cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1db980:
    // 0x1db980: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1db980u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1db984:
    // 0x1db984: 0x858821  addu        $s1, $a0, $a1
    ctx->pc = 0x1db984u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1db988:
    // 0x1db988: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1db988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1db98c:
    // 0x1db98c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1db98cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1db990:
    // 0x1db990: 0xc066c72  jal         func_19B1C8
label_1db994:
    if (ctx->pc == 0x1DB994u) {
        ctx->pc = 0x1DB994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB990u;
        // 0x1db994: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB998u;
        goto label_1db998;
    }
    ctx->pc = 0x1DB990u;
    SET_GPR_U32(ctx, 31, 0x1DB998u);
    ctx->pc = 0x1DB994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB990u;
    // 0x1db994: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1DB990u, 0x1DB998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB998u;
label_1db998:
    // 0x1db998: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1db998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1db99c:
    // 0x1db99c: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1db99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1db9a0:
    // 0x1db9a0: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1db9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1db9a4:
    // 0x1db9a4: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1db9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1db9a8:
    // 0x1db9a8: 0x8f848c80  lw          $a0, -0x7380($gp)
    ctx->pc = 0x1db9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937728)));
label_1db9ac:
    // 0x1db9ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1db9acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1db9b0:
    // 0x1db9b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1db9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1db9b4:
    // 0x1db9b4: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1db9b4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1db9b8:
    // 0x1db9b8: 0xc070e2c  jal         func_1C38B0
label_1db9bc:
    if (ctx->pc == 0x1DB9BCu) {
        ctx->pc = 0x1DB9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB9B8u;
        // 0x1db9bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB9C0u;
        goto label_1db9c0;
    }
    ctx->pc = 0x1DB9B8u;
    SET_GPR_U32(ctx, 31, 0x1DB9C0u);
    ctx->pc = 0x1DB9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB9B8u;
    // 0x1db9bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1DB9C0u;
label_1db9c0:
    // 0x1db9c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1db9c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1db9c4:
    // 0x1db9c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1db9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1db9c8:
    // 0x1db9c8: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1db9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1db9cc:
    // 0x1db9cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1db9ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db9d0:
    // 0x1db9d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1db9d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db9d4:
    // 0x1db9d4: 0xc066c72  jal         func_19B1C8
label_1db9d8:
    if (ctx->pc == 0x1DB9D8u) {
        ctx->pc = 0x1DB9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB9D4u;
        // 0x1db9d8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB9DCu;
        goto label_1db9dc;
    }
    ctx->pc = 0x1DB9D4u;
    SET_GPR_U32(ctx, 31, 0x1DB9DCu);
    ctx->pc = 0x1DB9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB9D4u;
    // 0x1db9d8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1DB9D4u, 0x1DB9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB9DCu;
label_1db9dc:
    // 0x1db9dc: 0x8f828c88  lw          $v0, -0x7378($gp)
    ctx->pc = 0x1db9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937736)));
label_1db9e0:
    // 0x1db9e0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1db9e4:
    if (ctx->pc == 0x1DB9E4u) {
        ctx->pc = 0x1DB9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB9E0u;
        // 0x1db9e4: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB9E8u;
        goto label_1db9e8;
    }
    ctx->pc = 0x1DB9E0u;
    {
        const bool branch_taken_0x1db9e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB9E0u;
        // 0x1db9e4: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db9e0) {
            ctx->pc = 0x1DBA28u;
            goto label_1dba28;
        }
    }
    ctx->pc = 0x1DB9E8u;
label_1db9e8:
    // 0x1db9e8: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1db9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1db9ec:
    // 0x1db9ec: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1db9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1db9f0:
    // 0x1db9f0: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1db9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1db9f4:
    // 0x1db9f4: 0x8f848c84  lw          $a0, -0x737C($gp)
    ctx->pc = 0x1db9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937732)));
label_1db9f8:
    // 0x1db9f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1db9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1db9fc:
    // 0x1db9fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1db9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dba00:
    // 0x1dba00: 0x8c530008  lw          $s3, 0x8($v0)
    ctx->pc = 0x1dba00u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1dba04:
    // 0x1dba04: 0xc070e2c  jal         func_1C38B0
label_1dba08:
    if (ctx->pc == 0x1DBA08u) {
        ctx->pc = 0x1DBA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBA04u;
        // 0x1dba08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBA0Cu;
        goto label_1dba0c;
    }
    ctx->pc = 0x1DBA04u;
    SET_GPR_U32(ctx, 31, 0x1DBA0Cu);
    ctx->pc = 0x1DBA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBA04u;
    // 0x1dba08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1DBA0Cu;
label_1dba0c:
    // 0x1dba0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dba0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dba10:
    // 0x1dba10: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1dba10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1dba14:
    // 0x1dba14: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1dba14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1dba18:
    // 0x1dba18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dba18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dba1c:
    // 0x1dba1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dba1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dba20:
    // 0x1dba20: 0xc066c72  jal         func_19B1C8
label_1dba24:
    if (ctx->pc == 0x1DBA24u) {
        ctx->pc = 0x1DBA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBA20u;
        // 0x1dba24: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBA28u;
        goto label_1dba28;
    }
    ctx->pc = 0x1DBA20u;
    SET_GPR_U32(ctx, 31, 0x1DBA28u);
    ctx->pc = 0x1DBA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBA20u;
    // 0x1dba24: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1DBA20u, 0x1DBA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBA28u;
label_1dba28:
    // 0x1dba28: 0xc07a86c  jal         func_1EA1B0
label_1dba2c:
    if (ctx->pc == 0x1DBA2Cu) {
        ctx->pc = 0x1DBA30u;
        goto label_1dba30;
    }
    ctx->pc = 0x1DBA28u;
    SET_GPR_U32(ctx, 31, 0x1DBA30u);
    ctx->pc = 0x1EA1B0u;
    { ctx->pc = 0x1ea1b0; return; }
    ctx->pc = 0x1DBA30u;
label_1dba30:
    // 0x1dba30: 0xc04e120  jal         func_138480
label_1dba34:
    if (ctx->pc == 0x1DBA34u) {
        ctx->pc = 0x1DBA38u;
        goto label_1dba38;
    }
    ctx->pc = 0x1DBA30u;
    SET_GPR_U32(ctx, 31, 0x1DBA38u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x1DBA30u, 0x1DBA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBA38u;
label_1dba38:
    // 0x1dba38: 0xc05b578  jal         func_16D5E0
label_1dba3c:
    if (ctx->pc == 0x1DBA3Cu) {
        ctx->pc = 0x1DBA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBA38u;
        // 0x1dba3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBA40u;
        goto label_1dba40;
    }
    ctx->pc = 0x1DBA38u;
    SET_GPR_U32(ctx, 31, 0x1DBA40u);
    ctx->pc = 0x1DBA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBA38u;
    // 0x1dba3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1DBA38u, 0x1DBA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBA40u;
label_1dba40:
    // 0x1dba40: 0xc060258  jal         func_180960
label_1dba44:
    if (ctx->pc == 0x1DBA44u) {
        ctx->pc = 0x1DBA48u;
        goto label_1dba48;
    }
    ctx->pc = 0x1DBA40u;
    SET_GPR_U32(ctx, 31, 0x1DBA48u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1DBA40u, 0x1DBA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBA48u;
label_1dba48:
    // 0x1dba48: 0x8f838ca0  lw          $v1, -0x7360($gp)
    ctx->pc = 0x1dba48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937760)));
label_1dba4c:
    // 0x1dba4c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1dba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dba50:
    // 0x1dba50: 0x1062ff53  beq         $v1, $v0, . + 4 + (-0xAD << 2)
label_1dba54:
    if (ctx->pc == 0x1DBA54u) {
        ctx->pc = 0x1DBA58u;
        goto label_1dba58;
    }
    ctx->pc = 0x1DBA50u;
    {
        const bool branch_taken_0x1dba50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1dba50) {
            ctx->pc = 0x1DB7A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1db7a0; return; }
        }
    }
    ctx->pc = 0x1DBA58u;
label_1dba58:
    // 0x1dba58: 0x1000017d  b           . + 4 + (0x17D << 2)
label_1dba5c:
    if (ctx->pc == 0x1DBA5Cu) {
        ctx->pc = 0x1DBA60u;
        goto label_1dba60;
    }
    ctx->pc = 0x1DBA58u;
    {
        const bool branch_taken_0x1dba58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dba58) {
            ctx->pc = 0x1DC050u;
            { ctx->pc = 0x1dc050; return; }
        }
    }
    ctx->pc = 0x1DBA60u;
label_1dba60:
    // 0x1dba60: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x1dba60u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1dba64:
    // 0x1dba64: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1dba64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_1dba68:
    // 0x1dba68: 0x104000b7  beqz        $v0, . + 4 + (0xB7 << 2)
label_1dba6c:
    if (ctx->pc == 0x1DBA6Cu) {
        ctx->pc = 0x1DBA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBA68u;
        // 0x1dba6c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBA70u;
        goto label_1dba70;
    }
    ctx->pc = 0x1DBA68u;
    {
        const bool branch_taken_0x1dba68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBA68u;
        // 0x1dba6c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dba68) {
            ctx->pc = 0x1DBD48u;
            goto label_1dbd48;
        }
    }
    ctx->pc = 0x1DBA70u;
label_1dba70:
    // 0x1dba70: 0xc05b420  jal         func_16D080
label_1dba74:
    if (ctx->pc == 0x1DBA74u) {
        ctx->pc = 0x1DBA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBA70u;
        // 0x1dba74: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBA78u;
        goto label_1dba78;
    }
    ctx->pc = 0x1DBA70u;
    SET_GPR_U32(ctx, 31, 0x1DBA78u);
    ctx->pc = 0x1DBA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBA70u;
    // 0x1dba74: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1DBA70u, 0x1DBA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBA78u;
label_1dba78:
    // 0x1dba78: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1dba78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1dba7c:
    // 0x1dba7c: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1dba7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1dba80:
    // 0x1dba80: 0x100000ab  b           . + 4 + (0xAB << 2)
label_1dba84:
    if (ctx->pc == 0x1DBA84u) {
        ctx->pc = 0x1DBA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBA80u;
        // 0x1dba84: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBA88u;
        goto label_1dba88;
    }
    ctx->pc = 0x1DBA80u;
    {
        const bool branch_taken_0x1dba80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBA80u;
        // 0x1dba84: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dba80) {
            ctx->pc = 0x1DBD30u;
            goto label_1dbd30;
        }
    }
    ctx->pc = 0x1DBA88u;
label_1dba88:
    // 0x1dba88: 0xdf8287d0  ld          $v0, -0x7830($gp)
    ctx->pc = 0x1dba88u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
label_1dba8c:
    // 0x1dba8c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1dba90:
    if (ctx->pc == 0x1DBA90u) {
        ctx->pc = 0x1DBA94u;
        goto label_1dba94;
    }
    ctx->pc = 0x1DBA8Cu;
    {
        const bool branch_taken_0x1dba8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dba8c) {
            ctx->pc = 0x1DBA9Cu;
            goto label_1dba9c;
        }
    }
    ctx->pc = 0x1DBA94u;
label_1dba94:
    // 0x1dba94: 0x10000005  b           . + 4 + (0x5 << 2)
label_1dba98:
    if (ctx->pc == 0x1DBA98u) {
        ctx->pc = 0x1DBA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBA94u;
        // 0x1dba98: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBA9Cu;
        goto label_1dba9c;
    }
    ctx->pc = 0x1DBA94u;
    {
        const bool branch_taken_0x1dba94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBA94u;
        // 0x1dba98: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dba94) {
            ctx->pc = 0x1DBAACu;
            goto label_1dbaac;
        }
    }
    ctx->pc = 0x1DBA9Cu;
label_1dba9c:
    // 0x1dba9c: 0x0  nop
    ctx->pc = 0x1dba9cu;
    // NOP
label_1dbaa0:
    // 0x1dbaa0: 0x8f828cf4  lw          $v0, -0x730C($gp)
    ctx->pc = 0x1dbaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
label_1dbaa4:
    // 0x1dbaa4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dbaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dbaa8:
    // 0x1dbaa8: 0xaf828cf4  sw          $v0, -0x730C($gp)
    ctx->pc = 0x1dbaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 2));
label_1dbaac:
    // 0x1dbaac: 0x0  nop
    ctx->pc = 0x1dbaacu;
    // NOP
label_1dbab0:
    // 0x1dbab0: 0x8f828cd4  lw          $v0, -0x732C($gp)
    ctx->pc = 0x1dbab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937812)));
label_1dbab4:
    // 0x1dbab4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1dbab8:
    if (ctx->pc == 0x1DBAB8u) {
        ctx->pc = 0x1DBABCu;
        goto label_1dbabc;
    }
    ctx->pc = 0x1DBAB4u;
    {
        const bool branch_taken_0x1dbab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbab4) {
            ctx->pc = 0x1DBAC8u;
            goto label_1dbac8;
        }
    }
    ctx->pc = 0x1DBABCu;
label_1dbabc:
    // 0x1dbabc: 0x8f828cd0  lw          $v0, -0x7330($gp)
    ctx->pc = 0x1dbabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937808)));
label_1dbac0:
    // 0x1dbac0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dbac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dbac4:
    // 0x1dbac4: 0xaf828cd0  sw          $v0, -0x7330($gp)
    ctx->pc = 0x1dbac4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937808), GPR_U32(ctx, 2));
label_1dbac8:
    // 0x1dbac8: 0x8f828cc4  lw          $v0, -0x733C($gp)
    ctx->pc = 0x1dbac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937796)));
label_1dbacc:
    // 0x1dbacc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1dbad0:
    if (ctx->pc == 0x1DBAD0u) {
        ctx->pc = 0x1DBAD4u;
        goto label_1dbad4;
    }
    ctx->pc = 0x1DBACCu;
    {
        const bool branch_taken_0x1dbacc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbacc) {
            ctx->pc = 0x1DBB30u;
            goto label_1dbb30;
        }
    }
    ctx->pc = 0x1DBAD4u;
label_1dbad4:
    // 0x1dbad4: 0x8f828cc0  lw          $v0, -0x7340($gp)
    ctx->pc = 0x1dbad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937792)));
label_1dbad8:
    // 0x1dbad8: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1dbad8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1dbadc:
    // 0x1dbadc: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1dbae0:
    if (ctx->pc == 0x1DBAE0u) {
        ctx->pc = 0x1DBAE4u;
        goto label_1dbae4;
    }
    ctx->pc = 0x1DBADCu;
    {
        const bool branch_taken_0x1dbadc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbadc) {
            ctx->pc = 0x1DBB04u;
            goto label_1dbb04;
        }
    }
    ctx->pc = 0x1DBAE4u;
label_1dbae4:
    // 0x1dbae4: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1dbae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_1dbae8:
    // 0x1dbae8: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1dbae8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1dbaec:
    // 0x1dbaec: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1dbaf0:
    if (ctx->pc == 0x1DBAF0u) {
        ctx->pc = 0x1DBAF4u;
        goto label_1dbaf4;
    }
    ctx->pc = 0x1DBAECu;
    {
        const bool branch_taken_0x1dbaec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbaec) {
            ctx->pc = 0x1DBAFCu;
            goto label_1dbafc;
        }
    }
    ctx->pc = 0x1DBAF4u;
label_1dbaf4:
    // 0x1dbaf4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1dbaf8:
    if (ctx->pc == 0x1DBAF8u) {
        ctx->pc = 0x1DBAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBAF4u;
        // 0x1dbaf8: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBAFCu;
        goto label_1dbafc;
    }
    ctx->pc = 0x1DBAF4u;
    {
        const bool branch_taken_0x1dbaf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBAF4u;
        // 0x1dbaf8: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbaf4) {
            ctx->pc = 0x1DBB04u;
            goto label_1dbb04;
        }
    }
    ctx->pc = 0x1DBAFCu;
label_1dbafc:
    // 0x1dbafc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1dbafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1dbb00:
    // 0x1dbb00: 0xaf828cc0  sw          $v0, -0x7340($gp)
    ctx->pc = 0x1dbb00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
label_1dbb04:
    // 0x1dbb04: 0x0  nop
    ctx->pc = 0x1dbb04u;
    // NOP
label_1dbb08:
    // 0x1dbb08: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1dbb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1dbb0c:
    // 0x1dbb0c: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
label_1dbb10:
    if (ctx->pc == 0x1DBB10u) {
        ctx->pc = 0x1DBB14u;
        goto label_1dbb14;
    }
    ctx->pc = 0x1DBB0Cu;
    {
        const bool branch_taken_0x1dbb0c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1dbb0c) {
            ctx->pc = 0x1DBB30u;
            goto label_1dbb30;
        }
    }
    ctx->pc = 0x1DBB14u;
label_1dbb14:
    // 0x1dbb14: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1dbb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1dbb18:
    // 0x1dbb18: 0xaf828cb0  sw          $v0, -0x7350($gp)
    ctx->pc = 0x1dbb18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 2));
label_1dbb1c:
    // 0x1dbb1c: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1dbb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1dbb20:
    // 0x1dbb20: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1dbb24:
    if (ctx->pc == 0x1DBB24u) {
        ctx->pc = 0x1DBB28u;
        goto label_1dbb28;
    }
    ctx->pc = 0x1DBB20u;
    {
        const bool branch_taken_0x1dbb20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dbb20) {
            ctx->pc = 0x1DBB30u;
            goto label_1dbb30;
        }
    }
    ctx->pc = 0x1DBB28u;
label_1dbb28:
    // 0x1dbb28: 0x8f828ca8  lw          $v0, -0x7358($gp)
    ctx->pc = 0x1dbb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937768)));
label_1dbb2c:
    // 0x1dbb2c: 0xaf828cb4  sw          $v0, -0x734C($gp)
    ctx->pc = 0x1dbb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937780), GPR_U32(ctx, 2));
label_1dbb30:
    // 0x1dbb30: 0xc077a7c  jal         func_1DE9F0
label_1dbb34:
    if (ctx->pc == 0x1DBB34u) {
        ctx->pc = 0x1DBB38u;
        goto label_1dbb38;
    }
    ctx->pc = 0x1DBB30u;
    SET_GPR_U32(ctx, 31, 0x1DBB38u);
    ctx->pc = 0x1DE9F0u;
    { ctx->pc = 0x1de9f0; return; }
    ctx->pc = 0x1DBB38u;
label_1dbb38:
    // 0x1dbb38: 0x8f848ca0  lw          $a0, -0x7360($gp)
    ctx->pc = 0x1dbb38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937760)));
label_1dbb3c:
    // 0x1dbb3c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1dbb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1dbb40:
    // 0x1dbb40: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
label_1dbb44:
    if (ctx->pc == 0x1DBB44u) {
        ctx->pc = 0x1DBB48u;
        goto label_1dbb48;
    }
    ctx->pc = 0x1DBB40u;
    {
        const bool branch_taken_0x1dbb40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1dbb40) {
            ctx->pc = 0x1DBBC4u;
            goto label_1dbbc4;
        }
    }
    ctx->pc = 0x1DBB48u;
label_1dbb48:
    // 0x1dbb48: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1dbb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1dbb4c:
    // 0x1dbb4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dbb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dbb50:
    // 0x1dbb50: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_1dbb54:
    if (ctx->pc == 0x1DBB54u) {
        ctx->pc = 0x1DBB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBB50u;
        // 0x1dbb54: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBB58u;
        goto label_1dbb58;
    }
    ctx->pc = 0x1DBB50u;
    {
        const bool branch_taken_0x1dbb50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DBB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBB50u;
        // 0x1dbb54: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbb50) {
            ctx->pc = 0x1DBB74u;
            goto label_1dbb74;
        }
    }
    ctx->pc = 0x1DBB58u;
label_1dbb58:
    // 0x1dbb58: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1dbb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1dbb5c:
    // 0x1dbb5c: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x1dbb5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_1dbb60:
    // 0x1dbb60: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_1dbb64:
    if (ctx->pc == 0x1DBB64u) {
        ctx->pc = 0x1DBB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBB60u;
        // 0x1dbb64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBB68u;
        goto label_1dbb68;
    }
    ctx->pc = 0x1DBB60u;
    {
        const bool branch_taken_0x1dbb60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DBB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBB60u;
        // 0x1dbb64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbb60) {
            ctx->pc = 0x1DBBC4u;
            goto label_1dbbc4;
        }
    }
    ctx->pc = 0x1DBB68u;
label_1dbb68:
    // 0x1dbb68: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1dbb68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1dbb6c:
    // 0x1dbb6c: 0x10000015  b           . + 4 + (0x15 << 2)
label_1dbb70:
    if (ctx->pc == 0x1DBB70u) {
        ctx->pc = 0x1DBB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBB6Cu;
        // 0x1dbb70: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBB74u;
        goto label_1dbb74;
    }
    ctx->pc = 0x1DBB6Cu;
    {
        const bool branch_taken_0x1dbb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBB6Cu;
        // 0x1dbb70: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbb6c) {
            ctx->pc = 0x1DBBC4u;
            goto label_1dbbc4;
        }
    }
    ctx->pc = 0x1DBB74u;
label_1dbb74:
    // 0x1dbb74: 0x0  nop
    ctx->pc = 0x1dbb74u;
    // NOP
label_1dbb78:
    // 0x1dbb78: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1dbb78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dbb7c:
    // 0x1dbb7c: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
label_1dbb80:
    if (ctx->pc == 0x1DBB80u) {
        ctx->pc = 0x1DBB84u;
        goto label_1dbb84;
    }
    ctx->pc = 0x1DBB7Cu;
    {
        const bool branch_taken_0x1dbb7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dbb7c) {
            ctx->pc = 0x1DBBA0u;
            goto label_1dbba0;
        }
    }
    ctx->pc = 0x1DBB84u;
label_1dbb84:
    // 0x1dbb84: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1dbb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1dbb88:
    // 0x1dbb88: 0x28420030  slti        $v0, $v0, 0x30
    ctx->pc = 0x1dbb88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
label_1dbb8c:
    // 0x1dbb8c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1dbb90:
    if (ctx->pc == 0x1DBB90u) {
        ctx->pc = 0x1DBB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBB8Cu;
        // 0x1dbb90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBB94u;
        goto label_1dbb94;
    }
    ctx->pc = 0x1DBB8Cu;
    {
        const bool branch_taken_0x1dbb8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DBB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBB8Cu;
        // 0x1dbb90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbb8c) {
            ctx->pc = 0x1DBBC4u;
            goto label_1dbbc4;
        }
    }
    ctx->pc = 0x1DBB94u;
label_1dbb94:
    // 0x1dbb94: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1dbb94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1dbb98:
    // 0x1dbb98: 0x1000000a  b           . + 4 + (0xA << 2)
label_1dbb9c:
    if (ctx->pc == 0x1DBB9Cu) {
        ctx->pc = 0x1DBB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBB98u;
        // 0x1dbb9c: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBBA0u;
        goto label_1dbba0;
    }
    ctx->pc = 0x1DBB98u;
    {
        const bool branch_taken_0x1dbb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBB98u;
        // 0x1dbb9c: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbb98) {
            ctx->pc = 0x1DBBC4u;
            goto label_1dbbc4;
        }
    }
    ctx->pc = 0x1DBBA0u;
label_1dbba0:
    // 0x1dbba0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1dbba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1dbba4:
    // 0x1dbba4: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
label_1dbba8:
    if (ctx->pc == 0x1DBBA8u) {
        ctx->pc = 0x1DBBACu;
        goto label_1dbbac;
    }
    ctx->pc = 0x1DBBA4u;
    {
        const bool branch_taken_0x1dbba4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dbba4) {
            ctx->pc = 0x1DBBC4u;
            goto label_1dbbc4;
        }
    }
    ctx->pc = 0x1DBBACu;
label_1dbbac:
    // 0x1dbbac: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1dbbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1dbbb0:
    // 0x1dbbb0: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x1dbbb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_1dbbb4:
    // 0x1dbbb4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1dbbb8:
    if (ctx->pc == 0x1DBBB8u) {
        ctx->pc = 0x1DBBBCu;
        goto label_1dbbbc;
    }
    ctx->pc = 0x1DBBB4u;
    {
        const bool branch_taken_0x1dbbb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dbbb4) {
            ctx->pc = 0x1DBBC4u;
            goto label_1dbbc4;
        }
    }
    ctx->pc = 0x1DBBBCu;
label_1dbbbc:
    // 0x1dbbbc: 0xaf838ca0  sw          $v1, -0x7360($gp)
    ctx->pc = 0x1dbbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 3));
label_1dbbc0:
    // 0x1dbbc0: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1dbbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1dbbc4:
    // 0x1dbbc4: 0x0  nop
    ctx->pc = 0x1dbbc4u;
    // NOP
label_1dbbc8:
    // 0x1dbbc8: 0xc07a9d8  jal         func_1EA760
label_1dbbcc:
    if (ctx->pc == 0x1DBBCCu) {
        ctx->pc = 0x1DBBD0u;
        goto label_1dbbd0;
    }
    ctx->pc = 0x1DBBC8u;
    SET_GPR_U32(ctx, 31, 0x1DBBD0u);
    ctx->pc = 0x1EA760u;
    { ctx->pc = 0x1ea760; return; }
    ctx->pc = 0x1DBBD0u;
label_1dbbd0:
    // 0x1dbbd0: 0xc04e168  jal         func_1385A0
label_1dbbd4:
    if (ctx->pc == 0x1DBBD4u) {
        ctx->pc = 0x1DBBD8u;
        goto label_1dbbd8;
    }
    ctx->pc = 0x1DBBD0u;
    SET_GPR_U32(ctx, 31, 0x1DBBD8u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x1DBBD0u, 0x1DBBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBBD8u;
label_1dbbd8:
    // 0x1dbbd8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1dbbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_1dbbdc:
    // 0x1dbbdc: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1dbbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1dbbe0:
    // 0x1dbbe0: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x1dbbe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_1dbbe4:
    // 0x1dbbe4: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1dbbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1dbbe8:
    // 0x1dbbe8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1dbbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1dbbec:
    // 0x1dbbec: 0x27828ce0  addiu       $v0, $gp, -0x7320
    ctx->pc = 0x1dbbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937824));
label_1dbbf0:
    // 0x1dbbf0: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1dbbf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1dbbf4:
    // 0x1dbbf4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dbbf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dbbf8:
    // 0x1dbbf8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dbbf8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dbbfc:
    // 0x1dbbfc: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1dbbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1dbc00:
    // 0x1dbc00: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dbc00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dbc04:
    // 0x1dbc04: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1dbc04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1dbc08:
    // 0x1dbc08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dbc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dbc0c:
    // 0x1dbc0c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dbc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dbc10:
    // 0x1dbc10: 0xc066c72  jal         func_19B1C8
label_1dbc14:
    if (ctx->pc == 0x1DBC14u) {
        ctx->pc = 0x1DBC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBC10u;
        // 0x1dbc14: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBC18u;
        goto label_1dbc18;
    }
    ctx->pc = 0x1DBC10u;
    SET_GPR_U32(ctx, 31, 0x1DBC18u);
    ctx->pc = 0x1DBC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBC10u;
    // 0x1dbc14: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1DBC10u, 0x1DBC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC18u;
label_1dbc18:
    // 0x1dbc18: 0xc077e84  jal         func_1DFA10
label_1dbc1c:
    if (ctx->pc == 0x1DBC1Cu) {
        ctx->pc = 0x1DBC20u;
        goto label_1dbc20;
    }
    ctx->pc = 0x1DBC18u;
    SET_GPR_U32(ctx, 31, 0x1DBC20u);
    ctx->pc = 0x1DFA10u;
    { ctx->pc = 0x1dfa10; return; }
    ctx->pc = 0x1DBC20u;
label_1dbc20:
    // 0x1dbc20: 0xc077d90  jal         func_1DF640
label_1dbc24:
    if (ctx->pc == 0x1DBC24u) {
        ctx->pc = 0x1DBC28u;
        goto label_1dbc28;
    }
    ctx->pc = 0x1DBC20u;
    SET_GPR_U32(ctx, 31, 0x1DBC28u);
    ctx->pc = 0x1DF640u;
    { ctx->pc = 0x1df640; return; }
    ctx->pc = 0x1DBC28u;
label_1dbc28:
    // 0x1dbc28: 0xc077ab4  jal         func_1DEAD0
label_1dbc2c:
    if (ctx->pc == 0x1DBC2Cu) {
        ctx->pc = 0x1DBC30u;
        goto label_1dbc30;
    }
    ctx->pc = 0x1DBC28u;
    SET_GPR_U32(ctx, 31, 0x1DBC30u);
    ctx->pc = 0x1DEAD0u;
    { ctx->pc = 0x1dead0; return; }
    ctx->pc = 0x1DBC30u;
label_1dbc30:
    // 0x1dbc30: 0xc077880  jal         func_1DE200
label_1dbc34:
    if (ctx->pc == 0x1DBC34u) {
        ctx->pc = 0x1DBC38u;
        goto label_1dbc38;
    }
    ctx->pc = 0x1DBC30u;
    SET_GPR_U32(ctx, 31, 0x1DBC38u);
    ctx->pc = 0x1DE200u;
    { ctx->pc = 0x1de200; return; }
    ctx->pc = 0x1DBC38u;
label_1dbc38:
    // 0x1dbc38: 0x8f828c8c  lw          $v0, -0x7374($gp)
    ctx->pc = 0x1dbc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937740)));
label_1dbc3c:
    // 0x1dbc3c: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_1dbc40:
    if (ctx->pc == 0x1DBC40u) {
        ctx->pc = 0x1DBC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBC3Cu;
        // 0x1dbc40: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBC44u;
        goto label_1dbc44;
    }
    ctx->pc = 0x1DBC3Cu;
    {
        const bool branch_taken_0x1dbc3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBC3Cu;
        // 0x1dbc40: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbc3c) {
            ctx->pc = 0x1DBD10u;
            goto label_1dbd10;
        }
    }
    ctx->pc = 0x1DBC44u;
label_1dbc44:
    // 0x1dbc44: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1dbc44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1dbc48:
    // 0x1dbc48: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1dbc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1dbc4c:
    // 0x1dbc4c: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1dbc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1dbc50:
    // 0x1dbc50: 0x27828c90  addiu       $v0, $gp, -0x7370
    ctx->pc = 0x1dbc50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937744));
label_1dbc54:
    // 0x1dbc54: 0x2406027a  addiu       $a2, $zero, 0x27A
    ctx->pc = 0x1dbc54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 634));
label_1dbc58:
    // 0x1dbc58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dbc58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dbc5c:
    // 0x1dbc5c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dbc5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dbc60:
    // 0x1dbc60: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1dbc60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dbc64:
    // 0x1dbc64: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1dbc64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1dbc68:
    // 0x1dbc68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dbc68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dbc6c:
    // 0x1dbc6c: 0x858821  addu        $s1, $a0, $a1
    ctx->pc = 0x1dbc6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1dbc70:
    // 0x1dbc70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dbc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dbc74:
    // 0x1dbc74: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dbc74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dbc78:
    // 0x1dbc78: 0xc066c72  jal         func_19B1C8
label_1dbc7c:
    if (ctx->pc == 0x1DBC7Cu) {
        ctx->pc = 0x1DBC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBC78u;
        // 0x1dbc7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBC80u;
        goto label_1dbc80;
    }
    ctx->pc = 0x1DBC78u;
    SET_GPR_U32(ctx, 31, 0x1DBC80u);
    ctx->pc = 0x1DBC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBC78u;
    // 0x1dbc7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1DBC78u, 0x1DBC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC80u;
label_1dbc80:
    // 0x1dbc80: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1dbc80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1dbc84:
    // 0x1dbc84: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1dbc84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1dbc88:
    // 0x1dbc88: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1dbc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1dbc8c:
    // 0x1dbc8c: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1dbc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1dbc90:
    // 0x1dbc90: 0x8f848c80  lw          $a0, -0x7380($gp)
    ctx->pc = 0x1dbc90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937728)));
label_1dbc94:
    // 0x1dbc94: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dbc94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dbc98:
    // 0x1dbc98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dbc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dbc9c:
    // 0x1dbc9c: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x1dbc9cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dbca0:
    // 0x1dbca0: 0xc070e2c  jal         func_1C38B0
label_1dbca4:
    if (ctx->pc == 0x1DBCA4u) {
        ctx->pc = 0x1DBCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBCA0u;
        // 0x1dbca4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBCA8u;
        goto label_1dbca8;
    }
    ctx->pc = 0x1DBCA0u;
    SET_GPR_U32(ctx, 31, 0x1DBCA8u);
    ctx->pc = 0x1DBCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBCA0u;
    // 0x1dbca4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1DBCA8u;
label_1dbca8:
    // 0x1dbca8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1dbca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1dbcac:
    // 0x1dbcac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dbcacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dbcb0:
    // 0x1dbcb0: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1dbcb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1dbcb4:
    // 0x1dbcb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dbcb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dbcb8:
    // 0x1dbcb8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dbcb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dbcbc:
    // 0x1dbcbc: 0xc066c72  jal         func_19B1C8
label_1dbcc0:
    if (ctx->pc == 0x1DBCC0u) {
        ctx->pc = 0x1DBCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBCBCu;
        // 0x1dbcc0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBCC4u;
        goto label_1dbcc4;
    }
    ctx->pc = 0x1DBCBCu;
    SET_GPR_U32(ctx, 31, 0x1DBCC4u);
    ctx->pc = 0x1DBCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBCBCu;
    // 0x1dbcc0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1DBCBCu, 0x1DBCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBCC4u;
label_1dbcc4:
    // 0x1dbcc4: 0x8f828c88  lw          $v0, -0x7378($gp)
    ctx->pc = 0x1dbcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937736)));
label_1dbcc8:
    // 0x1dbcc8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1dbccc:
    if (ctx->pc == 0x1DBCCCu) {
        ctx->pc = 0x1DBCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBCC8u;
        // 0x1dbccc: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBCD0u;
        goto label_1dbcd0;
    }
    ctx->pc = 0x1DBCC8u;
    {
        const bool branch_taken_0x1dbcc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBCC8u;
        // 0x1dbccc: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbcc8) {
            ctx->pc = 0x1DBD10u;
            goto label_1dbd10;
        }
    }
    ctx->pc = 0x1DBCD0u;
label_1dbcd0:
    // 0x1dbcd0: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1dbcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1dbcd4:
    // 0x1dbcd4: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1dbcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1dbcd8:
    // 0x1dbcd8: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1dbcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1dbcdc:
    // 0x1dbcdc: 0x8f848c84  lw          $a0, -0x737C($gp)
    ctx->pc = 0x1dbcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937732)));
label_1dbce0:
    // 0x1dbce0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dbce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dbce4:
    // 0x1dbce4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dbce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dbce8:
    // 0x1dbce8: 0x8c540008  lw          $s4, 0x8($v0)
    ctx->pc = 0x1dbce8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1dbcec:
    // 0x1dbcec: 0xc070e2c  jal         func_1C38B0
label_1dbcf0:
    if (ctx->pc == 0x1DBCF0u) {
        ctx->pc = 0x1DBCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBCECu;
        // 0x1dbcf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBCF4u;
        goto label_1dbcf4;
    }
    ctx->pc = 0x1DBCECu;
    SET_GPR_U32(ctx, 31, 0x1DBCF4u);
    ctx->pc = 0x1DBCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBCECu;
    // 0x1dbcf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1DBCF4u;
label_1dbcf4:
    // 0x1dbcf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dbcf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dbcf8:
    // 0x1dbcf8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1dbcf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1dbcfc:
    // 0x1dbcfc: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1dbcfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1dbd00:
    // 0x1dbd00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dbd00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dbd04:
    // 0x1dbd04: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dbd04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dbd08:
    // 0x1dbd08: 0xc066c72  jal         func_19B1C8
label_1dbd0c:
    if (ctx->pc == 0x1DBD0Cu) {
        ctx->pc = 0x1DBD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD08u;
        // 0x1dbd0c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBD10u;
        goto label_1dbd10;
    }
    ctx->pc = 0x1DBD08u;
    SET_GPR_U32(ctx, 31, 0x1DBD10u);
    ctx->pc = 0x1DBD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD08u;
    // 0x1dbd0c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1DBD08u, 0x1DBD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBD10u;
label_1dbd10:
    // 0x1dbd10: 0xc07a86c  jal         func_1EA1B0
label_1dbd14:
    if (ctx->pc == 0x1DBD14u) {
        ctx->pc = 0x1DBD18u;
        goto label_1dbd18;
    }
    ctx->pc = 0x1DBD10u;
    SET_GPR_U32(ctx, 31, 0x1DBD18u);
    ctx->pc = 0x1EA1B0u;
    { ctx->pc = 0x1ea1b0; return; }
    ctx->pc = 0x1DBD18u;
label_1dbd18:
    // 0x1dbd18: 0xc04e120  jal         func_138480
label_1dbd1c:
    if (ctx->pc == 0x1DBD1Cu) {
        ctx->pc = 0x1DBD20u;
        goto label_1dbd20;
    }
    ctx->pc = 0x1DBD18u;
    SET_GPR_U32(ctx, 31, 0x1DBD20u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x1DBD18u, 0x1DBD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBD20u;
label_1dbd20:
    // 0x1dbd20: 0xc05b578  jal         func_16D5E0
label_1dbd24:
    if (ctx->pc == 0x1DBD24u) {
        ctx->pc = 0x1DBD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD20u;
        // 0x1dbd24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBD28u;
        goto label_1dbd28;
    }
    ctx->pc = 0x1DBD20u;
    SET_GPR_U32(ctx, 31, 0x1DBD28u);
    ctx->pc = 0x1DBD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD20u;
    // 0x1dbd24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1DBD20u, 0x1DBD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBD28u;
label_1dbd28:
    // 0x1dbd28: 0xc060258  jal         func_180960
label_1dbd2c:
    if (ctx->pc == 0x1DBD2Cu) {
        ctx->pc = 0x1DBD30u;
        goto label_1dbd30;
    }
    ctx->pc = 0x1DBD28u;
    SET_GPR_U32(ctx, 31, 0x1DBD30u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1DBD28u, 0x1DBD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBD30u;
label_1dbd30:
    // 0x1dbd30: 0x8f838ca0  lw          $v1, -0x7360($gp)
    ctx->pc = 0x1dbd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937760)));
label_1dbd34:
    // 0x1dbd34: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1dbd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1dbd38:
    // 0x1dbd38: 0x1062ff53  beq         $v1, $v0, . + 4 + (-0xAD << 2)
label_1dbd3c:
    if (ctx->pc == 0x1DBD3Cu) {
        ctx->pc = 0x1DBD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD38u;
        // 0x1dbd3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBD40u;
        goto label_1dbd40;
    }
    ctx->pc = 0x1DBD38u;
    {
        const bool branch_taken_0x1dbd38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DBD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD38u;
        // 0x1dbd3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbd38) {
            ctx->pc = 0x1DBA88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dba88;
        }
    }
    ctx->pc = 0x1DBD40u;
label_1dbd40:
    // 0x1dbd40: 0x100000c3  b           . + 4 + (0xC3 << 2)
label_1dbd44:
    if (ctx->pc == 0x1DBD44u) {
        ctx->pc = 0x1DBD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD40u;
        // 0x1dbd44: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBD48u;
        goto label_1dbd48;
    }
    ctx->pc = 0x1DBD40u;
    {
        const bool branch_taken_0x1dbd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD40u;
        // 0x1dbd44: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbd40) {
            ctx->pc = 0x1DC050u;
            { ctx->pc = 0x1dc050; return; }
        }
    }
    ctx->pc = 0x1DBD48u;
label_1dbd48:
    // 0x1dbd48: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x1dbd48u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1dbd4c:
    // 0x1dbd4c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1dbd4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_1dbd50:
    // 0x1dbd50: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1dbd54:
    if (ctx->pc == 0x1DBD54u) {
        ctx->pc = 0x1DBD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD50u;
        // 0x1dbd54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBD58u;
        goto label_1dbd58;
    }
    ctx->pc = 0x1DBD50u;
    {
        const bool branch_taken_0x1dbd50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD50u;
        // 0x1dbd54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbd50) {
            ctx->pc = 0x1DBD74u;
            goto label_1dbd74;
        }
    }
    ctx->pc = 0x1DBD58u;
label_1dbd58:
    // 0x1dbd58: 0x16020011  bne         $s0, $v0, . + 4 + (0x11 << 2)
label_1dbd5c:
    if (ctx->pc == 0x1DBD5Cu) {
        ctx->pc = 0x1DBD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD58u;
        // 0x1dbd5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBD60u;
        goto label_1dbd60;
    }
    ctx->pc = 0x1DBD58u;
    {
        const bool branch_taken_0x1dbd58 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DBD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD58u;
        // 0x1dbd5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbd58) {
            ctx->pc = 0x1DBDA0u;
            goto label_1dbda0;
        }
    }
    ctx->pc = 0x1DBD60u;
label_1dbd60:
    // 0x1dbd60: 0xc05b420  jal         func_16D080
label_1dbd64:
    if (ctx->pc == 0x1DBD64u) {
        ctx->pc = 0x1DBD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD60u;
        // 0x1dbd64: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBD68u;
        goto label_1dbd68;
    }
    ctx->pc = 0x1DBD60u;
    SET_GPR_U32(ctx, 31, 0x1DBD68u);
    ctx->pc = 0x1DBD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD60u;
    // 0x1dbd64: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1DBD60u, 0x1DBD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBD68u;
label_1dbd68:
    // 0x1dbd68: 0xaf808c98  sw          $zero, -0x7368($gp)
    ctx->pc = 0x1dbd68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937752), GPR_U32(ctx, 0));
label_1dbd6c:
    // 0x1dbd6c: 0x1000000c  b           . + 4 + (0xC << 2)
label_1dbd70:
    if (ctx->pc == 0x1DBD70u) {
        ctx->pc = 0x1DBD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD6Cu;
        // 0x1dbd70: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBD74u;
        goto label_1dbd74;
    }
    ctx->pc = 0x1DBD6Cu;
    {
        const bool branch_taken_0x1dbd6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD6Cu;
        // 0x1dbd70: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbd6c) {
            ctx->pc = 0x1DBDA0u;
            goto label_1dbda0;
        }
    }
    ctx->pc = 0x1DBD74u;
label_1dbd74:
    // 0x1dbd74: 0x0  nop
    ctx->pc = 0x1dbd74u;
    // NOP
label_1dbd78:
    // 0x1dbd78: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x1dbd78u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1dbd7c:
    // 0x1dbd7c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1dbd7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_1dbd80:
    // 0x1dbd80: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1dbd84:
    if (ctx->pc == 0x1DBD84u) {
        ctx->pc = 0x1DBD88u;
        goto label_1dbd88;
    }
    ctx->pc = 0x1DBD80u;
    {
        const bool branch_taken_0x1dbd80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbd80) {
            ctx->pc = 0x1DBDA0u;
            goto label_1dbda0;
        }
    }
    ctx->pc = 0x1DBD88u;
label_1dbd88:
    // 0x1dbd88: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_1dbd8c:
    if (ctx->pc == 0x1DBD8Cu) {
        ctx->pc = 0x1DBD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD88u;
        // 0x1dbd8c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBD90u;
        goto label_1dbd90;
    }
    ctx->pc = 0x1DBD88u;
    {
        const bool branch_taken_0x1dbd88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DBD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD88u;
        // 0x1dbd8c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbd88) {
            ctx->pc = 0x1DBDA0u;
            goto label_1dbda0;
        }
    }
    ctx->pc = 0x1DBD90u;
label_1dbd90:
    // 0x1dbd90: 0xc05b420  jal         func_16D080
label_1dbd94:
    if (ctx->pc == 0x1DBD94u) {
        ctx->pc = 0x1DBD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD90u;
        // 0x1dbd94: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBD98u;
        goto label_1dbd98;
    }
    ctx->pc = 0x1DBD90u;
    SET_GPR_U32(ctx, 31, 0x1DBD98u);
    ctx->pc = 0x1DBD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD90u;
    // 0x1dbd94: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1DBD90u, 0x1DBD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBD98u;
label_1dbd98:
    // 0x1dbd98: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1dbd98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dbd9c:
    // 0x1dbd9c: 0xaf908c98  sw          $s0, -0x7368($gp)
    ctx->pc = 0x1dbd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937752), GPR_U32(ctx, 16));
label_1dbda0:
    // 0x1dbda0: 0xdf8287d0  ld          $v0, -0x7830($gp)
    ctx->pc = 0x1dbda0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
label_1dbda4:
    // 0x1dbda4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1dbda8:
    if (ctx->pc == 0x1DBDA8u) {
        ctx->pc = 0x1DBDACu;
        goto label_1dbdac;
    }
    ctx->pc = 0x1DBDA4u;
    {
        const bool branch_taken_0x1dbda4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbda4) {
            ctx->pc = 0x1DBDB4u;
            goto label_1dbdb4;
        }
    }
    ctx->pc = 0x1DBDACu;
label_1dbdac:
    // 0x1dbdac: 0x10000005  b           . + 4 + (0x5 << 2)
label_1dbdb0:
    if (ctx->pc == 0x1DBDB0u) {
        ctx->pc = 0x1DBDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBDACu;
        // 0x1dbdb0: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBDB4u;
        goto label_1dbdb4;
    }
    ctx->pc = 0x1DBDACu;
    {
        const bool branch_taken_0x1dbdac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBDACu;
        // 0x1dbdb0: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbdac) {
            ctx->pc = 0x1DBDC4u;
            goto label_1dbdc4;
        }
    }
    ctx->pc = 0x1DBDB4u;
label_1dbdb4:
    // 0x1dbdb4: 0x0  nop
    ctx->pc = 0x1dbdb4u;
    // NOP
label_1dbdb8:
    // 0x1dbdb8: 0x8f828cf4  lw          $v0, -0x730C($gp)
    ctx->pc = 0x1dbdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
label_1dbdbc:
    // 0x1dbdbc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dbdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dbdc0:
    // 0x1dbdc0: 0xaf828cf4  sw          $v0, -0x730C($gp)
    ctx->pc = 0x1dbdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 2));
label_1dbdc4:
    // 0x1dbdc4: 0x0  nop
    ctx->pc = 0x1dbdc4u;
    // NOP
label_1dbdc8:
    // 0x1dbdc8: 0x8f828cd4  lw          $v0, -0x732C($gp)
    ctx->pc = 0x1dbdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937812)));
label_1dbdcc:
    // 0x1dbdcc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1dbdd0:
    if (ctx->pc == 0x1DBDD0u) {
        ctx->pc = 0x1DBDD4u;
        goto label_1dbdd4;
    }
    ctx->pc = 0x1DBDCCu;
    {
        const bool branch_taken_0x1dbdcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbdcc) {
            ctx->pc = 0x1DBDE0u;
            goto label_1dbde0;
        }
    }
    ctx->pc = 0x1DBDD4u;
label_1dbdd4:
    // 0x1dbdd4: 0x8f828cd0  lw          $v0, -0x7330($gp)
    ctx->pc = 0x1dbdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937808)));
label_1dbdd8:
    // 0x1dbdd8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dbdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dbddc:
    // 0x1dbddc: 0xaf828cd0  sw          $v0, -0x7330($gp)
    ctx->pc = 0x1dbddcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937808), GPR_U32(ctx, 2));
label_1dbde0:
    // 0x1dbde0: 0x8f828cc4  lw          $v0, -0x733C($gp)
    ctx->pc = 0x1dbde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937796)));
label_1dbde4:
    // 0x1dbde4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1dbde8:
    if (ctx->pc == 0x1DBDE8u) {
        ctx->pc = 0x1DBDECu;
        goto label_1dbdec;
    }
    ctx->pc = 0x1DBDE4u;
    {
        const bool branch_taken_0x1dbde4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbde4) {
            ctx->pc = 0x1DBE48u;
            goto label_1dbe48;
        }
    }
    ctx->pc = 0x1DBDECu;
label_1dbdec:
    // 0x1dbdec: 0x8f828cc0  lw          $v0, -0x7340($gp)
    ctx->pc = 0x1dbdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937792)));
label_1dbdf0:
    // 0x1dbdf0: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1dbdf0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1dbdf4:
    // 0x1dbdf4: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1dbdf8:
    if (ctx->pc == 0x1DBDF8u) {
        ctx->pc = 0x1DBDFCu;
        goto label_1dbdfc;
    }
    ctx->pc = 0x1DBDF4u;
    {
        const bool branch_taken_0x1dbdf4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbdf4) {
            ctx->pc = 0x1DBE1Cu;
            goto label_1dbe1c;
        }
    }
    ctx->pc = 0x1DBDFCu;
label_1dbdfc:
    // 0x1dbdfc: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1dbdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_1dbe00:
    // 0x1dbe00: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1dbe00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1dbe04:
    // 0x1dbe04: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1dbe08:
    if (ctx->pc == 0x1DBE08u) {
        ctx->pc = 0x1DBE0Cu;
        goto label_1dbe0c;
    }
    ctx->pc = 0x1DBE04u;
    {
        const bool branch_taken_0x1dbe04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbe04) {
            ctx->pc = 0x1DBE14u;
            goto label_1dbe14;
        }
    }
    ctx->pc = 0x1DBE0Cu;
label_1dbe0c:
    // 0x1dbe0c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1dbe10:
    if (ctx->pc == 0x1DBE10u) {
        ctx->pc = 0x1DBE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBE0Cu;
        // 0x1dbe10: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBE14u;
        goto label_1dbe14;
    }
    ctx->pc = 0x1DBE0Cu;
    {
        const bool branch_taken_0x1dbe0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBE0Cu;
        // 0x1dbe10: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbe0c) {
            ctx->pc = 0x1DBE1Cu;
            goto label_1dbe1c;
        }
    }
    ctx->pc = 0x1DBE14u;
label_1dbe14:
    // 0x1dbe14: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1dbe14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1dbe18:
    // 0x1dbe18: 0xaf828cc0  sw          $v0, -0x7340($gp)
    ctx->pc = 0x1dbe18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
label_1dbe1c:
    // 0x1dbe1c: 0x0  nop
    ctx->pc = 0x1dbe1cu;
    // NOP
label_1dbe20:
    // 0x1dbe20: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1dbe20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1dbe24:
    // 0x1dbe24: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
label_1dbe28:
    if (ctx->pc == 0x1DBE28u) {
        ctx->pc = 0x1DBE2Cu;
        goto label_1dbe2c;
    }
    ctx->pc = 0x1DBE24u;
    {
        const bool branch_taken_0x1dbe24 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1dbe24) {
            ctx->pc = 0x1DBE48u;
            goto label_1dbe48;
        }
    }
    ctx->pc = 0x1DBE2Cu;
label_1dbe2c:
    // 0x1dbe2c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1dbe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1dbe30:
    // 0x1dbe30: 0xaf828cb0  sw          $v0, -0x7350($gp)
    ctx->pc = 0x1dbe30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 2));
label_1dbe34:
    // 0x1dbe34: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1dbe34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1dbe38:
    // 0x1dbe38: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1dbe3c:
    if (ctx->pc == 0x1DBE3Cu) {
        ctx->pc = 0x1DBE40u;
        goto label_1dbe40;
    }
    ctx->pc = 0x1DBE38u;
    {
        const bool branch_taken_0x1dbe38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dbe38) {
            ctx->pc = 0x1DBE48u;
            goto label_1dbe48;
        }
    }
    ctx->pc = 0x1DBE40u;
label_1dbe40:
    // 0x1dbe40: 0x8f828ca8  lw          $v0, -0x7358($gp)
    ctx->pc = 0x1dbe40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937768)));
label_1dbe44:
    // 0x1dbe44: 0xaf828cb4  sw          $v0, -0x734C($gp)
    ctx->pc = 0x1dbe44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937780), GPR_U32(ctx, 2));
label_1dbe48:
    // 0x1dbe48: 0xc077a7c  jal         func_1DE9F0
label_1dbe4c:
    if (ctx->pc == 0x1DBE4Cu) {
        ctx->pc = 0x1DBE50u;
        goto label_1dbe50;
    }
    ctx->pc = 0x1DBE48u;
    SET_GPR_U32(ctx, 31, 0x1DBE50u);
    ctx->pc = 0x1DE9F0u;
    { ctx->pc = 0x1de9f0; return; }
    ctx->pc = 0x1DBE50u;
label_1dbe50:
    // 0x1dbe50: 0x8f848ca0  lw          $a0, -0x7360($gp)
    ctx->pc = 0x1dbe50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937760)));
label_1dbe54:
    // 0x1dbe54: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1dbe54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1dbe58:
    // 0x1dbe58: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
label_1dbe5c:
    if (ctx->pc == 0x1DBE5Cu) {
        ctx->pc = 0x1DBE60u;
        goto label_1dbe60;
    }
    ctx->pc = 0x1DBE58u;
    {
        const bool branch_taken_0x1dbe58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1dbe58) {
            ctx->pc = 0x1DBEDCu;
            goto label_1dbedc;
        }
    }
    ctx->pc = 0x1DBE60u;
label_1dbe60:
    // 0x1dbe60: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1dbe60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1dbe64:
    // 0x1dbe64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dbe64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dbe68:
    // 0x1dbe68: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_1dbe6c:
    if (ctx->pc == 0x1DBE6Cu) {
        ctx->pc = 0x1DBE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBE68u;
        // 0x1dbe6c: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBE70u;
        goto label_1dbe70;
    }
    ctx->pc = 0x1DBE68u;
    {
        const bool branch_taken_0x1dbe68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DBE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBE68u;
        // 0x1dbe6c: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbe68) {
            ctx->pc = 0x1DBE8Cu;
            goto label_1dbe8c;
        }
    }
    ctx->pc = 0x1DBE70u;
label_1dbe70:
    // 0x1dbe70: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1dbe70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1dbe74:
    // 0x1dbe74: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x1dbe74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_1dbe78:
    // 0x1dbe78: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_1dbe7c:
    if (ctx->pc == 0x1DBE7Cu) {
        ctx->pc = 0x1DBE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBE78u;
        // 0x1dbe7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBE80u;
        goto label_1dbe80;
    }
    ctx->pc = 0x1DBE78u;
    {
        const bool branch_taken_0x1dbe78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DBE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBE78u;
        // 0x1dbe7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbe78) {
            ctx->pc = 0x1DBEDCu;
            goto label_1dbedc;
        }
    }
    ctx->pc = 0x1DBE80u;
label_1dbe80:
    // 0x1dbe80: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1dbe80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1dbe84:
    // 0x1dbe84: 0x10000015  b           . + 4 + (0x15 << 2)
label_1dbe88:
    if (ctx->pc == 0x1DBE88u) {
        ctx->pc = 0x1DBE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBE84u;
        // 0x1dbe88: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBE8Cu;
        goto label_1dbe8c;
    }
    ctx->pc = 0x1DBE84u;
    {
        const bool branch_taken_0x1dbe84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBE84u;
        // 0x1dbe88: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbe84) {
            ctx->pc = 0x1DBEDCu;
            goto label_1dbedc;
        }
    }
    ctx->pc = 0x1DBE8Cu;
label_1dbe8c:
    // 0x1dbe8c: 0x0  nop
    ctx->pc = 0x1dbe8cu;
    // NOP
label_1dbe90:
    // 0x1dbe90: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1dbe90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dbe94:
    // 0x1dbe94: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
label_1dbe98:
    if (ctx->pc == 0x1DBE98u) {
        ctx->pc = 0x1DBE9Cu;
        goto label_1dbe9c;
    }
    ctx->pc = 0x1DBE94u;
    {
        const bool branch_taken_0x1dbe94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dbe94) {
            ctx->pc = 0x1DBEB8u;
            goto label_1dbeb8;
        }
    }
    ctx->pc = 0x1DBE9Cu;
label_1dbe9c:
    // 0x1dbe9c: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1dbe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1dbea0:
    // 0x1dbea0: 0x28420030  slti        $v0, $v0, 0x30
    ctx->pc = 0x1dbea0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
label_1dbea4:
    // 0x1dbea4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1dbea8:
    if (ctx->pc == 0x1DBEA8u) {
        ctx->pc = 0x1DBEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBEA4u;
        // 0x1dbea8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBEACu;
        goto label_1dbeac;
    }
    ctx->pc = 0x1DBEA4u;
    {
        const bool branch_taken_0x1dbea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DBEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBEA4u;
        // 0x1dbea8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbea4) {
            ctx->pc = 0x1DBEDCu;
            goto label_1dbedc;
        }
    }
    ctx->pc = 0x1DBEACu;
label_1dbeac:
    // 0x1dbeac: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1dbeacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1dbeb0:
    // 0x1dbeb0: 0x1000000a  b           . + 4 + (0xA << 2)
label_1dbeb4:
    if (ctx->pc == 0x1DBEB4u) {
        ctx->pc = 0x1DBEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBEB0u;
        // 0x1dbeb4: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBEB8u;
        goto label_1dbeb8;
    }
    ctx->pc = 0x1DBEB0u;
    {
        const bool branch_taken_0x1dbeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBEB0u;
        // 0x1dbeb4: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbeb0) {
            ctx->pc = 0x1DBEDCu;
            goto label_1dbedc;
        }
    }
    ctx->pc = 0x1DBEB8u;
label_1dbeb8:
    // 0x1dbeb8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1dbeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1dbebc:
    // 0x1dbebc: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
label_1dbec0:
    if (ctx->pc == 0x1DBEC0u) {
        ctx->pc = 0x1DBEC4u;
        goto label_1dbec4;
    }
    ctx->pc = 0x1DBEBCu;
    {
        const bool branch_taken_0x1dbebc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dbebc) {
            ctx->pc = 0x1DBEDCu;
            goto label_1dbedc;
        }
    }
    ctx->pc = 0x1DBEC4u;
label_1dbec4:
    // 0x1dbec4: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1dbec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1dbec8:
    // 0x1dbec8: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x1dbec8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_1dbecc:
    // 0x1dbecc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1dbed0:
    if (ctx->pc == 0x1DBED0u) {
        ctx->pc = 0x1DBED4u;
        goto label_1dbed4;
    }
    ctx->pc = 0x1DBECCu;
    {
        const bool branch_taken_0x1dbecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dbecc) {
            ctx->pc = 0x1DBEDCu;
            goto label_1dbedc;
        }
    }
    ctx->pc = 0x1DBED4u;
label_1dbed4:
    // 0x1dbed4: 0xaf838ca0  sw          $v1, -0x7360($gp)
    ctx->pc = 0x1dbed4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 3));
label_1dbed8:
    // 0x1dbed8: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1dbed8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1dbedc:
    // 0x1dbedc: 0x0  nop
    ctx->pc = 0x1dbedcu;
    // NOP
label_1dbee0:
    // 0x1dbee0: 0xc07a9d8  jal         func_1EA760
label_1dbee4:
    if (ctx->pc == 0x1DBEE4u) {
        ctx->pc = 0x1DBEE8u;
        goto label_1dbee8;
    }
    ctx->pc = 0x1DBEE0u;
    SET_GPR_U32(ctx, 31, 0x1DBEE8u);
    ctx->pc = 0x1EA760u;
    { ctx->pc = 0x1ea760; return; }
    ctx->pc = 0x1DBEE8u;
label_1dbee8:
    // 0x1dbee8: 0xc04e168  jal         func_1385A0
label_1dbeec:
    if (ctx->pc == 0x1DBEECu) {
        ctx->pc = 0x1DBEF0u;
        goto label_1dbef0;
    }
    ctx->pc = 0x1DBEE8u;
    SET_GPR_U32(ctx, 31, 0x1DBEF0u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x1DBEE8u, 0x1DBEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBEF0u;
label_1dbef0:
    // 0x1dbef0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1dbef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_1dbef4:
    // 0x1dbef4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1dbef4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1dbef8:
    // 0x1dbef8: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x1dbef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_1dbefc:
    // 0x1dbefc: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1dbefcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1dbf00:
    // 0x1dbf00: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1dbf00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1dbf04:
    // 0x1dbf04: 0x27828ce0  addiu       $v0, $gp, -0x7320
    ctx->pc = 0x1dbf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937824));
label_1dbf08:
    // 0x1dbf08: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1dbf08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1dbf0c:
    // 0x1dbf0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dbf0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dbf10:
    // 0x1dbf10: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dbf10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dbf14:
    // 0x1dbf14: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1dbf14u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1dbf18:
    // 0x1dbf18: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dbf18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dbf1c:
    // 0x1dbf1c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1dbf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1dbf20:
    // 0x1dbf20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dbf20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dbf24:
    // 0x1dbf24: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dbf24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dbf28:
    // 0x1dbf28: 0xc066c72  jal         func_19B1C8
label_1dbf2c:
    if (ctx->pc == 0x1DBF2Cu) {
        ctx->pc = 0x1DBF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBF28u;
        // 0x1dbf2c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBF30u;
        goto label_1dbf30;
    }
    ctx->pc = 0x1DBF28u;
    SET_GPR_U32(ctx, 31, 0x1DBF30u);
    ctx->pc = 0x1DBF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBF28u;
    // 0x1dbf2c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1DBF28u, 0x1DBF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBF30u;
label_1dbf30:
    // 0x1dbf30: 0xc077e84  jal         func_1DFA10
label_1dbf34:
    if (ctx->pc == 0x1DBF34u) {
        ctx->pc = 0x1DBF38u;
        goto label_1dbf38;
    }
    ctx->pc = 0x1DBF30u;
    SET_GPR_U32(ctx, 31, 0x1DBF38u);
    ctx->pc = 0x1DFA10u;
    { ctx->pc = 0x1dfa10; return; }
    ctx->pc = 0x1DBF38u;
label_1dbf38:
    // 0x1dbf38: 0xc077d90  jal         func_1DF640
label_1dbf3c:
    if (ctx->pc == 0x1DBF3Cu) {
        ctx->pc = 0x1DBF40u;
        goto label_1dbf40;
    }
    ctx->pc = 0x1DBF38u;
    SET_GPR_U32(ctx, 31, 0x1DBF40u);
    ctx->pc = 0x1DF640u;
    { ctx->pc = 0x1df640; return; }
    ctx->pc = 0x1DBF40u;
label_1dbf40:
    // 0x1dbf40: 0xc077ab4  jal         func_1DEAD0
label_1dbf44:
    if (ctx->pc == 0x1DBF44u) {
        ctx->pc = 0x1DBF48u;
        goto label_1dbf48;
    }
    ctx->pc = 0x1DBF40u;
    SET_GPR_U32(ctx, 31, 0x1DBF48u);
    ctx->pc = 0x1DEAD0u;
    { ctx->pc = 0x1dead0; return; }
    ctx->pc = 0x1DBF48u;
label_1dbf48:
    // 0x1dbf48: 0xc077880  jal         func_1DE200
label_1dbf4c:
    if (ctx->pc == 0x1DBF4Cu) {
        ctx->pc = 0x1DBF50u;
        goto label_1dbf50;
    }
    ctx->pc = 0x1DBF48u;
    SET_GPR_U32(ctx, 31, 0x1DBF50u);
    ctx->pc = 0x1DE200u;
    { ctx->pc = 0x1de200; return; }
    ctx->pc = 0x1DBF50u;
label_1dbf50:
    // 0x1dbf50: 0x8f828c8c  lw          $v0, -0x7374($gp)
    ctx->pc = 0x1dbf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937740)));
label_1dbf54:
    // 0x1dbf54: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_1dbf58:
    if (ctx->pc == 0x1DBF58u) {
        ctx->pc = 0x1DBF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBF54u;
        // 0x1dbf58: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBF5Cu;
        goto label_1dbf5c;
    }
    ctx->pc = 0x1DBF54u;
    {
        const bool branch_taken_0x1dbf54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBF54u;
        // 0x1dbf58: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbf54) {
            ctx->pc = 0x1DC028u;
            goto label_1dc028;
        }
    }
    ctx->pc = 0x1DBF5Cu;
label_1dbf5c:
    // 0x1dbf5c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1dbf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1dbf60:
    // 0x1dbf60: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1dbf60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1dbf64:
    // 0x1dbf64: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1dbf64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1dbf68:
    // 0x1dbf68: 0x27828c90  addiu       $v0, $gp, -0x7370
    ctx->pc = 0x1dbf68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937744));
label_1dbf6c:
    // 0x1dbf6c: 0x2406027a  addiu       $a2, $zero, 0x27A
    ctx->pc = 0x1dbf6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 634));
label_1dbf70:
    // 0x1dbf70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dbf70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dbf74:
    // 0x1dbf74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dbf74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dbf78:
    // 0x1dbf78: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1dbf78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dbf7c:
    // 0x1dbf7c: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1dbf7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1dbf80:
    // 0x1dbf80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dbf80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dbf84:
    // 0x1dbf84: 0x858821  addu        $s1, $a0, $a1
    ctx->pc = 0x1dbf84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1dbf88:
    // 0x1dbf88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dbf88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dbf8c:
    // 0x1dbf8c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dbf8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dbf90:
    // 0x1dbf90: 0xc066c72  jal         func_19B1C8
label_1dbf94:
    if (ctx->pc == 0x1DBF94u) {
        ctx->pc = 0x1DBF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBF90u;
        // 0x1dbf94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBF98u;
        goto label_1dbf98;
    }
    ctx->pc = 0x1DBF90u;
    SET_GPR_U32(ctx, 31, 0x1DBF98u);
    ctx->pc = 0x1DBF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBF90u;
    // 0x1dbf94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1DBF90u, 0x1DBF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBF98u;
label_1dbf98:
    // 0x1dbf98: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1dbf98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1dbf9c:
    // 0x1dbf9c: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1dbf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1dbfa0:
    // 0x1dbfa0: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1dbfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1dbfa4:
    // 0x1dbfa4: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1dbfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1dbfa8:
    // 0x1dbfa8: 0x8f848c80  lw          $a0, -0x7380($gp)
    ctx->pc = 0x1dbfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937728)));
label_1dbfac:
    // 0x1dbfac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dbfacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dbfb0:
    // 0x1dbfb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dbfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dbfb4:
    // 0x1dbfb4: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x1dbfb4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dbfb8:
    // 0x1dbfb8: 0xc070e2c  jal         func_1C38B0
label_1dbfbc:
    if (ctx->pc == 0x1DBFBCu) {
        ctx->pc = 0x1DBFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBFB8u;
        // 0x1dbfbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBFC0u;
        goto label_1dbfc0;
    }
    ctx->pc = 0x1DBFB8u;
    SET_GPR_U32(ctx, 31, 0x1DBFC0u);
    ctx->pc = 0x1DBFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBFB8u;
    // 0x1dbfbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1DBFC0u;
label_1dbfc0:
    // 0x1dbfc0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1dbfc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1dbfc4:
    // 0x1dbfc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dbfc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dbfc8:
    // 0x1dbfc8: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1dbfc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1dbfcc:
    // 0x1dbfcc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dbfccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dbfd0:
    // 0x1dbfd0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dbfd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dbfd4:
    // 0x1dbfd4: 0xc066c72  jal         func_19B1C8
label_1dbfd8:
    if (ctx->pc == 0x1DBFD8u) {
        ctx->pc = 0x1DBFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBFD4u;
        // 0x1dbfd8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBFDCu;
        goto label_1dbfdc;
    }
    ctx->pc = 0x1DBFD4u;
    SET_GPR_U32(ctx, 31, 0x1DBFDCu);
    ctx->pc = 0x1DBFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBFD4u;
    // 0x1dbfd8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1DBFD4u, 0x1DBFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBFDCu;
label_1dbfdc:
    // 0x1dbfdc: 0x8f828c88  lw          $v0, -0x7378($gp)
    ctx->pc = 0x1dbfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937736)));
label_1dbfe0:
    // 0x1dbfe0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1dbfe4:
    if (ctx->pc == 0x1DBFE4u) {
        ctx->pc = 0x1DBFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBFE0u;
        // 0x1dbfe4: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBFE8u;
        goto label_1dbfe8;
    }
    ctx->pc = 0x1DBFE0u;
    {
        const bool branch_taken_0x1dbfe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBFE0u;
        // 0x1dbfe4: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbfe0) {
            ctx->pc = 0x1DC028u;
            goto label_1dc028;
        }
    }
    ctx->pc = 0x1DBFE8u;
label_1dbfe8:
    // 0x1dbfe8: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1dbfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1dbfec:
    // 0x1dbfec: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1dbfecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1dbff0:
    // 0x1dbff0: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1dbff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1dbff4:
    // 0x1dbff4: 0x8f848c84  lw          $a0, -0x737C($gp)
    ctx->pc = 0x1dbff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937732)));
label_1dbff8:
    // 0x1dbff8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dbff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dbffc:
    // 0x1dbffc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dbffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dc000:
    // 0x1dc000: 0x8c540008  lw          $s4, 0x8($v0)
    ctx->pc = 0x1dc000u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1dc004:
    // 0x1dc004: 0xc070e2c  jal         func_1C38B0
label_1dc008:
    if (ctx->pc == 0x1DC008u) {
        ctx->pc = 0x1DC008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC004u;
        // 0x1dc008: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC00Cu;
        goto label_1dc00c;
    }
    ctx->pc = 0x1DC004u;
    SET_GPR_U32(ctx, 31, 0x1DC00Cu);
    ctx->pc = 0x1DC008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC004u;
    // 0x1dc008: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1DC00Cu;
label_1dc00c:
    // 0x1dc00c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dc00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dc010:
    // 0x1dc010: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1dc010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1dc014:
    // 0x1dc014: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1dc014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1dc018:
    // 0x1dc018: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dc018u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc01c:
    // 0x1dc01c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dc01cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc020:
    // 0x1dc020: 0xc066c72  jal         func_19B1C8
label_1dc024:
    if (ctx->pc == 0x1DC024u) {
        ctx->pc = 0x1DC024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC020u;
        // 0x1dc024: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC028u;
        goto label_1dc028;
    }
    ctx->pc = 0x1DC020u;
    SET_GPR_U32(ctx, 31, 0x1DC028u);
    ctx->pc = 0x1DC024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC020u;
    // 0x1dc024: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1DC020u, 0x1DC028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC028u;
label_1dc028:
    // 0x1dc028: 0xc07a86c  jal         func_1EA1B0
label_1dc02c:
    if (ctx->pc == 0x1DC02Cu) {
        ctx->pc = 0x1DC030u;
        goto label_1dc030;
    }
    ctx->pc = 0x1DC028u;
    SET_GPR_U32(ctx, 31, 0x1DC030u);
    ctx->pc = 0x1EA1B0u;
    { ctx->pc = 0x1ea1b0; return; }
    ctx->pc = 0x1DC030u;
label_1dc030:
    // 0x1dc030: 0xc04e120  jal         func_138480
label_1dc034:
    if (ctx->pc == 0x1DC034u) {
        ctx->pc = 0x1DC038u;
        goto label_1dc038;
    }
    ctx->pc = 0x1DC030u;
    SET_GPR_U32(ctx, 31, 0x1DC038u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x1DC030u, 0x1DC038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC038u;
label_1dc038:
    // 0x1dc038: 0xc05b578  jal         func_16D5E0
label_1dc03c:
    if (ctx->pc == 0x1DC03Cu) {
        ctx->pc = 0x1DC03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC038u;
        // 0x1dc03c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC040u;
        goto label_1dc040;
    }
    ctx->pc = 0x1DC038u;
    SET_GPR_U32(ctx, 31, 0x1DC040u);
    ctx->pc = 0x1DC03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC038u;
    // 0x1dc03c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1DC038u, 0x1DC040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC040u;
label_1dc040:
    // 0x1dc040: 0xc060258  jal         func_180960
label_1dc044:
    if (ctx->pc == 0x1DC044u) {
        ctx->pc = 0x1DC048u;
        goto label_1dc048;
    }
    ctx->pc = 0x1DC040u;
    SET_GPR_U32(ctx, 31, 0x1DC048u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1DC040u, 0x1DC048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC048u;
label_1dc048:
    // 0x1dc048: 0x1000fdc4  b           . + 4 + (-0x23C << 2)
label_1dc04c:
    if (ctx->pc == 0x1DC04Cu) {
        ctx->pc = 0x1DC050u;
        { ctx->pc = 0x1dc050; return; }
    }
    ctx->pc = 0x1DC048u;
    {
        const bool branch_taken_0x1dc048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc048) {
            ctx->pc = 0x1DB75Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1db75c; return; }
        }
    }
    ctx->pc = 0x1DC050u;
    ctx->pc = 0x1dc050u;
    return;
}
