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

// Function: entry_00111018
// Address: 0x111018 - 0x11102c
void entry_00111018_0x111018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111018_0x111018");
#endif

    ctx->pc = 0x111018u;

    // 0x111018: 0xcfc021  addu        $t8, $a2, $t7
    ctx->pc = 0x111018u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 15)));
    // 0x11101c: 0x93110000  lbu         $s1, 0x0($t8)
    ctx->pc = 0x11101cu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x111020: 0x16300002  bne         $s1, $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x111020u;
    {
        const bool branch_taken_0x111020 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        if (branch_taken_0x111020) {
            ctx->pc = 0x11102Cu;
            return;
        }
    }
    ctx->pc = 0x111028u;
    // 0x111028: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x111028u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11102cu;
}
