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

// Function: entry_00132970
// Address: 0x132970 - 0x132984
void entry_00132970_0x132970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132970_0x132970");
#endif

    ctx->pc = 0x132970u;

    // 0x132970: 0x127202a  slt         $a0, $t1, $a3
    ctx->pc = 0x132970u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x132974: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x132974u;
    {
        const bool branch_taken_0x132974 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x132974) {
            ctx->pc = 0x132954u;
            return;
        }
    }
    ctx->pc = 0x13297Cu;
    // 0x13297c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x13297cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132980: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x132980u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    ctx->pc = 0x132984u;
}
